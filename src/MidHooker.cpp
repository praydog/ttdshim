#include <spdlog/spdlog.h>

#include "MidHooker.hpp"

namespace ttd {
    MidHooker::MidHooker(void* target, void* detour, const std::string& name)
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
}