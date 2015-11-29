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

// System.Net.Security.SslStream
struct SslStream_t2_460;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t2_307;
// System.Net.Security.LocalCertificateSelectionCallback
struct LocalCertificateSelectionCallback_t2_462;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_570;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2_305;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_Authentication_CipherAlgorithmType.h"
#include "System_System_Security_Authentication_HashAlgorithmType.h"
#include "System_System_Security_Authentication_ExchangeAlgorithmType.h"
#include "System_System_Security_Authentication_SslProtocols.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
#include "mscorlib_System_IO_SeekOrigin.h"

// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream)
extern "C" void SslStream__ctor_m2_3215 (SslStream_t2_460 * __this, Stream_t1_226 * ___innerStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean)
extern "C" void SslStream__ctor_m2_3216 (SslStream_t2_460 * __this, Stream_t1_226 * ___innerStream, bool ___leaveStreamOpen, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback)
extern "C" void SslStream__ctor_m2_3217 (SslStream_t2_460 * __this, Stream_t1_226 * ___innerStream, bool ___leaveStreamOpen, RemoteCertificateValidationCallback_t2_307 * ___certValidationCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::.ctor(System.IO.Stream,System.Boolean,System.Net.Security.RemoteCertificateValidationCallback,System.Net.Security.LocalCertificateSelectionCallback)
extern "C" void SslStream__ctor_m2_3218 (SslStream_t2_460 * __this, Stream_t1_226 * ___innerStream, bool ___leaveStreamOpen, RemoteCertificateValidationCallback_t2_307 * ___certValidationCallback, LocalCertificateSelectionCallback_t2_462 * ___certSelectionCallback, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanRead()
extern "C" bool SslStream_get_CanRead_m2_3219 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanSeek()
extern "C" bool SslStream_get_CanSeek_m2_3220 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanTimeout()
extern "C" bool SslStream_get_CanTimeout_m2_3221 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CanWrite()
extern "C" bool SslStream_get_CanWrite_m2_3222 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Length()
extern "C" int64_t SslStream_get_Length_m2_3223 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::get_Position()
extern "C" int64_t SslStream_get_Position_m2_3224 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_Position(System.Int64)
extern "C" void SslStream_set_Position_m2_3225 (SslStream_t2_460 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsAuthenticated()
extern "C" bool SslStream_get_IsAuthenticated_m2_3226 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsEncrypted()
extern "C" bool SslStream_get_IsEncrypted_m2_3227 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsMutuallyAuthenticated()
extern "C" bool SslStream_get_IsMutuallyAuthenticated_m2_3228 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsServer()
extern "C" bool SslStream_get_IsServer_m2_3229 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_IsSigned()
extern "C" bool SslStream_get_IsSigned_m2_3230 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_ReadTimeout()
extern "C" int32_t SslStream_get_ReadTimeout_m2_3231 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_ReadTimeout(System.Int32)
extern "C" void SslStream_set_ReadTimeout_m2_3232 (SslStream_t2_460 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_WriteTimeout()
extern "C" int32_t SslStream_get_WriteTimeout_m2_3233 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::set_WriteTimeout(System.Int32)
extern "C" void SslStream_set_WriteTimeout_m2_3234 (SslStream_t2_460 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Security.SslStream::get_CheckCertRevocationStatus()
extern "C" bool SslStream_get_CheckCertRevocationStatus_m2_3235 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Authentication.CipherAlgorithmType System.Net.Security.SslStream::get_CipherAlgorithm()
extern "C" int32_t SslStream_get_CipherAlgorithm_m2_3236 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_CipherStrength()
extern "C" int32_t SslStream_get_CipherStrength_m2_3237 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Authentication.HashAlgorithmType System.Net.Security.SslStream::get_HashAlgorithm()
extern "C" int32_t SslStream_get_HashAlgorithm_m2_3238 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_HashStrength()
extern "C" int32_t SslStream_get_HashStrength_m2_3239 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Authentication.ExchangeAlgorithmType System.Net.Security.SslStream::get_KeyExchangeAlgorithm()
extern "C" int32_t SslStream_get_KeyExchangeAlgorithm_m2_3240 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::get_KeyExchangeStrength()
extern "C" int32_t SslStream_get_KeyExchangeStrength_m2_3241 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::get_LocalCertificate()
extern "C" X509Certificate_t1_570 * SslStream_get_LocalCertificate_m2_3242 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::get_RemoteCertificate()
extern "C" X509Certificate_t1_570 * SslStream_get_RemoteCertificate_m2_3243 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Authentication.SslProtocols System.Net.Security.SslStream::get_SslProtocol()
extern "C" int32_t SslStream_get_SslProtocol_m2_3244 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.X509Certificates.X509Certificate System.Net.Security.SslStream::OnCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1_570 * SslStream_OnCertificateSelection_m2_3245 (SslStream_t2_460 * __this, X509CertificateCollection_t2_305 * ___clientCerts, X509Certificate_t1_570 * ___serverCert, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___serverRequestedCerts, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginAuthenticateAsClient_m2_3246 (SslStream_t2_460 * __this, String_t* ___targetHost, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginAuthenticateAsClient_m2_3247 (SslStream_t2_460 * __this, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginRead_m2_3248 (SslStream_t2_460 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginAuthenticateAsServer_m2_3249 (SslStream_t2_460 * __this, X509Certificate_t1_570 * ___serverCertificate, AsyncCallback_t1_28 * ___callback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginAuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginAuthenticateAsServer_m2_3250 (SslStream_t2_460 * __this, X509Certificate_t1_570 * ___serverCertificate, bool ___clientCertificateRequired, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, AsyncCallback_t1_28 * ___callback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Security.Protocol.Tls.SecurityProtocolType System.Net.Security.SslStream::GetMonoSslProtocol(System.Security.Authentication.SslProtocols)
extern "C" int32_t SslStream_GetMonoSslProtocol_m2_3251 (SslStream_t2_460 * __this, int32_t ___ms, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Security.SslStream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * SslStream_BeginWrite_m2_3252 (SslStream_t2_460 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___asyncCallback, Object_t * ___asyncState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String)
extern "C" void SslStream_AuthenticateAsClient_m2_3253 (SslStream_t2_460 * __this, String_t* ___targetHost, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsClient(System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C" void SslStream_AuthenticateAsClient_m2_3254 (SslStream_t2_460 * __this, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___clientCertificates, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void SslStream_AuthenticateAsServer_m2_3255 (SslStream_t2_460 * __this, X509Certificate_t1_570 * ___serverCertificate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Security.Authentication.SslProtocols,System.Boolean)
extern "C" void SslStream_AuthenticateAsServer_m2_3256 (SslStream_t2_460 * __this, X509Certificate_t1_570 * ___serverCertificate, bool ___clientCertificateRequired, int32_t ___sslProtocolType, bool ___checkCertificateRevocation, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Dispose(System.Boolean)
extern "C" void SslStream_Dispose_m2_3257 (SslStream_t2_460 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndAuthenticateAsClient(System.IAsyncResult)
extern "C" void SslStream_EndAuthenticateAsClient_m2_3258 (SslStream_t2_460 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndAuthenticateAsServer(System.IAsyncResult)
extern "C" void SslStream_EndAuthenticateAsServer_m2_3259 (SslStream_t2_460 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::EndRead(System.IAsyncResult)
extern "C" int32_t SslStream_EndRead_m2_3260 (SslStream_t2_460 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::EndWrite(System.IAsyncResult)
extern "C" void SslStream_EndWrite_m2_3261 (SslStream_t2_460 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Flush()
extern "C" void SslStream_Flush_m2_3262 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Security.SslStream::Read(System.Byte[],System.Int32,System.Int32)
extern "C" int32_t SslStream_Read_m2_3263 (SslStream_t2_460 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Security.SslStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t SslStream_Seek_m2_3264 (SslStream_t2_460 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::SetLength(System.Int64)
extern "C" void SslStream_SetLength_m2_3265 (SslStream_t2_460 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Write(System.Byte[],System.Int32,System.Int32)
extern "C" void SslStream_Write_m2_3266 (SslStream_t2_460 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::Write(System.Byte[])
extern "C" void SslStream_Write_m2_3267 (SslStream_t2_460 * __this, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Security.SslStream::CheckConnectionAuthenticated()
extern "C" void SslStream_CheckConnectionAuthenticated_m2_3268 (SslStream_t2_460 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
