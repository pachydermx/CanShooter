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

// System.Net.EndPointListener
struct EndPointListener_t2_541;
// System.Net.IPAddress
struct IPAddress_t2_326;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.Net.HttpListenerContext
struct HttpListenerContext_t2_515;
// System.Net.HttpListener
struct HttpListener_t2_572;
// System.String
struct String_t;
// System.Uri
struct Uri_t2_284;
// System.Net.ListenerPrefix
struct ListenerPrefix_t2_570;
// System.Collections.ArrayList
struct ArrayList_t1_114;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.EndPointListener::.ctor(System.Net.IPAddress,System.Int32,System.Boolean)
extern "C" void EndPointListener__ctor_m2_4026 (EndPointListener_t2_541 * __this, IPAddress_t2_326 * ___addr, int32_t ___port, bool ___secure, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::LoadCertificateAndKey(System.Net.IPAddress,System.Int32)
extern "C" void EndPointListener_LoadCertificateAndKey_m2_4027 (EndPointListener_t2_541 * __this, IPAddress_t2_326 * ___addr, int32_t ___port, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::OnAccept(System.IAsyncResult)
extern "C" void EndPointListener_OnAccept_m2_4028 (Object_t * __this /* static, unused */, Object_t * ___ares, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.EndPointListener::BindContext(System.Net.HttpListenerContext)
extern "C" bool EndPointListener_BindContext_m2_4029 (EndPointListener_t2_541 * __this, HttpListenerContext_t2_515 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::UnbindContext(System.Net.HttpListenerContext)
extern "C" void EndPointListener_UnbindContext_m2_4030 (EndPointListener_t2_541 * __this, HttpListenerContext_t2_515 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListener System.Net.EndPointListener::SearchListener(System.String,System.Uri,System.Net.ListenerPrefix&)
extern "C" HttpListener_t2_572 * EndPointListener_SearchListener_m2_4031 (EndPointListener_t2_541 * __this, String_t* ___host, Uri_t2_284 * ___uri, ListenerPrefix_t2_570 ** ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListener System.Net.EndPointListener::MatchFromList(System.String,System.String,System.Collections.ArrayList,System.Net.ListenerPrefix&)
extern "C" HttpListener_t2_572 * EndPointListener_MatchFromList_m2_4032 (EndPointListener_t2_541 * __this, String_t* ___host, String_t* ___path, ArrayList_t1_114 * ___list, ListenerPrefix_t2_570 ** ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::AddSpecial(System.Collections.ArrayList,System.Net.ListenerPrefix)
extern "C" void EndPointListener_AddSpecial_m2_4033 (EndPointListener_t2_541 * __this, ArrayList_t1_114 * ___coll, ListenerPrefix_t2_570 * ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::RemoveSpecial(System.Collections.ArrayList,System.Net.ListenerPrefix)
extern "C" void EndPointListener_RemoveSpecial_m2_4034 (EndPointListener_t2_541 * __this, ArrayList_t1_114 * ___coll, ListenerPrefix_t2_570 * ___prefix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::CheckIfRemove()
extern "C" void EndPointListener_CheckIfRemove_m2_4035 (EndPointListener_t2_541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::Close()
extern "C" void EndPointListener_Close_m2_4036 (EndPointListener_t2_541 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::AddPrefix(System.Net.ListenerPrefix,System.Net.HttpListener)
extern "C" void EndPointListener_AddPrefix_m2_4037 (EndPointListener_t2_541 * __this, ListenerPrefix_t2_570 * ___prefix, HttpListener_t2_572 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.EndPointListener::RemovePrefix(System.Net.ListenerPrefix,System.Net.HttpListener)
extern "C" void EndPointListener_RemovePrefix_m2_4038 (EndPointListener_t2_541 * __this, ListenerPrefix_t2_570 * ___prefix, HttpListener_t2_572 * ___listener, const MethodInfo* method) IL2CPP_METHOD_ATTR;
