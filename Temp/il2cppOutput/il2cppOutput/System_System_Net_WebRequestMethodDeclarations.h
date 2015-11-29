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

// System.Net.WebRequest
struct WebRequest_t2_549;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_t2_280;
// System.Net.ICredentials
struct ICredentials_t2_551;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2_510;
// System.Net.IWebProxy
struct IWebProxy_t2_552;
// System.Uri
struct Uri_t2_284;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.WebResponse
struct WebResponse_t2_548;
// System.Net.IWebRequestCreate
struct IWebRequestCreate_t2_834;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_Net_Security_AuthenticationLevel.h"
#include "mscorlib_System_Security_Principal_TokenImpersonationLevel.h"

// System.Void System.Net.WebRequest::.ctor()
extern "C" void WebRequest__ctor_m2_5272 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest__ctor_m2_5273 (WebRequest_t2_549 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::.cctor()
extern "C" void WebRequest__cctor_m2_5274 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m2_5275 (WebRequest_t2_549 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddDynamicPrefix(System.String,System.String)
extern "C" void WebRequest_AddDynamicPrefix_m2_5276 (Object_t * __this /* static, unused */, String_t* ___protocol, String_t* ___implementor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebRequest::GetMustImplement()
extern "C" Exception_t1_33 * WebRequest_GetMustImplement_m2_5277 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.AuthenticationLevel System.Net.WebRequest::get_AuthenticationLevel()
extern "C" int32_t WebRequest_get_AuthenticationLevel_m2_5278 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_AuthenticationLevel(System.Net.Security.AuthenticationLevel)
extern "C" void WebRequest_set_AuthenticationLevel_m2_5279 (WebRequest_t2_549 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.RequestCachePolicy System.Net.WebRequest::get_CachePolicy()
extern "C" RequestCachePolicy_t2_280 * WebRequest_get_CachePolicy_m2_5280 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_CachePolicy(System.Net.Cache.RequestCachePolicy)
extern "C" void WebRequest_set_CachePolicy_m2_5281 (WebRequest_t2_549 * __this, RequestCachePolicy_t2_280 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_ConnectionGroupName()
extern "C" String_t* WebRequest_get_ConnectionGroupName_m2_5282 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_ConnectionGroupName(System.String)
extern "C" void WebRequest_set_ConnectionGroupName_m2_5283 (WebRequest_t2_549 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.WebRequest::get_ContentLength()
extern "C" int64_t WebRequest_get_ContentLength_m2_5284 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_ContentLength(System.Int64)
extern "C" void WebRequest_set_ContentLength_m2_5285 (WebRequest_t2_549 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_ContentType()
extern "C" String_t* WebRequest_get_ContentType_m2_5286 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_ContentType(System.String)
extern "C" void WebRequest_set_ContentType_m2_5287 (WebRequest_t2_549 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebRequest::get_Credentials()
extern "C" Object_t * WebRequest_get_Credentials_m2_5288 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void WebRequest_set_Credentials_m2_5289 (WebRequest_t2_549 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.RequestCachePolicy System.Net.WebRequest::get_DefaultCachePolicy()
extern "C" RequestCachePolicy_t2_280 * WebRequest_get_DefaultCachePolicy_m2_5290 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_DefaultCachePolicy(System.Net.Cache.RequestCachePolicy)
extern "C" void WebRequest_set_DefaultCachePolicy_m2_5291 (Object_t * __this /* static, unused */, RequestCachePolicy_t2_280 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebRequest::get_Headers()
extern "C" WebHeaderCollection_t2_510 * WebRequest_get_Headers_m2_5292 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Headers(System.Net.WebHeaderCollection)
extern "C" void WebRequest_set_Headers_m2_5293 (WebRequest_t2_549 * __this, WebHeaderCollection_t2_510 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.TokenImpersonationLevel System.Net.WebRequest::get_ImpersonationLevel()
extern "C" int32_t WebRequest_get_ImpersonationLevel_m2_5294 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_ImpersonationLevel(System.Security.Principal.TokenImpersonationLevel)
extern "C" void WebRequest_set_ImpersonationLevel_m2_5295 (WebRequest_t2_549 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebRequest::get_Method()
extern "C" String_t* WebRequest_get_Method_m2_5296 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Method(System.String)
extern "C" void WebRequest_set_Method_m2_5297 (WebRequest_t2_549 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebRequest::get_PreAuthenticate()
extern "C" bool WebRequest_get_PreAuthenticate_m2_5298 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_PreAuthenticate(System.Boolean)
extern "C" void WebRequest_set_PreAuthenticate_m2_5299 (WebRequest_t2_549 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_Proxy()
extern "C" Object_t * WebRequest_get_Proxy_m2_5300 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Proxy(System.Net.IWebProxy)
extern "C" void WebRequest_set_Proxy_m2_5301 (WebRequest_t2_549 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebRequest::get_RequestUri()
extern "C" Uri_t2_284 * WebRequest_get_RequestUri_m2_5302 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebRequest::get_Timeout()
extern "C" int32_t WebRequest_get_Timeout_m2_5303 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_Timeout(System.Int32)
extern "C" void WebRequest_set_Timeout_m2_5304 (WebRequest_t2_549 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebRequest::get_UseDefaultCredentials()
extern "C" bool WebRequest_get_UseDefaultCredentials_m2_5305 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_UseDefaultCredentials(System.Boolean)
extern "C" void WebRequest_set_UseDefaultCredentials_m2_5306 (WebRequest_t2_549 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::get_DefaultWebProxy()
extern "C" Object_t * WebRequest_get_DefaultWebProxy_m2_5307 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::set_DefaultWebProxy(System.Net.IWebProxy)
extern "C" void WebRequest_set_DefaultWebProxy_m2_5308 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetDefaultWebProxy()
extern "C" Object_t * WebRequest_GetDefaultWebProxy_m2_5309 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::Abort()
extern "C" void WebRequest_Abort_m2_5310 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object)
extern "C" Object_t * WebRequest_BeginGetRequestStream_m2_5311 (WebRequest_t2_549 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.WebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * WebRequest_BeginGetResponse_m2_5312 (WebRequest_t2_549 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.String)
extern "C" WebRequest_t2_549 * WebRequest_Create_m2_5313 (Object_t * __this /* static, unused */, String_t* ___requestUriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::Create(System.Uri)
extern "C" WebRequest_t2_549 * WebRequest_Create_m2_5314 (Object_t * __this /* static, unused */, Uri_t2_284 * ___requestUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebRequest System.Net.WebRequest::CreateDefault(System.Uri)
extern "C" WebRequest_t2_549 * WebRequest_CreateDefault_m2_5315 (Object_t * __this /* static, unused */, Uri_t2_284 * ___requestUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebRequest::EndGetRequestStream(System.IAsyncResult)
extern "C" Stream_t1_226 * WebRequest_EndGetRequestStream_m2_5316 (WebRequest_t2_549 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t2_548 * WebRequest_EndGetResponse_m2_5317 (WebRequest_t2_549 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebRequest::GetRequestStream()
extern "C" Stream_t1_226 * WebRequest_GetRequestStream_m2_5318 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.WebRequest::GetResponse()
extern "C" WebResponse_t2_548 * WebRequest_GetResponse_m2_5319 (WebRequest_t2_549 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.WebRequest::GetSystemWebProxy()
extern "C" Object_t * WebRequest_GetSystemWebProxy_m2_5320 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebRequest_GetObjectData_m2_5321 (WebRequest_t2_549 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebRequest::RegisterPrefix(System.String,System.Net.IWebRequestCreate)
extern "C" bool WebRequest_RegisterPrefix_m2_5322 (Object_t * __this /* static, unused */, String_t* ___prefix, Object_t * ___creator, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebRequestCreate System.Net.WebRequest::GetCreator(System.String)
extern "C" Object_t * WebRequest_GetCreator_m2_5323 (Object_t * __this /* static, unused */, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::ClearPrefixes()
extern "C" void WebRequest_ClearPrefixes_m2_5324 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::RemovePrefix(System.String)
extern "C" void WebRequest_RemovePrefix_m2_5325 (Object_t * __this /* static, unused */, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.String)
extern "C" void WebRequest_AddPrefix_m2_5326 (Object_t * __this /* static, unused */, String_t* ___prefix, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebRequest::AddPrefix(System.String,System.Type)
extern "C" void WebRequest_AddPrefix_m2_5327 (Object_t * __this /* static, unused */, String_t* ___prefix, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
