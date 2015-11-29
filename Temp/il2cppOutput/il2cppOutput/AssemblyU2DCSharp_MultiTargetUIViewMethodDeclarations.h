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

// MultiTargetUIView
struct MultiTargetUIView_t7_29;
// System.Action
struct Action_t4_11;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_CameraDevice_FocusM.h"

// System.Void MultiTargetUIView::.ctor()
extern "C" void MultiTargetUIView__ctor_m7_152 (MultiTargetUIView_t7_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIView::add_TappedToClose(System.Action)
extern "C" void MultiTargetUIView_add_TappedToClose_m7_153 (MultiTargetUIView_t7_29 * __this, Action_t4_11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIView::remove_TappedToClose(System.Action)
extern "C" void MultiTargetUIView_remove_TappedToClose_m7_154 (MultiTargetUIView_t7_29 * __this, Action_t4_11 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CameraDevice/FocusMode MultiTargetUIView::get_FocusMode()
extern "C" int32_t MultiTargetUIView_get_FocusMode_m7_155 (MultiTargetUIView_t7_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIView::set_FocusMode(Vuforia.CameraDevice/FocusMode)
extern "C" void MultiTargetUIView_set_FocusMode_m7_156 (MultiTargetUIView_t7_29 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIView::LoadView()
extern "C" void MultiTargetUIView_LoadView_m7_157 (MultiTargetUIView_t7_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIView::UnLoadView()
extern "C" void MultiTargetUIView_UnLoadView_m7_158 (MultiTargetUIView_t7_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIView::UpdateUI(System.Boolean)
extern "C" void MultiTargetUIView_UpdateUI_m7_159 (MultiTargetUIView_t7_29 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MultiTargetUIView::OnTappedToClose()
extern "C" void MultiTargetUIView_OnTappedToClose_m7_160 (MultiTargetUIView_t7_29 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
