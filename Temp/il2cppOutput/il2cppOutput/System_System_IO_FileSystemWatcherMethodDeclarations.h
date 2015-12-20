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

// System.IO.FileSystemWatcher
struct FileSystemWatcher_t2_235;
// System.String
struct String_t;
// System.IO.FileSystemEventHandler
struct FileSystemEventHandler_t2_249;
// System.IO.ErrorEventHandler
struct ErrorEventHandler_t2_250;
// System.IO.RenamedEventHandler
struct RenamedEventHandler_t2_251;
// System.IO.SearchPattern2
struct SearchPattern2_t2_248;
// System.ComponentModel.ISite
struct ISite_t2_79;
// System.ComponentModel.ISynchronizeInvoke
struct ISynchronizeInvoke_t2_199;
// System.Delegate
struct Delegate_t1_22;
// System.EventArgs
struct EventArgs_t1_105;
// System.IO.FileSystemEventArgs
struct FileSystemEventArgs_t2_245;
// System.IO.ErrorEventArgs
struct ErrorEventArgs_t2_238;
// System.IO.RenamedEventArgs
struct RenamedEventArgs_t2_272;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_NotifyFilters.h"
#include "System_System_IO_FileSystemWatcher_EventType.h"
#include "System_System_IO_WaitForChangedResult.h"
#include "System_System_IO_WatcherChangeTypes.h"
#include "System_System_IO_FileAction.h"

// System.Void System.IO.FileSystemWatcher::.ctor()
extern "C" void FileSystemWatcher__ctor_m2_2043 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::.ctor(System.String)
extern "C" void FileSystemWatcher__ctor_m2_2044 (FileSystemWatcher_t2_235 * __this, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::.ctor(System.String,System.String)
extern "C" void FileSystemWatcher__ctor_m2_2045 (FileSystemWatcher_t2_235 * __this, String_t* ___path, String_t* ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::.cctor()
extern "C" void FileSystemWatcher__cctor_m2_2046 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::add_Changed(System.IO.FileSystemEventHandler)
extern "C" void FileSystemWatcher_add_Changed_m2_2047 (FileSystemWatcher_t2_235 * __this, FileSystemEventHandler_t2_249 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::remove_Changed(System.IO.FileSystemEventHandler)
extern "C" void FileSystemWatcher_remove_Changed_m2_2048 (FileSystemWatcher_t2_235 * __this, FileSystemEventHandler_t2_249 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::add_Created(System.IO.FileSystemEventHandler)
extern "C" void FileSystemWatcher_add_Created_m2_2049 (FileSystemWatcher_t2_235 * __this, FileSystemEventHandler_t2_249 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::remove_Created(System.IO.FileSystemEventHandler)
extern "C" void FileSystemWatcher_remove_Created_m2_2050 (FileSystemWatcher_t2_235 * __this, FileSystemEventHandler_t2_249 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::add_Deleted(System.IO.FileSystemEventHandler)
extern "C" void FileSystemWatcher_add_Deleted_m2_2051 (FileSystemWatcher_t2_235 * __this, FileSystemEventHandler_t2_249 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::remove_Deleted(System.IO.FileSystemEventHandler)
extern "C" void FileSystemWatcher_remove_Deleted_m2_2052 (FileSystemWatcher_t2_235 * __this, FileSystemEventHandler_t2_249 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::add_Error(System.IO.ErrorEventHandler)
extern "C" void FileSystemWatcher_add_Error_m2_2053 (FileSystemWatcher_t2_235 * __this, ErrorEventHandler_t2_250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::remove_Error(System.IO.ErrorEventHandler)
extern "C" void FileSystemWatcher_remove_Error_m2_2054 (FileSystemWatcher_t2_235 * __this, ErrorEventHandler_t2_250 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::add_Renamed(System.IO.RenamedEventHandler)
extern "C" void FileSystemWatcher_add_Renamed_m2_2055 (FileSystemWatcher_t2_235 * __this, RenamedEventHandler_t2_251 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::remove_Renamed(System.IO.RenamedEventHandler)
extern "C" void FileSystemWatcher_remove_Renamed_m2_2056 (FileSystemWatcher_t2_235 * __this, RenamedEventHandler_t2_251 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::InitWatcher()
extern "C" void FileSystemWatcher_InitWatcher_m2_2057 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::ShowWatcherInfo()
extern "C" void FileSystemWatcher_ShowWatcherInfo_m2_2058 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileSystemWatcher::get_Waiting()
extern "C" bool FileSystemWatcher_get_Waiting_m2_2059 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::set_Waiting(System.Boolean)
extern "C" void FileSystemWatcher_set_Waiting_m2_2060 (FileSystemWatcher_t2_235 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemWatcher::get_MangledFilter()
extern "C" String_t* FileSystemWatcher_get_MangledFilter_m2_2061 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.SearchPattern2 System.IO.FileSystemWatcher::get_Pattern()
extern "C" SearchPattern2_t2_248 * FileSystemWatcher_get_Pattern_m2_2062 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemWatcher::get_FullPath()
extern "C" String_t* FileSystemWatcher_get_FullPath_m2_2063 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileSystemWatcher::get_EnableRaisingEvents()
extern "C" bool FileSystemWatcher_get_EnableRaisingEvents_m2_2064 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::set_EnableRaisingEvents(System.Boolean)
extern "C" void FileSystemWatcher_set_EnableRaisingEvents_m2_2065 (FileSystemWatcher_t2_235 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemWatcher::get_Filter()
extern "C" String_t* FileSystemWatcher_get_Filter_m2_2066 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::set_Filter(System.String)
extern "C" void FileSystemWatcher_set_Filter_m2_2067 (FileSystemWatcher_t2_235 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FileSystemWatcher::get_IncludeSubdirectories()
extern "C" bool FileSystemWatcher_get_IncludeSubdirectories_m2_2068 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::set_IncludeSubdirectories(System.Boolean)
extern "C" void FileSystemWatcher_set_IncludeSubdirectories_m2_2069 (FileSystemWatcher_t2_235 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileSystemWatcher::get_InternalBufferSize()
extern "C" int32_t FileSystemWatcher_get_InternalBufferSize_m2_2070 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::set_InternalBufferSize(System.Int32)
extern "C" void FileSystemWatcher_set_InternalBufferSize_m2_2071 (FileSystemWatcher_t2_235 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.NotifyFilters System.IO.FileSystemWatcher::get_NotifyFilter()
extern "C" int32_t FileSystemWatcher_get_NotifyFilter_m2_2072 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::set_NotifyFilter(System.IO.NotifyFilters)
extern "C" void FileSystemWatcher_set_NotifyFilter_m2_2073 (FileSystemWatcher_t2_235 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemWatcher::get_Path()
extern "C" String_t* FileSystemWatcher_get_Path_m2_2074 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::set_Path(System.String)
extern "C" void FileSystemWatcher_set_Path_m2_2075 (FileSystemWatcher_t2_235 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.IO.FileSystemWatcher::get_Site()
extern "C" Object_t * FileSystemWatcher_get_Site_m2_2076 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::set_Site(System.ComponentModel.ISite)
extern "C" void FileSystemWatcher_set_Site_m2_2077 (FileSystemWatcher_t2_235 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISynchronizeInvoke System.IO.FileSystemWatcher::get_SynchronizingObject()
extern "C" Object_t * FileSystemWatcher_get_SynchronizingObject_m2_2078 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::set_SynchronizingObject(System.ComponentModel.ISynchronizeInvoke)
extern "C" void FileSystemWatcher_set_SynchronizingObject_m2_2079 (FileSystemWatcher_t2_235 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::BeginInit()
extern "C" void FileSystemWatcher_BeginInit_m2_2080 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::Dispose(System.Boolean)
extern "C" void FileSystemWatcher_Dispose_m2_2081 (FileSystemWatcher_t2_235 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::Finalize()
extern "C" void FileSystemWatcher_Finalize_m2_2082 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::EndInit()
extern "C" void FileSystemWatcher_EndInit_m2_2083 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::RaiseEvent(System.Delegate,System.EventArgs,System.IO.FileSystemWatcher/EventType)
extern "C" void FileSystemWatcher_RaiseEvent_m2_2084 (FileSystemWatcher_t2_235 * __this, Delegate_t1_22 * ___ev, EventArgs_t1_105 * ___arg, int32_t ___evtype, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::OnChanged(System.IO.FileSystemEventArgs)
extern "C" void FileSystemWatcher_OnChanged_m2_2085 (FileSystemWatcher_t2_235 * __this, FileSystemEventArgs_t2_245 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::OnCreated(System.IO.FileSystemEventArgs)
extern "C" void FileSystemWatcher_OnCreated_m2_2086 (FileSystemWatcher_t2_235 * __this, FileSystemEventArgs_t2_245 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::OnDeleted(System.IO.FileSystemEventArgs)
extern "C" void FileSystemWatcher_OnDeleted_m2_2087 (FileSystemWatcher_t2_235 * __this, FileSystemEventArgs_t2_245 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::OnError(System.IO.ErrorEventArgs)
extern "C" void FileSystemWatcher_OnError_m2_2088 (FileSystemWatcher_t2_235 * __this, ErrorEventArgs_t2_238 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::OnRenamed(System.IO.RenamedEventArgs)
extern "C" void FileSystemWatcher_OnRenamed_m2_2089 (FileSystemWatcher_t2_235 * __this, RenamedEventArgs_t2_272 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.WaitForChangedResult System.IO.FileSystemWatcher::WaitForChanged(System.IO.WatcherChangeTypes)
extern "C" WaitForChangedResult_t2_247  FileSystemWatcher_WaitForChanged_m2_2090 (FileSystemWatcher_t2_235 * __this, int32_t ___changeType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.WaitForChangedResult System.IO.FileSystemWatcher::WaitForChanged(System.IO.WatcherChangeTypes,System.Int32)
extern "C" WaitForChangedResult_t2_247  FileSystemWatcher_WaitForChanged_m2_2091 (FileSystemWatcher_t2_235 * __this, int32_t ___changeType, int32_t ___timeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::DispatchEvents(System.IO.FileAction,System.String,System.IO.RenamedEventArgs&)
extern "C" void FileSystemWatcher_DispatchEvents_m2_2092 (FileSystemWatcher_t2_235 * __this, int32_t ___act, String_t* ___filename, RenamedEventArgs_t2_272 ** ___renamed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::Start()
extern "C" void FileSystemWatcher_Start_m2_2093 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemWatcher::Stop()
extern "C" void FileSystemWatcher_Stop_m2_2094 (FileSystemWatcher_t2_235 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FileSystemWatcher::InternalSupportsFSW()
extern "C" int32_t FileSystemWatcher_InternalSupportsFSW_m2_2095 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
