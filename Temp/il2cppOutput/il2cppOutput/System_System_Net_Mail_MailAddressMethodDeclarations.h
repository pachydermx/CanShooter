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

// System.Net.Mail.MailAddress
struct MailAddress_t2_294;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Object
struct Object_t;
// System.FormatException
struct FormatException_t1_771;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Mail.MailAddress::.ctor(System.String)
extern "C" void MailAddress__ctor_m2_2287 (MailAddress_t2_294 * __this, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddress::.ctor(System.String,System.String)
extern "C" void MailAddress__ctor_m2_2288 (MailAddress_t2_294 * __this, String_t* ___address, String_t* ___displayName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.MailAddress::.ctor(System.String,System.String,System.Text.Encoding)
extern "C" void MailAddress__ctor_m2_2289 (MailAddress_t2_294 * __this, String_t* ___address, String_t* ___displayName, Encoding_t1_227 * ___displayNameEncoding, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::get_Address()
extern "C" String_t* MailAddress_get_Address_m2_2290 (MailAddress_t2_294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::get_DisplayName()
extern "C" String_t* MailAddress_get_DisplayName_m2_2291 (MailAddress_t2_294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::get_Host()
extern "C" String_t* MailAddress_get_Host_m2_2292 (MailAddress_t2_294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::get_User()
extern "C" String_t* MailAddress_get_User_m2_2293 (MailAddress_t2_294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.MailAddress::Equals(System.Object)
extern "C" bool MailAddress_Equals_m2_2294 (MailAddress_t2_294 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mail.MailAddress::Equals(System.Net.Mail.MailAddress)
extern "C" bool MailAddress_Equals_m2_2295 (MailAddress_t2_294 * __this, MailAddress_t2_294 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mail.MailAddress::GetHashCode()
extern "C" int32_t MailAddress_GetHashCode_m2_2296 (MailAddress_t2_294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mail.MailAddress::ToString()
extern "C" String_t* MailAddress_ToString_m2_2297 (MailAddress_t2_294 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.FormatException System.Net.Mail.MailAddress::CreateFormatException()
extern "C" FormatException_t1_771 * MailAddress_CreateFormatException_m2_2298 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
