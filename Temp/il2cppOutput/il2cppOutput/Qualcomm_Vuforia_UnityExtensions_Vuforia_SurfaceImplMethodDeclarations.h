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

// Vuforia.SurfaceImpl
struct SurfaceImpl_t6_124;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t6_48;
// UnityEngine.Mesh
struct Mesh_t5_26;
// System.Int32[]
struct Int32U5BU5D_t1_161;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void Vuforia.SurfaceImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void SurfaceImpl__ctor_m6_627 (SurfaceImpl_t6_124 * __this, int32_t ___id, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetID(System.Int32)
extern "C" void SurfaceImpl_SetID_m6_628 (SurfaceImpl_t6_124 * __this, int32_t ___trackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetMesh(System.Int32,UnityEngine.Mesh,UnityEngine.Mesh,System.Int32[])
extern "C" void SurfaceImpl_SetMesh_m6_629 (SurfaceImpl_t6_124 * __this, int32_t ___meshRev, Mesh_t5_26 * ___mesh, Mesh_t5_26 * ___navMesh, Int32U5BU5D_t1_161* ___meshBoundaries, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SurfaceImpl::SetBoundingBox(UnityEngine.Rect)
extern "C" void SurfaceImpl_SetBoundingBox_m6_630 (SurfaceImpl_t6_124 * __this, Rect_t5_30  ___boundingBox, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Mesh Vuforia.SurfaceImpl::GetNavMesh()
extern "C" Mesh_t5_26 * SurfaceImpl_GetNavMesh_m6_631 (SurfaceImpl_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] Vuforia.SurfaceImpl::GetMeshBoundaries()
extern "C" Int32U5BU5D_t1_161* SurfaceImpl_GetMeshBoundaries_m6_632 (SurfaceImpl_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect Vuforia.SurfaceImpl::get_BoundingBox()
extern "C" Rect_t5_30  SurfaceImpl_get_BoundingBox_m6_633 (SurfaceImpl_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Vuforia.SurfaceImpl::GetArea()
extern "C" float SurfaceImpl_GetArea_m6_634 (SurfaceImpl_t6_124 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
