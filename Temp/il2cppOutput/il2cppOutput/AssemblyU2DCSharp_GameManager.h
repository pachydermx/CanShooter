#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t5_101;
// UnityEngine.Events.UnityAction
struct UnityAction_t5_266;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"

// GameManager
struct  GameManager_t8_28  : public MonoBehaviour_t5_95
{
	// UnityEngine.GameObject GameManager::InfoDisplay
	GameObject_t5_101 * ___InfoDisplay_2;
	// UnityEngine.GameObject GameManager::ct
	GameObject_t5_101 * ___ct_3;
	// UnityEngine.GameObject GameManager::ScoreBoard
	GameObject_t5_101 * ___ScoreBoard_4;
	// UnityEngine.GameObject GameManager::NameInput
	GameObject_t5_101 * ___NameInput_5;
	// UnityEngine.GameObject GameManager::SubmitButton
	GameObject_t5_101 * ___SubmitButton_6;
	// System.Int32 GameManager::Score
	int32_t ___Score_7;
	// System.Int32 GameManager::Ammo
	int32_t ___Ammo_8;
	// System.Int32 GameManager::DefaultAmmo
	int32_t ___DefaultAmmo_9;
};
struct GameManager_t8_28_StaticFields{
	// UnityEngine.Events.UnityAction GameManager::<>f__am$cache8
	UnityAction_t5_266 * ___U3CU3Ef__amU24cache8_10;
};
