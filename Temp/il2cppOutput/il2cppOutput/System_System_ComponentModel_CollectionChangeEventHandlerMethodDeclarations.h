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

// System.ComponentModel.CollectionChangeEventHandler
struct CollectionChangeEventHandler_t2_799;
// System.Object
struct Object_t;
// System.ComponentModel.CollectionChangeEventArgs
struct CollectionChangeEventArgs_t2_76;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.CollectionChangeEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void CollectionChangeEventHandler__ctor_m2_6518 (CollectionChangeEventHandler_t2_799 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CollectionChangeEventHandler::Invoke(System.Object,System.ComponentModel.CollectionChangeEventArgs)
extern "C" void CollectionChangeEventHandler_Invoke_m2_6519 (CollectionChangeEventHandler_t2_799 * __this, Object_t * ___sender, CollectionChangeEventArgs_t2_76 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_CollectionChangeEventHandler_t2_799(Il2CppObject* delegate, Object_t * ___sender, CollectionChangeEventArgs_t2_76 * ___e);
// System.IAsyncResult System.ComponentModel.CollectionChangeEventHandler::BeginInvoke(System.Object,System.ComponentModel.CollectionChangeEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * CollectionChangeEventHandler_BeginInvoke_m2_6520 (CollectionChangeEventHandler_t2_799 * __this, Object_t * ___sender, CollectionChangeEventArgs_t2_76 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CollectionChangeEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void CollectionChangeEventHandler_EndInvoke_m2_6521 (CollectionChangeEventHandler_t2_799 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
