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

// System.ComponentModel.ComponentInfo
struct ComponentInfo_t2_171;
// System.ComponentModel.IComponent
struct IComponent_t2_42;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2_60;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t2_109;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t2_142;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ComponentInfo::.ctor(System.ComponentModel.IComponent)
extern "C" void ComponentInfo__ctor_m2_1338 (ComponentInfo_t2_171 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.ComponentInfo::GetAttributes()
extern "C" AttributeCollection_t2_60 * ComponentInfo_GetAttributes_m2_1339 (ComponentInfo_t2_171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.ComponentInfo::GetEvents()
extern "C" EventDescriptorCollection_t2_109 * ComponentInfo_GetEvents_m2_1340 (ComponentInfo_t2_171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.ComponentInfo::GetProperties()
extern "C" PropertyDescriptorCollection_t2_142 * ComponentInfo_GetProperties_m2_1341 (ComponentInfo_t2_171 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
