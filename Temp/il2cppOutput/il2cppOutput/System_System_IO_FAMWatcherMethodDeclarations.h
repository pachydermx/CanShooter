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

// System.IO.FAMWatcher
struct FAMWatcher_t2_243;
// System.IO.IFileWatcher
struct IFileWatcher_t2_252;
// System.IO.FileSystemWatcher
struct FileSystemWatcher_t2_235;
// System.IO.FAMData
struct FAMData_t2_242;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_FAMConnection.h"
#include "System_System_IO_FAMRequest.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FAMWatcher::.ctor()
extern "C" void FAMWatcher__ctor_m2_2013 (FAMWatcher_t2_243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.FAMWatcher::GetInstance(System.IO.IFileWatcher&,System.Boolean)
extern "C" bool FAMWatcher_GetInstance_m2_2014 (Object_t * __this /* static, unused */, Object_t ** ___watcher, bool ___gamin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::StartDispatching(System.IO.FileSystemWatcher)
extern "C" void FAMWatcher_StartDispatching_m2_2015 (FAMWatcher_t2_243 * __this, FileSystemWatcher_t2_235 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::StartMonitoringDirectory(System.IO.FAMData,System.Boolean)
extern "C" void FAMWatcher_StartMonitoringDirectory_m2_2016 (Object_t * __this /* static, unused */, FAMData_t2_242 * ___data, bool ___justcreated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::StopDispatching(System.IO.FileSystemWatcher)
extern "C" void FAMWatcher_StopDispatching_m2_2017 (FAMWatcher_t2_243 * __this, FileSystemWatcher_t2_235 * ___fsw, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::StopMonitoringDirectory(System.IO.FAMData)
extern "C" void FAMWatcher_StopMonitoringDirectory_m2_2018 (Object_t * __this /* static, unused */, FAMData_t2_242 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::Monitor()
extern "C" void FAMWatcher_Monitor_m2_2019 (FAMWatcher_t2_243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::ProcessEvents()
extern "C" void FAMWatcher_ProcessEvents_m2_2020 (FAMWatcher_t2_243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FAMWatcher::Finalize()
extern "C" void FAMWatcher_Finalize_m2_2021 (FAMWatcher_t2_243 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::FAMOpen(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_FAMOpen_m2_2022 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::FAMClose(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_FAMClose_m2_2023 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::FAMMonitorDirectory(System.IO.FAMConnection&,System.String,System.IO.FAMRequest&,System.IntPtr)
extern "C" int32_t FAMWatcher_FAMMonitorDirectory_m2_2024 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, String_t* ___filename, FAMRequest_t2_240 * ___fr, IntPtr_t ___user_data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::FAMCancelMonitor(System.IO.FAMConnection&,System.IO.FAMRequest&)
extern "C" int32_t FAMWatcher_FAMCancelMonitor_m2_2025 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, FAMRequest_t2_240 * ___fr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::FAMPending(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_FAMPending_m2_2026 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::fam_Open(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_fam_Open_m2_2027 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::fam_Close(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_fam_Close_m2_2028 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::fam_MonitorDirectory(System.IO.FAMConnection&,System.String,System.IO.FAMRequest&,System.IntPtr)
extern "C" int32_t FAMWatcher_fam_MonitorDirectory_m2_2029 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, String_t* ___filename, FAMRequest_t2_240 * ___fr, IntPtr_t ___user_data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::fam_CancelMonitor(System.IO.FAMConnection&,System.IO.FAMRequest&)
extern "C" int32_t FAMWatcher_fam_CancelMonitor_m2_2030 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, FAMRequest_t2_240 * ___fr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::fam_Pending(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_fam_Pending_m2_2031 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::gamin_Open(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_gamin_Open_m2_2032 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::gamin_Close(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_gamin_Close_m2_2033 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::gamin_MonitorDirectory(System.IO.FAMConnection&,System.String,System.IO.FAMRequest&,System.IntPtr)
extern "C" int32_t FAMWatcher_gamin_MonitorDirectory_m2_2034 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, String_t* ___filename, FAMRequest_t2_240 * ___fr, IntPtr_t ___user_data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::gamin_CancelMonitor(System.IO.FAMConnection&,System.IO.FAMRequest&)
extern "C" int32_t FAMWatcher_gamin_CancelMonitor_m2_2035 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, FAMRequest_t2_240 * ___fr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::gamin_Pending(System.IO.FAMConnection&)
extern "C" int32_t FAMWatcher_gamin_Pending_m2_2036 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.FAMWatcher::InternalFAMNextEvent(System.IO.FAMConnection&,System.String&,System.Int32&,System.Int32&)
extern "C" int32_t FAMWatcher_InternalFAMNextEvent_m2_2037 (Object_t * __this /* static, unused */, FAMConnection_t2_239 * ___fc, String_t** ___filename, int32_t* ___code, int32_t* ___reqnum, const MethodInfo* method) IL2CPP_METHOD_ATTR;
