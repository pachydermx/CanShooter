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

// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2_54;
// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t2_39;
// System.Attribute[]
struct AttributeU5BU5D_t1_932;
// System.String
struct String_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2_67;
// System.Object
struct Object_t;
// System.EventHandler
struct EventHandler_t1_275;
// System.Collections.IList
struct IList_t1_427;
// System.Type
struct Type_t;
// System.EventArgs
struct EventArgs_t1_105;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t2_142;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_DesignerSerializationVisibility.h"

// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.ComponentModel.MemberDescriptor)
extern "C" void PropertyDescriptor__ctor_m2_990 (PropertyDescriptor_t2_54 * __this, MemberDescriptor_t2_39 * ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.ComponentModel.MemberDescriptor,System.Attribute[])
extern "C" void PropertyDescriptor__ctor_m2_991 (PropertyDescriptor_t2_54 * __this, MemberDescriptor_t2_39 * ___reference, AttributeU5BU5D_t1_932* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::.ctor(System.String,System.Attribute[])
extern "C" void PropertyDescriptor__ctor_m2_992 (PropertyDescriptor_t2_54 * __this, String_t* ___name, AttributeU5BU5D_t1_932* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.PropertyDescriptor::get_Converter()
extern "C" TypeConverter_t2_67 * PropertyDescriptor_get_Converter_m2_993 (PropertyDescriptor_t2_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::get_IsLocalizable()
extern "C" bool PropertyDescriptor_get_IsLocalizable_m2_994 (PropertyDescriptor_t2_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::get_SupportsChangeEvents()
extern "C" bool PropertyDescriptor_get_SupportsChangeEvents_m2_995 (PropertyDescriptor_t2_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.DesignerSerializationVisibility System.ComponentModel.PropertyDescriptor::get_SerializationVisibility()
extern "C" int32_t PropertyDescriptor_get_SerializationVisibility_m2_996 (PropertyDescriptor_t2_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::AddValueChanged(System.Object,System.EventHandler)
extern "C" void PropertyDescriptor_AddValueChanged_m2_997 (PropertyDescriptor_t2_54 * __this, Object_t * ___component, EventHandler_t1_275 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::RemoveValueChanged(System.Object,System.EventHandler)
extern "C" void PropertyDescriptor_RemoveValueChanged_m2_998 (PropertyDescriptor_t2_54 * __this, Object_t * ___component, EventHandler_t1_275 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::FillAttributes(System.Collections.IList)
extern "C" void PropertyDescriptor_FillAttributes_m2_999 (PropertyDescriptor_t2_54 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptor::GetInvocationTarget(System.Type,System.Object)
extern "C" Object_t * PropertyDescriptor_GetInvocationTarget_m2_1000 (PropertyDescriptor_t2_54 * __this, Type_t * ___type, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.EventHandler System.ComponentModel.PropertyDescriptor::GetValueChangedHandler(System.Object)
extern "C" EventHandler_t1_275 * PropertyDescriptor_GetValueChangedHandler_m2_1001 (PropertyDescriptor_t2_54 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.PropertyDescriptor::OnValueChanged(System.Object,System.EventArgs)
extern "C" void PropertyDescriptor_OnValueChanged_m2_1002 (PropertyDescriptor_t2_54 * __this, Object_t * ___component, EventArgs_t1_105 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptor::CreateInstance(System.Type)
extern "C" Object_t * PropertyDescriptor_CreateInstance_m2_1003 (PropertyDescriptor_t2_54 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.PropertyDescriptor::Equals(System.Object)
extern "C" bool PropertyDescriptor_Equals_m2_1004 (PropertyDescriptor_t2_54 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptor::GetChildProperties()
extern "C" PropertyDescriptorCollection_t2_142 * PropertyDescriptor_GetChildProperties_m2_1005 (PropertyDescriptor_t2_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptor::GetChildProperties(System.Object)
extern "C" PropertyDescriptorCollection_t2_142 * PropertyDescriptor_GetChildProperties_m2_1006 (PropertyDescriptor_t2_54 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptor::GetChildProperties(System.Attribute[])
extern "C" PropertyDescriptorCollection_t2_142 * PropertyDescriptor_GetChildProperties_m2_1007 (PropertyDescriptor_t2_54 * __this, AttributeU5BU5D_t1_932* ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.PropertyDescriptor::GetHashCode()
extern "C" int32_t PropertyDescriptor_GetHashCode_m2_1008 (PropertyDescriptor_t2_54 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.PropertyDescriptor::GetChildProperties(System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t2_142 * PropertyDescriptor_GetChildProperties_m2_1009 (PropertyDescriptor_t2_54 * __this, Object_t * ___instance, AttributeU5BU5D_t1_932* ___filter, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.PropertyDescriptor::GetEditor(System.Type)
extern "C" Object_t * PropertyDescriptor_GetEditor_m2_1010 (PropertyDescriptor_t2_54 * __this, Type_t * ___editorBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.PropertyDescriptor::GetTypeFromName(System.String)
extern "C" Type_t * PropertyDescriptor_GetTypeFromName_m2_1011 (PropertyDescriptor_t2_54 * __this, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
