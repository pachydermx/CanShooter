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
struct Dictionary_2_t1_1020;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__14.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_14.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_12769_gshared (Enumerator_t1_1717 * __this, Dictionary_2_t1_1020 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_12769(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1717 *, Dictionary_2_t1_1020 *, const MethodInfo*))Enumerator__ctor_m1_12769_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_12770_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_12770(__this, method) (( Object_t * (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_12770_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_12771_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_12771(__this, method) (( void (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_12771_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_168  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_12772_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_12772(__this, method) (( DictionaryEntry_t1_168  (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_12772_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_12773_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_12773(__this, method) (( Object_t * (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_12773_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_12774_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_12774(__this, method) (( Object_t * (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_12774_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_12775_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_12775(__this, method) (( bool (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_MoveNext_m1_12775_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1713  Enumerator_get_Current_m1_12776_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_12776(__this, method) (( KeyValuePair_2_t1_1713  (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_get_Current_m1_12776_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentKey()
extern "C" int32_t Enumerator_get_CurrentKey_m1_12777_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_12777(__this, method) (( int32_t (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_12777_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_12778_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_12778(__this, method) (( Object_t * (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_12778_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_12779_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_12779(__this, method) (( void (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_Reset_m1_12779_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_12780_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_12780(__this, method) (( void (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_VerifyState_m1_12780_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_12781_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_12781(__this, method) (( void (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_12781_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Int32,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_12782_gshared (Enumerator_t1_1717 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_12782(__this, method) (( void (*) (Enumerator_t1_1717 *, const MethodInfo*))Enumerator_Dispose_m1_12782_gshared)(__this, method)
