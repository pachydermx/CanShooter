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

// System.Net.Sockets.Socket/SendFileAsyncResult
struct SendFileAsyncResult_t2_482;
// System.Net.Sockets.Socket/SendFileHandler
struct SendFileHandler_t2_483;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1_452;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Sockets.Socket/SendFileAsyncResult::.ctor(System.Net.Sockets.Socket/SendFileHandler,System.IAsyncResult)
extern "C" void SendFileAsyncResult__ctor_m2_3382 (SendFileAsyncResult_t2_482 * __this, SendFileHandler_t2_483 * ___d, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.Sockets.Socket/SendFileAsyncResult::get_AsyncState()
extern "C" Object_t * SendFileAsyncResult_get_AsyncState_m2_3383 (SendFileAsyncResult_t2_482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.Sockets.Socket/SendFileAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_452 * SendFileAsyncResult_get_AsyncWaitHandle_m2_3384 (SendFileAsyncResult_t2_482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SendFileAsyncResult::get_CompletedSynchronously()
extern "C" bool SendFileAsyncResult_get_CompletedSynchronously_m2_3385 (SendFileAsyncResult_t2_482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.Socket/SendFileAsyncResult::get_IsCompleted()
extern "C" bool SendFileAsyncResult_get_IsCompleted_m2_3386 (SendFileAsyncResult_t2_482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.Socket/SendFileHandler System.Net.Sockets.Socket/SendFileAsyncResult::get_Delegate()
extern "C" SendFileHandler_t2_483 * SendFileAsyncResult_get_Delegate_m2_3387 (SendFileAsyncResult_t2_482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Sockets.Socket/SendFileAsyncResult::get_Original()
extern "C" Object_t * SendFileAsyncResult_get_Original_m2_3388 (SendFileAsyncResult_t2_482 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
