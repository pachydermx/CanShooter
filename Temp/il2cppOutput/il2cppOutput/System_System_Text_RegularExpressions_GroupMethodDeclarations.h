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

// System.Text.RegularExpressions.Group
struct Group_t2_699;
// System.String
struct String_t;
// System.Text.RegularExpressions.CaptureCollection
struct CaptureCollection_t2_697;

#include "codegen/il2cpp-codegen.h"

// System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32,System.Int32,System.Int32)
extern "C" void Group__ctor_m2_5776 (Group_t2_699 * __this, String_t* ___text, int32_t ___index, int32_t ___length, int32_t ___n_caps, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.ctor(System.String,System.Int32,System.Int32)
extern "C" void Group__ctor_m2_5777 (Group_t2_699 * __this, String_t* ___text, int32_t ___index, int32_t ___length, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.ctor()
extern "C" void Group__ctor_m2_5778 (Group_t2_699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Text.RegularExpressions.Group::.cctor()
extern "C" void Group__cctor_m2_5779 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.Group System.Text.RegularExpressions.Group::Synchronized(System.Text.RegularExpressions.Group)
extern "C" Group_t2_699 * Group_Synchronized_m2_5780 (Object_t * __this /* static, unused */, Group_t2_699 * ___inner, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.RegularExpressions.CaptureCollection System.Text.RegularExpressions.Group::get_Captures()
extern "C" CaptureCollection_t2_697 * Group_get_Captures_m2_5781 (Group_t2_699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Text.RegularExpressions.Group::get_Success()
extern "C" bool Group_get_Success_m2_5782 (Group_t2_699 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
