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

// System.Threading.ThreadExceptionEventHandler
struct ThreadExceptionEventHandler_t2_802;
// System.Object
struct Object_t;
// System.Threading.ThreadExceptionEventArgs
struct ThreadExceptionEventArgs_t2_765;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Threading.ThreadExceptionEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ThreadExceptionEventHandler__ctor_m2_6646 (ThreadExceptionEventHandler_t2_802 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadExceptionEventHandler::Invoke(System.Object,System.Threading.ThreadExceptionEventArgs)
extern "C" void ThreadExceptionEventHandler_Invoke_m2_6647 (ThreadExceptionEventHandler_t2_802 * __this, Object_t * ___sender, ThreadExceptionEventArgs_t2_765 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ThreadExceptionEventHandler_t2_802(Il2CppObject* delegate, Object_t * ___sender, ThreadExceptionEventArgs_t2_765 * ___e);
// System.IAsyncResult System.Threading.ThreadExceptionEventHandler::BeginInvoke(System.Object,System.Threading.ThreadExceptionEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ThreadExceptionEventHandler_BeginInvoke_m2_6648 (ThreadExceptionEventHandler_t2_802 * __this, Object_t * ___sender, ThreadExceptionEventArgs_t2_765 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.ThreadExceptionEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ThreadExceptionEventHandler_EndInvoke_m2_6649 (ThreadExceptionEventHandler_t2_802 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
