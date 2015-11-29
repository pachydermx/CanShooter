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

// System.IO.FileSystemEventHandler
struct FileSystemEventHandler_t2_249;
// System.Object
struct Object_t;
// System.IO.FileSystemEventArgs
struct FileSystemEventArgs_t2_245;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.FileSystemEventHandler::.ctor(System.Object,System.IntPtr)
extern "C" void FileSystemEventHandler__ctor_m2_6554 (FileSystemEventHandler_t2_249 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemEventHandler::Invoke(System.Object,System.IO.FileSystemEventArgs)
extern "C" void FileSystemEventHandler_Invoke_m2_6555 (FileSystemEventHandler_t2_249 * __this, Object_t * ___sender, FileSystemEventArgs_t2_245 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_FileSystemEventHandler_t2_249(Il2CppObject* delegate, Object_t * ___sender, FileSystemEventArgs_t2_245 * ___e);
// System.IAsyncResult System.IO.FileSystemEventHandler::BeginInvoke(System.Object,System.IO.FileSystemEventArgs,System.AsyncCallback,System.Object)
extern "C" Object_t * FileSystemEventHandler_BeginInvoke_m2_6556 (FileSystemEventHandler_t2_249 * __this, Object_t * ___sender, FileSystemEventArgs_t2_245 * ___e, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.IO.FileSystemEventHandler::EndInvoke(System.IAsyncResult)
extern "C" void FileSystemEventHandler_EndInvoke_m2_6557 (FileSystemEventHandler_t2_249 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
