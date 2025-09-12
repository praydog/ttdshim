#pragma once

#include <cstdint>
#include <span>

namespace TTD {
using QWORD = uint64_t;
using OWORD = uint8_t[16];
using BYTE = uint8_t;
using WORD = uint16_t;
using DWORD = uint32_t;
using _OWORD = uint8_t[16];
using _BYTE = uint8_t;
using _WORD = uint16_t;
using _DWORD = uint32_t;
using _QWORD = uint64_t;

struct X64EmulatorRegisters {
    struct regs_internal {
        _BYTE gap0[104];
        _QWORD rip;
        _QWORD teb;
        _QWORD qword78;
        _QWORD rax;
        _QWORD rcx;
        _QWORD rdx;
        _QWORD rbx;
        _QWORD rsp;
        _QWORD rbp;
        _QWORD rsi;
        _QWORD rdi;
        _QWORD r8;
        _QWORD r9;
        _QWORD r10;
        _QWORD r11;
        _QWORD r12;
        _QWORD r13;
        _QWORD r14;
        _QWORD r15;
        _QWORD flags;
        _BYTE gap108[16];
        _WORD word118;
        __declspec(align(8)) _WORD word120;
        __declspec(align(8)) _WORD word128;
        __declspec(align(8)) _WORD word130;
        __declspec(align(8)) _WORD word138;
        __declspec(align(8)) _WORD word140;
        _BYTE gap142[190];
        _OWORD oword200;
        _OWORD oword210;
        _OWORD oword220;
        _OWORD oword230;
        _OWORD oword240;
        _OWORD oword250;
        _OWORD oword260;
        _OWORD oword270;
        _OWORD oword280;
        _OWORD oword290;
        _BYTE gap2A0[304];
        _QWORD qword3D0;
        __declspec(align(64)) _QWORD qword400;
        _QWORD qword408;
        _QWORD qword410;
        _QWORD qword418;
        _QWORD qword420;
        _QWORD qword428;
        _QWORD qword430;
        _QWORD qword438;
        _OWORD xmm0;
        _OWORD oword450;
        _OWORD oword460;
        _OWORD oword470;
        _OWORD xmm1;
        _OWORD oword490;
        _OWORD oword4A0;
        _OWORD oword4B0;
        _OWORD xmm2;
        _OWORD oword4D0;
        _OWORD oword4E0;
        _OWORD oword4F0;
        _OWORD xmm3;
        _OWORD oword510;
        _OWORD oword520;
        _OWORD oword530;
        _OWORD xmm4;
        _OWORD oword550;
        _OWORD oword560;
        _OWORD oword570;
        _OWORD xmm5;
        _OWORD oword590;
        _OWORD oword5A0;
        _OWORD oword5B0;
        _OWORD xmm6;
        _OWORD oword5D0;
        _OWORD oword5E0;
        _OWORD oword5F0;
        _OWORD xmm7;
        _OWORD oword610;
        _OWORD oword620;
        _OWORD oword630;
        _OWORD xmm8;
        _OWORD oword650;
        _OWORD oword660;
        _OWORD oword670;
        _OWORD xmm9;
        _OWORD oword690;
        _OWORD oword6A0;
        _OWORD oword6B0;
        _OWORD xmm10;
        _OWORD oword6D0;
        _OWORD oword6E0;
        _OWORD oword6F0;
        _OWORD xmm11;
        _OWORD oword710;
        _OWORD oword720;
        _OWORD oword730;
        _OWORD xmm12;
        _OWORD oword750;
        _OWORD oword760;
        _OWORD oword770;
        _OWORD xmm13;
        _OWORD oword790;
        _OWORD oword7A0;
        _OWORD oword7B0;
        _OWORD xmm14;
        _OWORD oword7D0;
        _OWORD oword7E0;
        _OWORD oword7F0;
        _OWORD xmm15;
        _OWORD oword810;
        _OWORD oword820;
        _OWORD oword830;
        _OWORD oword840;
        _OWORD oword850;
        _OWORD oword860;
        _OWORD oword870;
        _OWORD oword880;
        _OWORD oword890;
        _OWORD oword8A0;
        _OWORD oword8B0;
        _OWORD oword8C0;
        _OWORD oword8D0;
        _OWORD oword8E0;
        _OWORD oword8F0;
        _OWORD oword900;
        _OWORD oword910;
        _OWORD oword920;
        _OWORD oword930;
        _OWORD oword940;
        _OWORD oword950;
        _OWORD oword960;
        _OWORD oword970;
        _OWORD oword980;
        _OWORD oword990;
        _OWORD oword9A0;
        _OWORD oword9B0;
        _OWORD oword9C0;
        _OWORD oword9D0;
        _OWORD oword9E0;
        _OWORD oword9F0;
        _OWORD owordA00;
        _OWORD owordA10;
        _OWORD owordA20;
        _OWORD owordA30;
        _OWORD owordA40;
        _OWORD owordA50;
        _OWORD owordA60;
        _OWORD owordA70;
        _OWORD owordA80;
        _OWORD owordA90;
        _OWORD owordAA0;
        _OWORD owordAB0;
        _OWORD owordAC0;
        _OWORD owordAD0;
        _OWORD owordAE0;
        _OWORD owordAF0;
        _OWORD owordB00;
        _OWORD owordB10;
        _OWORD owordB20;
        _OWORD owordB30;
        _OWORD owordB40;
        _OWORD owordB50;
        _OWORD owordB60;
        _OWORD owordB70;
        _OWORD owordB80;
        _OWORD owordB90;
        _OWORD owordBA0;
        _OWORD owordBB0;
        _OWORD owordBC0;
        _OWORD owordBD0;
        _OWORD owordBE0;
        _OWORD owordBF0;
        _OWORD owordC00;
        _OWORD owordC10;
        _OWORD owordC20;
        _OWORD owordC30;
        uint8_t padC38[64];
    };

    static_assert(offsetof(regs_internal, rip) == 0x68);
    //static_assert(offsetof(regs_internal, rax) == 0xA0);

    union {
        regs_internal regs;
        uint8_t raw[0xC80];
    };

    void copy_to(X64EmulatorRegisters* dest) {
        memcpy(dest, this, sizeof(X64EmulatorRegisters));
    }

    void clear() {
        memset(this, 0, sizeof(X64EmulatorRegisters));
    }

    void virtualize_state(uint8_t flags);
};
static constexpr inline size_t X64EmulatorRegisters_size = sizeof(X64EmulatorRegisters);
static_assert(sizeof(X64EmulatorRegisters) == 0xC80, "X64EmulatorRegisters size mismatch");

enum ttd_cpu_type : unsigned __int32
{
  X86_32 = 0xA,
  X86_64 = 0xB,
};

union ttd_insn_flags_t
{
  uint64_t flag_bits;
  uint64_t all_flags;
  uint8_t bytes[8];
  uint16_t words[4];
  uint32_t dwords[2];
};

struct ttd_op_t
{
  uint32_t u32_00[4];
  uint64_t b64;
  uint64_t c64;
  uint32_t d32[8];
};


struct ttd_disx86_t
{
  void *vft;
  ttd_cpu_type cpu_mode;
  _BYTE byteC;
  _QWORD qword10;
  _QWORD qword18;
  _QWORD qword20;
  _QWORD qword28;
  __int64 (__fastcall *get_reg_value)(ttd_disx86_t *, _QWORD);
  _QWORD qword38;
  _QWORD instruction_address;
  _DWORD dword48;
  _DWORD dword4C;
  _DWORD dword50;
  _DWORD dword54;
  uint8_t *instruction_data;
  _QWORD remaining_size;
  _QWORD current_position;
  _OWORD oword70;
  _QWORD opcode_table_ptr;
  _QWORD operand_sizes;
  ttd_insn_flags_t prefix_state;
  ttd_insn_flags_t instruction_flags;
  ttd_insn_flags_t rex_evex_flags;
  _QWORD qwordA8;
  _QWORD qwordB0;
  _QWORD qwordB8;
  _QWORD qwordC0;
  ttd_op_t ops[3];
  uint8_t pad188[8];
  ttd_insn_flags_t unknown_flag;
  _QWORD qword198;
  _QWORD qword1A0;
  _QWORD qword1A8;
  _QWORD qword1B0;
  _QWORD qword1B8;
  _OWORD oword1C0;
  _QWORD qword1D0;
  _QWORD qword1D8;
  _DWORD dword1E0;
  __declspec(align(8)) _BYTE unk_buf[96];
  _QWORD qword248;
  _BYTE byte250;
  _QWORD qword258;
  _DWORD dword260;
  _BYTE byte264;
  _QWORD qword268;
};

struct __declspec(align(4)) ttd_jit_buffer_t
{
  _BYTE gap0[3152];
  _QWORD buffer;
  unsigned int unsigned_intC58;
};


struct __declspec(align(1)) ttd_intel_fallback_t
{
  void *vft;
  uint8_t pad08[8];
  ttd_disx86_t disx86;
  uint8_t pad280[2056];
  ttd_jit_buffer_t jit_buffer;
  uint8_t pad16E4[12];
};

struct ttd_vcpu_arch_t
{
  void* vft;
  char char8;
  _BYTE gap9[24];
  //__m128i *(__fastcall *callback_fn)(__int128 *, __int64, insn_bytes_t *, unsigned __int64, signed __int64);
  void* callback_fn;
  _BYTE gap40[109];
  _DWORD dwordA0;
  _QWORD qwordA8;
  _DWORD dwordB0;
  _DWORD dwordB4;
  _BYTE byteB8;
  _BYTE gapB9[11];
  _BYTE byteC4;
  _BYTE gapC5[655547];
  _DWORD dwordA0180;
  _QWORD qwordA0188;
  _QWORD qwordA0190;
  __declspec(align(16)) _QWORD qwordA01A0;
  _QWORD qwordA01A8;
  _OWORD owordA01B0;
  _OWORD owordA01C0;
  _OWORD owordA01D0;
  _QWORD qwordA01E0;
  _BYTE gapA01E8[327736];
  _DWORD dwordF0220;
  _DWORD dwordF0224;
  _QWORD qwordF0228;
  _QWORD qwordF0230;
  _QWORD qwordF0238;
  _QWORD qwordF0240;
  _BYTE byteF0248;
  _QWORD qwordF0250;
  _QWORD qwordF0258;
  _QWORD qwordF0260;
  _BYTE gapF0268[24];
  X64EmulatorRegisters regs;
  ttd_disx86_t disx86_1;
  _BYTE gapF1170[3728];
  ttd_intel_fallback_t intel_fallback;
  _DWORD scode_object_cache;
  uint32_t scode_object_cache_used_buckets;
  _DWORD dwordF36F8;
  _BYTE scodes_unk_8pages[32772];
  _BYTE gapFB700[753672];
  _DWORD scodes_count;
  _DWORD scodes_capacity;
  _OWORD godispatch_error1;
  _OWORD godispatch_error2;
  _BYTE gap1B3730[2097120];
  _QWORD qword3B3710;
  _QWORD qword3B3718;
  _QWORD qword3B3720;
  _QWORD qword3B3728;
};

class SmartContext;
class IThreadInfo;

class INativeRecordVirtualCpu {
public:
    virtual ~INativeRecordVirtualCpu() = default;
    virtual void PairWithThreadInfo(IThreadInfo*) = 0;
    virtual void ClearThreadInfoPairing(IThreadInfo*) = 0;
    virtual void Reassign(uint64_t) = 0;
    virtual void SetInstrumentationCallbacks(const void*, SmartContext*) = 0;
    virtual void ClearInstrumentationCallbacks() = 0;
    virtual void SetFastMemoryPathDisable(bool) = 0;
    virtual bool IsGuestOperation() = 0;
    virtual void* GetData() = 0;
    virtual void* GetData() const = 0;
    virtual void UpdateCache(uint64_t, std::span<const uint8_t, -1>*) = 0;
    virtual void* GetCurrentCacheLineFetchData() = 0;
    virtual void SimulationLoop(uint32_t) = 0;
    virtual uint64_t GetCurrentInstructionCount() = 0;
    virtual uint64_t GetInstructionSize(const void*, uint64_t) = 0;
    virtual void EmptyDataCache() = 0;
    virtual uint32_t QueryDataCacheLineSize() = 0;
    virtual uintptr_t AlignAddrToDataCacheLineSize(uintptr_t) = 0;

public:
    X64EmulatorRegisters* get_registers();
    bool update_cache(uint64_t addr, uintptr_t dst, size_t size);
};
}