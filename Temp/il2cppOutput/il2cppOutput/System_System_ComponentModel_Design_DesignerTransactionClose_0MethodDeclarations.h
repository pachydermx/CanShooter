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

// System.ComponentModel.Design.DesignerTransactionCloseEventHandler
struct DesignerTransactionCloseEventHandler_t2_796;
// System.Object
struct Object_t;
// System.ComponentModel.Design.DesignerTransactionCloseEventArgs
struct DesignerTransactionCloseEventArgs_t2_45;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.Design.DesignerTransactionCloseEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void DesignerTransactionCloseEventHandler__ctor_m2_6506 (DesignerTransactionCloseEventHandler_t2_796 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.DesignerTransactionCloseEventHandler::Invoke(System.Object,System.ComponentModel.Design.DesignerTransactionCloseEventArgs)
extern "C" void DesignerTransactionCloseEventHandler_Invoke_m2_6507 (DesignerTransactionCloseEventHandler_t2_796 * __this, Object_t * ___sender, DesignerTransactionCloseEventArgs_t2_45 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_DesignerTransactionCloseEventHandler_t2_796(Il2CppObject* delegate, Object_t * ___sender, DesignerTransactionCloseEventArgs_t2_45 * ___e);
// System.IAsyncResult System.ComponentModel.Design.DesignerTransactionCloseEventHandler::BeginInvoke(System.Object,System.ComponentModel.Design.DesignerTransactionCloseEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * DesignerTransactionCloseEventHandler_BeginInvoke_m2_6508 (DesignerTransactionCloseEventHandler_t2_796 * __this, Object_t * ___sender, DesignerTransactionCloseEventArgs_t2_45 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.DesignerTransactionCloseEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void DesignerTransactionCloseEventHandler_EndInvoke_m2_6509 (DesignerTransactionCloseEventHandler_t2_796 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
