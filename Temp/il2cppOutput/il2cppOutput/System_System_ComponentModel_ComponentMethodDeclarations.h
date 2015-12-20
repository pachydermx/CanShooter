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

// System.ComponentModel.Component
struct Component_t2_77;
// System.EventHandler
struct EventHandler_t1_275;
// System.ComponentModel.ISite
struct ISite_t2_79;
// System.ComponentModel.IContainer
struct IContainer_t2_810;
// System.ComponentModel.EventHandlerList
struct EventHandlerList_t2_78;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.Component::.ctor()
extern "C" void Component__ctor_m2_554 (Component_t2_77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::add_Disposed(System.EventHandler)
extern "C" void Component_add_Disposed_m2_555 (Component_t2_77 * __this, EventHandler_t1_275 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::remove_Disposed(System.EventHandler)
extern "C" void Component_remove_Disposed_m2_556 (Component_t2_77 * __this, EventHandler_t1_275 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Component::get_CanRaiseEvents()
extern "C" bool Component_get_CanRaiseEvents_m2_557 (Component_t2_77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ISite System.ComponentModel.Component::get_Site()
extern "C" Object_t * Component_get_Site_m2_558 (Component_t2_77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::set_Site(System.ComponentModel.ISite)
extern "C" void Component_set_Site_m2_559 (Component_t2_77 * __this, Object_t * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.IContainer System.ComponentModel.Component::get_Container()
extern "C" Object_t * Component_get_Container_m2_560 (Component_t2_77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.ComponentModel.Component::get_DesignMode()
extern "C" bool Component_get_DesignMode_m2_561 (Component_t2_77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.EventHandlerList System.ComponentModel.Component::get_Events()
extern "C" EventHandlerList_t2_78 * Component_get_Events_m2_562 (Component_t2_77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Finalize()
extern "C" void Component_Finalize_m2_563 (Component_t2_77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose()
extern "C" void Component_Dispose_m2_564 (Component_t2_77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.Component::Dispose(System.Boolean)
extern "C" void Component_Dispose_m2_565 (Component_t2_77 * __this, bool ___release_all, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.ComponentModel.Component::GetService(System.Type)
extern "C" Object_t * Component_GetService_m2_566 (Component_t2_77 * __this, Type_t * ___service, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.ComponentModel.Component::ToString()
extern "C" String_t* Component_ToString_m2_567 (Component_t2_77 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
