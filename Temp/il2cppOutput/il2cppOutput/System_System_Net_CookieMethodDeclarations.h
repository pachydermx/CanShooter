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

// System.Net.Cookie
struct Cookie_t2_517;
// System.String
struct String_t;
// System.Uri
struct Uri_t2_284;
// System.Int32[]
struct Int32U5BU5D_t1_161;
// System.Object
struct Object_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_DateTime.h"

// System.Void System.Net.Cookie::.ctor()
extern "C" void Cookie__ctor_m2_3816 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.ctor(System.String,System.String)
extern "C" void Cookie__ctor_m2_3817 (Cookie_t2_517 * __this, String_t* ___name, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.ctor(System.String,System.String,System.String)
extern "C" void Cookie__ctor_m2_3818 (Cookie_t2_517 * __this, String_t* ___name, String_t* ___value, String_t* ___path, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.ctor(System.String,System.String,System.String,System.String)
extern "C" void Cookie__ctor_m2_3819 (Cookie_t2_517 * __this, String_t* ___name, String_t* ___value, String_t* ___path, String_t* ___domain, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::.cctor()
extern "C" void Cookie__cctor_m2_3820 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Comment()
extern "C" String_t* Cookie_get_Comment_m2_3821 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Comment(System.String)
extern "C" void Cookie_set_Comment_m2_3822 (Cookie_t2_517 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.Cookie::get_CommentUri()
extern "C" Uri_t2_284 * Cookie_get_CommentUri_m2_3823 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_CommentUri(System.Uri)
extern "C" void Cookie_set_CommentUri_m2_3824 (Cookie_t2_517 * __this, Uri_t2_284 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Discard()
extern "C" bool Cookie_get_Discard_m2_3825 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Discard(System.Boolean)
extern "C" void Cookie_set_Discard_m2_3826 (Cookie_t2_517 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Domain()
extern "C" String_t* Cookie_get_Domain_m2_3827 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Domain(System.String)
extern "C" void Cookie_set_Domain_m2_3828 (Cookie_t2_517 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_ExactDomain()
extern "C" bool Cookie_get_ExactDomain_m2_3829 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_ExactDomain(System.Boolean)
extern "C" void Cookie_set_ExactDomain_m2_3830 (Cookie_t2_517 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Expired()
extern "C" bool Cookie_get_Expired_m2_3831 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Expired(System.Boolean)
extern "C" void Cookie_set_Expired_m2_3832 (Cookie_t2_517 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cookie::get_Expires()
extern "C" DateTime_t1_128  Cookie_get_Expires_m2_3833 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Expires(System.DateTime)
extern "C" void Cookie_set_Expires_m2_3834 (Cookie_t2_517 * __this, DateTime_t1_128  ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_HttpOnly()
extern "C" bool Cookie_get_HttpOnly_m2_3835 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_HttpOnly(System.Boolean)
extern "C" void Cookie_set_HttpOnly_m2_3836 (Cookie_t2_517 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Name()
extern "C" String_t* Cookie_get_Name_m2_3837 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Name(System.String)
extern "C" void Cookie_set_Name_m2_3838 (Cookie_t2_517 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Path()
extern "C" String_t* Cookie_get_Path_m2_3839 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Path(System.String)
extern "C" void Cookie_set_Path_m2_3840 (Cookie_t2_517 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Port()
extern "C" String_t* Cookie_get_Port_m2_3841 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Port(System.String)
extern "C" void Cookie_set_Port_m2_3842 (Cookie_t2_517 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32[] System.Net.Cookie::get_Ports()
extern "C" Int32U5BU5D_t1_161* Cookie_get_Ports_m2_3843 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::get_Secure()
extern "C" bool Cookie_get_Secure_m2_3844 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Secure(System.Boolean)
extern "C" void Cookie_set_Secure_m2_3845 (Cookie_t2_517 * __this, bool ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.DateTime System.Net.Cookie::get_TimeStamp()
extern "C" DateTime_t1_128  Cookie_get_TimeStamp_m2_3846 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::get_Value()
extern "C" String_t* Cookie_get_Value_m2_3847 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Value(System.String)
extern "C" void Cookie_set_Value_m2_3848 (Cookie_t2_517 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::get_Version()
extern "C" int32_t Cookie_get_Version_m2_3849 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.Cookie::set_Version(System.Int32)
extern "C" void Cookie_set_Version_m2_3850 (Cookie_t2_517 * __this, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::Equals(System.Object)
extern "C" bool Cookie_Equals_m2_3851 (Cookie_t2_517 * __this, Object_t * ___obj, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::GetHashCode()
extern "C" int32_t Cookie_GetHashCode_m2_3852 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.Cookie::hash(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
extern "C" int32_t Cookie_hash_m2_3853 (Object_t * __this /* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, int32_t ___m, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToString()
extern "C" String_t* Cookie_ToString_m2_3854 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToString(System.Uri)
extern "C" String_t* Cookie_ToString_m2_3855 (Cookie_t2_517 * __this, Uri_t2_284 * ___uri, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::ToClientString()
extern "C" String_t* Cookie_ToClientString_m2_3856 (Cookie_t2_517 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.Cookie::QuotedString(System.String)
extern "C" String_t* Cookie_QuotedString_m2_3857 (Cookie_t2_517 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::IsToken(System.String)
extern "C" bool Cookie_IsToken_m2_3858 (Cookie_t2_517 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.Cookie::IsNullOrEmpty(System.String)
extern "C" bool Cookie_IsNullOrEmpty_m2_3859 (Object_t * __this /* static, unused */, String_t* ___s, const MethodInfo* method) IL2CPP_METHOD_ATTR;
