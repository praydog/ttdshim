#include "../State.hpp"
#include "INativeRecordVirtualCpu.hpp"

namespace TTD {
    X64EmulatorRegisters* (*get_registers_fn)(INativeRecordVirtualCpu*) = nullptr;
    void (*virtualize_state_fn)(X64EmulatorRegisters*, uint8_t) = nullptr;
    bool (*update_cache_fn)(void*, uint64_t, uintptr_t, size_t) = nullptr;

    X64EmulatorRegisters* INativeRecordVirtualCpu::get_registers() {
        if (get_registers_fn == nullptr) {
            get_registers_fn = (decltype(get_registers_fn))ttd::g_state->inverse_symbol_map["public: struct TTD::X64EmulatorRegisters & __ptr64 __cdecl TTD::INativeRecordVirtualCpu::GetRegisters(void) __ptr64"];
        }

        return get_registers_fn(this);
    }

    void X64EmulatorRegisters::virtualize_state(uint8_t flags) {
        if (virtualize_state_fn == nullptr) {
            virtualize_state_fn = (decltype(virtualize_state_fn))ttd::g_state->partial_symbol_lookup("TTD::X64EmulatorRegisters::VirtualizeState").value_or(0);
        }

        return virtualize_state_fn(this, flags);
    }

    bool INativeRecordVirtualCpu::update_cache(uint64_t addr, uintptr_t dst, size_t size) {
        if (update_cache_fn == nullptr) {
            update_cache_fn = (decltype(update_cache_fn))ttd::g_state->partial_symbol_lookup("TTD::VirtualCpuRecord::UpdateCachedDataInternal").value_or(0);
        }

        auto record = (void*)((uintptr_t)this + 0x100);

        return update_cache_fn(record, addr, dst, size);
    }
}