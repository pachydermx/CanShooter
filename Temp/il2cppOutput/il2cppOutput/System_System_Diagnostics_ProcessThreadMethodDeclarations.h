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

// System.Diagnostics.ProcessThread
struct ProcessThread_t2_203;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Diagnostics_ThreadPriorityLevel.h"
#include "mscorlib_System_TimeSpan.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_DateTime.h"
#include "System_System_Diagnostics_ThreadState.h"
#include "System_System_Diagnostics_ThreadWaitReason.h"

// System.Void System.Diagnostics.ProcessThread::.ctor()
extern "C" void ProcessThread__ctor_m2_1658 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessThread::get_BasePriority()
extern "C" int32_t ProcessThread_get_BasePriority_m2_1659 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessThread::get_CurrentPriority()
extern "C" int32_t ProcessThread_get_CurrentPriority_m2_1660 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessThread::get_Id()
extern "C" int32_t ProcessThread_get_Id_m2_1661 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThread::set_IdealProcessor(System.Int32)
extern "C" void ProcessThread_set_IdealProcessor_m2_1662 (ProcessThread_t2_203 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.ProcessThread::get_PriorityBoostEnabled()
extern "C" bool ProcessThread_get_PriorityBoostEnabled_m2_1663 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThread::set_PriorityBoostEnabled(System.Boolean)
extern "C" void ProcessThread_set_PriorityBoostEnabled_m2_1664 (ProcessThread_t2_203 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ThreadPriorityLevel System.Diagnostics.ProcessThread::get_PriorityLevel()
extern "C" int32_t ProcessThread_get_PriorityLevel_m2_1665 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThread::set_PriorityLevel(System.Diagnostics.ThreadPriorityLevel)
extern "C" void ProcessThread_set_PriorityLevel_m2_1666 (ProcessThread_t2_203 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.ProcessThread::get_PrivilegedProcessorTime()
extern "C" TimeSpan_t1_218  ProcessThread_get_PrivilegedProcessorTime_m2_1667 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThread::set_ProcessorAffinity(System.IntPtr)
extern "C" void ProcessThread_set_ProcessorAffinity_m2_1668 (ProcessThread_t2_203 * __this, IntPtr_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.ProcessThread::get_StartAddress()
extern "C" IntPtr_t ProcessThread_get_StartAddress_m2_1669 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Diagnostics.ProcessThread::get_StartTime()
extern "C" DateTime_t1_128  ProcessThread_get_StartTime_m2_1670 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ThreadState System.Diagnostics.ProcessThread::get_ThreadState()
extern "C" int32_t ProcessThread_get_ThreadState_m2_1671 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.ProcessThread::get_TotalProcessorTime()
extern "C" TimeSpan_t1_218  ProcessThread_get_TotalProcessorTime_m2_1672 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.ProcessThread::get_UserProcessorTime()
extern "C" TimeSpan_t1_218  ProcessThread_get_UserProcessorTime_m2_1673 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.ThreadWaitReason System.Diagnostics.ProcessThread::get_WaitReason()
extern "C" int32_t ProcessThread_get_WaitReason_m2_1674 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.ProcessThread::ResetIdealProcessor()
extern "C" void ProcessThread_ResetIdealProcessor_m2_1675 (ProcessThread_t2_203 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
