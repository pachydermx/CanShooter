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

// System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor
struct DefaultTypeDescriptor_t2_165;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t2_161;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2_60;
// System.String
struct String_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2_54;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t2_142;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::.ctor(System.ComponentModel.TypeDescriptionProvider,System.Type,System.Object)
extern "C" void DefaultTypeDescriptor__ctor_m2_1248 (DefaultTypeDescriptor_t2_165 * __this, TypeDescriptionProvider_t2_161 * ___owner, Type_t * ___objectType, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetAttributes()
extern "C" AttributeCollection_t2_60 * DefaultTypeDescriptor_GetAttributes_m2_1249 (DefaultTypeDescriptor_t2_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetClassName()
extern "C" String_t* DefaultTypeDescriptor_GetClassName_m2_1250 (DefaultTypeDescriptor_t2_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetDefaultProperty()
extern "C" PropertyDescriptor_t2_54 * DefaultTypeDescriptor_GetDefaultProperty_m2_1251 (DefaultTypeDescriptor_t2_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor/DefaultTypeDescriptor::GetProperties()
extern "C" PropertyDescriptorCollection_t2_142 * DefaultTypeDescriptor_GetProperties_m2_1252 (DefaultTypeDescriptor_t2_165 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
