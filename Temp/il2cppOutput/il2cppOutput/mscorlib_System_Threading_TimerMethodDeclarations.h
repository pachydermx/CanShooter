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

// System.Threading.Timer
struct Timer_t1_446;
// System.Threading.TimerCallback
struct TimerCallback_t1_720;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_TimeSpan.h"

// System.Void System.Threading.Timer::.ctor(System.Threading.TimerCallback,System.Object,System.Int32,System.Int32)
extern "C" void Timer__ctor_m1_4909 (Timer_t1_446 * __this, TimerCallback_t1_720 * ___callback, Object_t * ___state, int32_t ___dueTime, int32_t ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::.cctor()
extern "C" void Timer__cctor_m1_4910 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Init(System.Threading.TimerCallback,System.Object,System.Int64,System.Int64)
extern "C" void Timer_Init_m1_4911 (Timer_t1_446 * __this, TimerCallback_t1_720 * ___callback, Object_t * ___state, int64_t ___dueTime, int64_t ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int32,System.Int32)
extern "C" bool Timer_Change_m1_4912 (Timer_t1_446 * __this, int32_t ___dueTime, int32_t ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.TimeSpan,System.TimeSpan)
extern "C" bool Timer_Change_m1_4913 (Timer_t1_446 * __this, TimeSpan_t1_218  ___dueTime, TimeSpan_t1_218  ___period, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Threading.Timer::Dispose()
extern "C" void Timer_Dispose_m1_4914 (Timer_t1_446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Threading.Timer::Change(System.Int64,System.Int64,System.Boolean)
extern "C" bool Timer_Change_m1_4915 (Timer_t1_446 * __this, int64_t ___dueTime, int64_t ___period, bool ___first, const MethodInfo* method) IL2CPP_METHOD_ATTR;
