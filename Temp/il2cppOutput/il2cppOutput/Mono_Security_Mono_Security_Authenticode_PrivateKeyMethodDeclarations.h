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

// Mono.Security.Authenticode.PrivateKey
struct PrivateKey_t3_15;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;
// System.Security.Cryptography.RSA
struct RSA_t1_119;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Authenticode.PrivateKey::.ctor(System.Byte[],System.String)
extern "C" void PrivateKey__ctor_m3_189 (PrivateKey_t3_15 * __this, ByteU5BU5D_t1_72* ___data, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Authenticode.PrivateKey::get_RSA()
extern "C" RSA_t1_119 * PrivateKey_get_RSA_m3_23 (PrivateKey_t3_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Authenticode.PrivateKey::DeriveKey(System.Byte[],System.String)
extern "C" ByteU5BU5D_t1_72* PrivateKey_DeriveKey_m3_190 (PrivateKey_t3_15 * __this, ByteU5BU5D_t1_72* ___salt, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Authenticode.PrivateKey::Decode(System.Byte[],System.String)
extern "C" bool PrivateKey_Decode_m3_191 (PrivateKey_t3_15 * __this, ByteU5BU5D_t1_72* ___pvk, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Authenticode.PrivateKey Mono.Security.Authenticode.PrivateKey::CreateFromFile(System.String)
extern "C" PrivateKey_t3_15 * PrivateKey_CreateFromFile_m3_22 (Object_t * __this /* static, unused */, String_t* ___filename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Authenticode.PrivateKey Mono.Security.Authenticode.PrivateKey::CreateFromFile(System.String,System.String)
extern "C" PrivateKey_t3_15 * PrivateKey_CreateFromFile_m3_192 (Object_t * __this /* static, unused */, String_t* ___filename, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
