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

// System.Net.Dns/GetHostAddressesCallback
struct GetHostAddressesCallback_t2_536;
// System.Object
struct Object_t;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t2_480;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_String.h"

// System.Void System.Net.Dns/GetHostAddressesCallback::.ctor(System.Object,System.IntPtr)
extern "C" void GetHostAddressesCallback__ctor_m2_3987 (GetHostAddressesCallback_t2_536 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns/GetHostAddressesCallback::Invoke(System.String)
extern "C" IPAddressU5BU5D_t2_480* GetHostAddressesCallback_Invoke_m2_3988 (GetHostAddressesCallback_t2_536 * __this, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPAddressU5BU5D_t2_480* pinvoke_delegate_wrapper_GetHostAddressesCallback_t2_536(Il2CppObject* delegate, String_t* ___hostName);
// System.IAsyncResult System.Net.Dns/GetHostAddressesCallback::BeginInvoke(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * GetHostAddressesCallback_BeginInvoke_m2_3989 (GetHostAddressesCallback_t2_536 * __this, String_t* ___hostName, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns/GetHostAddressesCallback::EndInvoke(System.IAsyncResult)
extern "C" IPAddressU5BU5D_t2_480* GetHostAddressesCallback_EndInvoke_m2_3990 (GetHostAddressesCallback_t2_536 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
