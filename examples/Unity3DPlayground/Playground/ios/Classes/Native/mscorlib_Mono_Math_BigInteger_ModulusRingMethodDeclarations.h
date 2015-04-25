#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3460;
// Mono.Math.BigInteger
struct BigInteger_t3455;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
 void ModulusRing__ctor_m9904 (ModulusRing_t3460 * __this, BigInteger_t3455 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
 void ModulusRing_BarrettReduction_m9905 (ModulusRing_t3460 * __this, BigInteger_t3455 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3455 * ModulusRing_Multiply_m9906 (ModulusRing_t3460 * __this, BigInteger_t3455 * ___a, BigInteger_t3455 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3455 * ModulusRing_Difference_m9907 (ModulusRing_t3460 * __this, BigInteger_t3455 * ___a, BigInteger_t3455 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3455 * ModulusRing_Pow_m9908 (ModulusRing_t3460 * __this, BigInteger_t3455 * ___a, BigInteger_t3455 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
 BigInteger_t3455 * ModulusRing_Pow_m9909 (ModulusRing_t3460 * __this, uint32_t ___b, BigInteger_t3455 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
