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

// Vuforia.TrackableBehaviour
struct TrackableBehaviour_t6_15;
// Vuforia.Trackable
struct Trackable_t6_16;
// System.String
struct String_t;
// Vuforia.ITrackableEventHandler
struct ITrackableEventHandler_t6_202;
// UnityEngine.Renderer
struct Renderer_t5_28;
// UnityEngine.Transform
struct Transform_t5_72;
// UnityEngine.GameObject
struct GameObject_t5_100;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour_.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// Vuforia.TrackableBehaviour/Status Vuforia.TrackableBehaviour::get_CurrentStatus()
extern "C" int32_t TrackableBehaviour_get_CurrentStatus_m6_96 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Trackable Vuforia.TrackableBehaviour::get_Trackable()
extern "C" Object_t * TrackableBehaviour_get_Trackable_m6_97 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TrackableBehaviour::get_TrackableName()
extern "C" String_t* TrackableBehaviour_get_TrackableName_m6_98 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::RegisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" void TrackableBehaviour_RegisterTrackableEventHandler_m6_99 (TrackableBehaviour_t6_15 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::UnregisterTrackableEventHandler(Vuforia.ITrackableEventHandler)
extern "C" bool TrackableBehaviour_UnregisterTrackableEventHandler_m6_100 (TrackableBehaviour_t6_15 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnTrackerUpdate(Vuforia.TrackableBehaviour/Status)
extern "C" void TrackableBehaviour_OnTrackerUpdate_m6_101 (TrackableBehaviour_t6_15 * __this, int32_t ___newStatus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnFrameIndexUpdate(System.Int32)
extern "C" void TrackableBehaviour_OnFrameIndexUpdate_m6_102 (TrackableBehaviour_t6_15 * __this, int32_t ___newFrameIndex, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Start()
extern "C" void TrackableBehaviour_Start_m6_103 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::OnDisable()
extern "C" void TrackableBehaviour_OnDisable_m6_104 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.CorrectScale()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_CorrectScale_m6_105 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::CorrectScaleImpl()
extern "C" bool TrackableBehaviour_CorrectScaleImpl_m6_106 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetNameForTrackable(System.String)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetNameForTrackable_m6_107 (TrackableBehaviour_t6_15 * __this, String_t* ___trackableName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreviousScale()
extern "C" Vector3_t5_57  TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreviousScale_m6_108 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreviousScale(UnityEngine.Vector3)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreviousScale_m6_109 (TrackableBehaviour_t6_15 * __this, Vector3_t5_57  ___previousScale, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_PreserveChildSize()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_PreserveChildSize_m6_110 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetPreserveChildSize(System.Boolean)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetPreserveChildSize_m6_111 (TrackableBehaviour_t6_15 * __this, bool ___preserveChildSize, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_InitializedInEditor()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_InitializedInEditor_m6_112 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.SetInitializedInEditor(System.Boolean)
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_SetInitializedInEditor_m6_113 (TrackableBehaviour_t6_15 * __this, bool ___initializedInEditor, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.UnregisterTrackable()
extern "C" void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_UnregisterTrackable_m6_114 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.GetRenderer()
extern "C" Renderer_t5_28 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_GetRenderer_m6_115 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::.ctor()
extern "C" void TrackableBehaviour__ctor_m6_116 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_enabled()
extern "C" bool TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_enabled_m6_117 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.set_enabled(System.Boolean)
extern "C" void TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_set_enabled_m6_118 (TrackableBehaviour_t6_15 * __this, bool p0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_transform()
extern "C" Transform_t5_72 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_transform_m6_119 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Vuforia.TrackableBehaviour::Vuforia.IEditorTrackableBehaviour.get_gameObject()
extern "C" GameObject_t5_100 * TrackableBehaviour_Vuforia_IEditorTrackableBehaviour_get_gameObject_m6_120 (TrackableBehaviour_t6_15 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
