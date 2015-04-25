#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Security.Policy.Evidence/EvidenceEnumerator
struct EvidenceEnumerator_t3848;
// System.Object
struct Object_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;

// System.Void System.Security.Policy.Evidence/EvidenceEnumerator::.ctor(System.Collections.IEnumerator,System.Collections.IEnumerator)
 void EvidenceEnumerator__ctor_m12366 (EvidenceEnumerator_t3848 * __this, Object_t * ___hostenum, Object_t * ___assemblyenum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Security.Policy.Evidence/EvidenceEnumerator::MoveNext()
 bool EvidenceEnumerator_MoveNext_m12367 (EvidenceEnumerator_t3848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Security.Policy.Evidence/EvidenceEnumerator::Reset()
 void EvidenceEnumerator_Reset_m12368 (EvidenceEnumerator_t3848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Security.Policy.Evidence/EvidenceEnumerator::get_Current()
 Object_t * EvidenceEnumerator_get_Current_m12369 (EvidenceEnumerator_t3848 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
