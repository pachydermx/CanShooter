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

// System.ComponentModel.TypeDescriptor
struct TypeDescriptor_t2_167;
// System.ComponentModel.RefreshEventHandler
struct RefreshEventHandler_t2_168;
// System.Type
struct Type_t;
// System.ComponentModel.TypeDescriptionProvider
struct TypeDescriptionProvider_t2_161;
// System.Object
struct Object_t;
// System.Attribute[]
struct AttributeU5BU5D_t1_932;
// System.IServiceProvider
struct IServiceProvider_t1_954;
// System.Type[]
struct TypeU5BU5D_t1_31;
// System.Object[]
struct ObjectU5BU5D_t1_158;
// System.Collections.Hashtable
struct Hashtable_t1_173;
// System.ComponentModel.Design.IDesigner
struct IDesigner_t2_816;
// System.ComponentModel.IComponent
struct IComponent_t2_42;
// System.ComponentModel.EventDescriptor
struct EventDescriptor_t2_108;
// System.String
struct String_t;
// System.ComponentModel.PropertyDescriptor
struct PropertyDescriptor_t2_54;
// System.ComponentModel.AttributeCollection
struct AttributeCollection_t2_60;
// System.ComponentModel.TypeConverter
struct TypeConverter_t2_67;
// System.Collections.ArrayList
struct ArrayList_t1_114;
// System.ComponentModel.EventDescriptorCollection
struct EventDescriptorCollection_t2_109;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t2_142;
// System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>
struct LinkedList_1_t2_815;
// System.Collections.IList
struct IList_t1_427;
// System.ComponentModel.IComNativeDescriptorHandler
struct IComNativeDescriptorHandler_t2_169;
// System.Reflection.Assembly
struct Assembly_t1_277;
// System.Reflection.Module
struct Module_t1_298;
// System.EventArgs
struct EventArgs_t1_105;
// System.ComponentModel.ComponentInfo
struct ComponentInfo_t2_171;
// System.ComponentModel.TypeInfo
struct TypeInfo_t2_172;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeDescriptor::.ctor()
extern "C" void TypeDescriptor__ctor_m2_1256 (TypeDescriptor_t2_167 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::.cctor()
extern "C" void TypeDescriptor__cctor_m2_1257 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::add_Refreshed(System.ComponentModel.RefreshEventHandler)
extern "C" void TypeDescriptor_add_Refreshed_m2_1258 (Object_t * __this /* static, unused */, RefreshEventHandler_t2_168 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::remove_Refreshed(System.ComponentModel.RefreshEventHandler)
extern "C" void TypeDescriptor_remove_Refreshed_m2_1259 (Object_t * __this /* static, unused */, RefreshEventHandler_t2_168 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::get_ComObjectType()
extern "C" Type_t * TypeDescriptor_get_ComObjectType_m2_1260 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::AddAttributes(System.Object,System.Attribute[])
extern "C" TypeDescriptionProvider_t2_161 * TypeDescriptor_AddAttributes_m2_1261 (Object_t * __this /* static, unused */, Object_t * ___instance, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::AddAttributes(System.Type,System.Attribute[])
extern "C" TypeDescriptionProvider_t2_161 * TypeDescriptor_AddAttributes_m2_1262 (Object_t * __this /* static, unused */, Type_t * ___type, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddProvider(System.ComponentModel.TypeDescriptionProvider,System.Object)
extern "C" void TypeDescriptor_AddProvider_m2_1263 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t2_161 * ___provider, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddProvider(System.ComponentModel.TypeDescriptionProvider,System.Type)
extern "C" void TypeDescriptor_AddProvider_m2_1264 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t2_161 * ___provider, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::CreateInstance(System.IServiceProvider,System.Type,System.Type[],System.Object[])
extern "C" Object_t * TypeDescriptor_CreateInstance_m2_1265 (Object_t * __this /* static, unused */, Object_t * ___provider, Type_t * ___objectType, TypeU5BU5D_t1_31* ___argTypes, ObjectU5BU5D_t1_158* ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::AddEditorTable(System.Type,System.Collections.Hashtable)
extern "C" void TypeDescriptor_AddEditorTable_m2_1266 (Object_t * __this /* static, unused */, Type_t * ___editorBaseType, Hashtable_t1_173 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.Design.IDesigner System.ComponentModel.TypeDescriptor::CreateDesigner(System.ComponentModel.IComponent,System.Type)
extern "C" Object_t * TypeDescriptor_CreateDesigner_m2_1267 (Object_t * __this /* static, unused */, Object_t * ___component, Type_t * ___designerBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::CreateEvent(System.Type,System.String,System.Type,System.Attribute[])
extern "C" EventDescriptor_t2_108 * TypeDescriptor_CreateEvent_m2_1268 (Object_t * __this /* static, unused */, Type_t * ___componentType, String_t* ___name, Type_t * ___type, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::CreateEvent(System.Type,System.ComponentModel.EventDescriptor,System.Attribute[])
extern "C" EventDescriptor_t2_108 * TypeDescriptor_CreateEvent_m2_1269 (Object_t * __this /* static, unused */, Type_t * ___componentType, EventDescriptor_t2_108 * ___oldEventDescriptor, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::CreateProperty(System.Type,System.String,System.Type,System.Attribute[])
extern "C" PropertyDescriptor_t2_54 * TypeDescriptor_CreateProperty_m2_1270 (Object_t * __this /* static, unused */, Type_t * ___componentType, String_t* ___name, Type_t * ___type, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::CreateProperty(System.Type,System.ComponentModel.PropertyDescriptor,System.Attribute[])
extern "C" PropertyDescriptor_t2_54 * TypeDescriptor_CreateProperty_m2_1271 (Object_t * __this /* static, unused */, Type_t * ___componentType, PropertyDescriptor_t2_54 * ___oldPropertyDescriptor, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Type)
extern "C" AttributeCollection_t2_60 * TypeDescriptor_GetAttributes_m2_1272 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object)
extern "C" AttributeCollection_t2_60 * TypeDescriptor_GetAttributes_m2_1273 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.AttributeCollection System.ComponentModel.TypeDescriptor::GetAttributes(System.Object,System.Boolean)
extern "C" AttributeCollection_t2_60 * TypeDescriptor_GetAttributes_m2_1274 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Object)
extern "C" String_t* TypeDescriptor_GetClassName_m2_1275 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Object,System.Boolean)
extern "C" String_t* TypeDescriptor_GetClassName_m2_1276 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetComponentName(System.Object)
extern "C" String_t* TypeDescriptor_GetComponentName_m2_1277 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetComponentName(System.Object,System.Boolean)
extern "C" String_t* TypeDescriptor_GetComponentName_m2_1278 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetFullComponentName(System.Object)
extern "C" String_t* TypeDescriptor_GetFullComponentName_m2_1279 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeDescriptor::GetClassName(System.Type)
extern "C" String_t* TypeDescriptor_GetClassName_m2_1280 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Object)
extern "C" TypeConverter_t2_67 * TypeDescriptor_GetConverter_m2_1281 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Object,System.Boolean)
extern "C" TypeConverter_t2_67 * TypeDescriptor_GetConverter_m2_1282 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.ComponentModel.TypeDescriptor::get_DefaultConverters()
extern "C" ArrayList_t1_114 * TypeDescriptor_get_DefaultConverters_m2_1283 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter System.ComponentModel.TypeDescriptor::GetConverter(System.Type)
extern "C" TypeConverter_t2_67 * TypeDescriptor_GetConverter_m2_1284 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::FindDefaultConverterType(System.Type)
extern "C" Type_t * TypeDescriptor_FindDefaultConverterType_m2_1285 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Type)
extern "C" EventDescriptor_t2_108 * TypeDescriptor_GetDefaultEvent_m2_1286 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Object)
extern "C" EventDescriptor_t2_108 * TypeDescriptor_GetDefaultEvent_m2_1287 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptor System.ComponentModel.TypeDescriptor::GetDefaultEvent(System.Object,System.Boolean)
extern "C" EventDescriptor_t2_108 * TypeDescriptor_GetDefaultEvent_m2_1288 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Type)
extern "C" PropertyDescriptor_t2_54 * TypeDescriptor_GetDefaultProperty_m2_1289 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Object)
extern "C" PropertyDescriptor_t2_54 * TypeDescriptor_GetDefaultProperty_m2_1290 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptor System.ComponentModel.TypeDescriptor::GetDefaultProperty(System.Object,System.Boolean)
extern "C" PropertyDescriptor_t2_54 * TypeDescriptor_GetDefaultProperty_m2_1291 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::CreateEditor(System.Type,System.Type)
extern "C" Object_t * TypeDescriptor_CreateEditor_m2_1292 (Object_t * __this /* static, unused */, Type_t * ___t, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::FindEditorInTable(System.Type,System.Type,System.Collections.Hashtable)
extern "C" Object_t * TypeDescriptor_FindEditorInTable_m2_1293 (Object_t * __this /* static, unused */, Type_t * ___componentType, Type_t * ___editorBaseType, Hashtable_t1_173 * ___table, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Type,System.Type)
extern "C" Object_t * TypeDescriptor_GetEditor_m2_1294 (Object_t * __this /* static, unused */, Type_t * ___componentType, Type_t * ___editorBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Object,System.Type)
extern "C" Object_t * TypeDescriptor_GetEditor_m2_1295 (Object_t * __this /* static, unused */, Object_t * ___component, Type_t * ___editorBaseType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetEditor(System.Object,System.Type,System.Boolean)
extern "C" Object_t * TypeDescriptor_GetEditor_m2_1296 (Object_t * __this /* static, unused */, Object_t * ___component, Type_t * ___editorBaseType, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object)
extern "C" EventDescriptorCollection_t2_109 * TypeDescriptor_GetEvents_m2_1297 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Type)
extern "C" EventDescriptorCollection_t2_109 * TypeDescriptor_GetEvents_m2_1298 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Attribute[])
extern "C" EventDescriptorCollection_t2_109 * TypeDescriptor_GetEvents_m2_1299 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Boolean)
extern "C" EventDescriptorCollection_t2_109 * TypeDescriptor_GetEvents_m2_1300 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Type,System.Attribute[])
extern "C" EventDescriptorCollection_t2_109 * TypeDescriptor_GetEvents_m2_1301 (Object_t * __this /* static, unused */, Type_t * ___componentType, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventDescriptorCollection System.ComponentModel.TypeDescriptor::GetEvents(System.Object,System.Attribute[],System.Boolean)
extern "C" EventDescriptorCollection_t2_109 * TypeDescriptor_GetEvents_m2_1302 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1_932* ___attributes, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object)
extern "C" PropertyDescriptorCollection_t2_142 * TypeDescriptor_GetProperties_m2_1303 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Type)
extern "C" PropertyDescriptorCollection_t2_142 * TypeDescriptor_GetProperties_m2_1304 (Object_t * __this /* static, unused */, Type_t * ___componentType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t2_142 * TypeDescriptor_GetProperties_m2_1305 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Attribute[],System.Boolean)
extern "C" PropertyDescriptorCollection_t2_142 * TypeDescriptor_GetProperties_m2_1306 (Object_t * __this /* static, unused */, Object_t * ___component, AttributeU5BU5D_t1_932* ___attributes, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Object,System.Boolean)
extern "C" PropertyDescriptorCollection_t2_142 * TypeDescriptor_GetProperties_m2_1307 (Object_t * __this /* static, unused */, Object_t * ___component, bool ___noCustomTypeDesc, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeDescriptor::GetProperties(System.Type,System.Attribute[])
extern "C" PropertyDescriptorCollection_t2_142 * TypeDescriptor_GetProperties_m2_1308 (Object_t * __this /* static, unused */, Type_t * ___componentType, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Object)
extern "C" TypeDescriptionProvider_t2_161 * TypeDescriptor_GetProvider_m2_1309 (Object_t * __this /* static, unused */, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeDescriptionProvider System.ComponentModel.TypeDescriptor::GetProvider(System.Type)
extern "C" TypeDescriptionProvider_t2_161 * TypeDescriptor_GetProvider_m2_1310 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetReflectionType(System.Object)
extern "C" Type_t * TypeDescriptor_GetReflectionType_m2_1311 (Object_t * __this /* static, unused */, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetReflectionType(System.Type)
extern "C" Type_t * TypeDescriptor_GetReflectionType_m2_1312 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::CreateAssociation(System.Object,System.Object)
extern "C" void TypeDescriptor_CreateAssociation_m2_1313 (Object_t * __this /* static, unused */, Object_t * ___primary, Object_t * ___secondary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeDescriptor::GetAssociation(System.Type,System.Object)
extern "C" Object_t * TypeDescriptor_GetAssociation_m2_1314 (Object_t * __this /* static, unused */, Type_t * ___type, Object_t * ___primary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveAssociation(System.Object,System.Object)
extern "C" void TypeDescriptor_RemoveAssociation_m2_1315 (Object_t * __this /* static, unused */, Object_t * ___primary, Object_t * ___secondary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveAssociations(System.Object)
extern "C" void TypeDescriptor_RemoveAssociations_m2_1316 (Object_t * __this /* static, unused */, Object_t * ___primary, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Object)
extern "C" void TypeDescriptor_RemoveProvider_m2_1317 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t2_161 * ___provider, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Type)
extern "C" void TypeDescriptor_RemoveProvider_m2_1318 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t2_161 * ___provider, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::RemoveProvider(System.ComponentModel.TypeDescriptionProvider,System.Collections.Generic.LinkedList`1<System.ComponentModel.TypeDescriptionProvider>)
extern "C" void TypeDescriptor_RemoveProvider_m2_1319 (Object_t * __this /* static, unused */, TypeDescriptionProvider_t2_161 * ___provider, LinkedList_1_t2_815 * ___plist, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::SortDescriptorArray(System.Collections.IList)
extern "C" void TypeDescriptor_SortDescriptorArray_m2_1320 (Object_t * __this /* static, unused */, Object_t * ___infos, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IComNativeDescriptorHandler System.ComponentModel.TypeDescriptor::get_ComNativeDescriptorHandler()
extern "C" Object_t * TypeDescriptor_get_ComNativeDescriptorHandler_m2_1321 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::set_ComNativeDescriptorHandler(System.ComponentModel.IComNativeDescriptorHandler)
extern "C" void TypeDescriptor_set_ComNativeDescriptorHandler_m2_1322 (Object_t * __this /* static, unused */, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Reflection.Assembly)
extern "C" void TypeDescriptor_Refresh_m2_1323 (Object_t * __this /* static, unused */, Assembly_t1_277 * ___assembly, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Reflection.Module)
extern "C" void TypeDescriptor_Refresh_m2_1324 (Object_t * __this /* static, unused */, Module_t1_298 * ___module, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Object)
extern "C" void TypeDescriptor_Refresh_m2_1325 (Object_t * __this /* static, unused */, Object_t * ___component, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::Refresh(System.Type)
extern "C" void TypeDescriptor_Refresh_m2_1326 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.TypeDescriptor::OnComponentDisposed(System.Object,System.EventArgs)
extern "C" void TypeDescriptor_OnComponentDisposed_m2_1327 (Object_t * __this /* static, unused */, Object_t * ___sender, EventArgs_t1_105 * ___args, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ComponentInfo System.ComponentModel.TypeDescriptor::GetComponentInfo(System.ComponentModel.IComponent)
extern "C" ComponentInfo_t2_171 * TypeDescriptor_GetComponentInfo_m2_1328 (Object_t * __this /* static, unused */, Object_t * ___com, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeInfo System.ComponentModel.TypeDescriptor::GetTypeInfo(System.Type)
extern "C" TypeInfo_t2_172 * TypeDescriptor_GetTypeInfo_m2_1329 (Object_t * __this /* static, unused */, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.TypeDescriptor::GetTypeFromName(System.ComponentModel.IComponent,System.String)
extern "C" Type_t * TypeDescriptor_GetTypeFromName_m2_1330 (Object_t * __this /* static, unused */, Object_t * ___component, String_t* ___typeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
