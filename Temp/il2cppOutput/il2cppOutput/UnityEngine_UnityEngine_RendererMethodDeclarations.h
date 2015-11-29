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

// UnityEngine.Renderer
struct Renderer_t5_28;
// UnityEngine.Material
struct Material_t5_33;
// UnityEngine.Material[]
struct MaterialU5BU5D_t5_230;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
extern "C" void Renderer_set_enabled_m5_135 (Renderer_t5_28 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UnityEngine.Renderer::get_material()
extern "C" Material_t5_33 * Renderer_get_material_m5_136 (Renderer_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_material(UnityEngine.Material)
extern "C" void Renderer_set_material_m5_137 (Renderer_t5_28 * __this, Material_t5_33 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterial(UnityEngine.Material)
extern "C" void Renderer_set_sharedMaterial_m5_138 (Renderer_t5_28 * __this, Material_t5_33 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material[] UnityEngine.Renderer::get_materials()
extern "C" MaterialU5BU5D_t5_230* Renderer_get_materials_m5_139 (Renderer_t5_28 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Renderer::set_sharedMaterials(UnityEngine.Material[])
extern "C" void Renderer_set_sharedMaterials_m5_140 (Renderer_t5_28 * __this, MaterialU5BU5D_t5_230* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
