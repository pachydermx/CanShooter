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

// System.Net.OpenWriteCompletedEventHandler
struct OpenWriteCompletedEventHandler_t2_619;
// System.Object
struct Object_t;
// System.Net.OpenWriteCompletedEventArgs
struct OpenWriteCompletedEventArgs_t2_598;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.OpenWriteCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void OpenWriteCompletedEventHandler__ctor_m2_6614 (OpenWriteCompletedEventHandler_t2_619 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.OpenWriteCompletedEventHandler::Invoke(System.Object,System.Net.OpenWriteCompletedEventArgs)
extern "C" void OpenWriteCompletedEventHandler_Invoke_m2_6615 (OpenWriteCompletedEventHandler_t2_619 * __this, Object_t * ___sender, OpenWriteCompletedEventArgs_t2_598 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_OpenWriteCompletedEventHandler_t2_619(Il2CppObject* delegate, Object_t * ___sender, OpenWriteCompletedEventArgs_t2_598 * ___e);
// System.IAsyncResult System.Net.OpenWriteCompletedEventHandler::BeginInvoke(System.Object,System.Net.OpenWriteCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * OpenWriteCompletedEventHandler_BeginInvoke_m2_6616 (OpenWriteCompletedEventHandler_t2_619 * __this, Object_t * ___sender, OpenWriteCompletedEventArgs_t2_598 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.OpenWriteCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void OpenWriteCompletedEventHandler_EndInvoke_m2_6617 (OpenWriteCompletedEventHandler_t2_619 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
