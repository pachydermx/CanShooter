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

// System.ComponentModel.PropertyChangedEventHandler
struct PropertyChangedEventHandler_t2_801;
// System.Object
struct Object_t;
// System.ComponentModel.PropertyChangedEventArgs
struct PropertyChangedEventArgs_t2_141;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.PropertyChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void PropertyChangedEventHandler__ctor_m2_6534 (PropertyChangedEventHandler_t2_801 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::Invoke(System.Object,System.ComponentModel.PropertyChangedEventArgs)
extern "C" void PropertyChangedEventHandler_Invoke_m2_6535 (PropertyChangedEventHandler_t2_801 * __this, Object_t * ___sender, PropertyChangedEventArgs_t2_141 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_PropertyChangedEventHandler_t2_801(Il2CppObject* delegate, Object_t * ___sender, PropertyChangedEventArgs_t2_141 * ___e);
// System.IAsyncResult System.ComponentModel.PropertyChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.PropertyChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * PropertyChangedEventHandler_BeginInvoke_m2_6536 (PropertyChangedEventHandler_t2_801 * __this, Object_t * ___sender, PropertyChangedEventArgs_t2_141 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void PropertyChangedEventHandler_EndInvoke_m2_6537 (PropertyChangedEventHandler_t2_801 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
