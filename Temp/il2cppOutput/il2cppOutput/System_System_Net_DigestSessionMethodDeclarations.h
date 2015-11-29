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

// System.Net.DigestSession
struct DigestSession_t2_529;
// System.String
struct String_t;
// System.Net.HttpWebRequest
struct HttpWebRequest_t2_585;
// System.Net.Authorization
struct Authorization_t2_504;
// System.Net.WebRequest
struct WebRequest_t2_549;
// System.Net.ICredentials
struct ICredentials_t2_551;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.DigestSession::.ctor()
extern "C" void DigestSession__ctor_m2_3948 (DigestSession_t2_529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.DigestSession::.cctor()
extern "C" void DigestSession__cctor_m2_3949 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Algorithm()
extern "C" String_t* DigestSession_get_Algorithm_m2_3950 (DigestSession_t2_529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Realm()
extern "C" String_t* DigestSession_get_Realm_m2_3951 (DigestSession_t2_529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Nonce()
extern "C" String_t* DigestSession_get_Nonce_m2_3952 (DigestSession_t2_529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_Opaque()
extern "C" String_t* DigestSession_get_Opaque_m2_3953 (DigestSession_t2_529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_QOP()
extern "C" String_t* DigestSession_get_QOP_m2_3954 (DigestSession_t2_529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::get_CNonce()
extern "C" String_t* DigestSession_get_CNonce_m2_3955 (DigestSession_t2_529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.DigestSession::Parse(System.String)
extern "C" bool DigestSession_Parse_m2_3956 (DigestSession_t2_529 * __this, String_t* ___challenge, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HashToHexString(System.String)
extern "C" String_t* DigestSession_HashToHexString_m2_3957 (DigestSession_t2_529 * __this, String_t* ___toBeHashed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA1(System.String,System.String)
extern "C" String_t* DigestSession_HA1_m2_3958 (DigestSession_t2_529 * __this, String_t* ___username, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::HA2(System.Net.HttpWebRequest)
extern "C" String_t* DigestSession_HA2_m2_3959 (DigestSession_t2_529 * __this, HttpWebRequest_t2_585 * ___webRequest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.DigestSession::Response(System.String,System.String,System.Net.HttpWebRequest)
extern "C" String_t* DigestSession_Response_m2_3960 (DigestSession_t2_529 * __this, String_t* ___username, String_t* ___password, HttpWebRequest_t2_585 * ___webRequest, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.DigestSession::Authenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t2_504 * DigestSession_Authenticate_m2_3961 (DigestSession_t2_529 * __this, WebRequest_t2_549 * ___webRequest, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.DigestSession::get_LastUse()
extern "C" DateTime_t1_128  DigestSession_get_LastUse_m2_3962 (DigestSession_t2_529 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
