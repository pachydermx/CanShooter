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

// System.ComponentModel.ArrayConverter
struct ArrayConverter_t2_55;
// System.Object
struct Object_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t2_809;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t2_142;
// System.Attribute[]
struct AttributeU5BU5D_t1_932;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ArrayConverter::.ctor()
extern "C" void ArrayConverter__ctor_m2_427 (ArrayConverter_t2_55 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ArrayConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * ArrayConverter_ConvertTo_m2_428 (ArrayConverter_t2_55 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ArrayConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t2_142 * ArrayConverter_GetProperties_m2_429 (ArrayConverter_t2_55 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool ArrayConverter_GetPropertiesSupported_m2_430 (ArrayConverter_t2_55 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
