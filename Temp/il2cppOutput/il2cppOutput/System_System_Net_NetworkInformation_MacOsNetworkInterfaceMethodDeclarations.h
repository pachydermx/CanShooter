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

// System.Net.NetworkInformation.MacOsNetworkInterface
struct MacOsNetworkInterface_t2_371;
// System.String
struct String_t;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t2_827;
// System.Net.NetworkInformation.IPInterfaceProperties
struct IPInterfaceProperties_t2_348;
// System.Net.NetworkInformation.IPv4InterfaceStatistics
struct IPv4InterfaceStatistics_t2_366;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_Net_NetworkInformation_OperationalStatus.h"

// System.Void System.Net.NetworkInformation.MacOsNetworkInterface::.ctor(System.String)
extern "C" void MacOsNetworkInterface__ctor_m2_2965 (MacOsNetworkInterface_t2_371 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.MacOsNetworkInterface::getifaddrs(System.IntPtr&)
extern "C" int32_t MacOsNetworkInterface_getifaddrs_m2_2966 (Object_t * __this /* static, unused */, IntPtr_t* ___ifap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.MacOsNetworkInterface::freeifaddrs(System.IntPtr)
extern "C" void MacOsNetworkInterface_freeifaddrs_m2_2967 (Object_t * __this /* static, unused */, IntPtr_t ___ifap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.MacOsNetworkInterface::ImplGetAllNetworkInterfaces()
extern "C" NetworkInterfaceU5BU5D_t2_827* MacOsNetworkInterface_ImplGetAllNetworkInterfaces_m2_2968 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.MacOsNetworkInterface::GetIPProperties()
extern "C" IPInterfaceProperties_t2_348 * MacOsNetworkInterface_GetIPProperties_m2_2969 (MacOsNetworkInterface_t2_371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv4InterfaceStatistics System.Net.NetworkInformation.MacOsNetworkInterface::GetIPv4Statistics()
extern "C" IPv4InterfaceStatistics_t2_366 * MacOsNetworkInterface_GetIPv4Statistics_m2_2970 (MacOsNetworkInterface_t2_371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.MacOsNetworkInterface::get_OperationalStatus()
extern "C" int32_t MacOsNetworkInterface_get_OperationalStatus_m2_2971 (MacOsNetworkInterface_t2_371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.MacOsNetworkInterface::get_SupportsMulticast()
extern "C" bool MacOsNetworkInterface_get_SupportsMulticast_m2_2972 (MacOsNetworkInterface_t2_371 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
