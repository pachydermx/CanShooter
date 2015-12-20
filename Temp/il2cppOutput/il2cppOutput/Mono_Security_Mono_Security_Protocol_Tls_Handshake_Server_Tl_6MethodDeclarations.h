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

// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished
struct TlsServerFinished_t3_139;
// Mono.Security.Protocol.Tls.Context
struct Context_t3_88;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsServerFinished__ctor_m3_990 (TlsServerFinished_t3_139 * __this, Context_t3_88 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::.cctor()
extern "C" void TlsServerFinished__cctor_m3_991 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::ProcessAsSsl3()
extern "C" void TlsServerFinished_ProcessAsSsl3_m3_992 (TlsServerFinished_t3_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::ProcessAsTls1()
extern "C" void TlsServerFinished_ProcessAsTls1_m3_993 (TlsServerFinished_t3_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
