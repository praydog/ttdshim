#pragma once

#include <windows.h>

#ifdef __cplusplus
extern "C" {
#endif

// Utility functions for loading the original DLL
HMODULE LoadOriginalDLL();
FARPROC GetOriginalProcAddress(LPCSTR lpProcName);

// TTD API function declarations - All use x64 calling convention (rcx, rdx, r8, r9) and return void*
__declspec(dllexport) void* GetVcpuRegisterMapDefinition(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* InitializeEmulateOnlyClient(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* InitializeGlobalState(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* InitializeNirvanaClient(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* InitializeRecorder(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* InitializeSmartCpuClient(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* InjectThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* IsEmulatingCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* IsSimulating(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* OpenWriter(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* ParametersBlock(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* QueryPerformanceCounter(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* RegisterRecordCallbacks(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* RequestUnhookedFunctions(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* ResetMaxInstructionsToEmulate(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* ResumeSimulation(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* RunCallbackWithSmartContextForCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* SetRuntimeOptions(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* SetThreadNative(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* StartEmulatingCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* StopEmulatingCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* StubDllEntry(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TryPauseSimulation(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterAddCustomEvent(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterDumpHeaps(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterDumpModuleData(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterDumpSnapshot(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterGetFileName(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterGetState(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterGetThrottleState(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterRelease(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterResetThrottle(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterResumeRecording(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterStartRecordingCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterStopRecordingCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);
__declspec(dllexport) void* TtdWriterTryPauseRecording(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);

// Global variables/constants
__declspec(dllexport) extern void* g_ttdConstants;
__declspec(dllexport) void* ntdllLdrInitializeThunk(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5);

#ifdef __cplusplus
}
#endif
