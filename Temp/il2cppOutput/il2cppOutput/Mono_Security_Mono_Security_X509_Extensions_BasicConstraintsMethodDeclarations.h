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

// Mono.Security.X509.Extensions.BasicConstraintsExtension
struct BasicConstraintsExtension_t3_73;
// Mono.Security.X509.X509Extension
struct X509Extension_t3_7;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void BasicConstraintsExtension__ctor_m3_434 (BasicConstraintsExtension_t3_73 * __this, X509Extension_t3_7 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::Decode()
extern "C" void BasicConstraintsExtension_Decode_m3_435 (BasicConstraintsExtension_t3_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.BasicConstraintsExtension::Encode()
extern "C" void BasicConstraintsExtension_Encode_m3_436 (BasicConstraintsExtension_t3_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.Extensions.BasicConstraintsExtension::get_CertificateAuthority()
extern "C" bool BasicConstraintsExtension_get_CertificateAuthority_m3_437 (BasicConstraintsExtension_t3_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.BasicConstraintsExtension::ToString()
extern "C" String_t* BasicConstraintsExtension_ToString_m3_438 (BasicConstraintsExtension_t3_73 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
