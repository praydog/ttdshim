#include "../State.hpp"
#include "ThreadInfo.hpp"

namespace TTD {
    ThreadInfo* (*threadinfo_get_fn)(void*) = nullptr;
    void* (*threadinfo_get_reg_fn)(ThreadInfo*, RegisterId, void*, size_t) = nullptr;
    void* (*threadinfo_set_reg_fn)(ThreadInfo*, RegisterId, const void*, size_t) = nullptr;

    ThreadInfo* ThreadInfo::get(void* regs) {
        if (threadinfo_get_fn == nullptr) {
            threadinfo_get_fn = (decltype(threadinfo_get_fn))ttd::g_state->inverse_symbol_map["public: static struct TTD::ThreadInfo * __ptr64 __cdecl TTD::ThreadInfo::GetOrCreateForCurrentThread(struct TTD::X64REGS const * __ptr64)"];
        }

        return threadinfo_get_fn(regs);
    }

    void* ThreadInfo::get_register(RegisterId id, void* out, size_t size) {
        if (threadinfo_get_reg_fn == nullptr) {
            threadinfo_get_reg_fn = (decltype(threadinfo_get_reg_fn))ttd::g_state->inverse_symbol_map["public: virtual void __cdecl TTD::ThreadInfo::GetRegister(struct TTD::RegisterId,void * __ptr64,unsigned __int64)const __ptr64"];
        }

        return threadinfo_get_reg_fn(this, id, out, size);
    }

    void* ThreadInfo::set_register(RegisterId id, const void* value, size_t size) {
        if (threadinfo_set_reg_fn == nullptr) {
            threadinfo_set_reg_fn = (decltype(threadinfo_set_reg_fn))ttd::g_state->inverse_symbol_map["public: virtual void __cdecl TTD::ThreadInfo::SetRegister(struct TTD::RegisterId,void const * __ptr64,unsigned __int64) __ptr64"];
        }

        return threadinfo_set_reg_fn(this, id, value, size);
    }
}