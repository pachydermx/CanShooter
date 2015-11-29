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

// Mono.Security.Protocol.Tls.ClientRecordProtocol
struct ClientRecordProtocol_t3_92;
// System.IO.Stream
struct Stream_t1_226;
// Mono.Security.Protocol.Tls.ClientContext
struct ClientContext_t3_91;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3_106;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t3_100;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"

// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ClientContext)
extern "C" void ClientRecordProtocol__ctor_m3_551 (ClientRecordProtocol_t3_92 * __this, Stream_t1_226 * ___innerStream, ClientContext_t3_91 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t3_106 * ClientRecordProtocol_GetMessage_m3_552 (ClientRecordProtocol_t3_92 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.ClientRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern "C" void ClientRecordProtocol_ProcessHandshakeMessage_m3_553 (ClientRecordProtocol_t3_92 * __this, TlsStream_t3_100 * ___handMsg, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t3_106 * ClientRecordProtocol_createClientHandshakeMessage_m3_554 (ClientRecordProtocol_t3_92 * __this, uint8_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ClientRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" HandshakeMessage_t3_106 * ClientRecordProtocol_createServerHandshakeMessage_m3_555 (ClientRecordProtocol_t3_92 * __this, uint8_t ___type, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
