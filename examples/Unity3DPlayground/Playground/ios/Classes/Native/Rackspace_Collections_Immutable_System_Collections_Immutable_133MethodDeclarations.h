#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t5636;
// System.Object
struct Object_t;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
struct SortedInt32KeyNode_1_t5629;
// System.Collections.Immutable.ImmutableDictionary`2/Builder<System.Object,System.Object>
struct Builder_t5632;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_1.h"

// System.Void System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>>,System.Collections.Immutable.ImmutableDictionary`2/Builder<TKey,TValue>)
 void Enumerator__ctor_m24334_gshared (Enumerator_t5636 * __this, SortedInt32KeyNode_1_t5629 * ___root, Builder_t5632 * ___builder, MethodInfo* method);
#define Enumerator__ctor_m24334(__this, ___root, ___builder, method) (void)Enumerator__ctor_m24334_gshared((Enumerator_t5636 *)__this, (SortedInt32KeyNode_1_t5629 *)___root, (Builder_t5632 *)___builder, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>::get_Current()
 KeyValuePair_2_t4473  Enumerator_get_Current_m24335 (Enumerator_t5636 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
 Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m24336_gshared (Enumerator_t5636 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m24336(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m24336_gshared((Enumerator_t5636 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
 bool Enumerator_MoveNext_m24337_gshared (Enumerator_t5636 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m24337(__this, method) (bool)Enumerator_MoveNext_m24337_gshared((Enumerator_t5636 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>::Reset()
 void Enumerator_Reset_m24338_gshared (Enumerator_t5636 * __this, MethodInfo* method);
#define Enumerator_Reset_m24338(__this, method) (void)Enumerator_Reset_m24338_gshared((Enumerator_t5636 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>::Dispose()
 void Enumerator_Dispose_m24339_gshared (Enumerator_t5636 * __this, MethodInfo* method);
#define Enumerator_Dispose_m24339(__this, method) (void)Enumerator_Dispose_m24339_gshared((Enumerator_t5636 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/Enumerator<System.Object,System.Object>::ThrowIfChanged()
 void Enumerator_ThrowIfChanged_m24340_gshared (Enumerator_t5636 * __this, MethodInfo* method);
#define Enumerator_ThrowIfChanged_m24340(__this, method) (void)Enumerator_ThrowIfChanged_m24340_gshared((Enumerator_t5636 *)__this, method)
