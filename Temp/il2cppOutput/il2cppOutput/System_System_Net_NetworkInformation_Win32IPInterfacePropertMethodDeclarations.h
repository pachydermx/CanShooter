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

// System.Net.NetworkInformation.Win32IPInterfaceProperties2
struct Win32IPInterfaceProperties2_t2_355;
// System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES
struct Win32_IP_ADAPTER_ADDRESSES_t2_356;
struct Win32_IP_ADAPTER_ADDRESSES_t2_356_marshaled;
// System.Net.NetworkInformation.IPv4InterfaceProperties
struct IPv4InterfaceProperties_t2_350;
// System.Net.NetworkInformation.IPv6InterfaceProperties
struct IPv6InterfaceProperties_t2_372;
// System.Net.NetworkInformation.IPAddressInformationCollection
struct IPAddressInformationCollection_t2_334;
// System.Net.NetworkInformation.IPAddressCollection
struct IPAddressCollection_t2_330;
// System.String
struct String_t;
// System.Net.NetworkInformation.GatewayIPAddressInformationCollection
struct GatewayIPAddressInformationCollection_t2_327;
// System.Net.NetworkInformation.MulticastIPAddressInformationCollection
struct MulticastIPAddressInformationCollection_t2_401;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection
struct UnicastIPAddressInformationCollection_t2_444;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_MIB_IFROW.h"

// System.Void System.Net.NetworkInformation.Win32IPInterfaceProperties2::.ctor(System.Net.NetworkInformation.Win32_IP_ADAPTER_ADDRESSES,System.Net.NetworkInformation.Win32_MIB_IFROW,System.Net.NetworkInformation.Win32_MIB_IFROW)
extern "C" void Win32IPInterfaceProperties2__ctor_m2_2693 (Win32IPInterfaceProperties2_t2_355 * __this, Win32_IP_ADAPTER_ADDRESSES_t2_356 * ___addr, Win32_MIB_IFROW_t2_357  ___mib4, Win32_MIB_IFROW_t2_357  ___mib6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv4InterfaceProperties System.Net.NetworkInformation.Win32IPInterfaceProperties2::GetIPv4Properties()
extern "C" IPv4InterfaceProperties_t2_350 * Win32IPInterfaceProperties2_GetIPv4Properties_m2_2694 (Win32IPInterfaceProperties2_t2_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv6InterfaceProperties System.Net.NetworkInformation.Win32IPInterfaceProperties2::GetIPv6Properties()
extern "C" IPv6InterfaceProperties_t2_372 * Win32IPInterfaceProperties2_GetIPv6Properties_m2_2695 (Win32IPInterfaceProperties2_t2_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressInformationCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_AnycastAddresses()
extern "C" IPAddressInformationCollection_t2_334 * Win32IPInterfaceProperties2_get_AnycastAddresses_m2_2696 (Win32IPInterfaceProperties2_t2_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_DhcpServerAddresses()
extern "C" IPAddressCollection_t2_330 * Win32IPInterfaceProperties2_get_DhcpServerAddresses_m2_2697 (Win32IPInterfaceProperties2_t2_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_DnsAddresses()
extern "C" IPAddressCollection_t2_330 * Win32IPInterfaceProperties2_get_DnsAddresses_m2_2698 (Win32IPInterfaceProperties2_t2_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_DnsSuffix()
extern "C" String_t* Win32IPInterfaceProperties2_get_DnsSuffix_m2_2699 (Win32IPInterfaceProperties2_t2_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.GatewayIPAddressInformationCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_GatewayAddresses()
extern "C" GatewayIPAddressInformationCollection_t2_327 * Win32IPInterfaceProperties2_get_GatewayAddresses_m2_2700 (Win32IPInterfaceProperties2_t2_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_IsDnsEnabled()
extern "C" bool Win32IPInterfaceProperties2_get_IsDnsEnabled_m2_2701 (Win32IPInterfaceProperties2_t2_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_IsDynamicDnsEnabled()
extern "C" bool Win32IPInterfaceProperties2_get_IsDynamicDnsEnabled_m2_2702 (Win32IPInterfaceProperties2_t2_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.MulticastIPAddressInformationCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_MulticastAddresses()
extern "C" MulticastIPAddressInformationCollection_t2_401 * Win32IPInterfaceProperties2_get_MulticastAddresses_m2_2703 (Win32IPInterfaceProperties2_t2_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.UnicastIPAddressInformationCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_UnicastAddresses()
extern "C" UnicastIPAddressInformationCollection_t2_444 * Win32IPInterfaceProperties2_get_UnicastAddresses_m2_2704 (Win32IPInterfaceProperties2_t2_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPAddressCollection System.Net.NetworkInformation.Win32IPInterfaceProperties2::get_WinsServersAddresses()
extern "C" IPAddressCollection_t2_330 * Win32IPInterfaceProperties2_get_WinsServersAddresses_m2_2705 (Win32IPInterfaceProperties2_t2_355 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
