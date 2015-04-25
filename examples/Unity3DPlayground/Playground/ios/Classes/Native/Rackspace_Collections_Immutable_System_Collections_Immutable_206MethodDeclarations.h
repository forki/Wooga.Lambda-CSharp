#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableQueue`1/Enumerator<System.Object>
struct Enumerator_t5808;
// System.Object
struct Object_t;
// System.Collections.Immutable.ImmutableQueue`1<System.Object>
struct ImmutableQueue_1_t5806;

// System.Void System.Collections.Immutable.ImmutableQueue`1/Enumerator<System.Object>::.ctor(System.Collections.Immutable.ImmutableQueue`1<T>)
 void Enumerator__ctor_m24714_gshared (Enumerator_t5808 * __this, ImmutableQueue_1_t5806 * ___queue, MethodInfo* method);
#define Enumerator__ctor_m24714(__this, ___queue, method) (void)Enumerator__ctor_m24714_gshared((Enumerator_t5808 *)__this, (ImmutableQueue_1_t5806 *)___queue, method)
// T System.Collections.Immutable.ImmutableQueue`1/Enumerator<System.Object>::get_Current()
 Object_t * Enumerator_get_Current_m24715_gshared (Enumerator_t5808 * __this, MethodInfo* method);
#define Enumerator_get_Current_m24715(__this, method) (Object_t *)Enumerator_get_Current_m24715_gshared((Enumerator_t5808 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableQueue`1/Enumerator<System.Object>::MoveNext()
 bool Enumerator_MoveNext_m24716_gshared (Enumerator_t5808 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m24716(__this, method) (bool)Enumerator_MoveNext_m24716_gshared((Enumerator_t5808 *)__this, method)
