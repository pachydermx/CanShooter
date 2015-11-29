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

// System.Net.HttpListener
struct HttpListener_t2_572;
// System.Net.AuthenticationSchemeSelector
struct AuthenticationSchemeSelector_t2_574;
// System.Net.HttpListenerPrefixCollection
struct HttpListenerPrefixCollection_t2_573;
// System.String
struct String_t;
// System.IAsyncResult
struct IAsyncResult_t1_27;
// System.AsyncCallback
struct AsyncCallback_t1_28;
// System.Object
struct Object_t;
// System.Net.HttpListenerContext
struct HttpListenerContext_t2_515;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_AuthenticationSchemes.h"

// System.Void System.Net.HttpListener::.ctor()
extern "C" void HttpListener__ctor_m2_4308 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::System.IDisposable.Dispose()
extern "C" void HttpListener_System_IDisposable_Dispose_m2_4309 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.AuthenticationSchemes System.Net.HttpListener::get_AuthenticationSchemes()
extern "C" int32_t HttpListener_get_AuthenticationSchemes_m2_4310 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::set_AuthenticationSchemes(System.Net.AuthenticationSchemes)
extern "C" void HttpListener_set_AuthenticationSchemes_m2_4311 (HttpListener_t2_572 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.AuthenticationSchemeSelector System.Net.HttpListener::get_AuthenticationSchemeSelectorDelegate()
extern "C" AuthenticationSchemeSelector_t2_574 * HttpListener_get_AuthenticationSchemeSelectorDelegate_m2_4312 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::set_AuthenticationSchemeSelectorDelegate(System.Net.AuthenticationSchemeSelector)
extern "C" void HttpListener_set_AuthenticationSchemeSelectorDelegate_m2_4313 (HttpListener_t2_572 * __this, AuthenticationSchemeSelector_t2_574 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListener::get_IgnoreWriteExceptions()
extern "C" bool HttpListener_get_IgnoreWriteExceptions_m2_4314 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::set_IgnoreWriteExceptions(System.Boolean)
extern "C" void HttpListener_set_IgnoreWriteExceptions_m2_4315 (HttpListener_t2_572 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListener::get_IsListening()
extern "C" bool HttpListener_get_IsListening_m2_4316 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListener::get_IsSupported()
extern "C" bool HttpListener_get_IsSupported_m2_4317 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerPrefixCollection System.Net.HttpListener::get_Prefixes()
extern "C" HttpListenerPrefixCollection_t2_573 * HttpListener_get_Prefixes_m2_4318 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.HttpListener::get_Realm()
extern "C" String_t* HttpListener_get_Realm_m2_4319 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::set_Realm(System.String)
extern "C" void HttpListener_set_Realm_m2_4320 (HttpListener_t2_572 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.HttpListener::get_UnsafeConnectionNtlmAuthentication()
extern "C" bool HttpListener_get_UnsafeConnectionNtlmAuthentication_m2_4321 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::set_UnsafeConnectionNtlmAuthentication(System.Boolean)
extern "C" void HttpListener_set_UnsafeConnectionNtlmAuthentication_m2_4322 (HttpListener_t2_572 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::Abort()
extern "C" void HttpListener_Abort_m2_4323 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::Close()
extern "C" void HttpListener_Close_m2_4324 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::Close(System.Boolean)
extern "C" void HttpListener_Close_m2_4325 (HttpListener_t2_572 * __this, bool ___force, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::Cleanup(System.Boolean)
extern "C" void HttpListener_Cleanup_m2_4326 (HttpListener_t2_572 * __this, bool ___close_existing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IAsyncResult System.Net.HttpListener::BeginGetContext(System.AsyncCallback,System.Object)
extern "C" Object_t * HttpListener_BeginGetContext_m2_4327 (HttpListener_t2_572 * __this, AsyncCallback_t1_28 * ___callback, Object_t * ___state, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerContext System.Net.HttpListener::EndGetContext(System.IAsyncResult)
extern "C" HttpListenerContext_t2_515 * HttpListener_EndGetContext_m2_4328 (HttpListener_t2_572 * __this, Object_t * ___asyncResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.AuthenticationSchemes System.Net.HttpListener::SelectAuthenticationScheme(System.Net.HttpListenerContext)
extern "C" int32_t HttpListener_SelectAuthenticationScheme_m2_4329 (HttpListener_t2_572 * __this, HttpListenerContext_t2_515 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerContext System.Net.HttpListener::GetContext()
extern "C" HttpListenerContext_t2_515 * HttpListener_GetContext_m2_4330 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::Start()
extern "C" void HttpListener_Start_m2_4331 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::Stop()
extern "C" void HttpListener_Stop_m2_4332 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::CheckDisposed()
extern "C" void HttpListener_CheckDisposed_m2_4333 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.HttpListenerContext System.Net.HttpListener::GetContextFromQueue()
extern "C" HttpListenerContext_t2_515 * HttpListener_GetContextFromQueue_m2_4334 (HttpListener_t2_572 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::RegisterContext(System.Net.HttpListenerContext)
extern "C" void HttpListener_RegisterContext_m2_4335 (HttpListener_t2_572 * __this, HttpListenerContext_t2_515 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.HttpListener::UnregisterContext(System.Net.HttpListenerContext)
extern "C" void HttpListener_UnregisterContext_m2_4336 (HttpListener_t2_572 * __this, HttpListenerContext_t2_515 * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
