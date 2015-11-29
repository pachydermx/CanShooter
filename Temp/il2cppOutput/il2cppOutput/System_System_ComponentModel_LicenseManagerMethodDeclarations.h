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

// System.ComponentModel.LicenseManager
struct LicenseManager_t2_123;
// System.ComponentModel.LicenseContext
struct LicenseContext_t2_50;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.ComponentModel.License
struct License_t2_121;

#include "codegen/il2cpp-codegen.h"
#include "System_System_ComponentModel_LicenseUsageMode.h"

// System.Void System.ComponentModel.LicenseManager::.ctor()
extern "C" void LicenseManager__ctor_m2_837 (LicenseManager_t2_123 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::.cctor()
extern "C" void LicenseManager__cctor_m2_838 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.LicenseContext System.ComponentModel.LicenseManager::get_CurrentContext()
extern "C" LicenseContext_t2_50 * LicenseManager_get_CurrentContext_m2_839 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::set_CurrentContext(System.ComponentModel.LicenseContext)
extern "C" void LicenseManager_set_CurrentContext_m2_840 (Object_t * __this /* static, unused */, LicenseContext_t2_50 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.LicenseUsageMode System.ComponentModel.LicenseManager::get_UsageMode()
extern "C" int32_t LicenseManager_get_UsageMode_m2_841 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.LicenseManager::CreateWithContext(System.Type,System.ComponentModel.LicenseContext)
extern "C" Object_t * LicenseManager_CreateWithContext_m2_842 (Object_t * __this /* static, unused */, Type_t * ___type, LicenseContext_t2_50 * ___creationContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.LicenseManager::CreateWithContext(System.Type,System.ComponentModel.LicenseContext,System.Object[])
extern "C" Object_t * LicenseManager_CreateWithContext_m2_843 (Object_t * __this /* static, unused */, Type_t * ___type, LicenseContext_t2_50 * ___creationContext, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicenseManager::IsLicensed(System.Type)
extern "C" bool LicenseManager_IsLicensed_m2_844 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicenseManager::IsValid(System.Type)
extern "C" bool LicenseManager_IsValid_m2_845 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicenseManager::IsValid(System.Type,System.Object,System.ComponentModel.License&)
extern "C" bool LicenseManager_IsValid_m2_846 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___instance, License_t2_121 ** ___license, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::LockContext(System.Object)
extern "C" void LicenseManager_LockContext_m2_847 (Object_t * __this /* static, unused */, Object_t * ___contextUser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::UnlockContext(System.Object)
extern "C" void LicenseManager_UnlockContext_m2_848 (Object_t * __this /* static, unused */, Object_t * ___contextUser, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseManager::Validate(System.Type)
extern "C" void LicenseManager_Validate_m2_849 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.License System.ComponentModel.LicenseManager::Validate(System.Type,System.Object)
extern "C" License_t2_121 * LicenseManager_Validate_m2_850 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.LicenseManager::privateGetLicense(System.Type,System.Object,System.Boolean,System.ComponentModel.License&)
extern "C" bool LicenseManager_privateGetLicense_m2_851 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___instance, bool ___allowExceptions, License_t2_121 ** ___license, const MethodInfo* method) IL2CPP_METHOD_ATTR;
