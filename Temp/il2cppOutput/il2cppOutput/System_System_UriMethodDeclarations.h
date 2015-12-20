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

// System.Uri
struct Uri_t2_284;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;
// System.String[]
struct StringU5BU5D_t1_206;
// System.Object
struct Object_t;
// System.UriParser
struct UriParser_t2_771;
// System.Char[]
struct CharU5BU5D_t1_16;
// System.IO.MemoryStream
struct MemoryStream_t1_250;
// System.Text.Encoding
struct Encoding_t1_227;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
#include "System_System_UriKind.h"
#include "System_System_UriHostNameType.h"
#include "System_System_UriPartial.h"
#include "System_System_UriComponents.h"
#include "System_System_UriFormat.h"
#include "mscorlib_System_StringComparison.h"

// System.Void System.Uri::.ctor(System.String)
extern "C" void Uri__ctor_m2_6336 (Uri_t2_284 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Uri__ctor_m2_6337 (Uri_t2_284 * __this, SerializationInfo_t1_178 * ___serializationInfo, StreamingContext_t1_526  ___streamingContext, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.UriKind)
extern "C" void Uri__ctor_m2_6338 (Uri_t2_284 * __this, String_t* ___uriString, int32_t ___uriKind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.UriKind,System.Boolean&)
extern "C" void Uri__ctor_m2_6339 (Uri_t2_284 * __this, String_t* ___uriString, int32_t ___uriKind, bool* ___success, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.Uri)
extern "C" void Uri__ctor_m2_6340 (Uri_t2_284 * __this, Uri_t2_284 * ___baseUri, Uri_t2_284 * ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.String,System.Boolean)
extern "C" void Uri__ctor_m2_6341 (Uri_t2_284 * __this, String_t* ___uriString, bool ___dontEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.String)
extern "C" void Uri__ctor_m2_6342 (Uri_t2_284 * __this, Uri_t2_284 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.ctor(System.Uri,System.String,System.Boolean)
extern "C" void Uri__ctor_m2_6343 (Uri_t2_284 * __this, Uri_t2_284 * ___baseUri, String_t* ___relativeUri, bool ___dontEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::.cctor()
extern "C" void Uri__cctor_m2_6344 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Uri_System_Runtime_Serialization_ISerializable_GetObjectData_m2_6345 (Uri_t2_284 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Merge(System.Uri,System.String)
extern "C" void Uri_Merge_m2_6346 (Uri_t2_284 * __this, Uri_t2_284 * ___baseUri, String_t* ___relativeUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsolutePath()
extern "C" String_t* Uri_get_AbsolutePath_m2_6347 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_AbsoluteUri()
extern "C" String_t* Uri_get_AbsoluteUri_m2_6348 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Authority()
extern "C" String_t* Uri_get_Authority_m2_6349 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Fragment()
extern "C" String_t* Uri_get_Fragment_m2_6350 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Host()
extern "C" String_t* Uri_get_Host_m2_6351 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::get_HostNameType()
extern "C" int32_t Uri_get_HostNameType_m2_6352 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsDefaultPort()
extern "C" bool Uri_get_IsDefaultPort_m2_6353 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsFile()
extern "C" bool Uri_get_IsFile_m2_6354 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsLoopback()
extern "C" bool Uri_get_IsLoopback_m2_6355 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsUnc()
extern "C" bool Uri_get_IsUnc_m2_6356 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_LocalPath()
extern "C" String_t* Uri_get_LocalPath_m2_6357 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_PathAndQuery()
extern "C" String_t* Uri_get_PathAndQuery_m2_6358 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::get_Port()
extern "C" int32_t Uri_get_Port_m2_6359 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Query()
extern "C" String_t* Uri_get_Query_m2_6360 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_Scheme()
extern "C" String_t* Uri_get_Scheme_m2_6361 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Uri::get_Segments()
extern "C" StringU5BU5D_t1_206* Uri_get_Segments_m2_6362 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_UserEscaped()
extern "C" bool Uri_get_UserEscaped_m2_6363 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_UserInfo()
extern "C" String_t* Uri_get_UserInfo_m2_6364 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_DnsSafeHost()
extern "C" String_t* Uri_get_DnsSafeHost_m2_6365 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::get_IsAbsoluteUri()
extern "C" bool Uri_get_IsAbsoluteUri_m2_6366 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_OriginalString()
extern "C" String_t* Uri_get_OriginalString_m2_6367 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriHostNameType System.Uri::CheckHostName(System.String)
extern "C" int32_t Uri_CheckHostName_m2_6368 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsIPv4Address(System.String)
extern "C" bool Uri_IsIPv4Address_m2_6369 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsDomainAddress(System.String)
extern "C" bool Uri_IsDomainAddress_m2_6370 (Object_t * __this /* static, unused */, String_t* ___name, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CheckSchemeName(System.String)
extern "C" bool Uri_CheckSchemeName_m2_6371 (Object_t * __this /* static, unused */, String_t* ___schemeName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsAlpha(System.Char)
extern "C" bool Uri_IsAlpha_m2_6372 (Object_t * __this /* static, unused */, uint16_t ___c, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::Equals(System.Object)
extern "C" bool Uri_Equals_m2_6373 (Uri_t2_284 * __this, Object_t * ___comparant, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::InternalEquals(System.Uri)
extern "C" bool Uri_InternalEquals_m2_6374 (Uri_t2_284 * __this, Uri_t2_284 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetHashCode()
extern "C" int32_t Uri_GetHashCode_m2_6375 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetLeftPart(System.UriPartial)
extern "C" String_t* Uri_GetLeftPart_m2_6376 (Uri_t2_284 * __this, int32_t ___part, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::FromHex(System.Char)
extern "C" int32_t Uri_FromHex_m2_6377 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::HexEscape(System.Char)
extern "C" String_t* Uri_HexEscape_m2_6378 (Object_t * __this /* static, unused */, uint16_t ___character, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Uri::HexUnescape(System.String,System.Int32&)
extern "C" uint16_t Uri_HexUnescape_m2_6379 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexDigit(System.Char)
extern "C" bool Uri_IsHexDigit_m2_6380 (Object_t * __this /* static, unused */, uint16_t ___digit, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsHexEncoding(System.String,System.Int32)
extern "C" bool Uri_IsHexEncoding_m2_6381 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Uri::MakeRelativeUri(System.Uri)
extern "C" Uri_t2_284 * Uri_MakeRelativeUri_m2_6382 (Uri_t2_284 * __this, Uri_t2_284 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::MakeRelative(System.Uri)
extern "C" String_t* Uri_MakeRelative_m2_6383 (Uri_t2_284 * __this, Uri_t2_284 * ___toUri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::AppendQueryAndFragment(System.String&)
extern "C" void Uri_AppendQueryAndFragment_m2_6384 (Uri_t2_284 * __this, String_t** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ToString()
extern "C" String_t* Uri_ToString_m2_6385 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void Uri_GetObjectData_m2_6386 (Uri_t2_284 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_526  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Escape()
extern "C" void Uri_Escape_m2_6387 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String)
extern "C" String_t* Uri_EscapeString_m2_6388 (Object_t * __this /* static, unused */, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeString(System.String,System.Boolean,System.Boolean,System.Boolean)
extern "C" String_t* Uri_EscapeString_m2_6389 (Object_t * __this /* static, unused */, String_t* ___str, bool ___escapeReserved, bool ___escapeHex, bool ___escapeBrackets, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Parse()
extern "C" void Uri_Parse_m2_6390 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseUri(System.UriKind)
extern "C" void Uri_ParseUri_m2_6391 (Uri_t2_284 * __this, int32_t ___kind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String)
extern "C" String_t* Uri_Unescape_m2_6392 (Uri_t2_284 * __this, String_t* ___str, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Unescape(System.String,System.Boolean)
extern "C" String_t* Uri_Unescape_m2_6393 (Object_t * __this /* static, unused */, String_t* ___str, bool ___excludeSpecial, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsWindowsUNC(System.String)
extern "C" void Uri_ParseAsWindowsUNC_m2_6394 (Uri_t2_284 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseAsWindowsAbsoluteFilePath(System.String)
extern "C" String_t* Uri_ParseAsWindowsAbsoluteFilePath_m2_6395 (Uri_t2_284 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::ParseAsUnixAbsoluteFilePath(System.String)
extern "C" void Uri_ParseAsUnixAbsoluteFilePath_m2_6396 (Uri_t2_284 * __this, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::Parse(System.UriKind,System.String)
extern "C" void Uri_Parse_m2_6397 (Uri_t2_284 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::ParseNoExceptions(System.UriKind,System.String)
extern "C" String_t* Uri_ParseNoExceptions_m2_6398 (Uri_t2_284 * __this, int32_t ___kind, String_t* ___uriString, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::CompactEscaped(System.String)
extern "C" bool Uri_CompactEscaped_m2_6399 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::Reduce(System.String,System.Boolean)
extern "C" String_t* Uri_Reduce_m2_6400 (Object_t * __this /* static, unused */, String_t* ___path, bool ___compact_escaped, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char System.Uri::HexUnescapeMultiByte(System.String,System.Int32&,System.Char&)
extern "C" uint16_t Uri_HexUnescapeMultiByte_m2_6401 (Object_t * __this /* static, unused */, String_t* ___pattern, int32_t* ___index, uint16_t* ___surrogate, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetSchemeDelimiter(System.String)
extern "C" String_t* Uri_GetSchemeDelimiter_m2_6402 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetDefaultPort(System.String)
extern "C" int32_t Uri_GetDefaultPort_m2_6403 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetOpaqueWiseSchemeDelimiter()
extern "C" String_t* Uri_GetOpaqueWiseSchemeDelimiter_m2_6404 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsBadFileSystemCharacter(System.Char)
extern "C" bool Uri_IsBadFileSystemCharacter_m2_6405 (Uri_t2_284 * __this, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsExcludedCharacter(System.Char)
extern "C" bool Uri_IsExcludedCharacter_m2_6406 (Object_t * __this /* static, unused */, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::MaybeUri(System.String)
extern "C" bool Uri_MaybeUri_m2_6407 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsPredefinedScheme(System.String)
extern "C" bool Uri_IsPredefinedScheme_m2_6408 (Object_t * __this /* static, unused */, String_t* ___scheme, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsReservedCharacter(System.Char)
extern "C" bool Uri_IsReservedCharacter_m2_6409 (Uri_t2_284 * __this, uint16_t ___ch, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UriParser System.Uri::get_Parser()
extern "C" UriParser_t2_771 * Uri_get_Parser_m2_6410 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::set_Parser(System.UriParser)
extern "C" void Uri_set_Parser_m2_6411 (Uri_t2_284 * __this, UriParser_t2_771 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::GetComponents(System.UriComponents,System.UriFormat)
extern "C" String_t* Uri_GetComponents_m2_6412 (Uri_t2_284 * __this, int32_t ___components, int32_t ___format, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsBaseOf(System.Uri)
extern "C" bool Uri_IsBaseOf_m2_6413 (Uri_t2_284 * __this, Uri_t2_284 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsWellFormedOriginalString()
extern "C" bool Uri_IsWellFormedOriginalString_m2_6414 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::Compare(System.Uri,System.Uri,System.UriComponents,System.UriFormat,System.StringComparison)
extern "C" int32_t Uri_Compare_m2_6415 (Object_t * __this /* static, unused */, Uri_t2_284 * ___uri1, Uri_t2_284 * ___uri2, int32_t ___partsToCompare, int32_t ___compareFormat, int32_t ___comparisonType, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::NeedToEscapeDataChar(System.Char)
extern "C" bool Uri_NeedToEscapeDataChar_m2_6416 (Object_t * __this /* static, unused */, uint16_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeDataString(System.String)
extern "C" String_t* Uri_EscapeDataString_m2_6417 (Object_t * __this /* static, unused */, String_t* ___stringToEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::NeedToEscapeUriChar(System.Char)
extern "C" bool Uri_NeedToEscapeUriChar_m2_6418 (Object_t * __this /* static, unused */, uint16_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::EscapeUriString(System.String)
extern "C" String_t* Uri_EscapeUriString_m2_6419 (Object_t * __this /* static, unused */, String_t* ___stringToEscape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::IsWellFormedUriString(System.String,System.UriKind)
extern "C" bool Uri_IsWellFormedUriString_m2_6420 (Object_t * __this /* static, unused */, String_t* ___uriString, int32_t ___uriKind, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::TryCreate(System.String,System.UriKind,System.Uri&)
extern "C" bool Uri_TryCreate_m2_6421 (Object_t * __this /* static, unused */, String_t* ___uriString, int32_t ___uriKind, Uri_t2_284 ** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::TryCreate(System.Uri,System.String,System.Uri&)
extern "C" bool Uri_TryCreate_m2_6422 (Object_t * __this /* static, unused */, Uri_t2_284 * ___baseUri, String_t* ___relativeUri, Uri_t2_284 ** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::TryCreate(System.Uri,System.Uri,System.Uri&)
extern "C" bool Uri_TryCreate_m2_6423 (Object_t * __this /* static, unused */, Uri_t2_284 * ___baseUri, Uri_t2_284 * ___relativeUri, Uri_t2_284 ** ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::UnescapeDataString(System.String)
extern "C" String_t* Uri_UnescapeDataString_m2_6424 (Object_t * __this /* static, unused */, String_t* ___stringToUnescape, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetInt(System.Byte)
extern "C" int32_t Uri_GetInt_m2_6425 (Object_t * __this /* static, unused */, uint8_t ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Uri::GetChar(System.String,System.Int32,System.Int32)
extern "C" int32_t Uri_GetChar_m2_6426 (Object_t * __this /* static, unused */, String_t* ___str, int32_t ___offset, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] System.Uri::GetChars(System.IO.MemoryStream,System.Text.Encoding)
extern "C" CharU5BU5D_t1_16* Uri_GetChars_m2_6427 (Object_t * __this /* static, unused */, MemoryStream_t1_250 * ___b, Encoding_t1_227 * ___e, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Uri::EnsureAbsoluteUri()
extern "C" void Uri_EnsureAbsoluteUri_m2_6428 (Uri_t2_284 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Equality(System.Uri,System.Uri)
extern "C" bool Uri_op_Equality_m2_6429 (Object_t * __this /* static, unused */, Uri_t2_284 * ___u1, Uri_t2_284 * ___u2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Uri::op_Inequality(System.Uri,System.Uri)
extern "C" bool Uri_op_Inequality_m2_6430 (Object_t * __this /* static, unused */, Uri_t2_284 * ___u1, Uri_t2_284 * ___u2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
