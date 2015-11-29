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

// System.ComponentModel.RefreshEventArgs
struct RefreshEventArgs_t2_147;
// System.Object
struct Object_t;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.RefreshEventArgs::.ctor(System.Object)
extern "C" void RefreshEventArgs__ctor_m2_1110 (RefreshEventArgs_t2_147 * __this, Object_t * ___componentChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.RefreshEventArgs::.ctor(System.Type)
extern "C" void RefreshEventArgs__ctor_m2_1111 (RefreshEventArgs_t2_147 * __this, Type_t * ___typeChanged, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.RefreshEventArgs::get_ComponentChanged()
extern "C" Object_t * RefreshEventArgs_get_ComponentChanged_m2_1112 (RefreshEventArgs_t2_147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.RefreshEventArgs::get_TypeChanged()
extern "C" Type_t * RefreshEventArgs_get_TypeChanged_m2_1113 (RefreshEventArgs_t2_147 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
