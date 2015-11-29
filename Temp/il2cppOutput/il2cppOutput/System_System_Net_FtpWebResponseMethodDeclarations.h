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

// System.Net.FtpWebResponse
struct FtpWebResponse_t2_555;
// System.Net.FtpWebRequest
struct FtpWebRequest_t2_559;
// System.Uri
struct Uri_t2_284;
// System.String
struct String_t;
// System.Net.FtpStatus
struct FtpStatus_t2_561;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2_510;
// System.IO.Stream
struct Stream_t1_226;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_FtpStatusCode.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Boolean)
extern "C" void FtpWebResponse__ctor_m2_4253 (FtpWebResponse_t2_555 * __this, FtpWebRequest_t2_559 * ___request, Uri_t2_284 * ___uri, String_t* ___method, bool ___keepAlive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatusCode,System.String)
extern "C" void FtpWebResponse__ctor_m2_4254 (FtpWebResponse_t2_555 * __this, FtpWebRequest_t2_559 * ___request, Uri_t2_284 * ___uri, String_t* ___method, int32_t ___statusCode, String_t* ___statusDescription, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::.ctor(System.Net.FtpWebRequest,System.Uri,System.String,System.Net.FtpStatus)
extern "C" void FtpWebResponse__ctor_m2_4255 (FtpWebResponse_t2_555 * __this, FtpWebRequest_t2_559 * ___request, Uri_t2_284 * ___uri, String_t* ___method, FtpStatus_t2_561 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.FtpWebResponse::get_ContentLength()
extern "C" int64_t FtpWebResponse_get_ContentLength_m2_4256 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FtpWebResponse::get_Headers()
extern "C" WebHeaderCollection_t2_510 * FtpWebResponse_get_Headers_m2_4257 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.FtpWebResponse::get_ResponseUri()
extern "C" Uri_t2_284 * FtpWebResponse_get_ResponseUri_m2_4258 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.FtpWebResponse::get_LastModified()
extern "C" DateTime_t1_128  FtpWebResponse_get_LastModified_m2_4259 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_LastModified(System.DateTime)
extern "C" void FtpWebResponse_set_LastModified_m2_4260 (FtpWebResponse_t2_555 * __this, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebResponse::get_BannerMessage()
extern "C" String_t* FtpWebResponse_get_BannerMessage_m2_4261 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_BannerMessage(System.String)
extern "C" void FtpWebResponse_set_BannerMessage_m2_4262 (FtpWebResponse_t2_555 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebResponse::get_WelcomeMessage()
extern "C" String_t* FtpWebResponse_get_WelcomeMessage_m2_4263 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_WelcomeMessage(System.String)
extern "C" void FtpWebResponse_set_WelcomeMessage_m2_4264 (FtpWebResponse_t2_555 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebResponse::get_ExitMessage()
extern "C" String_t* FtpWebResponse_get_ExitMessage_m2_4265 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_ExitMessage(System.String)
extern "C" void FtpWebResponse_set_ExitMessage_m2_4266 (FtpWebResponse_t2_555 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.FtpStatusCode System.Net.FtpWebResponse::get_StatusCode()
extern "C" int32_t FtpWebResponse_get_StatusCode_m2_4267 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_StatusCode(System.Net.FtpStatusCode)
extern "C" void FtpWebResponse_set_StatusCode_m2_4268 (FtpWebResponse_t2_555 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.FtpWebResponse::get_StatusDescription()
extern "C" String_t* FtpWebResponse_get_StatusDescription_m2_4269 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_StatusDescription(System.String)
extern "C" void FtpWebResponse_set_StatusDescription_m2_4270 (FtpWebResponse_t2_555 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::Close()
extern "C" void FtpWebResponse_Close_m2_4271 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebResponse::GetResponseStream()
extern "C" Stream_t1_226 * FtpWebResponse_GetResponseStream_m2_4272 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::set_Stream(System.IO.Stream)
extern "C" void FtpWebResponse_set_Stream_m2_4273 (FtpWebResponse_t2_555 * __this, Stream_t1_226 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FtpWebResponse::get_Stream()
extern "C" Stream_t1_226 * FtpWebResponse_get_Stream_m2_4274 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::UpdateStatus(System.Net.FtpStatus)
extern "C" void FtpWebResponse_UpdateStatus_m2_4275 (FtpWebResponse_t2_555 * __this, FtpStatus_t2_561 * ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FtpWebResponse::CheckDisposed()
extern "C" void FtpWebResponse_CheckDisposed_m2_4276 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.FtpWebResponse::IsFinal()
extern "C" bool FtpWebResponse_IsFinal_m2_4277 (FtpWebResponse_t2_555 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
