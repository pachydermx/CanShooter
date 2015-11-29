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
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_Sockets_IPPacketInformation.h"

// System.Void System.Net.Sockets.IPPacketInformation::.ctor(System.Net.IPAddress,System.Int32)
extern "C" void IPPacketInformation__ctor_m2_3269 (IPPacketInformation_t2_465 * __this, IPAddress_t2_326 * ___address, int32_t ___iface, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress System.Net.Sockets.IPPacketInformation::get_Address()
extern "C" IPAddress_t2_326 * IPPacketInformation_get_Address_m2_3270 (IPPacketInformation_t2_465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.IPPacketInformation::get_Interface()
extern "C" int32_t IPPacketInformation_get_Interface_m2_3271 (IPPacketInformation_t2_465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.IPPacketInformation::Equals(System.Object)
extern "C" bool IPPacketInformation_Equals_m2_3272 (IPPacketInformation_t2_465 * __this, Object_t * ___comparand, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Sockets.IPPacketInformation::GetHashCode()
extern "C" int32_t IPPacketInformation_GetHashCode_m2_3273 (IPPacketInformation_t2_465 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.IPPacketInformation::op_Equality(System.Net.Sockets.IPPacketInformation,System.Net.Sockets.IPPacketInformation)
extern "C" bool IPPacketInformation_op_Equality_m2_3274 (Object_t * __this /* static, unused */, IPPacketInformation_t2_465  ___p1, IPPacketInformation_t2_465  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Sockets.IPPacketInformation::op_Inequality(System.Net.Sockets.IPPacketInformation,System.Net.Sockets.IPPacketInformation)
extern "C" bool IPPacketInformation_op_Inequality_m2_3275 (Object_t * __this /* static, unused */, IPPacketInformation_t2_465  ___p1, IPPacketInformation_t2_465  ___p2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
