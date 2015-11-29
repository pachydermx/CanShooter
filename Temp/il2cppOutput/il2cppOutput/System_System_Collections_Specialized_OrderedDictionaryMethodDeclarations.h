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

// System.Collections.Specialized.OrderedDictionary
struct OrderedDictionary_t2_31;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1_181;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Array
struct Array_t;
// System.Collections.ICollection
struct ICollection_t1_858;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1_468;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.OrderedDictionary::.ctor()
extern "C" void OrderedDictionary__ctor_m2_236 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32)
extern "C" void OrderedDictionary__ctor_m2_237 (OrderedDictionary_t2_31 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Collections.IEqualityComparer)
extern "C" void OrderedDictionary__ctor_m2_238 (OrderedDictionary_t2_31 * __this, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Int32,System.Collections.IEqualityComparer)
extern "C" void OrderedDictionary__ctor_m2_239 (OrderedDictionary_t2_31 * __this, int32_t ___capacity, Object_t * ___equalityComparer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OrderedDictionary__ctor_m2_240 (OrderedDictionary_t2_31 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::System.Runtime.Serialization.IDeserializationCallback.OnDeserialization(System.Object)
extern "C" void OrderedDictionary_System_Runtime_Serialization_IDeserializationCallback_OnDeserialization_m2_241 (OrderedDictionary_t2_31 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.OrderedDictionary::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * OrderedDictionary_System_Collections_IEnumerable_GetEnumerator_m2_242 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.OrderedDictionary::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool OrderedDictionary_System_Collections_ICollection_get_IsSynchronized_m2_243 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.OrderedDictionary::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * OrderedDictionary_System_Collections_ICollection_get_SyncRoot_m2_244 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.OrderedDictionary::System.Collections.IDictionary.get_IsFixedSize()
extern "C" bool OrderedDictionary_System_Collections_IDictionary_get_IsFixedSize_m2_245 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::OnDeserialization(System.Object)
extern "C" void OrderedDictionary_OnDeserialization_m2_246 (OrderedDictionary_t2_31 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void OrderedDictionary_GetObjectData_m2_247 (OrderedDictionary_t2_31 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.OrderedDictionary::get_Count()
extern "C" int32_t OrderedDictionary_get_Count_m2_248 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::CopyTo(System.Array,System.Int32)
extern "C" void OrderedDictionary_CopyTo_m2_249 (OrderedDictionary_t2_31 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.OrderedDictionary::get_IsReadOnly()
extern "C" bool OrderedDictionary_get_IsReadOnly_m2_250 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.OrderedDictionary::get_Item(System.Object)
extern "C" Object_t * OrderedDictionary_get_Item_m2_251 (OrderedDictionary_t2_31 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::set_Item(System.Object,System.Object)
extern "C" void OrderedDictionary_set_Item_m2_252 (OrderedDictionary_t2_31 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.OrderedDictionary::get_Item(System.Int32)
extern "C" Object_t * OrderedDictionary_get_Item_m2_253 (OrderedDictionary_t2_31 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::set_Item(System.Int32,System.Object)
extern "C" void OrderedDictionary_set_Item_m2_254 (OrderedDictionary_t2_31 * __this, int32_t ___index, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.OrderedDictionary::get_Keys()
extern "C" Object_t * OrderedDictionary_get_Keys_m2_255 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Specialized.OrderedDictionary::get_Values()
extern "C" Object_t * OrderedDictionary_get_Values_m2_256 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::Add(System.Object,System.Object)
extern "C" void OrderedDictionary_Add_m2_257 (OrderedDictionary_t2_31 * __this, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::Clear()
extern "C" void OrderedDictionary_Clear_m2_258 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.OrderedDictionary::Contains(System.Object)
extern "C" bool OrderedDictionary_Contains_m2_259 (OrderedDictionary_t2_31 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.OrderedDictionary::GetEnumerator()
extern "C" Object_t * OrderedDictionary_GetEnumerator_m2_260 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::Remove(System.Object)
extern "C" void OrderedDictionary_Remove_m2_261 (OrderedDictionary_t2_31 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.OrderedDictionary::FindListEntry(System.Object)
extern "C" int32_t OrderedDictionary_FindListEntry_m2_262 (OrderedDictionary_t2_31 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::WriteCheck()
extern "C" void OrderedDictionary_WriteCheck_m2_263 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.OrderedDictionary System.Collections.Specialized.OrderedDictionary::AsReadOnly()
extern "C" OrderedDictionary_t2_31 * OrderedDictionary_AsReadOnly_m2_264 (OrderedDictionary_t2_31 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::Insert(System.Int32,System.Object,System.Object)
extern "C" void OrderedDictionary_Insert_m2_265 (OrderedDictionary_t2_31 * __this, int32_t ___index, Object_t * ___key, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.OrderedDictionary::RemoveAt(System.Int32)
extern "C" void OrderedDictionary_RemoveAt_m2_266 (OrderedDictionary_t2_31 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
