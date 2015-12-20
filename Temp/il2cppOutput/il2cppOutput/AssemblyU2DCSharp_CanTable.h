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
// System.Int32[]
struct Int32U5BU5D_t1_161;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5_165;
// UnityEngine.Vector3[][]
struct Vector3U5BU5DU5BU5D_t5_324;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_t1_1190;

#include "UnityEngine_UnityEngine_MonoBehaviour.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// CanTable
struct  CanTable_t8_5  : public MonoBehaviour_t5_95
{
	// UnityEngine.GameObject CanTable::CanPrefab
	GameObject_t5_101 * ___CanPrefab_2;
	// UnityEngine.GameObject CanTable::ExplosiveCanPrefab
	GameObject_t5_101 * ___ExplosiveCanPrefab_3;
	// System.Int32 CanTable::currentStage
	int32_t ___currentStage_4;
	// System.Int32 CanTable::canRemain
	int32_t ___canRemain_5;
	// System.Boolean CanTable::active
	bool ___active_6;
	// UnityEngine.Vector3 CanTable::Size
	Vector3_t5_57  ___Size_7;
	// System.Int32[] CanTable::explosive
	Int32U5BU5D_t1_161* ___explosive_8;
	// UnityEngine.Vector3[][] CanTable::Stages
	Vector3U5BU5DU5BU5D_t5_324* ___Stages_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CanTable::Cans
	List_1_t1_1190 * ___Cans_17;
};
struct CanTable_t8_5_StaticFields{
	// UnityEngine.Vector3[] CanTable::stage1
	Vector3U5BU5D_t5_165* ___stage1_9;
	// UnityEngine.Vector3[] CanTable::stage2
	Vector3U5BU5D_t5_165* ___stage2_10;
	// UnityEngine.Vector3[] CanTable::stage3
	Vector3U5BU5D_t5_165* ___stage3_11;
	// UnityEngine.Vector3[] CanTable::stage4
	Vector3U5BU5D_t5_165* ___stage4_12;
	// UnityEngine.Vector3[] CanTable::stage5
	Vector3U5BU5D_t5_165* ___stage5_13;
	// UnityEngine.Vector3[] CanTable::stage6
	Vector3U5BU5D_t5_165* ___stage6_14;
	// UnityEngine.Vector3[] CanTable::stage7
	Vector3U5BU5D_t5_165* ___stage7_15;
};
