#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String[]
struct StringU5BU5D_t1_206;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Net.CookieCollection
struct CookieCollection_t2_519;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2_510;
// System.String
struct String_t;
// System.IO.Stream
struct Stream_t1_226;
// System.Version
struct Version_t1_330;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2_27;
// System.Uri
struct Uri_t2_284;
// System.Net.HttpListenerContext
struct HttpListenerContext_t2_515;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Char[]
struct CharU5BU5D_t1_16;
// System.Collections.Generic.Dictionary`2<System.String,System.Int32>
struct Dictionary_2_t1_78;

#include "mscorlib_System_Object.h"
#include "mscorlib_System_Guid.h"

// System.Net.HttpListenerRequest
struct  HttpListenerRequest_t2_576  : public Object_t
{
	// System.String[] System.Net.HttpListenerRequest::accept_types
	StringU5BU5D_t1_206* ___accept_types_0;
	// System.Text.Encoding System.Net.HttpListenerRequest::content_encoding
	Encoding_t1_227 * ___content_encoding_1;
	// System.Int64 System.Net.HttpListenerRequest::content_length
	int64_t ___content_length_2;
	// System.Boolean System.Net.HttpListenerRequest::cl_set
	bool ___cl_set_3;
	// System.Net.CookieCollection System.Net.HttpListenerRequest::cookies
	CookieCollection_t2_519 * ___cookies_4;
	// System.Net.WebHeaderCollection System.Net.HttpListenerRequest::headers
	WebHeaderCollection_t2_510 * ___headers_5;
	// System.String System.Net.HttpListenerRequest::method
	String_t* ___method_6;
	// System.IO.Stream System.Net.HttpListenerRequest::input_stream
	Stream_t1_226 * ___input_stream_7;
	// System.Version System.Net.HttpListenerRequest::version
	Version_t1_330 * ___version_8;
	// System.Collections.Specialized.NameValueCollection System.Net.HttpListenerRequest::query_string
	NameValueCollection_t2_27 * ___query_string_9;
	// System.String System.Net.HttpListenerRequest::raw_url
	String_t* ___raw_url_10;
	// System.Guid System.Net.HttpListenerRequest::identifier
	Guid_t1_772  ___identifier_11;
	// System.Uri System.Net.HttpListenerRequest::url
	Uri_t2_284 * ___url_12;
	// System.Uri System.Net.HttpListenerRequest::referrer
	Uri_t2_284 * ___referrer_13;
	// System.String[] System.Net.HttpListenerRequest::user_languages
	StringU5BU5D_t1_206* ___user_languages_14;
	// System.Net.HttpListenerContext System.Net.HttpListenerRequest::context
	HttpListenerContext_t2_515 * ___context_15;
	// System.Boolean System.Net.HttpListenerRequest::is_chunked
	bool ___is_chunked_16;
};
struct HttpListenerRequest_t2_576_StaticFields{
	// System.Byte[] System.Net.HttpListenerRequest::_100continue
	ByteU5BU5D_t1_72* ____100continue_17;
	// System.String[] System.Net.HttpListenerRequest::no_body_methods
	StringU5BU5D_t1_206* ___no_body_methods_18;
	// System.Char[] System.Net.HttpListenerRequest::separators
	CharU5BU5D_t1_16* ___separators_19;
	// System.Collections.Generic.Dictionary`2<System.String,System.Int32> System.Net.HttpListenerRequest::<>f__switch$map7
	Dictionary_2_t1_78 * ___U3CU3Ef__switchU24map7_20;
};
