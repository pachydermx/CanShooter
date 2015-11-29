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

// System.IO.ErrorEventHandler
struct ErrorEventHandler_t2_250;
// System.Object
struct Object_t;
// System.IO.ErrorEventArgs
struct ErrorEventArgs_t2_238;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.ErrorEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ErrorEventHandler__ctor_m2_6550 (ErrorEventHandler_t2_250 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.ErrorEventHandler::Invoke(System.Object,System.IO.ErrorEventArgs)
extern "C" void ErrorEventHandler_Invoke_m2_6551 (ErrorEventHandler_t2_250 * __this, Object_t * ___sender, ErrorEventArgs_t2_238 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ErrorEventHandler_t2_250(Il2CppObject* delegate, Object_t * ___sender, ErrorEventArgs_t2_238 * ___e);
// System.IAsyncResult System.IO.ErrorEventHandler::BeginInvoke(System.Object,System.IO.ErrorEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ErrorEventHandler_BeginInvoke_m2_6552 (ErrorEventHandler_t2_250 * __this, Object_t * ___sender, ErrorEventArgs_t2_238 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.ErrorEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ErrorEventHandler_EndInvoke_m2_6553 (ErrorEventHandler_t2_250 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
