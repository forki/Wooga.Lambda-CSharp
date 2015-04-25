#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>
struct Builder_t5583;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.ImmutableArray`1<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_126.h"

// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::.ctor(System.Int32)
 void Builder__ctor_m22566_gshared (Builder_t5583 * __this, int32_t ___capacity, MethodInfo* method);
#define Builder__ctor_m22566(__this, ___capacity, method) (void)Builder__ctor_m22566_gshared((Builder_t5583 *)__this, (int32_t)___capacity, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::.ctor()
 void Builder__ctor_m22567_gshared (Builder_t5583 * __this, MethodInfo* method);
#define Builder__ctor_m22567(__this, method) (void)Builder__ctor_m22567_gshared((Builder_t5583 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::get_Capacity()
 int32_t Builder_get_Capacity_m22568_gshared (Builder_t5583 * __this, MethodInfo* method);
#define Builder_get_Capacity_m22568(__this, method) (int32_t)Builder_get_Capacity_m22568_gshared((Builder_t5583 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::set_Capacity(System.Int32)
 void Builder_set_Capacity_m22569_gshared (Builder_t5583 * __this, int32_t ___value, MethodInfo* method);
#define Builder_set_Capacity_m22569(__this, ___value, method) (void)Builder_set_Capacity_m22569_gshared((Builder_t5583 *)__this, (int32_t)___value, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::get_Count()
 int32_t Builder_get_Count_m22570_gshared (Builder_t5583 * __this, MethodInfo* method);
#define Builder_get_Count_m22570(__this, method) (int32_t)Builder_get_Count_m22570_gshared((Builder_t5583 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::set_Count(System.Int32)
 void Builder_set_Count_m22571_gshared (Builder_t5583 * __this, int32_t ___value, MethodInfo* method);
#define Builder_set_Count_m22571(__this, ___value, method) (void)Builder_set_Count_m22571_gshared((Builder_t5583 *)__this, (int32_t)___value, method)
// T System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::get_Item(System.Int32)
 Object_t * Builder_get_Item_m22572_gshared (Builder_t5583 * __this, int32_t ___index, MethodInfo* method);
#define Builder_get_Item_m22572(__this, ___index, method) (Object_t *)Builder_get_Item_m22572_gshared((Builder_t5583 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::set_Item(System.Int32,T)
 void Builder_set_Item_m22573_gshared (Builder_t5583 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define Builder_set_Item_m22573(__this, ___index, ___value, method) (void)Builder_set_Item_m22573_gshared((Builder_t5583 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22574_gshared (Builder_t5583 * __this, MethodInfo* method);
#define Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22574(__this, method) (bool)Builder_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22574_gshared((Builder_t5583 *)__this, method)
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::ToImmutable()
 ImmutableArray_1_t5584  Builder_ToImmutable_m22575 (Builder_t5583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::MoveToImmutable()
 ImmutableArray_1_t5584  Builder_MoveToImmutable_m22576 (Builder_t5583 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::Clear()
 void Builder_Clear_m22577_gshared (Builder_t5583 * __this, MethodInfo* method);
#define Builder_Clear_m22577(__this, method) (void)Builder_Clear_m22577_gshared((Builder_t5583 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::Insert(System.Int32,T)
 void Builder_Insert_m22578_gshared (Builder_t5583 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define Builder_Insert_m22578(__this, ___index, ___item, method) (void)Builder_Insert_m22578_gshared((Builder_t5583 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::Add(T)
 void Builder_Add_m22579_gshared (Builder_t5583 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_Add_m22579(__this, ___item, method) (void)Builder_Add_m22579_gshared((Builder_t5583 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 void Builder_AddRange_m22580_gshared (Builder_t5583 * __this, Object_t* ___items, MethodInfo* method);
#define Builder_AddRange_m22580(__this, ___items, method) (void)Builder_AddRange_m22580_gshared((Builder_t5583 *)__this, (Object_t*)___items, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::AddRange(T[])
 void Builder_AddRange_m22581_gshared (Builder_t5583 * __this, ObjectU5BU5D_t126* ___items, MethodInfo* method);
#define Builder_AddRange_m22581(__this, ___items, method) (void)Builder_AddRange_m22581_gshared((Builder_t5583 *)__this, (ObjectU5BU5D_t126*)___items, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::AddRange(T[],System.Int32)
 void Builder_AddRange_m22582_gshared (Builder_t5583 * __this, ObjectU5BU5D_t126* ___items, int32_t ___length, MethodInfo* method);
#define Builder_AddRange_m22582(__this, ___items, ___length, method) (void)Builder_AddRange_m22582_gshared((Builder_t5583 *)__this, (ObjectU5BU5D_t126*)___items, (int32_t)___length, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::AddRange(System.Collections.Immutable.ImmutableArray`1<T>)
 void Builder_AddRange_m22583 (Builder_t5583 * __this, ImmutableArray_1_t5584  ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::AddRange(System.Collections.Immutable.ImmutableArray`1<T>,System.Int32)
 void Builder_AddRange_m22584 (Builder_t5583 * __this, ImmutableArray_1_t5584  ___items, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::AddRange(System.Collections.Immutable.ImmutableArray`1/Builder<T>)
 void Builder_AddRange_m22585_gshared (Builder_t5583 * __this, Builder_t5583 * ___items, MethodInfo* method);
#define Builder_AddRange_m22585(__this, ___items, method) (void)Builder_AddRange_m22585_gshared((Builder_t5583 *)__this, (Builder_t5583 *)___items, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::Remove(T)
 bool Builder_Remove_m22586_gshared (Builder_t5583 * __this, Object_t * ___element, MethodInfo* method);
#define Builder_Remove_m22586(__this, ___element, method) (bool)Builder_Remove_m22586_gshared((Builder_t5583 *)__this, (Object_t *)___element, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::RemoveAt(System.Int32)
 void Builder_RemoveAt_m22587_gshared (Builder_t5583 * __this, int32_t ___index, MethodInfo* method);
#define Builder_RemoveAt_m22587(__this, ___index, method) (void)Builder_RemoveAt_m22587_gshared((Builder_t5583 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::Contains(T)
 bool Builder_Contains_m22588_gshared (Builder_t5583 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_Contains_m22588(__this, ___item, method) (bool)Builder_Contains_m22588_gshared((Builder_t5583 *)__this, (Object_t *)___item, method)
// T[] System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::ToArray()
 ObjectU5BU5D_t126* Builder_ToArray_m22589_gshared (Builder_t5583 * __this, MethodInfo* method);
#define Builder_ToArray_m22589(__this, method) (ObjectU5BU5D_t126*)Builder_ToArray_m22589_gshared((Builder_t5583 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::CopyTo(T[],System.Int32)
 void Builder_CopyTo_m22590_gshared (Builder_t5583 * __this, ObjectU5BU5D_t126* ___array, int32_t ___index, MethodInfo* method);
#define Builder_CopyTo_m22590(__this, ___array, ___index, method) (void)Builder_CopyTo_m22590_gshared((Builder_t5583 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___index, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::EnsureCapacity(System.Int32)
 void Builder_EnsureCapacity_m22591_gshared (Builder_t5583 * __this, int32_t ___capacity, MethodInfo* method);
#define Builder_EnsureCapacity_m22591(__this, ___capacity, method) (void)Builder_EnsureCapacity_m22591_gshared((Builder_t5583 *)__this, (int32_t)___capacity, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::IndexOf(T)
 int32_t Builder_IndexOf_m22592_gshared (Builder_t5583 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_IndexOf_m22592(__this, ___item, method) (int32_t)Builder_IndexOf_m22592_gshared((Builder_t5583 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::IndexOf(T,System.Int32)
 int32_t Builder_IndexOf_m22593_gshared (Builder_t5583 * __this, Object_t * ___item, int32_t ___startIndex, MethodInfo* method);
#define Builder_IndexOf_m22593(__this, ___item, ___startIndex, method) (int32_t)Builder_IndexOf_m22593_gshared((Builder_t5583 *)__this, (Object_t *)___item, (int32_t)___startIndex, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::IndexOf(T,System.Int32,System.Int32)
 int32_t Builder_IndexOf_m22594_gshared (Builder_t5583 * __this, Object_t * ___item, int32_t ___startIndex, int32_t ___count, MethodInfo* method);
#define Builder_IndexOf_m22594(__this, ___item, ___startIndex, ___count, method) (int32_t)Builder_IndexOf_m22594_gshared((Builder_t5583 *)__this, (Object_t *)___item, (int32_t)___startIndex, (int32_t)___count, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::IndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Builder_IndexOf_m22595_gshared (Builder_t5583 * __this, Object_t * ___item, int32_t ___startIndex, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method);
#define Builder_IndexOf_m22595(__this, ___item, ___startIndex, ___count, ___equalityComparer, method) (int32_t)Builder_IndexOf_m22595_gshared((Builder_t5583 *)__this, (Object_t *)___item, (int32_t)___startIndex, (int32_t)___count, (Object_t*)___equalityComparer, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::LastIndexOf(T)
 int32_t Builder_LastIndexOf_m22596_gshared (Builder_t5583 * __this, Object_t * ___item, MethodInfo* method);
#define Builder_LastIndexOf_m22596(__this, ___item, method) (int32_t)Builder_LastIndexOf_m22596_gshared((Builder_t5583 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::LastIndexOf(T,System.Int32)
 int32_t Builder_LastIndexOf_m22597_gshared (Builder_t5583 * __this, Object_t * ___item, int32_t ___startIndex, MethodInfo* method);
#define Builder_LastIndexOf_m22597(__this, ___item, ___startIndex, method) (int32_t)Builder_LastIndexOf_m22597_gshared((Builder_t5583 *)__this, (Object_t *)___item, (int32_t)___startIndex, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::LastIndexOf(T,System.Int32,System.Int32)
 int32_t Builder_LastIndexOf_m22598_gshared (Builder_t5583 * __this, Object_t * ___item, int32_t ___startIndex, int32_t ___count, MethodInfo* method);
#define Builder_LastIndexOf_m22598(__this, ___item, ___startIndex, ___count, method) (int32_t)Builder_LastIndexOf_m22598_gshared((Builder_t5583 *)__this, (Object_t *)___item, (int32_t)___startIndex, (int32_t)___count, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::LastIndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t Builder_LastIndexOf_m22599_gshared (Builder_t5583 * __this, Object_t * ___item, int32_t ___startIndex, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method);
#define Builder_LastIndexOf_m22599(__this, ___item, ___startIndex, ___count, ___equalityComparer, method) (int32_t)Builder_LastIndexOf_m22599_gshared((Builder_t5583 *)__this, (Object_t *)___item, (int32_t)___startIndex, (int32_t)___count, (Object_t*)___equalityComparer, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::Reverse()
 void Builder_Reverse_m22600_gshared (Builder_t5583 * __this, MethodInfo* method);
#define Builder_Reverse_m22600(__this, method) (void)Builder_Reverse_m22600_gshared((Builder_t5583 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::Sort()
 void Builder_Sort_m22601_gshared (Builder_t5583 * __this, MethodInfo* method);
#define Builder_Sort_m22601(__this, method) (void)Builder_Sort_m22601_gshared((Builder_t5583 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
 void Builder_Sort_m22602_gshared (Builder_t5583 * __this, Object_t* ___comparer, MethodInfo* method);
#define Builder_Sort_m22602(__this, ___comparer, method) (void)Builder_Sort_m22602_gshared((Builder_t5583 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
 void Builder_Sort_m22603_gshared (Builder_t5583 * __this, int32_t ___index, int32_t ___count, Object_t* ___comparer, MethodInfo* method);
#define Builder_Sort_m22603(__this, ___index, ___count, ___comparer, method) (void)Builder_Sort_m22603_gshared((Builder_t5583 *)__this, (int32_t)___index, (int32_t)___count, (Object_t*)___comparer, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::GetEnumerator()
 Object_t* Builder_GetEnumerator_m22604_gshared (Builder_t5583 * __this, MethodInfo* method);
#define Builder_GetEnumerator_m22604(__this, method) (Object_t*)Builder_GetEnumerator_m22604_gshared((Builder_t5583 *)__this, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22605_gshared (Builder_t5583 * __this, MethodInfo* method);
#define Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22605(__this, method) (Object_t*)Builder_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22605_gshared((Builder_t5583 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Builder_System_Collections_IEnumerable_GetEnumerator_m22606_gshared (Builder_t5583 * __this, MethodInfo* method);
#define Builder_System_Collections_IEnumerable_GetEnumerator_m22606(__this, method) (Object_t *)Builder_System_Collections_IEnumerable_GetEnumerator_m22606_gshared((Builder_t5583 *)__this, method)
