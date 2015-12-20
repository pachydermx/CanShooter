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

// System.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t2_573;
// System.Net.HttpListener
struct HttpListener_t2_572;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.String>
struct IEnumerator_1_t1_967;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.HttpListenerPrefixCollection::.ctor(System.Net.HttpListener)
extern "C" void HttpListenerPrefixCollection__ctor_m2_4356 (HttpListenerPrefixCollection_t2_573 * __this, HttpListener_t2_572 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.HttpListenerPrefixCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * HttpListenerPrefixCollection_System_Collections_IEnumerable_GetEnumerator_m2_4357 (HttpListenerPrefixCollection_t2_573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.HttpListenerPrefixCollection::get_Count()
extern "C" int32_t HttpListenerPrefixCollection_get_Count_m2_4358 (HttpListenerPrefixCollection_t2_573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerPrefixCollection::get_IsReadOnly()
extern "C" bool HttpListenerPrefixCollection_get_IsReadOnly_m2_4359 (HttpListenerPrefixCollection_t2_573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerPrefixCollection::get_IsSynchronized()
extern "C" bool HttpListenerPrefixCollection_get_IsSynchronized_m2_4360 (HttpListenerPrefixCollection_t2_573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerPrefixCollection::Add(System.String)
extern "C" void HttpListenerPrefixCollection_Add_m2_4361 (HttpListenerPrefixCollection_t2_573 * __this, String_t* ___uriPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerPrefixCollection::Clear()
extern "C" void HttpListenerPrefixCollection_Clear_m2_4362 (HttpListenerPrefixCollection_t2_573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerPrefixCollection::Contains(System.String)
extern "C" bool HttpListenerPrefixCollection_Contains_m2_4363 (HttpListenerPrefixCollection_t2_573 * __this, String_t* ___uriPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerPrefixCollection::CopyTo(System.String[],System.Int32)
extern "C" void HttpListenerPrefixCollection_CopyTo_m2_4364 (HttpListenerPrefixCollection_t2_573 * __this, StringU5BU5D_t1_206* ___array, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListenerPrefixCollection::CopyTo(System.Array,System.Int32)
extern "C" void HttpListenerPrefixCollection_CopyTo_m2_4365 (HttpListenerPrefixCollection_t2_573 * __this, Array_t * ___array, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.String> System.Net.HttpListenerPrefixCollection::GetEnumerator()
extern "C" Object_t* HttpListenerPrefixCollection_GetEnumerator_m2_4366 (HttpListenerPrefixCollection_t2_573 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListenerPrefixCollection::Remove(System.String)
extern "C" bool HttpListenerPrefixCollection_Remove_m2_4367 (HttpListenerPrefixCollection_t2_573 * __this, String_t* ___uriPrefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
