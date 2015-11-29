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

// System.ComponentModel.Int16Converter
struct Int16Converter_t2_114;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1_211;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Int16Converter::.ctor()
extern "C" void Int16Converter__ctor_m2_797 (Int16Converter_t2_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Int16Converter::get_SupportHex()
extern "C" bool Int16Converter_get_SupportHex_m2_798 (Int16Converter_t2_114 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Int16Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* Int16Converter_ConvertToString_m2_799 (Int16Converter_t2_114 * __this, Object_t * ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int16Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * Int16Converter_ConvertFromString_m2_800 (Int16Converter_t2_114 * __this, String_t* ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int16Converter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * Int16Converter_ConvertFromString_m2_801 (Int16Converter_t2_114 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
