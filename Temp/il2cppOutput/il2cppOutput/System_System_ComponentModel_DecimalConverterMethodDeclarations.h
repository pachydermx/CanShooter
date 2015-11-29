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

// System.ComponentModel.DecimalConverter
struct DecimalConverter_t2_89;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t2_809;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.String
struct String_t;
// System.Globalization.NumberFormatInfo
struct NumberFormatInfo_t1_211;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.DecimalConverter::.ctor()
extern "C" void DecimalConverter__ctor_m2_604 (DecimalConverter_t2_89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DecimalConverter::get_SupportHex()
extern "C" bool DecimalConverter_get_SupportHex_m2_605 (DecimalConverter_t2_89 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.DecimalConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool DecimalConverter_CanConvertTo_m2_606 (DecimalConverter_t2_89 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DecimalConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * DecimalConverter_ConvertTo_m2_607 (DecimalConverter_t2_89 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.DecimalConverter::ConvertToString(System.Object,System.Globalization.NumberFormatInfo)
extern "C" String_t* DecimalConverter_ConvertToString_m2_608 (DecimalConverter_t2_89 * __this, Object_t * ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.DecimalConverter::ConvertFromString(System.String,System.Globalization.NumberFormatInfo)
extern "C" Object_t * DecimalConverter_ConvertFromString_m2_609 (DecimalConverter_t2_89 * __this, String_t* ___value, NumberFormatInfo_t1_211 * ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
