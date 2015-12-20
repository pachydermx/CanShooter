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

// System.Net.Mail.AlternateView
struct AlternateView_t2_282;
// System.String
struct String_t;
// System.Net.Mime.ContentType
struct ContentType_t2_290;
// System.IO.Stream
struct Stream_t1_226;
// System.Uri
struct Uri_t2_284;
// System.Net.Mail.LinkedResourceCollection
struct LinkedResourceCollection_t2_285;
// System.Text.Encoding
struct Encoding_t1_227;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Net.Mail.AlternateView::.ctor(System.String)
extern "C" void AlternateView__ctor_m2_2211 (AlternateView_t2_282 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::.ctor(System.String,System.Net.Mime.ContentType)
extern "C" void AlternateView__ctor_m2_2212 (AlternateView_t2_282 * __this, String_t* ___fileName, ContentType_t2_290 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::.ctor(System.String,System.String)
extern "C" void AlternateView__ctor_m2_2213 (AlternateView_t2_282 * __this, String_t* ___fileName, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::.ctor(System.IO.Stream)
extern "C" void AlternateView__ctor_m2_2214 (AlternateView_t2_282 * __this, Stream_t1_226 * ___contentStream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::.ctor(System.IO.Stream,System.String)
extern "C" void AlternateView__ctor_m2_2215 (AlternateView_t2_282 * __this, Stream_t1_226 * ___contentStream, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::.ctor(System.IO.Stream,System.Net.Mime.ContentType)
extern "C" void AlternateView__ctor_m2_2216 (AlternateView_t2_282 * __this, Stream_t1_226 * ___contentStream, ContentType_t2_290 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.Mail.AlternateView::get_BaseUri()
extern "C" Uri_t2_284 * AlternateView_get_BaseUri_m2_2217 (AlternateView_t2_282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::set_BaseUri(System.Uri)
extern "C" void AlternateView_set_BaseUri_m2_2218 (AlternateView_t2_282 * __this, Uri_t2_284 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.LinkedResourceCollection System.Net.Mail.AlternateView::get_LinkedResources()
extern "C" LinkedResourceCollection_t2_285 * AlternateView_get_LinkedResources_m2_2219 (AlternateView_t2_282 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AlternateView System.Net.Mail.AlternateView::CreateAlternateViewFromString(System.String)
extern "C" AlternateView_t2_282 * AlternateView_CreateAlternateViewFromString_m2_2220 (Object_t * __this /* static, unused */, String_t* ___content, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AlternateView System.Net.Mail.AlternateView::CreateAlternateViewFromString(System.String,System.Net.Mime.ContentType)
extern "C" AlternateView_t2_282 * AlternateView_CreateAlternateViewFromString_m2_2221 (Object_t * __this /* static, unused */, String_t* ___content, ContentType_t2_290 * ___contentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Mail.AlternateView System.Net.Mail.AlternateView::CreateAlternateViewFromString(System.String,System.Text.Encoding,System.String)
extern "C" AlternateView_t2_282 * AlternateView_CreateAlternateViewFromString_m2_2222 (Object_t * __this /* static, unused */, String_t* ___content, Encoding_t1_227 * ___encoding, String_t* ___mediaType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Mail.AlternateView::Dispose(System.Boolean)
extern "C" void AlternateView_Dispose_m2_2223 (AlternateView_t2_282 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
