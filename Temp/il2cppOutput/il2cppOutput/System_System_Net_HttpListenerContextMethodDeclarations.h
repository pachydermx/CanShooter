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

// System.Net.HttpListenerContext
struct HttpListenerContext_t2_515;
// System.Net.HttpConnection
struct HttpConnection_t2_569;
// System.String
struct String_t;
// System.Net.HttpListenerRequest
struct HttpListenerRequest_t2_576;
// System.Net.HttpListenerResponse
struct HttpListenerResponse_t2_577;
// System.Security.Principal.IPrincipal
struct IPrincipal_t1_714;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_AuthenticationSchemes.h"

// System.Void System.Net.HttpListenerContext::.ctor(System.Net.HttpConnection)
extern "C" void HttpListenerContext__ctor_m2_4339 (HttpListenerContext_t2_515 * __this, HttpConnection_t2_569 * ___cnc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpListenerContext::get_ErrorStatus()
extern "C" int32_t HttpListenerContext_get_ErrorStatus_m2_4340 (HttpListenerContext_t2_515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerContext::set_ErrorStatus(System.Int32)
extern "C" void HttpListenerContext_set_ErrorStatus_m2_4341 (HttpListenerContext_t2_515 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListenerContext::get_ErrorMessage()
extern "C" String_t* HttpListenerContext_get_ErrorMessage_m2_4342 (HttpListenerContext_t2_515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerContext::set_ErrorMessage(System.String)
extern "C" void HttpListenerContext_set_ErrorMessage_m2_4343 (HttpListenerContext_t2_515 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerContext::get_HaveError()
extern "C" bool HttpListenerContext_get_HaveError_m2_4344 (HttpListenerContext_t2_515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpConnection System.Net.HttpListenerContext::get_Connection()
extern "C" HttpConnection_t2_569 * HttpListenerContext_get_Connection_m2_4345 (HttpListenerContext_t2_515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerRequest System.Net.HttpListenerContext::get_Request()
extern "C" HttpListenerRequest_t2_576 * HttpListenerContext_get_Request_m2_4346 (HttpListenerContext_t2_515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerResponse System.Net.HttpListenerContext::get_Response()
extern "C" HttpListenerResponse_t2_577 * HttpListenerContext_get_Response_m2_4347 (HttpListenerContext_t2_515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IPrincipal System.Net.HttpListenerContext::get_User()
extern "C" Object_t * HttpListenerContext_get_User_m2_4348 (HttpListenerContext_t2_515 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerContext::ParseAuthentication(System.Net.AuthenticationSchemes)
extern "C" void HttpListenerContext_ParseAuthentication_m2_4349 (HttpListenerContext_t2_515 * __this, int32_t ___expectedSchemes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Principal.IPrincipal System.Net.HttpListenerContext::ParseBasicAuthentication(System.String)
extern "C" Object_t * HttpListenerContext_ParseBasicAuthentication_m2_4350 (HttpListenerContext_t2_515 * __this, String_t* ___authData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
