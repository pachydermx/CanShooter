#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.SmartTerrainTrackable
struct SmartTerrainTrackable_t6_48;
// UnityEngine.MeshFilter
struct MeshFilter_t5_24;
// UnityEngine.MeshCollider
struct MeshCollider_t5_102;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour.h"

// Vuforia.SmartTerrainTrackableBehaviour
struct  SmartTerrainTrackableBehaviour_t6_47  : public TrackableBehaviour_t6_15
{
	// Vuforia.SmartTerrainTrackable Vuforia.SmartTerrainTrackableBehaviour::mSmartTerrainTrackable
	Object_t * ___mSmartTerrainTrackable_9;
	// System.Boolean Vuforia.SmartTerrainTrackableBehaviour::mDisableAutomaticUpdates
	bool ___mDisableAutomaticUpdates_10;
	// UnityEngine.MeshFilter Vuforia.SmartTerrainTrackableBehaviour::mMeshFilterToUpdate
	MeshFilter_t5_24 * ___mMeshFilterToUpdate_11;
	// UnityEngine.MeshCollider Vuforia.SmartTerrainTrackableBehaviour::mMeshColliderToUpdate
	MeshCollider_t5_102 * ___mMeshColliderToUpdate_12;
};
