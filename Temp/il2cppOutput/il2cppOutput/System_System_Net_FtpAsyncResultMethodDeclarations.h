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

// System.Net.FtpAsyncResult
struct FtpAsyncResult_t2_554;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Threading.WaitHandle
struct WaitHandle_t1_452;
// System.Exception
struct Exception_t1_33;
// System.Net.FtpWebResponse
struct FtpWebResponse_t2_555;
// System.IO.Stream
struct Stream_t1_226;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.FtpAsyncResult::.ctor(System.AsyncCallback,System.Object)
extern "C" void FtpAsyncResult__ctor_m2_4110 (FtpAsyncResult_t2_554 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Net.FtpAsyncResult::get_AsyncState()
extern "C" Object_t * FtpAsyncResult_get_AsyncState_m2_4111 (FtpAsyncResult_t2_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Net.FtpAsyncResult::get_AsyncWaitHandle()
extern "C" WaitHandle_t1_452 * FtpAsyncResult_get_AsyncWaitHandle_m2_4112 (FtpAsyncResult_t2_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_CompletedSynchronously()
extern "C" bool FtpAsyncResult_get_CompletedSynchronously_m2_4113 (FtpAsyncResult_t2_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_IsCompleted()
extern "C" bool FtpAsyncResult_get_IsCompleted_m2_4114 (FtpAsyncResult_t2_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::get_GotException()
extern "C" bool FtpAsyncResult_get_GotException_m2_4115 (FtpAsyncResult_t2_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.FtpAsyncResult::get_Exception()
extern "C" Exception_t1_33 * FtpAsyncResult_get_Exception_m2_4116 (FtpAsyncResult_t2_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpWebResponse System.Net.FtpAsyncResult::get_Response()
extern "C" FtpWebResponse_t2_555 * FtpAsyncResult_get_Response_m2_4117 (FtpAsyncResult_t2_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Response(System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_set_Response_m2_4118 (FtpAsyncResult_t2_554 * __this, FtpWebResponse_t2_555 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpAsyncResult::get_Stream()
extern "C" Stream_t1_226 * FtpAsyncResult_get_Stream_m2_4119 (FtpAsyncResult_t2_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::set_Stream(System.IO.Stream)
extern "C" void FtpAsyncResult_set_Stream_m2_4120 (FtpAsyncResult_t2_554 * __this, Stream_t1_226 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::WaitUntilComplete()
extern "C" void FtpAsyncResult_WaitUntilComplete_m2_4121 (FtpAsyncResult_t2_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpAsyncResult::WaitUntilComplete(System.Int32,System.Boolean)
extern "C" bool FtpAsyncResult_WaitUntilComplete_m2_4122 (FtpAsyncResult_t2_554 * __this, int32_t ___timeout, bool ___exitContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m2_4123 (FtpAsyncResult_t2_554 * __this, bool ___synch, Exception_t1_33 * ___exc, FtpWebResponse_t2_555 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Net.FtpWebResponse)
extern "C" void FtpAsyncResult_SetCompleted_m2_4124 (FtpAsyncResult_t2_554 * __this, bool ___synch, FtpWebResponse_t2_555 * ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::SetCompleted(System.Boolean,System.Exception)
extern "C" void FtpAsyncResult_SetCompleted_m2_4125 (FtpAsyncResult_t2_554 * __this, bool ___synch, Exception_t1_33 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::DoCallback()
extern "C" void FtpAsyncResult_DoCallback_m2_4126 (FtpAsyncResult_t2_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpAsyncResult::Reset()
extern "C" void FtpAsyncResult_Reset_m2_4127 (FtpAsyncResult_t2_554 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
