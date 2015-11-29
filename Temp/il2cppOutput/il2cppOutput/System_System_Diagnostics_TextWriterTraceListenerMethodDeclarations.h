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

// System.Diagnostics.TextWriterTraceListener
struct TextWriterTraceListener_t2_181;
// System.IO.Stream
struct Stream_t1_226;
// System.String
struct String_t;
// System.IO.TextWriter
struct TextWriter_t1_263;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.TextWriterTraceListener::.ctor()
extern "C" void TextWriterTraceListener__ctor_m2_1726 (TextWriterTraceListener_t2_181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::.ctor(System.IO.Stream)
extern "C" void TextWriterTraceListener__ctor_m2_1727 (TextWriterTraceListener_t2_181 * __this, Stream_t1_226 * ___stream, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::.ctor(System.String)
extern "C" void TextWriterTraceListener__ctor_m2_1728 (TextWriterTraceListener_t2_181 * __this, String_t* ___fileName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::.ctor(System.IO.TextWriter)
extern "C" void TextWriterTraceListener__ctor_m2_1729 (TextWriterTraceListener_t2_181 * __this, TextWriter_t1_263 * ___writer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::.ctor(System.IO.Stream,System.String)
extern "C" void TextWriterTraceListener__ctor_m2_1730 (TextWriterTraceListener_t2_181 * __this, Stream_t1_226 * ___stream, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::.ctor(System.String,System.String)
extern "C" void TextWriterTraceListener__ctor_m2_1731 (TextWriterTraceListener_t2_181 * __this, String_t* ___fileName, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::.ctor(System.IO.TextWriter,System.String)
extern "C" void TextWriterTraceListener__ctor_m2_1732 (TextWriterTraceListener_t2_181 * __this, TextWriter_t1_263 * ___writer, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.TextWriter System.Diagnostics.TextWriterTraceListener::get_Writer()
extern "C" TextWriter_t1_263 * TextWriterTraceListener_get_Writer_m2_1733 (TextWriterTraceListener_t2_181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::set_Writer(System.IO.TextWriter)
extern "C" void TextWriterTraceListener_set_Writer_m2_1734 (TextWriterTraceListener_t2_181 * __this, TextWriter_t1_263 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::Close()
extern "C" void TextWriterTraceListener_Close_m2_1735 (TextWriterTraceListener_t2_181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::Dispose(System.Boolean)
extern "C" void TextWriterTraceListener_Dispose_m2_1736 (TextWriterTraceListener_t2_181 * __this, bool ___disposing, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::Flush()
extern "C" void TextWriterTraceListener_Flush_m2_1737 (TextWriterTraceListener_t2_181 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::Write(System.String)
extern "C" void TextWriterTraceListener_Write_m2_1738 (TextWriterTraceListener_t2_181 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TextWriterTraceListener::WriteLine(System.String)
extern "C" void TextWriterTraceListener_WriteLine_m2_1739 (TextWriterTraceListener_t2_181 * __this, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
