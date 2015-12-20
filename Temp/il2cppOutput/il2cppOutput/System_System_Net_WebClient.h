#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Net.ICredentials
struct ICredentials_t2_551;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2_510;
// System.Uri
struct Uri_t2_284;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2_27;
// System.Threading.Thread
struct Thread_t1_444;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Net.IWebProxy
struct IWebProxy_t2_552;
// System.Net.DownloadDataCompletedEventHandler
struct DownloadDataCompletedEventHandler_t2_614;
// System.ComponentModel.AsyncCompletedEventHandler
struct AsyncCompletedEventHandler_t2_615;
// System.Net.DownloadProgressChangedEventHandler
struct DownloadProgressChangedEventHandler_t2_616;
// System.Net.DownloadStringCompletedEventHandler
struct DownloadStringCompletedEventHandler_t2_617;
// System.Net.OpenReadCompletedEventHandler
struct OpenReadCompletedEventHandler_t2_618;
// System.Net.OpenWriteCompletedEventHandler
struct OpenWriteCompletedEventHandler_t2_619;
// System.Net.UploadDataCompletedEventHandler
struct UploadDataCompletedEventHandler_t2_620;
// System.Net.UploadFileCompletedEventHandler
struct UploadFileCompletedEventHandler_t2_621;
// System.Net.UploadProgressChangedEventHandler
struct UploadProgressChangedEventHandler_t2_622;
// System.Net.UploadStringCompletedEventHandler
struct UploadStringCompletedEventHandler_t2_623;
// System.Net.UploadValuesCompletedEventHandler
struct UploadValuesCompletedEventHandler_t2_624;

#include "System_System_ComponentModel_Component.h"

// System.Net.WebClient
struct  WebClient_t2_613  : public Component_t2_77
{
	// System.Net.ICredentials System.Net.WebClient::credentials
	Object_t * ___credentials_6;
	// System.Net.WebHeaderCollection System.Net.WebClient::headers
	WebHeaderCollection_t2_510 * ___headers_7;
	// System.Net.WebHeaderCollection System.Net.WebClient::responseHeaders
	WebHeaderCollection_t2_510 * ___responseHeaders_8;
	// System.Uri System.Net.WebClient::baseAddress
	Uri_t2_284 * ___baseAddress_9;
	// System.String System.Net.WebClient::baseString
	String_t* ___baseString_10;
	// System.Collections.Specialized.NameValueCollection System.Net.WebClient::queryString
	NameValueCollection_t2_27 * ___queryString_11;
	// System.Boolean System.Net.WebClient::is_busy
	bool ___is_busy_12;
	// System.Boolean System.Net.WebClient::async
	bool ___async_13;
	// System.Threading.Thread System.Net.WebClient::async_thread
	Thread_t1_444 * ___async_thread_14;
	// System.Text.Encoding System.Net.WebClient::encoding
	Encoding_t1_227 * ___encoding_15;
	// System.Net.IWebProxy System.Net.WebClient::proxy
	Object_t * ___proxy_16;
	// System.Net.DownloadDataCompletedEventHandler System.Net.WebClient::DownloadDataCompleted
	DownloadDataCompletedEventHandler_t2_614 * ___DownloadDataCompleted_17;
	// System.ComponentModel.AsyncCompletedEventHandler System.Net.WebClient::DownloadFileCompleted
	AsyncCompletedEventHandler_t2_615 * ___DownloadFileCompleted_18;
	// System.Net.DownloadProgressChangedEventHandler System.Net.WebClient::DownloadProgressChanged
	DownloadProgressChangedEventHandler_t2_616 * ___DownloadProgressChanged_19;
	// System.Net.DownloadStringCompletedEventHandler System.Net.WebClient::DownloadStringCompleted
	DownloadStringCompletedEventHandler_t2_617 * ___DownloadStringCompleted_20;
	// System.Net.OpenReadCompletedEventHandler System.Net.WebClient::OpenReadCompleted
	OpenReadCompletedEventHandler_t2_618 * ___OpenReadCompleted_21;
	// System.Net.OpenWriteCompletedEventHandler System.Net.WebClient::OpenWriteCompleted
	OpenWriteCompletedEventHandler_t2_619 * ___OpenWriteCompleted_22;
	// System.Net.UploadDataCompletedEventHandler System.Net.WebClient::UploadDataCompleted
	UploadDataCompletedEventHandler_t2_620 * ___UploadDataCompleted_23;
	// System.Net.UploadFileCompletedEventHandler System.Net.WebClient::UploadFileCompleted
	UploadFileCompletedEventHandler_t2_621 * ___UploadFileCompleted_24;
	// System.Net.UploadProgressChangedEventHandler System.Net.WebClient::UploadProgressChanged
	UploadProgressChangedEventHandler_t2_622 * ___UploadProgressChanged_25;
	// System.Net.UploadStringCompletedEventHandler System.Net.WebClient::UploadStringCompleted
	UploadStringCompletedEventHandler_t2_623 * ___UploadStringCompleted_26;
	// System.Net.UploadValuesCompletedEventHandler System.Net.WebClient::UploadValuesCompleted
	UploadValuesCompletedEventHandler_t2_624 * ___UploadValuesCompleted_27;
};
struct WebClient_t2_613_StaticFields{
	// System.String System.Net.WebClient::urlEncodedCType
	String_t* ___urlEncodedCType_4;
	// System.Byte[] System.Net.WebClient::hexBytes
	ByteU5BU5D_t1_72* ___hexBytes_5;
};
