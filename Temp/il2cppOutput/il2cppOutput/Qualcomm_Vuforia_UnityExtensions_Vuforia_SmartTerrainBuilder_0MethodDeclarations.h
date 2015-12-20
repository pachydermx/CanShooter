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

// Vuforia.SmartTerrainBuilderImpl
struct SmartTerrainBuilderImpl_t6_125;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour>
struct IEnumerable_1_t1_1086;
// Vuforia.ReconstructionAbstractBehaviour
struct ReconstructionAbstractBehaviour_t6_39;
// Vuforia.Reconstruction
struct Reconstruction_t6_150;
// Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[]
struct SmartTerrainRevisionDataU5BU5D_t6_204;
// Vuforia.VuforiaManagerImpl/SurfaceData[]
struct SurfaceDataU5BU5D_t6_205;
// Vuforia.VuforiaManagerImpl/PropData[]
struct PropDataU5BU5D_t6_206;

#include "codegen/il2cpp-codegen.h"

// System.Boolean Vuforia.SmartTerrainBuilderImpl::Init()
extern "C" bool SmartTerrainBuilderImpl_Init_m6_635 (SmartTerrainBuilderImpl_t6_125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::Deinit()
extern "C" bool SmartTerrainBuilderImpl_Deinit_m6_636 (SmartTerrainBuilderImpl_t6_125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.ReconstructionAbstractBehaviour> Vuforia.SmartTerrainBuilderImpl::GetReconstructions()
extern "C" Object_t* SmartTerrainBuilderImpl_GetReconstructions_m6_637 (SmartTerrainBuilderImpl_t6_125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::AddReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_AddReconstruction_m6_638 (SmartTerrainBuilderImpl_t6_125 * __this, ReconstructionAbstractBehaviour_t6_39 * ___reconstructionBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::RemoveReconstruction(Vuforia.ReconstructionAbstractBehaviour)
extern "C" bool SmartTerrainBuilderImpl_RemoveReconstruction_m6_639 (SmartTerrainBuilderImpl_t6_125 * __this, ReconstructionAbstractBehaviour_t6_39 * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.SmartTerrainBuilderImpl::DestroyReconstruction(Vuforia.Reconstruction)
extern "C" bool SmartTerrainBuilderImpl_DestroyReconstruction_m6_640 (SmartTerrainBuilderImpl_t6_125 * __this, Object_t * ___reconstruction, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::UpdateSmartTerrainData(Vuforia.VuforiaManagerImpl/SmartTerrainRevisionData[],Vuforia.VuforiaManagerImpl/SurfaceData[],Vuforia.VuforiaManagerImpl/PropData[])
extern "C" void SmartTerrainBuilderImpl_UpdateSmartTerrainData_m6_641 (SmartTerrainBuilderImpl_t6_125 * __this, SmartTerrainRevisionDataU5BU5D_t6_204* ___smartTerrainRevisions, SurfaceDataU5BU5D_t6_205* ___updatedSurfaces, PropDataU5BU5D_t6_206* ___updatedProps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.SmartTerrainBuilderImpl::.ctor()
extern "C" void SmartTerrainBuilderImpl__ctor_m6_642 (SmartTerrainBuilderImpl_t6_125 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
