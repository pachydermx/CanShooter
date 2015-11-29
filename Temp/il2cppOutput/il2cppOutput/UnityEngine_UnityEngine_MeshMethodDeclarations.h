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

// UnityEngine.Mesh
struct Mesh_t5_26;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5_228;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_t5_229;
// System.Int32[]
struct Int32U5BU5D_t1_161;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Bounds.h"

// System.Void UnityEngine.Mesh::.ctor()
extern "C" void Mesh__ctor_m5_101 (Mesh_t5_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Internal_Create(UnityEngine.Mesh)
extern "C" void Mesh_Internal_Create_m5_102 (Object_t * __this /* static, unused */, Mesh_t5_26 * ___mono, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear(System.Boolean)
extern "C" void Mesh_Clear_m5_103 (Mesh_t5_26 * __this, bool ___keepVertexLayout, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::Clear()
extern "C" void Mesh_Clear_m5_104 (Mesh_t5_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
extern "C" Vector3U5BU5D_t5_228* Mesh_get_vertices_m5_105 (Mesh_t5_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
extern "C" void Mesh_set_vertices_m5_106 (Mesh_t5_26 * __this, Vector3U5BU5D_t5_228* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_normals(UnityEngine.Vector3[])
extern "C" void Mesh_set_normals_m5_107 (Mesh_t5_26 * __this, Vector3U5BU5D_t5_228* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2[] UnityEngine.Mesh::get_uv()
extern "C" Vector2U5BU5D_t5_229* Mesh_get_uv_m5_108 (Mesh_t5_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_uv(UnityEngine.Vector2[])
extern "C" void Mesh_set_uv_m5_109 (Mesh_t5_26 * __this, Vector2U5BU5D_t5_229* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Bounds UnityEngine.Mesh::get_bounds()
extern "C" Bounds_t5_58  Mesh_get_bounds_m5_110 (Mesh_t5_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::INTERNAL_get_bounds(UnityEngine.Bounds&)
extern "C" void Mesh_INTERNAL_get_bounds_m5_111 (Mesh_t5_26 * __this, Bounds_t5_58 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::RecalculateNormals()
extern "C" void Mesh_RecalculateNormals_m5_112 (Mesh_t5_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] UnityEngine.Mesh::get_triangles()
extern "C" Int32U5BU5D_t1_161* Mesh_get_triangles_m5_113 (Mesh_t5_26 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Mesh::set_triangles(System.Int32[])
extern "C" void Mesh_set_triangles_m5_114 (Mesh_t5_26 * __this, Int32U5BU5D_t1_161* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
