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

// System.Security.Cryptography.X509Certificates.X509ChainPolicy
struct X509ChainPolicy_t2_669;
// System.Security.Cryptography.OidCollection
struct OidCollection_t2_675;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection
struct X509Certificate2Collection_t2_664;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Rev.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Rev_0.h"
#include "mscorlib_System_TimeSpan.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Ver.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::.ctor()
extern "C" void X509ChainPolicy__ctor_m2_5584 (X509ChainPolicy_t2_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_ApplicationPolicy()
extern "C" OidCollection_t2_675 * X509ChainPolicy_get_ApplicationPolicy_m2_5585 (X509ChainPolicy_t2_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.OidCollection System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_CertificatePolicy()
extern "C" OidCollection_t2_675 * X509ChainPolicy_get_CertificatePolicy_m2_5586 (X509ChainPolicy_t2_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate2Collection System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_ExtraStore()
extern "C" X509Certificate2Collection_t2_664 * X509ChainPolicy_get_ExtraStore_m2_5587 (X509ChainPolicy_t2_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509RevocationFlag System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_RevocationFlag()
extern "C" int32_t X509ChainPolicy_get_RevocationFlag_m2_5588 (X509ChainPolicy_t2_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_RevocationFlag(System.Security.Cryptography.X509Certificates.X509RevocationFlag)
extern "C" void X509ChainPolicy_set_RevocationFlag_m2_5589 (X509ChainPolicy_t2_669 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509RevocationMode System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_RevocationMode()
extern "C" int32_t X509ChainPolicy_get_RevocationMode_m2_5590 (X509ChainPolicy_t2_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_RevocationMode(System.Security.Cryptography.X509Certificates.X509RevocationMode)
extern "C" void X509ChainPolicy_set_RevocationMode_m2_5591 (X509ChainPolicy_t2_669 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_UrlRetrievalTimeout()
extern "C" TimeSpan_t1_218  X509ChainPolicy_get_UrlRetrievalTimeout_m2_5592 (X509ChainPolicy_t2_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_UrlRetrievalTimeout(System.TimeSpan)
extern "C" void X509ChainPolicy_set_UrlRetrievalTimeout_m2_5593 (X509ChainPolicy_t2_669 * __this, TimeSpan_t1_218  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509VerificationFlags System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_VerificationFlags()
extern "C" int32_t X509ChainPolicy_get_VerificationFlags_m2_5594 (X509ChainPolicy_t2_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_VerificationFlags(System.Security.Cryptography.X509Certificates.X509VerificationFlags)
extern "C" void X509ChainPolicy_set_VerificationFlags_m2_5595 (X509ChainPolicy_t2_669 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Security.Cryptography.X509Certificates.X509ChainPolicy::get_VerificationTime()
extern "C" DateTime_t1_128  X509ChainPolicy_get_VerificationTime_m2_5596 (X509ChainPolicy_t2_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::set_VerificationTime(System.DateTime)
extern "C" void X509ChainPolicy_set_VerificationTime_m2_5597 (X509ChainPolicy_t2_669 * __this, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.X509Certificates.X509ChainPolicy::Reset()
extern "C" void X509ChainPolicy_Reset_m2_5598 (X509ChainPolicy_t2_669 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
