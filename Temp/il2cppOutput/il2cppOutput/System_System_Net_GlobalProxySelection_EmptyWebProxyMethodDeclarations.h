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

// System.Net.GlobalProxySelection/EmptyWebProxy
struct EmptyWebProxy_t2_565;
// System.Net.ICredentials
struct ICredentials_t2_551;
// System.Uri
struct Uri_t2_284;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.GlobalProxySelection/EmptyWebProxy::.ctor()
extern "C" void EmptyWebProxy__ctor_m2_4278 (EmptyWebProxy_t2_565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.GlobalProxySelection/EmptyWebProxy::get_Credentials()
extern "C" Object_t * EmptyWebProxy_get_Credentials_m2_4279 (EmptyWebProxy_t2_565 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.GlobalProxySelection/EmptyWebProxy::set_Credentials(System.Net.ICredentials)
extern "C" void EmptyWebProxy_set_Credentials_m2_4280 (EmptyWebProxy_t2_565 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.GlobalProxySelection/EmptyWebProxy::GetProxy(System.Uri)
extern "C" Uri_t2_284 * EmptyWebProxy_GetProxy_m2_4281 (EmptyWebProxy_t2_565 * __this, Uri_t2_284 * ___destination, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.GlobalProxySelection/EmptyWebProxy::IsBypassed(System.Uri)
extern "C" bool EmptyWebProxy_IsBypassed_m2_4282 (EmptyWebProxy_t2_565 * __this, Uri_t2_284 * ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
