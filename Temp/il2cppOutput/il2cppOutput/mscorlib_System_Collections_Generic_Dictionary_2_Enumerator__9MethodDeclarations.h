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
struct Dictionary_2_t1_1439;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__9.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_9.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m1_10121_gshared (Enumerator_t1_1445 * __this, Dictionary_2_t1_1439 * ___dictionary, const MethodInfo* method);
#define Enumerator__ctor_m1_10121(__this, ___dictionary, method) (( void (*) (Enumerator_t1_1445 *, Dictionary_2_t1_1439 *, const MethodInfo*))Enumerator__ctor_m1_10121_gshared)(__this, ___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m1_10122_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m1_10122(__this, method) (( Object_t * (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m1_10122_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m1_10123_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m1_10123(__this, method) (( void (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m1_10123_gshared)(__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_168  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_10124_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_10124(__this, method) (( DictionaryEntry_t1_168  (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m1_10124_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_10125_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_10125(__this, method) (( Object_t * (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m1_10125_gshared)(__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_10126_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_10126(__this, method) (( Object_t * (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m1_10126_gshared)(__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::MoveNext()
extern "C" bool Enumerator_MoveNext_m1_10127_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m1_10127(__this, method) (( bool (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_MoveNext_m1_10127_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_Current()
extern "C" KeyValuePair_2_t1_1441  Enumerator_get_Current_m1_10128_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m1_10128(__this, method) (( KeyValuePair_2_t1_1441  (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_get_Current_m1_10128_gshared)(__this, method)
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentKey()
extern "C" Object_t * Enumerator_get_CurrentKey_m1_10129_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentKey_m1_10129(__this, method) (( Object_t * (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_get_CurrentKey_m1_10129_gshared)(__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::get_CurrentValue()
extern "C" bool Enumerator_get_CurrentValue_m1_10130_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentValue_m1_10130(__this, method) (( bool (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_get_CurrentValue_m1_10130_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Reset()
extern "C" void Enumerator_Reset_m1_10131_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_Reset_m1_10131(__this, method) (( void (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_Reset_m1_10131_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyState()
extern "C" void Enumerator_VerifyState_m1_10132_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_VerifyState_m1_10132(__this, method) (( void (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_VerifyState_m1_10132_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::VerifyCurrent()
extern "C" void Enumerator_VerifyCurrent_m1_10133_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_VerifyCurrent_m1_10133(__this, method) (( void (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_VerifyCurrent_m1_10133_gshared)(__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Boolean>::Dispose()
extern "C" void Enumerator_Dispose_m1_10134_gshared (Enumerator_t1_1445 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m1_10134(__this, method) (( void (*) (Enumerator_t1_1445 *, const MethodInfo*))Enumerator_Dispose_m1_10134_gshared)(__this, method)
