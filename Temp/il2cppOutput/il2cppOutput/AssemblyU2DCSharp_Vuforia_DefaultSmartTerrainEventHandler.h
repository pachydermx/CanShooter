#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Vuforia.ReconstructionBehaviour
struct ReconstructionBehaviour_t7_37;
// Vuforia.PropBehaviour
struct PropBehaviour_t7_38;
// Vuforia.SurfaceBehaviour
struct SurfaceBehaviour_t7_39;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// Vuforia.DefaultSmartTerrainEventHandler
struct  DefaultSmartTerrainEventHandler_t7_36  : public MonoBehaviour_t5_84
{
	// Vuforia.ReconstructionBehaviour Vuforia.DefaultSmartTerrainEventHandler::mReconstructionBehaviour
	ReconstructionBehaviour_t7_37 * ___mReconstructionBehaviour_2;
	// Vuforia.PropBehaviour Vuforia.DefaultSmartTerrainEventHandler::PropTemplate
	PropBehaviour_t7_38 * ___PropTemplate_3;
	// Vuforia.SurfaceBehaviour Vuforia.DefaultSmartTerrainEventHandler::SurfaceTemplate
	SurfaceBehaviour_t7_39 * ___SurfaceTemplate_4;
};
