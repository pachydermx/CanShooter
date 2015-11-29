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

// Vuforia.PropImpl
struct PropImpl_t6_126;
// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t6_48;
// UnityEngine.Mesh
struct Mesh_t5_26;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_OrientedBoundingBox_0.h"

// System.Void Vuforia.PropImpl::.ctor(System.Int32,Vuforia.SmartTerrainTrackable)
extern "C" void PropImpl__ctor_m6_643 (PropImpl_t6_126 * __this, int32_t ___id, Object_t * ___parent, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.OrientedBoundingBox3D Vuforia.PropImpl::get_BoundingBox()
extern "C" OrientedBoundingBox3D_t6_60  PropImpl_get_BoundingBox_m6_644 (PropImpl_t6_126 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetMesh(System.Int32,UnityEngine.Mesh)
extern "C" void PropImpl_SetMesh_m6_645 (PropImpl_t6_126 * __this, int32_t ___meshRev, Mesh_t5_26 * ___mesh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.PropImpl::SetObb(Vuforia.OrientedBoundingBox3D)
extern "C" void PropImpl_SetObb_m6_646 (PropImpl_t6_126 * __this, OrientedBoundingBox3D_t6_60  ___obb3D, const MethodInfo* method) IL2CPP_METHOD_ATTR;
