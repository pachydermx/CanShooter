﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
struct TlsServerHelloDone_t3_130;
// Mono.Security.Protocol.Tls.Context
struct Context_t3_88;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerHelloDone__ctor_m3_954 (TlsServerHelloDone_t3_130 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern "C" void TlsServerHelloDone_ProcessAsSsl3_m3_955 (TlsServerHelloDone_t3_130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern "C" void TlsServerHelloDone_ProcessAsTls1_m3_956 (TlsServerHelloDone_t3_130 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
