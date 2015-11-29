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

// System.ComponentModel.SByteConverter
struct SByteConverter_t2_151;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1_211;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.SByteConverter::.ctor()
extern "C" void SByteConverter__ctor_m2_1123 (SByteConverter_t2_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.SByteConverter::get_SupportHex()
extern "C" bool SByteConverter_get_SupportHex_m2_1124 (SByteConverter_t2_151 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.SByteConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* SByteConverter_ConvertToString_m2_1125 (SByteConverter_t2_151 * __this, Object_t * ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SByteConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * SByteConverter_ConvertFromString_m2_1126 (SByteConverter_t2_151 * __this, String_t* ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.SByteConverter::ConvertFromString(System.String,System.Int32)
extern "C" Object_t * SByteConverter_ConvertFromString_m2_1127 (SByteConverter_t2_151 * __this, String_t* ___value, int32_t ___fromBase, const MethodInfo* method) IL2CPP_METHOD_ATTR;
