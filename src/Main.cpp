#include <string>
#include <windows.h>
#include <spdlog/spdlog.h>

#include <utility/Module.hpp>
#include <utility/String.hpp>

#include "Hooks.hpp"

// Global handle to the original DLL
static HMODULE g_hOriginalDLL = nullptr;

// Function to load the original TTDRecordCPU.dll
HMODULE LoadOriginalDLL()
{
    if (g_hOriginalDLL != nullptr) {
        return g_hOriginalDLL;
    }

    static std::string original_file_path = []() -> std::string {
        char buffer[MAX_PATH]{};
        if (GetModuleFileNameA(GetModuleHandleA("TTDRecordCPU.dll"), buffer, MAX_PATH) == 0) {
            return "";
        }
        spdlog::info("Original DLL path: {}", buffer);
        return std::string(buffer);
    }();

    const auto original_file_dir = original_file_path.substr(0, original_file_path.find_last_of("\\/"));

    // Try to load TTDRecordCPU.dll from system directories
    g_hOriginalDLL = LoadLibraryA((original_file_dir + "\\" + "TTDRecordCPU_orig.dll").c_str());

    if (g_hOriginalDLL != nullptr) {
        // unlink our dll from peb
        utility::safe_unlink(GetModuleHandleA("TTDRecordCPU.dll"));

        // find original module in PEB and strip off the _orig.dll so lookups work (name should become TTDRecordCPU.dll again)
        utility::foreach_module([&](LIST_ENTRY* entry, _LDR_DATA_TABLE_ENTRY* ldr_entry) {
            if (std::wstring_view{ ldr_entry->FullDllName.Buffer }.find(L"TTDRecordCPU_orig.dll") != std::string_view::npos) {
                std::wstring new_name = ldr_entry->FullDllName.Buffer;
                new_name = new_name.substr(0, new_name.find_last_of(L"_")) + L".dll";
                ldr_entry->FullDllName.Length = (USHORT)(new_name.size() * sizeof(wchar_t));

                auto base_dll_name = &ldr_entry->FullDllName + 1;
                std::wstring new_base_name = new_name.substr(new_name.find_last_of(L"\\/") + 1);
                base_dll_name->Length = (USHORT)(new_base_name.size() * sizeof(wchar_t));
                wcscpy_s(ldr_entry->FullDllName.Buffer, new_name.size() + 1, new_name.c_str());
                wcscpy_s(base_dll_name->Buffer, (new_base_name.size()) + 1, new_base_name.c_str());
                
                spdlog::info("Renamed module in PEB to: {}", utility::narrow(new_name));
                spdlog::info("Renamed base module in PEB to: {}", utility::narrow(new_base_name));
            }
        });

        spdlog::info("Spawned console window");

        //std::thread([=]() {
            ttd::hooks::initialize(g_hOriginalDLL);
        //}).detach();
    }

    return g_hOriginalDLL;
}

// Function to get a procedure address from the original DLL
FARPROC GetOriginalProcAddress(LPCSTR lpProcName)
{
    HMODULE hDLL = LoadOriginalDLL();
    if (hDLL == nullptr) {
        return nullptr;
    }
    return GetProcAddress(hDLL, lpProcName);
}

extern "C" __declspec(dllexport) void* g_ttdConstants = []() -> void* {
    static void* asdf = nullptr;
    if (!asdf) {
        asdf = GetOriginalProcAddress("g_ttdConstants");
    }
    return asdf;
}();

// DLL Entry Point
BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        // Initialize when the DLL is loaded
        // Optionally load the original DLL here
        //LoadOriginalDLL();
        break;
    case DLL_THREAD_ATTACH:
        // Initialize when a new thread is created
        break;
    case DLL_THREAD_DETACH:
        // Cleanup when a thread is destroyed
        break;
    case DLL_PROCESS_DETACH:
        // Cleanup when the DLL is unloaded
        if (g_hOriginalDLL != nullptr) {
            FreeLibrary(g_hOriginalDLL);
            g_hOriginalDLL = nullptr;
        }
        break;
    }
    return TRUE;
}

// TTD API Implementations - Forward to original DLL

extern "C" __declspec(dllexport) void* ClearClientTlsValueForThreadId(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("ClearClientTlsValueForThreadId");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* FlushCodeCaches(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("FlushCodeCaches");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* GetCfgPointers(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("GetCfgPointers");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* GetClientTlsValueForCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("GetClientTlsValueForCurrentThread");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* GetInstructionCounts(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("GetInstructionCounts");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* GetVcpuRegisterMapDefinition(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("GetVcpuRegisterMapDefinition");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* InitializeEmulateOnlyClient(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("InitializeEmulateOnlyClient");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* InitializeGlobalState(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("InitializeGlobalState");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* InitializeNirvanaClient(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("InitializeNirvanaClient");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* InitializeRecorder(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("InitializeRecorder");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* InitializeSmartCpuClient(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("InitializeSmartCpuClient");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* InjectThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("InjectThread");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* IsEmulatingCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("IsEmulatingCurrentThread");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* IsSimulating(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("IsSimulating");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* OpenWriter(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("OpenWriter");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* ParametersBlock(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("ParametersBlock");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* RegisterRecordCallbacks(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("RegisterRecordCallbacks");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* RequestUnhookedFunctions(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("RequestUnhookedFunctions");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* ResetMaxInstructionsToEmulate(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("ResetMaxInstructionsToEmulate");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* ResumeSimulation(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("ResumeSimulation");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* RunCallbackWithSmartContextForCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("RunCallbackWithSmartContextForCurrentThread");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* SetRuntimeOptions(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("SetRuntimeOptions");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* SetThreadNative(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("SetThreadNative");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* StartEmulatingCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("StartEmulatingCurrentThread");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* StopEmulatingCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("StopEmulatingCurrentThread");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* StubDllEntry(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("StubDllEntry");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TryPauseSimulation(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TryPauseSimulation");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterAddCustomEvent(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterAddCustomEvent");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterDumpHeaps(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterDumpHeaps");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterDumpModuleData(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterDumpModuleData");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterDumpSnapshot(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterDumpSnapshot");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterGetFileName(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterGetFileName");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterGetState(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterGetState");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterGetThrottleState(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterGetThrottleState");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterRelease(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterRelease");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterResetThrottle(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterResetThrottle");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterResumeRecording(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterResumeRecording");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterStartRecordingCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterStartRecordingCurrentThread");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterStopRecordingCurrentThread(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterStopRecordingCurrentThread");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* TtdWriterTryPauseRecording(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("TtdWriterTryPauseRecording");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}

extern "C" __declspec(dllexport) void* ntdllLdrInitializeThunk(void* rcx, void* rdx, void* r8, void* r9, void* s1, void* s2, void* s3, void* s4, void* s5)
{
    typedef void* (*OriginalFunc)(void*, void*, void*, void*, void*, void*, void*, void*, void*);
    static OriginalFunc originalFunc = nullptr;
    if (!originalFunc) {
        originalFunc = (OriginalFunc)GetOriginalProcAddress("ntdllLdrInitializeThunk");
    }
    return originalFunc ? originalFunc(rcx, rdx, r8, r9, s1, s2, s3, s4, s5) : nullptr;
}