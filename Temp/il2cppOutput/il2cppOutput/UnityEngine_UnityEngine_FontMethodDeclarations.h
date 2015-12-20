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

// UnityEngine.Font
struct Font_t5_152;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Action`1<UnityEngine.Font>
struct Action_1_t1_1013;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t5_151;
// UnityEngine.Material
struct Material_t5_33;
// UnityEngine.CharacterInfo[]
struct CharacterInfoU5BU5D_t5_293;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_FontStyle.h"
#include "UnityEngine_UnityEngine_CharacterInfo.h"

// System.Void UnityEngine.Font::.ctor()
extern "C" void Font__ctor_m5_1097 (Font_t5_152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::.ctor(System.String)
extern "C" void Font__ctor_m5_1098 (Font_t5_152 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::.ctor(System.String[],System.Int32)
extern "C" void Font__ctor_m5_1099 (Font_t5_152 * __this, StringU5BU5D_t1_206* ___names, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_add_textureRebuilt_m5_1100 (Object_t * __this /* static, unused */, Action_1_t1_1013 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
extern "C" void Font_remove_textureRebuilt_m5_1101 (Object_t * __this /* static, unused */, Action_1_t1_1013 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::add_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_add_m_FontTextureRebuildCallback_m5_1102 (Font_t5_152 * __this, FontTextureRebuildCallback_t5_151 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::remove_m_FontTextureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_remove_m_FontTextureRebuildCallback_m5_1103 (Font_t5_152 * __this, FontTextureRebuildCallback_t5_151 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::GetOSInstalledFontNames()
extern "C" StringU5BU5D_t1_206* Font_GetOSInstalledFontNames_m5_1104 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::Internal_CreateFont(UnityEngine.Font,System.String)
extern "C" void Font_Internal_CreateFont_m5_1105 (Object_t * __this /* static, unused */, Font_t5_152 * ____font, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::Internal_CreateDynamicFont(UnityEngine.Font,System.String[],System.Int32)
extern "C" void Font_Internal_CreateDynamicFont_m5_1106 (Object_t * __this /* static, unused */, Font_t5_152 * ____font, StringU5BU5D_t1_206* ____names, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String,System.Int32)
extern "C" Font_t5_152 * Font_CreateDynamicFontFromOSFont_m5_1107 (Object_t * __this /* static, unused */, String_t* ___fontname, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UnityEngine.Font::CreateDynamicFontFromOSFont(System.String[],System.Int32)
extern "C" Font_t5_152 * Font_CreateDynamicFontFromOSFont_m5_1108 (Object_t * __this /* static, unused */, StringU5BU5D_t1_206* ___fontnames, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Font::get_material()
extern "C" Material_t5_33 * Font_get_material_m5_1109 (Font_t5_152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_material(UnityEngine.Material)
extern "C" void Font_set_material_m5_1110 (Font_t5_152 * __this, Material_t5_33 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
extern "C" bool Font_HasCharacter_m5_1111 (Font_t5_152 * __this, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::get_fontNames()
extern "C" StringU5BU5D_t1_206* Font_get_fontNames_m5_1112 (Font_t5_152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_fontNames(System.String[])
extern "C" void Font_set_fontNames_m5_1113 (Font_t5_152 * __this, StringU5BU5D_t1_206* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.CharacterInfo[] UnityEngine.Font::get_characterInfo()
extern "C" CharacterInfoU5BU5D_t5_293* Font_get_characterInfo_m5_1114 (Font_t5_152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_characterInfo(UnityEngine.CharacterInfo[])
extern "C" void Font_set_characterInfo_m5_1115 (Font_t5_152 * __this, CharacterInfoU5BU5D_t5_293* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
extern "C" void Font_RequestCharactersInTexture_m5_1116 (Font_t5_152 * __this, String_t* ___characters, int32_t ___size, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32)
extern "C" void Font_RequestCharactersInTexture_m5_1117 (Font_t5_152 * __this, String_t* ___characters, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String)
extern "C" void Font_RequestCharactersInTexture_m5_1118 (Font_t5_152 * __this, String_t* ___characters, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal(UnityEngine.Font)
extern "C" void Font_InvokeTextureRebuilt_Internal_m5_1119 (Object_t * __this /* static, unused */, Font_t5_152 * ___font, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
extern "C" FontTextureRebuildCallback_t5_151 * Font_get_textureRebuildCallback_m5_1120 (Font_t5_152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
extern "C" void Font_set_textureRebuildCallback_m5_1121 (Font_t5_152 * __this, FontTextureRebuildCallback_t5_151 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::GetMaxVertsForString(System.String)
extern "C" int32_t Font_GetMaxVertsForString_m5_1122 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
extern "C" bool Font_GetCharacterInfo_m5_1123 (Font_t5_152 * __this, uint16_t ___ch, CharacterInfo_t5_150 * ___info, int32_t ___size, int32_t ___style, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32)
extern "C" bool Font_GetCharacterInfo_m5_1124 (Font_t5_152 * __this, uint16_t ___ch, CharacterInfo_t5_150 * ___info, int32_t ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&)
extern "C" bool Font_GetCharacterInfo_m5_1125 (Font_t5_152 * __this, uint16_t ___ch, CharacterInfo_t5_150 * ___info, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
extern "C" bool Font_get_dynamic_m5_1126 (Font_t5_152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_ascent()
extern "C" int32_t Font_get_ascent_m5_1127 (Font_t5_152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_lineHeight()
extern "C" int32_t Font_get_lineHeight_m5_1128 (Font_t5_152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
extern "C" int32_t Font_get_fontSize_m5_1129 (Font_t5_152 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
