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

// System.Net.Sockets.Socket/SocketAsyncCall
struct SocketAsyncCall_t2_484;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.Sockets.Socket/SocketAsyncCall::.ctor(System.Object,System.IntPtr)
extern "C" void SocketAsyncCall__ctor_m2_3389 (SocketAsyncCall_t2_484 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncCall::Invoke()
extern "C" void SocketAsyncCall_Invoke_m2_3390 (SocketAsyncCall_t2_484 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_SocketAsyncCall_t2_484(Il2CppObject* delegate);
// System.IAsyncResult System.Net.Sockets.Socket/SocketAsyncCall::BeginInvoke(System.AsyncCallback,System.Object)
extern "C" Object_t * SocketAsyncCall_BeginInvoke_m2_3391 (SocketAsyncCall_t2_484 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Sockets.Socket/SocketAsyncCall::EndInvoke(System.IAsyncResult)
extern "C" void SocketAsyncCall_EndInvoke_m2_3392 (SocketAsyncCall_t2_484 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
