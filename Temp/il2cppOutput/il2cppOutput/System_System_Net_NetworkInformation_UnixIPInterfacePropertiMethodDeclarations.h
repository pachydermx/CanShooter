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

// System.Net.NetworkInformation.UnixIPInterfaceProperties
struct UnixIPInterfaceProperties_t2_349;
// System.Net.NetworkInformation.UnixNetworkInterface
struct UnixNetworkInterface_t2_351;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1_947;
// System.Net.NetworkInformation.IPv6InterfaceProperties
struct IPv6InterfaceProperties_t2_372;
// System.String
struct String_t;
// System.Net.NetworkInformation.IPAddressInformationCollection
struct IPAddressInformationCollection_t2_334;
// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t2_330;
// System.Net.NetworkInformation.GatewayIPAddressInformationCollection
struct GatewayIPAddressInformationCollection_t2_327;
// System.Net.NetworkInformation.MulticastIPAddressInformationCollection
struct MulticastIPAddressInformationCollection_t2_401;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_t2_444;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.UnixIPInterfaceProperties::.ctor(System.Net.NetworkInformation.UnixNetworkInterface,System.Collections.Generic.List`1<System.Net.IPAddress>)
extern "C" void UnixIPInterfaceProperties__ctor_m2_2674 (UnixIPInterfaceProperties_t2_349 * __this, UnixNetworkInterface_t2_351 * ___iface, List_1_t1_947 * ___addresses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixIPInterfaceProperties::.cctor()
extern "C" void UnixIPInterfaceProperties__cctor_m2_2675 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv6InterfaceProperties System.Net.NetworkInformation.UnixIPInterfaceProperties::GetIPv6Properties()
extern "C" IPv6InterfaceProperties_t2_372 * UnixIPInterfaceProperties_GetIPv6Properties_m2_2676 (UnixIPInterfaceProperties_t2_349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixIPInterfaceProperties::ParseRouteInfo(System.String)
extern "C" void UnixIPInterfaceProperties_ParseRouteInfo_m2_2677 (UnixIPInterfaceProperties_t2_349 * __this, String_t* ___iface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.UnixIPInterfaceProperties::ParseResolvConf()
extern "C" void UnixIPInterfaceProperties_ParseResolvConf_m2_2678 (UnixIPInterfaceProperties_t2_349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressInformationCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_AnycastAddresses()
extern "C" IPAddressInformationCollection_t2_334 * UnixIPInterfaceProperties_get_AnycastAddresses_m2_2679 (UnixIPInterfaceProperties_t2_349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_DhcpServerAddresses()
extern "C" IPAddressCollection_t2_330 * UnixIPInterfaceProperties_get_DhcpServerAddresses_m2_2680 (UnixIPInterfaceProperties_t2_349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_DnsAddresses()
extern "C" IPAddressCollection_t2_330 * UnixIPInterfaceProperties_get_DnsAddresses_m2_2681 (UnixIPInterfaceProperties_t2_349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.UnixIPInterfaceProperties::get_DnsSuffix()
extern "C" String_t* UnixIPInterfaceProperties_get_DnsSuffix_m2_2682 (UnixIPInterfaceProperties_t2_349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.GatewayIPAddressInformationCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_GatewayAddresses()
extern "C" GatewayIPAddressInformationCollection_t2_327 * UnixIPInterfaceProperties_get_GatewayAddresses_m2_2683 (UnixIPInterfaceProperties_t2_349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.UnixIPInterfaceProperties::get_IsDnsEnabled()
extern "C" bool UnixIPInterfaceProperties_get_IsDnsEnabled_m2_2684 (UnixIPInterfaceProperties_t2_349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.UnixIPInterfaceProperties::get_IsDynamicDnsEnabled()
extern "C" bool UnixIPInterfaceProperties_get_IsDynamicDnsEnabled_m2_2685 (UnixIPInterfaceProperties_t2_349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.MulticastIPAddressInformationCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_MulticastAddresses()
extern "C" MulticastIPAddressInformationCollection_t2_401 * UnixIPInterfaceProperties_get_MulticastAddresses_m2_2686 (UnixIPInterfaceProperties_t2_349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_UnicastAddresses()
extern "C" UnicastIPAddressInformationCollection_t2_444 * UnixIPInterfaceProperties_get_UnicastAddresses_m2_2687 (UnixIPInterfaceProperties_t2_349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.UnixIPInterfaceProperties::get_WinsServersAddresses()
extern "C" IPAddressCollection_t2_330 * UnixIPInterfaceProperties_get_WinsServersAddresses_m2_2688 (UnixIPInterfaceProperties_t2_349 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
