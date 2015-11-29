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

// System.ComponentModel.MemberDescriptor
struct MemberDescriptor_t2_39;
// System.String
struct String_t;
// System.Attribute[]
struct AttributeU5BU5D_t1_932;
// System.Collections.IList
struct IList_t1_427;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2_60;
// System.Object
struct Object_t;
// System.ComponentModel.ISite
struct ISite_t2_79;
// System.Type
struct Type_t;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.Type[]
struct TypeU5BU5D_t1_31;
// System.Collections.IComparer
struct IComparer_t1_180;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String,System.Attribute[])
extern "C" void MemberDescriptor__ctor_m2_922 (MemberDescriptor_t2_39 * __this, String_t* ___name, AttributeU5BU5D_t1_932* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.ComponentModel.MemberDescriptor,System.Attribute[])
extern "C" void MemberDescriptor__ctor_m2_923 (MemberDescriptor_t2_39 * __this, MemberDescriptor_t2_39 * ___reference, AttributeU5BU5D_t1_932* ___attrs, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.String)
extern "C" void MemberDescriptor__ctor_m2_924 (MemberDescriptor_t2_39 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::.ctor(System.ComponentModel.MemberDescriptor)
extern "C" void MemberDescriptor__ctor_m2_925 (MemberDescriptor_t2_39 * __this, MemberDescriptor_t2_39 * ___reference, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Attribute[] System.ComponentModel.MemberDescriptor::get_AttributeArray()
extern "C" AttributeU5BU5D_t1_932* MemberDescriptor_get_AttributeArray_m2_926 (MemberDescriptor_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::set_AttributeArray(System.Attribute[])
extern "C" void MemberDescriptor_set_AttributeArray_m2_927 (MemberDescriptor_t2_39 * __this, AttributeU5BU5D_t1_932* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.MemberDescriptor::FillAttributes(System.Collections.IList)
extern "C" void MemberDescriptor_FillAttributes_m2_928 (MemberDescriptor_t2_39 * __this, Object_t * ___attributeList, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::get_Attributes()
extern "C" AttributeCollection_t2_60 * MemberDescriptor_get_Attributes_m2_929 (MemberDescriptor_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.MemberDescriptor::CreateAttributeCollection()
extern "C" AttributeCollection_t2_60 * MemberDescriptor_CreateAttributeCollection_m2_930 (MemberDescriptor_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Category()
extern "C" String_t* MemberDescriptor_get_Category_m2_931 (MemberDescriptor_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Description()
extern "C" String_t* MemberDescriptor_get_Description_m2_932 (MemberDescriptor_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::get_DesignTimeOnly()
extern "C" bool MemberDescriptor_get_DesignTimeOnly_m2_933 (MemberDescriptor_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_DisplayName()
extern "C" String_t* MemberDescriptor_get_DisplayName_m2_934 (MemberDescriptor_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.MemberDescriptor::get_Name()
extern "C" String_t* MemberDescriptor_get_Name_m2_935 (MemberDescriptor_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::get_IsBrowsable()
extern "C" bool MemberDescriptor_get_IsBrowsable_m2_936 (MemberDescriptor_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::get_NameHashCode()
extern "C" int32_t MemberDescriptor_get_NameHashCode_m2_937 (MemberDescriptor_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.ComponentModel.MemberDescriptor::GetHashCode()
extern "C" int32_t MemberDescriptor_GetHashCode_m2_938 (MemberDescriptor_t2_39 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.MemberDescriptor::Equals(System.Object)
extern "C" bool MemberDescriptor_Equals_m2_939 (MemberDescriptor_t2_39 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.MemberDescriptor::GetSite(System.Object)
extern "C" Object_t * MemberDescriptor_GetSite_m2_940 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MemberDescriptor::GetInvokee(System.Type,System.Object)
extern "C" Object_t * MemberDescriptor_GetInvokee_m2_941 (Object_t * __this /* static, unused */, Type_t * ___componentClass, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.MemberDescriptor::GetInvocationTarget(System.Type,System.Object)
extern "C" Object_t * MemberDescriptor_GetInvocationTarget_m2_942 (MemberDescriptor_t2_39 * __this, Type_t * ___type, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.ComponentModel.MemberDescriptor::FindMethod(System.Type,System.String,System.Type[],System.Type)
extern "C" MethodInfo_t * MemberDescriptor_FindMethod_m2_943 (Object_t * __this /* static, unused */, Type_t * ___componentClass, String_t* ___name, TypeU5BU5D_t1_31* ___args, Type_t * ___returnType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.MethodInfo System.ComponentModel.MemberDescriptor::FindMethod(System.Type,System.String,System.Type[],System.Type,System.Boolean)
extern "C" MethodInfo_t * MemberDescriptor_FindMethod_m2_944 (Object_t * __this /* static, unused */, Type_t * ___componentClass, String_t* ___name, TypeU5BU5D_t1_31* ___args, Type_t * ___returnType, bool ___publicOnly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IComparer System.ComponentModel.MemberDescriptor::get_DefaultComparer()
extern "C" Object_t * MemberDescriptor_get_DefaultComparer_m2_945 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
