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

// Mono.Security.X509.PKCS12
struct PKCS12_t1_124;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t1_125;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t1_99;
// System.Security.Cryptography.SymmetricAlgorithm
struct SymmetricAlgorithm_t1_111;
// Mono.Security.PKCS7/EncryptedData
struct EncryptedData_t1_137;
// Mono.Security.Cryptography.PKCS8/PrivateKeyInfo
struct PrivateKeyInfo_t1_113;
// Mono.Security.ASN1
struct ASN1_t1_122;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t1_127;
// System.Collections.IDictionary
struct IDictionary_t1_35;
// Mono.Security.PKCS7/ContentInfo
struct ContentInfo_t1_136;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_DSAParameters.h"

// System.Void Mono.Security.X509.PKCS12::.ctor()
extern "C" void PKCS12__ctor_m1_1376 (PKCS12_t1_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[])
extern "C" void PKCS12__ctor_m1_1377 (PKCS12_t1_124 * __this, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.ctor(System.Byte[],System.String)
extern "C" void PKCS12__ctor_m1_1378 (PKCS12_t1_124 * __this, ByteU5BU5D_t1_72* ___data, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::.cctor()
extern "C" void PKCS12__cctor_m1_1379 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Decode(System.Byte[])
extern "C" void PKCS12_Decode_m1_1380 (PKCS12_t1_124 * __this, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::Finalize()
extern "C" void PKCS12_Finalize_m1_1381 (PKCS12_t1_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_Password(System.String)
extern "C" void PKCS12_set_Password_m1_1382 (PKCS12_t1_124 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_IterationCount()
extern "C" int32_t PKCS12_get_IterationCount_m1_1383 (PKCS12_t1_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::set_IterationCount(System.Int32)
extern "C" void PKCS12_set_IterationCount_m1_1384 (PKCS12_t1_124 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.X509.PKCS12::get_Certificates()
extern "C" X509CertificateCollection_t1_125 * PKCS12_get_Certificates_m1_1385 (PKCS12_t1_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RandomNumberGenerator Mono.Security.X509.PKCS12::get_RNG()
extern "C" RandomNumberGenerator_t1_99 * PKCS12_get_RNG_m1_1386 (PKCS12_t1_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.X509.PKCS12::Compare(System.Byte[],System.Byte[])
extern "C" bool PKCS12_Compare_m1_1387 (PKCS12_t1_124 * __this, ByteU5BU5D_t1_72* ___expected, ByteU5BU5D_t1_72* ___actual, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.SymmetricAlgorithm Mono.Security.X509.PKCS12::GetSymmetricAlgorithm(System.String,System.Byte[],System.Int32)
extern "C" SymmetricAlgorithm_t1_111 * PKCS12_GetSymmetricAlgorithm_m1_1388 (PKCS12_t1_124 * __this, String_t* ___algorithmOid, ByteU5BU5D_t1_72* ___salt, int32_t ___iterationCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t1_72* PKCS12_Decrypt_m1_1389 (PKCS12_t1_124 * __this, String_t* ___algorithmOid, ByteU5BU5D_t1_72* ___salt, int32_t ___iterationCount, ByteU5BU5D_t1_72* ___encryptedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Decrypt(Mono.Security.PKCS7/EncryptedData)
extern "C" ByteU5BU5D_t1_72* PKCS12_Decrypt_m1_1390 (PKCS12_t1_124 * __this, EncryptedData_t1_137 * ___ed, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::Encrypt(System.String,System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t1_72* PKCS12_Encrypt_m1_1391 (PKCS12_t1_124 * __this, String_t* ___algorithmOid, ByteU5BU5D_t1_72* ___salt, int32_t ___iterationCount, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.DSAParameters Mono.Security.X509.PKCS12::GetExistingParameters(System.Boolean&)
extern "C" DSAParameters_t1_590  PKCS12_GetExistingParameters_m1_1392 (PKCS12_t1_124 * __this, bool* ___found, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddPrivateKey(Mono.Security.Cryptography.PKCS8/PrivateKeyInfo)
extern "C" void PKCS12_AddPrivateKey_m1_1393 (PKCS12_t1_124 * __this, PrivateKeyInfo_t1_113 * ___pki, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::ReadSafeBag(Mono.Security.ASN1)
extern "C" void PKCS12_ReadSafeBag_m1_1394 (PKCS12_t1_124 * __this, ASN1_t1_122 * ___safeBag, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 Mono.Security.X509.PKCS12::CertificateSafeBag(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C" ASN1_t1_122 * PKCS12_CertificateSafeBag_m1_1395 (PKCS12_t1_124 * __this, X509Certificate_t1_127 * ___x509, Object_t * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::MAC(System.Byte[],System.Byte[],System.Int32,System.Byte[])
extern "C" ByteU5BU5D_t1_72* PKCS12_MAC_m1_1396 (PKCS12_t1_124 * __this, ByteU5BU5D_t1_72* ___password, ByteU5BU5D_t1_72* ___salt, int32_t ___iterations, ByteU5BU5D_t1_72* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] Mono.Security.X509.PKCS12::GetBytes()
extern "C" ByteU5BU5D_t1_72* PKCS12_GetBytes_m1_1397 (PKCS12_t1_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.PKCS7/ContentInfo Mono.Security.X509.PKCS12::EncryptedContentInfo(Mono.Security.ASN1,System.String)
extern "C" ContentInfo_t1_136 * PKCS12_EncryptedContentInfo_m1_1398 (PKCS12_t1_124 * __this, ASN1_t1_122 * ___safeBags, String_t* ___algorithmOid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate)
extern "C" void PKCS12_AddCertificate_m1_1399 (PKCS12_t1_124 * __this, X509Certificate_t1_127 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::AddCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C" void PKCS12_AddCertificate_m1_1400 (PKCS12_t1_124 * __this, X509Certificate_t1_127 * ___cert, Object_t * ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate)
extern "C" void PKCS12_RemoveCertificate_m1_1401 (PKCS12_t1_124 * __this, X509Certificate_t1_127 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.X509.PKCS12::RemoveCertificate(Mono.Security.X509.X509Certificate,System.Collections.IDictionary)
extern "C" void PKCS12_RemoveCertificate_m1_1402 (PKCS12_t1_124 * __this, X509Certificate_t1_127 * ___cert, Object_t * ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object Mono.Security.X509.PKCS12::Clone()
extern "C" Object_t * PKCS12_Clone_m1_1403 (PKCS12_t1_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Security.X509.PKCS12::get_MaximumPasswordLength()
extern "C" int32_t PKCS12_get_MaximumPasswordLength_m1_1404 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
