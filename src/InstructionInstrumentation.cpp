#include <iostream>
#include <spdlog/spdlog.h>

#include "State.hpp"
#include "TTD/ThreadInfo.hpp"

#include "InstructionInstrumentation.hpp"

namespace ttd::instrumentation {
uint64_t HandleABM1Operand_0_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleABM1Operand_0_0_( at RIP {:#x}\n", rip);
    return g_hook_ABM1Operand_0_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleABM1Operand_1_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleABM1Operand_1_0_( at RIP {:#x}\n", rip);
    return g_hook_ABM1Operand_1_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleABM1Operand_2_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleABM1Operand_2_0_( at RIP {:#x}\n", rip);
    return g_hook_ABM1Operand_2_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleABM1Operand_6_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleABM1Operand_6_8_( at RIP {:#x}\n", rip);
    return g_hook_ABM1Operand_6_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleABM1Operand_7_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleABM1Operand_7_8_( at RIP {:#x}\n", rip);
    return g_hook_ABM1Operand_7_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleABM1Operand_8_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleABM1Operand_8_8_( at RIP {:#x}\n", rip);
    return g_hook_ABM1Operand_8_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleABM2Operand_4_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleABM2Operand_4_8_( at RIP {:#x}\n", rip);
    return g_hook_ABM2Operand_4_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleABM2Operand_6_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleABM2Operand_6_8_( at RIP {:#x}\n", rip);
    return g_hook_ABM2Operand_6_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleABM2Operand_7_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleABM2Operand_7_8_( at RIP {:#x}\n", rip);
    return g_hook_ABM2Operand_7_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleABM2Operand_8_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleABM2Operand_8_8_( at RIP {:#x}\n", rip);
    return g_hook_ABM2Operand_8_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleADX_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleADX_0_( at RIP {:#x}\n", rip);
    return g_hook_ADX_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleADX_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleADX_1_( at RIP {:#x}\n", rip);
    return g_hook_ADX_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleAESKeyGenAssist_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleAESKeyGenAssist_0_( at RIP {:#x}\n", rip);
    return g_hook_AESKeyGenAssist_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleAESKeyGenAssist_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleAESKeyGenAssist_1_( at RIP {:#x}\n", rip);
    return g_hook_AESKeyGenAssist_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleANDN_BMI1(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleANDN_BMI1( at RIP {:#x}\n", rip);
    return g_hook_ANDN_BMI1.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleBLENDPD_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleBLENDPD_0_( at RIP {:#x}\n", rip);
    return g_hook_BLENDPD_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleBLENDPD_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleBLENDPD_1_( at RIP {:#x}\n", rip);
    return g_hook_BLENDPD_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleBLENDPS_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleBLENDPS_0_( at RIP {:#x}\n", rip);
    return g_hook_BLENDPS_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleBLENDPS_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleBLENDPS_1_( at RIP {:#x}\n", rip);
    return g_hook_BLENDPS_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleBLENDVAvx_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleBLENDVAvx_0_( at RIP {:#x}\n", rip);
    return g_hook_BLENDVAvx_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleBLENDVAvx_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleBLENDVAvx_1_( at RIP {:#x}\n", rip);
    return g_hook_BLENDVAvx_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleBLENDVAvx_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleBLENDVAvx_2_( at RIP {:#x}\n", rip);
    return g_hook_BLENDVAvx_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleBSWAP(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleBSWAP( at RIP {:#x}\n", rip);
    return g_hook_BSWAP.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleBitScanInstruction_120_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleBitScanInstruction_120_( at RIP {:#x}\n", rip);
    return g_hook_BitScanInstruction_120_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleBitScanInstruction_121_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleBitScanInstruction_121_( at RIP {:#x}\n", rip);
    return g_hook_BitScanInstruction_121_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleBitTestInstruction(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleBitTestInstruction( at RIP {:#x}\n", rip);
    return g_hook_BitTestInstruction.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCALL(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCALL( at RIP {:#x}\n", rip);
    return g_hook_CALL.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCBW(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCBW( at RIP {:#x}\n", rip);
    return g_hook_CBW.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCDQ(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCDQ( at RIP {:#x}\n", rip);
    return g_hook_CDQ.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCDQE(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCDQE( at RIP {:#x}\n", rip);
    return g_hook_CDQE.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCLC(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCLC( at RIP {:#x}\n", rip);
    return g_hook_CLC.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCLD(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCLD( at RIP {:#x}\n", rip);
    return g_hook_CLD.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCLMUL_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCLMUL_0_( at RIP {:#x}\n", rip);
    return g_hook_CLMUL_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCLMUL_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCLMUL_1_( at RIP {:#x}\n", rip);
    return g_hook_CLMUL_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCMC(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCMC( at RIP {:#x}\n", rip);
    return g_hook_CMC.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCMP(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCMP( at RIP {:#x}\n", rip);
    return g_hook_CMP.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCMPXCHG(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCMPXCHG( at RIP {:#x}\n", rip);
    return g_hook_CMPXCHG.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCMPXCHG16B(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCMPXCHG16B( at RIP {:#x}\n", rip);
    return g_hook_CMPXCHG16B.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCMPXCHG8B(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCMPXCHG8B( at RIP {:#x}\n", rip);
    return g_hook_CMPXCHG8B.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCMPxx_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCMPxx_0_( at RIP {:#x}\n", rip);
    return g_hook_CMPxx_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCMPxx_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCMPxx_1_( at RIP {:#x}\n", rip);
    return g_hook_CMPxx_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCMPxx_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCMPxx_2_( at RIP {:#x}\n", rip);
    return g_hook_CMPxx_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCMPxx_3_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCMPxx_3_( at RIP {:#x}\n", rip);
    return g_hook_CMPxx_3_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCOMIS(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCOMIS( at RIP {:#x}\n", rip);
    return g_hook_COMIS.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCPUID(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCPUID( at RIP {:#x}\n", rip);
    return g_hook_CPUID.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCQO(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCQO( at RIP {:#x}\n", rip);
    return g_hook_CQO.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCRC32(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCRC32( at RIP {:#x}\n", rip);
    return g_hook_CRC32.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCVTPI2xxMMx_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCVTPI2xxMMx_0_( at RIP {:#x}\n", rip);
    return g_hook_CVTPI2xxMMx_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCVTPI2xxMMx_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCVTPI2xxMMx_1_( at RIP {:#x}\n", rip);
    return g_hook_CVTPI2xxMMx_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCVTxx2PIMMx_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCVTxx2PIMMx_2_( at RIP {:#x}\n", rip);
    return g_hook_CVTxx2PIMMx_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCVTxx2PIMMx_3_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCVTxx2PIMMx_3_( at RIP {:#x}\n", rip);
    return g_hook_CVTxx2PIMMx_3_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCVTxx2PIMMx_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCVTxx2PIMMx_4_( at RIP {:#x}\n", rip);
    return g_hook_CVTxx2PIMMx_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCVTxx2PIMMx_5_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCVTxx2PIMMx_5_( at RIP {:#x}\n", rip);
    return g_hook_CVTxx2PIMMx_5_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCWD(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCWD( at RIP {:#x}\n", rip);
    return g_hook_CWD.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleCWDE(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleCWDE( at RIP {:#x}\n", rip);
    return g_hook_CWDE.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalJump_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalJump_0_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalJump_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalJump_10_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalJump_10_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalJump_10_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalJump_11_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalJump_11_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalJump_11_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalJump_12_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalJump_12_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalJump_12_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalJump_13_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalJump_13_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalJump_13_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalJump_14_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalJump_14_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalJump_14_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalJump_15_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalJump_15_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalJump_15_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalJump_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalJump_1_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalJump_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalJump_7_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalJump_7_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalJump_7_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalJump_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalJump_8_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalJump_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalJump_9_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalJump_9_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalJump_9_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_0_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_10_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_10_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_10_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_11_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_11_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_11_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_12_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_12_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_12_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_13_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_13_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_13_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_14_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_14_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_14_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_15_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_15_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_15_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_1_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_2_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_3_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_3_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_3_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_4_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_5_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_5_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_5_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_6_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_6_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_6_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_7_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_7_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_7_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_8_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleConditionalMove_9_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleConditionalMove_9_( at RIP {:#x}\n", rip);
    return g_hook_ConditionalMove_9_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleDPPD_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleDPPD_0_( at RIP {:#x}\n", rip);
    return g_hook_DPPD_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleDPPD_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleDPPD_1_( at RIP {:#x}\n", rip);
    return g_hook_DPPD_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleDPPS_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleDPPS_0_( at RIP {:#x}\n", rip);
    return g_hook_DPPS_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleDPPS_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleDPPS_1_( at RIP {:#x}\n", rip);
    return g_hook_DPPS_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleDivide_101_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleDivide_101_( at RIP {:#x}\n", rip);
    return g_hook_Divide_101_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleDivide_102_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleDivide_102_( at RIP {:#x}\n", rip);
    return g_hook_Divide_102_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleDoubleShiftInstruction_116_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleDoubleShiftInstruction_116_( at RIP {:#x}\n", rip);
    return g_hook_DoubleShiftInstruction_116_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleDoubleShiftInstruction_117_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleDoubleShiftInstruction_117_( at RIP {:#x}\n", rip);
    return g_hook_DoubleShiftInstruction_117_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleEMMS(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleEMMS( at RIP {:#x}\n", rip);
    return g_hook_EMMS.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleENTER(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleENTER( at RIP {:#x}\n", rip);
    return g_hook_ENTER.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleEXTRACTPS(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleEXTRACTPS( at RIP {:#x}\n", rip);
    return g_hook_EXTRACTPS.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleEXTRQ(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleEXTRQ( at RIP {:#x}\n", rip);
    return g_hook_EXTRQ.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFENCE_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFENCE_0_( at RIP {:#x}\n", rip);
    return g_hook_FENCE_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFENCE_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFENCE_1_( at RIP {:#x}\n", rip);
    return g_hook_FENCE_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFENCE_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFENCE_2_( at RIP {:#x}\n", rip);
    return g_hook_FENCE_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFILD(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFILD( at RIP {:#x}\n", rip);
    return g_hook_FILD.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFIST(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFIST( at RIP {:#x}\n", rip);
    return g_hook_FIST.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFISTP(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFISTP( at RIP {:#x}\n", rip);
    return g_hook_FISTP.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFLD(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFLD( at RIP {:#x}\n", rip);
    return g_hook_FLD.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFLD1(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFLD1( at RIP {:#x}\n", rip);
    return g_hook_FLD1.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFLDCW(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFLDCW( at RIP {:#x}\n", rip);
    return g_hook_FLDCW.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFLDZ(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFLDZ( at RIP {:#x}\n", rip);
    return g_hook_FLDZ.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFNCLEX(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFNCLEX( at RIP {:#x}\n", rip);
    return g_hook_FNCLEX.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFNINIT(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFNINIT( at RIP {:#x}\n", rip);
    return g_hook_FNINIT.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFNSTCW(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFNSTCW( at RIP {:#x}\n", rip);
    return g_hook_FNSTCW.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFNSTSW(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFNSTSW( at RIP {:#x}\n", rip);
    return g_hook_FNSTSW.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFST(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFST( at RIP {:#x}\n", rip);
    return g_hook_FST.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFSTP(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFSTP( at RIP {:#x}\n", rip);
    return g_hook_FSTP.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFXRSTOR(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFXRSTOR( at RIP {:#x}\n", rip);
    return g_hook_FXRSTOR.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleFXSAVE(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleFXSAVE( at RIP {:#x}\n", rip);
    return g_hook_FXSAVE.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleINSERTPS_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleINSERTPS_0_( at RIP {:#x}\n", rip);
    return g_hook_INSERTPS_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleINSERTPS_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleINSERTPS_1_( at RIP {:#x}\n", rip);
    return g_hook_INSERTPS_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleINSERTQ(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleINSERTQ( at RIP {:#x}\n", rip);
    return g_hook_INSERTQ.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleINT(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleINT( at RIP {:#x}\n", rip);
    return g_hook_INT.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleIRETQ(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleIRETQ( at RIP {:#x}\n", rip);
    return g_hook_IRETQ.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleIncrementDecrementInstruction_85_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleIncrementDecrementInstruction_85_( at RIP {:#x}\n", rip);
    return g_hook_IncrementDecrementInstruction_85_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleIncrementDecrementInstruction_94_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleIncrementDecrementInstruction_94_( at RIP {:#x}\n", rip);
    return g_hook_IncrementDecrementInstruction_94_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleJAE(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleJAE( at RIP {:#x}\n", rip);
    return g_hook_JAE.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleJB(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleJB( at RIP {:#x}\n", rip);
    return g_hook_JB.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleJBE(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleJBE( at RIP {:#x}\n", rip);
    return g_hook_JBE.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleJE(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleJE( at RIP {:#x}\n", rip);
    return g_hook_JE.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleJERCX(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleJERCX( at RIP {:#x}\n", rip);
    return g_hook_JERCX.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleJMP(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleJMP( at RIP {:#x}\n", rip);
    return g_hook_JMP.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleJNE(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleJNE( at RIP {:#x}\n", rip);
    return g_hook_JNE.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleLAHF(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleLAHF( at RIP {:#x}\n", rip);
    return g_hook_LAHF.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleLDMXCSR(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleLDMXCSR( at RIP {:#x}\n", rip);
    return g_hook_LDMXCSR.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleLEA(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleLEA( at RIP {:#x}\n", rip);
    return g_hook_LEA.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleLEAVE(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleLEAVE( at RIP {:#x}\n", rip);
    return g_hook_LEAVE.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleLoop_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleLoop_0_( at RIP {:#x}\n", rip);
    return g_hook_Loop_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleLoop_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleLoop_1_( at RIP {:#x}\n", rip);
    return g_hook_Loop_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleLoop_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleLoop_2_( at RIP {:#x}\n", rip);
    return g_hook_Loop_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOV(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOV( at RIP {:#x}\n", rip);
    auto ti = TTD::ThreadInfo::get();

    if (ti != nullptr) {
        auto rip = ti->get_register_value<uint64_t>(TTD::Rip);
        std::cout << fmt::format("MOV instruction at RIP: {:#x}\n", rip);
    }



    return g_hook_MOV.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVBE(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVBE( at RIP {:#x}\n", rip);
    return g_hook_MOVBE.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVDDUP_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVDDUP_0_( at RIP {:#x}\n", rip);
    return g_hook_MOVDDUP_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVDDUP_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVDDUP_1_( at RIP {:#x}\n", rip);
    return g_hook_MOVDDUP_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVDIRI(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVDIRI( at RIP {:#x}\n", rip);
    return g_hook_MOVDIRI.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVDQU(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVDQU( at RIP {:#x}\n", rip);
    return g_hook_MOVDQU.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVDQU_Unaligned(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVDQU_Unaligned( at RIP {:#x}\n", rip);
    return g_hook_MOVDQU_Unaligned.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVD_MOVQ(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVD_MOVQ( at RIP {:#x}\n", rip);
    return g_hook_MOVD_MOVQ.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVHPS_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVHPS_0_( at RIP {:#x}\n", rip);
    return g_hook_MOVHPS_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVHPS_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVHPS_1_( at RIP {:#x}\n", rip);
    return g_hook_MOVHPS_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVLPS_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVLPS_0_( at RIP {:#x}\n", rip);
    return g_hook_MOVLPS_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVLPS_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVLPS_1_( at RIP {:#x}\n", rip);
    return g_hook_MOVLPS_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVMSK_32_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVMSK_32_( at RIP {:#x}\n", rip);
    return g_hook_MOVMSK_32_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVMSK_64_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVMSK_64_( at RIP {:#x}\n", rip);
    return g_hook_MOVMSK_64_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVMSK_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVMSK_8_( at RIP {:#x}\n", rip);
    return g_hook_MOVMSK_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVNTDQA(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVNTDQA( at RIP {:#x}\n", rip);
    return g_hook_MOVNTDQA.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVNTSx_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVNTSx_8_( at RIP {:#x}\n", rip);
    return g_hook_MOVNTSx_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVQMmx(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVQMmx( at RIP {:#x}\n", rip);
    return g_hook_MOVQMmx.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVSD_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVSD_0_( at RIP {:#x}\n", rip);
    return g_hook_MOVSD_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVSD_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVSD_1_( at RIP {:#x}\n", rip);
    return g_hook_MOVSD_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVSS_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVSS_0_( at RIP {:#x}\n", rip);
    return g_hook_MOVSS_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVSS_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVSS_1_( at RIP {:#x}\n", rip);
    return g_hook_MOVSS_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVSX(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVSX( at RIP {:#x}\n", rip);
    return g_hook_MOVSX.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVSxDUP_0_160_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVSxDUP_0_160_( at RIP {:#x}\n", rip);
    return g_hook_MOVSxDUP_0_160_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVSxDUP_0_245_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVSxDUP_0_245_( at RIP {:#x}\n", rip);
    return g_hook_MOVSxDUP_0_245_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVSxDUP_1_160_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVSxDUP_1_160_( at RIP {:#x}\n", rip);
    return g_hook_MOVSxDUP_1_160_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVSxDUP_1_245_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVSxDUP_1_245_( at RIP {:#x}\n", rip);
    return g_hook_MOVSxDUP_1_245_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMOVZX(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMOVZX( at RIP {:#x}\n", rip);
    return g_hook_MOVZX.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMULX_BMI2(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMULX_BMI2( at RIP {:#x}\n", rip);
    return g_hook_MULX_BMI2.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMultiply_100_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMultiply_100_( at RIP {:#x}\n", rip);
    return g_hook_Multiply_100_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleMultiply_99_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleMultiply_99_( at RIP {:#x}\n", rip);
    return g_hook_Multiply_99_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleNEG(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleNEG( at RIP {:#x}\n", rip);
    auto ti = TTD::ThreadInfo::get();
    if (ti != nullptr) {
        auto rip = ti->get_register_value<uint64_t>(TTD::Rip);
        std::cout << fmt::format("NEG instruction at RIP: {:#x}\n", rip);
    }

    auto result = g_hook_NEG.unsafe_call<uint64_t>(decoder, instr);

    return result;
}
uint64_t HandleNOT(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleNOT( at RIP {:#x}\n", rip);
    return g_hook_NOT.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePABS_28_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePABS_28_0_( at RIP {:#x}\n", rip);
    return g_hook_PABS_28_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePABS_29_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePABS_29_1_( at RIP {:#x}\n", rip);
    return g_hook_PABS_29_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePABS_30_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePABS_30_2_( at RIP {:#x}\n", rip);
    return g_hook_PABS_30_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePALIGNR(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePALIGNR( at RIP {:#x}\n", rip);
    return g_hook_PALIGNR.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePCMPxSTRx_0_0_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePCMPxSTRx_0_0_1_( at RIP {:#x}\n", rip);
    return g_hook_PCMPxSTRx_0_0_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePCMPxSTRx_0_1_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePCMPxSTRx_0_1_0_( at RIP {:#x}\n", rip);
    return g_hook_PCMPxSTRx_0_1_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePCMPxSTRx_0_1_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePCMPxSTRx_0_1_1_( at RIP {:#x}\n", rip);
    return g_hook_PCMPxSTRx_0_1_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePCMPxSTRx_1_0_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePCMPxSTRx_1_0_0_( at RIP {:#x}\n", rip);
    return g_hook_PCMPxSTRx_1_0_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePCMPxSTRx_1_0_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePCMPxSTRx_1_0_1_( at RIP {:#x}\n", rip);
    return g_hook_PCMPxSTRx_1_0_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePCMPxSTRx_1_1_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePCMPxSTRx_1_1_1_( at RIP {:#x}\n", rip);
    return g_hook_PCMPxSTRx_1_1_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePEXTR_16_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePEXTR_16_( at RIP {:#x}\n", rip);
    return g_hook_PEXTR_16_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePEXTR_32_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePEXTR_32_( at RIP {:#x}\n", rip);
    return g_hook_PEXTR_32_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePEXTR_64_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePEXTR_64_( at RIP {:#x}\n", rip);
    return g_hook_PEXTR_64_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePEXTR_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePEXTR_8_( at RIP {:#x}\n", rip);
    return g_hook_PEXTR_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePINSR_0_16_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePINSR_0_16_( at RIP {:#x}\n", rip);
    return g_hook_PINSR_0_16_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePINSR_0_32_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePINSR_0_32_( at RIP {:#x}\n", rip);
    return g_hook_PINSR_0_32_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePINSR_0_64_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePINSR_0_64_( at RIP {:#x}\n", rip);
    return g_hook_PINSR_0_64_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePINSR_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePINSR_0_8_( at RIP {:#x}\n", rip);
    return g_hook_PINSR_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePINSR_1_16_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePINSR_1_16_( at RIP {:#x}\n", rip);
    return g_hook_PINSR_1_16_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePINSR_1_32_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePINSR_1_32_( at RIP {:#x}\n", rip);
    return g_hook_PINSR_1_32_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePINSR_1_64_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePINSR_1_64_( at RIP {:#x}\n", rip);
    return g_hook_PINSR_1_64_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePINSR_1_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePINSR_1_8_( at RIP {:#x}\n", rip);
    return g_hook_PINSR_1_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePOP(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePOP( at RIP {:#x}\n", rip);
    auto ti = TTD::ThreadInfo::get();

    if (ti != nullptr) {
        auto rip = ti->get_register_value<uint64_t>(TTD::Rip);

        //spdlog::info("Handling POP at RIP: {:#x}", rip);
        std::cout << fmt::format("Handling POP at RIP: {:#x}\n", rip);
    }

    return g_hook_POP.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePOPF(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePOPF( at RIP {:#x}\n", rip);
    return g_hook_POPF.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePOPFD(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePOPFD( at RIP {:#x}\n", rip);
    //spdlog::info("Handling POPFD");

    auto ti = TTD::ThreadInfo::get();

    if (ti != nullptr) {
        auto rsp = ti->get_register_value<uint64_t>(TTD::Rsp);

        // Check if trap flag is set
        const auto eflags = *(uint64_t*)(rsp);

        if (eflags & 0x100) {
            //spdlog::info("Trap flag is set, skipping POPF");
            std::cout << "Trap flag is set, skipping POPF\n";

            // Trigger int3 instead
            auto tg = (decltype(HandleINT)*)g_hook_INT.target();
            return tg(decoder, instr);
        }
    }

    auto result = g_hook_POPFD.unsafe_call<uint64_t>(decoder, instr);

    return result;
}
uint64_t HandlePSHUFB(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePSHUFB( at RIP {:#x}\n", rip);
    return g_hook_PSHUFB.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePSHUFW(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePSHUFW( at RIP {:#x}\n", rip);
    return g_hook_PSHUFW.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePSLL_SRA_SRL_28_28_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePSLL_SRA_SRL_28_28_( at RIP {:#x}\n", rip);
    return g_hook_PSLL_SRA_SRL_28_28_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePSLL_SRA_SRL_29_29_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePSLL_SRA_SRL_29_29_( at RIP {:#x}\n", rip);
    return g_hook_PSLL_SRA_SRL_29_29_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePSLL_SRA_SRL_30_30_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePSLL_SRA_SRL_30_30_( at RIP {:#x}\n", rip);
    return g_hook_PSLL_SRA_SRL_30_30_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePSLL_SRA_SRL_31_31_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePSLL_SRA_SRL_31_31_( at RIP {:#x}\n", rip);
    return g_hook_PSLL_SRA_SRL_31_31_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePSLL_SRA_SRL_32_32_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePSLL_SRA_SRL_32_32_( at RIP {:#x}\n", rip);
    return g_hook_PSLL_SRA_SRL_32_32_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePSLL_SRA_SRL_33_33_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePSLL_SRA_SRL_33_33_( at RIP {:#x}\n", rip);
    return g_hook_PSLL_SRA_SRL_33_33_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePSLL_SRA_SRL_34_34_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePSLL_SRA_SRL_34_34_( at RIP {:#x}\n", rip);
    return g_hook_PSLL_SRA_SRL_34_34_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePSLL_SRA_SRL_35_35_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePSLL_SRA_SRL_35_35_( at RIP {:#x}\n", rip);
    return g_hook_PSLL_SRA_SRL_35_35_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePTEST_0_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePTEST_0_0_( at RIP {:#x}\n", rip);
    return g_hook_PTEST_0_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePTEST_1_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePTEST_1_0_( at RIP {:#x}\n", rip);
    return g_hook_PTEST_1_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePTEST_1_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePTEST_1_1_( at RIP {:#x}\n", rip);
    return g_hook_PTEST_1_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePTEST_1_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePTEST_1_2_( at RIP {:#x}\n", rip);
    return g_hook_PTEST_1_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePUSH(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePUSH( at RIP {:#x}\n", rip);
    return g_hook_PUSH.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePUSHF(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePUSHF( at RIP {:#x}\n", rip);
    return g_hook_PUSHF.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandlePUSHFD(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandlePUSHFD( at RIP {:#x}\n", rip);
    return g_hook_PUSHFD.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_0_11_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_0_11_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_0_11_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_0_12_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_0_12_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_0_12_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_0_15_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_0_15_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_0_15_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_0_16_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_0_16_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_0_16_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_0_19_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_0_19_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_0_19_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_0_20_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_0_20_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_0_20_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_0_21_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_0_21_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_0_21_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_0_22_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_0_22_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_0_22_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_0_3_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_0_3_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_0_3_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_0_7_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_0_7_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_0_7_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_1_11_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_1_11_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_1_11_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_1_12_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_1_12_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_1_12_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_1_15_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_1_15_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_1_15_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_1_16_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_1_16_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_1_16_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_1_19_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_1_19_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_1_19_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_1_20_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_1_20_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_1_20_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_1_21_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_1_21_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_1_21_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_1_22_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_1_22_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_1_22_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_1_3_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_1_3_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_1_3_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_1_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_1_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_1_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_1_7_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_1_7_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_1_7_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_1_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_1_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_1_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_2_11_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_2_11_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_2_11_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_2_12_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_2_12_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_2_12_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_2_15_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_2_15_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_2_15_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_2_16_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_2_16_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_2_16_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_2_19_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_2_19_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_2_19_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_2_20_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_2_20_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_2_20_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_2_21_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_2_21_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_2_21_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_2_22_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_2_22_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_2_22_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_2_3_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_2_3_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_2_3_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_2_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_2_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_2_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_2_7_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_2_7_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_2_7_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelFMA3_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelFMA3_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelFMA3_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandAndImmToDestinationAvx_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandAndImmToDestinationAvx_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandAndImmToDestinationAvx_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandAndImmToDestinationAvx_1_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandAndImmToDestinationAvx_1_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandAndImmToDestinationAvx_1_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxXY_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxXY_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxXY_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxXY_5_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxXY_5_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxXY_5_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxXY_6_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxXY_6_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxXY_6_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_1_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_1_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_1_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_31_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_31_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_31_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_32_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_32_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_32_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_33_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_33_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_33_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_34_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_34_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_34_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_35_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_35_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_35_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_36_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_36_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_36_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_37_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_37_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_37_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_38_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_38_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_38_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_39_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_39_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_39_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_40_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_40_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_40_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_41_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_41_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_41_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_42_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_42_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_42_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_64_8_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_64_8_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_64_8_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvxYX_7_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvxYX_7_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvxYX_7_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvx_0_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvx_0_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvx_0_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvx_20_2147483648_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvx_20_2147483648_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvx_20_2147483648_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvx_21_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvx_21_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvx_21_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvx_22_2147483648_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvx_22_2147483648_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvx_22_2147483648_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvx_23_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvx_23_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvx_23_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvx_27_2_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvx_27_2_0_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvx_27_2_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvx_28_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvx_28_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvx_28_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvx_29_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvx_29_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvx_29_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvx_2_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvx_2_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvx_2_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvx_30_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvx_30_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvx_30_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd1OperandToDestinationAvx_3_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd1OperandToDestinationAvx_3_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd1OperandToDestinationAvx_3_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandAndImmToDestinationAvx_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandAndImmToDestinationAvx_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandAndImmToDestinationAvx_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandAndImmToDestinationAvx_1_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandAndImmToDestinationAvx_1_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandAndImmToDestinationAvx_1_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandAndImmToDestinationAvx_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandAndImmToDestinationAvx_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandAndImmToDestinationAvx_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_0_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_0_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_0_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_100_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_100_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_100_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_101_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_101_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_101_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_102_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_102_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_102_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_103_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_103_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_103_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_104_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_104_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_104_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_105_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_105_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_105_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_106_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_106_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_106_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_107_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_107_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_107_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_10_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_10_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_10_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_11_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_11_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_11_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_124_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_124_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_124_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_125_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_125_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_125_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_126_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_126_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_126_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_127_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_127_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_127_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_128_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_128_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_128_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_129_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_129_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_129_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_12_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_12_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_12_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_130_2_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_130_2_2_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_130_2_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_131_2_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_131_2_2_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_131_2_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_132_2_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_132_2_2_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_132_2_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_133_2_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_133_2_2_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_133_2_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_134_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_134_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_134_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_135_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_135_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_135_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_136_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_136_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_136_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_137_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_137_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_137_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_138_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_138_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_138_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_139_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_139_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_139_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_13_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_13_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_13_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_140_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_140_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_140_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_141_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_141_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_141_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_142_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_142_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_142_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_143_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_143_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_143_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_144_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_144_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_144_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_145_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_145_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_145_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_146_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_146_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_146_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_147_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_147_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_147_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_148_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_148_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_148_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_149_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_149_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_149_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_14_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_14_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_14_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_150_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_150_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_150_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_151_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_151_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_151_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_152_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_152_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_152_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_153_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_153_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_153_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_154_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_154_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_154_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_155_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_155_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_155_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_156_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_156_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_156_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_157_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_157_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_157_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_158_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_158_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_158_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_159_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_159_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_159_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_15_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_15_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_15_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_160_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_160_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_160_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_161_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_161_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_161_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_16_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_16_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_16_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_17_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_17_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_17_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_182_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_182_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_182_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_183_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_183_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_183_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_184_2_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_184_2_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_184_2_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_18_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_18_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_18_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_19_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_19_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_19_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_1_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_1_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_1_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_20_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_20_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_20_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_21_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_21_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_21_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_22_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_22_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_22_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_23_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_23_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_23_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_24_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_24_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_24_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_25_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_25_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_25_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_26_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_26_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_26_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_27_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_27_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_27_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_2_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_2_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_2_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_36_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_36_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_36_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_37_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_37_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_37_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_38_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_38_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_38_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_39_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_39_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_39_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_3_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_3_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_3_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_40_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_40_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_40_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_41_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_41_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_41_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_42_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_42_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_42_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_43_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_43_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_43_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_44_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_44_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_44_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_45_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_45_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_45_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_46_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_46_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_46_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_47_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_47_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_47_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_48_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_48_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_48_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_49_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_49_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_49_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_4_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_4_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_4_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_50_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_50_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_50_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_51_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_51_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_51_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_52_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_52_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_52_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_53_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_53_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_53_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_54_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_54_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_54_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_55_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_55_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_55_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_56_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_56_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_56_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_57_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_57_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_57_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_58_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_58_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_58_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_59_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_59_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_59_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_5_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_5_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_5_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_60_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_60_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_60_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_61_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_61_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_61_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_62_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_62_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_62_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_63_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_63_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_63_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_64_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_64_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_64_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_65_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_65_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_65_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_66_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_66_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_66_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_67_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_67_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_67_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_68_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_68_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_68_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_69_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_69_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_69_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_6_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_6_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_6_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_70_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_70_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_70_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_71_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_71_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_71_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_72_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_72_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_72_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_73_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_73_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_73_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_7_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_7_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_7_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_8_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_8_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_8_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_90_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_90_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_90_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_91_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_91_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_91_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_92_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_92_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_92_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_93_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_93_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_93_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_94_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_94_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_94_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_95_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_95_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_95_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_96_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_96_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_96_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_97_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_97_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_97_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_98_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_98_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_98_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_99_0_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_99_0_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_99_0_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd2OperandToDestinationAvx_9_0_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd2OperandToDestinationAvx_9_0_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd2OperandToDestinationAvx_9_0_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd3OperandAndImmToDestinationAvx_3_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd3OperandAndImmToDestinationAvx_3_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd3OperandAndImmToDestinationAvx_3_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd3OperandAndImmToDestinationAvx_4_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd3OperandAndImmToDestinationAvx_4_4_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd3OperandAndImmToDestinationAvx_4_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd3OperandAndImmToDestinationAvx_5_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd3OperandAndImmToDestinationAvx_5_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd3OperandAndImmToDestinationAvx_5_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd3OperandAndImmToDestinationAvx_6_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd3OperandAndImmToDestinationAvx_6_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd3OperandAndImmToDestinationAvx_6_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd3OperandAndImmToDestinationAvx_7_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd3OperandAndImmToDestinationAvx_7_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd3OperandAndImmToDestinationAvx_7_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd3OperandToDestinationAvx_285_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd3OperandToDestinationAvx_285_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd3OperandToDestinationAvx_285_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd3OperandToDestinationAvx_286_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd3OperandToDestinationAvx_286_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd3OperandToDestinationAvx_286_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd3OperandToDestinationAvx_287_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd3OperandToDestinationAvx_287_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd3OperandToDestinationAvx_287_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd3OperandToDestinationAvx_288_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd3OperandToDestinationAvx_288_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd3OperandToDestinationAvx_288_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleParallelSimd3OperandToDestinationAvx_289_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleParallelSimd3OperandToDestinationAvx_289_8_( at RIP {:#x}\n", rip);
    return g_hook_ParallelSimd3OperandToDestinationAvx_289_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleRDTSC(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleRDTSC( at RIP {:#x}\n", rip);
    return g_hook_RDTSC.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleRDTSCP(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleRDTSCP( at RIP {:#x}\n", rip);
    return g_hook_RDTSCP.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleRET(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleRET( at RIP {:#x}\n", rip);
    return g_hook_RET.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleROUNDPx_0_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleROUNDPx_0_2_( at RIP {:#x}\n", rip);
    return g_hook_ROUNDPx_0_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleROUNDPx_0_3_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleROUNDPx_0_3_( at RIP {:#x}\n", rip);
    return g_hook_ROUNDPx_0_3_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleROUNDPx_1_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleROUNDPx_1_2_( at RIP {:#x}\n", rip);
    return g_hook_ROUNDPx_1_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleROUNDPx_1_3_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleROUNDPx_1_3_( at RIP {:#x}\n", rip);
    return g_hook_ROUNDPx_1_3_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleROUNDSx_0_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleROUNDSx_0_0_( at RIP {:#x}\n", rip);
    return g_hook_ROUNDSx_0_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleROUNDSx_0_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleROUNDSx_0_1_( at RIP {:#x}\n", rip);
    return g_hook_ROUNDSx_0_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleROUNDSx_1_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleROUNDSx_1_0_( at RIP {:#x}\n", rip);
    return g_hook_ROUNDSx_1_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleROUNDSx_1_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleROUNDSx_1_1_( at RIP {:#x}\n", rip);
    return g_hook_ROUNDSx_1_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleRotateInstructionBMI2_112_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleRotateInstructionBMI2_112_( at RIP {:#x}\n", rip);
    return g_hook_RotateInstructionBMI2_112_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleRotateInstruction_112_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleRotateInstruction_112_( at RIP {:#x}\n", rip);
    return g_hook_RotateInstruction_112_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleRotateInstruction_113_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleRotateInstruction_113_( at RIP {:#x}\n", rip);
    return g_hook_RotateInstruction_113_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleRotateInstruction_114_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleRotateInstruction_114_( at RIP {:#x}\n", rip);
    return g_hook_RotateInstruction_114_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleRotateInstruction_115_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleRotateInstruction_115_( at RIP {:#x}\n", rip);
    return g_hook_RotateInstruction_115_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSAHF(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSAHF( at RIP {:#x}\n", rip);
    return g_hook_SAHF.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSHA1(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSHA1( at RIP {:#x}\n", rip);
    return g_hook_SHA1.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSTC(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSTC( at RIP {:#x}\n", rip);
    return g_hook_STC.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSTD(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSTD( at RIP {:#x}\n", rip);
    return g_hook_STD.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSTMXCSR(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSTMXCSR( at RIP {:#x}\n", rip);
    return g_hook_STMXCSR.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_0_10_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_0_10_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_0_10_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_0_13_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_0_13_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_0_13_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_0_14_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_0_14_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_0_14_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_0_17_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_0_17_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_0_17_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_0_18_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_0_18_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_0_18_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_0_5_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_0_5_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_0_5_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_0_6_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_0_6_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_0_6_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_0_9_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_0_9_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_0_9_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_1_10_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_1_10_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_1_10_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_1_13_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_1_13_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_1_13_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_1_14_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_1_14_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_1_14_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_1_17_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_1_17_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_1_17_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_1_18_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_1_18_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_1_18_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_1_5_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_1_5_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_1_5_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_1_6_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_1_6_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_1_6_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_1_9_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_1_9_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_1_9_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_2_10_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_2_10_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_2_10_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_2_13_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_2_13_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_2_13_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_2_14_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_2_14_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_2_14_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_2_17_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_2_17_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_2_17_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_2_18_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_2_18_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_2_18_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_2_5_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_2_5_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_2_5_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_2_6_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_2_6_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_2_6_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleScalarFMA3_2_9_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleScalarFMA3_2_9_( at RIP {:#x}\n", rip);
    return g_hook_ScalarFMA3_2_9_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_0_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_10_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_10_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_10_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_11_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_11_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_11_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_12_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_12_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_12_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_13_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_13_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_13_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_14_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_14_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_14_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_15_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_15_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_15_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_1_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_2_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_3_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_3_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_3_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_4_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_5_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_5_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_5_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_6_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_6_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_6_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_7_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_7_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_7_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_8_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSetConditional_9_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSetConditional_9_( at RIP {:#x}\n", rip);
    return g_hook_SetConditional_9_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleShiftInstructionBMI2_109_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleShiftInstructionBMI2_109_( at RIP {:#x}\n", rip);
    return g_hook_ShiftInstructionBMI2_109_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleShiftInstructionBMI2_110_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleShiftInstructionBMI2_110_( at RIP {:#x}\n", rip);
    return g_hook_ShiftInstructionBMI2_110_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleShiftInstructionBMI2_111_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleShiftInstructionBMI2_111_( at RIP {:#x}\n", rip);
    return g_hook_ShiftInstructionBMI2_111_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleShiftInstruction_109_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleShiftInstruction_109_( at RIP {:#x}\n", rip);
    return g_hook_ShiftInstruction_109_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleShiftInstruction_110_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleShiftInstruction_110_( at RIP {:#x}\n", rip);
    return g_hook_ShiftInstruction_110_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleShiftInstruction_111_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleShiftInstruction_111_( at RIP {:#x}\n", rip);
    return g_hook_ShiftInstruction_111_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandAndImmToDestination_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandAndImmToDestination_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandAndImmToDestination_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandAndImmToDestination_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandAndImmToDestination_1_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandAndImmToDestination_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandFromGpr32Source_10_13_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandFromGpr32Source_10_13_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandFromGpr32Source_10_13_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandFromGpr32Source_16_19_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandFromGpr32Source_16_19_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandFromGpr32Source_16_19_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestinationAvx_24_2147483648_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestinationAvx_24_2147483648_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestinationAvx_24_2147483648_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestinationAvx_25_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestinationAvx_25_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestinationAvx_25_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestinationAvx_26_2147483648_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestinationAvx_26_2147483648_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestinationAvx_26_2147483648_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_0_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_0_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_0_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_1_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_1_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_1_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_20_2147483648_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_20_2147483648_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_20_2147483648_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_21_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_21_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_21_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_22_2147483648_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_22_2147483648_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_22_2147483648_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_23_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_23_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_23_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_24_2147483648_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_24_2147483648_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_24_2147483648_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_25_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_25_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_25_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_26_2147483648_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_26_2147483648_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_26_2147483648_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_27_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_27_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_27_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_2_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_2_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_2_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_31_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_31_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_31_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_32_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_32_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_32_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_33_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_33_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_33_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_34_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_34_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_34_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_35_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_35_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_35_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_36_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_36_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_36_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_37_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_37_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_37_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_38_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_38_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_38_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_39_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_39_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_39_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_3_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_3_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_3_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_40_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_40_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_40_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_41_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_41_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_41_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_42_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_42_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_42_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_43_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_43_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_43_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_4_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_4_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_4_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_5_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_5_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_5_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_6_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_6_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_6_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToDestination_7_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToDestination_7_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToDestination_7_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToGpr32Destination_14_17_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToGpr32Destination_14_17_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToGpr32Destination_14_17_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToGpr32Destination_15_18_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToGpr32Destination_15_18_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToGpr32Destination_15_18_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToGpr32Destination_8_11_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToGpr32Destination_8_11_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToGpr32Destination_8_11_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd1OperandToGpr32Destination_9_12_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd1OperandToGpr32Destination_9_12_( at RIP {:#x}\n", rip);
    return g_hook_Simd1OperandToGpr32Destination_9_12_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandAndImmToDestination_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandAndImmToDestination_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandAndImmToDestination_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandAndImmToDestination_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandAndImmToDestination_1_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandAndImmToDestination_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandAndImmToDestination_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandAndImmToDestination_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandAndImmToDestination_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandAndImmToDestination_3_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandAndImmToDestination_3_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandAndImmToDestination_3_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandAndImmToDestination_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandAndImmToDestination_4_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandAndImmToDestination_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandAndImmToDestination_6_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandAndImmToDestination_6_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandAndImmToDestination_6_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandAndImmToDestination_7_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandAndImmToDestination_7_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandAndImmToDestination_7_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandFromGpr32SourceAvx_10_13_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandFromGpr32SourceAvx_10_13_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandFromGpr32SourceAvx_10_13_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandFromGpr32SourceAvx_16_19_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandFromGpr32SourceAvx_16_19_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandFromGpr32SourceAvx_16_19_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_0_0_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_0_0_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_0_0_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_10_10_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_10_10_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_10_10_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_11_11_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_11_11_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_11_11_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_12_12_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_12_12_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_12_12_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_13_13_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_13_13_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_13_13_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_141_56_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_141_56_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_141_56_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_142_57_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_142_57_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_142_57_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_143_58_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_143_58_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_143_58_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_144_59_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_144_59_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_144_59_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_145_60_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_145_60_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_145_60_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_146_61_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_146_61_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_146_61_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_147_62_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_147_62_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_147_62_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_148_63_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_148_63_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_148_63_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_149_64_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_149_64_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_149_64_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_14_14_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_14_14_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_14_14_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_150_65_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_150_65_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_150_65_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_151_66_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_151_66_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_151_66_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_15_15_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_15_15_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_15_15_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_16_16_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_16_16_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_16_16_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_17_17_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_17_17_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_17_17_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_18_18_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_18_18_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_18_18_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_19_19_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_19_19_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_19_19_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_1_1_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_1_1_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_1_1_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_20_20_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_20_20_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_20_20_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_21_21_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_21_21_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_21_21_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_22_22_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_22_22_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_22_22_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_23_23_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_23_23_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_23_23_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_24_24_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_24_24_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_24_24_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_25_25_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_25_25_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_25_25_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_26_26_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_26_26_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_26_26_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_27_27_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_27_27_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_27_27_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_2_2_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_2_2_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_2_2_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_36_36_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_36_36_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_36_36_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_37_37_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_37_37_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_37_37_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_38_38_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_38_38_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_38_38_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_39_39_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_39_39_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_39_39_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_3_3_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_3_3_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_3_3_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_40_40_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_40_40_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_40_40_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_41_41_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_41_41_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_41_41_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_42_42_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_42_42_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_42_42_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_43_43_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_43_43_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_43_43_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_44_44_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_44_44_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_44_44_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_45_45_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_45_45_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_45_45_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_46_46_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_46_46_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_46_46_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_47_47_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_47_47_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_47_47_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_48_48_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_48_48_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_48_48_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_49_49_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_49_49_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_49_49_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_4_4_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_4_4_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_4_4_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_50_50_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_50_50_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_50_50_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_51_51_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_51_51_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_51_51_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_52_52_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_52_52_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_52_52_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_53_53_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_53_53_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_53_53_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_54_54_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_54_54_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_54_54_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_5_5_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_5_5_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_5_5_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_6_6_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_6_6_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_6_6_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_7_7_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_7_7_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_7_7_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_8_8_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_8_8_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_8_8_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestinationSSEOrMmx_9_9_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestinationSSEOrMmx_9_9_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestinationSSEOrMmx_9_9_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_100_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_100_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_100_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_101_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_101_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_101_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_102_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_102_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_102_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_103_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_103_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_103_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_104_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_104_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_104_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_105_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_105_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_105_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_106_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_106_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_106_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_107_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_107_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_107_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_124_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_124_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_124_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_125_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_125_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_125_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_126_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_126_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_126_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_127_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_127_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_127_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_128_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_128_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_128_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_129_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_129_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_129_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_130_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_130_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_130_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_131_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_131_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_131_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_132_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_132_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_132_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_133_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_133_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_133_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_134_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_134_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_134_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_135_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_135_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_135_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_136_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_136_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_136_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_137_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_137_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_137_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_138_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_138_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_138_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_139_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_139_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_139_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_152_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_152_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_152_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_153_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_153_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_153_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_154_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_154_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_154_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_155_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_155_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_155_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_156_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_156_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_156_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_157_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_157_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_157_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_158_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_158_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_158_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_159_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_159_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_159_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_160_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_160_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_160_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_161_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_161_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_161_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_182_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_182_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_182_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_183_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_183_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_183_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_184_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_184_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_184_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_298_65536_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_298_65536_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_298_65536_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_299_65536_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_299_65536_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_299_65536_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_300_65536_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_300_65536_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_300_65536_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_301_65536_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_301_65536_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_301_65536_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_302_65536_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_302_65536_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_302_65536_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_55_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_55_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_55_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_56_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_56_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_56_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_57_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_57_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_57_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_58_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_58_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_58_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_59_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_59_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_59_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_60_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_60_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_60_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_61_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_61_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_61_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_62_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_62_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_62_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_63_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_63_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_63_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_64_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_64_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_64_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_65_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_65_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_65_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_66_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_66_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_66_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_67_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_67_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_67_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_68_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_68_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_68_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_69_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_69_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_69_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_70_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_70_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_70_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_71_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_71_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_71_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_72_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_72_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_72_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_73_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_73_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_73_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_90_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_90_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_90_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_91_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_91_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_91_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_92_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_92_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_92_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_93_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_93_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_93_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_94_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_94_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_94_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_95_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_95_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_95_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_96_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_96_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_96_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_97_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_97_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_97_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_98_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_98_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_98_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd2OperandToDestination_99_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd2OperandToDestination_99_0_( at RIP {:#x}\n", rip);
    return g_hook_Simd2OperandToDestination_99_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd3OperandImplicitXMM0_0_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd3OperandImplicitXMM0_0_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd3OperandImplicitXMM0_0_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd3OperandImplicitXMM0_1_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd3OperandImplicitXMM0_1_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd3OperandImplicitXMM0_1_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd3OperandImplicitXMM0_23_65536_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd3OperandImplicitXMM0_23_65536_( at RIP {:#x}\n", rip);
    return g_hook_Simd3OperandImplicitXMM0_23_65536_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimd3OperandImplicitXMM0_2_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimd3OperandImplicitXMM0_2_2_( at RIP {:#x}\n", rip);
    return g_hook_Simd3OperandImplicitXMM0_2_2_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_108_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_108_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_108_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_109_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_109_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_109_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_110_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_110_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_110_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_111_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_111_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_111_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_112_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_112_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_112_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_113_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_113_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_113_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_114_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_114_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_114_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_115_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_115_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_115_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_116_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_116_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_116_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_117_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_117_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_117_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_118_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_118_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_118_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_119_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_119_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_119_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_120_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_120_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_120_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_121_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_121_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_121_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_122_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_122_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_122_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_123_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_123_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_123_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_74_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_74_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_74_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_75_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_75_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_75_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_76_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_76_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_76_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_77_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_77_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_77_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_78_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_78_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_78_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_79_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_79_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_79_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_80_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_80_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_80_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_81_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_81_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_81_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_82_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_82_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_82_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_83_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_83_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_83_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_84_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_84_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_84_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_85_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_85_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_85_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_86_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_86_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_86_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_87_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_87_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_87_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_88_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_88_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_88_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdFloatCompare_89_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdFloatCompare_89_( at RIP {:#x}\n", rip);
    return g_hook_SimdFloatCompare_89_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_108_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_108_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_108_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_109_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_109_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_109_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_110_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_110_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_110_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_111_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_111_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_111_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_112_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_112_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_112_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_113_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_113_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_113_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_114_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_114_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_114_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_115_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_115_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_115_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_116_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_116_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_116_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_117_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_117_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_117_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_118_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_118_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_118_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_119_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_119_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_119_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_120_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_120_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_120_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_121_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_121_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_121_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_122_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_122_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_122_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_123_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_123_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_123_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_187_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_187_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_187_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_188_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_188_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_188_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_189_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_189_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_189_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_190_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_190_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_190_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_191_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_191_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_191_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_192_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_192_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_192_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_193_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_193_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_193_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_194_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_194_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_194_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_195_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_195_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_195_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_196_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_196_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_196_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_197_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_197_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_197_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_198_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_198_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_198_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_199_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_199_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_199_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_200_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_200_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_200_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_201_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_201_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_201_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_202_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_202_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_202_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_203_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_203_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_203_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_204_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_204_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_204_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_205_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_205_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_205_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_206_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_206_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_206_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_207_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_207_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_207_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_208_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_208_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_208_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_209_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_209_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_209_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_210_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_210_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_210_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_211_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_211_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_211_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_212_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_212_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_212_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_213_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_213_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_213_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_214_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_214_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_214_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_215_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_215_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_215_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_216_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_216_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_216_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_217_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_217_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_217_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_218_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_218_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_218_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_219_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_219_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_219_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_220_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_220_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_220_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_221_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_221_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_221_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_222_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_222_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_222_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_223_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_223_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_223_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_224_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_224_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_224_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_225_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_225_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_225_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_226_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_226_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_226_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_227_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_227_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_227_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_228_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_228_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_228_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_229_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_229_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_229_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_230_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_230_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_230_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_231_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_231_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_231_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_232_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_232_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_232_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_233_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_233_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_233_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_234_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_234_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_234_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_235_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_235_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_235_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_236_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_236_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_236_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_237_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_237_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_237_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_238_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_238_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_238_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_239_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_239_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_239_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_240_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_240_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_240_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_241_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_241_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_241_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_242_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_242_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_242_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_243_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_243_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_243_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_244_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_244_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_244_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_245_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_245_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_245_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_246_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_246_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_246_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_247_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_247_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_247_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_248_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_248_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_248_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_249_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_249_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_249_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_250_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_250_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_250_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_251_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_251_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_251_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_252_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_252_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_252_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_253_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_253_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_253_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_254_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_254_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_254_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_255_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_255_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_255_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_256_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_256_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_256_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_257_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_257_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_257_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_258_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_258_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_258_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_259_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_259_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_259_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_260_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_260_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_260_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_261_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_261_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_261_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_262_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_262_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_262_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_263_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_263_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_263_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_264_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_264_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_264_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_265_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_265_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_265_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_266_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_266_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_266_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_267_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_267_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_267_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_268_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_268_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_268_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_269_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_269_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_269_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_270_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_270_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_270_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_271_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_271_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_271_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_272_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_272_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_272_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_273_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_273_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_273_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_274_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_274_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_274_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_275_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_275_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_275_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_276_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_276_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_276_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_277_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_277_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_277_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_278_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_278_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_278_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_279_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_279_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_279_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_280_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_280_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_280_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_281_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_281_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_281_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_282_4_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_282_4_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_282_4_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_74_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_74_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_74_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_75_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_75_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_75_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_76_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_76_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_76_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_77_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_77_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_77_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_78_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_78_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_78_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_79_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_79_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_79_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_80_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_80_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_80_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_81_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_81_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_81_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_82_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_82_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_82_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_83_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_83_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_83_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_84_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_84_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_84_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_85_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_85_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_85_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_86_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_86_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_86_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_87_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_87_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_87_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_88_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_88_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_88_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleSimdParallelFloatCompareAvx_89_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleSimdParallelFloatCompareAvx_89_0_( at RIP {:#x}\n", rip);
    return g_hook_SimdParallelFloatCompareAvx_89_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleStringInstruction(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleStringInstruction( at RIP {:#x}\n", rip);
    return g_hook_StringInstruction.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleTEST(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleTEST( at RIP {:#x}\n", rip);
    return g_hook_TEST.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleTrap(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleTrap( at RIP {:#x}\n", rip);
    return g_hook_Trap.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleTwoOperandArithmeticInstruction_84_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleTwoOperandArithmeticInstruction_84_0_( at RIP {:#x}\n", rip);
    return g_hook_TwoOperandArithmeticInstruction_84_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleTwoOperandArithmeticInstruction_84_24_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleTwoOperandArithmeticInstruction_84_24_( at RIP {:#x}\n", rip);
    return g_hook_TwoOperandArithmeticInstruction_84_24_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleTwoOperandArithmeticInstruction_93_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleTwoOperandArithmeticInstruction_93_0_( at RIP {:#x}\n", rip);
    return g_hook_TwoOperandArithmeticInstruction_93_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleTwoOperandArithmeticInstruction_93_24_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleTwoOperandArithmeticInstruction_93_24_( at RIP {:#x}\n", rip);
    return g_hook_TwoOperandArithmeticInstruction_93_24_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleTwoOperandLogicInstruction_104_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleTwoOperandLogicInstruction_104_( at RIP {:#x}\n", rip);
    return g_hook_TwoOperandLogicInstruction_104_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleTwoOperandLogicInstruction_106_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleTwoOperandLogicInstruction_106_( at RIP {:#x}\n", rip);
    return g_hook_TwoOperandLogicInstruction_106_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleTwoOperandLogicInstruction_108_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleTwoOperandLogicInstruction_108_( at RIP {:#x}\n", rip);
    return g_hook_TwoOperandLogicInstruction_108_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVBROADCASTx128(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVBROADCASTx128( at RIP {:#x}\n", rip);
    return g_hook_VBROADCASTx128.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVBROADCASTxx_61_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVBROADCASTxx_61_0_( at RIP {:#x}\n", rip);
    return g_hook_VBROADCASTxx_61_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVBROADCASTxx_61_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVBROADCASTxx_61_8_( at RIP {:#x}\n", rip);
    return g_hook_VBROADCASTxx_61_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVBROADCASTxx_63_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVBROADCASTxx_63_0_( at RIP {:#x}\n", rip);
    return g_hook_VBROADCASTxx_63_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVBROADCASTxx_63_8_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVBROADCASTxx_63_8_( at RIP {:#x}\n", rip);
    return g_hook_VBROADCASTxx_63_8_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVBROADCASTxx_65_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVBROADCASTxx_65_0_( at RIP {:#x}\n", rip);
    return g_hook_VBROADCASTxx_65_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVBROADCASTxx_67_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVBROADCASTxx_67_0_( at RIP {:#x}\n", rip);
    return g_hook_VBROADCASTxx_67_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVCVTPS2PH(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVCVTPS2PH( at RIP {:#x}\n", rip);
    return g_hook_VCVTPS2PH.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVEXTRACTx128(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVEXTRACTx128( at RIP {:#x}\n", rip);
    return g_hook_VEXTRACTx128.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVGATHER_32_32_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVGATHER_32_32_( at RIP {:#x}\n", rip);
    return g_hook_VGATHER_32_32_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVGATHER_32_64_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVGATHER_32_64_( at RIP {:#x}\n", rip);
    return g_hook_VGATHER_32_64_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVGATHER_64_32_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVGATHER_64_32_( at RIP {:#x}\n", rip);
    return g_hook_VGATHER_64_32_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVGATHER_64_64_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVGATHER_64_64_( at RIP {:#x}\n", rip);
    return g_hook_VGATHER_64_64_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVINSERTx128(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVINSERTx128( at RIP {:#x}\n", rip);
    return g_hook_VINSERTx128.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVMOVDQA(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVMOVDQA( at RIP {:#x}\n", rip);
    return g_hook_VMOVDQA.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVMOVDQA32(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVMOVDQA32( at RIP {:#x}\n", rip);
    return g_hook_VMOVDQA32.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVMOVDQA64(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVMOVDQA64( at RIP {:#x}\n", rip);
    return g_hook_VMOVDQA64.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVMOVDQU(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVMOVDQU( at RIP {:#x}\n", rip);
    return g_hook_VMOVDQU.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVMOVDQU16(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVMOVDQU16( at RIP {:#x}\n", rip);
    return g_hook_VMOVDQU16.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVMOVDQU32(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVMOVDQU32( at RIP {:#x}\n", rip);
    return g_hook_VMOVDQU32.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVMOVDQU64(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVMOVDQU64( at RIP {:#x}\n", rip);
    return g_hook_VMOVDQU64.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVMOVDQU8(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVMOVDQU8( at RIP {:#x}\n", rip);
    return g_hook_VMOVDQU8.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVMOVD_VMOVQ(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVMOVD_VMOVQ( at RIP {:#x}\n", rip);
    return g_hook_VMOVD_VMOVQ.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVMOVNTDQA(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVMOVNTDQA( at RIP {:#x}\n", rip);
    return g_hook_VMOVNTDQA.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVMOV_Predicated(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVMOV_Predicated( at RIP {:#x}\n", rip);
    return g_hook_VMOV_Predicated.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVMOV_Unpredicated(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVMOV_Unpredicated( at RIP {:#x}\n", rip);
    return g_hook_VMOV_Unpredicated.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPERM2x128(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPERM2x128( at RIP {:#x}\n", rip);
    return g_hook_VPERM2x128.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPERMILPx_3_283_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPERMILPx_3_283_( at RIP {:#x}\n", rip);
    return g_hook_VPERMILPx_3_283_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPERMILPx_4_284_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPERMILPx_4_284_( at RIP {:#x}\n", rip);
    return g_hook_VPERMILPx_4_284_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPERMPD(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPERMPD( at RIP {:#x}\n", rip);
    return g_hook_VPERMPD.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPERMPS_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPERMPS_0_( at RIP {:#x}\n", rip);
    return g_hook_VPERMPS_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPERMPS_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPERMPS_1_( at RIP {:#x}\n", rip);
    return g_hook_VPERMPS_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPHMINPOSUW(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPHMINPOSUW( at RIP {:#x}\n", rip);
    return g_hook_VPHMINPOSUW.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPSLL_SRA_SRL_28_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPSLL_SRA_SRL_28_( at RIP {:#x}\n", rip);
    return g_hook_VPSLL_SRA_SRL_28_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPSLL_SRA_SRL_29_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPSLL_SRA_SRL_29_( at RIP {:#x}\n", rip);
    return g_hook_VPSLL_SRA_SRL_29_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPSLL_SRA_SRL_30_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPSLL_SRA_SRL_30_( at RIP {:#x}\n", rip);
    return g_hook_VPSLL_SRA_SRL_30_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPSLL_SRA_SRL_31_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPSLL_SRA_SRL_31_( at RIP {:#x}\n", rip);
    return g_hook_VPSLL_SRA_SRL_31_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPSLL_SRA_SRL_32_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPSLL_SRA_SRL_32_( at RIP {:#x}\n", rip);
    return g_hook_VPSLL_SRA_SRL_32_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPSLL_SRA_SRL_33_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPSLL_SRA_SRL_33_( at RIP {:#x}\n", rip);
    return g_hook_VPSLL_SRA_SRL_33_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPSLL_SRA_SRL_34_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPSLL_SRA_SRL_34_( at RIP {:#x}\n", rip);
    return g_hook_VPSLL_SRA_SRL_34_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVPSLL_SRA_SRL_35_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVPSLL_SRA_SRL_35_( at RIP {:#x}\n", rip);
    return g_hook_VPSLL_SRA_SRL_35_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVZEROALL(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVZEROALL( at RIP {:#x}\n", rip);
    return g_hook_VZEROALL.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVZEROUPPER(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVZEROUPPER( at RIP {:#x}\n", rip);
    return g_hook_VZEROUPPER.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVectorMaskMove_32_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVectorMaskMove_32_( at RIP {:#x}\n", rip);
    return g_hook_VectorMaskMove_32_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleVectorMaskMove_64_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleVectorMaskMove_64_( at RIP {:#x}\n", rip);
    return g_hook_VectorMaskMove_64_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleXADD(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleXADD( at RIP {:#x}\n", rip);
    return g_hook_XADD.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleXCHG(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleXCHG( at RIP {:#x}\n", rip);
    auto ti = TTD::ThreadInfo::get();

    if (ti != nullptr) {
        auto rip = ti->get_register_value<uint64_t>(TTD::Rip);
        std::cout << fmt::format("XCHG instruction at RIP: {:#x}\n", rip);

        if (*(uint8_t*)rip == 0x41 && *(uint8_t*)(rip + 1) == 0x90) {
            std::cout << std::format("XCHG instruction is XCHG eax, r8d, DECODER: {:X}, instr: {:X}\n", decoder, (uintptr_t)instr);
            MessageBoxA(NULL, "XCHG instruction is XCHG eax, r8d", "Info", MB_OK);
        }
    }

    auto result = g_hook_XCHG.unsafe_call<uint64_t>(decoder, instr);

    return result;
}
uint64_t HandleXGETBV(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleXGETBV( at RIP {:#x}\n", rip);
    return g_hook_XGETBV.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleXLAT(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleXLAT( at RIP {:#x}\n", rip);
    return g_hook_XLAT.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleXRSTOR(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleXRSTOR( at RIP {:#x}\n", rip);
    return g_hook_XRSTOR.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleXSAVE_0_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleXSAVE_0_( at RIP {:#x}\n", rip);
    return g_hook_XSAVE_0_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleXSAVE_1_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleXSAVE_1_( at RIP {:#x}\n", rip);
    return g_hook_XSAVE_1_.unsafe_call<uint64_t>(decoder, instr);
}
uint64_t HandleXSAVE_2_(uintptr_t decoder, TTD::DecodedInstruction* instr) {
 auto rip = TTD::ThreadInfo::get()->get_register_value<uint64_t>(TTD::Rip); std::cout << fmt::format("Handling uint64_t HandleXSAVE_2_( at RIP {:#x}\n", rip);
    return g_hook_XSAVE_2_.unsafe_call<uint64_t>(decoder, instr);
}

void install(std::unordered_map<std::string, uintptr_t>& inverse_symbol_map) {
    g_hook_ABM1Operand_0_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleABM1Operand<0,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleABM1Operand_0_0_);
    g_hook_ABM1Operand_1_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleABM1Operand<1,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleABM1Operand_1_0_);
    g_hook_ABM1Operand_2_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleABM1Operand<2,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleABM1Operand_2_0_);
    g_hook_ABM1Operand_6_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleABM1Operand<6,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleABM1Operand_6_8_);
    g_hook_ABM1Operand_7_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleABM1Operand<7,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleABM1Operand_7_8_);
    g_hook_ABM1Operand_8_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleABM1Operand<8,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleABM1Operand_8_8_);
    g_hook_ABM2Operand_4_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleABM2Operand<4,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleABM2Operand_4_8_);
    g_hook_ABM2Operand_6_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleABM2Operand<6,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleABM2Operand_6_8_);
    g_hook_ABM2Operand_7_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleABM2Operand<7,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleABM2Operand_7_8_);
    g_hook_ABM2Operand_8_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleABM2Operand<8,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleABM2Operand_8_8_);
    g_hook_ADX_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleADX<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleADX_0_);
    g_hook_ADX_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleADX<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleADX_1_);
    g_hook_AESKeyGenAssist_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleAESKeyGenAssist<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleAESKeyGenAssist_0_);
    g_hook_AESKeyGenAssist_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleAESKeyGenAssist<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleAESKeyGenAssist_1_);
    g_hook_ANDN_BMI1 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleANDN_BMI1(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleANDN_BMI1);
    g_hook_BLENDPD_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleBLENDPD<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleBLENDPD_0_);
    g_hook_BLENDPD_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleBLENDPD<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleBLENDPD_1_);
    g_hook_BLENDPS_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleBLENDPS<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleBLENDPS_0_);
    g_hook_BLENDPS_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleBLENDPS<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleBLENDPS_1_);
    g_hook_BLENDVAvx_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleBLENDVAvx<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleBLENDVAvx_0_);
    g_hook_BLENDVAvx_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleBLENDVAvx<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleBLENDVAvx_1_);
    g_hook_BLENDVAvx_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleBLENDVAvx<2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleBLENDVAvx_2_);
    g_hook_BSWAP = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleBSWAP(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleBSWAP);
    g_hook_BitScanInstruction_120_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleBitScanInstruction<120>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleBitScanInstruction_120_);
    g_hook_BitScanInstruction_121_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleBitScanInstruction<121>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleBitScanInstruction_121_);
    g_hook_BitTestInstruction = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleBitTestInstruction(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleBitTestInstruction);
    g_hook_CALL = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCALL(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCALL);
    g_hook_CBW = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCBW(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCBW);
    g_hook_CDQ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCDQ(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCDQ);
    g_hook_CDQE = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCDQE(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCDQE);
    g_hook_CLC = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCLC(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCLC);
    g_hook_CLD = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCLD(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCLD);
    g_hook_CLMUL_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCLMUL<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCLMUL_0_);
    g_hook_CLMUL_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCLMUL<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCLMUL_1_);
    g_hook_CMC = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCMC(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCMC);
    g_hook_CMP = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCMP(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCMP);
    g_hook_CMPXCHG = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCMPXCHG(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCMPXCHG);
    g_hook_CMPXCHG16B = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCMPXCHG16B(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCMPXCHG16B);
    g_hook_CMPXCHG8B = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCMPXCHG8B(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCMPXCHG8B);
    g_hook_CMPxx_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCMPxx<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCMPxx_0_);
    g_hook_CMPxx_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCMPxx<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCMPxx_1_);
    g_hook_CMPxx_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCMPxx<2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCMPxx_2_);
    g_hook_CMPxx_3_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCMPxx<3>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCMPxx_3_);
    g_hook_COMIS = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCOMIS(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCOMIS);
    g_hook_CPUID = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCPUID(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCPUID);
    g_hook_CQO = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCQO(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCQO);
    g_hook_CRC32 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCRC32(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCRC32);
    g_hook_CVTPI2xxMMx_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCVTPI2xxMMx<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCVTPI2xxMMx_0_);
    g_hook_CVTPI2xxMMx_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCVTPI2xxMMx<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCVTPI2xxMMx_1_);
    g_hook_CVTxx2PIMMx_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCVTxx2PIMMx<2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCVTxx2PIMMx_2_);
    g_hook_CVTxx2PIMMx_3_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCVTxx2PIMMx<3>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCVTxx2PIMMx_3_);
    g_hook_CVTxx2PIMMx_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCVTxx2PIMMx<4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCVTxx2PIMMx_4_);
    g_hook_CVTxx2PIMMx_5_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCVTxx2PIMMx<5>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCVTxx2PIMMx_5_);
    g_hook_CWD = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCWD(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCWD);
    g_hook_CWDE = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleCWDE(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleCWDE);
    g_hook_ConditionalJump_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalJump<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalJump_0_);
    g_hook_ConditionalJump_10_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalJump<10>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalJump_10_);
    g_hook_ConditionalJump_11_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalJump<11>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalJump_11_);
    g_hook_ConditionalJump_12_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalJump<12>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalJump_12_);
    g_hook_ConditionalJump_13_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalJump<13>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalJump_13_);
    g_hook_ConditionalJump_14_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalJump<14>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalJump_14_);
    g_hook_ConditionalJump_15_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalJump<15>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalJump_15_);
    g_hook_ConditionalJump_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalJump<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalJump_1_);
    g_hook_ConditionalJump_7_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalJump<7>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalJump_7_);
    g_hook_ConditionalJump_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalJump<8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalJump_8_);
    g_hook_ConditionalJump_9_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalJump<9>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalJump_9_);
    g_hook_ConditionalMove_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_0_);
    g_hook_ConditionalMove_10_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<10>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_10_);
    g_hook_ConditionalMove_11_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<11>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_11_);
    g_hook_ConditionalMove_12_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<12>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_12_);
    g_hook_ConditionalMove_13_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<13>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_13_);
    g_hook_ConditionalMove_14_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<14>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_14_);
    g_hook_ConditionalMove_15_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<15>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_15_);
    g_hook_ConditionalMove_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_1_);
    g_hook_ConditionalMove_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_2_);
    g_hook_ConditionalMove_3_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<3>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_3_);
    g_hook_ConditionalMove_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_4_);
    g_hook_ConditionalMove_5_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<5>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_5_);
    g_hook_ConditionalMove_6_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<6>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_6_);
    g_hook_ConditionalMove_7_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<7>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_7_);
    g_hook_ConditionalMove_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_8_);
    g_hook_ConditionalMove_9_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleConditionalMove<9>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleConditionalMove_9_);
    g_hook_DPPD_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleDPPD<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleDPPD_0_);
    g_hook_DPPD_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleDPPD<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleDPPD_1_);
    g_hook_DPPS_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleDPPS<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleDPPS_0_);
    g_hook_DPPS_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleDPPS<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleDPPS_1_);
    g_hook_Divide_101_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleDivide<101>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleDivide_101_);
    g_hook_Divide_102_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleDivide<102>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleDivide_102_);
    g_hook_DoubleShiftInstruction_116_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleDoubleShiftInstruction<116>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleDoubleShiftInstruction_116_);
    g_hook_DoubleShiftInstruction_117_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleDoubleShiftInstruction<117>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleDoubleShiftInstruction_117_);
    g_hook_EMMS = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleEMMS(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleEMMS);
    g_hook_ENTER = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleENTER(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleENTER);
    g_hook_EXTRACTPS = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleEXTRACTPS(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleEXTRACTPS);
    g_hook_EXTRQ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleEXTRQ(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleEXTRQ);
    g_hook_FENCE_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFENCE<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFENCE_0_);
    g_hook_FENCE_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFENCE<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFENCE_1_);
    g_hook_FENCE_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFENCE<2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFENCE_2_);
    g_hook_FILD = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFILD(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFILD);
    g_hook_FIST = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFIST(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFIST);
    g_hook_FISTP = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFISTP(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFISTP);
    g_hook_FLD = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFLD(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFLD);
    g_hook_FLD1 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFLD1(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFLD1);
    g_hook_FLDCW = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFLDCW(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFLDCW);
    g_hook_FLDZ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFLDZ(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFLDZ);
    g_hook_FNCLEX = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFNCLEX(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFNCLEX);
    g_hook_FNINIT = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFNINIT(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFNINIT);
    g_hook_FNSTCW = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFNSTCW(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFNSTCW);
    g_hook_FNSTSW = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFNSTSW(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFNSTSW);
    g_hook_FST = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFST(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFST);
    g_hook_FSTP = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFSTP(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFSTP);
    g_hook_FXRSTOR = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFXRSTOR(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFXRSTOR);
    g_hook_FXSAVE = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleFXSAVE(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleFXSAVE);
    g_hook_INSERTPS_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleINSERTPS<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleINSERTPS_0_);
    g_hook_INSERTPS_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleINSERTPS<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleINSERTPS_1_);
    g_hook_INSERTQ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleINSERTQ(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleINSERTQ);
    g_hook_INT = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleINT(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleINT);
    g_hook_IRETQ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleIRETQ(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleIRETQ);
    g_hook_IncrementDecrementInstruction_85_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleIncrementDecrementInstruction<85>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleIncrementDecrementInstruction_85_);
    g_hook_IncrementDecrementInstruction_94_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleIncrementDecrementInstruction<94>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleIncrementDecrementInstruction_94_);
    g_hook_JAE = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleJAE(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleJAE);
    g_hook_JB = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleJB(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleJB);
    g_hook_JBE = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleJBE(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleJBE);
    g_hook_JE = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleJE(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleJE);
    g_hook_JERCX = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleJERCX(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleJERCX);
    g_hook_JMP = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleJMP(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleJMP);
    g_hook_JNE = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleJNE(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleJNE);
    g_hook_LAHF = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleLAHF(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleLAHF);
    g_hook_LDMXCSR = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleLDMXCSR(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleLDMXCSR);
    g_hook_LEA = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleLEA(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleLEA);
    g_hook_LEAVE = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleLEAVE(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleLEAVE);
    g_hook_Loop_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleLoop<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleLoop_0_);
    g_hook_Loop_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleLoop<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleLoop_1_);
    g_hook_Loop_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleLoop<2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleLoop_2_);
    g_hook_MOV = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOV(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOV);
    g_hook_MOVBE = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVBE(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVBE);
    g_hook_MOVDDUP_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVDDUP<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVDDUP_0_);
    g_hook_MOVDDUP_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVDDUP<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVDDUP_1_);
    g_hook_MOVDIRI = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVDIRI(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVDIRI);
    g_hook_MOVDQU = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVDQU(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVDQU);
    g_hook_MOVDQU_Unaligned = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVDQU_Unaligned(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVDQU_Unaligned);
    g_hook_MOVD_MOVQ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVD_MOVQ(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVD_MOVQ);
    g_hook_MOVD_MOVQ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVD_MOVQ(struct TTD::DecodedInstruction const & __ptr64,bool) __ptr64"]),
        (void*)HandleMOVD_MOVQ);
    g_hook_MOVHPS_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVHPS<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVHPS_0_);
    g_hook_MOVHPS_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVHPS<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVHPS_1_);
    g_hook_MOVLPS_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVLPS<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVLPS_0_);
    g_hook_MOVLPS_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVLPS<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVLPS_1_);
    g_hook_MOVMSK_32_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVMSK<32>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVMSK_32_);
    g_hook_MOVMSK_64_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVMSK<64>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVMSK_64_);
    g_hook_MOVMSK_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVMSK<8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVMSK_8_);
    g_hook_MOVNTDQA = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVNTDQA(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVNTDQA);
    g_hook_MOVNTSx_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVNTSx<8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVNTSx_8_);
    g_hook_MOVQMmx = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVQMmx(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVQMmx);
    g_hook_MOVSD_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVSD<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVSD_0_);
    g_hook_MOVSD_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVSD<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVSD_1_);
    g_hook_MOVSS_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVSS<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVSS_0_);
    g_hook_MOVSS_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVSS<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVSS_1_);
    g_hook_MOVSX = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVSX(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVSX);
    g_hook_MOVSxDUP_0_160_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVSxDUP<0,160>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVSxDUP_0_160_);
    g_hook_MOVSxDUP_0_245_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVSxDUP<0,245>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVSxDUP_0_245_);
    g_hook_MOVSxDUP_1_160_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVSxDUP<1,160>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVSxDUP_1_160_);
    g_hook_MOVSxDUP_1_245_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVSxDUP<1,245>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVSxDUP_1_245_);
    g_hook_MOVZX = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMOVZX(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMOVZX);
    g_hook_MULX_BMI2 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMULX_BMI2(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMULX_BMI2);
    g_hook_Multiply_100_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMultiply<100>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMultiply_100_);
    g_hook_Multiply_99_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleMultiply<99>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleMultiply_99_);
    g_hook_NEG = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleNEG(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleNEG);
    g_hook_NOT = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleNOT(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleNOT);
    g_hook_PABS_28_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePABS<28,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePABS_28_0_);
    g_hook_PABS_29_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePABS<29,1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePABS_29_1_);
    g_hook_PABS_30_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePABS<30,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePABS_30_2_);
    g_hook_PALIGNR = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePALIGNR(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePALIGNR);
    g_hook_PCMPxSTRx_0_0_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePCMPxSTRx<0,0,1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePCMPxSTRx_0_0_1_);
    g_hook_PCMPxSTRx_0_1_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePCMPxSTRx<0,1,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePCMPxSTRx_0_1_0_);
    g_hook_PCMPxSTRx_0_1_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePCMPxSTRx<0,1,1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePCMPxSTRx_0_1_1_);
    g_hook_PCMPxSTRx_1_0_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePCMPxSTRx<1,0,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePCMPxSTRx_1_0_0_);
    g_hook_PCMPxSTRx_1_0_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePCMPxSTRx<1,0,1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePCMPxSTRx_1_0_1_);
    g_hook_PCMPxSTRx_1_1_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePCMPxSTRx<1,1,1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePCMPxSTRx_1_1_1_);
    g_hook_PEXTR_16_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePEXTR<16>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePEXTR_16_);
    g_hook_PEXTR_32_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePEXTR<32>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePEXTR_32_);
    g_hook_PEXTR_64_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePEXTR<64>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePEXTR_64_);
    g_hook_PEXTR_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePEXTR<8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePEXTR_8_);
    g_hook_PINSR_0_16_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePINSR<0,16>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePINSR_0_16_);
    g_hook_PINSR_0_32_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePINSR<0,32>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePINSR_0_32_);
    g_hook_PINSR_0_64_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePINSR<0,64>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePINSR_0_64_);
    g_hook_PINSR_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePINSR<0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePINSR_0_8_);
    g_hook_PINSR_1_16_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePINSR<1,16>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePINSR_1_16_);
    g_hook_PINSR_1_32_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePINSR<1,32>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePINSR_1_32_);
    g_hook_PINSR_1_64_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePINSR<1,64>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePINSR_1_64_);
    g_hook_PINSR_1_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePINSR<1,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePINSR_1_8_);
    g_hook_POP = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePOP(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePOP);
    g_hook_POPF = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePOPF(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePOPF);
    g_hook_POPFD = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePOPFD(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePOPFD);
    g_hook_PSHUFB = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePSHUFB(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePSHUFB);
    g_hook_PSHUFW = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePSHUFW(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePSHUFW);
    g_hook_PSLL_SRA_SRL_28_28_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePSLL_SRA_SRL<28,28>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePSLL_SRA_SRL_28_28_);
    g_hook_PSLL_SRA_SRL_29_29_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePSLL_SRA_SRL<29,29>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePSLL_SRA_SRL_29_29_);
    g_hook_PSLL_SRA_SRL_30_30_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePSLL_SRA_SRL<30,30>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePSLL_SRA_SRL_30_30_);
    g_hook_PSLL_SRA_SRL_31_31_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePSLL_SRA_SRL<31,31>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePSLL_SRA_SRL_31_31_);
    g_hook_PSLL_SRA_SRL_32_32_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePSLL_SRA_SRL<32,32>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePSLL_SRA_SRL_32_32_);
    g_hook_PSLL_SRA_SRL_33_33_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePSLL_SRA_SRL<33,33>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePSLL_SRA_SRL_33_33_);
    g_hook_PSLL_SRA_SRL_34_34_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePSLL_SRA_SRL<34,34>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePSLL_SRA_SRL_34_34_);
    g_hook_PSLL_SRA_SRL_35_35_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePSLL_SRA_SRL<35,35>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePSLL_SRA_SRL_35_35_);
    g_hook_PTEST_0_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePTEST<0,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePTEST_0_0_);
    g_hook_PTEST_1_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePTEST<1,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePTEST_1_0_);
    g_hook_PTEST_1_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePTEST<1,1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePTEST_1_1_);
    g_hook_PTEST_1_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePTEST<1,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePTEST_1_2_);
    g_hook_PUSH = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePUSH(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePUSH);
    g_hook_PUSHF = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePUSHF(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePUSHF);
    g_hook_PUSHFD = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandlePUSHFD(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandlePUSHFD);
    g_hook_ParallelFMA3_0_11_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<0,11>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_0_11_);
    g_hook_ParallelFMA3_0_12_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<0,12>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_0_12_);
    g_hook_ParallelFMA3_0_15_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<0,15>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_0_15_);
    g_hook_ParallelFMA3_0_16_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<0,16>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_0_16_);
    g_hook_ParallelFMA3_0_19_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<0,19>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_0_19_);
    g_hook_ParallelFMA3_0_20_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<0,20>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_0_20_);
    g_hook_ParallelFMA3_0_21_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<0,21>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_0_21_);
    g_hook_ParallelFMA3_0_22_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<0,22>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_0_22_);
    g_hook_ParallelFMA3_0_3_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<0,3>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_0_3_);
    g_hook_ParallelFMA3_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_0_4_);
    g_hook_ParallelFMA3_0_7_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<0,7>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_0_7_);
    g_hook_ParallelFMA3_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_0_8_);
    g_hook_ParallelFMA3_1_11_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<1,11>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_1_11_);
    g_hook_ParallelFMA3_1_12_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<1,12>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_1_12_);
    g_hook_ParallelFMA3_1_15_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<1,15>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_1_15_);
    g_hook_ParallelFMA3_1_16_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<1,16>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_1_16_);
    g_hook_ParallelFMA3_1_19_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<1,19>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_1_19_);
    g_hook_ParallelFMA3_1_20_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<1,20>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_1_20_);
    g_hook_ParallelFMA3_1_21_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<1,21>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_1_21_);
    g_hook_ParallelFMA3_1_22_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<1,22>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_1_22_);
    g_hook_ParallelFMA3_1_3_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<1,3>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_1_3_);
    g_hook_ParallelFMA3_1_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<1,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_1_4_);
    g_hook_ParallelFMA3_1_7_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<1,7>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_1_7_);
    g_hook_ParallelFMA3_1_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<1,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_1_8_);
    g_hook_ParallelFMA3_2_11_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<2,11>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_2_11_);
    g_hook_ParallelFMA3_2_12_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<2,12>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_2_12_);
    g_hook_ParallelFMA3_2_15_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<2,15>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_2_15_);
    g_hook_ParallelFMA3_2_16_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<2,16>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_2_16_);
    g_hook_ParallelFMA3_2_19_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<2,19>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_2_19_);
    g_hook_ParallelFMA3_2_20_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<2,20>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_2_20_);
    g_hook_ParallelFMA3_2_21_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<2,21>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_2_21_);
    g_hook_ParallelFMA3_2_22_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<2,22>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_2_22_);
    g_hook_ParallelFMA3_2_3_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<2,3>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_2_3_);
    g_hook_ParallelFMA3_2_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<2,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_2_4_);
    g_hook_ParallelFMA3_2_7_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<2,7>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_2_7_);
    g_hook_ParallelFMA3_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelFMA3<2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelFMA3_2_8_);
    g_hook_ParallelSimd1OperandAndImmToDestinationAvx_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandAndImmToDestinationAvx<0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandAndImmToDestinationAvx_0_8_);
    g_hook_ParallelSimd1OperandAndImmToDestinationAvx_1_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandAndImmToDestinationAvx<1,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandAndImmToDestinationAvx_1_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxXY_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxXY<4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxXY_4_);
    g_hook_ParallelSimd1OperandToDestinationAvxXY_5_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxXY<5>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxXY_5_);
    g_hook_ParallelSimd1OperandToDestinationAvxXY_6_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxXY<6>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxXY_6_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_1_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<1,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_1_0_4_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_31_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<31,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_31_0_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_32_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<32,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_32_0_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_33_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<33,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_33_0_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_34_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<34,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_34_0_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_35_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<35,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_35_0_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_36_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<36,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_36_0_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_37_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<37,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_37_0_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_38_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<38,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_38_0_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_39_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<39,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_39_0_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_40_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<40,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_40_0_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_41_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<41,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_41_0_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_42_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<42,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_42_0_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_64_8_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<64,8,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_64_8_8_);
    g_hook_ParallelSimd1OperandToDestinationAvxYX_7_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvxYX<7,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvxYX_7_0_4_);
    g_hook_ParallelSimd1OperandToDestinationAvx_0_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvx<0,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvx_0_0_4_);
    g_hook_ParallelSimd1OperandToDestinationAvx_20_2147483648_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvx<20,2147483648,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvx_20_2147483648_4_);
    g_hook_ParallelSimd1OperandToDestinationAvx_21_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvx<21,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvx_21_0_4_);
    g_hook_ParallelSimd1OperandToDestinationAvx_22_2147483648_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvx<22,2147483648,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvx_22_2147483648_4_);
    g_hook_ParallelSimd1OperandToDestinationAvx_23_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvx<23,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvx_23_0_4_);
    g_hook_ParallelSimd1OperandToDestinationAvx_27_2_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvx<27,2,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvx_27_2_0_);
    g_hook_ParallelSimd1OperandToDestinationAvx_28_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvx<28,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvx_28_2_8_);
    g_hook_ParallelSimd1OperandToDestinationAvx_29_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvx<29,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvx_29_2_8_);
    g_hook_ParallelSimd1OperandToDestinationAvx_2_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvx<2,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvx_2_0_4_);
    g_hook_ParallelSimd1OperandToDestinationAvx_30_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvx<30,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvx_30_2_8_);
    g_hook_ParallelSimd1OperandToDestinationAvx_3_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd1OperandToDestinationAvx<3,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd1OperandToDestinationAvx_3_0_4_);
    g_hook_ParallelSimd2OperandAndImmToDestinationAvx_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandAndImmToDestinationAvx<0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandAndImmToDestinationAvx_0_8_);
    g_hook_ParallelSimd2OperandAndImmToDestinationAvx_1_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandAndImmToDestinationAvx<1,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandAndImmToDestinationAvx_1_8_);
    g_hook_ParallelSimd2OperandAndImmToDestinationAvx_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandAndImmToDestinationAvx<2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandAndImmToDestinationAvx_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_0_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<0,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_0_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_100_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<100,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_100_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_101_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<101,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_101_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_102_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<102,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_102_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_103_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<103,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_103_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_104_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<104,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_104_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_105_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<105,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_105_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_106_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<106,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_106_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_107_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<107,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_107_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_10_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<10,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_10_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_11_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<11,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_11_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_124_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<124,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_124_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_125_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<125,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_125_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_126_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<126,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_126_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_127_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<127,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_127_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_128_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<128,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_128_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_129_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<129,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_129_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_12_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<12,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_12_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_130_2_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<130,2,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_130_2_2_);
    g_hook_ParallelSimd2OperandToDestinationAvx_131_2_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<131,2,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_131_2_2_);
    g_hook_ParallelSimd2OperandToDestinationAvx_132_2_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<132,2,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_132_2_2_);
    g_hook_ParallelSimd2OperandToDestinationAvx_133_2_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<133,2,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_133_2_2_);
    g_hook_ParallelSimd2OperandToDestinationAvx_134_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<134,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_134_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_135_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<135,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_135_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_136_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<136,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_136_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_137_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<137,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_137_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_138_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<138,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_138_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_139_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<139,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_139_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_13_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<13,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_13_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_140_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<140,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_140_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_141_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<141,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_141_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_142_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<142,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_142_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_143_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<143,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_143_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_144_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<144,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_144_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_145_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<145,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_145_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_146_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<146,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_146_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_147_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<147,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_147_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_148_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<148,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_148_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_149_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<149,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_149_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_14_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<14,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_14_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_150_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<150,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_150_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_151_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<151,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_151_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_152_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<152,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_152_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_153_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<153,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_153_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_154_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<154,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_154_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_155_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<155,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_155_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_156_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<156,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_156_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_157_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<157,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_157_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_158_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<158,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_158_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_159_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<159,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_159_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_15_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<15,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_15_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_160_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<160,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_160_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_161_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<161,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_161_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_16_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<16,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_16_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_17_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<17,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_17_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_182_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<182,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_182_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_183_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<183,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_183_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_184_2_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<184,2,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_184_2_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_18_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<18,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_18_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_19_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<19,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_19_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_1_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<1,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_1_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_20_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<20,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_20_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_21_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<21,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_21_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_22_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<22,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_22_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_23_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<23,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_23_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_24_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<24,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_24_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_25_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<25,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_25_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_26_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<26,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_26_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_27_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<27,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_27_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_2_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<2,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_2_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_36_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<36,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_36_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_37_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<37,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_37_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_38_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<38,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_38_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_39_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<39,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_39_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_3_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<3,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_3_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_40_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<40,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_40_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_41_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<41,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_41_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_42_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<42,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_42_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_43_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<43,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_43_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_44_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<44,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_44_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_45_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<45,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_45_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_46_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<46,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_46_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_47_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<47,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_47_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_48_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<48,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_48_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_49_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<49,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_49_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_4_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<4,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_4_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_50_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<50,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_50_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_51_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<51,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_51_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_52_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<52,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_52_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_53_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<53,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_53_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_54_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<54,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_54_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_55_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<55,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_55_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_56_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<56,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_56_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_57_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<57,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_57_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_58_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<58,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_58_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_59_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<59,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_59_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_5_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<5,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_5_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_60_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<60,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_60_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_61_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<61,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_61_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_62_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<62,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_62_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_63_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<63,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_63_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_64_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<64,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_64_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_65_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<65,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_65_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_66_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<66,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_66_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_67_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<67,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_67_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_68_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<68,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_68_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_69_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<69,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_69_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_6_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<6,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_6_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_70_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<70,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_70_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_71_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<71,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_71_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_72_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<72,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_72_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_73_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<73,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_73_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_7_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<7,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_7_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_8_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<8,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_8_0_8_);
    g_hook_ParallelSimd2OperandToDestinationAvx_90_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<90,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_90_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_91_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<91,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_91_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_92_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<92,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_92_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_93_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<93,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_93_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_94_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<94,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_94_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_95_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<95,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_95_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_96_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<96,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_96_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_97_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<97,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_97_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_98_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<98,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_98_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_99_0_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<99,0,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_99_0_4_);
    g_hook_ParallelSimd2OperandToDestinationAvx_9_0_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd2OperandToDestinationAvx<9,0,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd2OperandToDestinationAvx_9_0_8_);
    g_hook_ParallelSimd3OperandAndImmToDestinationAvx_3_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd3OperandAndImmToDestinationAvx<3,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd3OperandAndImmToDestinationAvx_3_4_);
    g_hook_ParallelSimd3OperandAndImmToDestinationAvx_4_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd3OperandAndImmToDestinationAvx<4,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd3OperandAndImmToDestinationAvx_4_4_);
    g_hook_ParallelSimd3OperandAndImmToDestinationAvx_5_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd3OperandAndImmToDestinationAvx<5,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd3OperandAndImmToDestinationAvx_5_8_);
    g_hook_ParallelSimd3OperandAndImmToDestinationAvx_6_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd3OperandAndImmToDestinationAvx<6,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd3OperandAndImmToDestinationAvx_6_8_);
    g_hook_ParallelSimd3OperandAndImmToDestinationAvx_7_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd3OperandAndImmToDestinationAvx<7,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd3OperandAndImmToDestinationAvx_7_8_);
    g_hook_ParallelSimd3OperandToDestinationAvx_285_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd3OperandToDestinationAvx<285,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd3OperandToDestinationAvx_285_8_);
    g_hook_ParallelSimd3OperandToDestinationAvx_286_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd3OperandToDestinationAvx<286,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd3OperandToDestinationAvx_286_8_);
    g_hook_ParallelSimd3OperandToDestinationAvx_287_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd3OperandToDestinationAvx<287,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd3OperandToDestinationAvx_287_8_);
    g_hook_ParallelSimd3OperandToDestinationAvx_288_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd3OperandToDestinationAvx<288,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd3OperandToDestinationAvx_288_8_);
    g_hook_ParallelSimd3OperandToDestinationAvx_289_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleParallelSimd3OperandToDestinationAvx<289,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleParallelSimd3OperandToDestinationAvx_289_8_);
    g_hook_RDTSC = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleRDTSC(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleRDTSC);
    g_hook_RDTSCP = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleRDTSCP(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleRDTSCP);
    g_hook_RET = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleRET(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleRET);
    g_hook_ROUNDPx_0_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleROUNDPx<0,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleROUNDPx_0_2_);
    g_hook_ROUNDPx_0_3_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleROUNDPx<0,3>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleROUNDPx_0_3_);
    g_hook_ROUNDPx_1_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleROUNDPx<1,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleROUNDPx_1_2_);
    g_hook_ROUNDPx_1_3_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleROUNDPx<1,3>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleROUNDPx_1_3_);
    g_hook_ROUNDSx_0_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleROUNDSx<0,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleROUNDSx_0_0_);
    g_hook_ROUNDSx_0_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleROUNDSx<0,1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleROUNDSx_0_1_);
    g_hook_ROUNDSx_1_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleROUNDSx<1,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleROUNDSx_1_0_);
    g_hook_ROUNDSx_1_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleROUNDSx<1,1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleROUNDSx_1_1_);
    g_hook_RotateInstructionBMI2_112_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleRotateInstructionBMI2<112>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleRotateInstructionBMI2_112_);
    g_hook_RotateInstruction_112_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleRotateInstruction<112>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleRotateInstruction_112_);
    g_hook_RotateInstruction_113_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleRotateInstruction<113>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleRotateInstruction_113_);
    g_hook_RotateInstruction_114_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleRotateInstruction<114>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleRotateInstruction_114_);
    g_hook_RotateInstruction_115_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleRotateInstruction<115>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleRotateInstruction_115_);
    g_hook_SAHF = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSAHF(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSAHF);
    g_hook_SHA1 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSHA1(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSHA1);
    g_hook_STC = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSTC(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSTC);
    g_hook_STD = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSTD(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSTD);
    g_hook_STMXCSR = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSTMXCSR(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSTMXCSR);
    g_hook_ScalarFMA3_0_10_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<0,10>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_0_10_);
    g_hook_ScalarFMA3_0_13_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<0,13>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_0_13_);
    g_hook_ScalarFMA3_0_14_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<0,14>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_0_14_);
    g_hook_ScalarFMA3_0_17_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<0,17>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_0_17_);
    g_hook_ScalarFMA3_0_18_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<0,18>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_0_18_);
    g_hook_ScalarFMA3_0_5_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<0,5>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_0_5_);
    g_hook_ScalarFMA3_0_6_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<0,6>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_0_6_);
    g_hook_ScalarFMA3_0_9_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<0,9>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_0_9_);
    g_hook_ScalarFMA3_1_10_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<1,10>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_1_10_);
    g_hook_ScalarFMA3_1_13_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<1,13>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_1_13_);
    g_hook_ScalarFMA3_1_14_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<1,14>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_1_14_);
    g_hook_ScalarFMA3_1_17_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<1,17>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_1_17_);
    g_hook_ScalarFMA3_1_18_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<1,18>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_1_18_);
    g_hook_ScalarFMA3_1_5_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<1,5>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_1_5_);
    g_hook_ScalarFMA3_1_6_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<1,6>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_1_6_);
    g_hook_ScalarFMA3_1_9_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<1,9>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_1_9_);
    g_hook_ScalarFMA3_2_10_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<2,10>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_2_10_);
    g_hook_ScalarFMA3_2_13_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<2,13>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_2_13_);
    g_hook_ScalarFMA3_2_14_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<2,14>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_2_14_);
    g_hook_ScalarFMA3_2_17_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<2,17>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_2_17_);
    g_hook_ScalarFMA3_2_18_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<2,18>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_2_18_);
    g_hook_ScalarFMA3_2_5_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<2,5>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_2_5_);
    g_hook_ScalarFMA3_2_6_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<2,6>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_2_6_);
    g_hook_ScalarFMA3_2_9_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleScalarFMA3<2,9>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleScalarFMA3_2_9_);
    g_hook_SetConditional_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_0_);
    g_hook_SetConditional_10_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<10>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_10_);
    g_hook_SetConditional_11_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<11>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_11_);
    g_hook_SetConditional_12_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<12>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_12_);
    g_hook_SetConditional_13_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<13>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_13_);
    g_hook_SetConditional_14_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<14>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_14_);
    g_hook_SetConditional_15_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<15>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_15_);
    g_hook_SetConditional_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_1_);
    g_hook_SetConditional_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_2_);
    g_hook_SetConditional_3_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<3>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_3_);
    g_hook_SetConditional_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_4_);
    g_hook_SetConditional_5_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<5>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_5_);
    g_hook_SetConditional_6_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<6>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_6_);
    g_hook_SetConditional_7_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<7>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_7_);
    g_hook_SetConditional_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_8_);
    g_hook_SetConditional_9_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSetConditional<9>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSetConditional_9_);
    g_hook_ShiftInstructionBMI2_109_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleShiftInstructionBMI2<109>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleShiftInstructionBMI2_109_);
    g_hook_ShiftInstructionBMI2_110_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleShiftInstructionBMI2<110>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleShiftInstructionBMI2_110_);
    g_hook_ShiftInstructionBMI2_111_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleShiftInstructionBMI2<111>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleShiftInstructionBMI2_111_);
    g_hook_ShiftInstruction_109_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleShiftInstruction<109>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleShiftInstruction_109_);
    g_hook_ShiftInstruction_110_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleShiftInstruction<110>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleShiftInstruction_110_);
    g_hook_ShiftInstruction_111_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleShiftInstruction<111>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleShiftInstruction_111_);
    g_hook_Simd1OperandAndImmToDestination_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandAndImmToDestination<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandAndImmToDestination_0_);
    g_hook_Simd1OperandAndImmToDestination_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandAndImmToDestination<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandAndImmToDestination_1_);
    g_hook_Simd1OperandFromGpr32Source_10_13_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandFromGpr32Source<10,13>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandFromGpr32Source_10_13_);
    g_hook_Simd1OperandFromGpr32Source_16_19_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandFromGpr32Source<16,19>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandFromGpr32Source_16_19_);
    g_hook_Simd1OperandToDestinationAvx_24_2147483648_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestinationAvx<24,2147483648>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestinationAvx_24_2147483648_);
    g_hook_Simd1OperandToDestinationAvx_25_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestinationAvx<25,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestinationAvx_25_0_);
    g_hook_Simd1OperandToDestinationAvx_26_2147483648_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestinationAvx<26,2147483648>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestinationAvx_26_2147483648_);
    g_hook_Simd1OperandToDestination_0_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<0,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_0_0_);
    g_hook_Simd1OperandToDestination_1_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<1,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_1_0_);
    g_hook_Simd1OperandToDestination_20_2147483648_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<20,2147483648>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_20_2147483648_);
    g_hook_Simd1OperandToDestination_21_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<21,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_21_0_);
    g_hook_Simd1OperandToDestination_22_2147483648_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<22,2147483648>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_22_2147483648_);
    g_hook_Simd1OperandToDestination_23_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<23,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_23_0_);
    g_hook_Simd1OperandToDestination_24_2147483648_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<24,2147483648>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_24_2147483648_);
    g_hook_Simd1OperandToDestination_25_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<25,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_25_0_);
    g_hook_Simd1OperandToDestination_26_2147483648_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<26,2147483648>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_26_2147483648_);
    g_hook_Simd1OperandToDestination_27_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<27,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_27_2_);
    g_hook_Simd1OperandToDestination_2_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<2,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_2_0_);
    g_hook_Simd1OperandToDestination_31_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<31,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_31_2_);
    g_hook_Simd1OperandToDestination_32_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<32,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_32_2_);
    g_hook_Simd1OperandToDestination_33_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<33,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_33_2_);
    g_hook_Simd1OperandToDestination_34_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<34,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_34_2_);
    g_hook_Simd1OperandToDestination_35_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<35,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_35_2_);
    g_hook_Simd1OperandToDestination_36_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<36,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_36_2_);
    g_hook_Simd1OperandToDestination_37_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<37,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_37_2_);
    g_hook_Simd1OperandToDestination_38_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<38,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_38_2_);
    g_hook_Simd1OperandToDestination_39_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<39,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_39_2_);
    g_hook_Simd1OperandToDestination_3_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<3,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_3_0_);
    g_hook_Simd1OperandToDestination_40_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<40,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_40_2_);
    g_hook_Simd1OperandToDestination_41_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<41,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_41_2_);
    g_hook_Simd1OperandToDestination_42_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<42,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_42_2_);
    g_hook_Simd1OperandToDestination_43_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<43,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_43_2_);
    g_hook_Simd1OperandToDestination_4_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<4,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_4_0_);
    g_hook_Simd1OperandToDestination_5_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<5,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_5_0_);
    g_hook_Simd1OperandToDestination_6_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<6,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_6_0_);
    g_hook_Simd1OperandToDestination_7_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToDestination<7,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToDestination_7_0_);
    g_hook_Simd1OperandToGpr32Destination_14_17_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToGpr32Destination<14,17>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToGpr32Destination_14_17_);
    g_hook_Simd1OperandToGpr32Destination_15_18_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToGpr32Destination<15,18>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToGpr32Destination_15_18_);
    g_hook_Simd1OperandToGpr32Destination_8_11_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToGpr32Destination<8,11>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToGpr32Destination_8_11_);
    g_hook_Simd1OperandToGpr32Destination_9_12_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd1OperandToGpr32Destination<9,12>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd1OperandToGpr32Destination_9_12_);
    g_hook_Simd2OperandAndImmToDestination_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandAndImmToDestination<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandAndImmToDestination_0_);
    g_hook_Simd2OperandAndImmToDestination_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandAndImmToDestination<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandAndImmToDestination_1_);
    g_hook_Simd2OperandAndImmToDestination_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandAndImmToDestination<2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandAndImmToDestination_2_);
    g_hook_Simd2OperandAndImmToDestination_3_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandAndImmToDestination<3>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandAndImmToDestination_3_);
    g_hook_Simd2OperandAndImmToDestination_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandAndImmToDestination<4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandAndImmToDestination_4_);
    g_hook_Simd2OperandAndImmToDestination_6_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandAndImmToDestination<6>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandAndImmToDestination_6_);
    g_hook_Simd2OperandAndImmToDestination_7_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandAndImmToDestination<7>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandAndImmToDestination_7_);
    g_hook_Simd2OperandFromGpr32SourceAvx_10_13_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandFromGpr32SourceAvx<10,13>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandFromGpr32SourceAvx_10_13_);
    g_hook_Simd2OperandFromGpr32SourceAvx_16_19_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandFromGpr32SourceAvx<16,19>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandFromGpr32SourceAvx_16_19_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_0_0_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<0,0,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_0_0_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_10_10_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<10,10,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_10_10_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_11_11_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<11,11,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_11_11_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_12_12_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<12,12,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_12_12_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_13_13_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<13,13,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_13_13_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_141_56_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<141,56,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_141_56_2_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_142_57_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<142,57,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_142_57_2_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_143_58_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<143,58,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_143_58_2_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_144_59_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<144,59,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_144_59_2_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_145_60_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<145,60,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_145_60_2_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_146_61_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<146,61,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_146_61_2_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_147_62_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<147,62,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_147_62_2_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_148_63_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<148,63,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_148_63_2_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_149_64_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<149,64,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_149_64_2_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_14_14_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<14,14,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_14_14_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_150_65_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<150,65,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_150_65_2_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_151_66_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<151,66,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_151_66_2_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_15_15_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<15,15,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_15_15_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_16_16_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<16,16,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_16_16_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_17_17_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<17,17,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_17_17_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_18_18_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<18,18,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_18_18_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_19_19_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<19,19,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_19_19_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_1_1_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<1,1,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_1_1_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_20_20_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<20,20,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_20_20_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_21_21_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<21,21,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_21_21_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_22_22_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<22,22,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_22_22_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_23_23_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<23,23,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_23_23_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_24_24_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<24,24,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_24_24_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_25_25_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<25,25,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_25_25_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_26_26_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<26,26,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_26_26_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_27_27_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<27,27,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_27_27_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_2_2_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<2,2,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_2_2_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_36_36_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<36,36,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_36_36_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_37_37_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<37,37,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_37_37_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_38_38_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<38,38,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_38_38_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_39_39_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<39,39,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_39_39_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_3_3_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<3,3,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_3_3_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_40_40_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<40,40,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_40_40_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_41_41_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<41,41,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_41_41_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_42_42_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<42,42,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_42_42_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_43_43_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<43,43,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_43_43_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_44_44_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<44,44,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_44_44_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_45_45_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<45,45,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_45_45_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_46_46_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<46,46,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_46_46_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_47_47_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<47,47,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_47_47_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_48_48_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<48,48,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_48_48_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_49_49_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<49,49,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_49_49_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_4_4_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<4,4,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_4_4_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_50_50_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<50,50,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_50_50_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_51_51_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<51,51,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_51_51_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_52_52_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<52,52,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_52_52_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_53_53_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<53,53,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_53_53_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_54_54_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<54,54,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_54_54_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_5_5_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<5,5,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_5_5_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_6_6_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<6,6,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_6_6_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_7_7_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<7,7,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_7_7_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_8_8_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<8,8,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_8_8_0_);
    g_hook_Simd2OperandToDestinationSSEOrMmx_9_9_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestinationSSEOrMmx<9,9,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestinationSSEOrMmx_9_9_0_);
    g_hook_Simd2OperandToDestination_100_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<100,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_100_0_);
    g_hook_Simd2OperandToDestination_101_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<101,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_101_0_);
    g_hook_Simd2OperandToDestination_102_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<102,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_102_0_);
    g_hook_Simd2OperandToDestination_103_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<103,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_103_0_);
    g_hook_Simd2OperandToDestination_104_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<104,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_104_0_);
    g_hook_Simd2OperandToDestination_105_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<105,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_105_0_);
    g_hook_Simd2OperandToDestination_106_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<106,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_106_0_);
    g_hook_Simd2OperandToDestination_107_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<107,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_107_0_);
    g_hook_Simd2OperandToDestination_124_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<124,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_124_0_);
    g_hook_Simd2OperandToDestination_125_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<125,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_125_0_);
    g_hook_Simd2OperandToDestination_126_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<126,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_126_0_);
    g_hook_Simd2OperandToDestination_127_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<127,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_127_0_);
    g_hook_Simd2OperandToDestination_128_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<128,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_128_0_);
    g_hook_Simd2OperandToDestination_129_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<129,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_129_0_);
    g_hook_Simd2OperandToDestination_130_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<130,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_130_2_);
    g_hook_Simd2OperandToDestination_131_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<131,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_131_2_);
    g_hook_Simd2OperandToDestination_132_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<132,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_132_2_);
    g_hook_Simd2OperandToDestination_133_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<133,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_133_2_);
    g_hook_Simd2OperandToDestination_134_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<134,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_134_0_);
    g_hook_Simd2OperandToDestination_135_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<135,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_135_0_);
    g_hook_Simd2OperandToDestination_136_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<136,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_136_0_);
    g_hook_Simd2OperandToDestination_137_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<137,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_137_0_);
    g_hook_Simd2OperandToDestination_138_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<138,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_138_0_);
    g_hook_Simd2OperandToDestination_139_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<139,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_139_0_);
    g_hook_Simd2OperandToDestination_152_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<152,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_152_2_);
    g_hook_Simd2OperandToDestination_153_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<153,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_153_2_);
    g_hook_Simd2OperandToDestination_154_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<154,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_154_2_);
    g_hook_Simd2OperandToDestination_155_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<155,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_155_2_);
    g_hook_Simd2OperandToDestination_156_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<156,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_156_2_);
    g_hook_Simd2OperandToDestination_157_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<157,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_157_2_);
    g_hook_Simd2OperandToDestination_158_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<158,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_158_2_);
    g_hook_Simd2OperandToDestination_159_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<159,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_159_2_);
    g_hook_Simd2OperandToDestination_160_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<160,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_160_2_);
    g_hook_Simd2OperandToDestination_161_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<161,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_161_2_);
    g_hook_Simd2OperandToDestination_182_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<182,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_182_2_);
    g_hook_Simd2OperandToDestination_183_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<183,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_183_2_);
    g_hook_Simd2OperandToDestination_184_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<184,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_184_2_);
    g_hook_Simd2OperandToDestination_298_65536_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<298,65536>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_298_65536_);
    g_hook_Simd2OperandToDestination_299_65536_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<299,65536>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_299_65536_);
    g_hook_Simd2OperandToDestination_300_65536_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<300,65536>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_300_65536_);
    g_hook_Simd2OperandToDestination_301_65536_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<301,65536>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_301_65536_);
    g_hook_Simd2OperandToDestination_302_65536_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<302,65536>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_302_65536_);
    g_hook_Simd2OperandToDestination_55_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<55,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_55_0_);
    g_hook_Simd2OperandToDestination_56_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<56,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_56_0_);
    g_hook_Simd2OperandToDestination_57_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<57,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_57_0_);
    g_hook_Simd2OperandToDestination_58_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<58,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_58_0_);
    g_hook_Simd2OperandToDestination_59_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<59,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_59_0_);
    g_hook_Simd2OperandToDestination_60_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<60,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_60_0_);
    g_hook_Simd2OperandToDestination_61_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<61,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_61_0_);
    g_hook_Simd2OperandToDestination_62_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<62,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_62_0_);
    g_hook_Simd2OperandToDestination_63_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<63,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_63_0_);
    g_hook_Simd2OperandToDestination_64_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<64,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_64_0_);
    g_hook_Simd2OperandToDestination_65_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<65,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_65_0_);
    g_hook_Simd2OperandToDestination_66_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<66,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_66_0_);
    g_hook_Simd2OperandToDestination_67_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<67,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_67_0_);
    g_hook_Simd2OperandToDestination_68_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<68,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_68_0_);
    g_hook_Simd2OperandToDestination_69_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<69,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_69_0_);
    g_hook_Simd2OperandToDestination_70_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<70,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_70_0_);
    g_hook_Simd2OperandToDestination_71_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<71,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_71_0_);
    g_hook_Simd2OperandToDestination_72_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<72,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_72_0_);
    g_hook_Simd2OperandToDestination_73_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<73,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_73_0_);
    g_hook_Simd2OperandToDestination_90_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<90,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_90_0_);
    g_hook_Simd2OperandToDestination_91_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<91,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_91_0_);
    g_hook_Simd2OperandToDestination_92_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<92,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_92_0_);
    g_hook_Simd2OperandToDestination_93_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<93,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_93_0_);
    g_hook_Simd2OperandToDestination_94_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<94,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_94_0_);
    g_hook_Simd2OperandToDestination_95_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<95,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_95_0_);
    g_hook_Simd2OperandToDestination_96_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<96,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_96_0_);
    g_hook_Simd2OperandToDestination_97_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<97,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_97_0_);
    g_hook_Simd2OperandToDestination_98_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<98,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_98_0_);
    g_hook_Simd2OperandToDestination_99_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd2OperandToDestination<99,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd2OperandToDestination_99_0_);
    g_hook_Simd3OperandImplicitXMM0_0_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd3OperandImplicitXMM0<0,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd3OperandImplicitXMM0_0_2_);
    g_hook_Simd3OperandImplicitXMM0_1_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd3OperandImplicitXMM0<1,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd3OperandImplicitXMM0_1_2_);
    g_hook_Simd3OperandImplicitXMM0_23_65536_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd3OperandImplicitXMM0<23,65536>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd3OperandImplicitXMM0_23_65536_);
    g_hook_Simd3OperandImplicitXMM0_2_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimd3OperandImplicitXMM0<2,2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimd3OperandImplicitXMM0_2_2_);
    g_hook_SimdFloatCompare_108_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<108>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_108_);
    g_hook_SimdFloatCompare_109_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<109>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_109_);
    g_hook_SimdFloatCompare_110_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<110>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_110_);
    g_hook_SimdFloatCompare_111_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<111>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_111_);
    g_hook_SimdFloatCompare_112_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<112>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_112_);
    g_hook_SimdFloatCompare_113_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<113>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_113_);
    g_hook_SimdFloatCompare_114_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<114>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_114_);
    g_hook_SimdFloatCompare_115_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<115>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_115_);
    g_hook_SimdFloatCompare_116_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<116>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_116_);
    g_hook_SimdFloatCompare_117_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<117>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_117_);
    g_hook_SimdFloatCompare_118_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<118>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_118_);
    g_hook_SimdFloatCompare_119_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<119>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_119_);
    g_hook_SimdFloatCompare_120_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<120>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_120_);
    g_hook_SimdFloatCompare_121_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<121>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_121_);
    g_hook_SimdFloatCompare_122_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<122>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_122_);
    g_hook_SimdFloatCompare_123_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<123>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_123_);
    g_hook_SimdFloatCompare_74_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<74>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_74_);
    g_hook_SimdFloatCompare_75_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<75>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_75_);
    g_hook_SimdFloatCompare_76_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<76>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_76_);
    g_hook_SimdFloatCompare_77_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<77>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_77_);
    g_hook_SimdFloatCompare_78_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<78>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_78_);
    g_hook_SimdFloatCompare_79_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<79>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_79_);
    g_hook_SimdFloatCompare_80_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<80>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_80_);
    g_hook_SimdFloatCompare_81_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<81>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_81_);
    g_hook_SimdFloatCompare_82_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<82>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_82_);
    g_hook_SimdFloatCompare_83_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<83>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_83_);
    g_hook_SimdFloatCompare_84_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<84>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_84_);
    g_hook_SimdFloatCompare_85_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<85>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_85_);
    g_hook_SimdFloatCompare_86_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<86>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_86_);
    g_hook_SimdFloatCompare_87_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<87>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_87_);
    g_hook_SimdFloatCompare_88_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<88>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_88_);
    g_hook_SimdFloatCompare_89_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdFloatCompare<89>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdFloatCompare_89_);
    g_hook_SimdParallelFloatCompareAvx_108_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<108,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_108_0_);
    g_hook_SimdParallelFloatCompareAvx_109_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<109,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_109_0_);
    g_hook_SimdParallelFloatCompareAvx_110_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<110,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_110_0_);
    g_hook_SimdParallelFloatCompareAvx_111_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<111,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_111_0_);
    g_hook_SimdParallelFloatCompareAvx_112_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<112,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_112_0_);
    g_hook_SimdParallelFloatCompareAvx_113_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<113,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_113_0_);
    g_hook_SimdParallelFloatCompareAvx_114_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<114,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_114_0_);
    g_hook_SimdParallelFloatCompareAvx_115_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<115,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_115_0_);
    g_hook_SimdParallelFloatCompareAvx_116_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<116,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_116_0_);
    g_hook_SimdParallelFloatCompareAvx_117_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<117,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_117_0_);
    g_hook_SimdParallelFloatCompareAvx_118_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<118,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_118_0_);
    g_hook_SimdParallelFloatCompareAvx_119_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<119,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_119_0_);
    g_hook_SimdParallelFloatCompareAvx_120_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<120,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_120_0_);
    g_hook_SimdParallelFloatCompareAvx_121_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<121,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_121_0_);
    g_hook_SimdParallelFloatCompareAvx_122_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<122,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_122_0_);
    g_hook_SimdParallelFloatCompareAvx_123_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<123,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_123_0_);
    g_hook_SimdParallelFloatCompareAvx_187_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<187,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_187_4_);
    g_hook_SimdParallelFloatCompareAvx_188_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<188,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_188_0_);
    g_hook_SimdParallelFloatCompareAvx_189_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<189,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_189_0_);
    g_hook_SimdParallelFloatCompareAvx_190_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<190,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_190_4_);
    g_hook_SimdParallelFloatCompareAvx_191_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<191,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_191_4_);
    g_hook_SimdParallelFloatCompareAvx_192_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<192,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_192_0_);
    g_hook_SimdParallelFloatCompareAvx_193_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<193,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_193_0_);
    g_hook_SimdParallelFloatCompareAvx_194_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<194,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_194_4_);
    g_hook_SimdParallelFloatCompareAvx_195_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<195,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_195_4_);
    g_hook_SimdParallelFloatCompareAvx_196_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<196,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_196_4_);
    g_hook_SimdParallelFloatCompareAvx_197_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<197,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_197_4_);
    g_hook_SimdParallelFloatCompareAvx_198_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<198,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_198_4_);
    g_hook_SimdParallelFloatCompareAvx_199_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<199,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_199_4_);
    g_hook_SimdParallelFloatCompareAvx_200_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<200,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_200_4_);
    g_hook_SimdParallelFloatCompareAvx_201_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<201,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_201_4_);
    g_hook_SimdParallelFloatCompareAvx_202_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<202,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_202_4_);
    g_hook_SimdParallelFloatCompareAvx_203_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<203,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_203_4_);
    g_hook_SimdParallelFloatCompareAvx_204_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<204,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_204_4_);
    g_hook_SimdParallelFloatCompareAvx_205_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<205,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_205_4_);
    g_hook_SimdParallelFloatCompareAvx_206_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<206,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_206_4_);
    g_hook_SimdParallelFloatCompareAvx_207_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<207,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_207_4_);
    g_hook_SimdParallelFloatCompareAvx_208_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<208,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_208_4_);
    g_hook_SimdParallelFloatCompareAvx_209_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<209,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_209_4_);
    g_hook_SimdParallelFloatCompareAvx_210_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<210,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_210_4_);
    g_hook_SimdParallelFloatCompareAvx_211_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<211,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_211_4_);
    g_hook_SimdParallelFloatCompareAvx_212_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<212,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_212_0_);
    g_hook_SimdParallelFloatCompareAvx_213_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<213,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_213_0_);
    g_hook_SimdParallelFloatCompareAvx_214_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<214,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_214_4_);
    g_hook_SimdParallelFloatCompareAvx_215_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<215,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_215_4_);
    g_hook_SimdParallelFloatCompareAvx_216_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<216,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_216_0_);
    g_hook_SimdParallelFloatCompareAvx_217_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<217,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_217_0_);
    g_hook_SimdParallelFloatCompareAvx_218_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<218,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_218_4_);
    g_hook_SimdParallelFloatCompareAvx_219_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<219,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_219_4_);
    g_hook_SimdParallelFloatCompareAvx_220_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<220,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_220_4_);
    g_hook_SimdParallelFloatCompareAvx_221_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<221,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_221_4_);
    g_hook_SimdParallelFloatCompareAvx_222_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<222,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_222_4_);
    g_hook_SimdParallelFloatCompareAvx_223_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<223,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_223_4_);
    g_hook_SimdParallelFloatCompareAvx_224_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<224,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_224_4_);
    g_hook_SimdParallelFloatCompareAvx_225_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<225,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_225_4_);
    g_hook_SimdParallelFloatCompareAvx_226_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<226,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_226_4_);
    g_hook_SimdParallelFloatCompareAvx_227_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<227,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_227_4_);
    g_hook_SimdParallelFloatCompareAvx_228_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<228,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_228_4_);
    g_hook_SimdParallelFloatCompareAvx_229_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<229,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_229_4_);
    g_hook_SimdParallelFloatCompareAvx_230_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<230,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_230_4_);
    g_hook_SimdParallelFloatCompareAvx_231_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<231,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_231_4_);
    g_hook_SimdParallelFloatCompareAvx_232_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<232,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_232_4_);
    g_hook_SimdParallelFloatCompareAvx_233_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<233,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_233_4_);
    g_hook_SimdParallelFloatCompareAvx_234_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<234,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_234_4_);
    g_hook_SimdParallelFloatCompareAvx_235_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<235,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_235_4_);
    g_hook_SimdParallelFloatCompareAvx_236_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<236,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_236_0_);
    g_hook_SimdParallelFloatCompareAvx_237_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<237,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_237_0_);
    g_hook_SimdParallelFloatCompareAvx_238_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<238,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_238_4_);
    g_hook_SimdParallelFloatCompareAvx_239_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<239,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_239_4_);
    g_hook_SimdParallelFloatCompareAvx_240_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<240,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_240_0_);
    g_hook_SimdParallelFloatCompareAvx_241_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<241,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_241_0_);
    g_hook_SimdParallelFloatCompareAvx_242_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<242,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_242_4_);
    g_hook_SimdParallelFloatCompareAvx_243_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<243,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_243_4_);
    g_hook_SimdParallelFloatCompareAvx_244_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<244,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_244_4_);
    g_hook_SimdParallelFloatCompareAvx_245_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<245,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_245_4_);
    g_hook_SimdParallelFloatCompareAvx_246_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<246,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_246_4_);
    g_hook_SimdParallelFloatCompareAvx_247_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<247,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_247_4_);
    g_hook_SimdParallelFloatCompareAvx_248_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<248,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_248_4_);
    g_hook_SimdParallelFloatCompareAvx_249_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<249,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_249_4_);
    g_hook_SimdParallelFloatCompareAvx_250_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<250,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_250_4_);
    g_hook_SimdParallelFloatCompareAvx_251_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<251,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_251_4_);
    g_hook_SimdParallelFloatCompareAvx_252_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<252,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_252_4_);
    g_hook_SimdParallelFloatCompareAvx_253_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<253,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_253_4_);
    g_hook_SimdParallelFloatCompareAvx_254_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<254,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_254_4_);
    g_hook_SimdParallelFloatCompareAvx_255_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<255,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_255_4_);
    g_hook_SimdParallelFloatCompareAvx_256_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<256,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_256_4_);
    g_hook_SimdParallelFloatCompareAvx_257_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<257,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_257_4_);
    g_hook_SimdParallelFloatCompareAvx_258_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<258,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_258_4_);
    g_hook_SimdParallelFloatCompareAvx_259_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<259,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_259_4_);
    g_hook_SimdParallelFloatCompareAvx_260_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<260,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_260_0_);
    g_hook_SimdParallelFloatCompareAvx_261_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<261,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_261_0_);
    g_hook_SimdParallelFloatCompareAvx_262_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<262,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_262_4_);
    g_hook_SimdParallelFloatCompareAvx_263_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<263,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_263_4_);
    g_hook_SimdParallelFloatCompareAvx_264_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<264,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_264_0_);
    g_hook_SimdParallelFloatCompareAvx_265_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<265,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_265_0_);
    g_hook_SimdParallelFloatCompareAvx_266_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<266,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_266_4_);
    g_hook_SimdParallelFloatCompareAvx_267_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<267,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_267_4_);
    g_hook_SimdParallelFloatCompareAvx_268_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<268,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_268_4_);
    g_hook_SimdParallelFloatCompareAvx_269_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<269,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_269_4_);
    g_hook_SimdParallelFloatCompareAvx_270_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<270,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_270_4_);
    g_hook_SimdParallelFloatCompareAvx_271_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<271,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_271_4_);
    g_hook_SimdParallelFloatCompareAvx_272_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<272,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_272_4_);
    g_hook_SimdParallelFloatCompareAvx_273_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<273,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_273_4_);
    g_hook_SimdParallelFloatCompareAvx_274_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<274,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_274_4_);
    g_hook_SimdParallelFloatCompareAvx_275_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<275,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_275_4_);
    g_hook_SimdParallelFloatCompareAvx_276_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<276,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_276_4_);
    g_hook_SimdParallelFloatCompareAvx_277_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<277,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_277_4_);
    g_hook_SimdParallelFloatCompareAvx_278_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<278,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_278_4_);
    g_hook_SimdParallelFloatCompareAvx_279_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<279,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_279_4_);
    g_hook_SimdParallelFloatCompareAvx_280_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<280,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_280_4_);
    g_hook_SimdParallelFloatCompareAvx_281_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<281,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_281_4_);
    g_hook_SimdParallelFloatCompareAvx_282_4_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<282,4>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_282_4_);
    g_hook_SimdParallelFloatCompareAvx_74_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<74,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_74_0_);
    g_hook_SimdParallelFloatCompareAvx_75_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<75,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_75_0_);
    g_hook_SimdParallelFloatCompareAvx_76_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<76,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_76_0_);
    g_hook_SimdParallelFloatCompareAvx_77_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<77,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_77_0_);
    g_hook_SimdParallelFloatCompareAvx_78_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<78,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_78_0_);
    g_hook_SimdParallelFloatCompareAvx_79_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<79,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_79_0_);
    g_hook_SimdParallelFloatCompareAvx_80_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<80,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_80_0_);
    g_hook_SimdParallelFloatCompareAvx_81_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<81,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_81_0_);
    g_hook_SimdParallelFloatCompareAvx_82_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<82,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_82_0_);
    g_hook_SimdParallelFloatCompareAvx_83_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<83,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_83_0_);
    g_hook_SimdParallelFloatCompareAvx_84_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<84,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_84_0_);
    g_hook_SimdParallelFloatCompareAvx_85_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<85,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_85_0_);
    g_hook_SimdParallelFloatCompareAvx_86_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<86,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_86_0_);
    g_hook_SimdParallelFloatCompareAvx_87_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<87,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_87_0_);
    g_hook_SimdParallelFloatCompareAvx_88_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<88,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_88_0_);
    g_hook_SimdParallelFloatCompareAvx_89_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleSimdParallelFloatCompareAvx<89,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleSimdParallelFloatCompareAvx_89_0_);
    g_hook_StringInstruction = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleStringInstruction(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleStringInstruction);
    g_hook_TEST = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleTEST(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleTEST);
    g_hook_Trap = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleTrap(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleTrap);
    g_hook_TwoOperandArithmeticInstruction_84_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleTwoOperandArithmeticInstruction<84,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleTwoOperandArithmeticInstruction_84_0_);
    g_hook_TwoOperandArithmeticInstruction_84_24_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleTwoOperandArithmeticInstruction<84,24>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleTwoOperandArithmeticInstruction_84_24_);
    g_hook_TwoOperandArithmeticInstruction_93_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleTwoOperandArithmeticInstruction<93,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleTwoOperandArithmeticInstruction_93_0_);
    g_hook_TwoOperandArithmeticInstruction_93_24_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleTwoOperandArithmeticInstruction<93,24>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleTwoOperandArithmeticInstruction_93_24_);
    g_hook_TwoOperandLogicInstruction_104_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleTwoOperandLogicInstruction<104>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleTwoOperandLogicInstruction_104_);
    g_hook_TwoOperandLogicInstruction_106_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleTwoOperandLogicInstruction<106>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleTwoOperandLogicInstruction_106_);
    g_hook_TwoOperandLogicInstruction_108_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleTwoOperandLogicInstruction<108>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleTwoOperandLogicInstruction_108_);
    g_hook_VBROADCASTx128 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVBROADCASTx128(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVBROADCASTx128);
    g_hook_VBROADCASTxx_61_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVBROADCASTxx<61,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVBROADCASTxx_61_0_);
    g_hook_VBROADCASTxx_61_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVBROADCASTxx<61,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVBROADCASTxx_61_8_);
    g_hook_VBROADCASTxx_63_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVBROADCASTxx<63,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVBROADCASTxx_63_0_);
    g_hook_VBROADCASTxx_63_8_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVBROADCASTxx<63,8>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVBROADCASTxx_63_8_);
    g_hook_VBROADCASTxx_65_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVBROADCASTxx<65,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVBROADCASTxx_65_0_);
    g_hook_VBROADCASTxx_67_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVBROADCASTxx<67,0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVBROADCASTxx_67_0_);
    g_hook_VCVTPS2PH = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVCVTPS2PH(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVCVTPS2PH);
    g_hook_VEXTRACTx128 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVEXTRACTx128(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVEXTRACTx128);
    g_hook_VGATHER_32_32_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVGATHER<32,32>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVGATHER_32_32_);
    g_hook_VGATHER_32_64_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVGATHER<32,64>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVGATHER_32_64_);
    g_hook_VGATHER_64_32_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVGATHER<64,32>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVGATHER_64_32_);
    g_hook_VGATHER_64_64_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVGATHER<64,64>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVGATHER_64_64_);
    g_hook_VINSERTx128 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVINSERTx128(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVINSERTx128);
    g_hook_VMOVDQA = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVMOVDQA(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVMOVDQA);
    g_hook_VMOVDQA32 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVMOVDQA32(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVMOVDQA32);
    g_hook_VMOVDQA64 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVMOVDQA64(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVMOVDQA64);
    g_hook_VMOVDQU = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVMOVDQU(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVMOVDQU);
    g_hook_VMOVDQU16 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVMOVDQU16(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVMOVDQU16);
    g_hook_VMOVDQU32 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVMOVDQU32(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVMOVDQU32);
    g_hook_VMOVDQU64 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVMOVDQU64(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVMOVDQU64);
    g_hook_VMOVDQU8 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVMOVDQU8(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVMOVDQU8);
    g_hook_VMOVD_VMOVQ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVMOVD_VMOVQ(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVMOVD_VMOVQ);
    g_hook_VMOVNTDQA = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVMOVNTDQA(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVMOVNTDQA);
    g_hook_VMOV_Predicated = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVMOV_Predicated(struct TTD::DecodedInstruction const & __ptr64,enum TTD::Align,unsigned char) __ptr64"]),
        (void*)HandleVMOV_Predicated);
    g_hook_VMOV_Unpredicated = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVMOV_Unpredicated(struct TTD::DecodedInstruction const & __ptr64,enum TTD::Align) __ptr64"]),
        (void*)HandleVMOV_Unpredicated);
    g_hook_VPERM2x128 = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPERM2x128(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPERM2x128);
    g_hook_VPERMILPx_3_283_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPERMILPx<3,283>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPERMILPx_3_283_);
    g_hook_VPERMILPx_4_284_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPERMILPx<4,284>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPERMILPx_4_284_);
    g_hook_VPERMPD = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPERMPD(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPERMPD);
    g_hook_VPERMPS_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPERMPS<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPERMPS_0_);
    g_hook_VPERMPS_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPERMPS<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPERMPS_1_);
    g_hook_VPHMINPOSUW = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPHMINPOSUW(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPHMINPOSUW);
    g_hook_VPSLL_SRA_SRL_28_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPSLL_SRA_SRL<28>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPSLL_SRA_SRL_28_);
    g_hook_VPSLL_SRA_SRL_29_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPSLL_SRA_SRL<29>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPSLL_SRA_SRL_29_);
    g_hook_VPSLL_SRA_SRL_30_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPSLL_SRA_SRL<30>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPSLL_SRA_SRL_30_);
    g_hook_VPSLL_SRA_SRL_31_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPSLL_SRA_SRL<31>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPSLL_SRA_SRL_31_);
    g_hook_VPSLL_SRA_SRL_32_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPSLL_SRA_SRL<32>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPSLL_SRA_SRL_32_);
    g_hook_VPSLL_SRA_SRL_33_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPSLL_SRA_SRL<33>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPSLL_SRA_SRL_33_);
    g_hook_VPSLL_SRA_SRL_34_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPSLL_SRA_SRL<34>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPSLL_SRA_SRL_34_);
    g_hook_VPSLL_SRA_SRL_35_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVPSLL_SRA_SRL<35>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVPSLL_SRA_SRL_35_);
    g_hook_VZEROALL = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVZEROALL(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVZEROALL);
    g_hook_VZEROUPPER = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVZEROUPPER(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVZEROUPPER);
    g_hook_VectorMaskMove_32_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVectorMaskMove<32>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVectorMaskMove_32_);
    g_hook_VectorMaskMove_64_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleVectorMaskMove<64>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleVectorMaskMove_64_);
    g_hook_XADD = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleXADD(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleXADD);
    g_hook_XCHG = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleXCHG(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleXCHG);
    g_hook_XGETBV = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleXGETBV(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleXGETBV);
    g_hook_XLAT = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleXLAT(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleXLAT);
    g_hook_XRSTOR = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleXRSTOR(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleXRSTOR);
    g_hook_XSAVE_0_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleXSAVE<0>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleXSAVE_0_);
    g_hook_XSAVE_1_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleXSAVE<1>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleXSAVE_1_);
    g_hook_XSAVE_2_ = safetyhook::create_inline(
        (void*)(inverse_symbol_map["public: bool __cdecl TTD::IntelDecoder<class TTD::X64Traits>::IntelDecoderImpl::HandleXSAVE<2>(struct TTD::DecodedInstruction const & __ptr64) __ptr64"]),
        (void*)HandleXSAVE_2_);
}

safetyhook::InlineHook g_hook_ABM1Operand_0_0_;
safetyhook::InlineHook g_hook_ABM1Operand_1_0_;
safetyhook::InlineHook g_hook_ABM1Operand_2_0_;
safetyhook::InlineHook g_hook_ABM1Operand_6_8_;
safetyhook::InlineHook g_hook_ABM1Operand_7_8_;
safetyhook::InlineHook g_hook_ABM1Operand_8_8_;
safetyhook::InlineHook g_hook_ABM2Operand_4_8_;
safetyhook::InlineHook g_hook_ABM2Operand_6_8_;
safetyhook::InlineHook g_hook_ABM2Operand_7_8_;
safetyhook::InlineHook g_hook_ABM2Operand_8_8_;
safetyhook::InlineHook g_hook_ADX_0_;
safetyhook::InlineHook g_hook_ADX_1_;
safetyhook::InlineHook g_hook_AESKeyGenAssist_0_;
safetyhook::InlineHook g_hook_AESKeyGenAssist_1_;
safetyhook::InlineHook g_hook_ANDN_BMI1;
safetyhook::InlineHook g_hook_BLENDPD_0_;
safetyhook::InlineHook g_hook_BLENDPD_1_;
safetyhook::InlineHook g_hook_BLENDPS_0_;
safetyhook::InlineHook g_hook_BLENDPS_1_;
safetyhook::InlineHook g_hook_BLENDVAvx_0_;
safetyhook::InlineHook g_hook_BLENDVAvx_1_;
safetyhook::InlineHook g_hook_BLENDVAvx_2_;
safetyhook::InlineHook g_hook_BSWAP;
safetyhook::InlineHook g_hook_BitScanInstruction_120_;
safetyhook::InlineHook g_hook_BitScanInstruction_121_;
safetyhook::InlineHook g_hook_BitTestInstruction;
safetyhook::InlineHook g_hook_CALL;
safetyhook::InlineHook g_hook_CBW;
safetyhook::InlineHook g_hook_CDQ;
safetyhook::InlineHook g_hook_CDQE;
safetyhook::InlineHook g_hook_CLC;
safetyhook::InlineHook g_hook_CLD;
safetyhook::InlineHook g_hook_CLMUL_0_;
safetyhook::InlineHook g_hook_CLMUL_1_;
safetyhook::InlineHook g_hook_CMC;
safetyhook::InlineHook g_hook_CMP;
safetyhook::InlineHook g_hook_CMPXCHG;
safetyhook::InlineHook g_hook_CMPXCHG16B;
safetyhook::InlineHook g_hook_CMPXCHG8B;
safetyhook::InlineHook g_hook_CMPxx_0_;
safetyhook::InlineHook g_hook_CMPxx_1_;
safetyhook::InlineHook g_hook_CMPxx_2_;
safetyhook::InlineHook g_hook_CMPxx_3_;
safetyhook::InlineHook g_hook_COMIS;
safetyhook::InlineHook g_hook_CPUID;
safetyhook::InlineHook g_hook_CQO;
safetyhook::InlineHook g_hook_CRC32;
safetyhook::InlineHook g_hook_CVTPI2xxMMx_0_;
safetyhook::InlineHook g_hook_CVTPI2xxMMx_1_;
safetyhook::InlineHook g_hook_CVTxx2PIMMx_2_;
safetyhook::InlineHook g_hook_CVTxx2PIMMx_3_;
safetyhook::InlineHook g_hook_CVTxx2PIMMx_4_;
safetyhook::InlineHook g_hook_CVTxx2PIMMx_5_;
safetyhook::InlineHook g_hook_CWD;
safetyhook::InlineHook g_hook_CWDE;
safetyhook::InlineHook g_hook_ConditionalJump_0_;
safetyhook::InlineHook g_hook_ConditionalJump_10_;
safetyhook::InlineHook g_hook_ConditionalJump_11_;
safetyhook::InlineHook g_hook_ConditionalJump_12_;
safetyhook::InlineHook g_hook_ConditionalJump_13_;
safetyhook::InlineHook g_hook_ConditionalJump_14_;
safetyhook::InlineHook g_hook_ConditionalJump_15_;
safetyhook::InlineHook g_hook_ConditionalJump_1_;
safetyhook::InlineHook g_hook_ConditionalJump_7_;
safetyhook::InlineHook g_hook_ConditionalJump_8_;
safetyhook::InlineHook g_hook_ConditionalJump_9_;
safetyhook::InlineHook g_hook_ConditionalMove_0_;
safetyhook::InlineHook g_hook_ConditionalMove_10_;
safetyhook::InlineHook g_hook_ConditionalMove_11_;
safetyhook::InlineHook g_hook_ConditionalMove_12_;
safetyhook::InlineHook g_hook_ConditionalMove_13_;
safetyhook::InlineHook g_hook_ConditionalMove_14_;
safetyhook::InlineHook g_hook_ConditionalMove_15_;
safetyhook::InlineHook g_hook_ConditionalMove_1_;
safetyhook::InlineHook g_hook_ConditionalMove_2_;
safetyhook::InlineHook g_hook_ConditionalMove_3_;
safetyhook::InlineHook g_hook_ConditionalMove_4_;
safetyhook::InlineHook g_hook_ConditionalMove_5_;
safetyhook::InlineHook g_hook_ConditionalMove_6_;
safetyhook::InlineHook g_hook_ConditionalMove_7_;
safetyhook::InlineHook g_hook_ConditionalMove_8_;
safetyhook::InlineHook g_hook_ConditionalMove_9_;
safetyhook::InlineHook g_hook_DPPD_0_;
safetyhook::InlineHook g_hook_DPPD_1_;
safetyhook::InlineHook g_hook_DPPS_0_;
safetyhook::InlineHook g_hook_DPPS_1_;
safetyhook::InlineHook g_hook_Divide_101_;
safetyhook::InlineHook g_hook_Divide_102_;
safetyhook::InlineHook g_hook_DoubleShiftInstruction_116_;
safetyhook::InlineHook g_hook_DoubleShiftInstruction_117_;
safetyhook::InlineHook g_hook_EMMS;
safetyhook::InlineHook g_hook_ENTER;
safetyhook::InlineHook g_hook_EXTRACTPS;
safetyhook::InlineHook g_hook_EXTRQ;
safetyhook::InlineHook g_hook_FENCE_0_;
safetyhook::InlineHook g_hook_FENCE_1_;
safetyhook::InlineHook g_hook_FENCE_2_;
safetyhook::InlineHook g_hook_FILD;
safetyhook::InlineHook g_hook_FIST;
safetyhook::InlineHook g_hook_FISTP;
safetyhook::InlineHook g_hook_FLD;
safetyhook::InlineHook g_hook_FLD1;
safetyhook::InlineHook g_hook_FLDCW;
safetyhook::InlineHook g_hook_FLDZ;
safetyhook::InlineHook g_hook_FNCLEX;
safetyhook::InlineHook g_hook_FNINIT;
safetyhook::InlineHook g_hook_FNSTCW;
safetyhook::InlineHook g_hook_FNSTSW;
safetyhook::InlineHook g_hook_FST;
safetyhook::InlineHook g_hook_FSTP;
safetyhook::InlineHook g_hook_FXRSTOR;
safetyhook::InlineHook g_hook_FXSAVE;
safetyhook::InlineHook g_hook_INSERTPS_0_;
safetyhook::InlineHook g_hook_INSERTPS_1_;
safetyhook::InlineHook g_hook_INSERTQ;
safetyhook::InlineHook g_hook_INT;
safetyhook::InlineHook g_hook_IRETQ;
safetyhook::InlineHook g_hook_IncrementDecrementInstruction_85_;
safetyhook::InlineHook g_hook_IncrementDecrementInstruction_94_;
safetyhook::InlineHook g_hook_JAE;
safetyhook::InlineHook g_hook_JB;
safetyhook::InlineHook g_hook_JBE;
safetyhook::InlineHook g_hook_JE;
safetyhook::InlineHook g_hook_JERCX;
safetyhook::InlineHook g_hook_JMP;
safetyhook::InlineHook g_hook_JNE;
safetyhook::InlineHook g_hook_LAHF;
safetyhook::InlineHook g_hook_LDMXCSR;
safetyhook::InlineHook g_hook_LEA;
safetyhook::InlineHook g_hook_LEAVE;
safetyhook::InlineHook g_hook_Loop_0_;
safetyhook::InlineHook g_hook_Loop_1_;
safetyhook::InlineHook g_hook_Loop_2_;
safetyhook::InlineHook g_hook_MOV;
safetyhook::InlineHook g_hook_MOVBE;
safetyhook::InlineHook g_hook_MOVDDUP_0_;
safetyhook::InlineHook g_hook_MOVDDUP_1_;
safetyhook::InlineHook g_hook_MOVDIRI;
safetyhook::InlineHook g_hook_MOVDQU;
safetyhook::InlineHook g_hook_MOVDQU_Unaligned;
safetyhook::InlineHook g_hook_MOVD_MOVQ;
safetyhook::InlineHook g_hook_MOVHPS_0_;
safetyhook::InlineHook g_hook_MOVHPS_1_;
safetyhook::InlineHook g_hook_MOVLPS_0_;
safetyhook::InlineHook g_hook_MOVLPS_1_;
safetyhook::InlineHook g_hook_MOVMSK_32_;
safetyhook::InlineHook g_hook_MOVMSK_64_;
safetyhook::InlineHook g_hook_MOVMSK_8_;
safetyhook::InlineHook g_hook_MOVNTDQA;
safetyhook::InlineHook g_hook_MOVNTSx_8_;
safetyhook::InlineHook g_hook_MOVQMmx;
safetyhook::InlineHook g_hook_MOVSD_0_;
safetyhook::InlineHook g_hook_MOVSD_1_;
safetyhook::InlineHook g_hook_MOVSS_0_;
safetyhook::InlineHook g_hook_MOVSS_1_;
safetyhook::InlineHook g_hook_MOVSX;
safetyhook::InlineHook g_hook_MOVSxDUP_0_160_;
safetyhook::InlineHook g_hook_MOVSxDUP_0_245_;
safetyhook::InlineHook g_hook_MOVSxDUP_1_160_;
safetyhook::InlineHook g_hook_MOVSxDUP_1_245_;
safetyhook::InlineHook g_hook_MOVZX;
safetyhook::InlineHook g_hook_MULX_BMI2;
safetyhook::InlineHook g_hook_Multiply_100_;
safetyhook::InlineHook g_hook_Multiply_99_;
safetyhook::InlineHook g_hook_NEG;
safetyhook::InlineHook g_hook_NOT;
safetyhook::InlineHook g_hook_PABS_28_0_;
safetyhook::InlineHook g_hook_PABS_29_1_;
safetyhook::InlineHook g_hook_PABS_30_2_;
safetyhook::InlineHook g_hook_PALIGNR;
safetyhook::InlineHook g_hook_PCMPxSTRx_0_0_1_;
safetyhook::InlineHook g_hook_PCMPxSTRx_0_1_0_;
safetyhook::InlineHook g_hook_PCMPxSTRx_0_1_1_;
safetyhook::InlineHook g_hook_PCMPxSTRx_1_0_0_;
safetyhook::InlineHook g_hook_PCMPxSTRx_1_0_1_;
safetyhook::InlineHook g_hook_PCMPxSTRx_1_1_1_;
safetyhook::InlineHook g_hook_PEXTR_16_;
safetyhook::InlineHook g_hook_PEXTR_32_;
safetyhook::InlineHook g_hook_PEXTR_64_;
safetyhook::InlineHook g_hook_PEXTR_8_;
safetyhook::InlineHook g_hook_PINSR_0_16_;
safetyhook::InlineHook g_hook_PINSR_0_32_;
safetyhook::InlineHook g_hook_PINSR_0_64_;
safetyhook::InlineHook g_hook_PINSR_0_8_;
safetyhook::InlineHook g_hook_PINSR_1_16_;
safetyhook::InlineHook g_hook_PINSR_1_32_;
safetyhook::InlineHook g_hook_PINSR_1_64_;
safetyhook::InlineHook g_hook_PINSR_1_8_;
safetyhook::InlineHook g_hook_POP;
safetyhook::InlineHook g_hook_POPF;
safetyhook::InlineHook g_hook_POPFD;
safetyhook::InlineHook g_hook_PSHUFB;
safetyhook::InlineHook g_hook_PSHUFW;
safetyhook::InlineHook g_hook_PSLL_SRA_SRL_28_28_;
safetyhook::InlineHook g_hook_PSLL_SRA_SRL_29_29_;
safetyhook::InlineHook g_hook_PSLL_SRA_SRL_30_30_;
safetyhook::InlineHook g_hook_PSLL_SRA_SRL_31_31_;
safetyhook::InlineHook g_hook_PSLL_SRA_SRL_32_32_;
safetyhook::InlineHook g_hook_PSLL_SRA_SRL_33_33_;
safetyhook::InlineHook g_hook_PSLL_SRA_SRL_34_34_;
safetyhook::InlineHook g_hook_PSLL_SRA_SRL_35_35_;
safetyhook::InlineHook g_hook_PTEST_0_0_;
safetyhook::InlineHook g_hook_PTEST_1_0_;
safetyhook::InlineHook g_hook_PTEST_1_1_;
safetyhook::InlineHook g_hook_PTEST_1_2_;
safetyhook::InlineHook g_hook_PUSH;
safetyhook::InlineHook g_hook_PUSHF;
safetyhook::InlineHook g_hook_PUSHFD;
safetyhook::InlineHook g_hook_ParallelFMA3_0_11_;
safetyhook::InlineHook g_hook_ParallelFMA3_0_12_;
safetyhook::InlineHook g_hook_ParallelFMA3_0_15_;
safetyhook::InlineHook g_hook_ParallelFMA3_0_16_;
safetyhook::InlineHook g_hook_ParallelFMA3_0_19_;
safetyhook::InlineHook g_hook_ParallelFMA3_0_20_;
safetyhook::InlineHook g_hook_ParallelFMA3_0_21_;
safetyhook::InlineHook g_hook_ParallelFMA3_0_22_;
safetyhook::InlineHook g_hook_ParallelFMA3_0_3_;
safetyhook::InlineHook g_hook_ParallelFMA3_0_4_;
safetyhook::InlineHook g_hook_ParallelFMA3_0_7_;
safetyhook::InlineHook g_hook_ParallelFMA3_0_8_;
safetyhook::InlineHook g_hook_ParallelFMA3_1_11_;
safetyhook::InlineHook g_hook_ParallelFMA3_1_12_;
safetyhook::InlineHook g_hook_ParallelFMA3_1_15_;
safetyhook::InlineHook g_hook_ParallelFMA3_1_16_;
safetyhook::InlineHook g_hook_ParallelFMA3_1_19_;
safetyhook::InlineHook g_hook_ParallelFMA3_1_20_;
safetyhook::InlineHook g_hook_ParallelFMA3_1_21_;
safetyhook::InlineHook g_hook_ParallelFMA3_1_22_;
safetyhook::InlineHook g_hook_ParallelFMA3_1_3_;
safetyhook::InlineHook g_hook_ParallelFMA3_1_4_;
safetyhook::InlineHook g_hook_ParallelFMA3_1_7_;
safetyhook::InlineHook g_hook_ParallelFMA3_1_8_;
safetyhook::InlineHook g_hook_ParallelFMA3_2_11_;
safetyhook::InlineHook g_hook_ParallelFMA3_2_12_;
safetyhook::InlineHook g_hook_ParallelFMA3_2_15_;
safetyhook::InlineHook g_hook_ParallelFMA3_2_16_;
safetyhook::InlineHook g_hook_ParallelFMA3_2_19_;
safetyhook::InlineHook g_hook_ParallelFMA3_2_20_;
safetyhook::InlineHook g_hook_ParallelFMA3_2_21_;
safetyhook::InlineHook g_hook_ParallelFMA3_2_22_;
safetyhook::InlineHook g_hook_ParallelFMA3_2_3_;
safetyhook::InlineHook g_hook_ParallelFMA3_2_4_;
safetyhook::InlineHook g_hook_ParallelFMA3_2_7_;
safetyhook::InlineHook g_hook_ParallelFMA3_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandAndImmToDestinationAvx_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandAndImmToDestinationAvx_1_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxXY_4_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxXY_5_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxXY_6_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_1_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_31_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_32_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_33_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_34_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_35_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_36_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_37_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_38_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_39_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_40_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_41_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_42_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_64_8_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvxYX_7_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvx_0_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvx_20_2147483648_4_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvx_21_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvx_22_2147483648_4_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvx_23_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvx_27_2_0_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvx_28_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvx_29_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvx_2_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvx_30_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd1OperandToDestinationAvx_3_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandAndImmToDestinationAvx_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandAndImmToDestinationAvx_1_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandAndImmToDestinationAvx_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_0_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_100_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_101_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_102_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_103_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_104_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_105_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_106_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_107_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_10_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_11_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_124_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_125_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_126_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_127_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_128_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_129_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_12_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_130_2_2_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_131_2_2_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_132_2_2_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_133_2_2_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_134_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_135_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_136_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_137_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_138_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_139_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_13_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_140_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_141_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_142_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_143_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_144_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_145_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_146_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_147_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_148_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_149_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_14_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_150_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_151_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_152_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_153_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_154_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_155_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_156_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_157_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_158_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_159_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_15_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_160_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_161_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_16_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_17_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_182_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_183_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_184_2_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_18_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_19_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_1_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_20_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_21_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_22_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_23_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_24_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_25_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_26_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_27_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_2_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_36_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_37_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_38_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_39_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_3_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_40_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_41_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_42_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_43_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_44_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_45_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_46_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_47_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_48_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_49_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_4_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_50_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_51_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_52_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_53_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_54_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_55_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_56_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_57_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_58_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_59_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_5_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_60_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_61_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_62_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_63_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_64_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_65_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_66_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_67_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_68_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_69_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_6_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_70_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_71_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_72_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_73_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_7_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_8_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_90_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_91_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_92_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_93_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_94_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_95_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_96_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_97_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_98_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_99_0_4_;
safetyhook::InlineHook g_hook_ParallelSimd2OperandToDestinationAvx_9_0_8_;
safetyhook::InlineHook g_hook_ParallelSimd3OperandAndImmToDestinationAvx_3_4_;
safetyhook::InlineHook g_hook_ParallelSimd3OperandAndImmToDestinationAvx_4_4_;
safetyhook::InlineHook g_hook_ParallelSimd3OperandAndImmToDestinationAvx_5_8_;
safetyhook::InlineHook g_hook_ParallelSimd3OperandAndImmToDestinationAvx_6_8_;
safetyhook::InlineHook g_hook_ParallelSimd3OperandAndImmToDestinationAvx_7_8_;
safetyhook::InlineHook g_hook_ParallelSimd3OperandToDestinationAvx_285_8_;
safetyhook::InlineHook g_hook_ParallelSimd3OperandToDestinationAvx_286_8_;
safetyhook::InlineHook g_hook_ParallelSimd3OperandToDestinationAvx_287_8_;
safetyhook::InlineHook g_hook_ParallelSimd3OperandToDestinationAvx_288_8_;
safetyhook::InlineHook g_hook_ParallelSimd3OperandToDestinationAvx_289_8_;
safetyhook::InlineHook g_hook_RDTSC;
safetyhook::InlineHook g_hook_RDTSCP;
safetyhook::InlineHook g_hook_RET;
safetyhook::InlineHook g_hook_ROUNDPx_0_2_;
safetyhook::InlineHook g_hook_ROUNDPx_0_3_;
safetyhook::InlineHook g_hook_ROUNDPx_1_2_;
safetyhook::InlineHook g_hook_ROUNDPx_1_3_;
safetyhook::InlineHook g_hook_ROUNDSx_0_0_;
safetyhook::InlineHook g_hook_ROUNDSx_0_1_;
safetyhook::InlineHook g_hook_ROUNDSx_1_0_;
safetyhook::InlineHook g_hook_ROUNDSx_1_1_;
safetyhook::InlineHook g_hook_RotateInstructionBMI2_112_;
safetyhook::InlineHook g_hook_RotateInstruction_112_;
safetyhook::InlineHook g_hook_RotateInstruction_113_;
safetyhook::InlineHook g_hook_RotateInstruction_114_;
safetyhook::InlineHook g_hook_RotateInstruction_115_;
safetyhook::InlineHook g_hook_SAHF;
safetyhook::InlineHook g_hook_SHA1;
safetyhook::InlineHook g_hook_STC;
safetyhook::InlineHook g_hook_STD;
safetyhook::InlineHook g_hook_STMXCSR;
safetyhook::InlineHook g_hook_ScalarFMA3_0_10_;
safetyhook::InlineHook g_hook_ScalarFMA3_0_13_;
safetyhook::InlineHook g_hook_ScalarFMA3_0_14_;
safetyhook::InlineHook g_hook_ScalarFMA3_0_17_;
safetyhook::InlineHook g_hook_ScalarFMA3_0_18_;
safetyhook::InlineHook g_hook_ScalarFMA3_0_5_;
safetyhook::InlineHook g_hook_ScalarFMA3_0_6_;
safetyhook::InlineHook g_hook_ScalarFMA3_0_9_;
safetyhook::InlineHook g_hook_ScalarFMA3_1_10_;
safetyhook::InlineHook g_hook_ScalarFMA3_1_13_;
safetyhook::InlineHook g_hook_ScalarFMA3_1_14_;
safetyhook::InlineHook g_hook_ScalarFMA3_1_17_;
safetyhook::InlineHook g_hook_ScalarFMA3_1_18_;
safetyhook::InlineHook g_hook_ScalarFMA3_1_5_;
safetyhook::InlineHook g_hook_ScalarFMA3_1_6_;
safetyhook::InlineHook g_hook_ScalarFMA3_1_9_;
safetyhook::InlineHook g_hook_ScalarFMA3_2_10_;
safetyhook::InlineHook g_hook_ScalarFMA3_2_13_;
safetyhook::InlineHook g_hook_ScalarFMA3_2_14_;
safetyhook::InlineHook g_hook_ScalarFMA3_2_17_;
safetyhook::InlineHook g_hook_ScalarFMA3_2_18_;
safetyhook::InlineHook g_hook_ScalarFMA3_2_5_;
safetyhook::InlineHook g_hook_ScalarFMA3_2_6_;
safetyhook::InlineHook g_hook_ScalarFMA3_2_9_;
safetyhook::InlineHook g_hook_SetConditional_0_;
safetyhook::InlineHook g_hook_SetConditional_10_;
safetyhook::InlineHook g_hook_SetConditional_11_;
safetyhook::InlineHook g_hook_SetConditional_12_;
safetyhook::InlineHook g_hook_SetConditional_13_;
safetyhook::InlineHook g_hook_SetConditional_14_;
safetyhook::InlineHook g_hook_SetConditional_15_;
safetyhook::InlineHook g_hook_SetConditional_1_;
safetyhook::InlineHook g_hook_SetConditional_2_;
safetyhook::InlineHook g_hook_SetConditional_3_;
safetyhook::InlineHook g_hook_SetConditional_4_;
safetyhook::InlineHook g_hook_SetConditional_5_;
safetyhook::InlineHook g_hook_SetConditional_6_;
safetyhook::InlineHook g_hook_SetConditional_7_;
safetyhook::InlineHook g_hook_SetConditional_8_;
safetyhook::InlineHook g_hook_SetConditional_9_;
safetyhook::InlineHook g_hook_ShiftInstructionBMI2_109_;
safetyhook::InlineHook g_hook_ShiftInstructionBMI2_110_;
safetyhook::InlineHook g_hook_ShiftInstructionBMI2_111_;
safetyhook::InlineHook g_hook_ShiftInstruction_109_;
safetyhook::InlineHook g_hook_ShiftInstruction_110_;
safetyhook::InlineHook g_hook_ShiftInstruction_111_;
safetyhook::InlineHook g_hook_Simd1OperandAndImmToDestination_0_;
safetyhook::InlineHook g_hook_Simd1OperandAndImmToDestination_1_;
safetyhook::InlineHook g_hook_Simd1OperandFromGpr32Source_10_13_;
safetyhook::InlineHook g_hook_Simd1OperandFromGpr32Source_16_19_;
safetyhook::InlineHook g_hook_Simd1OperandToDestinationAvx_24_2147483648_;
safetyhook::InlineHook g_hook_Simd1OperandToDestinationAvx_25_0_;
safetyhook::InlineHook g_hook_Simd1OperandToDestinationAvx_26_2147483648_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_0_0_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_1_0_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_20_2147483648_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_21_0_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_22_2147483648_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_23_0_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_24_2147483648_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_25_0_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_26_2147483648_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_27_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_2_0_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_31_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_32_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_33_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_34_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_35_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_36_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_37_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_38_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_39_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_3_0_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_40_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_41_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_42_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_43_2_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_4_0_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_5_0_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_6_0_;
safetyhook::InlineHook g_hook_Simd1OperandToDestination_7_0_;
safetyhook::InlineHook g_hook_Simd1OperandToGpr32Destination_14_17_;
safetyhook::InlineHook g_hook_Simd1OperandToGpr32Destination_15_18_;
safetyhook::InlineHook g_hook_Simd1OperandToGpr32Destination_8_11_;
safetyhook::InlineHook g_hook_Simd1OperandToGpr32Destination_9_12_;
safetyhook::InlineHook g_hook_Simd2OperandAndImmToDestination_0_;
safetyhook::InlineHook g_hook_Simd2OperandAndImmToDestination_1_;
safetyhook::InlineHook g_hook_Simd2OperandAndImmToDestination_2_;
safetyhook::InlineHook g_hook_Simd2OperandAndImmToDestination_3_;
safetyhook::InlineHook g_hook_Simd2OperandAndImmToDestination_4_;
safetyhook::InlineHook g_hook_Simd2OperandAndImmToDestination_6_;
safetyhook::InlineHook g_hook_Simd2OperandAndImmToDestination_7_;
safetyhook::InlineHook g_hook_Simd2OperandFromGpr32SourceAvx_10_13_;
safetyhook::InlineHook g_hook_Simd2OperandFromGpr32SourceAvx_16_19_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_0_0_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_10_10_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_11_11_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_12_12_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_13_13_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_141_56_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_142_57_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_143_58_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_144_59_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_145_60_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_146_61_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_147_62_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_148_63_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_149_64_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_14_14_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_150_65_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_151_66_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_15_15_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_16_16_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_17_17_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_18_18_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_19_19_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_1_1_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_20_20_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_21_21_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_22_22_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_23_23_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_24_24_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_25_25_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_26_26_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_27_27_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_2_2_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_36_36_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_37_37_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_38_38_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_39_39_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_3_3_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_40_40_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_41_41_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_42_42_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_43_43_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_44_44_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_45_45_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_46_46_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_47_47_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_48_48_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_49_49_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_4_4_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_50_50_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_51_51_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_52_52_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_53_53_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_54_54_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_5_5_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_6_6_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_7_7_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_8_8_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestinationSSEOrMmx_9_9_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_100_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_101_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_102_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_103_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_104_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_105_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_106_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_107_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_124_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_125_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_126_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_127_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_128_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_129_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_130_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_131_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_132_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_133_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_134_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_135_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_136_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_137_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_138_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_139_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_152_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_153_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_154_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_155_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_156_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_157_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_158_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_159_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_160_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_161_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_182_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_183_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_184_2_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_298_65536_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_299_65536_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_300_65536_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_301_65536_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_302_65536_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_55_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_56_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_57_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_58_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_59_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_60_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_61_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_62_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_63_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_64_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_65_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_66_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_67_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_68_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_69_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_70_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_71_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_72_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_73_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_90_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_91_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_92_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_93_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_94_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_95_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_96_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_97_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_98_0_;
safetyhook::InlineHook g_hook_Simd2OperandToDestination_99_0_;
safetyhook::InlineHook g_hook_Simd3OperandImplicitXMM0_0_2_;
safetyhook::InlineHook g_hook_Simd3OperandImplicitXMM0_1_2_;
safetyhook::InlineHook g_hook_Simd3OperandImplicitXMM0_23_65536_;
safetyhook::InlineHook g_hook_Simd3OperandImplicitXMM0_2_2_;
safetyhook::InlineHook g_hook_SimdFloatCompare_108_;
safetyhook::InlineHook g_hook_SimdFloatCompare_109_;
safetyhook::InlineHook g_hook_SimdFloatCompare_110_;
safetyhook::InlineHook g_hook_SimdFloatCompare_111_;
safetyhook::InlineHook g_hook_SimdFloatCompare_112_;
safetyhook::InlineHook g_hook_SimdFloatCompare_113_;
safetyhook::InlineHook g_hook_SimdFloatCompare_114_;
safetyhook::InlineHook g_hook_SimdFloatCompare_115_;
safetyhook::InlineHook g_hook_SimdFloatCompare_116_;
safetyhook::InlineHook g_hook_SimdFloatCompare_117_;
safetyhook::InlineHook g_hook_SimdFloatCompare_118_;
safetyhook::InlineHook g_hook_SimdFloatCompare_119_;
safetyhook::InlineHook g_hook_SimdFloatCompare_120_;
safetyhook::InlineHook g_hook_SimdFloatCompare_121_;
safetyhook::InlineHook g_hook_SimdFloatCompare_122_;
safetyhook::InlineHook g_hook_SimdFloatCompare_123_;
safetyhook::InlineHook g_hook_SimdFloatCompare_74_;
safetyhook::InlineHook g_hook_SimdFloatCompare_75_;
safetyhook::InlineHook g_hook_SimdFloatCompare_76_;
safetyhook::InlineHook g_hook_SimdFloatCompare_77_;
safetyhook::InlineHook g_hook_SimdFloatCompare_78_;
safetyhook::InlineHook g_hook_SimdFloatCompare_79_;
safetyhook::InlineHook g_hook_SimdFloatCompare_80_;
safetyhook::InlineHook g_hook_SimdFloatCompare_81_;
safetyhook::InlineHook g_hook_SimdFloatCompare_82_;
safetyhook::InlineHook g_hook_SimdFloatCompare_83_;
safetyhook::InlineHook g_hook_SimdFloatCompare_84_;
safetyhook::InlineHook g_hook_SimdFloatCompare_85_;
safetyhook::InlineHook g_hook_SimdFloatCompare_86_;
safetyhook::InlineHook g_hook_SimdFloatCompare_87_;
safetyhook::InlineHook g_hook_SimdFloatCompare_88_;
safetyhook::InlineHook g_hook_SimdFloatCompare_89_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_108_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_109_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_110_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_111_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_112_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_113_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_114_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_115_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_116_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_117_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_118_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_119_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_120_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_121_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_122_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_123_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_187_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_188_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_189_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_190_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_191_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_192_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_193_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_194_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_195_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_196_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_197_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_198_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_199_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_200_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_201_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_202_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_203_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_204_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_205_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_206_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_207_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_208_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_209_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_210_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_211_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_212_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_213_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_214_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_215_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_216_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_217_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_218_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_219_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_220_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_221_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_222_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_223_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_224_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_225_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_226_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_227_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_228_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_229_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_230_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_231_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_232_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_233_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_234_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_235_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_236_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_237_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_238_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_239_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_240_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_241_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_242_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_243_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_244_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_245_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_246_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_247_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_248_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_249_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_250_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_251_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_252_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_253_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_254_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_255_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_256_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_257_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_258_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_259_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_260_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_261_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_262_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_263_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_264_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_265_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_266_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_267_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_268_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_269_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_270_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_271_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_272_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_273_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_274_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_275_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_276_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_277_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_278_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_279_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_280_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_281_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_282_4_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_74_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_75_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_76_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_77_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_78_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_79_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_80_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_81_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_82_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_83_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_84_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_85_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_86_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_87_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_88_0_;
safetyhook::InlineHook g_hook_SimdParallelFloatCompareAvx_89_0_;
safetyhook::InlineHook g_hook_StringInstruction;
safetyhook::InlineHook g_hook_TEST;
safetyhook::InlineHook g_hook_Trap;
safetyhook::InlineHook g_hook_TwoOperandArithmeticInstruction_84_0_;
safetyhook::InlineHook g_hook_TwoOperandArithmeticInstruction_84_24_;
safetyhook::InlineHook g_hook_TwoOperandArithmeticInstruction_93_0_;
safetyhook::InlineHook g_hook_TwoOperandArithmeticInstruction_93_24_;
safetyhook::InlineHook g_hook_TwoOperandLogicInstruction_104_;
safetyhook::InlineHook g_hook_TwoOperandLogicInstruction_106_;
safetyhook::InlineHook g_hook_TwoOperandLogicInstruction_108_;
safetyhook::InlineHook g_hook_VBROADCASTx128;
safetyhook::InlineHook g_hook_VBROADCASTxx_61_0_;
safetyhook::InlineHook g_hook_VBROADCASTxx_61_8_;
safetyhook::InlineHook g_hook_VBROADCASTxx_63_0_;
safetyhook::InlineHook g_hook_VBROADCASTxx_63_8_;
safetyhook::InlineHook g_hook_VBROADCASTxx_65_0_;
safetyhook::InlineHook g_hook_VBROADCASTxx_67_0_;
safetyhook::InlineHook g_hook_VCVTPS2PH;
safetyhook::InlineHook g_hook_VEXTRACTx128;
safetyhook::InlineHook g_hook_VGATHER_32_32_;
safetyhook::InlineHook g_hook_VGATHER_32_64_;
safetyhook::InlineHook g_hook_VGATHER_64_32_;
safetyhook::InlineHook g_hook_VGATHER_64_64_;
safetyhook::InlineHook g_hook_VINSERTx128;
safetyhook::InlineHook g_hook_VMOVDQA;
safetyhook::InlineHook g_hook_VMOVDQA32;
safetyhook::InlineHook g_hook_VMOVDQA64;
safetyhook::InlineHook g_hook_VMOVDQU;
safetyhook::InlineHook g_hook_VMOVDQU16;
safetyhook::InlineHook g_hook_VMOVDQU32;
safetyhook::InlineHook g_hook_VMOVDQU64;
safetyhook::InlineHook g_hook_VMOVDQU8;
safetyhook::InlineHook g_hook_VMOVD_VMOVQ;
safetyhook::InlineHook g_hook_VMOVNTDQA;
safetyhook::InlineHook g_hook_VMOV_Predicated;
safetyhook::InlineHook g_hook_VMOV_Unpredicated;
safetyhook::InlineHook g_hook_VPERM2x128;
safetyhook::InlineHook g_hook_VPERMILPx_3_283_;
safetyhook::InlineHook g_hook_VPERMILPx_4_284_;
safetyhook::InlineHook g_hook_VPERMPD;
safetyhook::InlineHook g_hook_VPERMPS_0_;
safetyhook::InlineHook g_hook_VPERMPS_1_;
safetyhook::InlineHook g_hook_VPHMINPOSUW;
safetyhook::InlineHook g_hook_VPSLL_SRA_SRL_28_;
safetyhook::InlineHook g_hook_VPSLL_SRA_SRL_29_;
safetyhook::InlineHook g_hook_VPSLL_SRA_SRL_30_;
safetyhook::InlineHook g_hook_VPSLL_SRA_SRL_31_;
safetyhook::InlineHook g_hook_VPSLL_SRA_SRL_32_;
safetyhook::InlineHook g_hook_VPSLL_SRA_SRL_33_;
safetyhook::InlineHook g_hook_VPSLL_SRA_SRL_34_;
safetyhook::InlineHook g_hook_VPSLL_SRA_SRL_35_;
safetyhook::InlineHook g_hook_VZEROALL;
safetyhook::InlineHook g_hook_VZEROUPPER;
safetyhook::InlineHook g_hook_VectorMaskMove_32_;
safetyhook::InlineHook g_hook_VectorMaskMove_64_;
safetyhook::InlineHook g_hook_XADD;
safetyhook::InlineHook g_hook_XCHG;
safetyhook::InlineHook g_hook_XGETBV;
safetyhook::InlineHook g_hook_XLAT;
safetyhook::InlineHook g_hook_XRSTOR;
safetyhook::InlineHook g_hook_XSAVE_0_;
safetyhook::InlineHook g_hook_XSAVE_1_;
safetyhook::InlineHook g_hook_XSAVE_2_;
}