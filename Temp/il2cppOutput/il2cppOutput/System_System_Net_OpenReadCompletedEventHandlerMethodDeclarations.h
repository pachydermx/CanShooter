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

// System.Net.OpenReadCompletedEventHandler
struct OpenReadCompletedEventHandler_t2_618;
// System.Object
struct Object_t;
// System.Net.OpenReadCompletedEventArgs
struct OpenReadCompletedEventArgs_t2_597;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.OpenReadCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void OpenReadCompletedEventHandler__ctor_m2_6610 (OpenReadCompletedEventHandler_t2_618 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.OpenReadCompletedEventHandler::Invoke(System.Object,System.Net.OpenReadCompletedEventArgs)
extern "C" void OpenReadCompletedEventHandler_Invoke_m2_6611 (OpenReadCompletedEventHandler_t2_618 * __this, Object_t * ___sender, OpenReadCompletedEventArgs_t2_597 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OpenReadCompletedEventHandler_t2_618(Il2CppObject* delegate, Object_t * ___sender, OpenReadCompletedEventArgs_t2_597 * ___e);
// System.IAsyncResult System.Net.OpenReadCompletedEventHandler::BeginInvoke(System.Object,System.Net.OpenReadCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * OpenReadCompletedEventHandler_BeginInvoke_m2_6612 (OpenReadCompletedEventHandler_t2_618 * __this, Object_t * ___sender, OpenReadCompletedEventArgs_t2_597 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.OpenReadCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void OpenReadCompletedEventHandler_EndInvoke_m2_6613 (OpenReadCompletedEventHandler_t2_618 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
