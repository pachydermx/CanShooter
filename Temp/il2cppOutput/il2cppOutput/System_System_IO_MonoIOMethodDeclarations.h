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

// System.IO.MonoIO
struct MonoIO_t2_265;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "System_System_IO_MonoIOError.h"

// System.Void System.IO.MonoIO::.ctor()
extern "C" void MonoIO__ctor_m2_2146 (MonoIO_t2_265 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::Close(System.IntPtr,System.IO.MonoIOError&)
extern "C" bool MonoIO_Close_m2_2147 (Object_t * __this /* static, unused */, IntPtr_t ___handle, int32_t* ___error, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleOutput()
extern "C" IntPtr_t MonoIO_get_ConsoleOutput_m2_2148 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleInput()
extern "C" IntPtr_t MonoIO_get_ConsoleInput_m2_2149 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.IO.MonoIO::get_ConsoleError()
extern "C" IntPtr_t MonoIO_get_ConsoleError_m2_2150 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::CreatePipe(System.IntPtr&,System.IntPtr&)
extern "C" bool MonoIO_CreatePipe_m2_2151 (Object_t * __this /* static, unused */, IntPtr_t* ___read_handle, IntPtr_t* ___write_handle, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.IO.MonoIO::DuplicateHandle(System.IntPtr,System.IntPtr,System.IntPtr,System.IntPtr&,System.Int32,System.Int32,System.Int32)
extern "C" bool MonoIO_DuplicateHandle_m2_2152 (Object_t * __this /* static, unused */, IntPtr_t ___source_process_handle, IntPtr_t ___source_handle, IntPtr_t ___target_process_handle, IntPtr_t* ___target_handle, int32_t ___access, int32_t ___inherit, int32_t ___options, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.MonoIO::GetTempPath(System.String&)
extern "C" int32_t MonoIO_GetTempPath_m2_2153 (Object_t * __this /* static, unused */, String_t** ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
