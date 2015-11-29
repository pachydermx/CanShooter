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

// System.ComponentModel.TypeConverter
struct TypeConverter_t2_67;
// System.Type
struct Type_t;
// System.ComponentModel.ITypeDescriptorContext
struct ITypeDescriptorContext_t2_809;
// System.Object
struct Object_t;
// System.Globalization.CultureInfo
struct CultureInfo_t1_163;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Collections.IDictionary
struct IDictionary_t1_35;
// System.ComponentModel.PropertyDescriptorCollection
struct PropertyDescriptorCollection_t2_142;
// System.Attribute[]
struct AttributeU5BU5D_t1_932;
// System.Collections.ICollection
struct ICollection_t1_858;
// System.ComponentModel.TypeConverter/StandardValuesCollection
struct StandardValuesCollection_t2_85;
// System.String[]
struct StringU5BU5D_t1_206;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.TypeConverter::.ctor()
extern "C" void TypeConverter__ctor_m2_1176 (TypeConverter_t2_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.Type)
extern "C" bool TypeConverter_CanConvertFrom_m2_1177 (TypeConverter_t2_67 * __this, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool TypeConverter_CanConvertFrom_m2_1178 (TypeConverter_t2_67 * __this, Object_t * ___context, Type_t * ___sourceType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.Type)
extern "C" bool TypeConverter_CanConvertTo_m2_1179 (TypeConverter_t2_67 * __this, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::CanConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Type)
extern "C" bool TypeConverter_CanConvertTo_m2_1180 (TypeConverter_t2_67 * __this, Object_t * ___context, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.Object)
extern "C" Object_t * TypeConverter_ConvertFrom_m2_1181 (TypeConverter_t2_67 * __this, Object_t * ___o, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFrom(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" Object_t * TypeConverter_ConvertFrom_m2_1182 (TypeConverter_t2_67 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.String)
extern "C" Object_t * TypeConverter_ConvertFromInvariantString_m2_1183 (TypeConverter_t2_67 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromInvariantString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern "C" Object_t * TypeConverter_ConvertFromInvariantString_m2_1184 (TypeConverter_t2_67 * __this, Object_t * ___context, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.String)
extern "C" Object_t * TypeConverter_ConvertFromString_m2_1185 (TypeConverter_t2_67 * __this, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.String)
extern "C" Object_t * TypeConverter_ConvertFromString_m2_1186 (TypeConverter_t2_67 * __this, Object_t * ___context, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertFromString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.String)
extern "C" Object_t * TypeConverter_ConvertFromString_m2_1187 (TypeConverter_t2_67 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, String_t* ___text, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.Object,System.Type)
extern "C" Object_t * TypeConverter_ConvertTo_m2_1188 (TypeConverter_t2_67 * __this, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::ConvertTo(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object,System.Type)
extern "C" Object_t * TypeConverter_ConvertTo_m2_1189 (TypeConverter_t2_67 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.Object)
extern "C" String_t* TypeConverter_ConvertToInvariantString_m2_1190 (TypeConverter_t2_67 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToInvariantString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" String_t* TypeConverter_ConvertToInvariantString_m2_1191 (TypeConverter_t2_67 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.Object)
extern "C" String_t* TypeConverter_ConvertToString_m2_1192 (TypeConverter_t2_67 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" String_t* TypeConverter_ConvertToString_m2_1193 (TypeConverter_t2_67 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.TypeConverter::ConvertToString(System.ComponentModel.ITypeDescriptorContext,System.Globalization.CultureInfo,System.Object)
extern "C" String_t* TypeConverter_ConvertToString_m2_1194 (TypeConverter_t2_67 * __this, Object_t * ___context, CultureInfo_t1_163 * ___culture, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertFromException(System.Object)
extern "C" Exception_t1_33 * TypeConverter_GetConvertFromException_m2_1195 (TypeConverter_t2_67 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.ComponentModel.TypeConverter::GetConvertToException(System.Object,System.Type)
extern "C" Exception_t1_33 * TypeConverter_GetConvertToException_m2_1196 (TypeConverter_t2_67 * __this, Object_t * ___value, Type_t * ___destinationType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::CreateInstance(System.Collections.IDictionary)
extern "C" Object_t * TypeConverter_CreateInstance_m2_1197 (TypeConverter_t2_67 * __this, Object_t * ___propertyValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.TypeConverter::CreateInstance(System.ComponentModel.ITypeDescriptorContext,System.Collections.IDictionary)
extern "C" Object_t * TypeConverter_CreateInstance_m2_1198 (TypeConverter_t2_67 * __this, Object_t * ___context, Object_t * ___propertyValues, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported()
extern "C" bool TypeConverter_GetCreateInstanceSupported_m2_1199 (TypeConverter_t2_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetCreateInstanceSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetCreateInstanceSupported_m2_1200 (TypeConverter_t2_67 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.Object)
extern "C" PropertyDescriptorCollection_t2_142 * TypeConverter_GetProperties_m2_1201 (TypeConverter_t2_67 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" PropertyDescriptorCollection_t2_142 * TypeConverter_GetProperties_m2_1202 (TypeConverter_t2_67 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::GetProperties(System.ComponentModel.ITypeDescriptorContext,System.Object,System.Attribute[])
extern "C" PropertyDescriptorCollection_t2_142 * TypeConverter_GetProperties_m2_1203 (TypeConverter_t2_67 * __this, Object_t * ___context, Object_t * ___value, AttributeU5BU5D_t1_932* ___attributes, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported()
extern "C" bool TypeConverter_GetPropertiesSupported_m2_1204 (TypeConverter_t2_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetPropertiesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetPropertiesSupported_m2_1205 (TypeConverter_t2_67 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.ComponentModel.TypeConverter::GetStandardValues()
extern "C" Object_t * TypeConverter_GetStandardValues_m2_1206 (TypeConverter_t2_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.TypeConverter/StandardValuesCollection System.ComponentModel.TypeConverter::GetStandardValues(System.ComponentModel.ITypeDescriptorContext)
extern "C" StandardValuesCollection_t2_85 * TypeConverter_GetStandardValues_m2_1207 (TypeConverter_t2_67 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive()
extern "C" bool TypeConverter_GetStandardValuesExclusive_m2_1208 (TypeConverter_t2_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesExclusive(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetStandardValuesExclusive_m2_1209 (TypeConverter_t2_67 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported()
extern "C" bool TypeConverter_GetStandardValuesSupported_m2_1210 (TypeConverter_t2_67 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::GetStandardValuesSupported(System.ComponentModel.ITypeDescriptorContext)
extern "C" bool TypeConverter_GetStandardValuesSupported_m2_1211 (TypeConverter_t2_67 * __this, Object_t * ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.Object)
extern "C" bool TypeConverter_IsValid_m2_1212 (TypeConverter_t2_67 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.TypeConverter::IsValid(System.ComponentModel.ITypeDescriptorContext,System.Object)
extern "C" bool TypeConverter_IsValid_m2_1213 (TypeConverter_t2_67 * __this, Object_t * ___context, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.PropertyDescriptorCollection System.ComponentModel.TypeConverter::SortProperties(System.ComponentModel.PropertyDescriptorCollection,System.String[])
extern "C" PropertyDescriptorCollection_t2_142 * TypeConverter_SortProperties_m2_1214 (TypeConverter_t2_67 * __this, PropertyDescriptorCollection_t2_142 * ___props, StringU5BU5D_t1_206* ___names, const MethodInfo* method) IL2CPP_METHOD_ATTR;
