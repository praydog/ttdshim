#pragma once

#include <cstdint>
#include <vector>
#include <string>

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
    GprsBegin = 0,
    Dr0 = 0,
    Dr1 = 1,
    Dr2 = 2,
    Dr3 = 3,
    Dr6 = 4,
    Dr7 = 5,
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

struct ThreadInfo {
    static ThreadInfo* get(void* regs = nullptr);
    void* get_register(RegisterId id, void* out, size_t size);
    void* set_register(RegisterId id, const void* value, size_t size);

    template<typename T>
    T get_register_value(RegisterId id) {
        T value{};
        get_register(id, &value, sizeof(value));
        return value;
    }

    template<typename T>
    void set_register_value(RegisterId id, T value) {
        set_register(id, &value, sizeof(value));
    }
};
}