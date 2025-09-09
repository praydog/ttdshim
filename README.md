# TTD Shim DLL

A Windows shim DLL that exports the complete TTD (Time Travel Debugging) API including:

## Exported Functions

### Core TTD Functions
- `ClearClientTlsValueForThreadId`
- `FlushCodeCaches`
- `GetCounters`
- `GetClientTlsValueForCurrentThread`
- `GetInstructionCounts`
- `GetIpxRegisterMapDefinition`

### Initialization Functions
- `InitializeEmulationDx`
- `InitializeGlobalState`
- `InitializeGpxEngine`
- `InitializeRecorder`
- `InitializeSmartDbgClient`

### Thread Management
- `InjectThread`
- `IsEmulatingCurrentThread`
- `IsSimulator`
- `SetThreadActive`
- `StartSimulatingCurrentThread`
- `StopEmulatingCurrentThread`

### Simulation Control
- `RegisterRecordCallbacks`
- `RequestUnplugInstructions`
- `ResetMaxInstructionsToEmulate`
- `ResumeSimulation`
- `RunCallbackWithSmartContextForCurrentThread`
- `SetSimulatorOptions`
- `SubDbgEntry`
- `TryRegsEmulation`

### TTD Writer Functions
- `OpenWriter`
- `TtdWriterAddCustomEvent`
- `TtdWriterClose`
- `TtdWriterDumpModuleData`
- `TtdWriterDumpSnapshot`
- `TtdWriterGetFileName`
- `TtdWriterGetState`
- `TtdWriterGetThrottleState`
- `TtdWriterOpenState`
- `TtdWriterResetThrottle`
- `TtdWriterSetRecordingMode`
- `TtdWriterStartRecordingCurrentThread`
- `TtdWriterStopRecordingCurrentThread`
- `TtdWriterTryPauseRecording`

### Utility Functions
- `ParametersBlock`
- `ntdll_InitializeThunk`

### Global Variables
- `g__constants` - Global constants pointer

## Building

### Prerequisites
- CMake 3.20 or later
- Visual Studio 2022 (or compatible C++ compiler)
- Windows SDK

### Build Instructions

1. **Using the build script (recommended):**
   ```batch
   build.bat
   ```

2. **Manual build:**
   ```batch
   mkdir build
   cd build
   cmake .. -G "Visual Studio 17 2022" -A x64
   cmake --build . --config Release
   ```

The resulting DLL will be located at `build\Release\ttdshim.dll`.

## Project Structure

- `Main.cpp` - Main DLL implementation with exported functions
- `ttdshim.h` - Header file with function declarations
- `ttdshim.def` - Module definition file specifying exports
- `CMakeLists.txt` - CMake build configuration
- `build.bat` - Build script for easy compilation

## Usage

The DLL currently implements stub versions of the exported functions that return `S_OK`. You can modify the implementations in `Main.cpp` to add your specific shim logic, such as:

- Forwarding calls to another DLL
- Implementing custom behavior
- Adding logging or debugging functionality
- Providing compatibility layers

## Function Signatures

```cpp
HRESULT CreateReplayEngineWithHandshake(
    void* param1,
    void* param2,
    void** ppResult
);

HRESULT CreateTraceLIstWithHandshake(
    void* param1,
    void* param2,
    void** ppResult
);
```
