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

// System.Collections.Generic.SortedDictionary`2<System.Object,System.Object>
struct SortedDictionary_2_t2_860;
// System.Object
struct Object_t;
// System.Collections.Generic.SortedDictionary`2/Node<System.Object,System.Object>
struct Node_t2_864;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Collections_Generic_SortedDictionary_2_Enumera.h"
#include "mscorlib_System_Collections_DictionaryEntry.h"
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_5.h"

// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.SortedDictionary`2<TKey,TValue>)
extern "C" void Enumerator__ctor_m2_6887_gshared (Enumerator_t2_867 * __this, SortedDictionary_2_t2_860 * ___dic, const MethodInfo* method);
#define Enumerator__ctor_m2_6887(__this, ___dic, method) (( void (*) (Enumerator_t2_867 *, SortedDictionary_2_t2_860 *, const MethodInfo*))Enumerator__ctor_m2_6887_gshared)(__this, ___dic, method)
// System.Collections.DictionaryEntry System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
extern "C" DictionaryEntry_t1_168  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2_6888_gshared (Enumerator_t2_867 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2_6888(__this, method) (( DictionaryEntry_t1_168  (*) (Enumerator_t2_867 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m2_6888_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m2_6889_gshared (Enumerator_t2_867 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m2_6889(__this, method) (( Object_t * (*) (Enumerator_t2_867 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m2_6889_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
extern "C" Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2_6890_gshared (Enumerator_t2_867 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2_6890(__this, method) (( Object_t * (*) (Enumerator_t2_867 *, const MethodInfo*))Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m2_6890_gshared)(__this, method)
// System.Object System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m2_6891_gshared (Enumerator_t2_867 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m2_6891(__this, method) (( Object_t * (*) (Enumerator_t2_867 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_get_Current_m2_6891_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern "C" void Enumerator_System_Collections_IEnumerator_Reset_m2_6892_gshared (Enumerator_t2_867 * __this, const MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m2_6892(__this, method) (( void (*) (Enumerator_t2_867 *, const MethodInfo*))Enumerator_System_Collections_IEnumerator_Reset_m2_6892_gshared)(__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::get_Current()
extern "C" KeyValuePair_2_t1_1312  Enumerator_get_Current_m2_6893_gshared (Enumerator_t2_867 * __this, const MethodInfo* method);
#define Enumerator_get_Current_m2_6893(__this, method) (( KeyValuePair_2_t1_1312  (*) (Enumerator_t2_867 *, const MethodInfo*))Enumerator_get_Current_m2_6893_gshared)(__this, method)
// System.Boolean System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
extern "C" bool Enumerator_MoveNext_m2_6894_gshared (Enumerator_t2_867 * __this, const MethodInfo* method);
#define Enumerator_MoveNext_m2_6894(__this, method) (( bool (*) (Enumerator_t2_867 *, const MethodInfo*))Enumerator_MoveNext_m2_6894_gshared)(__this, method)
// System.Void System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::Dispose()
extern "C" void Enumerator_Dispose_m2_6895_gshared (Enumerator_t2_867 * __this, const MethodInfo* method);
#define Enumerator_Dispose_m2_6895(__this, method) (( void (*) (Enumerator_t2_867 *, const MethodInfo*))Enumerator_Dispose_m2_6895_gshared)(__this, method)
// System.Collections.Generic.SortedDictionary`2/Node<TKey,TValue> System.Collections.Generic.SortedDictionary`2/Enumerator<System.Object,System.Object>::get_CurrentNode()
extern "C" Node_t2_864 * Enumerator_get_CurrentNode_m2_6896_gshared (Enumerator_t2_867 * __this, const MethodInfo* method);
#define Enumerator_get_CurrentNode_m2_6896(__this, method) (( Node_t2_864 * (*) (Enumerator_t2_867 *, const MethodInfo*))Enumerator_get_CurrentNode_m2_6896_gshared)(__this, method)
