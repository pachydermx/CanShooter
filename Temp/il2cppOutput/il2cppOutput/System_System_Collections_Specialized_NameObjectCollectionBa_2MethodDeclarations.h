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

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2_25;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1_181;
// System.Collections.IComparer
struct IComparer_t1_180;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1_179;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t2_26;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Type
struct Type_t;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t2_23;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
extern "C" void NameObjectCollectionBase__ctor_m2_153 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32)
extern "C" void NameObjectCollectionBase__ctor_m2_154 (NameObjectCollectionBase_t2_25 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer,System.Collections.IComparer,System.Collections.IHashCodeProvider)
extern "C" void NameObjectCollectionBase__ctor_m2_155 (NameObjectCollectionBase_t2_25 * __this, Object_t * ___equalityComparer, Object_t * ___comparer, Object_t * ___hcp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IEqualityComparer)
extern "C" void NameObjectCollectionBase__ctor_m2_156 (NameObjectCollectionBase_t2_25 * __this, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void NameObjectCollectionBase__ctor_m2_157 (NameObjectCollectionBase_t2_25 * __this, Object_t * ___hashProvider, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameObjectCollectionBase__ctor_m2_158 (NameObjectCollectionBase_t2_25 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C" void NameObjectCollectionBase__ctor_m2_159 (NameObjectCollectionBase_t2_25 * __this, int32_t ___capacity, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void NameObjectCollectionBase__ctor_m2_160 (NameObjectCollectionBase_t2_25 * __this, int32_t ___capacity, Object_t * ___hashProvider, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_m2_161 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m2_162 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m2_163 (NameObjectCollectionBase_t2_25 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEqualityComparer System.Collections.Specialized.NameObjectCollectionBase::get_EqualityComparer()
extern "C" Object_t * NameObjectCollectionBase_get_EqualityComparer_m2_164 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.Collections.Specialized.NameObjectCollectionBase::get_Comparer()
extern "C" Object_t * NameObjectCollectionBase_get_Comparer_m2_165 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IHashCodeProvider System.Collections.Specialized.NameObjectCollectionBase::get_HashCodeProvider()
extern "C" Object_t * NameObjectCollectionBase_get_HashCodeProvider_m2_166 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
extern "C" void NameObjectCollectionBase_Init_m2_167 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
extern "C" KeysCollection_t2_26 * NameObjectCollectionBase_get_Keys_m2_168 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
extern "C" Object_t * NameObjectCollectionBase_GetEnumerator_m2_169 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameObjectCollectionBase_GetObjectData_m2_170 (NameObjectCollectionBase_t2_25 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
extern "C" int32_t NameObjectCollectionBase_get_Count_m2_171 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
extern "C" void NameObjectCollectionBase_OnDeserialization_m2_172 (NameObjectCollectionBase_t2_25 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
extern "C" bool NameObjectCollectionBase_get_IsReadOnly_m2_173 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::set_IsReadOnly(System.Boolean)
extern "C" void NameObjectCollectionBase_set_IsReadOnly_m2_174 (NameObjectCollectionBase_t2_25 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
extern "C" void NameObjectCollectionBase_BaseAdd_m2_175 (NameObjectCollectionBase_t2_25 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseClear()
extern "C" void NameObjectCollectionBase_BaseClear_m2_176 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
extern "C" Object_t * NameObjectCollectionBase_BaseGet_m2_177 (NameObjectCollectionBase_t2_25 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
extern "C" Object_t * NameObjectCollectionBase_BaseGet_m2_178 (NameObjectCollectionBase_t2_25 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllKeys()
extern "C" StringU5BU5D_t1_206* NameObjectCollectionBase_BaseGetAllKeys_m2_179 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllValues()
extern "C" ObjectU5BU5D_t1_158* NameObjectCollectionBase_BaseGetAllValues_m2_180 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllValues(System.Type)
extern "C" ObjectU5BU5D_t1_158* NameObjectCollectionBase_BaseGetAllValues_m2_181 (NameObjectCollectionBase_t2_25 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
extern "C" String_t* NameObjectCollectionBase_BaseGetKey_m2_182 (NameObjectCollectionBase_t2_25 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::BaseHasKeys()
extern "C" bool NameObjectCollectionBase_BaseHasKeys_m2_183 (NameObjectCollectionBase_t2_25 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
extern "C" void NameObjectCollectionBase_BaseRemove_m2_184 (NameObjectCollectionBase_t2_25 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemoveAt(System.Int32)
extern "C" void NameObjectCollectionBase_BaseRemoveAt_m2_185 (NameObjectCollectionBase_t2_25 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.Int32,System.Object)
extern "C" void NameObjectCollectionBase_BaseSet_m2_186 (NameObjectCollectionBase_t2_25 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
extern "C" void NameObjectCollectionBase_BaseSet_m2_187 (NameObjectCollectionBase_t2_25 * __this, String_t* ___name, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
extern "C" _Item_t2_23 * NameObjectCollectionBase_FindFirstMatchedItem_m2_188 (NameObjectCollectionBase_t2_25 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::Equals(System.String,System.String)
extern "C" bool NameObjectCollectionBase_Equals_m2_189 (NameObjectCollectionBase_t2_25 * __this, String_t* ___s1, String_t* ___s2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
