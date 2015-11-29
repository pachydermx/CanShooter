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

// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2_654;
// System.Security.Cryptography.Oid
struct Oid_t2_656;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2_655;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3_1;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_573;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Security.Cryptography.DSA
struct DSA_t1_107;
// System.Security.Cryptography.RSA
struct RSA_t1_119;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(System.Security.Cryptography.Oid,System.Security.Cryptography.AsnEncodedData,System.Security.Cryptography.AsnEncodedData)
extern "C" void PublicKey__ctor_m2_5388 (PublicKey_t2_654 * __this, Oid_t2_656 * ___oid, AsnEncodedData_t2_655 * ___parameters, AsnEncodedData_t2_655 * ___keyValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.PublicKey::.ctor(Mono.Security.X509.X509Certificate)
extern "C" void PublicKey__ctor_m2_5389 (PublicKey_t2_654 * __this, X509Certificate_t3_1 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedKeyValue()
extern "C" AsnEncodedData_t2_655 * PublicKey_get_EncodedKeyValue_m2_5390 (PublicKey_t2_654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnEncodedData System.Security.Cryptography.X509Certificates.PublicKey::get_EncodedParameters()
extern "C" AsnEncodedData_t2_655 * PublicKey_get_EncodedParameters_m2_5391 (PublicKey_t2_654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.PublicKey::get_Key()
extern "C" AsymmetricAlgorithm_t1_573 * PublicKey_get_Key_m2_5392 (PublicKey_t2_654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.PublicKey::get_Oid()
extern "C" Oid_t2_656 * PublicKey_get_Oid_m2_5393 (PublicKey_t2_654 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.PublicKey::GetUnsignedBigInteger(System.Byte[])
extern "C" ByteU5BU5D_t1_72* PublicKey_GetUnsignedBigInteger_m2_5394 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___integer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeDSA(System.Byte[],System.Byte[])
extern "C" DSA_t1_107 * PublicKey_DecodeDSA_m2_5395 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___rawPublicKey, ByteU5BU5D_t1_72* ___rawParameters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA System.Security.Cryptography.X509Certificates.PublicKey::DecodeRSA(System.Byte[])
extern "C" RSA_t1_119 * PublicKey_DecodeRSA_m2_5396 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___rawPublicKey, const MethodInfo* method) IL2CPP_METHOD_ATTR;
