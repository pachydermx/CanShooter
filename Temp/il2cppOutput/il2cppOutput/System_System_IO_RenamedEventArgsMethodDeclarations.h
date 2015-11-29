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

// System.IO.RenamedEventArgs
struct RenamedEventArgs_t2_272;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_WatcherChangeTypes.h"

// System.Void System.IO.RenamedEventArgs::.ctor(System.IO.WatcherChangeTypes,System.String,System.String,System.String)
extern "C" void RenamedEventArgs__ctor_m2_2171 (RenamedEventArgs_t2_272 * __this, int32_t ___changeType, String_t* ___directory, String_t* ___name, String_t* ___oldName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.RenamedEventArgs::get_OldFullPath()
extern "C" String_t* RenamedEventArgs_get_OldFullPath_m2_2172 (RenamedEventArgs_t2_272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.RenamedEventArgs::get_OldName()
extern "C" String_t* RenamedEventArgs_get_OldName_m2_2173 (RenamedEventArgs_t2_272 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
