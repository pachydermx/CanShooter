﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler
struct ProcessWorkerEventHandler_t2_61;
// System.Object
struct Object_t;
// System.ComponentModel.AsyncOperation
struct AsyncOperation_t2_58;
// System.Threading.SendOrPostCallback
struct SendOrPostCallback_t1_827;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_Threading_SendOrPostCallback.h"

// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void ProcessWorkerEventHandler__ctor_m2_465 (ProcessWorkerEventHandler_t2_61 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::Invoke(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback)
extern "C" void ProcessWorkerEventHandler_Invoke_m2_466 (ProcessWorkerEventHandler_t2_61 * __this, Object_t * ___argument, AsyncOperation_t2_58 * ___async, SendOrPostCallback_t1_827 * ___callback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_ProcessWorkerEventHandler_t2_61(Il2CppObject* delegate, Object_t * ___argument, AsyncOperation_t2_58 * ___async, SendOrPostCallback_t1_827 * ___callback);
// System.IAsyncResult System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::BeginInvoke(System.Object,System.ComponentModel.AsyncOperation,System.Threading.SendOrPostCallback,System.AsyncCallback,System.Object)
extern "C" Object_t * ProcessWorkerEventHandler_BeginInvoke_m2_467 (ProcessWorkerEventHandler_t2_61 * __this, Object_t * ___argument, AsyncOperation_t2_58 * ___async, SendOrPostCallback_t1_827 * ___callback, AsyncCallback_t1_28 * ____callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.BackgroundWorker/ProcessWorkerEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void ProcessWorkerEventHandler_EndInvoke_m2_468 (ProcessWorkerEventHandler_t2_61 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
