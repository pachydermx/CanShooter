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

// System.Net.Mail.SendCompletedEventHandler
struct SendCompletedEventHandler_t2_308;
// System.Object
struct Object_t;
// System.ComponentModel.AsyncCompletedEventArgs
struct AsyncCompletedEventArgs_t2_57;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.Mail.SendCompletedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void SendCompletedEventHandler__ctor_m2_6562 (SendCompletedEventHandler_t2_308 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SendCompletedEventHandler::Invoke(System.Object,System.ComponentModel.AsyncCompletedEventArgs)
extern "C" void SendCompletedEventHandler_Invoke_m2_6563 (SendCompletedEventHandler_t2_308 * __this, Object_t * ___sender, AsyncCompletedEventArgs_t2_57 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SendCompletedEventHandler_t2_308(Il2CppObject* delegate, Object_t * ___sender, AsyncCompletedEventArgs_t2_57 * ___e);
// System.IAsyncResult System.Net.Mail.SendCompletedEventHandler::BeginInvoke(System.Object,System.ComponentModel.AsyncCompletedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * SendCompletedEventHandler_BeginInvoke_m2_6564 (SendCompletedEventHandler_t2_308 * __this, Object_t * ___sender, AsyncCompletedEventArgs_t2_57 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.SendCompletedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void SendCompletedEventHandler_EndInvoke_m2_6565 (SendCompletedEventHandler_t2_308 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
