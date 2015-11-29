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
extern "C" Vector2_t5_54  GUIClip_Unclip_m5_1262 (Object_t * __this /* static, unused */, Vector2_t5_54  ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Push(UnityEngine.Rect,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
extern "C" void GUIClip_Push_m5_1263 (Object_t * __this /* static, unused */, Rect_t5_30  ___screenRect, Vector2_t5_54  ___scrollOffset, Vector2_t5_54  ___renderOffset, bool ___resetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Push(UnityEngine.Rect&,UnityEngine.Vector2&,UnityEngine.Vector2&,System.Boolean)
extern "C" void GUIClip_INTERNAL_CALL_Push_m5_1264 (Object_t * __this /* static, unused */, Rect_t5_30 * ___screenRect, Vector2_t5_54 * ___scrollOffset, Vector2_t5_54 * ___renderOffset, bool ___resetOffset, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Pop()
extern "C" void GUIClip_Pop_m5_1265 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::Unclip_Vector2(UnityEngine.Vector2&)
extern "C" void GUIClip_Unclip_Vector2_m5_1266 (Object_t * __this /* static, unused */, Vector2_t5_54 * ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_Unclip_Vector2(UnityEngine.Vector2&)
extern "C" void GUIClip_INTERNAL_CALL_Unclip_Vector2_m5_1267 (Object_t * __this /* static, unused */, Vector2_t5_54 * ___pos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Matrix4x4 UnityEngine.GUIClip::GetMatrix()
extern "C" Matrix4x4_t5_57  GUIClip_GetMatrix_m5_1268 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::SetMatrix(UnityEngine.Matrix4x4)
extern "C" void GUIClip_SetMatrix_m5_1269 (Object_t * __this /* static, unused */, Matrix4x4_t5_57  ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GUIClip::INTERNAL_CALL_SetMatrix(UnityEngine.Matrix4x4&)
extern "C" void GUIClip_INTERNAL_CALL_SetMatrix_m5_1270 (Object_t * __this /* static, unused */, Matrix4x4_t5_57 * ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
