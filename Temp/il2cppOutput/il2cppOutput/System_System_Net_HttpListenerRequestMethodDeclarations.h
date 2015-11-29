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

// System.Net.HttpListenerRequest
struct HttpListenerRequest_t2_576;
// System.Net.HttpListenerContext
struct HttpListenerContext_t2_515;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Net.CookieCollection
struct CookieCollection_t2_519;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2_27;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.IPEndPoint
struct IPEndPoint_t2_430;
// System.Version
struct Version_t1_330;
// System.Uri
struct Uri_t2_284;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2_542;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Net.HttpListenerRequest::.ctor(System.Net.HttpListenerContext)
extern "C" void HttpListenerRequest__ctor_m2_4368 (HttpListenerRequest_t2_576 * __this, HttpListenerContext_t2_515 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::.cctor()
extern "C" void HttpListenerRequest__cctor_m2_4369 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::SetRequestLine(System.String)
extern "C" void HttpListenerRequest_SetRequestLine_m2_4370 (HttpListenerRequest_t2_576 * __this, String_t* ___req, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::CreateQueryString(System.String)
extern "C" void HttpListenerRequest_CreateQueryString_m2_4371 (HttpListenerRequest_t2_576 * __this, String_t* ___query, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::FinishInitialization()
extern "C" void HttpListenerRequest_FinishInitialization_m2_4372 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::Unquote(System.String)
extern "C" String_t* HttpListenerRequest_Unquote_m2_4373 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerRequest::AddHeader(System.String)
extern "C" void HttpListenerRequest_AddHeader_m2_4374 (HttpListenerRequest_t2_576 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::FlushInput()
extern "C" bool HttpListenerRequest_FlushInput_m2_4375 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.HttpListenerRequest::get_AcceptTypes()
extern "C" StringU5BU5D_t1_206* HttpListenerRequest_get_AcceptTypes_m2_4376 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpListenerRequest::get_ClientCertificateError()
extern "C" int32_t HttpListenerRequest_get_ClientCertificateError_m2_4377 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.HttpListenerRequest::get_ContentEncoding()
extern "C" Encoding_t1_227 * HttpListenerRequest_get_ContentEncoding_m2_4378 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpListenerRequest::get_ContentLength64()
extern "C" int64_t HttpListenerRequest_get_ContentLength64_m2_4379 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_ContentType()
extern "C" String_t* HttpListenerRequest_get_ContentType_m2_4380 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.HttpListenerRequest::get_Cookies()
extern "C" CookieCollection_t2_519 * HttpListenerRequest_get_Cookies_m2_4381 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::get_HasEntityBody()
extern "C" bool HttpListenerRequest_get_HasEntityBody_m2_4382 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::get_Headers()
extern "C" NameValueCollection_t2_27 * HttpListenerRequest_get_Headers_m2_4383 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_HttpMethod()
extern "C" String_t* HttpListenerRequest_get_HttpMethod_m2_4384 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpListenerRequest::get_InputStream()
extern "C" Stream_t1_226 * HttpListenerRequest_get_InputStream_m2_4385 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::get_IsAuthenticated()
extern "C" bool HttpListenerRequest_get_IsAuthenticated_m2_4386 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::get_IsLocal()
extern "C" bool HttpListenerRequest_get_IsLocal_m2_4387 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::get_IsSecureConnection()
extern "C" bool HttpListenerRequest_get_IsSecureConnection_m2_4388 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerRequest::get_KeepAlive()
extern "C" bool HttpListenerRequest_get_KeepAlive_m2_4389 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.HttpListenerRequest::get_LocalEndPoint()
extern "C" IPEndPoint_t2_430 * HttpListenerRequest_get_LocalEndPoint_m2_4390 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.HttpListenerRequest::get_ProtocolVersion()
extern "C" Version_t1_330 * HttpListenerRequest_get_ProtocolVersion_m2_4391 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::get_QueryString()
extern "C" NameValueCollection_t2_27 * HttpListenerRequest_get_QueryString_m2_4392 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_RawUrl()
extern "C" String_t* HttpListenerRequest_get_RawUrl_m2_4393 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.HttpListenerRequest::get_RemoteEndPoint()
extern "C" IPEndPoint_t2_430 * HttpListenerRequest_get_RemoteEndPoint_m2_4394 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Guid System.Net.HttpListenerRequest::get_RequestTraceIdentifier()
extern "C" Guid_t1_772  HttpListenerRequest_get_RequestTraceIdentifier_m2_4395 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpListenerRequest::get_Url()
extern "C" Uri_t2_284 * HttpListenerRequest_get_Url_m2_4396 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpListenerRequest::get_UrlReferrer()
extern "C" Uri_t2_284 * HttpListenerRequest_get_UrlReferrer_m2_4397 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_UserAgent()
extern "C" String_t* HttpListenerRequest_get_UserAgent_m2_4398 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_UserHostAddress()
extern "C" String_t* HttpListenerRequest_get_UserHostAddress_m2_4399 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerRequest::get_UserHostName()
extern "C" String_t* HttpListenerRequest_get_UserHostName_m2_4400 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.HttpListenerRequest::get_UserLanguages()
extern "C" StringU5BU5D_t1_206* HttpListenerRequest_get_UserLanguages_m2_4401 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpListenerRequest::BeginGetClientCertificate(System.AsyncCallback,System.Object)
extern "C" Object_t * HttpListenerRequest_BeginGetClientCertificate_m2_4402 (HttpListenerRequest_t2_576 * __this, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Net.HttpListenerRequest::EndGetClientCertificate(System.IAsyncResult)
extern "C" X509Certificate2_t2_542 * HttpListenerRequest_EndGetClientCertificate_m2_4403 (HttpListenerRequest_t2_576 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2 System.Net.HttpListenerRequest::GetClientCertificate()
extern "C" X509Certificate2_t2_542 * HttpListenerRequest_GetClientCertificate_m2_4404 (HttpListenerRequest_t2_576 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
