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

// System.Net.NetworkInformation.IPAddressInformationCollection
struct IPAddressInformationCollection_t2_334;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Net.NetworkInformation.IPAddressInformation
struct IPAddressInformation_t2_332;
// System.Net.NetworkInformation.IPAddressInformation[]
struct IPAddressInformationU5BU5D_t2_823;
// System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.IPAddressInformation>
struct IEnumerator_1_t1_960;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.IPAddressInformationCollection::.ctor()
extern "C" void IPAddressInformationCollection__ctor_m2_2541 (IPAddressInformationCollection_t2_334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.NetworkInformation.IPAddressInformationCollection::System.Collections.IEnumerable.GetEnumerator()
extern "C" Object_t * IPAddressInformationCollection_System_Collections_IEnumerable_GetEnumerator_m2_2542 (IPAddressInformationCollection_t2_334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressInformationCollection::Add(System.Net.NetworkInformation.IPAddressInformation)
extern "C" void IPAddressInformationCollection_Add_m2_2543 (IPAddressInformationCollection_t2_334 * __this, IPAddressInformation_t2_332 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressInformationCollection::Clear()
extern "C" void IPAddressInformationCollection_Clear_m2_2544 (IPAddressInformationCollection_t2_334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressInformationCollection::Contains(System.Net.NetworkInformation.IPAddressInformation)
extern "C" bool IPAddressInformationCollection_Contains_m2_2545 (IPAddressInformationCollection_t2_334 * __this, IPAddressInformation_t2_332 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.IPAddressInformationCollection::CopyTo(System.Net.NetworkInformation.IPAddressInformation[],System.Int32)
extern "C" void IPAddressInformationCollection_CopyTo_m2_2546 (IPAddressInformationCollection_t2_334 * __this, IPAddressInformationU5BU5D_t2_823* ___array, int32_t ___offset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<System.Net.NetworkInformation.IPAddressInformation> System.Net.NetworkInformation.IPAddressInformationCollection::GetEnumerator()
extern "C" Object_t* IPAddressInformationCollection_GetEnumerator_m2_2547 (IPAddressInformationCollection_t2_334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressInformationCollection::Remove(System.Net.NetworkInformation.IPAddressInformation)
extern "C" bool IPAddressInformationCollection_Remove_m2_2548 (IPAddressInformationCollection_t2_334 * __this, IPAddressInformation_t2_332 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.IPAddressInformationCollection::get_Count()
extern "C" int32_t IPAddressInformationCollection_get_Count_m2_2549 (IPAddressInformationCollection_t2_334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.IPAddressInformationCollection::get_IsReadOnly()
extern "C" bool IPAddressInformationCollection_get_IsReadOnly_m2_2550 (IPAddressInformationCollection_t2_334 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressInformation System.Net.NetworkInformation.IPAddressInformationCollection::get_Item(System.Int32)
extern "C" IPAddressInformation_t2_332 * IPAddressInformationCollection_get_Item_m2_2551 (IPAddressInformationCollection_t2_334 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
