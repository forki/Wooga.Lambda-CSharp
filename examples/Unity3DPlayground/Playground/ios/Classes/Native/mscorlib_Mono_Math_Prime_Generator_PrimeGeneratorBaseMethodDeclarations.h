#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Mono.Math.Prime.Generator.PrimeGeneratorBase
struct PrimeGeneratorBase_t3453;
// Mono.Math.Prime.PrimalityTest
struct PrimalityTest_t3454;
// Mono.Math.BigInteger
struct BigInteger_t3455;
// Mono.Math.Prime.ConfidenceFactor
#include "mscorlib_Mono_Math_Prime_ConfidenceFactor.h"

// System.Void Mono.Math.Prime.Generator.PrimeGeneratorBase::.ctor()
 void PrimeGeneratorBase__ctor_m9891 (PrimeGeneratorBase_t3453 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.ConfidenceFactor Mono.Math.Prime.Generator.PrimeGeneratorBase::get_Confidence()
 int32_t PrimeGeneratorBase_get_Confidence_m9892 (PrimeGeneratorBase_t3453 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.Prime.PrimalityTest Mono.Math.Prime.Generator.PrimeGeneratorBase::get_PrimalityTest()
 PrimalityTest_t3454 * PrimeGeneratorBase_get_PrimalityTest_m9893 (PrimeGeneratorBase_t3453 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Mono.Math.Prime.Generator.PrimeGeneratorBase::get_TrialDivisionBounds()
 int32_t PrimeGeneratorBase_get_TrialDivisionBounds_m9894 (PrimeGeneratorBase_t3453 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Mono.Math.BigInteger Mono.Math.Prime.Generator.PrimeGeneratorBase::GenerateNewPrime(System.Int32)
