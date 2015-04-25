#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableHashSet`1/MutationInput<System.Object>
struct MutationInput_t5762;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>
struct SortedInt32KeyNode_1_t5759;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Immutable.ImmutableHashSet`1<System.Object>
struct ImmutableHashSet_1_t5757;

// System.Void System.Collections.Immutable.ImmutableHashSet`1/MutationInput<System.Object>::.ctor(System.Collections.Immutable.ImmutableHashSet`1<T>)
 void MutationInput__ctor_m24604_gshared (MutationInput_t5762 * __this, ImmutableHashSet_1_t5757 * ___set, MethodInfo* method);
#define MutationInput__ctor_m24604(__this, ___set, method) (void)MutationInput__ctor_m24604_gshared((MutationInput_t5762 *)__this, (ImmutableHashSet_1_t5757 *)___set, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1/MutationInput<System.Object>::.ctor(System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>>,System.Collections.Generic.IEqualityComparer`1<T>,System.Int32)
 void MutationInput__ctor_m24605_gshared (MutationInput_t5762 * __this, SortedInt32KeyNode_1_t5759 * ___root, Object_t* ___equalityComparer, int32_t ___count, MethodInfo* method);
#define MutationInput__ctor_m24605(__this, ___root, ___equalityComparer, ___count, method) (void)MutationInput__ctor_m24605_gshared((MutationInput_t5762 *)__this, (SortedInt32KeyNode_1_t5759 *)___root, (Object_t*)___equalityComparer, (int32_t)___count, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>> System.Collections.Immutable.ImmutableHashSet`1/MutationInput<System.Object>::get_Root()
 SortedInt32KeyNode_1_t5759 * MutationInput_get_Root_m24606_gshared (MutationInput_t5762 * __this, MethodInfo* method);
#define MutationInput_get_Root_m24606(__this, method) (SortedInt32KeyNode_1_t5759 *)MutationInput_get_Root_m24606_gshared((MutationInput_t5762 *)__this, method)
// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Immutable.ImmutableHashSet`1/MutationInput<System.Object>::get_EqualityComparer()
 Object_t* MutationInput_get_EqualityComparer_m24607_gshared (MutationInput_t5762 * __this, MethodInfo* method);
#define MutationInput_get_EqualityComparer_m24607(__this, method) (Object_t*)MutationInput_get_EqualityComparer_m24607_gshared((MutationInput_t5762 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableHashSet`1/MutationInput<System.Object>::get_Count()
 int32_t MutationInput_get_Count_m24608_gshared (MutationInput_t5762 * __this, MethodInfo* method);
#define MutationInput_get_Count_m24608(__this, method) (int32_t)MutationInput_get_Count_m24608_gshared((MutationInput_t5762 *)__this, method)
