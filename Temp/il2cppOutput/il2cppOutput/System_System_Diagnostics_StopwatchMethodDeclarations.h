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

// System.Diagnostics.Stopwatch
struct Stopwatch_t2_212;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Diagnostics.Stopwatch::.ctor()
extern "C" void Stopwatch__ctor_m2_1699 (Stopwatch_t2_212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::.cctor()
extern "C" void Stopwatch__cctor_m2_1700 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::GetTimestamp()
extern "C" int64_t Stopwatch_GetTimestamp_m2_1701 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.Stopwatch System.Diagnostics.Stopwatch::StartNew()
extern "C" Stopwatch_t2_212 * Stopwatch_StartNew_m2_1702 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.TimeSpan System.Diagnostics.Stopwatch::get_Elapsed()
extern "C" TimeSpan_t1_218  Stopwatch_get_Elapsed_m2_1703 (Stopwatch_t2_212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedMilliseconds()
extern "C" int64_t Stopwatch_get_ElapsedMilliseconds_m2_1704 (Stopwatch_t2_212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Diagnostics.Stopwatch::get_ElapsedTicks()
extern "C" int64_t Stopwatch_get_ElapsedTicks_m2_1705 (Stopwatch_t2_212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Stopwatch::get_IsRunning()
extern "C" bool Stopwatch_get_IsRunning_m2_1706 (Stopwatch_t2_212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Reset()
extern "C" void Stopwatch_Reset_m2_1707 (Stopwatch_t2_212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Start()
extern "C" void Stopwatch_Start_m2_1708 (Stopwatch_t2_212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Stopwatch::Stop()
extern "C" void Stopwatch_Stop_m2_1709 (Stopwatch_t2_212 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
