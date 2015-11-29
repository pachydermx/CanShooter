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

// System.ComponentModel.Design.DesignerVerb
struct DesignerVerb_t2_46;
// System.String
struct String_t;
// System.EventHandler
struct EventHandler_t1_275;
// System.ComponentModel.Design.CommandID
struct CommandID_t2_37;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Design.DesignerVerb::.ctor(System.String,System.EventHandler)
extern "C" void DesignerVerb__ctor_m2_370 (DesignerVerb_t2_46 * __this, String_t* ___text, EventHandler_t1_275 * ___handler, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.DesignerVerb::.ctor(System.String,System.EventHandler,System.ComponentModel.Design.CommandID)
extern "C" void DesignerVerb__ctor_m2_371 (DesignerVerb_t2_46 * __this, String_t* ___text, EventHandler_t1_275 * ___handler, CommandID_t2_37 * ___startCommandID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.DesignerVerb::get_Text()
extern "C" String_t* DesignerVerb_get_Text_m2_372 (DesignerVerb_t2_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.DesignerVerb::get_Description()
extern "C" String_t* DesignerVerb_get_Description_m2_373 (DesignerVerb_t2_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Design.DesignerVerb::set_Description(System.String)
extern "C" void DesignerVerb_set_Description_m2_374 (DesignerVerb_t2_46 * __this, String_t* ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Design.DesignerVerb::ToString()
extern "C" String_t* DesignerVerb_ToString_m2_375 (DesignerVerb_t2_46 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
