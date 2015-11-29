﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Mail.Attachment
struct Attachment_t2_287;
// System.String
struct String_t;
// System.Net.Mime.ContentType
struct ContentType_t2_290;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.Mime.ContentDisposition
struct ContentDisposition_t2_288;
// System.Text.Encoding
struct Encoding_t1_227;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Mail.Attachment::.ctor(System.String)
extern "C" void Attachment__ctor_m2_2230 (Attachment_t2_287 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::.ctor(System.String,System.String)
extern "C" void Attachment__ctor_m2_2231 (Attachment_t2_287 * __this, String_t* ___fileName, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::.ctor(System.String,System.Net.Mime.ContentType)
extern "C" void Attachment__ctor_m2_2232 (Attachment_t2_287 * __this, String_t* ___fileName, ContentType_t2_290 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::.ctor(System.IO.Stream,System.Net.Mime.ContentType)
extern "C" void Attachment__ctor_m2_2233 (Attachment_t2_287 * __this, Stream_t1_226 * ___contentStream, ContentType_t2_290 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::.ctor(System.IO.Stream,System.String)
extern "C" void Attachment__ctor_m2_2234 (Attachment_t2_287 * __this, Stream_t1_226 * ___contentStream, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::.ctor(System.IO.Stream,System.String,System.String)
extern "C" void Attachment__ctor_m2_2235 (Attachment_t2_287 * __this, Stream_t1_226 * ___contentStream, String_t* ___name, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.ContentDisposition System.Net.Mail.Attachment::get_ContentDisposition()
extern "C" ContentDisposition_t2_288 * Attachment_get_ContentDisposition_m2_2236 (Attachment_t2_287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.Attachment::get_Name()
extern "C" String_t* Attachment_get_Name_m2_2237 (Attachment_t2_287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::set_Name(System.String)
extern "C" void Attachment_set_Name_m2_2238 (Attachment_t2_287 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.Attachment::get_NameEncoding()
extern "C" Encoding_t1_227 * Attachment_get_NameEncoding_m2_2239 (Attachment_t2_287 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::set_NameEncoding(System.Text.Encoding)
extern "C" void Attachment_set_NameEncoding_m2_2240 (Attachment_t2_287 * __this, Encoding_t1_227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.Attachment System.Net.Mail.Attachment::CreateAttachmentFromString(System.String,System.Net.Mime.ContentType)
extern "C" Attachment_t2_287 * Attachment_CreateAttachmentFromString_m2_2241 (Object_t * __this /* static, unused */, String_t* ___content, ContentType_t2_290 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.Attachment System.Net.Mail.Attachment::CreateAttachmentFromString(System.String,System.String)
extern "C" Attachment_t2_287 * Attachment_CreateAttachmentFromString_m2_2242 (Object_t * __this /* static, unused */, String_t* ___content, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.Attachment System.Net.Mail.Attachment::CreateAttachmentFromString(System.String,System.String,System.Text.Encoding,System.String)
extern "C" Attachment_t2_287 * Attachment_CreateAttachmentFromString_m2_2243 (Object_t * __this /* static, unused */, String_t* ___content, String_t* ___name, Encoding_t1_227 * ___contentEncoding, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.Attachment::InitName(System.String)
extern "C" void Attachment_InitName_m2_2244 (Attachment_t2_287 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
