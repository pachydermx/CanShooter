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

// System.Net.NetworkInformation.LinuxUnicastIPAddressInformation
struct LinuxUnicastIPAddressInformation_t2_443;
// System.Net.IPAddress
struct IPAddress_t2_326;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_NetworkInformation_DuplicateAddressDetecti.h"
#include "System_System_Net_NetworkInformation_PrefixOrigin.h"
#include "System_System_Net_NetworkInformation_SuffixOrigin.h"

// System.Void System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::.ctor(System.Net.IPAddress)
extern "C" void LinuxUnicastIPAddressInformation__ctor_m2_3124 (LinuxUnicastIPAddressInformation_t2_443 * __this, IPAddress_t2_326 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_Address()
extern "C" IPAddress_t2_326 * LinuxUnicastIPAddressInformation_get_Address_m2_3125 (LinuxUnicastIPAddressInformation_t2_443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_IsDnsEligible()
extern "C" bool LinuxUnicastIPAddressInformation_get_IsDnsEligible_m2_3126 (LinuxUnicastIPAddressInformation_t2_443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_IsTransient()
extern "C" bool LinuxUnicastIPAddressInformation_get_IsTransient_m2_3127 (LinuxUnicastIPAddressInformation_t2_443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_AddressPreferredLifetime()
extern "C" int64_t LinuxUnicastIPAddressInformation_get_AddressPreferredLifetime_m2_3128 (LinuxUnicastIPAddressInformation_t2_443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_AddressValidLifetime()
extern "C" int64_t LinuxUnicastIPAddressInformation_get_AddressValidLifetime_m2_3129 (LinuxUnicastIPAddressInformation_t2_443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_DhcpLeaseLifetime()
extern "C" int64_t LinuxUnicastIPAddressInformation_get_DhcpLeaseLifetime_m2_3130 (LinuxUnicastIPAddressInformation_t2_443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.DuplicateAddressDetectionState System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_DuplicateAddressDetectionState()
extern "C" int32_t LinuxUnicastIPAddressInformation_get_DuplicateAddressDetectionState_m2_3131 (LinuxUnicastIPAddressInformation_t2_443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_IPv4Mask()
extern "C" IPAddress_t2_326 * LinuxUnicastIPAddressInformation_get_IPv4Mask_m2_3132 (LinuxUnicastIPAddressInformation_t2_443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.PrefixOrigin System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_PrefixOrigin()
extern "C" int32_t LinuxUnicastIPAddressInformation_get_PrefixOrigin_m2_3133 (LinuxUnicastIPAddressInformation_t2_443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.SuffixOrigin System.Net.NetworkInformation.LinuxUnicastIPAddressInformation::get_SuffixOrigin()
extern "C" int32_t LinuxUnicastIPAddressInformation_get_SuffixOrigin_m2_3134 (LinuxUnicastIPAddressInformation_t2_443 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
