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

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t1_1290;
// System.Collections.Generic.Dictionary`2<System.Object,System.Int32>
struct Dictionary_2_t1_1280;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t1_2220;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1_161;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_33.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void ValueCollection__ctor_m1_7009_gshared (ValueCollection_t1_1290 * __this, Dictionary_2_t1_1280 * ___dictionary, const MethodInfo* method);
#define ValueCollection__ctor_m1_7009(__this, ___dictionary, method) (( void (*) (ValueCollection_t1_1290 *, Dictionary_2_t1_1280 *, const MethodInfo*))ValueCollection__ctor_m1_7009_gshared)(__this, ___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_7010_gshared (ValueCollection_t1_1290 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_7010(__this, ___item, method) (( void (*) (ValueCollection_t1_1290 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m1_7010_gshared)(__this, ___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Clear()
extern "C" void ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_7011_gshared (ValueCollection_t1_1290 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_7011(__this, method) (( void (*) (ValueCollection_t1_1290 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m1_7011_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_7012_gshared (ValueCollection_t1_1290 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_7012(__this, ___item, method) (( bool (*) (ValueCollection_t1_1290 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m1_7012_gshared)(__this, ___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_7013_gshared (ValueCollection_t1_1290 * __this, int32_t ___item, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_7013(__this, ___item, method) (( bool (*) (ValueCollection_t1_1290 *, int32_t, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m1_7013_gshared)(__this, ___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
extern "C" Object_t* ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_7014_gshared (ValueCollection_t1_1290 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_7014(__this, method) (( Object_t* (*) (ValueCollection_t1_1290 *, const MethodInfo*))ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m1_7014_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
extern "C" void ValueCollection_System_Collections_ICollection_CopyTo_m1_7015_gshared (ValueCollection_t1_1290 * __this, Array_t * ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_CopyTo_m1_7015(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1_1290 *, Array_t *, int32_t, const MethodInfo*))ValueCollection_System_Collections_ICollection_CopyTo_m1_7015_gshared)(__this, ___array, ___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_7016_gshared (ValueCollection_t1_1290 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_7016(__this, method) (( Object_t * (*) (ValueCollection_t1_1290 *, const MethodInfo*))ValueCollection_System_Collections_IEnumerable_GetEnumerator_m1_7016_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
extern "C" bool ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_7017_gshared (ValueCollection_t1_1290 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_7017(__this, method) (( bool (*) (ValueCollection_t1_1290 *, const MethodInfo*))ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m1_7017_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_IsSynchronized()
extern "C" bool ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_7018_gshared (ValueCollection_t1_1290 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_7018(__this, method) (( bool (*) (ValueCollection_t1_1290 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_IsSynchronized_m1_7018_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::System.Collections.ICollection.get_SyncRoot()
extern "C" Object_t * ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_7019_gshared (ValueCollection_t1_1290 * __this, const MethodInfo* method);
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_7019(__this, method) (( Object_t * (*) (ValueCollection_t1_1290 *, const MethodInfo*))ValueCollection_System_Collections_ICollection_get_SyncRoot_m1_7019_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::CopyTo(TValue[],System.Int32)
extern "C" void ValueCollection_CopyTo_m1_7020_gshared (ValueCollection_t1_1290 * __this, Int32U5BU5D_t1_161* ___array, int32_t ___index, const MethodInfo* method);
#define ValueCollection_CopyTo_m1_7020(__this, ___array, ___index, method) (( void (*) (ValueCollection_t1_1290 *, Int32U5BU5D_t1_161*, int32_t, const MethodInfo*))ValueCollection_CopyTo_m1_7020_gshared)(__this, ___array, ___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::GetEnumerator()
extern "C" Enumerator_t1_1291  ValueCollection_GetEnumerator_m1_7021_gshared (ValueCollection_t1_1290 * __this, const MethodInfo* method);
#define ValueCollection_GetEnumerator_m1_7021(__this, method) (( Enumerator_t1_1291  (*) (ValueCollection_t1_1290 *, const MethodInfo*))ValueCollection_GetEnumerator_m1_7021_gshared)(__this, method)
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Int32>::get_Count()
extern "C" int32_t ValueCollection_get_Count_m1_7022_gshared (ValueCollection_t1_1290 * __this, const MethodInfo* method);
#define ValueCollection_get_Count_m1_7022(__this, method) (( int32_t (*) (ValueCollection_t1_1290 *, const MethodInfo*))ValueCollection_get_Count_m1_7022_gshared)(__this, method)
