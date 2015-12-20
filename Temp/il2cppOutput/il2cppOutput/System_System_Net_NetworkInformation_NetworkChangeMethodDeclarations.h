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

// System.Net.NetworkInformation.NetworkChange
struct NetworkChange_t2_405;
// System.Net.NetworkInformation.NetworkAddressChangedEventHandler
struct NetworkAddressChangedEventHandler_t2_406;
// System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler
struct NetworkAvailabilityChangedEventHandler_t2_407;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.NetworkChange::.ctor()
extern "C" void NetworkChange__ctor_m2_2928 (NetworkChange_t2_405 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkChange::add_NetworkAddressChanged(System.Net.NetworkInformation.NetworkAddressChangedEventHandler)
extern "C" void NetworkChange_add_NetworkAddressChanged_m2_2929 (Object_t * __this /* static, unused */, NetworkAddressChangedEventHandler_t2_406 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkChange::remove_NetworkAddressChanged(System.Net.NetworkInformation.NetworkAddressChangedEventHandler)
extern "C" void NetworkChange_remove_NetworkAddressChanged_m2_2930 (Object_t * __this /* static, unused */, NetworkAddressChangedEventHandler_t2_406 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkChange::add_NetworkAvailabilityChanged(System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler)
extern "C" void NetworkChange_add_NetworkAvailabilityChanged_m2_2931 (Object_t * __this /* static, unused */, NetworkAvailabilityChangedEventHandler_t2_407 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkChange::remove_NetworkAvailabilityChanged(System.Net.NetworkInformation.NetworkAvailabilityChangedEventHandler)
extern "C" void NetworkChange_remove_NetworkAvailabilityChanged_m2_2932 (Object_t * __this /* static, unused */, NetworkAvailabilityChangedEventHandler_t2_407 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
