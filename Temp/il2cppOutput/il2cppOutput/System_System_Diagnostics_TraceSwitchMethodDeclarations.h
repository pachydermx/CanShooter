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

// System.Diagnostics.TraceSwitch
struct TraceSwitch_t2_227;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Diagnostics_TraceLevel.h"

// System.Void System.Diagnostics.TraceSwitch::.ctor(System.String,System.String)
extern "C" void TraceSwitch__ctor_m2_1925 (TraceSwitch_t2_227 * __this, String_t* ___displayName, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSwitch::.ctor(System.String,System.String,System.String)
extern "C" void TraceSwitch__ctor_m2_1926 (TraceSwitch_t2_227 * __this, String_t* ___displayName, String_t* ___description, String_t* ___defaultSwitchValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Diagnostics.TraceLevel System.Diagnostics.TraceSwitch::get_Level()
extern "C" int32_t TraceSwitch_get_Level_m2_1927 (TraceSwitch_t2_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSwitch::set_Level(System.Diagnostics.TraceLevel)
extern "C" void TraceSwitch_set_Level_m2_1928 (TraceSwitch_t2_227 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceSwitch::get_TraceError()
extern "C" bool TraceSwitch_get_TraceError_m2_1929 (TraceSwitch_t2_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceSwitch::get_TraceWarning()
extern "C" bool TraceSwitch_get_TraceWarning_m2_1930 (TraceSwitch_t2_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceSwitch::get_TraceInfo()
extern "C" bool TraceSwitch_get_TraceInfo_m2_1931 (TraceSwitch_t2_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Diagnostics.TraceSwitch::get_TraceVerbose()
extern "C" bool TraceSwitch_get_TraceVerbose_m2_1932 (TraceSwitch_t2_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSwitch::OnSwitchSettingChanged()
extern "C" void TraceSwitch_OnSwitchSettingChanged_m2_1933 (TraceSwitch_t2_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.TraceSwitch::OnValueChanged()
extern "C" void TraceSwitch_OnValueChanged_m2_1934 (TraceSwitch_t2_227 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
