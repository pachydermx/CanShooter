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

// System.Net.Cache.HttpRequestCachePolicy
struct HttpRequestCachePolicy_t2_279;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"
#include "System_System_Net_Cache_HttpRequestCacheLevel.h"
#include "System_System_Net_Cache_HttpCacheAgeControl.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Net.Cache.HttpRequestCachePolicy::.ctor()
extern "C" void HttpRequestCachePolicy__ctor_m2_2195 (HttpRequestCachePolicy_t2_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cache.HttpRequestCachePolicy::.ctor(System.DateTime)
extern "C" void HttpRequestCachePolicy__ctor_m2_2196 (HttpRequestCachePolicy_t2_279 * __this, DateTime_t1_128  ___cacheSyncDate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cache.HttpRequestCachePolicy::.ctor(System.Net.Cache.HttpRequestCacheLevel)
extern "C" void HttpRequestCachePolicy__ctor_m2_2197 (HttpRequestCachePolicy_t2_279 * __this, int32_t ___level, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cache.HttpRequestCachePolicy::.ctor(System.Net.Cache.HttpCacheAgeControl,System.TimeSpan)
extern "C" void HttpRequestCachePolicy__ctor_m2_2198 (HttpRequestCachePolicy_t2_279 * __this, int32_t ___cacheAgeControl, TimeSpan_t1_218  ___ageOrFreshOrStale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cache.HttpRequestCachePolicy::.ctor(System.Net.Cache.HttpCacheAgeControl,System.TimeSpan,System.TimeSpan)
extern "C" void HttpRequestCachePolicy__ctor_m2_2199 (HttpRequestCachePolicy_t2_279 * __this, int32_t ___cacheAgeControl, TimeSpan_t1_218  ___maxAge, TimeSpan_t1_218  ___freshOrStale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cache.HttpRequestCachePolicy::.ctor(System.Net.Cache.HttpCacheAgeControl,System.TimeSpan,System.TimeSpan,System.DateTime)
extern "C" void HttpRequestCachePolicy__ctor_m2_2200 (HttpRequestCachePolicy_t2_279 * __this, int32_t ___cacheAgeControl, TimeSpan_t1_218  ___maxAge, TimeSpan_t1_218  ___freshOrStale, DateTime_t1_128  ___cacheSyncDate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cache.HttpRequestCachePolicy::get_CacheSyncDate()
extern "C" DateTime_t1_128  HttpRequestCachePolicy_get_CacheSyncDate_m2_2201 (HttpRequestCachePolicy_t2_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Cache.HttpRequestCacheLevel System.Net.Cache.HttpRequestCachePolicy::get_Level()
extern "C" int32_t HttpRequestCachePolicy_get_Level_m2_2202 (HttpRequestCachePolicy_t2_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Net.Cache.HttpRequestCachePolicy::get_MaxAge()
extern "C" TimeSpan_t1_218  HttpRequestCachePolicy_get_MaxAge_m2_2203 (HttpRequestCachePolicy_t2_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Net.Cache.HttpRequestCachePolicy::get_MaxStale()
extern "C" TimeSpan_t1_218  HttpRequestCachePolicy_get_MaxStale_m2_2204 (HttpRequestCachePolicy_t2_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Net.Cache.HttpRequestCachePolicy::get_MinFresh()
extern "C" TimeSpan_t1_218  HttpRequestCachePolicy_get_MinFresh_m2_2205 (HttpRequestCachePolicy_t2_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cache.HttpRequestCachePolicy::ToString()
extern "C" String_t* HttpRequestCachePolicy_ToString_m2_2206 (HttpRequestCachePolicy_t2_279 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
