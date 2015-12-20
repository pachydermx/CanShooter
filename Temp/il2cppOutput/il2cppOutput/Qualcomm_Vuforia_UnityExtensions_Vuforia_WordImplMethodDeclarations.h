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

// Vuforia.WordImpl
struct WordImpl_t6_135;
// System.String
struct String_t;
// Vuforia.Image
struct Image_t6_74;
// Vuforia.RectangleData[]
struct RectangleDataU5BU5D_t6_136;
// Vuforia.ImageImpl
struct ImageImpl_t6_75;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector2.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_VuforiaManagerImpl__6.h"

// System.Void Vuforia.WordImpl::.ctor(System.Int32,System.String,UnityEngine.Vector2)
extern "C" void WordImpl__ctor_m6_671 (WordImpl_t6_135 * __this, int32_t ___id, String_t* ___text, Vector2_t5_56  ___size, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String Vuforia.WordImpl::get_StringValue()
extern "C" String_t* WordImpl_get_StringValue_m6_672 (WordImpl_t6_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 Vuforia.WordImpl::get_Size()
extern "C" Vector2_t5_56  WordImpl_get_Size_m6_673 (WordImpl_t6_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.Image Vuforia.WordImpl::GetLetterMask()
extern "C" Image_t6_74 * WordImpl_GetLetterMask_m6_674 (WordImpl_t6_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Vuforia.RectangleData[] Vuforia.WordImpl::GetLetterBoundingBoxes()
extern "C" RectangleDataU5BU5D_t6_136* WordImpl_GetLetterBoundingBoxes_m6_675 (WordImpl_t6_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::InitImageHeader()
extern "C" void WordImpl_InitImageHeader_m6_676 (WordImpl_t6_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::CreateLetterMask()
extern "C" void WordImpl_CreateLetterMask_m6_677 (WordImpl_t6_135 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::SetImageValues(Vuforia.VuforiaManagerImpl/ImageHeaderData,Vuforia.ImageImpl)
extern "C" void WordImpl_SetImageValues_m6_678 (Object_t * __this /* static, unused */, ImageHeaderData_t6_102  ___imageHeader, ImageImpl_t6_75 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Vuforia.WordImpl::AllocateImage(Vuforia.ImageImpl)
extern "C" void WordImpl_AllocateImage_m6_679 (Object_t * __this /* static, unused */, ImageImpl_t6_75 * ___image, const MethodInfo* method) IL2CPP_METHOD_ATTR;
