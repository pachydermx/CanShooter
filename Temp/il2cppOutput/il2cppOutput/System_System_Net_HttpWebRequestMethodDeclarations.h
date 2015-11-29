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

// System.Net.HttpWebRequest
struct HttpWebRequest_t2_585;
// System.Uri
struct Uri_t2_284;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2_305;
// System.Net.HttpContinueDelegate
struct HttpContinueDelegate_t2_586;
// System.Net.CookieContainer
struct CookieContainer_t2_520;
// System.Net.ICredentials
struct ICredentials_t2_551;
// System.Net.Cache.RequestCachePolicy
struct RequestCachePolicy_t2_280;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2_510;
// System.Version
struct Version_t1_330;
// System.Net.IWebProxy
struct IWebProxy_t2_552;
// System.Net.ServicePoint
struct ServicePoint_t2_564;
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
// System.Net.WebAsyncResult
struct WebAsyncResult_t2_589;
// System.Net.WebConnectionStream
struct WebConnectionStream_t2_587;
// System.Net.WebConnectionData
struct WebConnectionData_t2_627;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_Net_DecompressionMethods.h"
#include "mscorlib_System_DateTime.h"
#include "System_System_Net_HttpStatusCode.h"
#include "System_System_Net_WebExceptionStatus.h"

// System.Void System.Net.HttpWebRequest::.ctor(System.Uri)
extern "C" void HttpWebRequest__ctor_m2_4459 (HttpWebRequest_t2_585 * __this, Uri_t2_284 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest__ctor_m2_4460 (HttpWebRequest_t2_585 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::.cctor()
extern "C" void HttpWebRequest__cctor_m2_4461 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_System_Runtime_Serialization_ISerializable_GetObjectData_m2_4462 (HttpWebRequest_t2_585 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_UsesNtlmAuthentication()
extern "C" bool HttpWebRequest_get_UsesNtlmAuthentication_m2_4463 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Accept()
extern "C" String_t* HttpWebRequest_get_Accept_m2_4464 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Accept(System.String)
extern "C" void HttpWebRequest_set_Accept_m2_4465 (HttpWebRequest_t2_585 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_Address()
extern "C" Uri_t2_284 * HttpWebRequest_get_Address_m2_4466 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_AllowAutoRedirect()
extern "C" bool HttpWebRequest_get_AllowAutoRedirect_m2_4467 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_AllowAutoRedirect(System.Boolean)
extern "C" void HttpWebRequest_set_AllowAutoRedirect_m2_4468 (HttpWebRequest_t2_585 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_AllowWriteStreamBuffering()
extern "C" bool HttpWebRequest_get_AllowWriteStreamBuffering_m2_4469 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_AllowWriteStreamBuffering(System.Boolean)
extern "C" void HttpWebRequest_set_AllowWriteStreamBuffering_m2_4470 (HttpWebRequest_t2_585 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.HttpWebRequest::GetMustImplement()
extern "C" Exception_t1_33 * HttpWebRequest_GetMustImplement_m2_4471 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.DecompressionMethods System.Net.HttpWebRequest::get_AutomaticDecompression()
extern "C" int32_t HttpWebRequest_get_AutomaticDecompression_m2_4472 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_AutomaticDecompression(System.Net.DecompressionMethods)
extern "C" void HttpWebRequest_set_AutomaticDecompression_m2_4473 (HttpWebRequest_t2_585 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_InternalAllowBuffering()
extern "C" bool HttpWebRequest_get_InternalAllowBuffering_m2_4474 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection System.Net.HttpWebRequest::get_ClientCertificates()
extern "C" X509CertificateCollection_t2_305 * HttpWebRequest_get_ClientCertificates_m2_4475 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ClientCertificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void HttpWebRequest_set_ClientCertificates_m2_4476 (HttpWebRequest_t2_585 * __this, X509CertificateCollection_t2_305 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Connection()
extern "C" String_t* HttpWebRequest_get_Connection_m2_4477 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Connection(System.String)
extern "C" void HttpWebRequest_set_Connection_m2_4478 (HttpWebRequest_t2_585 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_ConnectionGroupName()
extern "C" String_t* HttpWebRequest_get_ConnectionGroupName_m2_4479 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ConnectionGroupName(System.String)
extern "C" void HttpWebRequest_set_ConnectionGroupName_m2_4480 (HttpWebRequest_t2_585 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebRequest::get_ContentLength()
extern "C" int64_t HttpWebRequest_get_ContentLength_m2_4481 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ContentLength(System.Int64)
extern "C" void HttpWebRequest_set_ContentLength_m2_4482 (HttpWebRequest_t2_585 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_InternalContentLength(System.Int64)
extern "C" void HttpWebRequest_set_InternalContentLength_m2_4483 (HttpWebRequest_t2_585 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_ContentType()
extern "C" String_t* HttpWebRequest_get_ContentType_m2_4484 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ContentType(System.String)
extern "C" void HttpWebRequest_set_ContentType_m2_4485 (HttpWebRequest_t2_585 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpContinueDelegate System.Net.HttpWebRequest::get_ContinueDelegate()
extern "C" HttpContinueDelegate_t2_586 * HttpWebRequest_get_ContinueDelegate_m2_4486 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ContinueDelegate(System.Net.HttpContinueDelegate)
extern "C" void HttpWebRequest_set_ContinueDelegate_m2_4487 (HttpWebRequest_t2_585 * __this, HttpContinueDelegate_t2_586 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieContainer System.Net.HttpWebRequest::get_CookieContainer()
extern "C" CookieContainer_t2_520 * HttpWebRequest_get_CookieContainer_m2_4488 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_CookieContainer(System.Net.CookieContainer)
extern "C" void HttpWebRequest_set_CookieContainer_m2_4489 (HttpWebRequest_t2_585 * __this, CookieContainer_t2_520 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.HttpWebRequest::get_Credentials()
extern "C" Object_t * HttpWebRequest_get_Credentials_m2_4490 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Credentials(System.Net.ICredentials)
extern "C" void HttpWebRequest_set_Credentials_m2_4491 (HttpWebRequest_t2_585 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.RequestCachePolicy System.Net.HttpWebRequest::get_DefaultCachePolicy()
extern "C" RequestCachePolicy_t2_280 * HttpWebRequest_get_DefaultCachePolicy_m2_4492 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_DefaultCachePolicy(System.Net.Cache.RequestCachePolicy)
extern "C" void HttpWebRequest_set_DefaultCachePolicy_m2_4493 (Object_t * __this /* static, unused */, RequestCachePolicy_t2_280 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_DefaultMaximumErrorResponseLength()
extern "C" int32_t HttpWebRequest_get_DefaultMaximumErrorResponseLength_m2_4494 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_DefaultMaximumErrorResponseLength(System.Int32)
extern "C" void HttpWebRequest_set_DefaultMaximumErrorResponseLength_m2_4495 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Expect()
extern "C" String_t* HttpWebRequest_get_Expect_m2_4496 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Expect(System.String)
extern "C" void HttpWebRequest_set_Expect_m2_4497 (HttpWebRequest_t2_585 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_HaveResponse()
extern "C" bool HttpWebRequest_get_HaveResponse_m2_4498 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebRequest::get_Headers()
extern "C" WebHeaderCollection_t2_510 * HttpWebRequest_get_Headers_m2_4499 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Headers(System.Net.WebHeaderCollection)
extern "C" void HttpWebRequest_set_Headers_m2_4500 (HttpWebRequest_t2_585 * __this, WebHeaderCollection_t2_510 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebRequest::get_IfModifiedSince()
extern "C" DateTime_t1_128  HttpWebRequest_get_IfModifiedSince_m2_4501 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_IfModifiedSince(System.DateTime)
extern "C" void HttpWebRequest_set_IfModifiedSince_m2_4502 (HttpWebRequest_t2_585 * __this, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_KeepAlive()
extern "C" bool HttpWebRequest_get_KeepAlive_m2_4503 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_KeepAlive(System.Boolean)
extern "C" void HttpWebRequest_set_KeepAlive_m2_4504 (HttpWebRequest_t2_585 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_MaximumAutomaticRedirections()
extern "C" int32_t HttpWebRequest_get_MaximumAutomaticRedirections_m2_4505 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_MaximumAutomaticRedirections(System.Int32)
extern "C" void HttpWebRequest_set_MaximumAutomaticRedirections_m2_4506 (HttpWebRequest_t2_585 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_MaximumResponseHeadersLength()
extern "C" int32_t HttpWebRequest_get_MaximumResponseHeadersLength_m2_4507 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_MaximumResponseHeadersLength(System.Int32)
extern "C" void HttpWebRequest_set_MaximumResponseHeadersLength_m2_4508 (HttpWebRequest_t2_585 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_DefaultMaximumResponseHeadersLength()
extern "C" int32_t HttpWebRequest_get_DefaultMaximumResponseHeadersLength_m2_4509 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_DefaultMaximumResponseHeadersLength(System.Int32)
extern "C" void HttpWebRequest_set_DefaultMaximumResponseHeadersLength_m2_4510 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_ReadWriteTimeout()
extern "C" int32_t HttpWebRequest_get_ReadWriteTimeout_m2_4511 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ReadWriteTimeout(System.Int32)
extern "C" void HttpWebRequest_set_ReadWriteTimeout_m2_4512 (HttpWebRequest_t2_585 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_MediaType()
extern "C" String_t* HttpWebRequest_get_MediaType_m2_4513 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_MediaType(System.String)
extern "C" void HttpWebRequest_set_MediaType_m2_4514 (HttpWebRequest_t2_585 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Method()
extern "C" String_t* HttpWebRequest_get_Method_m2_4515 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Method(System.String)
extern "C" void HttpWebRequest_set_Method_m2_4516 (HttpWebRequest_t2_585 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_Pipelined()
extern "C" bool HttpWebRequest_get_Pipelined_m2_4517 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Pipelined(System.Boolean)
extern "C" void HttpWebRequest_set_Pipelined_m2_4518 (HttpWebRequest_t2_585 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_PreAuthenticate()
extern "C" bool HttpWebRequest_get_PreAuthenticate_m2_4519 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_PreAuthenticate(System.Boolean)
extern "C" void HttpWebRequest_set_PreAuthenticate_m2_4520 (HttpWebRequest_t2_585 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.HttpWebRequest::get_ProtocolVersion()
extern "C" Version_t1_330 * HttpWebRequest_get_ProtocolVersion_m2_4521 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ProtocolVersion(System.Version)
extern "C" void HttpWebRequest_set_ProtocolVersion_m2_4522 (HttpWebRequest_t2_585 * __this, Version_t1_330 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IWebProxy System.Net.HttpWebRequest::get_Proxy()
extern "C" Object_t * HttpWebRequest_get_Proxy_m2_4523 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Proxy(System.Net.IWebProxy)
extern "C" void HttpWebRequest_set_Proxy_m2_4524 (HttpWebRequest_t2_585 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_Referer()
extern "C" String_t* HttpWebRequest_get_Referer_m2_4525 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Referer(System.String)
extern "C" void HttpWebRequest_set_Referer_m2_4526 (HttpWebRequest_t2_585 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_RequestUri()
extern "C" Uri_t2_284 * HttpWebRequest_get_RequestUri_m2_4527 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_SendChunked()
extern "C" bool HttpWebRequest_get_SendChunked_m2_4528 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_SendChunked(System.Boolean)
extern "C" void HttpWebRequest_set_SendChunked_m2_4529 (HttpWebRequest_t2_585 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::get_ServicePoint()
extern "C" ServicePoint_t2_564 * HttpWebRequest_get_ServicePoint_m2_4530 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpWebRequest::get_Timeout()
extern "C" int32_t HttpWebRequest_get_Timeout_m2_4531 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_Timeout(System.Int32)
extern "C" void HttpWebRequest_set_Timeout_m2_4532 (HttpWebRequest_t2_585 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_TransferEncoding()
extern "C" String_t* HttpWebRequest_get_TransferEncoding_m2_4533 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_TransferEncoding(System.String)
extern "C" void HttpWebRequest_set_TransferEncoding_m2_4534 (HttpWebRequest_t2_585 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_UseDefaultCredentials()
extern "C" bool HttpWebRequest_get_UseDefaultCredentials_m2_4535 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_UseDefaultCredentials(System.Boolean)
extern "C" void HttpWebRequest_set_UseDefaultCredentials_m2_4536 (HttpWebRequest_t2_585 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::get_UserAgent()
extern "C" String_t* HttpWebRequest_get_UserAgent_m2_4537 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_UserAgent(System.String)
extern "C" void HttpWebRequest_set_UserAgent_m2_4538 (HttpWebRequest_t2_585 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_UnsafeAuthenticatedConnectionSharing()
extern "C" bool HttpWebRequest_get_UnsafeAuthenticatedConnectionSharing_m2_4539 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_UnsafeAuthenticatedConnectionSharing(System.Boolean)
extern "C" void HttpWebRequest_set_UnsafeAuthenticatedConnectionSharing_m2_4540 (HttpWebRequest_t2_585 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_GotRequestStream()
extern "C" bool HttpWebRequest_get_GotRequestStream_m2_4541 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ExpectContinue()
extern "C" bool HttpWebRequest_get_ExpectContinue_m2_4542 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_ExpectContinue(System.Boolean)
extern "C" void HttpWebRequest_set_ExpectContinue_m2_4543 (HttpWebRequest_t2_585 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebRequest::get_AuthUri()
extern "C" Uri_t2_284 * HttpWebRequest_get_AuthUri_m2_4544 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_ProxyQuery()
extern "C" bool HttpWebRequest_get_ProxyQuery_m2_4545 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.HttpWebRequest::GetServicePoint()
extern "C" ServicePoint_t2_564 * HttpWebRequest_GetServicePoint_m2_4546 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::AddRange(System.Int32)
extern "C" void HttpWebRequest_AddRange_m2_4547 (HttpWebRequest_t2_585 * __this, int32_t ___range, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::AddRange(System.Int32,System.Int32)
extern "C" void HttpWebRequest_AddRange_m2_4548 (HttpWebRequest_t2_585 * __this, int32_t ___from, int32_t ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::AddRange(System.String,System.Int32)
extern "C" void HttpWebRequest_AddRange_m2_4549 (HttpWebRequest_t2_585 * __this, String_t* ___rangeSpecifier, int32_t ___range, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::AddRange(System.String,System.Int32,System.Int32)
extern "C" void HttpWebRequest_AddRange_m2_4550 (HttpWebRequest_t2_585 * __this, String_t* ___rangeSpecifier, int32_t ___from, int32_t ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpWebRequest::BeginGetRequestStream(System.AsyncCallback,System.Object)
extern "C" Object_t * HttpWebRequest_BeginGetRequestStream_m2_4551 (HttpWebRequest_t2_585 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebRequest::EndGetRequestStream(System.IAsyncResult)
extern "C" Stream_t1_226 * HttpWebRequest_EndGetRequestStream_m2_4552 (HttpWebRequest_t2_585 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebRequest::GetRequestStream()
extern "C" Stream_t1_226 * HttpWebRequest_GetRequestStream_m2_4553 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckIfForceWrite()
extern "C" void HttpWebRequest_CheckIfForceWrite_m2_4554 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpWebRequest::BeginGetResponse(System.AsyncCallback,System.Object)
extern "C" Object_t * HttpWebRequest_BeginGetResponse_m2_4555 (HttpWebRequest_t2_585 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::EndGetResponse(System.IAsyncResult)
extern "C" WebResponse_t2_548 * HttpWebRequest_EndGetResponse_m2_4556 (HttpWebRequest_t2_585 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebResponse System.Net.HttpWebRequest::GetResponse()
extern "C" WebResponse_t2_548 * HttpWebRequest_GetResponse_m2_4557 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_FinishedReading()
extern "C" bool HttpWebRequest_get_FinishedReading_m2_4558 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::set_FinishedReading(System.Boolean)
extern "C" void HttpWebRequest_set_FinishedReading_m2_4559 (HttpWebRequest_t2_585 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::get_Aborted()
extern "C" bool HttpWebRequest_get_Aborted_m2_4560 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::Abort()
extern "C" void HttpWebRequest_Abort_m2_4561 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebRequest_GetObjectData_m2_4562 (HttpWebRequest_t2_585 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckRequestStarted()
extern "C" void HttpWebRequest_CheckRequestStarted_m2_4563 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoContinueDelegate(System.Int32,System.Net.WebHeaderCollection)
extern "C" void HttpWebRequest_DoContinueDelegate_m2_4564 (HttpWebRequest_t2_585 * __this, int32_t ___statusCode, WebHeaderCollection_t2_510 * ___headers, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::Redirect(System.Net.WebAsyncResult,System.Net.HttpStatusCode)
extern "C" bool HttpWebRequest_Redirect_m2_4565 (HttpWebRequest_t2_585 * __this, WebAsyncResult_t2_589 * ___result, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebRequest::GetHeaders()
extern "C" String_t* HttpWebRequest_GetHeaders_m2_4566 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::DoPreAuthenticate()
extern "C" void HttpWebRequest_DoPreAuthenticate_m2_4567 (HttpWebRequest_t2_585 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStreamError(System.Net.WebExceptionStatus,System.Exception)
extern "C" void HttpWebRequest_SetWriteStreamError_m2_4568 (HttpWebRequest_t2_585 * __this, int32_t ___status, Exception_t1_33 * ___exc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SendRequestHeaders(System.Boolean)
extern "C" void HttpWebRequest_SendRequestHeaders_m2_4569 (HttpWebRequest_t2_585 * __this, bool ___propagate_error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetWriteStream(System.Net.WebConnectionStream)
extern "C" void HttpWebRequest_SetWriteStream_m2_4570 (HttpWebRequest_t2_585 * __this, WebConnectionStream_t2_587 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseError(System.Net.WebExceptionStatus,System.Exception,System.String)
extern "C" void HttpWebRequest_SetResponseError_m2_4571 (HttpWebRequest_t2_585 * __this, int32_t ___status, Exception_t1_33 * ___e, String_t* ___where, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::CheckSendError(System.Net.WebConnectionData)
extern "C" void HttpWebRequest_CheckSendError_m2_4572 (HttpWebRequest_t2_585 * __this, WebConnectionData_t2_627 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::HandleNtlmAuth(System.Net.WebAsyncResult)
extern "C" void HttpWebRequest_HandleNtlmAuth_m2_4573 (HttpWebRequest_t2_585 * __this, WebAsyncResult_t2_589 * ___r, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebRequest::SetResponseData(System.Net.WebConnectionData)
extern "C" void HttpWebRequest_SetResponseData_m2_4574 (HttpWebRequest_t2_585 * __this, WebConnectionData_t2_627 * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckAuthorization(System.Net.WebResponse,System.Net.HttpStatusCode)
extern "C" bool HttpWebRequest_CheckAuthorization_m2_4575 (HttpWebRequest_t2_585 * __this, WebResponse_t2_548 * ___response, int32_t ___code, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebRequest::CheckFinalStatus(System.Net.WebAsyncResult)
extern "C" bool HttpWebRequest_CheckFinalStatus_m2_4576 (HttpWebRequest_t2_585 * __this, WebAsyncResult_t2_589 * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
