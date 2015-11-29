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

// System.ComponentModel.ReflectionPropertyDescriptor
struct ReflectionPropertyDescriptor_t2_146;
// System.Type
struct Type_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2_54;
// System.Attribute[]
struct AttributeU5BU5D_t1_932;
// System.String
struct String_t;
// System.Reflection.PropertyInfo
struct PropertyInfo_t;
// System.Collections.IList
struct IList_t1_427;
// System.Object
struct Object_t;
// System.ComponentModel.Design.DesignerTransaction
struct DesignerTransaction_t2_44;
// System.Reflection.MethodInfo
struct MethodInfo_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Type,System.ComponentModel.PropertyDescriptor,System.Attribute[])
extern "C" void ReflectionPropertyDescriptor__ctor_m2_1093 (ReflectionPropertyDescriptor_t2_146 * __this, Type_t * ___componentType, PropertyDescriptor_t2_54 * ___oldPropertyDescriptor, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C" void ReflectionPropertyDescriptor__ctor_m2_1094 (ReflectionPropertyDescriptor_t2_146 * __this, Type_t * ___componentType, String_t* ___name, Type_t * ___type, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::.ctor(System.Reflection.PropertyInfo)
extern "C" void ReflectionPropertyDescriptor__ctor_m2_1095 (ReflectionPropertyDescriptor_t2_146 * __this, PropertyInfo_t * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo System.ComponentModel.ReflectionPropertyDescriptor::GetPropertyInfo()
extern "C" PropertyInfo_t * ReflectionPropertyDescriptor_GetPropertyInfo_m2_1096 (ReflectionPropertyDescriptor_t2_146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_ComponentType()
extern "C" Type_t * ReflectionPropertyDescriptor_get_ComponentType_m2_1097 (ReflectionPropertyDescriptor_t2_146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::get_IsReadOnly()
extern "C" bool ReflectionPropertyDescriptor_get_IsReadOnly_m2_1098 (ReflectionPropertyDescriptor_t2_146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionPropertyDescriptor::get_PropertyType()
extern "C" Type_t * ReflectionPropertyDescriptor_get_PropertyType_m2_1099 (ReflectionPropertyDescriptor_t2_146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C" void ReflectionPropertyDescriptor_FillAttributes_m2_1100 (ReflectionPropertyDescriptor_t2_146 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ReflectionPropertyDescriptor::GetValue(System.Object)
extern "C" Object_t * ReflectionPropertyDescriptor_GetValue_m2_1101 (ReflectionPropertyDescriptor_t2_146 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.Design.DesignerTransaction System.ComponentModel.ReflectionPropertyDescriptor::CreateTransaction(System.Object,System.String)
extern "C" DesignerTransaction_t2_44 * ReflectionPropertyDescriptor_CreateTransaction_m2_1102 (ReflectionPropertyDescriptor_t2_146 * __this, Object_t * ___obj, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::EndTransaction(System.Object,System.ComponentModel.Design.DesignerTransaction,System.Object,System.Object,System.Boolean)
extern "C" void ReflectionPropertyDescriptor_EndTransaction_m2_1103 (ReflectionPropertyDescriptor_t2_146 * __this, Object_t * ___obj, DesignerTransaction_t2_44 * ___tran, Object_t * ___oldValue, Object_t * ___newValue, bool ___commit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::InitAccessors()
extern "C" void ReflectionPropertyDescriptor_InitAccessors_m2_1104 (ReflectionPropertyDescriptor_t2_146 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::SetValue(System.Object,System.Object)
extern "C" void ReflectionPropertyDescriptor_SetValue_m2_1105 (ReflectionPropertyDescriptor_t2_146 * __this, Object_t * ___component, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.ComponentModel.ReflectionPropertyDescriptor::FindPropertyMethod(System.Object,System.String)
extern "C" MethodInfo_t * ReflectionPropertyDescriptor_FindPropertyMethod_m2_1106 (ReflectionPropertyDescriptor_t2_146 * __this, Object_t * ___o, String_t* ___method_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionPropertyDescriptor::ResetValue(System.Object)
extern "C" void ReflectionPropertyDescriptor_ResetValue_m2_1107 (ReflectionPropertyDescriptor_t2_146 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::CanResetValue(System.Object)
extern "C" bool ReflectionPropertyDescriptor_CanResetValue_m2_1108 (ReflectionPropertyDescriptor_t2_146 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionPropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C" bool ReflectionPropertyDescriptor_ShouldSerializeValue_m2_1109 (ReflectionPropertyDescriptor_t2_146 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
