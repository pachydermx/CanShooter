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


#include "codegen/il2cpp-codegen.h"

extern "C" void ifaddrs_t2_386_marshal(const ifaddrs_t2_386& unmarshaled, ifaddrs_t2_386_marshaled& marshaled);
extern "C" void ifaddrs_t2_386_marshal_back(const ifaddrs_t2_386_marshaled& marshaled, ifaddrs_t2_386& unmarshaled);
extern "C" void ifaddrs_t2_386_marshal_cleanup(ifaddrs_t2_386_marshaled& marshaled);
