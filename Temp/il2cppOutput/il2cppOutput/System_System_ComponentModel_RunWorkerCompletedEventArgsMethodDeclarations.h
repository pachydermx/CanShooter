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

// System.ComponentModel.RunWorkerCompletedEventArgs
struct RunWorkerCompletedEventArgs_t2_150;
// System.Object
struct Object_t;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.RunWorkerCompletedEventArgs::.ctor(System.Object,System.Exception,System.Boolean)
extern "C" void RunWorkerCompletedEventArgs__ctor_m2_1120 (RunWorkerCompletedEventArgs_t2_150 * __this, Object_t * ___result, Exception_t1_33 * ___error, bool ___cancelled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.RunWorkerCompletedEventArgs::get_Result()
extern "C" Object_t * RunWorkerCompletedEventArgs_get_Result_m2_1121 (RunWorkerCompletedEventArgs_t2_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.RunWorkerCompletedEventArgs::get_UserState()
extern "C" Object_t * RunWorkerCompletedEventArgs_get_UserState_m2_1122 (RunWorkerCompletedEventArgs_t2_150 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
