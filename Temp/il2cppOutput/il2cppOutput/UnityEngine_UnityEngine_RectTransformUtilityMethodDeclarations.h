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

// UnityEngine.RectTransform
struct RectTransform_t5_71;
// UnityEngine.Camera
struct Camera_t5_90;
// UnityEngine.Transform
struct Transform_t5_72;
// UnityEngine.Canvas
struct Canvas_t5_160;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Ray.h"

// System.Void UnityEngine.RectTransformUtility::.cctor()
extern "C" void RectTransformUtility__cctor_m5_1234 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera)
extern "C" bool RectTransformUtility_RectangleContainsScreenPoint_m5_1235 (Object_t * __this /* static, unused */, RectTransform_t5_71 * ___rect, Vector2_t5_56  ___screenPoint, Camera_t5_90 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::INTERNAL_CALL_RectangleContainsScreenPoint(UnityEngine.RectTransform,UnityEngine.Vector2&,UnityEngine.Camera)
extern "C" bool RectTransformUtility_INTERNAL_CALL_RectangleContainsScreenPoint_m5_1236 (Object_t * __this /* static, unused */, RectTransform_t5_71 * ___rect, Vector2_t5_56 * ___screenPoint, Camera_t5_90 * ___cam, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas)
extern "C" Vector2_t5_56  RectTransformUtility_PixelAdjustPoint_m5_1237 (Object_t * __this /* static, unused */, Vector2_t5_56  ___point, Transform_t5_72 * ___elementTransform, Canvas_t5_160 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::PixelAdjustPoint(UnityEngine.Vector2,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_PixelAdjustPoint_m5_1238 (Object_t * __this /* static, unused */, Vector2_t5_56  ___point, Transform_t5_72 * ___elementTransform, Canvas_t5_160 * ___canvas, Vector2_t5_56 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::INTERNAL_CALL_PixelAdjustPoint(UnityEngine.Vector2&,UnityEngine.Transform,UnityEngine.Canvas,UnityEngine.Vector2&)
extern "C" void RectTransformUtility_INTERNAL_CALL_PixelAdjustPoint_m5_1239 (Object_t * __this /* static, unused */, Vector2_t5_56 * ___point, Transform_t5_72 * ___elementTransform, Canvas_t5_160 * ___canvas, Vector2_t5_56 * ___output, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.RectTransformUtility::PixelAdjustRect(UnityEngine.RectTransform,UnityEngine.Canvas)
extern "C" Rect_t5_30  RectTransformUtility_PixelAdjustRect_m5_1240 (Object_t * __this /* static, unused */, RectTransform_t5_71 * ___rectTransform, Canvas_t5_160 * ___canvas, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector3&)
extern "C" bool RectTransformUtility_ScreenPointToWorldPointInRectangle_m5_1241 (Object_t * __this /* static, unused */, RectTransform_t5_71 * ___rect, Vector2_t5_56  ___screenPoint, Camera_t5_90 * ___cam, Vector3_t5_57 * ___worldPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.RectTransformUtility::ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform,UnityEngine.Vector2,UnityEngine.Camera,UnityEngine.Vector2&)
extern "C" bool RectTransformUtility_ScreenPointToLocalPointInRectangle_m5_1242 (Object_t * __this /* static, unused */, RectTransform_t5_71 * ___rect, Vector2_t5_56  ___screenPoint, Camera_t5_90 * ___cam, Vector2_t5_56 * ___localPoint, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Ray UnityEngine.RectTransformUtility::ScreenPointToRay(UnityEngine.Camera,UnityEngine.Vector2)
extern "C" Ray_t5_62  RectTransformUtility_ScreenPointToRay_m5_1243 (Object_t * __this /* static, unused */, Camera_t5_90 * ___cam, Vector2_t5_56  ___screenPos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutOnAxis(UnityEngine.RectTransform,System.Int32,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutOnAxis_m5_1244 (Object_t * __this /* static, unused */, RectTransform_t5_71 * ___rect, int32_t ___axis, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RectTransformUtility::FlipLayoutAxes(UnityEngine.RectTransform,System.Boolean,System.Boolean)
extern "C" void RectTransformUtility_FlipLayoutAxes_m5_1245 (Object_t * __this /* static, unused */, RectTransform_t5_71 * ___rect, bool ___keepPositioning, bool ___recursive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.RectTransformUtility::GetTransposed(UnityEngine.Vector2)
extern "C" Vector2_t5_56  RectTransformUtility_GetTransposed_m5_1246 (Object_t * __this /* static, unused */, Vector2_t5_56  ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
