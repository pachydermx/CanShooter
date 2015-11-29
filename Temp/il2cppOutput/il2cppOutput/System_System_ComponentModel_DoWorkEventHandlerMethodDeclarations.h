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

// System.ComponentModel.DoWorkEventHandler
struct DoWorkEventHandler_t2_63;
// System.Object
struct Object_t;
// System.ComponentModel.DoWorkEventArgs
struct DoWorkEventArgs_t2_101;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.DoWorkEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DoWorkEventHandler__ctor_m2_6522 (DoWorkEventHandler_t2_63 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DoWorkEventHandler::Invoke(System.Object,System.ComponentModel.DoWorkEventArgs)
extern "C" void DoWorkEventHandler_Invoke_m2_6523 (DoWorkEventHandler_t2_63 * __this, Object_t * ___sender, DoWorkEventArgs_t2_101 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DoWorkEventHandler_t2_63(Il2CppObject* delegate, Object_t * ___sender, DoWorkEventArgs_t2_101 * ___e);
// System.IAsyncResult System.ComponentModel.DoWorkEventHandler::BeginInvoke(System.Object,System.ComponentModel.DoWorkEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * DoWorkEventHandler_BeginInvoke_m2_6524 (DoWorkEventHandler_t2_63 * __this, Object_t * ___sender, DoWorkEventArgs_t2_101 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.DoWorkEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void DoWorkEventHandler_EndInvoke_m2_6525 (DoWorkEventHandler_t2_63 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
