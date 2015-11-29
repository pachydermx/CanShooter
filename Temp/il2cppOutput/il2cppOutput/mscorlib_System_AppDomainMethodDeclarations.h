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

// System.AppDomain
struct AppDomain_t1_671;
// System.UnhandledExceptionEventHandler
struct UnhandledExceptionEventHandler_t1_730;
// System.String
struct String_t;
// System.Reflection.Assembly[]
struct AssemblyU5BU5D_t1_876;
// System.Reflection.Assembly
struct Assembly_t1_277;
// System.Security.Policy.Evidence
struct Evidence_t1_318;
// System.Runtime.Remoting.Contexts.Context
struct Context_t1_432;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.AppDomain::add_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" void AppDomain_add_UnhandledException_m1_4945 (AppDomain_t1_671 * __this, UnhandledExceptionEventHandler_t1_730 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.AppDomain::remove_UnhandledException(System.UnhandledExceptionEventHandler)
extern "C" void AppDomain_remove_UnhandledException_m1_4946 (AppDomain_t1_671 * __this, UnhandledExceptionEventHandler_t1_730 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::getFriendlyName()
extern "C" String_t* AppDomain_getFriendlyName_m1_4947 (AppDomain_t1_671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::getCurDomain()
extern "C" AppDomain_t1_671 * AppDomain_getCurDomain_m1_4948 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.AppDomain System.AppDomain::get_CurrentDomain()
extern "C" AppDomain_t1_671 * AppDomain_get_CurrentDomain_m1_4949 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies(System.Boolean)
extern "C" AssemblyU5BU5D_t1_876* AppDomain_GetAssemblies_m1_4950 (AppDomain_t1_671 * __this, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly[] System.AppDomain::GetAssemblies()
extern "C" AssemblyU5BU5D_t1_876* AppDomain_GetAssemblies_m1_4951 (AppDomain_t1_671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::LoadAssembly(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1_277 * AppDomain_LoadAssembly_m1_4952 (AppDomain_t1_671 * __this, String_t* ___assemblyRef, Evidence_t1_318 * ___securityEvidence, bool ___refOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String)
extern "C" Assembly_t1_277 * AppDomain_Load_m1_4953 (AppDomain_t1_671 * __this, String_t* ___assemblyString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::Load(System.String,System.Security.Policy.Evidence,System.Boolean)
extern "C" Assembly_t1_277 * AppDomain_Load_m1_4954 (AppDomain_t1_671 * __this, String_t* ___assemblyString, Evidence_t1_318 * ___assemblySecurity, bool ___refonly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalSetContext(System.Runtime.Remoting.Contexts.Context)
extern "C" Context_t1_432 * AppDomain_InternalSetContext_m1_4955 (Object_t * __this /* static, unused */, Context_t1_432 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetContext()
extern "C" Context_t1_432 * AppDomain_InternalGetContext_m1_4956 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Contexts.Context System.AppDomain::InternalGetDefaultContext()
extern "C" Context_t1_432 * AppDomain_InternalGetDefaultContext_m1_4957 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::InternalGetProcessGuid(System.String)
extern "C" String_t* AppDomain_InternalGetProcessGuid_m1_4958 (Object_t * __this /* static, unused */, String_t* ___newguid, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::GetProcessGuid()
extern "C" String_t* AppDomain_GetProcessGuid_m1_4959 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.AppDomain::ToString()
extern "C" String_t* AppDomain_ToString_m1_4960 (AppDomain_t1_671 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.Assembly System.AppDomain::DoTypeResolve(System.Object)
extern "C" Assembly_t1_277 * AppDomain_DoTypeResolve_m1_4961 (AppDomain_t1_671 * __this, Object_t * ___name_or_tb, const MethodInfo* method) IL2CPP_METHOD_ATTR;
