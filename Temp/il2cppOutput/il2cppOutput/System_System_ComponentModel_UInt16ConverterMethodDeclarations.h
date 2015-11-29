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

// System.ComponentModel.UInt16Converter
struct UInt16Converter_t2_174;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1_211;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.UInt16Converter::.ctor()
extern "C" void UInt16Converter__ctor_m2_1354 (UInt16Converter_t2_174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.UInt16Converter::get_SupportHex()
extern "C" bool UInt16Converter_get_SupportHex_m2_1355 (UInt16Converter_t2_174 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.UInt16Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* UInt16Converter_ConvertToString_m2_1356 (UInt16Converter_t2_174 * __this, Object_t * ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt16Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * UInt16Converter_ConvertFromString_m2_1357 (UInt16Converter_t2_174 * __this, String_t* ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.UInt16Converter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * UInt16Converter_ConvertFromString_m2_1358 (UInt16Converter_t2_174 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
