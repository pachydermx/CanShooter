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

// SplashScreenView
struct SplashScreenView_t8_12;
// UnityEngine.Texture2D
struct Texture2D_t5_41;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t5_325;

#include "codegen/il2cpp-codegen.h"

// System.Void SplashScreenView::.ctor()
extern "C" void SplashScreenView__ctor_m8_122 (SplashScreenView_t8_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplashScreenView::LoadView()
extern "C" void SplashScreenView_LoadView_m8_123 (SplashScreenView_t8_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplashScreenView::UnLoadView()
extern "C" void SplashScreenView_UnLoadView_m8_124 (SplashScreenView_t8_12 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SplashScreenView::UpdateUI(System.Boolean)
extern "C" void SplashScreenView_UpdateUI_m8_125 (SplashScreenView_t8_12 * __this, bool ___tf, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D SplashScreenView::PickImageWithBestAspect(UnityEngine.Texture2D[])
extern "C" Texture2D_t5_41 * SplashScreenView_PickImageWithBestAspect_m8_126 (SplashScreenView_t8_12 * __this, Texture2DU5BU5D_t5_325* ___splashImages, const MethodInfo* method) IL2CPP_METHOD_ATTR;
