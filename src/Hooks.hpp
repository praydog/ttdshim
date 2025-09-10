#pragma once

// Global handle to the original DLL
extern HMODULE g_hOriginalDLL;

namespace ttd::hooks {
    void initialize(void* original_dll);
}