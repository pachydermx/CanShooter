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

// System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor
struct ArrayPropertyDescriptor_t2_53;
// System.Type
struct Type_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::.ctor(System.Int32,System.Type)
extern "C" void ArrayPropertyDescriptor__ctor_m2_418 (ArrayPropertyDescriptor_t2_53 * __this, int32_t ___index, Type_t * ___array_type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::get_ComponentType()
extern "C" Type_t * ArrayPropertyDescriptor_get_ComponentType_m2_419 (ArrayPropertyDescriptor_t2_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::get_PropertyType()
extern "C" Type_t * ArrayPropertyDescriptor_get_PropertyType_m2_420 (ArrayPropertyDescriptor_t2_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::get_IsReadOnly()
extern "C" bool ArrayPropertyDescriptor_get_IsReadOnly_m2_421 (ArrayPropertyDescriptor_t2_53 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::GetValue(System.Object)
extern "C" Object_t * ArrayPropertyDescriptor_GetValue_m2_422 (ArrayPropertyDescriptor_t2_53 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::SetValue(System.Object,System.Object)
extern "C" void ArrayPropertyDescriptor_SetValue_m2_423 (ArrayPropertyDescriptor_t2_53 * __this, Object_t * ___component, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::ResetValue(System.Object)
extern "C" void ArrayPropertyDescriptor_ResetValue_m2_424 (ArrayPropertyDescriptor_t2_53 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::CanResetValue(System.Object)
extern "C" bool ArrayPropertyDescriptor_CanResetValue_m2_425 (ArrayPropertyDescriptor_t2_53 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.ArrayConverter/ArrayPropertyDescriptor::ShouldSerializeValue(System.Object)
extern "C" bool ArrayPropertyDescriptor_ShouldSerializeValue_m2_426 (ArrayPropertyDescriptor_t2_53 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
