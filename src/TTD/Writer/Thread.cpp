#include <iostream>
#include <format>

#include "../../State.hpp"

#include "Thread.hpp"

namespace TTD::Writer {
    TTD::Writer::Thread* (*thread_get_fn)(TTD::SmartContext*) = nullptr;
    uint64_t (*thread_insert_keyframe_fn)(TTD::Writer::Thread*, TTD::SmartContext*) = nullptr;
    uint64_t (*thread_insert_register_state_fn)(TTD::Writer::Thread*, TTD::SmartContext*, bool);
    uint64_t (*thread_insert_flush_sequence_fn)(TTD::Writer::Thread*, TTD::SmartContext*);
    uint64_t (*thread_debug_break_callback_fn)(TTD::Writer::Thread*, TTD::SmartContext*);
    uint64_t (*thread_save_guest_state_for_sequencing_event_fn)(TTD::Writer::Thread*, TTD::SmartContext*, uint32_t) = nullptr;
    uint64_t (*thread_update_instruction_count_fn)(TTD::Writer::Thread*, TTD::SmartContext*, uint64_t) = nullptr;
    uint64_t (*thread_add_exit_emulation_event_fn)(void*, uint32_t, uint32_t) = nullptr;
    uint64_t (*thread_reset_instruction_count_fn)(void*, TTD::SmartContext*) = nullptr;
    uint64_t (*thread_generate_full_flush_request_if_needed_fn)(TTD::Writer::Thread*) = nullptr;
    uint64_t (*thread_add_soft_sequence_fn)(void*) = nullptr;
    uint64_t (*thread_insert_new_sequence_fn)(TTD::Writer::Thread*) = nullptr;
    uint64_t (*thread_add_start_instruction_fn)(void*, uint32_t) = nullptr;
    uint64_t (*thread_instruction_count_callback_fn)(TTD::Writer::Thread*, TTD::SmartContext*, uint64_t) = nullptr;

    TTD::Writer::Thread* TTD::Writer::Thread::get(TTD::SmartContext* context) {
        if (thread_get_fn == nullptr) {
            thread_get_fn = (decltype(thread_get_fn))ttd::g_state->partial_symbol_lookup("TTD::Writer::Thread::TryGetFromSmartContextOnCurrentSession").value_or(0);
            std::cout << std::format("thread_get_fn: {:X}\n", (uintptr_t)thread_get_fn);
        }

        return thread_get_fn(context);
    }

    uint64_t Thread::insert_keyframe(TTD::SmartContext* context) {
        if (thread_insert_keyframe_fn == nullptr) {
            thread_insert_keyframe_fn = (decltype(thread_insert_keyframe_fn))ttd::g_state->partial_symbol_lookup("TTD::Writer::Thread::InsertKeyframe").value_or(0);
            std::cout << std::format("thread_insert_keyframe_fn: {:X}\n", (uintptr_t)thread_insert_keyframe_fn);
        }

        return thread_insert_keyframe_fn(this, context);
    }

    uint64_t Thread::insert_register_state(TTD::SmartContext* context, bool a3) {
        if (thread_insert_register_state_fn == nullptr) {
            thread_insert_register_state_fn = (decltype(thread_insert_register_state_fn))ttd::g_state->partial_symbol_lookup("TTD::Writer::Thread::InsertRegisterState").value_or(0);
            std::cout << std::format("thread_insert_register_state_fn: {:X}\n", (uintptr_t)thread_insert_register_state_fn);
        }

        return thread_insert_register_state_fn(this, context, a3);
    }

    uint64_t Thread::insert_flush_sequence(TTD::SmartContext* context) {
        if (thread_insert_flush_sequence_fn == nullptr) {
            thread_insert_flush_sequence_fn = (decltype(thread_insert_flush_sequence_fn))ttd::g_state->partial_symbol_lookup("TTD::Writer::Thread::InsertFlushSequence").value_or(0);
            std::cout << std::format("thread_insert_flush_sequence_fn: {:X}\n", (uintptr_t)thread_insert_flush_sequence_fn);
        }

        return thread_insert_flush_sequence_fn(this, context);
    }

    uint64_t Thread::debug_break_callback(TTD::SmartContext* context) {
        if (thread_debug_break_callback_fn == nullptr) {
            thread_debug_break_callback_fn = (decltype(thread_debug_break_callback_fn))ttd::g_state->partial_symbol_lookup("TTD::Writer::Thread::DebugBreakCallback").value_or(0);
            std::cout << std::format("thread_debug_break_callback_fn: {:X}\n", (uintptr_t)thread_debug_break_callback_fn);
        }

        return thread_debug_break_callback_fn(this, context);
    }

    uint64_t Thread::save_guest_state_for_sequencing_event(TTD::SmartContext* context, uint32_t type) {
        if (thread_save_guest_state_for_sequencing_event_fn == nullptr) {
            thread_save_guest_state_for_sequencing_event_fn = (decltype(thread_save_guest_state_for_sequencing_event_fn))ttd::g_state->partial_symbol_lookup("TTD::Writer::Thread::SaveGuestStateForSequencingEvent").value_or(0);
            std::cout << std::format("thread_save_guest_state_for_sequencing_event_fn: {:X}\n", (uintptr_t)thread_save_guest_state_for_sequencing_event_fn);
        }

        return thread_save_guest_state_for_sequencing_event_fn(this, context, type);
    }

    uint64_t Thread::update_instruction_count(TTD::SmartContext* context, uint64_t count) {
        if (thread_update_instruction_count_fn == nullptr) {
            thread_update_instruction_count_fn = (decltype(thread_update_instruction_count_fn))ttd::g_state->partial_symbol_lookup("TTD::Writer::Thread::UpdateInstructionCount").value_or(0);
            std::cout << std::format("thread_update_instruction_count_fn: {:X}\n", (uintptr_t)thread_update_instruction_count_fn);
        }

        return thread_update_instruction_count_fn(this, context, count);
    }

    uint64_t Thread::add_exit_emulation(TTD::SmartContext* context, uint32_t reason, uint32_t count) {
        if (thread_add_exit_emulation_event_fn == nullptr) {
            thread_add_exit_emulation_event_fn = (decltype(thread_add_exit_emulation_event_fn))ttd::g_state->partial_symbol_lookup("TTD::TraceFile::ThreadStreamWriter::AddExitEmulation").value_or(0);
            std::cout << std::format("thread_add_exit_emulation_event_fn: {:X}\n", (uintptr_t)thread_add_exit_emulation_event_fn);
        }

        auto writer = (void*)((uintptr_t)this + 0x38);

        return thread_add_exit_emulation_event_fn(writer, reason, count);
    }

    uint64_t Thread::reset_instruction_count(TTD::SmartContext* context) {
        if (thread_reset_instruction_count_fn == nullptr) {
            thread_reset_instruction_count_fn = (decltype(thread_reset_instruction_count_fn))ttd::g_state->partial_symbol_lookup("TTD::Writer::Thread::ResetInstructionCount").value_or(0);
            std::cout << std::format("thread_reset_instruction_count_fn: {:X}\n", (uintptr_t)thread_reset_instruction_count_fn);
        }

        auto writer = (void*)((uintptr_t)this + 0x38);

        return thread_reset_instruction_count_fn(writer, context);
    }

    uint64_t Thread::generate_full_flush_request_if_needed() {
        if (thread_generate_full_flush_request_if_needed_fn == nullptr) {
            thread_generate_full_flush_request_if_needed_fn = (decltype(thread_generate_full_flush_request_if_needed_fn))ttd::g_state->partial_symbol_lookup("TTD::Writer::Thread::GenerateFullFlushRequestIfNeeded").value_or(0);
            std::cout << std::format("thread_generate_full_flush_request_if_needed_fn: {:X}\n", (uintptr_t)thread_generate_full_flush_request_if_needed_fn);
        }

        return thread_generate_full_flush_request_if_needed_fn(this);
    }

    uint64_t Thread::add_soft_sequence() {
        if (thread_add_soft_sequence_fn == nullptr) {
            thread_add_soft_sequence_fn = (decltype(thread_add_soft_sequence_fn))ttd::g_state->partial_symbol_lookup("TTD::TraceFile::StreamWriter::AddSoftSequence").value_or(0);
            std::cout << std::format("thread_add_soft_sequence_fn: {:X}\n", (uintptr_t)thread_add_soft_sequence_fn);
        }

        auto tf = (void*)((uintptr_t)this + 0x38);

        return thread_add_soft_sequence_fn(tf);
    }

    uint64_t Thread::insert_new_sequence() {
        if (thread_insert_new_sequence_fn == nullptr) {
            thread_insert_new_sequence_fn = (decltype(thread_insert_new_sequence_fn))ttd::g_state->partial_symbol_lookup("TTD::Writer::Thread::InsertNewSequence").value_or(0);
            std::cout << std::format("thread_insert_new_sequence_fn: {:X}\n", (uintptr_t)thread_insert_new_sequence_fn);
        }

        return thread_insert_new_sequence_fn(this);
    }

    uint64_t Thread::add_start_instruction(uint32_t a1) {
        if (thread_add_start_instruction_fn == nullptr) {
            thread_add_start_instruction_fn = (decltype(thread_add_start_instruction_fn))ttd::g_state->partial_symbol_lookup("TTD::TraceFile::StreamWriter::AddStartInstruction").value_or(0);
            std::cout << std::format("thread_add_start_instruction_fn: {:X}\n", (uintptr_t)thread_add_start_instruction_fn);
        }

        auto tf = (void*)((uintptr_t)this + 0x38);

        return thread_add_start_instruction_fn(tf, a1);
    }

    uint64_t Thread::instruction_count_callback(TTD::SmartContext* context, uint64_t count) {
        if (thread_instruction_count_callback_fn == nullptr) {
            thread_instruction_count_callback_fn = (decltype(thread_instruction_count_callback_fn))ttd::g_state->partial_symbol_lookup("TTD::Writer::Thread::InstructionCountCallback").value_or(0);
            std::cout << std::format("thread_instruction_count_callback_fn: {:X}\n", (uintptr_t)thread_instruction_count_callback_fn);
        }

        return thread_instruction_count_callback_fn(this, context, count);
    }
}