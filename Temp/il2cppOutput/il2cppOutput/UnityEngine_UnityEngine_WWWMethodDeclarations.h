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

// UnityEngine.WWW
struct WWW_t5_84;
// System.String
struct String_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t1_1029;
// System.Text.Encoding
struct Encoding_t1_227;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.WWW::.ctor(System.String)
extern "C" void WWW__ctor_m5_634 (WWW_t5_84 * __this, String_t* ___url, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
extern "C" void WWW_Dispose_m5_635 (WWW_t5_84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
extern "C" void WWW_Finalize_m5_636 (WWW_t5_84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
extern "C" void WWW_DestroyWWW_m5_637 (WWW_t5_84 * __this, bool ___cancel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
extern "C" void WWW_InitWWW_m5_638 (WWW_t5_84 * __this, String_t* ___url, ByteU5BU5D_t1_72* ___postData, StringU5BU5D_t1_206* ___iHeaders, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
extern "C" Dictionary_2_t1_1029 * WWW_get_responseHeaders_m5_639 (WWW_t5_84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
extern "C" String_t* WWW_get_responseHeadersString_m5_640 (WWW_t5_84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
extern "C" String_t* WWW_get_text_m5_641 (WWW_t5_84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
extern "C" Encoding_t1_227 * WWW_GetTextEncoder_m5_642 (WWW_t5_84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
extern "C" ByteU5BU5D_t1_72* WWW_get_bytes_m5_643 (WWW_t5_84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
extern "C" String_t* WWW_get_error_m5_644 (WWW_t5_84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
extern "C" bool WWW_get_isDone_m5_645 (WWW_t5_84 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
extern "C" Dictionary_2_t1_1029 * WWW_ParseHTTPHeaderString_m5_646 (Object_t * __this /* static, unused */, String_t* ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
