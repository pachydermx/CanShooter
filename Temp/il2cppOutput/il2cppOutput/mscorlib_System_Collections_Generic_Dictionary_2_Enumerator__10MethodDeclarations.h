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

// System.Collections.Generic.Dictionary`2<System.Object,System.Boolean>
struct Dictionary_2_t1_1542;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__10.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_10568_gshared (Enumerator_t1_1548 * __this, Dictionary_2_t1_1542 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_10568(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1548 *, Dictionary_2_t1_1542 *, const MethodInfo*))Enumerator__ctor_m1_10568_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_10569_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_10569(__this, method) (( Object_t * (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_10569_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_10570_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_10570(__this, method) (( void (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_10570_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_168  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_10571_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_10571(__this, method) (( DictionaryEntry_t1_168  (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_10571_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_10572_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_10572(__this, method) (( Object_t * (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_10572_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_10573_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_10573(__this, method) (( Object_t * (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_10573_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_10574_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_10574(__this, method) (( bool (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_MoveNext_m1_10574_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1_1544  Enumerator_get_Current_m1_10575_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_10575(__this, method) (( KeyValuePair_2_t1_1544  (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_get_Current_m1_10575_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_10576_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_10576(__this, method) (( Object_t * (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_10576_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m1_10577_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_10577(__this, method) (( bool (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_10577_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Reset()
extern "C" void Enumerator_Reset_m1_10578_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_10578(__this, method) (( void (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_Reset_m1_10578_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_10579_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_10579(__this, method) (( void (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_VerifyState_m1_10579_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_10580_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_10580(__this, method) (( void (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_10580_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m1_10581_gshared (Enumerator_t1_1548 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_10581(__this, method) (( void (*) (Enumerator_t1_1548 *, const MethodInfo*))Enumerator_Dispose_m1_10581_gshared)(__this, method)
