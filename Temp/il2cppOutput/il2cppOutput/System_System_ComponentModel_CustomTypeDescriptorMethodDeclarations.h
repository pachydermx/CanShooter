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

// System.ComponentModel.CustomTypeDescriptor
struct CustomTypeDescriptor_t2_86;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t2_87;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2_60;
// System.String
struct String_t;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2_67;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t2_108;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2_54;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t2_109;
// System.Attribute[]
struct AttributeU5BU5D_t1_932;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t2_142;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.CustomTypeDescriptor::.ctor()
extern "C" void CustomTypeDescriptor__ctor_m2_585 (CustomTypeDescriptor_t2_86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.CustomTypeDescriptor::.ctor(System.ComponentModel.ICustomTypeDescriptor)
extern "C" void CustomTypeDescriptor__ctor_m2_586 (CustomTypeDescriptor_t2_86 * __this, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.CustomTypeDescriptor::GetAttributes()
extern "C" AttributeCollection_t2_60 * CustomTypeDescriptor_GetAttributes_m2_587 (CustomTypeDescriptor_t2_86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.CustomTypeDescriptor::GetClassName()
extern "C" String_t* CustomTypeDescriptor_GetClassName_m2_588 (CustomTypeDescriptor_t2_86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.CustomTypeDescriptor::GetComponentName()
extern "C" String_t* CustomTypeDescriptor_GetComponentName_m2_589 (CustomTypeDescriptor_t2_86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.CustomTypeDescriptor::GetConverter()
extern "C" TypeConverter_t2_67 * CustomTypeDescriptor_GetConverter_m2_590 (CustomTypeDescriptor_t2_86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.CustomTypeDescriptor::GetDefaultEvent()
extern "C" EventDescriptor_t2_108 * CustomTypeDescriptor_GetDefaultEvent_m2_591 (CustomTypeDescriptor_t2_86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.CustomTypeDescriptor::GetDefaultProperty()
extern "C" PropertyDescriptor_t2_54 * CustomTypeDescriptor_GetDefaultProperty_m2_592 (CustomTypeDescriptor_t2_86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CustomTypeDescriptor::GetEditor(System.Type)
extern "C" Object_t * CustomTypeDescriptor_GetEditor_m2_593 (CustomTypeDescriptor_t2_86 * __this, Type_t * ___editorBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetEvents()
extern "C" EventDescriptorCollection_t2_109 * CustomTypeDescriptor_GetEvents_m2_594 (CustomTypeDescriptor_t2_86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetEvents(System.Attribute[])
extern "C" EventDescriptorCollection_t2_109 * CustomTypeDescriptor_GetEvents_m2_595 (CustomTypeDescriptor_t2_86 * __this, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetProperties()
extern "C" PropertyDescriptorCollection_t2_142 * CustomTypeDescriptor_GetProperties_m2_596 (CustomTypeDescriptor_t2_86 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.CustomTypeDescriptor::GetProperties(System.Attribute[])
extern "C" PropertyDescriptorCollection_t2_142 * CustomTypeDescriptor_GetProperties_m2_597 (CustomTypeDescriptor_t2_86 * __this, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.CustomTypeDescriptor::GetPropertyOwner(System.ComponentModel.PropertyDescriptor)
extern "C" Object_t * CustomTypeDescriptor_GetPropertyOwner_m2_598 (CustomTypeDescriptor_t2_86 * __this, PropertyDescriptor_t2_54 * ___pd, const MethodInfo* method) IL2CPP_METHOD_ATTR;
