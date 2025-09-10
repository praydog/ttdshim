#include <memory>
#include <spdlog/spdlog.h>
#include <intrin.h>

#include <Windows.h>

#include <safetyhook.hpp>
#include <xbyak/xbyak.h>
#include <utility/PDB.hpp>
#include <utility/Scan.hpp>

#include "Hooks.hpp"

typedef struct _PROCESS_INSTRUMENTATION_CALLBACK_INFORMATION
{
    ULONG Version;
    ULONG Reserved;
    PVOID Callback;
} PROCESS_INSTRUMENTATION_CALLBACK_INFORMATION, *PPROCESS_INSTRUMENTATION_CALLBACK_INFORMATION;

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
safetyhook::InlineHook g_unhandled_exception_filter_hook{};
safetyhook::InlineHook g_rtl_dispatch_exception_hook{};
safetyhook::InlineHook g_nt_set_information_process_hook{};
safetyhook::InlineHook g_nt_set_information_thread_hook{};
safetyhook::InlineHook g_before_syscall_hook{};

struct ttd_regs_t {
    uint64_t &rip() {return *(uint64_t*)((uintptr_t)this + 0x68); }
    uint64_t &teb() {return *(uint64_t*)((uintptr_t)this + 0x70); }
};

struct ttd_thread_info_t {

    ttd_regs_t* regs() {
        return (ttd_regs_t*)((uintptr_t)this + 0x48);
    }

};

uint64_t before_syscall(ttd_thread_info_t* thread_info, uint64_t a2) {
    spdlog::info("before_syscall called with a2: {:X}", a2);
    return g_before_syscall_hook.call<uint64_t>(thread_info, a2);
}

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

void __stdcall rtl_dispatch_exception(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord) {
    uintptr_t ip = ContextRecord->Rip;

    //MessageBoxA(NULL, "Caught exception in RtlDispatchException", "Info", MB_OK);

    // If we are pointing to an int 3, and the next three bytes are 0xBA 0xBE 0xEF, we need to increment the ip by 4 and update exception address, otherwise do nothing
    if (*(uint8_t*)ip == 0xCC && *(uint8_t*)(ip + 1) == 0xBA && *(uint8_t*)(ip + 2) == 0xBE && *(uint8_t*)(ip + 3) == 0x90) {
        ContextRecord->Rip += 3;
        ExceptionRecord->ExceptionAddress = (PVOID)ContextRecord->Rip;
        spdlog::info("Skipping int 3 in RtlDispatchException at address: {:X}", ip);
    } else {
        spdlog::info("Unhandled exception in RtlDispatchException at address: {:X}", ip);
    }

    // call the original function
    g_rtl_dispatch_exception_hook.call<decltype(&rtl_dispatch_exception)>(ExceptionRecord, ContextRecord);
}

LONG __stdcall nt_set_information_process_hook(
    HANDLE ProcessHandle,
    int ProcessInformationClass,
    PVOID ProcessInformation,
    ULONG ProcessInformationLength
) {
    if (ProcessInformationClass == 40) {
        auto info = (PPROCESS_INSTRUMENTATION_CALLBACK_INFORMATION)ProcessInformation;
        if (info->Callback == NULL) {
            spdlog::info("Blocking ProcessInstrumentationCallback with NULL callback");
            return 0; // STATUS_SUCCESS
        }
    }
    return g_nt_set_information_process_hook.call<LONG>(ProcessHandle, ProcessInformationClass, ProcessInformation, ProcessInformationLength);
}

LONG __stdcall nt_set_information_thread_hook(
    HANDLE ThreadHandle,
    int ThreadInformationClass,
    PVOID ThreadInformation,
    ULONG ThreadInformationLength
) {
    if (ThreadInformationClass == 17) { // ThreadHideFromDebugger
        spdlog::info("Blocking ThreadHideFromDebugger");
        return 0; // STATUS_SUCCESS
    }
    return g_nt_set_information_thread_hook.call<LONG>(ThreadHandle, ThreadInformationClass, ThreadInformation, ThreadInformationLength);
}

void initialize(void* original_dll) {
    if (initialized) {
        return;
    }

    initialized = true;

    // Hook RtlDispatchException from ntdll
    auto ntdll = GetModuleHandleA("ntdll.dll");
    if (ntdll) {
        auto ntdll_symbols = utility::pdb::get_symbol_map((uint8_t*)ntdll);
        for (const auto [rva, name] : ntdll_symbols) {
            if (name == "NtSetInformationProcess") {
                spdlog::info("Hooking NtSetInformationProcess at RVA {:x}", rva);
                g_nt_set_information_process_hook = safetyhook::create_inline(
                    (void*)((uintptr_t)ntdll + rva),
                    (void*)nt_set_information_process_hook);
            }
            if (name == "NtSetInformationThread") {
                spdlog::info("Hooking NtSetInformationThread at RVA {:x}", rva);
                g_nt_set_information_thread_hook = safetyhook::create_inline(
                    (void*)((uintptr_t)ntdll + rva),
                    (void*)nt_set_information_thread_hook);
            }
            if (name.contains("RtlDispatchException")) {
                MessageBoxA(NULL, "Setting RtlDispatchException hook", "Info", MB_OK);
                spdlog::info("Hooking RtlDispatchException at RVA {:x}", rva);
                g_rtl_dispatch_exception_hook = safetyhook::create_inline(
                    (void*)((uintptr_t)ntdll + rva),
                    (void*)rtl_dispatch_exception);
                break;
            }
        }
    }

    // Note: RunSyscall is available in the original DLL's symbol map; mid-hook it from there

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

        if (!name.contains("REALIZEFLAGS") && !name.contains("VIRTUALIZEFLAGS") && !name.contains("Trap") && !name.contains("UnhandledExceptionFilter") && !name.contains("RunSyscall") && !name.starts_with("TTD::")) {
            continue;
        }

        /* if (name == "UnhandledExceptionFilter") {
            MessageBoxA(NULL, "Setting UnhandledExceptionFilter hook", "Info", MB_OK);
            spdlog::info("Hooking UnhandledExceptionFilter at RVA {:x}", rva);
            g_unhandled_exception_filter_hook = safetyhook::create_inline(
                (void*)((uintptr_t)original_dll + rva),
                (void*)unhandled_exception_filter);
            continue;
        } */

        if (name.contains("REALIZEFLAGS")) {
           /*  g_realize_flags_hook = safetyhook::create_inline(
                (void*)((uintptr_t)original_dll + rva),
                (void*)realize_flags); */

            continue;
        }

        if (name.contains("VIRTUALIZEFLAGS")) {
           /*  g_virtualize_flags_hook = safetyhook::create_inline(
                (void*)((uintptr_t)original_dll + rva),
                (void*)virtualize_flags); */
            
            continue;
        }

        const auto absolute = (uint8_t*)original_dll + rva;

        // Install a mid-hook on RunSyscall to log registers
        if (name.contains("RunSyscall")) {
            spdlog::info("Setting mid-hook for RunSyscall at {:x}", (uintptr_t)absolute);
            auto mid_hooker = std::make_unique<MidHooker>(
                (void*)absolute,
                (void*)+[](safetyhook::Context& ctx, MidHooker& self) {
                    spdlog::info(
                        "RunSyscall rcx={:p} rdx={:p} r8={:p} r9={:p}",
                        (void*)ctx.rcx, (void*)ctx.rdx, (void*)ctx.r8, (void*)ctx.r9);
                },
                name);
            g_mid_hooks.push_back(std::move(mid_hooker));
            continue;
        }
        // check if 0xCC precedes (means it's definitely a function)
        if (*(uint8_t*)(absolute - 1) != 0xCC) {
            continue;
        }

        // skip fns that start with e9, e8, or are just returning
        if (*absolute == 0xE9 || *absolute == 0xE8 || *absolute == 0xC3 || *absolute == 0xC2 || *absolute == 0xCC) {
            spdlog::warn("Skipping function: {} at {:x} (starts with {:x})", name, (uintptr_t)absolute, *absolute);
            continue;
        }
/* 
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
        g_mid_hooks.push_back(std::move(mid_hooker)); */
    } catch (const std::exception& e) {
        spdlog::error("Error hooking function {}: {}", name, e.what());
    } catch (...) {
        spdlog::error("Unknown error hooking function {}", name);
    }
}
}