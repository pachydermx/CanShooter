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

// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.String
struct String_t;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Net.IPAddress
struct IPAddress_t2_326;
// System.Net.IPHostEntry
struct IPHostEntry_t2_532;
// System.Net.IPAddress[]
struct IPAddressU5BU5D_t2_480;
// System.String[]
struct StringU5BU5D_t1_206;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Dns::.cctor()
extern "C" void Dns__cctor_m2_3991 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns::BeginGetHostByName(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * Dns_BeginGetHostByName_m2_3992 (Object_t * __this /* static, unused */, String_t* ___hostName, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns::BeginResolve(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * Dns_BeginResolve_m2_3993 (Object_t * __this /* static, unused */, String_t* ___hostName, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns::BeginGetHostAddresses(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * Dns_BeginGetHostAddresses_m2_3994 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns::BeginGetHostEntry(System.String,System.AsyncCallback,System.Object)
extern "C" Object_t * Dns_BeginGetHostEntry_m2_3995 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.Dns::BeginGetHostEntry(System.Net.IPAddress,System.AsyncCallback,System.Object)
extern "C" Object_t * Dns_BeginGetHostEntry_m2_3996 (Object_t * __this /* static, unused */, IPAddress_t2_326 * ___address, AsyncCallback_t1_28 * ___requestCallback, Object_t * ___stateObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::EndGetHostByName(System.IAsyncResult)
extern "C" IPHostEntry_t2_532 * Dns_EndGetHostByName_m2_3997 (Object_t * __this /* static, unused */, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::EndResolve(System.IAsyncResult)
extern "C" IPHostEntry_t2_532 * Dns_EndResolve_m2_3998 (Object_t * __this /* static, unused */, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::EndGetHostAddresses(System.IAsyncResult)
extern "C" IPAddressU5BU5D_t2_480* Dns_EndGetHostAddresses_m2_3999 (Object_t * __this /* static, unused */, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::EndGetHostEntry(System.IAsyncResult)
extern "C" IPHostEntry_t2_532 * Dns_EndGetHostEntry_m2_4000 (Object_t * __this /* static, unused */, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByName_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C" bool Dns_GetHostByName_internal_m2_4001 (Object_t * __this /* static, unused */, String_t* ___host, String_t** ___h_name, StringU5BU5D_t1_206** ___h_aliases, StringU5BU5D_t1_206** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostByAddr_internal(System.String,System.String&,System.String[]&,System.String[]&)
extern "C" bool Dns_GetHostByAddr_internal_m2_4002 (Object_t * __this /* static, unused */, String_t* ___addr, String_t** ___h_name, StringU5BU5D_t1_206** ___h_aliases, StringU5BU5D_t1_206** ___h_addr_list, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Dns::GetHostName_internal(System.String&)
extern "C" bool Dns_GetHostName_internal_m2_4003 (Object_t * __this /* static, unused */, String_t** ___h_name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::hostent_to_IPHostEntry(System.String,System.String[],System.String[])
extern "C" IPHostEntry_t2_532 * Dns_hostent_to_IPHostEntry_m2_4004 (Object_t * __this /* static, unused */, String_t* ___h_name, StringU5BU5D_t1_206* ___h_aliases, StringU5BU5D_t1_206* ___h_addrlist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddress(System.Net.IPAddress)
extern "C" IPHostEntry_t2_532 * Dns_GetHostByAddress_m2_4005 (Object_t * __this /* static, unused */, IPAddress_t2_326 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddress(System.String)
extern "C" IPHostEntry_t2_532 * Dns_GetHostByAddress_m2_4006 (Object_t * __this /* static, unused */, String_t* ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByAddressFromString(System.String,System.Boolean)
extern "C" IPHostEntry_t2_532 * Dns_GetHostByAddressFromString_m2_4007 (Object_t * __this /* static, unused */, String_t* ___address, bool ___parse, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.String)
extern "C" IPHostEntry_t2_532 * Dns_GetHostEntry_m2_4008 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostEntry(System.Net.IPAddress)
extern "C" IPHostEntry_t2_532 * Dns_GetHostEntry_m2_4009 (Object_t * __this /* static, unused */, IPAddress_t2_326 * ___address, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPAddress[] System.Net.Dns::GetHostAddresses(System.String)
extern "C" IPAddressU5BU5D_t2_480* Dns_GetHostAddresses_m2_4010 (Object_t * __this /* static, unused */, String_t* ___hostNameOrAddress, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::GetHostByName(System.String)
extern "C" IPHostEntry_t2_532 * Dns_GetHostByName_m2_4011 (Object_t * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Dns::GetHostName()
extern "C" String_t* Dns_GetHostName_m2_4012 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPHostEntry System.Net.Dns::Resolve(System.String)
extern "C" IPHostEntry_t2_532 * Dns_Resolve_m2_4013 (Object_t * __this /* static, unused */, String_t* ___hostName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
