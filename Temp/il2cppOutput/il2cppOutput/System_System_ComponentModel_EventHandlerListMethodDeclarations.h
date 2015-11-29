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

// System.ComponentModel.EventHandlerList
struct EventHandlerList_t2_78;
// System.Delegate
struct Delegate_t1_22;
// System.Object
struct Object_t;
// System.ComponentModel.ListEntry
struct ListEntry_t2_110;

#include "codegen/il2cpp-codegen.h"

// System.Void System.ComponentModel.EventHandlerList::.ctor()
extern "C" void EventHandlerList__ctor_m2_777 (EventHandlerList_t2_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.ComponentModel.EventHandlerList::get_Item(System.Object)
extern "C" Delegate_t1_22 * EventHandlerList_get_Item_m2_778 (EventHandlerList_t2_78 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::set_Item(System.Object,System.Delegate)
extern "C" void EventHandlerList_set_Item_m2_779 (EventHandlerList_t2_78 * __this, Object_t * ___key, Delegate_t1_22 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::AddHandler(System.Object,System.Delegate)
extern "C" void EventHandlerList_AddHandler_m2_780 (EventHandlerList_t2_78 * __this, Object_t * ___key, Delegate_t1_22 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::AddHandlers(System.ComponentModel.EventHandlerList)
extern "C" void EventHandlerList_AddHandlers_m2_781 (EventHandlerList_t2_78 * __this, EventHandlerList_t2_78 * ___listToAddFrom, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::RemoveHandler(System.Object,System.Delegate)
extern "C" void EventHandlerList_RemoveHandler_m2_782 (EventHandlerList_t2_78 * __this, Object_t * ___key, Delegate_t1_22 * ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.ComponentModel.EventHandlerList::Dispose()
extern "C" void EventHandlerList_Dispose_m2_783 (EventHandlerList_t2_78 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.ComponentModel.ListEntry System.ComponentModel.EventHandlerList::FindEntry(System.Object)
extern "C" ListEntry_t2_110 * EventHandlerList_FindEntry_m2_784 (EventHandlerList_t2_78 * __this, Object_t * ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
