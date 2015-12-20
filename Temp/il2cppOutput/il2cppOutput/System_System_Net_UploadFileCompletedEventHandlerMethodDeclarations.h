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

// System.Net.UploadFileCompletedEventHandler
struct UploadFileCompletedEventHandler_t2_621;
// System.Object
struct Object_t;
// System.Net.UploadFileCompletedEventArgs
struct UploadFileCompletedEventArgs_t2_609;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.UploadFileCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UploadFileCompletedEventHandler__ctor_m2_6622 (UploadFileCompletedEventHandler_t2_621 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadFileCompletedEventHandler::Invoke(System.Object,System.Net.UploadFileCompletedEventArgs)
extern "C" void UploadFileCompletedEventHandler_Invoke_m2_6623 (UploadFileCompletedEventHandler_t2_621 * __this, Object_t * ___sender, UploadFileCompletedEventArgs_t2_609 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UploadFileCompletedEventHandler_t2_621(Il2CppObject* delegate, Object_t * ___sender, UploadFileCompletedEventArgs_t2_609 * ___e);
// System.IAsyncResult System.Net.UploadFileCompletedEventHandler::BeginInvoke(System.Object,System.Net.UploadFileCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UploadFileCompletedEventHandler_BeginInvoke_m2_6624 (UploadFileCompletedEventHandler_t2_621 * __this, Object_t * ___sender, UploadFileCompletedEventArgs_t2_609 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadFileCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UploadFileCompletedEventHandler_EndInvoke_m2_6625 (UploadFileCompletedEventHandler_t2_621 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
