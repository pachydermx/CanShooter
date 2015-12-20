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

// System.Net.HttpConnection
struct HttpConnection_t2_569;
// System.Net.Sockets.Socket
struct Socket_t2_471;
// System.Net.EndPointListener
struct EndPointListener_t2_541;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2_542;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_575;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_572;
// System.String
struct String_t;
// System.Net.IPEndPoint
struct IPEndPoint_t2_430;
// System.Net.ListenerPrefix
struct ListenerPrefix_t2_570;
// System.Net.RequestStream
struct RequestStream_t2_514;
// System.Net.ResponseStream
struct ResponseStream_t2_571;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.IO.MemoryStream
struct MemoryStream_t1_250;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.HttpConnection::.ctor(System.Net.Sockets.Socket,System.Net.EndPointListener,System.Boolean,System.Security.Cryptography.X509Certificates.X509Certificate2,System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void HttpConnection__ctor_m2_4287 (HttpConnection_t2_569 * __this, Socket_t2_471 * ___sock, EndPointListener_t2_541 * ___epl, bool ___secure, X509Certificate2_t2_542 * ___cert, AsymmetricAlgorithm_t1_575 * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Net.HttpConnection::OnPVKSelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1_575 * HttpConnection_OnPVKSelection_m2_4288 (HttpConnection_t2_569 * __this, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::Init()
extern "C" void HttpConnection_Init_m2_4289 (HttpConnection_t2_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpConnection::get_ChunkedUses()
extern "C" int32_t HttpConnection_get_ChunkedUses_m2_4290 (HttpConnection_t2_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.HttpConnection::get_LocalEndPoint()
extern "C" IPEndPoint_t2_430 * HttpConnection_get_LocalEndPoint_m2_4291 (HttpConnection_t2_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.HttpConnection::get_RemoteEndPoint()
extern "C" IPEndPoint_t2_430 * HttpConnection_get_RemoteEndPoint_m2_4292 (HttpConnection_t2_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpConnection::get_IsSecure()
extern "C" bool HttpConnection_get_IsSecure_m2_4293 (HttpConnection_t2_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ListenerPrefix System.Net.HttpConnection::get_Prefix()
extern "C" ListenerPrefix_t2_570 * HttpConnection_get_Prefix_m2_4294 (HttpConnection_t2_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::set_Prefix(System.Net.ListenerPrefix)
extern "C" void HttpConnection_set_Prefix_m2_4295 (HttpConnection_t2_569 * __this, ListenerPrefix_t2_570 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::BeginReadRequest()
extern "C" void HttpConnection_BeginReadRequest_m2_4296 (HttpConnection_t2_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.RequestStream System.Net.HttpConnection::GetRequestStream(System.Boolean,System.Int64)
extern "C" RequestStream_t2_514 * HttpConnection_GetRequestStream_m2_4297 (HttpConnection_t2_569 * __this, bool ___chunked, int64_t ___contentlength, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ResponseStream System.Net.HttpConnection::GetResponseStream()
extern "C" ResponseStream_t2_571 * HttpConnection_GetResponseStream_m2_4298 (HttpConnection_t2_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::OnRead(System.IAsyncResult)
extern "C" void HttpConnection_OnRead_m2_4299 (HttpConnection_t2_569 * __this, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpConnection::ProcessInput(System.IO.MemoryStream)
extern "C" bool HttpConnection_ProcessInput_m2_4300 (HttpConnection_t2_569 * __this, MemoryStream_t1_250 * ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpConnection::ReadLine(System.Byte[],System.Int32,System.Int32,System.Int32&)
extern "C" String_t* HttpConnection_ReadLine_m2_4301 (HttpConnection_t2_569 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___len, int32_t* ___used, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::SendError(System.String,System.Int32)
extern "C" void HttpConnection_SendError_m2_4302 (HttpConnection_t2_569 * __this, String_t* ___msg, int32_t ___status, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::SendError()
extern "C" void HttpConnection_SendError_m2_4303 (HttpConnection_t2_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::Unbind()
extern "C" void HttpConnection_Unbind_m2_4304 (HttpConnection_t2_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::Close()
extern "C" void HttpConnection_Close_m2_4305 (HttpConnection_t2_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::CloseSocket()
extern "C" void HttpConnection_CloseSocket_m2_4306 (HttpConnection_t2_569 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpConnection::Close(System.Boolean)
extern "C" void HttpConnection_Close_m2_4307 (HttpConnection_t2_569 * __this, bool ___force_close, const MethodInfo* method) IL2CPP_METHOD_ATTR;
