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

// CanTable
struct CanTable_t8_5;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void CanTable::.ctor()
extern "C" void CanTable__ctor_m8_19 (CanTable_t8_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CanTable::.cctor()
extern "C" void CanTable__cctor_m8_20 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CanTable::Start()
extern "C" void CanTable_Start_m8_21 (CanTable_t8_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CanTable::Update()
extern "C" void CanTable_Update_m8_22 (CanTable_t8_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CanTable::Stage(System.Int32)
extern "C" void CanTable_Stage_m8_23 (CanTable_t8_5 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CanTable::canDestroied()
extern "C" void CanTable_canDestroied_m8_24 (CanTable_t8_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CanTable::nextStage()
extern "C" void CanTable_nextStage_m8_25 (CanTable_t8_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator CanTable::NextStageWorker()
extern "C" Object_t * CanTable_NextStageWorker_m8_26 (CanTable_t8_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CanTable::Put(UnityEngine.Vector3,System.Boolean)
extern "C" void CanTable_Put_m8_27 (CanTable_t8_5 * __this, Vector3_t5_57  ___pos, bool ___explosive, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CanTable::Explode(UnityEngine.Vector3)
extern "C" void CanTable_Explode_m8_28 (CanTable_t8_5 * __this, Vector3_t5_57  ___position, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void CanTable::GameReset()
extern "C" void CanTable_GameReset_m8_29 (CanTable_t8_5 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
