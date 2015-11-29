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

// System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
struct X509EnhancedKeyUsageExtension_t2_677;
// System.Security.Cryptography.AsnEncodedData
struct AsnEncodedData_t2_655;
// System.Security.Cryptography.OidCollection
struct OidCollection_t2_675;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_AsnDecodeStatus.h"

// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor()
extern "C" void X509EnhancedKeyUsageExtension__ctor_m2_5605 (X509EnhancedKeyUsageExtension_t2_677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.AsnEncodedData,System.Boolean)
extern "C" void X509EnhancedKeyUsageExtension__ctor_m2_5606 (X509EnhancedKeyUsageExtension_t2_677 * __this, AsnEncodedData_t2_655 * ___encodedEnhancedKeyUsages, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::.ctor(System.Security.Cryptography.OidCollection,System.Boolean)
extern "C" void X509EnhancedKeyUsageExtension__ctor_m2_5607 (X509EnhancedKeyUsageExtension_t2_677 * __this, OidCollection_t2_675 * ___enhancedKeyUsages, bool ___critical, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::get_EnhancedKeyUsages()
extern "C" OidCollection_t2_675 * X509EnhancedKeyUsageExtension_get_EnhancedKeyUsages_m2_5608 (X509EnhancedKeyUsageExtension_t2_677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::CopyFrom(System.Security.Cryptography.AsnEncodedData)
extern "C" void X509EnhancedKeyUsageExtension_CopyFrom_m2_5609 (X509EnhancedKeyUsageExtension_t2_677 * __this, AsnEncodedData_t2_655 * ___asnEncodedData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsnDecodeStatus System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Decode(System.Byte[])
extern "C" int32_t X509EnhancedKeyUsageExtension_Decode_m2_5610 (X509EnhancedKeyUsageExtension_t2_677 * __this, ByteU5BU5D_t1_72* ___extension, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::Encode()
extern "C" ByteU5BU5D_t1_72* X509EnhancedKeyUsageExtension_Encode_m2_5611 (X509EnhancedKeyUsageExtension_t2_677 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension::ToString(System.Boolean)
extern "C" String_t* X509EnhancedKeyUsageExtension_ToString_m2_5612 (X509EnhancedKeyUsageExtension_t2_677 * __this, bool ___multiLine, const MethodInfo* method) IL2CPP_METHOD_ATTR;
