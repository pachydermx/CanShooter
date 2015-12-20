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

// System.Net.Dns/ResolveCallback
struct ResolveCallback_t2_533;
// System.Object
struct Object_t;
// System.Net.IPHostEntry
struct IPHostEntry_t2_532;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void System.Net.Dns/ResolveCallback::.ctor(System.Object,System.IntPtr)
extern "C" void ResolveCallback__ctor_m2_3975 (ResolveCallback_t2_533 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns/ResolveCallback::Invoke(System.String)
extern "C" IPHostEntry_t2_532 * ResolveCallback_Invoke_m2_3976 (ResolveCallback_t2_533 * __this, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPHostEntry_t2_532 * pinvoke_delegate_wrapper_ResolveCallback_t2_533(Il2CppObject* delegate, String_t* ___hostName);
// System.IAsyncResult System.Net.Dns/ResolveCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * ResolveCallback_BeginInvoke_m2_3977 (ResolveCallback_t2_533 * __this, String_t* ___hostName, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns/ResolveCallback::EndInvoke(System.IAsyncResult)
extern "C" IPHostEntry_t2_532 * ResolveCallback_EndInvoke_m2_3978 (ResolveCallback_t2_533 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
