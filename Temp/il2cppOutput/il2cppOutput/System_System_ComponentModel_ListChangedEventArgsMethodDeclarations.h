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

// System.ComponentModel.ListChangedEventArgs
struct ListChangedEventArgs_t2_127;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2_54;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_ListChangedType.h"

// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32)
extern "C" void ListChangedEventArgs__ctor_m2_868 (ListChangedEventArgs_t2_127 * __this, int32_t ___listChangedType, int32_t ___newIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.ComponentModel.PropertyDescriptor)
extern "C" void ListChangedEventArgs__ctor_m2_869 (ListChangedEventArgs_t2_127 * __this, int32_t ___listChangedType, PropertyDescriptor_t2_54 * ___propDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32,System.Int32)
extern "C" void ListChangedEventArgs__ctor_m2_870 (ListChangedEventArgs_t2_127 * __this, int32_t ___listChangedType, int32_t ___newIndex, int32_t ___oldIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.ListChangedEventArgs::.ctor(System.ComponentModel.ListChangedType,System.Int32,System.ComponentModel.PropertyDescriptor)
extern "C" void ListChangedEventArgs__ctor_m2_871 (ListChangedEventArgs_t2_127 * __this, int32_t ___listChangedType, int32_t ___newIndex, PropertyDescriptor_t2_54 * ___propDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListChangedType System.ComponentModel.ListChangedEventArgs::get_ListChangedType()
extern "C" int32_t ListChangedEventArgs_get_ListChangedType_m2_872 (ListChangedEventArgs_t2_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.ListChangedEventArgs::get_OldIndex()
extern "C" int32_t ListChangedEventArgs_get_OldIndex_m2_873 (ListChangedEventArgs_t2_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.ListChangedEventArgs::get_NewIndex()
extern "C" int32_t ListChangedEventArgs_get_NewIndex_m2_874 (ListChangedEventArgs_t2_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.ListChangedEventArgs::get_PropertyDescriptor()
extern "C" PropertyDescriptor_t2_54 * ListChangedEventArgs_get_PropertyDescriptor_m2_875 (ListChangedEventArgs_t2_127 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
