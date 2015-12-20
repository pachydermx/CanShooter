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

// System.ComponentModel.ProgressChangedEventHandler
struct ProgressChangedEventHandler_t2_64;
// System.Object
struct Object_t;
// System.ComponentModel.ProgressChangedEventArgs
struct ProgressChangedEventArgs_t2_140;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.ComponentModel.ProgressChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ProgressChangedEventHandler__ctor_m2_6530 (ProgressChangedEventHandler_t2_64 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ProgressChangedEventHandler::Invoke(System.Object,System.ComponentModel.ProgressChangedEventArgs)
extern "C" void ProgressChangedEventHandler_Invoke_m2_6531 (ProgressChangedEventHandler_t2_64 * __this, Object_t * ___sender, ProgressChangedEventArgs_t2_140 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ProgressChangedEventHandler_t2_64(Il2CppObject* delegate, Object_t * ___sender, ProgressChangedEventArgs_t2_140 * ___e);
// System.IAsyncResult System.ComponentModel.ProgressChangedEventHandler::BeginInvoke(System.Object,System.ComponentModel.ProgressChangedEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * ProgressChangedEventHandler_BeginInvoke_m2_6532 (ProgressChangedEventHandler_t2_64 * __this, Object_t * ___sender, ProgressChangedEventArgs_t2_140 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ProgressChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ProgressChangedEventHandler_EndInvoke_m2_6533 (ProgressChangedEventHandler_t2_64 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
