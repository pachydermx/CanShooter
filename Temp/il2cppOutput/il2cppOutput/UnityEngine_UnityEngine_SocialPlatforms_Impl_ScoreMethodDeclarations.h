﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// UnityEngine.SocialPlatforms.Impl.Score
struct Score_t5_234;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64)
extern "C" void Score__ctor_m5_1665 (Score_t5_234 * __this, String_t* ___leaderboardID, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::.ctor(System.String,System.Int64,System.String,System.DateTime,System.String,System.Int32)
extern "C" void Score__ctor_m5_1666 (Score_t5_234 * __this, String_t* ___leaderboardID, int64_t ___value, String_t* ___userID, DateTime_t1_128  ___date, String_t* ___formattedValue, int32_t ___rank, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Score::ToString()
extern "C" String_t* Score_ToString_m5_1667 (Score_t5_234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.SocialPlatforms.Impl.Score::get_leaderboardID()
extern "C" String_t* Score_get_leaderboardID_m5_1668 (Score_t5_234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_leaderboardID(System.String)
extern "C" void Score_set_leaderboardID_m5_1669 (Score_t5_234 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 UnityEngine.SocialPlatforms.Impl.Score::get_value()
extern "C" int64_t Score_get_value_m5_1670 (Score_t5_234 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SocialPlatforms.Impl.Score::set_value(System.Int64)
extern "C" void Score_set_value_m5_1671 (Score_t5_234 * __this, int64_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
