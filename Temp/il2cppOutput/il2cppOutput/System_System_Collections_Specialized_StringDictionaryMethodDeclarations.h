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

// System.Collections.Specialized.StringDictionary
struct StringDictionary_t2_33;
// System.String
struct String_t;
// System.Collections.ICollection
struct ICollection_t1_858;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Collections.Specialized.StringDictionary::.ctor()
extern "C" void StringDictionary__ctor_m2_310 (StringDictionary_t2_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.StringDictionary::get_Count()
extern "C" int32_t StringDictionary_get_Count_m2_311 (StringDictionary_t2_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringDictionary::get_IsSynchronized()
extern "C" bool StringDictionary_get_IsSynchronized_m2_312 (StringDictionary_t2_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.StringDictionary::get_Item(System.String)
extern "C" String_t* StringDictionary_get_Item_m2_313 (StringDictionary_t2_33 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringDictionary::set_Item(System.String,System.String)
extern "C" void StringDictionary_set_Item_m2_314 (StringDictionary_t2_33 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.StringDictionary::get_Keys()
extern "C" Object_t * StringDictionary_get_Keys_m2_315 (StringDictionary_t2_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.StringDictionary::get_Values()
extern "C" Object_t * StringDictionary_get_Values_m2_316 (StringDictionary_t2_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.StringDictionary::get_SyncRoot()
extern "C" Object_t * StringDictionary_get_SyncRoot_m2_317 (StringDictionary_t2_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringDictionary::Add(System.String,System.String)
extern "C" void StringDictionary_Add_m2_318 (StringDictionary_t2_33 * __this, String_t* ___key, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringDictionary::Clear()
extern "C" void StringDictionary_Clear_m2_319 (StringDictionary_t2_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringDictionary::ContainsKey(System.String)
extern "C" bool StringDictionary_ContainsKey_m2_320 (StringDictionary_t2_33 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.StringDictionary::ContainsValue(System.String)
extern "C" bool StringDictionary_ContainsValue_m2_321 (StringDictionary_t2_33 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringDictionary::CopyTo(System.Array,System.Int32)
extern "C" void StringDictionary_CopyTo_m2_322 (StringDictionary_t2_33 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.StringDictionary::GetEnumerator()
extern "C" Object_t * StringDictionary_GetEnumerator_m2_323 (StringDictionary_t2_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.StringDictionary::Remove(System.String)
extern "C" void StringDictionary_Remove_m2_324 (StringDictionary_t2_33 * __this, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
