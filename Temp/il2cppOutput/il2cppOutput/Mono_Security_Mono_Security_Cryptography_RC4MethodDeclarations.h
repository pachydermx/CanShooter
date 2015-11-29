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

// Mono.Security.Cryptography.RC4
struct RC4_t3_41;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Security.Cryptography.RC4::.ctor()
extern "C" void RC4__ctor_m3_252 (RC4_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::.cctor()
extern "C" void RC4__cctor_m3_253 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.RC4::get_IV()
extern "C" ByteU5BU5D_t1_72* RC4_get_IV_m3_254 (RC4_t3_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.RC4::set_IV(System.Byte[])
extern "C" void RC4_set_IV_m3_255 (RC4_t3_41 * __this, ByteU5BU5D_t1_72* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.RC4 Mono.Security.Cryptography.RC4::Create()
extern "C" RC4_t3_41 * RC4_Create_m3_256 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Cryptography.RC4 Mono.Security.Cryptography.RC4::Create(System.String)
extern "C" RC4_t3_41 * RC4_Create_m3_257 (Object_t * __this /* static, unused */, String_t* ___algName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
