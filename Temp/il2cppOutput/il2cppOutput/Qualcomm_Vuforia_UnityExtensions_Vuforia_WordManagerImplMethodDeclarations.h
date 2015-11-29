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

// Vuforia.WordManagerImpl
struct WordManagerImpl_t6_139;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t1_1077;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t1_1078;
// Vuforia.Word
struct Word_t6_142;
// Vuforia.WordAbstractBehaviour
struct WordAbstractBehaviour_t6_197;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour>
struct IEnumerable_1_t1_1079;
// UnityEngine.Transform
struct Transform_t5_66;
// Vuforia.VuforiaManagerImpl/WordData[]
struct WordDataU5BU5D_t6_112;
// Vuforia.VuforiaManagerImpl/WordResultData[]
struct WordResultDataU5BU5D_t6_113;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>
struct IEnumerable_1_t1_1080;
// System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>
struct IEnumerable_1_t1_1081;
// Vuforia.WordResult
struct WordResult_t6_140;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefabCreationM.h"

// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetActiveWordResults()
extern "C" Object_t* WordManagerImpl_GetActiveWordResults_m6_681 (WordManagerImpl_t6_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult> Vuforia.WordManagerImpl::GetNewWords()
extern "C" Object_t* WordManagerImpl_GetNewWords_m6_682 (WordManagerImpl_t6_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word> Vuforia.WordManagerImpl::GetLostWords()
extern "C" Object_t* WordManagerImpl_GetLostWords_m6_683 (WordManagerImpl_t6_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.WordManagerImpl::TryGetWordBehaviour(Vuforia.Word,Vuforia.WordAbstractBehaviour&)
extern "C" bool WordManagerImpl_TryGetWordBehaviour_m6_684 (WordManagerImpl_t6_139 * __this, Object_t * ___word, WordAbstractBehaviour_t6_197 ** ___behaviour, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordAbstractBehaviour> Vuforia.WordManagerImpl::GetTrackableBehaviours()
extern "C" Object_t* WordManagerImpl_GetTrackableBehaviours_m6_685 (WordManagerImpl_t6_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::DestroyWordBehaviour(Vuforia.WordAbstractBehaviour,System.Boolean)
extern "C" void WordManagerImpl_DestroyWordBehaviour_m6_686 (WordManagerImpl_t6_139 * __this, WordAbstractBehaviour_t6_197 * ___behaviour, bool ___destroyGameObject, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates(Vuforia.WordPrefabCreationMode,System.Int32)
extern "C" void WordManagerImpl_InitializeWordBehaviourTemplates_m6_687 (WordManagerImpl_t6_139 * __this, int32_t ___wordPrefabCreationMode, int32_t ___maxInstances, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::InitializeWordBehaviourTemplates()
extern "C" void WordManagerImpl_InitializeWordBehaviourTemplates_m6_688 (WordManagerImpl_t6_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::RemoveDestroyedTrackables()
extern "C" void WordManagerImpl_RemoveDestroyedTrackables_m6_689 (WordManagerImpl_t6_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(UnityEngine.Transform,Vuforia.VuforiaManagerImpl/WordData[],Vuforia.VuforiaManagerImpl/WordResultData[])
extern "C" void WordManagerImpl_UpdateWords_m6_690 (WordManagerImpl_t6_139 * __this, Transform_t5_66 * ___arCameraTransform, WordDataU5BU5D_t6_112* ___newWordData, WordResultDataU5BU5D_t6_113* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::SetWordBehavioursToNotFound()
extern "C" void WordManagerImpl_SetWordBehavioursToNotFound_m6_691 (WordManagerImpl_t6_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::CleanupWordBehaviours()
extern "C" void WordManagerImpl_CleanupWordBehaviours_m6_692 (WordManagerImpl_t6_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWords(System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordData>,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C" void WordManagerImpl_UpdateWords_m6_693 (WordManagerImpl_t6_139 * __this, Object_t* ___newWordData, Object_t* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordResultPoses(UnityEngine.Transform,System.Collections.Generic.IEnumerable`1<Vuforia.VuforiaManagerImpl/WordResultData>)
extern "C" void WordManagerImpl_UpdateWordResultPoses_m6_694 (WordManagerImpl_t6_139 * __this, Transform_t5_66 * ___arCameraTransform, Object_t* ___wordResults, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::AssociateWordResultsWithBehaviours()
extern "C" void WordManagerImpl_AssociateWordResultsWithBehaviours_m6_695 (WordManagerImpl_t6_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UnregisterLostWords()
extern "C" void WordManagerImpl_UnregisterLostWords_m6_696 (WordManagerImpl_t6_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::UpdateWordBehaviourPoses()
extern "C" void WordManagerImpl_UpdateWordBehaviourPoses_m6_697 (WordManagerImpl_t6_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult)
extern "C" WordAbstractBehaviour_t6_197 * WordManagerImpl_AssociateWordBehaviour_m6_698 (WordManagerImpl_t6_139 * __this, WordResult_t6_140 * ___wordResult, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::AssociateWordBehaviour(Vuforia.WordResult,Vuforia.WordAbstractBehaviour)
extern "C" WordAbstractBehaviour_t6_197 * WordManagerImpl_AssociateWordBehaviour_m6_699 (WordManagerImpl_t6_139 * __this, WordResult_t6_140 * ___wordResult, WordAbstractBehaviour_t6_197 * ___wordBehaviourTemplate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::InstantiateWordBehaviour(Vuforia.WordAbstractBehaviour)
extern "C" WordAbstractBehaviour_t6_197 * WordManagerImpl_InstantiateWordBehaviour_m6_700 (Object_t * __this /* static, unused */, WordAbstractBehaviour_t6_197 * ___input, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordAbstractBehaviour Vuforia.WordManagerImpl::CreateWordBehaviour()
extern "C" WordAbstractBehaviour_t6_197 * WordManagerImpl_CreateWordBehaviour_m6_701 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordManagerImpl::.ctor()
extern "C" void WordManagerImpl__ctor_m6_702 (WordManagerImpl_t6_139 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
