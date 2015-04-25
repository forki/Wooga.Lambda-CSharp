#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>
struct Enumerator_t5586;
// System.Object
struct Object_t;
// System.Object[]
struct ObjectU5BU5D_t126;

// System.Void System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>::.ctor(T[])
 void Enumerator__ctor_m23029_gshared (Enumerator_t5586 * __this, ObjectU5BU5D_t126* ___array, MethodInfo* method);
#define Enumerator__ctor_m23029(__this, ___array, method) (void)Enumerator__ctor_m23029_gshared((Enumerator_t5586 *)__this, (ObjectU5BU5D_t126*)___array, method)
// T System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>::get_Current()
 Object_t * Enumerator_get_Current_m23030_gshared (Enumerator_t5586 * __this, MethodInfo* method);
#define Enumerator_get_Current_m23030(__this, method) (Object_t *)Enumerator_get_Current_m23030_gshared((Enumerator_t5586 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>::MoveNext()
 bool Enumerator_MoveNext_m23031_gshared (Enumerator_t5586 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m23031(__this, method) (bool)Enumerator_MoveNext_m23031_gshared((Enumerator_t5586 *)__this, method)
