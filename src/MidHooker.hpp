#pragma once

#include <safetyhook.hpp>
#include <xbyak/xbyak.h>

// Creates unique shellcode for each hook so we can print the names of each hooked function
// as they're called.
namespace ttd {
class MidHooker : public Xbyak::CodeGenerator {
public:
    using MidHookFn = void (*)(safetyhook::Context& ctx, MidHooker& self);

    MidHooker(void* target, void* detour, const std::string& name);

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
}
