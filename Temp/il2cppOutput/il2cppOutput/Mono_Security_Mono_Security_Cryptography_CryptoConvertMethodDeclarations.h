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

// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Security.Cryptography.RSA
struct RSA_t1_119;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Int32 Mono.Security.Cryptography.CryptoConvert::ToInt32LE(System.Byte[],System.Int32)
extern "C" int32_t CryptoConvert_ToInt32LE_m3_208 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 Mono.Security.Cryptography.CryptoConvert::ToUInt32LE(System.Byte[],System.Int32)
extern "C" uint32_t CryptoConvert_ToUInt32LE_m3_209 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___bytes, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::Trim(System.Byte[])
extern "C" ByteU5BU5D_t1_72* CryptoConvert_Trim_m3_210 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___array, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[])
extern "C" RSA_t1_119 * CryptoConvert_FromCapiPrivateKeyBlob_m3_211 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___blob, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Cryptography.CryptoConvert::FromCapiPrivateKeyBlob(System.Byte[],System.Int32)
extern "C" RSA_t1_119 * CryptoConvert_FromCapiPrivateKeyBlob_m3_212 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___blob, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Mono.Security.Cryptography.CryptoConvert::ToHex(System.Byte[])
extern "C" String_t* CryptoConvert_ToHex_m3_84 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte Mono.Security.Cryptography.CryptoConvert::FromHexChar(System.Char)
extern "C" uint8_t CryptoConvert_FromHexChar_m3_213 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.Cryptography.CryptoConvert::FromHex(System.String)
extern "C" ByteU5BU5D_t1_72* CryptoConvert_FromHex_m3_214 (Object_t * __this /* static, unused */, String_t* ___hex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
