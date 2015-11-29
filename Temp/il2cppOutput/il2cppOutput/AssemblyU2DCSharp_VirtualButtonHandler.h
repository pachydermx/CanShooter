#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t5_87;
// UnityEngine.Rigidbody
struct Rigidbody_t5_96;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// VirtualButtonHandler
struct  VirtualButtonHandler_t7_3  : public MonoBehaviour_t5_84
{
	// UnityEngine.GameObject VirtualButtonHandler::myTofu
	GameObject_t5_87 * ___myTofu_2;
	// UnityEngine.Rigidbody VirtualButtonHandler::rb
	Rigidbody_t5_96 * ___rb_3;
	// UnityEngine.GameObject VirtualButtonHandler::bullet
	GameObject_t5_87 * ___bullet_4;
	// System.Int32 VirtualButtonHandler::counter
	int32_t ___counter_5;
};
