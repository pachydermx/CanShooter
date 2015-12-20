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

// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2_542;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;
// System.Security.SecureString
struct SecureString_t1_665;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_572;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection
struct X509ExtensionCollection_t2_663;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName
struct X500DistinguishedName_t2_659;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_575;
// System.Security.Cryptography.X509Certificates.PublicKey
struct PublicKey_t2_654;
// System.Security.Cryptography.Oid
struct Oid_t2_656;
// Mono.Security.ASN1
struct ASN1_t3_5;
// System.Text.StringBuilder
struct StringBuilder_t1_146;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3_1;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509K.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_DateTime.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Nam.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C_0.h"

// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor()
extern "C" void X509Certificate2__ctor_m2_5419 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[])
extern "C" void X509Certificate2__ctor_m2_5420 (X509Certificate2_t2_542 * __this, ByteU5BU5D_t1_72* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[],System.String)
extern "C" void X509Certificate2__ctor_m2_5421 (X509Certificate2_t2_542 * __this, ByteU5BU5D_t1_72* ___rawData, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[],System.Security.SecureString)
extern "C" void X509Certificate2__ctor_m2_5422 (X509Certificate2_t2_542 * __this, ByteU5BU5D_t1_72* ___rawData, SecureString_t1_665 * ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2__ctor_m2_5423 (X509Certificate2_t2_542 * __this, ByteU5BU5D_t1_72* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Byte[],System.Security.SecureString,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2__ctor_m2_5424 (X509Certificate2_t2_542 * __this, ByteU5BU5D_t1_72* ___rawData, SecureString_t1_665 * ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.String)
extern "C" void X509Certificate2__ctor_m2_5425 (X509Certificate2_t2_542 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.String,System.String)
extern "C" void X509Certificate2__ctor_m2_5426 (X509Certificate2_t2_542 * __this, String_t* ___fileName, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.String,System.Security.SecureString)
extern "C" void X509Certificate2__ctor_m2_5427 (X509Certificate2_t2_542 * __this, String_t* ___fileName, SecureString_t1_665 * ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.String,System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2__ctor_m2_5428 (X509Certificate2_t2_542 * __this, String_t* ___fileName, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.String,System.Security.SecureString,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2__ctor_m2_5429 (X509Certificate2_t2_542 * __this, String_t* ___fileName, SecureString_t1_665 * ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.IntPtr)
extern "C" void X509Certificate2__ctor_m2_5430 (X509Certificate2_t2_542 * __this, IntPtr_t ___handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.ctor(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void X509Certificate2__ctor_m2_5431 (X509Certificate2_t2_542 * __this, X509Certificate_t1_572 * ___certificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::.cctor()
extern "C" void X509Certificate2__cctor_m2_5432 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::get_Archived()
extern "C" bool X509Certificate2_get_Archived_m2_5433 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::set_Archived(System.Boolean)
extern "C" void X509Certificate2_set_Archived_m2_5434 (X509Certificate2_t2_542 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ExtensionCollection System.Security.Cryptography.X509Certificates.X509Certificate2::get_Extensions()
extern "C" X509ExtensionCollection_t2_663 * X509Certificate2_get_Extensions_m2_5435 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_FriendlyName()
extern "C" String_t* X509Certificate2_get_FriendlyName_m2_5436 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::set_FriendlyName(System.String)
extern "C" void X509Certificate2_set_FriendlyName_m2_5437 (X509Certificate2_t2_542 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::get_HasPrivateKey()
extern "C" bool X509Certificate2_get_HasPrivateKey_m2_5438 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_IssuerName()
extern "C" X500DistinguishedName_t2_659 * X509Certificate2_get_IssuerName_m2_5439 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotAfter()
extern "C" DateTime_t1_128  X509Certificate2_get_NotAfter_m2_5440 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509Certificate2::get_NotBefore()
extern "C" DateTime_t1_128  X509Certificate2_get_NotBefore_m2_5441 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm System.Security.Cryptography.X509Certificates.X509Certificate2::get_PrivateKey()
extern "C" AsymmetricAlgorithm_t1_575 * X509Certificate2_get_PrivateKey_m2_5442 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::set_PrivateKey(System.Security.Cryptography.AsymmetricAlgorithm)
extern "C" void X509Certificate2_set_PrivateKey_m2_5443 (X509Certificate2_t2_542 * __this, AsymmetricAlgorithm_t1_575 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.PublicKey System.Security.Cryptography.X509Certificates.X509Certificate2::get_PublicKey()
extern "C" PublicKey_t2_654 * X509Certificate2_get_PublicKey_m2_5444 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::get_RawData()
extern "C" ByteU5BU5D_t1_72* X509Certificate2_get_RawData_m2_5445 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_SerialNumber()
extern "C" String_t* X509Certificate2_get_SerialNumber_m2_5446 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.X509Certificates.X509Certificate2::get_SignatureAlgorithm()
extern "C" Oid_t2_656 * X509Certificate2_get_SignatureAlgorithm_m2_5447 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X500DistinguishedName System.Security.Cryptography.X509Certificates.X509Certificate2::get_SubjectName()
extern "C" X500DistinguishedName_t2_659 * X509Certificate2_get_SubjectName_m2_5448 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::get_Thumbprint()
extern "C" String_t* X509Certificate2_get_Thumbprint_m2_5449 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.Cryptography.X509Certificates.X509Certificate2::get_Version()
extern "C" int32_t X509Certificate2_get_Version_m2_5450 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetNameInfo(System.Security.Cryptography.X509Certificates.X509NameType,System.Boolean)
extern "C" String_t* X509Certificate2_GetNameInfo_m2_5451 (X509Certificate2_t2_542 * __this, int32_t ___nameType, bool ___forIssuer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.ASN1 System.Security.Cryptography.X509Certificates.X509Certificate2::Find(System.Byte[],Mono.Security.ASN1)
extern "C" ASN1_t3_5 * X509Certificate2_Find_m2_5452 (X509Certificate2_t2_542 * __this, ByteU5BU5D_t1_72* ___oid, ASN1_t3_5 * ___dn, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::GetValueAsString(Mono.Security.ASN1)
extern "C" String_t* X509Certificate2_GetValueAsString_m2_5453 (X509Certificate2_t2_542 * __this, ASN1_t3_5 * ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::ImportPkcs12(System.Byte[],System.String)
extern "C" void X509Certificate2_ImportPkcs12_m2_5454 (X509Certificate2_t2_542 * __this, ByteU5BU5D_t1_72* ___rawData, String_t* ___password, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[])
extern "C" void X509Certificate2_Import_m2_5455 (X509Certificate2_t2_542 * __this, ByteU5BU5D_t1_72* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2_Import_m2_5456 (X509Certificate2_t2_542 * __this, ByteU5BU5D_t1_72* ___rawData, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.Byte[],System.Security.SecureString,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2_Import_m2_5457 (X509Certificate2_t2_542 * __this, ByteU5BU5D_t1_72* ___rawData, SecureString_t1_665 * ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.String)
extern "C" void X509Certificate2_Import_m2_5458 (X509Certificate2_t2_542 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.String,System.String,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2_Import_m2_5459 (X509Certificate2_t2_542 * __this, String_t* ___fileName, String_t* ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Import(System.String,System.Security.SecureString,System.Security.Cryptography.X509Certificates.X509KeyStorageFlags)
extern "C" void X509Certificate2_Import_m2_5460 (X509Certificate2_t2_542 * __this, String_t* ___fileName, SecureString_t1_665 * ___password, int32_t ___keyStorageFlags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate2::Load(System.String)
extern "C" ByteU5BU5D_t1_72* X509Certificate2_Load_m2_5461 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::Reset()
extern "C" void X509Certificate2_Reset_m2_5462 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString()
extern "C" String_t* X509Certificate2_ToString_m2_5463 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509Certificate2::ToString(System.Boolean)
extern "C" String_t* X509Certificate2_ToString_m2_5464 (X509Certificate2_t2_542 * __this, bool ___verbose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509Certificate2::AppendBuffer(System.Text.StringBuilder,System.Byte[])
extern "C" void X509Certificate2_AppendBuffer_m2_5465 (Object_t * __this /* static, unused */, StringBuilder_t1_146 * ___sb, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.X509Certificates.X509Certificate2::Verify()
extern "C" bool X509Certificate2_Verify_m2_5466 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ContentType System.Security.Cryptography.X509Certificates.X509Certificate2::GetCertContentType(System.Byte[])
extern "C" int32_t X509Certificate2_GetCertContentType_m2_5467 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___rawData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509ContentType System.Security.Cryptography.X509Certificates.X509Certificate2::GetCertContentType(System.String)
extern "C" int32_t X509Certificate2_GetCertContentType_m2_5468 (Object_t * __this /* static, unused */, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509Certificate System.Security.Cryptography.X509Certificates.X509Certificate2::get_MonoCertificate()
extern "C" X509Certificate_t3_1 * X509Certificate2_get_MonoCertificate_m2_5469 (X509Certificate2_t2_542 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
