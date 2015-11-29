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

// System.Net.AuthenticationSchemeSelector
struct AuthenticationSchemeSelector_t2_574;
// System.Object
struct Object_t;
// System.Net.HttpListenerRequest
struct HttpListenerRequest_t2_576;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_AuthenticationSchemes.h"

// System.Void System.Net.AuthenticationSchemeSelector::.ctor(System.Object,System.IntPtr)
extern "C" void AuthenticationSchemeSelector__ctor_m2_6586 (AuthenticationSchemeSelector_t2_574 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.AuthenticationSchemes System.Net.AuthenticationSchemeSelector::Invoke(System.Net.HttpListenerRequest)
extern "C" int32_t AuthenticationSchemeSelector_Invoke_m2_6587 (AuthenticationSchemeSelector_t2_574 * __this, HttpListenerRequest_t2_576 * ___httpRequest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_AuthenticationSchemeSelector_t2_574(Il2CppObject* delegate, HttpListenerRequest_t2_576 * ___httpRequest);
// System.IAsyncResult System.Net.AuthenticationSchemeSelector::BeginInvoke(System.Net.HttpListenerRequest,System.AsyncCallback,System.Object)
extern "C" Object_t * AuthenticationSchemeSelector_BeginInvoke_m2_6588 (AuthenticationSchemeSelector_t2_574 * __this, HttpListenerRequest_t2_576 * ___httpRequest, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.AuthenticationSchemes System.Net.AuthenticationSchemeSelector::EndInvoke(System.IAsyncResult)
extern "C" int32_t AuthenticationSchemeSelector_EndInvoke_m2_6589 (AuthenticationSchemeSelector_t2_574 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
