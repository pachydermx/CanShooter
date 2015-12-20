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

// System.Net.CookieContainer
struct CookieContainer_t2_520;
// System.Net.Cookie
struct Cookie_t2_517;
// System.String
struct String_t;
// System.Net.CookieCollection
struct CookieCollection_t2_519;
// System.Uri
struct Uri_t2_284;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.CookieContainer::.ctor()
extern "C" void CookieContainer__ctor_m2_3878 (CookieContainer_t2_520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::.ctor(System.Int32)
extern "C" void CookieContainer__ctor_m2_3879 (CookieContainer_t2_520 * __this, int32_t ___capacity, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::.ctor(System.Int32,System.Int32,System.Int32)
extern "C" void CookieContainer__ctor_m2_3880 (CookieContainer_t2_520 * __this, int32_t ___capacity, int32_t ___perDomainCapacity, int32_t ___maxCookieSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::get_Count()
extern "C" int32_t CookieContainer_get_Count_m2_3881 (CookieContainer_t2_520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::get_Capacity()
extern "C" int32_t CookieContainer_get_Capacity_m2_3882 (CookieContainer_t2_520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::set_Capacity(System.Int32)
extern "C" void CookieContainer_set_Capacity_m2_3883 (CookieContainer_t2_520 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::get_MaxCookieSize()
extern "C" int32_t CookieContainer_get_MaxCookieSize_m2_3884 (CookieContainer_t2_520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::set_MaxCookieSize(System.Int32)
extern "C" void CookieContainer_set_MaxCookieSize_m2_3885 (CookieContainer_t2_520 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::get_PerDomainCapacity()
extern "C" int32_t CookieContainer_get_PerDomainCapacity_m2_3886 (CookieContainer_t2_520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::set_PerDomainCapacity(System.Int32)
extern "C" void CookieContainer_set_PerDomainCapacity_m2_3887 (CookieContainer_t2_520 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Net.Cookie)
extern "C" void CookieContainer_Add_m2_3888 (CookieContainer_t2_520 * __this, Cookie_t2_517 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::AddCookie(System.Net.Cookie)
extern "C" void CookieContainer_AddCookie_m2_3889 (CookieContainer_t2_520 * __this, Cookie_t2_517 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.CookieContainer::CountDomain(System.String)
extern "C" int32_t CookieContainer_CountDomain_m2_3890 (CookieContainer_t2_520 * __this, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::RemoveOldest(System.String)
extern "C" void CookieContainer_RemoveOldest_m2_3891 (CookieContainer_t2_520 * __this, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::CheckExpiration()
extern "C" void CookieContainer_CheckExpiration_m2_3892 (CookieContainer_t2_520 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Net.CookieCollection)
extern "C" void CookieContainer_Add_m2_3893 (CookieContainer_t2_520 * __this, CookieCollection_t2_519 * ___cookies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Cook(System.Uri,System.Net.Cookie)
extern "C" void CookieContainer_Cook_m2_3894 (CookieContainer_t2_520 * __this, Uri_t2_284 * ___uri, Cookie_t2_517 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Uri,System.Net.Cookie)
extern "C" void CookieContainer_Add_m2_3895 (CookieContainer_t2_520 * __this, Uri_t2_284 * ___uri, Cookie_t2_517 * ___cookie, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::Add(System.Uri,System.Net.CookieCollection)
extern "C" void CookieContainer_Add_m2_3896 (CookieContainer_t2_520 * __this, Uri_t2_284 * ___uri, CookieCollection_t2_519 * ___cookies, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.CookieContainer::GetCookieHeader(System.Uri)
extern "C" String_t* CookieContainer_GetCookieHeader_m2_3897 (CookieContainer_t2_520 * __this, Uri_t2_284 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::CheckDomain(System.String,System.String,System.Boolean)
extern "C" bool CookieContainer_CheckDomain_m2_3898 (Object_t * __this /* static, unused */, String_t* ___domain, String_t* ___host, bool ___exact, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.CookieCollection System.Net.CookieContainer::GetCookies(System.Uri)
extern "C" CookieCollection_t2_519 * CookieContainer_GetCookies_m2_3899 (CookieContainer_t2_520 * __this, Uri_t2_284 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.CookieContainer::SetCookies(System.Uri,System.String)
extern "C" void CookieContainer_SetCookies_m2_3900 (CookieContainer_t2_520 * __this, Uri_t2_284 * ___uri, String_t* ___cookieHeader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cookie System.Net.CookieContainer::Parse(System.String)
extern "C" Cookie_t2_517 * CookieContainer_Parse_m2_3901 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.CookieContainer::IsNullOrEmpty(System.String)
extern "C" bool CookieContainer_IsNullOrEmpty_m2_3902 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
