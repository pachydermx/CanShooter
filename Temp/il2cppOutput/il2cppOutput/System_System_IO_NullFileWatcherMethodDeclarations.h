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

// System.IO.NullFileWatcher
struct NullFileWatcher_t2_271;
// System.IO.FileSystemWatcher
struct FileSystemWatcher_t2_235;
// System.IO.IFileWatcher
struct IFileWatcher_t2_252;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.NullFileWatcher::.ctor()
extern "C" void NullFileWatcher__ctor_m2_2167 (NullFileWatcher_t2_271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullFileWatcher::StartDispatching(System.IO.FileSystemWatcher)
extern "C" void NullFileWatcher_StartDispatching_m2_2168 (NullFileWatcher_t2_271 * __this, FileSystemWatcher_t2_235 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.NullFileWatcher::StopDispatching(System.IO.FileSystemWatcher)
extern "C" void NullFileWatcher_StopDispatching_m2_2169 (NullFileWatcher_t2_271 * __this, FileSystemWatcher_t2_235 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.NullFileWatcher::GetInstance(System.IO.IFileWatcher&)
extern "C" bool NullFileWatcher_GetInstance_m2_2170 (Object_t * __this /* static, unused */, Object_t ** ___watcher, const MethodInfo* method) IL2CPP_METHOD_ATTR;
