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

// UnityEngine.AnimationCurve
struct AnimationCurve_t5_111;
struct AnimationCurve_t5_111_marshaled;
// UnityEngine.Keyframe[]
struct KeyframeU5BU5D_t5_234;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.AnimationCurve::.ctor(UnityEngine.Keyframe[])
extern "C" void AnimationCurve__ctor_m5_800 (AnimationCurve_t5_111 * __this, KeyframeU5BU5D_t5_234* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::.ctor()
extern "C" void AnimationCurve__ctor_m5_801 (AnimationCurve_t5_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Cleanup()
extern "C" void AnimationCurve_Cleanup_m5_802 (AnimationCurve_t5_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Finalize()
extern "C" void AnimationCurve_Finalize_m5_803 (AnimationCurve_t5_111 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationCurve::Init(UnityEngine.Keyframe[])
extern "C" void AnimationCurve_Init_m5_804 (AnimationCurve_t5_111 * __this, KeyframeU5BU5D_t5_234* ___keys, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void AnimationCurve_t5_111_marshal(const AnimationCurve_t5_111& unmarshaled, AnimationCurve_t5_111_marshaled& marshaled);
extern "C" void AnimationCurve_t5_111_marshal_back(const AnimationCurve_t5_111_marshaled& marshaled, AnimationCurve_t5_111& unmarshaled);
extern "C" void AnimationCurve_t5_111_marshal_cleanup(AnimationCurve_t5_111_marshaled& marshaled);
