﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Mono.Security.Protocol.Tls.CipherSuite
struct CipherSuite_t3_87;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "mscorlib_System_Object.h"

// Mono.Security.Protocol.Tls.SecurityParameters
struct  SecurityParameters_t3_99  : public Object_t
{
	// Mono.Security.Protocol.Tls.CipherSuite Mono.Security.Protocol.Tls.SecurityParameters::cipher
	CipherSuite_t3_87 * ___cipher_0;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::clientWriteMAC
	ByteU5BU5D_t1_72* ___clientWriteMAC_1;
	// System.Byte[] Mono.Security.Protocol.Tls.SecurityParameters::serverWriteMAC
	ByteU5BU5D_t1_72* ___serverWriteMAC_2;
};
