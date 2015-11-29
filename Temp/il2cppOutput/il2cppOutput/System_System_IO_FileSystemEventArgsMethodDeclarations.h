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

// System.IO.FileSystemEventArgs
struct FileSystemEventArgs_t2_245;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_IO_WatcherChangeTypes.h"

// System.Void System.IO.FileSystemEventArgs::.ctor(System.IO.WatcherChangeTypes,System.String,System.String)
extern "C" void FileSystemEventArgs__ctor_m2_2038 (FileSystemEventArgs_t2_245 * __this, int32_t ___changeType, String_t* ___directory, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemEventArgs::SetName(System.String)
extern "C" void FileSystemEventArgs_SetName_m2_2039 (FileSystemEventArgs_t2_245 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.WatcherChangeTypes System.IO.FileSystemEventArgs::get_ChangeType()
extern "C" int32_t FileSystemEventArgs_get_ChangeType_m2_2040 (FileSystemEventArgs_t2_245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemEventArgs::get_FullPath()
extern "C" String_t* FileSystemEventArgs_get_FullPath_m2_2041 (FileSystemEventArgs_t2_245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.IO.FileSystemEventArgs::get_Name()
extern "C" String_t* FileSystemEventArgs_get_Name_m2_2042 (FileSystemEventArgs_t2_245 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
