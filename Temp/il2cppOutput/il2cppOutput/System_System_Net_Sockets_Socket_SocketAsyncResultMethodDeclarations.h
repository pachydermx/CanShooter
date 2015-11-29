﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Sockets.Socket/SocketAsyncResult
struct SocketAsyncResult_t2_478;
// System.Net.Sockets.Socket
struct Socket_t2_471;
// System.Object
struct Object_t;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Collections.Queue
struct Queue_t1_183;
// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t2_484;
// System.Net.Sockets.Socket/Worker
struct Worker_t2_481;
// System.Exception
struct Exception_t1_33;
// System.Threading.WaitHandle
struct WaitHandle_t1_452;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_Socket_SocketOperation.h"
#include "System_System_Net_Sockets_SocketError.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncResult::.ctor(System.Net.Sockets.Socket,System.Object,System.AsyncCallback,System.Net.Sockets.Socket/SocketOperation)
extern "C" void SocketAsyncResult__ctor_m2_3347 (SocketAsyncResult_t2_478 * __this, Socket_t2_471 * ___sock, Object_t * ___state, AsyncCallback_t1_28 * ___callback, int32_t ___operation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CheckIfThrowDelayedException()
extern "C" void SocketAsyncResult_CheckIfThrowDelayedException_m2_3348 (SocketAsyncResult_t2_478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteAllOnDispose(System.Collections.Queue)
extern "C" void SocketAsyncResult_CompleteAllOnDispose_m2_3349 (SocketAsyncResult_t2_478 * __this, Queue_t1_183 * ___queue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::CompleteDisposed(System.Object)
extern "C" void SocketAsyncResult_CompleteDisposed_m2_3350 (SocketAsyncResult_t2_478 * __this, Object_t * ___unused, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete()
extern "C" void SocketAsyncResult_Complete_m2_3351 (SocketAsyncResult_t2_478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SocketAsyncCall System.Net.Sockets.Socket/SocketAsyncResult::GetDelegate(System.Net.Sockets.Socket/Worker,System.Net.Sockets.Socket/SocketOperation)
extern "C" SocketAsyncCall_t2_484 * SocketAsyncResult_GetDelegate_m2_3352 (SocketAsyncResult_t2_478 * __this, Worker_t2_481 * ___worker, int32_t ___op, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Boolean)
extern "C" void SocketAsyncResult_Complete_m2_3353 (SocketAsyncResult_t2_478 * __this, bool ___synch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Int32)
extern "C" void SocketAsyncResult_Complete_m2_3354 (SocketAsyncResult_t2_478 * __this, int32_t ___total, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception,System.Boolean)
extern "C" void SocketAsyncResult_Complete_m2_3355 (SocketAsyncResult_t2_478 * __this, Exception_t1_33 * ___e, bool ___synch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Exception)
extern "C" void SocketAsyncResult_Complete_m2_3356 (SocketAsyncResult_t2_478 * __this, Exception_t1_33 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Net.Sockets.Socket)
extern "C" void SocketAsyncResult_Complete_m2_3357 (SocketAsyncResult_t2_478 * __this, Socket_t2_471 * ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::Complete(System.Net.Sockets.Socket,System.Int32)
extern "C" void SocketAsyncResult_Complete_m2_3358 (SocketAsyncResult_t2_478 * __this, Socket_t2_471 * ___s, int32_t ___total, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncState()
extern "C" Object_t * SocketAsyncResult_get_AsyncState_m2_3359 (SocketAsyncResult_t2_478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SocketAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_452 * SocketAsyncResult_get_AsyncWaitHandle_m2_3360 (SocketAsyncResult_t2_478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_AsyncWaitHandle(System.Threading.WaitHandle)
extern "C" void SocketAsyncResult_set_AsyncWaitHandle_m2_3361 (SocketAsyncResult_t2_478 * __this, WaitHandle_t1_452 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_CompletedSynchronously()
extern "C" bool SocketAsyncResult_get_CompletedSynchronously_m2_3362 (SocketAsyncResult_t2_478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SocketAsyncResult::get_IsCompleted()
extern "C" bool SocketAsyncResult_get_IsCompleted_m2_3363 (SocketAsyncResult_t2_478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_IsCompleted(System.Boolean)
extern "C" void SocketAsyncResult_set_IsCompleted_m2_3364 (SocketAsyncResult_t2_478 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket System.Net.Sockets.Socket/SocketAsyncResult::get_Socket()
extern "C" Socket_t2_471 * SocketAsyncResult_get_Socket_m2_3365 (SocketAsyncResult_t2_478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.Socket/SocketAsyncResult::get_Total()
extern "C" int32_t SocketAsyncResult_get_Total_m2_3366 (SocketAsyncResult_t2_478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncResult::set_Total(System.Int32)
extern "C" void SocketAsyncResult_set_Total_m2_3367 (SocketAsyncResult_t2_478 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.SocketError System.Net.Sockets.Socket/SocketAsyncResult::get_ErrorCode()
extern "C" int32_t SocketAsyncResult_get_ErrorCode_m2_3368 (SocketAsyncResult_t2_478 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
