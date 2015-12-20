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


#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"

// UnityEngine.Vector2 UnityEngine.GUIClip::Unclip(UnityEngine.Vector2)
extern "C" Vector2_t5_56  GUIClip_Unclip_m5_1589 (Object_t * __this /* static, unused */, Vector2_t5_56  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" void GUIClip_Push_m5_1590 (Object_t * __this /* static, unused */, Rect_t5_30  ___screenRect, Vector2_t5_56  ___scrollOffset, Vector2_t5_56  ___renderOffset, bool ___resetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Push(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
extern "C" void GUIClip_INTERNAL_CALL_Push_m5_1591 (Object_t * __this /* static, unused */, Rect_t5_30 * ___screenRect, Vector2_t5_56 * ___scrollOffset, Vector2_t5_56 * ___renderOffset, bool ___resetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Pop()
extern "C" void GUIClip_Pop_m5_1592 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Unclip_Vector2(UnityEngine.Vector2&)
extern "C" void GUIClip_Unclip_Vector2_m5_1593 (Object_t * __this /* static, unused */, Vector2_t5_56 * ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Unclip_Vector2(UnityEngine.Vector2&)
extern "C" void GUIClip_INTERNAL_CALL_Unclip_Vector2_m5_1594 (Object_t * __this /* static, unused */, Vector2_t5_56 * ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GUIClip::GetMatrix()
extern "C" Matrix4x4_t5_59  GUIClip_GetMatrix_m5_1595 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::SetMatrix(UnityEngine.Matrix4x4)
extern "C" void GUIClip_SetMatrix_m5_1596 (Object_t * __this /* static, unused */, Matrix4x4_t5_59  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_SetMatrix(UnityEngine.Matrix4x4&)
extern "C" void GUIClip_INTERNAL_CALL_SetMatrix_m5_1597 (Object_t * __this /* static, unused */, Matrix4x4_t5_59 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
