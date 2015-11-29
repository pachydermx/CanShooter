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

// System.Net.HttpWebResponse
struct HttpWebResponse_t2_588;
// System.Uri
struct Uri_t2_284;
// System.String
struct String_t;
// System.Net.WebConnectionData
struct WebConnectionData_t2_627;
// System.Net.CookieContainer
struct CookieContainer_t2_520;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Net.CookieCollection
struct CookieCollection_t2_519;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2_510;
// System.Exception
struct Exception_t1_33;
// System.Version
struct Version_t1_330;
// System.IO.Stream
struct Stream_t1_226;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_DateTime.h"
#include "System_System_Net_HttpStatusCode.h"

// System.Void System.Net.HttpWebResponse::.ctor(System.Uri,System.String,System.Net.WebConnectionData,System.Net.CookieContainer)
extern "C" void HttpWebResponse__ctor_m2_4577 (HttpWebResponse_t2_588 * __this, Uri_t2_284 * ___uri, String_t* ___method, WebConnectionData_t2_627 * ___data, CookieContainer_t2_520 * ___container, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse__ctor_m2_4578 (HttpWebResponse_t2_588 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m2_4579 (HttpWebResponse_t2_588 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::System.IDisposable.Dispose()
extern "C" void HttpWebResponse_System_IDisposable_Dispose_m2_4580 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_CharacterSet()
extern "C" String_t* HttpWebResponse_get_CharacterSet_m2_4581 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_ContentEncoding()
extern "C" String_t* HttpWebResponse_get_ContentEncoding_m2_4582 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.HttpWebResponse::get_ContentLength()
extern "C" int64_t HttpWebResponse_get_ContentLength_m2_4583 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_ContentType()
extern "C" String_t* HttpWebResponse_get_ContentType_m2_4584 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.HttpWebResponse::get_Cookies()
extern "C" CookieCollection_t2_519 * HttpWebResponse_get_Cookies_m2_4585 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::set_Cookies(System.Net.CookieCollection)
extern "C" void HttpWebResponse_set_Cookies_m2_4586 (HttpWebResponse_t2_588 * __this, CookieCollection_t2_519 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.HttpWebResponse::get_Headers()
extern "C" WebHeaderCollection_t2_510 * HttpWebResponse_get_Headers_m2_4587 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.HttpWebResponse::GetMustImplement()
extern "C" Exception_t1_33 * HttpWebResponse_GetMustImplement_m2_4588 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpWebResponse::get_IsMutuallyAuthenticated()
extern "C" bool HttpWebResponse_get_IsMutuallyAuthenticated_m2_4589 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::get_LastModified()
extern "C" DateTime_t1_128  HttpWebResponse_get_LastModified_m2_4590 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_Method()
extern "C" String_t* HttpWebResponse_get_Method_m2_4591 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Net.HttpWebResponse::get_ProtocolVersion()
extern "C" Version_t1_330 * HttpWebResponse_get_ProtocolVersion_m2_4592 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.HttpWebResponse::get_ResponseUri()
extern "C" Uri_t2_284 * HttpWebResponse_get_ResponseUri_m2_4593 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_Server()
extern "C" String_t* HttpWebResponse_get_Server_m2_4594 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpStatusCode System.Net.HttpWebResponse::get_StatusCode()
extern "C" int32_t HttpWebResponse_get_StatusCode_m2_4595 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::get_StatusDescription()
extern "C" String_t* HttpWebResponse_get_StatusDescription_m2_4596 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpWebResponse::GetResponseHeader(System.String)
extern "C" String_t* HttpWebResponse_GetResponseHeader_m2_4597 (HttpWebResponse_t2_588 * __this, String_t* ___headerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::ReadAll()
extern "C" void HttpWebResponse_ReadAll_m2_4598 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.HttpWebResponse::GetResponseStream()
extern "C" Stream_t1_226 * HttpWebResponse_GetResponseStream_m2_4599 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HttpWebResponse_GetObjectData_m2_4600 (HttpWebResponse_t2_588 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Close()
extern "C" void HttpWebResponse_Close_m2_4601 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::Dispose(System.Boolean)
extern "C" void HttpWebResponse_Dispose_m2_4602 (HttpWebResponse_t2_588 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::CheckDisposed()
extern "C" void HttpWebResponse_CheckDisposed_m2_4603 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::FillCookies()
extern "C" void HttpWebResponse_FillCookies_m2_4604 (HttpWebResponse_t2_588 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie(System.String)
extern "C" void HttpWebResponse_SetCookie_m2_4605 (HttpWebResponse_t2_588 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpWebResponse::SetCookie2(System.String)
extern "C" void HttpWebResponse_SetCookie2_m2_4606 (HttpWebResponse_t2_588 * __this, String_t* ___cookies_str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.HttpWebResponse::TryParseCookieExpires(System.String)
extern "C" DateTime_t1_128  HttpWebResponse_TryParseCookieExpires_m2_4607 (HttpWebResponse_t2_588 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
