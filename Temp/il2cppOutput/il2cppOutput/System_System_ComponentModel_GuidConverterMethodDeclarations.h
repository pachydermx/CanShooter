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

// System.ComponentModel.GuidConverter
struct GuidConverter_t2_112;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t2_809;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.GuidConverter::.ctor()
extern "C" void GuidConverter__ctor_m2_786 (GuidConverter_t2_112 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.GuidConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool GuidConverter_CanConvertFrom_m2_787 (GuidConverter_t2_112 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.GuidConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool GuidConverter_CanConvertTo_m2_788 (GuidConverter_t2_112 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.GuidConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * GuidConverter_ConvertFrom_m2_789 (GuidConverter_t2_112 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.GuidConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * GuidConverter_ConvertTo_m2_790 (GuidConverter_t2_112 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
