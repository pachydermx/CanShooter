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

// System.Net.DigestClient
struct DigestClient_t2_530;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.Net.Authorization
struct Authorization_t2_504;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t2_549;
// System.Net.ICredentials
struct ICredentials_t2_551;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.DigestClient::.ctor()
extern "C" void DigestClient__ctor_m2_3963 (DigestClient_t2_530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::.cctor()
extern "C" void DigestClient__cctor_m2_3964 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Net.DigestClient::get_Cache()
extern "C" Hashtable_t1_173 * DigestClient_get_Cache_m2_3965 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestClient::CheckExpired(System.Int32)
extern "C" void DigestClient_CheckExpired_m2_3966 (Object_t * __this /* static, unused */, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t2_504 * DigestClient_Authenticate_m2_3967 (DigestClient_t2_530 * __this, String_t* ___challenge, WebRequest_t2_549 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestClient::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t2_504 * DigestClient_PreAuthenticate_m2_3968 (DigestClient_t2_530 * __this, WebRequest_t2_549 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestClient::get_AuthenticationType()
extern "C" String_t* DigestClient_get_AuthenticationType_m2_3969 (DigestClient_t2_530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestClient::get_CanPreAuthenticate()
extern "C" bool DigestClient_get_CanPreAuthenticate_m2_3970 (DigestClient_t2_530 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
