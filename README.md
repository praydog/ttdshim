# ttdshim

A proxy ("shim") DLL for Microsoft's Time Travel Debugging recorder,
`TTDRecordCPU.dll`. It is deployed in place of the original (which is renamed to
`TTDRecordCPU_orig.dll`), re-exports the recorder's API, and forwards every
exported function to the original — so to the rest of TTD it looks and behaves
like the genuine recorder.

On top of that pass-through it hooks into TTD's internals to change how recording
behaves. The main goal is to fix recording-fidelity bugs in TTD's instruction
emulator: certain instruction encodings are emulated incorrectly, so the
recorded trace diverges from what the CPU actually executed. The bundled
`exploit` target is a minimal proof-of-concept of one such divergence.

## What it does

- **DLL proxying / load order.** Loads `TTDRecordCPU_orig.dll`, unlinks the shim
  from the PEB loader list, and rewrites the original module's PEB entry back to
  `TTDRecordCPU.dll` so name-based lookups keep working. Every export in
  `ttdshim.def` is a thin forwarder resolved via `GetProcAddress` on the
  original (see `src/Main.cpp`).
- **Symbol-driven hooking.** Resolves TTD's internal (non-exported) functions
  from the module's PDB via the DIA SDK (kananlib), then installs inline/mid
  hooks with safetyhook. Internal TTD types (`ThreadInfo`, `SmartContext`,
  `X64EmulatorRegisters`, `Writer::Thread`, `INativeRecordVirtualCpu`,
  `NtRuntime`, the x86 decoder / SCode structures) are reconstructed from
  reverse engineering so the shim can call into and inspect live recorder state.
- **Emulation-fidelity fix (the main point).** Hooks the x64 emulator's
  `TraceLookup` and watches for the encodings TTD mis-emulates —
  `xchg eax, r8d` (`41 90`) and `xchg rax, r8` (`49 90`). When seen, it rewrites
  them in place to equivalent instruction sequences the emulator handles
  correctly, then restores the original bytes, so the trace matches real
  execution.
- **Anti-anti-debugging.** Neutralizes common evasions so a target can still be
  recorded: `NtSetInformationThread(ThreadHideFromDebugger)` is swallowed,
  `NtSetInformationProcess` requests that install a NULL
  `ProcessInstrumentationCallback` are blocked, and emulated syscalls are
  filtered via a hook on TTD's `BeforeSyscall`. (An `int 3` /
  `RtlDispatchException` skip path also exists but is currently disabled.)

> Status: this is an active reverse-engineering / research project, not a
> finished tool. Much of the per-instruction instrumentation
> (`src/InstructionInstrumentation.*`) is generated scaffolding, and several
> hook paths are commented out or experimental.

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

Deploy by renaming Microsoft's original recorder to `TTDRecordCPU_orig.dll` and
dropping this DLL in beside it as `TTDRecordCPU.dll`. On the first forwarded
call the shim loads the original, repairs the PEB, resolves symbols, and installs
its hooks; from then on every export is forwarded to the original recorder while
the instrumentation in `src/Hooks.cpp` runs underneath. Behaviour is changed by
editing those hooks, not the forwarders in `src/Main.cpp`.

## Acknowledgements

@kmx00 - Contributions, brainstorming, identifying that there was an emulation divergence when looking at a protected sample
