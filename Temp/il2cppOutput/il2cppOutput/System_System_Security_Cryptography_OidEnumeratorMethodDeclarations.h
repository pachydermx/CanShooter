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

// System.Security.Cryptography.OidEnumerator
struct OidEnumerator_t2_692;
// System.Security.Cryptography.OidCollection
struct OidCollection_t2_675;
// System.Object
struct Object_t;
// System.Security.Cryptography.Oid
struct Oid_t2_656;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Security.Cryptography.OidEnumerator::.ctor(System.Security.Cryptography.OidCollection)
extern "C" void OidEnumerator__ctor_m2_5743 (OidEnumerator_t2_692 * __this, OidCollection_t2_675 * ___collection, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Cryptography.OidEnumerator::System.Collections.IEnumerator.get_Current()
extern "C" Object_t * OidEnumerator_System_Collections_IEnumerator_get_Current_m2_5744 (OidEnumerator_t2_692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Security.Cryptography.Oid System.Security.Cryptography.OidEnumerator::get_Current()
extern "C" Oid_t2_656 * OidEnumerator_get_Current_m2_5745 (OidEnumerator_t2_692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Cryptography.OidEnumerator::MoveNext()
extern "C" bool OidEnumerator_MoveNext_m2_5746 (OidEnumerator_t2_692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Cryptography.OidEnumerator::Reset()
extern "C" void OidEnumerator_Reset_m2_5747 (OidEnumerator_t2_692 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
