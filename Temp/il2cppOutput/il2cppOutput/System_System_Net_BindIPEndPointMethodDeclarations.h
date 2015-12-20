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

// System.Net.BindIPEndPoint
struct BindIPEndPoint_t2_601;
// System.Object
struct Object_t;
// System.Net.IPEndPoint
struct IPEndPoint_t2_430;
// System.Net.ServicePoint
struct ServicePoint_t2_564;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"

// System.Void System.Net.BindIPEndPoint::.ctor(System.Object,System.IntPtr)
extern "C" void BindIPEndPoint__ctor_m2_6590 (BindIPEndPoint_t2_601 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::Invoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32)
extern "C" IPEndPoint_t2_430 * BindIPEndPoint_Invoke_m2_6591 (BindIPEndPoint_t2_601 * __this, ServicePoint_t2_564 * ___servicePoint, IPEndPoint_t2_430 * ___remoteEndPoint, int32_t ___retryCount, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" IPEndPoint_t2_430 * pinvoke_delegate_wrapper_BindIPEndPoint_t2_601(Il2CppObject* delegate, ServicePoint_t2_564 * ___servicePoint, IPEndPoint_t2_430 * ___remoteEndPoint, int32_t ___retryCount);
// System.IAsyncResult System.Net.BindIPEndPoint::BeginInvoke(System.Net.ServicePoint,System.Net.IPEndPoint,System.Int32,System.AsyncCallback,System.Object)
extern "C" Object_t * BindIPEndPoint_BeginInvoke_m2_6592 (BindIPEndPoint_t2_601 * __this, ServicePoint_t2_564 * ___servicePoint, IPEndPoint_t2_430 * ___remoteEndPoint, int32_t ___retryCount, AsyncCallback_t1_28 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPEndPoint System.Net.BindIPEndPoint::EndInvoke(System.IAsyncResult)
extern "C" IPEndPoint_t2_430 * BindIPEndPoint_EndInvoke_m2_6593 (BindIPEndPoint_t2_601 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
