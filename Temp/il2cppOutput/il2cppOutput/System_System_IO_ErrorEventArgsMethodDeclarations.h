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

// System.IO.ErrorEventArgs
struct ErrorEventArgs_t2_238;
// System.Exception
struct Exception_t1_33;

#include "codegen/il2cpp-codegen.h"

// System.Void System.IO.ErrorEventArgs::.ctor(System.Exception)
extern "C" void ErrorEventArgs__ctor_m2_2010 (ErrorEventArgs_t2_238 * __this, Exception_t1_33 * ___exception, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.IO.ErrorEventArgs::GetException()
extern "C" Exception_t1_33 * ErrorEventArgs_GetException_m2_2011 (ErrorEventArgs_t2_238 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
