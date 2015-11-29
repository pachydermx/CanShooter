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

// System.ComponentModel.LicenseException
struct LicenseException_t2_122;
// System.Type
struct Type_t;
// System.Object
struct Object_t;
// System.String
struct String_t;
// System.Exception
struct Exception_t1_33;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1_178;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.ComponentModel.LicenseException::.ctor(System.Type)
extern "C" void LicenseException__ctor_m2_830 (LicenseException_t2_122 * __this, Type_t * ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Type,System.Object)
extern "C" void LicenseException__ctor_m2_831 (LicenseException_t2_122 * __this, Type_t * ___type, Object_t * ___instance, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Type,System.Object,System.String)
extern "C" void LicenseException__ctor_m2_832 (LicenseException_t2_122 * __this, Type_t * ___type, Object_t * ___instance, String_t* ___message, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Type,System.Object,System.String,System.Exception)
extern "C" void LicenseException__ctor_m2_833 (LicenseException_t2_122 * __this, Type_t * ___type, Object_t * ___instance, String_t* ___message, Exception_t1_33 * ___innerException, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LicenseException__ctor_m2_834 (LicenseException_t2_122 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.LicenseException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
extern "C" void LicenseException_GetObjectData_m2_835 (LicenseException_t2_122 * __this, SerializationInfo_t1_178 * ___info, StreamingContext_t1_524  ___context, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.ComponentModel.LicenseException::get_LicensedType()
extern "C" Type_t * LicenseException_get_LicensedType_m2_836 (LicenseException_t2_122 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
