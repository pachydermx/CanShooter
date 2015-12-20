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

// System.Net.NetworkInformation.Win32_FIXED_INFO
struct Win32_FIXED_INFO_t2_446;
struct Win32_FIXED_INFO_t2_446_marshaled;
// System.Byte[]
struct ByteU5BU5D_t1_72;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.NetworkInformation.Win32_FIXED_INFO::.ctor()
extern "C" void Win32_FIXED_INFO__ctor_m2_3151 (Win32_FIXED_INFO_t2_446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.NetworkInformation.Win32_FIXED_INFO::GetNetworkParams(System.Byte[],System.Int32&)
extern "C" int32_t Win32_FIXED_INFO_GetNetworkParams_m2_3152 (Object_t * __this /* static, unused */, ByteU5BU5D_t1_72* ___bytes, int32_t* ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32_FIXED_INFO::get_Instance()
extern "C" Win32_FIXED_INFO_t2_446 * Win32_FIXED_INFO_get_Instance_m2_3153 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32_FIXED_INFO System.Net.NetworkInformation.Win32_FIXED_INFO::GetInstance()
extern "C" Win32_FIXED_INFO_t2_446 * Win32_FIXED_INFO_GetInstance_m2_3154 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void Win32_FIXED_INFO_t2_446_marshal(const Win32_FIXED_INFO_t2_446& unmarshaled, Win32_FIXED_INFO_t2_446_marshaled& marshaled);
extern "C" void Win32_FIXED_INFO_t2_446_marshal_back(const Win32_FIXED_INFO_t2_446_marshaled& marshaled, Win32_FIXED_INFO_t2_446& unmarshaled);
extern "C" void Win32_FIXED_INFO_t2_446_marshal_cleanup(Win32_FIXED_INFO_t2_446_marshaled& marshaled);
