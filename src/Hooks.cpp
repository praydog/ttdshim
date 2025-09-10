#include <memory>
#include <spdlog/spdlog.h>
#include <intrin.h>

#include <safetyhook.hpp>
#include <xbyak/xbyak.h>
#include <utility/PDB.hpp>
#include <utility/Scan.hpp>

#include "Hooks.hpp"

namespace ttd::hooks {
bool initialized = false;

// Creates unique shellcode for each hook so we can print the names of each hooked function
// as they're called.
class MidHooker : public Xbyak::CodeGenerator {
public:
    using MidHookFn = void (*)(safetyhook::Context& ctx, MidHooker& self);

    MidHooker(void* target, void* detour, const std::string& name)
        : m_name(name)
    {
        spdlog::info("Hooking function: {} at {:x}", name, (uintptr_t)target);

        // Use immediate addressing to avoid 64-bit displacement issues
        mov(rdx, (uintptr_t)this);
        mov(rax, (uintptr_t)detour);
        jmp(rax);

        auto code = getCode<safetyhook::MidHookFn>();

        if (code == nullptr) {
            throw std::runtime_error("Failed to generate hook code for function: " + name);
        }

        m_hook = safetyhook::create_mid(
            target,
            code);
    }

    const safetyhook::MidHook& hook() const {
        return m_hook;
    }

    const std::string& name() const {
        return m_name;
    }

    bool trigger_called() {
        bool prev = m_called;
        m_called = true;
        return prev;
    }

private:
    safetyhook::MidHook m_hook{};
    std::string m_name{};
    bool m_called{false};
};

std::vector<std::unique_ptr<MidHooker>> g_mid_hooks{};
safetyhook::InlineHook g_realize_flags_hook{};
safetyhook::InlineHook g_virtualize_flags_hook{};

void* realize_flags(uintptr_t rcx, uintptr_t rdx) {
    const auto idx = *(uint8_t*)(rdx + 0x13);
    auto& f12d8 = *(uint32_t*)(rcx + 0xF12D8);
    auto& f1380 = *(uint32_t*)(rcx + 0xF1380);
    spdlog::info("realize_flags idx: {}", idx);
    spdlog::info("realize_flags f12d8: {} ({:X})", f12d8, f12d8);
    spdlog::info("realize_flags f1380: {} ({:X})", f1380, f1380);

    auto result = g_virtualize_flags_hook.call<void*>(rcx, rdx);
    spdlog::info("realize_flags f1380 after call: {} ({:X})", f1380, f1380);

    return result;
}

void* virtualize_flags(uintptr_t rcx, uintptr_t rdx) {
    const auto idx = *(uint8_t*)(rdx + 0x13);
    auto& f1380 = *(uint32_t*)(rcx + 0xF1380);
    spdlog::info("virtualize_flags idx: {}", idx);
    spdlog::info("virtualize_flags f1380: {} ({:X})", f1380, f1380);

    auto result = g_virtualize_flags_hook.call<void*>(rcx, rdx);
    spdlog::info("virtualize_flags f1380 after call: {} ({:X})", f1380, f1380);

    return result;
}

void initialize(void* original_dll) {
    if (initialized) {
        return;
    }

    initialized = true;

    auto symbols = utility::pdb::get_symbol_map((uint8_t*)original_dll);

    if (symbols.empty()) {
        spdlog::error("Failed to load symbols from original DLL");
        return;
    }

    std::unordered_set<std::string> ignored_functions {
        "public: __cdecl TTD::StlbEntry<32>::StlbEntry<32>(void) __ptr64",
        "free"
    };

    for (const auto [rva, name] : symbols) try {
        if (ignored_functions.find(name) != ignored_functions.end()) {
            spdlog::info("Ignoring function: {}", name);
            continue;
        }

        if (!name.contains("REALIZEFLAGS") && !name.contains("VIRTUALIZEFLAGS") && !name.contains("Trap")) {
            continue;
        }

        if (name.contains("REALIZEFLAGS")) {
            g_realize_flags_hook = safetyhook::create_inline(
                (void*)((uintptr_t)original_dll + rva),
                (void*)realize_flags);

            continue;
        }

        if (name.contains("VIRTUALIZEFLAGS")) {
            g_virtualize_flags_hook = safetyhook::create_inline(
                (void*)((uintptr_t)original_dll + rva),
                (void*)virtualize_flags);
            
            continue;
        }

        const auto absolute = (uint8_t*)original_dll + rva;
        // check if 0xCC precedes (means it's definitely a function)
        if (*(uint8_t*)(absolute - 1) != 0xCC) {
            continue;
        }

        // skip fns that start with e9, e8, or are just returning
        if (*absolute == 0xE9 || *absolute == 0xE8 || *absolute == 0xC3 || *absolute == 0xC2 || *absolute == 0xCC) {
            spdlog::warn("Skipping function: {} at {:x} (starts with {:x})", name, (uintptr_t)absolute, *absolute);
            continue;
        }

        // disasm first nad make sure first instruction is not rip relative immediately
        const auto disasm = utility::decode_one(absolute);

        if (!disasm) {
            spdlog::warn("Skipping function: {} at {:x} (failed to disasm)", name, (uintptr_t)absolute);
            continue;
        }

        if (disasm->IsRipRelative) {
            spdlog::warn("Skipping function: {} at {:x} (first instruction is rip relative)", name, (uintptr_t)absolute);
            continue;
        }

        // make sure function length >= 16
        size_t len = 0;

        utility::exhaustive_decode(absolute, 100, [&len](utility::ExhaustionContext& ctx) -> utility::ExhaustionResult {
            len += ctx.instrux.Length;
            if (std::string_view{ctx.instrux.Mnemonic}.starts_with("CALL")) {
                return utility::ExhaustionResult::STEP_OVER;            
            }

            return utility::ExhaustionResult::CONTINUE;
        });

        if (len < 32) {
            spdlog::warn("Skipping function: {} at {:x} (length too short: {})", name, (uintptr_t)absolute, len);
            continue;
        }

        spdlog::info("Hooking function: {} at {:x}", name, (uintptr_t)absolute);

        auto mid_hooker = std::make_unique<MidHooker>(
            (void*)absolute,
            (void*)+[](safetyhook::Context& ctx, MidHooker& self) {
                //if (!self.trigger_called()) {
                    spdlog::info("First time in hook for function: {} at {:p}", self.name(), (void*)ctx.rip);
                //}

                if (self.name().contains("REALIZEFLAGS")) {
                    const auto idx = *(uint8_t*)(ctx.rdx + 0x13);
                    auto& f1380 = *(uint32_t*)(ctx.rcx + 0xF12D8);
                    spdlog::info("REALIZEFLAGS idx: {}", idx);
                    spdlog::info("REALIZEFLAGS f1380: {} ({:X})", f1380, f1380);
                }

                if (self.name().contains("VIRTUALIZEFLAGS")) {
                    const auto idx = *(uint8_t*)(ctx.rdx + 0x13);
                    auto& f1380 = *(uint32_t*)(ctx.rcx + 0xF1380);
                    spdlog::info("VIRTUALIZEFLAGS idx: {}", idx);
                    spdlog::info("VIRTUALIZEFLAGS f1380: {} ({:X})", f1380, f1380);
                }

                __nop();
            },
            name);
        g_mid_hooks.push_back(std::move(mid_hooker));
    } catch (const std::exception& e) {
        spdlog::error("Error hooking function {}: {}", name, e.what());
    } catch (...) {
        spdlog::error("Unknown error hooking function {}", name);
    }
}
}