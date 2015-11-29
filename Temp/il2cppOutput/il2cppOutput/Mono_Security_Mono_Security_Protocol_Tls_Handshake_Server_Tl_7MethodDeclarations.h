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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello
struct TlsServerHello_t3_140;
// Mono.Security.Protocol.Tls.Context
struct Context_t3_88;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsServerHello__ctor_m3_994 (TlsServerHello_t3_140 * __this, Context_t3_88 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::Update()
extern "C" void TlsServerHello_Update_m3_995 (TlsServerHello_t3_140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::ProcessAsSsl3()
extern "C" void TlsServerHello_ProcessAsSsl3_m3_996 (TlsServerHello_t3_140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::ProcessAsTls1()
extern "C" void TlsServerHello_ProcessAsTls1_m3_997 (TlsServerHello_t3_140 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
