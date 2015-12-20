#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>

// Mono.Security.Protocol.Tls.ServerRecordProtocol
struct ServerRecordProtocol_t3_112;
// System.IO.Stream
struct Stream_t1_226;
// Mono.Security.Protocol.Tls.ServerContext
struct ServerContext_t3_111;
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage
struct HandshakeMessage_t3_106;
// Mono.Security.Protocol.Tls.TlsStream
struct TlsStream_t3_100;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// Mono.Security.Protocol.Tls.ValidationResult
struct ValidationResult_t3_3;
// Mono.Security.Protocol.Tls.SslClientStream
struct SslClientStream_t3_11;
// System.String
struct String_t;
// System.Security.Cryptography.X509Certificates.X509Certificate
struct X509Certificate_t1_572;
// System.Security.Cryptography.X509Certificates.X509CertificateCollection
struct X509CertificateCollection_t2_305;
// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t3_13;
// Mono.Security.Protocol.Tls.CertificateSelectionCallback
struct CertificateSelectionCallback_t3_14;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t3_12;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t3_19;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// Mono.Security.X509.X509CertificateCollection
struct X509CertificateCollection_t3_4;
// System.Int32[]
struct Int32U5BU5D_t1_161;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_575;
// Mono.Security.Protocol.Tls.SslCipherSuite
struct SslCipherSuite_t3_113;
// Mono.Security.Protocol.Tls.SslHandshakeHash
struct SslHandshakeHash_t3_114;
// System.Security.Cryptography.RSA
struct RSA_t1_119;
// Mono.Security.Protocol.Tls.SslServerStream
struct SslServerStream_t3_10;
// Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult
struct InternalAsyncResult_t3_115;
// System.Exception
struct Exception_t1_33;
// System.Threading.WaitHandle
struct WaitHandle_t1_454;
// Mono.Security.Protocol.Tls.SslStreamBase
struct SslStreamBase_t3_0;
// Mono.Security.Protocol.Tls.TlsCipherSuite
struct TlsCipherSuite_t3_116;
// Mono.Security.Protocol.Tls.TlsClientSettings
struct TlsClientSettings_t3_98;
// Mono.Security.Cryptography.RSAManaged
struct RSAManaged_t3_20;
// Mono.Security.Protocol.Tls.TlsException
struct TlsException_t3_117;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// Mono.Security.Protocol.Tls.Alert
struct Alert_t3_85;
// Mono.Security.Protocol.Tls.TlsServerSettings
struct TlsServerSettings_t3_97;
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[]
struct ClientCertificateTypeU5BU5D_t3_118;
// System.String[]
struct StringU5BU5D_t1_206;
// Mono.Security.Protocol.Tls.Context
struct Context_t3_88;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate
struct TlsClientCertificate_t3_121;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t3_122;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished
struct TlsClientFinished_t3_123;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello
struct TlsClientHello_t3_124;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange
struct TlsClientKeyExchange_t3_125;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate
struct TlsServerCertificate_t3_126;
// Mono.Security.X509.X509Certificate
struct X509Certificate_t3_1;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest
struct TlsServerCertificateRequest_t3_127;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished
struct TlsServerFinished_t3_128;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello
struct TlsServerHello_t3_129;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone
struct TlsServerHelloDone_t3_130;
// Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange
struct TlsServerKeyExchange_t3_131;
// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate
struct TlsClientCertificate_t3_132;
// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificateVerify
struct TlsClientCertificateVerify_t3_133;
// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished
struct TlsClientFinished_t3_134;
// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello
struct TlsClientHello_t3_135;
// Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange
struct TlsClientKeyExchange_t3_136;
// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificate
struct TlsServerCertificate_t3_137;
// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest
struct TlsServerCertificateRequest_t3_138;
// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished
struct TlsServerFinished_t3_139;
// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello
struct TlsServerHello_t3_140;
// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHelloDone
struct TlsServerHelloDone_t3_141;
// Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange
struct TlsServerKeyExchange_t3_142;
// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t3_143;
// Mono.Math.BigInteger
struct BigInteger_t3_29;

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Array.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ServerRecordProtoco.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ServerRecordProtocoMethodDeclarations.h"
#include "mscorlib_System_Void.h"
#include "mscorlib_System_IO_Stream.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ServerContext.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RecordProtocolMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RecordProtocol.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Context.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStream.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsStreamMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Handshake_0MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContextMethodDeclarations.h"
#include "mscorlib_System_Int32.h"
#include "mscorlib_ArrayTypes.h"
#include "mscorlib_System_Byte.h"
#include "mscorlib_System_IO_StreamMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_2MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_TlMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_3MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_0MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_1MethodDeclarations.h"
#include "mscorlib_System_Globalization_CultureInfoMethodDeclarations.h"
#include "mscorlib_System_StringMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsExceptionMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_2.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_3.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_0.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_1.h"
#include "mscorlib_System_Globalization_CultureInfo.h"
#include "mscorlib_System_String.h"
#include "mscorlib_System_Object.h"
#include "mscorlib_System_Enum.h"
#include "mscorlib_System_EnumMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsException.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertDescription.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_7MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_4MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_9MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_5MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_8MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_6MethodDeclarations.h"
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_7.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_4.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_9.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_5.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_8.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Server_Tl_6.h"
#include "mscorlib_System_InvalidOperationException.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResult.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ValidationResultMethodDeclarations.h"
#include "mscorlib_System_Boolean.h"
#include "mscorlib_System_ObjectMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStream.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslClientStreamMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityProtocolTyp.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Cer_1.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509C.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Cer_1MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStreamBaseMethodDeclarations.h"
#include "mscorlib_System_ArgumentNullExceptionMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContextMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientRecordProtocoMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStreamBase.h"
#include "mscorlib_System_ArgumentNullException.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientContext.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientRecordProtoco.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati.h"
#include "mscorlib_System_DelegateMethodDeclarations.h"
#include "mscorlib_System_Delegate.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectio.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelection.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0.h"
#include "mscorlib_System_IO_MemoryStream.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettingsMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsClientSettings.h"
#include "mscorlib_System_AsyncCallback.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteFactoryMethodDeclarations.h"
#include "mscorlib_System_IO_IOExceptionMethodDeclarations.h"
#include "mscorlib_System_Exception.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HandshakeState.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollecti.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Alert.h"
#include "mscorlib_System_IO_IOException.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ClientSessionCacheMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParametersMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettingsMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityParameters.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuite.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsServerSettings.h"
#include "mscorlib_System_Collections_CollectionBase.h"
#include "mscorlib_System_Collections_CollectionBaseMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateSelectioMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCollection.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidati_0MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CertificateValidatiMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlgorithm.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_PrivateKeySelectionMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslCipherSuite.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslCipherSuiteMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherAlgorithmType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_HashAlgorithmType.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ExchangeAlgorithmTy.h"
#include "mscorlib_System_Int16.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ContentType.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithmMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_HashAlgorithm.h"
#include "mscorlib_System_UInt64.h"
#include "mscorlib_System_CharMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_MD5MethodDeclarations.h"
#include "mscorlib_System_BufferMethodDeclarations.h"
#include "mscorlib_System_Char.h"
#include "mscorlib_System_Int64.h"
#include "mscorlib_System_Security_Cryptography_MD5.h"
#include "mscorlib_System_Security_Cryptography_SHA1MethodDeclarations.h"
#include "mscorlib_System_Text_EncodingMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_SHA1.h"
#include "mscorlib_System_Text_Encoding.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHash.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslHandshakeHashMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_RSA.h"
#include "mscorlib_System_Security_Cryptography_CryptographicUnexpecteMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RSASslSignatureFormMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RSASslSignatureForm.h"
#include "mscorlib_System_Security_Cryptography_CryptographicUnexpecte.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RSASslSignatureDefoMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_RSASslSignatureDefo.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslServerStream.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslServerStreamMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_ServerContextMethodDeclarations.h"
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
#include "mscorlib_System_NotSupportedException.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStreamBase_Inter.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SslStreamBase_InterMethodDeclarations.h"
#include "mscorlib_System_Threading_WaitHandle.h"
#include "mscorlib_System_Threading_MonitorMethodDeclarations.h"
#include "mscorlib_System_Threading_ManualResetEventMethodDeclarations.h"
#include "mscorlib_System_Threading_ManualResetEvent.h"
#include "mscorlib_System_Threading_EventWaitHandleMethodDeclarations.h"
#include "mscorlib_System_AsyncCallbackMethodDeclarations.h"
#include "mscorlib_System_Threading_EventWaitHandle.h"
#include "mscorlib_System_IO_MemoryStreamMethodDeclarations.h"
#include "mscorlib_System_Threading_WaitHandleMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCollectionMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509Certificate.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_AsymmetricAlgorithmMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_X509Certificates_X509CMethodDeclarations.h"
#include "mscorlib_System_IntPtr.h"
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
#include "mscorlib_System_ArgumentOutOfRangeException.h"
#include "mscorlib_System_IO_SeekOrigin.h"
#include "mscorlib_System_ObjectDisposedExceptionMethodDeclarations.h"
#include "mscorlib_System_ObjectDisposedException.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsCipherSuite.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_TlsCipherSuiteMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_KeyedHashAlgorithm.h"
#include "Mono_Security_Mono_Security_Cryptography_RSAManaged.h"
#include "Mono_Security_Mono_Security_Cryptography_RSAManagedMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_RSAMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_RSAParameters.h"
#include "mscorlib_System_ExceptionMethodDeclarations.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "mscorlib_System_Runtime_Serialization_SerializationInfo.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertLevel.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_AlertMethodDeclarations.h"
#include "Mono.Security_ArrayTypes.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCer.h"
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
#include "mscorlib_System_ArgumentException.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_ClientCerMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_HandshakeMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_TlMethodDeclarations.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Cer_3MethodDeclarations.h"
#include "System_System_Security_Cryptography_X509Certificates_X509Cer_3.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_0.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_0MethodDeclarations.h"
#include "mscorlib_System_NotImplementedException.h"
#include "mscorlib_System_Security_Cryptography_RSACryptoServiceProvid.h"
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Cryptography_MD5SHA1.h"
#include "Mono_Security_Mono_Security_ASN1MethodDeclarations.h"
#include "Mono_Security_Mono_Security_ASN1.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_1.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_1MethodDeclarations.h"
#include "mscorlib_System_Runtime_CompilerServices_RuntimeHelpersMethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3EMethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_7.h"
#include "mscorlib_System_RuntimeFieldHandle.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_2.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_2MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_CipherSuiteCollectiMethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_SecurityCompression.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_3.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_3MethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeForMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeFor.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_4MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollectionMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensioMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsageMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsages.h"
#include "Mono_Security_Mono_Security_X509_Extensions_KeyUsageExtensio.h"
#include "Mono_Security_Mono_Security_X509_Extensions_ExtendedKeyUsage.h"
#include "Mono_Security_Mono_Security_X509_X509Extension.h"
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType_0.h"
#include "Mono_Security_Mono_Security_X509_X509ExtensionCollection.h"
#include "mscorlib_System_Collections_ArrayList.h"
#include "mscorlib_System_Collections_ArrayListMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_NetscapeCertType.h"
#include "Mono_Security_Mono_Security_X509_X509ChainMethodDeclarations.h"
#include "mscorlib_System_TypeMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509Chain.h"
#include "Mono_Security_Mono_Security_X509_X509ChainStatusFlags.h"
#include "mscorlib_System_Type.h"
#include "mscorlib_System_RuntimeTypeHandle.h"
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameExMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_Extensions_SubjectAltNameEx.h"
#include "System_System_Text_RegularExpressions_RegexMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_GroupMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_GroupCollectionMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_CaptureMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Regex.h"
#include "System_System_Text_RegularExpressions_MatchCollection.h"
#include "System_System_Text_RegularExpressions_MatchCollectionMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_Match.h"
#include "System_System_Text_RegularExpressions_Group.h"
#include "System_System_Text_RegularExpressions_MatchMethodDeclarations.h"
#include "System_System_Text_RegularExpressions_GroupCollection.h"
#include "System_System_Text_RegularExpressions_Capture.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_5MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_6MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_7MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_8MethodDeclarations.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9.h"
#include "Mono_Security_Mono_Security_Protocol_Tls_Handshake_Client_Tl_9MethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCollection_XMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X509CertificateCollection_X.h"
#include "mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeDefMethodDeclarations.h"
#include "mscorlib_System_Security_Cryptography_RSAPKCS1KeyExchangeDef.h"
#include "mscorlib_System_ConvertMethodDeclarations.h"
#include "Mono_Security_Mono_Security_X509_X501MethodDeclarations.h"
#include "Mono_Security_Mono_Math_Prime_PrimalityTest.h"
#include "Mono_Security_Mono_Math_Prime_PrimalityTestMethodDeclarations.h"
#include "Mono_Security_Mono_Math_Prime_ConfidenceFactor.h"
#include "Mono_Security_Mono_Math_BigInteger.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTypMethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_0.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_0MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_1.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_1MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_2.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_2MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_3.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_3MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_4.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_4MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_5.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_5MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_6.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_6MethodDeclarations.h"
#include "Mono_Security_U3CPrivateImplementationDetailsU3E_U24ArrayTyp_7MethodDeclarations.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Mono.Security.Protocol.Tls.ServerRecordProtocol::.ctor(System.IO.Stream,Mono.Security.Protocol.Tls.ServerContext)
extern TypeInfo* RecordProtocol_t3_93_il2cpp_TypeInfo_var;
extern "C" void ServerRecordProtocol__ctor_m3_714 (ServerRecordProtocol_t3_112 * __this, Stream_t1_226 * ___innerStream, ServerContext_t3_111 * ___context, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RecordProtocol_t3_93_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1358);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t1_226 * L_0 = ___innerStream;
		ServerContext_t3_111 * L_1 = ___context;
		IL2CPP_RUNTIME_CLASS_INIT(RecordProtocol_t3_93_il2cpp_TypeInfo_var);
		RecordProtocol__ctor_m3_664(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ServerRecordProtocol::GetMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" HandshakeMessage_t3_106 * ServerRecordProtocol_GetMessage_m3_715 (ServerRecordProtocol_t3_112 * __this, uint8_t ___type, const MethodInfo* method)
{
	HandshakeMessage_t3_106 * V_0 = {0};
	{
		uint8_t L_0 = ___type;
		HandshakeMessage_t3_106 * L_1 = ServerRecordProtocol_createServerHandshakeMessage_m3_718(__this, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		HandshakeMessage_t3_106 * L_2 = V_0;
		return L_2;
	}
}
// System.Void Mono.Security.Protocol.Tls.ServerRecordProtocol::ProcessHandshakeMessage(Mono.Security.Protocol.Tls.TlsStream)
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern "C" void ServerRecordProtocol_ProcessHandshakeMessage_m3_716 (ServerRecordProtocol_t3_112 * __this, TlsStream_t3_100 * ___handMsg, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = {0};
	HandshakeMessage_t3_106 * V_1 = {0};
	int32_t V_2 = 0;
	ByteU5BU5D_t1_72* V_3 = {0};
	{
		TlsStream_t3_100 * L_0 = ___handMsg;
		NullCheck(L_0);
		uint8_t L_1 = TlsStream_ReadByte_m3_878(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		V_1 = (HandshakeMessage_t3_106 *)NULL;
		TlsStream_t3_100 * L_2 = ___handMsg;
		NullCheck(L_2);
		int32_t L_3 = TlsStream_ReadInt24_m3_880(L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		V_3 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_4));
		TlsStream_t3_100 * L_5 = ___handMsg;
		ByteU5BU5D_t1_72* L_6 = V_3;
		int32_t L_7 = V_2;
		NullCheck(L_5);
		VirtFuncInvoker3< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(19 /* System.Int32 Mono.Security.Protocol.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, L_7);
		uint8_t L_8 = V_0;
		ByteU5BU5D_t1_72* L_9 = V_3;
		HandshakeMessage_t3_106 * L_10 = ServerRecordProtocol_createClientHandshakeMessage_m3_717(__this, L_8, L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		HandshakeMessage_t3_106 * L_11 = V_1;
		NullCheck(L_11);
		HandshakeMessage_Process_m3_900(L_11, /*hidden argument*/NULL);
		Context_t3_88 * L_12 = RecordProtocol_get_Context_m3_666(__this, /*hidden argument*/NULL);
		uint8_t L_13 = V_0;
		NullCheck(L_12);
		Context_set_LastHandshakeMsg_m3_590(L_12, L_13, /*hidden argument*/NULL);
		HandshakeMessage_t3_106 * L_14 = V_1;
		if (!L_14)
		{
			goto IL_007f;
		}
	}
	{
		HandshakeMessage_t3_106 * L_15 = V_1;
		NullCheck(L_15);
		VirtActionInvoker0::Invoke(31 /* System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Update() */, L_15);
		Context_t3_88 * L_16 = RecordProtocol_get_Context_m3_666(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		TlsStream_t3_100 * L_17 = Context_get_HandshakeMessages_m3_599(L_16, /*hidden argument*/NULL);
		uint8_t L_18 = V_0;
		NullCheck(L_17);
		VirtActionInvoker1< uint8_t >::Invoke(24 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, L_17, L_18);
		Context_t3_88 * L_19 = RecordProtocol_get_Context_m3_666(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		TlsStream_t3_100 * L_20 = Context_get_HandshakeMessages_m3_599(L_19, /*hidden argument*/NULL);
		int32_t L_21 = V_2;
		NullCheck(L_20);
		TlsStream_WriteInt24_m3_884(L_20, L_21, /*hidden argument*/NULL);
		Context_t3_88 * L_22 = RecordProtocol_get_Context_m3_666(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		TlsStream_t3_100 * L_23 = Context_get_HandshakeMessages_m3_599(L_22, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_24 = V_3;
		ByteU5BU5D_t1_72* L_25 = V_3;
		NullCheck(L_25);
		NullCheck(L_23);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, (((int32_t)((int32_t)(((Array_t *)L_25)->max_length)))));
	}

IL_007f:
	{
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ServerRecordProtocol::createClientHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern TypeInfo* TlsClientHello_t3_135_il2cpp_TypeInfo_var;
extern TypeInfo* TlsClientCertificate_t3_132_il2cpp_TypeInfo_var;
extern TypeInfo* TlsClientKeyExchange_t3_136_il2cpp_TypeInfo_var;
extern TypeInfo* TlsClientCertificateVerify_t3_133_il2cpp_TypeInfo_var;
extern TypeInfo* TlsClientFinished_t3_134_il2cpp_TypeInfo_var;
extern TypeInfo* CultureInfo_t1_163_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t1_158_il2cpp_TypeInfo_var;
extern TypeInfo* HandshakeType_t3_120_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4408;
extern "C" HandshakeMessage_t3_106 * ServerRecordProtocol_createClientHandshakeMessage_m3_717 (ServerRecordProtocol_t3_112 * __this, uint8_t ___type, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsClientHello_t3_135_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1385);
		TlsClientCertificate_t3_132_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1386);
		TlsClientKeyExchange_t3_136_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1387);
		TlsClientCertificateVerify_t3_133_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1388);
		TlsClientFinished_t3_134_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1389);
		CultureInfo_t1_163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		ObjectU5BU5D_t1_158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		HandshakeType_t3_120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1364);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4408 = il2cpp_codegen_string_literal_from_index(4408);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = {0};
	{
		uint8_t L_0 = ___type;
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)15))) == 0)
		{
			goto IL_005e;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)15))) == 1)
		{
			goto IL_0051;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)15))) == 2)
		{
			goto IL_0023;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)15))) == 3)
		{
			goto IL_0023;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)15))) == 4)
		{
			goto IL_0023;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)15))) == 5)
		{
			goto IL_006b;
		}
	}

IL_0023:
	{
		uint8_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		uint8_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)11))))
		{
			goto IL_0044;
		}
	}
	{
		goto IL_0078;
	}

IL_0037:
	{
		Context_t3_88 * L_4 = (((RecordProtocol_t3_93 *)__this)->___context_2);
		ByteU5BU5D_t1_72* L_5 = ___buffer;
		TlsClientHello_t3_135 * L_6 = (TlsClientHello_t3_135 *)il2cpp_codegen_object_new (TlsClientHello_t3_135_il2cpp_TypeInfo_var);
		TlsClientHello__ctor_m3_974(L_6, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_0044:
	{
		Context_t3_88 * L_7 = (((RecordProtocol_t3_93 *)__this)->___context_2);
		ByteU5BU5D_t1_72* L_8 = ___buffer;
		TlsClientCertificate_t3_132 * L_9 = (TlsClientCertificate_t3_132 *)il2cpp_codegen_object_new (TlsClientCertificate_t3_132_il2cpp_TypeInfo_var);
		TlsClientCertificate__ctor_m3_962(L_9, L_7, L_8, /*hidden argument*/NULL);
		return L_9;
	}

IL_0051:
	{
		Context_t3_88 * L_10 = (((RecordProtocol_t3_93 *)__this)->___context_2);
		ByteU5BU5D_t1_72* L_11 = ___buffer;
		TlsClientKeyExchange_t3_136 * L_12 = (TlsClientKeyExchange_t3_136 *)il2cpp_codegen_object_new (TlsClientKeyExchange_t3_136_il2cpp_TypeInfo_var);
		TlsClientKeyExchange__ctor_m3_981(L_12, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_005e:
	{
		Context_t3_88 * L_13 = (((RecordProtocol_t3_93 *)__this)->___context_2);
		ByteU5BU5D_t1_72* L_14 = ___buffer;
		TlsClientCertificateVerify_t3_133 * L_15 = (TlsClientCertificateVerify_t3_133 *)il2cpp_codegen_object_new (TlsClientCertificateVerify_t3_133_il2cpp_TypeInfo_var);
		TlsClientCertificateVerify__ctor_m3_968(L_15, L_13, L_14, /*hidden argument*/NULL);
		return L_15;
	}

IL_006b:
	{
		Context_t3_88 * L_16 = (((RecordProtocol_t3_93 *)__this)->___context_2);
		ByteU5BU5D_t1_72* L_17 = ___buffer;
		TlsClientFinished_t3_134 * L_18 = (TlsClientFinished_t3_134 *)il2cpp_codegen_object_new (TlsClientFinished_t3_134_il2cpp_TypeInfo_var);
		TlsClientFinished__ctor_m3_971(L_18, L_16, L_17, /*hidden argument*/NULL);
		return L_18;
	}

IL_0078:
	{
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1_163_il2cpp_TypeInfo_var);
		CultureInfo_t1_163 * L_19 = CultureInfo_get_CurrentUICulture_m1_2054(NULL /*static, unused*/, /*hidden argument*/NULL);
		ObjectU5BU5D_t1_158* L_20 = ((ObjectU5BU5D_t1_158*)SZArrayNew(ObjectU5BU5D_t1_158_il2cpp_TypeInfo_var, 1));
		uint8_t L_21 = ___type;
		uint8_t L_22 = L_21;
		Object_t * L_23 = Box(HandshakeType_t3_120_il2cpp_TypeInfo_var, &L_22);
		NullCheck(L_23);
		String_t* L_24 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_23);
		NullCheck(L_20);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_20, 0);
		ArrayElementTypeCheck (L_20, L_24);
		*((Object_t **)(Object_t **)SZArrayLdElema(L_20, 0, sizeof(Object_t *))) = (Object_t *)L_24;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_25 = String_Format_m1_440(NULL /*static, unused*/, L_19, _stringLiteral4408, L_20, /*hidden argument*/NULL);
		TlsException_t3_117 * L_26 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_26, ((int32_t)10), L_25, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_26);
	}
}
// Mono.Security.Protocol.Tls.Handshake.HandshakeMessage Mono.Security.Protocol.Tls.ServerRecordProtocol::createServerHandshakeMessage(Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern TypeInfo* TlsServerHello_t3_140_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerCertificate_t3_137_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerKeyExchange_t3_142_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerCertificateRequest_t3_138_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerHelloDone_t3_141_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerFinished_t3_139_il2cpp_TypeInfo_var;
extern TypeInfo* HandshakeType_t3_120_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* InvalidOperationException_t1_777_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4429;
extern "C" HandshakeMessage_t3_106 * ServerRecordProtocol_createServerHandshakeMessage_m3_718 (ServerRecordProtocol_t3_112 * __this, uint8_t ___type, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsServerHello_t3_140_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1390);
		TlsServerCertificate_t3_137_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1391);
		TlsServerKeyExchange_t3_142_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1392);
		TlsServerCertificateRequest_t3_138_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1393);
		TlsServerHelloDone_t3_141_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1394);
		TlsServerFinished_t3_139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1395);
		HandshakeType_t3_120_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1364);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		InvalidOperationException_t1_777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral4429 = il2cpp_codegen_string_literal_from_index(4429);
		s_Il2CppMethodIntialized = true;
	}
	uint8_t V_0 = {0};
	{
		uint8_t L_0 = ___type;
		V_0 = L_0;
		uint8_t L_1 = V_0;
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)11))) == 0)
		{
			goto IL_005f;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)11))) == 1)
		{
			goto IL_006b;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)11))) == 2)
		{
			goto IL_0077;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)11))) == 3)
		{
			goto IL_0083;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)11))) == 4)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)11))) == 5)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)11))) == 6)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)11))) == 7)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)11))) == 8)
		{
			goto IL_0033;
		}
		if (((int32_t)((int32_t)L_1-(int32_t)((int32_t)11))) == 9)
		{
			goto IL_008f;
		}
	}

IL_0033:
	{
		uint8_t L_2 = V_0;
		if (L_2 == 0)
		{
			goto IL_004a;
		}
		if (L_2 == 1)
		{
			goto IL_009b;
		}
		if (L_2 == 2)
		{
			goto IL_0053;
		}
	}
	{
		goto IL_009b;
	}

IL_004a:
	{
		VirtActionInvoker1< uint8_t >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType) */, __this, 1);
		return (HandshakeMessage_t3_106 *)NULL;
	}

IL_0053:
	{
		Context_t3_88 * L_3 = (((RecordProtocol_t3_93 *)__this)->___context_2);
		TlsServerHello_t3_140 * L_4 = (TlsServerHello_t3_140 *)il2cpp_codegen_object_new (TlsServerHello_t3_140_il2cpp_TypeInfo_var);
		TlsServerHello__ctor_m3_994(L_4, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_005f:
	{
		Context_t3_88 * L_5 = (((RecordProtocol_t3_93 *)__this)->___context_2);
		TlsServerCertificate_t3_137 * L_6 = (TlsServerCertificate_t3_137 *)il2cpp_codegen_object_new (TlsServerCertificate_t3_137_il2cpp_TypeInfo_var);
		TlsServerCertificate__ctor_m3_984(L_6, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_006b:
	{
		Context_t3_88 * L_7 = (((RecordProtocol_t3_93 *)__this)->___context_2);
		TlsServerKeyExchange_t3_142 * L_8 = (TlsServerKeyExchange_t3_142 *)il2cpp_codegen_object_new (TlsServerKeyExchange_t3_142_il2cpp_TypeInfo_var);
		TlsServerKeyExchange__ctor_m3_1001(L_8, L_7, /*hidden argument*/NULL);
		return L_8;
	}

IL_0077:
	{
		Context_t3_88 * L_9 = (((RecordProtocol_t3_93 *)__this)->___context_2);
		TlsServerCertificateRequest_t3_138 * L_10 = (TlsServerCertificateRequest_t3_138 *)il2cpp_codegen_object_new (TlsServerCertificateRequest_t3_138_il2cpp_TypeInfo_var);
		TlsServerCertificateRequest__ctor_m3_987(L_10, L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_0083:
	{
		Context_t3_88 * L_11 = (((RecordProtocol_t3_93 *)__this)->___context_2);
		TlsServerHelloDone_t3_141 * L_12 = (TlsServerHelloDone_t3_141 *)il2cpp_codegen_object_new (TlsServerHelloDone_t3_141_il2cpp_TypeInfo_var);
		TlsServerHelloDone__ctor_m3_998(L_12, L_11, /*hidden argument*/NULL);
		return L_12;
	}

IL_008f:
	{
		Context_t3_88 * L_13 = (((RecordProtocol_t3_93 *)__this)->___context_2);
		TlsServerFinished_t3_139 * L_14 = (TlsServerFinished_t3_139 *)il2cpp_codegen_object_new (TlsServerFinished_t3_139_il2cpp_TypeInfo_var);
		TlsServerFinished__ctor_m3_990(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_009b:
	{
		uint8_t L_15 = ___type;
		uint8_t L_16 = L_15;
		Object_t * L_17 = Box(HandshakeType_t3_120_il2cpp_TypeInfo_var, &L_16);
		NullCheck(L_17);
		String_t* L_18 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Enum::ToString() */, L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Concat_m1_444(NULL /*static, unused*/, _stringLiteral4429, L_18, /*hidden argument*/NULL);
		InvalidOperationException_t1_777 * L_20 = (InvalidOperationException_t1_777 *)il2cpp_codegen_object_new (InvalidOperationException_t1_777_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1_5531(L_20, L_19, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}
}
// System.Void Mono.Security.Protocol.Tls.ValidationResult::.ctor(System.Boolean,System.Boolean,System.Int32)
extern "C" void ValidationResult__ctor_m3_27 (ValidationResult_t3_3 * __this, bool ___trusted, bool ___user_denied, int32_t ___error_code, const MethodInfo* method)
{
	{
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		bool L_0 = ___trusted;
		__this->___trusted_0 = L_0;
		bool L_1 = ___user_denied;
		__this->___user_denied_1 = L_1;
		int32_t L_2 = ___error_code;
		__this->___error_code_2 = L_2;
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.ValidationResult::get_Trusted()
extern "C" bool ValidationResult_get_Trusted_m3_719 (ValidationResult_t3_3 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___trusted_0);
		return L_0;
	}
}
// System.Int32 Mono.Security.Protocol.Tls.ValidationResult::get_ErrorCode()
extern "C" int32_t ValidationResult_get_ErrorCode_m3_720 (ValidationResult_t3_3 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->___error_code_2);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean)
extern "C" void SslClientStream__ctor_m3_721 (SslClientStream_t3_11 * __this, Stream_t1_226 * ___stream, String_t* ___targetHost, bool ___ownsStream, const MethodInfo* method)
{
	{
		Stream_t1_226 * L_0 = ___stream;
		String_t* L_1 = ___targetHost;
		bool L_2 = ___ownsStream;
		SslClientStream__ctor_m3_11(__this, L_0, L_1, L_2, ((int32_t)-1073741824), (X509CertificateCollection_t2_305 *)NULL, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509Certificate)
extern TypeInfo* X509CertificateU5BU5D_t1_968_il2cpp_TypeInfo_var;
extern TypeInfo* X509CertificateCollection_t2_305_il2cpp_TypeInfo_var;
extern "C" void SslClientStream__ctor_m3_722 (SslClientStream_t3_11 * __this, Stream_t1_226 * ___stream, String_t* ___targetHost, X509Certificate_t1_572 * ___clientCertificate, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		X509CertificateU5BU5D_t1_968_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1396);
		X509CertificateCollection_t2_305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(873);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t1_226 * L_0 = ___stream;
		String_t* L_1 = ___targetHost;
		X509CertificateU5BU5D_t1_968* L_2 = ((X509CertificateU5BU5D_t1_968*)SZArrayNew(X509CertificateU5BU5D_t1_968_il2cpp_TypeInfo_var, 1));
		X509Certificate_t1_572 * L_3 = ___clientCertificate;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, 0);
		ArrayElementTypeCheck (L_2, L_3);
		*((X509Certificate_t1_572 **)(X509Certificate_t1_572 **)SZArrayLdElema(L_2, 0, sizeof(X509Certificate_t1_572 *))) = (X509Certificate_t1_572 *)L_3;
		X509CertificateCollection_t2_305 * L_4 = (X509CertificateCollection_t2_305 *)il2cpp_codegen_object_new (X509CertificateCollection_t2_305_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2_5507(L_4, L_2, /*hidden argument*/NULL);
		SslClientStream__ctor_m3_11(__this, L_0, L_1, 0, ((int32_t)-1073741824), L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void SslClientStream__ctor_m3_723 (SslClientStream_t3_11 * __this, Stream_t1_226 * ___stream, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___clientCertificates, const MethodInfo* method)
{
	{
		Stream_t1_226 * L_0 = ___stream;
		String_t* L_1 = ___targetHost;
		X509CertificateCollection_t2_305 * L_2 = ___clientCertificates;
		SslClientStream__ctor_m3_11(__this, L_0, L_1, 0, ((int32_t)-1073741824), L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern TypeInfo* X509CertificateCollection_t2_305_il2cpp_TypeInfo_var;
extern "C" void SslClientStream__ctor_m3_724 (SslClientStream_t3_11 * __this, Stream_t1_226 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		X509CertificateCollection_t2_305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(873);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t1_226 * L_0 = ___stream;
		String_t* L_1 = ___targetHost;
		bool L_2 = ___ownsStream;
		int32_t L_3 = ___securityProtocolType;
		X509CertificateCollection_t2_305 * L_4 = (X509CertificateCollection_t2_305 *)il2cpp_codegen_object_new (X509CertificateCollection_t2_305_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2_5506(L_4, /*hidden argument*/NULL);
		SslClientStream__ctor_m3_11(__this, L_0, L_1, L_2, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::.ctor(System.IO.Stream,System.String,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern TypeInfo* SslStreamBase_t3_0_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t1_735_il2cpp_TypeInfo_var;
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern TypeInfo* ClientRecordProtocol_t3_92_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4430;
extern "C" void SslClientStream__ctor_m3_11 (SslClientStream_t3_11 * __this, Stream_t1_226 * ___stream, String_t* ___targetHost, bool ___ownsStream, int32_t ___securityProtocolType, X509CertificateCollection_t2_305 * ___clientCertificates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SslStreamBase_t3_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1397);
		ArgumentNullException_t1_735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		ClientRecordProtocol_t3_92_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1398);
		_stringLiteral4430 = il2cpp_codegen_string_literal_from_index(4430);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t1_226 * L_0 = ___stream;
		bool L_1 = ___ownsStream;
		IL2CPP_RUNTIME_CLASS_INIT(SslStreamBase_t3_0_il2cpp_TypeInfo_var);
		SslStreamBase__ctor_m3_793(__this, L_0, L_1, /*hidden argument*/NULL);
		String_t* L_2 = ___targetHost;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		String_t* L_3 = ___targetHost;
		NullCheck(L_3);
		int32_t L_4 = String_get_Length_m1_454(L_3, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0024;
		}
	}

IL_0019:
	{
		ArgumentNullException_t1_735 * L_5 = (ArgumentNullException_t1_735 *)il2cpp_codegen_object_new (ArgumentNullException_t1_735_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1_4988(L_5, _stringLiteral4430, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0024:
	{
		int32_t L_6 = ___securityProtocolType;
		String_t* L_7 = ___targetHost;
		X509CertificateCollection_t2_305 * L_8 = ___clientCertificates;
		ClientContext_t3_91 * L_9 = (ClientContext_t3_91 *)il2cpp_codegen_object_new (ClientContext_t3_91_il2cpp_TypeInfo_var);
		ClientContext__ctor_m3_546(L_9, __this, L_6, L_7, L_8, /*hidden argument*/NULL);
		((SslStreamBase_t3_0 *)__this)->___context_5 = L_9;
		Stream_t1_226 * L_10 = (((SslStreamBase_t3_0 *)__this)->___innerStream_3);
		Context_t3_88 * L_11 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		ClientRecordProtocol_t3_92 * L_12 = (ClientRecordProtocol_t3_92 *)il2cpp_codegen_object_new (ClientRecordProtocol_t3_92_il2cpp_TypeInfo_var);
		ClientRecordProtocol__ctor_m3_551(L_12, L_10, ((ClientContext_t3_91 *)CastclassClass(L_11, ClientContext_t3_91_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((SslStreamBase_t3_0 *)__this)->___protocol_6 = L_12;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern TypeInfo* CertificateValidationCallback_t3_13_il2cpp_TypeInfo_var;
extern "C" void SslClientStream_add_ServerCertValidation_m3_725 (SslClientStream_t3_11 * __this, CertificateValidationCallback_t3_13 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CertificateValidationCallback_t3_13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1026);
		s_Il2CppMethodIntialized = true;
	}
	{
		CertificateValidationCallback_t3_13 * L_0 = (__this->___ServerCertValidation_16);
		CertificateValidationCallback_t3_13 * L_1 = ___value;
		Delegate_t1_22 * L_2 = Delegate_Combine_m1_726(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ServerCertValidation_16 = ((CertificateValidationCallback_t3_13 *)CastclassSealed(L_2, CertificateValidationCallback_t3_13_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern TypeInfo* CertificateValidationCallback_t3_13_il2cpp_TypeInfo_var;
extern "C" void SslClientStream_remove_ServerCertValidation_m3_726 (SslClientStream_t3_11 * __this, CertificateValidationCallback_t3_13 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CertificateValidationCallback_t3_13_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1026);
		s_Il2CppMethodIntialized = true;
	}
	{
		CertificateValidationCallback_t3_13 * L_0 = (__this->___ServerCertValidation_16);
		CertificateValidationCallback_t3_13 * L_1 = ___value;
		Delegate_t1_22 * L_2 = Delegate_Remove_m1_729(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ServerCertValidation_16 = ((CertificateValidationCallback_t3_13 *)CastclassSealed(L_2, CertificateValidationCallback_t3_13_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern TypeInfo* CertificateSelectionCallback_t3_14_il2cpp_TypeInfo_var;
extern "C" void SslClientStream_add_ClientCertSelection_m3_727 (SslClientStream_t3_11 * __this, CertificateSelectionCallback_t3_14 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CertificateSelectionCallback_t3_14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1027);
		s_Il2CppMethodIntialized = true;
	}
	{
		CertificateSelectionCallback_t3_14 * L_0 = (__this->___ClientCertSelection_17);
		CertificateSelectionCallback_t3_14 * L_1 = ___value;
		Delegate_t1_22 * L_2 = Delegate_Combine_m1_726(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ClientCertSelection_17 = ((CertificateSelectionCallback_t3_14 *)CastclassSealed(L_2, CertificateSelectionCallback_t3_14_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ClientCertSelection(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern TypeInfo* CertificateSelectionCallback_t3_14_il2cpp_TypeInfo_var;
extern "C" void SslClientStream_remove_ClientCertSelection_m3_728 (SslClientStream_t3_11 * __this, CertificateSelectionCallback_t3_14 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CertificateSelectionCallback_t3_14_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1027);
		s_Il2CppMethodIntialized = true;
	}
	{
		CertificateSelectionCallback_t3_14 * L_0 = (__this->___ClientCertSelection_17);
		CertificateSelectionCallback_t3_14 * L_1 = ___value;
		Delegate_t1_22 * L_2 = Delegate_Remove_m1_729(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ClientCertSelection_17 = ((CertificateSelectionCallback_t3_14 *)CastclassSealed(L_2, CertificateSelectionCallback_t3_14_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern TypeInfo* PrivateKeySelectionCallback_t3_12_il2cpp_TypeInfo_var;
extern "C" void SslClientStream_add_PrivateKeySelection_m3_729 (SslClientStream_t3_11 * __this, PrivateKeySelectionCallback_t3_12 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PrivateKeySelectionCallback_t3_12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1025);
		s_Il2CppMethodIntialized = true;
	}
	{
		PrivateKeySelectionCallback_t3_12 * L_0 = (__this->___PrivateKeySelection_18);
		PrivateKeySelectionCallback_t3_12 * L_1 = ___value;
		Delegate_t1_22 * L_2 = Delegate_Combine_m1_726(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___PrivateKeySelection_18 = ((PrivateKeySelectionCallback_t3_12 *)CastclassSealed(L_2, PrivateKeySelectionCallback_t3_12_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_PrivateKeySelection(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern TypeInfo* PrivateKeySelectionCallback_t3_12_il2cpp_TypeInfo_var;
extern "C" void SslClientStream_remove_PrivateKeySelection_m3_730 (SslClientStream_t3_11 * __this, PrivateKeySelectionCallback_t3_12 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		PrivateKeySelectionCallback_t3_12_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1025);
		s_Il2CppMethodIntialized = true;
	}
	{
		PrivateKeySelectionCallback_t3_12 * L_0 = (__this->___PrivateKeySelection_18);
		PrivateKeySelectionCallback_t3_12 * L_1 = ___value;
		Delegate_t1_22 * L_2 = Delegate_Remove_m1_729(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___PrivateKeySelection_18 = ((PrivateKeySelectionCallback_t3_12 *)CastclassSealed(L_2, PrivateKeySelectionCallback_t3_12_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::add_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern TypeInfo* CertificateValidationCallback2_t3_19_il2cpp_TypeInfo_var;
extern "C" void SslClientStream_add_ServerCertValidation2_m3_34 (SslClientStream_t3_11 * __this, CertificateValidationCallback2_t3_19 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CertificateValidationCallback2_t3_19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1178);
		s_Il2CppMethodIntialized = true;
	}
	{
		CertificateValidationCallback2_t3_19 * L_0 = (__this->___ServerCertValidation2_19);
		CertificateValidationCallback2_t3_19 * L_1 = ___value;
		Delegate_t1_22 * L_2 = Delegate_Combine_m1_726(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ServerCertValidation2_19 = ((CertificateValidationCallback2_t3_19 *)CastclassSealed(L_2, CertificateValidationCallback2_t3_19_il2cpp_TypeInfo_var));
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::remove_ServerCertValidation2(Mono.Security.Protocol.Tls.CertificateValidationCallback2)
extern TypeInfo* CertificateValidationCallback2_t3_19_il2cpp_TypeInfo_var;
extern "C" void SslClientStream_remove_ServerCertValidation2_m3_731 (SslClientStream_t3_11 * __this, CertificateValidationCallback2_t3_19 * ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CertificateValidationCallback2_t3_19_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1178);
		s_Il2CppMethodIntialized = true;
	}
	{
		CertificateValidationCallback2_t3_19 * L_0 = (__this->___ServerCertValidation2_19);
		CertificateValidationCallback2_t3_19 * L_1 = ___value;
		Delegate_t1_22 * L_2 = Delegate_Remove_m1_729(NULL /*static, unused*/, L_0, L_1, /*hidden argument*/NULL);
		__this->___ServerCertValidation2_19 = ((CertificateValidationCallback2_t3_19 *)CastclassSealed(L_2, CertificateValidationCallback2_t3_19_il2cpp_TypeInfo_var));
		return;
	}
}
// System.IO.Stream Mono.Security.Protocol.Tls.SslClientStream::get_InputBuffer()
extern "C" Stream_t1_226 * SslClientStream_get_InputBuffer_m3_732 (SslClientStream_t3_11 * __this, const MethodInfo* method)
{
	{
		MemoryStream_t1_250 * L_0 = (((SslStreamBase_t3_0 *)__this)->___inputBuffer_4);
		return L_0;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertificates()
extern "C" X509CertificateCollection_t2_305 * SslClientStream_get_ClientCertificates_m3_733 (SslClientStream_t3_11 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_0);
		TlsClientSettings_t3_98 * L_1 = Context_get_ClientSettings_m3_588(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		X509CertificateCollection_t2_305 * L_2 = TlsClientSettings_get_Certificates_m3_839(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::get_SelectedClientCertificate()
extern "C" X509Certificate_t1_572 * SslClientStream_get_SelectedClientCertificate_m3_8 (SslClientStream_t3_11 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_0);
		TlsClientSettings_t3_98 * L_1 = Context_get_ClientSettings_m3_588(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		X509Certificate_t1_572 * L_2 = TlsClientSettings_get_ClientCertificate_m3_841(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslClientStream::get_ServerCertValidationDelegate()
extern "C" CertificateValidationCallback_t3_13 * SslClientStream_get_ServerCertValidationDelegate_m3_734 (SslClientStream_t3_11 * __this, const MethodInfo* method)
{
	{
		CertificateValidationCallback_t3_13 * L_0 = (__this->___ServerCertValidation_16);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ServerCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslClientStream_set_ServerCertValidationDelegate_m3_16 (SslClientStream_t3_11 * __this, CertificateValidationCallback_t3_13 * ___value, const MethodInfo* method)
{
	{
		CertificateValidationCallback_t3_13 * L_0 = ___value;
		__this->___ServerCertValidation_16 = L_0;
		return;
	}
}
// Mono.Security.Protocol.Tls.CertificateSelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_ClientCertSelectionDelegate()
extern "C" CertificateSelectionCallback_t3_14 * SslClientStream_get_ClientCertSelectionDelegate_m3_735 (SslClientStream_t3_11 * __this, const MethodInfo* method)
{
	{
		CertificateSelectionCallback_t3_14 * L_0 = (__this->___ClientCertSelection_17);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_ClientCertSelectionDelegate(Mono.Security.Protocol.Tls.CertificateSelectionCallback)
extern "C" void SslClientStream_set_ClientCertSelectionDelegate_m3_18 (SslClientStream_t3_11 * __this, CertificateSelectionCallback_t3_14 * ___value, const MethodInfo* method)
{
	{
		CertificateSelectionCallback_t3_14 * L_0 = ___value;
		__this->___ClientCertSelection_17 = L_0;
		return;
	}
}
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslClientStream::get_PrivateKeyCertSelectionDelegate()
extern "C" PrivateKeySelectionCallback_t3_12 * SslClientStream_get_PrivateKeyCertSelectionDelegate_m3_736 (SslClientStream_t3_11 * __this, const MethodInfo* method)
{
	{
		PrivateKeySelectionCallback_t3_12 * L_0 = (__this->___PrivateKeySelection_18);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslClientStream_set_PrivateKeyCertSelectionDelegate_m3_14 (SslClientStream_t3_11 * __this, PrivateKeySelectionCallback_t3_12 * ___value, const MethodInfo* method)
{
	{
		PrivateKeySelectionCallback_t3_12 * L_0 = ___value;
		__this->___PrivateKeySelection_18 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Finalize()
extern "C" void SslClientStream_Finalize_m3_737 (SslClientStream_t3_11 * __this, const MethodInfo* method)
{
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		SslStreamBase_Dispose_m3_828(__this, 0, /*hidden argument*/NULL);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		SslStreamBase_Finalize_m3_827(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::Dispose(System.Boolean)
extern "C" void SslClientStream_Dispose_m3_738 (SslClientStream_t3_11 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		SslStreamBase_Dispose_m3_828(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___disposing;
		if (!L_1)
		{
			goto IL_0029;
		}
	}
	{
		__this->___ServerCertValidation_16 = (CertificateValidationCallback_t3_13 *)NULL;
		__this->___ClientCertSelection_17 = (CertificateSelectionCallback_t3_14 *)NULL;
		__this->___PrivateKeySelection_18 = (PrivateKeySelectionCallback_t3_12 *)NULL;
		__this->___ServerCertValidation2_19 = (CertificateValidationCallback2_t3_19 *)NULL;
	}

IL_0029:
	{
		return;
	}
}
// System.IAsyncResult Mono.Security.Protocol.Tls.SslClientStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t1_33_il2cpp_TypeInfo_var;
extern TypeInfo* IOException_t1_233_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4379;
extern "C" Object_t * SslClientStream_OnBeginNegotiateHandshake_m3_739 (SslClientStream_t3_11 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		Exception_t1_33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IOException_t1_233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		_stringLiteral4379 = il2cpp_codegen_string_literal_from_index(4379);
		s_Il2CppMethodIntialized = true;
	}
	TlsException_t3_117 * V_0 = {0};
	Exception_t1_33 * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Context_t3_88 * L_0 = (((SslStreamBase_t3_0 *)__this)->___context_5);
			NullCheck(L_0);
			int32_t L_1 = Context_get_HandshakeState_m3_591(L_0, /*hidden argument*/NULL);
			if (!L_1)
			{
				goto IL_001b;
			}
		}

IL_0010:
		{
			Context_t3_88 * L_2 = (((SslStreamBase_t3_0 *)__this)->___context_5);
			NullCheck(L_2);
			VirtActionInvoker0::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.Context::Clear() */, L_2);
		}

IL_001b:
		{
			Context_t3_88 * L_3 = (((SslStreamBase_t3_0 *)__this)->___context_5);
			Context_t3_88 * L_4 = (((SslStreamBase_t3_0 *)__this)->___context_5);
			NullCheck(L_4);
			int32_t L_5 = Context_get_SecurityProtocol_m3_579(L_4, /*hidden argument*/NULL);
			CipherSuiteCollection_t3_89 * L_6 = CipherSuiteFactory_GetSupportedCiphers_m3_543(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
			NullCheck(L_3);
			Context_set_SupportedCiphers_m3_598(L_3, L_6, /*hidden argument*/NULL);
			Context_t3_88 * L_7 = (((SslStreamBase_t3_0 *)__this)->___context_5);
			NullCheck(L_7);
			Context_set_HandshakeState_m3_592(L_7, 1, /*hidden argument*/NULL);
			RecordProtocol_t3_93 * L_8 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
			AsyncCallback_t1_28 * L_9 = ___callback;
			Object_t * L_10 = ___state;
			NullCheck(L_8);
			Object_t * L_11 = RecordProtocol_BeginSendRecord_m3_682(L_8, 1, L_9, L_10, /*hidden argument*/NULL);
			V_2 = L_11;
			goto IL_009d;
		}

IL_0056:
		{
			; // IL_0056: leave IL_009d
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1_33 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TlsException_t3_117_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_005b;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1_33_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_007e;
		throw e;
	}

CATCH_005b:
	{ // begin catch(Mono.Security.Protocol.Tls.TlsException)
		{
			V_0 = ((TlsException_t3_117 *)__exception_local);
			RecordProtocol_t3_93 * L_12 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
			TlsException_t3_117 * L_13 = V_0;
			NullCheck(L_13);
			Alert_t3_85 * L_14 = TlsException_get_Alert_m3_851(L_13, /*hidden argument*/NULL);
			NullCheck(L_12);
			RecordProtocol_SendAlert_m3_680(L_12, L_14, /*hidden argument*/NULL);
			TlsException_t3_117 * L_15 = V_0;
			IOException_t1_233 * L_16 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
			IOException__ctor_m1_2344(L_16, _stringLiteral4379, L_15, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_16);
		}

IL_0079:
		{
			goto IL_009d;
		}
	} // end catch (depth: 1)

CATCH_007e:
	{ // begin catch(System.Exception)
		{
			V_1 = ((Exception_t1_33 *)__exception_local);
			RecordProtocol_t3_93 * L_17 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
			NullCheck(L_17);
			RecordProtocol_SendAlert_m3_678(L_17, ((int32_t)80), /*hidden argument*/NULL);
			Exception_t1_33 * L_18 = V_1;
			IOException_t1_233 * L_19 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
			IOException__ctor_m1_2344(L_19, _stringLiteral4379, L_18, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_19);
		}

IL_0098:
		{
			goto IL_009d;
		}
	} // end catch (depth: 1)

IL_009d:
	{
		Object_t * L_20 = V_2;
		return L_20;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::SafeReceiveRecord(System.IO.Stream)
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4431;
extern "C" void SslClientStream_SafeReceiveRecord_m3_740 (SslClientStream_t3_11 * __this, Stream_t1_226 * ___s, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4431 = il2cpp_codegen_string_literal_from_index(4431);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t1_72* V_0 = {0};
	{
		RecordProtocol_t3_93 * L_0 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		Stream_t1_226 * L_1 = ___s;
		NullCheck(L_0);
		ByteU5BU5D_t1_72* L_2 = RecordProtocol_ReceiveRecord_m3_673(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		ByteU5BU5D_t1_72* L_3 = V_0;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		ByteU5BU5D_t1_72* L_4 = V_0;
		NullCheck(L_4);
		if ((((int32_t)((int32_t)(((Array_t *)L_4)->max_length)))))
		{
			goto IL_0028;
		}
	}

IL_001b:
	{
		TlsException_t3_117 * L_5 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_5, ((int32_t)40), _stringLiteral4431, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0028:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslClientStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
extern TypeInfo* ClientSessionCache_t3_95_il2cpp_TypeInfo_var;
extern "C" void SslClientStream_OnNegotiateHandshakeCallback_m3_741 (SslClientStream_t3_11 * __this, Object_t * ___asyncResult, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientSessionCache_t3_95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1373);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	int32_t G_B14_0 = 0;
	{
		RecordProtocol_t3_93 * L_0 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		Object_t * L_1 = ___asyncResult;
		NullCheck(L_0);
		RecordProtocol_EndSendRecord_m3_685(L_0, L_1, /*hidden argument*/NULL);
		goto IL_0043;
	}

IL_0011:
	{
		Stream_t1_226 * L_2 = (((SslStreamBase_t3_0 *)__this)->___innerStream_3);
		SslClientStream_SafeReceiveRecord_m3_740(__this, L_2, /*hidden argument*/NULL);
		Context_t3_88 * L_3 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_3);
		bool L_4 = Context_get_AbbreviatedHandshake_m3_575(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0043;
		}
	}
	{
		Context_t3_88 * L_5 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_5);
		uint8_t L_6 = Context_get_LastHandshakeMsg_m3_589(L_5, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_6) == ((uint32_t)2))))
		{
			goto IL_0043;
		}
	}
	{
		goto IL_0055;
	}

IL_0043:
	{
		Context_t3_88 * L_7 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_7);
		uint8_t L_8 = Context_get_LastHandshakeMsg_m3_589(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_8) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0011;
		}
	}

IL_0055:
	{
		Context_t3_88 * L_9 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_9);
		bool L_10 = Context_get_AbbreviatedHandshake_m3_575(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_00da;
		}
	}
	{
		Context_t3_88 * L_11 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		IL2CPP_RUNTIME_CLASS_INIT(ClientSessionCache_t3_95_il2cpp_TypeInfo_var);
		ClientSessionCache_SetContextFromCache_m3_573(NULL /*static, unused*/, L_11, /*hidden argument*/NULL);
		Context_t3_88 * L_12 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_12);
		SecurityParameters_t3_99 * L_13 = Context_get_Negotiating_m3_631(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		CipherSuite_t3_87 * L_14 = SecurityParameters_get_Cipher_m3_703(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker0::Invoke(7 /* System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeKeys() */, L_14);
		Context_t3_88 * L_15 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_15);
		SecurityParameters_t3_99 * L_16 = Context_get_Negotiating_m3_631(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		CipherSuite_t3_87 * L_17 = SecurityParameters_get_Cipher_m3_703(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		CipherSuite_InitializeCipher_m3_508(L_17, /*hidden argument*/NULL);
		RecordProtocol_t3_93 * L_18 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_18);
		RecordProtocol_SendChangeCipherSpec_m3_681(L_18, /*hidden argument*/NULL);
		goto IL_00b7;
	}

IL_00ab:
	{
		Stream_t1_226 * L_19 = (((SslStreamBase_t3_0 *)__this)->___innerStream_3);
		SslClientStream_SafeReceiveRecord_m3_740(__this, L_19, /*hidden argument*/NULL);
	}

IL_00b7:
	{
		Context_t3_88 * L_20 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_20);
		int32_t L_21 = Context_get_HandshakeState_m3_591(L_20, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_21) == ((uint32_t)2))))
		{
			goto IL_00ab;
		}
	}
	{
		RecordProtocol_t3_93 * L_22 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_22);
		VirtActionInvoker1< uint8_t >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType) */, L_22, ((int32_t)20));
		goto IL_01c5;
	}

IL_00da:
	{
		Context_t3_88 * L_23 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_23);
		TlsServerSettings_t3_97 * L_24 = Context_get_ServerSettings_m3_587(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		bool L_25 = TlsServerSettings_get_CertificateRequest_m3_861(L_24, /*hidden argument*/NULL);
		V_0 = L_25;
		Context_t3_88 * L_26 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_26);
		int32_t L_27 = Context_get_SecurityProtocol_m3_579(L_26, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_27) == ((uint32_t)((int32_t)48)))))
		{
			goto IL_012e;
		}
	}
	{
		Context_t3_88 * L_28 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_28);
		TlsClientSettings_t3_98 * L_29 = Context_get_ClientSettings_m3_588(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		X509CertificateCollection_t2_305 * L_30 = TlsClientSettings_get_Certificates_m3_839(L_29, /*hidden argument*/NULL);
		if (!L_30)
		{
			goto IL_012c;
		}
	}
	{
		Context_t3_88 * L_31 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_31);
		TlsClientSettings_t3_98 * L_32 = Context_get_ClientSettings_m3_588(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		X509CertificateCollection_t2_305 * L_33 = TlsClientSettings_get_Certificates_m3_839(L_32, /*hidden argument*/NULL);
		NullCheck(L_33);
		int32_t L_34 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_33);
		G_B14_0 = ((((int32_t)L_34) > ((int32_t)0))? 1 : 0);
		goto IL_012d;
	}

IL_012c:
	{
		G_B14_0 = 0;
	}

IL_012d:
	{
		V_0 = G_B14_0;
	}

IL_012e:
	{
		bool L_35 = V_0;
		if (!L_35)
		{
			goto IL_0141;
		}
	}
	{
		RecordProtocol_t3_93 * L_36 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_36);
		VirtActionInvoker1< uint8_t >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType) */, L_36, ((int32_t)11));
	}

IL_0141:
	{
		RecordProtocol_t3_93 * L_37 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_37);
		VirtActionInvoker1< uint8_t >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType) */, L_37, ((int32_t)16));
		Context_t3_88 * L_38 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_38);
		SecurityParameters_t3_99 * L_39 = Context_get_Negotiating_m3_631(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		CipherSuite_t3_87 * L_40 = SecurityParameters_get_Cipher_m3_703(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		CipherSuite_InitializeCipher_m3_508(L_40, /*hidden argument*/NULL);
		bool L_41 = V_0;
		if (!L_41)
		{
			goto IL_018b;
		}
	}
	{
		Context_t3_88 * L_42 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_42);
		TlsClientSettings_t3_98 * L_43 = Context_get_ClientSettings_m3_588(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		X509Certificate_t1_572 * L_44 = TlsClientSettings_get_ClientCertificate_m3_841(L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_018b;
		}
	}
	{
		RecordProtocol_t3_93 * L_45 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_45);
		VirtActionInvoker1< uint8_t >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType) */, L_45, ((int32_t)15));
	}

IL_018b:
	{
		RecordProtocol_t3_93 * L_46 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_46);
		RecordProtocol_SendChangeCipherSpec_m3_681(L_46, /*hidden argument*/NULL);
		RecordProtocol_t3_93 * L_47 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_47);
		VirtActionInvoker1< uint8_t >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType) */, L_47, ((int32_t)20));
		goto IL_01b4;
	}

IL_01a8:
	{
		Stream_t1_226 * L_48 = (((SslStreamBase_t3_0 *)__this)->___innerStream_3);
		SslClientStream_SafeReceiveRecord_m3_740(__this, L_48, /*hidden argument*/NULL);
	}

IL_01b4:
	{
		Context_t3_88 * L_49 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_49);
		int32_t L_50 = Context_get_HandshakeState_m3_591(L_49, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_50) == ((uint32_t)2))))
		{
			goto IL_01a8;
		}
	}

IL_01c5:
	{
		Context_t3_88 * L_51 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_51);
		TlsStream_t3_100 * L_52 = Context_get_HandshakeMessages_m3_599(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		TlsStream_Reset_m3_887(L_52, /*hidden argument*/NULL);
		Context_t3_88 * L_53 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_53);
		VirtActionInvoker0::Invoke(5 /* System.Void Mono.Security.Protocol.Tls.Context::ClearKeyInfo() */, L_53);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1_572 * SslClientStream_OnLocalCertificateSelection_m3_742 (SslClientStream_t3_11 * __this, X509CertificateCollection_t2_305 * ___clientCertificates, X509Certificate_t1_572 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___serverRequestedCertificates, const MethodInfo* method)
{
	{
		CertificateSelectionCallback_t3_14 * L_0 = (__this->___ClientCertSelection_17);
		if (!L_0)
		{
			goto IL_001c;
		}
	}
	{
		CertificateSelectionCallback_t3_14 * L_1 = (__this->___ClientCertSelection_17);
		X509CertificateCollection_t2_305 * L_2 = ___clientCertificates;
		X509Certificate_t1_572 * L_3 = ___serverCertificate;
		String_t* L_4 = ___targetHost;
		X509CertificateCollection_t2_305 * L_5 = ___serverRequestedCertificates;
		NullCheck(L_1);
		X509Certificate_t1_572 * L_6 = CertificateSelectionCallback_Invoke_m3_1016(L_1, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		return L_6;
	}

IL_001c:
	{
		return (X509Certificate_t1_572 *)NULL;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback()
extern "C" bool SslClientStream_get_HaveRemoteValidation2Callback_m3_743 (SslClientStream_t3_11 * __this, const MethodInfo* method)
{
	{
		CertificateValidationCallback2_t3_19 * L_0 = (__this->___ServerCertValidation2_19);
		return ((((int32_t)((((Object_t*)(CertificateValidationCallback2_t3_19 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t3_3 * SslClientStream_OnRemoteCertificateValidation2_m3_744 (SslClientStream_t3_11 * __this, X509CertificateCollection_t3_4 * ___collection, const MethodInfo* method)
{
	CertificateValidationCallback2_t3_19 * V_0 = {0};
	{
		CertificateValidationCallback2_t3_19 * L_0 = (__this->___ServerCertValidation2_19);
		V_0 = L_0;
		CertificateValidationCallback2_t3_19 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		CertificateValidationCallback2_t3_19 * L_2 = V_0;
		X509CertificateCollection_t3_4 * L_3 = ___collection;
		NullCheck(L_2);
		ValidationResult_t3_3 * L_4 = CertificateValidationCallback2_Invoke_m3_1013(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (ValidationResult_t3_3 *)NULL;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslClientStream_OnRemoteCertificateValidation_m3_745 (SslClientStream_t3_11 * __this, X509Certificate_t1_572 * ___certificate, Int32U5BU5D_t1_161* ___errors, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		CertificateValidationCallback_t3_13 * L_0 = (__this->___ServerCertValidation_16);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		CertificateValidationCallback_t3_13 * L_1 = (__this->___ServerCertValidation_16);
		X509Certificate_t1_572 * L_2 = ___certificate;
		Int32U5BU5D_t1_161* L_3 = ___errors;
		NullCheck(L_1);
		bool L_4 = CertificateValidationCallback_Invoke_m3_1010(L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		Int32U5BU5D_t1_161* L_5 = ___errors;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1_161* L_6 = ___errors;
		NullCheck(L_6);
		G_B5_0 = ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_6)->max_length))))) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = 0;
	}

IL_0028:
	{
		return G_B5_0;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslClientStream_RaiseServerCertificateValidation_m3_746 (SslClientStream_t3_11 * __this, X509Certificate_t1_572 * ___certificate, Int32U5BU5D_t1_161* ___certificateErrors, const MethodInfo* method)
{
	{
		X509Certificate_t1_572 * L_0 = ___certificate;
		Int32U5BU5D_t1_161* L_1 = ___certificateErrors;
		bool L_2 = SslStreamBase_RaiseRemoteCertificateValidation_m3_799(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t3_3 * SslClientStream_RaiseServerCertificateValidation2_m3_747 (SslClientStream_t3_11 * __this, X509CertificateCollection_t3_4 * ___collection, const MethodInfo* method)
{
	{
		X509CertificateCollection_t3_4 * L_0 = ___collection;
		ValidationResult_t3_3 * L_1 = SslStreamBase_RaiseRemoteCertificateValidation2_m3_800(__this, L_0, /*hidden argument*/NULL);
		return L_1;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslClientStream::RaiseClientCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1_572 * SslClientStream_RaiseClientCertificateSelection_m3_748 (SslClientStream_t3_11 * __this, X509CertificateCollection_t2_305 * ___clientCertificates, X509Certificate_t1_572 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___serverRequestedCertificates, const MethodInfo* method)
{
	{
		X509CertificateCollection_t2_305 * L_0 = ___clientCertificates;
		X509Certificate_t1_572 * L_1 = ___serverCertificate;
		String_t* L_2 = ___targetHost;
		X509CertificateCollection_t2_305 * L_3 = ___serverRequestedCertificates;
		X509Certificate_t1_572 * L_4 = SslStreamBase_RaiseLocalCertificateSelection_m3_798(__this, L_0, L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1_575 * SslClientStream_OnLocalPrivateKeySelection_m3_749 (SslClientStream_t3_11 * __this, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost, const MethodInfo* method)
{
	{
		PrivateKeySelectionCallback_t3_12 * L_0 = (__this->___PrivateKeySelection_18);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		PrivateKeySelectionCallback_t3_12 * L_1 = (__this->___PrivateKeySelection_18);
		X509Certificate_t1_572 * L_2 = ___certificate;
		String_t* L_3 = ___targetHost;
		NullCheck(L_1);
		AsymmetricAlgorithm_t1_575 * L_4 = PrivateKeySelectionCallback_Invoke_m3_1019(L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		return (AsymmetricAlgorithm_t1_575 *)NULL;
	}
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslClientStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1_575 * SslClientStream_RaisePrivateKeySelection_m3_750 (SslClientStream_t3_11 * __this, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost, const MethodInfo* method)
{
	{
		X509Certificate_t1_572 * L_0 = ___certificate;
		String_t* L_1 = ___targetHost;
		AsymmetricAlgorithm_t1_575 * L_2 = SslStreamBase_RaiseLocalPrivateKeySelection_m3_801(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslCipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern TypeInfo* CipherSuite_t3_87_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern "C" void SslCipherSuite__ctor_m3_751 (SslCipherSuite_t3_113 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBytes, uint8_t ___ivSize, uint8_t ___blockSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CipherSuite_t3_87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1350);
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t G_B3_0 = 0;
	{
		int16_t L_0 = ___code;
		String_t* L_1 = ___name;
		int32_t L_2 = ___cipherAlgorithmType;
		int32_t L_3 = ___hashAlgorithmType;
		int32_t L_4 = ___exchangeAlgorithmType;
		bool L_5 = ___exportable;
		bool L_6 = ___blockMode;
		uint8_t L_7 = ___keyMaterialSize;
		uint8_t L_8 = ___expandedKeyMaterialSize;
		int16_t L_9 = ___effectiveKeyBytes;
		uint8_t L_10 = ___ivSize;
		uint8_t L_11 = ___blockSize;
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
		CipherSuite__ctor_m3_484(__this, L_0, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		int32_t L_12 = ___hashAlgorithmType;
		if (L_12)
		{
			goto IL_0029;
		}
	}
	{
		G_B3_0 = ((int32_t)48);
		goto IL_002b;
	}

IL_0029:
	{
		G_B3_0 = ((int32_t)40);
	}

IL_002b:
	{
		V_0 = G_B3_0;
		int32_t L_13 = V_0;
		__this->___pad1_21 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_13));
		int32_t L_14 = V_0;
		__this->___pad2_22 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_14));
		V_1 = 0;
		goto IL_0063;
	}

IL_004b:
	{
		ByteU5BU5D_t1_72* L_15 = (__this->___pad1_21);
		int32_t L_16 = V_1;
		NullCheck(L_15);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_15, L_16);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_15, L_16, sizeof(uint8_t))) = (uint8_t)((int32_t)54);
		ByteU5BU5D_t1_72* L_17 = (__this->___pad2_22);
		int32_t L_18 = V_1;
		NullCheck(L_17);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_17, L_18);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_17, L_18, sizeof(uint8_t))) = (uint8_t)((int32_t)92);
		int32_t L_19 = V_1;
		V_1 = ((int32_t)((int32_t)L_19+(int32_t)1));
	}

IL_0063:
	{
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		if ((((int32_t)L_20) < ((int32_t)L_21)))
		{
			goto IL_004b;
		}
	}
	{
		return;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern TypeInfo* CipherSuite_t3_87_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t1_72* SslCipherSuite_ComputeServerRecordMAC_m3_752 (SslCipherSuite_t3_113 * __this, uint8_t ___contentType, ByteU5BU5D_t1_72* ___fragment, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		CipherSuite_t3_87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1350);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t1_597 * V_0 = {0};
	ByteU5BU5D_t1_72* V_1 = {0};
	uint64_t V_2 = 0;
	ByteU5BU5D_t1_72* V_3 = {0};
	uint64_t G_B5_0 = 0;
	{
		String_t* L_0 = CipherSuite_get_HashAlgorithmName_m3_491(__this, /*hidden argument*/NULL);
		HashAlgorithm_t1_597 * L_1 = HashAlgorithm_Create_m1_4130(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Context_t3_88 * L_2 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		SecurityParameters_t3_99 * L_3 = Context_get_Read_m3_632(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t1_72* L_4 = SecurityParameters_get_ServerWriteMAC_m3_707(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		HashAlgorithm_t1_597 * L_5 = V_0;
		ByteU5BU5D_t1_72* L_6 = V_1;
		ByteU5BU5D_t1_72* L_7 = V_1;
		NullCheck(L_7);
		ByteU5BU5D_t1_72* L_8 = V_1;
		NullCheck(L_5);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)(((Array_t *)L_7)->max_length)))), L_8, 0);
		HashAlgorithm_t1_597 * L_9 = V_0;
		ByteU5BU5D_t1_72* L_10 = (__this->___pad1_21);
		ByteU5BU5D_t1_72* L_11 = (__this->___pad1_21);
		NullCheck(L_11);
		ByteU5BU5D_t1_72* L_12 = (__this->___pad1_21);
		NullCheck(L_9);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_9, L_10, 0, (((int32_t)((int32_t)(((Array_t *)L_11)->max_length)))), L_12, 0);
		ByteU5BU5D_t1_72* L_13 = (__this->___header_23);
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		__this->___header_23 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, ((int32_t)11)));
	}

IL_0060:
	{
		Context_t3_88 * L_14 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		if (!((ClientContext_t3_91 *)IsInstClass(L_14, ClientContext_t3_91_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		Context_t3_88 * L_15 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		uint64_t L_16 = Context_get_ReadSequenceNumber_m3_602(L_15, /*hidden argument*/NULL);
		G_B5_0 = L_16;
		goto IL_008b;
	}

IL_0080:
	{
		Context_t3_88 * L_17 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		uint64_t L_18 = Context_get_WriteSequenceNumber_m3_600(L_17, /*hidden argument*/NULL);
		G_B5_0 = L_18;
	}

IL_008b:
	{
		V_2 = G_B5_0;
		ByteU5BU5D_t1_72* L_19 = (__this->___header_23);
		uint64_t L_20 = V_2;
		CipherSuite_Write_m3_507(__this, L_19, 0, L_20, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_21 = (__this->___header_23);
		uint8_t L_22 = ___contentType;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 8);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_21, 8, sizeof(uint8_t))) = (uint8_t)L_22;
		ByteU5BU5D_t1_72* L_23 = (__this->___header_23);
		ByteU5BU5D_t1_72* L_24 = ___fragment;
		NullCheck(L_24);
		CipherSuite_Write_m3_506(__this, L_23, ((int32_t)9), (((int16_t)((int16_t)(((int32_t)((int32_t)(((Array_t *)L_24)->max_length))))))), /*hidden argument*/NULL);
		HashAlgorithm_t1_597 * L_25 = V_0;
		ByteU5BU5D_t1_72* L_26 = (__this->___header_23);
		ByteU5BU5D_t1_72* L_27 = (__this->___header_23);
		NullCheck(L_27);
		ByteU5BU5D_t1_72* L_28 = (__this->___header_23);
		NullCheck(L_25);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_25, L_26, 0, (((int32_t)((int32_t)(((Array_t *)L_27)->max_length)))), L_28, 0);
		HashAlgorithm_t1_597 * L_29 = V_0;
		ByteU5BU5D_t1_72* L_30 = ___fragment;
		ByteU5BU5D_t1_72* L_31 = ___fragment;
		NullCheck(L_31);
		ByteU5BU5D_t1_72* L_32 = ___fragment;
		NullCheck(L_29);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_29, L_30, 0, (((int32_t)((int32_t)(((Array_t *)L_31)->max_length)))), L_32, 0);
		HashAlgorithm_t1_597 * L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_34 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_33);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_33, L_34, 0, 0);
		HashAlgorithm_t1_597 * L_35 = V_0;
		NullCheck(L_35);
		ByteU5BU5D_t1_72* L_36 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_35);
		V_3 = L_36;
		HashAlgorithm_t1_597 * L_37 = V_0;
		NullCheck(L_37);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_37);
		HashAlgorithm_t1_597 * L_38 = V_0;
		ByteU5BU5D_t1_72* L_39 = V_1;
		ByteU5BU5D_t1_72* L_40 = V_1;
		NullCheck(L_40);
		ByteU5BU5D_t1_72* L_41 = V_1;
		NullCheck(L_38);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_38, L_39, 0, (((int32_t)((int32_t)(((Array_t *)L_40)->max_length)))), L_41, 0);
		HashAlgorithm_t1_597 * L_42 = V_0;
		ByteU5BU5D_t1_72* L_43 = (__this->___pad2_22);
		ByteU5BU5D_t1_72* L_44 = (__this->___pad2_22);
		NullCheck(L_44);
		ByteU5BU5D_t1_72* L_45 = (__this->___pad2_22);
		NullCheck(L_42);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_42, L_43, 0, (((int32_t)((int32_t)(((Array_t *)L_44)->max_length)))), L_45, 0);
		HashAlgorithm_t1_597 * L_46 = V_0;
		ByteU5BU5D_t1_72* L_47 = V_3;
		ByteU5BU5D_t1_72* L_48 = V_3;
		NullCheck(L_48);
		ByteU5BU5D_t1_72* L_49 = V_3;
		NullCheck(L_46);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_46, L_47, 0, (((int32_t)((int32_t)(((Array_t *)L_48)->max_length)))), L_49, 0);
		HashAlgorithm_t1_597 * L_50 = V_0;
		ByteU5BU5D_t1_72* L_51 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_50);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_50, L_51, 0, 0);
		HashAlgorithm_t1_597 * L_52 = V_0;
		NullCheck(L_52);
		ByteU5BU5D_t1_72* L_53 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_52);
		return L_53;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern TypeInfo* CipherSuite_t3_87_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t1_72* SslCipherSuite_ComputeClientRecordMAC_m3_753 (SslCipherSuite_t3_113 * __this, uint8_t ___contentType, ByteU5BU5D_t1_72* ___fragment, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		CipherSuite_t3_87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1350);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t1_597 * V_0 = {0};
	ByteU5BU5D_t1_72* V_1 = {0};
	uint64_t V_2 = 0;
	ByteU5BU5D_t1_72* V_3 = {0};
	uint64_t G_B5_0 = 0;
	{
		String_t* L_0 = CipherSuite_get_HashAlgorithmName_m3_491(__this, /*hidden argument*/NULL);
		HashAlgorithm_t1_597 * L_1 = HashAlgorithm_Create_m1_4130(NULL /*static, unused*/, L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		Context_t3_88 * L_2 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		SecurityParameters_t3_99 * L_3 = Context_get_Current_m3_630(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t1_72* L_4 = SecurityParameters_get_ClientWriteMAC_m3_705(L_3, /*hidden argument*/NULL);
		V_1 = L_4;
		HashAlgorithm_t1_597 * L_5 = V_0;
		ByteU5BU5D_t1_72* L_6 = V_1;
		ByteU5BU5D_t1_72* L_7 = V_1;
		NullCheck(L_7);
		ByteU5BU5D_t1_72* L_8 = V_1;
		NullCheck(L_5);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)(((Array_t *)L_7)->max_length)))), L_8, 0);
		HashAlgorithm_t1_597 * L_9 = V_0;
		ByteU5BU5D_t1_72* L_10 = (__this->___pad1_21);
		ByteU5BU5D_t1_72* L_11 = (__this->___pad1_21);
		NullCheck(L_11);
		ByteU5BU5D_t1_72* L_12 = (__this->___pad1_21);
		NullCheck(L_9);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_9, L_10, 0, (((int32_t)((int32_t)(((Array_t *)L_11)->max_length)))), L_12, 0);
		ByteU5BU5D_t1_72* L_13 = (__this->___header_23);
		if (L_13)
		{
			goto IL_0060;
		}
	}
	{
		__this->___header_23 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, ((int32_t)11)));
	}

IL_0060:
	{
		Context_t3_88 * L_14 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		if (!((ClientContext_t3_91 *)IsInstClass(L_14, ClientContext_t3_91_il2cpp_TypeInfo_var)))
		{
			goto IL_0080;
		}
	}
	{
		Context_t3_88 * L_15 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		uint64_t L_16 = Context_get_WriteSequenceNumber_m3_600(L_15, /*hidden argument*/NULL);
		G_B5_0 = L_16;
		goto IL_008b;
	}

IL_0080:
	{
		Context_t3_88 * L_17 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		uint64_t L_18 = Context_get_ReadSequenceNumber_m3_602(L_17, /*hidden argument*/NULL);
		G_B5_0 = L_18;
	}

IL_008b:
	{
		V_2 = G_B5_0;
		ByteU5BU5D_t1_72* L_19 = (__this->___header_23);
		uint64_t L_20 = V_2;
		CipherSuite_Write_m3_507(__this, L_19, 0, L_20, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_21 = (__this->___header_23);
		uint8_t L_22 = ___contentType;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, 8);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_21, 8, sizeof(uint8_t))) = (uint8_t)L_22;
		ByteU5BU5D_t1_72* L_23 = (__this->___header_23);
		ByteU5BU5D_t1_72* L_24 = ___fragment;
		NullCheck(L_24);
		CipherSuite_Write_m3_506(__this, L_23, ((int32_t)9), (((int16_t)((int16_t)(((int32_t)((int32_t)(((Array_t *)L_24)->max_length))))))), /*hidden argument*/NULL);
		HashAlgorithm_t1_597 * L_25 = V_0;
		ByteU5BU5D_t1_72* L_26 = (__this->___header_23);
		ByteU5BU5D_t1_72* L_27 = (__this->___header_23);
		NullCheck(L_27);
		ByteU5BU5D_t1_72* L_28 = (__this->___header_23);
		NullCheck(L_25);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_25, L_26, 0, (((int32_t)((int32_t)(((Array_t *)L_27)->max_length)))), L_28, 0);
		HashAlgorithm_t1_597 * L_29 = V_0;
		ByteU5BU5D_t1_72* L_30 = ___fragment;
		ByteU5BU5D_t1_72* L_31 = ___fragment;
		NullCheck(L_31);
		ByteU5BU5D_t1_72* L_32 = ___fragment;
		NullCheck(L_29);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_29, L_30, 0, (((int32_t)((int32_t)(((Array_t *)L_31)->max_length)))), L_32, 0);
		HashAlgorithm_t1_597 * L_33 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_34 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_33);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_33, L_34, 0, 0);
		HashAlgorithm_t1_597 * L_35 = V_0;
		NullCheck(L_35);
		ByteU5BU5D_t1_72* L_36 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_35);
		V_3 = L_36;
		HashAlgorithm_t1_597 * L_37 = V_0;
		NullCheck(L_37);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_37);
		HashAlgorithm_t1_597 * L_38 = V_0;
		ByteU5BU5D_t1_72* L_39 = V_1;
		ByteU5BU5D_t1_72* L_40 = V_1;
		NullCheck(L_40);
		ByteU5BU5D_t1_72* L_41 = V_1;
		NullCheck(L_38);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_38, L_39, 0, (((int32_t)((int32_t)(((Array_t *)L_40)->max_length)))), L_41, 0);
		HashAlgorithm_t1_597 * L_42 = V_0;
		ByteU5BU5D_t1_72* L_43 = (__this->___pad2_22);
		ByteU5BU5D_t1_72* L_44 = (__this->___pad2_22);
		NullCheck(L_44);
		ByteU5BU5D_t1_72* L_45 = (__this->___pad2_22);
		NullCheck(L_42);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_42, L_43, 0, (((int32_t)((int32_t)(((Array_t *)L_44)->max_length)))), L_45, 0);
		HashAlgorithm_t1_597 * L_46 = V_0;
		ByteU5BU5D_t1_72* L_47 = V_3;
		ByteU5BU5D_t1_72* L_48 = V_3;
		NullCheck(L_48);
		ByteU5BU5D_t1_72* L_49 = V_3;
		NullCheck(L_46);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_46, L_47, 0, (((int32_t)((int32_t)(((Array_t *)L_48)->max_length)))), L_49, 0);
		HashAlgorithm_t1_597 * L_50 = V_0;
		ByteU5BU5D_t1_72* L_51 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_50);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_50, L_51, 0, 0);
		HashAlgorithm_t1_597 * L_52 = V_0;
		NullCheck(L_52);
		ByteU5BU5D_t1_72* L_53 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_52);
		return L_53;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslCipherSuite::ComputeMasterSecret(System.Byte[])
extern TypeInfo* TlsStream_t3_100_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3628;
extern Il2CppCodeGenString* _stringLiteral4432;
extern Il2CppCodeGenString* _stringLiteral4433;
extern "C" void SslCipherSuite_ComputeMasterSecret_m3_754 (SslCipherSuite_t3_113 * __this, ByteU5BU5D_t1_72* ___preMasterSecret, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsStream_t3_100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1352);
		_stringLiteral3628 = il2cpp_codegen_string_literal_from_index(3628);
		_stringLiteral4432 = il2cpp_codegen_string_literal_from_index(4432);
		_stringLiteral4433 = il2cpp_codegen_string_literal_from_index(4433);
		s_Il2CppMethodIntialized = true;
	}
	TlsStream_t3_100 * V_0 = {0};
	{
		TlsStream_t3_100 * L_0 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_868(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		TlsStream_t3_100 * L_1 = V_0;
		ByteU5BU5D_t1_72* L_2 = ___preMasterSecret;
		Context_t3_88 * L_3 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t1_72* L_4 = Context_get_RandomCS_m3_608(L_3, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_5 = SslCipherSuite_prf_m3_756(__this, L_2, _stringLiteral3628, L_4, /*hidden argument*/NULL);
		NullCheck(L_1);
		TlsStream_Write_m3_886(L_1, L_5, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_6 = V_0;
		ByteU5BU5D_t1_72* L_7 = ___preMasterSecret;
		Context_t3_88 * L_8 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_t1_72* L_9 = Context_get_RandomCS_m3_608(L_8, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_10 = SslCipherSuite_prf_m3_756(__this, L_7, _stringLiteral4432, L_9, /*hidden argument*/NULL);
		NullCheck(L_6);
		TlsStream_Write_m3_886(L_6, L_10, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_11 = V_0;
		ByteU5BU5D_t1_72* L_12 = ___preMasterSecret;
		Context_t3_88 * L_13 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		ByteU5BU5D_t1_72* L_14 = Context_get_RandomCS_m3_608(L_13, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_15 = SslCipherSuite_prf_m3_756(__this, L_12, _stringLiteral4433, L_14, /*hidden argument*/NULL);
		NullCheck(L_11);
		TlsStream_Write_m3_886(L_11, L_15, /*hidden argument*/NULL);
		Context_t3_88 * L_16 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_17 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_t1_72* L_18 = TlsStream_ToArray_m3_888(L_17, /*hidden argument*/NULL);
		NullCheck(L_16);
		Context_set_MasterSecret_m3_613(L_16, L_18, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslCipherSuite::ComputeKeys()
extern TypeInfo* TlsStream_t3_100_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* CipherSuite_t3_87_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* ClientSessionCache_t3_95_il2cpp_TypeInfo_var;
extern "C" void SslCipherSuite_ComputeKeys_m3_755 (SslCipherSuite_t3_113 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsStream_t3_100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1352);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		CipherSuite_t3_87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1350);
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		ClientSessionCache_t3_95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1373);
		s_Il2CppMethodIntialized = true;
	}
	TlsStream_t3_100 * V_0 = {0};
	uint16_t V_1 = 0x0;
	int32_t V_2 = 0;
	String_t* V_3 = {0};
	int32_t V_4 = 0;
	ByteU5BU5D_t1_72* V_5 = {0};
	int32_t V_6 = 0;
	TlsStream_t3_100 * V_7 = {0};
	HashAlgorithm_t1_597 * V_8 = {0};
	int32_t V_9 = 0;
	ByteU5BU5D_t1_72* V_10 = {0};
	ByteU5BU5D_t1_72* V_11 = {0};
	ByteU5BU5D_t1_72* V_12 = {0};
	int32_t G_B7_0 = 0;
	{
		TlsStream_t3_100 * L_0 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_868(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		V_1 = ((int32_t)65);
		V_2 = 1;
		goto IL_00a3;
	}

IL_0010:
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_3 = L_1;
		V_4 = 0;
		goto IL_0032;
	}

IL_001e:
	{
		String_t* L_2 = V_3;
		String_t* L_3 = Char_ToString_m1_329((&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_4 = String_Concat_m1_444(NULL /*static, unused*/, L_2, L_3, /*hidden argument*/NULL);
		V_3 = L_4;
		int32_t L_5 = V_4;
		V_4 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_0032:
	{
		int32_t L_6 = V_4;
		int32_t L_7 = V_2;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_001e;
		}
	}
	{
		Context_t3_88 * L_8 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_t1_72* L_9 = Context_get_MasterSecret_m3_612(L_8, /*hidden argument*/NULL);
		String_t* L_10 = V_3;
		NullCheck(L_10);
		String_t* L_11 = String_ToString_m1_434(L_10, /*hidden argument*/NULL);
		Context_t3_88 * L_12 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_13 = Context_get_RandomSC_m3_610(L_12, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_14 = SslCipherSuite_prf_m3_756(__this, L_9, L_11, L_13, /*hidden argument*/NULL);
		V_5 = L_14;
		TlsStream_t3_100 * L_15 = V_0;
		NullCheck(L_15);
		int64_t L_16 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_15);
		ByteU5BU5D_t1_72* L_17 = V_5;
		NullCheck(L_17);
		int32_t L_18 = CipherSuite_get_KeyBlockSize_m3_500(__this, /*hidden argument*/NULL);
		if ((((int64_t)((int64_t)((int64_t)L_16+(int64_t)(((int64_t)((int64_t)(((int32_t)((int32_t)(((Array_t *)L_17)->max_length)))))))))) <= ((int64_t)(((int64_t)((int64_t)L_18))))))
		{
			goto IL_0089;
		}
	}
	{
		int32_t L_19 = CipherSuite_get_KeyBlockSize_m3_500(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_20 = V_0;
		NullCheck(L_20);
		int64_t L_21 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_20);
		G_B7_0 = ((int32_t)((int32_t)L_19-(int32_t)(((int32_t)((int32_t)L_21)))));
		goto IL_008d;
	}

IL_0089:
	{
		ByteU5BU5D_t1_72* L_22 = V_5;
		NullCheck(L_22);
		G_B7_0 = (((int32_t)((int32_t)(((Array_t *)L_22)->max_length))));
	}

IL_008d:
	{
		V_6 = G_B7_0;
		TlsStream_t3_100 * L_23 = V_0;
		ByteU5BU5D_t1_72* L_24 = V_5;
		int32_t L_25 = V_6;
		NullCheck(L_23);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, L_23, L_24, 0, L_25);
		uint16_t L_26 = V_1;
		V_1 = (((int32_t)((uint16_t)((int32_t)((int32_t)L_26+(int32_t)1)))));
		int32_t L_27 = V_2;
		V_2 = ((int32_t)((int32_t)L_27+(int32_t)1));
	}

IL_00a3:
	{
		TlsStream_t3_100 * L_28 = V_0;
		NullCheck(L_28);
		int64_t L_29 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_28);
		int32_t L_30 = CipherSuite_get_KeyBlockSize_m3_500(__this, /*hidden argument*/NULL);
		if ((((int64_t)L_29) < ((int64_t)(((int64_t)((int64_t)L_30))))))
		{
			goto IL_0010;
		}
	}
	{
		TlsStream_t3_100 * L_31 = V_0;
		NullCheck(L_31);
		ByteU5BU5D_t1_72* L_32 = TlsStream_ToArray_m3_888(L_31, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_33 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_869(L_33, L_32, /*hidden argument*/NULL);
		V_7 = L_33;
		Context_t3_88 * L_34 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		SecurityParameters_t3_99 * L_35 = Context_get_Negotiating_m3_631(L_34, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_36 = V_7;
		int32_t L_37 = CipherSuite_get_HashSize_m3_493(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		ByteU5BU5D_t1_72* L_38 = TlsStream_ReadBytes_m3_881(L_36, L_37, /*hidden argument*/NULL);
		NullCheck(L_35);
		SecurityParameters_set_ClientWriteMAC_m3_706(L_35, L_38, /*hidden argument*/NULL);
		Context_t3_88 * L_39 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		SecurityParameters_t3_99 * L_40 = Context_get_Negotiating_m3_631(L_39, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_41 = V_7;
		int32_t L_42 = CipherSuite_get_HashSize_m3_493(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		ByteU5BU5D_t1_72* L_43 = TlsStream_ReadBytes_m3_881(L_41, L_42, /*hidden argument*/NULL);
		NullCheck(L_40);
		SecurityParameters_set_ServerWriteMAC_m3_708(L_40, L_43, /*hidden argument*/NULL);
		Context_t3_88 * L_44 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_45 = V_7;
		uint8_t L_46 = CipherSuite_get_KeyMaterialSize_m3_499(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		ByteU5BU5D_t1_72* L_47 = TlsStream_ReadBytes_m3_881(L_45, L_46, /*hidden argument*/NULL);
		NullCheck(L_44);
		Context_set_ClientWriteKey_m3_615(L_44, L_47, /*hidden argument*/NULL);
		Context_t3_88 * L_48 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_49 = V_7;
		uint8_t L_50 = CipherSuite_get_KeyMaterialSize_m3_499(__this, /*hidden argument*/NULL);
		NullCheck(L_49);
		ByteU5BU5D_t1_72* L_51 = TlsStream_ReadBytes_m3_881(L_49, L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		Context_set_ServerWriteKey_m3_617(L_48, L_51, /*hidden argument*/NULL);
		bool L_52 = CipherSuite_get_IsExportable_m3_498(__this, /*hidden argument*/NULL);
		if (L_52)
		{
			goto IL_019c;
		}
	}
	{
		uint8_t L_53 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		if (!L_53)
		{
			goto IL_0177;
		}
	}
	{
		Context_t3_88 * L_54 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_55 = V_7;
		uint8_t L_56 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		NullCheck(L_55);
		ByteU5BU5D_t1_72* L_57 = TlsStream_ReadBytes_m3_881(L_55, L_56, /*hidden argument*/NULL);
		NullCheck(L_54);
		Context_set_ClientWriteIV_m3_619(L_54, L_57, /*hidden argument*/NULL);
		Context_t3_88 * L_58 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_59 = V_7;
		uint8_t L_60 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		NullCheck(L_59);
		ByteU5BU5D_t1_72* L_61 = TlsStream_ReadBytes_m3_881(L_59, L_60, /*hidden argument*/NULL);
		NullCheck(L_58);
		Context_set_ServerWriteIV_m3_621(L_58, L_61, /*hidden argument*/NULL);
		goto IL_0197;
	}

IL_0177:
	{
		Context_t3_88 * L_62 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_63 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_62);
		Context_set_ClientWriteIV_m3_619(L_62, L_63, /*hidden argument*/NULL);
		Context_t3_88 * L_64 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_65 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_64);
		Context_set_ServerWriteIV_m3_621(L_64, L_65, /*hidden argument*/NULL);
	}

IL_0197:
	{
		goto IL_038b;
	}

IL_019c:
	{
		MD5_t1_607 * L_66 = MD5_Create_m1_4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_8 = L_66;
		HashAlgorithm_t1_597 * L_67 = V_8;
		NullCheck(L_67);
		int32_t L_68 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize() */, L_67);
		V_9 = ((int32_t)((int32_t)L_68>>(int32_t)3));
		int32_t L_69 = V_9;
		V_10 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_69));
		HashAlgorithm_t1_597 * L_70 = V_8;
		Context_t3_88 * L_71 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_71);
		ByteU5BU5D_t1_72* L_72 = Context_get_ClientWriteKey_m3_614(L_71, /*hidden argument*/NULL);
		Context_t3_88 * L_73 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_73);
		ByteU5BU5D_t1_72* L_74 = Context_get_ClientWriteKey_m3_614(L_73, /*hidden argument*/NULL);
		NullCheck(L_74);
		ByteU5BU5D_t1_72* L_75 = V_10;
		NullCheck(L_70);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_70, L_72, 0, (((int32_t)((int32_t)(((Array_t *)L_74)->max_length)))), L_75, 0);
		HashAlgorithm_t1_597 * L_76 = V_8;
		Context_t3_88 * L_77 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_77);
		ByteU5BU5D_t1_72* L_78 = Context_get_RandomCS_m3_608(L_77, /*hidden argument*/NULL);
		Context_t3_88 * L_79 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_79);
		ByteU5BU5D_t1_72* L_80 = Context_get_RandomCS_m3_608(L_79, /*hidden argument*/NULL);
		NullCheck(L_80);
		NullCheck(L_76);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_76, L_78, 0, (((int32_t)((int32_t)(((Array_t *)L_80)->max_length)))));
		uint8_t L_81 = CipherSuite_get_ExpandedKeyMaterialSize_m3_501(__this, /*hidden argument*/NULL);
		V_11 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_81));
		HashAlgorithm_t1_597 * L_82 = V_8;
		NullCheck(L_82);
		ByteU5BU5D_t1_72* L_83 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_82);
		ByteU5BU5D_t1_72* L_84 = V_11;
		uint8_t L_85 = CipherSuite_get_ExpandedKeyMaterialSize_m3_501(__this, /*hidden argument*/NULL);
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_83, 0, (Array_t *)(Array_t *)L_84, 0, L_85, /*hidden argument*/NULL);
		HashAlgorithm_t1_597 * L_86 = V_8;
		NullCheck(L_86);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_86);
		HashAlgorithm_t1_597 * L_87 = V_8;
		Context_t3_88 * L_88 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_88);
		ByteU5BU5D_t1_72* L_89 = Context_get_ServerWriteKey_m3_616(L_88, /*hidden argument*/NULL);
		Context_t3_88 * L_90 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_90);
		ByteU5BU5D_t1_72* L_91 = Context_get_ServerWriteKey_m3_616(L_90, /*hidden argument*/NULL);
		NullCheck(L_91);
		ByteU5BU5D_t1_72* L_92 = V_10;
		NullCheck(L_87);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_87, L_89, 0, (((int32_t)((int32_t)(((Array_t *)L_91)->max_length)))), L_92, 0);
		HashAlgorithm_t1_597 * L_93 = V_8;
		Context_t3_88 * L_94 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_94);
		ByteU5BU5D_t1_72* L_95 = Context_get_RandomSC_m3_610(L_94, /*hidden argument*/NULL);
		Context_t3_88 * L_96 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_96);
		ByteU5BU5D_t1_72* L_97 = Context_get_RandomSC_m3_610(L_96, /*hidden argument*/NULL);
		NullCheck(L_97);
		NullCheck(L_93);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_93, L_95, 0, (((int32_t)((int32_t)(((Array_t *)L_97)->max_length)))));
		uint8_t L_98 = CipherSuite_get_ExpandedKeyMaterialSize_m3_501(__this, /*hidden argument*/NULL);
		V_12 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_98));
		HashAlgorithm_t1_597 * L_99 = V_8;
		NullCheck(L_99);
		ByteU5BU5D_t1_72* L_100 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_99);
		ByteU5BU5D_t1_72* L_101 = V_12;
		uint8_t L_102 = CipherSuite_get_ExpandedKeyMaterialSize_m3_501(__this, /*hidden argument*/NULL);
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_100, 0, (Array_t *)(Array_t *)L_101, 0, L_102, /*hidden argument*/NULL);
		Context_t3_88 * L_103 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_104 = V_11;
		NullCheck(L_103);
		Context_set_ClientWriteKey_m3_615(L_103, L_104, /*hidden argument*/NULL);
		Context_t3_88 * L_105 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_106 = V_12;
		NullCheck(L_105);
		Context_set_ServerWriteKey_m3_617(L_105, L_106, /*hidden argument*/NULL);
		uint8_t L_107 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_107) <= ((int32_t)0)))
		{
			goto IL_036b;
		}
	}
	{
		HashAlgorithm_t1_597 * L_108 = V_8;
		NullCheck(L_108);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_108);
		HashAlgorithm_t1_597 * L_109 = V_8;
		Context_t3_88 * L_110 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_110);
		ByteU5BU5D_t1_72* L_111 = Context_get_RandomCS_m3_608(L_110, /*hidden argument*/NULL);
		Context_t3_88 * L_112 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_112);
		ByteU5BU5D_t1_72* L_113 = Context_get_RandomCS_m3_608(L_112, /*hidden argument*/NULL);
		NullCheck(L_113);
		NullCheck(L_109);
		ByteU5BU5D_t1_72* L_114 = HashAlgorithm_ComputeHash_m1_4129(L_109, L_111, 0, (((int32_t)((int32_t)(((Array_t *)L_113)->max_length)))), /*hidden argument*/NULL);
		V_10 = L_114;
		Context_t3_88 * L_115 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		uint8_t L_116 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		NullCheck(L_115);
		Context_set_ClientWriteIV_m3_619(L_115, ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_116)), /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_117 = V_10;
		Context_t3_88 * L_118 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_118);
		ByteU5BU5D_t1_72* L_119 = Context_get_ClientWriteIV_m3_618(L_118, /*hidden argument*/NULL);
		uint8_t L_120 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_117, 0, (Array_t *)(Array_t *)L_119, 0, L_120, /*hidden argument*/NULL);
		HashAlgorithm_t1_597 * L_121 = V_8;
		NullCheck(L_121);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_121);
		HashAlgorithm_t1_597 * L_122 = V_8;
		Context_t3_88 * L_123 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_123);
		ByteU5BU5D_t1_72* L_124 = Context_get_RandomSC_m3_610(L_123, /*hidden argument*/NULL);
		Context_t3_88 * L_125 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_125);
		ByteU5BU5D_t1_72* L_126 = Context_get_RandomSC_m3_610(L_125, /*hidden argument*/NULL);
		NullCheck(L_126);
		NullCheck(L_122);
		ByteU5BU5D_t1_72* L_127 = HashAlgorithm_ComputeHash_m1_4129(L_122, L_124, 0, (((int32_t)((int32_t)(((Array_t *)L_126)->max_length)))), /*hidden argument*/NULL);
		V_10 = L_127;
		Context_t3_88 * L_128 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		uint8_t L_129 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		NullCheck(L_128);
		Context_set_ServerWriteIV_m3_621(L_128, ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_129)), /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_130 = V_10;
		Context_t3_88 * L_131 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_131);
		ByteU5BU5D_t1_72* L_132 = Context_get_ServerWriteIV_m3_620(L_131, /*hidden argument*/NULL);
		uint8_t L_133 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_130, 0, (Array_t *)(Array_t *)L_132, 0, L_133, /*hidden argument*/NULL);
		goto IL_038b;
	}

IL_036b:
	{
		Context_t3_88 * L_134 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_135 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_134);
		Context_set_ClientWriteIV_m3_619(L_134, L_135, /*hidden argument*/NULL);
		Context_t3_88 * L_136 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_137 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_136);
		Context_set_ServerWriteIV_m3_621(L_136, L_137, /*hidden argument*/NULL);
	}

IL_038b:
	{
		Context_t3_88 * L_138 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ClientSessionCache_t3_95_il2cpp_TypeInfo_var);
		ClientSessionCache_SetContextInCache_m3_572(NULL /*static, unused*/, L_138, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_139 = V_7;
		NullCheck(L_139);
		TlsStream_Reset_m3_887(L_139, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_140 = V_0;
		NullCheck(L_140);
		TlsStream_Reset_m3_887(L_140, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.SslCipherSuite::prf(System.Byte[],System.String,System.Byte[])
extern TypeInfo* TlsStream_t3_100_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t1_227_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t1_72* SslCipherSuite_prf_m3_756 (SslCipherSuite_t3_113 * __this, ByteU5BU5D_t1_72* ___secret, String_t* ___label, ByteU5BU5D_t1_72* ___random, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsStream_t3_100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1352);
		Encoding_t1_227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t1_597 * V_0 = {0};
	HashAlgorithm_t1_597 * V_1 = {0};
	TlsStream_t3_100 * V_2 = {0};
	ByteU5BU5D_t1_72* V_3 = {0};
	ByteU5BU5D_t1_72* V_4 = {0};
	{
		MD5_t1_607 * L_0 = MD5_Create_m1_4156(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_0 = L_0;
		SHA1_t1_627 * L_1 = SHA1_Create_m1_4281(NULL /*static, unused*/, /*hidden argument*/NULL);
		V_1 = L_1;
		TlsStream_t3_100 * L_2 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_868(L_2, /*hidden argument*/NULL);
		V_2 = L_2;
		TlsStream_t3_100 * L_3 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1_227_il2cpp_TypeInfo_var);
		Encoding_t1_227 * L_4 = Encoding_get_ASCII_m1_4644(NULL /*static, unused*/, /*hidden argument*/NULL);
		String_t* L_5 = ___label;
		NullCheck(L_4);
		ByteU5BU5D_t1_72* L_6 = (ByteU5BU5D_t1_72*)VirtFuncInvoker1< ByteU5BU5D_t1_72*, String_t* >::Invoke(10 /* System.Byte[] System.Text.Encoding::GetBytes(System.String) */, L_4, L_5);
		NullCheck(L_3);
		TlsStream_Write_m3_886(L_3, L_6, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_7 = V_2;
		ByteU5BU5D_t1_72* L_8 = ___secret;
		NullCheck(L_7);
		TlsStream_Write_m3_886(L_7, L_8, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_9 = V_2;
		ByteU5BU5D_t1_72* L_10 = ___random;
		NullCheck(L_9);
		TlsStream_Write_m3_886(L_9, L_10, /*hidden argument*/NULL);
		HashAlgorithm_t1_597 * L_11 = V_1;
		TlsStream_t3_100 * L_12 = V_2;
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_13 = TlsStream_ToArray_m3_888(L_12, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_14 = V_2;
		NullCheck(L_14);
		int64_t L_15 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_14);
		NullCheck(L_11);
		ByteU5BU5D_t1_72* L_16 = HashAlgorithm_ComputeHash_m1_4129(L_11, L_13, 0, (((int32_t)((int32_t)L_15))), /*hidden argument*/NULL);
		V_3 = L_16;
		TlsStream_t3_100 * L_17 = V_2;
		NullCheck(L_17);
		TlsStream_Reset_m3_887(L_17, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_18 = V_2;
		ByteU5BU5D_t1_72* L_19 = ___secret;
		NullCheck(L_18);
		TlsStream_Write_m3_886(L_18, L_19, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_20 = V_2;
		ByteU5BU5D_t1_72* L_21 = V_3;
		NullCheck(L_20);
		TlsStream_Write_m3_886(L_20, L_21, /*hidden argument*/NULL);
		HashAlgorithm_t1_597 * L_22 = V_0;
		TlsStream_t3_100 * L_23 = V_2;
		NullCheck(L_23);
		ByteU5BU5D_t1_72* L_24 = TlsStream_ToArray_m3_888(L_23, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_25 = V_2;
		NullCheck(L_25);
		int64_t L_26 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_25);
		NullCheck(L_22);
		ByteU5BU5D_t1_72* L_27 = HashAlgorithm_ComputeHash_m1_4129(L_22, L_24, 0, (((int32_t)((int32_t)L_26))), /*hidden argument*/NULL);
		V_4 = L_27;
		TlsStream_t3_100 * L_28 = V_2;
		NullCheck(L_28);
		TlsStream_Reset_m3_887(L_28, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_29 = V_4;
		return L_29;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::.ctor(System.Byte[])
extern Il2CppCodeGenString* _stringLiteral395;
extern Il2CppCodeGenString* _stringLiteral397;
extern "C" void SslHandshakeHash__ctor_m3_757 (SslHandshakeHash_t3_114 * __this, ByteU5BU5D_t1_72* ___secret, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		_stringLiteral395 = il2cpp_codegen_string_literal_from_index(395);
		_stringLiteral397 = il2cpp_codegen_string_literal_from_index(397);
		s_Il2CppMethodIntialized = true;
	}
	{
		HashAlgorithm__ctor_m1_4124(__this, /*hidden argument*/NULL);
		HashAlgorithm_t1_597 * L_0 = HashAlgorithm_Create_m1_4130(NULL /*static, unused*/, _stringLiteral395, /*hidden argument*/NULL);
		__this->___md5_4 = L_0;
		HashAlgorithm_t1_597 * L_1 = HashAlgorithm_Create_m1_4130(NULL /*static, unused*/, _stringLiteral397, /*hidden argument*/NULL);
		__this->___sha_5 = L_1;
		HashAlgorithm_t1_597 * L_2 = (__this->___md5_4);
		NullCheck(L_2);
		int32_t L_3 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize() */, L_2);
		HashAlgorithm_t1_597 * L_4 = (__this->___sha_5);
		NullCheck(L_4);
		int32_t L_5 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(12 /* System.Int32 System.Security.Cryptography.HashAlgorithm::get_HashSize() */, L_4);
		((HashAlgorithm_t1_597 *)__this)->___HashSizeValue_1 = ((int32_t)((int32_t)L_3+(int32_t)L_5));
		ByteU5BU5D_t1_72* L_6 = ___secret;
		__this->___secret_7 = L_6;
		VirtActionInvoker0::Invoke(13 /* System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize()
extern "C" void SslHandshakeHash_Initialize_m3_758 (SslHandshakeHash_t3_114 * __this, const MethodInfo* method)
{
	{
		HashAlgorithm_t1_597 * L_0 = (__this->___md5_4);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_0);
		HashAlgorithm_t1_597 * L_1 = (__this->___sha_5);
		NullCheck(L_1);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_1);
		SslHandshakeHash_initializePad_m3_763(__this, /*hidden argument*/NULL);
		__this->___hashing_6 = 0;
		return;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::HashFinal()
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t1_72* SslHandshakeHash_HashFinal_m3_759 (SslHandshakeHash_t3_114 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t1_72* V_0 = {0};
	ByteU5BU5D_t1_72* V_1 = {0};
	ByteU5BU5D_t1_72* V_2 = {0};
	{
		bool L_0 = (__this->___hashing_6);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		__this->___hashing_6 = 1;
	}

IL_0012:
	{
		HashAlgorithm_t1_597 * L_1 = (__this->___md5_4);
		ByteU5BU5D_t1_72* L_2 = (__this->___secret_7);
		ByteU5BU5D_t1_72* L_3 = (__this->___secret_7);
		NullCheck(L_3);
		ByteU5BU5D_t1_72* L_4 = (__this->___secret_7);
		NullCheck(L_1);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_1, L_2, 0, (((int32_t)((int32_t)(((Array_t *)L_3)->max_length)))), L_4, 0);
		HashAlgorithm_t1_597 * L_5 = (__this->___md5_4);
		ByteU5BU5D_t1_72* L_6 = (__this->___innerPadMD5_8);
		ByteU5BU5D_t1_72* L_7 = (__this->___innerPadMD5_8);
		NullCheck(L_7);
		NullCheck(L_5);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)(((Array_t *)L_7)->max_length)))));
		HashAlgorithm_t1_597 * L_8 = (__this->___md5_4);
		NullCheck(L_8);
		ByteU5BU5D_t1_72* L_9 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_8);
		V_0 = L_9;
		HashAlgorithm_t1_597 * L_10 = (__this->___md5_4);
		NullCheck(L_10);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_10);
		HashAlgorithm_t1_597 * L_11 = (__this->___md5_4);
		ByteU5BU5D_t1_72* L_12 = (__this->___secret_7);
		ByteU5BU5D_t1_72* L_13 = (__this->___secret_7);
		NullCheck(L_13);
		ByteU5BU5D_t1_72* L_14 = (__this->___secret_7);
		NullCheck(L_11);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_11, L_12, 0, (((int32_t)((int32_t)(((Array_t *)L_13)->max_length)))), L_14, 0);
		HashAlgorithm_t1_597 * L_15 = (__this->___md5_4);
		ByteU5BU5D_t1_72* L_16 = (__this->___outerPadMD5_9);
		ByteU5BU5D_t1_72* L_17 = (__this->___outerPadMD5_9);
		NullCheck(L_17);
		ByteU5BU5D_t1_72* L_18 = (__this->___outerPadMD5_9);
		NullCheck(L_15);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_15, L_16, 0, (((int32_t)((int32_t)(((Array_t *)L_17)->max_length)))), L_18, 0);
		HashAlgorithm_t1_597 * L_19 = (__this->___md5_4);
		ByteU5BU5D_t1_72* L_20 = V_0;
		ByteU5BU5D_t1_72* L_21 = V_0;
		NullCheck(L_21);
		NullCheck(L_19);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_19, L_20, 0, (((int32_t)((int32_t)(((Array_t *)L_21)->max_length)))));
		HashAlgorithm_t1_597 * L_22 = (__this->___sha_5);
		ByteU5BU5D_t1_72* L_23 = (__this->___secret_7);
		ByteU5BU5D_t1_72* L_24 = (__this->___secret_7);
		NullCheck(L_24);
		ByteU5BU5D_t1_72* L_25 = (__this->___secret_7);
		NullCheck(L_22);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_22, L_23, 0, (((int32_t)((int32_t)(((Array_t *)L_24)->max_length)))), L_25, 0);
		HashAlgorithm_t1_597 * L_26 = (__this->___sha_5);
		ByteU5BU5D_t1_72* L_27 = (__this->___innerPadSHA_10);
		ByteU5BU5D_t1_72* L_28 = (__this->___innerPadSHA_10);
		NullCheck(L_28);
		NullCheck(L_26);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, (((int32_t)((int32_t)(((Array_t *)L_28)->max_length)))));
		HashAlgorithm_t1_597 * L_29 = (__this->___sha_5);
		NullCheck(L_29);
		ByteU5BU5D_t1_72* L_30 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_29);
		V_1 = L_30;
		HashAlgorithm_t1_597 * L_31 = (__this->___sha_5);
		NullCheck(L_31);
		VirtActionInvoker0::Invoke(13 /* System.Void System.Security.Cryptography.HashAlgorithm::Initialize() */, L_31);
		HashAlgorithm_t1_597 * L_32 = (__this->___sha_5);
		ByteU5BU5D_t1_72* L_33 = (__this->___secret_7);
		ByteU5BU5D_t1_72* L_34 = (__this->___secret_7);
		NullCheck(L_34);
		ByteU5BU5D_t1_72* L_35 = (__this->___secret_7);
		NullCheck(L_32);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_32, L_33, 0, (((int32_t)((int32_t)(((Array_t *)L_34)->max_length)))), L_35, 0);
		HashAlgorithm_t1_597 * L_36 = (__this->___sha_5);
		ByteU5BU5D_t1_72* L_37 = (__this->___outerPadSHA_11);
		ByteU5BU5D_t1_72* L_38 = (__this->___outerPadSHA_11);
		NullCheck(L_38);
		ByteU5BU5D_t1_72* L_39 = (__this->___outerPadSHA_11);
		NullCheck(L_36);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_36, L_37, 0, (((int32_t)((int32_t)(((Array_t *)L_38)->max_length)))), L_39, 0);
		HashAlgorithm_t1_597 * L_40 = (__this->___sha_5);
		ByteU5BU5D_t1_72* L_41 = V_1;
		ByteU5BU5D_t1_72* L_42 = V_1;
		NullCheck(L_42);
		NullCheck(L_40);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_40, L_41, 0, (((int32_t)((int32_t)(((Array_t *)L_42)->max_length)))));
		VirtActionInvoker0::Invoke(13 /* System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::Initialize() */, __this);
		V_2 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, ((int32_t)36)));
		HashAlgorithm_t1_597 * L_43 = (__this->___md5_4);
		NullCheck(L_43);
		ByteU5BU5D_t1_72* L_44 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_43);
		ByteU5BU5D_t1_72* L_45 = V_2;
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_44, 0, (Array_t *)(Array_t *)L_45, 0, ((int32_t)16), /*hidden argument*/NULL);
		HashAlgorithm_t1_597 * L_46 = (__this->___sha_5);
		NullCheck(L_46);
		ByteU5BU5D_t1_72* L_47 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_46);
		ByteU5BU5D_t1_72* L_48 = V_2;
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_47, 0, (Array_t *)(Array_t *)L_48, ((int32_t)16), ((int32_t)20), /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_49 = V_2;
		return L_49;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::HashCore(System.Byte[],System.Int32,System.Int32)
extern "C" void SslHandshakeHash_HashCore_m3_760 (SslHandshakeHash_t3_114 * __this, ByteU5BU5D_t1_72* ___array, int32_t ___ibStart, int32_t ___cbSize, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___hashing_6);
		if (L_0)
		{
			goto IL_0012;
		}
	}
	{
		__this->___hashing_6 = 1;
	}

IL_0012:
	{
		HashAlgorithm_t1_597 * L_1 = (__this->___md5_4);
		ByteU5BU5D_t1_72* L_2 = ___array;
		int32_t L_3 = ___ibStart;
		int32_t L_4 = ___cbSize;
		ByteU5BU5D_t1_72* L_5 = ___array;
		int32_t L_6 = ___ibStart;
		NullCheck(L_1);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_1, L_2, L_3, L_4, L_5, L_6);
		HashAlgorithm_t1_597 * L_7 = (__this->___sha_5);
		ByteU5BU5D_t1_72* L_8 = ___array;
		int32_t L_9 = ___ibStart;
		int32_t L_10 = ___cbSize;
		ByteU5BU5D_t1_72* L_11 = ___array;
		int32_t L_12 = ___ibStart;
		NullCheck(L_7);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_7, L_8, L_9, L_10, L_11, L_12);
		return;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.SslHandshakeHash::CreateSignature(System.Security.Cryptography.RSA)
extern TypeInfo* CryptographicUnexpectedOperationException_t1_585_il2cpp_TypeInfo_var;
extern TypeInfo* RSASslSignatureFormatter_t3_108_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1620;
extern Il2CppCodeGenString* _stringLiteral4378;
extern "C" ByteU5BU5D_t1_72* SslHandshakeHash_CreateSignature_m3_761 (SslHandshakeHash_t3_114 * __this, RSA_t1_119 * ___rsa, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CryptographicUnexpectedOperationException_t1_585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		RSASslSignatureFormatter_t3_108_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1348);
		_stringLiteral1620 = il2cpp_codegen_string_literal_from_index(1620);
		_stringLiteral4378 = il2cpp_codegen_string_literal_from_index(4378);
		s_Il2CppMethodIntialized = true;
	}
	RSASslSignatureFormatter_t3_108 * V_0 = {0};
	{
		RSA_t1_119 * L_0 = ___rsa;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CryptographicUnexpectedOperationException_t1_585 * L_1 = (CryptographicUnexpectedOperationException_t1_585 *)il2cpp_codegen_object_new (CryptographicUnexpectedOperationException_t1_585_il2cpp_TypeInfo_var);
		CryptographicUnexpectedOperationException__ctor_m1_4036(L_1, _stringLiteral1620, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		RSA_t1_119 * L_2 = ___rsa;
		RSASslSignatureFormatter_t3_108 * L_3 = (RSASslSignatureFormatter_t3_108 *)il2cpp_codegen_object_new (RSASslSignatureFormatter_t3_108_il2cpp_TypeInfo_var);
		RSASslSignatureFormatter__ctor_m3_698(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		RSASslSignatureFormatter_t3_108 * L_4 = V_0;
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RSASslSignatureFormatter::SetHashAlgorithm(System.String) */, L_4, _stringLiteral4378);
		RSASslSignatureFormatter_t3_108 * L_5 = V_0;
		ByteU5BU5D_t1_72* L_6 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, __this);
		NullCheck(L_5);
		ByteU5BU5D_t1_72* L_7 = (ByteU5BU5D_t1_72*)VirtFuncInvoker1< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72* >::Invoke(6 /* System.Byte[] Mono.Security.Protocol.Tls.RSASslSignatureFormatter::CreateSignature(System.Byte[]) */, L_5, L_6);
		return L_7;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslHandshakeHash::VerifySignature(System.Security.Cryptography.RSA,System.Byte[])
extern TypeInfo* CryptographicUnexpectedOperationException_t1_585_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t1_735_il2cpp_TypeInfo_var;
extern TypeInfo* RSASslSignatureDeformatter_t3_107_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1620;
extern Il2CppCodeGenString* _stringLiteral289;
extern Il2CppCodeGenString* _stringLiteral4378;
extern "C" bool SslHandshakeHash_VerifySignature_m3_762 (SslHandshakeHash_t3_114 * __this, RSA_t1_119 * ___rsa, ByteU5BU5D_t1_72* ___rgbSignature, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CryptographicUnexpectedOperationException_t1_585_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(503);
		ArgumentNullException_t1_735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		RSASslSignatureDeformatter_t3_107_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1349);
		_stringLiteral1620 = il2cpp_codegen_string_literal_from_index(1620);
		_stringLiteral289 = il2cpp_codegen_string_literal_from_index(289);
		_stringLiteral4378 = il2cpp_codegen_string_literal_from_index(4378);
		s_Il2CppMethodIntialized = true;
	}
	RSASslSignatureDeformatter_t3_107 * V_0 = {0};
	{
		RSA_t1_119 * L_0 = ___rsa;
		if (L_0)
		{
			goto IL_0011;
		}
	}
	{
		CryptographicUnexpectedOperationException_t1_585 * L_1 = (CryptographicUnexpectedOperationException_t1_585 *)il2cpp_codegen_object_new (CryptographicUnexpectedOperationException_t1_585_il2cpp_TypeInfo_var);
		CryptographicUnexpectedOperationException__ctor_m1_4036(L_1, _stringLiteral1620, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0011:
	{
		ByteU5BU5D_t1_72* L_2 = ___rgbSignature;
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		ArgumentNullException_t1_735 * L_3 = (ArgumentNullException_t1_735 *)il2cpp_codegen_object_new (ArgumentNullException_t1_735_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1_4988(L_3, _stringLiteral289, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0022:
	{
		RSA_t1_119 * L_4 = ___rsa;
		RSASslSignatureDeformatter_t3_107 * L_5 = (RSASslSignatureDeformatter_t3_107 *)il2cpp_codegen_object_new (RSASslSignatureDeformatter_t3_107_il2cpp_TypeInfo_var);
		RSASslSignatureDeformatter__ctor_m3_694(L_5, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		RSASslSignatureDeformatter_t3_107 * L_6 = V_0;
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::SetHashAlgorithm(System.String) */, L_6, _stringLiteral4378);
		RSASslSignatureDeformatter_t3_107 * L_7 = V_0;
		ByteU5BU5D_t1_72* L_8 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, __this);
		ByteU5BU5D_t1_72* L_9 = ___rgbSignature;
		NullCheck(L_7);
		bool L_10 = (bool)VirtFuncInvoker2< bool, ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72* >::Invoke(6 /* System.Boolean Mono.Security.Protocol.Tls.RSASslSignatureDeformatter::VerifySignature(System.Byte[],System.Byte[]) */, L_7, L_8, L_9);
		return L_10;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslHandshakeHash::initializePad()
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern "C" void SslHandshakeHash_initializePad_m3_763 (SslHandshakeHash_t3_114 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		__this->___innerPadMD5_8 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, ((int32_t)48)));
		__this->___outerPadMD5_9 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, ((int32_t)48)));
		V_0 = 0;
		goto IL_0039;
	}

IL_0021:
	{
		ByteU5BU5D_t1_72* L_0 = (__this->___innerPadMD5_8);
		int32_t L_1 = V_0;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, L_1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1, sizeof(uint8_t))) = (uint8_t)((int32_t)54);
		ByteU5BU5D_t1_72* L_2 = (__this->___outerPadMD5_9);
		int32_t L_3 = V_0;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_2, L_3, sizeof(uint8_t))) = (uint8_t)((int32_t)92);
		int32_t L_4 = V_0;
		V_0 = ((int32_t)((int32_t)L_4+(int32_t)1));
	}

IL_0039:
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) < ((int32_t)((int32_t)48))))
		{
			goto IL_0021;
		}
	}
	{
		__this->___innerPadSHA_10 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, ((int32_t)40)));
		__this->___outerPadSHA_11 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, ((int32_t)40)));
		V_1 = 0;
		goto IL_007a;
	}

IL_0062:
	{
		ByteU5BU5D_t1_72* L_6 = (__this->___innerPadSHA_10);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, L_7);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, L_7, sizeof(uint8_t))) = (uint8_t)((int32_t)54);
		ByteU5BU5D_t1_72* L_8 = (__this->___outerPadSHA_11);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, L_9, sizeof(uint8_t))) = (uint8_t)((int32_t)92);
		int32_t L_10 = V_1;
		V_1 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_007a:
	{
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)40))))
		{
			goto IL_0062;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslServerStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean)
extern "C" void SslServerStream__ctor_m3_24 (SslServerStream_t3_10 * __this, Stream_t1_226 * ___stream, X509Certificate_t1_572 * ___serverCertificate, bool ___clientCertificateRequired, bool ___ownsStream, const MethodInfo* method)
{
	{
		Stream_t1_226 * L_0 = ___stream;
		X509Certificate_t1_572 * L_1 = ___serverCertificate;
		bool L_2 = ___clientCertificateRequired;
		bool L_3 = ___ownsStream;
		SslServerStream__ctor_m3_19(__this, L_0, L_1, L_2, L_3, ((int32_t)-1073741824), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslServerStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern "C" void SslServerStream__ctor_m3_19 (SslServerStream_t3_10 * __this, Stream_t1_226 * ___stream, X509Certificate_t1_572 * ___serverCertificate, bool ___clientCertificateRequired, bool ___ownsStream, int32_t ___securityProtocolType, const MethodInfo* method)
{
	{
		Stream_t1_226 * L_0 = ___stream;
		X509Certificate_t1_572 * L_1 = ___serverCertificate;
		bool L_2 = ___clientCertificateRequired;
		bool L_3 = ___ownsStream;
		int32_t L_4 = ___securityProtocolType;
		SslServerStream__ctor_m3_764(__this, L_0, L_1, L_2, 0, L_3, L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslServerStream::.ctor(System.IO.Stream,System.Security.Cryptography.X509Certificates.X509Certificate,System.Boolean,System.Boolean,System.Boolean,Mono.Security.Protocol.Tls.SecurityProtocolType)
extern TypeInfo* SslStreamBase_t3_0_il2cpp_TypeInfo_var;
extern TypeInfo* ServerContext_t3_111_il2cpp_TypeInfo_var;
extern TypeInfo* ServerRecordProtocol_t3_112_il2cpp_TypeInfo_var;
extern "C" void SslServerStream__ctor_m3_764 (SslServerStream_t3_10 * __this, Stream_t1_226 * ___stream, X509Certificate_t1_572 * ___serverCertificate, bool ___clientCertificateRequired, bool ___requestClientCertificate, bool ___ownsStream, int32_t ___securityProtocolType, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SslStreamBase_t3_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1397);
		ServerContext_t3_111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1381);
		ServerRecordProtocol_t3_112_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1399);
		s_Il2CppMethodIntialized = true;
	}
	{
		Stream_t1_226 * L_0 = ___stream;
		bool L_1 = ___ownsStream;
		IL2CPP_RUNTIME_CLASS_INIT(SslStreamBase_t3_0_il2cpp_TypeInfo_var);
		SslStreamBase__ctor_m3_793(__this, L_0, L_1, /*hidden argument*/NULL);
		int32_t L_2 = ___securityProtocolType;
		X509Certificate_t1_572 * L_3 = ___serverCertificate;
		bool L_4 = ___clientCertificateRequired;
		bool L_5 = ___requestClientCertificate;
		ServerContext_t3_111 * L_6 = (ServerContext_t3_111 *)il2cpp_codegen_object_new (ServerContext_t3_111_il2cpp_TypeInfo_var);
		ServerContext__ctor_m3_710(L_6, __this, L_2, L_3, L_4, L_5, /*hidden argument*/NULL);
		((SslStreamBase_t3_0 *)__this)->___context_5 = L_6;
		Stream_t1_226 * L_7 = (((SslStreamBase_t3_0 *)__this)->___innerStream_3);
		Context_t3_88 * L_8 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		ServerRecordProtocol_t3_112 * L_9 = (ServerRecordProtocol_t3_112 *)il2cpp_codegen_object_new (ServerRecordProtocol_t3_112_il2cpp_TypeInfo_var);
		ServerRecordProtocol__ctor_m3_714(L_9, L_7, ((ServerContext_t3_111 *)CastclassClass(L_8, ServerContext_t3_111_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		((SslStreamBase_t3_0 *)__this)->___protocol_6 = L_9;
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslServerStream::get_ClientCertificate()
extern "C" X509Certificate_t1_572 * SslServerStream_get_ClientCertificate_m3_9 (SslServerStream_t3_10 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_0);
		int32_t L_1 = Context_get_HandshakeState_m3_591(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0022;
		}
	}
	{
		Context_t3_88 * L_2 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_2);
		TlsClientSettings_t3_98 * L_3 = Context_get_ClientSettings_m3_588(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509Certificate_t1_572 * L_4 = TlsClientSettings_get_ClientCertificate_m3_841(L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0022:
	{
		return (X509Certificate_t1_572 *)NULL;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslServerStream::set_ClientCertValidationDelegate(Mono.Security.Protocol.Tls.CertificateValidationCallback)
extern "C" void SslServerStream_set_ClientCertValidationDelegate_m3_21 (SslServerStream_t3_10 * __this, CertificateValidationCallback_t3_13 * ___value, const MethodInfo* method)
{
	{
		CertificateValidationCallback_t3_13 * L_0 = ___value;
		__this->___ClientCertValidation_16 = L_0;
		return;
	}
}
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslServerStream::get_PrivateKeyCertSelectionDelegate()
extern "C" PrivateKeySelectionCallback_t3_12 * SslServerStream_get_PrivateKeyCertSelectionDelegate_m3_25 (SslServerStream_t3_10 * __this, const MethodInfo* method)
{
	{
		PrivateKeySelectionCallback_t3_12 * L_0 = (__this->___PrivateKeySelection_17);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslServerStream::set_PrivateKeyCertSelectionDelegate(Mono.Security.Protocol.Tls.PrivateKeySelectionCallback)
extern "C" void SslServerStream_set_PrivateKeyCertSelectionDelegate_m3_20 (SslServerStream_t3_10 * __this, PrivateKeySelectionCallback_t3_12 * ___value, const MethodInfo* method)
{
	{
		PrivateKeySelectionCallback_t3_12 * L_0 = ___value;
		__this->___PrivateKeySelection_17 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslServerStream::Finalize()
extern "C" void SslServerStream_Finalize_m3_765 (SslServerStream_t3_10 * __this, const MethodInfo* method)
{
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(12 /* System.Void Mono.Security.Protocol.Tls.SslServerStream::Dispose(System.Boolean) */, __this, 0);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		SslStreamBase_Finalize_m3_827(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslServerStream::Dispose(System.Boolean)
extern "C" void SslServerStream_Dispose_m3_766 (SslServerStream_t3_10 * __this, bool ___disposing, const MethodInfo* method)
{
	{
		bool L_0 = ___disposing;
		SslStreamBase_Dispose_m3_828(__this, L_0, /*hidden argument*/NULL);
		bool L_1 = ___disposing;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		__this->___ClientCertValidation_16 = (CertificateValidationCallback_t3_13 *)NULL;
		__this->___PrivateKeySelection_17 = (PrivateKeySelectionCallback_t3_12 *)NULL;
	}

IL_001b:
	{
		return;
	}
}
// System.IAsyncResult Mono.Security.Protocol.Tls.SslServerStream::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object)
extern "C" Object_t * SslServerStream_OnBeginNegotiateHandshake_m3_767 (SslServerStream_t3_10 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_0);
		int32_t L_1 = Context_get_HandshakeState_m3_591(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Context_t3_88 * L_2 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_2);
		VirtActionInvoker0::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.Context::Clear() */, L_2);
	}

IL_001b:
	{
		Context_t3_88 * L_3 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		Context_t3_88 * L_4 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_4);
		int32_t L_5 = Context_get_SecurityProtocol_m3_579(L_4, /*hidden argument*/NULL);
		CipherSuiteCollection_t3_89 * L_6 = CipherSuiteFactory_GetSupportedCiphers_m3_543(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		Context_set_SupportedCiphers_m3_598(L_3, L_6, /*hidden argument*/NULL);
		Context_t3_88 * L_7 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_7);
		Context_set_HandshakeState_m3_592(L_7, 1, /*hidden argument*/NULL);
		RecordProtocol_t3_93 * L_8 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		Stream_t1_226 * L_9 = (((SslStreamBase_t3_0 *)__this)->___innerStream_3);
		AsyncCallback_t1_28 * L_10 = ___callback;
		Object_t * L_11 = ___state;
		NullCheck(L_8);
		Object_t * L_12 = RecordProtocol_BeginReceiveRecord_m3_670(L_8, L_9, L_10, L_11, /*hidden argument*/NULL);
		return L_12;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslServerStream::OnNegotiateHandshakeCallback(System.IAsyncResult)
extern TypeInfo* ServerContext_t3_111_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1_161_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4434;
extern Il2CppCodeGenString* _stringLiteral4435;
extern Il2CppCodeGenString* _stringLiteral4436;
extern "C" void SslServerStream_OnNegotiateHandshakeCallback_m3_768 (SslServerStream_t3_10 * __this, Object_t * ___asyncResult, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ServerContext_t3_111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1381);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		Int32U5BU5D_t1_161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		_stringLiteral4434 = il2cpp_codegen_string_literal_from_index(4434);
		_stringLiteral4435 = il2cpp_codegen_string_literal_from_index(4435);
		_stringLiteral4436 = il2cpp_codegen_string_literal_from_index(4436);
		s_Il2CppMethodIntialized = true;
	}
	bool V_0 = false;
	ByteU5BU5D_t1_72* V_1 = {0};
	X509Certificate_t1_572 * V_2 = {0};
	{
		RecordProtocol_t3_93 * L_0 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		Object_t * L_1 = ___asyncResult;
		NullCheck(L_0);
		RecordProtocol_EndReceiveRecord_m3_672(L_0, L_1, /*hidden argument*/NULL);
		Context_t3_88 * L_2 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_2);
		uint8_t L_3 = Context_get_LastHandshakeMsg_m3_589(L_2, /*hidden argument*/NULL);
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_002b;
		}
	}
	{
		RecordProtocol_t3_93 * L_4 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_4);
		RecordProtocol_SendAlert_m3_678(L_4, ((int32_t)10), /*hidden argument*/NULL);
	}

IL_002b:
	{
		RecordProtocol_t3_93 * L_5 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_5);
		VirtActionInvoker1< uint8_t >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType) */, L_5, 2);
		RecordProtocol_t3_93 * L_6 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_6);
		VirtActionInvoker1< uint8_t >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType) */, L_6, ((int32_t)11));
		Context_t3_88 * L_7 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_7);
		SecurityParameters_t3_99 * L_8 = Context_get_Negotiating_m3_631(L_7, /*hidden argument*/NULL);
		NullCheck(L_8);
		CipherSuite_t3_87 * L_9 = SecurityParameters_get_Cipher_m3_703(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10 = CipherSuite_get_IsExportable_m3_498(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_006b;
		}
	}
	{
		RecordProtocol_t3_93 * L_11 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_11);
		VirtActionInvoker1< uint8_t >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType) */, L_11, ((int32_t)12));
	}

IL_006b:
	{
		V_0 = 0;
		Context_t3_88 * L_12 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_12);
		SecurityParameters_t3_99 * L_13 = Context_get_Negotiating_m3_631(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		CipherSuite_t3_87 * L_14 = SecurityParameters_get_Cipher_m3_703(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		bool L_15 = CipherSuite_get_IsExportable_m3_498(L_14, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00b1;
		}
	}
	{
		Context_t3_88 * L_16 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(((ServerContext_t3_111 *)CastclassClass(L_16, ServerContext_t3_111_il2cpp_TypeInfo_var)));
		bool L_17 = ServerContext_get_ClientCertificateRequired_m3_712(((ServerContext_t3_111 *)CastclassClass(L_16, ServerContext_t3_111_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00b1;
		}
	}
	{
		Context_t3_88 * L_18 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(((ServerContext_t3_111 *)CastclassClass(L_18, ServerContext_t3_111_il2cpp_TypeInfo_var)));
		bool L_19 = ServerContext_get_RequestClientCertificate_m3_713(((ServerContext_t3_111 *)CastclassClass(L_18, ServerContext_t3_111_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00c0;
		}
	}

IL_00b1:
	{
		RecordProtocol_t3_93 * L_20 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_20);
		VirtActionInvoker1< uint8_t >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType) */, L_20, ((int32_t)13));
		V_0 = 1;
	}

IL_00c0:
	{
		RecordProtocol_t3_93 * L_21 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_21);
		VirtActionInvoker1< uint8_t >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType) */, L_21, ((int32_t)14));
		goto IL_00ff;
	}

IL_00d2:
	{
		RecordProtocol_t3_93 * L_22 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		Stream_t1_226 * L_23 = (((SslStreamBase_t3_0 *)__this)->___innerStream_3);
		NullCheck(L_22);
		ByteU5BU5D_t1_72* L_24 = RecordProtocol_ReceiveRecord_m3_673(L_22, L_23, /*hidden argument*/NULL);
		V_1 = L_24;
		ByteU5BU5D_t1_72* L_25 = V_1;
		if (!L_25)
		{
			goto IL_00f2;
		}
	}
	{
		ByteU5BU5D_t1_72* L_26 = V_1;
		NullCheck(L_26);
		if ((((int32_t)((int32_t)(((Array_t *)L_26)->max_length)))))
		{
			goto IL_00ff;
		}
	}

IL_00f2:
	{
		TlsException_t3_117 * L_27 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_27, ((int32_t)40), _stringLiteral4434, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_27);
	}

IL_00ff:
	{
		Context_t3_88 * L_28 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_28);
		uint8_t L_29 = Context_get_LastHandshakeMsg_m3_589(L_28, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_29) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_00d2;
		}
	}
	{
		bool L_30 = V_0;
		if (!L_30)
		{
			goto IL_016f;
		}
	}
	{
		Context_t3_88 * L_31 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_31);
		TlsClientSettings_t3_98 * L_32 = Context_get_ClientSettings_m3_588(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		X509Certificate_t1_572 * L_33 = TlsClientSettings_get_ClientCertificate_m3_841(L_32, /*hidden argument*/NULL);
		V_2 = L_33;
		X509Certificate_t1_572 * L_34 = V_2;
		if (L_34)
		{
			goto IL_0150;
		}
	}
	{
		Context_t3_88 * L_35 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(((ServerContext_t3_111 *)CastclassClass(L_35, ServerContext_t3_111_il2cpp_TypeInfo_var)));
		bool L_36 = ServerContext_get_ClientCertificateRequired_m3_712(((ServerContext_t3_111 *)CastclassClass(L_35, ServerContext_t3_111_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (!L_36)
		{
			goto IL_0150;
		}
	}
	{
		TlsException_t3_117 * L_37 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_37, ((int32_t)42), _stringLiteral4435, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_37);
	}

IL_0150:
	{
		X509Certificate_t1_572 * L_38 = V_2;
		bool L_39 = SslServerStream_RaiseClientCertificateValidation_m3_773(__this, L_38, ((Int32U5BU5D_t1_161*)SZArrayNew(Int32U5BU5D_t1_161_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		if (L_39)
		{
			goto IL_016f;
		}
	}
	{
		TlsException_t3_117 * L_40 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_40, ((int32_t)42), _stringLiteral4436, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_40);
	}

IL_016f:
	{
		RecordProtocol_t3_93 * L_41 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_41);
		RecordProtocol_SendChangeCipherSpec_m3_681(L_41, /*hidden argument*/NULL);
		RecordProtocol_t3_93 * L_42 = (((SslStreamBase_t3_0 *)__this)->___protocol_6);
		NullCheck(L_42);
		VirtActionInvoker1< uint8_t >::Invoke(4 /* System.Void Mono.Security.Protocol.Tls.RecordProtocol::SendRecord(Mono.Security.Protocol.Tls.Handshake.HandshakeType) */, L_42, ((int32_t)20));
		Context_t3_88 * L_43 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_43);
		Context_set_HandshakeState_m3_592(L_43, 2, /*hidden argument*/NULL);
		Context_t3_88 * L_44 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_44);
		TlsStream_t3_100 * L_45 = Context_get_HandshakeMessages_m3_599(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		TlsStream_Reset_m3_887(L_45, /*hidden argument*/NULL);
		Context_t3_88 * L_46 = (((SslStreamBase_t3_0 *)__this)->___context_5);
		NullCheck(L_46);
		VirtActionInvoker0::Invoke(5 /* System.Void Mono.Security.Protocol.Tls.Context::ClearKeyInfo() */, L_46);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslServerStream::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern TypeInfo* NotSupportedException_t1_793_il2cpp_TypeInfo_var;
extern "C" X509Certificate_t1_572 * SslServerStream_OnLocalCertificateSelection_m3_769 (SslServerStream_t3_10 * __this, X509CertificateCollection_t2_305 * ___clientCertificates, X509Certificate_t1_572 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___serverRequestedCertificates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t1_793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1_793 * L_0 = (NotSupportedException_t1_793 *)il2cpp_codegen_object_new (NotSupportedException_t1_793_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1_5657(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslServerStream::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslServerStream_OnRemoteCertificateValidation_m3_770 (SslServerStream_t3_10 * __this, X509Certificate_t1_572 * ___certificate, Int32U5BU5D_t1_161* ___errors, const MethodInfo* method)
{
	int32_t G_B5_0 = 0;
	{
		CertificateValidationCallback_t3_13 * L_0 = (__this->___ClientCertValidation_16);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		CertificateValidationCallback_t3_13 * L_1 = (__this->___ClientCertValidation_16);
		X509Certificate_t1_572 * L_2 = ___certificate;
		Int32U5BU5D_t1_161* L_3 = ___errors;
		NullCheck(L_1);
		bool L_4 = CertificateValidationCallback_Invoke_m3_1010(L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		Int32U5BU5D_t1_161* L_5 = ___errors;
		if (!L_5)
		{
			goto IL_0027;
		}
	}
	{
		Int32U5BU5D_t1_161* L_6 = ___errors;
		NullCheck(L_6);
		G_B5_0 = ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_6)->max_length))))) == ((int32_t)0))? 1 : 0);
		goto IL_0028;
	}

IL_0027:
	{
		G_B5_0 = 0;
	}

IL_0028:
	{
		return G_B5_0;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslServerStream::get_HaveRemoteValidation2Callback()
extern "C" bool SslServerStream_get_HaveRemoteValidation2Callback_m3_771 (SslServerStream_t3_10 * __this, const MethodInfo* method)
{
	{
		CertificateValidationCallback2_t3_19 * L_0 = (__this->___ClientCertValidation2_18);
		return ((((int32_t)((((Object_t*)(CertificateValidationCallback2_t3_19 *)L_0) == ((Object_t*)(Object_t *)NULL))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslServerStream::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t3_3 * SslServerStream_OnRemoteCertificateValidation2_m3_772 (SslServerStream_t3_10 * __this, X509CertificateCollection_t3_4 * ___collection, const MethodInfo* method)
{
	CertificateValidationCallback2_t3_19 * V_0 = {0};
	{
		CertificateValidationCallback2_t3_19 * L_0 = (__this->___ClientCertValidation2_18);
		V_0 = L_0;
		CertificateValidationCallback2_t3_19 * L_1 = V_0;
		if (!L_1)
		{
			goto IL_0015;
		}
	}
	{
		CertificateValidationCallback2_t3_19 * L_2 = V_0;
		X509CertificateCollection_t3_4 * L_3 = ___collection;
		NullCheck(L_2);
		ValidationResult_t3_3 * L_4 = CertificateValidationCallback2_Invoke_m3_1013(L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0015:
	{
		return (ValidationResult_t3_3 *)NULL;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslServerStream::RaiseClientCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslServerStream_RaiseClientCertificateValidation_m3_773 (SslServerStream_t3_10 * __this, X509Certificate_t1_572 * ___certificate, Int32U5BU5D_t1_161* ___certificateErrors, const MethodInfo* method)
{
	{
		X509Certificate_t1_572 * L_0 = ___certificate;
		Int32U5BU5D_t1_161* L_1 = ___certificateErrors;
		bool L_2 = SslStreamBase_RaiseRemoteCertificateValidation_m3_799(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslServerStream::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1_575 * SslServerStream_OnLocalPrivateKeySelection_m3_774 (SslServerStream_t3_10 * __this, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost, const MethodInfo* method)
{
	{
		PrivateKeySelectionCallback_t3_12 * L_0 = (__this->___PrivateKeySelection_17);
		if (!L_0)
		{
			goto IL_0019;
		}
	}
	{
		PrivateKeySelectionCallback_t3_12 * L_1 = (__this->___PrivateKeySelection_17);
		X509Certificate_t1_572 * L_2 = ___certificate;
		String_t* L_3 = ___targetHost;
		NullCheck(L_1);
		AsymmetricAlgorithm_t1_575 * L_4 = PrivateKeySelectionCallback_Invoke_m3_1019(L_1, L_2, L_3, /*hidden argument*/NULL);
		return L_4;
	}

IL_0019:
	{
		return (AsymmetricAlgorithm_t1_575 *)NULL;
	}
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslServerStream::RaisePrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1_575 * SslServerStream_RaisePrivateKeySelection_m3_775 (SslServerStream_t3_10 * __this, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost, const MethodInfo* method)
{
	{
		X509Certificate_t1_572 * L_0 = ___certificate;
		String_t* L_1 = ___targetHost;
		AsymmetricAlgorithm_t1_575 * L_2 = SslStreamBase_RaiseLocalPrivateKeySelection_m3_801(__this, L_0, L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::.ctor(System.AsyncCallback,System.Object,System.Byte[],System.Int32,System.Int32,System.Boolean,System.Boolean)
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void InternalAsyncResult__ctor_m3_776 (InternalAsyncResult_t3_115 * __this, AsyncCallback_t1_28 * ___userCallback, Object_t * ___userState, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, bool ___fromWrite, bool ___proceedAfterHandshake, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1_0(L_0, /*hidden argument*/NULL);
		__this->___locker_0 = L_0;
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		AsyncCallback_t1_28 * L_1 = ___userCallback;
		__this->____userCallback_1 = L_1;
		Object_t * L_2 = ___userState;
		__this->____userState_2 = L_2;
		ByteU5BU5D_t1_72* L_3 = ___buffer;
		__this->____buffer_9 = L_3;
		int32_t L_4 = ___offset;
		__this->____offset_10 = L_4;
		int32_t L_5 = ___count;
		__this->____count_11 = L_5;
		bool L_6 = ___fromWrite;
		__this->____fromWrite_7 = L_6;
		bool L_7 = ___proceedAfterHandshake;
		__this->____proceedAfterHandshake_8 = L_7;
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_ProceedAfterHandshake()
extern "C" bool InternalAsyncResult_get_ProceedAfterHandshake_m3_777 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____proceedAfterHandshake_8);
		return L_0;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_FromWrite()
extern "C" bool InternalAsyncResult_get_FromWrite_m3_778 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->____fromWrite_7);
		return L_0;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Buffer()
extern "C" ByteU5BU5D_t1_72* InternalAsyncResult_get_Buffer_m3_779 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	{
		ByteU5BU5D_t1_72* L_0 = (__this->____buffer_9);
		return L_0;
	}
}
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Offset()
extern "C" int32_t InternalAsyncResult_get_Offset_m3_780 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____offset_10);
		return L_0;
	}
}
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_Count()
extern "C" int32_t InternalAsyncResult_get_Count_m3_781 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____count_11);
		return L_0;
	}
}
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_BytesRead()
extern "C" int32_t InternalAsyncResult_get_BytesRead_m3_782 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	{
		int32_t L_0 = (__this->____bytesRead_6);
		return L_0;
	}
}
// System.Object Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncState()
extern "C" Object_t * InternalAsyncResult_get_AsyncState_m3_783 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->____userState_2);
		return L_0;
	}
}
// System.Exception Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncException()
extern "C" Exception_t1_33 * InternalAsyncResult_get_AsyncException_m3_784 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	{
		Exception_t1_33 * L_0 = (__this->____asyncException_3);
		return L_0;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedWithError()
extern "C" bool InternalAsyncResult_get_CompletedWithError_m3_785 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted() */, __this);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		return 0;
	}

IL_000d:
	{
		Exception_t1_33 * L_1 = (__this->____asyncException_3);
		return ((((int32_t)((((Object_t*)(Object_t *)NULL) == ((Object_t*)(Exception_t1_33 *)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle()
extern TypeInfo* ManualResetEvent_t1_248_il2cpp_TypeInfo_var;
extern "C" WaitHandle_t1_454 * InternalAsyncResult_get_AsyncWaitHandle_m3_786 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t1_248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___locker_0);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m1_4831(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			ManualResetEvent_t1_248 * L_2 = (__this->___handle_4);
			if (L_2)
			{
				goto IL_0029;
			}
		}

IL_0018:
		{
			bool L_3 = (__this->___completed_5);
			ManualResetEvent_t1_248 * L_4 = (ManualResetEvent_t1_248 *)il2cpp_codegen_object_new (ManualResetEvent_t1_248_il2cpp_TypeInfo_var);
			ManualResetEvent__ctor_m1_4830(L_4, L_3, /*hidden argument*/NULL);
			__this->___handle_4 = L_4;
		}

IL_0029:
		{
			IL2CPP_LEAVE(0x35, FINALLY_002e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_002e;
	}

FINALLY_002e:
	{ // begin finally (depth: 1)
		Object_t * L_5 = V_0;
		Monitor_Exit_m1_4832(NULL /*static, unused*/, L_5, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(46)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(46)
	{
		IL2CPP_JUMP_TBL(0x35, IL_0035)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_0035:
	{
		ManualResetEvent_t1_248 * L_6 = (__this->___handle_4);
		return L_6;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_CompletedSynchronously()
extern "C" bool InternalAsyncResult_get_CompletedSynchronously_m3_787 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted()
extern "C" bool InternalAsyncResult_get_IsCompleted_m3_788 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	bool V_1 = false;
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___locker_0);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m1_4831(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (__this->___completed_5);
			V_1 = L_2;
			IL2CPP_LEAVE(0x25, FINALLY_001e);
		}

IL_0019:
		{
			; // IL_0019: leave IL_0025
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_001e;
	}

FINALLY_001e:
	{ // begin finally (depth: 1)
		Object_t * L_3 = V_0;
		Monitor_Exit_m1_4832(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(30)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(30)
	{
		IL2CPP_JUMP_TBL(0x25, IL_0025)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_0025:
	{
		bool L_4 = V_1;
		return L_4;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception,System.Int32)
extern "C" void InternalAsyncResult_SetComplete_m3_789 (InternalAsyncResult_t3_115 * __this, Exception_t1_33 * ___ex, int32_t ___bytesRead, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = (__this->___locker_0);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m1_4831(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			bool L_2 = (__this->___completed_5);
			if (!L_2)
			{
				goto IL_001d;
			}
		}

IL_0018:
		{
			IL2CPP_LEAVE(0x6F, FINALLY_004e);
		}

IL_001d:
		{
			__this->___completed_5 = 1;
			Exception_t1_33 * L_3 = ___ex;
			__this->____asyncException_3 = L_3;
			int32_t L_4 = ___bytesRead;
			__this->____bytesRead_6 = L_4;
			ManualResetEvent_t1_248 * L_5 = (__this->___handle_4);
			if (!L_5)
			{
				goto IL_0049;
			}
		}

IL_003d:
		{
			ManualResetEvent_t1_248 * L_6 = (__this->___handle_4);
			NullCheck(L_6);
			EventWaitHandle_Set_m1_4819(L_6, /*hidden argument*/NULL);
		}

IL_0049:
		{
			IL2CPP_LEAVE(0x55, FINALLY_004e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_004e;
	}

FINALLY_004e:
	{ // begin finally (depth: 1)
		Object_t * L_7 = V_0;
		Monitor_Exit_m1_4832(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(78)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(78)
	{
		IL2CPP_JUMP_TBL(0x6F, IL_006f)
		IL2CPP_JUMP_TBL(0x55, IL_0055)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_0055:
	{
		AsyncCallback_t1_28 * L_8 = (__this->____userCallback_1);
		if (!L_8)
		{
			goto IL_006f;
		}
	}
	{
		AsyncCallback_t1_28 * L_9 = (__this->____userCallback_1);
		NullCheck(L_9);
		AsyncCallback_BeginInvoke_m1_1019(L_9, __this, (AsyncCallback_t1_28 *)NULL, NULL, /*hidden argument*/NULL);
	}

IL_006f:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Exception)
extern "C" void InternalAsyncResult_SetComplete_m3_790 (InternalAsyncResult_t3_115 * __this, Exception_t1_33 * ___ex, const MethodInfo* method)
{
	{
		Exception_t1_33 * L_0 = ___ex;
		InternalAsyncResult_SetComplete_m3_789(__this, L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete(System.Int32)
extern "C" void InternalAsyncResult_SetComplete_m3_791 (InternalAsyncResult_t3_115 * __this, int32_t ___bytesRead, const MethodInfo* method)
{
	{
		int32_t L_0 = ___bytesRead;
		InternalAsyncResult_SetComplete_m3_789(__this, (Exception_t1_33 *)NULL, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::SetComplete()
extern "C" void InternalAsyncResult_SetComplete_m3_792 (InternalAsyncResult_t3_115 * __this, const MethodInfo* method)
{
	{
		InternalAsyncResult_SetComplete_m3_789(__this, (Exception_t1_33 *)NULL, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.ctor(System.IO.Stream,System.Boolean)
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t1_250_il2cpp_TypeInfo_var;
extern TypeInfo* Stream_t1_226_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t1_735_il2cpp_TypeInfo_var;
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* ManualResetEvent_t1_248_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4437;
extern Il2CppCodeGenString* _stringLiteral4438;
extern "C" void SslStreamBase__ctor_m3_793 (SslStreamBase_t3_0 * __this, Stream_t1_226 * ___stream, bool ___ownsStream, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		MemoryStream_t1_250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		Stream_t1_226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		ArgumentNullException_t1_735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		ManualResetEvent_t1_248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		_stringLiteral4437 = il2cpp_codegen_string_literal_from_index(4437);
		_stringLiteral4438 = il2cpp_codegen_string_literal_from_index(4438);
		s_Il2CppMethodIntialized = true;
	}
	{
		__this->___recbuf_14 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, ((int32_t)16384)));
		MemoryStream_t1_250 * L_0 = (MemoryStream_t1_250 *)il2cpp_codegen_object_new (MemoryStream_t1_250_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1_2347(L_0, /*hidden argument*/NULL);
		__this->___recordStream_15 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1_226_il2cpp_TypeInfo_var);
		Stream__ctor_m1_2419(__this, /*hidden argument*/NULL);
		Stream_t1_226 * L_1 = ___stream;
		if (L_1)
		{
			goto IL_0032;
		}
	}
	{
		ArgumentNullException_t1_735 * L_2 = (ArgumentNullException_t1_735 *)il2cpp_codegen_object_new (ArgumentNullException_t1_735_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1_4988(L_2, _stringLiteral4437, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_0032:
	{
		Stream_t1_226 * L_3 = ___stream;
		NullCheck(L_3);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1_226_il2cpp_TypeInfo_var);
		bool L_4 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_3);
		if (!L_4)
		{
			goto IL_0048;
		}
	}
	{
		Stream_t1_226 * L_5 = ___stream;
		NullCheck(L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1_226_il2cpp_TypeInfo_var);
		bool L_6 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_5);
		if (L_6)
		{
			goto IL_0053;
		}
	}

IL_0048:
	{
		ArgumentNullException_t1_735 * L_7 = (ArgumentNullException_t1_735 *)il2cpp_codegen_object_new (ArgumentNullException_t1_735_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1_4988(L_7, _stringLiteral4438, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0053:
	{
		MemoryStream_t1_250 * L_8 = (MemoryStream_t1_250 *)il2cpp_codegen_object_new (MemoryStream_t1_250_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1_2347(L_8, /*hidden argument*/NULL);
		__this->___inputBuffer_4 = L_8;
		Stream_t1_226 * L_9 = ___stream;
		__this->___innerStream_3 = L_9;
		bool L_10 = ___ownsStream;
		__this->___ownsStream_7 = L_10;
		Object_t * L_11 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1_0(L_11, /*hidden argument*/NULL);
		__this->___negotiate_10 = L_11;
		Object_t * L_12 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1_0(L_12, /*hidden argument*/NULL);
		__this->___read_11 = L_12;
		Object_t * L_13 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1_0(L_13, /*hidden argument*/NULL);
		__this->___write_12 = L_13;
		ManualResetEvent_t1_248 * L_14 = (ManualResetEvent_t1_248 *)il2cpp_codegen_object_new (ManualResetEvent_t1_248_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m1_4830(L_14, 0, /*hidden argument*/NULL);
		__this->___negotiationComplete_13 = L_14;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::.cctor()
extern TypeInfo* ManualResetEvent_t1_248_il2cpp_TypeInfo_var;
extern TypeInfo* SslStreamBase_t3_0_il2cpp_TypeInfo_var;
extern "C" void SslStreamBase__cctor_m3_794 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ManualResetEvent_t1_248_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(246);
		SslStreamBase_t3_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1397);
		s_Il2CppMethodIntialized = true;
	}
	{
		ManualResetEvent_t1_248 * L_0 = (ManualResetEvent_t1_248 *)il2cpp_codegen_object_new (ManualResetEvent_t1_248_il2cpp_TypeInfo_var);
		ManualResetEvent__ctor_m1_4830(L_0, 1, /*hidden argument*/NULL);
		((SslStreamBase_t3_0_StaticFields*)SslStreamBase_t3_0_il2cpp_TypeInfo_var->static_fields)->___record_processing_2 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::AsyncHandshakeCallback(System.IAsyncResult)
extern TypeInfo* IAsyncResult_t1_27_il2cpp_TypeInfo_var;
extern TypeInfo* InternalAsyncResult_t3_115_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t1_33_il2cpp_TypeInfo_var;
extern TypeInfo* IOException_t1_233_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4379;
extern "C" void SslStreamBase_AsyncHandshakeCallback_m3_795 (SslStreamBase_t3_0 * __this, Object_t * ___asyncResult, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAsyncResult_t1_27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1035);
		InternalAsyncResult_t3_115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1400);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		Exception_t1_33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IOException_t1_233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		_stringLiteral4379 = il2cpp_codegen_string_literal_from_index(4379);
		s_Il2CppMethodIntialized = true;
	}
	InternalAsyncResult_t3_115 * V_0 = {0};
	TlsException_t3_117 * V_1 = {0};
	Exception_t1_33 * V_2 = {0};
	Exception_t1_33 * V_3 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Object_t * L_0 = ___asyncResult;
		NullCheck(L_0);
		Object_t * L_1 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t1_27_il2cpp_TypeInfo_var, L_0);
		V_0 = ((InternalAsyncResult_t3_115 *)IsInstClass(L_1, InternalAsyncResult_t3_115_il2cpp_TypeInfo_var));
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			Object_t * L_2 = ___asyncResult;
			VirtActionInvoker1< Object_t * >::Invoke(30 /* System.Void Mono.Security.Protocol.Tls.SslStreamBase::OnNegotiateHandshakeCallback(System.IAsyncResult) */, __this, L_2);
			goto IL_005a;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t1_33 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (TlsException_t3_117_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0018;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t1_33_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_003b;
			throw e;
		}

CATCH_0018:
		{ // begin catch(Mono.Security.Protocol.Tls.TlsException)
			{
				V_1 = ((TlsException_t3_117 *)__exception_local);
				RecordProtocol_t3_93 * L_3 = (__this->___protocol_6);
				TlsException_t3_117 * L_4 = V_1;
				NullCheck(L_4);
				Alert_t3_85 * L_5 = TlsException_get_Alert_m3_851(L_4, /*hidden argument*/NULL);
				NullCheck(L_3);
				RecordProtocol_SendAlert_m3_680(L_3, L_5, /*hidden argument*/NULL);
				TlsException_t3_117 * L_6 = V_1;
				IOException_t1_233 * L_7 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
				IOException__ctor_m1_2344(L_7, _stringLiteral4379, L_6, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
			}

IL_0036:
			{
				goto IL_005a;
			}
		} // end catch (depth: 2)

CATCH_003b:
		{ // begin catch(System.Exception)
			{
				V_2 = ((Exception_t1_33 *)__exception_local);
				RecordProtocol_t3_93 * L_8 = (__this->___protocol_6);
				NullCheck(L_8);
				RecordProtocol_SendAlert_m3_678(L_8, ((int32_t)80), /*hidden argument*/NULL);
				Exception_t1_33 * L_9 = V_2;
				IOException_t1_233 * L_10 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
				IOException__ctor_m1_2344(L_10, _stringLiteral4379, L_9, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_10);
			}

IL_0055:
			{
				goto IL_005a;
			}
		} // end catch (depth: 2)

IL_005a:
		{
			InternalAsyncResult_t3_115 * L_11 = V_0;
			NullCheck(L_11);
			bool L_12 = InternalAsyncResult_get_ProceedAfterHandshake_m3_777(L_11, /*hidden argument*/NULL);
			if (!L_12)
			{
				goto IL_0094;
			}
		}

IL_0065:
		{
			InternalAsyncResult_t3_115 * L_13 = V_0;
			NullCheck(L_13);
			bool L_14 = InternalAsyncResult_get_FromWrite_m3_778(L_13, /*hidden argument*/NULL);
			if (!L_14)
			{
				goto IL_007c;
			}
		}

IL_0070:
		{
			InternalAsyncResult_t3_115 * L_15 = V_0;
			SslStreamBase_InternalBeginWrite_m3_808(__this, L_15, /*hidden argument*/NULL);
			goto IL_0083;
		}

IL_007c:
		{
			InternalAsyncResult_t3_115 * L_16 = V_0;
			SslStreamBase_InternalBeginRead_m3_806(__this, L_16, /*hidden argument*/NULL);
		}

IL_0083:
		{
			ManualResetEvent_t1_248 * L_17 = (__this->___negotiationComplete_13);
			NullCheck(L_17);
			EventWaitHandle_Set_m1_4819(L_17, /*hidden argument*/NULL);
			goto IL_00a6;
		}

IL_0094:
		{
			ManualResetEvent_t1_248 * L_18 = (__this->___negotiationComplete_13);
			NullCheck(L_18);
			EventWaitHandle_Set_m1_4819(L_18, /*hidden argument*/NULL);
			InternalAsyncResult_t3_115 * L_19 = V_0;
			NullCheck(L_19);
			InternalAsyncResult_SetComplete_m3_792(L_19, /*hidden argument*/NULL);
		}

IL_00a6:
		{
			goto IL_00c4;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1_33 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1_33_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_00ab;
		throw e;
	}

CATCH_00ab:
	{ // begin catch(System.Exception)
		V_3 = ((Exception_t1_33 *)__exception_local);
		ManualResetEvent_t1_248 * L_20 = (__this->___negotiationComplete_13);
		NullCheck(L_20);
		EventWaitHandle_Set_m1_4819(L_20, /*hidden argument*/NULL);
		InternalAsyncResult_t3_115 * L_21 = V_0;
		Exception_t1_33 * L_22 = V_3;
		NullCheck(L_21);
		InternalAsyncResult_SetComplete_m3_790(L_21, L_22, /*hidden argument*/NULL);
		goto IL_00c4;
	} // end catch (depth: 1)

IL_00c4:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_MightNeedHandshake()
extern "C" bool SslStreamBase_get_MightNeedHandshake_m3_796 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	Object_t * V_0 = {0};
	bool V_1 = false;
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Context_t3_88 * L_0 = (__this->___context_5);
		NullCheck(L_0);
		int32_t L_1 = Context_get_HandshakeState_m3_591(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		Object_t * L_2 = (__this->___negotiate_10);
		V_0 = L_2;
		Object_t * L_3 = V_0;
		Monitor_Enter_m1_4831(NULL /*static, unused*/, L_3, /*hidden argument*/NULL);
	}

IL_0020:
	try
	{ // begin try (depth: 1)
		{
			Context_t3_88 * L_4 = (__this->___context_5);
			NullCheck(L_4);
			int32_t L_5 = Context_get_HandshakeState_m3_591(L_4, /*hidden argument*/NULL);
			V_1 = ((((int32_t)((((int32_t)L_5) == ((int32_t)2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
			IL2CPP_LEAVE(0x43, FINALLY_003c);
		}

IL_0037:
		{
			; // IL_0037: leave IL_0043
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_003c;
	}

FINALLY_003c:
	{ // begin finally (depth: 1)
		Object_t * L_6 = V_0;
		Monitor_Exit_m1_4832(NULL /*static, unused*/, L_6, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(60)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(60)
	{
		IL2CPP_JUMP_TBL(0x43, IL_0043)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_0043:
	{
		bool L_7 = V_1;
		return L_7;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::NegotiateHandshake()
extern TypeInfo* InternalAsyncResult_t3_115_il2cpp_TypeInfo_var;
extern "C" void SslStreamBase_NegotiateHandshake_m3_797 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalAsyncResult_t3_115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1400);
		s_Il2CppMethodIntialized = true;
	}
	InternalAsyncResult_t3_115 * V_0 = {0};
	{
		bool L_0 = SslStreamBase_get_MightNeedHandshake_m3_796(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_003c;
		}
	}
	{
		InternalAsyncResult_t3_115 * L_1 = (InternalAsyncResult_t3_115 *)il2cpp_codegen_object_new (InternalAsyncResult_t3_115_il2cpp_TypeInfo_var);
		InternalAsyncResult__ctor_m3_776(L_1, (AsyncCallback_t1_28 *)NULL, NULL, (ByteU5BU5D_t1_72*)(ByteU5BU5D_t1_72*)NULL, 0, 0, 0, 0, /*hidden argument*/NULL);
		V_0 = L_1;
		InternalAsyncResult_t3_115 * L_2 = V_0;
		bool L_3 = SslStreamBase_BeginNegotiateHandshake_m3_803(__this, L_2, /*hidden argument*/NULL);
		if (L_3)
		{
			goto IL_0035;
		}
	}
	{
		ManualResetEvent_t1_248 * L_4 = (__this->___negotiationComplete_13);
		NullCheck(L_4);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_4);
		goto IL_003c;
	}

IL_0035:
	{
		InternalAsyncResult_t3_115 * L_5 = V_0;
		SslStreamBase_EndNegotiateHandshake_m3_804(__this, L_5, /*hidden argument*/NULL);
	}

IL_003c:
	{
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1_572 * SslStreamBase_RaiseLocalCertificateSelection_m3_798 (SslStreamBase_t3_0 * __this, X509CertificateCollection_t2_305 * ___certificates, X509Certificate_t1_572 * ___remoteCertificate, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___requestedCertificates, const MethodInfo* method)
{
	{
		X509CertificateCollection_t2_305 * L_0 = ___certificates;
		X509Certificate_t1_572 * L_1 = ___remoteCertificate;
		String_t* L_2 = ___targetHost;
		X509CertificateCollection_t2_305 * L_3 = ___requestedCertificates;
		X509Certificate_t1_572 * L_4 = (X509Certificate_t1_572 *)VirtFuncInvoker4< X509Certificate_t1_572 *, X509CertificateCollection_t2_305 *, X509Certificate_t1_572 *, String_t*, X509CertificateCollection_t2_305 * >::Invoke(31 /* System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::OnLocalCertificateSelection(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection) */, __this, L_0, L_1, L_2, L_3);
		return L_4;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool SslStreamBase_RaiseRemoteCertificateValidation_m3_799 (SslStreamBase_t3_0 * __this, X509Certificate_t1_572 * ___certificate, Int32U5BU5D_t1_161* ___errors, const MethodInfo* method)
{
	{
		X509Certificate_t1_572 * L_0 = ___certificate;
		Int32U5BU5D_t1_161* L_1 = ___errors;
		bool L_2 = (bool)VirtFuncInvoker2< bool, X509Certificate_t1_572 *, Int32U5BU5D_t1_161* >::Invoke(32 /* System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::OnRemoteCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[]) */, __this, L_0, L_1);
		return L_2;
	}
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::RaiseRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t3_3 * SslStreamBase_RaiseRemoteCertificateValidation2_m3_800 (SslStreamBase_t3_0 * __this, X509CertificateCollection_t3_4 * ___collection, const MethodInfo* method)
{
	{
		X509CertificateCollection_t3_4 * L_0 = ___collection;
		ValidationResult_t3_3 * L_1 = (ValidationResult_t3_3 *)VirtFuncInvoker1< ValidationResult_t3_3 *, X509CertificateCollection_t3_4 * >::Invoke(33 /* Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslStreamBase::OnRemoteCertificateValidation2(Mono.Security.X509.X509CertificateCollection) */, __this, L_0);
		return L_1;
	}
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::RaiseLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1_575 * SslStreamBase_RaiseLocalPrivateKeySelection_m3_801 (SslStreamBase_t3_0 * __this, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost, const MethodInfo* method)
{
	{
		X509Certificate_t1_572 * L_0 = ___certificate;
		String_t* L_1 = ___targetHost;
		AsymmetricAlgorithm_t1_575 * L_2 = (AsymmetricAlgorithm_t1_575 *)VirtFuncInvoker2< AsymmetricAlgorithm_t1_575 *, X509Certificate_t1_572 *, String_t* >::Invoke(35 /* System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.SslStreamBase::OnLocalPrivateKeySelection(System.Security.Cryptography.X509Certificates.X509Certificate,System.String) */, __this, L_0, L_1);
		return L_2;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CheckCertRevocationStatus()
extern "C" bool SslStreamBase_get_CheckCertRevocationStatus_m3_0 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___checkCertRevocationStatus_9);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_CheckCertRevocationStatus(System.Boolean)
extern "C" void SslStreamBase_set_CheckCertRevocationStatus_m3_12 (SslStreamBase_t3_0 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___checkCertRevocationStatus_9 = L_0;
		return;
	}
}
// Mono.Security.Protocol.Tls.CipherAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_CipherAlgorithm()
extern "C" int32_t SslStreamBase_get_CipherAlgorithm_m3_1 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (__this->___context_5);
		NullCheck(L_0);
		int32_t L_1 = Context_get_HandshakeState_m3_591(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0027;
		}
	}
	{
		Context_t3_88 * L_2 = (__this->___context_5);
		NullCheck(L_2);
		SecurityParameters_t3_99 * L_3 = Context_get_Current_m3_630(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		CipherSuite_t3_87 * L_4 = SecurityParameters_get_Cipher_m3_703(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = CipherSuite_get_CipherAlgorithmType_m3_490(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return (int32_t)(1);
	}
}
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_CipherStrength()
extern "C" int32_t SslStreamBase_get_CipherStrength_m3_2 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (__this->___context_5);
		NullCheck(L_0);
		int32_t L_1 = Context_get_HandshakeState_m3_591(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0027;
		}
	}
	{
		Context_t3_88 * L_2 = (__this->___context_5);
		NullCheck(L_2);
		SecurityParameters_t3_99 * L_3 = Context_get_Current_m3_630(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		CipherSuite_t3_87 * L_4 = SecurityParameters_get_Cipher_m3_703(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int16_t L_5 = CipherSuite_get_EffectiveKeyBits_m3_502(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return 0;
	}
}
// Mono.Security.Protocol.Tls.HashAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_HashAlgorithm()
extern "C" int32_t SslStreamBase_get_HashAlgorithm_m3_3 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (__this->___context_5);
		NullCheck(L_0);
		int32_t L_1 = Context_get_HandshakeState_m3_591(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0027;
		}
	}
	{
		Context_t3_88 * L_2 = (__this->___context_5);
		NullCheck(L_2);
		SecurityParameters_t3_99 * L_3 = Context_get_Current_m3_630(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		CipherSuite_t3_87 * L_4 = SecurityParameters_get_Cipher_m3_703(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = CipherSuite_get_HashAlgorithmType_m3_492(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return (int32_t)(1);
	}
}
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_HashStrength()
extern "C" int32_t SslStreamBase_get_HashStrength_m3_4 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (__this->___context_5);
		NullCheck(L_0);
		int32_t L_1 = Context_get_HandshakeState_m3_591(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0029;
		}
	}
	{
		Context_t3_88 * L_2 = (__this->___context_5);
		NullCheck(L_2);
		SecurityParameters_t3_99 * L_3 = Context_get_Current_m3_630(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		CipherSuite_t3_87 * L_4 = SecurityParameters_get_Cipher_m3_703(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = CipherSuite_get_HashSize_m3_493(L_4, /*hidden argument*/NULL);
		return ((int32_t)((int32_t)L_5*(int32_t)8));
	}

IL_0029:
	{
		return 0;
	}
}
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeStrength()
extern "C" int32_t SslStreamBase_get_KeyExchangeStrength_m3_6 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (__this->___context_5);
		NullCheck(L_0);
		int32_t L_1 = Context_get_HandshakeState_m3_591(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0032;
		}
	}
	{
		Context_t3_88 * L_2 = (__this->___context_5);
		NullCheck(L_2);
		TlsServerSettings_t3_97 * L_3 = Context_get_ServerSettings_m3_587(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509CertificateCollection_t3_4 * L_4 = TlsServerSettings_get_Certificates_m3_855(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		X509Certificate_t3_1 * L_5 = X509CertificateCollection_get_Item_m3_26(L_4, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		RSA_t1_119 * L_6 = (RSA_t1_119 *)VirtFuncInvoker0< RSA_t1_119 * >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_5);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::get_KeySize() */, L_6);
		return L_7;
	}

IL_0032:
	{
		return 0;
	}
}
// Mono.Security.Protocol.Tls.ExchangeAlgorithmType Mono.Security.Protocol.Tls.SslStreamBase::get_KeyExchangeAlgorithm()
extern "C" int32_t SslStreamBase_get_KeyExchangeAlgorithm_m3_5 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (__this->___context_5);
		NullCheck(L_0);
		int32_t L_1 = Context_get_HandshakeState_m3_591(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0027;
		}
	}
	{
		Context_t3_88 * L_2 = (__this->___context_5);
		NullCheck(L_2);
		SecurityParameters_t3_99 * L_3 = Context_get_Current_m3_630(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		CipherSuite_t3_87 * L_4 = SecurityParameters_get_Cipher_m3_703(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = CipherSuite_get_ExchangeAlgorithmType_m3_494(L_4, /*hidden argument*/NULL);
		return L_5;
	}

IL_0027:
	{
		return (int32_t)(2);
	}
}
// Mono.Security.Protocol.Tls.SecurityProtocolType Mono.Security.Protocol.Tls.SslStreamBase::get_SecurityProtocol()
extern "C" int32_t SslStreamBase_get_SecurityProtocol_m3_10 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (__this->___context_5);
		NullCheck(L_0);
		int32_t L_1 = Context_get_HandshakeState_m3_591(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_001d;
		}
	}
	{
		Context_t3_88 * L_2 = (__this->___context_5);
		NullCheck(L_2);
		int32_t L_3 = Context_get_SecurityProtocol_m3_579(L_2, /*hidden argument*/NULL);
		return L_3;
	}

IL_001d:
	{
		return (int32_t)(0);
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificate()
extern TypeInfo* X509Certificate_t1_572_il2cpp_TypeInfo_var;
extern "C" X509Certificate_t1_572 * SslStreamBase_get_ServerCertificate_m3_7 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		X509Certificate_t1_572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	{
		Context_t3_88 * L_0 = (__this->___context_5);
		NullCheck(L_0);
		int32_t L_1 = Context_get_HandshakeState_m3_591(L_0, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_1) == ((uint32_t)2))))
		{
			goto IL_0062;
		}
	}
	{
		Context_t3_88 * L_2 = (__this->___context_5);
		NullCheck(L_2);
		TlsServerSettings_t3_97 * L_3 = Context_get_ServerSettings_m3_587(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509CertificateCollection_t3_4 * L_4 = TlsServerSettings_get_Certificates_m3_855(L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0062;
		}
	}
	{
		Context_t3_88 * L_5 = (__this->___context_5);
		NullCheck(L_5);
		TlsServerSettings_t3_97 * L_6 = Context_get_ServerSettings_m3_587(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		X509CertificateCollection_t3_4 * L_7 = TlsServerSettings_get_Certificates_m3_855(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_7);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0062;
		}
	}
	{
		Context_t3_88 * L_9 = (__this->___context_5);
		NullCheck(L_9);
		TlsServerSettings_t3_97 * L_10 = Context_get_ServerSettings_m3_587(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		X509CertificateCollection_t3_4 * L_11 = TlsServerSettings_get_Certificates_m3_855(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		X509Certificate_t3_1 * L_12 = X509CertificateCollection_get_Item_m3_26(L_11, 0, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_13 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_12);
		X509Certificate_t1_572 * L_14 = (X509Certificate_t1_572 *)il2cpp_codegen_object_new (X509Certificate_t1_572_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m1_3979(L_14, L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_0062:
	{
		return (X509Certificate_t1_572 *)NULL;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.SslStreamBase::get_ServerCertificates()
extern "C" X509CertificateCollection_t3_4 * SslStreamBase_get_ServerCertificates_m3_802 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (__this->___context_5);
		NullCheck(L_0);
		TlsServerSettings_t3_97 * L_1 = Context_get_ServerSettings_m3_587(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		X509CertificateCollection_t3_4 * L_2 = TlsServerSettings_get_Certificates_m3_855(L_1, /*hidden argument*/NULL);
		return L_2;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::BeginNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern TypeInfo* AsyncCallback_t1_28_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t1_33_il2cpp_TypeInfo_var;
extern TypeInfo* IOException_t1_233_il2cpp_TypeInfo_var;
extern const MethodInfo* SslStreamBase_AsyncHandshakeCallback_m3_795_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4379;
extern "C" bool SslStreamBase_BeginNegotiateHandshake_m3_803 (SslStreamBase_t3_0 * __this, InternalAsyncResult_t3_115 * ___asyncResult, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AsyncCallback_t1_28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		Exception_t1_33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IOException_t1_233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		SslStreamBase_AsyncHandshakeCallback_m3_795_MethodInfo_var = il2cpp_codegen_method_info_from_index(219);
		_stringLiteral4379 = il2cpp_codegen_string_literal_from_index(4379);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	TlsException_t3_117 * V_1 = {0};
	Exception_t1_33 * V_2 = {0};
	bool V_3 = false;
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = (__this->___negotiate_10);
			V_0 = L_0;
			Object_t * L_1 = V_0;
			Monitor_Enter_m1_4831(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		}

IL_000d:
		try
		{ // begin try (depth: 2)
			{
				Context_t3_88 * L_2 = (__this->___context_5);
				NullCheck(L_2);
				int32_t L_3 = Context_get_HandshakeState_m3_591(L_2, /*hidden argument*/NULL);
				if (L_3)
				{
					goto IL_0038;
				}
			}

IL_001d:
			{
				IntPtr_t L_4 = { (void*)SslStreamBase_AsyncHandshakeCallback_m3_795_MethodInfo_var };
				AsyncCallback_t1_28 * L_5 = (AsyncCallback_t1_28 *)il2cpp_codegen_object_new (AsyncCallback_t1_28_il2cpp_TypeInfo_var);
				AsyncCallback__ctor_m1_1017(L_5, __this, L_4, /*hidden argument*/NULL);
				InternalAsyncResult_t3_115 * L_6 = ___asyncResult;
				VirtFuncInvoker2< Object_t *, AsyncCallback_t1_28 *, Object_t * >::Invoke(29 /* System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::OnBeginNegotiateHandshake(System.AsyncCallback,System.Object) */, __this, L_5, L_6);
				V_3 = 1;
				IL2CPP_LEAVE(0xAA, FINALLY_0044);
			}

IL_0038:
			{
				V_3 = 0;
				IL2CPP_LEAVE(0xAA, FINALLY_0044);
			}

IL_003f:
			{
				; // IL_003f: leave IL_004b
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1_33 *)e.ex;
			goto FINALLY_0044;
		}

FINALLY_0044:
		{ // begin finally (depth: 2)
			Object_t * L_7 = V_0;
			Monitor_Exit_m1_4832(NULL /*static, unused*/, L_7, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(68)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(68)
		{
			IL2CPP_JUMP_TBL(0xAA, IL_00aa)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
		}

IL_004b:
		{
			goto IL_00aa;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1_33 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TlsException_t3_117_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0050;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1_33_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_007f;
		throw e;
	}

CATCH_0050:
	{ // begin catch(Mono.Security.Protocol.Tls.TlsException)
		{
			V_1 = ((TlsException_t3_117 *)__exception_local);
			ManualResetEvent_t1_248 * L_8 = (__this->___negotiationComplete_13);
			NullCheck(L_8);
			EventWaitHandle_Set_m1_4819(L_8, /*hidden argument*/NULL);
			RecordProtocol_t3_93 * L_9 = (__this->___protocol_6);
			TlsException_t3_117 * L_10 = V_1;
			NullCheck(L_10);
			Alert_t3_85 * L_11 = TlsException_get_Alert_m3_851(L_10, /*hidden argument*/NULL);
			NullCheck(L_9);
			RecordProtocol_SendAlert_m3_680(L_9, L_11, /*hidden argument*/NULL);
			TlsException_t3_117 * L_12 = V_1;
			IOException_t1_233 * L_13 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
			IOException__ctor_m1_2344(L_13, _stringLiteral4379, L_12, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_13);
		}

IL_007a:
		{
			goto IL_00aa;
		}
	} // end catch (depth: 1)

CATCH_007f:
	{ // begin catch(System.Exception)
		{
			V_2 = ((Exception_t1_33 *)__exception_local);
			ManualResetEvent_t1_248 * L_14 = (__this->___negotiationComplete_13);
			NullCheck(L_14);
			EventWaitHandle_Set_m1_4819(L_14, /*hidden argument*/NULL);
			RecordProtocol_t3_93 * L_15 = (__this->___protocol_6);
			NullCheck(L_15);
			RecordProtocol_SendAlert_m3_678(L_15, ((int32_t)80), /*hidden argument*/NULL);
			Exception_t1_33 * L_16 = V_2;
			IOException_t1_233 * L_17 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
			IOException__ctor_m1_2344(L_17, _stringLiteral4379, L_16, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
		}

IL_00a5:
		{
			goto IL_00aa;
		}
	} // end catch (depth: 1)

IL_00aa:
	{
		bool L_18 = V_3;
		return L_18;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndNegotiateHandshake(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern "C" void SslStreamBase_EndNegotiateHandshake_m3_804 (SslStreamBase_t3_0 * __this, InternalAsyncResult_t3_115 * ___asyncResult, const MethodInfo* method)
{
	{
		InternalAsyncResult_t3_115 * L_0 = ___asyncResult;
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_IsCompleted() */, L_0);
		if (L_1)
		{
			goto IL_0017;
		}
	}
	{
		InternalAsyncResult_t3_115 * L_2 = ___asyncResult;
		NullCheck(L_2);
		WaitHandle_t1_454 * L_3 = (WaitHandle_t1_454 *)VirtFuncInvoker0< WaitHandle_t1_454 * >::Invoke(5 /* System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle() */, L_2);
		NullCheck(L_3);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_3);
	}

IL_0017:
	{
		InternalAsyncResult_t3_115 * L_4 = ___asyncResult;
		NullCheck(L_4);
		bool L_5 = InternalAsyncResult_get_CompletedWithError_m3_785(L_4, /*hidden argument*/NULL);
		if (!L_5)
		{
			goto IL_0029;
		}
	}
	{
		InternalAsyncResult_t3_115 * L_6 = ___asyncResult;
		NullCheck(L_6);
		Exception_t1_33 * L_7 = InternalAsyncResult_get_AsyncException_m3_784(L_6, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_7);
	}

IL_0029:
	{
		return;
	}
}
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* ArgumentNullException_t1_735_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var;
extern TypeInfo* InternalAsyncResult_t3_115_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4439;
extern Il2CppCodeGenString* _stringLiteral4440;
extern Il2CppCodeGenString* _stringLiteral4441;
extern Il2CppCodeGenString* _stringLiteral4442;
extern Il2CppCodeGenString* _stringLiteral4443;
extern "C" Object_t * SslStreamBase_BeginRead_m3_805 (SslStreamBase_t3_0 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1_735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		InternalAsyncResult_t3_115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1400);
		_stringLiteral4439 = il2cpp_codegen_string_literal_from_index(4439);
		_stringLiteral4440 = il2cpp_codegen_string_literal_from_index(4440);
		_stringLiteral4441 = il2cpp_codegen_string_literal_from_index(4441);
		_stringLiteral4442 = il2cpp_codegen_string_literal_from_index(4442);
		_stringLiteral4443 = il2cpp_codegen_string_literal_from_index(4443);
		s_Il2CppMethodIntialized = true;
	}
	InternalAsyncResult_t3_115 * V_0 = {0};
	{
		SslStreamBase_checkDisposed_m3_830(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1_735 * L_1 = (ArgumentNullException_t1_735 *)il2cpp_codegen_object_new (ArgumentNullException_t1_735_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1_4988(L_1, _stringLiteral4439, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		int32_t L_2 = ___offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_3 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_3, _stringLiteral4440, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0029:
	{
		int32_t L_4 = ___offset;
		ByteU5BU5D_t1_72* L_5 = ___buffer;
		NullCheck(L_5);
		if ((((int32_t)L_4) <= ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_5)->max_length)))))))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_6 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_6, _stringLiteral4441, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_003d:
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_8 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_8, _stringLiteral4442, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_004f:
	{
		int32_t L_9 = ___count;
		ByteU5BU5D_t1_72* L_10 = ___buffer;
		NullCheck(L_10);
		int32_t L_11 = ___offset;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length))))-(int32_t)L_11)))))
		{
			goto IL_0065;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_12 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_12, _stringLiteral4443, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0065:
	{
		AsyncCallback_t1_28 * L_13 = ___callback;
		Object_t * L_14 = ___state;
		ByteU5BU5D_t1_72* L_15 = ___buffer;
		int32_t L_16 = ___offset;
		int32_t L_17 = ___count;
		InternalAsyncResult_t3_115 * L_18 = (InternalAsyncResult_t3_115 *)il2cpp_codegen_object_new (InternalAsyncResult_t3_115_il2cpp_TypeInfo_var);
		InternalAsyncResult__ctor_m3_776(L_18, L_13, L_14, L_15, L_16, L_17, 0, 1, /*hidden argument*/NULL);
		V_0 = L_18;
		bool L_19 = SslStreamBase_get_MightNeedHandshake_m3_796(__this, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		InternalAsyncResult_t3_115 * L_20 = V_0;
		bool L_21 = SslStreamBase_BeginNegotiateHandshake_m3_803(__this, L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_009e;
		}
	}
	{
		ManualResetEvent_t1_248 * L_22 = (__this->___negotiationComplete_13);
		NullCheck(L_22);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_22);
		InternalAsyncResult_t3_115 * L_23 = V_0;
		SslStreamBase_InternalBeginRead_m3_806(__this, L_23, /*hidden argument*/NULL);
	}

IL_009e:
	{
		goto IL_00aa;
	}

IL_00a3:
	{
		InternalAsyncResult_t3_115 * L_24 = V_0;
		SslStreamBase_InternalBeginRead_m3_806(__this, L_24, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		InternalAsyncResult_t3_115 * L_25 = V_0;
		return L_25;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginRead(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern TypeInfo* AsyncCallback_t1_28_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t1_158_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t1_33_il2cpp_TypeInfo_var;
extern TypeInfo* IOException_t1_233_il2cpp_TypeInfo_var;
extern const MethodInfo* SslStreamBase_InternalReadCallback_m3_807_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4379;
extern Il2CppCodeGenString* _stringLiteral4444;
extern "C" void SslStreamBase_InternalBeginRead_m3_806 (SslStreamBase_t3_0 * __this, InternalAsyncResult_t3_115 * ___asyncResult, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AsyncCallback_t1_28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		ObjectU5BU5D_t1_158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		Exception_t1_33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IOException_t1_233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		SslStreamBase_InternalReadCallback_m3_807_MethodInfo_var = il2cpp_codegen_method_info_from_index(220);
		_stringLiteral4379 = il2cpp_codegen_string_literal_from_index(4379);
		_stringLiteral4444 = il2cpp_codegen_string_literal_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	Object_t * V_1 = {0};
	bool V_2 = false;
	bool V_3 = false;
	TlsException_t3_117 * V_4 = {0};
	Exception_t1_33 * V_5 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	int32_t G_B4_0 = 0;
	int32_t G_B7_0 = 0;

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			V_0 = 0;
			Object_t * L_0 = (__this->___read_11);
			V_1 = L_0;
			Object_t * L_1 = V_1;
			Monitor_Enter_m1_4831(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		}

IL_000f:
		try
		{ // begin try (depth: 2)
			{
				MemoryStream_t1_250 * L_2 = (__this->___inputBuffer_4);
				NullCheck(L_2);
				int64_t L_3 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Position() */, L_2);
				MemoryStream_t1_250 * L_4 = (__this->___inputBuffer_4);
				NullCheck(L_4);
				int64_t L_5 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_4);
				if ((!(((uint64_t)L_3) == ((uint64_t)L_5))))
				{
					goto IL_003b;
				}
			}

IL_002a:
			{
				MemoryStream_t1_250 * L_6 = (__this->___inputBuffer_4);
				NullCheck(L_6);
				int64_t L_7 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_6);
				G_B4_0 = ((((int64_t)L_7) > ((int64_t)(((int64_t)((int64_t)0)))))? 1 : 0);
				goto IL_003c;
			}

IL_003b:
			{
				G_B4_0 = 0;
			}

IL_003c:
			{
				V_2 = G_B4_0;
				MemoryStream_t1_250 * L_8 = (__this->___inputBuffer_4);
				NullCheck(L_8);
				int64_t L_9 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_8);
				if ((((int64_t)L_9) <= ((int64_t)(((int64_t)((int64_t)0))))))
				{
					goto IL_005a;
				}
			}

IL_004f:
			{
				InternalAsyncResult_t3_115 * L_10 = ___asyncResult;
				NullCheck(L_10);
				int32_t L_11 = InternalAsyncResult_get_Count_m3_781(L_10, /*hidden argument*/NULL);
				G_B7_0 = ((((int32_t)L_11) > ((int32_t)0))? 1 : 0);
				goto IL_005b;
			}

IL_005a:
			{
				G_B7_0 = 0;
			}

IL_005b:
			{
				V_3 = G_B7_0;
				bool L_12 = V_2;
				if (!L_12)
				{
					goto IL_006d;
				}
			}

IL_0062:
			{
				SslStreamBase_resetBuffer_m3_829(__this, /*hidden argument*/NULL);
				goto IL_0091;
			}

IL_006d:
			{
				bool L_13 = V_3;
				if (!L_13)
				{
					goto IL_0091;
				}
			}

IL_0073:
			{
				MemoryStream_t1_250 * L_14 = (__this->___inputBuffer_4);
				InternalAsyncResult_t3_115 * L_15 = ___asyncResult;
				NullCheck(L_15);
				ByteU5BU5D_t1_72* L_16 = InternalAsyncResult_get_Buffer_m3_779(L_15, /*hidden argument*/NULL);
				InternalAsyncResult_t3_115 * L_17 = ___asyncResult;
				NullCheck(L_17);
				int32_t L_18 = InternalAsyncResult_get_Offset_m3_780(L_17, /*hidden argument*/NULL);
				InternalAsyncResult_t3_115 * L_19 = ___asyncResult;
				NullCheck(L_19);
				int32_t L_20 = InternalAsyncResult_get_Count_m3_781(L_19, /*hidden argument*/NULL);
				NullCheck(L_14);
				int32_t L_21 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(19 /* System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32) */, L_14, L_16, L_18, L_20);
				V_0 = L_21;
			}

IL_0091:
			{
				IL2CPP_LEAVE(0x9D, FINALLY_0096);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1_33 *)e.ex;
			goto FINALLY_0096;
		}

FINALLY_0096:
		{ // begin finally (depth: 2)
			Object_t * L_22 = V_1;
			Monitor_Exit_m1_4832(NULL /*static, unused*/, L_22, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(150)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(150)
		{
			IL2CPP_JUMP_TBL(0x9D, IL_009d)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
		}

IL_009d:
		{
			int32_t L_23 = V_0;
			if ((((int32_t)0) >= ((int32_t)L_23)))
			{
				goto IL_00b0;
			}
		}

IL_00a4:
		{
			InternalAsyncResult_t3_115 * L_24 = ___asyncResult;
			int32_t L_25 = V_0;
			NullCheck(L_24);
			InternalAsyncResult_SetComplete_m3_791(L_24, L_25, /*hidden argument*/NULL);
			goto IL_0106;
		}

IL_00b0:
		{
			Context_t3_88 * L_26 = (__this->___context_5);
			NullCheck(L_26);
			bool L_27 = Context_get_ReceivedConnectionEnd_m3_593(L_26, /*hidden argument*/NULL);
			if (L_27)
			{
				goto IL_00ff;
			}
		}

IL_00c0:
		{
			Stream_t1_226 * L_28 = (__this->___innerStream_3);
			ByteU5BU5D_t1_72* L_29 = (__this->___recbuf_14);
			ByteU5BU5D_t1_72* L_30 = (__this->___recbuf_14);
			NullCheck(L_30);
			IntPtr_t L_31 = { (void*)SslStreamBase_InternalReadCallback_m3_807_MethodInfo_var };
			AsyncCallback_t1_28 * L_32 = (AsyncCallback_t1_28 *)il2cpp_codegen_object_new (AsyncCallback_t1_28_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m1_1017(L_32, __this, L_31, /*hidden argument*/NULL);
			ObjectU5BU5D_t1_158* L_33 = ((ObjectU5BU5D_t1_158*)SZArrayNew(ObjectU5BU5D_t1_158_il2cpp_TypeInfo_var, 2));
			ByteU5BU5D_t1_72* L_34 = (__this->___recbuf_14);
			NullCheck(L_33);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_33, 0);
			ArrayElementTypeCheck (L_33, L_34);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_33, 0, sizeof(Object_t *))) = (Object_t *)L_34;
			ObjectU5BU5D_t1_158* L_35 = L_33;
			InternalAsyncResult_t3_115 * L_36 = ___asyncResult;
			NullCheck(L_35);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_35, 1);
			ArrayElementTypeCheck (L_35, L_36);
			*((Object_t **)(Object_t **)SZArrayLdElema(L_35, 1, sizeof(Object_t *))) = (Object_t *)L_36;
			NullCheck(L_28);
			VirtFuncInvoker5< Object_t *, ByteU5BU5D_t1_72*, int32_t, int32_t, AsyncCallback_t1_28 *, Object_t * >::Invoke(25 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_28, L_29, 0, (((int32_t)((int32_t)(((Array_t *)L_30)->max_length)))), L_32, (Object_t *)(Object_t *)L_35);
			goto IL_0106;
		}

IL_00ff:
		{
			InternalAsyncResult_t3_115 * L_37 = ___asyncResult;
			NullCheck(L_37);
			InternalAsyncResult_SetComplete_m3_791(L_37, 0, /*hidden argument*/NULL);
		}

IL_0106:
		{
			goto IL_0145;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1_33 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TlsException_t3_117_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_010b;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1_33_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0131;
		throw e;
	}

CATCH_010b:
	{ // begin catch(Mono.Security.Protocol.Tls.TlsException)
		{
			V_4 = ((TlsException_t3_117 *)__exception_local);
			RecordProtocol_t3_93 * L_38 = (__this->___protocol_6);
			TlsException_t3_117 * L_39 = V_4;
			NullCheck(L_39);
			Alert_t3_85 * L_40 = TlsException_get_Alert_m3_851(L_39, /*hidden argument*/NULL);
			NullCheck(L_38);
			RecordProtocol_SendAlert_m3_680(L_38, L_40, /*hidden argument*/NULL);
			TlsException_t3_117 * L_41 = V_4;
			IOException_t1_233 * L_42 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
			IOException__ctor_m1_2344(L_42, _stringLiteral4379, L_41, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_42);
		}

IL_012c:
		{
			goto IL_0145;
		}
	} // end catch (depth: 1)

CATCH_0131:
	{ // begin catch(System.Exception)
		{
			V_5 = ((Exception_t1_33 *)__exception_local);
			Exception_t1_33 * L_43 = V_5;
			IOException_t1_233 * L_44 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
			IOException__ctor_m1_2344(L_44, _stringLiteral4444, L_43, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_44);
		}

IL_0140:
		{
			goto IL_0145;
		}
	} // end catch (depth: 1)

IL_0145:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalReadCallback(System.IAsyncResult)
extern TypeInfo* IAsyncResult_t1_27_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t1_158_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* InternalAsyncResult_t3_115_il2cpp_TypeInfo_var;
extern TypeInfo* AsyncCallback_t1_28_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t1_33_il2cpp_TypeInfo_var;
extern const MethodInfo* SslStreamBase_InternalReadCallback_m3_807_MethodInfo_var;
extern "C" void SslStreamBase_InternalReadCallback_m3_807 (SslStreamBase_t3_0 * __this, Object_t * ___result, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAsyncResult_t1_27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1035);
		ObjectU5BU5D_t1_158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		InternalAsyncResult_t3_115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1400);
		AsyncCallback_t1_28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		Exception_t1_33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		SslStreamBase_InternalReadCallback_m3_807_MethodInfo_var = il2cpp_codegen_method_info_from_index(220);
		s_Il2CppMethodIntialized = true;
	}
	ObjectU5BU5D_t1_158* V_0 = {0};
	ByteU5BU5D_t1_72* V_1 = {0};
	InternalAsyncResult_t3_115 * V_2 = {0};
	int32_t V_3 = 0;
	bool V_4 = false;
	int64_t V_5 = 0;
	ByteU5BU5D_t1_72* V_6 = {0};
	int64_t V_7 = 0;
	ByteU5BU5D_t1_72* V_8 = {0};
	Object_t * V_9 = {0};
	int64_t V_10 = 0;
	int32_t V_11 = 0;
	Object_t * V_12 = {0};
	Exception_t1_33 * V_13 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___disposed_8);
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		Object_t * L_1 = ___result;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t1_27_il2cpp_TypeInfo_var, L_1);
		V_0 = ((ObjectU5BU5D_t1_158*)Castclass(L_2, ObjectU5BU5D_t1_158_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t1_158* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 0);
		int32_t L_4 = 0;
		V_1 = ((ByteU5BU5D_t1_72*)Castclass((*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_4, sizeof(Object_t *))), ByteU5BU5D_t1_72_il2cpp_TypeInfo_var));
		ObjectU5BU5D_t1_158* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 1);
		int32_t L_6 = 1;
		V_2 = ((InternalAsyncResult_t3_115 *)CastclassClass((*(Object_t **)(Object_t **)SZArrayLdElema(L_5, L_6, sizeof(Object_t *))), InternalAsyncResult_t3_115_il2cpp_TypeInfo_var));
	}

IL_002c:
	try
	{ // begin try (depth: 1)
		{
			Stream_t1_226 * L_7 = (__this->___innerStream_3);
			Object_t * L_8 = ___result;
			NullCheck(L_7);
			int32_t L_9 = (int32_t)VirtFuncInvoker1< int32_t, Object_t * >::Invoke(27 /* System.Int32 System.IO.Stream::EndRead(System.IAsyncResult) */, L_7, L_8);
			V_3 = L_9;
			int32_t L_10 = V_3;
			if ((((int32_t)L_10) <= ((int32_t)0)))
			{
				goto IL_0053;
			}
		}

IL_0040:
		{
			MemoryStream_t1_250 * L_11 = (__this->___recordStream_15);
			ByteU5BU5D_t1_72* L_12 = V_1;
			int32_t L_13 = V_3;
			NullCheck(L_11);
			VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_11, L_12, 0, L_13);
			goto IL_005f;
		}

IL_0053:
		{
			InternalAsyncResult_t3_115 * L_14 = V_2;
			NullCheck(L_14);
			InternalAsyncResult_SetComplete_m3_791(L_14, 0, /*hidden argument*/NULL);
			goto IL_02a5;
		}

IL_005f:
		{
			V_4 = 0;
			MemoryStream_t1_250 * L_15 = (__this->___recordStream_15);
			NullCheck(L_15);
			int64_t L_16 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Position() */, L_15);
			V_5 = L_16;
			MemoryStream_t1_250 * L_17 = (__this->___recordStream_15);
			NullCheck(L_17);
			VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_17, (((int64_t)((int64_t)0))));
			V_6 = (ByteU5BU5D_t1_72*)NULL;
			MemoryStream_t1_250 * L_18 = (__this->___recordStream_15);
			NullCheck(L_18);
			int64_t L_19 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_18);
			if ((((int64_t)L_19) < ((int64_t)(((int64_t)((int64_t)5))))))
			{
				goto IL_00a4;
			}
		}

IL_0091:
		{
			RecordProtocol_t3_93 * L_20 = (__this->___protocol_6);
			MemoryStream_t1_250 * L_21 = (__this->___recordStream_15);
			NullCheck(L_20);
			ByteU5BU5D_t1_72* L_22 = RecordProtocol_ReceiveRecord_m3_673(L_20, L_21, /*hidden argument*/NULL);
			V_6 = L_22;
		}

IL_00a4:
		{
			goto IL_01d4;
		}

IL_00a9:
		{
			MemoryStream_t1_250 * L_23 = (__this->___recordStream_15);
			NullCheck(L_23);
			int64_t L_24 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_23);
			MemoryStream_t1_250 * L_25 = (__this->___recordStream_15);
			NullCheck(L_25);
			int64_t L_26 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Position() */, L_25);
			V_7 = ((int64_t)((int64_t)L_24-(int64_t)L_26));
			V_8 = (ByteU5BU5D_t1_72*)NULL;
			int64_t L_27 = V_7;
			if ((((int64_t)L_27) <= ((int64_t)(((int64_t)((int64_t)0))))))
			{
				goto IL_00eb;
			}
		}

IL_00ce:
		{
			int64_t L_28 = V_7;
			if ((int64_t)(L_28) > INTPTR_MAX) il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
			V_8 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, (((intptr_t)L_28))));
			MemoryStream_t1_250 * L_29 = (__this->___recordStream_15);
			ByteU5BU5D_t1_72* L_30 = V_8;
			ByteU5BU5D_t1_72* L_31 = V_8;
			NullCheck(L_31);
			NullCheck(L_29);
			VirtFuncInvoker3< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(19 /* System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32) */, L_29, L_30, 0, (((int32_t)((int32_t)(((Array_t *)L_31)->max_length)))));
		}

IL_00eb:
		{
			Object_t * L_32 = (__this->___read_11);
			V_9 = L_32;
			Object_t * L_33 = V_9;
			Monitor_Enter_m1_4831(NULL /*static, unused*/, L_33, /*hidden argument*/NULL);
		}

IL_00fa:
		try
		{ // begin try (depth: 2)
			{
				MemoryStream_t1_250 * L_34 = (__this->___inputBuffer_4);
				NullCheck(L_34);
				int64_t L_35 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Position() */, L_34);
				V_10 = L_35;
				ByteU5BU5D_t1_72* L_36 = V_6;
				NullCheck(L_36);
				if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_36)->max_length))))) <= ((int32_t)0)))
				{
					goto IL_0144;
				}
			}

IL_0111:
			{
				MemoryStream_t1_250 * L_37 = (__this->___inputBuffer_4);
				NullCheck(L_37);
				VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(21 /* System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin) */, L_37, (((int64_t)((int64_t)0))), 2);
				MemoryStream_t1_250 * L_38 = (__this->___inputBuffer_4);
				ByteU5BU5D_t1_72* L_39 = V_6;
				ByteU5BU5D_t1_72* L_40 = V_6;
				NullCheck(L_40);
				NullCheck(L_38);
				VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_38, L_39, 0, (((int32_t)((int32_t)(((Array_t *)L_40)->max_length)))));
				MemoryStream_t1_250 * L_41 = (__this->___inputBuffer_4);
				int64_t L_42 = V_10;
				NullCheck(L_41);
				VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(21 /* System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin) */, L_41, L_42, 0);
				V_4 = 1;
			}

IL_0144:
			{
				IL2CPP_LEAVE(0x151, FINALLY_0149);
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1_33 *)e.ex;
			goto FINALLY_0149;
		}

FINALLY_0149:
		{ // begin finally (depth: 2)
			Object_t * L_43 = V_9;
			Monitor_Exit_m1_4832(NULL /*static, unused*/, L_43, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(329)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(329)
		{
			IL2CPP_JUMP_TBL(0x151, IL_0151)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
		}

IL_0151:
		{
			MemoryStream_t1_250 * L_44 = (__this->___recordStream_15);
			NullCheck(L_44);
			VirtActionInvoker1< int64_t >::Invoke(22 /* System.Void System.IO.MemoryStream::SetLength(System.Int64) */, L_44, (((int64_t)((int64_t)0))));
			V_6 = (ByteU5BU5D_t1_72*)NULL;
			int64_t L_45 = V_7;
			if ((((int64_t)L_45) <= ((int64_t)(((int64_t)((int64_t)0))))))
			{
				goto IL_01d0;
			}
		}

IL_016a:
		{
			MemoryStream_t1_250 * L_46 = (__this->___recordStream_15);
			ByteU5BU5D_t1_72* L_47 = V_8;
			ByteU5BU5D_t1_72* L_48 = V_8;
			NullCheck(L_48);
			NullCheck(L_46);
			VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_46, L_47, 0, (((int32_t)((int32_t)(((Array_t *)L_48)->max_length)))));
			MemoryStream_t1_250 * L_49 = (__this->___recordStream_15);
			NullCheck(L_49);
			int64_t L_50 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_49);
			if ((((int64_t)L_50) < ((int64_t)(((int64_t)((int64_t)5))))))
			{
				goto IL_01c7;
			}
		}

IL_018e:
		{
			MemoryStream_t1_250 * L_51 = (__this->___recordStream_15);
			NullCheck(L_51);
			VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_51, (((int64_t)((int64_t)0))));
			RecordProtocol_t3_93 * L_52 = (__this->___protocol_6);
			MemoryStream_t1_250 * L_53 = (__this->___recordStream_15);
			NullCheck(L_52);
			ByteU5BU5D_t1_72* L_54 = RecordProtocol_ReceiveRecord_m3_673(L_52, L_53, /*hidden argument*/NULL);
			V_6 = L_54;
			ByteU5BU5D_t1_72* L_55 = V_6;
			if (L_55)
			{
				goto IL_01c2;
			}
		}

IL_01b5:
		{
			MemoryStream_t1_250 * L_56 = (__this->___recordStream_15);
			NullCheck(L_56);
			int64_t L_57 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_56);
			V_5 = L_57;
		}

IL_01c2:
		{
			goto IL_01cb;
		}

IL_01c7:
		{
			int64_t L_58 = V_7;
			V_5 = L_58;
		}

IL_01cb:
		{
			goto IL_01d4;
		}

IL_01d0:
		{
			V_5 = (((int64_t)((int64_t)0)));
		}

IL_01d4:
		{
			ByteU5BU5D_t1_72* L_59 = V_6;
			if (L_59)
			{
				goto IL_00a9;
			}
		}

IL_01db:
		{
			bool L_60 = V_4;
			if (L_60)
			{
				goto IL_023e;
			}
		}

IL_01e2:
		{
			int32_t L_61 = V_3;
			if ((((int32_t)L_61) <= ((int32_t)0)))
			{
				goto IL_023e;
			}
		}

IL_01e9:
		{
			Context_t3_88 * L_62 = (__this->___context_5);
			NullCheck(L_62);
			bool L_63 = Context_get_ReceivedConnectionEnd_m3_593(L_62, /*hidden argument*/NULL);
			if (!L_63)
			{
				goto IL_0205;
			}
		}

IL_01f9:
		{
			InternalAsyncResult_t3_115 * L_64 = V_2;
			NullCheck(L_64);
			InternalAsyncResult_SetComplete_m3_791(L_64, 0, /*hidden argument*/NULL);
			goto IL_0239;
		}

IL_0205:
		{
			MemoryStream_t1_250 * L_65 = (__this->___recordStream_15);
			MemoryStream_t1_250 * L_66 = (__this->___recordStream_15);
			NullCheck(L_66);
			int64_t L_67 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_66);
			NullCheck(L_65);
			VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_65, L_67);
			Stream_t1_226 * L_68 = (__this->___innerStream_3);
			ByteU5BU5D_t1_72* L_69 = V_1;
			ByteU5BU5D_t1_72* L_70 = V_1;
			NullCheck(L_70);
			IntPtr_t L_71 = { (void*)SslStreamBase_InternalReadCallback_m3_807_MethodInfo_var };
			AsyncCallback_t1_28 * L_72 = (AsyncCallback_t1_28 *)il2cpp_codegen_object_new (AsyncCallback_t1_28_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m1_1017(L_72, __this, L_71, /*hidden argument*/NULL);
			ObjectU5BU5D_t1_158* L_73 = V_0;
			NullCheck(L_68);
			VirtFuncInvoker5< Object_t *, ByteU5BU5D_t1_72*, int32_t, int32_t, AsyncCallback_t1_28 *, Object_t * >::Invoke(25 /* System.IAsyncResult System.IO.Stream::BeginRead(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_68, L_69, 0, (((int32_t)((int32_t)(((Array_t *)L_70)->max_length)))), L_72, (Object_t *)(Object_t *)L_73);
		}

IL_0239:
		{
			goto IL_0291;
		}

IL_023e:
		{
			MemoryStream_t1_250 * L_74 = (__this->___recordStream_15);
			int64_t L_75 = V_5;
			NullCheck(L_74);
			VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_74, L_75);
			V_11 = 0;
			Object_t * L_76 = (__this->___read_11);
			V_12 = L_76;
			Object_t * L_77 = V_12;
			Monitor_Enter_m1_4831(NULL /*static, unused*/, L_77, /*hidden argument*/NULL);
		}

IL_025d:
		try
		{ // begin try (depth: 2)
			MemoryStream_t1_250 * L_78 = (__this->___inputBuffer_4);
			InternalAsyncResult_t3_115 * L_79 = V_2;
			NullCheck(L_79);
			ByteU5BU5D_t1_72* L_80 = InternalAsyncResult_get_Buffer_m3_779(L_79, /*hidden argument*/NULL);
			InternalAsyncResult_t3_115 * L_81 = V_2;
			NullCheck(L_81);
			int32_t L_82 = InternalAsyncResult_get_Offset_m3_780(L_81, /*hidden argument*/NULL);
			InternalAsyncResult_t3_115 * L_83 = V_2;
			NullCheck(L_83);
			int32_t L_84 = InternalAsyncResult_get_Count_m3_781(L_83, /*hidden argument*/NULL);
			NullCheck(L_78);
			int32_t L_85 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(19 /* System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32) */, L_78, L_80, L_82, L_84);
			V_11 = L_85;
			IL2CPP_LEAVE(0x289, FINALLY_0281);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1_33 *)e.ex;
			goto FINALLY_0281;
		}

FINALLY_0281:
		{ // begin finally (depth: 2)
			Object_t * L_86 = V_12;
			Monitor_Exit_m1_4832(NULL /*static, unused*/, L_86, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(641)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(641)
		{
			IL2CPP_JUMP_TBL(0x289, IL_0289)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
		}

IL_0289:
		{
			InternalAsyncResult_t3_115 * L_87 = V_2;
			int32_t L_88 = V_11;
			NullCheck(L_87);
			InternalAsyncResult_SetComplete_m3_791(L_87, L_88, /*hidden argument*/NULL);
		}

IL_0291:
		{
			goto IL_02a5;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1_33 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1_33_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0296;
		throw e;
	}

CATCH_0296:
	{ // begin catch(System.Exception)
		V_13 = ((Exception_t1_33 *)__exception_local);
		InternalAsyncResult_t3_115 * L_89 = V_2;
		Exception_t1_33 * L_90 = V_13;
		NullCheck(L_89);
		InternalAsyncResult_SetComplete_m3_790(L_89, L_90, /*hidden argument*/NULL);
		goto IL_02a5;
	} // end catch (depth: 1)

IL_02a5:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalBeginWrite(Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult)
extern TypeInfo* AsyncCallback_t1_28_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t1_33_il2cpp_TypeInfo_var;
extern TypeInfo* IOException_t1_233_il2cpp_TypeInfo_var;
extern const MethodInfo* SslStreamBase_InternalWriteCallback_m3_809_MethodInfo_var;
extern Il2CppCodeGenString* _stringLiteral4379;
extern Il2CppCodeGenString* _stringLiteral4445;
extern "C" void SslStreamBase_InternalBeginWrite_m3_808 (SslStreamBase_t3_0 * __this, InternalAsyncResult_t3_115 * ___asyncResult, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		AsyncCallback_t1_28_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(245);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		Exception_t1_33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IOException_t1_233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		SslStreamBase_InternalWriteCallback_m3_809_MethodInfo_var = il2cpp_codegen_method_info_from_index(221);
		_stringLiteral4379 = il2cpp_codegen_string_literal_from_index(4379);
		_stringLiteral4445 = il2cpp_codegen_string_literal_from_index(4445);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ByteU5BU5D_t1_72* V_1 = {0};
	TlsException_t3_117 * V_2 = {0};
	Exception_t1_33 * V_3 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			Object_t * L_0 = (__this->___write_12);
			V_0 = L_0;
			Object_t * L_1 = V_0;
			Monitor_Enter_m1_4831(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		}

IL_000d:
		try
		{ // begin try (depth: 2)
			RecordProtocol_t3_93 * L_2 = (__this->___protocol_6);
			InternalAsyncResult_t3_115 * L_3 = ___asyncResult;
			NullCheck(L_3);
			ByteU5BU5D_t1_72* L_4 = InternalAsyncResult_get_Buffer_m3_779(L_3, /*hidden argument*/NULL);
			InternalAsyncResult_t3_115 * L_5 = ___asyncResult;
			NullCheck(L_5);
			int32_t L_6 = InternalAsyncResult_get_Offset_m3_780(L_5, /*hidden argument*/NULL);
			InternalAsyncResult_t3_115 * L_7 = ___asyncResult;
			NullCheck(L_7);
			int32_t L_8 = InternalAsyncResult_get_Count_m3_781(L_7, /*hidden argument*/NULL);
			NullCheck(L_2);
			ByteU5BU5D_t1_72* L_9 = RecordProtocol_EncodeRecord_m3_688(L_2, ((int32_t)23), L_4, L_6, L_8, /*hidden argument*/NULL);
			V_1 = L_9;
			Stream_t1_226 * L_10 = (__this->___innerStream_3);
			ByteU5BU5D_t1_72* L_11 = V_1;
			ByteU5BU5D_t1_72* L_12 = V_1;
			NullCheck(L_12);
			IntPtr_t L_13 = { (void*)SslStreamBase_InternalWriteCallback_m3_809_MethodInfo_var };
			AsyncCallback_t1_28 * L_14 = (AsyncCallback_t1_28 *)il2cpp_codegen_object_new (AsyncCallback_t1_28_il2cpp_TypeInfo_var);
			AsyncCallback__ctor_m1_1017(L_14, __this, L_13, /*hidden argument*/NULL);
			InternalAsyncResult_t3_115 * L_15 = ___asyncResult;
			NullCheck(L_10);
			VirtFuncInvoker5< Object_t *, ByteU5BU5D_t1_72*, int32_t, int32_t, AsyncCallback_t1_28 *, Object_t * >::Invoke(26 /* System.IAsyncResult System.IO.Stream::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object) */, L_10, L_11, 0, (((int32_t)((int32_t)(((Array_t *)L_12)->max_length)))), L_14, L_15);
			IL2CPP_LEAVE(0x57, FINALLY_0050);
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__last_unhandled_exception = (Exception_t1_33 *)e.ex;
			goto FINALLY_0050;
		}

FINALLY_0050:
		{ // begin finally (depth: 2)
			Object_t * L_16 = V_0;
			Monitor_Exit_m1_4832(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
			IL2CPP_END_FINALLY(80)
		} // end finally (depth: 2)
		IL2CPP_CLEANUP(80)
		{
			IL2CPP_JUMP_TBL(0x57, IL_0057)
			IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
		}

IL_0057:
		{
			goto IL_0097;
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1_33 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (TlsException_t3_117_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_005c;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1_33_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0085;
		throw e;
	}

CATCH_005c:
	{ // begin catch(Mono.Security.Protocol.Tls.TlsException)
		{
			V_2 = ((TlsException_t3_117 *)__exception_local);
			RecordProtocol_t3_93 * L_17 = (__this->___protocol_6);
			TlsException_t3_117 * L_18 = V_2;
			NullCheck(L_18);
			Alert_t3_85 * L_19 = TlsException_get_Alert_m3_851(L_18, /*hidden argument*/NULL);
			NullCheck(L_17);
			RecordProtocol_SendAlert_m3_680(L_17, L_19, /*hidden argument*/NULL);
			VirtActionInvoker0::Invoke(13 /* System.Void Mono.Security.Protocol.Tls.SslStreamBase::Close() */, __this);
			TlsException_t3_117 * L_20 = V_2;
			IOException_t1_233 * L_21 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
			IOException__ctor_m1_2344(L_21, _stringLiteral4379, L_20, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
		}

IL_0080:
		{
			goto IL_0097;
		}
	} // end catch (depth: 1)

CATCH_0085:
	{ // begin catch(System.Exception)
		{
			V_3 = ((Exception_t1_33 *)__exception_local);
			Exception_t1_33 * L_22 = V_3;
			IOException_t1_233 * L_23 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
			IOException__ctor_m1_2344(L_23, _stringLiteral4445, L_22, /*hidden argument*/NULL);
			il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_23);
		}

IL_0092:
		{
			goto IL_0097;
		}
	} // end catch (depth: 1)

IL_0097:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::InternalWriteCallback(System.IAsyncResult)
extern TypeInfo* IAsyncResult_t1_27_il2cpp_TypeInfo_var;
extern TypeInfo* InternalAsyncResult_t3_115_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t1_33_il2cpp_TypeInfo_var;
extern "C" void SslStreamBase_InternalWriteCallback_m3_809 (SslStreamBase_t3_0 * __this, Object_t * ___ar, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		IAsyncResult_t1_27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1035);
		InternalAsyncResult_t3_115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1400);
		Exception_t1_33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		s_Il2CppMethodIntialized = true;
	}
	InternalAsyncResult_t3_115 * V_0 = {0};
	Exception_t1_33 * V_1 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___disposed_8);
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		return;
	}

IL_000e:
	{
		Object_t * L_1 = ___ar;
		NullCheck(L_1);
		Object_t * L_2 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(0 /* System.Object System.IAsyncResult::get_AsyncState() */, IAsyncResult_t1_27_il2cpp_TypeInfo_var, L_1);
		V_0 = ((InternalAsyncResult_t3_115 *)CastclassClass(L_2, InternalAsyncResult_t3_115_il2cpp_TypeInfo_var));
	}

IL_001a:
	try
	{ // begin try (depth: 1)
		Stream_t1_226 * L_3 = (__this->___innerStream_3);
		Object_t * L_4 = ___ar;
		NullCheck(L_3);
		VirtActionInvoker1< Object_t * >::Invoke(28 /* System.Void System.IO.Stream::EndWrite(System.IAsyncResult) */, L_3, L_4);
		InternalAsyncResult_t3_115 * L_5 = V_0;
		NullCheck(L_5);
		InternalAsyncResult_SetComplete_m3_792(L_5, /*hidden argument*/NULL);
		goto IL_003e;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1_33 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1_33_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0031;
		throw e;
	}

CATCH_0031:
	{ // begin catch(System.Exception)
		V_1 = ((Exception_t1_33 *)__exception_local);
		InternalAsyncResult_t3_115 * L_6 = V_0;
		Exception_t1_33 * L_7 = V_1;
		NullCheck(L_6);
		InternalAsyncResult_SetComplete_m3_790(L_6, L_7, /*hidden argument*/NULL);
		goto IL_003e;
	} // end catch (depth: 1)

IL_003e:
	{
		return;
	}
}
// System.IAsyncResult Mono.Security.Protocol.Tls.SslStreamBase::BeginWrite(System.Byte[],System.Int32,System.Int32,System.AsyncCallback,System.Object)
extern TypeInfo* ArgumentNullException_t1_735_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var;
extern TypeInfo* InternalAsyncResult_t3_115_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4439;
extern Il2CppCodeGenString* _stringLiteral4440;
extern Il2CppCodeGenString* _stringLiteral4441;
extern Il2CppCodeGenString* _stringLiteral4442;
extern Il2CppCodeGenString* _stringLiteral4443;
extern "C" Object_t * SslStreamBase_BeginWrite_m3_810 (SslStreamBase_t3_0 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1_735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		InternalAsyncResult_t3_115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1400);
		_stringLiteral4439 = il2cpp_codegen_string_literal_from_index(4439);
		_stringLiteral4440 = il2cpp_codegen_string_literal_from_index(4440);
		_stringLiteral4441 = il2cpp_codegen_string_literal_from_index(4441);
		_stringLiteral4442 = il2cpp_codegen_string_literal_from_index(4442);
		_stringLiteral4443 = il2cpp_codegen_string_literal_from_index(4443);
		s_Il2CppMethodIntialized = true;
	}
	InternalAsyncResult_t3_115 * V_0 = {0};
	{
		SslStreamBase_checkDisposed_m3_830(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1_735 * L_1 = (ArgumentNullException_t1_735 *)il2cpp_codegen_object_new (ArgumentNullException_t1_735_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1_4988(L_1, _stringLiteral4439, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		int32_t L_2 = ___offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_3 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_3, _stringLiteral4440, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0029:
	{
		int32_t L_4 = ___offset;
		ByteU5BU5D_t1_72* L_5 = ___buffer;
		NullCheck(L_5);
		if ((((int32_t)L_4) <= ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_5)->max_length)))))))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_6 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_6, _stringLiteral4441, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_003d:
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_8 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_8, _stringLiteral4442, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_004f:
	{
		int32_t L_9 = ___count;
		ByteU5BU5D_t1_72* L_10 = ___buffer;
		NullCheck(L_10);
		int32_t L_11 = ___offset;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length))))-(int32_t)L_11)))))
		{
			goto IL_0065;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_12 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_12, _stringLiteral4443, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0065:
	{
		AsyncCallback_t1_28 * L_13 = ___callback;
		Object_t * L_14 = ___state;
		ByteU5BU5D_t1_72* L_15 = ___buffer;
		int32_t L_16 = ___offset;
		int32_t L_17 = ___count;
		InternalAsyncResult_t3_115 * L_18 = (InternalAsyncResult_t3_115 *)il2cpp_codegen_object_new (InternalAsyncResult_t3_115_il2cpp_TypeInfo_var);
		InternalAsyncResult__ctor_m3_776(L_18, L_13, L_14, L_15, L_16, L_17, 1, 1, /*hidden argument*/NULL);
		V_0 = L_18;
		bool L_19 = SslStreamBase_get_MightNeedHandshake_m3_796(__this, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00a3;
		}
	}
	{
		InternalAsyncResult_t3_115 * L_20 = V_0;
		bool L_21 = SslStreamBase_BeginNegotiateHandshake_m3_803(__this, L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_009e;
		}
	}
	{
		ManualResetEvent_t1_248 * L_22 = (__this->___negotiationComplete_13);
		NullCheck(L_22);
		VirtFuncInvoker0< bool >::Invoke(8 /* System.Boolean System.Threading.WaitHandle::WaitOne() */, L_22);
		InternalAsyncResult_t3_115 * L_23 = V_0;
		SslStreamBase_InternalBeginWrite_m3_808(__this, L_23, /*hidden argument*/NULL);
	}

IL_009e:
	{
		goto IL_00aa;
	}

IL_00a3:
	{
		InternalAsyncResult_t3_115 * L_24 = V_0;
		SslStreamBase_InternalBeginWrite_m3_808(__this, L_24, /*hidden argument*/NULL);
	}

IL_00aa:
	{
		InternalAsyncResult_t3_115 * L_25 = V_0;
		return L_25;
	}
}
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::EndRead(System.IAsyncResult)
extern TypeInfo* InternalAsyncResult_t3_115_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t1_735_il2cpp_TypeInfo_var;
extern TypeInfo* IAsyncResult_t1_27_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4446;
extern Il2CppCodeGenString* _stringLiteral4447;
extern "C" int32_t SslStreamBase_EndRead_m3_811 (SslStreamBase_t3_0 * __this, Object_t * ___asyncResult, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalAsyncResult_t3_115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1400);
		ArgumentNullException_t1_735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		IAsyncResult_t1_27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1035);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4446 = il2cpp_codegen_string_literal_from_index(4446);
		_stringLiteral4447 = il2cpp_codegen_string_literal_from_index(4447);
		s_Il2CppMethodIntialized = true;
	}
	InternalAsyncResult_t3_115 * V_0 = {0};
	{
		SslStreamBase_checkDisposed_m3_830(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___asyncResult;
		V_0 = ((InternalAsyncResult_t3_115 *)IsInstClass(L_0, InternalAsyncResult_t3_115_il2cpp_TypeInfo_var));
		InternalAsyncResult_t3_115 * L_1 = V_0;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentNullException_t1_735 * L_2 = (ArgumentNullException_t1_735 *)il2cpp_codegen_object_new (ArgumentNullException_t1_735_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1_4988(L_2, _stringLiteral4446, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001e:
	{
		Object_t * L_3 = ___asyncResult;
		NullCheck(L_3);
		bool L_4 = (bool)InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_IsCompleted() */, IAsyncResult_t1_27_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_004c;
		}
	}
	{
		Object_t * L_5 = ___asyncResult;
		NullCheck(L_5);
		WaitHandle_t1_454 * L_6 = (WaitHandle_t1_454 *)InterfaceFuncInvoker0< WaitHandle_t1_454 * >::Invoke(1 /* System.Threading.WaitHandle System.IAsyncResult::get_AsyncWaitHandle() */, IAsyncResult_t1_27_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker2< bool, int32_t, bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean) */, L_6, ((int32_t)300000), 0);
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		TlsException_t3_117 * L_8 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_8, ((int32_t)80), _stringLiteral4447, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_004c:
	{
		InternalAsyncResult_t3_115 * L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = InternalAsyncResult_get_CompletedWithError_m3_785(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		InternalAsyncResult_t3_115 * L_11 = V_0;
		NullCheck(L_11);
		Exception_t1_33 * L_12 = InternalAsyncResult_get_AsyncException_m3_784(L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_005e:
	{
		InternalAsyncResult_t3_115 * L_13 = V_0;
		NullCheck(L_13);
		int32_t L_14 = InternalAsyncResult_get_BytesRead_m3_782(L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::EndWrite(System.IAsyncResult)
extern TypeInfo* InternalAsyncResult_t3_115_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentNullException_t1_735_il2cpp_TypeInfo_var;
extern TypeInfo* IAsyncResult_t1_27_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4448;
extern Il2CppCodeGenString* _stringLiteral4449;
extern "C" void SslStreamBase_EndWrite_m3_812 (SslStreamBase_t3_0 * __this, Object_t * ___asyncResult, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InternalAsyncResult_t3_115_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1400);
		ArgumentNullException_t1_735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		IAsyncResult_t1_27_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1035);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4448 = il2cpp_codegen_string_literal_from_index(4448);
		_stringLiteral4449 = il2cpp_codegen_string_literal_from_index(4449);
		s_Il2CppMethodIntialized = true;
	}
	InternalAsyncResult_t3_115 * V_0 = {0};
	{
		SslStreamBase_checkDisposed_m3_830(__this, /*hidden argument*/NULL);
		Object_t * L_0 = ___asyncResult;
		V_0 = ((InternalAsyncResult_t3_115 *)IsInstClass(L_0, InternalAsyncResult_t3_115_il2cpp_TypeInfo_var));
		InternalAsyncResult_t3_115 * L_1 = V_0;
		if (L_1)
		{
			goto IL_001e;
		}
	}
	{
		ArgumentNullException_t1_735 * L_2 = (ArgumentNullException_t1_735 *)il2cpp_codegen_object_new (ArgumentNullException_t1_735_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1_4988(L_2, _stringLiteral4448, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_2);
	}

IL_001e:
	{
		Object_t * L_3 = ___asyncResult;
		NullCheck(L_3);
		bool L_4 = (bool)InterfaceFuncInvoker0< bool >::Invoke(3 /* System.Boolean System.IAsyncResult::get_IsCompleted() */, IAsyncResult_t1_27_il2cpp_TypeInfo_var, L_3);
		if (L_4)
		{
			goto IL_004c;
		}
	}
	{
		InternalAsyncResult_t3_115 * L_5 = V_0;
		NullCheck(L_5);
		WaitHandle_t1_454 * L_6 = (WaitHandle_t1_454 *)VirtFuncInvoker0< WaitHandle_t1_454 * >::Invoke(5 /* System.Threading.WaitHandle Mono.Security.Protocol.Tls.SslStreamBase/InternalAsyncResult::get_AsyncWaitHandle() */, L_5);
		NullCheck(L_6);
		bool L_7 = (bool)VirtFuncInvoker2< bool, int32_t, bool >::Invoke(9 /* System.Boolean System.Threading.WaitHandle::WaitOne(System.Int32,System.Boolean) */, L_6, ((int32_t)300000), 0);
		if (L_7)
		{
			goto IL_004c;
		}
	}
	{
		TlsException_t3_117 * L_8 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_8, ((int32_t)80), _stringLiteral4449, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_004c:
	{
		InternalAsyncResult_t3_115 * L_9 = V_0;
		NullCheck(L_9);
		bool L_10 = InternalAsyncResult_get_CompletedWithError_m3_785(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005e;
		}
	}
	{
		InternalAsyncResult_t3_115 * L_11 = V_0;
		NullCheck(L_11);
		Exception_t1_33 * L_12 = InternalAsyncResult_get_AsyncException_m3_784(L_11, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_005e:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Close()
extern "C" void SslStreamBase_Close_m3_813 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		Stream_Close_m1_2424(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Flush()
extern "C" void SslStreamBase_Flush_m3_814 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		SslStreamBase_checkDisposed_m3_830(__this, /*hidden argument*/NULL);
		Stream_t1_226 * L_0 = (__this->___innerStream_3);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(18 /* System.Void System.IO.Stream::Flush() */, L_0);
		return;
	}
}
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[])
extern "C" int32_t SslStreamBase_Read_m3_815 (SslStreamBase_t3_0 * __this, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		ByteU5BU5D_t1_72* L_0 = ___buffer;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(19 /* System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_0, 0, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length)))));
		return L_2;
	}
}
// System.Int32 Mono.Security.Protocol.Tls.SslStreamBase::Read(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t1_735_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var;
extern TypeInfo* SslStreamBase_t3_0_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t1_33_il2cpp_TypeInfo_var;
extern TypeInfo* IOException_t1_233_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral809;
extern Il2CppCodeGenString* _stringLiteral4440;
extern Il2CppCodeGenString* _stringLiteral4441;
extern Il2CppCodeGenString* _stringLiteral4442;
extern Il2CppCodeGenString* _stringLiteral4443;
extern Il2CppCodeGenString* _stringLiteral4379;
extern Il2CppCodeGenString* _stringLiteral4444;
extern "C" int32_t SslStreamBase_Read_m3_816 (SslStreamBase_t3_0 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1_735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		SslStreamBase_t3_0_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1397);
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		Exception_t1_33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IOException_t1_233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		_stringLiteral809 = il2cpp_codegen_string_literal_from_index(809);
		_stringLiteral4440 = il2cpp_codegen_string_literal_from_index(4440);
		_stringLiteral4441 = il2cpp_codegen_string_literal_from_index(4441);
		_stringLiteral4442 = il2cpp_codegen_string_literal_from_index(4442);
		_stringLiteral4443 = il2cpp_codegen_string_literal_from_index(4443);
		_stringLiteral4379 = il2cpp_codegen_string_literal_from_index(4379);
		_stringLiteral4444 = il2cpp_codegen_string_literal_from_index(4444);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	int32_t V_1 = 0;
	bool V_2 = false;
	ByteU5BU5D_t1_72* V_3 = {0};
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	bool V_6 = false;
	ByteU5BU5D_t1_72* V_7 = {0};
	int64_t V_8 = 0;
	ByteU5BU5D_t1_72* V_9 = {0};
	int64_t V_10 = 0;
	int32_t V_11 = 0;
	TlsException_t3_117 * V_12 = {0};
	Exception_t1_33 * V_13 = {0};
	int32_t V_14 = 0;
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SslStreamBase_checkDisposed_m3_830(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1_735 * L_1 = (ArgumentNullException_t1_735 *)il2cpp_codegen_object_new (ArgumentNullException_t1_735_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1_4988(L_1, _stringLiteral809, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		int32_t L_2 = ___offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_3 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_3, _stringLiteral4440, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0029:
	{
		int32_t L_4 = ___offset;
		ByteU5BU5D_t1_72* L_5 = ___buffer;
		NullCheck(L_5);
		if ((((int32_t)L_4) <= ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_5)->max_length)))))))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_6 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_6, _stringLiteral4441, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_003d:
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_8 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_8, _stringLiteral4442, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_004f:
	{
		int32_t L_9 = ___count;
		ByteU5BU5D_t1_72* L_10 = ___buffer;
		NullCheck(L_10);
		int32_t L_11 = ___offset;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length))))-(int32_t)L_11)))))
		{
			goto IL_0065;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_12 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_12, _stringLiteral4443, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0065:
	{
		Context_t3_88 * L_13 = (__this->___context_5);
		NullCheck(L_13);
		int32_t L_14 = Context_get_HandshakeState_m3_591(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_007c;
		}
	}
	{
		SslStreamBase_NegotiateHandshake_m3_797(__this, /*hidden argument*/NULL);
	}

IL_007c:
	{
		Object_t * L_15 = (__this->___read_11);
		V_0 = L_15;
		Object_t * L_16 = V_0;
		Monitor_Enter_m1_4831(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
	}

IL_0089:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			{
				IL2CPP_RUNTIME_CLASS_INIT(SslStreamBase_t3_0_il2cpp_TypeInfo_var);
				ManualResetEvent_t1_248 * L_17 = ((SslStreamBase_t3_0_StaticFields*)SslStreamBase_t3_0_il2cpp_TypeInfo_var->static_fields)->___record_processing_2;
				NullCheck(L_17);
				EventWaitHandle_Reset_m1_4818(L_17, /*hidden argument*/NULL);
				MemoryStream_t1_250 * L_18 = (__this->___inputBuffer_4);
				NullCheck(L_18);
				int64_t L_19 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Position() */, L_18);
				if ((((int64_t)L_19) <= ((int64_t)(((int64_t)((int64_t)0))))))
				{
					goto IL_00fc;
				}
			}

IL_00a6:
			{
				MemoryStream_t1_250 * L_20 = (__this->___inputBuffer_4);
				NullCheck(L_20);
				int64_t L_21 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Position() */, L_20);
				MemoryStream_t1_250 * L_22 = (__this->___inputBuffer_4);
				NullCheck(L_22);
				int64_t L_23 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_22);
				if ((!(((uint64_t)L_21) == ((uint64_t)L_23))))
				{
					goto IL_00d3;
				}
			}

IL_00c1:
			{
				MemoryStream_t1_250 * L_24 = (__this->___inputBuffer_4);
				NullCheck(L_24);
				VirtActionInvoker1< int64_t >::Invoke(22 /* System.Void System.IO.MemoryStream::SetLength(System.Int64) */, L_24, (((int64_t)((int64_t)0))));
				goto IL_00fc;
			}

IL_00d3:
			{
				MemoryStream_t1_250 * L_25 = (__this->___inputBuffer_4);
				ByteU5BU5D_t1_72* L_26 = ___buffer;
				int32_t L_27 = ___offset;
				int32_t L_28 = ___count;
				NullCheck(L_25);
				int32_t L_29 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(19 /* System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32) */, L_25, L_26, L_27, L_28);
				V_1 = L_29;
				int32_t L_30 = V_1;
				if ((((int32_t)L_30) <= ((int32_t)0)))
				{
					goto IL_00fc;
				}
			}

IL_00e9:
			{
				IL2CPP_RUNTIME_CLASS_INIT(SslStreamBase_t3_0_il2cpp_TypeInfo_var);
				ManualResetEvent_t1_248 * L_31 = ((SslStreamBase_t3_0_StaticFields*)SslStreamBase_t3_0_il2cpp_TypeInfo_var->static_fields)->___record_processing_2;
				NullCheck(L_31);
				EventWaitHandle_Set_m1_4819(L_31, /*hidden argument*/NULL);
				int32_t L_32 = V_1;
				V_14 = L_32;
				IL2CPP_LEAVE(0x335, FINALLY_032e);
			}

IL_00fc:
			{
				V_2 = 0;
			}

IL_00fe:
			{
				MemoryStream_t1_250 * L_33 = (__this->___recordStream_15);
				NullCheck(L_33);
				int64_t L_34 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Position() */, L_33);
				if (!L_34)
				{
					goto IL_0114;
				}
			}

IL_010e:
			{
				bool L_35 = V_2;
				if (!L_35)
				{
					goto IL_01cb;
				}
			}

IL_0114:
			{
				V_2 = 0;
				V_3 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, ((int32_t)16384)));
				V_4 = 0;
				int32_t L_36 = ___count;
				if ((!(((uint32_t)L_36) == ((uint32_t)1))))
				{
					goto IL_014e;
				}
			}

IL_012b:
			{
				Stream_t1_226 * L_37 = (__this->___innerStream_3);
				NullCheck(L_37);
				int32_t L_38 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(20 /* System.Int32 System.IO.Stream::ReadByte() */, L_37);
				V_5 = L_38;
				int32_t L_39 = V_5;
				if ((((int32_t)L_39) < ((int32_t)0)))
				{
					goto IL_0149;
				}
			}

IL_0140:
			{
				ByteU5BU5D_t1_72* L_40 = V_3;
				int32_t L_41 = V_5;
				NullCheck(L_40);
				IL2CPP_ARRAY_BOUNDS_CHECK(L_40, 0);
				*((uint8_t*)(uint8_t*)SZArrayLdElema(L_40, 0, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)L_41)));
				V_4 = 1;
			}

IL_0149:
			{
				goto IL_0160;
			}

IL_014e:
			{
				Stream_t1_226 * L_42 = (__this->___innerStream_3);
				ByteU5BU5D_t1_72* L_43 = V_3;
				ByteU5BU5D_t1_72* L_44 = V_3;
				NullCheck(L_44);
				NullCheck(L_42);
				int32_t L_45 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(19 /* System.Int32 System.IO.Stream::Read(System.Byte[],System.Int32,System.Int32) */, L_42, L_43, 0, (((int32_t)((int32_t)(((Array_t *)L_44)->max_length)))));
				V_4 = L_45;
			}

IL_0160:
			{
				int32_t L_46 = V_4;
				if ((((int32_t)L_46) <= ((int32_t)0)))
				{
					goto IL_01b8;
				}
			}

IL_0168:
			{
				MemoryStream_t1_250 * L_47 = (__this->___recordStream_15);
				NullCheck(L_47);
				int64_t L_48 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_47);
				if ((((int64_t)L_48) <= ((int64_t)(((int64_t)((int64_t)0))))))
				{
					goto IL_01a4;
				}
			}

IL_017a:
			{
				MemoryStream_t1_250 * L_49 = (__this->___recordStream_15);
				NullCheck(L_49);
				int64_t L_50 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Position() */, L_49);
				MemoryStream_t1_250 * L_51 = (__this->___recordStream_15);
				NullCheck(L_51);
				int64_t L_52 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_51);
				if ((((int64_t)L_50) == ((int64_t)L_52)))
				{
					goto IL_01a4;
				}
			}

IL_0195:
			{
				MemoryStream_t1_250 * L_53 = (__this->___recordStream_15);
				NullCheck(L_53);
				VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(21 /* System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin) */, L_53, (((int64_t)((int64_t)0))), 2);
			}

IL_01a4:
			{
				MemoryStream_t1_250 * L_54 = (__this->___recordStream_15);
				ByteU5BU5D_t1_72* L_55 = V_3;
				int32_t L_56 = V_4;
				NullCheck(L_54);
				VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_54, L_55, 0, L_56);
				goto IL_01cb;
			}

IL_01b8:
			{
				IL2CPP_RUNTIME_CLASS_INIT(SslStreamBase_t3_0_il2cpp_TypeInfo_var);
				ManualResetEvent_t1_248 * L_57 = ((SslStreamBase_t3_0_StaticFields*)SslStreamBase_t3_0_il2cpp_TypeInfo_var->static_fields)->___record_processing_2;
				NullCheck(L_57);
				EventWaitHandle_Set_m1_4819(L_57, /*hidden argument*/NULL);
				V_14 = 0;
				IL2CPP_LEAVE(0x335, FINALLY_032e);
			}

IL_01cb:
			{
				V_6 = 0;
				MemoryStream_t1_250 * L_58 = (__this->___recordStream_15);
				NullCheck(L_58);
				VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_58, (((int64_t)((int64_t)0))));
				V_7 = (ByteU5BU5D_t1_72*)NULL;
				MemoryStream_t1_250 * L_59 = (__this->___recordStream_15);
				NullCheck(L_59);
				int64_t L_60 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_59);
				if ((((int64_t)L_60) < ((int64_t)(((int64_t)((int64_t)5))))))
				{
					goto IL_0209;
				}
			}

IL_01f0:
			{
				RecordProtocol_t3_93 * L_61 = (__this->___protocol_6);
				MemoryStream_t1_250 * L_62 = (__this->___recordStream_15);
				NullCheck(L_61);
				ByteU5BU5D_t1_72* L_63 = RecordProtocol_ReceiveRecord_m3_673(L_61, L_62, /*hidden argument*/NULL);
				V_7 = L_63;
				ByteU5BU5D_t1_72* L_64 = V_7;
				V_2 = ((((Object_t*)(ByteU5BU5D_t1_72*)L_64) == ((Object_t*)(Object_t *)NULL))? 1 : 0);
			}

IL_0209:
			{
				goto IL_02f0;
			}

IL_020e:
			{
				MemoryStream_t1_250 * L_65 = (__this->___recordStream_15);
				NullCheck(L_65);
				int64_t L_66 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_65);
				MemoryStream_t1_250 * L_67 = (__this->___recordStream_15);
				NullCheck(L_67);
				int64_t L_68 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Position() */, L_67);
				V_8 = ((int64_t)((int64_t)L_66-(int64_t)L_68));
				V_9 = (ByteU5BU5D_t1_72*)NULL;
				int64_t L_69 = V_8;
				if ((((int64_t)L_69) <= ((int64_t)(((int64_t)((int64_t)0))))))
				{
					goto IL_0250;
				}
			}

IL_0233:
			{
				int64_t L_70 = V_8;
				if ((int64_t)(L_70) > INTPTR_MAX) il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_overflow_exception());
				V_9 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, (((intptr_t)L_70))));
				MemoryStream_t1_250 * L_71 = (__this->___recordStream_15);
				ByteU5BU5D_t1_72* L_72 = V_9;
				ByteU5BU5D_t1_72* L_73 = V_9;
				NullCheck(L_73);
				NullCheck(L_71);
				VirtFuncInvoker3< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(19 /* System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32) */, L_71, L_72, 0, (((int32_t)((int32_t)(((Array_t *)L_73)->max_length)))));
			}

IL_0250:
			{
				MemoryStream_t1_250 * L_74 = (__this->___inputBuffer_4);
				NullCheck(L_74);
				int64_t L_75 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Position() */, L_74);
				V_10 = L_75;
				ByteU5BU5D_t1_72* L_76 = V_7;
				NullCheck(L_76);
				if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_76)->max_length))))) <= ((int32_t)0)))
				{
					goto IL_029a;
				}
			}

IL_0267:
			{
				MemoryStream_t1_250 * L_77 = (__this->___inputBuffer_4);
				NullCheck(L_77);
				VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(21 /* System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin) */, L_77, (((int64_t)((int64_t)0))), 2);
				MemoryStream_t1_250 * L_78 = (__this->___inputBuffer_4);
				ByteU5BU5D_t1_72* L_79 = V_7;
				ByteU5BU5D_t1_72* L_80 = V_7;
				NullCheck(L_80);
				NullCheck(L_78);
				VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_78, L_79, 0, (((int32_t)((int32_t)(((Array_t *)L_80)->max_length)))));
				MemoryStream_t1_250 * L_81 = (__this->___inputBuffer_4);
				int64_t L_82 = V_10;
				NullCheck(L_81);
				VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(21 /* System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin) */, L_81, L_82, 0);
				V_6 = 1;
			}

IL_029a:
			{
				MemoryStream_t1_250 * L_83 = (__this->___recordStream_15);
				NullCheck(L_83);
				VirtActionInvoker1< int64_t >::Invoke(22 /* System.Void System.IO.MemoryStream::SetLength(System.Int64) */, L_83, (((int64_t)((int64_t)0))));
				V_7 = (ByteU5BU5D_t1_72*)NULL;
				int64_t L_84 = V_8;
				if ((((int64_t)L_84) <= ((int64_t)(((int64_t)((int64_t)0))))))
				{
					goto IL_02c5;
				}
			}

IL_02b3:
			{
				MemoryStream_t1_250 * L_85 = (__this->___recordStream_15);
				ByteU5BU5D_t1_72* L_86 = V_9;
				ByteU5BU5D_t1_72* L_87 = V_9;
				NullCheck(L_87);
				NullCheck(L_85);
				VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_85, L_86, 0, (((int32_t)((int32_t)(((Array_t *)L_87)->max_length)))));
			}

IL_02c5:
			{
				bool L_88 = V_6;
				if (!L_88)
				{
					goto IL_02f0;
				}
			}

IL_02cc:
			{
				MemoryStream_t1_250 * L_89 = (__this->___inputBuffer_4);
				ByteU5BU5D_t1_72* L_90 = ___buffer;
				int32_t L_91 = ___offset;
				int32_t L_92 = ___count;
				NullCheck(L_89);
				int32_t L_93 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(19 /* System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32) */, L_89, L_90, L_91, L_92);
				V_11 = L_93;
				IL2CPP_RUNTIME_CLASS_INIT(SslStreamBase_t3_0_il2cpp_TypeInfo_var);
				ManualResetEvent_t1_248 * L_94 = ((SslStreamBase_t3_0_StaticFields*)SslStreamBase_t3_0_il2cpp_TypeInfo_var->static_fields)->___record_processing_2;
				NullCheck(L_94);
				EventWaitHandle_Set_m1_4819(L_94, /*hidden argument*/NULL);
				int32_t L_95 = V_11;
				V_14 = L_95;
				IL2CPP_LEAVE(0x335, FINALLY_032e);
			}

IL_02f0:
			{
				ByteU5BU5D_t1_72* L_96 = V_7;
				if (L_96)
				{
					goto IL_020e;
				}
			}

IL_02f7:
			{
				goto IL_00fe;
			}

IL_02fc:
			{
				goto IL_0329;
			}
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t1_33 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (TlsException_t3_117_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0301;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t1_33_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_0315;
			throw e;
		}

CATCH_0301:
		{ // begin catch(Mono.Security.Protocol.Tls.TlsException)
			{
				V_12 = ((TlsException_t3_117 *)__exception_local);
				TlsException_t3_117 * L_97 = V_12;
				IOException_t1_233 * L_98 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
				IOException__ctor_m1_2344(L_98, _stringLiteral4379, L_97, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_98);
			}

IL_0310:
			{
				goto IL_0329;
			}
		} // end catch (depth: 2)

CATCH_0315:
		{ // begin catch(System.Exception)
			{
				V_13 = ((Exception_t1_33 *)__exception_local);
				Exception_t1_33 * L_99 = V_13;
				IOException_t1_233 * L_100 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
				IOException__ctor_m1_2344(L_100, _stringLiteral4444, L_99, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_100);
			}

IL_0324:
			{
				goto IL_0329;
			}
		} // end catch (depth: 2)

IL_0329:
		{
			IL2CPP_LEAVE(0x335, FINALLY_032e);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_032e;
	}

FINALLY_032e:
	{ // begin finally (depth: 1)
		Object_t * L_101 = V_0;
		Monitor_Exit_m1_4832(NULL /*static, unused*/, L_101, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(814)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(814)
	{
		IL2CPP_JUMP_TBL(0x335, IL_0335)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_0335:
	{
		int32_t L_102 = V_14;
		return L_102;
	}
}
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::Seek(System.Int64,System.IO.SeekOrigin)
extern TypeInfo* NotSupportedException_t1_793_il2cpp_TypeInfo_var;
extern "C" int64_t SslStreamBase_Seek_m3_817 (SslStreamBase_t3_0 * __this, int64_t ___offset, int32_t ___origin, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t1_793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1_793 * L_0 = (NotSupportedException_t1_793 *)il2cpp_codegen_object_new (NotSupportedException_t1_793_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1_5657(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::SetLength(System.Int64)
extern TypeInfo* NotSupportedException_t1_793_il2cpp_TypeInfo_var;
extern "C" void SslStreamBase_SetLength_m3_818 (SslStreamBase_t3_0 * __this, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t1_793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1_793 * L_0 = (NotSupportedException_t1_793 *)il2cpp_codegen_object_new (NotSupportedException_t1_793_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1_5657(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[])
extern "C" void SslStreamBase_Write_m3_819 (SslStreamBase_t3_0 * __this, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		ByteU5BU5D_t1_72* L_0 = ___buffer;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		NullCheck(L_1);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_0, 0, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length)))));
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Write(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* ArgumentNullException_t1_735_il2cpp_TypeInfo_var;
extern TypeInfo* ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t1_33_il2cpp_TypeInfo_var;
extern TypeInfo* IOException_t1_233_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral809;
extern Il2CppCodeGenString* _stringLiteral4440;
extern Il2CppCodeGenString* _stringLiteral4441;
extern Il2CppCodeGenString* _stringLiteral4442;
extern Il2CppCodeGenString* _stringLiteral4443;
extern Il2CppCodeGenString* _stringLiteral4379;
extern Il2CppCodeGenString* _stringLiteral4445;
extern "C" void SslStreamBase_Write_m3_820 (SslStreamBase_t3_0 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentNullException_t1_735_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(2);
		ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(27);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		Exception_t1_33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		IOException_t1_233_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(223);
		_stringLiteral809 = il2cpp_codegen_string_literal_from_index(809);
		_stringLiteral4440 = il2cpp_codegen_string_literal_from_index(4440);
		_stringLiteral4441 = il2cpp_codegen_string_literal_from_index(4441);
		_stringLiteral4442 = il2cpp_codegen_string_literal_from_index(4442);
		_stringLiteral4443 = il2cpp_codegen_string_literal_from_index(4443);
		_stringLiteral4379 = il2cpp_codegen_string_literal_from_index(4379);
		_stringLiteral4445 = il2cpp_codegen_string_literal_from_index(4445);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	ByteU5BU5D_t1_72* V_1 = {0};
	TlsException_t3_117 * V_2 = {0};
	Exception_t1_33 * V_3 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		SslStreamBase_checkDisposed_m3_830(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_0 = ___buffer;
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		ArgumentNullException_t1_735 * L_1 = (ArgumentNullException_t1_735 *)il2cpp_codegen_object_new (ArgumentNullException_t1_735_il2cpp_TypeInfo_var);
		ArgumentNullException__ctor_m1_4988(L_1, _stringLiteral809, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0017:
	{
		int32_t L_2 = ___offset;
		if ((((int32_t)L_2) >= ((int32_t)0)))
		{
			goto IL_0029;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_3 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_3, _stringLiteral4440, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_3);
	}

IL_0029:
	{
		int32_t L_4 = ___offset;
		ByteU5BU5D_t1_72* L_5 = ___buffer;
		NullCheck(L_5);
		if ((((int32_t)L_4) <= ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_5)->max_length)))))))
		{
			goto IL_003d;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_6 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_6, _stringLiteral4441, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_003d:
	{
		int32_t L_7 = ___count;
		if ((((int32_t)L_7) >= ((int32_t)0)))
		{
			goto IL_004f;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_8 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_8, _stringLiteral4442, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_004f:
	{
		int32_t L_9 = ___count;
		ByteU5BU5D_t1_72* L_10 = ___buffer;
		NullCheck(L_10);
		int32_t L_11 = ___offset;
		if ((((int32_t)L_9) <= ((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length))))-(int32_t)L_11)))))
		{
			goto IL_0065;
		}
	}
	{
		ArgumentOutOfRangeException_t1_736 * L_12 = (ArgumentOutOfRangeException_t1_736 *)il2cpp_codegen_object_new (ArgumentOutOfRangeException_t1_736_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m1_4992(L_12, _stringLiteral4443, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_12);
	}

IL_0065:
	{
		Context_t3_88 * L_13 = (__this->___context_5);
		NullCheck(L_13);
		int32_t L_14 = Context_get_HandshakeState_m3_591(L_13, /*hidden argument*/NULL);
		if ((((int32_t)L_14) == ((int32_t)2)))
		{
			goto IL_007c;
		}
	}
	{
		SslStreamBase_NegotiateHandshake_m3_797(__this, /*hidden argument*/NULL);
	}

IL_007c:
	{
		Object_t * L_15 = (__this->___write_12);
		V_0 = L_15;
		Object_t * L_16 = V_0;
		Monitor_Enter_m1_4831(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
	}

IL_0089:
	try
	{ // begin try (depth: 1)
		try
		{ // begin try (depth: 2)
			RecordProtocol_t3_93 * L_17 = (__this->___protocol_6);
			ByteU5BU5D_t1_72* L_18 = ___buffer;
			int32_t L_19 = ___offset;
			int32_t L_20 = ___count;
			NullCheck(L_17);
			ByteU5BU5D_t1_72* L_21 = RecordProtocol_EncodeRecord_m3_688(L_17, ((int32_t)23), L_18, L_19, L_20, /*hidden argument*/NULL);
			V_1 = L_21;
			Stream_t1_226 * L_22 = (__this->___innerStream_3);
			ByteU5BU5D_t1_72* L_23 = V_1;
			ByteU5BU5D_t1_72* L_24 = V_1;
			NullCheck(L_24);
			NullCheck(L_22);
			VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.Stream::Write(System.Byte[],System.Int32,System.Int32) */, L_22, L_23, 0, (((int32_t)((int32_t)(((Array_t *)L_24)->max_length)))));
			goto IL_00ea;
		} // end try (depth: 2)
		catch(Il2CppExceptionWrapper& e)
		{
			__exception_local = (Exception_t1_33 *)e.ex;
			if(il2cpp_codegen_class_is_assignable_from (TlsException_t3_117_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_00af;
			if(il2cpp_codegen_class_is_assignable_from (Exception_t1_33_il2cpp_TypeInfo_var, e.ex->object.klass))
				goto CATCH_00d8;
			throw e;
		}

CATCH_00af:
		{ // begin catch(Mono.Security.Protocol.Tls.TlsException)
			{
				V_2 = ((TlsException_t3_117 *)__exception_local);
				RecordProtocol_t3_93 * L_25 = (__this->___protocol_6);
				TlsException_t3_117 * L_26 = V_2;
				NullCheck(L_26);
				Alert_t3_85 * L_27 = TlsException_get_Alert_m3_851(L_26, /*hidden argument*/NULL);
				NullCheck(L_25);
				RecordProtocol_SendAlert_m3_680(L_25, L_27, /*hidden argument*/NULL);
				VirtActionInvoker0::Invoke(13 /* System.Void Mono.Security.Protocol.Tls.SslStreamBase::Close() */, __this);
				TlsException_t3_117 * L_28 = V_2;
				IOException_t1_233 * L_29 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
				IOException__ctor_m1_2344(L_29, _stringLiteral4379, L_28, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_29);
			}

IL_00d3:
			{
				goto IL_00ea;
			}
		} // end catch (depth: 2)

CATCH_00d8:
		{ // begin catch(System.Exception)
			{
				V_3 = ((Exception_t1_33 *)__exception_local);
				Exception_t1_33 * L_30 = V_3;
				IOException_t1_233 * L_31 = (IOException_t1_233 *)il2cpp_codegen_object_new (IOException_t1_233_il2cpp_TypeInfo_var);
				IOException__ctor_m1_2344(L_31, _stringLiteral4445, L_30, /*hidden argument*/NULL);
				il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_31);
			}

IL_00e5:
			{
				goto IL_00ea;
			}
		} // end catch (depth: 2)

IL_00ea:
		{
			IL2CPP_LEAVE(0xF6, FINALLY_00ef);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_00ef;
	}

FINALLY_00ef:
	{ // begin finally (depth: 1)
		Object_t * L_32 = V_0;
		Monitor_Exit_m1_4832(NULL /*static, unused*/, L_32, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(239)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(239)
	{
		IL2CPP_JUMP_TBL(0xF6, IL_00f6)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_00f6:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanRead()
extern "C" bool SslStreamBase_get_CanRead_m3_821 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		Stream_t1_226 * L_0 = (__this->___innerStream_3);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(5 /* System.Boolean System.IO.Stream::get_CanRead() */, L_0);
		return L_1;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanSeek()
extern "C" bool SslStreamBase_get_CanSeek_m3_822 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		return 0;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.SslStreamBase::get_CanWrite()
extern "C" bool SslStreamBase_get_CanWrite_m3_823 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		Stream_t1_226 * L_0 = (__this->___innerStream_3);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.IO.Stream::get_CanWrite() */, L_0);
		return L_1;
	}
}
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Length()
extern TypeInfo* NotSupportedException_t1_793_il2cpp_TypeInfo_var;
extern "C" int64_t SslStreamBase_get_Length_m3_824 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t1_793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1_793 * L_0 = (NotSupportedException_t1_793 *)il2cpp_codegen_object_new (NotSupportedException_t1_793_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1_5657(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Int64 Mono.Security.Protocol.Tls.SslStreamBase::get_Position()
extern TypeInfo* NotSupportedException_t1_793_il2cpp_TypeInfo_var;
extern "C" int64_t SslStreamBase_get_Position_m3_825 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t1_793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1_793 * L_0 = (NotSupportedException_t1_793 *)il2cpp_codegen_object_new (NotSupportedException_t1_793_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1_5657(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::set_Position(System.Int64)
extern TypeInfo* NotSupportedException_t1_793_il2cpp_TypeInfo_var;
extern "C" void SslStreamBase_set_Position_m3_826 (SslStreamBase_t3_0 * __this, int64_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t1_793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1_793 * L_0 = (NotSupportedException_t1_793 *)il2cpp_codegen_object_new (NotSupportedException_t1_793_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1_5657(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Finalize()
extern "C" void SslStreamBase_Finalize_m3_827 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);

IL_0000:
	try
	{ // begin try (depth: 1)
		VirtActionInvoker1< bool >::Invoke(12 /* System.Void Mono.Security.Protocol.Tls.SslStreamBase::Dispose(System.Boolean) */, __this, 0);
		IL2CPP_LEAVE(0x13, FINALLY_000c);
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_000c;
	}

FINALLY_000c:
	{ // begin finally (depth: 1)
		Object_Finalize_m1_3(__this, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(12)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(12)
	{
		IL2CPP_JUMP_TBL(0x13, IL_0013)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_0013:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::Dispose(System.Boolean)
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern "C" void SslStreamBase_Dispose_m3_828 (SslStreamBase_t3_0 * __this, bool ___disposing, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		s_Il2CppMethodIntialized = true;
	}
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		bool L_0 = (__this->___disposed_8);
		il2cpp_codegen_memory_barrier();
		if (L_0)
		{
			goto IL_008a;
		}
	}
	{
		bool L_1 = ___disposing;
		if (!L_1)
		{
			goto IL_007a;
		}
	}
	{
		Stream_t1_226 * L_2 = (__this->___innerStream_3);
		if (!L_2)
		{
			goto IL_006c;
		}
	}
	{
		Context_t3_88 * L_3 = (__this->___context_5);
		NullCheck(L_3);
		int32_t L_4 = Context_get_HandshakeState_m3_591(L_3, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_4) == ((uint32_t)2))))
		{
			goto IL_0056;
		}
	}
	{
		Context_t3_88 * L_5 = (__this->___context_5);
		NullCheck(L_5);
		bool L_6 = Context_get_SentConnectionEnd_m3_595(L_5, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0056;
		}
	}

IL_003f:
	try
	{ // begin try (depth: 1)
		RecordProtocol_t3_93 * L_7 = (__this->___protocol_6);
		NullCheck(L_7);
		RecordProtocol_SendAlert_m3_678(L_7, 0, /*hidden argument*/NULL);
		goto IL_0056;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1_33 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Object_t_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0050;
		throw e;
	}

CATCH_0050:
	{ // begin catch(System.Object)
		goto IL_0056;
	} // end catch (depth: 1)

IL_0056:
	{
		bool L_8 = (__this->___ownsStream_7);
		if (!L_8)
		{
			goto IL_006c;
		}
	}
	{
		Stream_t1_226 * L_9 = (__this->___innerStream_3);
		NullCheck(L_9);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_9);
	}

IL_006c:
	{
		__this->___ownsStream_7 = 0;
		__this->___innerStream_3 = (Stream_t1_226 *)NULL;
	}

IL_007a:
	{
		il2cpp_codegen_memory_barrier();
		__this->___disposed_8 = 1;
		bool L_10 = ___disposing;
		Stream_Dispose_m1_2423(__this, L_10, /*hidden argument*/NULL);
	}

IL_008a:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::resetBuffer()
extern "C" void SslStreamBase_resetBuffer_m3_829 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	{
		MemoryStream_t1_250 * L_0 = (__this->___inputBuffer_4);
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(22 /* System.Void System.IO.MemoryStream::SetLength(System.Int64) */, L_0, (((int64_t)((int64_t)0))));
		MemoryStream_t1_250 * L_1 = (__this->___inputBuffer_4);
		NullCheck(L_1);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_1, (((int64_t)((int64_t)0))));
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.SslStreamBase::checkDisposed()
extern TypeInfo* ObjectDisposedException_t1_798_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4450;
extern "C" void SslStreamBase_checkDisposed_m3_830 (SslStreamBase_t3_0 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ObjectDisposedException_t1_798_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(138);
		_stringLiteral4450 = il2cpp_codegen_string_literal_from_index(4450);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___disposed_8);
		il2cpp_codegen_memory_barrier();
		if (!L_0)
		{
			goto IL_0018;
		}
	}
	{
		ObjectDisposedException_t1_798 * L_1 = (ObjectDisposedException_t1_798 *)il2cpp_codegen_object_new (ObjectDisposedException_t1_798_il2cpp_TypeInfo_var);
		ObjectDisposedException__ctor_m1_5762(L_1, _stringLiteral4450, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0018:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsCipherSuite::.ctor(System.Int16,System.String,Mono.Security.Protocol.Tls.CipherAlgorithmType,Mono.Security.Protocol.Tls.HashAlgorithmType,Mono.Security.Protocol.Tls.ExchangeAlgorithmType,System.Boolean,System.Boolean,System.Byte,System.Byte,System.Int16,System.Byte,System.Byte)
extern TypeInfo* Object_t_il2cpp_TypeInfo_var;
extern TypeInfo* CipherSuite_t3_87_il2cpp_TypeInfo_var;
extern "C" void TlsCipherSuite__ctor_m3_831 (TlsCipherSuite_t3_116 * __this, int16_t ___code, String_t* ___name, int32_t ___cipherAlgorithmType, int32_t ___hashAlgorithmType, int32_t ___exchangeAlgorithmType, bool ___exportable, bool ___blockMode, uint8_t ___keyMaterialSize, uint8_t ___expandedKeyMaterialSize, int16_t ___effectiveKeyBytes, uint8_t ___ivSize, uint8_t ___blockSize, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Object_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(0);
		CipherSuite_t3_87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1350);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object_t * L_0 = (Object_t *)il2cpp_codegen_object_new (Object_t_il2cpp_TypeInfo_var);
		Object__ctor_m1_0(L_0, /*hidden argument*/NULL);
		__this->___headerLock_22 = L_0;
		int16_t L_1 = ___code;
		String_t* L_2 = ___name;
		int32_t L_3 = ___cipherAlgorithmType;
		int32_t L_4 = ___hashAlgorithmType;
		int32_t L_5 = ___exchangeAlgorithmType;
		bool L_6 = ___exportable;
		bool L_7 = ___blockMode;
		uint8_t L_8 = ___keyMaterialSize;
		uint8_t L_9 = ___expandedKeyMaterialSize;
		int16_t L_10 = ___effectiveKeyBytes;
		uint8_t L_11 = ___ivSize;
		uint8_t L_12 = ___blockSize;
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
		CipherSuite__ctor_m3_484(__this, L_1, L_2, L_3, L_4, L_5, L_6, L_7, L_8, L_9, L_10, L_11, L_12, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.TlsCipherSuite::ComputeServerRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern TypeInfo* CipherSuite_t3_87_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t1_72* TlsCipherSuite_ComputeServerRecordMAC_m3_832 (TlsCipherSuite_t3_116 * __this, uint8_t ___contentType, ByteU5BU5D_t1_72* ___fragment, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		CipherSuite_t3_87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1350);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	uint64_t V_1 = 0;
	HashAlgorithm_t1_597 * V_2 = {0};
	ByteU5BU5D_t1_72* V_3 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	uint64_t G_B6_0 = 0;
	{
		Object_t * L_0 = (__this->___headerLock_22);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m1_4831(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t1_72* L_2 = (__this->___header_21);
			if (L_2)
			{
				goto IL_0025;
			}
		}

IL_0018:
		{
			__this->___header_21 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, ((int32_t)13)));
		}

IL_0025:
		{
			Context_t3_88 * L_3 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
			if (!((ClientContext_t3_91 *)IsInstClass(L_3, ClientContext_t3_91_il2cpp_TypeInfo_var)))
			{
				goto IL_0045;
			}
		}

IL_0035:
		{
			Context_t3_88 * L_4 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
			NullCheck(L_4);
			uint64_t L_5 = Context_get_ReadSequenceNumber_m3_602(L_4, /*hidden argument*/NULL);
			G_B6_0 = L_5;
			goto IL_0050;
		}

IL_0045:
		{
			Context_t3_88 * L_6 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
			NullCheck(L_6);
			uint64_t L_7 = Context_get_WriteSequenceNumber_m3_600(L_6, /*hidden argument*/NULL);
			G_B6_0 = L_7;
		}

IL_0050:
		{
			V_1 = G_B6_0;
			ByteU5BU5D_t1_72* L_8 = (__this->___header_21);
			uint64_t L_9 = V_1;
			CipherSuite_Write_m3_507(__this, L_8, 0, L_9, /*hidden argument*/NULL);
			ByteU5BU5D_t1_72* L_10 = (__this->___header_21);
			uint8_t L_11 = ___contentType;
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 8);
			*((uint8_t*)(uint8_t*)SZArrayLdElema(L_10, 8, sizeof(uint8_t))) = (uint8_t)L_11;
			ByteU5BU5D_t1_72* L_12 = (__this->___header_21);
			Context_t3_88 * L_13 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
			NullCheck(L_13);
			int16_t L_14 = Context_get_Protocol_m3_582(L_13, /*hidden argument*/NULL);
			CipherSuite_Write_m3_506(__this, L_12, ((int32_t)9), L_14, /*hidden argument*/NULL);
			ByteU5BU5D_t1_72* L_15 = (__this->___header_21);
			ByteU5BU5D_t1_72* L_16 = ___fragment;
			NullCheck(L_16);
			CipherSuite_Write_m3_506(__this, L_15, ((int32_t)11), (((int16_t)((int16_t)(((int32_t)((int32_t)(((Array_t *)L_16)->max_length))))))), /*hidden argument*/NULL);
			KeyedHashAlgorithm_t1_596 * L_17 = CipherSuite_get_ServerHMAC_m3_489(__this, /*hidden argument*/NULL);
			V_2 = L_17;
			HashAlgorithm_t1_597 * L_18 = V_2;
			ByteU5BU5D_t1_72* L_19 = (__this->___header_21);
			ByteU5BU5D_t1_72* L_20 = (__this->___header_21);
			NullCheck(L_20);
			ByteU5BU5D_t1_72* L_21 = (__this->___header_21);
			NullCheck(L_18);
			VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_18, L_19, 0, (((int32_t)((int32_t)(((Array_t *)L_20)->max_length)))), L_21, 0);
			HashAlgorithm_t1_597 * L_22 = V_2;
			ByteU5BU5D_t1_72* L_23 = ___fragment;
			ByteU5BU5D_t1_72* L_24 = ___fragment;
			NullCheck(L_24);
			ByteU5BU5D_t1_72* L_25 = ___fragment;
			NullCheck(L_22);
			VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_22, L_23, 0, (((int32_t)((int32_t)(((Array_t *)L_24)->max_length)))), L_25, 0);
			HashAlgorithm_t1_597 * L_26 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
			ByteU5BU5D_t1_72* L_27 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
			NullCheck(L_26);
			VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, 0);
			HashAlgorithm_t1_597 * L_28 = V_2;
			NullCheck(L_28);
			ByteU5BU5D_t1_72* L_29 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_28);
			V_3 = L_29;
			IL2CPP_LEAVE(0xEB, FINALLY_00e4);
		}

IL_00df:
		{
			; // IL_00df: leave IL_00eb
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_00e4;
	}

FINALLY_00e4:
	{ // begin finally (depth: 1)
		Object_t * L_30 = V_0;
		Monitor_Exit_m1_4832(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(228)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(228)
	{
		IL2CPP_JUMP_TBL(0xEB, IL_00eb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_00eb:
	{
		ByteU5BU5D_t1_72* L_31 = V_3;
		return L_31;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.TlsCipherSuite::ComputeClientRecordMAC(Mono.Security.Protocol.Tls.ContentType,System.Byte[])
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern TypeInfo* CipherSuite_t3_87_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t1_72* TlsCipherSuite_ComputeClientRecordMAC_m3_833 (TlsCipherSuite_t3_116 * __this, uint8_t ___contentType, ByteU5BU5D_t1_72* ___fragment, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		CipherSuite_t3_87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1350);
		s_Il2CppMethodIntialized = true;
	}
	Object_t * V_0 = {0};
	uint64_t V_1 = 0;
	HashAlgorithm_t1_597 * V_2 = {0};
	ByteU5BU5D_t1_72* V_3 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	uint64_t G_B6_0 = 0;
	{
		Object_t * L_0 = (__this->___headerLock_22);
		V_0 = L_0;
		Object_t * L_1 = V_0;
		Monitor_Enter_m1_4831(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
	}

IL_000d:
	try
	{ // begin try (depth: 1)
		{
			ByteU5BU5D_t1_72* L_2 = (__this->___header_21);
			if (L_2)
			{
				goto IL_0025;
			}
		}

IL_0018:
		{
			__this->___header_21 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, ((int32_t)13)));
		}

IL_0025:
		{
			Context_t3_88 * L_3 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
			if (!((ClientContext_t3_91 *)IsInstClass(L_3, ClientContext_t3_91_il2cpp_TypeInfo_var)))
			{
				goto IL_0045;
			}
		}

IL_0035:
		{
			Context_t3_88 * L_4 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
			NullCheck(L_4);
			uint64_t L_5 = Context_get_WriteSequenceNumber_m3_600(L_4, /*hidden argument*/NULL);
			G_B6_0 = L_5;
			goto IL_0050;
		}

IL_0045:
		{
			Context_t3_88 * L_6 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
			NullCheck(L_6);
			uint64_t L_7 = Context_get_ReadSequenceNumber_m3_602(L_6, /*hidden argument*/NULL);
			G_B6_0 = L_7;
		}

IL_0050:
		{
			V_1 = G_B6_0;
			ByteU5BU5D_t1_72* L_8 = (__this->___header_21);
			uint64_t L_9 = V_1;
			CipherSuite_Write_m3_507(__this, L_8, 0, L_9, /*hidden argument*/NULL);
			ByteU5BU5D_t1_72* L_10 = (__this->___header_21);
			uint8_t L_11 = ___contentType;
			NullCheck(L_10);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 8);
			*((uint8_t*)(uint8_t*)SZArrayLdElema(L_10, 8, sizeof(uint8_t))) = (uint8_t)L_11;
			ByteU5BU5D_t1_72* L_12 = (__this->___header_21);
			Context_t3_88 * L_13 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
			NullCheck(L_13);
			int16_t L_14 = Context_get_Protocol_m3_582(L_13, /*hidden argument*/NULL);
			CipherSuite_Write_m3_506(__this, L_12, ((int32_t)9), L_14, /*hidden argument*/NULL);
			ByteU5BU5D_t1_72* L_15 = (__this->___header_21);
			ByteU5BU5D_t1_72* L_16 = ___fragment;
			NullCheck(L_16);
			CipherSuite_Write_m3_506(__this, L_15, ((int32_t)11), (((int16_t)((int16_t)(((int32_t)((int32_t)(((Array_t *)L_16)->max_length))))))), /*hidden argument*/NULL);
			KeyedHashAlgorithm_t1_596 * L_17 = CipherSuite_get_ClientHMAC_m3_488(__this, /*hidden argument*/NULL);
			V_2 = L_17;
			HashAlgorithm_t1_597 * L_18 = V_2;
			ByteU5BU5D_t1_72* L_19 = (__this->___header_21);
			ByteU5BU5D_t1_72* L_20 = (__this->___header_21);
			NullCheck(L_20);
			ByteU5BU5D_t1_72* L_21 = (__this->___header_21);
			NullCheck(L_18);
			VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_18, L_19, 0, (((int32_t)((int32_t)(((Array_t *)L_20)->max_length)))), L_21, 0);
			HashAlgorithm_t1_597 * L_22 = V_2;
			ByteU5BU5D_t1_72* L_23 = ___fragment;
			ByteU5BU5D_t1_72* L_24 = ___fragment;
			NullCheck(L_24);
			ByteU5BU5D_t1_72* L_25 = ___fragment;
			NullCheck(L_22);
			VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_22, L_23, 0, (((int32_t)((int32_t)(((Array_t *)L_24)->max_length)))), L_25, 0);
			HashAlgorithm_t1_597 * L_26 = V_2;
			IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
			ByteU5BU5D_t1_72* L_27 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
			NullCheck(L_26);
			VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_26, L_27, 0, 0);
			HashAlgorithm_t1_597 * L_28 = V_2;
			NullCheck(L_28);
			ByteU5BU5D_t1_72* L_29 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_28);
			V_3 = L_29;
			IL2CPP_LEAVE(0xEB, FINALLY_00e4);
		}

IL_00df:
		{
			; // IL_00df: leave IL_00eb
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_00e4;
	}

FINALLY_00e4:
	{ // begin finally (depth: 1)
		Object_t * L_30 = V_0;
		Monitor_Exit_m1_4832(NULL /*static, unused*/, L_30, /*hidden argument*/NULL);
		IL2CPP_END_FINALLY(228)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(228)
	{
		IL2CPP_JUMP_TBL(0xEB, IL_00eb)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_00eb:
	{
		ByteU5BU5D_t1_72* L_31 = V_3;
		return L_31;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsCipherSuite::ComputeMasterSecret(System.Byte[])
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4451;
extern "C" void TlsCipherSuite_ComputeMasterSecret_m3_834 (TlsCipherSuite_t3_116 * __this, ByteU5BU5D_t1_72* ___preMasterSecret, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		_stringLiteral4451 = il2cpp_codegen_string_literal_from_index(4451);
		s_Il2CppMethodIntialized = true;
	}
	{
		Context_t3_88 * L_0 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_1 = ___preMasterSecret;
		NullCheck(L_1);
		NullCheck(L_0);
		Context_set_MasterSecret_m3_613(L_0, ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length)))))), /*hidden argument*/NULL);
		Context_t3_88 * L_2 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_3 = ___preMasterSecret;
		Context_t3_88 * L_4 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t1_72* L_5 = Context_get_RandomCS_m3_608(L_4, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_6 = CipherSuite_PRF_m3_512(__this, L_3, _stringLiteral4451, L_5, ((int32_t)48), /*hidden argument*/NULL);
		NullCheck(L_2);
		Context_set_MasterSecret_m3_613(L_2, L_6, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsCipherSuite::ComputeKeys()
extern TypeInfo* TlsStream_t3_100_il2cpp_TypeInfo_var;
extern TypeInfo* CipherSuite_t3_87_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* ClientSessionCache_t3_95_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4452;
extern Il2CppCodeGenString* _stringLiteral4453;
extern Il2CppCodeGenString* _stringLiteral4454;
extern Il2CppCodeGenString* _stringLiteral4455;
extern "C" void TlsCipherSuite_ComputeKeys_m3_835 (TlsCipherSuite_t3_116 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsStream_t3_100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1352);
		CipherSuite_t3_87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1350);
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		ClientSessionCache_t3_95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1373);
		_stringLiteral4452 = il2cpp_codegen_string_literal_from_index(4452);
		_stringLiteral4453 = il2cpp_codegen_string_literal_from_index(4453);
		_stringLiteral4454 = il2cpp_codegen_string_literal_from_index(4454);
		_stringLiteral4455 = il2cpp_codegen_string_literal_from_index(4455);
		s_Il2CppMethodIntialized = true;
	}
	TlsStream_t3_100 * V_0 = {0};
	ByteU5BU5D_t1_72* V_1 = {0};
	ByteU5BU5D_t1_72* V_2 = {0};
	ByteU5BU5D_t1_72* V_3 = {0};
	{
		Context_t3_88 * L_0 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t1_72* L_1 = Context_get_MasterSecret_m3_612(L_0, /*hidden argument*/NULL);
		Context_t3_88 * L_2 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t1_72* L_3 = Context_get_RandomSC_m3_610(L_2, /*hidden argument*/NULL);
		int32_t L_4 = CipherSuite_get_KeyBlockSize_m3_500(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_5 = CipherSuite_PRF_m3_512(__this, L_1, _stringLiteral4452, L_3, L_4, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_6 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_869(L_6, L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		Context_t3_88 * L_7 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		SecurityParameters_t3_99 * L_8 = Context_get_Negotiating_m3_631(L_7, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_9 = V_0;
		int32_t L_10 = CipherSuite_get_HashSize_m3_493(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_t1_72* L_11 = TlsStream_ReadBytes_m3_881(L_9, L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		SecurityParameters_set_ClientWriteMAC_m3_706(L_8, L_11, /*hidden argument*/NULL);
		Context_t3_88 * L_12 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		SecurityParameters_t3_99 * L_13 = Context_get_Negotiating_m3_631(L_12, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_14 = V_0;
		int32_t L_15 = CipherSuite_get_HashSize_m3_493(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		ByteU5BU5D_t1_72* L_16 = TlsStream_ReadBytes_m3_881(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_13);
		SecurityParameters_set_ServerWriteMAC_m3_708(L_13, L_16, /*hidden argument*/NULL);
		Context_t3_88 * L_17 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_18 = V_0;
		uint8_t L_19 = CipherSuite_get_KeyMaterialSize_m3_499(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		ByteU5BU5D_t1_72* L_20 = TlsStream_ReadBytes_m3_881(L_18, L_19, /*hidden argument*/NULL);
		NullCheck(L_17);
		Context_set_ClientWriteKey_m3_615(L_17, L_20, /*hidden argument*/NULL);
		Context_t3_88 * L_21 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_22 = V_0;
		uint8_t L_23 = CipherSuite_get_KeyMaterialSize_m3_499(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		ByteU5BU5D_t1_72* L_24 = TlsStream_ReadBytes_m3_881(L_22, L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		Context_set_ServerWriteKey_m3_617(L_21, L_24, /*hidden argument*/NULL);
		bool L_25 = CipherSuite_get_IsExportable_m3_498(__this, /*hidden argument*/NULL);
		if (L_25)
		{
			goto IL_0101;
		}
	}
	{
		uint8_t L_26 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		if (!L_26)
		{
			goto IL_00dc;
		}
	}
	{
		Context_t3_88 * L_27 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_28 = V_0;
		uint8_t L_29 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		ByteU5BU5D_t1_72* L_30 = TlsStream_ReadBytes_m3_881(L_28, L_29, /*hidden argument*/NULL);
		NullCheck(L_27);
		Context_set_ClientWriteIV_m3_619(L_27, L_30, /*hidden argument*/NULL);
		Context_t3_88 * L_31 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_32 = V_0;
		uint8_t L_33 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		ByteU5BU5D_t1_72* L_34 = TlsStream_ReadBytes_m3_881(L_32, L_33, /*hidden argument*/NULL);
		NullCheck(L_31);
		Context_set_ServerWriteIV_m3_621(L_31, L_34, /*hidden argument*/NULL);
		goto IL_00fc;
	}

IL_00dc:
	{
		Context_t3_88 * L_35 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_36 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_35);
		Context_set_ClientWriteIV_m3_619(L_35, L_36, /*hidden argument*/NULL);
		Context_t3_88 * L_37 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_38 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_37);
		Context_set_ServerWriteIV_m3_621(L_37, L_38, /*hidden argument*/NULL);
	}

IL_00fc:
	{
		goto IL_022f;
	}

IL_0101:
	{
		Context_t3_88 * L_39 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		ByteU5BU5D_t1_72* L_40 = Context_get_ClientWriteKey_m3_614(L_39, /*hidden argument*/NULL);
		Context_t3_88 * L_41 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_41);
		ByteU5BU5D_t1_72* L_42 = Context_get_RandomCS_m3_608(L_41, /*hidden argument*/NULL);
		uint8_t L_43 = CipherSuite_get_ExpandedKeyMaterialSize_m3_501(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_44 = CipherSuite_PRF_m3_512(__this, L_40, _stringLiteral4453, L_42, L_43, /*hidden argument*/NULL);
		V_1 = L_44;
		Context_t3_88 * L_45 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_45);
		ByteU5BU5D_t1_72* L_46 = Context_get_ServerWriteKey_m3_616(L_45, /*hidden argument*/NULL);
		Context_t3_88 * L_47 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_47);
		ByteU5BU5D_t1_72* L_48 = Context_get_RandomCS_m3_608(L_47, /*hidden argument*/NULL);
		uint8_t L_49 = CipherSuite_get_ExpandedKeyMaterialSize_m3_501(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_50 = CipherSuite_PRF_m3_512(__this, L_46, _stringLiteral4454, L_48, L_49, /*hidden argument*/NULL);
		V_2 = L_50;
		Context_t3_88 * L_51 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_52 = V_1;
		NullCheck(L_51);
		Context_set_ClientWriteKey_m3_615(L_51, L_52, /*hidden argument*/NULL);
		Context_t3_88 * L_53 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_54 = V_2;
		NullCheck(L_53);
		Context_set_ServerWriteKey_m3_617(L_53, L_54, /*hidden argument*/NULL);
		uint8_t L_55 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		if ((((int32_t)L_55) <= ((int32_t)0)))
		{
			goto IL_020f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_56 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		Context_t3_88 * L_57 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_57);
		ByteU5BU5D_t1_72* L_58 = Context_get_RandomCS_m3_608(L_57, /*hidden argument*/NULL);
		uint8_t L_59 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_60 = CipherSuite_PRF_m3_512(__this, L_56, _stringLiteral4455, L_58, ((int32_t)((int32_t)L_59*(int32_t)2)), /*hidden argument*/NULL);
		V_3 = L_60;
		Context_t3_88 * L_61 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		uint8_t L_62 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		Context_set_ClientWriteIV_m3_619(L_61, ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_62)), /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_63 = V_3;
		Context_t3_88 * L_64 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_64);
		ByteU5BU5D_t1_72* L_65 = Context_get_ClientWriteIV_m3_618(L_64, /*hidden argument*/NULL);
		Context_t3_88 * L_66 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_66);
		ByteU5BU5D_t1_72* L_67 = Context_get_ClientWriteIV_m3_618(L_66, /*hidden argument*/NULL);
		NullCheck(L_67);
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_63, 0, (Array_t *)(Array_t *)L_65, 0, (((int32_t)((int32_t)(((Array_t *)L_67)->max_length)))), /*hidden argument*/NULL);
		Context_t3_88 * L_68 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		uint8_t L_69 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		NullCheck(L_68);
		Context_set_ServerWriteIV_m3_621(L_68, ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_69)), /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_70 = V_3;
		uint8_t L_71 = CipherSuite_get_IvSize_m3_503(__this, /*hidden argument*/NULL);
		Context_t3_88 * L_72 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_72);
		ByteU5BU5D_t1_72* L_73 = Context_get_ServerWriteIV_m3_620(L_72, /*hidden argument*/NULL);
		Context_t3_88 * L_74 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		NullCheck(L_74);
		ByteU5BU5D_t1_72* L_75 = Context_get_ServerWriteIV_m3_620(L_74, /*hidden argument*/NULL);
		NullCheck(L_75);
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_70, L_71, (Array_t *)(Array_t *)L_73, 0, (((int32_t)((int32_t)(((Array_t *)L_75)->max_length)))), /*hidden argument*/NULL);
		goto IL_022f;
	}

IL_020f:
	{
		Context_t3_88 * L_76 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_77 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_76);
		Context_set_ClientWriteIV_m3_619(L_76, L_77, /*hidden argument*/NULL);
		Context_t3_88 * L_78 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_79 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_78);
		Context_set_ServerWriteIV_m3_621(L_78, L_79, /*hidden argument*/NULL);
	}

IL_022f:
	{
		Context_t3_88 * L_80 = CipherSuite_get_Context_m3_504(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ClientSessionCache_t3_95_il2cpp_TypeInfo_var);
		ClientSessionCache_SetContextInCache_m3_572(NULL /*static, unused*/, L_80, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_81 = V_0;
		NullCheck(L_81);
		TlsStream_Reset_m3_887(L_81, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::.ctor()
extern TypeInfo* X509CertificateCollection_t2_305_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" void TlsClientSettings__ctor_m3_836 (TlsClientSettings_t3_98 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		X509CertificateCollection_t2_305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(873);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	{
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		X509CertificateCollection_t2_305 * L_0 = (X509CertificateCollection_t2_305 *)il2cpp_codegen_object_new (X509CertificateCollection_t2_305_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2_5506(L_0, /*hidden argument*/NULL);
		__this->___certificates_1 = L_0;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		__this->___targetHost_0 = L_1;
		return;
	}
}
// System.String Mono.Security.Protocol.Tls.TlsClientSettings::get_TargetHost()
extern "C" String_t* TlsClientSettings_get_TargetHost_m3_837 (TlsClientSettings_t3_98 * __this, const MethodInfo* method)
{
	{
		String_t* L_0 = (__this->___targetHost_0);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_TargetHost(System.String)
extern "C" void TlsClientSettings_set_TargetHost_m3_838 (TlsClientSettings_t3_98 * __this, String_t* ___value, const MethodInfo* method)
{
	{
		String_t* L_0 = ___value;
		__this->___targetHost_0 = L_0;
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509CertificateCollection Mono.Security.Protocol.Tls.TlsClientSettings::get_Certificates()
extern "C" X509CertificateCollection_t2_305 * TlsClientSettings_get_Certificates_m3_839 (TlsClientSettings_t3_98 * __this, const MethodInfo* method)
{
	{
		X509CertificateCollection_t2_305 * L_0 = (__this->___certificates_1);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_Certificates(System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" void TlsClientSettings_set_Certificates_m3_840 (TlsClientSettings_t3_98 * __this, X509CertificateCollection_t2_305 * ___value, const MethodInfo* method)
{
	{
		X509CertificateCollection_t2_305 * L_0 = ___value;
		__this->___certificates_1 = L_0;
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.TlsClientSettings::get_ClientCertificate()
extern "C" X509Certificate_t1_572 * TlsClientSettings_get_ClientCertificate_m3_841 (TlsClientSettings_t3_98 * __this, const MethodInfo* method)
{
	{
		X509Certificate_t1_572 * L_0 = (__this->___clientCertificate_2);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::set_ClientCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern "C" void TlsClientSettings_set_ClientCertificate_m3_842 (TlsClientSettings_t3_98 * __this, X509Certificate_t1_572 * ___value, const MethodInfo* method)
{
	{
		X509Certificate_t1_572 * L_0 = ___value;
		__this->___clientCertificate_2 = L_0;
		TlsClientSettings_UpdateCertificateRSA_m3_844(__this, /*hidden argument*/NULL);
		return;
	}
}
// Mono.Security.Cryptography.RSAManaged Mono.Security.Protocol.Tls.TlsClientSettings::get_CertificateRSA()
extern "C" RSAManaged_t3_20 * TlsClientSettings_get_CertificateRSA_m3_843 (TlsClientSettings_t3_98 * __this, const MethodInfo* method)
{
	{
		RSAManaged_t3_20 * L_0 = (__this->___certificateRSA_3);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsClientSettings::UpdateCertificateRSA()
extern TypeInfo* X509Certificate_t3_1_il2cpp_TypeInfo_var;
extern TypeInfo* RSAManaged_t3_20_il2cpp_TypeInfo_var;
extern "C" void TlsClientSettings_UpdateCertificateRSA_m3_844 (TlsClientSettings_t3_98 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		X509Certificate_t3_1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1193);
		RSAManaged_t3_20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	X509Certificate_t3_1 * V_0 = {0};
	{
		X509Certificate_t1_572 * L_0 = (__this->___clientCertificate_2);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->___certificateRSA_3 = (RSAManaged_t3_20 *)NULL;
		goto IL_0055;
	}

IL_0017:
	{
		X509Certificate_t1_572 * L_1 = (__this->___clientCertificate_2);
		NullCheck(L_1);
		ByteU5BU5D_t1_72* L_2 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(14 /* System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData() */, L_1);
		X509Certificate_t3_1 * L_3 = (X509Certificate_t3_1 *)il2cpp_codegen_object_new (X509Certificate_t3_1_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m3_49(L_3, L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		X509Certificate_t3_1 * L_4 = V_0;
		NullCheck(L_4);
		RSA_t1_119 * L_5 = (RSA_t1_119 *)VirtFuncInvoker0< RSA_t1_119 * >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_4);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::get_KeySize() */, L_5);
		RSAManaged_t3_20 * L_7 = (RSAManaged_t3_20 *)il2cpp_codegen_object_new (RSAManaged_t3_20_il2cpp_TypeInfo_var);
		RSAManaged__ctor_m3_263(L_7, L_6, /*hidden argument*/NULL);
		__this->___certificateRSA_3 = L_7;
		RSAManaged_t3_20 * L_8 = (__this->___certificateRSA_3);
		X509Certificate_t3_1 * L_9 = V_0;
		NullCheck(L_9);
		RSA_t1_119 * L_10 = (RSA_t1_119 *)VirtFuncInvoker0< RSA_t1_119 * >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_9);
		NullCheck(L_10);
		RSAParameters_t1_622  L_11 = (RSAParameters_t1_622 )VirtFuncInvoker1< RSAParameters_t1_622 , bool >::Invoke(12 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, L_10, 0);
		NullCheck(L_8);
		VirtActionInvoker1< RSAParameters_t1_622  >::Invoke(13 /* System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_8, L_11);
	}

IL_0055:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.String)
extern "C" void TlsException__ctor_m3_845 (TlsException_t3_117 * __this, String_t* ___message, const MethodInfo* method)
{
	{
		String_t* L_0 = ___message;
		Exception__ctor_m1_968(__this, L_0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void TlsException__ctor_m3_846 (TlsException_t3_117 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method)
{
	{
		SerializationInfo_t1_178 * L_0 = ___info;
		StreamingContext_t1_526  L_1 = ___context;
		Exception__ctor_m1_969(__this, L_0, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void TlsException__ctor_m3_847 (TlsException_t3_117 * __this, uint8_t ___level, uint8_t ___description, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___level;
		uint8_t L_1 = ___description;
		uint8_t L_2 = ___description;
		String_t* L_3 = Alert_GetAlertMessage_m3_483(NULL /*static, unused*/, L_2, /*hidden argument*/NULL);
		TlsException__ctor_m3_848(__this, L_0, L_1, L_3, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertLevel,Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern TypeInfo* Alert_t3_85_il2cpp_TypeInfo_var;
extern "C" void TlsException__ctor_m3_848 (TlsException_t3_117 * __this, uint8_t ___level, uint8_t ___description, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Alert_t3_85_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1379);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___message;
		Exception__ctor_m1_968(__this, L_0, /*hidden argument*/NULL);
		uint8_t L_1 = ___level;
		uint8_t L_2 = ___description;
		Alert_t3_85 * L_3 = (Alert_t3_85 *)il2cpp_codegen_object_new (Alert_t3_85_il2cpp_TypeInfo_var);
		Alert__ctor_m3_477(L_3, L_1, L_2, /*hidden argument*/NULL);
		__this->___alert_11 = L_3;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription)
extern "C" void TlsException__ctor_m3_849 (TlsException_t3_117 * __this, uint8_t ___description, const MethodInfo* method)
{
	{
		uint8_t L_0 = ___description;
		uint8_t L_1 = ___description;
		String_t* L_2 = Alert_GetAlertMessage_m3_483(NULL /*static, unused*/, L_1, /*hidden argument*/NULL);
		TlsException__ctor_m3_850(__this, L_0, L_2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsException::.ctor(Mono.Security.Protocol.Tls.AlertDescription,System.String)
extern TypeInfo* Alert_t3_85_il2cpp_TypeInfo_var;
extern "C" void TlsException__ctor_m3_850 (TlsException_t3_117 * __this, uint8_t ___description, String_t* ___message, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Alert_t3_85_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1379);
		s_Il2CppMethodIntialized = true;
	}
	{
		String_t* L_0 = ___message;
		Exception__ctor_m1_968(__this, L_0, /*hidden argument*/NULL);
		uint8_t L_1 = ___description;
		Alert_t3_85 * L_2 = (Alert_t3_85 *)il2cpp_codegen_object_new (Alert_t3_85_il2cpp_TypeInfo_var);
		Alert__ctor_m3_476(L_2, L_1, /*hidden argument*/NULL);
		__this->___alert_11 = L_2;
		return;
	}
}
// Mono.Security.Protocol.Tls.Alert Mono.Security.Protocol.Tls.TlsException::get_Alert()
extern "C" Alert_t3_85 * TlsException_get_Alert_m3_851 (TlsException_t3_117 * __this, const MethodInfo* method)
{
	{
		Alert_t3_85 * L_0 = (__this->___alert_11);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::.ctor()
extern "C" void TlsServerSettings__ctor_m3_852 (TlsServerSettings_t3_97 * __this, const MethodInfo* method)
{
	{
		Object__ctor_m1_0(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_ServerKeyExchange()
extern "C" bool TlsServerSettings_get_ServerKeyExchange_m3_853 (TlsServerSettings_t3_97 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___serverKeyExchange_5);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_ServerKeyExchange(System.Boolean)
extern "C" void TlsServerSettings_set_ServerKeyExchange_m3_854 (TlsServerSettings_t3_97 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___serverKeyExchange_5 = L_0;
		return;
	}
}
// Mono.Security.X509.X509CertificateCollection Mono.Security.Protocol.Tls.TlsServerSettings::get_Certificates()
extern "C" X509CertificateCollection_t3_4 * TlsServerSettings_get_Certificates_m3_855 (TlsServerSettings_t3_97 * __this, const MethodInfo* method)
{
	{
		X509CertificateCollection_t3_4 * L_0 = (__this->___certificates_0);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_Certificates(Mono.Security.X509.X509CertificateCollection)
extern "C" void TlsServerSettings_set_Certificates_m3_856 (TlsServerSettings_t3_97 * __this, X509CertificateCollection_t3_4 * ___value, const MethodInfo* method)
{
	{
		X509CertificateCollection_t3_4 * L_0 = ___value;
		__this->___certificates_0 = L_0;
		return;
	}
}
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRSA()
extern "C" RSA_t1_119 * TlsServerSettings_get_CertificateRSA_m3_857 (TlsServerSettings_t3_97 * __this, const MethodInfo* method)
{
	{
		RSA_t1_119 * L_0 = (__this->___certificateRSA_1);
		return L_0;
	}
}
// System.Security.Cryptography.RSAParameters Mono.Security.Protocol.Tls.TlsServerSettings::get_RsaParameters()
extern "C" RSAParameters_t1_622  TlsServerSettings_get_RsaParameters_m3_858 (TlsServerSettings_t3_97 * __this, const MethodInfo* method)
{
	{
		RSAParameters_t1_622  L_0 = (__this->___rsaParameters_2);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_RsaParameters(System.Security.Cryptography.RSAParameters)
extern "C" void TlsServerSettings_set_RsaParameters_m3_859 (TlsServerSettings_t3_97 * __this, RSAParameters_t1_622  ___value, const MethodInfo* method)
{
	{
		RSAParameters_t1_622  L_0 = ___value;
		__this->___rsaParameters_2 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_SignedParams(System.Byte[])
extern "C" void TlsServerSettings_set_SignedParams_m3_860 (TlsServerSettings_t3_97 * __this, ByteU5BU5D_t1_72* ___value, const MethodInfo* method)
{
	{
		ByteU5BU5D_t1_72* L_0 = ___value;
		__this->___signedParams_3 = L_0;
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateRequest()
extern "C" bool TlsServerSettings_get_CertificateRequest_m3_861 (TlsServerSettings_t3_97 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___certificateRequest_6);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateRequest(System.Boolean)
extern "C" void TlsServerSettings_set_CertificateRequest_m3_862 (TlsServerSettings_t3_97 * __this, bool ___value, const MethodInfo* method)
{
	{
		bool L_0 = ___value;
		__this->___certificateRequest_6 = L_0;
		return;
	}
}
// Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[] Mono.Security.Protocol.Tls.TlsServerSettings::get_CertificateTypes()
extern "C" ClientCertificateTypeU5BU5D_t3_118* TlsServerSettings_get_CertificateTypes_m3_863 (TlsServerSettings_t3_97 * __this, const MethodInfo* method)
{
	{
		ClientCertificateTypeU5BU5D_t3_118* L_0 = (__this->___certificateTypes_7);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_CertificateTypes(Mono.Security.Protocol.Tls.Handshake.ClientCertificateType[])
extern "C" void TlsServerSettings_set_CertificateTypes_m3_864 (TlsServerSettings_t3_97 * __this, ClientCertificateTypeU5BU5D_t3_118* ___value, const MethodInfo* method)
{
	{
		ClientCertificateTypeU5BU5D_t3_118* L_0 = ___value;
		__this->___certificateTypes_7 = L_0;
		return;
	}
}
// System.String[] Mono.Security.Protocol.Tls.TlsServerSettings::get_DistinguisedNames()
extern "C" StringU5BU5D_t1_206* TlsServerSettings_get_DistinguisedNames_m3_865 (TlsServerSettings_t3_97 * __this, const MethodInfo* method)
{
	{
		StringU5BU5D_t1_206* L_0 = (__this->___distinguisedNames_4);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::set_DistinguisedNames(System.String[])
extern "C" void TlsServerSettings_set_DistinguisedNames_m3_866 (TlsServerSettings_t3_97 * __this, StringU5BU5D_t1_206* ___value, const MethodInfo* method)
{
	{
		StringU5BU5D_t1_206* L_0 = ___value;
		__this->___distinguisedNames_4 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsServerSettings::UpdateCertificateRSA()
extern TypeInfo* RSAManaged_t3_20_il2cpp_TypeInfo_var;
extern "C" void TlsServerSettings_UpdateCertificateRSA_m3_867 (TlsServerSettings_t3_97 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RSAManaged_t3_20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	{
		X509CertificateCollection_t3_4 * L_0 = (__this->___certificates_0);
		if (!L_0)
		{
			goto IL_001b;
		}
	}
	{
		X509CertificateCollection_t3_4 * L_1 = (__this->___certificates_0);
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_1);
		if (L_2)
		{
			goto IL_0027;
		}
	}

IL_001b:
	{
		__this->___certificateRSA_1 = (RSA_t1_119 *)NULL;
		goto IL_006a;
	}

IL_0027:
	{
		X509CertificateCollection_t3_4 * L_3 = (__this->___certificates_0);
		NullCheck(L_3);
		X509Certificate_t3_1 * L_4 = X509CertificateCollection_get_Item_m3_26(L_3, 0, /*hidden argument*/NULL);
		NullCheck(L_4);
		RSA_t1_119 * L_5 = (RSA_t1_119 *)VirtFuncInvoker0< RSA_t1_119 * >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_4);
		NullCheck(L_5);
		int32_t L_6 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Security.Cryptography.AsymmetricAlgorithm::get_KeySize() */, L_5);
		RSAManaged_t3_20 * L_7 = (RSAManaged_t3_20 *)il2cpp_codegen_object_new (RSAManaged_t3_20_il2cpp_TypeInfo_var);
		RSAManaged__ctor_m3_263(L_7, L_6, /*hidden argument*/NULL);
		__this->___certificateRSA_1 = L_7;
		RSA_t1_119 * L_8 = (__this->___certificateRSA_1);
		X509CertificateCollection_t3_4 * L_9 = (__this->___certificates_0);
		NullCheck(L_9);
		X509Certificate_t3_1 * L_10 = X509CertificateCollection_get_Item_m3_26(L_9, 0, /*hidden argument*/NULL);
		NullCheck(L_10);
		RSA_t1_119 * L_11 = (RSA_t1_119 *)VirtFuncInvoker0< RSA_t1_119 * >::Invoke(10 /* System.Security.Cryptography.RSA Mono.Security.X509.X509Certificate::get_RSA() */, L_10);
		NullCheck(L_11);
		RSAParameters_t1_622  L_12 = (RSAParameters_t1_622 )VirtFuncInvoker1< RSAParameters_t1_622 , bool >::Invoke(12 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, L_11, 0);
		NullCheck(L_8);
		VirtActionInvoker1< RSAParameters_t1_622  >::Invoke(13 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_8, L_12);
	}

IL_006a:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor()
extern TypeInfo* Stream_t1_226_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t1_250_il2cpp_TypeInfo_var;
extern "C" void TlsStream__ctor_m3_868 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t1_226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		MemoryStream_t1_250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1_226_il2cpp_TypeInfo_var);
		Stream__ctor_m1_2419(__this, /*hidden argument*/NULL);
		MemoryStream_t1_250 * L_0 = (MemoryStream_t1_250 *)il2cpp_codegen_object_new (MemoryStream_t1_250_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1_2348(L_0, 0, /*hidden argument*/NULL);
		__this->___buffer_3 = L_0;
		__this->___canRead_1 = 0;
		__this->___canWrite_2 = 1;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsStream::.ctor(System.Byte[])
extern TypeInfo* Stream_t1_226_il2cpp_TypeInfo_var;
extern TypeInfo* MemoryStream_t1_250_il2cpp_TypeInfo_var;
extern "C" void TlsStream__ctor_m3_869 (TlsStream_t3_100 * __this, ByteU5BU5D_t1_72* ___data, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Stream_t1_226_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(236);
		MemoryStream_t1_250_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(243);
		s_Il2CppMethodIntialized = true;
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Stream_t1_226_il2cpp_TypeInfo_var);
		Stream__ctor_m1_2419(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_0 = ___data;
		if (!L_0)
		{
			goto IL_001d;
		}
	}
	{
		ByteU5BU5D_t1_72* L_1 = ___data;
		MemoryStream_t1_250 * L_2 = (MemoryStream_t1_250 *)il2cpp_codegen_object_new (MemoryStream_t1_250_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1_2349(L_2, L_1, /*hidden argument*/NULL);
		__this->___buffer_3 = L_2;
		goto IL_0028;
	}

IL_001d:
	{
		MemoryStream_t1_250 * L_3 = (MemoryStream_t1_250 *)il2cpp_codegen_object_new (MemoryStream_t1_250_il2cpp_TypeInfo_var);
		MemoryStream__ctor_m1_2347(L_3, /*hidden argument*/NULL);
		__this->___buffer_3 = L_3;
	}

IL_0028:
	{
		__this->___canRead_1 = 1;
		__this->___canWrite_2 = 0;
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_EOF()
extern "C" bool TlsStream_get_EOF_m3_870 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Position() */, __this);
		int64_t L_1 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, __this);
		if ((((int64_t)L_0) >= ((int64_t)L_1)))
		{
			goto IL_0013;
		}
	}
	{
		return 0;
	}

IL_0013:
	{
		return 1;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanWrite()
extern "C" bool TlsStream_get_CanWrite_m3_871 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___canWrite_2);
		return L_0;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanRead()
extern "C" bool TlsStream_get_CanRead_m3_872 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___canRead_1);
		return L_0;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanSeek()
extern "C" bool TlsStream_get_CanSeek_m3_873 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	{
		MemoryStream_t1_250 * L_0 = (__this->___buffer_3);
		NullCheck(L_0);
		bool L_1 = (bool)VirtFuncInvoker0< bool >::Invoke(6 /* System.Boolean System.IO.MemoryStream::get_CanSeek() */, L_0);
		return L_1;
	}
}
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Position()
extern "C" int64_t TlsStream_get_Position_m3_874 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	{
		MemoryStream_t1_250 * L_0 = (__this->___buffer_3);
		NullCheck(L_0);
		int64_t L_1 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(10 /* System.Int64 System.IO.MemoryStream::get_Position() */, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsStream::set_Position(System.Int64)
extern "C" void TlsStream_set_Position_m3_875 (TlsStream_t3_100 * __this, int64_t ___value, const MethodInfo* method)
{
	{
		MemoryStream_t1_250 * L_0 = (__this->___buffer_3);
		int64_t L_1 = ___value;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length()
extern "C" int64_t TlsStream_get_Length_m3_876 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	{
		MemoryStream_t1_250 * L_0 = (__this->___buffer_3);
		NullCheck(L_0);
		int64_t L_1 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 System.IO.MemoryStream::get_Length() */, L_0);
		return L_1;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadSmallValue(System.Int32)
extern TypeInfo* ArgumentException_t1_685_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* ObjectU5BU5D_t1_158_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4456;
extern Il2CppCodeGenString* _stringLiteral4415;
extern "C" ByteU5BU5D_t1_72* TlsStream_ReadSmallValue_m3_877 (TlsStream_t3_100 * __this, int32_t ___length, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ArgumentException_t1_685_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(4);
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		ObjectU5BU5D_t1_158_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(19);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4456 = il2cpp_codegen_string_literal_from_index(4456);
		_stringLiteral4415 = il2cpp_codegen_string_literal_from_index(4415);
		s_Il2CppMethodIntialized = true;
	}
	{
		int32_t L_0 = ___length;
		if ((((int32_t)L_0) <= ((int32_t)4)))
		{
			goto IL_0012;
		}
	}
	{
		ArgumentException_t1_685 * L_1 = (ArgumentException_t1_685 *)il2cpp_codegen_object_new (ArgumentException_t1_685_il2cpp_TypeInfo_var);
		ArgumentException__ctor_m1_4979(L_1, _stringLiteral4456, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_1);
	}

IL_0012:
	{
		ByteU5BU5D_t1_72* L_2 = (__this->___temp_4);
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		__this->___temp_4 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, 4));
	}

IL_0029:
	{
		ByteU5BU5D_t1_72* L_3 = (__this->___temp_4);
		int32_t L_4 = ___length;
		int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(19 /* System.Int32 Mono.Security.Protocol.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_3, 0, L_4);
		int32_t L_6 = ___length;
		if ((((int32_t)L_5) == ((int32_t)L_6)))
		{
			goto IL_0053;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_7 = String_Format_m1_439(NULL /*static, unused*/, _stringLiteral4415, ((ObjectU5BU5D_t1_158*)SZArrayNew(ObjectU5BU5D_t1_158_il2cpp_TypeInfo_var, 0)), /*hidden argument*/NULL);
		TlsException_t3_117 * L_8 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_845(L_8, L_7, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_8);
	}

IL_0053:
	{
		ByteU5BU5D_t1_72* L_9 = (__this->___temp_4);
		return L_9;
	}
}
// System.Byte Mono.Security.Protocol.Tls.TlsStream::ReadByte()
extern "C" uint8_t TlsStream_ReadByte_m3_878 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	ByteU5BU5D_t1_72* V_0 = {0};
	{
		ByteU5BU5D_t1_72* L_0 = TlsStream_ReadSmallValue_m3_877(__this, 1, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_t1_72* L_1 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		return (*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_2, sizeof(uint8_t)));
	}
}
// System.Int16 Mono.Security.Protocol.Tls.TlsStream::ReadInt16()
extern "C" int16_t TlsStream_ReadInt16_m3_879 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	ByteU5BU5D_t1_72* V_0 = {0};
	{
		ByteU5BU5D_t1_72* L_0 = TlsStream_ReadSmallValue_m3_877(__this, 2, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_t1_72* L_1 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		ByteU5BU5D_t1_72* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		int32_t L_4 = 1;
		return (((int16_t)((int16_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_2, sizeof(uint8_t)))<<(int32_t)8))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_4, sizeof(uint8_t))))))));
	}
}
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::ReadInt24()
extern "C" int32_t TlsStream_ReadInt24_m3_880 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	ByteU5BU5D_t1_72* V_0 = {0};
	{
		ByteU5BU5D_t1_72* L_0 = TlsStream_ReadSmallValue_m3_877(__this, 3, /*hidden argument*/NULL);
		V_0 = L_0;
		ByteU5BU5D_t1_72* L_1 = V_0;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		int32_t L_2 = 0;
		ByteU5BU5D_t1_72* L_3 = V_0;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		int32_t L_4 = 1;
		ByteU5BU5D_t1_72* L_5 = V_0;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		int32_t L_6 = 2;
		return ((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_1, L_2, sizeof(uint8_t)))<<(int32_t)((int32_t)16)))|(int32_t)((int32_t)((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_3, L_4, sizeof(uint8_t)))<<(int32_t)8))))|(int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_5, L_6, sizeof(uint8_t)))));
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ReadBytes(System.Int32)
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4415;
extern "C" ByteU5BU5D_t1_72* TlsStream_ReadBytes_m3_881 (TlsStream_t3_100 * __this, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4415 = il2cpp_codegen_string_literal_from_index(4415);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t1_72* V_0 = {0};
	{
		int32_t L_0 = ___count;
		V_0 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_0));
		ByteU5BU5D_t1_72* L_1 = V_0;
		int32_t L_2 = ___count;
		int32_t L_3 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(19 /* System.Int32 Mono.Security.Protocol.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32) */, __this, L_1, 0, L_2);
		int32_t L_4 = ___count;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0021;
		}
	}
	{
		TlsException_t3_117 * L_5 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_845(L_5, _stringLiteral4415, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0021:
	{
		ByteU5BU5D_t1_72* L_6 = V_0;
		return L_6;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte)
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern "C" void TlsStream_Write_m3_882 (TlsStream_t3_100 * __this, uint8_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t1_72* L_0 = (__this->___temp_4);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->___temp_4 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, 4));
	}

IL_0017:
	{
		ByteU5BU5D_t1_72* L_1 = (__this->___temp_4);
		uint8_t L_2 = ___value;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0, sizeof(uint8_t))) = (uint8_t)L_2;
		ByteU5BU5D_t1_72* L_3 = (__this->___temp_4);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_3, 0, 1);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int16)
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern "C" void TlsStream_Write_m3_883 (TlsStream_t3_100 * __this, int16_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t1_72* L_0 = (__this->___temp_4);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->___temp_4 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, 4));
	}

IL_0017:
	{
		ByteU5BU5D_t1_72* L_1 = (__this->___temp_4);
		int16_t L_2 = ___value;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2>>(int32_t)8)))));
		ByteU5BU5D_t1_72* L_3 = (__this->___temp_4);
		int16_t L_4 = ___value;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 1, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)L_4)));
		ByteU5BU5D_t1_72* L_5 = (__this->___temp_4);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_5, 0, 2);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsStream::WriteInt24(System.Int32)
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern "C" void TlsStream_WriteInt24_m3_884 (TlsStream_t3_100 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t1_72* L_0 = (__this->___temp_4);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->___temp_4 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, 4));
	}

IL_0017:
	{
		ByteU5BU5D_t1_72* L_1 = (__this->___temp_4);
		int32_t L_2 = ___value;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2>>(int32_t)((int32_t)16))))));
		ByteU5BU5D_t1_72* L_3 = (__this->___temp_4);
		int32_t L_4 = ___value;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 1, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_4>>(int32_t)8)))));
		ByteU5BU5D_t1_72* L_5 = (__this->___temp_4);
		int32_t L_6 = ___value;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)L_6)));
		ByteU5BU5D_t1_72* L_7 = (__this->___temp_4);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_7, 0, 3);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Int32)
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern "C" void TlsStream_Write_m3_885 (TlsStream_t3_100 * __this, int32_t ___value, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t1_72* L_0 = (__this->___temp_4);
		if (L_0)
		{
			goto IL_0017;
		}
	}
	{
		__this->___temp_4 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, 4));
	}

IL_0017:
	{
		ByteU5BU5D_t1_72* L_1 = (__this->___temp_4);
		int32_t L_2 = ___value;
		NullCheck(L_1);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_1, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_1, 0, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_2>>(int32_t)((int32_t)24))))));
		ByteU5BU5D_t1_72* L_3 = (__this->___temp_4);
		int32_t L_4 = ___value;
		NullCheck(L_3);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_3, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_3, 1, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_4>>(int32_t)((int32_t)16))))));
		ByteU5BU5D_t1_72* L_5 = (__this->___temp_4);
		int32_t L_6 = ___value;
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, 2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_5, 2, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_6>>(int32_t)8)))));
		ByteU5BU5D_t1_72* L_7 = (__this->___temp_4);
		int32_t L_8 = ___value;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_7, 3, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)L_8)));
		ByteU5BU5D_t1_72* L_9 = (__this->___temp_4);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_9, 0, 4);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[])
extern "C" void TlsStream_Write_m3_886 (TlsStream_t3_100 * __this, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		ByteU5BU5D_t1_72* L_0 = ___buffer;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		NullCheck(L_1);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_0, 0, (((int32_t)((int32_t)(((Array_t *)L_1)->max_length)))));
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsStream::Reset()
extern "C" void TlsStream_Reset_m3_887 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	{
		MemoryStream_t1_250 * L_0 = (__this->___buffer_3);
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(22 /* System.Void System.IO.MemoryStream::SetLength(System.Int64) */, L_0, (((int64_t)((int64_t)0))));
		MemoryStream_t1_250 * L_1 = (__this->___buffer_3);
		NullCheck(L_1);
		VirtActionInvoker1< int64_t >::Invoke(11 /* System.Void System.IO.MemoryStream::set_Position(System.Int64) */, L_1, (((int64_t)((int64_t)0))));
		return;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::ToArray()
extern "C" ByteU5BU5D_t1_72* TlsStream_ToArray_m3_888 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	{
		MemoryStream_t1_250 * L_0 = (__this->___buffer_3);
		NullCheck(L_0);
		ByteU5BU5D_t1_72* L_1 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(31 /* System.Byte[] System.IO.MemoryStream::ToArray() */, L_0);
		return L_1;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsStream::Flush()
extern "C" void TlsStream_Flush_m3_889 (TlsStream_t3_100 * __this, const MethodInfo* method)
{
	{
		MemoryStream_t1_250 * L_0 = (__this->___buffer_3);
		NullCheck(L_0);
		VirtActionInvoker0::Invoke(18 /* System.Void System.IO.MemoryStream::Flush() */, L_0);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsStream::SetLength(System.Int64)
extern "C" void TlsStream_SetLength_m3_890 (TlsStream_t3_100 * __this, int64_t ___length, const MethodInfo* method)
{
	{
		MemoryStream_t1_250 * L_0 = (__this->___buffer_3);
		int64_t L_1 = ___length;
		NullCheck(L_0);
		VirtActionInvoker1< int64_t >::Invoke(22 /* System.Void System.IO.MemoryStream::SetLength(System.Int64) */, L_0, L_1);
		return;
	}
}
// System.Int64 Mono.Security.Protocol.Tls.TlsStream::Seek(System.Int64,System.IO.SeekOrigin)
extern "C" int64_t TlsStream_Seek_m3_891 (TlsStream_t3_100 * __this, int64_t ___offset, int32_t ___loc, const MethodInfo* method)
{
	{
		MemoryStream_t1_250 * L_0 = (__this->___buffer_3);
		int64_t L_1 = ___offset;
		int32_t L_2 = ___loc;
		NullCheck(L_0);
		int64_t L_3 = (int64_t)VirtFuncInvoker2< int64_t, int64_t, int32_t >::Invoke(21 /* System.Int64 System.IO.MemoryStream::Seek(System.Int64,System.IO.SeekOrigin) */, L_0, L_1, L_2);
		return L_3;
	}
}
// System.Int32 Mono.Security.Protocol.Tls.TlsStream::Read(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* InvalidOperationException_t1_777_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4457;
extern "C" int32_t TlsStream_Read_m3_892 (TlsStream_t3_100 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1_777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral4457 = il2cpp_codegen_string_literal_from_index(4457);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___canRead_1);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		MemoryStream_t1_250 * L_1 = (__this->___buffer_3);
		ByteU5BU5D_t1_72* L_2 = ___buffer;
		int32_t L_3 = ___offset;
		int32_t L_4 = ___count;
		NullCheck(L_1);
		int32_t L_5 = (int32_t)VirtFuncInvoker3< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(19 /* System.Int32 System.IO.MemoryStream::Read(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
		return L_5;
	}

IL_001a:
	{
		InvalidOperationException_t1_777 * L_6 = (InvalidOperationException_t1_777 *)il2cpp_codegen_object_new (InvalidOperationException_t1_777_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1_5531(L_6, _stringLiteral4457, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}
}
// System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32)
extern TypeInfo* InvalidOperationException_t1_777_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4458;
extern "C" void TlsStream_Write_m3_893 (TlsStream_t3_100 * __this, ByteU5BU5D_t1_72* ___buffer, int32_t ___offset, int32_t ___count, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		InvalidOperationException_t1_777_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(72);
		_stringLiteral4458 = il2cpp_codegen_string_literal_from_index(4458);
		s_Il2CppMethodIntialized = true;
	}
	{
		bool L_0 = (__this->___canWrite_2);
		if (!L_0)
		{
			goto IL_001e;
		}
	}
	{
		MemoryStream_t1_250 * L_1 = (__this->___buffer_3);
		ByteU5BU5D_t1_72* L_2 = ___buffer;
		int32_t L_3 = ___offset;
		int32_t L_4 = ___count;
		NullCheck(L_1);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void System.IO.MemoryStream::Write(System.Byte[],System.Int32,System.Int32) */, L_1, L_2, L_3, L_4);
		goto IL_0029;
	}

IL_001e:
	{
		InvalidOperationException_t1_777 * L_5 = (InvalidOperationException_t1_777 *)il2cpp_codegen_object_new (InvalidOperationException_t1_777_il2cpp_TypeInfo_var);
		InvalidOperationException__ctor_m1_5531(L_5, _stringLiteral4458, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_5);
	}

IL_0029:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType)
extern "C" void HandshakeMessage__ctor_m3_894 (HandshakeMessage_t3_106 * __this, Context_t3_88 * ___context, uint8_t ___handshakeType, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		uint8_t L_1 = ___handshakeType;
		HandshakeMessage__ctor_m3_895(__this, L_0, L_1, ((int32_t)22), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,Mono.Security.Protocol.Tls.ContentType)
extern "C" void HandshakeMessage__ctor_m3_895 (HandshakeMessage_t3_106 * __this, Context_t3_88 * ___context, uint8_t ___handshakeType, uint8_t ___contentType, const MethodInfo* method)
{
	{
		TlsStream__ctor_m3_868(__this, /*hidden argument*/NULL);
		Context_t3_88 * L_0 = ___context;
		__this->___context_5 = L_0;
		uint8_t L_1 = ___handshakeType;
		__this->___handshakeType_6 = L_1;
		uint8_t L_2 = ___contentType;
		__this->___contentType_7 = L_2;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::.ctor(Mono.Security.Protocol.Tls.Context,Mono.Security.Protocol.Tls.Handshake.HandshakeType,System.Byte[])
extern "C" void HandshakeMessage__ctor_m3_896 (HandshakeMessage_t3_106 * __this, Context_t3_88 * ___context, uint8_t ___handshakeType, ByteU5BU5D_t1_72* ___data, const MethodInfo* method)
{
	{
		ByteU5BU5D_t1_72* L_0 = ___data;
		TlsStream__ctor_m3_869(__this, L_0, /*hidden argument*/NULL);
		Context_t3_88 * L_1 = ___context;
		__this->___context_5 = L_1;
		uint8_t L_2 = ___handshakeType;
		__this->___handshakeType_6 = L_2;
		return;
	}
}
// Mono.Security.Protocol.Tls.Context Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_Context()
extern "C" Context_t3_88 * HandshakeMessage_get_Context_m3_897 (HandshakeMessage_t3_106 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = (__this->___context_5);
		return L_0;
	}
}
// Mono.Security.Protocol.Tls.Handshake.HandshakeType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_HandshakeType()
extern "C" uint8_t HandshakeMessage_get_HandshakeType_m3_898 (HandshakeMessage_t3_106 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___handshakeType_6);
		return L_0;
	}
}
// Mono.Security.Protocol.Tls.ContentType Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::get_ContentType()
extern "C" uint8_t HandshakeMessage_get_ContentType_m3_899 (HandshakeMessage_t3_106 * __this, const MethodInfo* method)
{
	{
		uint8_t L_0 = (__this->___contentType_7);
		return L_0;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Process()
extern TypeInfo* NotSupportedException_t1_793_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4381;
extern "C" void HandshakeMessage_Process_m3_900 (HandshakeMessage_t3_106 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t1_793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		_stringLiteral4381 = il2cpp_codegen_string_literal_from_index(4381);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int32_t L_1 = Context_get_SecurityProtocol_m3_579(L_0, /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)-1073741824))))
		{
			goto IL_0037;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)((int32_t)12))))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)48))))
		{
			goto IL_0042;
		}
	}
	{
		int32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)192))))
		{
			goto IL_0037;
		}
	}
	{
		goto IL_004d;
	}

IL_0037:
	{
		VirtActionInvoker0::Invoke(29 /* System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::ProcessAsTls1() */, __this);
		goto IL_0058;
	}

IL_0042:
	{
		VirtActionInvoker0::Invoke(30 /* System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::ProcessAsSsl3() */, __this);
		goto IL_0058;
	}

IL_004d:
	{
		NotSupportedException_t1_793 * L_6 = (NotSupportedException_t1_793 *)il2cpp_codegen_object_new (NotSupportedException_t1_793_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1_5658(L_6, _stringLiteral4381, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_6);
	}

IL_0058:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Update()
extern "C" void HandshakeMessage_Update_m3_901 (HandshakeMessage_t3_106 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanWrite() */, __this);
		if (!L_0)
		{
			goto IL_0045;
		}
	}
	{
		ByteU5BU5D_t1_72* L_1 = (__this->___cache_8);
		if (L_1)
		{
			goto IL_0022;
		}
	}
	{
		ByteU5BU5D_t1_72* L_2 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(32 /* System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::EncodeMessage() */, __this);
		__this->___cache_8 = L_2;
	}

IL_0022:
	{
		Context_t3_88 * L_3 = (__this->___context_5);
		NullCheck(L_3);
		TlsStream_t3_100 * L_4 = Context_get_HandshakeMessages_m3_599(L_3, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_5 = (__this->___cache_8);
		NullCheck(L_4);
		TlsStream_Write_m3_886(L_4, L_5, /*hidden argument*/NULL);
		TlsStream_Reset_m3_887(__this, /*hidden argument*/NULL);
		__this->___cache_8 = (ByteU5BU5D_t1_72*)NULL;
	}

IL_0045:
	{
		return;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::EncodeMessage()
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t1_72* HandshakeMessage_EncodeMessage_m3_902 (HandshakeMessage_t3_106 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t1_72* V_0 = {0};
	int32_t V_1 = 0;
	{
		__this->___cache_8 = (ByteU5BU5D_t1_72*)NULL;
		bool L_0 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.Protocol.Tls.TlsStream::get_CanWrite() */, __this);
		if (!L_0)
		{
			goto IL_006b;
		}
	}
	{
		ByteU5BU5D_t1_72* L_1 = TlsStream_ToArray_m3_888(__this, /*hidden argument*/NULL);
		V_0 = L_1;
		ByteU5BU5D_t1_72* L_2 = V_0;
		NullCheck(L_2);
		V_1 = (((int32_t)((int32_t)(((Array_t *)L_2)->max_length))));
		int32_t L_3 = V_1;
		__this->___cache_8 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, ((int32_t)((int32_t)4+(int32_t)L_3))));
		ByteU5BU5D_t1_72* L_4 = (__this->___cache_8);
		uint8_t L_5 = HandshakeMessage_get_HandshakeType_m3_898(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, 0);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_4, 0, sizeof(uint8_t))) = (uint8_t)L_5;
		ByteU5BU5D_t1_72* L_6 = (__this->___cache_8);
		int32_t L_7 = V_1;
		NullCheck(L_6);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_6, 1);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_6, 1, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_7>>(int32_t)((int32_t)16))))));
		ByteU5BU5D_t1_72* L_8 = (__this->___cache_8);
		int32_t L_9 = V_1;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, 2);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_8, 2, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)((int32_t)((int32_t)L_9>>(int32_t)8)))));
		ByteU5BU5D_t1_72* L_10 = (__this->___cache_8);
		int32_t L_11 = V_1;
		NullCheck(L_10);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_10, 3);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_10, 3, sizeof(uint8_t))) = (uint8_t)(((int32_t)((uint8_t)L_11)));
		ByteU5BU5D_t1_72* L_12 = V_0;
		ByteU5BU5D_t1_72* L_13 = (__this->___cache_8);
		int32_t L_14 = V_1;
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_12, 0, (Array_t *)(Array_t *)L_13, 4, L_14, /*hidden argument*/NULL);
	}

IL_006b:
	{
		ByteU5BU5D_t1_72* L_15 = (__this->___cache_8);
		return L_15;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.HandshakeMessage::Compare(System.Byte[],System.Byte[])
extern "C" bool HandshakeMessage_Compare_m3_903 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___buffer1, ByteU5BU5D_t1_72* ___buffer2, const MethodInfo* method)
{
	int32_t V_0 = 0;
	{
		ByteU5BU5D_t1_72* L_0 = ___buffer1;
		if (!L_0)
		{
			goto IL_000c;
		}
	}
	{
		ByteU5BU5D_t1_72* L_1 = ___buffer2;
		if (L_1)
		{
			goto IL_000e;
		}
	}

IL_000c:
	{
		return 0;
	}

IL_000e:
	{
		ByteU5BU5D_t1_72* L_2 = ___buffer1;
		NullCheck(L_2);
		ByteU5BU5D_t1_72* L_3 = ___buffer2;
		NullCheck(L_3);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_2)->max_length))))) == ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_3)->max_length)))))))
		{
			goto IL_001b;
		}
	}
	{
		return 0;
	}

IL_001b:
	{
		V_0 = 0;
		goto IL_0033;
	}

IL_0022:
	{
		ByteU5BU5D_t1_72* L_4 = ___buffer1;
		int32_t L_5 = V_0;
		NullCheck(L_4);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_4, L_5);
		int32_t L_6 = L_5;
		ByteU5BU5D_t1_72* L_7 = ___buffer2;
		int32_t L_8 = V_0;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, L_8);
		int32_t L_9 = L_8;
		if ((((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_4, L_6, sizeof(uint8_t)))) == ((int32_t)(*(uint8_t*)(uint8_t*)SZArrayLdElema(L_7, L_9, sizeof(uint8_t))))))
		{
			goto IL_002f;
		}
	}
	{
		return 0;
	}

IL_002f:
	{
		int32_t L_10 = V_0;
		V_0 = ((int32_t)((int32_t)L_10+(int32_t)1));
	}

IL_0033:
	{
		int32_t L_11 = V_0;
		ByteU5BU5D_t1_72* L_12 = ___buffer1;
		NullCheck(L_12);
		if ((((int32_t)L_11) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_12)->max_length)))))))
		{
			goto IL_0022;
		}
	}
	{
		return 1;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificate__ctor_m3_904 (TlsClientCertificate_t3_121 * __this, Context_t3_88 * ___context, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		HandshakeMessage__ctor_m3_894(__this, L_0, ((int32_t)11), /*hidden argument*/NULL);
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::get_ClientCertificate()
extern "C" X509Certificate_t1_572 * TlsClientCertificate_get_ClientCertificate_m3_905 (TlsClientCertificate_t3_121 * __this, const MethodInfo* method)
{
	{
		bool L_0 = (__this->___clientCertSelected_9);
		if (L_0)
		{
			goto IL_0018;
		}
	}
	{
		TlsClientCertificate_GetClientCertificate_m3_907(__this, /*hidden argument*/NULL);
		__this->___clientCertSelected_9 = 1;
	}

IL_0018:
	{
		X509Certificate_t1_572 * L_1 = (__this->___clientCert_10);
		return L_1;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::Update()
extern "C" void TlsClientCertificate_Update_m3_906 (TlsClientCertificate_t3_121 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m3_901(__this, /*hidden argument*/NULL);
		TlsStream_Reset_m3_887(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::GetClientCertificate()
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern TypeInfo* X509Certificate_t1_572_il2cpp_TypeInfo_var;
extern "C" void TlsClientCertificate_GetClientCertificate_m3_907 (TlsClientCertificate_t3_121 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		X509Certificate_t1_572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t3_91 * V_0 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t3_91 *)CastclassClass(L_0, ClientContext_t3_91_il2cpp_TypeInfo_var));
		ClientContext_t3_91 * L_1 = V_0;
		NullCheck(L_1);
		TlsClientSettings_t3_98 * L_2 = Context_get_ClientSettings_m3_588(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		X509CertificateCollection_t2_305 * L_3 = TlsClientSettings_get_Certificates_m3_839(L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_0084;
		}
	}
	{
		ClientContext_t3_91 * L_4 = V_0;
		NullCheck(L_4);
		TlsClientSettings_t3_98 * L_5 = Context_get_ClientSettings_m3_588(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509CertificateCollection_t2_305 * L_6 = TlsClientSettings_get_Certificates_m3_839(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_6);
		if ((((int32_t)L_7) <= ((int32_t)0)))
		{
			goto IL_0084;
		}
	}
	{
		ClientContext_t3_91 * L_8 = V_0;
		NullCheck(L_8);
		SslClientStream_t3_11 * L_9 = ClientContext_get_SslStream_m3_547(L_8, /*hidden argument*/NULL);
		Context_t3_88 * L_10 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		TlsClientSettings_t3_98 * L_11 = Context_get_ClientSettings_m3_588(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		X509CertificateCollection_t2_305 * L_12 = TlsClientSettings_get_Certificates_m3_839(L_11, /*hidden argument*/NULL);
		Context_t3_88 * L_13 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		TlsServerSettings_t3_97 * L_14 = Context_get_ServerSettings_m3_587(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		X509CertificateCollection_t3_4 * L_15 = TlsServerSettings_get_Certificates_m3_855(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		X509Certificate_t3_1 * L_16 = X509CertificateCollection_get_Item_m3_26(L_15, 0, /*hidden argument*/NULL);
		NullCheck(L_16);
		ByteU5BU5D_t1_72* L_17 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_16);
		X509Certificate_t1_572 * L_18 = (X509Certificate_t1_572 *)il2cpp_codegen_object_new (X509Certificate_t1_572_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m1_3979(L_18, L_17, /*hidden argument*/NULL);
		Context_t3_88 * L_19 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		TlsClientSettings_t3_98 * L_20 = Context_get_ClientSettings_m3_588(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		String_t* L_21 = TlsClientSettings_get_TargetHost_m3_837(L_20, /*hidden argument*/NULL);
		NullCheck(L_9);
		X509Certificate_t1_572 * L_22 = SslClientStream_RaiseClientCertificateSelection_m3_748(L_9, L_12, L_18, L_21, (X509CertificateCollection_t2_305 *)NULL, /*hidden argument*/NULL);
		__this->___clientCert_10 = L_22;
	}

IL_0084:
	{
		ClientContext_t3_91 * L_23 = V_0;
		NullCheck(L_23);
		TlsClientSettings_t3_98 * L_24 = Context_get_ClientSettings_m3_588(L_23, /*hidden argument*/NULL);
		X509Certificate_t1_572 * L_25 = (__this->___clientCert_10);
		NullCheck(L_24);
		TlsClientSettings_set_ClientCertificate_m3_842(L_24, L_25, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::SendCertificates()
extern TypeInfo* TlsStream_t3_100_il2cpp_TypeInfo_var;
extern "C" void TlsClientCertificate_SendCertificates_m3_908 (TlsClientCertificate_t3_121 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsStream_t3_100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1352);
		s_Il2CppMethodIntialized = true;
	}
	TlsStream_t3_100 * V_0 = {0};
	X509Certificate_t1_572 * V_1 = {0};
	ByteU5BU5D_t1_72* V_2 = {0};
	{
		TlsStream_t3_100 * L_0 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_868(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		X509Certificate_t1_572 * L_1 = TlsClientCertificate_get_ClientCertificate_m3_905(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_0031;
	}

IL_0012:
	{
		X509Certificate_t1_572 * L_2 = V_1;
		NullCheck(L_2);
		ByteU5BU5D_t1_72* L_3 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(14 /* System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetRawCertData() */, L_2);
		V_2 = L_3;
		TlsStream_t3_100 * L_4 = V_0;
		ByteU5BU5D_t1_72* L_5 = V_2;
		NullCheck(L_5);
		NullCheck(L_4);
		TlsStream_WriteInt24_m3_884(L_4, (((int32_t)((int32_t)(((Array_t *)L_5)->max_length)))), /*hidden argument*/NULL);
		TlsStream_t3_100 * L_6 = V_0;
		ByteU5BU5D_t1_72* L_7 = V_2;
		NullCheck(L_6);
		TlsStream_Write_m3_886(L_6, L_7, /*hidden argument*/NULL);
		X509Certificate_t1_572 * L_8 = V_1;
		X509Certificate_t1_572 * L_9 = TlsClientCertificate_FindParentCertificate_m3_911(__this, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
	}

IL_0031:
	{
		X509Certificate_t1_572 * L_10 = V_1;
		if (L_10)
		{
			goto IL_0012;
		}
	}
	{
		TlsStream_t3_100 * L_11 = V_0;
		NullCheck(L_11);
		int64_t L_12 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_11);
		TlsStream_WriteInt24_m3_884(__this, (((int32_t)((int32_t)L_12))), /*hidden argument*/NULL);
		TlsStream_t3_100 * L_13 = V_0;
		NullCheck(L_13);
		ByteU5BU5D_t1_72* L_14 = TlsStream_ToArray_m3_888(L_13, /*hidden argument*/NULL);
		TlsStream_Write_m3_886(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsSsl3()
extern "C" void TlsClientCertificate_ProcessAsSsl3_m3_909 (TlsClientCertificate_t3_121 * __this, const MethodInfo* method)
{
	{
		X509Certificate_t1_572 * L_0 = TlsClientCertificate_get_ClientCertificate_m3_905(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		TlsClientCertificate_SendCertificates_m3_908(__this, /*hidden argument*/NULL);
		goto IL_0016;
	}

IL_0016:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::ProcessAsTls1()
extern "C" void TlsClientCertificate_ProcessAsTls1_m3_910 (TlsClientCertificate_t3_121 * __this, const MethodInfo* method)
{
	{
		X509Certificate_t1_572 * L_0 = TlsClientCertificate_get_ClientCertificate_m3_905(__this, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0016;
		}
	}
	{
		TlsClientCertificate_SendCertificates_m3_908(__this, /*hidden argument*/NULL);
		goto IL_001d;
	}

IL_0016:
	{
		TlsStream_WriteInt24_m3_884(__this, 0, /*hidden argument*/NULL);
	}

IL_001d:
	{
		return;
	}
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificate::FindParentCertificate(System.Security.Cryptography.X509Certificates.X509Certificate)
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t1_888_il2cpp_TypeInfo_var;
extern "C" X509Certificate_t1_572 * TlsClientCertificate_FindParentCertificate_m3_911 (TlsClientCertificate_t3_121 * __this, X509Certificate_t1_572 * ___cert, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		IDisposable_t1_888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	X509Certificate_t1_572 * V_0 = {0};
	X509CertificateEnumerator_t2_666 * V_1 = {0};
	X509Certificate_t1_572 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509Certificate_t1_572 * L_0 = ___cert;
		NullCheck(L_0);
		String_t* L_1 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetName() */, L_0);
		X509Certificate_t1_572 * L_2 = ___cert;
		NullCheck(L_2);
		String_t* L_3 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetIssuerName() */, L_2);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_4 = String_op_Equality_m1_480(NULL /*static, unused*/, L_1, L_3, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0018;
		}
	}
	{
		return (X509Certificate_t1_572 *)NULL;
	}

IL_0018:
	{
		Context_t3_88 * L_5 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		TlsClientSettings_t3_98 * L_6 = Context_get_ClientSettings_m3_588(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		X509CertificateCollection_t2_305 * L_7 = TlsClientSettings_get_Certificates_m3_839(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		X509CertificateEnumerator_t2_666 * L_8 = X509CertificateCollection_GetEnumerator_m2_5516(L_7, /*hidden argument*/NULL);
		V_1 = L_8;
	}

IL_002e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0057;
		}

IL_0033:
		{
			X509CertificateEnumerator_t2_666 * L_9 = V_1;
			NullCheck(L_9);
			X509Certificate_t1_572 * L_10 = X509CertificateEnumerator_get_Current_m2_5503(L_9, /*hidden argument*/NULL);
			V_0 = L_10;
			X509Certificate_t1_572 * L_11 = ___cert;
			NullCheck(L_11);
			String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(12 /* System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetName() */, L_11);
			X509Certificate_t1_572 * L_13 = ___cert;
			NullCheck(L_13);
			String_t* L_14 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(11 /* System.String System.Security.Cryptography.X509Certificates.X509Certificate::GetIssuerName() */, L_13);
			IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
			bool L_15 = String_op_Equality_m1_480(NULL /*static, unused*/, L_12, L_14, /*hidden argument*/NULL);
			if (!L_15)
			{
				goto IL_0057;
			}
		}

IL_0050:
		{
			X509Certificate_t1_572 * L_16 = V_0;
			V_2 = L_16;
			IL2CPP_LEAVE(0x7B, FINALLY_0067);
		}

IL_0057:
		{
			X509CertificateEnumerator_t2_666 * L_17 = V_1;
			NullCheck(L_17);
			bool L_18 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean System.Security.Cryptography.X509Certificates.X509CertificateCollection/X509CertificateEnumerator::MoveNext() */, L_17);
			if (L_18)
			{
				goto IL_0033;
			}
		}

IL_0062:
		{
			IL2CPP_LEAVE(0x79, FINALLY_0067);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_0067;
	}

FINALLY_0067:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t2_666 * L_19 = V_1;
			V_3 = ((Object_t *)IsInst(L_19, IDisposable_t1_888_il2cpp_TypeInfo_var));
			Object_t * L_20 = V_3;
			if (L_20)
			{
				goto IL_0072;
			}
		}

IL_0071:
		{
			IL2CPP_END_FINALLY(103)
		}

IL_0072:
		{
			Object_t * L_21 = V_3;
			NullCheck(L_21);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1_888_il2cpp_TypeInfo_var, L_21);
			IL2CPP_END_FINALLY(103)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(103)
	{
		IL2CPP_JUMP_TBL(0x7B, IL_007b)
		IL2CPP_JUMP_TBL(0x79, IL_0079)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_0079:
	{
		return (X509Certificate_t1_572 *)NULL;
	}

IL_007b:
	{
		X509Certificate_t1_572 * L_22 = V_2;
		return L_22;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientCertificateVerify__ctor_m3_912 (TlsClientCertificateVerify_t3_122 * __this, Context_t3_88 * ___context, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		HandshakeMessage__ctor_m3_894(__this, L_0, ((int32_t)15), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::Update()
extern "C" void TlsClientCertificateVerify_Update_m3_913 (TlsClientCertificateVerify_t3_122 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m3_901(__this, /*hidden argument*/NULL);
		TlsStream_Reset_m3_887(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsSsl3()
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* SslHandshakeHash_t3_114_il2cpp_TypeInfo_var;
extern TypeInfo* RSACryptoServiceProvider_t1_617_il2cpp_TypeInfo_var;
extern TypeInfo* RSA_t1_119_il2cpp_TypeInfo_var;
extern TypeInfo* NotImplementedException_t1_792_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4459;
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m3_914 (TlsClientCertificateVerify_t3_122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		SslHandshakeHash_t3_114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1401);
		RSACryptoServiceProvider_t1_617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		RSA_t1_119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		NotImplementedException_t1_792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral4459 = il2cpp_codegen_string_literal_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	AsymmetricAlgorithm_t1_575 * V_0 = {0};
	ClientContext_t3_91 * V_1 = {0};
	SslHandshakeHash_t3_114 * V_2 = {0};
	ByteU5BU5D_t1_72* V_3 = {0};
	RSA_t1_119 * V_4 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (AsymmetricAlgorithm_t1_575 *)NULL;
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_1 = ((ClientContext_t3_91 *)CastclassClass(L_0, ClientContext_t3_91_il2cpp_TypeInfo_var));
		ClientContext_t3_91 * L_1 = V_1;
		NullCheck(L_1);
		SslClientStream_t3_11 * L_2 = ClientContext_get_SslStream_m3_547(L_1, /*hidden argument*/NULL);
		ClientContext_t3_91 * L_3 = V_1;
		NullCheck(L_3);
		TlsClientSettings_t3_98 * L_4 = Context_get_ClientSettings_m3_588(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		X509Certificate_t1_572 * L_5 = TlsClientSettings_get_ClientCertificate_m3_841(L_4, /*hidden argument*/NULL);
		ClientContext_t3_91 * L_6 = V_1;
		NullCheck(L_6);
		TlsClientSettings_t3_98 * L_7 = Context_get_ClientSettings_m3_588(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = TlsClientSettings_get_TargetHost_m3_837(L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		AsymmetricAlgorithm_t1_575 * L_9 = SslClientStream_RaisePrivateKeySelection_m3_750(L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		AsymmetricAlgorithm_t1_575 * L_10 = V_0;
		if (L_10)
		{
			goto IL_0043;
		}
	}
	{
		TlsException_t3_117 * L_11 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_11, ((int32_t)90), _stringLiteral4459, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0043:
	{
		ClientContext_t3_91 * L_12 = V_1;
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_13 = Context_get_MasterSecret_m3_612(L_12, /*hidden argument*/NULL);
		SslHandshakeHash_t3_114 * L_14 = (SslHandshakeHash_t3_114 *)il2cpp_codegen_object_new (SslHandshakeHash_t3_114_il2cpp_TypeInfo_var);
		SslHandshakeHash__ctor_m3_757(L_14, L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		SslHandshakeHash_t3_114 * L_15 = V_2;
		ClientContext_t3_91 * L_16 = V_1;
		NullCheck(L_16);
		TlsStream_t3_100 * L_17 = Context_get_HandshakeMessages_m3_599(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_t1_72* L_18 = TlsStream_ToArray_m3_888(L_17, /*hidden argument*/NULL);
		ClientContext_t3_91 * L_19 = V_1;
		NullCheck(L_19);
		TlsStream_t3_100 * L_20 = Context_get_HandshakeMessages_m3_599(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		int64_t L_21 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_20);
		NullCheck(L_15);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_15, L_18, 0, (((int32_t)((int32_t)L_21))));
		V_3 = (ByteU5BU5D_t1_72*)NULL;
		AsymmetricAlgorithm_t1_575 * L_22 = V_0;
		if (((RSACryptoServiceProvider_t1_617 *)IsInstSealed(L_22, RSACryptoServiceProvider_t1_617_il2cpp_TypeInfo_var)))
		{
			goto IL_0093;
		}
	}

IL_007b:
	try
	{ // begin try (depth: 1)
		SslHandshakeHash_t3_114 * L_23 = V_2;
		AsymmetricAlgorithm_t1_575 * L_24 = V_0;
		NullCheck(L_23);
		ByteU5BU5D_t1_72* L_25 = SslHandshakeHash_CreateSignature_m3_761(L_23, ((RSA_t1_119 *)CastclassClass(L_24, RSA_t1_119_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = L_25;
		goto IL_0093;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1_33 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NotImplementedException_t1_792_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_008d;
		throw e;
	}

CATCH_008d:
	{ // begin catch(System.NotImplementedException)
		goto IL_0093;
	} // end catch (depth: 1)

IL_0093:
	{
		ByteU5BU5D_t1_72* L_26 = V_3;
		if (L_26)
		{
			goto IL_00b0;
		}
	}
	{
		AsymmetricAlgorithm_t1_575 * L_27 = V_0;
		RSA_t1_119 * L_28 = TlsClientCertificateVerify_getClientCertRSA_m3_916(__this, ((RSA_t1_119 *)CastclassClass(L_27, RSA_t1_119_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_4 = L_28;
		SslHandshakeHash_t3_114 * L_29 = V_2;
		RSA_t1_119 * L_30 = V_4;
		NullCheck(L_29);
		ByteU5BU5D_t1_72* L_31 = SslHandshakeHash_CreateSignature_m3_761(L_29, L_30, /*hidden argument*/NULL);
		V_3 = L_31;
	}

IL_00b0:
	{
		ByteU5BU5D_t1_72* L_32 = V_3;
		NullCheck(L_32);
		TlsStream_Write_m3_883(__this, (((int16_t)((int16_t)(((int32_t)((int32_t)(((Array_t *)L_32)->max_length))))))), /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_33 = V_3;
		ByteU5BU5D_t1_72* L_34 = V_3;
		NullCheck(L_34);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_33, 0, (((int32_t)((int32_t)(((Array_t *)L_34)->max_length)))));
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::ProcessAsTls1()
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* MD5SHA1_t3_82_il2cpp_TypeInfo_var;
extern TypeInfo* RSACryptoServiceProvider_t1_617_il2cpp_TypeInfo_var;
extern TypeInfo* RSA_t1_119_il2cpp_TypeInfo_var;
extern TypeInfo* NotImplementedException_t1_792_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4459;
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m3_915 (TlsClientCertificateVerify_t3_122 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		MD5SHA1_t3_82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1382);
		RSACryptoServiceProvider_t1_617_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(150);
		RSA_t1_119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		NotImplementedException_t1_792_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(113);
		_stringLiteral4459 = il2cpp_codegen_string_literal_from_index(4459);
		s_Il2CppMethodIntialized = true;
	}
	AsymmetricAlgorithm_t1_575 * V_0 = {0};
	ClientContext_t3_91 * V_1 = {0};
	MD5SHA1_t3_82 * V_2 = {0};
	ByteU5BU5D_t1_72* V_3 = {0};
	RSA_t1_119 * V_4 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		V_0 = (AsymmetricAlgorithm_t1_575 *)NULL;
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_1 = ((ClientContext_t3_91 *)CastclassClass(L_0, ClientContext_t3_91_il2cpp_TypeInfo_var));
		ClientContext_t3_91 * L_1 = V_1;
		NullCheck(L_1);
		SslClientStream_t3_11 * L_2 = ClientContext_get_SslStream_m3_547(L_1, /*hidden argument*/NULL);
		ClientContext_t3_91 * L_3 = V_1;
		NullCheck(L_3);
		TlsClientSettings_t3_98 * L_4 = Context_get_ClientSettings_m3_588(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		X509Certificate_t1_572 * L_5 = TlsClientSettings_get_ClientCertificate_m3_841(L_4, /*hidden argument*/NULL);
		ClientContext_t3_91 * L_6 = V_1;
		NullCheck(L_6);
		TlsClientSettings_t3_98 * L_7 = Context_get_ClientSettings_m3_588(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = TlsClientSettings_get_TargetHost_m3_837(L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		AsymmetricAlgorithm_t1_575 * L_9 = SslClientStream_RaisePrivateKeySelection_m3_750(L_2, L_5, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		AsymmetricAlgorithm_t1_575 * L_10 = V_0;
		if (L_10)
		{
			goto IL_0043;
		}
	}
	{
		TlsException_t3_117 * L_11 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_11, ((int32_t)90), _stringLiteral4459, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0043:
	{
		MD5SHA1_t3_82 * L_12 = (MD5SHA1_t3_82 *)il2cpp_codegen_object_new (MD5SHA1_t3_82_il2cpp_TypeInfo_var);
		MD5SHA1__ctor_m3_470(L_12, /*hidden argument*/NULL);
		V_2 = L_12;
		MD5SHA1_t3_82 * L_13 = V_2;
		ClientContext_t3_91 * L_14 = V_1;
		NullCheck(L_14);
		TlsStream_t3_100 * L_15 = Context_get_HandshakeMessages_m3_599(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		ByteU5BU5D_t1_72* L_16 = TlsStream_ToArray_m3_888(L_15, /*hidden argument*/NULL);
		ClientContext_t3_91 * L_17 = V_1;
		NullCheck(L_17);
		TlsStream_t3_100 * L_18 = Context_get_HandshakeMessages_m3_599(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		int64_t L_19 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_18);
		NullCheck(L_13);
		HashAlgorithm_ComputeHash_m1_4129(L_13, L_16, 0, (((int32_t)((int32_t)L_19))), /*hidden argument*/NULL);
		V_3 = (ByteU5BU5D_t1_72*)NULL;
		AsymmetricAlgorithm_t1_575 * L_20 = V_0;
		if (((RSACryptoServiceProvider_t1_617 *)IsInstSealed(L_20, RSACryptoServiceProvider_t1_617_il2cpp_TypeInfo_var)))
		{
			goto IL_008d;
		}
	}

IL_0075:
	try
	{ // begin try (depth: 1)
		MD5SHA1_t3_82 * L_21 = V_2;
		AsymmetricAlgorithm_t1_575 * L_22 = V_0;
		NullCheck(L_21);
		ByteU5BU5D_t1_72* L_23 = MD5SHA1_CreateSignature_m3_474(L_21, ((RSA_t1_119 *)CastclassClass(L_22, RSA_t1_119_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_3 = L_23;
		goto IL_008d;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1_33 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (NotImplementedException_t1_792_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0087;
		throw e;
	}

CATCH_0087:
	{ // begin catch(System.NotImplementedException)
		goto IL_008d;
	} // end catch (depth: 1)

IL_008d:
	{
		ByteU5BU5D_t1_72* L_24 = V_3;
		if (L_24)
		{
			goto IL_00aa;
		}
	}
	{
		AsymmetricAlgorithm_t1_575 * L_25 = V_0;
		RSA_t1_119 * L_26 = TlsClientCertificateVerify_getClientCertRSA_m3_916(__this, ((RSA_t1_119 *)CastclassClass(L_25, RSA_t1_119_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		V_4 = L_26;
		MD5SHA1_t3_82 * L_27 = V_2;
		RSA_t1_119 * L_28 = V_4;
		NullCheck(L_27);
		ByteU5BU5D_t1_72* L_29 = MD5SHA1_CreateSignature_m3_474(L_27, L_28, /*hidden argument*/NULL);
		V_3 = L_29;
	}

IL_00aa:
	{
		ByteU5BU5D_t1_72* L_30 = V_3;
		NullCheck(L_30);
		TlsStream_Write_m3_883(__this, (((int16_t)((int16_t)(((int32_t)((int32_t)(((Array_t *)L_30)->max_length))))))), /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_31 = V_3;
		ByteU5BU5D_t1_72* L_32 = V_3;
		NullCheck(L_32);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_31, 0, (((int32_t)((int32_t)(((Array_t *)L_32)->max_length)))));
		return;
	}
}
// System.Security.Cryptography.RSA Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getClientCertRSA(System.Security.Cryptography.RSA)
extern TypeInfo* RSAParameters_t1_622_il2cpp_TypeInfo_var;
extern TypeInfo* ASN1_t3_5_il2cpp_TypeInfo_var;
extern TypeInfo* RSAManaged_t3_20_il2cpp_TypeInfo_var;
extern "C" RSA_t1_119 * TlsClientCertificateVerify_getClientCertRSA_m3_916 (TlsClientCertificateVerify_t3_122 * __this, RSA_t1_119 * ___privKey, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RSAParameters_t1_622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		ASN1_t3_5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1190);
		RSAManaged_t3_20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		s_Il2CppMethodIntialized = true;
	}
	RSAParameters_t1_622  V_0 = {0};
	RSAParameters_t1_622  V_1 = {0};
	ASN1_t3_5 * V_2 = {0};
	ASN1_t3_5 * V_3 = {0};
	ASN1_t3_5 * V_4 = {0};
	int32_t V_5 = 0;
	RSAManaged_t3_20 * V_6 = {0};
	{
		Initobj (RSAParameters_t1_622_il2cpp_TypeInfo_var, (&V_0));
		RSA_t1_119 * L_0 = ___privKey;
		NullCheck(L_0);
		RSAParameters_t1_622  L_1 = (RSAParameters_t1_622 )VirtFuncInvoker1< RSAParameters_t1_622 , bool >::Invoke(12 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, L_0, 1);
		V_1 = L_1;
		Context_t3_88 * L_2 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		TlsClientSettings_t3_98 * L_3 = Context_get_ClientSettings_m3_588(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509CertificateCollection_t2_305 * L_4 = TlsClientSettings_get_Certificates_m3_839(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		X509Certificate_t1_572 * L_5 = X509CertificateCollection_get_Item_m2_5509(L_4, 0, /*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_t1_72* L_6 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(13 /* System.Byte[] System.Security.Cryptography.X509Certificates.X509Certificate::GetPublicKey() */, L_5);
		ASN1_t3_5 * L_7 = (ASN1_t3_5 *)il2cpp_codegen_object_new (ASN1_t3_5_il2cpp_TypeInfo_var);
		ASN1__ctor_m3_37(L_7, L_6, /*hidden argument*/NULL);
		V_2 = L_7;
		ASN1_t3_5 * L_8 = V_2;
		NullCheck(L_8);
		ASN1_t3_5 * L_9 = ASN1_get_Item_m3_41(L_8, 0, /*hidden argument*/NULL);
		V_3 = L_9;
		ASN1_t3_5 * L_10 = V_3;
		if (!L_10)
		{
			goto IL_004b;
		}
	}
	{
		ASN1_t3_5 * L_11 = V_3;
		NullCheck(L_11);
		uint8_t L_12 = ASN1_get_Tag_m3_38(L_11, /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)2)))
		{
			goto IL_004d;
		}
	}

IL_004b:
	{
		return (RSA_t1_119 *)NULL;
	}

IL_004d:
	{
		ASN1_t3_5 * L_13 = V_2;
		NullCheck(L_13);
		ASN1_t3_5 * L_14 = ASN1_get_Item_m3_41(L_13, 1, /*hidden argument*/NULL);
		V_4 = L_14;
		ASN1_t3_5 * L_15 = V_4;
		NullCheck(L_15);
		uint8_t L_16 = ASN1_get_Tag_m3_38(L_15, /*hidden argument*/NULL);
		if ((((int32_t)L_16) == ((int32_t)2)))
		{
			goto IL_0065;
		}
	}
	{
		return (RSA_t1_119 *)NULL;
	}

IL_0065:
	{
		ASN1_t3_5 * L_17 = V_3;
		NullCheck(L_17);
		ByteU5BU5D_t1_72* L_18 = ASN1_get_Value_m3_39(L_17, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_19 = TlsClientCertificateVerify_getUnsignedBigInteger_m3_917(__this, L_18, /*hidden argument*/NULL);
		(&V_0)->___Modulus_6 = L_19;
		ASN1_t3_5 * L_20 = V_4;
		NullCheck(L_20);
		ByteU5BU5D_t1_72* L_21 = ASN1_get_Value_m3_39(L_20, /*hidden argument*/NULL);
		(&V_0)->___Exponent_7 = L_21;
		ByteU5BU5D_t1_72* L_22 = ((&V_1)->___D_2);
		(&V_0)->___D_2 = L_22;
		ByteU5BU5D_t1_72* L_23 = ((&V_1)->___DP_3);
		(&V_0)->___DP_3 = L_23;
		ByteU5BU5D_t1_72* L_24 = ((&V_1)->___DQ_4);
		(&V_0)->___DQ_4 = L_24;
		ByteU5BU5D_t1_72* L_25 = ((&V_1)->___InverseQ_5);
		(&V_0)->___InverseQ_5 = L_25;
		ByteU5BU5D_t1_72* L_26 = ((&V_1)->___P_0);
		(&V_0)->___P_0 = L_26;
		ByteU5BU5D_t1_72* L_27 = ((&V_1)->___Q_1);
		(&V_0)->___Q_1 = L_27;
		ByteU5BU5D_t1_72* L_28 = ((&V_0)->___Modulus_6);
		NullCheck(L_28);
		V_5 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_28)->max_length))))<<(int32_t)3));
		int32_t L_29 = V_5;
		RSAManaged_t3_20 * L_30 = (RSAManaged_t3_20 *)il2cpp_codegen_object_new (RSAManaged_t3_20_il2cpp_TypeInfo_var);
		RSAManaged__ctor_m3_263(L_30, L_29, /*hidden argument*/NULL);
		V_6 = L_30;
		RSAManaged_t3_20 * L_31 = V_6;
		RSAParameters_t1_622  L_32 = V_0;
		NullCheck(L_31);
		VirtActionInvoker1< RSAParameters_t1_622  >::Invoke(13 /* System.Void Mono.Security.Cryptography.RSAManaged::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_31, L_32);
		RSAManaged_t3_20 * L_33 = V_6;
		return L_33;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Client.TlsClientCertificateVerify::getUnsignedBigInteger(System.Byte[])
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t1_72* TlsClientCertificateVerify_getUnsignedBigInteger_m3_917 (TlsClientCertificateVerify_t3_122 * __this, ByteU5BU5D_t1_72* ___integer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	ByteU5BU5D_t1_72* V_1 = {0};
	{
		ByteU5BU5D_t1_72* L_0 = ___integer;
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		int32_t L_1 = 0;
		if ((*(uint8_t*)(uint8_t*)SZArrayLdElema(L_0, L_1, sizeof(uint8_t))))
		{
			goto IL_0021;
		}
	}
	{
		ByteU5BU5D_t1_72* L_2 = ___integer;
		NullCheck(L_2);
		V_0 = ((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_2)->max_length))))-(int32_t)1));
		int32_t L_3 = V_0;
		V_1 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_3));
		ByteU5BU5D_t1_72* L_4 = ___integer;
		ByteU5BU5D_t1_72* L_5 = V_1;
		int32_t L_6 = V_0;
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_4, 1, (Array_t *)(Array_t *)L_5, 0, L_6, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_7 = V_1;
		return L_7;
	}

IL_0021:
	{
		ByteU5BU5D_t1_72* L_8 = ___integer;
		return L_8;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientFinished__ctor_m3_918 (TlsClientFinished_t3_123 * __this, Context_t3_88 * ___context, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		HandshakeMessage__ctor_m3_894(__this, L_0, ((int32_t)20), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::.cctor()
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* TlsClientFinished_t3_123_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t3_153____U24U24fieldU2D21_13_FieldInfo_var;
extern "C" void TlsClientFinished__cctor_m3_919 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		TlsClientFinished_t3_123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1363);
		U3CPrivateImplementationDetailsU3E_t3_153____U24U24fieldU2D21_13_FieldInfo_var = il2cpp_codegen_field_info_from_index(1302, 13);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t1_72* L_0 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m1_1028(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t3_153____U24U24fieldU2D21_13_FieldInfo_var), /*hidden argument*/NULL);
		((TlsClientFinished_t3_123_StaticFields*)TlsClientFinished_t3_123_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::Update()
extern "C" void TlsClientFinished_Update_m3_920 (TlsClientFinished_t3_123 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m3_901(__this, /*hidden argument*/NULL);
		TlsStream_Reset_m3_887(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::ProcessAsSsl3()
extern TypeInfo* SslHandshakeHash_t3_114_il2cpp_TypeInfo_var;
extern TypeInfo* TlsClientFinished_t3_123_il2cpp_TypeInfo_var;
extern TypeInfo* CipherSuite_t3_87_il2cpp_TypeInfo_var;
extern "C" void TlsClientFinished_ProcessAsSsl3_m3_921 (TlsClientFinished_t3_123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SslHandshakeHash_t3_114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1401);
		TlsClientFinished_t3_123_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1363);
		CipherSuite_t3_87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1350);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t1_597 * V_0 = {0};
	ByteU5BU5D_t1_72* V_1 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t1_72* L_1 = Context_get_MasterSecret_m3_612(L_0, /*hidden argument*/NULL);
		SslHandshakeHash_t3_114 * L_2 = (SslHandshakeHash_t3_114 *)il2cpp_codegen_object_new (SslHandshakeHash_t3_114_il2cpp_TypeInfo_var);
		SslHandshakeHash__ctor_m3_757(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Context_t3_88 * L_3 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsStream_t3_100 * L_4 = Context_get_HandshakeMessages_m3_599(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t1_72* L_5 = TlsStream_ToArray_m3_888(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		HashAlgorithm_t1_597 * L_6 = V_0;
		ByteU5BU5D_t1_72* L_7 = V_1;
		ByteU5BU5D_t1_72* L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t1_72* L_9 = V_1;
		NullCheck(L_6);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_6, L_7, 0, (((int32_t)((int32_t)(((Array_t *)L_8)->max_length)))), L_9, 0);
		HashAlgorithm_t1_597 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TlsClientFinished_t3_123_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_11 = ((TlsClientFinished_t3_123_StaticFields*)TlsClientFinished_t3_123_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		ByteU5BU5D_t1_72* L_12 = ((TlsClientFinished_t3_123_StaticFields*)TlsClientFinished_t3_123_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_13 = ((TlsClientFinished_t3_123_StaticFields*)TlsClientFinished_t3_123_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		NullCheck(L_10);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_10, L_11, 0, (((int32_t)((int32_t)(((Array_t *)L_12)->max_length)))), L_13, 0);
		HashAlgorithm_t1_597 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_15 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_14);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, 0);
		HashAlgorithm_t1_597 * L_16 = V_0;
		NullCheck(L_16);
		ByteU5BU5D_t1_72* L_17 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_16);
		TlsStream_Write_m3_886(__this, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientFinished::ProcessAsTls1()
extern TypeInfo* MD5SHA1_t3_82_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4460;
extern "C" void TlsClientFinished_ProcessAsTls1_m3_922 (TlsClientFinished_t3_123 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MD5SHA1_t3_82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1382);
		_stringLiteral4460 = il2cpp_codegen_string_literal_from_index(4460);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t1_597 * V_0 = {0};
	ByteU5BU5D_t1_72* V_1 = {0};
	ByteU5BU5D_t1_72* V_2 = {0};
	{
		MD5SHA1_t3_82 * L_0 = (MD5SHA1_t3_82 *)il2cpp_codegen_object_new (MD5SHA1_t3_82_il2cpp_TypeInfo_var);
		MD5SHA1__ctor_m3_470(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Context_t3_88 * L_1 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		TlsStream_t3_100 * L_2 = Context_get_HandshakeMessages_m3_599(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t1_72* L_3 = TlsStream_ToArray_m3_888(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		HashAlgorithm_t1_597 * L_4 = V_0;
		ByteU5BU5D_t1_72* L_5 = V_1;
		ByteU5BU5D_t1_72* L_6 = V_1;
		NullCheck(L_6);
		NullCheck(L_4);
		ByteU5BU5D_t1_72* L_7 = HashAlgorithm_ComputeHash_m1_4129(L_4, L_5, 0, (((int32_t)((int32_t)(((Array_t *)L_6)->max_length)))), /*hidden argument*/NULL);
		V_2 = L_7;
		Context_t3_88 * L_8 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		SecurityParameters_t3_99 * L_9 = Context_get_Write_m3_633(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		CipherSuite_t3_87 * L_10 = SecurityParameters_get_Cipher_m3_703(L_9, /*hidden argument*/NULL);
		Context_t3_88 * L_11 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		ByteU5BU5D_t1_72* L_12 = Context_get_MasterSecret_m3_612(L_11, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_13 = V_2;
		NullCheck(L_10);
		ByteU5BU5D_t1_72* L_14 = CipherSuite_PRF_m3_512(L_10, L_12, _stringLiteral4460, L_13, ((int32_t)12), /*hidden argument*/NULL);
		TlsStream_Write_m3_886(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientHello__ctor_m3_923 (TlsClientHello_t3_124 * __this, Context_t3_88 * ___context, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		HandshakeMessage__ctor_m3_894(__this, L_0, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::Update()
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern "C" void TlsClientHello_Update_m3_924 (TlsClientHello_t3_124 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t3_91 * V_0 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t3_91 *)CastclassClass(L_0, ClientContext_t3_91_il2cpp_TypeInfo_var));
		HandshakeMessage_Update_m3_901(__this, /*hidden argument*/NULL);
		ClientContext_t3_91 * L_1 = V_0;
		ByteU5BU5D_t1_72* L_2 = (__this->___random_9);
		NullCheck(L_1);
		Context_set_ClientRandom_m3_605(L_1, L_2, /*hidden argument*/NULL);
		ClientContext_t3_91 * L_3 = V_0;
		Context_t3_88 * L_4 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int16_t L_5 = Context_get_Protocol_m3_582(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		ClientContext_set_ClientHelloProtocol_m3_549(L_3, L_5, /*hidden argument*/NULL);
		__this->___random_9 = (ByteU5BU5D_t1_72*)NULL;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsSsl3()
extern "C" void TlsClientHello_ProcessAsSsl3_m3_925 (TlsClientHello_t3_124 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(29 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientHello::ProcessAsTls1()
extern TypeInfo* TlsStream_t3_100_il2cpp_TypeInfo_var;
extern TypeInfo* ClientSessionCache_t3_95_il2cpp_TypeInfo_var;
extern "C" void TlsClientHello_ProcessAsTls1_m3_926 (TlsClientHello_t3_124 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsStream_t3_100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1352);
		ClientSessionCache_t3_95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1373);
		s_Il2CppMethodIntialized = true;
	}
	TlsStream_t3_100 * V_0 = {0};
	int32_t V_1 = 0;
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int16_t L_1 = Context_get_Protocol_m3_582(L_0, /*hidden argument*/NULL);
		TlsStream_Write_m3_883(__this, L_1, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_2 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_868(L_2, /*hidden argument*/NULL);
		V_0 = L_2;
		TlsStream_t3_100 * L_3 = V_0;
		Context_t3_88 * L_4 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Context_GetUnixTime_m3_624(L_4, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsStream_Write_m3_885(L_3, L_5, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_6 = V_0;
		Context_t3_88 * L_7 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t1_72* L_8 = Context_GetSecureRandomBytes_m3_625(L_7, ((int32_t)28), /*hidden argument*/NULL);
		NullCheck(L_6);
		TlsStream_Write_m3_886(L_6, L_8, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_9 = V_0;
		NullCheck(L_9);
		ByteU5BU5D_t1_72* L_10 = TlsStream_ToArray_m3_888(L_9, /*hidden argument*/NULL);
		__this->___random_9 = L_10;
		TlsStream_t3_100 * L_11 = V_0;
		NullCheck(L_11);
		TlsStream_Reset_m3_887(L_11, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_12 = (__this->___random_9);
		TlsStream_Write_m3_886(__this, L_12, /*hidden argument*/NULL);
		Context_t3_88 * L_13 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		Context_t3_88 * L_14 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		TlsClientSettings_t3_98 * L_15 = Context_get_ClientSettings_m3_588(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = TlsClientSettings_get_TargetHost_m3_837(L_15, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(ClientSessionCache_t3_95_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_17 = ClientSessionCache_FromHost_m3_570(NULL /*static, unused*/, L_16, /*hidden argument*/NULL);
		NullCheck(L_13);
		Context_set_SessionId_m3_584(L_13, L_17, /*hidden argument*/NULL);
		Context_t3_88 * L_18 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		ByteU5BU5D_t1_72* L_19 = Context_get_SessionId_m3_583(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_00c6;
		}
	}
	{
		Context_t3_88 * L_20 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		ByteU5BU5D_t1_72* L_21 = Context_get_SessionId_m3_583(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		TlsStream_Write_m3_882(__this, (((int32_t)((uint8_t)(((int32_t)((int32_t)(((Array_t *)L_21)->max_length))))))), /*hidden argument*/NULL);
		Context_t3_88 * L_22 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		ByteU5BU5D_t1_72* L_23 = Context_get_SessionId_m3_583(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_23)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_00c1;
		}
	}
	{
		Context_t3_88 * L_24 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_24);
		ByteU5BU5D_t1_72* L_25 = Context_get_SessionId_m3_583(L_24, /*hidden argument*/NULL);
		TlsStream_Write_m3_886(__this, L_25, /*hidden argument*/NULL);
	}

IL_00c1:
	{
		goto IL_00cd;
	}

IL_00c6:
	{
		TlsStream_Write_m3_882(__this, 0, /*hidden argument*/NULL);
	}

IL_00cd:
	{
		Context_t3_88 * L_26 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		CipherSuiteCollection_t3_89 * L_27 = Context_get_SupportedCiphers_m3_597(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		int32_t L_28 = CipherSuiteCollection_get_Count_m3_532(L_27, /*hidden argument*/NULL);
		TlsStream_Write_m3_883(__this, (((int16_t)((int16_t)((int32_t)((int32_t)L_28*(int32_t)2))))), /*hidden argument*/NULL);
		V_1 = 0;
		goto IL_010d;
	}

IL_00ed:
	{
		Context_t3_88 * L_29 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		CipherSuiteCollection_t3_89 * L_30 = Context_get_SupportedCiphers_m3_597(L_29, /*hidden argument*/NULL);
		int32_t L_31 = V_1;
		NullCheck(L_30);
		CipherSuite_t3_87 * L_32 = CipherSuiteCollection_get_Item_m3_529(L_30, L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		int16_t L_33 = CipherSuite_get_Code_m3_496(L_32, /*hidden argument*/NULL);
		TlsStream_Write_m3_883(__this, L_33, /*hidden argument*/NULL);
		int32_t L_34 = V_1;
		V_1 = ((int32_t)((int32_t)L_34+(int32_t)1));
	}

IL_010d:
	{
		int32_t L_35 = V_1;
		Context_t3_88 * L_36 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_36);
		CipherSuiteCollection_t3_89 * L_37 = Context_get_SupportedCiphers_m3_597(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		int32_t L_38 = CipherSuiteCollection_get_Count_m3_532(L_37, /*hidden argument*/NULL);
		if ((((int32_t)L_35) < ((int32_t)L_38)))
		{
			goto IL_00ed;
		}
	}
	{
		TlsStream_Write_m3_882(__this, 1, /*hidden argument*/NULL);
		Context_t3_88 * L_39 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_39);
		int32_t L_40 = Context_get_CompressionMethod_m3_585(L_39, /*hidden argument*/NULL);
		TlsStream_Write_m3_882(__this, (((int32_t)((uint8_t)L_40))), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsClientKeyExchange__ctor_m3_927 (TlsClientKeyExchange_t3_125 * __this, Context_t3_88 * ___context, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		HandshakeMessage__ctor_m3_894(__this, L_0, ((int32_t)16), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessAsSsl3()
extern "C" void TlsClientKeyExchange_ProcessAsSsl3_m3_928 (TlsClientKeyExchange_t3_125 * __this, const MethodInfo* method)
{
	{
		TlsClientKeyExchange_ProcessCommon_m3_930(__this, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessAsTls1()
extern "C" void TlsClientKeyExchange_ProcessAsTls1_m3_929 (TlsClientKeyExchange_t3_125 * __this, const MethodInfo* method)
{
	{
		TlsClientKeyExchange_ProcessCommon_m3_930(__this, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsClientKeyExchange::ProcessCommon(System.Boolean)
extern TypeInfo* RSAManaged_t3_20_il2cpp_TypeInfo_var;
extern TypeInfo* RSAPKCS1KeyExchangeFormatter_t1_619_il2cpp_TypeInfo_var;
extern "C" void TlsClientKeyExchange_ProcessCommon_m3_930 (TlsClientKeyExchange_t3_125 * __this, bool ___sendLength, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RSAManaged_t3_20_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1188);
		RSAPKCS1KeyExchangeFormatter_t1_619_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1402);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t1_72* V_0 = {0};
	RSA_t1_119 * V_1 = {0};
	RSAPKCS1KeyExchangeFormatter_t1_619 * V_2 = {0};
	ByteU5BU5D_t1_72* V_3 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		SecurityParameters_t3_99 * L_1 = Context_get_Negotiating_m3_631(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		CipherSuite_t3_87 * L_2 = SecurityParameters_get_Cipher_m3_703(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t1_72* L_3 = CipherSuite_CreatePremasterSecret_m3_511(L_2, /*hidden argument*/NULL);
		V_0 = L_3;
		V_1 = (RSA_t1_119 *)NULL;
		Context_t3_88 * L_4 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		TlsServerSettings_t3_97 * L_5 = Context_get_ServerSettings_m3_587(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		bool L_6 = TlsServerSettings_get_ServerKeyExchange_m3_853(L_5, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_004e;
		}
	}
	{
		RSAManaged_t3_20 * L_7 = (RSAManaged_t3_20 *)il2cpp_codegen_object_new (RSAManaged_t3_20_il2cpp_TypeInfo_var);
		RSAManaged__ctor_m3_262(L_7, /*hidden argument*/NULL);
		V_1 = L_7;
		RSA_t1_119 * L_8 = V_1;
		Context_t3_88 * L_9 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		TlsServerSettings_t3_97 * L_10 = Context_get_ServerSettings_m3_587(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		RSAParameters_t1_622  L_11 = TlsServerSettings_get_RsaParameters_m3_858(L_10, /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtActionInvoker1< RSAParameters_t1_622  >::Invoke(13 /* System.Void System.Security.Cryptography.RSA::ImportParameters(System.Security.Cryptography.RSAParameters) */, L_8, L_11);
		goto IL_005f;
	}

IL_004e:
	{
		Context_t3_88 * L_12 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		TlsServerSettings_t3_97 * L_13 = Context_get_ServerSettings_m3_587(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		RSA_t1_119 * L_14 = TlsServerSettings_get_CertificateRSA_m3_857(L_13, /*hidden argument*/NULL);
		V_1 = L_14;
	}

IL_005f:
	{
		RSA_t1_119 * L_15 = V_1;
		RSAPKCS1KeyExchangeFormatter_t1_619 * L_16 = (RSAPKCS1KeyExchangeFormatter_t1_619 *)il2cpp_codegen_object_new (RSAPKCS1KeyExchangeFormatter_t1_619_il2cpp_TypeInfo_var);
		RSAPKCS1KeyExchangeFormatter__ctor_m1_4241(L_16, L_15, /*hidden argument*/NULL);
		V_2 = L_16;
		RSAPKCS1KeyExchangeFormatter_t1_619 * L_17 = V_2;
		ByteU5BU5D_t1_72* L_18 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_t1_72* L_19 = (ByteU5BU5D_t1_72*)VirtFuncInvoker1< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72* >::Invoke(4 /* System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeFormatter::CreateKeyExchange(System.Byte[]) */, L_17, L_18);
		V_3 = L_19;
		bool L_20 = ___sendLength;
		if (!L_20)
		{
			goto IL_007e;
		}
	}
	{
		ByteU5BU5D_t1_72* L_21 = V_3;
		NullCheck(L_21);
		TlsStream_Write_m3_883(__this, (((int16_t)((int16_t)(((int32_t)((int32_t)(((Array_t *)L_21)->max_length))))))), /*hidden argument*/NULL);
	}

IL_007e:
	{
		ByteU5BU5D_t1_72* L_22 = V_3;
		TlsStream_Write_m3_886(__this, L_22, /*hidden argument*/NULL);
		Context_t3_88 * L_23 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		SecurityParameters_t3_99 * L_24 = Context_get_Negotiating_m3_631(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		CipherSuite_t3_87 * L_25 = SecurityParameters_get_Cipher_m3_703(L_24, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_26 = V_0;
		NullCheck(L_25);
		VirtActionInvoker1< ByteU5BU5D_t1_72* >::Invoke(6 /* System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeMasterSecret(System.Byte[]) */, L_25, L_26);
		Context_t3_88 * L_27 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		SecurityParameters_t3_99 * L_28 = Context_get_Negotiating_m3_631(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		CipherSuite_t3_87 * L_29 = SecurityParameters_get_Cipher_m3_703(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		VirtActionInvoker0::Invoke(7 /* System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeKeys() */, L_29);
		RSA_t1_119 * L_30 = V_1;
		NullCheck(L_30);
		AsymmetricAlgorithm_Clear_m1_4016(L_30, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerCertificate__ctor_m3_931 (TlsServerCertificate_t3_126 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		HandshakeMessage__ctor_m3_896(__this, L_0, ((int32_t)11), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Update()
extern "C" void TlsServerCertificate_Update_m3_932 (TlsServerCertificate_t3_126 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m3_901(__this, /*hidden argument*/NULL);
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TlsServerSettings_t3_97 * L_1 = Context_get_ServerSettings_m3_587(L_0, /*hidden argument*/NULL);
		X509CertificateCollection_t3_4 * L_2 = (__this->___certificates_9);
		NullCheck(L_1);
		TlsServerSettings_set_Certificates_m3_856(L_1, L_2, /*hidden argument*/NULL);
		Context_t3_88 * L_3 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsServerSettings_t3_97 * L_4 = Context_get_ServerSettings_m3_587(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		TlsServerSettings_UpdateCertificateRSA_m3_867(L_4, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsSsl3()
extern "C" void TlsServerCertificate_ProcessAsSsl3_m3_933 (TlsServerCertificate_t3_126 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(29 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::ProcessAsTls1()
extern TypeInfo* X509CertificateCollection_t3_4_il2cpp_TypeInfo_var;
extern TypeInfo* X509Certificate_t3_1_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificate_ProcessAsTls1_m3_934 (TlsServerCertificate_t3_126 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		X509CertificateCollection_t3_4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1314);
		X509Certificate_t3_1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1193);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t1_72* V_3 = {0};
	X509Certificate_t3_1 * V_4 = {0};
	{
		X509CertificateCollection_t3_4 * L_0 = (X509CertificateCollection_t3_4 *)il2cpp_codegen_object_new (X509CertificateCollection_t3_4_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m3_356(L_0, /*hidden argument*/NULL);
		__this->___certificates_9 = L_0;
		V_0 = 0;
		int32_t L_1 = TlsStream_ReadInt24_m3_880(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		goto IL_004d;
	}

IL_0019:
	{
		int32_t L_2 = TlsStream_ReadInt24_m3_880(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_0;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)3));
		int32_t L_4 = V_2;
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_004d;
		}
	}
	{
		int32_t L_5 = V_2;
		ByteU5BU5D_t1_72* L_6 = TlsStream_ReadBytes_m3_881(__this, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		ByteU5BU5D_t1_72* L_7 = V_3;
		X509Certificate_t3_1 * L_8 = (X509Certificate_t3_1 *)il2cpp_codegen_object_new (X509Certificate_t3_1_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m3_49(L_8, L_7, /*hidden argument*/NULL);
		V_4 = L_8;
		X509CertificateCollection_t3_4 * L_9 = (__this->___certificates_9);
		X509Certificate_t3_1 * L_10 = V_4;
		NullCheck(L_9);
		X509CertificateCollection_Add_m3_359(L_9, L_10, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		int32_t L_12 = V_2;
		V_0 = ((int32_t)((int32_t)L_11+(int32_t)L_12));
	}

IL_004d:
	{
		int32_t L_13 = V_0;
		int32_t L_14 = V_1;
		if ((((int32_t)L_13) < ((int32_t)L_14)))
		{
			goto IL_0019;
		}
	}
	{
		X509CertificateCollection_t3_4 * L_15 = (__this->___certificates_9);
		TlsServerCertificate_validateCertificates_m3_936(__this, L_15, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern TypeInfo* KeyUsageExtension_t3_77_il2cpp_TypeInfo_var;
extern TypeInfo* ExtendedKeyUsageExtension_t3_74_il2cpp_TypeInfo_var;
extern TypeInfo* NetscapeCertTypeExtension_t3_79_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1564;
extern Il2CppCodeGenString* _stringLiteral1568;
extern Il2CppCodeGenString* _stringLiteral3884;
extern Il2CppCodeGenString* _stringLiteral3885;
extern Il2CppCodeGenString* _stringLiteral3886;
extern "C" bool TlsServerCertificate_checkCertificateUsage_m3_935 (TlsServerCertificate_t3_126 * __this, X509Certificate_t3_1 * ___cert, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		KeyUsageExtension_t3_77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1403);
		ExtendedKeyUsageExtension_t3_74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1344);
		NetscapeCertTypeExtension_t3_79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1404);
		_stringLiteral1564 = il2cpp_codegen_string_literal_from_index(1564);
		_stringLiteral1568 = il2cpp_codegen_string_literal_from_index(1568);
		_stringLiteral3884 = il2cpp_codegen_string_literal_from_index(3884);
		_stringLiteral3885 = il2cpp_codegen_string_literal_from_index(3885);
		_stringLiteral3886 = il2cpp_codegen_string_literal_from_index(3886);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t3_91 * V_0 = {0};
	int32_t V_1 = {0};
	KeyUsageExtension_t3_77 * V_2 = {0};
	ExtendedKeyUsageExtension_t3_74 * V_3 = {0};
	X509Extension_t3_7 * V_4 = {0};
	NetscapeCertTypeExtension_t3_79 * V_5 = {0};
	int32_t V_6 = {0};
	int32_t G_B19_0 = 0;
	int32_t G_B26_0 = 0;
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t3_91 *)CastclassClass(L_0, ClientContext_t3_91_il2cpp_TypeInfo_var));
		X509Certificate_t3_1 * L_1 = ___cert;
		NullCheck(L_1);
		int32_t L_2 = X509Certificate_get_Version_m3_53(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		V_1 = 0;
		ClientContext_t3_91 * L_3 = V_0;
		NullCheck(L_3);
		SecurityParameters_t3_99 * L_4 = Context_get_Negotiating_m3_631(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		CipherSuite_t3_87 * L_5 = SecurityParameters_get_Cipher_m3_703(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = CipherSuite_get_ExchangeAlgorithmType_m3_494(L_5, /*hidden argument*/NULL);
		V_6 = L_6;
		int32_t L_7 = V_6;
		if (L_7 == 0)
		{
			goto IL_0061;
		}
		if (L_7 == 1)
		{
			goto IL_0068;
		}
		if (L_7 == 2)
		{
			goto IL_006a;
		}
		if (L_7 == 3)
		{
			goto IL_0059;
		}
		if (L_7 == 4)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_006a;
	}

IL_004e:
	{
		V_1 = ((int32_t)128);
		goto IL_006a;
	}

IL_0059:
	{
		V_1 = ((int32_t)32);
		goto IL_006a;
	}

IL_0061:
	{
		V_1 = 8;
		goto IL_006a;
	}

IL_0068:
	{
		return 0;
	}

IL_006a:
	{
		V_2 = (KeyUsageExtension_t3_77 *)NULL;
		V_3 = (ExtendedKeyUsageExtension_t3_74 *)NULL;
		X509Certificate_t3_1 * L_8 = ___cert;
		NullCheck(L_8);
		X509ExtensionCollection_t3_17 * L_9 = X509Certificate_get_Extensions_m3_28(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		X509Extension_t3_7 * L_10 = X509ExtensionCollection_get_Item_m3_29(L_9, _stringLiteral1564, /*hidden argument*/NULL);
		V_4 = L_10;
		X509Extension_t3_7 * L_11 = V_4;
		if (!L_11)
		{
			goto IL_008f;
		}
	}
	{
		X509Extension_t3_7 * L_12 = V_4;
		KeyUsageExtension_t3_77 * L_13 = (KeyUsageExtension_t3_77 *)il2cpp_codegen_object_new (KeyUsageExtension_t3_77_il2cpp_TypeInfo_var);
		KeyUsageExtension__ctor_m3_448(L_13, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
	}

IL_008f:
	{
		X509Certificate_t3_1 * L_14 = ___cert;
		NullCheck(L_14);
		X509ExtensionCollection_t3_17 * L_15 = X509Certificate_get_Extensions_m3_28(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		X509Extension_t3_7 * L_16 = X509ExtensionCollection_get_Item_m3_29(L_15, _stringLiteral1568, /*hidden argument*/NULL);
		V_4 = L_16;
		X509Extension_t3_7 * L_17 = V_4;
		if (!L_17)
		{
			goto IL_00b0;
		}
	}
	{
		X509Extension_t3_7 * L_18 = V_4;
		ExtendedKeyUsageExtension_t3_74 * L_19 = (ExtendedKeyUsageExtension_t3_74 *)il2cpp_codegen_object_new (ExtendedKeyUsageExtension_t3_74_il2cpp_TypeInfo_var);
		ExtendedKeyUsageExtension__ctor_m3_439(L_19, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
	}

IL_00b0:
	{
		KeyUsageExtension_t3_77 * L_20 = V_2;
		if (!L_20)
		{
			goto IL_00f3;
		}
	}
	{
		ExtendedKeyUsageExtension_t3_74 * L_21 = V_3;
		if (!L_21)
		{
			goto IL_00f3;
		}
	}
	{
		KeyUsageExtension_t3_77 * L_22 = V_2;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		bool L_24 = KeyUsageExtension_Support_m3_451(L_22, L_23, /*hidden argument*/NULL);
		if (L_24)
		{
			goto IL_00ca;
		}
	}
	{
		return 0;
	}

IL_00ca:
	{
		ExtendedKeyUsageExtension_t3_74 * L_25 = V_3;
		NullCheck(L_25);
		ArrayList_t1_114 * L_26 = ExtendedKeyUsageExtension_get_KeyPurpose_m3_442(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_27 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_26, _stringLiteral3884);
		if (L_27)
		{
			goto IL_00f1;
		}
	}
	{
		ExtendedKeyUsageExtension_t3_74 * L_28 = V_3;
		NullCheck(L_28);
		ArrayList_t1_114 * L_29 = ExtendedKeyUsageExtension_get_KeyPurpose_m3_442(L_28, /*hidden argument*/NULL);
		NullCheck(L_29);
		bool L_30 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_29, _stringLiteral3885);
		G_B19_0 = ((int32_t)(L_30));
		goto IL_00f2;
	}

IL_00f1:
	{
		G_B19_0 = 1;
	}

IL_00f2:
	{
		return G_B19_0;
	}

IL_00f3:
	{
		KeyUsageExtension_t3_77 * L_31 = V_2;
		if (!L_31)
		{
			goto IL_0101;
		}
	}
	{
		KeyUsageExtension_t3_77 * L_32 = V_2;
		int32_t L_33 = V_1;
		NullCheck(L_32);
		bool L_34 = KeyUsageExtension_Support_m3_451(L_32, L_33, /*hidden argument*/NULL);
		return L_34;
	}

IL_0101:
	{
		ExtendedKeyUsageExtension_t3_74 * L_35 = V_3;
		if (!L_35)
		{
			goto IL_0130;
		}
	}
	{
		ExtendedKeyUsageExtension_t3_74 * L_36 = V_3;
		NullCheck(L_36);
		ArrayList_t1_114 * L_37 = ExtendedKeyUsageExtension_get_KeyPurpose_m3_442(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		bool L_38 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_37, _stringLiteral3884);
		if (L_38)
		{
			goto IL_012e;
		}
	}
	{
		ExtendedKeyUsageExtension_t3_74 * L_39 = V_3;
		NullCheck(L_39);
		ArrayList_t1_114 * L_40 = ExtendedKeyUsageExtension_get_KeyPurpose_m3_442(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		bool L_41 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_40, _stringLiteral3885);
		G_B26_0 = ((int32_t)(L_41));
		goto IL_012f;
	}

IL_012e:
	{
		G_B26_0 = 1;
	}

IL_012f:
	{
		return G_B26_0;
	}

IL_0130:
	{
		X509Certificate_t3_1 * L_42 = ___cert;
		NullCheck(L_42);
		X509ExtensionCollection_t3_17 * L_43 = X509Certificate_get_Extensions_m3_28(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		X509Extension_t3_7 * L_44 = X509ExtensionCollection_get_Item_m3_29(L_43, _stringLiteral3886, /*hidden argument*/NULL);
		V_4 = L_44;
		X509Extension_t3_7 * L_45 = V_4;
		if (!L_45)
		{
			goto IL_015c;
		}
	}
	{
		X509Extension_t3_7 * L_46 = V_4;
		NetscapeCertTypeExtension_t3_79 * L_47 = (NetscapeCertTypeExtension_t3_79 *)il2cpp_codegen_object_new (NetscapeCertTypeExtension_t3_79_il2cpp_TypeInfo_var);
		NetscapeCertTypeExtension__ctor_m3_453(L_47, L_46, /*hidden argument*/NULL);
		V_5 = L_47;
		NetscapeCertTypeExtension_t3_79 * L_48 = V_5;
		NullCheck(L_48);
		bool L_49 = NetscapeCertTypeExtension_Support_m3_455(L_48, ((int32_t)64), /*hidden argument*/NULL);
		return L_49;
	}

IL_015c:
	{
		return 1;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern const Il2CppType* Int32_t1_3_0_0_0_var;
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern TypeInfo* Int64_t1_7_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* X509Certificate_t1_572_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t1_114_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t1_3_il2cpp_TypeInfo_var;
extern TypeInfo* X509CertificateCollection_t3_4_il2cpp_TypeInfo_var;
extern TypeInfo* X509Chain_t3_53_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t1_33_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1_161_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4461;
extern Il2CppCodeGenString* _stringLiteral4462;
extern Il2CppCodeGenString* _stringLiteral4463;
extern "C" void TlsServerCertificate_validateCertificates_m3_936 (TlsServerCertificate_t3_126 * __this, X509CertificateCollection_t3_4 * ___certificates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t1_3_0_0_0_var = il2cpp_codegen_type_from_index(8);
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		Int64_t1_7_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(18);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		X509Certificate_t1_572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		ArrayList_t1_114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		Int32_t1_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		X509CertificateCollection_t3_4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1314);
		X509Chain_t3_53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1405);
		Exception_t1_33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Int32U5BU5D_t1_161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		_stringLiteral4461 = il2cpp_codegen_string_literal_from_index(4461);
		_stringLiteral4462 = il2cpp_codegen_string_literal_from_index(4462);
		_stringLiteral4463 = il2cpp_codegen_string_literal_from_index(4463);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t3_91 * V_0 = {0};
	uint8_t V_1 = {0};
	ValidationResult_t3_3 * V_2 = {0};
	int64_t V_3 = 0;
	String_t* V_4 = {0};
	X509Certificate_t3_1 * V_5 = {0};
	X509Certificate_t1_572 * V_6 = {0};
	ArrayList_t1_114 * V_7 = {0};
	X509CertificateCollection_t3_4 * V_8 = {0};
	X509Chain_t3_53 * V_9 = {0};
	bool V_10 = false;
	Int32U5BU5D_t1_161* V_11 = {0};
	int64_t V_12 = 0;
	int32_t V_13 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t3_91 *)CastclassClass(L_0, ClientContext_t3_91_il2cpp_TypeInfo_var));
		V_1 = ((int32_t)42);
		ClientContext_t3_91 * L_1 = V_0;
		NullCheck(L_1);
		SslClientStream_t3_11 * L_2 = ClientContext_get_SslStream_m3_547(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		bool L_3 = (bool)VirtFuncInvoker0< bool >::Invoke(34 /* System.Boolean Mono.Security.Protocol.Tls.SslClientStream::get_HaveRemoteValidation2Callback() */, L_2);
		if (!L_3)
		{
			goto IL_00b4;
		}
	}
	{
		ClientContext_t3_91 * L_4 = V_0;
		NullCheck(L_4);
		SslClientStream_t3_11 * L_5 = ClientContext_get_SslStream_m3_547(L_4, /*hidden argument*/NULL);
		X509CertificateCollection_t3_4 * L_6 = ___certificates;
		NullCheck(L_5);
		ValidationResult_t3_3 * L_7 = (ValidationResult_t3_3 *)VirtFuncInvoker1< ValidationResult_t3_3 *, X509CertificateCollection_t3_4 * >::Invoke(37 /* Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation2(Mono.Security.X509.X509CertificateCollection) */, L_5, L_6);
		V_2 = L_7;
		ValidationResult_t3_3 * L_8 = V_2;
		NullCheck(L_8);
		bool L_9 = ValidationResult_get_Trusted_m3_719(L_8, /*hidden argument*/NULL);
		if (!L_9)
		{
			goto IL_0038;
		}
	}
	{
		return;
	}

IL_0038:
	{
		ValidationResult_t3_3 * L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11 = ValidationResult_get_ErrorCode_m3_720(L_10, /*hidden argument*/NULL);
		V_3 = (((int64_t)((int64_t)L_11)));
		int64_t L_12 = V_3;
		V_12 = L_12;
		int64_t L_13 = V_12;
		if ((((int64_t)L_13) == ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)-2146762487))))))))))
		{
			goto IL_007f;
		}
	}
	{
		int64_t L_14 = V_12;
		if ((((int64_t)L_14) == ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)-2146762486))))))))))
		{
			goto IL_0077;
		}
	}
	{
		int64_t L_15 = V_12;
		if ((((int64_t)L_15) == ((int64_t)(((int64_t)((uint64_t)(((uint32_t)((uint32_t)((int32_t)-2146762495))))))))))
		{
			goto IL_006f;
		}
	}
	{
		goto IL_0087;
	}

IL_006f:
	{
		V_1 = ((int32_t)45);
		goto IL_008f;
	}

IL_0077:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_007f:
	{
		V_1 = ((int32_t)48);
		goto IL_008f;
	}

IL_0087:
	{
		V_1 = ((int32_t)46);
		goto IL_008f;
	}

IL_008f:
	{
		int64_t L_16 = V_3;
		int64_t L_17 = L_16;
		Object_t * L_18 = Box(Int64_t1_7_il2cpp_TypeInfo_var, &L_17);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_19 = String_Format_m1_436(NULL /*static, unused*/, _stringLiteral4461, L_18, /*hidden argument*/NULL);
		V_4 = L_19;
		uint8_t L_20 = V_1;
		String_t* L_21 = V_4;
		String_t* L_22 = String_Concat_m1_444(NULL /*static, unused*/, _stringLiteral4462, L_21, /*hidden argument*/NULL);
		TlsException_t3_117 * L_23 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_23, L_20, L_22, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_23);
	}

IL_00b4:
	{
		X509CertificateCollection_t3_4 * L_24 = ___certificates;
		NullCheck(L_24);
		X509Certificate_t3_1 * L_25 = X509CertificateCollection_get_Item_m3_26(L_24, 0, /*hidden argument*/NULL);
		V_5 = L_25;
		X509Certificate_t3_1 * L_26 = V_5;
		NullCheck(L_26);
		ByteU5BU5D_t1_72* L_27 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_26);
		X509Certificate_t1_572 * L_28 = (X509Certificate_t1_572 *)il2cpp_codegen_object_new (X509Certificate_t1_572_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m1_3979(L_28, L_27, /*hidden argument*/NULL);
		V_6 = L_28;
		ArrayList_t1_114 * L_29 = (ArrayList_t1_114 *)il2cpp_codegen_object_new (ArrayList_t1_114_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1_1634(L_29, /*hidden argument*/NULL);
		V_7 = L_29;
		X509Certificate_t3_1 * L_30 = V_5;
		bool L_31 = TlsServerCertificate_checkCertificateUsage_m3_935(__this, L_30, /*hidden argument*/NULL);
		if (L_31)
		{
			goto IL_00f1;
		}
	}
	{
		ArrayList_t1_114 * L_32 = V_7;
		int32_t L_33 = ((int32_t)-2146762490);
		Object_t * L_34 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_32);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_32, L_34);
	}

IL_00f1:
	{
		X509Certificate_t3_1 * L_35 = V_5;
		bool L_36 = TlsServerCertificate_checkServerIdentity_m3_937(__this, L_35, /*hidden argument*/NULL);
		if (L_36)
		{
			goto IL_0110;
		}
	}
	{
		ArrayList_t1_114 * L_37 = V_7;
		int32_t L_38 = ((int32_t)-2146762481);
		Object_t * L_39 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_38);
		NullCheck(L_37);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_37, L_39);
	}

IL_0110:
	{
		X509CertificateCollection_t3_4 * L_40 = ___certificates;
		X509CertificateCollection_t3_4 * L_41 = (X509CertificateCollection_t3_4 *)il2cpp_codegen_object_new (X509CertificateCollection_t3_4_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m3_357(L_41, L_40, /*hidden argument*/NULL);
		V_8 = L_41;
		X509CertificateCollection_t3_4 * L_42 = V_8;
		X509Certificate_t3_1 * L_43 = V_5;
		NullCheck(L_42);
		X509CertificateCollection_Remove_m3_364(L_42, L_43, /*hidden argument*/NULL);
		X509CertificateCollection_t3_4 * L_44 = V_8;
		X509Chain_t3_53 * L_45 = (X509Chain_t3_53 *)il2cpp_codegen_object_new (X509Chain_t3_53_il2cpp_TypeInfo_var);
		X509Chain__ctor_m3_367(L_45, L_44, /*hidden argument*/NULL);
		V_9 = L_45;
		V_10 = 0;
	}

IL_012d:
	try
	{ // begin try (depth: 1)
		X509Chain_t3_53 * L_46 = V_9;
		X509Certificate_t3_1 * L_47 = V_5;
		NullCheck(L_46);
		bool L_48 = X509Chain_Build_m3_370(L_46, L_47, /*hidden argument*/NULL);
		V_10 = L_48;
		goto IL_0146;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1_33 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1_33_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_013d;
		throw e;
	}

CATCH_013d:
	{ // begin catch(System.Exception)
		V_10 = 0;
		goto IL_0146;
	} // end catch (depth: 1)

IL_0146:
	{
		bool L_49 = V_10;
		if (L_49)
		{
			goto IL_0243;
		}
	}
	{
		X509Chain_t3_53 * L_50 = V_9;
		NullCheck(L_50);
		int32_t L_51 = X509Chain_get_Status_m3_368(L_50, /*hidden argument*/NULL);
		V_13 = L_51;
		int32_t L_52 = V_13;
		if ((((int32_t)L_52) == ((int32_t)1)))
		{
			goto IL_01d9;
		}
	}
	{
		int32_t L_53 = V_13;
		if ((((int32_t)L_53) == ((int32_t)2)))
		{
			goto IL_01c2;
		}
	}
	{
		int32_t L_54 = V_13;
		if ((((int32_t)L_54) == ((int32_t)8)))
		{
			goto IL_01ab;
		}
	}
	{
		int32_t L_55 = V_13;
		if ((((int32_t)L_55) == ((int32_t)((int32_t)32))))
		{
			goto IL_020d;
		}
	}
	{
		int32_t L_56 = V_13;
		if ((((int32_t)L_56) == ((int32_t)((int32_t)1024))))
		{
			goto IL_0194;
		}
	}
	{
		int32_t L_57 = V_13;
		if ((((int32_t)L_57) == ((int32_t)((int32_t)65536))))
		{
			goto IL_01f3;
		}
	}
	{
		goto IL_0227;
	}

IL_0194:
	{
		ArrayList_t1_114 * L_58 = V_7;
		int32_t L_59 = ((int32_t)-2146869223);
		Object_t * L_60 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_59);
		NullCheck(L_58);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_58, L_60);
		goto IL_0243;
	}

IL_01ab:
	{
		ArrayList_t1_114 * L_61 = V_7;
		int32_t L_62 = ((int32_t)-2146869232);
		Object_t * L_63 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_62);
		NullCheck(L_61);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_61, L_63);
		goto IL_0243;
	}

IL_01c2:
	{
		ArrayList_t1_114 * L_64 = V_7;
		int32_t L_65 = ((int32_t)-2146762494);
		Object_t * L_66 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_65);
		NullCheck(L_64);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_64, L_66);
		goto IL_0243;
	}

IL_01d9:
	{
		V_1 = ((int32_t)45);
		ArrayList_t1_114 * L_67 = V_7;
		int32_t L_68 = ((int32_t)-2146762495);
		Object_t * L_69 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_68);
		NullCheck(L_67);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_67, L_69);
		goto IL_0243;
	}

IL_01f3:
	{
		V_1 = ((int32_t)48);
		ArrayList_t1_114 * L_70 = V_7;
		int32_t L_71 = ((int32_t)-2146762486);
		Object_t * L_72 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_71);
		NullCheck(L_70);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_70, L_72);
		goto IL_0243;
	}

IL_020d:
	{
		V_1 = ((int32_t)48);
		ArrayList_t1_114 * L_73 = V_7;
		int32_t L_74 = ((int32_t)-2146762487);
		Object_t * L_75 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_74);
		NullCheck(L_73);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_73, L_75);
		goto IL_0243;
	}

IL_0227:
	{
		V_1 = ((int32_t)46);
		ArrayList_t1_114 * L_76 = V_7;
		X509Chain_t3_53 * L_77 = V_9;
		NullCheck(L_77);
		int32_t L_78 = X509Chain_get_Status_m3_368(L_77, /*hidden argument*/NULL);
		int32_t L_79 = L_78;
		Object_t * L_80 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_79);
		NullCheck(L_76);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_76, L_80);
		goto IL_0243;
	}

IL_0243:
	{
		ArrayList_t1_114 * L_81 = V_7;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_82 = Type_GetTypeFromHandle_m1_924(NULL /*static, unused*/, LoadTypeToken(Int32_t1_3_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_81);
		Array_t * L_83 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_81, L_82);
		V_11 = ((Int32U5BU5D_t1_161*)Castclass(L_83, Int32U5BU5D_t1_161_il2cpp_TypeInfo_var));
		ClientContext_t3_91 * L_84 = V_0;
		NullCheck(L_84);
		SslClientStream_t3_11 * L_85 = ClientContext_get_SslStream_m3_547(L_84, /*hidden argument*/NULL);
		X509Certificate_t1_572 * L_86 = V_6;
		Int32U5BU5D_t1_161* L_87 = V_11;
		NullCheck(L_85);
		bool L_88 = (bool)VirtFuncInvoker2< bool, X509Certificate_t1_572 *, Int32U5BU5D_t1_161* >::Invoke(36 /* System.Boolean Mono.Security.Protocol.Tls.SslClientStream::RaiseServerCertificateValidation(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[]) */, L_85, L_86, L_87);
		if (L_88)
		{
			goto IL_027b;
		}
	}
	{
		uint8_t L_89 = V_1;
		TlsException_t3_117 * L_90 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_90, L_89, _stringLiteral4463, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_90);
	}

IL_027b:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkServerIdentity(Mono.Security.X509.X509Certificate)
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern TypeInfo* SubjectAltNameExtension_t3_16_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3889;
extern "C" bool TlsServerCertificate_checkServerIdentity_m3_937 (TlsServerCertificate_t3_126 * __this, X509Certificate_t3_1 * ___cert, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		SubjectAltNameExtension_t3_16_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1146);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		_stringLiteral3889 = il2cpp_codegen_string_literal_from_index(3889);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t3_91 * V_0 = {0};
	String_t* V_1 = {0};
	X509Extension_t3_7 * V_2 = {0};
	SubjectAltNameExtension_t3_16 * V_3 = {0};
	String_t* V_4 = {0};
	StringU5BU5D_t1_206* V_5 = {0};
	int32_t V_6 = 0;
	String_t* V_7 = {0};
	StringU5BU5D_t1_206* V_8 = {0};
	int32_t V_9 = 0;
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t3_91 *)CastclassClass(L_0, ClientContext_t3_91_il2cpp_TypeInfo_var));
		ClientContext_t3_91 * L_1 = V_0;
		NullCheck(L_1);
		TlsClientSettings_t3_98 * L_2 = Context_get_ClientSettings_m3_588(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		String_t* L_3 = TlsClientSettings_get_TargetHost_m3_837(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		X509Certificate_t3_1 * L_4 = ___cert;
		NullCheck(L_4);
		X509ExtensionCollection_t3_17 * L_5 = X509Certificate_get_Extensions_m3_28(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509Extension_t3_7 * L_6 = X509ExtensionCollection_get_Item_m3_29(L_5, _stringLiteral3889, /*hidden argument*/NULL);
		V_2 = L_6;
		X509Extension_t3_7 * L_7 = V_2;
		if (!L_7)
		{
			goto IL_00a4;
		}
	}
	{
		X509Extension_t3_7 * L_8 = V_2;
		SubjectAltNameExtension_t3_16 * L_9 = (SubjectAltNameExtension_t3_16 *)il2cpp_codegen_object_new (SubjectAltNameExtension_t3_16_il2cpp_TypeInfo_var);
		SubjectAltNameExtension__ctor_m3_30(L_9, L_8, /*hidden argument*/NULL);
		V_3 = L_9;
		SubjectAltNameExtension_t3_16 * L_10 = V_3;
		NullCheck(L_10);
		StringU5BU5D_t1_206* L_11 = SubjectAltNameExtension_get_DNSNames_m3_31(L_10, /*hidden argument*/NULL);
		V_5 = L_11;
		V_6 = 0;
		goto IL_0062;
	}

IL_0046:
	{
		StringU5BU5D_t1_206* L_12 = V_5;
		int32_t L_13 = V_6;
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		int32_t L_14 = L_13;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_12, L_14, sizeof(String_t*)));
		String_t* L_15 = V_1;
		String_t* L_16 = V_4;
		bool L_17 = TlsServerCertificate_Match_m3_939(NULL /*static, unused*/, L_15, L_16, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_005c;
		}
	}
	{
		return 1;
	}

IL_005c:
	{
		int32_t L_18 = V_6;
		V_6 = ((int32_t)((int32_t)L_18+(int32_t)1));
	}

IL_0062:
	{
		int32_t L_19 = V_6;
		StringU5BU5D_t1_206* L_20 = V_5;
		NullCheck(L_20);
		if ((((int32_t)L_19) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_20)->max_length)))))))
		{
			goto IL_0046;
		}
	}
	{
		SubjectAltNameExtension_t3_16 * L_21 = V_3;
		NullCheck(L_21);
		StringU5BU5D_t1_206* L_22 = SubjectAltNameExtension_get_IPAddresses_m3_32(L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		V_9 = 0;
		goto IL_0099;
	}

IL_007d:
	{
		StringU5BU5D_t1_206* L_23 = V_8;
		int32_t L_24 = V_9;
		NullCheck(L_23);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_23, L_24);
		int32_t L_25 = L_24;
		V_7 = (*(String_t**)(String_t**)SZArrayLdElema(L_23, L_25, sizeof(String_t*)));
		String_t* L_26 = V_7;
		String_t* L_27 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		bool L_28 = String_op_Equality_m1_480(NULL /*static, unused*/, L_26, L_27, /*hidden argument*/NULL);
		if (!L_28)
		{
			goto IL_0093;
		}
	}
	{
		return 1;
	}

IL_0093:
	{
		int32_t L_29 = V_9;
		V_9 = ((int32_t)((int32_t)L_29+(int32_t)1));
	}

IL_0099:
	{
		int32_t L_30 = V_9;
		StringU5BU5D_t1_206* L_31 = V_8;
		NullCheck(L_31);
		if ((((int32_t)L_30) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_31)->max_length)))))))
		{
			goto IL_007d;
		}
	}

IL_00a4:
	{
		X509Certificate_t3_1 * L_32 = ___cert;
		NullCheck(L_32);
		String_t* L_33 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(16 /* System.String Mono.Security.X509.X509Certificate::get_SubjectName() */, L_32);
		bool L_34 = TlsServerCertificate_checkDomainName_m3_938(__this, L_33, /*hidden argument*/NULL);
		return L_34;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::checkDomainName(System.String)
extern TypeInfo* ClientContext_t3_91_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern TypeInfo* Regex_t2_352_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral3890;
extern "C" bool TlsServerCertificate_checkDomainName_m3_938 (TlsServerCertificate_t3_126 * __this, String_t* ___subjectName, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientContext_t3_91_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1351);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		Regex_t2_352_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(949);
		_stringLiteral3890 = il2cpp_codegen_string_literal_from_index(3890);
		s_Il2CppMethodIntialized = true;
	}
	ClientContext_t3_91 * V_0 = {0};
	String_t* V_1 = {0};
	Regex_t2_352 * V_2 = {0};
	MatchCollection_t2_704 * V_3 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_0 = ((ClientContext_t3_91 *)CastclassClass(L_0, ClientContext_t3_91_il2cpp_TypeInfo_var));
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		String_t* L_1 = ((String_t_StaticFields*)String_t_il2cpp_TypeInfo_var->static_fields)->___Empty_2;
		V_1 = L_1;
		Regex_t2_352 * L_2 = (Regex_t2_352 *)il2cpp_codegen_object_new (Regex_t2_352_il2cpp_TypeInfo_var);
		Regex__ctor_m2_5820(L_2, _stringLiteral3890, /*hidden argument*/NULL);
		V_2 = L_2;
		Regex_t2_352 * L_3 = V_2;
		String_t* L_4 = ___subjectName;
		NullCheck(L_3);
		MatchCollection_t2_704 * L_5 = Regex_Matches_m2_5861(L_3, L_4, /*hidden argument*/NULL);
		V_3 = L_5;
		MatchCollection_t2_704 * L_6 = V_3;
		NullCheck(L_6);
		int32_t L_7 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(4 /* System.Int32 System.Text.RegularExpressions.MatchCollection::get_Count() */, L_6);
		if ((!(((uint32_t)L_7) == ((uint32_t)1))))
		{
			goto IL_005f;
		}
	}
	{
		MatchCollection_t2_704 * L_8 = V_3;
		NullCheck(L_8);
		Match_t2_694 * L_9 = (Match_t2_694 *)VirtFuncInvoker1< Match_t2_694 *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_8, 0);
		NullCheck(L_9);
		bool L_10 = Group_get_Success_m2_5782(L_9, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_005f;
		}
	}
	{
		MatchCollection_t2_704 * L_11 = V_3;
		NullCheck(L_11);
		Match_t2_694 * L_12 = (Match_t2_694 *)VirtFuncInvoker1< Match_t2_694 *, int32_t >::Invoke(9 /* System.Text.RegularExpressions.Match System.Text.RegularExpressions.MatchCollection::get_Item(System.Int32) */, L_11, 0);
		NullCheck(L_12);
		GroupCollection_t2_700 * L_13 = (GroupCollection_t2_700 *)VirtFuncInvoker0< GroupCollection_t2_700 * >::Invoke(4 /* System.Text.RegularExpressions.GroupCollection System.Text.RegularExpressions.Match::get_Groups() */, L_12);
		NullCheck(L_13);
		Group_t2_699 * L_14 = GroupCollection_get_Item_m2_5787(L_13, 1, /*hidden argument*/NULL);
		NullCheck(L_14);
		String_t* L_15 = Capture_get_Value_m2_5764(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		String_t* L_16 = String_ToString_m1_434(L_15, /*hidden argument*/NULL);
		V_1 = L_16;
	}

IL_005f:
	{
		ClientContext_t3_91 * L_17 = V_0;
		NullCheck(L_17);
		TlsClientSettings_t3_98 * L_18 = Context_get_ClientSettings_m3_588(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		String_t* L_19 = TlsClientSettings_get_TargetHost_m3_837(L_18, /*hidden argument*/NULL);
		String_t* L_20 = V_1;
		bool L_21 = TlsServerCertificate_Match_m3_939(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		return L_21;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificate::Match(System.String,System.String)
extern TypeInfo* CultureInfo_t1_163_il2cpp_TypeInfo_var;
extern TypeInfo* String_t_il2cpp_TypeInfo_var;
extern "C" bool TlsServerCertificate_Match_m3_939 (Object_t * __this /* static, unused */, String_t* ___hostname, String_t* ___pattern, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		CultureInfo_t1_163_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(28);
		String_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(11);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	String_t* V_2 = {0};
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	String_t* V_5 = {0};
	int32_t G_B15_0 = 0;
	{
		String_t* L_0 = ___pattern;
		NullCheck(L_0);
		int32_t L_1 = String_IndexOf_m1_401(L_0, ((int32_t)42), /*hidden argument*/NULL);
		V_0 = L_1;
		int32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) == ((uint32_t)(-1)))))
		{
			goto IL_0021;
		}
	}
	{
		String_t* L_3 = ___hostname;
		String_t* L_4 = ___pattern;
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1_163_il2cpp_TypeInfo_var);
		CultureInfo_t1_163 * L_5 = CultureInfo_get_InvariantCulture_m1_2052(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_6 = String_Compare_m1_379(NULL /*static, unused*/, L_3, L_4, 1, L_5, /*hidden argument*/NULL);
		return ((((int32_t)L_6) == ((int32_t)0))? 1 : 0);
	}

IL_0021:
	{
		int32_t L_7 = V_0;
		String_t* L_8 = ___pattern;
		NullCheck(L_8);
		int32_t L_9 = String_get_Length_m1_454(L_8, /*hidden argument*/NULL);
		if ((((int32_t)L_7) == ((int32_t)((int32_t)((int32_t)L_9-(int32_t)1)))))
		{
			goto IL_0041;
		}
	}
	{
		String_t* L_10 = ___pattern;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		uint16_t L_12 = String_get_Chars_m1_357(L_10, ((int32_t)((int32_t)L_11+(int32_t)1)), /*hidden argument*/NULL);
		if ((((int32_t)L_12) == ((int32_t)((int32_t)46))))
		{
			goto IL_0041;
		}
	}
	{
		return 0;
	}

IL_0041:
	{
		String_t* L_13 = ___pattern;
		int32_t L_14 = V_0;
		NullCheck(L_13);
		int32_t L_15 = String_IndexOf_m1_402(L_13, ((int32_t)42), ((int32_t)((int32_t)L_14+(int32_t)1)), /*hidden argument*/NULL);
		V_1 = L_15;
		int32_t L_16 = V_1;
		if ((((int32_t)L_16) == ((int32_t)(-1))))
		{
			goto IL_0056;
		}
	}
	{
		return 0;
	}

IL_0056:
	{
		String_t* L_17 = ___pattern;
		int32_t L_18 = V_0;
		NullCheck(L_17);
		String_t* L_19 = String_Substring_m1_368(L_17, ((int32_t)((int32_t)L_18+(int32_t)1)), /*hidden argument*/NULL);
		V_2 = L_19;
		String_t* L_20 = ___hostname;
		NullCheck(L_20);
		int32_t L_21 = String_get_Length_m1_454(L_20, /*hidden argument*/NULL);
		String_t* L_22 = V_2;
		NullCheck(L_22);
		int32_t L_23 = String_get_Length_m1_454(L_22, /*hidden argument*/NULL);
		V_3 = ((int32_t)((int32_t)L_21-(int32_t)L_23));
		int32_t L_24 = V_3;
		if ((((int32_t)L_24) > ((int32_t)0)))
		{
			goto IL_0077;
		}
	}
	{
		return 0;
	}

IL_0077:
	{
		String_t* L_25 = ___hostname;
		int32_t L_26 = V_3;
		String_t* L_27 = V_2;
		String_t* L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = String_get_Length_m1_454(L_28, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1_163_il2cpp_TypeInfo_var);
		CultureInfo_t1_163 * L_30 = CultureInfo_get_InvariantCulture_m1_2052(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_31 = String_Compare_m1_381(NULL /*static, unused*/, L_25, L_26, L_27, 0, L_29, 1, L_30, /*hidden argument*/NULL);
		if (!L_31)
		{
			goto IL_0093;
		}
	}
	{
		return 0;
	}

IL_0093:
	{
		int32_t L_32 = V_0;
		if (L_32)
		{
			goto IL_00c3;
		}
	}
	{
		String_t* L_33 = ___hostname;
		NullCheck(L_33);
		int32_t L_34 = String_IndexOf_m1_401(L_33, ((int32_t)46), /*hidden argument*/NULL);
		V_4 = L_34;
		int32_t L_35 = V_4;
		if ((((int32_t)L_35) == ((int32_t)(-1))))
		{
			goto IL_00c1;
		}
	}
	{
		int32_t L_36 = V_4;
		String_t* L_37 = ___hostname;
		NullCheck(L_37);
		int32_t L_38 = String_get_Length_m1_454(L_37, /*hidden argument*/NULL);
		String_t* L_39 = V_2;
		NullCheck(L_39);
		int32_t L_40 = String_get_Length_m1_454(L_39, /*hidden argument*/NULL);
		G_B15_0 = ((((int32_t)((((int32_t)L_36) < ((int32_t)((int32_t)((int32_t)L_38-(int32_t)L_40))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_00c2;
	}

IL_00c1:
	{
		G_B15_0 = 1;
	}

IL_00c2:
	{
		return G_B15_0;
	}

IL_00c3:
	{
		String_t* L_41 = ___pattern;
		int32_t L_42 = V_0;
		NullCheck(L_41);
		String_t* L_43 = String_Substring_m1_369(L_41, 0, L_42, /*hidden argument*/NULL);
		V_5 = L_43;
		String_t* L_44 = ___hostname;
		String_t* L_45 = V_5;
		String_t* L_46 = V_5;
		NullCheck(L_46);
		int32_t L_47 = String_get_Length_m1_454(L_46, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(CultureInfo_t1_163_il2cpp_TypeInfo_var);
		CultureInfo_t1_163 * L_48 = CultureInfo_get_InvariantCulture_m1_2052(NULL /*static, unused*/, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(String_t_il2cpp_TypeInfo_var);
		int32_t L_49 = String_Compare_m1_381(NULL /*static, unused*/, L_44, 0, L_45, 0, L_47, 1, L_48, /*hidden argument*/NULL);
		return ((((int32_t)L_49) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerCertificateRequest__ctor_m3_940 (TlsServerCertificateRequest_t3_127 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		HandshakeMessage__ctor_m3_896(__this, L_0, ((int32_t)13), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::Update()
extern "C" void TlsServerCertificateRequest_Update_m3_941 (TlsServerCertificateRequest_t3_127 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m3_901(__this, /*hidden argument*/NULL);
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TlsServerSettings_t3_97 * L_1 = Context_get_ServerSettings_m3_587(L_0, /*hidden argument*/NULL);
		ClientCertificateTypeU5BU5D_t3_118* L_2 = (__this->___certificateTypes_9);
		NullCheck(L_1);
		TlsServerSettings_set_CertificateTypes_m3_864(L_1, L_2, /*hidden argument*/NULL);
		Context_t3_88 * L_3 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsServerSettings_t3_97 * L_4 = Context_get_ServerSettings_m3_587(L_3, /*hidden argument*/NULL);
		StringU5BU5D_t1_206* L_5 = (__this->___distinguisedNames_10);
		NullCheck(L_4);
		TlsServerSettings_set_DistinguisedNames_m3_866(L_4, L_5, /*hidden argument*/NULL);
		Context_t3_88 * L_6 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		TlsServerSettings_t3_97 * L_7 = Context_get_ServerSettings_m3_587(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		TlsServerSettings_set_CertificateRequest_m3_862(L_7, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsSsl3()
extern "C" void TlsServerCertificateRequest_ProcessAsSsl3_m3_942 (TlsServerCertificateRequest_t3_127 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(29 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerCertificateRequest::ProcessAsTls1()
extern TypeInfo* ClientCertificateTypeU5BU5D_t3_118_il2cpp_TypeInfo_var;
extern TypeInfo* ASN1_t3_5_il2cpp_TypeInfo_var;
extern TypeInfo* StringU5BU5D_t1_206_il2cpp_TypeInfo_var;
extern TypeInfo* Encoding_t1_227_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificateRequest_ProcessAsTls1_m3_943 (TlsServerCertificateRequest_t3_127 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientCertificateTypeU5BU5D_t3_118_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1383);
		ASN1_t3_5_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1190);
		StringU5BU5D_t1_206_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(32);
		Encoding_t1_227_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(41);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	ASN1_t3_5 * V_2 = {0};
	int32_t V_3 = 0;
	ASN1_t3_5 * V_4 = {0};
	{
		uint8_t L_0 = TlsStream_ReadByte_m3_878(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		int32_t L_1 = V_0;
		__this->___certificateTypes_9 = ((ClientCertificateTypeU5BU5D_t3_118*)SZArrayNew(ClientCertificateTypeU5BU5D_t3_118_il2cpp_TypeInfo_var, L_1));
		V_1 = 0;
		goto IL_002c;
	}

IL_001a:
	{
		ClientCertificateTypeU5BU5D_t3_118* L_2 = (__this->___certificateTypes_9);
		int32_t L_3 = V_1;
		uint8_t L_4 = TlsStream_ReadByte_m3_878(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		*((int32_t*)(int32_t*)SZArrayLdElema(L_2, L_3, sizeof(int32_t))) = (int32_t)L_4;
		int32_t L_5 = V_1;
		V_1 = ((int32_t)((int32_t)L_5+(int32_t)1));
	}

IL_002c:
	{
		int32_t L_6 = V_1;
		int32_t L_7 = V_0;
		if ((((int32_t)L_6) < ((int32_t)L_7)))
		{
			goto IL_001a;
		}
	}
	{
		int16_t L_8 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		if (!L_8)
		{
			goto IL_00aa;
		}
	}
	{
		int16_t L_9 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_10 = TlsStream_ReadBytes_m3_881(__this, L_9, /*hidden argument*/NULL);
		ASN1_t3_5 * L_11 = (ASN1_t3_5 *)il2cpp_codegen_object_new (ASN1_t3_5_il2cpp_TypeInfo_var);
		ASN1__ctor_m3_37(L_11, L_10, /*hidden argument*/NULL);
		V_2 = L_11;
		ASN1_t3_5 * L_12 = V_2;
		NullCheck(L_12);
		int32_t L_13 = ASN1_get_Count_m3_40(L_12, /*hidden argument*/NULL);
		__this->___distinguisedNames_10 = ((StringU5BU5D_t1_206*)SZArrayNew(StringU5BU5D_t1_206_il2cpp_TypeInfo_var, L_13));
		V_3 = 0;
		goto IL_009e;
	}

IL_0068:
	{
		ASN1_t3_5 * L_14 = V_2;
		int32_t L_15 = V_3;
		NullCheck(L_14);
		ASN1_t3_5 * L_16 = ASN1_get_Item_m3_41(L_14, L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		ByteU5BU5D_t1_72* L_17 = ASN1_get_Value_m3_39(L_16, /*hidden argument*/NULL);
		ASN1_t3_5 * L_18 = (ASN1_t3_5 *)il2cpp_codegen_object_new (ASN1_t3_5_il2cpp_TypeInfo_var);
		ASN1__ctor_m3_37(L_18, L_17, /*hidden argument*/NULL);
		V_4 = L_18;
		StringU5BU5D_t1_206* L_19 = (__this->___distinguisedNames_10);
		int32_t L_20 = V_3;
		IL2CPP_RUNTIME_CLASS_INIT(Encoding_t1_227_il2cpp_TypeInfo_var);
		Encoding_t1_227 * L_21 = Encoding_get_UTF8_m1_4650(NULL /*static, unused*/, /*hidden argument*/NULL);
		ASN1_t3_5 * L_22 = V_4;
		NullCheck(L_22);
		ASN1_t3_5 * L_23 = ASN1_get_Item_m3_41(L_22, 1, /*hidden argument*/NULL);
		NullCheck(L_23);
		ByteU5BU5D_t1_72* L_24 = ASN1_get_Value_m3_39(L_23, /*hidden argument*/NULL);
		NullCheck(L_21);
		String_t* L_25 = (String_t*)VirtFuncInvoker1< String_t*, ByteU5BU5D_t1_72* >::Invoke(22 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_21, L_24);
		NullCheck(L_19);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_19, L_20);
		ArrayElementTypeCheck (L_19, L_25);
		*((String_t**)(String_t**)SZArrayLdElema(L_19, L_20, sizeof(String_t*))) = (String_t*)L_25;
		int32_t L_26 = V_3;
		V_3 = ((int32_t)((int32_t)L_26+(int32_t)1));
	}

IL_009e:
	{
		int32_t L_27 = V_3;
		ASN1_t3_5 * L_28 = V_2;
		NullCheck(L_28);
		int32_t L_29 = ASN1_get_Count_m3_40(L_28, /*hidden argument*/NULL);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0068;
		}
	}

IL_00aa:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerFinished__ctor_m3_944 (TlsServerFinished_t3_128 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		HandshakeMessage__ctor_m3_896(__this, L_0, ((int32_t)20), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::.cctor()
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerFinished_t3_128_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t3_153____U24U24fieldU2D22_14_FieldInfo_var;
extern "C" void TlsServerFinished__cctor_m3_945 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		TlsServerFinished_t3_128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1370);
		U3CPrivateImplementationDetailsU3E_t3_153____U24U24fieldU2D22_14_FieldInfo_var = il2cpp_codegen_field_info_from_index(1302, 14);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t1_72* L_0 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m1_1028(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t3_153____U24U24fieldU2D22_14_FieldInfo_var), /*hidden argument*/NULL);
		((TlsServerFinished_t3_128_StaticFields*)TlsServerFinished_t3_128_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::Update()
extern "C" void TlsServerFinished_Update_m3_946 (TlsServerFinished_t3_128 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m3_901(__this, /*hidden argument*/NULL);
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Context_set_HandshakeState_m3_592(L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsSsl3()
extern TypeInfo* SslHandshakeHash_t3_114_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerFinished_t3_128_il2cpp_TypeInfo_var;
extern TypeInfo* CipherSuite_t3_87_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4464;
extern "C" void TlsServerFinished_ProcessAsSsl3_m3_947 (TlsServerFinished_t3_128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SslHandshakeHash_t3_114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1401);
		TlsServerFinished_t3_128_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1370);
		CipherSuite_t3_87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1350);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4464 = il2cpp_codegen_string_literal_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t1_597 * V_0 = {0};
	ByteU5BU5D_t1_72* V_1 = {0};
	ByteU5BU5D_t1_72* V_2 = {0};
	ByteU5BU5D_t1_72* V_3 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t1_72* L_1 = Context_get_MasterSecret_m3_612(L_0, /*hidden argument*/NULL);
		SslHandshakeHash_t3_114 * L_2 = (SslHandshakeHash_t3_114 *)il2cpp_codegen_object_new (SslHandshakeHash_t3_114_il2cpp_TypeInfo_var);
		SslHandshakeHash__ctor_m3_757(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Context_t3_88 * L_3 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsStream_t3_100 * L_4 = Context_get_HandshakeMessages_m3_599(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t1_72* L_5 = TlsStream_ToArray_m3_888(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		HashAlgorithm_t1_597 * L_6 = V_0;
		ByteU5BU5D_t1_72* L_7 = V_1;
		ByteU5BU5D_t1_72* L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t1_72* L_9 = V_1;
		NullCheck(L_6);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_6, L_7, 0, (((int32_t)((int32_t)(((Array_t *)L_8)->max_length)))), L_9, 0);
		HashAlgorithm_t1_597 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TlsServerFinished_t3_128_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_11 = ((TlsServerFinished_t3_128_StaticFields*)TlsServerFinished_t3_128_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		ByteU5BU5D_t1_72* L_12 = ((TlsServerFinished_t3_128_StaticFields*)TlsServerFinished_t3_128_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_13 = ((TlsServerFinished_t3_128_StaticFields*)TlsServerFinished_t3_128_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		NullCheck(L_10);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_10, L_11, 0, (((int32_t)((int32_t)(((Array_t *)L_12)->max_length)))), L_13, 0);
		HashAlgorithm_t1_597 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_15 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_14);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, 0);
		int64_t L_16 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, __this);
		ByteU5BU5D_t1_72* L_17 = TlsStream_ReadBytes_m3_881(__this, (((int32_t)((int32_t)L_16))), /*hidden argument*/NULL);
		V_2 = L_17;
		HashAlgorithm_t1_597 * L_18 = V_0;
		NullCheck(L_18);
		ByteU5BU5D_t1_72* L_19 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_18);
		V_3 = L_19;
		ByteU5BU5D_t1_72* L_20 = V_3;
		ByteU5BU5D_t1_72* L_21 = V_2;
		bool L_22 = HandshakeMessage_Compare_m3_903(NULL /*static, unused*/, L_20, L_21, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_0086;
		}
	}
	{
		TlsException_t3_117 * L_23 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_23, ((int32_t)71), _stringLiteral4464, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_23);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerFinished::ProcessAsTls1()
extern TypeInfo* MD5SHA1_t3_82_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4465;
extern Il2CppCodeGenString* _stringLiteral4464;
extern "C" void TlsServerFinished_ProcessAsTls1_m3_948 (TlsServerFinished_t3_128 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MD5SHA1_t3_82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1382);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4465 = il2cpp_codegen_string_literal_from_index(4465);
		_stringLiteral4464 = il2cpp_codegen_string_literal_from_index(4464);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t1_72* V_0 = {0};
	HashAlgorithm_t1_597 * V_1 = {0};
	ByteU5BU5D_t1_72* V_2 = {0};
	ByteU5BU5D_t1_72* V_3 = {0};
	ByteU5BU5D_t1_72* V_4 = {0};
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, __this);
		ByteU5BU5D_t1_72* L_1 = TlsStream_ReadBytes_m3_881(__this, (((int32_t)((int32_t)L_0))), /*hidden argument*/NULL);
		V_0 = L_1;
		MD5SHA1_t3_82 * L_2 = (MD5SHA1_t3_82 *)il2cpp_codegen_object_new (MD5SHA1_t3_82_il2cpp_TypeInfo_var);
		MD5SHA1__ctor_m3_470(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		Context_t3_88 * L_3 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsStream_t3_100 * L_4 = Context_get_HandshakeMessages_m3_599(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t1_72* L_5 = TlsStream_ToArray_m3_888(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		HashAlgorithm_t1_597 * L_6 = V_1;
		ByteU5BU5D_t1_72* L_7 = V_2;
		ByteU5BU5D_t1_72* L_8 = V_2;
		NullCheck(L_8);
		NullCheck(L_6);
		ByteU5BU5D_t1_72* L_9 = HashAlgorithm_ComputeHash_m1_4129(L_6, L_7, 0, (((int32_t)((int32_t)(((Array_t *)L_8)->max_length)))), /*hidden argument*/NULL);
		V_3 = L_9;
		Context_t3_88 * L_10 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		SecurityParameters_t3_99 * L_11 = Context_get_Current_m3_630(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		CipherSuite_t3_87 * L_12 = SecurityParameters_get_Cipher_m3_703(L_11, /*hidden argument*/NULL);
		Context_t3_88 * L_13 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		ByteU5BU5D_t1_72* L_14 = Context_get_MasterSecret_m3_612(L_13, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_15 = V_3;
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_16 = CipherSuite_PRF_m3_512(L_12, L_14, _stringLiteral4465, L_15, ((int32_t)12), /*hidden argument*/NULL);
		V_4 = L_16;
		ByteU5BU5D_t1_72* L_17 = V_4;
		ByteU5BU5D_t1_72* L_18 = V_0;
		bool L_19 = HandshakeMessage_Compare_m3_903(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0073;
		}
	}
	{
		TlsException_t3_117 * L_20 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_845(L_20, _stringLiteral4464, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_0073:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerHello__ctor_m3_949 (TlsServerHello_t3_129 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		HandshakeMessage__ctor_m3_896(__this, L_0, 2, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::Update()
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern "C" void TlsServerHello_Update_m3_950 (TlsServerHello_t3_129 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t1_72* V_3 = {0};
	ByteU5BU5D_t1_72* V_4 = {0};
	{
		HandshakeMessage_Update_m3_901(__this, /*hidden argument*/NULL);
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_1 = (__this->___sessionId_11);
		NullCheck(L_0);
		Context_set_SessionId_m3_584(L_0, L_1, /*hidden argument*/NULL);
		Context_t3_88 * L_2 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_3 = (__this->___random_10);
		NullCheck(L_2);
		Context_set_ServerRandom_m3_607(L_2, L_3, /*hidden argument*/NULL);
		Context_t3_88 * L_4 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		SecurityParameters_t3_99 * L_5 = Context_get_Negotiating_m3_631(L_4, /*hidden argument*/NULL);
		CipherSuite_t3_87 * L_6 = (__this->___cipherSuite_12);
		NullCheck(L_5);
		SecurityParameters_set_Cipher_m3_704(L_5, L_6, /*hidden argument*/NULL);
		Context_t3_88 * L_7 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		int32_t L_8 = (__this->___compressionMethod_9);
		NullCheck(L_7);
		Context_set_CompressionMethod_m3_586(L_7, L_8, /*hidden argument*/NULL);
		Context_t3_88 * L_9 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		Context_set_ProtocolNegotiated_m3_578(L_9, 1, /*hidden argument*/NULL);
		Context_t3_88 * L_10 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_t1_72* L_11 = Context_get_ClientRandom_m3_604(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		V_0 = (((int32_t)((int32_t)(((Array_t *)L_11)->max_length))));
		Context_t3_88 * L_12 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_13 = Context_get_ServerRandom_m3_606(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		V_1 = (((int32_t)((int32_t)(((Array_t *)L_13)->max_length))));
		int32_t L_14 = V_0;
		int32_t L_15 = V_1;
		V_2 = ((int32_t)((int32_t)L_14+(int32_t)L_15));
		int32_t L_16 = V_2;
		V_3 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_16));
		Context_t3_88 * L_17 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		ByteU5BU5D_t1_72* L_18 = Context_get_ClientRandom_m3_604(L_17, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_19 = V_3;
		int32_t L_20 = V_0;
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_18, 0, (Array_t *)(Array_t *)L_19, 0, L_20, /*hidden argument*/NULL);
		Context_t3_88 * L_21 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		ByteU5BU5D_t1_72* L_22 = Context_get_ServerRandom_m3_606(L_21, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_23 = V_3;
		int32_t L_24 = V_0;
		int32_t L_25 = V_1;
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_22, 0, (Array_t *)(Array_t *)L_23, L_24, L_25, /*hidden argument*/NULL);
		Context_t3_88 * L_26 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_27 = V_3;
		NullCheck(L_26);
		Context_set_RandomCS_m3_609(L_26, L_27, /*hidden argument*/NULL);
		int32_t L_28 = V_2;
		V_4 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_28));
		Context_t3_88 * L_29 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		ByteU5BU5D_t1_72* L_30 = Context_get_ServerRandom_m3_606(L_29, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_31 = V_4;
		int32_t L_32 = V_1;
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_30, 0, (Array_t *)(Array_t *)L_31, 0, L_32, /*hidden argument*/NULL);
		Context_t3_88 * L_33 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		ByteU5BU5D_t1_72* L_34 = Context_get_ClientRandom_m3_604(L_33, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_35 = V_4;
		int32_t L_36 = V_1;
		int32_t L_37 = V_0;
		Buffer_BlockCopy_m1_5019(NULL /*static, unused*/, (Array_t *)(Array_t *)L_34, 0, (Array_t *)(Array_t *)L_35, L_36, L_37, /*hidden argument*/NULL);
		Context_t3_88 * L_38 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_39 = V_4;
		NullCheck(L_38);
		Context_set_RandomSC_m3_611(L_38, L_39, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsSsl3()
extern "C" void TlsServerHello_ProcessAsSsl3_m3_951 (TlsServerHello_t3_129 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(29 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::ProcessAsTls1()
extern TypeInfo* ClientSessionCache_t3_95_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4466;
extern "C" void TlsServerHello_ProcessAsTls1_m3_952 (TlsServerHello_t3_129 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ClientSessionCache_t3_95_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1373);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4466 = il2cpp_codegen_string_literal_from_index(4466);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int16_t V_1 = 0;
	{
		int16_t L_0 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		TlsServerHello_processProtocol_m3_953(__this, L_0, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_1 = TlsStream_ReadBytes_m3_881(__this, ((int32_t)32), /*hidden argument*/NULL);
		__this->___random_10 = L_1;
		uint8_t L_2 = TlsStream_ReadByte_m3_878(__this, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0076;
		}
	}
	{
		int32_t L_4 = V_0;
		ByteU5BU5D_t1_72* L_5 = TlsStream_ReadBytes_m3_881(__this, L_4, /*hidden argument*/NULL);
		__this->___sessionId_11 = L_5;
		Context_t3_88 * L_6 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		TlsClientSettings_t3_98 * L_7 = Context_get_ClientSettings_m3_588(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		String_t* L_8 = TlsClientSettings_get_TargetHost_m3_837(L_7, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_9 = (__this->___sessionId_11);
		IL2CPP_RUNTIME_CLASS_INIT(ClientSessionCache_t3_95_il2cpp_TypeInfo_var);
		ClientSessionCache_Add_m3_569(NULL /*static, unused*/, L_8, L_9, /*hidden argument*/NULL);
		Context_t3_88 * L_10 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_11 = (__this->___sessionId_11);
		Context_t3_88 * L_12 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_13 = Context_get_SessionId_m3_583(L_12, /*hidden argument*/NULL);
		bool L_14 = HandshakeMessage_Compare_m3_903(NULL /*static, unused*/, L_11, L_13, /*hidden argument*/NULL);
		NullCheck(L_10);
		Context_set_AbbreviatedHandshake_m3_576(L_10, L_14, /*hidden argument*/NULL);
		goto IL_0082;
	}

IL_0076:
	{
		Context_t3_88 * L_15 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Context_set_AbbreviatedHandshake_m3_576(L_15, 0, /*hidden argument*/NULL);
	}

IL_0082:
	{
		int16_t L_16 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		V_1 = L_16;
		Context_t3_88 * L_17 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		CipherSuiteCollection_t3_89 * L_18 = Context_get_SupportedCiphers_m3_597(L_17, /*hidden argument*/NULL);
		int16_t L_19 = V_1;
		NullCheck(L_18);
		int32_t L_20 = CipherSuiteCollection_IndexOf_m3_538(L_18, L_19, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_20) == ((uint32_t)(-1)))))
		{
			goto IL_00ad;
		}
	}
	{
		TlsException_t3_117 * L_21 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_21, ((int32_t)71), _stringLiteral4466, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_21);
	}

IL_00ad:
	{
		Context_t3_88 * L_22 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_22);
		CipherSuiteCollection_t3_89 * L_23 = Context_get_SupportedCiphers_m3_597(L_22, /*hidden argument*/NULL);
		int16_t L_24 = V_1;
		NullCheck(L_23);
		CipherSuite_t3_87 * L_25 = CipherSuiteCollection_get_Item_m3_531(L_23, L_24, /*hidden argument*/NULL);
		__this->___cipherSuite_12 = L_25;
		uint8_t L_26 = TlsStream_ReadByte_m3_878(__this, /*hidden argument*/NULL);
		__this->___compressionMethod_9 = L_26;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHello::processProtocol(System.Int16)
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4411;
extern "C" void TlsServerHello_processProtocol_m3_953 (TlsServerHello_t3_129 * __this, int16_t ___protocol, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4411 = il2cpp_codegen_string_literal_from_index(4411);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		int16_t L_1 = ___protocol;
		NullCheck(L_0);
		int32_t L_2 = Context_DecodeProtocolCode_m3_628(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Context_t3_88 * L_4 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Context_get_SecurityProtocolFlags_m3_581(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_3&(int32_t)L_5))) == ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		Context_t3_88 * L_7 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = Context_get_SecurityProtocolFlags_m3_581(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)-1073741824)))) == ((uint32_t)((int32_t)-1073741824)))))
		{
			goto IL_0079;
		}
	}

IL_003b:
	{
		Context_t3_88 * L_9 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Context_set_SecurityProtocol_m3_580(L_9, L_10, /*hidden argument*/NULL);
		Context_t3_88 * L_11 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		CipherSuiteCollection_t3_89 * L_12 = Context_get_SupportedCiphers_m3_597(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		CipherSuiteCollection_Clear_m3_536(L_12, /*hidden argument*/NULL);
		Context_t3_88 * L_13 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Context_set_SupportedCiphers_m3_598(L_13, (CipherSuiteCollection_t3_89 *)NULL, /*hidden argument*/NULL);
		Context_t3_88 * L_14 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		CipherSuiteCollection_t3_89 * L_16 = CipherSuiteFactory_GetSupportedCiphers_m3_543(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Context_set_SupportedCiphers_m3_598(L_14, L_16, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_0079:
	{
		TlsException_t3_117 * L_17 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_17, ((int32_t)70), _stringLiteral4411, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerHelloDone__ctor_m3_954 (TlsServerHelloDone_t3_130 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		HandshakeMessage__ctor_m3_896(__this, L_0, ((int32_t)14), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsSsl3()
extern "C" void TlsServerHelloDone_ProcessAsSsl3_m3_955 (TlsServerHelloDone_t3_130 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerHelloDone::ProcessAsTls1()
extern "C" void TlsServerHelloDone_ProcessAsTls1_m3_956 (TlsServerHelloDone_t3_130 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsServerKeyExchange__ctor_m3_957 (TlsServerKeyExchange_t3_131 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		HandshakeMessage__ctor_m3_896(__this, L_0, ((int32_t)12), L_1, /*hidden argument*/NULL);
		TlsServerKeyExchange_verifySignature_m3_961(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::Update()
extern "C" void TlsServerKeyExchange_Update_m3_958 (TlsServerKeyExchange_t3_131 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m3_901(__this, /*hidden argument*/NULL);
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		TlsServerSettings_t3_97 * L_1 = Context_get_ServerSettings_m3_587(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		TlsServerSettings_set_ServerKeyExchange_m3_854(L_1, 1, /*hidden argument*/NULL);
		Context_t3_88 * L_2 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		TlsServerSettings_t3_97 * L_3 = Context_get_ServerSettings_m3_587(L_2, /*hidden argument*/NULL);
		RSAParameters_t1_622  L_4 = (__this->___rsaParams_9);
		NullCheck(L_3);
		TlsServerSettings_set_RsaParameters_m3_859(L_3, L_4, /*hidden argument*/NULL);
		Context_t3_88 * L_5 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		TlsServerSettings_t3_97 * L_6 = Context_get_ServerSettings_m3_587(L_5, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_7 = (__this->___signedParams_10);
		NullCheck(L_6);
		TlsServerSettings_set_SignedParams_m3_860(L_6, L_7, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsSsl3()
extern "C" void TlsServerKeyExchange_ProcessAsSsl3_m3_959 (TlsServerKeyExchange_t3_131 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(29 /* System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::ProcessAsTls1()
extern TypeInfo* RSAParameters_t1_622_il2cpp_TypeInfo_var;
extern "C" void TlsServerKeyExchange_ProcessAsTls1_m3_960 (TlsServerKeyExchange_t3_131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		RSAParameters_t1_622_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(132);
		s_Il2CppMethodIntialized = true;
	}
	RSAParameters_t1_622  V_0 = {0};
	{
		Initobj (RSAParameters_t1_622_il2cpp_TypeInfo_var, (&V_0));
		RSAParameters_t1_622  L_0 = V_0;
		__this->___rsaParams_9 = L_0;
		RSAParameters_t1_622 * L_1 = &(__this->___rsaParams_9);
		int16_t L_2 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_3 = TlsStream_ReadBytes_m3_881(__this, L_2, /*hidden argument*/NULL);
		L_1->___Modulus_6 = L_3;
		RSAParameters_t1_622 * L_4 = &(__this->___rsaParams_9);
		int16_t L_5 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_6 = TlsStream_ReadBytes_m3_881(__this, L_5, /*hidden argument*/NULL);
		L_4->___Exponent_7 = L_6;
		int16_t L_7 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_8 = TlsStream_ReadBytes_m3_881(__this, L_7, /*hidden argument*/NULL);
		__this->___signedParams_10 = L_8;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Client.TlsServerKeyExchange::verifySignature()
extern TypeInfo* MD5SHA1_t3_82_il2cpp_TypeInfo_var;
extern TypeInfo* TlsStream_t3_100_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4467;
extern "C" void TlsServerKeyExchange_verifySignature_m3_961 (TlsServerKeyExchange_t3_131 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MD5SHA1_t3_82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1382);
		TlsStream_t3_100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1352);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4467 = il2cpp_codegen_string_literal_from_index(4467);
		s_Il2CppMethodIntialized = true;
	}
	MD5SHA1_t3_82 * V_0 = {0};
	int32_t V_1 = 0;
	TlsStream_t3_100 * V_2 = {0};
	bool V_3 = false;
	{
		MD5SHA1_t3_82 * L_0 = (MD5SHA1_t3_82 *)il2cpp_codegen_object_new (MD5SHA1_t3_82_il2cpp_TypeInfo_var);
		MD5SHA1__ctor_m3_470(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		RSAParameters_t1_622 * L_1 = &(__this->___rsaParams_9);
		ByteU5BU5D_t1_72* L_2 = (L_1->___Modulus_6);
		NullCheck(L_2);
		RSAParameters_t1_622 * L_3 = &(__this->___rsaParams_9);
		ByteU5BU5D_t1_72* L_4 = (L_3->___Exponent_7);
		NullCheck(L_4);
		V_1 = ((int32_t)((int32_t)((int32_t)((int32_t)(((int32_t)((int32_t)(((Array_t *)L_2)->max_length))))+(int32_t)(((int32_t)((int32_t)(((Array_t *)L_4)->max_length))))))+(int32_t)4));
		TlsStream_t3_100 * L_5 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_868(L_5, /*hidden argument*/NULL);
		V_2 = L_5;
		TlsStream_t3_100 * L_6 = V_2;
		Context_t3_88 * L_7 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t1_72* L_8 = Context_get_RandomCS_m3_608(L_7, /*hidden argument*/NULL);
		NullCheck(L_6);
		TlsStream_Write_m3_886(L_6, L_8, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_9 = V_2;
		ByteU5BU5D_t1_72* L_10 = TlsStream_ToArray_m3_888(__this, /*hidden argument*/NULL);
		int32_t L_11 = V_1;
		NullCheck(L_9);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, L_9, L_10, 0, L_11);
		MD5SHA1_t3_82 * L_12 = V_0;
		TlsStream_t3_100 * L_13 = V_2;
		NullCheck(L_13);
		ByteU5BU5D_t1_72* L_14 = TlsStream_ToArray_m3_888(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		HashAlgorithm_ComputeHash_m1_4128(L_12, L_14, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_15 = V_2;
		NullCheck(L_15);
		TlsStream_Reset_m3_887(L_15, /*hidden argument*/NULL);
		MD5SHA1_t3_82 * L_16 = V_0;
		Context_t3_88 * L_17 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		TlsServerSettings_t3_97 * L_18 = Context_get_ServerSettings_m3_587(L_17, /*hidden argument*/NULL);
		NullCheck(L_18);
		RSA_t1_119 * L_19 = TlsServerSettings_get_CertificateRSA_m3_857(L_18, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_20 = (__this->___signedParams_10);
		NullCheck(L_16);
		bool L_21 = MD5SHA1_VerifySignature_m3_475(L_16, L_19, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		bool L_22 = V_3;
		if (L_22)
		{
			goto IL_008c;
		}
	}
	{
		TlsException_t3_117 * L_23 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_23, ((int32_t)50), _stringLiteral4467, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_23);
	}

IL_008c:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsClientCertificate__ctor_m3_962 (TlsClientCertificate_t3_132 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		HandshakeMessage__ctor_m3_896(__this, L_0, ((int32_t)11), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::Update()
extern TypeInfo* X509Certificate_t1_572_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t1_888_il2cpp_TypeInfo_var;
extern "C" void TlsClientCertificate_Update_m3_963 (TlsClientCertificate_t3_132 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		X509Certificate_t1_572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		IDisposable_t1_888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		s_Il2CppMethodIntialized = true;
	}
	X509Certificate_t3_1 * V_0 = {0};
	X509CertificateEnumerator_t3_24 * V_1 = {0};
	Object_t * V_2 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		X509CertificateCollection_t3_4 * L_0 = (__this->___clientCertificates_9);
		NullCheck(L_0);
		X509CertificateEnumerator_t3_24 * L_1 = X509CertificateCollection_GetEnumerator_m3_81(L_0, /*hidden argument*/NULL);
		V_1 = L_1;
	}

IL_000c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0039;
		}

IL_0011:
		{
			X509CertificateEnumerator_t3_24 * L_2 = V_1;
			NullCheck(L_2);
			X509Certificate_t3_1 * L_3 = X509CertificateEnumerator_get_Current_m3_82(L_2, /*hidden argument*/NULL);
			V_0 = L_3;
			Context_t3_88 * L_4 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
			NullCheck(L_4);
			TlsClientSettings_t3_98 * L_5 = Context_get_ClientSettings_m3_588(L_4, /*hidden argument*/NULL);
			NullCheck(L_5);
			X509CertificateCollection_t2_305 * L_6 = TlsClientSettings_get_Certificates_m3_839(L_5, /*hidden argument*/NULL);
			X509Certificate_t3_1 * L_7 = V_0;
			NullCheck(L_7);
			ByteU5BU5D_t1_72* L_8 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_7);
			X509Certificate_t1_572 * L_9 = (X509Certificate_t1_572 *)il2cpp_codegen_object_new (X509Certificate_t1_572_il2cpp_TypeInfo_var);
			X509Certificate__ctor_m1_3979(L_9, L_8, /*hidden argument*/NULL);
			NullCheck(L_6);
			X509CertificateCollection_Add_m2_5511(L_6, L_9, /*hidden argument*/NULL);
		}

IL_0039:
		{
			X509CertificateEnumerator_t3_24 * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext() */, L_10);
			if (L_11)
			{
				goto IL_0011;
			}
		}

IL_0044:
		{
			IL2CPP_LEAVE(0x5B, FINALLY_0049);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_0049;
	}

FINALLY_0049:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t3_24 * L_12 = V_1;
			V_2 = ((Object_t *)IsInst(L_12, IDisposable_t1_888_il2cpp_TypeInfo_var));
			Object_t * L_13 = V_2;
			if (L_13)
			{
				goto IL_0054;
			}
		}

IL_0053:
		{
			IL2CPP_END_FINALLY(73)
		}

IL_0054:
		{
			Object_t * L_14 = V_2;
			NullCheck(L_14);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1_888_il2cpp_TypeInfo_var, L_14);
			IL2CPP_END_FINALLY(73)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(73)
	{
		IL2CPP_JUMP_TBL(0x5B, IL_005b)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_005b:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::ProcessAsSsl3()
extern "C" void TlsClientCertificate_ProcessAsSsl3_m3_964 (TlsClientCertificate_t3_132 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(29 /* System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::ProcessAsTls1()
extern TypeInfo* X509CertificateCollection_t3_4_il2cpp_TypeInfo_var;
extern TypeInfo* X509Certificate_t3_1_il2cpp_TypeInfo_var;
extern TypeInfo* ServerContext_t3_111_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern "C" void TlsClientCertificate_ProcessAsTls1_m3_965 (TlsClientCertificate_t3_132 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		X509CertificateCollection_t3_4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1314);
		X509Certificate_t3_1_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1193);
		ServerContext_t3_111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1381);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	ByteU5BU5D_t1_72* V_3 = {0};
	{
		V_0 = 0;
		int32_t L_0 = TlsStream_ReadInt24_m3_880(__this, /*hidden argument*/NULL);
		V_1 = L_0;
		X509CertificateCollection_t3_4 * L_1 = (X509CertificateCollection_t3_4 *)il2cpp_codegen_object_new (X509CertificateCollection_t3_4_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m3_356(L_1, /*hidden argument*/NULL);
		__this->___clientCertificates_9 = L_1;
		goto IL_0040;
	}

IL_0019:
	{
		int32_t L_2 = TlsStream_ReadInt24_m3_880(__this, /*hidden argument*/NULL);
		V_2 = L_2;
		int32_t L_3 = V_0;
		int32_t L_4 = V_2;
		V_0 = ((int32_t)((int32_t)L_3+(int32_t)((int32_t)((int32_t)L_4+(int32_t)3))));
		int32_t L_5 = V_2;
		ByteU5BU5D_t1_72* L_6 = TlsStream_ReadBytes_m3_881(__this, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		X509CertificateCollection_t3_4 * L_7 = (__this->___clientCertificates_9);
		ByteU5BU5D_t1_72* L_8 = V_3;
		X509Certificate_t3_1 * L_9 = (X509Certificate_t3_1 *)il2cpp_codegen_object_new (X509Certificate_t3_1_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m3_49(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_7);
		X509CertificateCollection_Add_m3_359(L_7, L_9, /*hidden argument*/NULL);
	}

IL_0040:
	{
		int32_t L_10 = V_1;
		int32_t L_11 = V_0;
		if ((((int32_t)L_10) > ((int32_t)L_11)))
		{
			goto IL_0019;
		}
	}
	{
		X509CertificateCollection_t3_4 * L_12 = (__this->___clientCertificates_9);
		NullCheck(L_12);
		int32_t L_13 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_12);
		if ((((int32_t)L_13) <= ((int32_t)0)))
		{
			goto IL_0069;
		}
	}
	{
		X509CertificateCollection_t3_4 * L_14 = (__this->___clientCertificates_9);
		TlsClientCertificate_validateCertificates_m3_967(__this, L_14, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_0069:
	{
		Context_t3_88 * L_15 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(((ServerContext_t3_111 *)IsInstClass(L_15, ServerContext_t3_111_il2cpp_TypeInfo_var)));
		bool L_16 = ServerContext_get_ClientCertificateRequired_m3_712(((ServerContext_t3_111 *)IsInstClass(L_15, ServerContext_t3_111_il2cpp_TypeInfo_var)), /*hidden argument*/NULL);
		if (!L_16)
		{
			goto IL_0086;
		}
	}
	{
		TlsException_t3_117 * L_17 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_849(L_17, ((int32_t)41), /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
	}

IL_0086:
	{
		return;
	}
}
// System.Boolean Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::checkCertificateUsage(Mono.Security.X509.X509Certificate)
extern TypeInfo* ServerContext_t3_111_il2cpp_TypeInfo_var;
extern TypeInfo* KeyUsageExtension_t3_77_il2cpp_TypeInfo_var;
extern TypeInfo* ExtendedKeyUsageExtension_t3_74_il2cpp_TypeInfo_var;
extern TypeInfo* NetscapeCertTypeExtension_t3_79_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral1564;
extern Il2CppCodeGenString* _stringLiteral1568;
extern Il2CppCodeGenString* _stringLiteral4353;
extern Il2CppCodeGenString* _stringLiteral3886;
extern "C" bool TlsClientCertificate_checkCertificateUsage_m3_966 (TlsClientCertificate_t3_132 * __this, X509Certificate_t3_1 * ___cert, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ServerContext_t3_111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1381);
		KeyUsageExtension_t3_77_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1403);
		ExtendedKeyUsageExtension_t3_74_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1344);
		NetscapeCertTypeExtension_t3_79_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1404);
		_stringLiteral1564 = il2cpp_codegen_string_literal_from_index(1564);
		_stringLiteral1568 = il2cpp_codegen_string_literal_from_index(1568);
		_stringLiteral4353 = il2cpp_codegen_string_literal_from_index(4353);
		_stringLiteral3886 = il2cpp_codegen_string_literal_from_index(3886);
		s_Il2CppMethodIntialized = true;
	}
	ServerContext_t3_111 * V_0 = {0};
	int32_t V_1 = {0};
	KeyUsageExtension_t3_77 * V_2 = {0};
	ExtendedKeyUsageExtension_t3_74 * V_3 = {0};
	X509Extension_t3_7 * V_4 = {0};
	NetscapeCertTypeExtension_t3_79 * V_5 = {0};
	int32_t V_6 = {0};
	int32_t G_B16_0 = 0;
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_0 = ((ServerContext_t3_111 *)CastclassClass(L_0, ServerContext_t3_111_il2cpp_TypeInfo_var));
		X509Certificate_t3_1 * L_1 = ___cert;
		NullCheck(L_1);
		int32_t L_2 = X509Certificate_get_Version_m3_53(L_1, /*hidden argument*/NULL);
		if ((((int32_t)L_2) >= ((int32_t)3)))
		{
			goto IL_001a;
		}
	}
	{
		return 1;
	}

IL_001a:
	{
		V_1 = 0;
		ServerContext_t3_111 * L_3 = V_0;
		NullCheck(L_3);
		SecurityParameters_t3_99 * L_4 = Context_get_Negotiating_m3_631(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		CipherSuite_t3_87 * L_5 = SecurityParameters_get_Cipher_m3_703(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		int32_t L_6 = CipherSuite_get_ExchangeAlgorithmType_m3_494(L_5, /*hidden argument*/NULL);
		V_6 = L_6;
		int32_t L_7 = V_6;
		if (L_7 == 0)
		{
			goto IL_0059;
		}
		if (L_7 == 1)
		{
			goto IL_0060;
		}
		if (L_7 == 2)
		{
			goto IL_0062;
		}
		if (L_7 == 3)
		{
			goto IL_004e;
		}
		if (L_7 == 4)
		{
			goto IL_004e;
		}
	}
	{
		goto IL_0062;
	}

IL_004e:
	{
		V_1 = ((int32_t)128);
		goto IL_0062;
	}

IL_0059:
	{
		V_1 = 8;
		goto IL_0062;
	}

IL_0060:
	{
		return 0;
	}

IL_0062:
	{
		V_2 = (KeyUsageExtension_t3_77 *)NULL;
		V_3 = (ExtendedKeyUsageExtension_t3_74 *)NULL;
		X509Certificate_t3_1 * L_8 = ___cert;
		NullCheck(L_8);
		X509ExtensionCollection_t3_17 * L_9 = X509Certificate_get_Extensions_m3_28(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		X509Extension_t3_7 * L_10 = X509ExtensionCollection_get_Item_m3_29(L_9, _stringLiteral1564, /*hidden argument*/NULL);
		V_4 = L_10;
		X509Extension_t3_7 * L_11 = V_4;
		if (!L_11)
		{
			goto IL_0087;
		}
	}
	{
		X509Extension_t3_7 * L_12 = V_4;
		KeyUsageExtension_t3_77 * L_13 = (KeyUsageExtension_t3_77 *)il2cpp_codegen_object_new (KeyUsageExtension_t3_77_il2cpp_TypeInfo_var);
		KeyUsageExtension__ctor_m3_448(L_13, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
	}

IL_0087:
	{
		X509Certificate_t3_1 * L_14 = ___cert;
		NullCheck(L_14);
		X509ExtensionCollection_t3_17 * L_15 = X509Certificate_get_Extensions_m3_28(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		X509Extension_t3_7 * L_16 = X509ExtensionCollection_get_Item_m3_29(L_15, _stringLiteral1568, /*hidden argument*/NULL);
		V_4 = L_16;
		X509Extension_t3_7 * L_17 = V_4;
		if (!L_17)
		{
			goto IL_00a8;
		}
	}
	{
		X509Extension_t3_7 * L_18 = V_4;
		ExtendedKeyUsageExtension_t3_74 * L_19 = (ExtendedKeyUsageExtension_t3_74 *)il2cpp_codegen_object_new (ExtendedKeyUsageExtension_t3_74_il2cpp_TypeInfo_var);
		ExtendedKeyUsageExtension__ctor_m3_439(L_19, L_18, /*hidden argument*/NULL);
		V_3 = L_19;
	}

IL_00a8:
	{
		KeyUsageExtension_t3_77 * L_20 = V_2;
		if (!L_20)
		{
			goto IL_00d4;
		}
	}
	{
		ExtendedKeyUsageExtension_t3_74 * L_21 = V_3;
		if (!L_21)
		{
			goto IL_00d4;
		}
	}
	{
		KeyUsageExtension_t3_77 * L_22 = V_2;
		int32_t L_23 = V_1;
		NullCheck(L_22);
		bool L_24 = KeyUsageExtension_Support_m3_451(L_22, L_23, /*hidden argument*/NULL);
		if (!L_24)
		{
			goto IL_00d2;
		}
	}
	{
		ExtendedKeyUsageExtension_t3_74 * L_25 = V_3;
		NullCheck(L_25);
		ArrayList_t1_114 * L_26 = ExtendedKeyUsageExtension_get_KeyPurpose_m3_442(L_25, /*hidden argument*/NULL);
		NullCheck(L_26);
		bool L_27 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_26, _stringLiteral4353);
		G_B16_0 = ((int32_t)(L_27));
		goto IL_00d3;
	}

IL_00d2:
	{
		G_B16_0 = 0;
	}

IL_00d3:
	{
		return G_B16_0;
	}

IL_00d4:
	{
		KeyUsageExtension_t3_77 * L_28 = V_2;
		if (!L_28)
		{
			goto IL_00e2;
		}
	}
	{
		KeyUsageExtension_t3_77 * L_29 = V_2;
		int32_t L_30 = V_1;
		NullCheck(L_29);
		bool L_31 = KeyUsageExtension_Support_m3_451(L_29, L_30, /*hidden argument*/NULL);
		return L_31;
	}

IL_00e2:
	{
		ExtendedKeyUsageExtension_t3_74 * L_32 = V_3;
		if (!L_32)
		{
			goto IL_00f9;
		}
	}
	{
		ExtendedKeyUsageExtension_t3_74 * L_33 = V_3;
		NullCheck(L_33);
		ArrayList_t1_114 * L_34 = ExtendedKeyUsageExtension_get_KeyPurpose_m3_442(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		bool L_35 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(32 /* System.Boolean System.Collections.ArrayList::Contains(System.Object) */, L_34, _stringLiteral4353);
		return L_35;
	}

IL_00f9:
	{
		X509Certificate_t3_1 * L_36 = ___cert;
		NullCheck(L_36);
		X509ExtensionCollection_t3_17 * L_37 = X509Certificate_get_Extensions_m3_28(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		X509Extension_t3_7 * L_38 = X509ExtensionCollection_get_Item_m3_29(L_37, _stringLiteral3886, /*hidden argument*/NULL);
		V_4 = L_38;
		X509Extension_t3_7 * L_39 = V_4;
		if (!L_39)
		{
			goto IL_0128;
		}
	}
	{
		X509Extension_t3_7 * L_40 = V_4;
		NetscapeCertTypeExtension_t3_79 * L_41 = (NetscapeCertTypeExtension_t3_79 *)il2cpp_codegen_object_new (NetscapeCertTypeExtension_t3_79_il2cpp_TypeInfo_var);
		NetscapeCertTypeExtension__ctor_m3_453(L_41, L_40, /*hidden argument*/NULL);
		V_5 = L_41;
		NetscapeCertTypeExtension_t3_79 * L_42 = V_5;
		NullCheck(L_42);
		bool L_43 = NetscapeCertTypeExtension_Support_m3_455(L_42, ((int32_t)128), /*hidden argument*/NULL);
		return L_43;
	}

IL_0128:
	{
		return 0;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificate::validateCertificates(Mono.Security.X509.X509CertificateCollection)
extern const Il2CppType* Int32_t1_3_0_0_0_var;
extern TypeInfo* ServerContext_t3_111_il2cpp_TypeInfo_var;
extern TypeInfo* ArrayList_t1_114_il2cpp_TypeInfo_var;
extern TypeInfo* Int32_t1_3_il2cpp_TypeInfo_var;
extern TypeInfo* X509CertificateCollection_t3_4_il2cpp_TypeInfo_var;
extern TypeInfo* X509Chain_t3_53_il2cpp_TypeInfo_var;
extern TypeInfo* Exception_t1_33_il2cpp_TypeInfo_var;
extern TypeInfo* X509Certificate_t1_572_il2cpp_TypeInfo_var;
extern TypeInfo* Type_t_il2cpp_TypeInfo_var;
extern TypeInfo* Int32U5BU5D_t1_161_il2cpp_TypeInfo_var;
extern TypeInfo* X509CertificateCollection_t2_305_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t1_888_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4468;
extern "C" void TlsClientCertificate_validateCertificates_m3_967 (TlsClientCertificate_t3_132 * __this, X509CertificateCollection_t3_4 * ___certificates, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int32_t1_3_0_0_0_var = il2cpp_codegen_type_from_index(8);
		ServerContext_t3_111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1381);
		ArrayList_t1_114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(55);
		Int32_t1_3_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(8);
		X509CertificateCollection_t3_4_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1314);
		X509Chain_t3_53_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1405);
		Exception_t1_33_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(45);
		X509Certificate_t1_572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		Type_t_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(3);
		Int32U5BU5D_t1_161_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(47);
		X509CertificateCollection_t2_305_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(873);
		IDisposable_t1_888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4468 = il2cpp_codegen_string_literal_from_index(4468);
		s_Il2CppMethodIntialized = true;
	}
	ServerContext_t3_111 * V_0 = {0};
	uint8_t V_1 = {0};
	X509Certificate_t1_572 * V_2 = {0};
	Int32U5BU5D_t1_161* V_3 = {0};
	X509Certificate_t3_1 * V_4 = {0};
	ArrayList_t1_114 * V_5 = {0};
	X509Chain_t3_53 * V_6 = {0};
	X509CertificateCollection_t3_4 * V_7 = {0};
	bool V_8 = false;
	X509CertificateCollection_t2_305 * V_9 = {0};
	X509Certificate_t3_1 * V_10 = {0};
	X509CertificateEnumerator_t3_24 * V_11 = {0};
	int32_t V_12 = {0};
	Object_t * V_13 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_0 = ((ServerContext_t3_111 *)CastclassClass(L_0, ServerContext_t3_111_il2cpp_TypeInfo_var));
		V_1 = ((int32_t)42);
		V_2 = (X509Certificate_t1_572 *)NULL;
		V_3 = (Int32U5BU5D_t1_161*)NULL;
		X509CertificateCollection_t3_4 * L_1 = ___certificates;
		NullCheck(L_1);
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_1);
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_01c2;
		}
	}
	{
		X509CertificateCollection_t3_4 * L_3 = ___certificates;
		NullCheck(L_3);
		X509Certificate_t3_1 * L_4 = X509CertificateCollection_get_Item_m3_26(L_3, 0, /*hidden argument*/NULL);
		V_4 = L_4;
		ArrayList_t1_114 * L_5 = (ArrayList_t1_114 *)il2cpp_codegen_object_new (ArrayList_t1_114_il2cpp_TypeInfo_var);
		ArrayList__ctor_m1_1634(L_5, /*hidden argument*/NULL);
		V_5 = L_5;
		X509Certificate_t3_1 * L_6 = V_4;
		bool L_7 = TlsClientCertificate_checkCertificateUsage_m3_966(__this, L_6, /*hidden argument*/NULL);
		if (L_7)
		{
			goto IL_004e;
		}
	}
	{
		ArrayList_t1_114 * L_8 = V_5;
		int32_t L_9 = ((int32_t)-2146762490);
		Object_t * L_10 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_9);
		NullCheck(L_8);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_8, L_10);
	}

IL_004e:
	{
		X509CertificateCollection_t3_4 * L_11 = ___certificates;
		NullCheck(L_11);
		int32_t L_12 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(5 /* System.Int32 System.Collections.CollectionBase::get_Count() */, L_11);
		if ((((int32_t)L_12) <= ((int32_t)1)))
		{
			goto IL_0079;
		}
	}
	{
		X509CertificateCollection_t3_4 * L_13 = ___certificates;
		X509CertificateCollection_t3_4 * L_14 = (X509CertificateCollection_t3_4 *)il2cpp_codegen_object_new (X509CertificateCollection_t3_4_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m3_357(L_14, L_13, /*hidden argument*/NULL);
		V_7 = L_14;
		X509CertificateCollection_t3_4 * L_15 = V_7;
		X509Certificate_t3_1 * L_16 = V_4;
		NullCheck(L_15);
		X509CertificateCollection_Remove_m3_364(L_15, L_16, /*hidden argument*/NULL);
		X509CertificateCollection_t3_4 * L_17 = V_7;
		X509Chain_t3_53 * L_18 = (X509Chain_t3_53 *)il2cpp_codegen_object_new (X509Chain_t3_53_il2cpp_TypeInfo_var);
		X509Chain__ctor_m3_367(L_18, L_17, /*hidden argument*/NULL);
		V_6 = L_18;
		goto IL_0080;
	}

IL_0079:
	{
		X509Chain_t3_53 * L_19 = (X509Chain_t3_53 *)il2cpp_codegen_object_new (X509Chain_t3_53_il2cpp_TypeInfo_var);
		X509Chain__ctor_m3_366(L_19, /*hidden argument*/NULL);
		V_6 = L_19;
	}

IL_0080:
	{
		V_8 = 0;
	}

IL_0083:
	try
	{ // begin try (depth: 1)
		X509Chain_t3_53 * L_20 = V_6;
		X509Certificate_t3_1 * L_21 = V_4;
		NullCheck(L_20);
		bool L_22 = X509Chain_Build_m3_370(L_20, L_21, /*hidden argument*/NULL);
		V_8 = L_22;
		goto IL_009c;
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__exception_local = (Exception_t1_33 *)e.ex;
		if(il2cpp_codegen_class_is_assignable_from (Exception_t1_33_il2cpp_TypeInfo_var, e.ex->object.klass))
			goto CATCH_0093;
		throw e;
	}

CATCH_0093:
	{ // begin catch(System.Exception)
		V_8 = 0;
		goto IL_009c;
	} // end catch (depth: 1)

IL_009c:
	{
		bool L_23 = V_8;
		if (L_23)
		{
			goto IL_0199;
		}
	}
	{
		X509Chain_t3_53 * L_24 = V_6;
		NullCheck(L_24);
		int32_t L_25 = X509Chain_get_Status_m3_368(L_24, /*hidden argument*/NULL);
		V_12 = L_25;
		int32_t L_26 = V_12;
		if ((((int32_t)L_26) == ((int32_t)1)))
		{
			goto IL_012f;
		}
	}
	{
		int32_t L_27 = V_12;
		if ((((int32_t)L_27) == ((int32_t)2)))
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_28 = V_12;
		if ((((int32_t)L_28) == ((int32_t)8)))
		{
			goto IL_0101;
		}
	}
	{
		int32_t L_29 = V_12;
		if ((((int32_t)L_29) == ((int32_t)((int32_t)32))))
		{
			goto IL_0163;
		}
	}
	{
		int32_t L_30 = V_12;
		if ((((int32_t)L_30) == ((int32_t)((int32_t)1024))))
		{
			goto IL_00ea;
		}
	}
	{
		int32_t L_31 = V_12;
		if ((((int32_t)L_31) == ((int32_t)((int32_t)65536))))
		{
			goto IL_0149;
		}
	}
	{
		goto IL_017d;
	}

IL_00ea:
	{
		ArrayList_t1_114 * L_32 = V_5;
		int32_t L_33 = ((int32_t)-2146869223);
		Object_t * L_34 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_33);
		NullCheck(L_32);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_32, L_34);
		goto IL_0199;
	}

IL_0101:
	{
		ArrayList_t1_114 * L_35 = V_5;
		int32_t L_36 = ((int32_t)-2146869232);
		Object_t * L_37 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_36);
		NullCheck(L_35);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_35, L_37);
		goto IL_0199;
	}

IL_0118:
	{
		ArrayList_t1_114 * L_38 = V_5;
		int32_t L_39 = ((int32_t)-2146762494);
		Object_t * L_40 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_39);
		NullCheck(L_38);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_38, L_40);
		goto IL_0199;
	}

IL_012f:
	{
		V_1 = ((int32_t)45);
		ArrayList_t1_114 * L_41 = V_5;
		int32_t L_42 = ((int32_t)-2146762495);
		Object_t * L_43 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_42);
		NullCheck(L_41);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_41, L_43);
		goto IL_0199;
	}

IL_0149:
	{
		V_1 = ((int32_t)48);
		ArrayList_t1_114 * L_44 = V_5;
		int32_t L_45 = ((int32_t)-2146762486);
		Object_t * L_46 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_45);
		NullCheck(L_44);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_44, L_46);
		goto IL_0199;
	}

IL_0163:
	{
		V_1 = ((int32_t)48);
		ArrayList_t1_114 * L_47 = V_5;
		int32_t L_48 = ((int32_t)-2146762487);
		Object_t * L_49 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_48);
		NullCheck(L_47);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_47, L_49);
		goto IL_0199;
	}

IL_017d:
	{
		V_1 = ((int32_t)46);
		ArrayList_t1_114 * L_50 = V_5;
		X509Chain_t3_53 * L_51 = V_6;
		NullCheck(L_51);
		int32_t L_52 = X509Chain_get_Status_m3_368(L_51, /*hidden argument*/NULL);
		int32_t L_53 = L_52;
		Object_t * L_54 = Box(Int32_t1_3_il2cpp_TypeInfo_var, &L_53);
		NullCheck(L_50);
		VirtFuncInvoker1< int32_t, Object_t * >::Invoke(30 /* System.Int32 System.Collections.ArrayList::Add(System.Object) */, L_50, L_54);
		goto IL_0199;
	}

IL_0199:
	{
		X509Certificate_t3_1 * L_55 = V_4;
		NullCheck(L_55);
		ByteU5BU5D_t1_72* L_56 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_55);
		X509Certificate_t1_572 * L_57 = (X509Certificate_t1_572 *)il2cpp_codegen_object_new (X509Certificate_t1_572_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m1_3979(L_57, L_56, /*hidden argument*/NULL);
		V_2 = L_57;
		ArrayList_t1_114 * L_58 = V_5;
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_59 = Type_GetTypeFromHandle_m1_924(NULL /*static, unused*/, LoadTypeToken(Int32_t1_3_0_0_0_var), /*hidden argument*/NULL);
		NullCheck(L_58);
		Array_t * L_60 = (Array_t *)VirtFuncInvoker1< Array_t *, Type_t * >::Invoke(48 /* System.Array System.Collections.ArrayList::ToArray(System.Type) */, L_58, L_59);
		V_3 = ((Int32U5BU5D_t1_161*)Castclass(L_60, Int32U5BU5D_t1_161_il2cpp_TypeInfo_var));
		goto IL_01c9;
	}

IL_01c2:
	{
		V_3 = ((Int32U5BU5D_t1_161*)SZArrayNew(Int32U5BU5D_t1_161_il2cpp_TypeInfo_var, 0));
	}

IL_01c9:
	{
		X509CertificateCollection_t2_305 * L_61 = (X509CertificateCollection_t2_305 *)il2cpp_codegen_object_new (X509CertificateCollection_t2_305_il2cpp_TypeInfo_var);
		X509CertificateCollection__ctor_m2_5506(L_61, /*hidden argument*/NULL);
		V_9 = L_61;
		X509CertificateCollection_t3_4 * L_62 = ___certificates;
		NullCheck(L_62);
		X509CertificateEnumerator_t3_24 * L_63 = X509CertificateCollection_GetEnumerator_m3_81(L_62, /*hidden argument*/NULL);
		V_11 = L_63;
	}

IL_01d8:
	try
	{ // begin try (depth: 1)
		{
			goto IL_01fa;
		}

IL_01dd:
		{
			X509CertificateEnumerator_t3_24 * L_64 = V_11;
			NullCheck(L_64);
			X509Certificate_t3_1 * L_65 = X509CertificateEnumerator_get_Current_m3_82(L_64, /*hidden argument*/NULL);
			V_10 = L_65;
			X509CertificateCollection_t2_305 * L_66 = V_9;
			X509Certificate_t3_1 * L_67 = V_10;
			NullCheck(L_67);
			ByteU5BU5D_t1_72* L_68 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_67);
			X509Certificate_t1_572 * L_69 = (X509Certificate_t1_572 *)il2cpp_codegen_object_new (X509Certificate_t1_572_il2cpp_TypeInfo_var);
			X509Certificate__ctor_m1_3979(L_69, L_68, /*hidden argument*/NULL);
			NullCheck(L_66);
			X509CertificateCollection_Add_m2_5511(L_66, L_69, /*hidden argument*/NULL);
		}

IL_01fa:
		{
			X509CertificateEnumerator_t3_24 * L_70 = V_11;
			NullCheck(L_70);
			bool L_71 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext() */, L_70);
			if (L_71)
			{
				goto IL_01dd;
			}
		}

IL_0206:
		{
			IL2CPP_LEAVE(0x221, FINALLY_020b);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_020b;
	}

FINALLY_020b:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t3_24 * L_72 = V_11;
			V_13 = ((Object_t *)IsInst(L_72, IDisposable_t1_888_il2cpp_TypeInfo_var));
			Object_t * L_73 = V_13;
			if (L_73)
			{
				goto IL_0219;
			}
		}

IL_0218:
		{
			IL2CPP_END_FINALLY(523)
		}

IL_0219:
		{
			Object_t * L_74 = V_13;
			NullCheck(L_74);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1_888_il2cpp_TypeInfo_var, L_74);
			IL2CPP_END_FINALLY(523)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(523)
	{
		IL2CPP_JUMP_TBL(0x221, IL_0221)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_0221:
	{
		ServerContext_t3_111 * L_75 = V_0;
		NullCheck(L_75);
		SslServerStream_t3_10 * L_76 = ServerContext_get_SslStream_m3_711(L_75, /*hidden argument*/NULL);
		X509Certificate_t1_572 * L_77 = V_2;
		Int32U5BU5D_t1_161* L_78 = V_3;
		NullCheck(L_76);
		bool L_79 = SslServerStream_RaiseClientCertificateValidation_m3_773(L_76, L_77, L_78, /*hidden argument*/NULL);
		if (L_79)
		{
			goto IL_023f;
		}
	}
	{
		uint8_t L_80 = V_1;
		TlsException_t3_117 * L_81 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_81, L_80, _stringLiteral4468, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_81);
	}

IL_023f:
	{
		Context_t3_88 * L_82 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_82);
		TlsClientSettings_t3_98 * L_83 = Context_get_ClientSettings_m3_588(L_82, /*hidden argument*/NULL);
		X509Certificate_t1_572 * L_84 = V_2;
		NullCheck(L_83);
		TlsClientSettings_set_ClientCertificate_m3_842(L_83, L_84, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificateVerify::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsClientCertificateVerify__ctor_m3_968 (TlsClientCertificateVerify_t3_133 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		HandshakeMessage__ctor_m3_896(__this, L_0, ((int32_t)15), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificateVerify::ProcessAsSsl3()
extern TypeInfo* ServerContext_t3_111_il2cpp_TypeInfo_var;
extern TypeInfo* SslHandshakeHash_t3_114_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4469;
extern "C" void TlsClientCertificateVerify_ProcessAsSsl3_m3_969 (TlsClientCertificateVerify_t3_133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ServerContext_t3_111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1381);
		SslHandshakeHash_t3_114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1401);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4469 = il2cpp_codegen_string_literal_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	ServerContext_t3_111 * V_0 = {0};
	int32_t V_1 = 0;
	ByteU5BU5D_t1_72* V_2 = {0};
	SslHandshakeHash_t3_114 * V_3 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_0 = ((ServerContext_t3_111 *)CastclassClass(L_0, ServerContext_t3_111_il2cpp_TypeInfo_var));
		int16_t L_1 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		ByteU5BU5D_t1_72* L_3 = TlsStream_ReadBytes_m3_881(__this, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		ServerContext_t3_111 * L_4 = V_0;
		NullCheck(L_4);
		ByteU5BU5D_t1_72* L_5 = Context_get_MasterSecret_m3_612(L_4, /*hidden argument*/NULL);
		SslHandshakeHash_t3_114 * L_6 = (SslHandshakeHash_t3_114 *)il2cpp_codegen_object_new (SslHandshakeHash_t3_114_il2cpp_TypeInfo_var);
		SslHandshakeHash__ctor_m3_757(L_6, L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		SslHandshakeHash_t3_114 * L_7 = V_3;
		ServerContext_t3_111 * L_8 = V_0;
		NullCheck(L_8);
		TlsStream_t3_100 * L_9 = Context_get_HandshakeMessages_m3_599(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		ByteU5BU5D_t1_72* L_10 = TlsStream_ToArray_m3_888(L_9, /*hidden argument*/NULL);
		ServerContext_t3_111 * L_11 = V_0;
		NullCheck(L_11);
		TlsStream_t3_100 * L_12 = Context_get_HandshakeMessages_m3_599(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		int64_t L_13 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_12);
		NullCheck(L_7);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_7, L_10, 0, (((int32_t)((int32_t)L_13))));
		SslHandshakeHash_t3_114 * L_14 = V_3;
		ServerContext_t3_111 * L_15 = V_0;
		NullCheck(L_15);
		TlsClientSettings_t3_98 * L_16 = Context_get_ClientSettings_m3_588(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		RSAManaged_t3_20 * L_17 = TlsClientSettings_get_CertificateRSA_m3_843(L_16, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_18 = V_2;
		NullCheck(L_14);
		bool L_19 = SslHandshakeHash_VerifySignature_m3_762(L_14, L_17, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_006a;
		}
	}
	{
		TlsException_t3_117 * L_20 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_20, ((int32_t)40), _stringLiteral4469, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_006a:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientCertificateVerify::ProcessAsTls1()
extern TypeInfo* ServerContext_t3_111_il2cpp_TypeInfo_var;
extern TypeInfo* MD5SHA1_t3_82_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4469;
extern "C" void TlsClientCertificateVerify_ProcessAsTls1_m3_970 (TlsClientCertificateVerify_t3_133 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ServerContext_t3_111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1381);
		MD5SHA1_t3_82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1382);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4469 = il2cpp_codegen_string_literal_from_index(4469);
		s_Il2CppMethodIntialized = true;
	}
	ServerContext_t3_111 * V_0 = {0};
	int32_t V_1 = 0;
	ByteU5BU5D_t1_72* V_2 = {0};
	MD5SHA1_t3_82 * V_3 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_0 = ((ServerContext_t3_111 *)CastclassClass(L_0, ServerContext_t3_111_il2cpp_TypeInfo_var));
		int16_t L_1 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		V_1 = L_1;
		int32_t L_2 = V_1;
		ByteU5BU5D_t1_72* L_3 = TlsStream_ReadBytes_m3_881(__this, L_2, /*hidden argument*/NULL);
		V_2 = L_3;
		MD5SHA1_t3_82 * L_4 = (MD5SHA1_t3_82 *)il2cpp_codegen_object_new (MD5SHA1_t3_82_il2cpp_TypeInfo_var);
		MD5SHA1__ctor_m3_470(L_4, /*hidden argument*/NULL);
		V_3 = L_4;
		MD5SHA1_t3_82 * L_5 = V_3;
		ServerContext_t3_111 * L_6 = V_0;
		NullCheck(L_6);
		TlsStream_t3_100 * L_7 = Context_get_HandshakeMessages_m3_599(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t1_72* L_8 = TlsStream_ToArray_m3_888(L_7, /*hidden argument*/NULL);
		ServerContext_t3_111 * L_9 = V_0;
		NullCheck(L_9);
		TlsStream_t3_100 * L_10 = Context_get_HandshakeMessages_m3_599(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		int64_t L_11 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_10);
		NullCheck(L_5);
		HashAlgorithm_ComputeHash_m1_4129(L_5, L_8, 0, (((int32_t)((int32_t)L_11))), /*hidden argument*/NULL);
		MD5SHA1_t3_82 * L_12 = V_3;
		ServerContext_t3_111 * L_13 = V_0;
		NullCheck(L_13);
		TlsClientSettings_t3_98 * L_14 = Context_get_ClientSettings_m3_588(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		RSAManaged_t3_20 * L_15 = TlsClientSettings_get_CertificateRSA_m3_843(L_14, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_16 = V_2;
		NullCheck(L_12);
		bool L_17 = MD5SHA1_VerifySignature_m3_475(L_12, L_15, L_16, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_0064;
		}
	}
	{
		TlsException_t3_117 * L_18 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_18, ((int32_t)40), _stringLiteral4469, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_18);
	}

IL_0064:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsClientFinished__ctor_m3_971 (TlsClientFinished_t3_134 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		HandshakeMessage__ctor_m3_896(__this, L_0, ((int32_t)20), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished::ProcessAsSsl3()
extern TypeInfo* SslHandshakeHash_t3_114_il2cpp_TypeInfo_var;
extern TypeInfo* TlsStream_t3_100_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4470;
extern "C" void TlsClientFinished_ProcessAsSsl3_m3_972 (TlsClientFinished_t3_134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SslHandshakeHash_t3_114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1401);
		TlsStream_t3_100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1352);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4470 = il2cpp_codegen_string_literal_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t1_597 * V_0 = {0};
	TlsStream_t3_100 * V_1 = {0};
	ByteU5BU5D_t1_72* V_2 = {0};
	ByteU5BU5D_t1_72* V_3 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t1_72* L_1 = Context_get_MasterSecret_m3_612(L_0, /*hidden argument*/NULL);
		SslHandshakeHash_t3_114 * L_2 = (SslHandshakeHash_t3_114 *)il2cpp_codegen_object_new (SslHandshakeHash_t3_114_il2cpp_TypeInfo_var);
		SslHandshakeHash__ctor_m3_757(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		TlsStream_t3_100 * L_3 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_868(L_3, /*hidden argument*/NULL);
		V_1 = L_3;
		TlsStream_t3_100 * L_4 = V_1;
		Context_t3_88 * L_5 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		TlsStream_t3_100 * L_6 = Context_get_HandshakeMessages_m3_599(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t1_72* L_7 = TlsStream_ToArray_m3_888(L_6, /*hidden argument*/NULL);
		NullCheck(L_4);
		TlsStream_Write_m3_886(L_4, L_7, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_8 = V_1;
		NullCheck(L_8);
		TlsStream_Write_m3_885(L_8, ((int32_t)1129074260), /*hidden argument*/NULL);
		HashAlgorithm_t1_597 * L_9 = V_0;
		TlsStream_t3_100 * L_10 = V_1;
		NullCheck(L_10);
		ByteU5BU5D_t1_72* L_11 = TlsStream_ToArray_m3_888(L_10, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_12 = V_1;
		NullCheck(L_12);
		int64_t L_13 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_12);
		NullCheck(L_9);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_9, L_11, 0, (((int32_t)((int32_t)L_13))));
		TlsStream_t3_100 * L_14 = V_1;
		NullCheck(L_14);
		TlsStream_Reset_m3_887(L_14, /*hidden argument*/NULL);
		int64_t L_15 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, __this);
		ByteU5BU5D_t1_72* L_16 = TlsStream_ReadBytes_m3_881(__this, (((int32_t)((int32_t)L_15))), /*hidden argument*/NULL);
		V_2 = L_16;
		HashAlgorithm_t1_597 * L_17 = V_0;
		NullCheck(L_17);
		ByteU5BU5D_t1_72* L_18 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_17);
		V_3 = L_18;
		ByteU5BU5D_t1_72* L_19 = V_2;
		ByteU5BU5D_t1_72* L_20 = V_3;
		bool L_21 = HandshakeMessage_Compare_m3_903(NULL /*static, unused*/, L_19, L_20, /*hidden argument*/NULL);
		if (L_21)
		{
			goto IL_0081;
		}
	}
	{
		TlsException_t3_117 * L_22 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_22, ((int32_t)51), _stringLiteral4470, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_22);
	}

IL_0081:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientFinished::ProcessAsTls1()
extern TypeInfo* MD5SHA1_t3_82_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4460;
extern Il2CppCodeGenString* _stringLiteral4470;
extern "C" void TlsClientFinished_ProcessAsTls1_m3_973 (TlsClientFinished_t3_134 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MD5SHA1_t3_82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1382);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4460 = il2cpp_codegen_string_literal_from_index(4460);
		_stringLiteral4470 = il2cpp_codegen_string_literal_from_index(4470);
		s_Il2CppMethodIntialized = true;
	}
	ByteU5BU5D_t1_72* V_0 = {0};
	HashAlgorithm_t1_597 * V_1 = {0};
	ByteU5BU5D_t1_72* V_2 = {0};
	ByteU5BU5D_t1_72* V_3 = {0};
	ByteU5BU5D_t1_72* V_4 = {0};
	{
		int64_t L_0 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, __this);
		ByteU5BU5D_t1_72* L_1 = TlsStream_ReadBytes_m3_881(__this, (((int32_t)((int32_t)L_0))), /*hidden argument*/NULL);
		V_0 = L_1;
		MD5SHA1_t3_82 * L_2 = (MD5SHA1_t3_82 *)il2cpp_codegen_object_new (MD5SHA1_t3_82_il2cpp_TypeInfo_var);
		MD5SHA1__ctor_m3_470(L_2, /*hidden argument*/NULL);
		V_1 = L_2;
		Context_t3_88 * L_3 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsStream_t3_100 * L_4 = Context_get_HandshakeMessages_m3_599(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t1_72* L_5 = TlsStream_ToArray_m3_888(L_4, /*hidden argument*/NULL);
		V_2 = L_5;
		HashAlgorithm_t1_597 * L_6 = V_1;
		ByteU5BU5D_t1_72* L_7 = V_2;
		ByteU5BU5D_t1_72* L_8 = V_2;
		NullCheck(L_8);
		NullCheck(L_6);
		ByteU5BU5D_t1_72* L_9 = HashAlgorithm_ComputeHash_m1_4129(L_6, L_7, 0, (((int32_t)((int32_t)(((Array_t *)L_8)->max_length)))), /*hidden argument*/NULL);
		V_3 = L_9;
		Context_t3_88 * L_10 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		SecurityParameters_t3_99 * L_11 = Context_get_Current_m3_630(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		CipherSuite_t3_87 * L_12 = SecurityParameters_get_Cipher_m3_703(L_11, /*hidden argument*/NULL);
		Context_t3_88 * L_13 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		ByteU5BU5D_t1_72* L_14 = Context_get_MasterSecret_m3_612(L_13, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_15 = V_3;
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_16 = CipherSuite_PRF_m3_512(L_12, L_14, _stringLiteral4460, L_15, ((int32_t)12), /*hidden argument*/NULL);
		V_4 = L_16;
		ByteU5BU5D_t1_72* L_17 = V_0;
		ByteU5BU5D_t1_72* L_18 = V_4;
		bool L_19 = HandshakeMessage_Compare_m3_903(NULL /*static, unused*/, L_17, L_18, /*hidden argument*/NULL);
		if (L_19)
		{
			goto IL_0075;
		}
	}
	{
		TlsException_t3_117 * L_20 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_20, ((int32_t)51), _stringLiteral4470, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_20);
	}

IL_0075:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsClientHello__ctor_m3_974 (TlsClientHello_t3_135 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		HandshakeMessage__ctor_m3_896(__this, L_0, 1, L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::Update()
extern "C" void TlsClientHello_Update_m3_975 (TlsClientHello_t3_135 * __this, const MethodInfo* method)
{
	{
		HandshakeMessage_Update_m3_901(__this, /*hidden argument*/NULL);
		TlsClientHello_selectCipherSuite_m3_979(__this, /*hidden argument*/NULL);
		TlsClientHello_selectCompressionMethod_m3_980(__this, /*hidden argument*/NULL);
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_1 = (__this->___sessionId_10);
		NullCheck(L_0);
		Context_set_SessionId_m3_584(L_0, L_1, /*hidden argument*/NULL);
		Context_t3_88 * L_2 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_3 = (__this->___random_9);
		NullCheck(L_2);
		Context_set_ClientRandom_m3_605(L_2, L_3, /*hidden argument*/NULL);
		Context_t3_88 * L_4 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Context_set_ProtocolNegotiated_m3_578(L_4, 1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::ProcessAsSsl3()
extern "C" void TlsClientHello_ProcessAsSsl3_m3_976 (TlsClientHello_t3_135 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(29 /* System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::ProcessAsTls1()
extern TypeInfo* Int16U5BU5D_t1_885_il2cpp_TypeInfo_var;
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern "C" void TlsClientHello_ProcessAsTls1_m3_977 (TlsClientHello_t3_135 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		Int16U5BU5D_t1_885_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(67);
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int16_t L_0 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		TlsClientHello_processProtocol_m3_978(__this, L_0, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_1 = TlsStream_ReadBytes_m3_881(__this, ((int32_t)32), /*hidden argument*/NULL);
		__this->___random_9 = L_1;
		uint8_t L_2 = TlsStream_ReadByte_m3_878(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_3 = TlsStream_ReadBytes_m3_881(__this, L_2, /*hidden argument*/NULL);
		__this->___sessionId_10 = L_3;
		int16_t L_4 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		__this->___cipherSuites_11 = ((Int16U5BU5D_t1_885*)SZArrayNew(Int16U5BU5D_t1_885_il2cpp_TypeInfo_var, ((int32_t)((int32_t)L_4/(int32_t)2))));
		V_0 = 0;
		goto IL_0058;
	}

IL_0046:
	{
		Int16U5BU5D_t1_885* L_5 = (__this->___cipherSuites_11);
		int32_t L_6 = V_0;
		int16_t L_7 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_5, L_6);
		*((int16_t*)(int16_t*)SZArrayLdElema(L_5, L_6, sizeof(int16_t))) = (int16_t)L_7;
		int32_t L_8 = V_0;
		V_0 = ((int32_t)((int32_t)L_8+(int32_t)1));
	}

IL_0058:
	{
		int32_t L_9 = V_0;
		Int16U5BU5D_t1_885* L_10 = (__this->___cipherSuites_11);
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_10)->max_length)))))))
		{
			goto IL_0046;
		}
	}
	{
		uint8_t L_11 = TlsStream_ReadByte_m3_878(__this, /*hidden argument*/NULL);
		__this->___compressionMethods_12 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, L_11));
		V_1 = 0;
		goto IL_0090;
	}

IL_007e:
	{
		ByteU5BU5D_t1_72* L_12 = (__this->___compressionMethods_12);
		int32_t L_13 = V_1;
		uint8_t L_14 = TlsStream_ReadByte_m3_878(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_12, L_13);
		*((uint8_t*)(uint8_t*)SZArrayLdElema(L_12, L_13, sizeof(uint8_t))) = (uint8_t)L_14;
		int32_t L_15 = V_1;
		V_1 = ((int32_t)((int32_t)L_15+(int32_t)1));
	}

IL_0090:
	{
		int32_t L_16 = V_1;
		ByteU5BU5D_t1_72* L_17 = (__this->___compressionMethods_12);
		NullCheck(L_17);
		if ((((int32_t)L_16) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_17)->max_length)))))))
		{
			goto IL_007e;
		}
	}
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::processProtocol(System.Int16)
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4411;
extern "C" void TlsClientHello_processProtocol_m3_978 (TlsClientHello_t3_135 * __this, int16_t ___protocol, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4411 = il2cpp_codegen_string_literal_from_index(4411);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		int16_t L_1 = ___protocol;
		NullCheck(L_0);
		int32_t L_2 = Context_DecodeProtocolCode_m3_628(L_0, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		int32_t L_3 = V_0;
		Context_t3_88 * L_4 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		int32_t L_5 = Context_get_SecurityProtocolFlags_m3_581(L_4, /*hidden argument*/NULL);
		int32_t L_6 = V_0;
		if ((((int32_t)((int32_t)((int32_t)L_3&(int32_t)L_5))) == ((int32_t)L_6)))
		{
			goto IL_003b;
		}
	}
	{
		Context_t3_88 * L_7 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		int32_t L_8 = Context_get_SecurityProtocolFlags_m3_581(L_7, /*hidden argument*/NULL);
		if ((!(((uint32_t)((int32_t)((int32_t)L_8&(int32_t)((int32_t)-1073741824)))) == ((uint32_t)((int32_t)-1073741824)))))
		{
			goto IL_0079;
		}
	}

IL_003b:
	{
		Context_t3_88 * L_9 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		int32_t L_10 = V_0;
		NullCheck(L_9);
		Context_set_SecurityProtocol_m3_580(L_9, L_10, /*hidden argument*/NULL);
		Context_t3_88 * L_11 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		CipherSuiteCollection_t3_89 * L_12 = Context_get_SupportedCiphers_m3_597(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		CipherSuiteCollection_Clear_m3_536(L_12, /*hidden argument*/NULL);
		Context_t3_88 * L_13 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Context_set_SupportedCiphers_m3_598(L_13, (CipherSuiteCollection_t3_89 *)NULL, /*hidden argument*/NULL);
		Context_t3_88 * L_14 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		int32_t L_15 = V_0;
		CipherSuiteCollection_t3_89 * L_16 = CipherSuiteFactory_GetSupportedCiphers_m3_543(NULL /*static, unused*/, L_15, /*hidden argument*/NULL);
		NullCheck(L_14);
		Context_set_SupportedCiphers_m3_598(L_14, L_16, /*hidden argument*/NULL);
		goto IL_0086;
	}

IL_0079:
	{
		TlsException_t3_117 * L_17 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_17, ((int32_t)70), _stringLiteral4411, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_17);
	}

IL_0086:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::selectCipherSuite()
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4421;
extern "C" void TlsClientHello_selectCipherSuite_m3_979 (TlsClientHello_t3_135 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		_stringLiteral4421 = il2cpp_codegen_string_literal_from_index(4421);
		s_Il2CppMethodIntialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		V_0 = 0;
		V_1 = 0;
		goto IL_0053;
	}

IL_0009:
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		CipherSuiteCollection_t3_89 * L_1 = Context_get_SupportedCiphers_m3_597(L_0, /*hidden argument*/NULL);
		Int16U5BU5D_t1_885* L_2 = (__this->___cipherSuites_11);
		int32_t L_3 = V_1;
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		NullCheck(L_1);
		int32_t L_5 = CipherSuiteCollection_IndexOf_m3_538(L_1, (*(int16_t*)(int16_t*)SZArrayLdElema(L_2, L_4, sizeof(int16_t))), /*hidden argument*/NULL);
		int32_t L_6 = L_5;
		V_0 = L_6;
		if ((((int32_t)L_6) == ((int32_t)(-1))))
		{
			goto IL_004f;
		}
	}
	{
		Context_t3_88 * L_7 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		SecurityParameters_t3_99 * L_8 = Context_get_Negotiating_m3_631(L_7, /*hidden argument*/NULL);
		Context_t3_88 * L_9 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_9);
		CipherSuiteCollection_t3_89 * L_10 = Context_get_SupportedCiphers_m3_597(L_9, /*hidden argument*/NULL);
		int32_t L_11 = V_0;
		NullCheck(L_10);
		CipherSuite_t3_87 * L_12 = CipherSuiteCollection_get_Item_m3_529(L_10, L_11, /*hidden argument*/NULL);
		NullCheck(L_8);
		SecurityParameters_set_Cipher_m3_704(L_8, L_12, /*hidden argument*/NULL);
		goto IL_0061;
	}

IL_004f:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)((int32_t)L_13+(int32_t)1));
	}

IL_0053:
	{
		int32_t L_14 = V_1;
		Int16U5BU5D_t1_885* L_15 = (__this->___cipherSuites_11);
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_15)->max_length)))))))
		{
			goto IL_0009;
		}
	}

IL_0061:
	{
		Context_t3_88 * L_16 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		SecurityParameters_t3_99 * L_17 = Context_get_Negotiating_m3_631(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		CipherSuite_t3_87 * L_18 = SecurityParameters_get_Cipher_m3_703(L_17, /*hidden argument*/NULL);
		if (L_18)
		{
			goto IL_0083;
		}
	}
	{
		TlsException_t3_117 * L_19 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_19, ((int32_t)71), _stringLiteral4421, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_19);
	}

IL_0083:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientHello::selectCompressionMethod()
extern "C" void TlsClientHello_selectCompressionMethod_m3_980 (TlsClientHello_t3_135 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Context_set_CompressionMethod_m3_586(L_0, 0, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context,System.Byte[])
extern "C" void TlsClientKeyExchange__ctor_m3_981 (TlsClientKeyExchange_t3_136 * __this, Context_t3_88 * ___context, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		ByteU5BU5D_t1_72* L_1 = ___buffer;
		HandshakeMessage__ctor_m3_896(__this, L_0, ((int32_t)16), L_1, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange::ProcessAsSsl3()
extern TypeInfo* ServerContext_t3_111_il2cpp_TypeInfo_var;
extern TypeInfo* X509Certificate_t1_572_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* RSAPKCS1KeyExchangeDeformatter_t1_618_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4471;
extern "C" void TlsClientKeyExchange_ProcessAsSsl3_m3_982 (TlsClientKeyExchange_t3_136 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ServerContext_t3_111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1381);
		X509Certificate_t1_572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		RSAPKCS1KeyExchangeDeformatter_t1_618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1406);
		_stringLiteral4471 = il2cpp_codegen_string_literal_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	AsymmetricAlgorithm_t1_575 * V_0 = {0};
	ServerContext_t3_111 * V_1 = {0};
	ByteU5BU5D_t1_72* V_2 = {0};
	RSAPKCS1KeyExchangeDeformatter_t1_618 * V_3 = {0};
	ByteU5BU5D_t1_72* V_4 = {0};
	{
		V_0 = (AsymmetricAlgorithm_t1_575 *)NULL;
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_1 = ((ServerContext_t3_111 *)CastclassClass(L_0, ServerContext_t3_111_il2cpp_TypeInfo_var));
		ServerContext_t3_111 * L_1 = V_1;
		NullCheck(L_1);
		SslServerStream_t3_10 * L_2 = ServerContext_get_SslStream_m3_711(L_1, /*hidden argument*/NULL);
		ServerContext_t3_111 * L_3 = V_1;
		NullCheck(L_3);
		TlsServerSettings_t3_97 * L_4 = Context_get_ServerSettings_m3_587(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		X509CertificateCollection_t3_4 * L_5 = TlsServerSettings_get_Certificates_m3_855(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509Certificate_t3_1 * L_6 = X509CertificateCollection_get_Item_m3_26(L_5, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t1_72* L_7 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_6);
		X509Certificate_t1_572 * L_8 = (X509Certificate_t1_572 *)il2cpp_codegen_object_new (X509Certificate_t1_572_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m1_3979(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		AsymmetricAlgorithm_t1_575 * L_9 = SslServerStream_RaisePrivateKeySelection_m3_775(L_2, L_8, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_9;
		AsymmetricAlgorithm_t1_575 * L_10 = V_0;
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		TlsException_t3_117 * L_11 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_11, ((int32_t)90), _stringLiteral4471, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0049:
	{
		int64_t L_12 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, __this);
		ByteU5BU5D_t1_72* L_13 = TlsStream_ReadBytes_m3_881(__this, (((int32_t)((int32_t)L_12))), /*hidden argument*/NULL);
		V_2 = L_13;
		AsymmetricAlgorithm_t1_575 * L_14 = V_0;
		RSAPKCS1KeyExchangeDeformatter_t1_618 * L_15 = (RSAPKCS1KeyExchangeDeformatter_t1_618 *)il2cpp_codegen_object_new (RSAPKCS1KeyExchangeDeformatter_t1_618_il2cpp_TypeInfo_var);
		RSAPKCS1KeyExchangeDeformatter__ctor_m1_4238(L_15, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		RSAPKCS1KeyExchangeDeformatter_t1_618 * L_16 = V_3;
		ByteU5BU5D_t1_72* L_17 = V_2;
		NullCheck(L_16);
		ByteU5BU5D_t1_72* L_18 = (ByteU5BU5D_t1_72*)VirtFuncInvoker1< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72* >::Invoke(4 /* System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::DecryptKeyExchange(System.Byte[]) */, L_16, L_17);
		V_4 = L_18;
		Context_t3_88 * L_19 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		SecurityParameters_t3_99 * L_20 = Context_get_Negotiating_m3_631(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		CipherSuite_t3_87 * L_21 = SecurityParameters_get_Cipher_m3_703(L_20, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_22 = V_4;
		NullCheck(L_21);
		VirtActionInvoker1< ByteU5BU5D_t1_72* >::Invoke(6 /* System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeMasterSecret(System.Byte[]) */, L_21, L_22);
		Context_t3_88 * L_23 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		SecurityParameters_t3_99 * L_24 = Context_get_Negotiating_m3_631(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		CipherSuite_t3_87 * L_25 = SecurityParameters_get_Cipher_m3_703(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker0::Invoke(7 /* System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeKeys() */, L_25);
		Context_t3_88 * L_26 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		SecurityParameters_t3_99 * L_27 = Context_get_Negotiating_m3_631(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		CipherSuite_t3_87 * L_28 = SecurityParameters_get_Cipher_m3_703(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		CipherSuite_InitializeCipher_m3_508(L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsClientKeyExchange::ProcessAsTls1()
extern TypeInfo* ServerContext_t3_111_il2cpp_TypeInfo_var;
extern TypeInfo* X509Certificate_t1_572_il2cpp_TypeInfo_var;
extern TypeInfo* TlsException_t3_117_il2cpp_TypeInfo_var;
extern TypeInfo* RSAPKCS1KeyExchangeDeformatter_t1_618_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4471;
extern "C" void TlsClientKeyExchange_ProcessAsTls1_m3_983 (TlsClientKeyExchange_t3_136 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ServerContext_t3_111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1381);
		X509Certificate_t1_572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		TlsException_t3_117_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1371);
		RSAPKCS1KeyExchangeDeformatter_t1_618_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1406);
		_stringLiteral4471 = il2cpp_codegen_string_literal_from_index(4471);
		s_Il2CppMethodIntialized = true;
	}
	AsymmetricAlgorithm_t1_575 * V_0 = {0};
	ServerContext_t3_111 * V_1 = {0};
	ByteU5BU5D_t1_72* V_2 = {0};
	RSAPKCS1KeyExchangeDeformatter_t1_618 * V_3 = {0};
	ByteU5BU5D_t1_72* V_4 = {0};
	{
		V_0 = (AsymmetricAlgorithm_t1_575 *)NULL;
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_1 = ((ServerContext_t3_111 *)CastclassClass(L_0, ServerContext_t3_111_il2cpp_TypeInfo_var));
		ServerContext_t3_111 * L_1 = V_1;
		NullCheck(L_1);
		SslServerStream_t3_10 * L_2 = ServerContext_get_SslStream_m3_711(L_1, /*hidden argument*/NULL);
		ServerContext_t3_111 * L_3 = V_1;
		NullCheck(L_3);
		TlsServerSettings_t3_97 * L_4 = Context_get_ServerSettings_m3_587(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		X509CertificateCollection_t3_4 * L_5 = TlsServerSettings_get_Certificates_m3_855(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509Certificate_t3_1 * L_6 = X509CertificateCollection_get_Item_m3_26(L_5, 0, /*hidden argument*/NULL);
		NullCheck(L_6);
		ByteU5BU5D_t1_72* L_7 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_6);
		X509Certificate_t1_572 * L_8 = (X509Certificate_t1_572 *)il2cpp_codegen_object_new (X509Certificate_t1_572_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m1_3979(L_8, L_7, /*hidden argument*/NULL);
		NullCheck(L_2);
		AsymmetricAlgorithm_t1_575 * L_9 = SslServerStream_RaisePrivateKeySelection_m3_775(L_2, L_8, (String_t*)NULL, /*hidden argument*/NULL);
		V_0 = L_9;
		AsymmetricAlgorithm_t1_575 * L_10 = V_0;
		if (L_10)
		{
			goto IL_0049;
		}
	}
	{
		TlsException_t3_117 * L_11 = (TlsException_t3_117 *)il2cpp_codegen_object_new (TlsException_t3_117_il2cpp_TypeInfo_var);
		TlsException__ctor_m3_850(L_11, ((int32_t)90), _stringLiteral4471, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_11);
	}

IL_0049:
	{
		int16_t L_12 = TlsStream_ReadInt16_m3_879(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_13 = TlsStream_ReadBytes_m3_881(__this, L_12, /*hidden argument*/NULL);
		V_2 = L_13;
		AsymmetricAlgorithm_t1_575 * L_14 = V_0;
		RSAPKCS1KeyExchangeDeformatter_t1_618 * L_15 = (RSAPKCS1KeyExchangeDeformatter_t1_618 *)il2cpp_codegen_object_new (RSAPKCS1KeyExchangeDeformatter_t1_618_il2cpp_TypeInfo_var);
		RSAPKCS1KeyExchangeDeformatter__ctor_m1_4238(L_15, L_14, /*hidden argument*/NULL);
		V_3 = L_15;
		RSAPKCS1KeyExchangeDeformatter_t1_618 * L_16 = V_3;
		ByteU5BU5D_t1_72* L_17 = V_2;
		NullCheck(L_16);
		ByteU5BU5D_t1_72* L_18 = (ByteU5BU5D_t1_72*)VirtFuncInvoker1< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72* >::Invoke(4 /* System.Byte[] System.Security.Cryptography.RSAPKCS1KeyExchangeDeformatter::DecryptKeyExchange(System.Byte[]) */, L_16, L_17);
		V_4 = L_18;
		Context_t3_88 * L_19 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_19);
		SecurityParameters_t3_99 * L_20 = Context_get_Negotiating_m3_631(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		CipherSuite_t3_87 * L_21 = SecurityParameters_get_Cipher_m3_703(L_20, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_22 = V_4;
		NullCheck(L_21);
		VirtActionInvoker1< ByteU5BU5D_t1_72* >::Invoke(6 /* System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeMasterSecret(System.Byte[]) */, L_21, L_22);
		Context_t3_88 * L_23 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		SecurityParameters_t3_99 * L_24 = Context_get_Negotiating_m3_631(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		CipherSuite_t3_87 * L_25 = SecurityParameters_get_Cipher_m3_703(L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		VirtActionInvoker0::Invoke(7 /* System.Void Mono.Security.Protocol.Tls.CipherSuite::ComputeKeys() */, L_25);
		Context_t3_88 * L_26 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_26);
		SecurityParameters_t3_99 * L_27 = Context_get_Negotiating_m3_631(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		CipherSuite_t3_87 * L_28 = SecurityParameters_get_Cipher_m3_703(L_27, /*hidden argument*/NULL);
		NullCheck(L_28);
		CipherSuite_InitializeCipher_m3_508(L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificate::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsServerCertificate__ctor_m3_984 (TlsServerCertificate_t3_137 * __this, Context_t3_88 * ___context, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		HandshakeMessage__ctor_m3_894(__this, L_0, ((int32_t)11), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificate::ProcessAsSsl3()
extern "C" void TlsServerCertificate_ProcessAsSsl3_m3_985 (TlsServerCertificate_t3_137 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(29 /* System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificate::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificate::ProcessAsTls1()
extern TypeInfo* TlsStream_t3_100_il2cpp_TypeInfo_var;
extern TypeInfo* IDisposable_t1_888_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t1_746_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificate_ProcessAsTls1_m3_986 (TlsServerCertificate_t3_137 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsStream_t3_100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1352);
		IDisposable_t1_888_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(142);
		Convert_t1_746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		s_Il2CppMethodIntialized = true;
	}
	TlsStream_t3_100 * V_0 = {0};
	X509Certificate_t3_1 * V_1 = {0};
	X509CertificateEnumerator_t3_24 * V_2 = {0};
	Object_t * V_3 = {0};
	Exception_t1_33 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t1_33 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	int32_t __leave_target = 0;
	NO_UNUSED_WARNING (__leave_target);
	{
		TlsStream_t3_100 * L_0 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_868(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Context_t3_88 * L_1 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		TlsServerSettings_t3_97 * L_2 = Context_get_ServerSettings_m3_587(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		X509CertificateCollection_t3_4 * L_3 = TlsServerSettings_get_Certificates_m3_855(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		X509CertificateEnumerator_t3_24 * L_4 = X509CertificateCollection_GetEnumerator_m3_81(L_3, /*hidden argument*/NULL);
		V_2 = L_4;
	}

IL_001c:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0042;
		}

IL_0021:
		{
			X509CertificateEnumerator_t3_24 * L_5 = V_2;
			NullCheck(L_5);
			X509Certificate_t3_1 * L_6 = X509CertificateEnumerator_get_Current_m3_82(L_5, /*hidden argument*/NULL);
			V_1 = L_6;
			TlsStream_t3_100 * L_7 = V_0;
			X509Certificate_t3_1 * L_8 = V_1;
			NullCheck(L_8);
			ByteU5BU5D_t1_72* L_9 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_8);
			NullCheck(L_9);
			NullCheck(L_7);
			TlsStream_WriteInt24_m3_884(L_7, (((int32_t)((int32_t)(((Array_t *)L_9)->max_length)))), /*hidden argument*/NULL);
			TlsStream_t3_100 * L_10 = V_0;
			X509Certificate_t3_1 * L_11 = V_1;
			NullCheck(L_11);
			ByteU5BU5D_t1_72* L_12 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_11);
			NullCheck(L_10);
			TlsStream_Write_m3_886(L_10, L_12, /*hidden argument*/NULL);
		}

IL_0042:
		{
			X509CertificateEnumerator_t3_24 * L_13 = V_2;
			NullCheck(L_13);
			bool L_14 = (bool)VirtFuncInvoker0< bool >::Invoke(7 /* System.Boolean Mono.Security.X509.X509CertificateCollection/X509CertificateEnumerator::MoveNext() */, L_13);
			if (L_14)
			{
				goto IL_0021;
			}
		}

IL_004d:
		{
			IL2CPP_LEAVE(0x64, FINALLY_0052);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t1_33 *)e.ex;
		goto FINALLY_0052;
	}

FINALLY_0052:
	{ // begin finally (depth: 1)
		{
			X509CertificateEnumerator_t3_24 * L_15 = V_2;
			V_3 = ((Object_t *)IsInst(L_15, IDisposable_t1_888_il2cpp_TypeInfo_var));
			Object_t * L_16 = V_3;
			if (L_16)
			{
				goto IL_005d;
			}
		}

IL_005c:
		{
			IL2CPP_END_FINALLY(82)
		}

IL_005d:
		{
			Object_t * L_17 = V_3;
			NullCheck(L_17);
			InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t1_888_il2cpp_TypeInfo_var, L_17);
			IL2CPP_END_FINALLY(82)
		}
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(82)
	{
		IL2CPP_JUMP_TBL(0x64, IL_0064)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t1_33 *)
	}

IL_0064:
	{
		TlsStream_t3_100 * L_18 = V_0;
		NullCheck(L_18);
		int64_t L_19 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_18);
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1_746_il2cpp_TypeInfo_var);
		int32_t L_20 = Convert_ToInt32_m1_5156(NULL /*static, unused*/, L_19, /*hidden argument*/NULL);
		TlsStream_WriteInt24_m3_884(__this, L_20, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_21 = V_0;
		NullCheck(L_21);
		ByteU5BU5D_t1_72* L_22 = TlsStream_ToArray_m3_888(L_21, /*hidden argument*/NULL);
		TlsStream_Write_m3_886(__this, L_22, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_23 = V_0;
		NullCheck(L_23);
		VirtActionInvoker0::Invoke(13 /* System.Void System.IO.Stream::Close() */, L_23);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsServerCertificateRequest__ctor_m3_987 (TlsServerCertificateRequest_t3_138 * __this, Context_t3_88 * ___context, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		HandshakeMessage__ctor_m3_894(__this, L_0, ((int32_t)13), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest::ProcessAsSsl3()
extern "C" void TlsServerCertificateRequest_ProcessAsSsl3_m3_988 (TlsServerCertificateRequest_t3_138 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(29 /* System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerCertificateRequest::ProcessAsTls1()
extern TypeInfo* ServerContext_t3_111_il2cpp_TypeInfo_var;
extern TypeInfo* Convert_t1_746_il2cpp_TypeInfo_var;
extern TypeInfo* TlsStream_t3_100_il2cpp_TypeInfo_var;
extern TypeInfo* X501_t3_21_il2cpp_TypeInfo_var;
extern "C" void TlsServerCertificateRequest_ProcessAsTls1_m3_989 (TlsServerCertificateRequest_t3_138 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ServerContext_t3_111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1381);
		Convert_t1_746_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(7);
		TlsStream_t3_100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1352);
		X501_t3_21_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1191);
		s_Il2CppMethodIntialized = true;
	}
	ServerContext_t3_111 * V_0 = {0};
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TlsStream_t3_100 * V_3 = {0};
	String_t* V_4 = {0};
	StringU5BU5D_t1_206* V_5 = {0};
	int32_t V_6 = 0;
	ByteU5BU5D_t1_72* V_7 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_0 = ((ServerContext_t3_111 *)CastclassClass(L_0, ServerContext_t3_111_il2cpp_TypeInfo_var));
		ServerContext_t3_111 * L_1 = V_0;
		NullCheck(L_1);
		TlsServerSettings_t3_97 * L_2 = Context_get_ServerSettings_m3_587(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ClientCertificateTypeU5BU5D_t3_118* L_3 = TlsServerSettings_get_CertificateTypes_m3_863(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		V_1 = (((int32_t)((int32_t)(((Array_t *)L_3)->max_length))));
		int32_t L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(Convert_t1_746_il2cpp_TypeInfo_var);
		uint8_t L_5 = Convert_ToByte_m1_5074(NULL /*static, unused*/, L_4, /*hidden argument*/NULL);
		VirtActionInvoker1< uint8_t >::Invoke(24 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, __this, L_5);
		V_2 = 0;
		goto IL_0045;
	}

IL_002d:
	{
		ServerContext_t3_111 * L_6 = V_0;
		NullCheck(L_6);
		TlsServerSettings_t3_97 * L_7 = Context_get_ServerSettings_m3_587(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		ClientCertificateTypeU5BU5D_t3_118* L_8 = TlsServerSettings_get_CertificateTypes_m3_863(L_7, /*hidden argument*/NULL);
		int32_t L_9 = V_2;
		NullCheck(L_8);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_8, L_9);
		int32_t L_10 = L_9;
		VirtActionInvoker1< uint8_t >::Invoke(24 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, __this, (((int32_t)((uint8_t)(*(int32_t*)(int32_t*)SZArrayLdElema(L_8, L_10, sizeof(int32_t)))))));
		int32_t L_11 = V_2;
		V_2 = ((int32_t)((int32_t)L_11+(int32_t)1));
	}

IL_0045:
	{
		int32_t L_12 = V_2;
		int32_t L_13 = V_1;
		if ((((int32_t)L_12) < ((int32_t)L_13)))
		{
			goto IL_002d;
		}
	}
	{
		ServerContext_t3_111 * L_14 = V_0;
		NullCheck(L_14);
		TlsServerSettings_t3_97 * L_15 = Context_get_ServerSettings_m3_587(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		StringU5BU5D_t1_206* L_16 = TlsServerSettings_get_DistinguisedNames_m3_865(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		if ((((int32_t)(((int32_t)((int32_t)(((Array_t *)L_16)->max_length))))) <= ((int32_t)0)))
		{
			goto IL_00d1;
		}
	}
	{
		TlsStream_t3_100 * L_17 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_868(L_17, /*hidden argument*/NULL);
		V_3 = L_17;
		ServerContext_t3_111 * L_18 = V_0;
		NullCheck(L_18);
		TlsServerSettings_t3_97 * L_19 = Context_get_ServerSettings_m3_587(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		StringU5BU5D_t1_206* L_20 = TlsServerSettings_get_DistinguisedNames_m3_865(L_19, /*hidden argument*/NULL);
		V_5 = L_20;
		V_6 = 0;
		goto IL_00a8;
	}

IL_007a:
	{
		StringU5BU5D_t1_206* L_21 = V_5;
		int32_t L_22 = V_6;
		NullCheck(L_21);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_21, L_22);
		int32_t L_23 = L_22;
		V_4 = (*(String_t**)(String_t**)SZArrayLdElema(L_21, L_23, sizeof(String_t*)));
		String_t* L_24 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(X501_t3_21_il2cpp_TypeInfo_var);
		ASN1_t3_5 * L_25 = X501_FromString_m3_42(NULL /*static, unused*/, L_24, /*hidden argument*/NULL);
		NullCheck(L_25);
		ByteU5BU5D_t1_72* L_26 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(4 /* System.Byte[] Mono.Security.ASN1::GetBytes() */, L_25);
		V_7 = L_26;
		TlsStream_t3_100 * L_27 = V_3;
		ByteU5BU5D_t1_72* L_28 = V_7;
		NullCheck(L_28);
		NullCheck(L_27);
		TlsStream_Write_m3_883(L_27, (((int16_t)((int16_t)(((int32_t)((int32_t)(((Array_t *)L_28)->max_length))))))), /*hidden argument*/NULL);
		TlsStream_t3_100 * L_29 = V_3;
		ByteU5BU5D_t1_72* L_30 = V_7;
		NullCheck(L_29);
		TlsStream_Write_m3_886(L_29, L_30, /*hidden argument*/NULL);
		int32_t L_31 = V_6;
		V_6 = ((int32_t)((int32_t)L_31+(int32_t)1));
	}

IL_00a8:
	{
		int32_t L_32 = V_6;
		StringU5BU5D_t1_206* L_33 = V_5;
		NullCheck(L_33);
		if ((((int32_t)L_32) < ((int32_t)(((int32_t)((int32_t)(((Array_t *)L_33)->max_length)))))))
		{
			goto IL_007a;
		}
	}
	{
		TlsStream_t3_100 * L_34 = V_3;
		NullCheck(L_34);
		int64_t L_35 = (int64_t)VirtFuncInvoker0< int64_t >::Invoke(9 /* System.Int64 Mono.Security.Protocol.Tls.TlsStream::get_Length() */, L_34);
		TlsStream_Write_m3_883(__this, (((int16_t)((int16_t)L_35))), /*hidden argument*/NULL);
		TlsStream_t3_100 * L_36 = V_3;
		NullCheck(L_36);
		ByteU5BU5D_t1_72* L_37 = TlsStream_ToArray_m3_888(L_36, /*hidden argument*/NULL);
		TlsStream_Write_m3_886(__this, L_37, /*hidden argument*/NULL);
		goto IL_00d8;
	}

IL_00d1:
	{
		TlsStream_Write_m3_883(__this, 0, /*hidden argument*/NULL);
	}

IL_00d8:
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsServerFinished__ctor_m3_990 (TlsServerFinished_t3_139 * __this, Context_t3_88 * ___context, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		HandshakeMessage__ctor_m3_894(__this, L_0, ((int32_t)20), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::.cctor()
extern TypeInfo* ByteU5BU5D_t1_72_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerFinished_t3_139_il2cpp_TypeInfo_var;
extern FieldInfo* U3CPrivateImplementationDetailsU3E_t3_153____U24U24fieldU2D23_15_FieldInfo_var;
extern "C" void TlsServerFinished__cctor_m3_991 (Object_t * __this /* static, unused */, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ByteU5BU5D_t1_72_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(42);
		TlsServerFinished_t3_139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1395);
		U3CPrivateImplementationDetailsU3E_t3_153____U24U24fieldU2D23_15_FieldInfo_var = il2cpp_codegen_field_info_from_index(1302, 15);
		s_Il2CppMethodIntialized = true;
	}
	{
		ByteU5BU5D_t1_72* L_0 = ((ByteU5BU5D_t1_72*)SZArrayNew(ByteU5BU5D_t1_72_il2cpp_TypeInfo_var, 4));
		RuntimeHelpers_InitializeArray_m1_1028(NULL /*static, unused*/, (Array_t *)(Array_t *)L_0, LoadFieldToken(U3CPrivateImplementationDetailsU3E_t3_153____U24U24fieldU2D23_15_FieldInfo_var), /*hidden argument*/NULL);
		((TlsServerFinished_t3_139_StaticFields*)TlsServerFinished_t3_139_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9 = L_0;
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::ProcessAsSsl3()
extern TypeInfo* SslHandshakeHash_t3_114_il2cpp_TypeInfo_var;
extern TypeInfo* TlsServerFinished_t3_139_il2cpp_TypeInfo_var;
extern TypeInfo* CipherSuite_t3_87_il2cpp_TypeInfo_var;
extern "C" void TlsServerFinished_ProcessAsSsl3_m3_992 (TlsServerFinished_t3_139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		SslHandshakeHash_t3_114_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1401);
		TlsServerFinished_t3_139_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1395);
		CipherSuite_t3_87_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1350);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t1_597 * V_0 = {0};
	ByteU5BU5D_t1_72* V_1 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		ByteU5BU5D_t1_72* L_1 = Context_get_MasterSecret_m3_612(L_0, /*hidden argument*/NULL);
		SslHandshakeHash_t3_114 * L_2 = (SslHandshakeHash_t3_114 *)il2cpp_codegen_object_new (SslHandshakeHash_t3_114_il2cpp_TypeInfo_var);
		SslHandshakeHash__ctor_m3_757(L_2, L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		Context_t3_88 * L_3 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		TlsStream_t3_100 * L_4 = Context_get_HandshakeMessages_m3_599(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		ByteU5BU5D_t1_72* L_5 = TlsStream_ToArray_m3_888(L_4, /*hidden argument*/NULL);
		V_1 = L_5;
		HashAlgorithm_t1_597 * L_6 = V_0;
		ByteU5BU5D_t1_72* L_7 = V_1;
		ByteU5BU5D_t1_72* L_8 = V_1;
		NullCheck(L_8);
		ByteU5BU5D_t1_72* L_9 = V_1;
		NullCheck(L_6);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_6, L_7, 0, (((int32_t)((int32_t)(((Array_t *)L_8)->max_length)))), L_9, 0);
		HashAlgorithm_t1_597 * L_10 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(TlsServerFinished_t3_139_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_11 = ((TlsServerFinished_t3_139_StaticFields*)TlsServerFinished_t3_139_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		ByteU5BU5D_t1_72* L_12 = ((TlsServerFinished_t3_139_StaticFields*)TlsServerFinished_t3_139_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_13 = ((TlsServerFinished_t3_139_StaticFields*)TlsServerFinished_t3_139_il2cpp_TypeInfo_var->static_fields)->___Ssl3Marker_9;
		NullCheck(L_10);
		VirtFuncInvoker5< int32_t, ByteU5BU5D_t1_72*, int32_t, int32_t, ByteU5BU5D_t1_72*, int32_t >::Invoke(6 /* System.Int32 System.Security.Cryptography.HashAlgorithm::TransformBlock(System.Byte[],System.Int32,System.Int32,System.Byte[],System.Int32) */, L_10, L_11, 0, (((int32_t)((int32_t)(((Array_t *)L_12)->max_length)))), L_13, 0);
		HashAlgorithm_t1_597 * L_14 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(CipherSuite_t3_87_il2cpp_TypeInfo_var);
		ByteU5BU5D_t1_72* L_15 = ((CipherSuite_t3_87_StaticFields*)CipherSuite_t3_87_il2cpp_TypeInfo_var->static_fields)->___EmptyArray_0;
		NullCheck(L_14);
		VirtFuncInvoker3< ByteU5BU5D_t1_72*, ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(7 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::TransformFinalBlock(System.Byte[],System.Int32,System.Int32) */, L_14, L_15, 0, 0);
		HashAlgorithm_t1_597 * L_16 = V_0;
		NullCheck(L_16);
		ByteU5BU5D_t1_72* L_17 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(9 /* System.Byte[] System.Security.Cryptography.HashAlgorithm::get_Hash() */, L_16);
		TlsStream_Write_m3_886(__this, L_17, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerFinished::ProcessAsTls1()
extern TypeInfo* MD5SHA1_t3_82_il2cpp_TypeInfo_var;
extern Il2CppCodeGenString* _stringLiteral4465;
extern "C" void TlsServerFinished_ProcessAsTls1_m3_993 (TlsServerFinished_t3_139 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MD5SHA1_t3_82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1382);
		_stringLiteral4465 = il2cpp_codegen_string_literal_from_index(4465);
		s_Il2CppMethodIntialized = true;
	}
	HashAlgorithm_t1_597 * V_0 = {0};
	ByteU5BU5D_t1_72* V_1 = {0};
	ByteU5BU5D_t1_72* V_2 = {0};
	{
		MD5SHA1_t3_82 * L_0 = (MD5SHA1_t3_82 *)il2cpp_codegen_object_new (MD5SHA1_t3_82_il2cpp_TypeInfo_var);
		MD5SHA1__ctor_m3_470(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		Context_t3_88 * L_1 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		TlsStream_t3_100 * L_2 = Context_get_HandshakeMessages_m3_599(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		ByteU5BU5D_t1_72* L_3 = TlsStream_ToArray_m3_888(L_2, /*hidden argument*/NULL);
		V_1 = L_3;
		HashAlgorithm_t1_597 * L_4 = V_0;
		ByteU5BU5D_t1_72* L_5 = V_1;
		ByteU5BU5D_t1_72* L_6 = V_1;
		NullCheck(L_6);
		NullCheck(L_4);
		ByteU5BU5D_t1_72* L_7 = HashAlgorithm_ComputeHash_m1_4129(L_4, L_5, 0, (((int32_t)((int32_t)(((Array_t *)L_6)->max_length)))), /*hidden argument*/NULL);
		V_2 = L_7;
		Context_t3_88 * L_8 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		SecurityParameters_t3_99 * L_9 = Context_get_Current_m3_630(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		CipherSuite_t3_87 * L_10 = SecurityParameters_get_Cipher_m3_703(L_9, /*hidden argument*/NULL);
		Context_t3_88 * L_11 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		ByteU5BU5D_t1_72* L_12 = Context_get_MasterSecret_m3_612(L_11, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_13 = V_2;
		NullCheck(L_10);
		ByteU5BU5D_t1_72* L_14 = CipherSuite_PRF_m3_512(L_10, L_12, _stringLiteral4465, L_13, ((int32_t)12), /*hidden argument*/NULL);
		TlsStream_Write_m3_886(__this, L_14, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsServerHello__ctor_m3_994 (TlsServerHello_t3_140 * __this, Context_t3_88 * ___context, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		HandshakeMessage__ctor_m3_894(__this, L_0, 2, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::Update()
extern TypeInfo* TlsStream_t3_100_il2cpp_TypeInfo_var;
extern "C" void TlsServerHello_Update_m3_995 (TlsServerHello_t3_140 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		TlsStream_t3_100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1352);
		s_Il2CppMethodIntialized = true;
	}
	TlsStream_t3_100 * V_0 = {0};
	{
		HandshakeMessage_Update_m3_901(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_0 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_868(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		TlsStream_t3_100 * L_1 = V_0;
		int32_t L_2 = (__this->___unixTime_9);
		NullCheck(L_1);
		TlsStream_Write_m3_885(L_1, L_2, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_3 = V_0;
		ByteU5BU5D_t1_72* L_4 = (__this->___random_10);
		NullCheck(L_3);
		TlsStream_Write_m3_886(L_3, L_4, /*hidden argument*/NULL);
		Context_t3_88 * L_5 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_6 = V_0;
		NullCheck(L_6);
		ByteU5BU5D_t1_72* L_7 = TlsStream_ToArray_m3_888(L_6, /*hidden argument*/NULL);
		NullCheck(L_5);
		Context_set_ServerRandom_m3_607(L_5, L_7, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_8 = V_0;
		NullCheck(L_8);
		TlsStream_Reset_m3_887(L_8, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_9 = V_0;
		Context_t3_88 * L_10 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_t1_72* L_11 = Context_get_ClientRandom_m3_604(L_10, /*hidden argument*/NULL);
		NullCheck(L_9);
		TlsStream_Write_m3_886(L_9, L_11, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_12 = V_0;
		Context_t3_88 * L_13 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		ByteU5BU5D_t1_72* L_14 = Context_get_ServerRandom_m3_606(L_13, /*hidden argument*/NULL);
		NullCheck(L_12);
		TlsStream_Write_m3_886(L_12, L_14, /*hidden argument*/NULL);
		Context_t3_88 * L_15 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_16 = V_0;
		NullCheck(L_16);
		ByteU5BU5D_t1_72* L_17 = TlsStream_ToArray_m3_888(L_16, /*hidden argument*/NULL);
		NullCheck(L_15);
		Context_set_RandomCS_m3_609(L_15, L_17, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_18 = V_0;
		NullCheck(L_18);
		TlsStream_Reset_m3_887(L_18, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_19 = V_0;
		Context_t3_88 * L_20 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_20);
		ByteU5BU5D_t1_72* L_21 = Context_get_ServerRandom_m3_606(L_20, /*hidden argument*/NULL);
		NullCheck(L_19);
		TlsStream_Write_m3_886(L_19, L_21, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_22 = V_0;
		Context_t3_88 * L_23 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_23);
		ByteU5BU5D_t1_72* L_24 = Context_get_ClientRandom_m3_604(L_23, /*hidden argument*/NULL);
		NullCheck(L_22);
		TlsStream_Write_m3_886(L_22, L_24, /*hidden argument*/NULL);
		Context_t3_88 * L_25 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_26 = V_0;
		NullCheck(L_26);
		ByteU5BU5D_t1_72* L_27 = TlsStream_ToArray_m3_888(L_26, /*hidden argument*/NULL);
		NullCheck(L_25);
		Context_set_RandomSC_m3_611(L_25, L_27, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_28 = V_0;
		NullCheck(L_28);
		TlsStream_Reset_m3_887(L_28, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::ProcessAsSsl3()
extern "C" void TlsServerHello_ProcessAsSsl3_m3_996 (TlsServerHello_t3_140 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(29 /* System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHello::ProcessAsTls1()
extern "C" void TlsServerHello_ProcessAsTls1_m3_997 (TlsServerHello_t3_140 * __this, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		int16_t L_1 = Context_get_Protocol_m3_582(L_0, /*hidden argument*/NULL);
		TlsStream_Write_m3_883(__this, L_1, /*hidden argument*/NULL);
		Context_t3_88 * L_2 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		int32_t L_3 = Context_GetUnixTime_m3_624(L_2, /*hidden argument*/NULL);
		__this->___unixTime_9 = L_3;
		int32_t L_4 = (__this->___unixTime_9);
		TlsStream_Write_m3_885(__this, L_4, /*hidden argument*/NULL);
		Context_t3_88 * L_5 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		ByteU5BU5D_t1_72* L_6 = Context_GetSecureRandomBytes_m3_625(L_5, ((int32_t)28), /*hidden argument*/NULL);
		__this->___random_10 = L_6;
		ByteU5BU5D_t1_72* L_7 = (__this->___random_10);
		TlsStream_Write_m3_886(__this, L_7, /*hidden argument*/NULL);
		Context_t3_88 * L_8 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		ByteU5BU5D_t1_72* L_9 = Context_get_SessionId_m3_583(L_8, /*hidden argument*/NULL);
		if (L_9)
		{
			goto IL_0069;
		}
	}
	{
		VirtActionInvoker1< uint8_t >::Invoke(24 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, __this, 0);
		goto IL_008e;
	}

IL_0069:
	{
		Context_t3_88 * L_10 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		ByteU5BU5D_t1_72* L_11 = Context_get_SessionId_m3_583(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< uint8_t >::Invoke(24 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, __this, (((int32_t)((uint8_t)(((int32_t)((int32_t)(((Array_t *)L_11)->max_length))))))));
		Context_t3_88 * L_12 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_13 = Context_get_SessionId_m3_583(L_12, /*hidden argument*/NULL);
		TlsStream_Write_m3_886(__this, L_13, /*hidden argument*/NULL);
	}

IL_008e:
	{
		Context_t3_88 * L_14 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_14);
		SecurityParameters_t3_99 * L_15 = Context_get_Negotiating_m3_631(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		CipherSuite_t3_87 * L_16 = SecurityParameters_get_Cipher_m3_703(L_15, /*hidden argument*/NULL);
		NullCheck(L_16);
		int16_t L_17 = CipherSuite_get_Code_m3_496(L_16, /*hidden argument*/NULL);
		TlsStream_Write_m3_883(__this, L_17, /*hidden argument*/NULL);
		Context_t3_88 * L_18 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		int32_t L_19 = Context_get_CompressionMethod_m3_585(L_18, /*hidden argument*/NULL);
		VirtActionInvoker1< uint8_t >::Invoke(24 /* System.Void System.IO.Stream::WriteByte(System.Byte) */, __this, (((int32_t)((uint8_t)L_19))));
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHelloDone::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsServerHelloDone__ctor_m3_998 (TlsServerHelloDone_t3_141 * __this, Context_t3_88 * ___context, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		HandshakeMessage__ctor_m3_894(__this, L_0, ((int32_t)14), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHelloDone::ProcessAsSsl3()
extern "C" void TlsServerHelloDone_ProcessAsSsl3_m3_999 (TlsServerHelloDone_t3_141 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerHelloDone::ProcessAsTls1()
extern "C" void TlsServerHelloDone_ProcessAsTls1_m3_1000 (TlsServerHelloDone_t3_141 * __this, const MethodInfo* method)
{
	{
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::.ctor(Mono.Security.Protocol.Tls.Context)
extern "C" void TlsServerKeyExchange__ctor_m3_1001 (TlsServerKeyExchange_t3_142 * __this, Context_t3_88 * ___context, const MethodInfo* method)
{
	{
		Context_t3_88 * L_0 = ___context;
		HandshakeMessage__ctor_m3_894(__this, L_0, ((int32_t)12), /*hidden argument*/NULL);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::Update()
extern TypeInfo* NotSupportedException_t1_793_il2cpp_TypeInfo_var;
extern "C" void TlsServerKeyExchange_Update_m3_1002 (TlsServerKeyExchange_t3_142 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		NotSupportedException_t1_793_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(6);
		s_Il2CppMethodIntialized = true;
	}
	{
		NotSupportedException_t1_793 * L_0 = (NotSupportedException_t1_793 *)il2cpp_codegen_object_new (NotSupportedException_t1_793_il2cpp_TypeInfo_var);
		NotSupportedException__ctor_m1_5657(L_0, /*hidden argument*/NULL);
		il2cpp_codegen_raise_exception((Il2CppCodeGenException*)L_0);
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::ProcessAsSsl3()
extern "C" void TlsServerKeyExchange_ProcessAsSsl3_m3_1003 (TlsServerKeyExchange_t3_142 * __this, const MethodInfo* method)
{
	{
		VirtActionInvoker0::Invoke(29 /* System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::ProcessAsTls1() */, __this);
		return;
	}
}
// System.Void Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::ProcessAsTls1()
extern TypeInfo* ServerContext_t3_111_il2cpp_TypeInfo_var;
extern TypeInfo* X509Certificate_t1_572_il2cpp_TypeInfo_var;
extern TypeInfo* RSA_t1_119_il2cpp_TypeInfo_var;
extern "C" void TlsServerKeyExchange_ProcessAsTls1_m3_1004 (TlsServerKeyExchange_t3_142 * __this, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ServerContext_t3_111_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1381);
		X509Certificate_t1_572_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(500);
		RSA_t1_119_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(520);
		s_Il2CppMethodIntialized = true;
	}
	ServerContext_t3_111 * V_0 = {0};
	RSA_t1_119 * V_1 = {0};
	RSAParameters_t1_622  V_2 = {0};
	ByteU5BU5D_t1_72* V_3 = {0};
	{
		Context_t3_88 * L_0 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		V_0 = ((ServerContext_t3_111 *)CastclassClass(L_0, ServerContext_t3_111_il2cpp_TypeInfo_var));
		ServerContext_t3_111 * L_1 = V_0;
		NullCheck(L_1);
		SslServerStream_t3_10 * L_2 = ServerContext_get_SslStream_m3_711(L_1, /*hidden argument*/NULL);
		NullCheck(L_2);
		PrivateKeySelectionCallback_t3_12 * L_3 = SslServerStream_get_PrivateKeyCertSelectionDelegate_m3_25(L_2, /*hidden argument*/NULL);
		ServerContext_t3_111 * L_4 = V_0;
		NullCheck(L_4);
		TlsServerSettings_t3_97 * L_5 = Context_get_ServerSettings_m3_587(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		X509CertificateCollection_t3_4 * L_6 = TlsServerSettings_get_Certificates_m3_855(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		X509Certificate_t3_1 * L_7 = X509CertificateCollection_get_Item_m3_26(L_6, 0, /*hidden argument*/NULL);
		NullCheck(L_7);
		ByteU5BU5D_t1_72* L_8 = (ByteU5BU5D_t1_72*)VirtFuncInvoker0< ByteU5BU5D_t1_72* >::Invoke(12 /* System.Byte[] Mono.Security.X509.X509Certificate::get_RawData() */, L_7);
		X509Certificate_t1_572 * L_9 = (X509Certificate_t1_572 *)il2cpp_codegen_object_new (X509Certificate_t1_572_il2cpp_TypeInfo_var);
		X509Certificate__ctor_m1_3979(L_9, L_8, /*hidden argument*/NULL);
		NullCheck(L_3);
		AsymmetricAlgorithm_t1_575 * L_10 = PrivateKeySelectionCallback_Invoke_m3_1019(L_3, L_9, (String_t*)NULL, /*hidden argument*/NULL);
		V_1 = ((RSA_t1_119 *)CastclassClass(L_10, RSA_t1_119_il2cpp_TypeInfo_var));
		RSA_t1_119 * L_11 = V_1;
		NullCheck(L_11);
		RSAParameters_t1_622  L_12 = (RSAParameters_t1_622 )VirtFuncInvoker1< RSAParameters_t1_622 , bool >::Invoke(12 /* System.Security.Cryptography.RSAParameters System.Security.Cryptography.RSA::ExportParameters(System.Boolean) */, L_11, 0);
		V_2 = L_12;
		ByteU5BU5D_t1_72* L_13 = ((&V_2)->___Modulus_6);
		NullCheck(L_13);
		TlsStream_WriteInt24_m3_884(__this, (((int32_t)((int32_t)(((Array_t *)L_13)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_14 = ((&V_2)->___Modulus_6);
		ByteU5BU5D_t1_72* L_15 = ((&V_2)->___Modulus_6);
		NullCheck(L_15);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_14, 0, (((int32_t)((int32_t)(((Array_t *)L_15)->max_length)))));
		ByteU5BU5D_t1_72* L_16 = ((&V_2)->___Exponent_7);
		NullCheck(L_16);
		TlsStream_WriteInt24_m3_884(__this, (((int32_t)((int32_t)(((Array_t *)L_16)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_17 = ((&V_2)->___Exponent_7);
		ByteU5BU5D_t1_72* L_18 = ((&V_2)->___Exponent_7);
		NullCheck(L_18);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, __this, L_17, 0, (((int32_t)((int32_t)(((Array_t *)L_18)->max_length)))));
		RSA_t1_119 * L_19 = V_1;
		ByteU5BU5D_t1_72* L_20 = TlsStream_ToArray_m3_888(__this, /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_21 = TlsServerKeyExchange_createSignature_m3_1005(__this, L_19, L_20, /*hidden argument*/NULL);
		V_3 = L_21;
		ByteU5BU5D_t1_72* L_22 = V_3;
		NullCheck(L_22);
		TlsStream_WriteInt24_m3_884(__this, (((int32_t)((int32_t)(((Array_t *)L_22)->max_length)))), /*hidden argument*/NULL);
		ByteU5BU5D_t1_72* L_23 = V_3;
		TlsStream_Write_m3_886(__this, L_23, /*hidden argument*/NULL);
		return;
	}
}
// System.Byte[] Mono.Security.Protocol.Tls.Handshake.Server.TlsServerKeyExchange::createSignature(System.Security.Cryptography.RSA,System.Byte[])
extern TypeInfo* MD5SHA1_t3_82_il2cpp_TypeInfo_var;
extern TypeInfo* TlsStream_t3_100_il2cpp_TypeInfo_var;
extern "C" ByteU5BU5D_t1_72* TlsServerKeyExchange_createSignature_m3_1005 (TlsServerKeyExchange_t3_142 * __this, RSA_t1_119 * ___rsa, ByteU5BU5D_t1_72* ___buffer, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		MD5SHA1_t3_82_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1382);
		TlsStream_t3_100_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1352);
		s_Il2CppMethodIntialized = true;
	}
	MD5SHA1_t3_82 * V_0 = {0};
	TlsStream_t3_100 * V_1 = {0};
	{
		MD5SHA1_t3_82 * L_0 = (MD5SHA1_t3_82 *)il2cpp_codegen_object_new (MD5SHA1_t3_82_il2cpp_TypeInfo_var);
		MD5SHA1__ctor_m3_470(L_0, /*hidden argument*/NULL);
		V_0 = L_0;
		TlsStream_t3_100 * L_1 = (TlsStream_t3_100 *)il2cpp_codegen_object_new (TlsStream_t3_100_il2cpp_TypeInfo_var);
		TlsStream__ctor_m3_868(L_1, /*hidden argument*/NULL);
		V_1 = L_1;
		TlsStream_t3_100 * L_2 = V_1;
		Context_t3_88 * L_3 = HandshakeMessage_get_Context_m3_897(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		ByteU5BU5D_t1_72* L_4 = Context_get_RandomCS_m3_608(L_3, /*hidden argument*/NULL);
		NullCheck(L_2);
		TlsStream_Write_m3_886(L_2, L_4, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_5 = V_1;
		ByteU5BU5D_t1_72* L_6 = ___buffer;
		ByteU5BU5D_t1_72* L_7 = ___buffer;
		NullCheck(L_7);
		NullCheck(L_5);
		VirtActionInvoker3< ByteU5BU5D_t1_72*, int32_t, int32_t >::Invoke(23 /* System.Void Mono.Security.Protocol.Tls.TlsStream::Write(System.Byte[],System.Int32,System.Int32) */, L_5, L_6, 0, (((int32_t)((int32_t)(((Array_t *)L_7)->max_length)))));
		MD5SHA1_t3_82 * L_8 = V_0;
		TlsStream_t3_100 * L_9 = V_1;
		NullCheck(L_9);
		ByteU5BU5D_t1_72* L_10 = TlsStream_ToArray_m3_888(L_9, /*hidden argument*/NULL);
		NullCheck(L_8);
		HashAlgorithm_ComputeHash_m1_4128(L_8, L_10, /*hidden argument*/NULL);
		TlsStream_t3_100 * L_11 = V_1;
		NullCheck(L_11);
		TlsStream_Reset_m3_887(L_11, /*hidden argument*/NULL);
		MD5SHA1_t3_82 * L_12 = V_0;
		RSA_t1_119 * L_13 = ___rsa;
		NullCheck(L_12);
		ByteU5BU5D_t1_72* L_14 = MD5SHA1_CreateSignature_m3_474(L_12, L_13, /*hidden argument*/NULL);
		return L_14;
	}
}
// System.Void Mono.Math.Prime.PrimalityTest::.ctor(System.Object,System.IntPtr)
extern "C" void PrimalityTest__ctor_m3_1006 (PrimalityTest_t3_143 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Math.Prime.PrimalityTest::Invoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor)
extern "C" bool PrimalityTest_Invoke_m3_1007 (PrimalityTest_t3_143 * __this, BigInteger_t3_29 * ___bi, int32_t ___confidence, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrimalityTest_Invoke_m3_1007((PrimalityTest_t3_143 *)__this->___prev_9,___bi, ___confidence, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, BigInteger_t3_29 * ___bi, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, BigInteger_t3_29 * ___bi, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, int32_t ___confidence, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___bi, ___confidence,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_PrimalityTest_t3_143(Il2CppObject* delegate, BigInteger_t3_29 * ___bi, int32_t ___confidence)
{
	// Marshaling of parameter '___bi' to native representation
	BigInteger_t3_29 * ____bi_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Math.BigInteger'."));
}
// System.IAsyncResult Mono.Math.Prime.PrimalityTest::BeginInvoke(Mono.Math.BigInteger,Mono.Math.Prime.ConfidenceFactor,System.AsyncCallback,System.Object)
extern TypeInfo* ConfidenceFactor_t3_31_il2cpp_TypeInfo_var;
extern "C" Object_t * PrimalityTest_BeginInvoke_m3_1008 (PrimalityTest_t3_143 * __this, BigInteger_t3_29 * ___bi, int32_t ___confidence, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	static bool s_Il2CppMethodIntialized;
	if (!s_Il2CppMethodIntialized)
	{
		ConfidenceFactor_t3_31_il2cpp_TypeInfo_var = il2cpp_codegen_type_info_from_index(1407);
		s_Il2CppMethodIntialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___bi;
	__d_args[1] = Box(ConfidenceFactor_t3_31_il2cpp_TypeInfo_var, &___confidence);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Math.Prime.PrimalityTest::EndInvoke(System.IAsyncResult)
extern "C" bool PrimalityTest_EndInvoke_m3_1009 (PrimalityTest_t3_143 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback__ctor_m3_15 (CertificateValidationCallback_t3_13 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[])
extern "C" bool CertificateValidationCallback_Invoke_m3_1010 (CertificateValidationCallback_t3_13 * __this, X509Certificate_t1_572 * ___certificate, Int32U5BU5D_t1_161* ___certificateErrors, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback_Invoke_m3_1010((CertificateValidationCallback_t3_13 *)__this->___prev_9,___certificate, ___certificateErrors, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t1_572 * ___certificate, Int32U5BU5D_t1_161* ___certificateErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, X509Certificate_t1_572 * ___certificate, Int32U5BU5D_t1_161* ___certificateErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef bool (*FunctionPointerType) (Object_t * __this, Int32U5BU5D_t1_161* ___certificateErrors, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___certificateErrors,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" bool pinvoke_delegate_wrapper_CertificateValidationCallback_t3_13(Il2CppObject* delegate, X509Certificate_t1_572 * ___certificate, Int32U5BU5D_t1_161* ___certificateErrors)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t1_572 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.Int32[],System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback_BeginInvoke_m3_1011 (CertificateValidationCallback_t3_13 * __this, X509Certificate_t1_572 * ___certificate, Int32U5BU5D_t1_161* ___certificateErrors, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___certificateErrors;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Boolean Mono.Security.Protocol.Tls.CertificateValidationCallback::EndInvoke(System.IAsyncResult)
extern "C" bool CertificateValidationCallback_EndInvoke_m3_1012 (CertificateValidationCallback_t3_13 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return *(bool*)UnBox ((Il2CppCodeGenObject*)__result);
}
// System.Void Mono.Security.Protocol.Tls.CertificateValidationCallback2::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateValidationCallback2__ctor_m3_33 (CertificateValidationCallback2_t3_19 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::Invoke(Mono.Security.X509.X509CertificateCollection)
extern "C" ValidationResult_t3_3 * CertificateValidationCallback2_Invoke_m3_1013 (CertificateValidationCallback2_t3_19 * __this, X509CertificateCollection_t3_4 * ___collection, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateValidationCallback2_Invoke_m3_1013((CertificateValidationCallback2_t3_19 *)__this->___prev_9,___collection, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef ValidationResult_t3_3 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t3_4 * ___collection, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef ValidationResult_t3_3 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t3_4 * ___collection, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef ValidationResult_t3_3 * (*FunctionPointerType) (Object_t * __this, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___collection,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" ValidationResult_t3_3 * pinvoke_delegate_wrapper_CertificateValidationCallback2_t3_19(Il2CppObject* delegate, X509CertificateCollection_t3_4 * ___collection)
{
	// Marshaling of parameter '___collection' to native representation
	X509CertificateCollection_t3_4 * ____collection_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'Mono.Security.X509.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::BeginInvoke(Mono.Security.X509.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateValidationCallback2_BeginInvoke_m3_1014 (CertificateValidationCallback2_t3_19 * __this, X509CertificateCollection_t3_4 * ___collection, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___collection;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// Mono.Security.Protocol.Tls.ValidationResult Mono.Security.Protocol.Tls.CertificateValidationCallback2::EndInvoke(System.IAsyncResult)
extern "C" ValidationResult_t3_3 * CertificateValidationCallback2_EndInvoke_m3_1015 (CertificateValidationCallback2_t3_19 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (ValidationResult_t3_3 *)__result;
}
// System.Void Mono.Security.Protocol.Tls.CertificateSelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void CertificateSelectionCallback__ctor_m3_17 (CertificateSelectionCallback_t3_14 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection)
extern "C" X509Certificate_t1_572 * CertificateSelectionCallback_Invoke_m3_1016 (CertificateSelectionCallback_t3_14 * __this, X509CertificateCollection_t2_305 * ___clientCertificates, X509Certificate_t1_572 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___serverRequestedCertificates, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		CertificateSelectionCallback_Invoke_m3_1016((CertificateSelectionCallback_t3_14 *)__this->___prev_9,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef X509Certificate_t1_572 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509CertificateCollection_t2_305 * ___clientCertificates, X509Certificate_t1_572 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___serverRequestedCertificates, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef X509Certificate_t1_572 * (*FunctionPointerType) (Object_t * __this, X509CertificateCollection_t2_305 * ___clientCertificates, X509Certificate_t1_572 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___serverRequestedCertificates, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef X509Certificate_t1_572 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t1_572 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___serverRequestedCertificates, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___clientCertificates, ___serverCertificate, ___targetHost, ___serverRequestedCertificates,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" X509Certificate_t1_572 * pinvoke_delegate_wrapper_CertificateSelectionCallback_t3_14(Il2CppObject* delegate, X509CertificateCollection_t2_305 * ___clientCertificates, X509Certificate_t1_572 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___serverRequestedCertificates)
{
	// Marshaling of parameter '___clientCertificates' to native representation
	X509CertificateCollection_t2_305 * ____clientCertificates_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509CertificateCollection'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.CertificateSelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.Security.Cryptography.X509Certificates.X509CertificateCollection,System.AsyncCallback,System.Object)
extern "C" Object_t * CertificateSelectionCallback_BeginInvoke_m3_1017 (CertificateSelectionCallback_t3_14 * __this, X509CertificateCollection_t2_305 * ___clientCertificates, X509Certificate_t1_572 * ___serverCertificate, String_t* ___targetHost, X509CertificateCollection_t2_305 * ___serverRequestedCertificates, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[5] = {0};
	__d_args[0] = ___clientCertificates;
	__d_args[1] = ___serverCertificate;
	__d_args[2] = ___targetHost;
	__d_args[3] = ___serverRequestedCertificates;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.X509Certificates.X509Certificate Mono.Security.Protocol.Tls.CertificateSelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" X509Certificate_t1_572 * CertificateSelectionCallback_EndInvoke_m3_1018 (CertificateSelectionCallback_t3_14 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (X509Certificate_t1_572 *)__result;
}
// System.Void Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::.ctor(System.Object,System.IntPtr)
extern "C" void PrivateKeySelectionCallback__ctor_m3_13 (PrivateKeySelectionCallback_t3_12 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::Invoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String)
extern "C" AsymmetricAlgorithm_t1_575 * PrivateKeySelectionCallback_Invoke_m3_1019 (PrivateKeySelectionCallback_t3_12 * __this, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost, const MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		PrivateKeySelectionCallback_Invoke_m3_1019((PrivateKeySelectionCallback_t3_12 *)__this->___prev_9,___certificate, ___targetHost, method);
	}
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((MethodInfo*)(__this->___method_3.___m_value_0));
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t1_575 * (*FunctionPointerType) (Object_t *, Object_t * __this, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef AsymmetricAlgorithm_t1_575 * (*FunctionPointerType) (Object_t * __this, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef AsymmetricAlgorithm_t1_575 * (*FunctionPointerType) (Object_t * __this, String_t* ___targetHost, const MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___certificate, ___targetHost,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
extern "C" AsymmetricAlgorithm_t1_575 * pinvoke_delegate_wrapper_PrivateKeySelectionCallback_t3_12(Il2CppObject* delegate, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost)
{
	// Marshaling of parameter '___certificate' to native representation
	X509Certificate_t1_572 * ____certificate_marshaled = { 0 };
	il2cpp_codegen_raise_exception((Il2CppCodeGenException*)il2cpp_codegen_get_not_supported_exception("Cannot marshal type 'System.Security.Cryptography.X509Certificates.X509Certificate'."));
}
// System.IAsyncResult Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::BeginInvoke(System.Security.Cryptography.X509Certificates.X509Certificate,System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * PrivateKeySelectionCallback_BeginInvoke_m3_1020 (PrivateKeySelectionCallback_t3_12 * __this, X509Certificate_t1_572 * ___certificate, String_t* ___targetHost, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method)
{
	void *__d_args[3] = {0};
	__d_args[0] = ___certificate;
	__d_args[1] = ___targetHost;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Security.Cryptography.AsymmetricAlgorithm Mono.Security.Protocol.Tls.PrivateKeySelectionCallback::EndInvoke(System.IAsyncResult)
extern "C" AsymmetricAlgorithm_t1_575 * PrivateKeySelectionCallback_EndInvoke_m3_1021 (PrivateKeySelectionCallback_t3_12 * __this, Object_t * ___result, const MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (AsymmetricAlgorithm_t1_575 *)__result;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
