#include <iostream>
#include <memory>
#include <spdlog/spdlog.h>
#include <intrin.h>

#include <Windows.h>
#include <TlHelp32.h>

#include <safetyhook.hpp>
#include <xbyak/xbyak.h>
#include <utility/PDB.hpp>
#include <utility/Scan.hpp>

#include "State.hpp"
#include "TTD/ThreadInfo.hpp"
#include "InstructionInstrumentation.hpp"

#include "Hooks.hpp"

HMODULE g_hOriginalDLL = nullptr;

typedef struct _PROCESS_INSTRUMENTATION_CALLBACK_INFORMATION
{
    ULONG Version;
    ULONG Reserved;
    PVOID Callback;
} PROCESS_INSTRUMENTATION_CALLBACK_INFORMATION, *PPROCESS_INSTRUMENTATION_CALLBACK_INFORMATION;

namespace ttd::hooks {
bool initialized = false;

void* realize_flags(uintptr_t rcx, uintptr_t rdx) {
    const auto idx = *(uint8_t*)(rdx + 0x13);
    auto& f12d8 = *(uint32_t*)(rcx + 0xF12D8);
    auto& f1380 = *(uint32_t*)(rcx + 0xF1380);
    spdlog::info("realize_flags idx: {}", idx);
    spdlog::info("realize_flags f12d8: {} ({:X})", f12d8, f12d8);
    spdlog::info("realize_flags f1380: {} ({:X})", f1380, f1380);

    auto result = g_state->virtualize_flags_hook.call<void*>(rcx, rdx);
    spdlog::info("realize_flags f1380 after call: {} ({:X})", f1380, f1380);

    return result;
}

void* virtualize_flags(uintptr_t rcx, uintptr_t rdx) {
    const auto idx = *(uint8_t*)(rdx + 0x13);
    auto& f1380 = *(uint32_t*)(rcx + 0xF1380);
    spdlog::info("virtualize_flags idx: {}", idx);
    spdlog::info("virtualize_flags f1380: {} ({:X})", f1380, f1380);

    auto result = g_state->virtualize_flags_hook.call<void*>(rcx, rdx);
    spdlog::info("virtualize_flags f1380 after call: {} ({:X})", f1380, f1380);

    return result;
}

#pragma optimize("", off)
void* before_syscall(TTD::ThreadInfo* thread_info, void* variant) {
    //spdlog::info("before_syscall called");

    if (thread_info != nullptr) {
        auto syscall_index = thread_info->get_register_value<uint64_t>(TTD::Rax);

        //spdlog::info("Syscall index: {}", syscall_index);
        std::cout << fmt::format("Syscall index: {}\n", syscall_index);

        // NtSetInformationProcess
        if (syscall_index == 28) {
            thread_info->set_register_value<uint64_t>(TTD::Rax, 0); // random syscall (NtAccessCheck, harmless)
        }
    }

    auto result = g_state->before_syscall_hook.unsafe_call<void*>(thread_info, variant);

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
    g_state->rtl_dispatch_exception_hook.call<decltype(&rtl_dispatch_exception)>(ExceptionRecord, ContextRecord);
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
    return g_state->nt_set_information_process_hook.call<LONG>(ProcessHandle, ProcessInformationClass, ProcessInformation, ProcessInformationLength);
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
    return g_state->nt_set_information_thread_hook.call<LONG>(ThreadHandle, ThreadInformationClass, ThreadInformation, ThreadInformationLength);
}

safetyhook::MidHook g_decoder_hook{};
safetyhook::MidHook g_decode_instruction_hook{};

void decoder_hook(safetyhook::Context& ctx) {
    auto ti = TTD::ThreadInfo::get();
    auto rip = ti->get_register_value<uint64_t>(TTD::Rip);
    //std::cout << fmt::format("In decoder_hook! RIP: {:X}\n", rip);

    if (*(uint8_t*)rip == 0x41 && *(uint8_t*)(rip + 1) == 0x90) {
        auto rax = ctx.rax;
        auto rdi = ctx.rdi;
        auto edi = rdi & 0xFFFFFFFF;
        std::cout << fmt::format("Found xchg eax, r8d! RAX: {:X}, EDI: {:X}\n", rax, edi);
        ctx.rax = ttd::instrumentation::g_hook_XCHG.target_address();
        MessageBoxA(NULL, "Found xchg eax, r8d", "Info", MB_OK);

        //ti->realize_guest_machine_state(-1);

        //auto vcpu_eax = ti->get_register_value<uint64_t>(TTD::Rax) & 0xFFFFFFFF;
        //auto vcpu_r8d = ti->get_register_value<uint64_t>(TTD::R8) & 0xFFFFFFFF;

        //std::cout << fmt::format("Before swap: VCPU EAX: {:X}, VCPU R8D: {:X}\n", vcpu_eax, vcpu_r8d);

        // swap the two manually
        //ti->set_register_value<uint64_t>(TTD::Rax, vcpu_r8d);
        //ti->set_register_value<uint64_t>(TTD::R8, vcpu_eax);

        //auto new_vcpu_eax = ti->get_register_value<uint64_t>(TTD::Rax) & 0xFFFFFFFF;
        //auto new_vcpu_r8d = ti->get_register_value<uint64_t>(TTD::R8) & 0xFFFFFFFF;

        //std::cout << fmt::format("After swap: VCPU EAX: {:X}, VCPU R8D: {:X}\n", new_vcpu_eax, new_vcpu_r8d);

        //ti->virtualize_guest_machine_state(-1);

        MessageBoxA(NULL, "Found xchg eax, r8d", "Info", MB_OK);
    }
}

const uint8_t fake_shit[] = {
    0x41, 0x91
};

void decode_instruction_hook(safetyhook::Context& ctx) {
    auto ti = TTD::ThreadInfo::get();
    auto rip = ti->get_register_value<uint64_t>(TTD::Rip);
    std::cout << fmt::format("In decode_instruction_hook! RIP: {:X}\n", rip);

    if (*(uint8_t*)rip == 0x41 && *(uint8_t*)(rip + 1) == 0x90) {
        auto rax = ctx.rax;
        auto rbx = ctx.rbx;
        auto rdi = ctx.rdi;
        auto edi = rdi & 0xFFFFFFFF;
        std::cout << fmt::format("[decode instruction hook] Found xchg eax, r8d! RAX: {:X}, EDI: {:X}, RBX: {:X}\n", rax, edi, rbx);

        MessageBoxA(NULL, "[decode instruction] Found xchg eax, r8d", "Info", MB_OK);

        auto& insn = *(uintptr_t*)(ctx.rcx + 0x8);
        insn = (uintptr_t)fake_shit;

        //ctx.rax = (uintptr_t)g_hOriginalDLL + 0x92470;
    }
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
                g_state->nt_set_information_process_hook = safetyhook::create_inline(
                    (void*)((uintptr_t)ntdll + rva),
                    (void*)nt_set_information_process_hook);
            }

            if (name == "NtSetInformationThread") {
                spdlog::info("Hooking NtSetInformationThread at RVA {:x}", rva);
                g_state->nt_set_information_thread_hook = safetyhook::create_inline(
                    (void*)((uintptr_t)ntdll + rva),
                    (void*)nt_set_information_thread_hook);
            }

            if (name.contains("RtlDispatchException")) {
                MessageBoxA(NULL, "Setting RtlDispatchException hook", "Info", MB_OK);
                spdlog::info("Hooking RtlDispatchException at RVA {:x}", rva);
                g_state->rtl_dispatch_exception_hook = safetyhook::create_inline(
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
        g_state->inverse_symbol_map[name] = (uintptr_t)(addr + (uintptr_t)original_dll);
    }

    std::unordered_set<std::string> ignored_functions {
        "public: __cdecl TTD::StlbEntry<32>::StlbEntry<32>(void) __ptr64",
        "free"
    };

    struct Decoder {
        std::string name;
        std::string raw_name;
    };

    std::string header_file_decoders{};
    std::vector<Decoder> decoders{};

    for (const auto [rva, name] : symbols) try {
        if (ignored_functions.find(name) != ignored_functions.end()) {
            spdlog::info("Ignoring function: {}", name);
            continue;
        }

        const auto absolute = (uint8_t*)original_dll + rva;

        if (name.contains("IntelDecoderImpl::Handle") && *(uint8_t*)(absolute - 1) == 0xCC) {
            auto fn_name = name.substr(name.find("::Handle") + strlen("::Handle"), name.find_first_of('(') - (name.find("::Handle") + strlen("::Handle")));
            // replace < with _
            std::replace(fn_name.begin(), fn_name.end(), '<', '_');
            std::replace(fn_name.begin(), fn_name.end(), '>', '_');
            std::replace(fn_name.begin(), fn_name.end(), ',', '_');
            spdlog::info("Found decoder function: {} at {:x}", fn_name, (uintptr_t)original_dll + rva);
            //header_file_decoders += "uint64_t " + name.substr(name.find("IntelDecoderImpl::") + strlen("IntelDecoderImpl::")) + "();\n";
            decoders.push_back({fn_name, name});
        }

        if (name.contains("VirtualizeGuestMachineState")) {
            std::printf(std::format("Found {} at {:x}\n", name, (uintptr_t)original_dll + rva).c_str());
            continue;
        }

        if (name.contains("GetOrCreateForCurrentThread")) {
            std::printf(std::format("Found {} at {:x}\n", name, (uintptr_t)original_dll + rva).c_str());
            continue;
        }

        if (name.contains("BeforeSyscall")) {
            g_state->before_syscall_hook = safetyhook::create_inline(
                (void*)((uintptr_t)original_dll + rva),
                (void*)before_syscall);
            spdlog::info("Hooked BeforeSyscall at {:x}", (uintptr_t)((uintptr_t)original_dll + rva));

            continue;
        }

        if (name.contains("HandleINT")) {
            g_state->handle_int3 = (State::HandleFn)((uintptr_t)original_dll + rva);
            spdlog::info("Found HandleINT3 at {:x}", (uintptr_t)g_state->handle_int3);
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
            g_state->mid_hooks.push_back(std::move(mid_hooker));
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

#if 0
    std::sort(decoders.begin(), decoders.end(), [](const Decoder& a, const Decoder& b) {
        return a.name < b.name;
    });

    std::string source_file_decoders{};

    for (const auto& decoder : decoders) {
        header_file_decoders += "extern safetyhook::InlineHook g_hook_" + decoder.name + ";\n";
    }

    for (const auto& decoder : decoders) {
        header_file_decoders += "uint64_t Handle" + decoder.name + "(uintptr_t decoder, TTD::DecodedInstruction* instr);\n";
    }

    for (const auto& decoder : decoders) {
        source_file_decoders += "safetyhook::InlineHook g_hook_" + decoder.name + ";\n";
    }

    for (const auto& decoder : decoders) {
        source_file_decoders += "uint64_t Handle" + decoder.name + "(uintptr_t decoder, TTD::DecodedInstruction* instr) {\n";
        source_file_decoders += "    return g_hook_" + decoder.name + ".unsafe_call<uint64_t>(decoder, instr);\n";
        source_file_decoders += "}\n";
    }

    std::string installation_function{};

    for (size_t i = 0; i < decoders.size(); i++) {
        const auto& decoder = decoders[i];
        const auto& raw_name = decoder.raw_name;
        installation_function += "    g_hook_" + decoder.name + " = safetyhook::create_inline(\n";
        installation_function += "        (void*)(inverse_symbol_map[\"" + raw_name + "\"]),\n";
        installation_function += "        (void*)Handle" + decoder.name + ");\n";
    }

    spdlog::info("Generated decoder header:\n{}", header_file_decoders);
    spdlog::info("Generated decoder source:\n{}", source_file_decoders);
    spdlog::info("Generated installation function:\nvoid ttd::instrumentation::install(const std::unordered_map<std::string, uintptr_t>& inverse_symbol_map) {\n" + installation_function + "}\n");
#endif

    ttd::instrumentation::install(g_state->inverse_symbol_map);

    g_decoder_hook = safetyhook::create_mid(
        (void*)((uintptr_t)original_dll + 0x20B85),
        decoder_hook
    );

    g_decode_instruction_hook = safetyhook::create_mid(
        (void*)((uintptr_t)original_dll + 0x8C88C),
        decode_instruction_hook
    );

    // make entire binary RWX because we're hackers
    DWORD old_protect;
    const auto sz = ((PIMAGE_NT_HEADERS)((uint8_t*)original_dll + ((PIMAGE_DOS_HEADER)original_dll)->e_lfanew))->OptionalHeader.SizeOfImage;
    VirtualProtect(original_dll, sz, PAGE_EXECUTE_READWRITE, &old_protect);

    spdlog::info("Hooked funcs");
}
}
