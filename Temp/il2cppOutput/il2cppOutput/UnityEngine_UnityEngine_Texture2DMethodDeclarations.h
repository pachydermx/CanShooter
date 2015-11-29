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

// UnityEngine.Texture2D
struct Texture2D_t5_41;
// UnityEngine.Color[]
struct ColorU5BU5D_t5_231;
// UnityEngine.Color32[]
struct Color32U5BU5D_t5_232;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_TextureFormat.h"
#include "mscorlib_System_IntPtr.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32)
extern "C" void Texture2D__ctor_m5_180 (Texture2D_t5_41 * __this, int32_t ___width, int32_t ___height, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::.ctor(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" void Texture2D__ctor_m5_181 (Texture2D_t5_41 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Internal_Create(UnityEngine.Texture2D,System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean,System.Boolean,System.IntPtr)
extern "C" void Texture2D_Internal_Create_m5_182 (Object_t * __this /* static, unused */, Texture2D_t5_41 * ___mono, int32_t ___width, int32_t ___height, int32_t ___format, bool ___mipmap, bool ___linear, IntPtr_t ___nativeTex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextureFormat UnityEngine.Texture2D::get_format()
extern "C" int32_t Texture2D_get_format_m5_183 (Texture2D_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[])
extern "C" void Texture2D_SetPixels_m5_184 (Texture2D_t5_41 * __this, ColorU5BU5D_t5_231* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(UnityEngine.Color[],System.Int32)
extern "C" void Texture2D_SetPixels_m5_185 (Texture2D_t5_41 * __this, ColorU5BU5D_t5_231* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels(System.Int32,System.Int32,System.Int32,System.Int32,UnityEngine.Color[],System.Int32)
extern "C" void Texture2D_SetPixels_m5_186 (Texture2D_t5_41 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, ColorU5BU5D_t5_231* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetAllPixels32(UnityEngine.Color32[],System.Int32)
extern "C" void Texture2D_SetAllPixels32_m5_187 (Texture2D_t5_41 * __this, Color32U5BU5D_t5_232* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[])
extern "C" void Texture2D_SetPixels32_m5_188 (Texture2D_t5_41 * __this, Color32U5BU5D_t5_232* ___colors, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::SetPixels32(UnityEngine.Color32[],System.Int32)
extern "C" void Texture2D_SetPixels32_m5_189 (Texture2D_t5_41 * __this, Color32U5BU5D_t5_232* ___colors, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels()
extern "C" ColorU5BU5D_t5_231* Texture2D_GetPixels_m5_190 (Texture2D_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32)
extern "C" ColorU5BU5D_t5_231* Texture2D_GetPixels_m5_191 (Texture2D_t5_41 * __this, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color[] UnityEngine.Texture2D::GetPixels(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" ColorU5BU5D_t5_231* Texture2D_GetPixels_m5_192 (Texture2D_t5_41 * __this, int32_t ___x, int32_t ___y, int32_t ___blockWidth, int32_t ___blockHeight, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32(System.Int32)
extern "C" Color32U5BU5D_t5_232* Texture2D_GetPixels32_m5_193 (Texture2D_t5_41 * __this, int32_t ___miplevel, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color32[] UnityEngine.Texture2D::GetPixels32()
extern "C" Color32U5BU5D_t5_232* Texture2D_GetPixels32_m5_194 (Texture2D_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply(System.Boolean,System.Boolean)
extern "C" void Texture2D_Apply_m5_195 (Texture2D_t5_41 * __this, bool ___updateMipmaps, bool ___makeNoLongerReadable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::Apply()
extern "C" void Texture2D_Apply_m5_196 (Texture2D_t5_41 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Texture2D::Resize(System.Int32,System.Int32,UnityEngine.TextureFormat,System.Boolean)
extern "C" bool Texture2D_Resize_m5_197 (Texture2D_t5_41 * __this, int32_t ___width, int32_t ___height, int32_t ___format, bool ___hasMipMap, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::ReadPixels(UnityEngine.Rect,System.Int32,System.Int32,System.Boolean)
extern "C" void Texture2D_ReadPixels_m5_198 (Texture2D_t5_41 * __this, Rect_t5_30  ___source, int32_t ___destX, int32_t ___destY, bool ___recalculateMipMaps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Texture2D::INTERNAL_CALL_ReadPixels(UnityEngine.Texture2D,UnityEngine.Rect&,System.Int32,System.Int32,System.Boolean)
extern "C" void Texture2D_INTERNAL_CALL_ReadPixels_m5_199 (Object_t * __this /* static, unused */, Texture2D_t5_41 * ___self, Rect_t5_30 * ___source, int32_t ___destX, int32_t ___destY, bool ___recalculateMipMaps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
