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

// System.Net.WebConnectionGroup
struct WebConnectionGroup_t2_628;
// System.Net.ServicePoint
struct ServicePoint_t2_564;
// System.String
struct String_t;
// System.Net.WebConnection
struct WebConnection_t2_590;
// System.Net.HttpWebRequest
struct HttpWebRequest_t2_585;
// System.Collections.Queue
struct Queue_t1_183;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.WebConnectionGroup::.ctor(System.Net.ServicePoint,System.String)
extern "C" void WebConnectionGroup__ctor_m2_5094 (WebConnectionGroup_t2_628 * __this, ServicePoint_t2_564 * ___sPoint, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::Close()
extern "C" void WebConnectionGroup_Close_m2_5095 (WebConnectionGroup_t2_628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::GetConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t2_590 * WebConnectionGroup_GetConnection_m2_5096 (WebConnectionGroup_t2_628 * __this, HttpWebRequest_t2_585 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebConnectionGroup::PrepareSharingNtlm(System.Net.WebConnection,System.Net.HttpWebRequest)
extern "C" void WebConnectionGroup_PrepareSharingNtlm_m2_5097 (Object_t * __this /* static, unused */, WebConnection_t2_590 * ___cnc, HttpWebRequest_t2_585 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebConnection System.Net.WebConnectionGroup::CreateOrReuseConnection(System.Net.HttpWebRequest)
extern "C" WebConnection_t2_590 * WebConnectionGroup_CreateOrReuseConnection_m2_5098 (WebConnectionGroup_t2_628 * __this, HttpWebRequest_t2_585 * ___request, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebConnectionGroup::get_Name()
extern "C" String_t* WebConnectionGroup_get_Name_m2_5099 (WebConnectionGroup_t2_628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Queue System.Net.WebConnectionGroup::get_Queue()
extern "C" Queue_t1_183 * WebConnectionGroup_get_Queue_m2_5100 (WebConnectionGroup_t2_628 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
