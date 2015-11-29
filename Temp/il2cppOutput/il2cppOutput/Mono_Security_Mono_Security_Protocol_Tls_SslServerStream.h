#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.CertificateValidationCallback
struct CertificateValidationCallback_t3_13;
// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback
struct PrivateKeySelectionCallback_t3_12;
// Mono.Security.Protocol.Tls.CertificateValidationCallback2
struct CertificateValidationCallback2_t3_19;

#include "Mono_Security_Mono_Security_Protocol_Tls_SslStreamBase.h"

// Mono.Security.Protocol.Tls.SslServerStream
struct  SslServerStream_t3_10  : public SslStreamBase_t3_0
{
	// Mono.Security.Protocol.Tls.CertificateValidationCallback Mono.Security.Protocol.Tls.SslServerStream::ClientCertValidation
	CertificateValidationCallback_t3_13 * ___ClientCertValidation_16;
	// Mono.Security.Protocol.Tls.PrivateKeySelectionCallback Mono.Security.Protocol.Tls.SslServerStream::PrivateKeySelection
	PrivateKeySelectionCallback_t3_12 * ___PrivateKeySelection_17;
	// Mono.Security.Protocol.Tls.CertificateValidationCallback2 Mono.Security.Protocol.Tls.SslServerStream::ClientCertValidation2
	CertificateValidationCallback2_t3_19 * ___ClientCertValidation2_18;
};
