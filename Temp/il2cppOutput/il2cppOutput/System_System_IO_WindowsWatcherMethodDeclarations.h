#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.IO.WindowsWatcher
struct WindowsWatcher_t2_276;
// System.IO.IFileWatcher
struct IFileWatcher_t2_252;
// System.IO.FileSystemWatcher
struct FileSystemWatcher_t2_235;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.WindowsWatcher::.ctor()
extern "C" void WindowsWatcher__ctor_m2_2191 (WindowsWatcher_t2_276 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.WindowsWatcher::GetInstance(System.IO.IFileWatcher&)
extern "C" bool WindowsWatcher_GetInstance_m2_2192 (Object_t * __this /* static, unused */, Object_t ** ___watcher, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.WindowsWatcher::StartDispatching(System.IO.FileSystemWatcher)
extern "C" void WindowsWatcher_StartDispatching_m2_2193 (WindowsWatcher_t2_276 * __this, FileSystemWatcher_t2_235 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.WindowsWatcher::StopDispatching(System.IO.FileSystemWatcher)
extern "C" void WindowsWatcher_StopDispatching_m2_2194 (WindowsWatcher_t2_276 * __this, FileSystemWatcher_t2_235 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
