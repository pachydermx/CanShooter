#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.Mail.AttachmentBase
struct AttachmentBase_t2_283;
// System.IO.Stream
struct Stream_t1_226;
// System.Net.Mime.ContentType
struct ContentType_t2_290;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mime_TransferEncoding.h"

// System.Void System.Net.Mail.AttachmentBase::.ctor(System.IO.Stream)
extern "C" void AttachmentBase__ctor_m2_2248 (AttachmentBase_t2_283 * __this, Stream_t1_226 * ___contentStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.IO.Stream,System.Net.Mime.ContentType)
extern "C" void AttachmentBase__ctor_m2_2249 (AttachmentBase_t2_283 * __this, Stream_t1_226 * ___contentStream, ContentType_t2_290 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.IO.Stream,System.String)
extern "C" void AttachmentBase__ctor_m2_2250 (AttachmentBase_t2_283 * __this, Stream_t1_226 * ___contentStream, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.String)
extern "C" void AttachmentBase__ctor_m2_2251 (AttachmentBase_t2_283 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.String,System.Net.Mime.ContentType)
extern "C" void AttachmentBase__ctor_m2_2252 (AttachmentBase_t2_283 * __this, String_t* ___fileName, ContentType_t2_290 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::.ctor(System.String,System.String)
extern "C" void AttachmentBase__ctor_m2_2253 (AttachmentBase_t2_283 * __this, String_t* ___fileName, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.AttachmentBase::get_ContentId()
extern "C" String_t* AttachmentBase_get_ContentId_m2_2254 (AttachmentBase_t2_283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::set_ContentId(System.String)
extern "C" void AttachmentBase_set_ContentId_m2_2255 (AttachmentBase_t2_283 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.Mail.AttachmentBase::get_ContentStream()
extern "C" Stream_t1_226 * AttachmentBase_get_ContentStream_m2_2256 (AttachmentBase_t2_283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.ContentType System.Net.Mail.AttachmentBase::get_ContentType()
extern "C" ContentType_t2_290 * AttachmentBase_get_ContentType_m2_2257 (AttachmentBase_t2_283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::set_ContentType(System.Net.Mime.ContentType)
extern "C" void AttachmentBase_set_ContentType_m2_2258 (AttachmentBase_t2_283 * __this, ContentType_t2_290 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.TransferEncoding System.Net.Mail.AttachmentBase::get_TransferEncoding()
extern "C" int32_t AttachmentBase_get_TransferEncoding_m2_2259 (AttachmentBase_t2_283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::set_TransferEncoding(System.Net.Mime.TransferEncoding)
extern "C" void AttachmentBase_set_TransferEncoding_m2_2260 (AttachmentBase_t2_283 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::Dispose()
extern "C" void AttachmentBase_Dispose_m2_2261 (AttachmentBase_t2_283 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AttachmentBase::Dispose(System.Boolean)
extern "C" void AttachmentBase_Dispose_m2_2262 (AttachmentBase_t2_283 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
