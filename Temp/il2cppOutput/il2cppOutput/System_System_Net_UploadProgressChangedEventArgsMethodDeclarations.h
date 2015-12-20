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

// System.Net.UploadProgressChangedEventArgs
struct UploadProgressChangedEventArgs_t2_610;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.UploadProgressChangedEventArgs::.ctor(System.Int64,System.Int64,System.Int64,System.Int64,System.Int32,System.Object)
extern "C" void UploadProgressChangedEventArgs__ctor_m2_4876 (UploadProgressChangedEventArgs_t2_610 * __this, int64_t ___bytesReceived, int64_t ___totalBytesToReceive, int64_t ___bytesSent, int64_t ___totalBytesToSend, int32_t ___progressPercentage, Object_t * ___userState, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.UploadProgressChangedEventArgs::get_BytesReceived()
extern "C" int64_t UploadProgressChangedEventArgs_get_BytesReceived_m2_4877 (UploadProgressChangedEventArgs_t2_610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.UploadProgressChangedEventArgs::get_TotalBytesToReceive()
extern "C" int64_t UploadProgressChangedEventArgs_get_TotalBytesToReceive_m2_4878 (UploadProgressChangedEventArgs_t2_610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.UploadProgressChangedEventArgs::get_BytesSent()
extern "C" int64_t UploadProgressChangedEventArgs_get_BytesSent_m2_4879 (UploadProgressChangedEventArgs_t2_610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.UploadProgressChangedEventArgs::get_TotalBytesToSend()
extern "C" int64_t UploadProgressChangedEventArgs_get_TotalBytesToSend_m2_4880 (UploadProgressChangedEventArgs_t2_610 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
