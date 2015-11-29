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

// System.Net.AuthenticationManager
struct AuthenticationManager_t2_501;
// System.Net.ICredentialPolicy
struct ICredentialPolicy_t2_502;
// System.Exception
struct Exception_t1_33;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t2_33;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;
// System.Net.Authorization
struct Authorization_t2_504;
// System.String
struct String_t;
// System.Net.WebRequest
struct WebRequest_t2_549;
// System.Net.ICredentials
struct ICredentials_t2_551;
// System.Net.IAuthenticationModule
struct IAuthenticationModule_t2_505;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.AuthenticationManager::.ctor()
extern "C" void AuthenticationManager__ctor_m2_3753 (AuthenticationManager_t2_501 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::.cctor()
extern "C" void AuthenticationManager__cctor_m2_3754 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::EnsureModules()
extern "C" void AuthenticationManager_EnsureModules_m2_3755 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentialPolicy System.Net.AuthenticationManager::get_CredentialPolicy()
extern "C" Object_t * AuthenticationManager_get_CredentialPolicy_m2_3756 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::set_CredentialPolicy(System.Net.ICredentialPolicy)
extern "C" void AuthenticationManager_set_CredentialPolicy_m2_3757 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.AuthenticationManager::GetMustImplement()
extern "C" Exception_t1_33 * AuthenticationManager_GetMustImplement_m2_3758 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Net.AuthenticationManager::get_CustomTargetNameDictionary()
extern "C" StringDictionary_t2_33 * AuthenticationManager_get_CustomTargetNameDictionary_m2_3759 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.AuthenticationManager::get_RegisteredModules()
extern "C" Object_t * AuthenticationManager_get_RegisteredModules_m2_3760 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Clear()
extern "C" void AuthenticationManager_Clear_m2_3761 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::Authenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t2_504 * AuthenticationManager_Authenticate_m2_3762 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t2_549 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::DoAuthenticate(System.String,System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t2_504 * AuthenticationManager_DoAuthenticate_m2_3763 (Object_t * __this /* static, unused */, String_t* ___challenge, WebRequest_t2_549 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Authorization System.Net.AuthenticationManager::PreAuthenticate(System.Net.WebRequest,System.Net.ICredentials)
extern "C" Authorization_t2_504 * AuthenticationManager_PreAuthenticate_m2_3764 (Object_t * __this /* static, unused */, WebRequest_t2_549 * ___request, Object_t * ___credentials, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Register(System.Net.IAuthenticationModule)
extern "C" void AuthenticationManager_Register_m2_3765 (Object_t * __this /* static, unused */, Object_t * ___authenticationModule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Unregister(System.Net.IAuthenticationModule)
extern "C" void AuthenticationManager_Unregister_m2_3766 (Object_t * __this /* static, unused */, Object_t * ___authenticationModule, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::Unregister(System.String)
extern "C" void AuthenticationManager_Unregister_m2_3767 (Object_t * __this /* static, unused */, String_t* ___authenticationScheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.AuthenticationManager::DoUnregister(System.String,System.Boolean)
extern "C" void AuthenticationManager_DoUnregister_m2_3768 (Object_t * __this /* static, unused */, String_t* ___authenticationScheme, bool ___throwEx, const MethodInfo* method) IL2CPP_METHOD_ATTR;
