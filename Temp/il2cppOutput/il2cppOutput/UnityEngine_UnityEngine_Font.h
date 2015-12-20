#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Action`1<UnityEngine.Font>
struct Action_1_t1_1013;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t5_152;

#include "UnityEngine_UnityEngine_Object.h"

// UnityEngine.Font
struct  Font_t5_153  : public Object_t5_5
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t5_152 * ___m_FontTextureRebuildCallback_3;
};
struct Font_t5_153_StaticFields{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_t1_1013 * ___textureRebuilt_2;
};
