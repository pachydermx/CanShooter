﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Mesh
struct Mesh_t5_26;
// System.Int32[]
struct Int32U5BU5D_t1_161;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_SmartTerrainTrackab_0.h"
#include "UnityEngine_UnityEngine_Rect.h"

// Vuforia.SurfaceImpl
struct  SurfaceImpl_t6_124  : public SmartTerrainTrackableImpl_t6_123
{
	// UnityEngine.Mesh Vuforia.SurfaceImpl::mNavMesh
	Mesh_t5_26 * ___mNavMesh_7;
	// System.Int32[] Vuforia.SurfaceImpl::mMeshBoundaries
	Int32U5BU5D_t1_161* ___mMeshBoundaries_8;
	// UnityEngine.Rect Vuforia.SurfaceImpl::mBoundingBox
	Rect_t5_30  ___mBoundingBox_9;
	// System.Single Vuforia.SurfaceImpl::mSurfaceArea
	float ___mSurfaceArea_10;
	// System.Boolean Vuforia.SurfaceImpl::mAreaNeedsUpdate
	bool ___mAreaNeedsUpdate_11;
};
