#pragma once

// Mono.Math.BigInteger/ModulusRing
struct ModulusRing_t2100;
// Mono.Math.BigInteger
struct BigInteger_t2095;

// System.Void Mono.Math.BigInteger/ModulusRing::.ctor(Mono.Math.BigInteger)
 void ModulusRing__ctor_m8508 (ModulusRing_t2100 * __this, BigInteger_t2095 * ___modulus, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Math.BigInteger/ModulusRing::BarrettReduction(Mono.Math.BigInteger)
 void ModulusRing_BarrettReduction_m8509 (ModulusRing_t2100 * __this, BigInteger_t2095 * ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Multiply(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t2095 * ModulusRing_Multiply_m8510 (ModulusRing_t2100 * __this, BigInteger_t2095 * ___a, BigInteger_t2095 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Difference(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t2095 * ModulusRing_Difference_m8511 (ModulusRing_t2100 * __this, BigInteger_t2095 * ___a, BigInteger_t2095 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(Mono.Math.BigInteger,Mono.Math.BigInteger)
 BigInteger_t2095 * ModulusRing_Pow_m8512 (ModulusRing_t2100 * __this, BigInteger_t2095 * ___a, BigInteger_t2095 * ___k, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.BigInteger/ModulusRing::Pow(System.UInt32,Mono.Math.BigInteger)
 BigInteger_t2095 * ModulusRing_Pow_m8513 (ModulusRing_t2100 * __this, uint32_t ___b, BigInteger_t2095 * ___exp, MethodInfo* method) IL2CPP_METHOD_ATTR;
