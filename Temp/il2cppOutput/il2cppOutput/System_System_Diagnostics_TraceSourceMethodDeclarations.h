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

// System.Diagnostics.TraceSource
struct TraceSource_t2_225;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t2_33;
// System.Diagnostics.TraceListenerCollection
struct TraceListenerCollection_t2_221;
// System.Diagnostics.SourceSwitch
struct SourceSwitch_t2_210;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.String[]
struct StringU5BU5D_t1_206;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Diagnostics_SourceLevels.h"
#include "System_System_Diagnostics_TraceEventType.h"
#include "mscorlib_System_Guid.h"

// System.Void System.Diagnostics.TraceSource::.ctor(System.String)
extern "C" void TraceSource__ctor_m2_1902 (TraceSource_t2_225 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::.ctor(System.String,System.Diagnostics.SourceLevels)
extern "C" void TraceSource__ctor_m2_1903 (TraceSource_t2_225 * __this, String_t* ___name, int32_t ___sourceLevels, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.TraceSource::get_Attributes()
extern "C" StringDictionary_t2_33 * TraceSource_get_Attributes_m2_1904 (TraceSource_t2_225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceListenerCollection System.Diagnostics.TraceSource::get_Listeners()
extern "C" TraceListenerCollection_t2_221 * TraceSource_get_Listeners_m2_1905 (TraceSource_t2_225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.TraceSource::get_Name()
extern "C" String_t* TraceSource_get_Name_m2_1906 (TraceSource_t2_225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.SourceSwitch System.Diagnostics.TraceSource::get_Switch()
extern "C" SourceSwitch_t2_210 * TraceSource_get_Switch_m2_1907 (TraceSource_t2_225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::set_Switch(System.Diagnostics.SourceSwitch)
extern "C" void TraceSource_set_Switch_m2_1908 (TraceSource_t2_225 * __this, SourceSwitch_t2_210 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::Close()
extern "C" void TraceSource_Close_m2_1909 (TraceSource_t2_225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::Flush()
extern "C" void TraceSource_Flush_m2_1910 (TraceSource_t2_225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceData(System.Diagnostics.TraceEventType,System.Int32,System.Object)
extern "C" void TraceSource_TraceData_m2_1911 (TraceSource_t2_225 * __this, int32_t ___eventType, int32_t ___id, Object_t * ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceData(System.Diagnostics.TraceEventType,System.Int32,System.Object[])
extern "C" void TraceSource_TraceData_m2_1912 (TraceSource_t2_225 * __this, int32_t ___eventType, int32_t ___id, ObjectU5BU5D_t1_158* ___data, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceEvent(System.Diagnostics.TraceEventType,System.Int32)
extern "C" void TraceSource_TraceEvent_m2_1913 (TraceSource_t2_225 * __this, int32_t ___eventType, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceEvent(System.Diagnostics.TraceEventType,System.Int32,System.String)
extern "C" void TraceSource_TraceEvent_m2_1914 (TraceSource_t2_225 * __this, int32_t ___eventType, int32_t ___id, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceEvent(System.Diagnostics.TraceEventType,System.Int32,System.String,System.Object[])
extern "C" void TraceSource_TraceEvent_m2_1915 (TraceSource_t2_225 * __this, int32_t ___eventType, int32_t ___id, String_t* ___format, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceInformation(System.String)
extern "C" void TraceSource_TraceInformation_m2_1916 (TraceSource_t2_225 * __this, String_t* ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceInformation(System.String,System.Object[])
extern "C" void TraceSource_TraceInformation_m2_1917 (TraceSource_t2_225 * __this, String_t* ___format, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSource::TraceTransfer(System.Int32,System.String,System.Guid)
extern "C" void TraceSource_TraceTransfer_m2_1918 (TraceSource_t2_225 * __this, int32_t ___id, String_t* ___message, Guid_t1_774  ___relatedActivityId, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Diagnostics.TraceSource::GetSupportedAttributes()
extern "C" StringU5BU5D_t1_206* TraceSource_GetSupportedAttributes_m2_1919 (TraceSource_t2_225 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
