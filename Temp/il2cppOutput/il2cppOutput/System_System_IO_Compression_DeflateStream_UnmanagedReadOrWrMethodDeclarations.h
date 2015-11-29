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

// System.IO.Compression.DeflateStream/UnmanagedReadOrWrite
struct UnmanagedReadOrWrite_t2_229;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::.ctor(System.Object,System.IntPtr)
extern "C" void UnmanagedReadOrWrite__ctor_m2_1935 (UnmanagedReadOrWrite_t2_229 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::Invoke(System.IntPtr,System.Int32,System.IntPtr)
extern "C" int32_t UnmanagedReadOrWrite_Invoke_m2_1936 (UnmanagedReadOrWrite_t2_229 * __this, IntPtr_t ___buffer, int32_t ___length, IntPtr_t ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" int32_t pinvoke_delegate_wrapper_UnmanagedReadOrWrite_t2_229(Il2CppObject* delegate, IntPtr_t ___buffer, int32_t ___length, IntPtr_t ___data);
// System.IAsyncResult System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::BeginInvoke(System.IntPtr,System.Int32,System.IntPtr,System.AsyncCallback,System.Object)
extern "C" Object_t * UnmanagedReadOrWrite_BeginInvoke_m2_1937 (UnmanagedReadOrWrite_t2_229 * __this, IntPtr_t ___buffer, int32_t ___length, IntPtr_t ___data, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.IO.Compression.DeflateStream/UnmanagedReadOrWrite::EndInvoke(System.IAsyncResult)
extern "C" int32_t UnmanagedReadOrWrite_EndInvoke_m2_1938 (UnmanagedReadOrWrite_t2_229 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
