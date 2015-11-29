﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.NetworkInformation.LinuxNetworkInterface
struct LinuxNetworkInterface_t2_369;
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

// System.Void System.Net.NetworkInformation.LinuxNetworkInterface::.ctor(System.String)
extern "C" void LinuxNetworkInterface__ctor_m2_2956 (LinuxNetworkInterface_t2_369 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.LinuxNetworkInterface::getifaddrs(System.IntPtr&)
extern "C" int32_t LinuxNetworkInterface_getifaddrs_m2_2957 (Object_t * __this /* static, unused */, IntPtr_t* ___ifap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.LinuxNetworkInterface::freeifaddrs(System.IntPtr)
extern "C" void LinuxNetworkInterface_freeifaddrs_m2_2958 (Object_t * __this /* static, unused */, IntPtr_t ___ifap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.LinuxNetworkInterface::get_IfacePath()
extern "C" String_t* LinuxNetworkInterface_get_IfacePath_m2_2959 (LinuxNetworkInterface_t2_369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.LinuxNetworkInterface::ImplGetAllNetworkInterfaces()
extern "C" NetworkInterfaceU5BU5D_t2_827* LinuxNetworkInterface_ImplGetAllNetworkInterfaces_m2_2960 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPInterfaceProperties System.Net.NetworkInformation.LinuxNetworkInterface::GetIPProperties()
extern "C" IPInterfaceProperties_t2_348 * LinuxNetworkInterface_GetIPProperties_m2_2961 (LinuxNetworkInterface_t2_369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv4InterfaceStatistics System.Net.NetworkInformation.LinuxNetworkInterface::GetIPv4Statistics()
extern "C" IPv4InterfaceStatistics_t2_366 * LinuxNetworkInterface_GetIPv4Statistics_m2_2962 (LinuxNetworkInterface_t2_369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.OperationalStatus System.Net.NetworkInformation.LinuxNetworkInterface::get_OperationalStatus()
extern "C" int32_t LinuxNetworkInterface_get_OperationalStatus_m2_2963 (LinuxNetworkInterface_t2_369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.LinuxNetworkInterface::get_SupportsMulticast()
extern "C" bool LinuxNetworkInterface_get_SupportsMulticast_m2_2964 (LinuxNetworkInterface_t2_369 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
