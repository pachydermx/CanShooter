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

// System.Net.IPAddress
struct IPAddress_t2_326;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.UInt16[]
struct UInt16U5BU5D_t1_611;
// System.String
struct String_t;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_AddressFamily.h"

// System.Void System.Net.IPAddress::.ctor(System.Int64)
extern "C" void IPAddress__ctor_m2_4613 (IPAddress_t2_326 * __this, int64_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.Byte[])
extern "C" void IPAddress__ctor_m2_4614 (IPAddress_t2_326 * __this, ByteU5BU5D_t1_72* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.Byte[],System.Int64)
extern "C" void IPAddress__ctor_m2_4615 (IPAddress_t2_326 * __this, ByteU5BU5D_t1_72* ___address, int64_t ___scopeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.ctor(System.UInt16[],System.Int64)
extern "C" void IPAddress__ctor_m2_4616 (IPAddress_t2_326 * __this, UInt16U5BU5D_t1_611* ___address, int64_t ___scopeId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::.cctor()
extern "C" void IPAddress__cctor_m2_4617 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::SwapShort(System.Int16)
extern "C" int16_t IPAddress_SwapShort_m2_4618 (Object_t * __this /* static, unused */, int16_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::SwapInt(System.Int32)
extern "C" int32_t IPAddress_SwapInt_m2_4619 (Object_t * __this /* static, unused */, int32_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::SwapLong(System.Int64)
extern "C" int64_t IPAddress_SwapLong_m2_4620 (Object_t * __this /* static, unused */, int64_t ___number, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::HostToNetworkOrder(System.Int16)
extern "C" int16_t IPAddress_HostToNetworkOrder_m2_4621 (Object_t * __this /* static, unused */, int16_t ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::HostToNetworkOrder(System.Int32)
extern "C" int32_t IPAddress_HostToNetworkOrder_m2_4622 (Object_t * __this /* static, unused */, int32_t ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::HostToNetworkOrder(System.Int64)
extern "C" int64_t IPAddress_HostToNetworkOrder_m2_4623 (Object_t * __this /* static, unused */, int64_t ___host, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int16 System.Net.IPAddress::NetworkToHostOrder(System.Int16)
extern "C" int16_t IPAddress_NetworkToHostOrder_m2_4624 (Object_t * __this /* static, unused */, int16_t ___network, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::NetworkToHostOrder(System.Int32)
extern "C" int32_t IPAddress_NetworkToHostOrder_m2_4625 (Object_t * __this /* static, unused */, int32_t ___network, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::NetworkToHostOrder(System.Int64)
extern "C" int64_t IPAddress_NetworkToHostOrder_m2_4626 (Object_t * __this /* static, unused */, int64_t ___network, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::Parse(System.String)
extern "C" IPAddress_t2_326 * IPAddress_Parse_m2_4627 (Object_t * __this /* static, unused */, String_t* ___ipString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::TryParse(System.String,System.Net.IPAddress&)
extern "C" bool IPAddress_TryParse_m2_4628 (Object_t * __this /* static, unused */, String_t* ___ipString, IPAddress_t2_326 ** ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV4(System.String)
extern "C" IPAddress_t2_326 * IPAddress_ParseIPV4_m2_4629 (Object_t * __this /* static, unused */, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.IPAddress::ParseIPV6(System.String)
extern "C" IPAddress_t2_326 * IPAddress_ParseIPV6_m2_4630 (Object_t * __this /* static, unused */, String_t* ___ip, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_Address()
extern "C" int64_t IPAddress_get_Address_m2_4631 (IPAddress_t2_326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::set_Address(System.Int64)
extern "C" void IPAddress_set_Address_m2_4632 (IPAddress_t2_326 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_InternalIPv4Address()
extern "C" int64_t IPAddress_get_InternalIPv4Address_m2_4633 (IPAddress_t2_326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::get_IsIPv6LinkLocal()
extern "C" bool IPAddress_get_IsIPv6LinkLocal_m2_4634 (IPAddress_t2_326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::get_IsIPv6SiteLocal()
extern "C" bool IPAddress_get_IsIPv6SiteLocal_m2_4635 (IPAddress_t2_326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::get_IsIPv6Multicast()
extern "C" bool IPAddress_get_IsIPv6Multicast_m2_4636 (IPAddress_t2_326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPAddress::get_ScopeId()
extern "C" int64_t IPAddress_get_ScopeId_m2_4637 (IPAddress_t2_326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPAddress::set_ScopeId(System.Int64)
extern "C" void IPAddress_set_ScopeId_m2_4638 (IPAddress_t2_326 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.IPAddress::GetAddressBytes()
extern "C" ByteU5BU5D_t1_72* IPAddress_GetAddressBytes_m2_4639 (IPAddress_t2_326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Sockets.AddressFamily System.Net.IPAddress::get_AddressFamily()
extern "C" int32_t IPAddress_get_AddressFamily_m2_4640 (IPAddress_t2_326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::IsLoopback(System.Net.IPAddress)
extern "C" bool IPAddress_IsLoopback_m2_4641 (Object_t * __this /* static, unused */, IPAddress_t2_326 * ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString()
extern "C" String_t* IPAddress_ToString_m2_4642 (IPAddress_t2_326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPAddress::ToString(System.Int64)
extern "C" String_t* IPAddress_ToString_m2_4643 (Object_t * __this /* static, unused */, int64_t ___addr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPAddress::Equals(System.Object)
extern "C" bool IPAddress_Equals_m2_4644 (IPAddress_t2_326 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::GetHashCode()
extern "C" int32_t IPAddress_GetHashCode_m2_4645 (IPAddress_t2_326 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPAddress::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t IPAddress_Hash_m2_4646 (Object_t * __this /* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, const MethodInfo* method) IL2CPP_METHOD_ATTR;
