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

// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t2_161;
// System.Object
struct Object_t;
// System.IServiceProvider
struct IServiceProvider_t1_954;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t1_31;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Collections.IDictionary
struct IDictionary_t1_35;
// System.ComponentModel.ICustomTypeDescriptor
struct ICustomTypeDescriptor_t2_87;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor()
extern "C" void TypeDescriptionProvider__ctor_m2_1223 (TypeDescriptionProvider_t2_161 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptionProvider::.ctor(System.ComponentModel.TypeDescriptionProvider)
extern "C" void TypeDescriptionProvider__ctor_m2_1224 (TypeDescriptionProvider_t2_161 * __this, TypeDescriptionProvider_t2_161 * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptionProvider::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C" Object_t * TypeDescriptionProvider_CreateInstance_m2_1225 (TypeDescriptionProvider_t2_161 * __this, Object_t * ___provider, Type_t * ___objectType, TypeU5BU5D_t1_31* ___argTypes, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.ComponentModel.TypeDescriptionProvider::GetCache(System.Object)
extern "C" Object_t * TypeDescriptionProvider_GetCache_m2_1226 (TypeDescriptionProvider_t2_161 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetExtendedTypeDescriptor(System.Object)
extern "C" Object_t * TypeDescriptionProvider_GetExtendedTypeDescriptor_m2_1227 (TypeDescriptionProvider_t2_161 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptionProvider::GetFullComponentName(System.Object)
extern "C" String_t* TypeDescriptionProvider_GetFullComponentName_m2_1228 (TypeDescriptionProvider_t2_161 * __this, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Object)
extern "C" Type_t * TypeDescriptionProvider_GetReflectionType_m2_1229 (TypeDescriptionProvider_t2_161 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type)
extern "C" Type_t * TypeDescriptionProvider_GetReflectionType_m2_1230 (TypeDescriptionProvider_t2_161 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptionProvider::GetReflectionType(System.Type,System.Object)
extern "C" Type_t * TypeDescriptionProvider_GetReflectionType_m2_1231 (TypeDescriptionProvider_t2_161 * __this, Type_t * ___objectType, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Object)
extern "C" Object_t * TypeDescriptionProvider_GetTypeDescriptor_m2_1232 (TypeDescriptionProvider_t2_161 * __this, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type)
extern "C" Object_t * TypeDescriptionProvider_GetTypeDescriptor_m2_1233 (TypeDescriptionProvider_t2_161 * __this, Type_t * ___objectType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ICustomTypeDescriptor System.ComponentModel.TypeDescriptionProvider::GetTypeDescriptor(System.Type,System.Object)
extern "C" Object_t * TypeDescriptionProvider_GetTypeDescriptor_m2_1234 (TypeDescriptionProvider_t2_161 * __this, Type_t * ___objectType, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
