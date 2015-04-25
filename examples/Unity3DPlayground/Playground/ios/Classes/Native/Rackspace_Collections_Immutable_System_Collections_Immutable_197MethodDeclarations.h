#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>
struct Builder_t5761;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>
struct SortedInt32KeyNode_1_t5759;
// System.Collections.Immutable.ImmutableHashSet`1<System.Object>
struct ImmutableHashSet_1_t5757;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.ImmutableHashSet`1/MutationInput<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_182.h"
// System.Collections.Immutable.ImmutableHashSet`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_183.h"
// System.Collections.Immutable.ImmutableHashSet`1/MutationResult<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_184.h"

// System.Void System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::.ctor(System.Collections.Immutable.ImmutableHashSet`1<T>)
 void Builder__ctor_m24569_gshared (Builder_t5761 * __this, ImmutableHashSet_1_t5757 * ___set, MethodInfo* method);
#define Builder__ctor_m24569(__this, ___set, method) (void)Builder__ctor_m24569_gshared((Builder_t5761 *)__this, (ImmutableHashSet_1_t5757 *)___set, method)
// System.Int32 System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::get_Count()
 int32_t Builder_get_Count_m24570_gshared (Builder_t5761 * __this, MethodInfo* method);
#define Builder_get_Count_m24570(__this, method) (int32_t)Builder_get_Count_m24570_gshared((Builder_t5761 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24571_gshared (Builder_t5761 * __this, MethodInfo* method);
#define Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24571(__this, method) (bool)Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24571_gshared((Builder_t5761 *)__this, method)
// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::get_KeyComparer()
 Object_t* Builder_get_KeyComparer_m24572_gshared (Builder_t5761 * __this, MethodInfo* method);
#define Builder_get_KeyComparer_m24572(__this, method) (Object_t*)Builder_get_KeyComparer_m24572_gshared((Builder_t5761 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::set_KeyComparer(System.Collections.Generic.IEqualityComparer`1<T>)
 void Builder_set_KeyComparer_m24573_gshared (Builder_t5761 * __this, Object_t* ___value, MethodInfo* method);
#define Builder_set_KeyComparer_m24573(__this, ___value, method) (void)Builder_set_KeyComparer_m24573_gshared((Builder_t5761 *)__this, (Object_t*)___value, method)
// System.Int32 System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::get_Version()
 int32_t Builder_get_Version_m24574_gshared (Builder_t5761 * __this, MethodInfo* method);
#define Builder_get_Version_m24574(__this, method) (int32_t)Builder_get_Version_m24574_gshared((Builder_t5761 *)__this, method)
// System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T> System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::get_Origin()
 MutationInput_t5762  Builder_get_Origin_m24575 (Builder_t5761 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>> System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::get_Root()
 SortedInt32KeyNode_1_t5759 * Builder_get_Root_m24576_gshared (Builder_t5761 * __this, MethodInfo* method);
#define Builder_get_Root_m24576(__this, method) (SortedInt32KeyNode_1_t5759 *)Builder_get_Root_m24576_gshared((Builder_t5761 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::set_Root(System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>>)
 void Builder_set_Root_m24577_gshared (Builder_t5761 * __this, SortedInt32KeyNode_1_t5759 * ___value, MethodInfo* method);
#define Builder_set_Root_m24577(__this, ___value, method) (void)Builder_set_Root_m24577_gshared((Builder_t5761 *)__this, (SortedInt32KeyNode_1_t5759 *)___value, method)
// System.Collections.Immutable.ImmutableHashSet`1/Enumerator<T> System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::GetEnumerator()
 Enumerator_t5763  Builder_GetEnumerator_m24578 (Builder_t5761 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::ToImmutable()
 ImmutableHashSet_1_t5757 * Builder_ToImmutable_m24579_gshared (Builder_t5761 * __this, MethodInfo* method);
#define Builder_ToImmutable_m24579(__this, method) (ImmutableHashSet_1_t5757 *)Builder_ToImmutable_m24579_gshared((Builder_t5761 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::Add(T)
 bool Builder_Add_m24580_gshared (Builder_t5761 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_Add_m24580(__this, ___item, method) (bool)Builder_Add_m24580_gshared((Builder_t5761 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::Remove(T)
 bool Builder_Remove_m24581_gshared (Builder_t5761 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_Remove_m24581(__this, ___item, method) (bool)Builder_Remove_m24581_gshared((Builder_t5761 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::Contains(T)
 bool Builder_Contains_m24582_gshared (Builder_t5761 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_Contains_m24582(__this, ___item, method) (bool)Builder_Contains_m24582_gshared((Builder_t5761 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::Clear()
 void Builder_Clear_m24583_gshared (Builder_t5761 * __this, MethodInfo* method);
#define Builder_Clear_m24583(__this, method) (void)Builder_Clear_m24583_gshared((Builder_t5761 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
 void Builder_ExceptWith_m24584_gshared (Builder_t5761 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_ExceptWith_m24584(__this, ___other, method) (void)Builder_ExceptWith_m24584_gshared((Builder_t5761 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::IntersectWith(System.Collections.Generic.IEnumerable`1<T>)
 void Builder_IntersectWith_m24585_gshared (Builder_t5761 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_IntersectWith_m24585(__this, ___other, method) (void)Builder_IntersectWith_m24585_gshared((Builder_t5761 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::IsProperSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool Builder_IsProperSubsetOf_m24586_gshared (Builder_t5761 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_IsProperSubsetOf_m24586(__this, ___other, method) (bool)Builder_IsProperSubsetOf_m24586_gshared((Builder_t5761 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::IsProperSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool Builder_IsProperSupersetOf_m24587_gshared (Builder_t5761 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_IsProperSupersetOf_m24587(__this, ___other, method) (bool)Builder_IsProperSupersetOf_m24587_gshared((Builder_t5761 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::IsSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool Builder_IsSubsetOf_m24588_gshared (Builder_t5761 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_IsSubsetOf_m24588(__this, ___other, method) (bool)Builder_IsSubsetOf_m24588_gshared((Builder_t5761 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::IsSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool Builder_IsSupersetOf_m24589_gshared (Builder_t5761 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_IsSupersetOf_m24589(__this, ___other, method) (bool)Builder_IsSupersetOf_m24589_gshared((Builder_t5761 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::Overlaps(System.Collections.Generic.IEnumerable`1<T>)
 bool Builder_Overlaps_m24590_gshared (Builder_t5761 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_Overlaps_m24590(__this, ___other, method) (bool)Builder_Overlaps_m24590_gshared((Builder_t5761 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
 bool Builder_SetEquals_m24591_gshared (Builder_t5761 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_SetEquals_m24591(__this, ___other, method) (bool)Builder_SetEquals_m24591_gshared((Builder_t5761 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::SymmetricExceptWith(System.Collections.Generic.IEnumerable`1<T>)
 void Builder_SymmetricExceptWith_m24592_gshared (Builder_t5761 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_SymmetricExceptWith_m24592(__this, ___other, method) (void)Builder_SymmetricExceptWith_m24592_gshared((Builder_t5761 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
 void Builder_UnionWith_m24593_gshared (Builder_t5761 * __this, Object_t* ___other, MethodInfo* method);
#define Builder_UnionWith_m24593(__this, ___other, method) (void)Builder_UnionWith_m24593_gshared((Builder_t5761 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
 void Builder_System_Collections_Generic_ICollectionU3CTU3E_Add_m24594_gshared (Builder_t5761 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_System_Collections_Generic_ICollectionU3CTU3E_Add_m24594(__this, ___item, method) (void)Builder_System_Collections_Generic_ICollectionU3CTU3E_Add_m24594_gshared((Builder_t5761 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
 void Builder_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24595_gshared (Builder_t5761 * __this, ObjectU5BU5D_t126* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define Builder_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24595(__this, ___array, ___arrayIndex, method) (void)Builder_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24595_gshared((Builder_t5761 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24596_gshared (Builder_t5761 * __this, MethodInfo* method);
#define Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24596(__this, method) (Object_t*)Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24596_gshared((Builder_t5761 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Builder_System_Collections_IEnumerable_GetEnumerator_m24597_gshared (Builder_t5761 * __this, MethodInfo* method);
#define Builder_System_Collections_IEnumerable_GetEnumerator_m24597(__this, method) (Object_t *)Builder_System_Collections_IEnumerable_GetEnumerator_m24597_gshared((Builder_t5761 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>::Apply(System.Collections.Immutable.ImmutableHashSet`1/MutationResult<T>)
 void Builder_Apply_m24598 (Builder_t5761 * __this, MutationResult_t5764  ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
