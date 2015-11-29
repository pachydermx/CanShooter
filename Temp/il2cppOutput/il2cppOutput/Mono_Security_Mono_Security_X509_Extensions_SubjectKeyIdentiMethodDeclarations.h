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

// Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension
struct SubjectKeyIdentifierExtension_t3_80;
// Mono.Security.X509.X509Extension
struct X509Extension_t3_7;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::.ctor(Mono.Security.X509.X509Extension)
extern "C" void SubjectKeyIdentifierExtension__ctor_m3_459 (SubjectKeyIdentifierExtension_t3_80 * __this, X509Extension_t3_7 * ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::Decode()
extern "C" void SubjectKeyIdentifierExtension_Decode_m3_460 (SubjectKeyIdentifierExtension_t3_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::get_Identifier()
extern "C" ByteU5BU5D_t1_72* SubjectKeyIdentifierExtension_get_Identifier_m3_461 (SubjectKeyIdentifierExtension_t3_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.X509.Extensions.SubjectKeyIdentifierExtension::ToString()
extern "C" String_t* SubjectKeyIdentifierExtension_ToString_m3_462 (SubjectKeyIdentifierExtension_t3_80 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
