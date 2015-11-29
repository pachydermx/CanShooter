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

// System.Net.Dns/GetHostEntryIPCallback
struct GetHostEntryIPCallback_t2_535;
// System.Object
struct Object_t;
// System.Net.IPHostEntry
struct IPHostEntry_t2_532;
// System.Net.IPAddress
struct IPAddress_t2_326;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.Dns/GetHostEntryIPCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GetHostEntryIPCallback__ctor_m2_3983 (GetHostEntryIPCallback_t2_535 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns/GetHostEntryIPCallback::Invoke(System.Net.IPAddress)
extern "C" IPHostEntry_t2_532 * GetHostEntryIPCallback_Invoke_m2_3984 (GetHostEntryIPCallback_t2_535 * __this, IPAddress_t2_326 * ___hostAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPHostEntry_t2_532 * pinvoke_delegate_wrapper_GetHostEntryIPCallback_t2_535(Il2CppObject* delegate, IPAddress_t2_326 * ___hostAddress);
// System.IAsyncResult System.Net.Dns/GetHostEntryIPCallback::BeginInvoke(System.Net.IPAddress,System.AsyncCallback,System.Object)
extern "C" Object_t * GetHostEntryIPCallback_BeginInvoke_m2_3985 (GetHostEntryIPCallback_t2_535 * __this, IPAddress_t2_326 * ___hostAddress, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns/GetHostEntryIPCallback::EndInvoke(System.IAsyncResult)
extern "C" IPHostEntry_t2_532 * GetHostEntryIPCallback_EndInvoke_m2_3986 (GetHostEntryIPCallback_t2_535 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
