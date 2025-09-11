#include "../State.hpp"
#include "Writer/Thread.hpp"
#include "ThreadInfo.hpp"

namespace TTD {
    Writer::Thread* SmartContext::get_writer() {
        return writer != nullptr ? writer : Writer::Thread::get(this);
    }

    ThreadInfo* (*threadinfo_get_fn)(void*) = nullptr;
    void* (*threadinfo_get_reg_fn)(ThreadInfo*, RegisterId, void*, size_t) = nullptr;
    void* (*threadinfo_set_reg_fn)(ThreadInfo*, RegisterId, const void*, size_t) = nullptr;
    void (*threadinfo_virtualize_fn)(ThreadInfo*, uint32_t) = nullptr;
    void (*threadinfo_realize_fn)(ThreadInfo*, uint32_t) = nullptr;
    INativeRecordVirtualCpu* (*threadinfo_ensure_thread_state_fn)(ThreadInfo*) = nullptr;

    ThreadInfo* ThreadInfo::get(void* regs) {
        if (threadinfo_get_fn == nullptr) {
            threadinfo_get_fn = (decltype(threadinfo_get_fn))ttd::g_state->inverse_symbol_map["public: static struct TTD::ThreadInfo * __ptr64 __cdecl TTD::ThreadInfo::GetOrCreateForCurrentThread(struct TTD::X64REGS const * __ptr64)"];
        }

        return threadinfo_get_fn(regs);
    }

    INativeRecordVirtualCpu* ThreadInfo::pv_ensure_thread_state() {
        if (threadinfo_ensure_thread_state_fn == nullptr) {
            threadinfo_ensure_thread_state_fn = (decltype(threadinfo_ensure_thread_state_fn))ttd::g_state->inverse_symbol_map["public: class TTD::INativeRecordVirtualCpu * __ptr64 __cdecl TTD::ThreadInfo::PvEnsureThreadState(void) __ptr64"];
        }

        return threadinfo_ensure_thread_state_fn(this);
    }
}