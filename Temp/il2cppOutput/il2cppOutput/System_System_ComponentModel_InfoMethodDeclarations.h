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

// System.ComponentModel.Info
struct Info_t2_170;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t2_109;
// System.Attribute[]
struct AttributeU5BU5D_t1_932;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t2_142;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t2_108;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2_54;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2_60;
// System.ComponentModel.IComponent
struct IComponent_t2_42;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Info::.ctor(System.Type)
extern "C" void Info__ctor_m2_1331 (Info_t2_170 * __this, Type_t * ___infoType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.Info::get_InfoType()
extern "C" Type_t * Info_get_InfoType_m2_1332 (Info_t2_170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.Info::GetEvents(System.Attribute[])
extern "C" EventDescriptorCollection_t2_109 * Info_GetEvents_m2_1333 (Info_t2_170 * __this, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.Info::GetProperties(System.Attribute[])
extern "C" PropertyDescriptorCollection_t2_142 * Info_GetProperties_m2_1334 (Info_t2_170 * __this, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.Info::GetDefaultEvent()
extern "C" EventDescriptor_t2_108 * Info_GetDefaultEvent_m2_1335 (Info_t2_170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.Info::GetDefaultProperty()
extern "C" PropertyDescriptor_t2_54 * Info_GetDefaultProperty_m2_1336 (Info_t2_170 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.Info::GetAttributes(System.ComponentModel.IComponent)
extern "C" AttributeCollection_t2_60 * Info_GetAttributes_m2_1337 (Info_t2_170 * __this, Object_t * ___comp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
