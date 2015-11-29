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

// System.Net.ServicePointManager/ChainValidationHelper
struct ChainValidationHelper_t2_603;
// System.Object
struct Object_t;
// System.String
struct String_t;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t3_3;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3_4;
// System.Security.Cryptography.X509Certificates.X509Chain
struct X509Chain_t2_667;
// System.Security.Cryptography.X509Certificates.X509Certificate2
struct X509Certificate2_t2_542;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3_1;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Security_SslPolicyErrors.h"

// System.Void System.Net.ServicePointManager/ChainValidationHelper::.ctor(System.Object)
extern "C" void ChainValidationHelper__ctor_m2_4823 (ChainValidationHelper_t2_603 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager/ChainValidationHelper::.cctor()
extern "C" void ChainValidationHelper__cctor_m2_4824 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ServicePointManager/ChainValidationHelper::get_Host()
extern "C" String_t* ChainValidationHelper_get_Host_m2_4825 (ChainValidationHelper_t2_603 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager/ChainValidationHelper::set_Host(System.String)
extern "C" void ChainValidationHelper_set_Host_m2_4826 (ChainValidationHelper_t2_603 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult System.Net.ServicePointManager/ChainValidationHelper::ValidateChain(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t3_3 * ChainValidationHelper_ValidateChain_m2_4827 (ChainValidationHelper_t2_603 * __this, X509CertificateCollection_t3_4 * ___certs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ServicePointManager/ChainValidationHelper::GetStatusFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C" int32_t ChainValidationHelper_GetStatusFromChain_m2_4828 (Object_t * __this /* static, unused */, X509Chain_t2_667 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.SslPolicyErrors System.Net.ServicePointManager/ChainValidationHelper::GetErrorsFromChain(System.Security.Cryptography.X509Certificates.X509Chain)
extern "C" int32_t ChainValidationHelper_GetErrorsFromChain_m2_4829 (Object_t * __this /* static, unused */, X509Chain_t2_667 * ___chain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckCertificateUsage(System.Security.Cryptography.X509Certificates.X509Certificate2)
extern "C" bool ChainValidationHelper_CheckCertificateUsage_m2_4830 (Object_t * __this /* static, unused */, X509Certificate2_t2_542 * ___cert, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckServerIdentity(Mono.Security.X509.X509Certificate,System.String)
extern "C" bool ChainValidationHelper_CheckServerIdentity_m2_4831 (Object_t * __this /* static, unused */, X509Certificate_t3_1 * ___cert, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::CheckDomainName(System.String,System.String)
extern "C" bool ChainValidationHelper_CheckDomainName_m2_4832 (Object_t * __this /* static, unused */, String_t* ___subjectName, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager/ChainValidationHelper::Match(System.String,System.String)
extern "C" bool ChainValidationHelper_Match_m2_4833 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method) IL2CPP_METHOD_ATTR;
