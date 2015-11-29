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

// System.Net.ListenerPrefix
struct ListenerPrefix_t2_570;
// System.String
struct String_t;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t2_480;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.ListenerPrefix::.ctor(System.String)
extern "C" void ListenerPrefix__ctor_m2_4700 (ListenerPrefix_t2_570 * __this, String_t* ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ListenerPrefix::ToString()
extern "C" String_t* ListenerPrefix_ToString_m2_4701 (ListenerPrefix_t2_570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.ListenerPrefix::get_Addresses()
extern "C" IPAddressU5BU5D_t2_480* ListenerPrefix_get_Addresses_m2_4702 (ListenerPrefix_t2_570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerPrefix::set_Addresses(System.Net.IPAddress[])
extern "C" void ListenerPrefix_set_Addresses_m2_4703 (ListenerPrefix_t2_570 * __this, IPAddressU5BU5D_t2_480* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ListenerPrefix::get_Secure()
extern "C" bool ListenerPrefix_get_Secure_m2_4704 (ListenerPrefix_t2_570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ListenerPrefix::get_Host()
extern "C" String_t* ListenerPrefix_get_Host_m2_4705 (ListenerPrefix_t2_570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ListenerPrefix::get_Port()
extern "C" int32_t ListenerPrefix_get_Port_m2_4706 (ListenerPrefix_t2_570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.ListenerPrefix::get_Path()
extern "C" String_t* ListenerPrefix_get_Path_m2_4707 (ListenerPrefix_t2_570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ListenerPrefix::Equals(System.Object)
extern "C" bool ListenerPrefix_Equals_m2_4708 (ListenerPrefix_t2_570 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.ListenerPrefix::GetHashCode()
extern "C" int32_t ListenerPrefix_GetHashCode_m2_4709 (ListenerPrefix_t2_570 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerPrefix::Parse(System.String)
extern "C" void ListenerPrefix_Parse_m2_4710 (ListenerPrefix_t2_570 * __this, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ListenerPrefix::CheckUri(System.String)
extern "C" void ListenerPrefix_CheckUri_m2_4711 (Object_t * __this /* static, unused */, String_t* ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
