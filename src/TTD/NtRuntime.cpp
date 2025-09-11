#include <iostream>
#include <format>

#include "../State.hpp"

#include "NtRuntime.hpp"

namespace TTD {
    uint32_t (*get_thread_id_fn)(NtRuntime*) = nullptr;

    uint32_t NtRuntime::get_thread_id() {
        if (get_thread_id_fn == nullptr) {
            get_thread_id_fn = (decltype(get_thread_id_fn))ttd::g_state->partial_symbol_lookup("NtRuntime::GetThreadId").value_or(0);
            std::cout << std::format("get_thread_id_fn: {:X}\n", (uintptr_t)get_thread_id_fn);
        }

        return get_thread_id_fn(this);
    }
}