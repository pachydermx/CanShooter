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

// System.Net.ListenerAsyncResult
struct ListenerAsyncResult_t2_593;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Net.HttpListenerContext
struct HttpListenerContext_t2_515;
// System.Threading.WaitHandle
struct WaitHandle_t1_452;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.ListenerAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void ListenerAsyncResult__ctor_m2_4690 (ListenerAsyncResult_t2_593 * __this, AsyncCallback_t1_28 * ___cb, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerAsyncResult::Complete(System.String)
extern "C" void ListenerAsyncResult_Complete_m2_4691 (ListenerAsyncResult_t2_593 * __this, String_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerAsyncResult::InvokeCallback(System.Object)
extern "C" void ListenerAsyncResult_InvokeCallback_m2_4692 (Object_t * __this /* static, unused */, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerAsyncResult::Complete(System.Net.HttpListenerContext)
extern "C" void ListenerAsyncResult_Complete_m2_4693 (ListenerAsyncResult_t2_593 * __this, HttpListenerContext_t2_515 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerAsyncResult::Complete(System.Net.HttpListenerContext,System.Boolean)
extern "C" void ListenerAsyncResult_Complete_m2_4694 (ListenerAsyncResult_t2_593 * __this, HttpListenerContext_t2_515 * ___context, bool ___synch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerContext System.Net.ListenerAsyncResult::GetContext()
extern "C" HttpListenerContext_t2_515 * ListenerAsyncResult_GetContext_m2_4695 (ListenerAsyncResult_t2_593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.ListenerAsyncResult::get_AsyncState()
extern "C" Object_t * ListenerAsyncResult_get_AsyncState_m2_4696 (ListenerAsyncResult_t2_593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.ListenerAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_452 * ListenerAsyncResult_get_AsyncWaitHandle_m2_4697 (ListenerAsyncResult_t2_593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ListenerAsyncResult::get_CompletedSynchronously()
extern "C" bool ListenerAsyncResult_get_CompletedSynchronously_m2_4698 (ListenerAsyncResult_t2_593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ListenerAsyncResult::get_IsCompleted()
extern "C" bool ListenerAsyncResult_get_IsCompleted_m2_4699 (ListenerAsyncResult_t2_593 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
