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

// Vuforia.TextRecoAbstractBehaviour
struct TextRecoAbstractBehaviour_t6_189;
// Vuforia.ITextRecoEventHandler
struct ITextRecoEventHandler_t6_212;
// System.Collections.Generic.IEnumerable`1<Vuforia.Word>
struct IEnumerable_1_t1_1089;
// System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>
struct IEnumerable_1_t1_1088;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordFilterMode.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordPrefabCreationM.h"

// System.Boolean Vuforia.TextRecoAbstractBehaviour::get_IsInitialized()
extern "C" bool TextRecoAbstractBehaviour_get_IsInitialized_m6_1900 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Awake()
extern "C" void TextRecoAbstractBehaviour_Awake_m6_1901 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Start()
extern "C" void TextRecoAbstractBehaviour_Start_m6_1902 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnEnable()
extern "C" void TextRecoAbstractBehaviour_OnEnable_m6_1903 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDisable()
extern "C" void TextRecoAbstractBehaviour_OnDisable_m6_1904 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnDestroy()
extern "C" void TextRecoAbstractBehaviour_OnDestroy_m6_1905 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::RegisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C" void TextRecoAbstractBehaviour_RegisterTextRecoEventHandler_m6_1906 (TextRecoAbstractBehaviour_t6_189 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Vuforia.TextRecoAbstractBehaviour::UnregisterTextRecoEventHandler(Vuforia.ITextRecoEventHandler)
extern "C" bool TextRecoAbstractBehaviour_UnregisterTextRecoEventHandler_m6_1907 (TextRecoAbstractBehaviour_t6_189 * __this, Object_t * ___trackableEventHandler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StartTextTracker()
extern "C" void TextRecoAbstractBehaviour_StartTextTracker_m6_1908 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::StopTextTracker()
extern "C" void TextRecoAbstractBehaviour_StopTextTracker_m6_1909 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::SetupWordList()
extern "C" void TextRecoAbstractBehaviour_SetupWordList_m6_1910 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::NotifyEventHandlersOfChanges(System.Collections.Generic.IEnumerable`1<Vuforia.Word>,System.Collections.Generic.IEnumerable`1<Vuforia.WordResult>)
extern "C" void TextRecoAbstractBehaviour_NotifyEventHandlersOfChanges_m6_1911 (TextRecoAbstractBehaviour_t6_189 * __this, Object_t* ___lostWords, Object_t* ___newWords, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_WordListFile()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_WordListFile_m6_1912 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_WordListFile(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_WordListFile_m6_1913 (TextRecoAbstractBehaviour_t6_189 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_CustomWordListFile()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_CustomWordListFile_m6_1914 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_CustomWordListFile(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_CustomWordListFile_m6_1915 (TextRecoAbstractBehaviour_t6_189 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_AdditionalCustomWords()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_AdditionalCustomWords_m6_1916 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_AdditionalCustomWords(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_AdditionalCustomWords_m6_1917 (TextRecoAbstractBehaviour_t6_189 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordFilterMode Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_FilterMode()
extern "C" int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_FilterMode_m6_1918 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_FilterMode(Vuforia.WordFilterMode)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_FilterMode_m6_1919 (TextRecoAbstractBehaviour_t6_189 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_FilterListFile()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_FilterListFile_m6_1920 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_FilterListFile(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_FilterListFile_m6_1921 (TextRecoAbstractBehaviour_t6_189 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_AdditionalFilterWords()
extern "C" String_t* TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_AdditionalFilterWords_m6_1922 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_AdditionalFilterWords(System.String)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_AdditionalFilterWords_m6_1923 (TextRecoAbstractBehaviour_t6_189 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.WordPrefabCreationMode Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_WordPrefabCreationMode()
extern "C" int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_WordPrefabCreationMode_m6_1924 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_WordPrefabCreationMode(Vuforia.WordPrefabCreationMode)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_WordPrefabCreationMode_m6_1925 (TextRecoAbstractBehaviour_t6_189 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.get_MaximumWordInstances()
extern "C" int32_t TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_get_MaximumWordInstances_m6_1926 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::Vuforia.IEditorTextRecoBehaviour.set_MaximumWordInstances(System.Int32)
extern "C" void TextRecoAbstractBehaviour_Vuforia_IEditorTextRecoBehaviour_set_MaximumWordInstances_m6_1927 (TextRecoAbstractBehaviour_t6_189 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaInitialized()
extern "C" void TextRecoAbstractBehaviour_OnVuforiaInitialized_m6_1928 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnVuforiaStarted()
extern "C" void TextRecoAbstractBehaviour_OnVuforiaStarted_m6_1929 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnTrackablesUpdated()
extern "C" void TextRecoAbstractBehaviour_OnTrackablesUpdated_m6_1930 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::OnPause(System.Boolean)
extern "C" void TextRecoAbstractBehaviour_OnPause_m6_1931 (TextRecoAbstractBehaviour_t6_189 * __this, bool ___pause, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.TextRecoAbstractBehaviour::.ctor()
extern "C" void TextRecoAbstractBehaviour__ctor_m6_1932 (TextRecoAbstractBehaviour_t6_189 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
