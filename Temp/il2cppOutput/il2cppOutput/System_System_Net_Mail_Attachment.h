#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Net.Mime.ContentDisposition
struct ContentDisposition_t2_288;
// System.Text.Encoding
struct Encoding_t1_227;

#include "System_System_Net_Mail_AttachmentBase.h"

// System.Net.Mail.Attachment
struct  Attachment_t2_287  : public AttachmentBase_t2_283
{
	// System.Net.Mime.ContentDisposition System.Net.Mail.Attachment::contentDisposition
	ContentDisposition_t2_288 * ___contentDisposition_4;
	// System.Text.Encoding System.Net.Mail.Attachment::nameEncoding
	Encoding_t1_227 * ___nameEncoding_5;
};
