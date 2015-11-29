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

// System.Net.DownloadProgressChangedEventArgs
struct DownloadProgressChangedEventArgs_t2_539;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.DownloadProgressChangedEventArgs::.ctor(System.Int64,System.Int64,System.Object)
extern "C" void DownloadProgressChangedEventArgs__ctor_m2_4016 (DownloadProgressChangedEventArgs_t2_539 * __this, int64_t ___bytesReceived, int64_t ___totalBytesToReceive, Object_t * ___userState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.DownloadProgressChangedEventArgs::get_BytesReceived()
extern "C" int64_t DownloadProgressChangedEventArgs_get_BytesReceived_m2_4017 (DownloadProgressChangedEventArgs_t2_539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.DownloadProgressChangedEventArgs::get_TotalBytesToReceive()
extern "C" int64_t DownloadProgressChangedEventArgs_get_TotalBytesToReceive_m2_4018 (DownloadProgressChangedEventArgs_t2_539 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
