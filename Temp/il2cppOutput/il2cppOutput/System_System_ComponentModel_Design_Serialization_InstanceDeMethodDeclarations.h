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

// System.ComponentModel.Design.Serialization.InstanceDescriptor
struct InstanceDescriptor_t2_36;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Collections.ICollection
struct ICollection_t1_858;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection)
extern "C" void InstanceDescriptor__ctor_m2_329 (InstanceDescriptor_t2_36 * __this, MemberInfo_t * ___member, Object_t * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::.ctor(System.Reflection.MemberInfo,System.Collections.ICollection,System.Boolean)
extern "C" void InstanceDescriptor__ctor_m2_330 (InstanceDescriptor_t2_36 * __this, MemberInfo_t * ___member, Object_t * ___arguments, bool ___isComplete, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.Serialization.InstanceDescriptor::ValidateMember(System.Reflection.MemberInfo,System.Collections.ICollection)
extern "C" void InstanceDescriptor_ValidateMember_m2_331 (InstanceDescriptor_t2_36 * __this, MemberInfo_t * ___member, Object_t * ___arguments, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.ComponentModel.Design.Serialization.InstanceDescriptor::get_Arguments()
extern "C" Object_t * InstanceDescriptor_get_Arguments_m2_332 (InstanceDescriptor_t2_36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Design.Serialization.InstanceDescriptor::get_IsComplete()
extern "C" bool InstanceDescriptor_get_IsComplete_m2_333 (InstanceDescriptor_t2_36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MemberInfo System.ComponentModel.Design.Serialization.InstanceDescriptor::get_MemberInfo()
extern "C" MemberInfo_t * InstanceDescriptor_get_MemberInfo_m2_334 (InstanceDescriptor_t2_36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Design.Serialization.InstanceDescriptor::Invoke()
extern "C" Object_t * InstanceDescriptor_Invoke_m2_335 (InstanceDescriptor_t2_36 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
