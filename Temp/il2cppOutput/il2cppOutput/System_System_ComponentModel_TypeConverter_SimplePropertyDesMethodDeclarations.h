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

// System.ComponentModel.TypeConverter/SimplePropertyDescriptor
struct SimplePropertyDescriptor_t2_158;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t1_934;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::.ctor(System.Type,System.String,System.Type)
extern "C" void SimplePropertyDescriptor__ctor_m2_1168 (SimplePropertyDescriptor_t2_158 * __this, Type_t * ___componentType, String_t* ___name, Type_t * ___propertyType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C" void SimplePropertyDescriptor__ctor_m2_1169 (SimplePropertyDescriptor_t2_158 * __this, Type_t * ___componentType, String_t* ___name, Type_t * ___propertyType, AttributeU5BU5D_t1_934* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_ComponentType()
extern "C" Type_t * SimplePropertyDescriptor_get_ComponentType_m2_1170 (SimplePropertyDescriptor_t2_158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_PropertyType()
extern "C" Type_t * SimplePropertyDescriptor_get_PropertyType_m2_1171 (SimplePropertyDescriptor_t2_158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter/SimplePropertyDescriptor::get_IsReadOnly()
extern "C" bool SimplePropertyDescriptor_get_IsReadOnly_m2_1172 (SimplePropertyDescriptor_t2_158 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter/SimplePropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C" bool SimplePropertyDescriptor_ShouldSerializeValue_m2_1173 (SimplePropertyDescriptor_t2_158 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter/SimplePropertyDescriptor::CanResetValue(System.Object)
extern "C" bool SimplePropertyDescriptor_CanResetValue_m2_1174 (SimplePropertyDescriptor_t2_158 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeConverter/SimplePropertyDescriptor::ResetValue(System.Object)
extern "C" void SimplePropertyDescriptor_ResetValue_m2_1175 (SimplePropertyDescriptor_t2_158 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
