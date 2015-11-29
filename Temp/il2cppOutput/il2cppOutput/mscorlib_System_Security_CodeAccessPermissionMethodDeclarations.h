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

// System.Security.CodeAccessPermission
struct CodeAccessPermission_t1_647;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Security.IPermission
struct IPermission_t1_668;
// System.Security.SecurityElement
struct SecurityElement_t1_142;
// System.Type
struct Type_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Security_Permissions_PermissionState.h"

// System.Void System.Security.CodeAccessPermission::.ctor()
extern "C" void CodeAccessPermission__ctor_m1_4452 (CodeAccessPermission_t1_647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::Equals(System.Object)
extern "C" bool CodeAccessPermission_Equals_m1_4453 (CodeAccessPermission_t1_647 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.CodeAccessPermission::GetHashCode()
extern "C" int32_t CodeAccessPermission_GetHashCode_m1_4454 (CodeAccessPermission_t1_647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Security.CodeAccessPermission::ToString()
extern "C" String_t* CodeAccessPermission_ToString_m1_4455 (CodeAccessPermission_t1_647 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.IPermission System.Security.CodeAccessPermission::Union(System.Security.IPermission)
extern "C" Object_t * CodeAccessPermission_Union_m1_4456 (CodeAccessPermission_t1_647 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.SecurityElement System.Security.CodeAccessPermission::Element(System.Int32)
extern "C" SecurityElement_t1_142 * CodeAccessPermission_Element_m1_4457 (CodeAccessPermission_t1_647 * __this, int32_t ___version, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Permissions.PermissionState System.Security.CodeAccessPermission::CheckPermissionState(System.Security.Permissions.PermissionState,System.Boolean)
extern "C" int32_t CodeAccessPermission_CheckPermissionState_m1_4458 (Object_t * __this /* static, unused */, int32_t ___state, bool ___allowUnrestricted, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Security.CodeAccessPermission::CheckSecurityElement(System.Security.SecurityElement,System.String,System.Int32,System.Int32)
extern "C" int32_t CodeAccessPermission_CheckSecurityElement_m1_4459 (Object_t * __this /* static, unused */, SecurityElement_t1_142 * ___se, String_t* ___parameterName, int32_t ___minimumVersion, int32_t ___maximumVersion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.CodeAccessPermission::IsUnrestricted(System.Security.SecurityElement)
extern "C" bool CodeAccessPermission_IsUnrestricted_m1_4460 (Object_t * __this /* static, unused */, SecurityElement_t1_142 * ___se, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.CodeAccessPermission::ThrowInvalidPermission(System.Security.IPermission,System.Type)
extern "C" void CodeAccessPermission_ThrowInvalidPermission_m1_4461 (Object_t * __this /* static, unused */, Object_t * ___target, Type_t * ___expected, const MethodInfo* method) IL2CPP_METHOD_ATTR;
