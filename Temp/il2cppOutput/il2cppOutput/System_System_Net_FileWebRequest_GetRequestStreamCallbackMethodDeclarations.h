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

// System.Net.FileWebRequest/GetRequestStreamCallback
struct GetRequestStreamCallback_t2_546;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1_226;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.FileWebRequest/GetRequestStreamCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GetRequestStreamCallback__ctor_m2_4051 (GetRequestStreamCallback_t2_546 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest/GetRequestStreamCallback::Invoke()
extern "C" Stream_t1_226 * GetRequestStreamCallback_Invoke_m2_4052 (GetRequestStreamCallback_t2_546 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" Stream_t1_226 * pinvoke_delegate_wrapper_GetRequestStreamCallback_t2_546(Il2CppObject* delegate);
// System.IAsyncResult System.Net.FileWebRequest/GetRequestStreamCallback::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * GetRequestStreamCallback_BeginInvoke_m2_4053 (GetRequestStreamCallback_t2_546 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebRequest/GetRequestStreamCallback::EndInvoke(System.IAsyncResult)
extern "C" Stream_t1_226 * GetRequestStreamCallback_EndInvoke_m2_4054 (GetRequestStreamCallback_t2_546 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
