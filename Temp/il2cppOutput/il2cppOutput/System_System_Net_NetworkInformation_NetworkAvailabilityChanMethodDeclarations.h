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

// System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler
struct NetworkAvailabilityChangedEventHandler_t2_407;
// System.Object
struct Object_t;
// System.Net.NetworkInformation.NetworkAvailabilityEventArgs
struct NetworkAvailabilityEventArgs_t2_404;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void NetworkAvailabilityChangedEventHandler__ctor_m2_6570 (NetworkAvailabilityChangedEventHandler_t2_407 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler::Invoke(System.Object,System.Net.NetworkInformation.NetworkAvailabilityEventArgs)
extern "C" void NetworkAvailabilityChangedEventHandler_Invoke_m2_6571 (NetworkAvailabilityChangedEventHandler_t2_407 * __this, Object_t * ___sender, NetworkAvailabilityEventArgs_t2_404 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_NetworkAvailabilityChangedEventHandler_t2_407(Il2CppObject* delegate, Object_t * ___sender, NetworkAvailabilityEventArgs_t2_404 * ___e);
// System.IAsyncResult System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler::BeginInvoke(System.Object,System.Net.NetworkInformation.NetworkAvailabilityEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * NetworkAvailabilityChangedEventHandler_BeginInvoke_m2_6572 (NetworkAvailabilityChangedEventHandler_t2_407 * __this, Object_t * ___sender, NetworkAvailabilityEventArgs_t2_404 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void NetworkAvailabilityChangedEventHandler_EndInvoke_m2_6573 (NetworkAvailabilityChangedEventHandler_t2_407 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
