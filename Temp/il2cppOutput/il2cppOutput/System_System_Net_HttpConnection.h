#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Sockets.Socket
struct Socket_t2_471;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.EndPointListener
struct EndPointListener_t2_541;
// System.IO.MemoryStream
struct MemoryStream_t1_250;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Net.HttpListenerContext
struct HttpListenerContext_t2_515;
// System.Text.StringBuilder
struct StringBuilder_t1_146;
// System.Net.ListenerPrefix
struct ListenerPrefix_t2_570;
// System.Net.RequestStream
struct RequestStream_t2_514;
// System.Net.ResponseStream
struct ResponseStream_t2_571;
// System.Security.Cryptography.AsymmetricAlgorithm
struct AsymmetricAlgorithm_t1_575;

#include "mscorlib_System_Object.h"
#include "System_System_Net_HttpConnection_InputState.h"
#include "System_System_Net_HttpConnection_LineState.h"

// System.Net.HttpConnection
struct  HttpConnection_t2_569  : public Object_t
{
	// System.Net.Sockets.Socket System.Net.HttpConnection::sock
	Socket_t2_471 * ___sock_1;
	// System.IO.Stream System.Net.HttpConnection::stream
	Stream_t1_226 * ___stream_2;
	// System.Net.EndPointListener System.Net.HttpConnection::epl
	EndPointListener_t2_541 * ___epl_3;
	// System.IO.MemoryStream System.Net.HttpConnection::ms
	MemoryStream_t1_250 * ___ms_4;
	// System.Byte[] System.Net.HttpConnection::buffer
	ByteU5BU5D_t1_72* ___buffer_5;
	// System.Net.HttpListenerContext System.Net.HttpConnection::context
	HttpListenerContext_t2_515 * ___context_6;
	// System.Text.StringBuilder System.Net.HttpConnection::current_line
	StringBuilder_t1_146 * ___current_line_7;
	// System.Net.ListenerPrefix System.Net.HttpConnection::prefix
	ListenerPrefix_t2_570 * ___prefix_8;
	// System.Net.RequestStream System.Net.HttpConnection::i_stream
	RequestStream_t2_514 * ___i_stream_9;
	// System.Net.ResponseStream System.Net.HttpConnection::o_stream
	ResponseStream_t2_571 * ___o_stream_10;
	// System.Boolean System.Net.HttpConnection::chunked
	bool ___chunked_11;
	// System.Int32 System.Net.HttpConnection::chunked_uses
	int32_t ___chunked_uses_12;
	// System.Boolean System.Net.HttpConnection::context_bound
	bool ___context_bound_13;
	// System.Boolean System.Net.HttpConnection::secure
	bool ___secure_14;
	// System.Security.Cryptography.AsymmetricAlgorithm System.Net.HttpConnection::key
	AsymmetricAlgorithm_t1_575 * ___key_15;
	// System.Net.HttpConnection/InputState System.Net.HttpConnection::input_state
	int32_t ___input_state_16;
	// System.Net.HttpConnection/LineState System.Net.HttpConnection::line_state
	int32_t ___line_state_17;
	// System.Int32 System.Net.HttpConnection::position
	int32_t ___position_18;
};
