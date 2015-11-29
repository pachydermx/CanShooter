﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.Net.WebHeaderCollection
struct WebHeaderCollection_t2_510;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Object
struct Object_t;
// System.Byte[]
struct ByteU5BU5D_t1_72;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t2_26;
// System.Collections.IEnumerator
struct IEnumerator_t1_131;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_Net_HttpRequestHeader.h"
#include "System_System_Net_HttpResponseHeader.h"

// System.Void System.Net.WebHeaderCollection::.ctor()
extern "C" void WebHeaderCollection__ctor_m2_5161 (WebHeaderCollection_t2_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection__ctor_m2_5162 (WebHeaderCollection_t2_510 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.ctor(System.Boolean)
extern "C" void WebHeaderCollection__ctor_m2_5163 (WebHeaderCollection_t2_510 * __this, bool ___internallyCreated, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::.cctor()
extern "C" void WebHeaderCollection__cctor_m2_5164 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection_System_Runtime_Serialization_ISerializable_GetObjectData_m2_5165 (WebHeaderCollection_t2_510 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String)
extern "C" void WebHeaderCollection_Add_m2_5166 (WebHeaderCollection_t2_510 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.String,System.String)
extern "C" void WebHeaderCollection_Add_m2_5167 (WebHeaderCollection_t2_510 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::AddWithoutValidate(System.String,System.String)
extern "C" void WebHeaderCollection_AddWithoutValidate_m2_5168 (WebHeaderCollection_t2_510 * __this, String_t* ___headerName, String_t* ___headerValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.WebHeaderCollection::GetValues(System.String)
extern "C" StringU5BU5D_t1_206* WebHeaderCollection_GetValues_m2_5169 (WebHeaderCollection_t2_510 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.WebHeaderCollection::GetValues(System.Int32)
extern "C" StringU5BU5D_t1_206* WebHeaderCollection_GetValues_m2_5170 (WebHeaderCollection_t2_510 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String)
extern "C" bool WebHeaderCollection_IsRestricted_m2_5171 (Object_t * __this /* static, unused */, String_t* ___headerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsRestricted(System.String,System.Boolean)
extern "C" bool WebHeaderCollection_IsRestricted_m2_5172 (Object_t * __this /* static, unused */, String_t* ___headerName, bool ___response, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::OnDeserialization(System.Object)
extern "C" void WebHeaderCollection_OnDeserialization_m2_5173 (WebHeaderCollection_t2_510 * __this, Object_t * ___sender, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Remove(System.String)
extern "C" void WebHeaderCollection_Remove_m2_5174 (WebHeaderCollection_t2_510 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Set(System.String,System.String)
extern "C" void WebHeaderCollection_Set_m2_5175 (WebHeaderCollection_t2_510 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] System.Net.WebHeaderCollection::ToByteArray()
extern "C" ByteU5BU5D_t1_72* WebHeaderCollection_ToByteArray_m2_5176 (WebHeaderCollection_t2_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToStringMultiValue()
extern "C" String_t* WebHeaderCollection_ToStringMultiValue_m2_5177 (WebHeaderCollection_t2_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ToString()
extern "C" String_t* WebHeaderCollection_ToString_m2_5178 (WebHeaderCollection_t2_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void WebHeaderCollection_GetObjectData_m2_5179 (WebHeaderCollection_t2_510 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_524  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Net.WebHeaderCollection::get_AllKeys()
extern "C" StringU5BU5D_t1_206* WebHeaderCollection_get_AllKeys_m2_5180 (WebHeaderCollection_t2_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.WebHeaderCollection::get_Count()
extern "C" int32_t WebHeaderCollection_get_Count_m2_5181 (WebHeaderCollection_t2_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Net.WebHeaderCollection::get_Keys()
extern "C" KeysCollection_t2_26 * WebHeaderCollection_get_Keys_m2_5182 (WebHeaderCollection_t2_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.Int32)
extern "C" String_t* WebHeaderCollection_Get_m2_5183 (WebHeaderCollection_t2_510 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::Get(System.String)
extern "C" String_t* WebHeaderCollection_Get_m2_5184 (WebHeaderCollection_t2_510 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::GetKey(System.Int32)
extern "C" String_t* WebHeaderCollection_GetKey_m2_5185 (WebHeaderCollection_t2_510 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.Net.HttpRequestHeader,System.String)
extern "C" void WebHeaderCollection_Add_m2_5186 (WebHeaderCollection_t2_510 * __this, int32_t ___header, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Remove(System.Net.HttpRequestHeader)
extern "C" void WebHeaderCollection_Remove_m2_5187 (WebHeaderCollection_t2_510 * __this, int32_t ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Set(System.Net.HttpRequestHeader,System.String)
extern "C" void WebHeaderCollection_Set_m2_5188 (WebHeaderCollection_t2_510 * __this, int32_t ___header, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Add(System.Net.HttpResponseHeader,System.String)
extern "C" void WebHeaderCollection_Add_m2_5189 (WebHeaderCollection_t2_510 * __this, int32_t ___header, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Remove(System.Net.HttpResponseHeader)
extern "C" void WebHeaderCollection_Remove_m2_5190 (WebHeaderCollection_t2_510 * __this, int32_t ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Set(System.Net.HttpResponseHeader,System.String)
extern "C" void WebHeaderCollection_Set_m2_5191 (WebHeaderCollection_t2_510 * __this, int32_t ___header, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::RequestHeaderToString(System.Net.HttpRequestHeader)
extern "C" String_t* WebHeaderCollection_RequestHeaderToString_m2_5192 (WebHeaderCollection_t2_510 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::get_Item(System.Net.HttpRequestHeader)
extern "C" String_t* WebHeaderCollection_get_Item_m2_5193 (WebHeaderCollection_t2_510 * __this, int32_t ___hrh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::set_Item(System.Net.HttpRequestHeader,System.String)
extern "C" void WebHeaderCollection_set_Item_m2_5194 (WebHeaderCollection_t2_510 * __this, int32_t ___hrh, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::ResponseHeaderToString(System.Net.HttpResponseHeader)
extern "C" String_t* WebHeaderCollection_ResponseHeaderToString_m2_5195 (WebHeaderCollection_t2_510 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.WebHeaderCollection::get_Item(System.Net.HttpResponseHeader)
extern "C" String_t* WebHeaderCollection_get_Item_m2_5196 (WebHeaderCollection_t2_510 * __this, int32_t ___hrh, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::set_Item(System.Net.HttpResponseHeader,System.String)
extern "C" void WebHeaderCollection_set_Item_m2_5197 (WebHeaderCollection_t2_510 * __this, int32_t ___hrh, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::Clear()
extern "C" void WebHeaderCollection_Clear_m2_5198 (WebHeaderCollection_t2_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Net.WebHeaderCollection::GetEnumerator()
extern "C" Object_t * WebHeaderCollection_GetEnumerator_m2_5199 (WebHeaderCollection_t2_510 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::SetInternal(System.String)
extern "C" void WebHeaderCollection_SetInternal_m2_5200 (WebHeaderCollection_t2_510 * __this, String_t* ___header, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::SetInternal(System.String,System.String)
extern "C" void WebHeaderCollection_SetInternal_m2_5201 (WebHeaderCollection_t2_510 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::RemoveAndAdd(System.String,System.String)
extern "C" void WebHeaderCollection_RemoveAndAdd_m2_5202 (WebHeaderCollection_t2_510 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebHeaderCollection::RemoveInternal(System.String)
extern "C" void WebHeaderCollection_RemoveInternal_m2_5203 (WebHeaderCollection_t2_510 * __this, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsMultiValue(System.String)
extern "C" bool WebHeaderCollection_IsMultiValue_m2_5204 (Object_t * __this /* static, unused */, String_t* ___headerName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderValue(System.String)
extern "C" bool WebHeaderCollection_IsHeaderValue_m2_5205 (Object_t * __this /* static, unused */, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebHeaderCollection::IsHeaderName(System.String)
extern "C" bool WebHeaderCollection_IsHeaderName_m2_5206 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
