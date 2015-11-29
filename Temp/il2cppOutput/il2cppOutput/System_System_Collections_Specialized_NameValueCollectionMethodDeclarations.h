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

// System.Collections.Specialized.NameValueCollection
struct NameValueCollection_t2_27;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1_179;
// System.Collections.IComparer
struct IComparer_t1_180;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1_181;
// System.String[]
struct StringU5BU5D_t1_206;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.ArrayList
struct ArrayList_t1_114;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameValueCollection::.ctor()
extern "C" void NameValueCollection__ctor_m2_190 (NameValueCollection_t2_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32)
extern "C" void NameValueCollection__ctor_m2_191 (NameValueCollection_t2_27 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Collections.Specialized.NameValueCollection)
extern "C" void NameValueCollection__ctor_m2_192 (NameValueCollection_t2_27 * __this, NameValueCollection_t2_27 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void NameValueCollection__ctor_m2_193 (NameValueCollection_t2_27 * __this, Object_t * ___hashProvider, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.Specialized.NameValueCollection)
extern "C" void NameValueCollection__ctor_m2_194 (NameValueCollection_t2_27 * __this, int32_t ___capacity, NameValueCollection_t2_27 * ___col, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void NameValueCollection__ctor_m2_195 (NameValueCollection_t2_27 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
extern "C" void NameValueCollection__ctor_m2_196 (NameValueCollection_t2_27 * __this, int32_t ___capacity, Object_t * ___hashProvider, Object_t * ___comparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Collections.IEqualityComparer)
extern "C" void NameValueCollection__ctor_m2_197 (NameValueCollection_t2_27 * __this, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C" void NameValueCollection__ctor_m2_198 (NameValueCollection_t2_27 * __this, int32_t ___capacity, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::get_AllKeys()
extern "C" StringU5BU5D_t1_206* NameValueCollection_get_AllKeys_m2_199 (NameValueCollection_t2_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.Int32)
extern "C" String_t* NameValueCollection_get_Item_m2_200 (NameValueCollection_t2_27 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::get_Item(System.String)
extern "C" String_t* NameValueCollection_get_Item_m2_201 (NameValueCollection_t2_27 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::set_Item(System.String,System.String)
extern "C" void NameValueCollection_set_Item_m2_202 (NameValueCollection_t2_27 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.Collections.Specialized.NameValueCollection)
extern "C" void NameValueCollection_Add_m2_203 (NameValueCollection_t2_27 * __this, NameValueCollection_t2_27 * ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Add(System.String,System.String)
extern "C" void NameValueCollection_Add_m2_204 (NameValueCollection_t2_27 * __this, String_t* ___name, String_t* ___val, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Clear()
extern "C" void NameValueCollection_Clear_m2_205 (NameValueCollection_t2_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::CopyTo(System.Array,System.Int32)
extern "C" void NameValueCollection_CopyTo_m2_206 (NameValueCollection_t2_27 * __this, Array_t * ___dest, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::RefreshCachedAll()
extern "C" void NameValueCollection_RefreshCachedAll_m2_207 (NameValueCollection_t2_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.Int32)
extern "C" String_t* NameValueCollection_Get_m2_208 (NameValueCollection_t2_27 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::Get(System.String)
extern "C" String_t* NameValueCollection_Get_m2_209 (NameValueCollection_t2_27 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::AsSingleString(System.Collections.ArrayList)
extern "C" String_t* NameValueCollection_AsSingleString_m2_210 (Object_t * __this /* static, unused */, ArrayList_t1_114 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameValueCollection::GetKey(System.Int32)
extern "C" String_t* NameValueCollection_GetKey_m2_211 (NameValueCollection_t2_27 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.Int32)
extern "C" StringU5BU5D_t1_206* NameValueCollection_GetValues_m2_212 (NameValueCollection_t2_27 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::GetValues(System.String)
extern "C" StringU5BU5D_t1_206* NameValueCollection_GetValues_m2_213 (NameValueCollection_t2_27 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameValueCollection::AsStringArray(System.Collections.ArrayList)
extern "C" StringU5BU5D_t1_206* NameValueCollection_AsStringArray_m2_214 (Object_t * __this /* static, unused */, ArrayList_t1_114 * ___values, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameValueCollection::HasKeys()
extern "C" bool NameValueCollection_HasKeys_m2_215 (NameValueCollection_t2_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Remove(System.String)
extern "C" void NameValueCollection_Remove_m2_216 (NameValueCollection_t2_27 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::Set(System.String,System.String)
extern "C" void NameValueCollection_Set_m2_217 (NameValueCollection_t2_27 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameValueCollection::InvalidateCachedArrays()
extern "C" void NameValueCollection_InvalidateCachedArrays_m2_218 (NameValueCollection_t2_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
