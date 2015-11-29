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

// System.ComponentModel.Design.ComponentChangedEventArgs
struct ComponentChangedEventArgs_t2_38;
// System.Object
struct Object_t;
// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t2_39;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Design.ComponentChangedEventArgs::.ctor(System.Object,System.ComponentModel.MemberDescriptor,System.Object,System.Object)
extern "C" void ComponentChangedEventArgs__ctor_m2_342 (ComponentChangedEventArgs_t2_38 * __this, Object_t * ___component, MemberDescriptor_t2_39 * ___member, Object_t * ___oldValue, Object_t * ___newValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.ComponentChangedEventArgs::get_Component()
extern "C" Object_t * ComponentChangedEventArgs_get_Component_m2_343 (ComponentChangedEventArgs_t2_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.MemberDescriptor System.ComponentModel.Design.ComponentChangedEventArgs::get_Member()
extern "C" MemberDescriptor_t2_39 * ComponentChangedEventArgs_get_Member_m2_344 (ComponentChangedEventArgs_t2_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.ComponentChangedEventArgs::get_NewValue()
extern "C" Object_t * ComponentChangedEventArgs_get_NewValue_m2_345 (ComponentChangedEventArgs_t2_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.ComponentChangedEventArgs::get_OldValue()
extern "C" Object_t * ComponentChangedEventArgs_get_OldValue_m2_346 (ComponentChangedEventArgs_t2_38 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
