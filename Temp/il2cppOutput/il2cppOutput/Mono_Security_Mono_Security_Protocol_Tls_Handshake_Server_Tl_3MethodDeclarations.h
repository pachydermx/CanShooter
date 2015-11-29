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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange
struct TlsClientKeyExchange_t3_136;
// Mono.Security.Protocol.Tls.Context
struct Context_t3_88;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsClientKeyExchange__ctor_m3_981 (TlsClientKeyExchange_t3_136 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange::ProcessAsSsl3()
extern "C" void TlsClientKeyExchange_ProcessAsSsl3_m3_982 (TlsClientKeyExchange_t3_136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange::ProcessAsTls1()
extern "C" void TlsClientKeyExchange_ProcessAsTls1_m3_983 (TlsClientKeyExchange_t3_136 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
