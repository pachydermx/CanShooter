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

// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t1_536;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t1_530;
// System.Reflection.MemberInfo
struct MemberInfo_t;
// System.Object
struct Object_t;
// System.Int32[]
struct Int32U5BU5D_t1_161;
// System.String
struct String_t;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t1_537;
// System.Runtime.Serialization.ISurrogateSelector
struct ISurrogateSelector_t1_474;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.ObjectRecord::.ctor()
extern "C" void ObjectRecord__ctor_m1_3898 (ObjectRecord_t1_536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.Reflection.MemberInfo,System.Object)
extern "C" void ObjectRecord_SetMemberValue_m1_3899 (ObjectRecord_t1_536 * __this, ObjectManager_t1_530 * ___manager, MemberInfo_t * ___member, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetArrayValue(System.Runtime.Serialization.ObjectManager,System.Object,System.Int32[])
extern "C" void ObjectRecord_SetArrayValue_m1_3900 (ObjectRecord_t1_536 * __this, ObjectManager_t1_530 * ___manager, Object_t * ___value, Int32U5BU5D_t1_161* ___indices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::SetMemberValue(System.Runtime.Serialization.ObjectManager,System.String,System.Object)
extern "C" void ObjectRecord_SetMemberValue_m1_3901 (ObjectRecord_t1_536 * __this, ObjectManager_t1_530 * ___manager, String_t* ___memberName, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsInstanceReady()
extern "C" bool ObjectRecord_get_IsInstanceReady_m1_3902 (ObjectRecord_t1_536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsUnsolvedObjectReference()
extern "C" bool ObjectRecord_get_IsUnsolvedObjectReference_m1_3903 (ObjectRecord_t1_536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_IsRegistered()
extern "C" bool ObjectRecord_get_IsRegistered_m1_3904 (ObjectRecord_t1_536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::DoFixups(System.Boolean,System.Runtime.Serialization.ObjectManager,System.Boolean)
extern "C" bool ObjectRecord_DoFixups_m1_3905 (ObjectRecord_t1_536 * __this, bool ___asContainer, ObjectManager_t1_530 * ___manager, bool ___strict, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::RemoveFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_RemoveFixup_m1_3906 (ObjectRecord_t1_536 * __this, BaseFixupRecord_t1_537 * ___fixupToRemove, bool ___asContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::UnchainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_UnchainFixup_m1_3907 (ObjectRecord_t1_536 * __this, BaseFixupRecord_t1_537 * ___fixup, BaseFixupRecord_t1_537 * ___prevFixup, bool ___asContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ObjectRecord::ChainFixup(System.Runtime.Serialization.BaseFixupRecord,System.Boolean)
extern "C" void ObjectRecord_ChainFixup_m1_3908 (ObjectRecord_t1_536 * __this, BaseFixupRecord_t1_537 * ___fixup, bool ___asContainer, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::LoadData(System.Runtime.Serialization.ObjectManager,System.Runtime.Serialization.ISurrogateSelector,System.Runtime.Serialization.StreamingContext)
extern "C" bool ObjectRecord_LoadData_m1_3909 (ObjectRecord_t1_536 * __this, ObjectManager_t1_530 * ___manager, Object_t * ___selector, StreamingContext_t1_524  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.ObjectRecord::get_HasPendingFixups()
extern "C" bool ObjectRecord_get_HasPendingFixups_m1_3910 (ObjectRecord_t1_536 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
