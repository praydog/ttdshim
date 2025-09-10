#pragma once

#include <memory>
#include <unordered_map>

#include <safetyhook.hpp>

#include "MidHooker.hpp"

namespace ttd {
    struct State {
        std::unordered_map<std::string, uintptr_t> inverse_symbol_map{};
        std::vector<std::unique_ptr<MidHooker>> mid_hooks{};
        safetyhook::InlineHook realize_flags_hook{};
        safetyhook::InlineHook virtualize_flags_hook{};
        safetyhook::InlineHook unhandled_exception_filter_hook{};
        safetyhook::InlineHook rtl_dispatch_exception_hook{};
        safetyhook::InlineHook nt_set_information_process_hook{};
        safetyhook::InlineHook nt_set_information_thread_hook{};
        safetyhook::InlineHook popf_hook{};
        safetyhook::InlineHook before_syscall_hook{};

        using HandleFn = void* (*)(uintptr_t rcx, uintptr_t rdx);
        HandleFn handle_int3 = nullptr;
    };

    extern std::unique_ptr<State> g_state;
    std::unique_ptr<State>& create_state();
}