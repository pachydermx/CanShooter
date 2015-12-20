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

// GameManager
struct GameManager_t8_27;
// UnityEngine.GameObject
struct GameObject_t5_100;

#include "codegen/il2cpp-codegen.h"

// System.Void GameManager::.ctor()
extern "C" void GameManager__ctor_m8_130 (GameManager_t8_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Start()
extern "C" void GameManager_Start_m8_131 (GameManager_t8_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::Update()
extern "C" void GameManager_Update_m8_132 (GameManager_t8_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::UpdateDisplay()
extern "C" void GameManager_UpdateDisplay_m8_133 (GameManager_t8_27 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::AddScore(System.Int32)
extern "C" void GameManager_AddScore_m8_134 (GameManager_t8_27 * __this, int32_t ___delta, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameManager::RequestAmmo(UnityEngine.GameObject)
extern "C" void GameManager_RequestAmmo_m8_135 (GameManager_t8_27 * __this, GameObject_t5_100 * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
