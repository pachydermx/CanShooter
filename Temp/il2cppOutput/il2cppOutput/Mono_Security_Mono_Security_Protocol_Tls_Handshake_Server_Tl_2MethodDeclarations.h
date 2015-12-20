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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello
struct TlsClientHello_t3_135;
// Mono.Security.Protocol.Tls.Context
struct Context_t3_88;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsClientHello__ctor_m3_974 (TlsClientHello_t3_135 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::Update()
extern "C" void TlsClientHello_Update_m3_975 (TlsClientHello_t3_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::ProcessAsSsl3()
extern "C" void TlsClientHello_ProcessAsSsl3_m3_976 (TlsClientHello_t3_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::ProcessAsTls1()
extern "C" void TlsClientHello_ProcessAsTls1_m3_977 (TlsClientHello_t3_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::processProtocol(System.Int16)
extern "C" void TlsClientHello_processProtocol_m3_978 (TlsClientHello_t3_135 * __this, int16_t ___protocol, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::selectCipherSuite()
extern "C" void TlsClientHello_selectCipherSuite_m3_979 (TlsClientHello_t3_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::selectCompressionMethod()
extern "C" void TlsClientHello_selectCompressionMethod_m3_980 (TlsClientHello_t3_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
