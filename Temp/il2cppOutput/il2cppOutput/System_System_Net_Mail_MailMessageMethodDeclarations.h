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

// System.Net.Mail.MailMessage
struct MailMessage_t2_296;
// System.Net.Mail.MailAddress
struct MailAddress_t2_294;
// System.String
struct String_t;
// System.Net.Mail.AlternateViewCollection
struct AlternateViewCollection_t2_286;
// System.Net.Mail.AttachmentCollection
struct AttachmentCollection_t2_291;
// System.Net.Mail.MailAddressCollection
struct MailAddressCollection_t2_295;
// System.Net.Mime.ContentType
struct ContentType_t2_290;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2_27;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mime_TransferEncoding.h"
#include "System_System_Net_Mail_DeliveryNotificationOptions.h"
#include "System_System_Net_Mail_MailPriority.h"

// System.Void System.Net.Mail.MailMessage::.ctor()
extern "C" void MailMessage__ctor_m2_2304 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::.ctor(System.Net.Mail.MailAddress,System.Net.Mail.MailAddress)
extern "C" void MailMessage__ctor_m2_2305 (MailMessage_t2_296 * __this, MailAddress_t2_294 * ___from, MailAddress_t2_294 * ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::.ctor(System.String,System.String)
extern "C" void MailMessage__ctor_m2_2306 (MailMessage_t2_296 * __this, String_t* ___from, String_t* ___to, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::.ctor(System.String,System.String,System.String,System.String)
extern "C" void MailMessage__ctor_m2_2307 (MailMessage_t2_296 * __this, String_t* ___from, String_t* ___to, String_t* ___subject, String_t* ___body, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AlternateViewCollection System.Net.Mail.MailMessage::get_AlternateViews()
extern "C" AlternateViewCollection_t2_286 * MailMessage_get_AlternateViews_m2_2308 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AttachmentCollection System.Net.Mail.MailMessage::get_Attachments()
extern "C" AttachmentCollection_t2_291 * MailMessage_get_Attachments_m2_2309 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_Bcc()
extern "C" MailAddressCollection_t2_295 * MailMessage_get_Bcc_m2_2310 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailMessage::get_Body()
extern "C" String_t* MailMessage_get_Body_m2_2311 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Body(System.String)
extern "C" void MailMessage_set_Body_m2_2312 (MailMessage_t2_296 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.ContentType System.Net.Mail.MailMessage::get_BodyContentType()
extern "C" ContentType_t2_290 * MailMessage_get_BodyContentType_m2_2313 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.TransferEncoding System.Net.Mail.MailMessage::get_ContentTransferEncoding()
extern "C" int32_t MailMessage_get_ContentTransferEncoding_m2_2314 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::get_BodyEncoding()
extern "C" Encoding_t1_227 * MailMessage_get_BodyEncoding_m2_2315 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_BodyEncoding(System.Text.Encoding)
extern "C" void MailMessage_set_BodyEncoding_m2_2316 (MailMessage_t2_296 * __this, Encoding_t1_227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_CC()
extern "C" MailAddressCollection_t2_295 * MailMessage_get_CC_m2_2317 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.DeliveryNotificationOptions System.Net.Mail.MailMessage::get_DeliveryNotificationOptions()
extern "C" int32_t MailMessage_get_DeliveryNotificationOptions_m2_2318 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_DeliveryNotificationOptions(System.Net.Mail.DeliveryNotificationOptions)
extern "C" void MailMessage_set_DeliveryNotificationOptions_m2_2319 (MailMessage_t2_296 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::get_From()
extern "C" MailAddress_t2_294 * MailMessage_get_From_m2_2320 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_From(System.Net.Mail.MailAddress)
extern "C" void MailMessage_set_From_m2_2321 (MailMessage_t2_296 * __this, MailAddress_t2_294 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameValueCollection System.Net.Mail.MailMessage::get_Headers()
extern "C" NameValueCollection_t2_27 * MailMessage_get_Headers_m2_2322 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.MailMessage::get_IsBodyHtml()
extern "C" bool MailMessage_get_IsBodyHtml_m2_2323 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_IsBodyHtml(System.Boolean)
extern "C" void MailMessage_set_IsBodyHtml_m2_2324 (MailMessage_t2_296 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailPriority System.Net.Mail.MailMessage::get_Priority()
extern "C" int32_t MailMessage_get_Priority_m2_2325 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Priority(System.Net.Mail.MailPriority)
extern "C" void MailMessage_set_Priority_m2_2326 (MailMessage_t2_296 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::get_HeadersEncoding()
extern "C" Encoding_t1_227 * MailMessage_get_HeadersEncoding_m2_2327 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_HeadersEncoding(System.Text.Encoding)
extern "C" void MailMessage_set_HeadersEncoding_m2_2328 (MailMessage_t2_296 * __this, Encoding_t1_227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_ReplyToList()
extern "C" MailAddressCollection_t2_295 * MailMessage_get_ReplyToList_m2_2329 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::get_ReplyTo()
extern "C" MailAddress_t2_294 * MailMessage_get_ReplyTo_m2_2330 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_ReplyTo(System.Net.Mail.MailAddress)
extern "C" void MailMessage_set_ReplyTo_m2_2331 (MailMessage_t2_296 * __this, MailAddress_t2_294 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddress System.Net.Mail.MailMessage::get_Sender()
extern "C" MailAddress_t2_294 * MailMessage_get_Sender_m2_2332 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Sender(System.Net.Mail.MailAddress)
extern "C" void MailMessage_set_Sender_m2_2333 (MailMessage_t2_296 * __this, MailAddress_t2_294 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailMessage::get_Subject()
extern "C" String_t* MailMessage_get_Subject_m2_2334 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_Subject(System.String)
extern "C" void MailMessage_set_Subject_m2_2335 (MailMessage_t2_296 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::get_SubjectEncoding()
extern "C" Encoding_t1_227 * MailMessage_get_SubjectEncoding_m2_2336 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::set_SubjectEncoding(System.Text.Encoding)
extern "C" void MailMessage_set_SubjectEncoding_m2_2337 (MailMessage_t2_296 * __this, Encoding_t1_227 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.MailAddressCollection System.Net.Mail.MailMessage::get_To()
extern "C" MailAddressCollection_t2_295 * MailMessage_get_To_m2_2338 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::Dispose()
extern "C" void MailMessage_Dispose_m2_2339 (MailMessage_t2_296 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailMessage::Dispose(System.Boolean)
extern "C" void MailMessage_Dispose_m2_2340 (MailMessage_t2_296 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mail.MailMessage::GuessEncoding(System.String)
extern "C" Encoding_t1_227 * MailMessage_GuessEncoding_m2_2341 (MailMessage_t2_296 * __this, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
