#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t3247;
// Mono.Math.BigInteger
struct BigInteger_t3246;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
 void ModulusRing__ctor_m7976 (ModulusRing_t3247 * __this, BigInteger_t3246 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
 void ModulusRing_BarrettReduction_m7977 (ModulusRing_t3247 * __this, BigInteger_t3246 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3246 * ModulusRing_Multiply_m7978 (ModulusRing_t3247 * __this, BigInteger_t3246 * ___a, BigInteger_t3246 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3246 * ModulusRing_Difference_m7979 (ModulusRing_t3247 * __this, BigInteger_t3246 * ___a, BigInteger_t3246 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t3246 * ModulusRing_Pow_m7980 (ModulusRing_t3247 * __this, BigInteger_t3246 * ___a, BigInteger_t3246 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
 BigInteger_t3246 * ModulusRing_Pow_m7981 (ModulusRing_t3247 * __this, uint32_t ___b, BigInteger_t3246 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
