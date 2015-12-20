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

// System.Diagnostics.Switch
struct Switch_t2_211;
// System.String
struct String_t;
// System.Collections.Specialized.StringDictionary
struct StringDictionary_t2_33;
// System.String[]
struct StringU5BU5D_t1_206;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Diagnostics.Switch::.ctor(System.String,System.String)
extern "C" void Switch__ctor_m2_1710 (Switch_t2_211 * __this, String_t* ___displayName, String_t* ___description, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::.ctor(System.String,System.String,System.String)
extern "C" void Switch__ctor_m2_1711 (Switch_t2_211 * __this, String_t* ___displayName, String_t* ___description, String_t* ___defaultSwitchValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Switch::get_Description()
extern "C" String_t* Switch_get_Description_m2_1712 (Switch_t2_211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Switch::get_DisplayName()
extern "C" String_t* Switch_get_DisplayName_m2_1713 (Switch_t2_211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Diagnostics.Switch::get_SwitchSetting()
extern "C" int32_t Switch_get_SwitchSetting_m2_1714 (Switch_t2_211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::set_SwitchSetting(System.Int32)
extern "C" void Switch_set_SwitchSetting_m2_1715 (Switch_t2_211 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.StringDictionary System.Diagnostics.Switch::get_Attributes()
extern "C" StringDictionary_t2_33 * Switch_get_Attributes_m2_1716 (Switch_t2_211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Diagnostics.Switch::get_Value()
extern "C" String_t* Switch_get_Value_m2_1717 (Switch_t2_211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::set_Value(System.String)
extern "C" void Switch_set_Value_m2_1718 (Switch_t2_211 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Diagnostics.Switch::GetSupportedAttributes()
extern "C" StringU5BU5D_t1_206* Switch_GetSupportedAttributes_m2_1719 (Switch_t2_211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::OnValueChanged()
extern "C" void Switch_OnValueChanged_m2_1720 (Switch_t2_211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::GetConfigFileSetting()
extern "C" void Switch_GetConfigFileSetting_m2_1721 (Switch_t2_211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Diagnostics.Switch::OnSwitchSettingChanged()
extern "C" void Switch_OnSwitchSettingChanged_m2_1722 (Switch_t2_211 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
