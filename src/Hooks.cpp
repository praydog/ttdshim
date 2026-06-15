#include <iostream>
#include <memory>
#include <spdlog/spdlog.h>
#include <intrin.h>

#include <Windows.h>
#include <winternl.h>
#include <TlHelp32.h>
#include <Psapi.h>

#include <safetyhook.hpp>
#include <xbyak/xbyak.h>
#include <utility/PDB.hpp>
#include <utility/Scan.hpp>

#include "State.hpp"
#include "TTD/ThreadInfo.hpp"
#include "TTD/Writer/Thread.hpp"
#include "InstructionInstrumentation.hpp"
#include "SCodeInstrumentation.hpp"

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
            std::cout << fmt::format("NtSetInformationProcess called, setting Rax to 0\n");
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
safetyhook::MidHook g_decode_single_instruction_hook{};
safetyhook::MidHook g_nop_hook{};
bool needs_fix = false;
uint8_t* old_insn_ptr = nullptr;

bool inside_sim = false;


void decoder_hook(safetyhook::Context& ctx) {
    if (inside_sim) {
        return;
    }

    auto ti = TTD::ThreadInfo::get();
    auto rip = ti->get_register_value<uint64_t>(TTD::Rip);
    //std::cout << fmt::format("In decoder_hook! RIP: {:X}\n", rip);

    if (*(uint8_t*)rip == 0x41 && *(uint8_t*)(rip + 1) == 0x90) {
        auto rax = ctx.rax;
        auto rdi = ctx.rdi;
        auto edi = rdi & 0xFFFFFFFF;
        std::cout << fmt::format("Found xchg eax, r8d! RAX: {:X}, EDI: {:X}\n", rax, edi);
        //ctx.rax = ttd::instrumentation::g_hook_XCHG.target_address();
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

    if (needs_fix) {
        MessageBoxA(NULL, "Fixing instruction", "Info", MB_OK);
        DWORD old_protect;
        VirtualProtect(old_insn_ptr, 2, PAGE_EXECUTE_READWRITE, &old_protect);
        old_insn_ptr[1] = 0x90;
        VirtualProtect(old_insn_ptr, 2, old_protect, &old_protect);

        needs_fix = false;
    }
}

const uint8_t fake_shit[] = {
    0x41, 0x91
};

void decode_instruction_hook(safetyhook::Context& ctx) {
    if (inside_sim) {
        return;
    }

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
        //insn = (uintptr_t)fake_shit;

        //ctx.rax = (uintptr_t)g_hOriginalDLL + 0x92470;
    }
}

void decode_single_instruction_hook(safetyhook::Context& ctx) {
    if (inside_sim || true) {
        return;
    }

    TTD::ttd_vcpu_arch_t* arch = reinterpret_cast<TTD::ttd_vcpu_arch_t*>(ctx.rcx);
    auto& regs = arch->regs.regs;

    auto ti = TTD::ThreadInfo::get();
    auto rip = ti->get_register_value<uint64_t>(TTD::Rip);
    std::cout << fmt::format("In decode_single_instruction_hook! RIP: {:X}\n", rip);

    if (*(uint8_t*)(rip + 3) == 0x41 && *(uint8_t*)(rip + 4) == 0x90) {
        auto rcx = ctx.rcx;
        auto rdx = ctx.rdx;
        std::cout << fmt::format("[decode single instruction hook] Found xchg eax, r8d! RCX: {:X}, RDX: {:X}\n", rcx, rdx);

        auto& insn = *(uint8_t**)(ctx.rcx + 0xF02E8);
        old_insn_ptr = insn;
        //insn = (uintptr_t)fake_shit;

        DWORD old_protect;
        VirtualProtect(insn, 2, PAGE_EXECUTE_READWRITE, &old_protect);
        insn[3] = 0x90;
        insn[4] = 0x90;
        VirtualProtect(insn, 2, old_protect, &old_protect);
        needs_fix = true;
        
        // log regs
        std::cout << fmt::format("[decode single instruction hook] (real regs) RIP: {:X}, RAX: {:X}, RBX: {:X}, RCX: {:X}, RDX: {:X}, R8: {:X}, R9: {:X}\n",
            regs.rip, regs.rax, regs.rbx, regs.rcx, regs.rdx, regs.r8, regs.r9);

        auto og_r8 = regs.r8;
        auto og_rax = regs.rax;

        // manually swap out RAX and R8
        //std::swap(regs.rax, regs.r8);

        // clear out upper 32 bits of R8
        //regs.r8 &= 0xFFFFFFFF;
        //regs.rax &= 0xFFFFFFFF;
        //regs.rax = 0x77;

        auto vcpu = ti->pv_ensure_thread_state();
        auto vcpu_regs = vcpu->get_registers();

        auto teb = (_TEB*)vcpu_regs->regs.teb;
        auto tid = *(uint32_t*)((uintptr_t)teb + 0x48);
        std::cout << fmt::format("[decode single instruction hook] TEB: {:X}, TID: {:X}\n", (uintptr_t)teb, tid);

        // open thread
        HANDLE hThread = OpenThread(THREAD_ALL_ACCESS, FALSE, tid);
        if (hThread != NULL) {
            std::cout << fmt::format("[decode single instruction hook] Opened thread handle: {:X}\n", (uintptr_t)hThread);

            // get thread context
            CONTEXT context;
            context.ContextFlags = CONTEXT_ALL;

            if (GetThreadContext(hThread, &context)) {
                std::cout << fmt::format("[decode single instruction hook] Got thread context! RIP: {:X}, RAX: {:X}, R8: {:X}\n", context.Rip, context.Rax, context.R8);

                // manually swap out RAX and R8
                //std::swap(context.Rax, context.R8);

                // set thread context
                if (SetThreadContext(hThread, &context)) {
                    std::cout << fmt::format("[decode single instruction hook] Set thread context! RIP: {:X}, RAX: {:X}, R8: {:X}\n", context.Rip, context.Rax, context.R8);
                } else {
                    std::cout << fmt::format("[decode single instruction hook] Failed to set thread context: {:X}\n", (uintptr_t)GetLastError());
                }
            } else {
                std::cout << fmt::format("[decode single instruction hook] Failed to get thread context: {:X}\n", (uintptr_t)GetLastError());
            }
        } else {
            std::cout << fmt::format("[decode single instruction hook] Failed to open thread handle: {:X}\n", (uintptr_t)GetLastError());
        }
        //vcpu_regs->regs.rax = 0x77;
        //vcpu_regs->virtualize_state(3);

        // swap out thread info variant as well

        //ti->set_register_value(TTD::Rax, 0x77);
        //ti->VirtualizeGuestMachineState(3);

        // update thread info variant
        //ti->set_register_value(TTD::Rax, 0x77);
        //ti->RealizeGuestMachineState(2);
        auto writer = ti->get_writer();

        if (writer != nullptr) {
            /*writer->increment_thing();
            writer->update_instruction_count(ti, 0);
            writer->add_start_instruction(0);
            //writer->save_guest_state_for_sequencing_event(ti, 9);
            //writer->add_exit_emulation(ti, 9, writer->instruction_count());
            //writer->add_soft_sequence();
            writer->reset_instruction_count(ti);
            writer->insert_register_state(ti, false);
            //writer->insert_new_sequence();
            writer->reset_instruction_count(ti);
            writer->set_thing_zero();
            writer->generate_full_flush_request_if_needed();
            //writer->insert_keyframe(ti);
            //writer->insert_flush_sequence(ti);
            */

            //writer->instruction_count_callback(ti, ti->GetInstructionCount());
        }

        //ti->set_register_value(TTD::R8, regs.r8);
        //ti->set_register_value(TTD::R9, regs.r9);
        //ti->RealizeGuestMachineState(2);

        /*ti->get_main_virtual_context()->copy_to(ti->get_guest_context()); // HACK!!!! poop FART

        if (ti->get_main_virtual_context() != ti->get_virtual_context()) {
            ti->get_main_virtual_context()->copy_to(ti->get_virtual_context());
        }

        auto vcpu = ti->pv_ensure_thread_state();
        ti->get_main_virtual_context()->copy_to(vcpu->get_registers());
        ti->get_main_virtual_context()->copy_to(ti->get_vcpu_state());*/
        inside_sim = true;
        //vcpu->SimulationLoop(1);
        //vcpu->get_registers()->regs.rip = 0;
        //std::swap(vcpu->get_registers()->regs.rax, vcpu->get_registers()->regs.r8);
        //vcpu->get_registers()->regs.rax = 0x1337BEEF;
        inside_sim = false;
        //ti->TransferStateFromVcpu(vcpu);
        //std::cout << fmt::format("[decode single instruction hook] vcpu pointer: {:X}\n", (uintptr_t)vcpu->get_registers());

        //ti->RealizeGuestMachineState(-1);

        MessageBoxA(NULL, "[decode single instruction] Found xchg eax, r8d", "Info", MB_OK);
    }

    // check if 4A 8D 9C 90 8B DD AB F2
    /*if (*(uint8_t*)rip == 0x4A && *(uint8_t*)(rip + 1) == 0x8D && *(uint8_t*)(rip + 2) == 0x9C && *(uint8_t*)(rip + 3) == 0x90 && *(uint8_t*)(rip + 4) == 0x8B && *(uint8_t*)(rip + 5) == 0xDD && *(uint8_t*)(rip + 6) == 0xAB && *(uint8_t*)(rip + 7) == 0xF2) {
        std::cout << fmt::format("[decode instruction hook] Found 4A 8D 9C 90 8B DD AB F2 at RIP: {:X}\n", rip);

        // screw up r9 to be some random value
        auto arch = reinterpret_cast<TTD::ttd_vcpu_arch_t*>(ctx.rcx);
        arch->regs.r9 = 0x1337BEEF;
    }*/
}

void nop_hook(safetyhook::Context& ctx) {
    // does nothing
    std::cout << "In nop_hook" << std::endl;
    //MessageBoxA(NULL, "In nop_hook", "Info", MB_OK);

    auto ti = TTD::ThreadInfo::get();
    auto rip = ti->get_register_value<uint64_t>(TTD::Rip);


    if (*(uint8_t*)rip == 0x41 && *(uint8_t*)(rip + 1) == 0x90) {
        std::cout << fmt::format("[nop_hook] Found xchg eax, r8d! RIP: {:X}\n", rip);
        //ctx.rip = (uintptr_t)g_hOriginalDLL + 0xB83D7;
    }
}

const uint8_t redirected_opcodes[] = {
  0x89, 0x05, 0x0C, 0x00, 0x00, 0x00, 0x44, 0x89,
  0xC0, 0x44, 0x8B, 0x05, 0x02, 0x00, 0x00, 0x00,
  0xEB, 0xEE, 0x90, 0x90, 0x90, 0x90
};

const uint8_t redirected_opcodes_4990[] = {
  0x48, 0x89, 0x05, 0x0C, 0x00, 0x00, 0x00, 0x4C,
  0x89, 0xC0, 0x4C, 0x8B, 0x05, 0x02, 0x00, 0x00,
  0x00, 0xEB, 0xED, 0x90, 0x90, 0x90, 0x90, 0x90,
  0x90, 0x90, 0x90
};

struct ThreadData {
    std::vector<uint8_t> original_data{};
    uint32_t current_opcode_index = 0;
    uintptr_t last_redirection_start_point = 0;
    bool running_redirection = false;
    bool hit_first_redirect = false;
    DWORD old_protect_value = 0;
};

std::recursive_mutex thread_data_mutex;
std::unordered_map<uint32_t, std::unique_ptr<ThreadData>> thread_data_map{};
std::unordered_set<uint8_t> opcodes_16bit {
    0x41, 0x43, 0x45, 0x47
};

std::unordered_set<uint8_t> opcodes_64bit {
    0x49, 0x4B, 0x4D, 0x4F
};

void* trace_lookup_hook(TTD::ttd_vcpu_arch_t* arch, uint64_t unk) {
    //std::cout << fmt::format("In trace_lookup_hook! ARCH: {:X}, UNK: {:X}\n", (uintptr_t)arch, unk);
    auto& regs = arch->regs.regs;
    auto& rip = regs.rip;
    auto thread_id = GetCurrentThreadId();

    auto ti = TTD::ThreadInfo::get();
    if (ti == nullptr) {
        return g_state->trace_lookup_hook.unsafe_call<void*>(arch, unk);
    }
    
    while (!thread_data_mutex.try_lock()) {
        Sleep(0);
    }

    if (!thread_data_map.contains(thread_id)) {
        thread_data_map[thread_id] = std::make_unique<ThreadData>();
    }
    auto& thread_data = *thread_data_map[thread_id];

    if (thread_data.running_redirection) {
        if (rip == thread_data.last_redirection_start_point && thread_data.hit_first_redirect) {
            thread_data.hit_first_redirect = false;
            thread_data.running_redirection = false;
            thread_data.current_opcode_index = 0;
            //rip = last_redirection_start_point + 2;
            //memcpy((void*)thread_data.last_redirection_start_point, thread_data.original_data.data(), thread_data.original_data.size());
            // for loop it 
            for (size_t i = 0; i < thread_data.original_data.size(); i++) {
                ((uint8_t*)thread_data.last_redirection_start_point)[i] = thread_data.original_data[i];
            }

            //VirtualProtect((void*)thread_data.last_redirection_start_point, thread_data.original_data.size(), thread_data.old_protect_value, &thread_data.old_protect_value);
            //std::cout << fmt::format("Finished redirection, setting RIP to {:X}\n", rip);
            auto res = g_state->trace_lookup_hook.unsafe_call<void*>(arch, unk);

            thread_data_mutex.unlock();

            return res;
        }

        thread_data.hit_first_redirect = true;

        //rip = (uintptr_t)last_redirection_start_point + (current_opcode_index * 4);
    }

    struct ttd_scode32_t
    {
        uint8_t dst_index;
        uint8_t reg0;
        uint8_t reg1;
        uint8_t s_opcode;
        uint64_t rip;
        uint32_t u32_0C;
    };

    auto rip1 = *(uint8_t*)rip;

    if (g_state->execute_op_set_state == nullptr) {
        g_state->execute_op_set_state = (decltype(g_state->execute_op_set_state))g_state->partial_symbol_lookup("TTD::ScodeHandlerHardcodedFunction").value_or(0);
        std::cout << fmt::format("[trace_lookup_hook] Found ExecuteOp at {:X}\n", (uintptr_t)g_state->execute_op_set_state);
    }

    /*if (opcodes_16bit.contains(rip1) && *(uint8_t*)(rip + 1) == 0x90) {
        std::cout << fmt::format("[trace_lookup_hook] Found xchg eax, r8d! RIP: {:X}, FIXING...\n", rip);
        auto cpu = ti->pv_ensure_thread_state();
        ttd_scode32_t scode{};
        scode.rip = 0;
        scode.dst_index = 0;
        scode.reg0 = 0;
        scode.reg1 = 0;
        scode.s_opcode = 0;
        scode.u32_0C = 0;

        ti->BeginGuestOperation();

        auto vregs = cpu->get_registers();
        auto& regs = vregs->regs;
        std::swap(regs.rax, regs.r8);
        regs.rax &= 0xFFFFFFFF;
        regs.r8 &= 0xFFFFFFFF;

        ti->EndGuestOperation();
    }*/

    // here
    if (opcodes_16bit.contains(rip1) && *(uint8_t*)(rip + 1) == 0x90) {
        //std::cout << fmt::format("[trace_lookup_hook] Found xchg eax, r8d! RIP: {:X}, REDIRECTING...\n", rip);
        //std::cout << fmt::format("In trace_lookup_hook! ARCH: {:X}, UNK: {:X}\n", (uintptr_t)arch, unk);
        //std::getchar();
        //MessageBoxA(NULL, "Found xchg eax, r8d in trace_lookup_hook", "Info", MB_OK);

        thread_data.original_data.clear();
        thread_data.original_data.resize(sizeof(redirected_opcodes));
        //memset(thread_data.original_data.data(), 0, thread_data.original_data.size());
        //std::cout << fmt::format("[trace_lookup_hook] Found xchg eax, r8d! RIP: {:X}, REDIRECTING...\n", rip);
        thread_data.running_redirection = true;
        thread_data.last_redirection_start_point = rip;
        thread_data.current_opcode_index = 0;
        //rip = (uintptr_t)&redirected_opcodes[current_opcode_index];
        //memcpy(thread_data.original_data.data(), (void*)rip, thread_data.original_data.size());
        for (size_t i = 0; i < thread_data.original_data.size(); i++) {
            thread_data.original_data[i] = ((uint8_t*)rip)[i];
        }
        VirtualProtect((void*)rip, thread_data.original_data.size(), PAGE_EXECUTE_READWRITE, &thread_data.old_protect_value);
        memcpy((void*)rip, redirected_opcodes, thread_data.original_data.size());

        //ti->pv_ensure_thread_state()->update_cache(ip,)
    } else if (opcodes_64bit.contains(rip1) && *(uint8_t*)(rip + 1) == 0x90) {
        thread_data.original_data.clear();
        thread_data.original_data.resize(sizeof(redirected_opcodes_4990));
        //memset(thread_data.original_data.data(), 0, thread_data.original_data.size());
        //std::cout << fmt::format("[trace_lookup_hook] Found xchg rax, r8! RIP: {:X}, REDIRECTING...\n", rip);
        thread_data.running_redirection = true;
        thread_data.last_redirection_start_point = rip;
        thread_data.current_opcode_index = 0;
        //rip = (uintptr_t)&redirected_opcodes[current_opcode_index];
        //memcpy(thread_data.original_data.data(), (void*)rip, thread_data.original_data.size());
        for (size_t i = 0; i < thread_data.original_data.size(); i++) {
            thread_data.original_data[i] = ((uint8_t*)rip)[i];
        }
        VirtualProtect((void*)rip, thread_data.original_data.size(), PAGE_EXECUTE_READWRITE, &thread_data.old_protect_value);
        memcpy((void*)rip, redirected_opcodes_4990, thread_data.original_data.size());
    }

    auto res = g_state->trace_lookup_hook.unsafe_call<void*>(arch, unk);

    return res;
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
                //g_state->rtl_dispatch_exception_hook = safetyhook::create_inline(
                    //(void*)((uintptr_t)ntdll + rva),
                    //(void*)rtl_dispatch_exception);
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

    std::string header_file_scode{};
    std::vector<std::string> scode_functions{};

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

        if (name.contains("TTD::ScodeHandler")) {
            auto fn_name = name.substr(name.find("TTD::ScodeHandler") + strlen("TTD::ScodeHandler"), name.find_first_of('(') - (name.find("TTD::ScodeHandler") + strlen("TTD::ScodeHandler")));
            // replace < with _
            std::replace(fn_name.begin(), fn_name.end(), '<', '_');
            std::replace(fn_name.begin(), fn_name.end(), '>', '_');
            std::replace(fn_name.begin(), fn_name.end(), ',', '_');
            spdlog::info("Found scode function: {} at {:x}", fn_name, (uintptr_t)original_dll + rva);
            //header_file_scode += "uint64_t " + name.substr(name.find("TTD::ScodeHandler") + strlen("TTD::ScodeHandler")) + "();\n";
            scode_functions.push_back(fn_name);
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
    ttd::instrumentation::install_scode_instrumentation(g_state->inverse_symbol_map);

    /*g_decoder_hook = safetyhook::create_mid(
        (void*)((uintptr_t)original_dll + 0x20B85),
        decoder_hook
    );

    g_decode_instruction_hook = safetyhook::create_mid(
        (void*)((uintptr_t)original_dll + 0x8C88C),
        decode_instruction_hook
    );

    g_decode_single_instruction_hook = safetyhook::create_mid(
        (void*)((uintptr_t)original_dll + 0xFAC4),
        decode_single_instruction_hook
    );

    g_nop_hook = safetyhook::create_mid(
        (void*)((uintptr_t)original_dll + 0xB83C4),
        nop_hook
    );*/

    g_state->trace_lookup_hook = safetyhook::create_inline(
        //(void*)((uintptr_t)original_dll + 0xF698),
        g_state->partial_symbol_lookup("TTD::VirtualCpuArchitecture<class TTD::X64Traits>::TraceLookup").value_or(0),
        (void*)trace_lookup_hook
    );

    // make entire binary RWX because we're hackers
    DWORD old_protect;
    const auto sz = ((PIMAGE_NT_HEADERS)((uint8_t*)original_dll + ((PIMAGE_DOS_HEADER)original_dll)->e_lfanew))->OptionalHeader.SizeOfImage;
    VirtualProtect(original_dll, sz, PAGE_EXECUTE_READWRITE, &old_protect);

    spdlog::info("Hooked funcs");
}
}
