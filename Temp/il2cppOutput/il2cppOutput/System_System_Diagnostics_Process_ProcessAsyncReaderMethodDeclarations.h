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

// System.Diagnostics.Process/ProcessAsyncReader
struct ProcessAsyncReader_t2_192;
// System.Diagnostics.Process
struct Process_t2_193;
// System.Threading.WaitHandle
struct WaitHandle_t1_452;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Diagnostics.Process/ProcessAsyncReader::.ctor(System.Diagnostics.Process,System.IntPtr,System.Boolean)
extern "C" void ProcessAsyncReader__ctor_m2_1459 (ProcessAsyncReader_t2_192 * __this, Process_t2_193 * ___process, IntPtr_t ___handle, bool ___err_out, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/ProcessAsyncReader::AddInput()
extern "C" void ProcessAsyncReader_AddInput_m2_1460 (ProcessAsyncReader_t2_192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/ProcessAsyncReader::FlushLast()
extern "C" void ProcessAsyncReader_FlushLast_m2_1461 (ProcessAsyncReader_t2_192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/ProcessAsyncReader::Flush(System.Boolean)
extern "C" void ProcessAsyncReader_Flush_m2_1462 (ProcessAsyncReader_t2_192 * __this, bool ___last, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.Process/ProcessAsyncReader::get_IsCompleted()
extern "C" bool ProcessAsyncReader_get_IsCompleted_m2_1463 (ProcessAsyncReader_t2_192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Threading.WaitHandle System.Diagnostics.Process/ProcessAsyncReader::get_WaitHandle()
extern "C" WaitHandle_t1_452 * ProcessAsyncReader_get_WaitHandle_m2_1464 (ProcessAsyncReader_t2_192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Process/ProcessAsyncReader::Close()
extern "C" void ProcessAsyncReader_Close_m2_1465 (ProcessAsyncReader_t2_192 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
