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

// System.Net.NetworkInformation.Win32UnicastIPAddressInformation
struct Win32UnicastIPAddressInformation_t2_441;
// System.Net.IPAddress
struct IPAddress_t2_326;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_Win32_IP_ADAPTER_UNICAS.h"
#include "System_System_Net_NetworkInformation_DuplicateAddressDetecti.h"
#include "System_System_Net_NetworkInformation_PrefixOrigin.h"
#include "System_System_Net_NetworkInformation_SuffixOrigin.h"

// System.Void System.Net.NetworkInformation.Win32UnicastIPAddressInformation::.ctor(System.Int32,System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS)
extern "C" void Win32UnicastIPAddressInformation__ctor_m2_3113 (Win32UnicastIPAddressInformation_t2_441 * __this, int32_t ___ifIndex, Win32_IP_ADAPTER_UNICAST_ADDRESS_t2_442  ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_Address()
extern "C" IPAddress_t2_326 * Win32UnicastIPAddressInformation_get_Address_m2_3114 (Win32UnicastIPAddressInformation_t2_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_IsDnsEligible()
extern "C" bool Win32UnicastIPAddressInformation_get_IsDnsEligible_m2_3115 (Win32UnicastIPAddressInformation_t2_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_IsTransient()
extern "C" bool Win32UnicastIPAddressInformation_get_IsTransient_m2_3116 (Win32UnicastIPAddressInformation_t2_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_AddressPreferredLifetime()
extern "C" int64_t Win32UnicastIPAddressInformation_get_AddressPreferredLifetime_m2_3117 (Win32UnicastIPAddressInformation_t2_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_AddressValidLifetime()
extern "C" int64_t Win32UnicastIPAddressInformation_get_AddressValidLifetime_m2_3118 (Win32UnicastIPAddressInformation_t2_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_DhcpLeaseLifetime()
extern "C" int64_t Win32UnicastIPAddressInformation_get_DhcpLeaseLifetime_m2_3119 (Win32UnicastIPAddressInformation_t2_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.DuplicateAddressDetectionState System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_DuplicateAddressDetectionState()
extern "C" int32_t Win32UnicastIPAddressInformation_get_DuplicateAddressDetectionState_m2_3120 (Win32UnicastIPAddressInformation_t2_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_IPv4Mask()
extern "C" IPAddress_t2_326 * Win32UnicastIPAddressInformation_get_IPv4Mask_m2_3121 (Win32UnicastIPAddressInformation_t2_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PrefixOrigin System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_PrefixOrigin()
extern "C" int32_t Win32UnicastIPAddressInformation_get_PrefixOrigin_m2_3122 (Win32UnicastIPAddressInformation_t2_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.SuffixOrigin System.Net.NetworkInformation.Win32UnicastIPAddressInformation::get_SuffixOrigin()
extern "C" int32_t Win32UnicastIPAddressInformation_get_SuffixOrigin_m2_3123 (Win32UnicastIPAddressInformation_t2_441 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
