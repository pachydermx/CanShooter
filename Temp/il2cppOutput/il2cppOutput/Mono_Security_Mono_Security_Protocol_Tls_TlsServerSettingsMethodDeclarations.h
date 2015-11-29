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

// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t3_97;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3_4;
// System.Security.Cryptography.RSA
struct RSA_t1_119;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t3_118;
// System.String[]
struct StringU5BU5D_t1_206;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"

// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
extern "C" void TlsServerSettings__ctor_m3_852 (TlsServerSettings_t3_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
extern "C" bool TlsServerSettings_get_ServerKeyExchange_m3_853 (TlsServerSettings_t3_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
extern "C" void TlsServerSettings_set_ServerKeyExchange_m3_854 (TlsServerSettings_t3_97 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
extern "C" X509CertificateCollection_t3_4 * TlsServerSettings_get_Certificates_m3_855 (TlsServerSettings_t3_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
extern "C" void TlsServerSettings_set_Certificates_m3_856 (TlsServerSettings_t3_97 * __this, X509CertificateCollection_t3_4 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
extern "C" RSA_t1_119 * TlsServerSettings_get_CertificateRSA_m3_857 (TlsServerSettings_t3_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
extern "C" RSAParameters_t1_620  TlsServerSettings_get_RsaParameters_m3_858 (TlsServerSettings_t3_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
extern "C" void TlsServerSettings_set_RsaParameters_m3_859 (TlsServerSettings_t3_97 * __this, RSAParameters_t1_620  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
extern "C" void TlsServerSettings_set_SignedParams_m3_860 (TlsServerSettings_t3_97 * __this, ByteU5BU5D_t1_72* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
extern "C" bool TlsServerSettings_get_CertificateRequest_m3_861 (TlsServerSettings_t3_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
extern "C" void TlsServerSettings_set_CertificateRequest_m3_862 (TlsServerSettings_t3_97 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateTypes()
extern "C" ClientCertificateTypeU5BU5D_t3_118* TlsServerSettings_get_CertificateTypes_m3_863 (TlsServerSettings_t3_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
extern "C" void TlsServerSettings_set_CertificateTypes_m3_864 (TlsServerSettings_t3_97 * __this, ClientCertificateTypeU5BU5D_t3_118* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] Mono.Security.Protocol.Tls.TlsServerSettings::get_DistinguisedNames()
extern "C" StringU5BU5D_t1_206* TlsServerSettings_get_DistinguisedNames_m3_865 (TlsServerSettings_t3_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
extern "C" void TlsServerSettings_set_DistinguisedNames_m3_866 (TlsServerSettings_t3_97 * __this, StringU5BU5D_t1_206* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
extern "C" void TlsServerSettings_UpdateCertificateRSA_m3_867 (TlsServerSettings_t3_97 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
