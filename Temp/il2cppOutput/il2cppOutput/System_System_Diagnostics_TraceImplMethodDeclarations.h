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

// System.Diagnostics.TraceImpl
struct TraceImpl_t2_222;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2_221;
// System.Object
struct Object_t;
// System.Diagnostics.CorrelationManager
struct CorrelationManager_t2_182;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.TraceImpl::.ctor()
extern "C" void TraceImpl__ctor_m2_1793 (TraceImpl_t2_222 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::.cctor()
extern "C" void TraceImpl__cctor_m2_1794 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceImpl::get_AutoFlush()
extern "C" bool TraceImpl_get_AutoFlush_m2_1795 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::set_AutoFlush(System.Boolean)
extern "C" void TraceImpl_set_AutoFlush_m2_1796 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceImpl::get_IndentLevel()
extern "C" int32_t TraceImpl_get_IndentLevel_m2_1797 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::set_IndentLevel(System.Int32)
extern "C" void TraceImpl_set_IndentLevel_m2_1798 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.TraceImpl::get_IndentSize()
extern "C" int32_t TraceImpl_get_IndentSize_m2_1799 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::set_IndentSize(System.Int32)
extern "C" void TraceImpl_set_IndentSize_m2_1800 (Object_t * __this /* static, unused */, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceImpl::get_Listeners()
extern "C" TraceListenerCollection_t2_221 * TraceImpl_get_Listeners_m2_1801 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Diagnostics.TraceImpl::get_ListenersSyncRoot()
extern "C" Object_t * TraceImpl_get_ListenersSyncRoot_m2_1802 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.CorrelationManager System.Diagnostics.TraceImpl::get_CorrelationManager()
extern "C" CorrelationManager_t2_182 * TraceImpl_get_CorrelationManager_m2_1803 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceImpl::get_UseGlobalLock()
extern "C" bool TraceImpl_get_UseGlobalLock_m2_1804 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::set_UseGlobalLock(System.Boolean)
extern "C" void TraceImpl_set_UseGlobalLock_m2_1805 (Object_t * __this /* static, unused */, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::InitOnce()
extern "C" void TraceImpl_InitOnce_m2_1806 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Assert(System.Boolean)
extern "C" void TraceImpl_Assert_m2_1807 (Object_t * __this /* static, unused */, bool ___condition, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Assert(System.Boolean,System.String)
extern "C" void TraceImpl_Assert_m2_1808 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Assert(System.Boolean,System.String,System.String)
extern "C" void TraceImpl_Assert_m2_1809 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, String_t* ___detailMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Close()
extern "C" void TraceImpl_Close_m2_1810 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Fail(System.String)
extern "C" void TraceImpl_Fail_m2_1811 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Fail(System.String,System.String)
extern "C" void TraceImpl_Fail_m2_1812 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___detailMessage, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Flush()
extern "C" void TraceImpl_Flush_m2_1813 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Indent()
extern "C" void TraceImpl_Indent_m2_1814 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Unindent()
extern "C" void TraceImpl_Unindent_m2_1815 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Write(System.Object)
extern "C" void TraceImpl_Write_m2_1816 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Write(System.String)
extern "C" void TraceImpl_Write_m2_1817 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Write(System.Object,System.String)
extern "C" void TraceImpl_Write_m2_1818 (Object_t * __this /* static, unused */, Object_t * ___value, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::Write(System.String,System.String)
extern "C" void TraceImpl_Write_m2_1819 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteIf(System.Boolean,System.Object)
extern "C" void TraceImpl_WriteIf_m2_1820 (Object_t * __this /* static, unused */, bool ___condition, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteIf(System.Boolean,System.String)
extern "C" void TraceImpl_WriteIf_m2_1821 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteIf(System.Boolean,System.Object,System.String)
extern "C" void TraceImpl_WriteIf_m2_1822 (Object_t * __this /* static, unused */, bool ___condition, Object_t * ___value, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteIf(System.Boolean,System.String,System.String)
extern "C" void TraceImpl_WriteIf_m2_1823 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLine(System.Object)
extern "C" void TraceImpl_WriteLine_m2_1824 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLine(System.String)
extern "C" void TraceImpl_WriteLine_m2_1825 (Object_t * __this /* static, unused */, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLine(System.Object,System.String)
extern "C" void TraceImpl_WriteLine_m2_1826 (Object_t * __this /* static, unused */, Object_t * ___value, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLine(System.String,System.String)
extern "C" void TraceImpl_WriteLine_m2_1827 (Object_t * __this /* static, unused */, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLineIf(System.Boolean,System.Object)
extern "C" void TraceImpl_WriteLineIf_m2_1828 (Object_t * __this /* static, unused */, bool ___condition, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLineIf(System.Boolean,System.String)
extern "C" void TraceImpl_WriteLineIf_m2_1829 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLineIf(System.Boolean,System.Object,System.String)
extern "C" void TraceImpl_WriteLineIf_m2_1830 (Object_t * __this /* static, unused */, bool ___condition, Object_t * ___value, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceImpl::WriteLineIf(System.Boolean,System.String,System.String)
extern "C" void TraceImpl_WriteLineIf_m2_1831 (Object_t * __this /* static, unused */, bool ___condition, String_t* ___message, String_t* ___category, const MethodInfo* method) IL2CPP_METHOD_ATTR;
