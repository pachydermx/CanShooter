#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Uri
struct Uri_t2_284;
// System.IO.FileStream
struct FileStream_t1_246;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2_510;

#include "System_System_Net_WebResponse.h"

// System.Net.FileWebResponse
struct  FileWebResponse_t2_550  : public WebResponse_t2_548
{
	// System.Uri System.Net.FileWebResponse::responseUri
	Uri_t2_284 * ___responseUri_1;
	// System.IO.FileStream System.Net.FileWebResponse::fileStream
	FileStream_t1_246 * ___fileStream_2;
	// System.Int64 System.Net.FileWebResponse::contentLength
	int64_t ___contentLength_3;
	// System.Net.WebHeaderCollection System.Net.FileWebResponse::webHeaders
	WebHeaderCollection_t2_510 * ___webHeaders_4;
	// System.Boolean System.Net.FileWebResponse::disposed
	bool ___disposed_5;
};
