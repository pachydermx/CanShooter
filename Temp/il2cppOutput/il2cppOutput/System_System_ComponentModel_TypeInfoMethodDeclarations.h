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

// System.ComponentModel.TypeInfo
struct TypeInfo_t2_172;
// System.Type
struct Type_t;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2_60;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t2_109;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t2_142;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeInfo::.ctor(System.Type)
extern "C" void TypeInfo__ctor_m2_1342 (TypeInfo_t2_172 * __this, Type_t * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeInfo::GetAttributes()
extern "C" AttributeCollection_t2_60 * TypeInfo_GetAttributes_m2_1343 (TypeInfo_t2_172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeInfo::GetEvents()
extern "C" EventDescriptorCollection_t2_109 * TypeInfo_GetEvents_m2_1344 (TypeInfo_t2_172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeInfo::GetProperties()
extern "C" PropertyDescriptorCollection_t2_142 * TypeInfo_GetProperties_m2_1345 (TypeInfo_t2_172 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
