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

class MidHooker;

struct State {
    std::unordered_map<std::string, uintptr_t> g_inverse_symbol_map{};
    std::vector<std::unique_ptr<MidHooker>> g_mid_hooks{};
    safetyhook::InlineHook g_realize_flags_hook{};
    safetyhook::InlineHook g_virtualize_flags_hook{};
    safetyhook::InlineHook g_unhandled_exception_filter_hook{};
    safetyhook::InlineHook g_rtl_dispatch_exception_hook{};
    safetyhook::InlineHook g_nt_set_information_process_hook{};
    safetyhook::InlineHook g_nt_set_information_thread_hook{};
    safetyhook::InlineHook g_popf_hook{};
    safetyhook::InlineHook g_before_syscall_hook{};

    using HandleFn = void* (*)(uintptr_t rcx, uintptr_t rdx);
    HandleFn g_handle_int3 = nullptr;

    void* threadinfo_get_fn = nullptr;
    void* threadinfo_get_reg_fn = nullptr;
    void* threadinfo_set_reg_fn = nullptr;
};

std::unique_ptr<State> g_state{nullptr};

namespace TTD {
/*

00000048     DWORD64 Dr0;
00000050     DWORD64 Dr1;
00000058     DWORD64 Dr2;
00000060     DWORD64 Dr3;
00000068     DWORD64 Dr6;
00000070     DWORD64 Dr7;
00000078     DWORD64 Rax;
00000080     DWORD64 Rcx;                        // XREF: __report_gsfailure+BC/w
00000088     DWORD64 Rdx;
00000090     DWORD64 Rbx;
00000098     DWORD64 Rsp;                        // XREF: _invalid_parameter+92/w
00000098                                         // __report_gsfailure+9F/w ...
000000A0     DWORD64 Rbp;
000000A8     DWORD64 Rsi;
000000B0     DWORD64 Rdi;
000000B8     DWORD64 R8;
000000C0     DWORD64 R9;
000000C8     DWORD64 R10;
000000D0     DWORD64 R11;
000000D8     DWORD64 R12;
000000E0     DWORD64 R13;
000000E8     DWORD64 R14;
000000F0     DWORD64 R15;
*/

enum RegisterId : uint8_t {
    GprsBegin = 0,
    Dr0 = 0,
    Dr1 = 1,
    Dr2 = 2,
    Dr3 = 3,
    Dr6 = 4,
    Dr7 = 5,
    Rax = 6,
    Rcx = 7,
    Rdx = 8,
    Rbx = 9,
    Rsp = 10,
    Rbp = 11,
    Rsi = 12,
    Rdi = 13,
    R8 = 14,
    R9 = 15,
    R10 = 16,
    R11 = 17,
    R12 = 18,
    R13 = 19,
    R14 = 20,
    R15 = 21,
    Rip = 22,
    GprsLast = 22,
    SegCs = 23,
    SegDs = 24,
    SegEs = 25,
    SegFs = 26,
    SegGs = 27,
    SegSs = 28,
    UnkSize8 = 29,
    EFlags = 30,
};

static inline std::vector<std::string> register_names = {
    "Dr0",
    "Dr1",
    "Dr2",
    "Dr3",
    "Dr6",
    "Dr7",
    "Rax",
    "Rcx",
    "Rdx",
    "Rbx",
    "Rsp",
    "Rbp",
    "Rsi",
    "Rdi",
    "R8",
    "R9",
    "R10",
    "R11",
    "R12",
    "R13",
    "R14",
    "R15",
    "Rip",
    "SegCs",
    "SegDs",
    "SegEs",
    "SegFs",
    "SegGs",
    "SegSs",
    "UnkSize8",
    "EFlags"
};

struct ThreadInfo {
    static ThreadInfo* get(void* regs = nullptr) {
        //static auto fn = (ThreadInfo* (*)(void*))g_state->g_inverse_symbol_map["public: static struct TTD::ThreadInfo * __ptr64 __cdecl TTD::ThreadInfo::GetOrCreateForCurrentThread(struct TTD::X64REGS const * __ptr64)"];
        if (g_state->threadinfo_get_fn == nullptr) {
            g_state->threadinfo_get_fn = (void*)g_state->g_inverse_symbol_map["public: static struct TTD::ThreadInfo * __ptr64 __cdecl TTD::ThreadInfo::GetOrCreateForCurrentThread(struct TTD::X64REGS const * __ptr64)"];
        }

        auto fn = (ThreadInfo* (*)(void*))(g_state->threadinfo_get_fn);
        
        return fn(regs);
    }

    void* get_register(RegisterId id, void* out, size_t size) {
        /*static auto it = g_state->g_inverse_symbol_map.find("public: virtual void __cdecl TTD::ThreadInfo::GetRegister(struct TTD::RegisterId,void * __ptr64,unsigned __int64)const __ptr64");

        if (it == g_state->g_inverse_symbol_map.end()) {
            spdlog::error("Failed to find GetRegister symbol");
            return nullptr;
        }*/

        if (g_state->threadinfo_get_reg_fn == nullptr) {
            g_state->threadinfo_get_reg_fn = (void*)g_state->g_inverse_symbol_map["public: virtual void __cdecl TTD::ThreadInfo::GetRegister(struct TTD::RegisterId,void * __ptr64,unsigned __int64)const __ptr64"];
        }

        auto fn = (void* (*)(ThreadInfo*, RegisterId, void*, size_t))(g_state->threadinfo_get_reg_fn);

        return fn(this, id, out, size);
    }

    void* set_register(RegisterId id, const void* value, size_t size) {
        //static auto it = g_state->g_inverse_symbol_map.find("public: virtual void __cdecl TTD::ThreadInfo::SetRegister(struct TTD::RegisterId,void const * __ptr64,unsigned __int64) __ptr64");

        if (g_state->threadinfo_set_reg_fn == nullptr) {
            g_state->threadinfo_set_reg_fn = (void*)g_state->g_inverse_symbol_map["public: virtual void __cdecl TTD::ThreadInfo::SetRegister(struct TTD::RegisterId,void const * __ptr64,unsigned __int64) __ptr64"];
        }

        auto fn = (void* (*)(ThreadInfo*, RegisterId, const void*, size_t))(g_state->threadinfo_set_reg_fn);

        return fn(this, id, value, size);
    }

    template<typename T>
    T get_register_value(RegisterId id) {
        T value{};
        get_register(id, &value, sizeof(value));
        return value;
    }

    template<typename T>
    void set_register_value(RegisterId id, T value) {
        set_register(id, &value, sizeof(value));
    }
};
}

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

void* realize_flags(uintptr_t rcx, uintptr_t rdx) {
    const auto idx = *(uint8_t*)(rdx + 0x13);
    auto& f12d8 = *(uint32_t*)(rcx + 0xF12D8);
    auto& f1380 = *(uint32_t*)(rcx + 0xF1380);
    spdlog::info("realize_flags idx: {}", idx);
    spdlog::info("realize_flags f12d8: {} ({:X})", f12d8, f12d8);
    spdlog::info("realize_flags f1380: {} ({:X})", f1380, f1380);

    auto result = g_state->g_virtualize_flags_hook.call<void*>(rcx, rdx);
    spdlog::info("realize_flags f1380 after call: {} ({:X})", f1380, f1380);

    return result;
}

void* virtualize_flags(uintptr_t rcx, uintptr_t rdx) {
    const auto idx = *(uint8_t*)(rdx + 0x13);
    auto& f1380 = *(uint32_t*)(rcx + 0xF1380);
    spdlog::info("virtualize_flags idx: {}", idx);
    spdlog::info("virtualize_flags f1380: {} ({:X})", f1380, f1380);

    auto result = g_state->g_virtualize_flags_hook.call<void*>(rcx, rdx);
    spdlog::info("virtualize_flags f1380 after call: {} ({:X})", f1380, f1380);

    return result;
}

void* handle_popf(uintptr_t rcx, uintptr_t instruction) {
    spdlog::info("handle_popf called");
    //return g_handle_int3(rcx, instruction);

    auto ti = TTD::ThreadInfo::get();

    if (ti != nullptr) {
        auto rsp = ti->get_register_value<uint64_t>(TTD::Rsp);

        // Check if trap flag is set
        const auto eflags = *(uint64_t*)(rsp);

        if (eflags & 0x100) {
            spdlog::info("Trap flag is set, skipping POPF");
            // Clear the trap flag
            //*(uint32_t*)(rsp) = eflags & ~0x100;
            // advance RSP to fix what POPF would have done
            //ti->set_register_value<uint64_t>(TTD::Rsp, rsp + 8);
            return g_state->g_handle_int3(rcx, instruction);
        }
    }

    return g_state->g_popf_hook.call<void*>(rcx, instruction);
}

#pragma optimize("", off)
void* before_syscall(TTD::ThreadInfo* thread_info, void* variant) {
    //spdlog::info("before_syscall called");

    if (thread_info != nullptr) try {
        auto syscall_index = thread_info->get_register_value<uint64_t>(TTD::Rax);

        // NtSetInformationProcess
        if (syscall_index == 28) {
            // skip dat shiet
            //spdlog::info("Skipping NtSetInformationProcess syscall");
            thread_info->set_register_value<uint64_t>(TTD::Rax, 0); // random syscall (NtAccessCheck, harmless)
            //return nullptr;
        }
    } catch(...) {
        MessageBoxA(nullptr, "something bad happen", "asfasf", 0);
    }

    auto result = g_state->g_before_syscall_hook.unsafe_call<void*>(thread_info, variant);

    return result;
}
#pragma optimize("", on)

void __stdcall rtl_dispatch_exception(PEXCEPTION_RECORD ExceptionRecord, PCONTEXT ContextRecord) {
    uintptr_t ip = ContextRecord->Rip;

    //MessageBoxA(NULL, "Caught exception in RtlDispatchException", "Info", MB_OK);

    // If we are pointing to an int 3, and the next three bytes are 0xBA 0xBE 0xEF, we need to increment the ip by 4 and update exception address, otherwise do nothing
    if (*(uint8_t*)ip == 0xCC && ((
        *(uint8_t*)(ip + 1) == 0xBA && *(uint8_t*)(ip + 2) == 0xBE && *(uint8_t*)(ip + 3) == 0x90) ||
        (*(uint8_t*)(ip + 1) == 0x0F && *(uint8_t*)(ip + 2) == 0xA2 && *(uint8_t*)(ip + 3) == 0x90))) 
    {
        ContextRecord->Rip += 3;
        ExceptionRecord->ExceptionAddress = (PVOID)ContextRecord->Rip;
        spdlog::info("Skipping int 3 in RtlDispatchException at address: {:X}", ip);
    } else {
        spdlog::info("Unhandled exception in RtlDispatchException at address: {:X}", ip);
    }

    // call the original function
    g_state->g_rtl_dispatch_exception_hook.call<decltype(&rtl_dispatch_exception)>(ExceptionRecord, ContextRecord);
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
    return g_state->g_nt_set_information_process_hook.call<LONG>(ProcessHandle, ProcessInformationClass, ProcessInformation, ProcessInformationLength);
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
    return g_state->g_nt_set_information_thread_hook.call<LONG>(ThreadHandle, ThreadInformationClass, ThreadInformation, ThreadInformationLength);
}

void initialize(void* original_dll) {
    if (initialized) {
        return;
    }

    g_state = std::make_unique<State>();
    initialized = true;

    // Hook RtlDispatchException from ntdll
    auto ntdll = GetModuleHandleA("ntdll.dll");
    if (ntdll) {
        auto ntdll_symbols = utility::pdb::get_symbol_map((uint8_t*)ntdll);
        for (const auto [rva, name] : ntdll_symbols) {
            if (name == "NtSetInformationProcess") {
                spdlog::info("Hooking NtSetInformationProcess at RVA {:x}", rva);
                g_state->g_nt_set_information_process_hook = safetyhook::create_inline(
                    (void*)((uintptr_t)ntdll + rva),
                    (void*)nt_set_information_process_hook);
            }
            if (name == "NtSetInformationThread") {
                spdlog::info("Hooking NtSetInformationThread at RVA {:x}", rva);
                g_state->g_nt_set_information_thread_hook = safetyhook::create_inline(
                    (void*)((uintptr_t)ntdll + rva),
                    (void*)nt_set_information_thread_hook);
            }
            if (name.contains("RtlDispatchException")) {
                MessageBoxA(NULL, "Setting RtlDispatchException hook", "Info", MB_OK);
                spdlog::info("Hooking RtlDispatchException at RVA {:x}", rva);
                g_state->g_rtl_dispatch_exception_hook = safetyhook::create_inline(
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

    for (const auto& [addr, name] : symbols) {
        g_state->g_inverse_symbol_map[name] = (uintptr_t)(addr + (uintptr_t)original_dll);
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


        if (name.contains("GetRegister")) {
            std::printf(std::format("Found {} at {:x}\n", name, (uintptr_t)original_dll + rva).c_str());
            continue;
        }

        if (name.contains("GetOrCreateForCurrentThread")) {
            std::printf(std::format("Found {} at {:x}\n", name, (uintptr_t)original_dll + rva).c_str());
            continue;
        }

        if (name.contains("BeforeSyscall")) {
            g_state->g_before_syscall_hook = safetyhook::create_inline(
                (void*)((uintptr_t)original_dll + rva),
                (void*)before_syscall);
            spdlog::info("Hooked BeforeSyscall at {:x}", (uintptr_t)((uintptr_t)original_dll + rva));

            continue;
        }

        if (name.contains("HandleINT")) {
            g_state->g_handle_int3 = (State::HandleFn)((uintptr_t)original_dll + rva);
            spdlog::info("Found HandleINT3 at {:x}", (uintptr_t)g_state->g_handle_int3);
            continue;
        }

        if (name.contains("HandlePOPFD")) {
            g_state->g_popf_hook = safetyhook::create_inline(
                (void*)((uintptr_t)original_dll + rva),
                (void*)handle_popf);
            spdlog::info("Hooked HandlePOPF at {:x}", (uintptr_t)((uintptr_t)original_dll + rva));
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

        if (true) {
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
            g_state->g_mid_hooks.push_back(std::move(mid_hooker));
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

    spdlog::info("Hooked funcs");
}
}
