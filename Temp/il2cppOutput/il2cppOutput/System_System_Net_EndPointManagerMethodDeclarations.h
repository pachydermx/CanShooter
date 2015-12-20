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

// System.Net.EndPointManager
struct EndPointManager_t2_543;
// System.Net.HttpListener
struct HttpListener_t2_572;
// System.String
struct String_t;
// System.Net.EndPointListener
struct EndPointListener_t2_541;
// System.Net.IPAddress
struct IPAddress_t2_326;
// System.Net.IPEndPoint
struct IPEndPoint_t2_430;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.EndPointManager::.ctor()
extern "C" void EndPointManager__ctor_m2_4039 (EndPointManager_t2_543 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::.cctor()
extern "C" void EndPointManager__cctor_m2_4040 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::AddListener(System.Net.HttpListener)
extern "C" void EndPointManager_AddListener_m2_4041 (Object_t * __this /* static, unused */, HttpListener_t2_572 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::AddPrefix(System.String,System.Net.HttpListener)
extern "C" void EndPointManager_AddPrefix_m2_4042 (Object_t * __this /* static, unused */, String_t* ___prefix, HttpListener_t2_572 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::AddPrefixInternal(System.String,System.Net.HttpListener)
extern "C" void EndPointManager_AddPrefixInternal_m2_4043 (Object_t * __this /* static, unused */, String_t* ___p, HttpListener_t2_572 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.EndPointListener System.Net.EndPointManager::GetEPListener(System.Net.IPAddress,System.Int32,System.Net.HttpListener,System.Boolean)
extern "C" EndPointListener_t2_541 * EndPointManager_GetEPListener_m2_4044 (Object_t * __this /* static, unused */, IPAddress_t2_326 * ___addr, int32_t ___port, HttpListener_t2_572 * ___listener, bool ___secure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::RemoveEndPoint(System.Net.EndPointListener,System.Net.IPEndPoint)
extern "C" void EndPointManager_RemoveEndPoint_m2_4045 (Object_t * __this /* static, unused */, EndPointListener_t2_541 * ___epl, IPEndPoint_t2_430 * ___ep, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::RemoveListener(System.Net.HttpListener)
extern "C" void EndPointManager_RemoveListener_m2_4046 (Object_t * __this /* static, unused */, HttpListener_t2_572 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::RemovePrefix(System.String,System.Net.HttpListener)
extern "C" void EndPointManager_RemovePrefix_m2_4047 (Object_t * __this /* static, unused */, String_t* ___prefix, HttpListener_t2_572 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointManager::RemovePrefixInternal(System.String,System.Net.HttpListener)
extern "C" void EndPointManager_RemovePrefixInternal_m2_4048 (Object_t * __this /* static, unused */, String_t* ___prefix, HttpListener_t2_572 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
