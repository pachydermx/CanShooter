﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// Vuforia.Word
struct Word_t6_142;

#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_TrackableBehaviour.h"
#include "Qualcomm_Vuforia_UnityExtensions_Vuforia_WordTemplateMode.h"

// Vuforia.WordAbstractBehaviour
struct  WordAbstractBehaviour_t6_197  : public TrackableBehaviour_t6_15
{
	// Vuforia.WordTemplateMode Vuforia.WordAbstractBehaviour::mMode
	int32_t ___mMode_9;
	// System.String Vuforia.WordAbstractBehaviour::mSpecificWord
	String_t* ___mSpecificWord_10;
	// Vuforia.Word Vuforia.WordAbstractBehaviour::mWord
	Object_t * ___mWord_11;
};
