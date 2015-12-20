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

// System.IO.DefaultWatcher
struct DefaultWatcher_t2_237;
// System.IO.IFileWatcher
struct IFileWatcher_t2_252;
// System.IO.FileSystemWatcher
struct FileSystemWatcher_t2_235;
// System.IO.DefaultWatcherData
struct DefaultWatcherData_t2_234;
// System.String
struct String_t;
// System.IO.FileData
struct FileData_t2_236;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_FileAction.h"

// System.Void System.IO.DefaultWatcher::.ctor()
extern "C" void DefaultWatcher__ctor_m2_2000 (DefaultWatcher_t2_237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DefaultWatcher::.cctor()
extern "C" void DefaultWatcher__cctor_m2_2001 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DefaultWatcher::GetInstance(System.IO.IFileWatcher&)
extern "C" bool DefaultWatcher_GetInstance_m2_2002 (Object_t * __this /* static, unused */, Object_t ** ___watcher, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DefaultWatcher::StartDispatching(System.IO.FileSystemWatcher)
extern "C" void DefaultWatcher_StartDispatching_m2_2003 (DefaultWatcher_t2_237 * __this, FileSystemWatcher_t2_235 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DefaultWatcher::StopDispatching(System.IO.FileSystemWatcher)
extern "C" void DefaultWatcher_StopDispatching_m2_2004 (DefaultWatcher_t2_237 * __this, FileSystemWatcher_t2_235 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DefaultWatcher::Monitor()
extern "C" void DefaultWatcher_Monitor_m2_2005 (DefaultWatcher_t2_237 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.DefaultWatcher::UpdateDataAndDispatch(System.IO.DefaultWatcherData,System.Boolean)
extern "C" bool DefaultWatcher_UpdateDataAndDispatch_m2_2006 (DefaultWatcher_t2_237 * __this, DefaultWatcherData_t2_234 * ___data, bool ___dispatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DefaultWatcher::DispatchEvents(System.IO.FileSystemWatcher,System.IO.FileAction,System.String)
extern "C" void DefaultWatcher_DispatchEvents_m2_2007 (Object_t * __this /* static, unused */, FileSystemWatcher_t2_235 * ___fsw, int32_t ___action, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.DefaultWatcher::DoFiles(System.IO.DefaultWatcherData,System.String,System.Boolean)
extern "C" void DefaultWatcher_DoFiles_m2_2008 (DefaultWatcher_t2_237 * __this, DefaultWatcherData_t2_234 * ___data, String_t* ___directory, bool ___dispatch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.FileData System.IO.DefaultWatcher::CreateFileData(System.String,System.String)
extern "C" FileData_t2_236 * DefaultWatcher_CreateFileData_m2_2009 (Object_t * __this /* static, unused */, String_t* ___directory, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
