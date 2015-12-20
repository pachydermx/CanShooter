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

// System.Net.Mime.ContentType
struct ContentType_t2_290;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1_227;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t2_33;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Mime_TransferEncoding.h"

// System.Void System.Net.Mime.ContentType::.ctor()
extern "C" void ContentType__ctor_m2_2470 (ContentType_t2_290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::.ctor(System.String)
extern "C" void ContentType__ctor_m2_2471 (ContentType_t2_290 * __this, String_t* ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::.cctor()
extern "C" void ContentType__cctor_m2_2472 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::Parse(System.String)
extern "C" void ContentType_Parse_m2_2473 (ContentType_t2_290 * __this, String_t* ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mime.ContentType::get_UTF8Unmarked()
extern "C" Encoding_t1_227 * ContentType_get_UTF8Unmarked_m2_2474 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_Boundary()
extern "C" String_t* ContentType_get_Boundary_m2_2475 (ContentType_t2_290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_Boundary(System.String)
extern "C" void ContentType_set_Boundary_m2_2476 (ContentType_t2_290 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_CharSet()
extern "C" String_t* ContentType_get_CharSet_m2_2477 (ContentType_t2_290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_CharSet(System.String)
extern "C" void ContentType_set_CharSet_m2_2478 (ContentType_t2_290 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_MediaType()
extern "C" String_t* ContentType_get_MediaType_m2_2479 (ContentType_t2_290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_MediaType(System.String)
extern "C" void ContentType_set_MediaType_m2_2480 (ContentType_t2_290 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::get_Name()
extern "C" String_t* ContentType_get_Name_m2_2481 (ContentType_t2_290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentType::set_Name(System.String)
extern "C" void ContentType_set_Name_m2_2482 (ContentType_t2_290 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Net.Mime.ContentType::get_Parameters()
extern "C" StringDictionary_t2_33 * ContentType_get_Parameters_m2_2483 (ContentType_t2_290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentType::Equals(System.Object)
extern "C" bool ContentType_Equals_m2_2484 (ContentType_t2_290 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentType::Equals(System.Net.Mime.ContentType)
extern "C" bool ContentType_Equals_m2_2485 (ContentType_t2_290 * __this, ContentType_t2_290 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mime.ContentType::GetHashCode()
extern "C" int32_t ContentType_GetHashCode_m2_2486 (ContentType_t2_290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::ToString()
extern "C" String_t* ContentType_ToString_m2_2487 (ContentType_t2_290 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::WrapIfEspecialsExist(System.String)
extern "C" String_t* ContentType_WrapIfEspecialsExist_m2_2488 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding System.Net.Mime.ContentType::GuessEncoding(System.String)
extern "C" Encoding_t1_227 * ContentType_GuessEncoding_m2_2489 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mime.TransferEncoding System.Net.Mime.ContentType::GuessTransferEncoding(System.Text.Encoding)
extern "C" int32_t ContentType_GuessTransferEncoding_m2_2490 (Object_t * __this /* static, unused */, Encoding_t1_227 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::To2047(System.Byte[])
extern "C" String_t* ContentType_To2047_m2_2491 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___bytes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentType::EncodeSubjectRFC2047(System.String,System.Text.Encoding)
extern "C" String_t* ContentType_EncodeSubjectRFC2047_m2_2492 (Object_t * __this /* static, unused */, String_t* ___s, Encoding_t1_227 * ___enc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
