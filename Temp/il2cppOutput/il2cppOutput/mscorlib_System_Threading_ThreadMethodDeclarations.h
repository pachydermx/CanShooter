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

// System.Threading.Thread
struct Thread_t1_442;
// System.Threading.ThreadStart
struct ThreadStart_t1_826;
// System.Threading.ParameterizedThreadStart
struct ParameterizedThreadStart_t1_824;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1_432;
// System.MulticastDelegate
struct MulticastDelegate_t1_21;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Threading.ExecutionContext
struct ExecutionContext_t1_453;
// System.Threading.CompressedStack
struct CompressedStack_t1_665;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Threading_ThreadState.h"

// System.Void System.Threading.Thread::.ctor(System.Threading.ThreadStart)
extern "C" void Thread__ctor_m1_4848 (Thread_t1_442 * __this, ThreadStart_t1_826 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.ctor(System.Threading.ParameterizedThreadStart)
extern "C" void Thread__ctor_m1_4849 (Thread_t1_442 * __this, ParameterizedThreadStart_t1_824 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::.cctor()
extern "C" void Thread__cctor_m1_4850 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.Threading.Thread::get_CurrentContext()
extern "C" Context_t1_432 * Thread_get_CurrentContext_m1_4851 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::CurrentThread_internal()
extern "C" Thread_t1_442 * Thread_CurrentThread_internal_m1_4852 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.Thread System.Threading.Thread::get_CurrentThread()
extern "C" Thread_t1_442 * Thread_get_CurrentThread_m1_4853 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::FreeLocalSlotValues(System.Int32,System.Boolean)
extern "C" void Thread_FreeLocalSlotValues_m1_4854 (Object_t * __this /* static, unused */, int32_t ___slot, bool ___thread_local, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetDomainID()
extern "C" int32_t Thread_GetDomainID_m1_4855 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ResetAbort_internal()
extern "C" void Thread_ResetAbort_internal_m1_4856 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ResetAbort()
extern "C" void Thread_ResetAbort_m1_4857 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep_internal(System.Int32)
extern "C" void Thread_Sleep_internal_m1_4858 (Object_t * __this /* static, unused */, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Sleep(System.Int32)
extern "C" void Thread_Sleep_m1_4859 (Object_t * __this /* static, unused */, int32_t ___millisecondsTimeout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Threading.Thread::Thread_internal(System.MulticastDelegate)
extern "C" IntPtr_t Thread_Thread_internal_m1_4860 (Thread_t1_442 * __this, MulticastDelegate_t1_21 * ___start, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_init()
extern "C" void Thread_Thread_init_m1_4861 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentCulture()
extern "C" CultureInfo_t1_163 * Thread_GetCachedCurrentCulture_m1_4862 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentCulture()
extern "C" ByteU5BU5D_t1_72* Thread_GetSerializedCurrentCulture_m1_4863 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentCulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentCulture_m1_4864 (Thread_t1_442 * __this, CultureInfo_t1_163 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::GetCachedCurrentUICulture()
extern "C" CultureInfo_t1_163 * Thread_GetCachedCurrentUICulture_m1_4865 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Threading.Thread::GetSerializedCurrentUICulture()
extern "C" ByteU5BU5D_t1_72* Thread_GetSerializedCurrentUICulture_m1_4866 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetCachedCurrentUICulture(System.Globalization.CultureInfo)
extern "C" void Thread_SetCachedCurrentUICulture_m1_4867 (Thread_t1_442 * __this, CultureInfo_t1_163 * ___culture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentCulture()
extern "C" CultureInfo_t1_163 * Thread_get_CurrentCulture_m1_4868 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Globalization.CultureInfo System.Threading.Thread::get_CurrentUICulture()
extern "C" CultureInfo_t1_163 * Thread_get_CurrentUICulture_m1_4869 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_IsBackground(System.Boolean)
extern "C" void Thread_set_IsBackground_m1_4870 (Thread_t1_442 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Threading.Thread::GetName_internal()
extern "C" String_t* Thread_GetName_internal_m1_4871 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetName_internal(System.String)
extern "C" void Thread_SetName_internal_m1_4872 (Thread_t1_442 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Threading.Thread::get_Name()
extern "C" String_t* Thread_get_Name_m1_4873 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::set_Name(System.String)
extern "C" void Thread_set_Name_m1_4874 (Thread_t1_442 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort_internal(System.Object)
extern "C" void Thread_Abort_internal_m1_4875 (Thread_t1_442 * __this, Object_t * ___stateInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Abort()
extern "C" void Thread_Abort_m1_4876 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Interrupt_internal()
extern "C" void Thread_Interrupt_internal_m1_4877 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Interrupt()
extern "C" void Thread_Interrupt_m1_4878 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start()
extern "C" void Thread_Start_m1_4879 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Thread_free_internal(System.IntPtr)
extern "C" void Thread_Thread_free_internal_m1_4880 (Thread_t1_442 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Finalize()
extern "C" void Thread_Finalize_m1_4881 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::SetState(System.Threading.ThreadState)
extern "C" void Thread_SetState_m1_4882 (Thread_t1_442 * __this, int32_t ___set, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::ClrState(System.Threading.ThreadState)
extern "C" void Thread_ClrState_m1_4883 (Thread_t1_442 * __this, int32_t ___clr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId()
extern "C" int32_t Thread_GetNewManagedId_m1_4884 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetNewManagedId_internal()
extern "C" int32_t Thread_GetNewManagedId_internal_m1_4885 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.ExecutionContext System.Threading.Thread::get_ExecutionContext()
extern "C" ExecutionContext_t1_453 * Thread_get_ExecutionContext_m1_4886 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::get_ManagedThreadId()
extern "C" int32_t Thread_get_ManagedThreadId_m1_4887 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Threading.Thread::GetHashCode()
extern "C" int32_t Thread_GetHashCode_m1_4888 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Thread::Start(System.Object)
extern "C" void Thread_Start_m1_4889 (Thread_t1_442 * __this, Object_t * ___parameter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.CompressedStack System.Threading.Thread::GetCompressedStack()
extern "C" CompressedStack_t1_665 * Thread_GetCompressedStack_m1_4890 (Thread_t1_442 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
