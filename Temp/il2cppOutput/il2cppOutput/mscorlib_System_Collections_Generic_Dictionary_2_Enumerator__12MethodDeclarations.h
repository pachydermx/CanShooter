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

// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_t1_1017;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__12.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_12.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_11222_gshared (Enumerator_t1_1537 * __this, Dictionary_2_t1_1017 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_11222(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1537 *, Dictionary_2_t1_1017 *, const MethodInfo*))Enumerator__ctor_m1_11222_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_11223_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_11223(__this, method) (( Object_t * (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_11223_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_11224_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_11224(__this, method) (( void (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_11224_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_168  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_11225_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_11225(__this, method) (( DictionaryEntry_t1_168  (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_11225_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_11226_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_11226(__this, method) (( Object_t * (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_11226_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_11227_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_11227(__this, method) (( Object_t * (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_11227_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_11228_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_11228(__this, method) (( bool (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_MoveNext_m1_11228_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1533  Enumerator_get_Current_m1_11229_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_11229(__this, method) (( KeyValuePair_2_t1_1533  (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_get_Current_m1_11229_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m1_11230_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_11230(__this, method) (( int32_t (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_11230_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_11231_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_11231(__this, method) (( Object_t * (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_11231_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_11232_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_11232(__this, method) (( void (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_Reset_m1_11232_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_11233_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_11233(__this, method) (( void (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_VerifyState_m1_11233_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_11234_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_11234(__this, method) (( void (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_11234_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_11235_gshared (Enumerator_t1_1537 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_11235(__this, method) (( void (*) (Enumerator_t1_1537 *, const MethodInfo*))Enumerator_Dispose_m1_11235_gshared)(__this, method)
