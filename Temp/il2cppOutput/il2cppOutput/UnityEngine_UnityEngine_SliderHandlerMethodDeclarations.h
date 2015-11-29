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

// UnityEngine.GUIStyle
struct GUIStyle_t5_138;
// UnityEngine.Event
struct Event_t5_123;
struct Event_t5_123_marshaled;
// UnityEngine.SliderState
struct SliderState_t5_199;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_SliderHandler.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "UnityEngine_UnityEngine_EventType.h"

// System.Void UnityEngine.SliderHandler::.ctor(UnityEngine.Rect,System.Single,System.Single,System.Single,System.Single,UnityEngine.GUIStyle,UnityEngine.GUIStyle,System.Boolean,System.Int32)
extern "C" void SliderHandler__ctor_m5_1366 (SliderHandler_t5_200 * __this, Rect_t5_30  ___position, float ___currentValue, float ___size, float ___start, float ___end, GUIStyle_t5_138 * ___slider, GUIStyle_t5_138 * ___thumb, bool ___horiz, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Handle()
extern "C" float SliderHandler_Handle_m5_1367 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDown()
extern "C" float SliderHandler_OnMouseDown_m5_1368 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseDrag()
extern "C" float SliderHandler_OnMouseDrag_m5_1369 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnMouseUp()
extern "C" float SliderHandler_OnMouseUp_m5_1370 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::OnRepaint()
extern "C" float SliderHandler_OnRepaint_m5_1371 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.EventType UnityEngine.SliderHandler::CurrentEventType()
extern "C" int32_t SliderHandler_CurrentEventType_m5_1372 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.SliderHandler::CurrentScrollTroughSide()
extern "C" int32_t SliderHandler_CurrentScrollTroughSide_m5_1373 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::IsEmptySlider()
extern "C" bool SliderHandler_IsEmptySlider_m5_1374 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.SliderHandler::SupportsPageMovements()
extern "C" bool SliderHandler_SupportsPageMovements_m5_1375 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageMovementValue()
extern "C" float SliderHandler_PageMovementValue_m5_1376 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::PageUpMovementBound()
extern "C" float SliderHandler_PageUpMovementBound_m5_1377 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Event UnityEngine.SliderHandler::CurrentEvent()
extern "C" Event_t5_123 * SliderHandler_CurrentEvent_m5_1378 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValueForCurrentMousePosition()
extern "C" float SliderHandler_ValueForCurrentMousePosition_m5_1379 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::Clamp(System.Single)
extern "C" float SliderHandler_Clamp_m5_1380 (SliderHandler_t5_200 * __this, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbSelectionRect()
extern "C" Rect_t5_30  SliderHandler_ThumbSelectionRect_m5_1381 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.SliderHandler::StartDraggingWithValue(System.Single)
extern "C" void SliderHandler_StartDraggingWithValue_m5_1382 (SliderHandler_t5_200 * __this, float ___dragStartValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SliderState UnityEngine.SliderHandler::SliderState()
extern "C" SliderState_t5_199 * SliderHandler_SliderState_m5_1383 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::ThumbRect()
extern "C" Rect_t5_30  SliderHandler_ThumbRect_m5_1384 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::VerticalThumbRect()
extern "C" Rect_t5_30  SliderHandler_VerticalThumbRect_m5_1385 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.SliderHandler::HorizontalThumbRect()
extern "C" Rect_t5_30  SliderHandler_HorizontalThumbRect_m5_1386 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ClampedCurrentValue()
extern "C" float SliderHandler_ClampedCurrentValue_m5_1387 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MousePosition()
extern "C" float SliderHandler_MousePosition_m5_1388 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ValuesPerPixel()
extern "C" float SliderHandler_ValuesPerPixel_m5_1389 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::ThumbSize()
extern "C" float SliderHandler_ThumbSize_m5_1390 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MaxValue()
extern "C" float SliderHandler_MaxValue_m5_1391 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.SliderHandler::MinValue()
extern "C" float SliderHandler_MinValue_m5_1392 (SliderHandler_t5_200 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
