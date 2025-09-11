#pragma once

#include <cstdint>
#include <vector>
#include <string>

#include "INativeRecordVirtualCpu.hpp"
#include "NtRuntime.hpp"

namespace TTD::Writer {
    class Thread;
}

namespace TTD {
/*

00000048     DWORD64 Dr0;
00000050     DWORD64 Dr1;
00000058     DWORD64 Dr2;
00000060     DWORD64 Dr3;
00000068     DWORD64 Dr6;
00000070     DWORD64 Dr7;
00000078     DWORD64 Rax;
00000080     DWORD64 Rcx;                        // XREF: __report_gsfailure+BC/w
00000088     DWORD64 Rdx;
00000090     DWORD64 Rbx;
00000098     DWORD64 Rsp;                        // XREF: _invalid_parameter+92/w
00000098                                         // __report_gsfailure+9F/w ...
000000A0     DWORD64 Rbp;
000000A8     DWORD64 Rsi;
000000B0     DWORD64 Rdi;
000000B8     DWORD64 R8;
000000C0     DWORD64 R9;
000000C8     DWORD64 R10;
000000D0     DWORD64 R11;
000000D8     DWORD64 R12;
000000E0     DWORD64 R13;
000000E8     DWORD64 R14;
000000F0     DWORD64 R15;
*/

enum RegisterId : uint8_t {
    Dr0 = 0,
    Dr1 = 1,
    Dr2 = 2,
    Dr3 = 3,
    Dr6 = 4,
    Dr7 = 5,
    GprsBegin = 6,
    Rax = 6,
    Rcx = 7,
    Rdx = 8,
    Rbx = 9,
    Rsp = 10,
    Rbp = 11,
    Rsi = 12,
    Rdi = 13,
    R8 = 14,
    R9 = 15,
    R10 = 16,
    R11 = 17,
    R12 = 18,
    R13 = 19,
    R14 = 20,
    R15 = 21,
    Rip = 22,
    GprsLast = 22,
    SegCs = 23,
    SegDs = 24,
    SegEs = 25,
    SegFs = 26,
    SegGs = 27,
    SegSs = 28,
    UnkSize8 = 29,
    EFlags = 30,
};

static inline std::vector<std::string> register_names = {
    "Dr0",
    "Dr1",
    "Dr2",
    "Dr3",
    "Dr6",
    "Dr7",
    "Rax",
    "Rcx",
    "Rdx",
    "Rbx",
    "Rsp",
    "Rbp",
    "Rsi",
    "Rdi",
    "R8",
    "R9",
    "R10",
    "R11",
    "R12",
    "R13",
    "R14",
    "R15",
    "Rip",
    "SegCs",
    "SegDs",
    "SegEs",
    "SegFs",
    "SegGs",
    "SegSs",
    "UnkSize8",
    "EFlags"
};

class SmartContext {
public:
    virtual void* SetClientTls(void* tls) = 0;
    virtual void* GetRegistersData() = 0;
    virtual void* GetRegistersDiffListFrom(uint32_t, const void*) = 0;
    virtual void* GetVirtualProcessorState(uint32_t, void*) = 0;
    virtual void* SetVirtualProcessorState(uint32_t, const void*) = 0;
    virtual void* GetRegister(RegisterId, void*, uint64_t) = 0;
    virtual void* SetRegister(RegisterId, const void*, uint64_t) = 0;
    virtual uintptr_t GetPC() = 0;
    virtual _TEB* GetTeb() = 0;
    virtual void SetPC(uintptr_t) = 0;
    virtual uint64_t GetRegistersHash(uint32_t) = 0;
    virtual uint64_t GetInstructionCount() = 0;
    virtual uint64_t ResetInstructionCount() = 0;
    virtual void SetInstructionCountLimit(uint64_t) = 0;
    virtual uint64_t GetInstructionSize(const void*, uint64_t) = 0;
    virtual void EmptyDataCache() = 0;
    virtual uint32_t QueryDataCacheLineSize() = 0;
    virtual uintptr_t AlignAddrToDataCacheLineSize(uintptr_t) = 0;
    virtual void* RegisterInstrumentationCallbacks(const void*) = 0;
    virtual void RealizeGuestMachineState(uint32_t) = 0;
    virtual void VirtualizeGuestMachineState(uint32_t) = 0;
    virtual void DisableFastMemoryPath() = 0;

public:
    TTD::Writer::Thread* get_writer();

private:
    TTD::Writer::Thread* writer;
};

class IThreadInfo {
public:
    virtual ~IThreadInfo() = default;
    virtual bool BelongsToTheRunningThread() = 0;
    virtual void TransferStateFromVcpu(const INativeRecordVirtualCpu*) = 0;
    virtual void EngageThrottleIfAppropriate() = 0;
    virtual bool ShouldConditionallyStopRecordingAtReturnInstruction(uintptr_t) = 0;
    virtual bool ShouldConditionallyStopRecordingAtJumpInstruction(uintptr_t) = 0;
    virtual bool ShouldConditionallyStopRecordingAtCallInstruction(uintptr_t) = 0;
    virtual bool ShouldStopSimulationAfterReturnInstruction(uintptr_t, uintptr_t) = 0;
    virtual bool ShouldPauseSimulationAfterCallOrJumpInstruction(uintptr_t, uintptr_t, uintptr_t, uint64_t) = 0;
    virtual bool TryGetUsedHostStackSize(uintptr_t) = 0;
    virtual void CheckForPendingInterrupts() = 0;
    virtual uintptr_t CheckIsInsideRtlInterlockedPopEntrySListAndReturnResumeAddress(uint64_t) = 0;
    virtual void RecordSystemTime() = 0;
    virtual void BeginGuestOperation() = 0;
    virtual void EndGuestOperation() = 0;
    virtual bool IsGuestOperation() = 0;
    virtual bool IsKnownEscapeWithReturn(uintptr_t) = 0;
    virtual int GetKnownEscapeGoDispatchReason(uintptr_t) = 0;
};

class ThreadInfo : public SmartContext, public IThreadInfo {
public:
    static constexpr inline size_t VIRTUAL_CONTEXT1_OFFSET = 0x48;
    static constexpr inline size_t VIRTUAL_CONTEXT2_OFFSET = 0xC00;
    static constexpr inline size_t GUEST_CONTEXT_OFFSET = 0x80;
    static constexpr inline size_t VCPU_STATE_OFFSET = 0xBF0;
    static constexpr inline size_t NTRT_OFFSET = 0x1898;

    static ThreadInfo* get(void* regs = nullptr);
    INativeRecordVirtualCpu* pv_ensure_thread_state();

    X64EmulatorRegisters* get_main_virtual_context() const {
        auto res =  *(X64EmulatorRegisters**)((uintptr_t)this + VIRTUAL_CONTEXT1_OFFSET);

        return res != nullptr ? res : get_virtual_context();
    }

    X64EmulatorRegisters* get_virtual_context() const {
        return (X64EmulatorRegisters*)((uintptr_t)this + VIRTUAL_CONTEXT2_OFFSET);
    }

    X64EmulatorRegisters* get_guest_context() const {
        return (X64EmulatorRegisters*)((uintptr_t)this + GUEST_CONTEXT_OFFSET);
    }

    X64EmulatorRegisters* get_vcpu_state() const {
        return (X64EmulatorRegisters*)((uintptr_t)this + VCPU_STATE_OFFSET);
    }

    NtRuntime* get_ntrt() const {
        return *(NtRuntime**)((uintptr_t)this + NTRT_OFFSET);
    }

    template<typename T>
    T get_register_value(RegisterId id) {
        T value{};
        GetRegister(id, &value, sizeof(value));
        return value;
    }

    template<typename T>
    void set_register_value(RegisterId id, T value) {
        SetRegister(id, &value, sizeof(value));
    }
};
}