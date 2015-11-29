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

// System.ComponentModel.ComponentCollection
struct ComponentCollection_t2_80;
// System.ComponentModel.IComponent[]
struct IComponentU5BU5D_t2_811;
// System.ComponentModel.IComponent
struct IComponent_t2_42;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ComponentCollection::.ctor(System.ComponentModel.IComponent[])
extern "C" void ComponentCollection__ctor_m2_568 (ComponentCollection_t2_80 * __this, IComponentU5BU5D_t2_811* ___components, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IComponent System.ComponentModel.ComponentCollection::get_Item(System.Int32)
extern "C" Object_t * ComponentCollection_get_Item_m2_569 (ComponentCollection_t2_80 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IComponent System.ComponentModel.ComponentCollection::get_Item(System.String)
extern "C" Object_t * ComponentCollection_get_Item_m2_570 (ComponentCollection_t2_80 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ComponentCollection::CopyTo(System.ComponentModel.IComponent[],System.Int32)
extern "C" void ComponentCollection_CopyTo_m2_571 (ComponentCollection_t2_80 * __this, IComponentU5BU5D_t2_811* ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
