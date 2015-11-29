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

// System.Net.NetworkInformation.NetworkInterface
struct NetworkInterface_t2_410;
// System.Net.NetworkInformation.NetworkInterface[]
struct NetworkInterfaceU5BU5D_t2_827;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.NetworkInformation.NetworkInterface::.ctor()
extern "C" void NetworkInterface__ctor_m2_2936 (NetworkInterface_t2_410 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.NetworkInterface::.cctor()
extern "C" void NetworkInterface__cctor_m2_2937 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.NetworkInterface::uname(System.IntPtr)
extern "C" int32_t NetworkInterface_uname_m2_2938 (Object_t * __this /* static, unused */, IntPtr_t ___buf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.NetworkInterface[] System.Net.NetworkInformation.NetworkInterface::GetAllNetworkInterfaces()
extern "C" NetworkInterfaceU5BU5D_t2_827* NetworkInterface_GetAllNetworkInterfaces_m2_2939 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.NetworkInterface::GetIsNetworkAvailable()
extern "C" bool NetworkInterface_GetIsNetworkAvailable_m2_2940 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.NetworkInformation.NetworkInterface::ReadLine(System.String)
extern "C" String_t* NetworkInterface_ReadLine_m2_2941 (Object_t * __this /* static, unused */, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.NetworkInterface::get_LoopbackInterfaceIndex()
extern "C" int32_t NetworkInterface_get_LoopbackInterfaceIndex_m2_2942 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
