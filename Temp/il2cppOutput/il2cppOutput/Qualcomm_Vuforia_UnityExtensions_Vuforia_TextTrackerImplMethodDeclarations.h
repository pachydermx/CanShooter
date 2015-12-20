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

// Vuforia.TextTrackerImpl
struct TextTrackerImpl_t6_131;
// Vuforia.WordList
struct WordList_t6_132;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_RectangleIntData.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_VideoM.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TextTrackerImpl_UpD.h"

// Vuforia.WordList Vuforia.TextTrackerImpl::get_WordList()
extern "C" WordList_t6_132 * TextTrackerImpl_get_WordList_m6_655 (TextTrackerImpl_t6_131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::Start()
extern "C" bool TextTrackerImpl_Start_m6_656 (TextTrackerImpl_t6_131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::Stop()
extern "C" void TextTrackerImpl_Stop_m6_657 (TextTrackerImpl_t6_131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::SetRegionOfInterest(UnityEngine.Rect,UnityEngine.Rect)
extern "C" bool TextTrackerImpl_SetRegionOfInterest_m6_658 (TextTrackerImpl_t6_131 * __this, Rect_t5_30  ___detectionRegion, Rect_t5_30  ___trackingRegion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextTrackerImpl::GetRegionOfInterest(UnityEngine.Rect&,UnityEngine.Rect&)
extern "C" bool TextTrackerImpl_GetRegionOfInterest_m6_659 (TextTrackerImpl_t6_131 * __this, Rect_t5_30 * ___detectionRegion, Rect_t5_30 * ___trackingRegion, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.TextTrackerImpl::ScreenSpaceRectFromCamSpaceRectData(Vuforia.RectangleIntData,UnityEngine.Rect,System.Boolean,Vuforia.CameraDevice/VideoModeData)
extern "C" Rect_t5_30  TextTrackerImpl_ScreenSpaceRectFromCamSpaceRectData_m6_660 (TextTrackerImpl_t6_131 * __this, RectangleIntData_t6_58  ___camSpaceRectData, Rect_t5_30  ___bgTextureViewPortRect, bool ___isTextureMirrored, VideoModeData_t6_24  ___videoModeData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.TextTrackerImpl/UpDirection Vuforia.TextTrackerImpl::get_CurrentUpDirection()
extern "C" int32_t TextTrackerImpl_get_CurrentUpDirection_m6_661 (TextTrackerImpl_t6_131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextTrackerImpl::.ctor()
extern "C" void TextTrackerImpl__ctor_m6_662 (TextTrackerImpl_t6_131 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
