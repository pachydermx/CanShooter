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

// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t2_330;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Net.IPAddress
struct IPAddress_t2_326;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t2_480;
// System.Collections.Generic.IEnumerator`1<System.Net.IPAddress>
struct IEnumerator_1_t1_957;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.IPAddressCollection::.ctor()
extern "C" void IPAddressCollection__ctor_m2_2516 (IPAddressCollection_t2_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.NetworkInformation.IPAddressCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IPAddressCollection_System_Collections_IEnumerable_GetEnumerator_m2_2517 (IPAddressCollection_t2_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressCollection::SetReadOnly()
extern "C" void IPAddressCollection_SetReadOnly_m2_2518 (IPAddressCollection_t2_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressCollection::Add(System.Net.IPAddress)
extern "C" void IPAddressCollection_Add_m2_2519 (IPAddressCollection_t2_330 * __this, IPAddress_t2_326 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressCollection::Clear()
extern "C" void IPAddressCollection_Clear_m2_2520 (IPAddressCollection_t2_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressCollection::Contains(System.Net.IPAddress)
extern "C" bool IPAddressCollection_Contains_m2_2521 (IPAddressCollection_t2_330 * __this, IPAddress_t2_326 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressCollection::CopyTo(System.Net.IPAddress[],System.Int32)
extern "C" void IPAddressCollection_CopyTo_m2_2522 (IPAddressCollection_t2_330 * __this, IPAddressU5BU5D_t2_480* ___array, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Net.IPAddress> System.Net.NetworkInformation.IPAddressCollection::GetEnumerator()
extern "C" Object_t* IPAddressCollection_GetEnumerator_m2_2523 (IPAddressCollection_t2_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressCollection::Remove(System.Net.IPAddress)
extern "C" bool IPAddressCollection_Remove_m2_2524 (IPAddressCollection_t2_330 * __this, IPAddress_t2_326 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.IPAddressCollection::get_Count()
extern "C" int32_t IPAddressCollection_get_Count_m2_2525 (IPAddressCollection_t2_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressCollection::get_IsReadOnly()
extern "C" bool IPAddressCollection_get_IsReadOnly_m2_2526 (IPAddressCollection_t2_330 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.IPAddressCollection::get_Item(System.Int32)
extern "C" IPAddress_t2_326 * IPAddressCollection_get_Item_m2_2527 (IPAddressCollection_t2_330 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
