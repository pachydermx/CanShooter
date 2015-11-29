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

// Vuforia.StateManagerImpl
struct StateManagerImpl_t6_154;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour>
struct IEnumerable_1_t1_1086;
// Vuforia.WordManager
struct WordManager_t6_138;
// Vuforia.Trackable
struct Trackable_t6_16;
// Vuforia.DataSet
struct DataSet_t6_55;
// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t6_15;
// Vuforia.ImageTargetAbstractBehaviour
struct ImageTargetAbstractBehaviour_t6_173;
// Vuforia.ImageTarget
struct ImageTarget_t6_169;
// UnityEngine.GameObject
struct GameObject_t5_87;
// Vuforia.MarkerAbstractBehaviour
struct MarkerAbstractBehaviour_t6_174;
// Vuforia.Marker
struct Marker_t6_175;
// System.String
struct String_t;
// System.Collections.Generic.LinkedList`1<System.Int32>
struct LinkedList_1_t2_849;
// UnityEngine.Transform
struct Transform_t5_66;
// Vuforia.VuforiaManagerImpl/TrackableResultData[]
struct TrackableResultDataU5BU5D_t6_111;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t6_112;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t6_113;
// Vuforia.VirtualButtonAbstractBehaviour[]
struct VirtualButtonAbstractBehaviourU5BU5D_t6_209;
// Vuforia.MultiTargetAbstractBehaviour
struct MultiTargetAbstractBehaviour_t6_177;
// Vuforia.MultiTarget
struct MultiTarget_t6_178;
// Vuforia.CylinderTargetAbstractBehaviour
struct CylinderTargetAbstractBehaviour_t6_52;
// Vuforia.CylinderTarget
struct CylinderTarget_t6_53;
// Vuforia.ObjectTargetAbstractBehaviour
struct ObjectTargetAbstractBehaviour_t6_19;
// Vuforia.ObjectTarget
struct ObjectTarget_t6_20;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl_.h"
#include "UnityEngine_UnityEngine_Vector3.h"
#include "UnityEngine_UnityEngine_Matrix4x4.h"
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetActiveTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetActiveTrackableBehaviours_m6_1632 (StateManagerImpl_t6_154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.TrackableBehaviour> Vuforia.StateManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* StateManagerImpl_GetTrackableBehaviours_m6_1633 (StateManagerImpl_t6_154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordManager Vuforia.StateManagerImpl::GetWordManager()
extern "C" WordManager_t6_138 * StateManagerImpl_GetWordManager_m6_1634 (StateManagerImpl_t6_154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::DestroyTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_DestroyTrackableBehavioursForTrackable_m6_1635 (StateManagerImpl_t6_154 * __this, Object_t * ___trackable, bool ___destroyGameObjects, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateMarkerBehaviours()
extern "C" void StateManagerImpl_AssociateMarkerBehaviours_m6_1636 (StateManagerImpl_t6_154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateTrackableBehavioursForDataSet(Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateTrackableBehavioursForDataSet_m6_1637 (StateManagerImpl_t6_154 * __this, DataSet_t6_55 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RegisterExternallyManagedTrackableBehaviour(Vuforia.TrackableBehaviour)
extern "C" void StateManagerImpl_RegisterExternallyManagedTrackableBehaviour_m6_1638 (StateManagerImpl_t6_154 * __this, TrackableBehaviour_t6_15 * ___trackableBehaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UnregisterExternallyManagedTrackableBehaviour(System.Int32)
extern "C" void StateManagerImpl_UnregisterExternallyManagedTrackableBehaviour_m6_1639 (StateManagerImpl_t6_154 * __this, int32_t ___id, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDestroyedTrackables()
extern "C" void StateManagerImpl_RemoveDestroyedTrackables_m6_1640 (StateManagerImpl_t6_154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::ClearTrackableBehaviours()
extern "C" void StateManagerImpl_ClearTrackableBehaviours_m6_1641 (StateManagerImpl_t6_154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject)
extern "C" ImageTargetAbstractBehaviour_t6_173 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m6_1642 (StateManagerImpl_t6_154 * __this, Object_t * ___trackable, GameObject_t5_87 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::FindOrCreateImageTargetBehaviourForTrackable(Vuforia.ImageTarget,UnityEngine.GameObject,Vuforia.DataSet)
extern "C" ImageTargetAbstractBehaviour_t6_173 * StateManagerImpl_FindOrCreateImageTargetBehaviourForTrackable_m6_1643 (StateManagerImpl_t6_154 * __this, Object_t * ___trackable, GameObject_t5_87 * ___gameObject, DataSet_t6_55 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,System.String)
extern "C" MarkerAbstractBehaviour_t6_174 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m6_1644 (StateManagerImpl_t6_154 * __this, Object_t * ___trackable, String_t* ___gameObjectName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MarkerAbstractBehaviour Vuforia.StateManagerImpl::CreateNewMarkerBehaviourForMarker(Vuforia.Marker,UnityEngine.GameObject)
extern "C" MarkerAbstractBehaviour_t6_174 * StateManagerImpl_CreateNewMarkerBehaviourForMarker_m6_1645 (StateManagerImpl_t6_154 * __this, Object_t * ___trackable, GameObject_t5_87 * ___gameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::SetTrackableBehavioursForTrackableToNotFound(Vuforia.Trackable)
extern "C" void StateManagerImpl_SetTrackableBehavioursForTrackableToNotFound_m6_1646 (StateManagerImpl_t6_154 * __this, Object_t * ___trackable, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::EnableTrackableBehavioursForTrackable(Vuforia.Trackable,System.Boolean)
extern "C" void StateManagerImpl_EnableTrackableBehavioursForTrackable_m6_1647 (StateManagerImpl_t6_154 * __this, Object_t * ___trackable, bool ___enabled, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::RemoveDisabledTrackablesFromQueue(System.Collections.Generic.LinkedList`1<System.Int32>&)
extern "C" void StateManagerImpl_RemoveDisabledTrackablesFromQueue_m6_1648 (StateManagerImpl_t6_154 * __this, LinkedList_1_t2_849 ** ___trackableIDs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateCameraPose(UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32)
extern "C" void StateManagerImpl_UpdateCameraPose_m6_1649 (StateManagerImpl_t6_154 * __this, Transform_t5_66 * ___cameraTransform, Transform_t5_66 * ___parentTransformToUpdate, TrackableResultDataU5BU5D_t6_111* ___trackableResultDataArray, int32_t ___originTrackableID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateTrackablePoses(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/TrackableResultData[],System.Int32,System.Int32)
extern "C" void StateManagerImpl_UpdateTrackablePoses_m6_1650 (StateManagerImpl_t6_154 * __this, Transform_t5_66 * ___arCameraTransform, TrackableResultDataU5BU5D_t6_111* ___trackableResultDataArray, int32_t ___originTrackableID, int32_t ___frameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateVirtualButtons(System.Int32,System.IntPtr)
extern "C" void StateManagerImpl_UpdateVirtualButtons_m6_1651 (StateManagerImpl_t6_154 * __this, int32_t ___numVirtualButtons, IntPtr_t ___virtualButtonPtr, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C" void StateManagerImpl_UpdateWords_m6_1652 (StateManagerImpl_t6_154 * __this, Transform_t5_66 * ___arCameraTransform, WordDataU5BU5D_t6_112* ___wordData, WordResultDataU5BU5D_t6_113* ___wordResultData, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::AssociateVirtualButtonBehaviours(Vuforia.VirtualButtonAbstractBehaviour[],Vuforia.DataSet)
extern "C" void StateManagerImpl_AssociateVirtualButtonBehaviours_m6_1653 (StateManagerImpl_t6_154 * __this, VirtualButtonAbstractBehaviourU5BU5D_t6_209* ___vbBehaviours, DataSet_t6_55 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::CreateMissingDataSetTrackableBehaviours(Vuforia.DataSet)
extern "C" void StateManagerImpl_CreateMissingDataSetTrackableBehaviours_m6_1654 (StateManagerImpl_t6_154 * __this, DataSet_t6_55 * ___dataSet, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ImageTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateImageTargetBehaviour(Vuforia.ImageTarget)
extern "C" ImageTargetAbstractBehaviour_t6_173 * StateManagerImpl_CreateImageTargetBehaviour_m6_1655 (StateManagerImpl_t6_154 * __this, Object_t * ___imageTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.MultiTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateMultiTargetBehaviour(Vuforia.MultiTarget)
extern "C" MultiTargetAbstractBehaviour_t6_177 * StateManagerImpl_CreateMultiTargetBehaviour_m6_1656 (StateManagerImpl_t6_154 * __this, Object_t * ___multiTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.CylinderTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateCylinderTargetBehaviour(Vuforia.CylinderTarget)
extern "C" CylinderTargetAbstractBehaviour_t6_52 * StateManagerImpl_CreateCylinderTargetBehaviour_m6_1657 (StateManagerImpl_t6_154 * __this, Object_t * ___cylinderTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.ObjectTargetAbstractBehaviour Vuforia.StateManagerImpl::CreateObjectTargetBehaviour(Vuforia.ObjectTarget)
extern "C" ObjectTargetAbstractBehaviour_t6_19 * StateManagerImpl_CreateObjectTargetBehaviour_m6_1658 (StateManagerImpl_t6_154 * __this, Object_t * ___objectTarget, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::InitializeMarkerBehaviour(Vuforia.MarkerAbstractBehaviour,Vuforia.Marker)
extern "C" void StateManagerImpl_InitializeMarkerBehaviour_m6_1659 (StateManagerImpl_t6_154 * __this, MarkerAbstractBehaviour_t6_174 * ___markerBehaviour, Object_t * ___marker, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionCamera(Vuforia.TrackableBehaviour,UnityEngine.Transform,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionCamera_m6_1660 (StateManagerImpl_t6_154 * __this, TrackableBehaviour_t6_15 * ___trackableBehaviour, Transform_t5_66 * ___cameraTransform, Transform_t5_66 * ___parentTransformToUpdate, PoseData_t6_95  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.StateManagerImpl::ExtractTranslationFromMatrix(UnityEngine.Matrix4x4)
extern "C" Vector3_t5_55  StateManagerImpl_ExtractTranslationFromMatrix_m6_1661 (Object_t * __this /* static, unused */, Matrix4x4_t5_57  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion Vuforia.StateManagerImpl::ExtractRotationFromMatrix(UnityEngine.Matrix4x4)
extern "C" Quaternion_t5_56  StateManagerImpl_ExtractRotationFromMatrix_m6_1662 (Object_t * __this /* static, unused */, Matrix4x4_t5_57  ___matrix, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::PositionTrackable(Vuforia.TrackableBehaviour,UnityEngine.Transform,Vuforia.VuforiaManagerImpl/PoseData)
extern "C" void StateManagerImpl_PositionTrackable_m6_1663 (StateManagerImpl_t6_154 * __this, TrackableBehaviour_t6_15 * ___trackableBehaviour, Transform_t5_66 * ___arCameraTransform, PoseData_t6_95  ___camToTargetPose, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.StateManagerImpl::.ctor()
extern "C" void StateManagerImpl__ctor_m6_1664 (StateManagerImpl_t6_154 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
