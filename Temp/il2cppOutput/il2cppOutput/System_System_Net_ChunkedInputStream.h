#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.ChunkStream
struct ChunkStream_t2_509;
// System.Net.HttpListenerContext
struct HttpListenerContext_t2_515;

#include "System_System_Net_RequestStream.h"

// System.Net.ChunkedInputStream
struct  ChunkedInputStream_t2_513  : public RequestStream_t2_514
{
	// System.Boolean System.Net.ChunkedInputStream::disposed
	bool ___disposed_7;
	// System.Net.ChunkStream System.Net.ChunkedInputStream::decoder
	ChunkStream_t2_509 * ___decoder_8;
	// System.Net.HttpListenerContext System.Net.ChunkedInputStream::context
	HttpListenerContext_t2_515 * ___context_9;
	// System.Boolean System.Net.ChunkedInputStream::no_more_data
	bool ___no_more_data_10;
};
