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

// System.Diagnostics.ProcessModule
struct ProcessModule_t2_200;
// System.String
struct String_t;
// System.Diagnostics.FileVersionInfo
struct FileVersionInfo_t2_188;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Diagnostics.ProcessModule::.ctor(System.IntPtr,System.IntPtr,System.String,System.Diagnostics.FileVersionInfo,System.Int32,System.String)
extern "C" void ProcessModule__ctor_m2_1599 (ProcessModule_t2_200 * __this, IntPtr_t ___baseaddr, IntPtr_t ___entryaddr, String_t* ___filename, FileVersionInfo_t2_188 * ___version_info, int32_t ___memory_size, String_t* ___modulename, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.ProcessModule::get_BaseAddress()
extern "C" IntPtr_t ProcessModule_get_BaseAddress_m2_1600 (ProcessModule_t2_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IntPtr System.Diagnostics.ProcessModule::get_EntryPointAddress()
extern "C" IntPtr_t ProcessModule_get_EntryPointAddress_m2_1601 (ProcessModule_t2_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessModule::get_FileName()
extern "C" String_t* ProcessModule_get_FileName_m2_1602 (ProcessModule_t2_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.FileVersionInfo System.Diagnostics.ProcessModule::get_FileVersionInfo()
extern "C" FileVersionInfo_t2_188 * ProcessModule_get_FileVersionInfo_m2_1603 (ProcessModule_t2_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.ProcessModule::get_ModuleMemorySize()
extern "C" int32_t ProcessModule_get_ModuleMemorySize_m2_1604 (ProcessModule_t2_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessModule::get_ModuleName()
extern "C" String_t* ProcessModule_get_ModuleName_m2_1605 (ProcessModule_t2_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.ProcessModule::ToString()
extern "C" String_t* ProcessModule_ToString_m2_1606 (ProcessModule_t2_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
