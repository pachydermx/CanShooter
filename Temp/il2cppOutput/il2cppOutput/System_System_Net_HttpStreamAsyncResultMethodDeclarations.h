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

// System.Net.HttpStreamAsyncResult
struct HttpStreamAsyncResult_t2_512;
// System.Exception
struct Exception_t1_33;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1_454;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.HttpStreamAsyncResult::.ctor()
extern "C" void HttpStreamAsyncResult__ctor_m2_4446 (HttpStreamAsyncResult_t2_512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpStreamAsyncResult::Complete(System.Exception)
extern "C" void HttpStreamAsyncResult_Complete_m2_4447 (HttpStreamAsyncResult_t2_512 * __this, Exception_t1_33 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpStreamAsyncResult::Complete()
extern "C" void HttpStreamAsyncResult_Complete_m2_4448 (HttpStreamAsyncResult_t2_512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.HttpStreamAsyncResult::get_AsyncState()
extern "C" Object_t * HttpStreamAsyncResult_get_AsyncState_m2_4449 (HttpStreamAsyncResult_t2_512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.HttpStreamAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_454 * HttpStreamAsyncResult_get_AsyncWaitHandle_m2_4450 (HttpStreamAsyncResult_t2_512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpStreamAsyncResult::get_CompletedSynchronously()
extern "C" bool HttpStreamAsyncResult_get_CompletedSynchronously_m2_4451 (HttpStreamAsyncResult_t2_512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpStreamAsyncResult::get_IsCompleted()
extern "C" bool HttpStreamAsyncResult_get_IsCompleted_m2_4452 (HttpStreamAsyncResult_t2_512 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
