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

// System.Net.NetworkInformation.MacOsIPInterfaceProperties
struct MacOsIPInterfaceProperties_t2_354;
// System.Net.NetworkInformation.MacOsNetworkInterface
struct MacOsNetworkInterface_t2_371;
// System.Collections.Generic.List`1<System.Net.IPAddress>
struct List_1_t1_945;
// System.Net.NetworkInformation.IPv4InterfaceProperties
struct IPv4InterfaceProperties_t2_350;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.MacOsIPInterfaceProperties::.ctor(System.Net.NetworkInformation.MacOsNetworkInterface,System.Collections.Generic.List`1<System.Net.IPAddress>)
extern "C" void MacOsIPInterfaceProperties__ctor_m2_2691 (MacOsIPInterfaceProperties_t2_354 * __this, MacOsNetworkInterface_t2_371 * ___iface, List_1_t1_945 * ___addresses, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.IPv4InterfaceProperties System.Net.NetworkInformation.MacOsIPInterfaceProperties::GetIPv4Properties()
extern "C" IPv4InterfaceProperties_t2_350 * MacOsIPInterfaceProperties_GetIPv4Properties_m2_2692 (MacOsIPInterfaceProperties_t2_354 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
