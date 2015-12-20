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

// Mono.Security.Protocol.Tls.SslServerStream
struct SslServerStream_t3_10;
// System.IO.Stream
struct Stream_t1_226;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_572;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t3_13;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t3_12;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2_305;
// System.String
struct String_t;
// System.Int32[]
struct Int32U5BU5D_t1_161;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t3_3;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3_4;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_575;

#include "codegen/il2cpp-codegen.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"

// System.Void Mono.Security.Protocol.Tls.SslServerStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean)
extern "C" void SslServerStream__ctor_m3_24 (SslServerStream_t3_10 * __this, Stream_t1_226 * ___stream, X509Certificate_t1_572 * ___serverCertificate, bool ___clientCertificateRequired, bool ___ownsStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void SslServerStream__ctor_m3_19 (SslServerStream_t3_10 * __this, Stream_t1_226 * ___stream, X509Certificate_t1_572 * ___serverCertificate, bool ___clientCertificateRequired, bool ___ownsStream, int32_t ___securityProtocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void SslServerStream__ctor_m3_764 (SslServerStream_t3_10 * __this, Stream_t1_226 * ___stream, X509Certificate_t1_572 * ___serverCertificate, bool ___clientCertificateRequired, bool ___requestClientCertificate, bool ___ownsStream, int32_t ___securityProtocolType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslServerStream::get_ClientCertificate()
extern "C" X509Certificate_t1_572 * SslServerStream_get_ClientCertificate_m3_9 (SslServerStream_t3_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::set_ClientCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslServerStream_set_ClientCertValidationDelegate_m3_21 (SslServerStream_t3_10 * __this, CertificateValidationCallback_t3_13 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslServerStream::get_PrivateKeyCertSelectionDelegate()
extern "C" PrivateKeySelectionCallback_t3_12 * SslServerStream_get_PrivateKeyCertSelectionDelegate_m3_25 (SslServerStream_t3_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslServerStream_set_PrivateKeyCertSelectionDelegate_m3_20 (SslServerStream_t3_10 * __this, PrivateKeySelectionCallback_t3_12 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::Finalize()
extern "C" void SslServerStream_Finalize_m3_765 (SslServerStream_t3_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::Dispose(System.Boolean)
extern "C" void SslServerStream_Dispose_m3_766 (SslServerStream_t3_10 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult Mono.Security.Protocol.Tls.SslServerStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
extern "C" Object_t * SslServerStream_OnBeginNegotiateHandshake_m3_767 (SslServerStream_t3_10 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Protocol.Tls.SslServerStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
extern "C" void SslServerStream_OnNegotiateHandshakeCallback_m3_768 (SslServerStream_t3_10 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslServerStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1_572 * SslServerStream_OnLocalCertificateSelection_m3_769 (SslServerStream_t3_10 * __this, X509CertificateCollection_t2_305 * ___clientCertificates, X509Certificate_t1_572 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___serverRequestedCertificates, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslServerStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslServerStream_OnRemoteCertificateValidation_m3_770 (SslServerStream_t3_10 * __this, X509Certificate_t1_572 * ___certificate, Int32U5BU5D_t1_161* ___errors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslServerStream::get_HaveRemoteValidation2Callback()
extern "C" bool SslServerStream_get_HaveRemoteValidation2Callback_m3_771 (SslServerStream_t3_10 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslServerStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t3_3 * SslServerStream_OnRemoteCertificateValidation2_m3_772 (SslServerStream_t3_10 * __this, X509CertificateCollection_t3_4 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Mono.Security.Protocol.Tls.SslServerStream::RaiseClientCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslServerStream_RaiseClientCertificateValidation_m3_773 (SslServerStream_t3_10 * __this, X509Certificate_t1_572 * ___certificate, Int32U5BU5D_t1_161* ___certificateErrors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslServerStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1_575 * SslServerStream_OnLocalPrivateKeySelection_m3_774 (SslServerStream_t3_10 * __this, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslServerStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1_575 * SslServerStream_RaisePrivateKeySelection_m3_775 (SslServerStream_t3_10 * __this, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
