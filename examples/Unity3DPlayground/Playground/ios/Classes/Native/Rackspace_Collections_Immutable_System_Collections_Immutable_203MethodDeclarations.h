#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableStack`1/Enumerator<System.Object>
struct Enumerator_t5804;
// System.Object
struct Object_t;
// System.Collections.Immutable.ImmutableStack`1<System.Object>
struct ImmutableStack_1_t5802;

// System.Void System.Collections.Immutable.ImmutableStack`1/Enumerator<System.Object>::.ctor(System.Collections.Immutable.ImmutableStack`1<T>)
 void Enumerator__ctor_m24688_gshared (Enumerator_t5804 * __this, ImmutableStack_1_t5802 * ___stack, MethodInfo* method);
#define Enumerator__ctor_m24688(__this, ___stack, method) (void)Enumerator__ctor_m24688_gshared((Enumerator_t5804 *)__this, (ImmutableStack_1_t5802 *)___stack, method)
// T System.Collections.Immutable.ImmutableStack`1/Enumerator<System.Object>::get_Current()
 Object_t * Enumerator_get_Current_m24689_gshared (Enumerator_t5804 * __this, MethodInfo* method);
#define Enumerator_get_Current_m24689(__this, method) (Object_t *)Enumerator_get_Current_m24689_gshared((Enumerator_t5804 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableStack`1/Enumerator<System.Object>::MoveNext()
 bool Enumerator_MoveNext_m24690_gshared (Enumerator_t5804 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m24690(__this, method) (bool)Enumerator_MoveNext_m24690_gshared((Enumerator_t5804 *)__this, method)
