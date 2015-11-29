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

// UnityEngine.Material
struct Material_t5_33;
// System.String
struct String_t;
// UnityEngine.Shader
struct Shader_t5_72;
// UnityEngine.Texture
struct Texture_t5_31;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Material::.ctor(System.String)
extern "C" void Material__ctor_m5_475 (Material_t5_33 * __this, String_t* ___contents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::.ctor(UnityEngine.Shader)
extern "C" void Material__ctor_m5_476 (Material_t5_33 * __this, Shader_t5_72 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Shader UnityEngine.Material::get_shader()
extern "C" Shader_t5_72 * Material_get_shader_m5_477 (Material_t5_33 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::set_mainTexture(UnityEngine.Texture)
extern "C" void Material_set_mainTexture_m5_478 (Material_t5_33 * __this, Texture_t5_31 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.String,UnityEngine.Texture)
extern "C" void Material_SetTexture_m5_479 (Material_t5_33 * __this, String_t* ___propertyName, Texture_t5_31 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetTexture(System.Int32,UnityEngine.Texture)
extern "C" void Material_SetTexture_m5_480 (Material_t5_33 * __this, int32_t ___nameID, Texture_t5_31 * ___texture, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::SetPass(System.Int32)
extern "C" bool Material_SetPass_m5_481 (Material_t5_33 * __this, int32_t ___pass, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithString(UnityEngine.Material,System.String)
extern "C" void Material_Internal_CreateWithString_m5_482 (Object_t * __this /* static, unused */, Material_t5_33 * ___mono, String_t* ___contents, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithShader(UnityEngine.Material,UnityEngine.Shader)
extern "C" void Material_Internal_CreateWithShader_m5_483 (Object_t * __this /* static, unused */, Material_t5_33 * ___mono, Shader_t5_72 * ___shader, const MethodInfo* method) IL2CPP_METHOD_ATTR;
