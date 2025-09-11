#pragma once

#include <cstdint>

namespace TTD {
    class NtRuntime {
    public:
        uint32_t get_thread_id();
    };
}