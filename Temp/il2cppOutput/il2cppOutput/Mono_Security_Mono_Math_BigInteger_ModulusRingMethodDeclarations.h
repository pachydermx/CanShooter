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

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3_28;
// Mono.Math.BigInteger
struct BigInteger_t3_29;

#include "codegen/il2cpp-codegen.h"

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
extern "C" void ModulusRing__ctor_m3_86 (ModulusRing_t3_28 * __this, BigInteger_t3_29 * ___modulus, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
extern "C" void ModulusRing_BarrettReduction_m3_87 (ModulusRing_t3_28 * __this, BigInteger_t3_29 * ___x, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3_29 * ModulusRing_Multiply_m3_88 (ModulusRing_t3_28 * __this, BigInteger_t3_29 * ___a, BigInteger_t3_29 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3_29 * ModulusRing_Difference_m3_89 (ModulusRing_t3_28 * __this, BigInteger_t3_29 * ___a, BigInteger_t3_29 * ___b, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
extern "C" BigInteger_t3_29 * ModulusRing_Pow_m3_90 (ModulusRing_t3_28 * __this, BigInteger_t3_29 * ___a, BigInteger_t3_29 * ___k, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
extern "C" BigInteger_t3_29 * ModulusRing_Pow_m3_91 (ModulusRing_t3_28 * __this, uint32_t ___b, BigInteger_t3_29 * ___exp, const MethodInfo* method) IL2CPP_METHOD_ATTR;
