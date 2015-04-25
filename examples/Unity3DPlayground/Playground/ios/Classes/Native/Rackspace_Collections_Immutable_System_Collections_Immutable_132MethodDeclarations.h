#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableDictionary`2/MutationInput<System.Object,System.Object>
struct MutationInput_t5635;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
struct SortedInt32KeyNode_1_t5629;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IEqualityComparer_1_t5640;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<System.Object,System.Object>>
struct IEqualityComparer_1_t5634;
// System.Collections.Immutable.ImmutableDictionary`2/Comparers<System.Object,System.Object>
struct Comparers_t5630;
// System.Collections.Immutable.ImmutableDictionary`2<System.Object,System.Object>
struct ImmutableDictionary_2_t5627;

// System.Void System.Collections.Immutable.ImmutableDictionary`2/MutationInput<System.Object,System.Object>::.ctor(System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>>,System.Collections.Immutable.ImmutableDictionary`2/Comparers<TKey,TValue>,System.Int32)
 void MutationInput__ctor_m24262_gshared (MutationInput_t5635 * __this, SortedInt32KeyNode_1_t5629 * ___root, Comparers_t5630 * ___comparers, int32_t ___count, MethodInfo* method);
#define MutationInput__ctor_m24262(__this, ___root, ___comparers, ___count, method) (void)MutationInput__ctor_m24262_gshared((MutationInput_t5635 *)__this, (SortedInt32KeyNode_1_t5629 *)___root, (Comparers_t5630 *)___comparers, (int32_t)___count, method)
// System.Void System.Collections.Immutable.ImmutableDictionary`2/MutationInput<System.Object,System.Object>::.ctor(System.Collections.Immutable.ImmutableDictionary`2<TKey,TValue>)
 void MutationInput__ctor_m24263_gshared (MutationInput_t5635 * __this, ImmutableDictionary_2_t5627 * ___map, MethodInfo* method);
#define MutationInput__ctor_m24263(__this, ___map, method) (void)MutationInput__ctor_m24263_gshared((MutationInput_t5635 *)__this, (ImmutableDictionary_2_t5627 *)___map, method)
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>> System.Collections.Immutable.ImmutableDictionary`2/MutationInput<System.Object,System.Object>::get_Root()
 SortedInt32KeyNode_1_t5629 * MutationInput_get_Root_m24264_gshared (MutationInput_t5635 * __this, MethodInfo* method);
#define MutationInput_get_Root_m24264(__this, method) (SortedInt32KeyNode_1_t5629 *)MutationInput_get_Root_m24264_gshared((MutationInput_t5635 *)__this, method)
// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Immutable.ImmutableDictionary`2/MutationInput<System.Object,System.Object>::get_KeyComparer()
 Object_t* MutationInput_get_KeyComparer_m24265_gshared (MutationInput_t5635 * __this, MethodInfo* method);
#define MutationInput_get_KeyComparer_m24265(__this, method) (Object_t*)MutationInput_get_KeyComparer_m24265_gshared((MutationInput_t5635 *)__this, method)
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.KeyValuePair`2<TKey,TValue>> System.Collections.Immutable.ImmutableDictionary`2/MutationInput<System.Object,System.Object>::get_KeyOnlyComparer()
 Object_t* MutationInput_get_KeyOnlyComparer_m24266_gshared (MutationInput_t5635 * __this, MethodInfo* method);
#define MutationInput_get_KeyOnlyComparer_m24266(__this, method) (Object_t*)MutationInput_get_KeyOnlyComparer_m24266_gshared((MutationInput_t5635 *)__this, method)
// System.Collections.Generic.IEqualityComparer`1<TValue> System.Collections.Immutable.ImmutableDictionary`2/MutationInput<System.Object,System.Object>::get_ValueComparer()
 Object_t* MutationInput_get_ValueComparer_m24267_gshared (MutationInput_t5635 * __this, MethodInfo* method);
#define MutationInput_get_ValueComparer_m24267(__this, method) (Object_t*)MutationInput_get_ValueComparer_m24267_gshared((MutationInput_t5635 *)__this, method)
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Immutable.ImmutableDictionary`2/HashBucket<TKey,TValue>> System.Collections.Immutable.ImmutableDictionary`2/MutationInput<System.Object,System.Object>::get_HashBucketComparer()
 Object_t* MutationInput_get_HashBucketComparer_m24268_gshared (MutationInput_t5635 * __this, MethodInfo* method);
#define MutationInput_get_HashBucketComparer_m24268(__this, method) (Object_t*)MutationInput_get_HashBucketComparer_m24268_gshared((MutationInput_t5635 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableDictionary`2/MutationInput<System.Object,System.Object>::get_Count()
 int32_t MutationInput_get_Count_m24269_gshared (MutationInput_t5635 * __this, MethodInfo* method);
#define MutationInput_get_Count_m24269(__this, method) (int32_t)MutationInput_get_Count_m24269_gshared((MutationInput_t5635 *)__this, method)
