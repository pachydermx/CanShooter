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

// System.ComponentModel.Int32Converter
struct Int32Converter_t2_115;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1_211;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Int32Converter::.ctor()
extern "C" void Int32Converter__ctor_m2_802 (Int32Converter_t2_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Int32Converter::get_SupportHex()
extern "C" bool Int32Converter_get_SupportHex_m2_803 (Int32Converter_t2_115 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Int32Converter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* Int32Converter_ConvertToString_m2_804 (Int32Converter_t2_115 * __this, Object_t * ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int32Converter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * Int32Converter_ConvertFromString_m2_805 (Int32Converter_t2_115 * __this, String_t* ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Int32Converter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * Int32Converter_ConvertFromString_m2_806 (Int32Converter_t2_115 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
