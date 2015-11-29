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

// System.Net.Mime.ContentDisposition
struct ContentDisposition_t2_288;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t2_33;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.Mime.ContentDisposition::.ctor()
extern "C" void ContentDisposition__ctor_m2_2448 (ContentDisposition_t2_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::.ctor(System.String)
extern "C" void ContentDisposition__ctor_m2_2449 (ContentDisposition_t2_288 * __this, String_t* ___disposition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::Parse(System.String)
extern "C" void ContentDisposition_Parse_m2_2450 (ContentDisposition_t2_288 * __this, String_t* ___pair, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Mime.ContentDisposition::get_CreationDate()
extern "C" DateTime_t1_128  ContentDisposition_get_CreationDate_m2_2451 (ContentDisposition_t2_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_CreationDate(System.DateTime)
extern "C" void ContentDisposition_set_CreationDate_m2_2452 (ContentDisposition_t2_288 * __this, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentDisposition::get_DispositionType()
extern "C" String_t* ContentDisposition_get_DispositionType_m2_2453 (ContentDisposition_t2_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_DispositionType(System.String)
extern "C" void ContentDisposition_set_DispositionType_m2_2454 (ContentDisposition_t2_288 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentDisposition::get_FileName()
extern "C" String_t* ContentDisposition_get_FileName_m2_2455 (ContentDisposition_t2_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_FileName(System.String)
extern "C" void ContentDisposition_set_FileName_m2_2456 (ContentDisposition_t2_288 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentDisposition::get_Inline()
extern "C" bool ContentDisposition_get_Inline_m2_2457 (ContentDisposition_t2_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_Inline(System.Boolean)
extern "C" void ContentDisposition_set_Inline_m2_2458 (ContentDisposition_t2_288 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Mime.ContentDisposition::get_ModificationDate()
extern "C" DateTime_t1_128  ContentDisposition_get_ModificationDate_m2_2459 (ContentDisposition_t2_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_ModificationDate(System.DateTime)
extern "C" void ContentDisposition_set_ModificationDate_m2_2460 (ContentDisposition_t2_288 * __this, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Net.Mime.ContentDisposition::get_Parameters()
extern "C" StringDictionary_t2_33 * ContentDisposition_get_Parameters_m2_2461 (ContentDisposition_t2_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Mime.ContentDisposition::get_ReadDate()
extern "C" DateTime_t1_128  ContentDisposition_get_ReadDate_m2_2462 (ContentDisposition_t2_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_ReadDate(System.DateTime)
extern "C" void ContentDisposition_set_ReadDate_m2_2463 (ContentDisposition_t2_288 * __this, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.Mime.ContentDisposition::get_Size()
extern "C" int64_t ContentDisposition_get_Size_m2_2464 (ContentDisposition_t2_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mime.ContentDisposition::set_Size(System.Int64)
extern "C" void ContentDisposition_set_Size_m2_2465 (ContentDisposition_t2_288 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentDisposition::Equals(System.Object)
extern "C" bool ContentDisposition_Equals_m2_2466 (ContentDisposition_t2_288 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Mime.ContentDisposition::Equals(System.Net.Mime.ContentDisposition)
extern "C" bool ContentDisposition_Equals_m2_2467 (ContentDisposition_t2_288 * __this, ContentDisposition_t2_288 * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Mime.ContentDisposition::GetHashCode()
extern "C" int32_t ContentDisposition_GetHashCode_m2_2468 (ContentDisposition_t2_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Mime.ContentDisposition::ToString()
extern "C" String_t* ContentDisposition_ToString_m2_2469 (ContentDisposition_t2_288 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
