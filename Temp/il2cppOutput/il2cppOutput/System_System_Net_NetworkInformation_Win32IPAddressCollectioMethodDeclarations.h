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

// System.Net.NetworkInformation.Win32IPAddressCollection
struct Win32IPAddressCollection_t2_331;
// System.IntPtr[]
struct IntPtrU5BU5D_t1_34;
// System.Net.NetworkInformation.Win32_IP_ADDR_STRING[]
struct Win32_IP_ADDR_STRINGU5BU5D_t2_822;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.NetworkInformation.Win32IPAddressCollection::.ctor()
extern "C" void Win32IPAddressCollection__ctor_m2_2528 (Win32IPAddressCollection_t2_331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Win32IPAddressCollection::.ctor(System.IntPtr[])
extern "C" void Win32IPAddressCollection__ctor_m2_2529 (Win32IPAddressCollection_t2_331 * __this, IntPtrU5BU5D_t1_34* ___heads, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Win32IPAddressCollection::.ctor(System.Net.NetworkInformation.Win32_IP_ADDR_STRING[])
extern "C" void Win32IPAddressCollection__ctor_m2_2530 (Win32IPAddressCollection_t2_331 * __this, Win32_IP_ADDR_STRINGU5BU5D_t2_822* ___al, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Win32IPAddressCollection::.cctor()
extern "C" void Win32IPAddressCollection__cctor_m2_2531 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32IPAddressCollection System.Net.NetworkInformation.Win32IPAddressCollection::FromAnycast(System.IntPtr)
extern "C" Win32IPAddressCollection_t2_331 * Win32IPAddressCollection_FromAnycast_m2_2532 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.NetworkInformation.Win32IPAddressCollection System.Net.NetworkInformation.Win32IPAddressCollection::FromDnsServer(System.IntPtr)
extern "C" Win32IPAddressCollection_t2_331 * Win32IPAddressCollection_FromDnsServer_m2_2533 (Object_t * __this /* static, unused */, IntPtr_t ___ptr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.NetworkInformation.Win32IPAddressCollection::AddSubsequentlyString(System.IntPtr)
extern "C" void Win32IPAddressCollection_AddSubsequentlyString_m2_2534 (Win32IPAddressCollection_t2_331 * __this, IntPtr_t ___head, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.NetworkInformation.Win32IPAddressCollection::get_IsReadOnly()
extern "C" bool Win32IPAddressCollection_get_IsReadOnly_m2_2535 (Win32IPAddressCollection_t2_331 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
