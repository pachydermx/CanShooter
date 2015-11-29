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

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// GameManager
struct  GameManager_t7_25  : public MonoBehaviour_t5_84
{
	// UnityEngine.GameObject GameManager::ScoreDisplay
	GameObject_t5_87 * ___ScoreDisplay_2;
	// UnityEngine.GameObject GameManager::AmmoDisplay
	GameObject_t5_87 * ___AmmoDisplay_3;
	// System.Int32 GameManager::Score
	int32_t ___Score_4;
	// System.Int32 GameManager::Ammo
	int32_t ___Ammo_5;
};
