﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.IO.MemoryStream
struct MemoryStream_t1_250;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "mscorlib_System_IO_Stream.h"

// Mono.Security.Protocol.Tls.TlsStream
struct  TlsStream_t3_100  : public Stream_t1_226
{
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canRead
	bool ___canRead_1;
	// System.Boolean Mono.Security.Protocol.Tls.TlsStream::canWrite
	bool ___canWrite_2;
	// System.IO.MemoryStream Mono.Security.Protocol.Tls.TlsStream::buffer
	MemoryStream_t1_250 * ___buffer_3;
	// System.Byte[] Mono.Security.Protocol.Tls.TlsStream::temp
	ByteU5BU5D_t1_72* ___temp_4;
};
