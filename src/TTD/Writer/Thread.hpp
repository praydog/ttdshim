#pragma once

#include <cstdint>

namespace TTD {
    class SmartContext;
}

namespace TTD::Writer {
    class Thread {
    public:
        static Thread* get(TTD::SmartContext* context);

    public:
        uint64_t insert_keyframe(TTD::SmartContext* context);
        uint64_t insert_register_state(TTD::SmartContext* context, bool a3 = false);
        uint64_t insert_flush_sequence(TTD::SmartContext* context);
        uint64_t debug_break_callback(TTD::SmartContext* context);
        uint64_t save_guest_state_for_sequencing_event(TTD::SmartContext* context, uint32_t reason);
        uint64_t update_instruction_count(TTD::SmartContext* context, uint64_t count);
        uint64_t add_exit_emulation(TTD::SmartContext* context, uint32_t reason, uint32_t count);
        uint64_t reset_instruction_count(TTD::SmartContext* context);
        uint64_t generate_full_flush_request_if_needed();
        uint64_t add_soft_sequence();
        uint64_t insert_new_sequence();
        uint64_t add_start_instruction(uint32_t a1);
        uint64_t instruction_count_callback(TTD::SmartContext* context, uint64_t count);

        void increment_thing() {
            *(uint64_t*)((uintptr_t)this + 0x70) = _InterlockedIncrement64(*(volatile long long**)(*(uintptr_t*)this + 0x720));
        }
        
        void set_thing_zero() {
            *(uint64_t*)((uintptr_t)this + 0x150) = 0;
        }

    public:
        uint64_t instruction_count() const {
            return *((uint64_t*)((uintptr_t)this + 0x148));
        }
    };
}