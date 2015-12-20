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

// System.Net.UploadValuesCompletedEventHandler
struct UploadValuesCompletedEventHandler_t2_624;
// System.Object
struct Object_t;
// System.Net.UploadValuesCompletedEventArgs
struct UploadValuesCompletedEventArgs_t2_612;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.UploadValuesCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void UploadValuesCompletedEventHandler__ctor_m2_6634 (UploadValuesCompletedEventHandler_t2_624 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadValuesCompletedEventHandler::Invoke(System.Object,System.Net.UploadValuesCompletedEventArgs)
extern "C" void UploadValuesCompletedEventHandler_Invoke_m2_6635 (UploadValuesCompletedEventHandler_t2_624 * __this, Object_t * ___sender, UploadValuesCompletedEventArgs_t2_612 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_UploadValuesCompletedEventHandler_t2_624(Il2CppObject* delegate, Object_t * ___sender, UploadValuesCompletedEventArgs_t2_612 * ___e);
// System.IAsyncResult System.Net.UploadValuesCompletedEventHandler::BeginInvoke(System.Object,System.Net.UploadValuesCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * UploadValuesCompletedEventHandler_BeginInvoke_m2_6636 (UploadValuesCompletedEventHandler_t2_624 * __this, Object_t * ___sender, UploadValuesCompletedEventArgs_t2_612 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.UploadValuesCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void UploadValuesCompletedEventHandler_EndInvoke_m2_6637 (UploadValuesCompletedEventHandler_t2_624 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
