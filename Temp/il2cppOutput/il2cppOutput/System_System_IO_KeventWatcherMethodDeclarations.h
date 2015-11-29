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

// System.IO.KeventWatcher
struct KeventWatcher_t2_264;
// System.IO.IFileWatcher
struct IFileWatcher_t2_252;
// System.IO.FileSystemWatcher
struct FileSystemWatcher_t2_235;
// System.IO.KeventData
struct KeventData_t2_263;
// System.String
struct String_t;
// System.IO.FileSystemInfo
struct FileSystemInfo_t1_231;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_kevent.h"
#include "System_System_IO_FileAction.h"
#include "System_System_IO_timespec.h"

// System.Void System.IO.KeventWatcher::.ctor()
extern "C" void KeventWatcher__ctor_m2_2133 (KeventWatcher_t2_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.KeventWatcher::GetInstance(System.IO.IFileWatcher&)
extern "C" bool KeventWatcher_GetInstance_m2_2134 (Object_t * __this /* static, unused */, Object_t ** ___watcher, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::StartDispatching(System.IO.FileSystemWatcher)
extern "C" void KeventWatcher_StartDispatching_m2_2135 (KeventWatcher_t2_264 * __this, FileSystemWatcher_t2_235 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::StartMonitoringDirectory(System.IO.KeventData)
extern "C" void KeventWatcher_StartMonitoringDirectory_m2_2136 (Object_t * __this /* static, unused */, KeventData_t2_263 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::StopDispatching(System.IO.FileSystemWatcher)
extern "C" void KeventWatcher_StopDispatching_m2_2137 (KeventWatcher_t2_264 * __this, FileSystemWatcher_t2_235 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::StopMonitoringDirectory(System.IO.KeventData)
extern "C" void KeventWatcher_StopMonitoringDirectory_m2_2138 (Object_t * __this /* static, unused */, KeventData_t2_263 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::Monitor()
extern "C" void KeventWatcher_Monitor_m2_2139 (KeventWatcher_t2_264 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::ProcessEvent(System.IO.kevent)
extern "C" void KeventWatcher_ProcessEvent_m2_2140 (KeventWatcher_t2_264 * __this, kevent_t2_260  ___ev, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.KeventWatcher::PostEvent(System.String,System.IO.FileSystemWatcher,System.IO.FileAction,System.IO.FileSystemInfo)
extern "C" void KeventWatcher_PostEvent_m2_2141 (KeventWatcher_t2_264 * __this, String_t* ___filename, FileSystemWatcher_t2_235 * ___fsw, int32_t ___fa, FileSystemInfo_t1_231 * ___changedFsi, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.KeventWatcher::open(System.String,System.Int32,System.Int32)
extern "C" int32_t KeventWatcher_open_m2_2142 (Object_t * __this /* static, unused */, String_t* ___path, int32_t ___flags, int32_t ___mode_t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.KeventWatcher::close(System.Int32)
extern "C" int32_t KeventWatcher_close_m2_2143 (Object_t * __this /* static, unused */, int32_t ___fd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.KeventWatcher::kqueue()
extern "C" int32_t KeventWatcher_kqueue_m2_2144 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.KeventWatcher::kevent(System.Int32,System.IO.kevent&,System.Int32,System.IO.kevent&,System.Int32,System.IO.timespec&)
extern "C" int32_t KeventWatcher_kevent_m2_2145 (Object_t * __this /* static, unused */, int32_t ___kqueue, kevent_t2_260 * ___ev, int32_t ___nchanges, kevent_t2_260 * ___evtlist, int32_t ___nevents, timespec_t2_261 * ___ts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
