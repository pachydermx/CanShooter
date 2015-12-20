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

// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t4_22;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t1_957;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t1_1281;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator__0.h"

// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
extern "C" void HashSet_1__ctor_m4_88_gshared (HashSet_1_t4_22 * __this, const MethodInfo* method);
#define HashSet_1__ctor_m4_88(__this, method) (( void (*) (HashSet_1_t4_22 *, const MethodInfo*))HashSet_1__ctor_m4_88_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1__ctor_m4_89_gshared (HashSet_1_t4_22 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define HashSet_1__ctor_m4_89(__this, ___info, ___context, method) (( void (*) (HashSet_1_t4_22 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))HashSet_1__ctor_m4_89_gshared)(__this, ___info, ___context, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
extern "C" Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4_90_gshared (HashSet_1_t4_22 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4_90(__this, method) (( Object_t* (*) (HashSet_1_t4_22 *, const MethodInfo*))HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m4_90_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
extern "C" bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4_91_gshared (HashSet_1_t4_22 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4_91(__this, method) (( bool (*) (HashSet_1_t4_22 *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m4_91_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m4_92_gshared (HashSet_1_t4_22 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m4_92(__this, ___array, ___index, method) (( void (*) (HashSet_1_t4_22 *, ObjectU5BU5D_t1_158*, int32_t, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m4_92_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
extern "C" void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4_93_gshared (HashSet_1_t4_22 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4_93(__this, ___item, method) (( void (*) (HashSet_1_t4_22 *, Object_t *, const MethodInfo*))HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m4_93_gshared)(__this, ___item, method)
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m4_94_gshared (HashSet_1_t4_22 * __this, const MethodInfo* method);
#define HashSet_1_System_Collections_IEnumerable_GetEnumerator_m4_94(__this, method) (( Object_t * (*) (HashSet_1_t4_22 *, const MethodInfo*))HashSet_1_System_Collections_IEnumerable_GetEnumerator_m4_94_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::get_Count()
extern "C" int32_t HashSet_1_get_Count_m4_95_gshared (HashSet_1_t4_22 * __this, const MethodInfo* method);
#define HashSet_1_get_Count_m4_95(__this, method) (( int32_t (*) (HashSet_1_t4_22 *, const MethodInfo*))HashSet_1_get_Count_m4_95_gshared)(__this, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
extern "C" void HashSet_1_Init_m4_96_gshared (HashSet_1_t4_22 * __this, int32_t ___capacity, Object_t* ___comparer, const MethodInfo* method);
#define HashSet_1_Init_m4_96(__this, ___capacity, ___comparer, method) (( void (*) (HashSet_1_t4_22 *, int32_t, Object_t*, const MethodInfo*))HashSet_1_Init_m4_96_gshared)(__this, ___capacity, ___comparer, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::InitArrays(System.Int32)
extern "C" void HashSet_1_InitArrays_m4_97_gshared (HashSet_1_t4_22 * __this, int32_t ___size, const MethodInfo* method);
#define HashSet_1_InitArrays_m4_97(__this, ___size, method) (( void (*) (HashSet_1_t4_22 *, int32_t, const MethodInfo*))HashSet_1_InitArrays_m4_97_gshared)(__this, ___size, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::SlotsContainsAt(System.Int32,System.Int32,T)
extern "C" bool HashSet_1_SlotsContainsAt_m4_98_gshared (HashSet_1_t4_22 * __this, int32_t ___index, int32_t ___hash, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_SlotsContainsAt_m4_98(__this, ___index, ___hash, ___item, method) (( bool (*) (HashSet_1_t4_22 *, int32_t, int32_t, Object_t *, const MethodInfo*))HashSet_1_SlotsContainsAt_m4_98_gshared)(__this, ___index, ___hash, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32)
extern "C" void HashSet_1_CopyTo_m4_99_gshared (HashSet_1_t4_22 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___index, const MethodInfo* method);
#define HashSet_1_CopyTo_m4_99(__this, ___array, ___index, method) (( void (*) (HashSet_1_t4_22 *, ObjectU5BU5D_t1_158*, int32_t, const MethodInfo*))HashSet_1_CopyTo_m4_99_gshared)(__this, ___array, ___index, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
extern "C" void HashSet_1_CopyTo_m4_100_gshared (HashSet_1_t4_22 * __this, ObjectU5BU5D_t1_158* ___array, int32_t ___index, int32_t ___count, const MethodInfo* method);
#define HashSet_1_CopyTo_m4_100(__this, ___array, ___index, ___count, method) (( void (*) (HashSet_1_t4_22 *, ObjectU5BU5D_t1_158*, int32_t, int32_t, const MethodInfo*))HashSet_1_CopyTo_m4_100_gshared)(__this, ___array, ___index, ___count, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Resize()
extern "C" void HashSet_1_Resize_m4_101_gshared (HashSet_1_t4_22 * __this, const MethodInfo* method);
#define HashSet_1_Resize_m4_101(__this, method) (( void (*) (HashSet_1_t4_22 *, const MethodInfo*))HashSet_1_Resize_m4_101_gshared)(__this, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetLinkHashCode(System.Int32)
extern "C" int32_t HashSet_1_GetLinkHashCode_m4_102_gshared (HashSet_1_t4_22 * __this, int32_t ___index, const MethodInfo* method);
#define HashSet_1_GetLinkHashCode_m4_102(__this, ___index, method) (( int32_t (*) (HashSet_1_t4_22 *, int32_t, const MethodInfo*))HashSet_1_GetLinkHashCode_m4_102_gshared)(__this, ___index, method)
// System.Int32 System.Collections.Generic.HashSet`1<System.Object>::GetItemHashCode(T)
extern "C" int32_t HashSet_1_GetItemHashCode_m4_103_gshared (HashSet_1_t4_22 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_GetItemHashCode_m4_103(__this, ___item, method) (( int32_t (*) (HashSet_1_t4_22 *, Object_t *, const MethodInfo*))HashSet_1_GetItemHashCode_m4_103_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
extern "C" bool HashSet_1_Add_m4_104_gshared (HashSet_1_t4_22 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Add_m4_104(__this, ___item, method) (( bool (*) (HashSet_1_t4_22 *, Object_t *, const MethodInfo*))HashSet_1_Add_m4_104_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::Clear()
extern "C" void HashSet_1_Clear_m4_105_gshared (HashSet_1_t4_22 * __this, const MethodInfo* method);
#define HashSet_1_Clear_m4_105(__this, method) (( void (*) (HashSet_1_t4_22 *, const MethodInfo*))HashSet_1_Clear_m4_105_gshared)(__this, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Contains(T)
extern "C" bool HashSet_1_Contains_m4_106_gshared (HashSet_1_t4_22 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Contains_m4_106(__this, ___item, method) (( bool (*) (HashSet_1_t4_22 *, Object_t *, const MethodInfo*))HashSet_1_Contains_m4_106_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Remove(T)
extern "C" bool HashSet_1_Remove_m4_107_gshared (HashSet_1_t4_22 * __this, Object_t * ___item, const MethodInfo* method);
#define HashSet_1_Remove_m4_107(__this, ___item, method) (( bool (*) (HashSet_1_t4_22 *, Object_t *, const MethodInfo*))HashSet_1_Remove_m4_107_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void HashSet_1_GetObjectData_m4_108_gshared (HashSet_1_t4_22 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method);
#define HashSet_1_GetObjectData_m4_108(__this, ___info, ___context, method) (( void (*) (HashSet_1_t4_22 *, SerializationInfo_t1_178 *, StreamingContext_t1_526 , const MethodInfo*))HashSet_1_GetObjectData_m4_108_gshared)(__this, ___info, ___context, method)
// System.Void System.Collections.Generic.HashSet`1<System.Object>::OnDeserialization(System.Object)
extern "C" void HashSet_1_OnDeserialization_m4_109_gshared (HashSet_1_t4_22 * __this, Object_t * ___sender, const MethodInfo* method);
#define HashSet_1_OnDeserialization_m4_109(__this, ___sender, method) (( void (*) (HashSet_1_t4_22 *, Object_t *, const MethodInfo*))HashSet_1_OnDeserialization_m4_109_gshared)(__this, ___sender, method)
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Object>::GetEnumerator()
extern "C" Enumerator_t4_25  HashSet_1_GetEnumerator_m4_110_gshared (HashSet_1_t4_22 * __this, const MethodInfo* method);
#define HashSet_1_GetEnumerator_m4_110(__this, method) (( Enumerator_t4_25  (*) (HashSet_1_t4_22 *, const MethodInfo*))HashSet_1_GetEnumerator_m4_110_gshared)(__this, method)
