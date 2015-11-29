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

// System.Security.AccessControl.SemaphoreAccessRule
struct SemaphoreAccessRule_t2_641;
// System.Security.Principal.IdentityReference
struct IdentityReference_t1_561;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Security_AccessControl_SemaphoreRights.h"
#include "mscorlib_System_Security_AccessControl_AccessControlType.h"

// System.Void System.Security.AccessControl.SemaphoreAccessRule::.ctor(System.Security.Principal.IdentityReference,System.Security.AccessControl.SemaphoreRights,System.Security.AccessControl.AccessControlType)
extern "C" void SemaphoreAccessRule__ctor_m2_5344 (SemaphoreAccessRule_t2_641 * __this, IdentityReference_t1_561 * ___identity, int32_t ___semaphoreRights, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.AccessControl.SemaphoreAccessRule::.ctor(System.String,System.Security.AccessControl.SemaphoreRights,System.Security.AccessControl.AccessControlType)
extern "C" void SemaphoreAccessRule__ctor_m2_5345 (SemaphoreAccessRule_t2_641 * __this, String_t* ___identity, int32_t ___semaphoreRights, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.AccessControl.SemaphoreRights System.Security.AccessControl.SemaphoreAccessRule::get_SemaphoreRights()
extern "C" int32_t SemaphoreAccessRule_get_SemaphoreRights_m2_5346 (SemaphoreAccessRule_t2_641 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
