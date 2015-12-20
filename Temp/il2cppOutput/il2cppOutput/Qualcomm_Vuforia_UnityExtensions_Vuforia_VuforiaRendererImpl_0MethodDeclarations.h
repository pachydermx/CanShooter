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

// Vuforia.VuforiaRendererImpl
struct VuforiaRendererImpl_t6_121;
// UnityEngine.Texture2D
struct Texture2D_t5_41;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_1.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Fps.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRendererImpl.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaRenderer_Vid_0.h"

// UnityEngine.Texture2D Vuforia.VuforiaRendererImpl::get_VideoBackgroundTexture()
extern "C" Texture2D_t5_41 * VuforiaRendererImpl_get_VideoBackgroundTexture_m6_592 (VuforiaRendererImpl_t6_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBGCfgData Vuforia.VuforiaRendererImpl::GetVideoBackgroundConfig()
extern "C" VideoBGCfgData_t6_117  VuforiaRendererImpl_GetVideoBackgroundConfig_m6_593 (VuforiaRendererImpl_t6_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::ClearVideoBackgroundConfig()
extern "C" void VuforiaRendererImpl_ClearVideoBackgroundConfig_m6_594 (VuforiaRendererImpl_t6_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfig(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C" void VuforiaRendererImpl_SetVideoBackgroundConfig_m6_595 (VuforiaRendererImpl_t6_121 * __this, VideoBGCfgData_t6_117  ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::SetVideoBackgroundTexture(UnityEngine.Texture2D,System.Int32)
extern "C" bool VuforiaRendererImpl_SetVideoBackgroundTexture_m6_596 (VuforiaRendererImpl_t6_121 * __this, Texture2D_t5_41 * ___texture, int32_t ___nativeTextureID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::IsVideoBackgroundInfoAvailable()
extern "C" bool VuforiaRendererImpl_IsVideoBackgroundInfoAvailable_m6_597 (VuforiaRendererImpl_t6_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoTextureInfo Vuforia.VuforiaRendererImpl::GetVideoTextureInfo()
extern "C" VideoTextureInfo_t6_5  VuforiaRendererImpl_GetVideoTextureInfo_m6_598 (VuforiaRendererImpl_t6_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::Pause(System.Boolean)
extern "C" void VuforiaRendererImpl_Pause_m6_599 (VuforiaRendererImpl_t6_121 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.VuforiaRendererImpl::GetRecommendedFps(Vuforia.VuforiaRenderer/FpsHint)
extern "C" int32_t VuforiaRendererImpl_GetRecommendedFps_m6_600 (VuforiaRendererImpl_t6_121 * __this, int32_t ___flags, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::UnityRenderEvent(Vuforia.VuforiaRendererImpl/RenderEvent)
extern "C" void VuforiaRendererImpl_UnityRenderEvent_m6_601 (VuforiaRendererImpl_t6_121 * __this, int32_t ___renderEvent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.VuforiaRendererImpl::HasBackgroundTextureChanged()
extern "C" bool VuforiaRendererImpl_HasBackgroundTextureChanged_m6_602 (VuforiaRendererImpl_t6_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::SetVideoBackgroundConfigInternal(Vuforia.VuforiaRenderer/VideoBGCfgData)
extern "C" void VuforiaRendererImpl_SetVideoBackgroundConfigInternal_m6_603 (VuforiaRendererImpl_t6_121 * __this, VideoBGCfgData_t6_117  ___config, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.VuforiaRenderer/VideoBackgroundReflection Vuforia.VuforiaRendererImpl::GetLastSetReflection()
extern "C" int32_t VuforiaRendererImpl_GetLastSetReflection_m6_604 (VuforiaRendererImpl_t6_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.VuforiaRendererImpl::.ctor()
extern "C" void VuforiaRendererImpl__ctor_m6_605 (VuforiaRendererImpl_t6_121 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
