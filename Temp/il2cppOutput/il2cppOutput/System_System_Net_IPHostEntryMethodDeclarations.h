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

// System.Net.IPHostEntry
struct IPHostEntry_t2_532;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t2_480;
// System.String[]
struct StringU5BU5D_t1_206;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.IPHostEntry::.ctor()
extern "C" void IPHostEntry__ctor_m2_4659 (IPHostEntry_t2_532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.IPHostEntry::get_AddressList()
extern "C" IPAddressU5BU5D_t2_480* IPHostEntry_get_AddressList_m2_4660 (IPHostEntry_t2_532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_AddressList(System.Net.IPAddress[])
extern "C" void IPHostEntry_set_AddressList_m2_4661 (IPHostEntry_t2_532 * __this, IPAddressU5BU5D_t2_480* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.IPHostEntry::get_Aliases()
extern "C" StringU5BU5D_t1_206* IPHostEntry_get_Aliases_m2_4662 (IPHostEntry_t2_532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_Aliases(System.String[])
extern "C" void IPHostEntry_set_Aliases_m2_4663 (IPHostEntry_t2_532 * __this, StringU5BU5D_t1_206* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPHostEntry::get_HostName()
extern "C" String_t* IPHostEntry_get_HostName_m2_4664 (IPHostEntry_t2_532 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPHostEntry::set_HostName(System.String)
extern "C" void IPHostEntry_set_HostName_m2_4665 (IPHostEntry_t2_532 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
