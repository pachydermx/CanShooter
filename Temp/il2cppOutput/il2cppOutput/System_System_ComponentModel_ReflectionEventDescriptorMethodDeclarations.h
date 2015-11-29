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

// System.ComponentModel.ReflectionEventDescriptor
struct ReflectionEventDescriptor_t2_145;
// System.Reflection.EventInfo
struct EventInfo_t;
// System.Type
struct Type_t;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t2_108;
// System.Attribute[]
struct AttributeU5BU5D_t1_932;
// System.String
struct String_t;
// System.Object
struct Object_t;
// System.Delegate
struct Delegate_t1_22;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Reflection.EventInfo)
extern "C" void ReflectionEventDescriptor__ctor_m2_1084 (ReflectionEventDescriptor_t2_145 * __this, EventInfo_t * ___eventInfo, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Type,System.ComponentModel.EventDescriptor,System.Attribute[])
extern "C" void ReflectionEventDescriptor__ctor_m2_1085 (ReflectionEventDescriptor_t2_145 * __this, Type_t * ___componentType, EventDescriptor_t2_108 * ___oldEventDescriptor, AttributeU5BU5D_t1_932* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::.ctor(System.Type,System.String,System.Type,System.Attribute[])
extern "C" void ReflectionEventDescriptor__ctor_m2_1086 (ReflectionEventDescriptor_t2_145 * __this, Type_t * ___componentType, String_t* ___name, Type_t * ___type, AttributeU5BU5D_t1_932* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.EventInfo System.ComponentModel.ReflectionEventDescriptor::GetEventInfo()
extern "C" EventInfo_t * ReflectionEventDescriptor_GetEventInfo_m2_1087 (ReflectionEventDescriptor_t2_145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::AddEventHandler(System.Object,System.Delegate)
extern "C" void ReflectionEventDescriptor_AddEventHandler_m2_1088 (ReflectionEventDescriptor_t2_145 * __this, Object_t * ___component, Delegate_t1_22 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ReflectionEventDescriptor::RemoveEventHandler(System.Object,System.Delegate)
extern "C" void ReflectionEventDescriptor_RemoveEventHandler_m2_1089 (ReflectionEventDescriptor_t2_145 * __this, Object_t * ___component, Delegate_t1_22 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionEventDescriptor::get_ComponentType()
extern "C" Type_t * ReflectionEventDescriptor_get_ComponentType_m2_1090 (ReflectionEventDescriptor_t2_145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ReflectionEventDescriptor::get_EventType()
extern "C" Type_t * ReflectionEventDescriptor_get_EventType_m2_1091 (ReflectionEventDescriptor_t2_145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ReflectionEventDescriptor::get_IsMulticast()
extern "C" bool ReflectionEventDescriptor_get_IsMulticast_m2_1092 (ReflectionEventDescriptor_t2_145 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
