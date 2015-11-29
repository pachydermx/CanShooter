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

// System.Net.FileWebRequest/FileWebStream
struct FileWebStream_t2_544;
// System.Net.FileWebRequest
struct FileWebRequest_t2_545;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IO_FileMode.h"
#include "mscorlib_System_IO_FileAccess.h"
#include "mscorlib_System_IO_FileShare.h"

// System.Void System.Net.FileWebRequest/FileWebStream::.ctor(System.Net.FileWebRequest,System.IO.FileMode,System.IO.FileAccess,System.IO.FileShare)
extern "C" void FileWebStream__ctor_m2_4049 (FileWebStream_t2_544 * __this, FileWebRequest_t2_545 * ___webRequest, int32_t ___mode, int32_t ___access, int32_t ___share, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebRequest/FileWebStream::Close()
extern "C" void FileWebStream_Close_m2_4050 (FileWebStream_t2_544 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
