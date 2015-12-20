﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimatorTransitionInfo.h"

// System.Boolean UnityEngine.AnimatorTransitionInfo::IsName(System.String)
extern "C" bool AnimatorTransitionInfo_IsName_m5_1042 (AnimatorTransitionInfo_t5_141 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::IsUserName(System.String)
extern "C" bool AnimatorTransitionInfo_IsUserName_m5_1043 (AnimatorTransitionInfo_t5_141 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_fullPathHash()
extern "C" int32_t AnimatorTransitionInfo_get_fullPathHash_m5_1044 (AnimatorTransitionInfo_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_nameHash()
extern "C" int32_t AnimatorTransitionInfo_get_nameHash_m5_1045 (AnimatorTransitionInfo_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimatorTransitionInfo::get_userNameHash()
extern "C" int32_t AnimatorTransitionInfo_get_userNameHash_m5_1046 (AnimatorTransitionInfo_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimatorTransitionInfo::get_normalizedTime()
extern "C" float AnimatorTransitionInfo_get_normalizedTime_m5_1047 (AnimatorTransitionInfo_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_anyState()
extern "C" bool AnimatorTransitionInfo_get_anyState_m5_1048 (AnimatorTransitionInfo_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_entry()
extern "C" bool AnimatorTransitionInfo_get_entry_m5_1049 (AnimatorTransitionInfo_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.AnimatorTransitionInfo::get_exit()
extern "C" bool AnimatorTransitionInfo_get_exit_m5_1050 (AnimatorTransitionInfo_t5_141 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimatorTransitionInfo_t5_141_marshal(const AnimatorTransitionInfo_t5_141& unmarshaled, AnimatorTransitionInfo_t5_141_marshaled& marshaled);
extern "C" void AnimatorTransitionInfo_t5_141_marshal_back(const AnimatorTransitionInfo_t5_141_marshaled& marshaled, AnimatorTransitionInfo_t5_141& unmarshaled);
extern "C" void AnimatorTransitionInfo_t5_141_marshal_cleanup(AnimatorTransitionInfo_t5_141_marshaled& marshaled);
