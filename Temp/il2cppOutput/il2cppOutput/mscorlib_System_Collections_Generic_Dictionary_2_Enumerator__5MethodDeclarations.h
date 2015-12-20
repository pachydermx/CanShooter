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

// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t1_1309;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__5.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_7226_gshared (Enumerator_t1_1315 * __this, Dictionary_2_t1_1309 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_7226(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1315 *, Dictionary_2_t1_1309 *, const MethodInfo*))Enumerator__ctor_m1_7226_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_7227_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_7227(__this, method) (( Object_t * (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_7227_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_7228_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_7228(__this, method) (( void (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_7228_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_168  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7229_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7229(__this, method) (( DictionaryEntry_t1_168  (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_7229_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7230_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7230(__this, method) (( Object_t * (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_7230_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7231_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7231(__this, method) (( Object_t * (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_7231_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_7232_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_7232(__this, method) (( bool (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_MoveNext_m1_7232_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1311  Enumerator_get_Current_m1_7233_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_7233(__this, method) (( KeyValuePair_2_t1_1311  (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_get_Current_m1_7233_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_7234_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_7234(__this, method) (( Object_t * (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_7234_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
extern "C" Object_t * Enumerator_get_CurrentValue_m1_7235_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_7235(__this, method) (( Object_t * (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_7235_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
extern "C" void Enumerator_Reset_m1_7236_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_7236(__this, method) (( void (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_Reset_m1_7236_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_7237_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_7237(__this, method) (( void (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_VerifyState_m1_7237_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_7238_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_7238(__this, method) (( void (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_7238_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m1_7239_gshared (Enumerator_t1_1315 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_7239(__this, method) (( void (*) (Enumerator_t1_1315 *, const MethodInfo*))Enumerator_Dispose_m1_7239_gshared)(__this, method)
