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

// System.Net.WebPermissionAttribute
struct WebPermissionAttribute_t2_634;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t1_668;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_SecurityAction.h"

// System.Void System.Net.WebPermissionAttribute::.ctor(System.Security.Permissions.SecurityAction)
extern "C" void WebPermissionAttribute__ctor_m2_5231 (WebPermissionAttribute_t2_634 * __this, int32_t ___action, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebPermissionAttribute::get_Accept()
extern "C" String_t* WebPermissionAttribute_get_Accept_m2_5232 (WebPermissionAttribute_t2_634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermissionAttribute::set_Accept(System.String)
extern "C" void WebPermissionAttribute_set_Accept_m2_5233 (WebPermissionAttribute_t2_634 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebPermissionAttribute::get_AcceptPattern()
extern "C" String_t* WebPermissionAttribute_get_AcceptPattern_m2_5234 (WebPermissionAttribute_t2_634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermissionAttribute::set_AcceptPattern(System.String)
extern "C" void WebPermissionAttribute_set_AcceptPattern_m2_5235 (WebPermissionAttribute_t2_634 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebPermissionAttribute::get_Connect()
extern "C" String_t* WebPermissionAttribute_get_Connect_m2_5236 (WebPermissionAttribute_t2_634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermissionAttribute::set_Connect(System.String)
extern "C" void WebPermissionAttribute_set_Connect_m2_5237 (WebPermissionAttribute_t2_634 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebPermissionAttribute::get_ConnectPattern()
extern "C" String_t* WebPermissionAttribute_get_ConnectPattern_m2_5238 (WebPermissionAttribute_t2_634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermissionAttribute::set_ConnectPattern(System.String)
extern "C" void WebPermissionAttribute_set_ConnectPattern_m2_5239 (WebPermissionAttribute_t2_634 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Net.WebPermissionAttribute::CreatePermission()
extern "C" Object_t * WebPermissionAttribute_CreatePermission_m2_5240 (WebPermissionAttribute_t2_634 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebPermissionAttribute::AlreadySet(System.String,System.String)
extern "C" void WebPermissionAttribute_AlreadySet_m2_5241 (WebPermissionAttribute_t2_634 * __this, String_t* ___parameter, String_t* ___property, const MethodInfo* method) IL2CPP_METHOD_ATTR;
