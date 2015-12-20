﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t2_284;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2_510;
// System.Net.ICredentials
struct ICredentials_t2_551;
// System.String
struct String_t;
// System.Net.IWebProxy
struct IWebProxy_t2_552;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.FileWebResponse
struct FileWebResponse_t2_550;
// System.Threading.AutoResetEvent
struct AutoResetEvent_t1_706;

#include "System_System_Net_WebRequest.h"
#include "mscorlib_System_IO_FileAccess.h"

// System.Net.FileWebRequest
struct  FileWebRequest_t2_545  : public WebRequest_t2_549
{
	// System.Uri System.Net.FileWebRequest::uri
	Uri_t2_284 * ___uri_6;
	// System.Net.WebHeaderCollection System.Net.FileWebRequest::webHeaders
	WebHeaderCollection_t2_510 * ___webHeaders_7;
	// System.Net.ICredentials System.Net.FileWebRequest::credentials
	Object_t * ___credentials_8;
	// System.String System.Net.FileWebRequest::connectionGroup
	String_t* ___connectionGroup_9;
	// System.Int64 System.Net.FileWebRequest::contentLength
	int64_t ___contentLength_10;
	// System.IO.FileAccess System.Net.FileWebRequest::fileAccess
	int32_t ___fileAccess_11;
	// System.String System.Net.FileWebRequest::method
	String_t* ___method_12;
	// System.Net.IWebProxy System.Net.FileWebRequest::proxy
	Object_t * ___proxy_13;
	// System.Boolean System.Net.FileWebRequest::preAuthenticate
	bool ___preAuthenticate_14;
	// System.Int32 System.Net.FileWebRequest::timeout
	int32_t ___timeout_15;
	// System.IO.Stream System.Net.FileWebRequest::requestStream
	Stream_t1_226 * ___requestStream_16;
	// System.Net.FileWebResponse System.Net.FileWebRequest::webResponse
	FileWebResponse_t2_550 * ___webResponse_17;
	// System.Threading.AutoResetEvent System.Net.FileWebRequest::requestEndEvent
	AutoResetEvent_t1_706 * ___requestEndEvent_18;
	// System.Boolean System.Net.FileWebRequest::requesting
	bool ___requesting_19;
	// System.Boolean System.Net.FileWebRequest::asyncResponding
	bool ___asyncResponding_20;
};
