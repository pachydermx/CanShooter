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

// System.Net.UploadStringCompletedEventArgs
struct UploadStringCompletedEventArgs_t2_611;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.UploadStringCompletedEventArgs::.ctor(System.String,System.Exception,System.Boolean,System.Object)
extern "C" void UploadStringCompletedEventArgs__ctor_m2_4881 (UploadStringCompletedEventArgs_t2_611 * __this, String_t* ___result, Exception_t1_33 * ___error, bool ___cancelled, Object_t * ___userState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.UploadStringCompletedEventArgs::get_Result()
extern "C" String_t* UploadStringCompletedEventArgs_get_Result_m2_4882 (UploadStringCompletedEventArgs_t2_611 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
