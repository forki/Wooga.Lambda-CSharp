#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableArray`1<System.Object>
struct ImmutableArray_1_t5584;
// System.Object
struct Object_t;
// System.Array
struct Array_t;
// System.String
struct String_t;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Predicate`1<System.Object>
struct Predicate_1_t4554;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Collections.Immutable.ImmutableArray`1/Builder<System.Object>
struct Builder_t5583;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.IImmutableList`1<System.Object>
struct IImmutableList_1_t5536;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t926;
// System.Collections.IComparer
struct IComparer_t925;
// System.Collections.Generic.ICollection`1<System.Int32>
struct ICollection_1_t968;
// System.Collections.Immutable.ImmutableArray`1<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_126.h"
// System.Nullable`1<System.Collections.Immutable.ImmutableArray`1<System.Object>>
#include "mscorlib_System_Nullable_1_gen_0.h"
// System.Collections.Immutable.ImmutableArray`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_127.h"

// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::.ctor(T[])
 void ImmutableArray_1__ctor_m22607_gshared (ImmutableArray_1_t5584 * __this, ObjectU5BU5D_t126* ___items, MethodInfo* method);
#define ImmutableArray_1__ctor_m22607(__this, ___items, method) (void)ImmutableArray_1__ctor_m22607_gshared((ImmutableArray_1_t5584 *)__this, (ObjectU5BU5D_t126*)___items, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::op_Equality(System.Collections.Immutable.ImmutableArray`1<T>,System.Collections.Immutable.ImmutableArray`1<T>)
 bool ImmutableArray_1_op_Equality_m22608 (Object_t * __this/* static, unused */, ImmutableArray_1_t5584  ___left, ImmutableArray_1_t5584  ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::op_Inequality(System.Collections.Immutable.ImmutableArray`1<T>,System.Collections.Immutable.ImmutableArray`1<T>)
 bool ImmutableArray_1_op_Inequality_m22609 (Object_t * __this/* static, unused */, ImmutableArray_1_t5584  ___left, ImmutableArray_1_t5584  ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::op_Equality(System.Nullable`1<System.Collections.Immutable.ImmutableArray`1<T>>,System.Nullable`1<System.Collections.Immutable.ImmutableArray`1<T>>)
 bool ImmutableArray_1_op_Equality_m22610 (Object_t * __this/* static, unused */, Nullable_1_t5585  ___left, Nullable_1_t5585  ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::op_Inequality(System.Nullable`1<System.Collections.Immutable.ImmutableArray`1<T>>,System.Nullable`1<System.Collections.Immutable.ImmutableArray`1<T>>)
 bool ImmutableArray_1_op_Inequality_m22611 (Object_t * __this/* static, unused */, Nullable_1_t5585  ___left, Nullable_1_t5585  ___right, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Immutable.ImmutableArray`1<System.Object>::get_Item(System.Int32)
 Object_t * ImmutableArray_1_get_Item_m22612_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, MethodInfo* method);
#define ImmutableArray_1_get_Item_m22612(__this, ___index, method) (Object_t *)ImmutableArray_1_get_Item_m22612_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, method)
// T System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
 Object_t * ImmutableArray_1_System_Collections_Generic_IListU3CTU3E_get_Item_m22613_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Generic_IListU3CTU3E_get_Item_m22613(__this, ___index, method) (Object_t *)ImmutableArray_1_System_Collections_Generic_IListU3CTU3E_get_Item_m22613_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
 void ImmutableArray_1_System_Collections_Generic_IListU3CTU3E_set_Item_m22614_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Generic_IListU3CTU3E_set_Item_m22614(__this, ___index, ___value, method) (void)ImmutableArray_1_System_Collections_Generic_IListU3CTU3E_set_Item_m22614_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22615_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22615(__this, method) (bool)ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22615_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::get_IsEmpty()
 bool ImmutableArray_1_get_IsEmpty_m22616_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_get_IsEmpty_m22616(__this, method) (bool)ImmutableArray_1_get_IsEmpty_m22616_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::get_Length()
 int32_t ImmutableArray_1_get_Length_m22617_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_get_Length_m22617(__this, method) (int32_t)ImmutableArray_1_get_Length_m22617_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Generic.ICollection<T>.get_Count()
 int32_t ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_get_Count_m22618_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_get_Count_m22618(__this, method) (int32_t)ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_get_Count_m22618_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Generic.IReadOnlyCollection<T>.get_Count()
 int32_t ImmutableArray_1_System_Collections_Generic_IReadOnlyCollectionU3CTU3E_get_Count_m22619_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Generic_IReadOnlyCollectionU3CTU3E_get_Count_m22619(__this, method) (int32_t)ImmutableArray_1_System_Collections_Generic_IReadOnlyCollectionU3CTU3E_get_Count_m22619_gshared((ImmutableArray_1_t5584 *)__this, method)
// T System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Generic.IReadOnlyList<T>.get_Item(System.Int32)
 Object_t * ImmutableArray_1_System_Collections_Generic_IReadOnlyListU3CTU3E_get_Item_m22620_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Generic_IReadOnlyListU3CTU3E_get_Item_m22620(__this, ___index, method) (Object_t *)ImmutableArray_1_System_Collections_Generic_IReadOnlyListU3CTU3E_get_Item_m22620_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::get_IsDefault()
 bool ImmutableArray_1_get_IsDefault_m22621_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_get_IsDefault_m22621(__this, method) (bool)ImmutableArray_1_get_IsDefault_m22621_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::get_IsDefaultOrEmpty()
 bool ImmutableArray_1_get_IsDefaultOrEmpty_m22622_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_get_IsDefaultOrEmpty_m22622(__this, method) (bool)ImmutableArray_1_get_IsDefaultOrEmpty_m22622_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Array System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableArray.get_Array()
 Array_t * ImmutableArray_1_System_Collections_Immutable_IImmutableArray_get_Array_m22623_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableArray_get_Array_m22623(__this, method) (Array_t *)ImmutableArray_1_System_Collections_Immutable_IImmutableArray_get_Array_m22623_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.String System.Collections.Immutable.ImmutableArray`1<System.Object>::get_DebuggerDisplay()
 String_t* ImmutableArray_1_get_DebuggerDisplay_m22624_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_get_DebuggerDisplay_m22624(__this, method) (String_t*)ImmutableArray_1_get_DebuggerDisplay_m22624_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::IndexOf(T)
 int32_t ImmutableArray_1_IndexOf_m22625_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableArray_1_IndexOf_m22625(__this, ___item, method) (int32_t)ImmutableArray_1_IndexOf_m22625_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::IndexOf(T,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t ImmutableArray_1_IndexOf_m22626_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___item, int32_t ___startIndex, Object_t* ___equalityComparer, MethodInfo* method);
#define ImmutableArray_1_IndexOf_m22626(__this, ___item, ___startIndex, ___equalityComparer, method) (int32_t)ImmutableArray_1_IndexOf_m22626_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___item, (int32_t)___startIndex, (Object_t*)___equalityComparer, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::IndexOf(T,System.Int32)
 int32_t ImmutableArray_1_IndexOf_m22627_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___item, int32_t ___startIndex, MethodInfo* method);
#define ImmutableArray_1_IndexOf_m22627(__this, ___item, ___startIndex, method) (int32_t)ImmutableArray_1_IndexOf_m22627_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___item, (int32_t)___startIndex, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::IndexOf(T,System.Int32,System.Int32)
 int32_t ImmutableArray_1_IndexOf_m22628_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___item, int32_t ___startIndex, int32_t ___count, MethodInfo* method);
#define ImmutableArray_1_IndexOf_m22628(__this, ___item, ___startIndex, ___count, method) (int32_t)ImmutableArray_1_IndexOf_m22628_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___item, (int32_t)___startIndex, (int32_t)___count, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::IndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t ImmutableArray_1_IndexOf_m22629_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___item, int32_t ___startIndex, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method);
#define ImmutableArray_1_IndexOf_m22629(__this, ___item, ___startIndex, ___count, ___equalityComparer, method) (int32_t)ImmutableArray_1_IndexOf_m22629_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___item, (int32_t)___startIndex, (int32_t)___count, (Object_t*)___equalityComparer, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::LastIndexOf(T)
 int32_t ImmutableArray_1_LastIndexOf_m22630_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableArray_1_LastIndexOf_m22630(__this, ___item, method) (int32_t)ImmutableArray_1_LastIndexOf_m22630_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::LastIndexOf(T,System.Int32)
 int32_t ImmutableArray_1_LastIndexOf_m22631_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___item, int32_t ___startIndex, MethodInfo* method);
#define ImmutableArray_1_LastIndexOf_m22631(__this, ___item, ___startIndex, method) (int32_t)ImmutableArray_1_LastIndexOf_m22631_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___item, (int32_t)___startIndex, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::LastIndexOf(T,System.Int32,System.Int32)
 int32_t ImmutableArray_1_LastIndexOf_m22632_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___item, int32_t ___startIndex, int32_t ___count, MethodInfo* method);
#define ImmutableArray_1_LastIndexOf_m22632(__this, ___item, ___startIndex, ___count, method) (int32_t)ImmutableArray_1_LastIndexOf_m22632_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___item, (int32_t)___startIndex, (int32_t)___count, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::LastIndexOf(T,System.Int32,System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 int32_t ImmutableArray_1_LastIndexOf_m22633_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___item, int32_t ___startIndex, int32_t ___count, Object_t* ___equalityComparer, MethodInfo* method);
#define ImmutableArray_1_LastIndexOf_m22633(__this, ___item, ___startIndex, ___count, ___equalityComparer, method) (int32_t)ImmutableArray_1_LastIndexOf_m22633_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___item, (int32_t)___startIndex, (int32_t)___count, (Object_t*)___equalityComparer, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::Contains(T)
 bool ImmutableArray_1_Contains_m22634_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableArray_1_Contains_m22634(__this, ___item, method) (bool)ImmutableArray_1_Contains_m22634_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::CopyTo(T[])
 void ImmutableArray_1_CopyTo_m22635_gshared (ImmutableArray_1_t5584 * __this, ObjectU5BU5D_t126* ___destination, MethodInfo* method);
#define ImmutableArray_1_CopyTo_m22635(__this, ___destination, method) (void)ImmutableArray_1_CopyTo_m22635_gshared((ImmutableArray_1_t5584 *)__this, (ObjectU5BU5D_t126*)___destination, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::CopyTo(T[],System.Int32)
 void ImmutableArray_1_CopyTo_m22636_gshared (ImmutableArray_1_t5584 * __this, ObjectU5BU5D_t126* ___destination, int32_t ___destinationIndex, MethodInfo* method);
#define ImmutableArray_1_CopyTo_m22636(__this, ___destination, ___destinationIndex, method) (void)ImmutableArray_1_CopyTo_m22636_gshared((ImmutableArray_1_t5584 *)__this, (ObjectU5BU5D_t126*)___destination, (int32_t)___destinationIndex, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::CopyTo(System.Int32,T[],System.Int32,System.Int32)
 void ImmutableArray_1_CopyTo_m22637_gshared (ImmutableArray_1_t5584 * __this, int32_t ___sourceIndex, ObjectU5BU5D_t126* ___destination, int32_t ___destinationIndex, int32_t ___length, MethodInfo* method);
#define ImmutableArray_1_CopyTo_m22637(__this, ___sourceIndex, ___destination, ___destinationIndex, ___length, method) (void)ImmutableArray_1_CopyTo_m22637_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___sourceIndex, (ObjectU5BU5D_t126*)___destination, (int32_t)___destinationIndex, (int32_t)___length, method)
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::Insert(System.Int32,T)
 ImmutableArray_1_t5584  ImmutableArray_1_Insert_m22638 (ImmutableArray_1_t5584 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_InsertRange_m22639 (ImmutableArray_1_t5584 * __this, int32_t ___index, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::InsertRange(System.Int32,System.Collections.Immutable.ImmutableArray`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_InsertRange_m22640 (ImmutableArray_1_t5584 * __this, int32_t ___index, ImmutableArray_1_t5584  ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::Add(T)
 ImmutableArray_1_t5584  ImmutableArray_1_Add_m22641 (ImmutableArray_1_t5584 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_AddRange_m22642 (ImmutableArray_1_t5584 * __this, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::AddRange(System.Collections.Immutable.ImmutableArray`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_AddRange_m22643 (ImmutableArray_1_t5584 * __this, ImmutableArray_1_t5584  ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::SetItem(System.Int32,T)
 ImmutableArray_1_t5584  ImmutableArray_1_SetItem_m22644 (ImmutableArray_1_t5584 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::Replace(T,T)
 ImmutableArray_1_t5584  ImmutableArray_1_Replace_m22645 (ImmutableArray_1_t5584 * __this, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::Replace(T,T,System.Collections.Generic.IEqualityComparer`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_Replace_m22646 (ImmutableArray_1_t5584 * __this, Object_t * ___oldValue, Object_t * ___newValue, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::Remove(T)
 ImmutableArray_1_t5584  ImmutableArray_1_Remove_m22647 (ImmutableArray_1_t5584 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::Remove(T,System.Collections.Generic.IEqualityComparer`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_Remove_m22648 (ImmutableArray_1_t5584 * __this, Object_t * ___item, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::RemoveAt(System.Int32)
 ImmutableArray_1_t5584  ImmutableArray_1_RemoveAt_m22649 (ImmutableArray_1_t5584 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::RemoveRange(System.Int32,System.Int32)
 ImmutableArray_1_t5584  ImmutableArray_1_RemoveRange_m22650 (ImmutableArray_1_t5584 * __this, int32_t ___index, int32_t ___length, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::RemoveRange(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_RemoveRange_m22651 (ImmutableArray_1_t5584 * __this, Object_t* ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::RemoveRange(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_RemoveRange_m22652 (ImmutableArray_1_t5584 * __this, Object_t* ___items, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::RemoveRange(System.Collections.Immutable.ImmutableArray`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_RemoveRange_m22653 (ImmutableArray_1_t5584 * __this, ImmutableArray_1_t5584  ___items, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::RemoveRange(System.Collections.Immutable.ImmutableArray`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_RemoveRange_m22654 (ImmutableArray_1_t5584 * __this, ImmutableArray_1_t5584  ___items, Object_t* ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::RemoveAll(System.Predicate`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_RemoveAll_m22655 (ImmutableArray_1_t5584 * __this, Predicate_1_t4554 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::Clear()
 ImmutableArray_1_t5584  ImmutableArray_1_Clear_m22656 (ImmutableArray_1_t5584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::Sort()
 ImmutableArray_1_t5584  ImmutableArray_1_Sort_m22657 (ImmutableArray_1_t5584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::Sort(System.Collections.Generic.IComparer`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_Sort_m22658 (ImmutableArray_1_t5584 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::Sort(System.Int32,System.Int32,System.Collections.Generic.IComparer`1<T>)
 ImmutableArray_1_t5584  ImmutableArray_1_Sort_m22659 (ImmutableArray_1_t5584 * __this, int32_t ___index, int32_t ___count, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableArray`1/Builder<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::ToBuilder()
 Builder_t5583 * ImmutableArray_1_ToBuilder_m22660_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_ToBuilder_m22660(__this, method) (Builder_t5583 *)ImmutableArray_1_ToBuilder_m22660_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Collections.Immutable.ImmutableArray`1/Enumerator<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::GetEnumerator()
 Enumerator_t5586  ImmutableArray_1_GetEnumerator_m22661 (ImmutableArray_1_t5584 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::GetHashCode()
 int32_t ImmutableArray_1_GetHashCode_m22662_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_GetHashCode_m22662(__this, method) (int32_t)ImmutableArray_1_GetHashCode_m22662_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::Equals(System.Object)
 bool ImmutableArray_1_Equals_m22663_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___obj, MethodInfo* method);
#define ImmutableArray_1_Equals_m22663(__this, ___obj, method) (bool)ImmutableArray_1_Equals_m22663_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___obj, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::Equals(System.Collections.Immutable.ImmutableArray`1<T>)
 bool ImmutableArray_1_Equals_m22664 (ImmutableArray_1_t5584 * __this, ImmutableArray_1_t5584  ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
 void ImmutableArray_1_System_Collections_Generic_IListU3CTU3E_Insert_m22665_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Generic_IListU3CTU3E_Insert_m22665(__this, ___index, ___item, method) (void)ImmutableArray_1_System_Collections_Generic_IListU3CTU3E_Insert_m22665_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
 void ImmutableArray_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m22666_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m22666(__this, ___index, method) (void)ImmutableArray_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m22666_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
 void ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m22667_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m22667(__this, ___item, method) (void)ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m22667_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
 void ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m22668_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m22668(__this, method) (void)ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m22668_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m22669_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m22669(__this, ___item, method) (bool)ImmutableArray_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m22669_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* ImmutableArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22670_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22670(__this, method) (Object_t*)ImmutableArray_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22670_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ImmutableArray_1_System_Collections_IEnumerable_GetEnumerator_m22671_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IEnumerable_GetEnumerator_m22671(__this, method) (Object_t *)ImmutableArray_1_System_Collections_IEnumerable_GetEnumerator_m22671_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableList<T>.Clear()
 Object_t* ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Clear_m22672_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Clear_m22672(__this, method) (Object_t*)ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Clear_m22672_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableList<T>.Add(T)
 Object_t* ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Add_m22673_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Add_m22673(__this, ___value, method) (Object_t*)ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Add_m22673_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___value, method)
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableList<T>.AddRange(System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_AddRange_m22674_gshared (ImmutableArray_1_t5584 * __this, Object_t* ___items, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_AddRange_m22674(__this, ___items, method) (Object_t*)ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_AddRange_m22674_gshared((ImmutableArray_1_t5584 *)__this, (Object_t*)___items, method)
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableList<T>.Insert(System.Int32,T)
 Object_t* ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Insert_m22675_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, Object_t * ___element, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Insert_m22675(__this, ___index, ___element, method) (Object_t*)ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Insert_m22675_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, (Object_t *)___element, method)
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableList<T>.InsertRange(System.Int32,System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_InsertRange_m22676_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, Object_t* ___items, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_InsertRange_m22676(__this, ___index, ___items, method) (Object_t*)ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_InsertRange_m22676_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, (Object_t*)___items, method)
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableList<T>.Remove(T,System.Collections.Generic.IEqualityComparer`1<T>)
 Object_t* ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Remove_m22677_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___value, Object_t* ___equalityComparer, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Remove_m22677(__this, ___value, ___equalityComparer, method) (Object_t*)ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Remove_m22677_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___value, (Object_t*)___equalityComparer, method)
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableList<T>.RemoveAll(System.Predicate`1<T>)
 Object_t* ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveAll_m22678_gshared (ImmutableArray_1_t5584 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveAll_m22678(__this, ___match, method) (Object_t*)ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveAll_m22678_gshared((ImmutableArray_1_t5584 *)__this, (Predicate_1_t4554 *)___match, method)
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableList<T>.RemoveRange(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
 Object_t* ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveRange_m22679_gshared (ImmutableArray_1_t5584 * __this, Object_t* ___items, Object_t* ___equalityComparer, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveRange_m22679(__this, ___items, ___equalityComparer, method) (Object_t*)ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveRange_m22679_gshared((ImmutableArray_1_t5584 *)__this, (Object_t*)___items, (Object_t*)___equalityComparer, method)
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableList<T>.RemoveRange(System.Int32,System.Int32)
 Object_t* ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveRange_m22680_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, int32_t ___count, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveRange_m22680(__this, ___index, ___count, method) (Object_t*)ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveRange_m22680_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, (int32_t)___count, method)
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableList<T>.RemoveAt(System.Int32)
 Object_t* ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveAt_m22681_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveAt_m22681(__this, ___index, method) (Object_t*)ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_RemoveAt_m22681_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, method)
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableList<T>.SetItem(System.Int32,T)
 Object_t* ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_SetItem_m22682_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_SetItem_m22682(__this, ___index, ___value, method) (Object_t*)ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_SetItem_m22682_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Collections.Immutable.IImmutableList`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableList<T>.Replace(T,T,System.Collections.Generic.IEqualityComparer`1<T>)
 Object_t* ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Replace_m22683_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___oldValue, Object_t * ___newValue, Object_t* ___equalityComparer, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Replace_m22683(__this, ___oldValue, ___newValue, ___equalityComparer, method) (Object_t*)ImmutableArray_1_System_Collections_Immutable_IImmutableListU3CTU3E_Replace_m22683_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___oldValue, (Object_t *)___newValue, (Object_t*)___equalityComparer, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IList.Add(System.Object)
 int32_t ImmutableArray_1_System_Collections_IList_Add_m22684_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IList_Add_m22684(__this, ___value, method) (int32_t)ImmutableArray_1_System_Collections_IList_Add_m22684_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IList.Clear()
 void ImmutableArray_1_System_Collections_IList_Clear_m22685_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IList_Clear_m22685(__this, method) (void)ImmutableArray_1_System_Collections_IList_Clear_m22685_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IList.Contains(System.Object)
 bool ImmutableArray_1_System_Collections_IList_Contains_m22686_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IList_Contains_m22686(__this, ___value, method) (bool)ImmutableArray_1_System_Collections_IList_Contains_m22686_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
 int32_t ImmutableArray_1_System_Collections_IList_IndexOf_m22687_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IList_IndexOf_m22687(__this, ___value, method) (int32_t)ImmutableArray_1_System_Collections_IList_IndexOf_m22687_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
 void ImmutableArray_1_System_Collections_IList_Insert_m22688_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IList_Insert_m22688(__this, ___index, ___value, method) (void)ImmutableArray_1_System_Collections_IList_Insert_m22688_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IList.get_IsFixedSize()
 bool ImmutableArray_1_System_Collections_IList_get_IsFixedSize_m22689_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IList_get_IsFixedSize_m22689(__this, method) (bool)ImmutableArray_1_System_Collections_IList_get_IsFixedSize_m22689_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IList.get_IsReadOnly()
 bool ImmutableArray_1_System_Collections_IList_get_IsReadOnly_m22690_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IList_get_IsReadOnly_m22690(__this, method) (bool)ImmutableArray_1_System_Collections_IList_get_IsReadOnly_m22690_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.ICollection.get_Count()
 int32_t ImmutableArray_1_System_Collections_ICollection_get_Count_m22691_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_ICollection_get_Count_m22691(__this, method) (int32_t)ImmutableArray_1_System_Collections_ICollection_get_Count_m22691_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool ImmutableArray_1_System_Collections_ICollection_get_IsSynchronized_m22692_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_ICollection_get_IsSynchronized_m22692(__this, method) (bool)ImmutableArray_1_System_Collections_ICollection_get_IsSynchronized_m22692_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Object System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ImmutableArray_1_System_Collections_ICollection_get_SyncRoot_m22693_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_ICollection_get_SyncRoot_m22693(__this, method) (Object_t *)ImmutableArray_1_System_Collections_ICollection_get_SyncRoot_m22693_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IList.Remove(System.Object)
 void ImmutableArray_1_System_Collections_IList_Remove_m22694_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IList_Remove_m22694(__this, ___value, method) (void)ImmutableArray_1_System_Collections_IList_Remove_m22694_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
 void ImmutableArray_1_System_Collections_IList_RemoveAt_m22695_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IList_RemoveAt_m22695(__this, ___index, method) (void)ImmutableArray_1_System_Collections_IList_RemoveAt_m22695_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, method)
// System.Object System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
 Object_t * ImmutableArray_1_System_Collections_IList_get_Item_m22696_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IList_get_Item_m22696(__this, ___index, method) (Object_t *)ImmutableArray_1_System_Collections_IList_get_Item_m22696_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void ImmutableArray_1_System_Collections_IList_set_Item_m22697_gshared (ImmutableArray_1_t5584 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IList_set_Item_m22697(__this, ___index, ___value, method) (void)ImmutableArray_1_System_Collections_IList_set_Item_m22697_gshared((ImmutableArray_1_t5584 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ImmutableArray_1_System_Collections_ICollection_CopyTo_m22698_gshared (ImmutableArray_1_t5584 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define ImmutableArray_1_System_Collections_ICollection_CopyTo_m22698(__this, ___array, ___index, method) (void)ImmutableArray_1_System_Collections_ICollection_CopyTo_m22698_gshared((ImmutableArray_1_t5584 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Boolean System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IStructuralEquatable.Equals(System.Object,System.Collections.IEqualityComparer)
 bool ImmutableArray_1_System_Collections_IStructuralEquatable_Equals_m22699_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___other, Object_t * ___comparer, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IStructuralEquatable_Equals_m22699(__this, ___other, ___comparer, method) (bool)ImmutableArray_1_System_Collections_IStructuralEquatable_Equals_m22699_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___other, (Object_t *)___comparer, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer)
 int32_t ImmutableArray_1_System_Collections_IStructuralEquatable_GetHashCode_m22700_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___comparer, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IStructuralEquatable_GetHashCode_m22700(__this, ___comparer, method) (int32_t)ImmutableArray_1_System_Collections_IStructuralEquatable_GetHashCode_m22700_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___comparer, method)
// System.Int32 System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.IStructuralComparable.CompareTo(System.Object,System.Collections.IComparer)
 int32_t ImmutableArray_1_System_Collections_IStructuralComparable_CompareTo_m22701_gshared (ImmutableArray_1_t5584 * __this, Object_t * ___other, Object_t * ___comparer, MethodInfo* method);
#define ImmutableArray_1_System_Collections_IStructuralComparable_CompareTo_m22701(__this, ___other, ___comparer, method) (int32_t)ImmutableArray_1_System_Collections_IStructuralComparable_CompareTo_m22701_gshared((ImmutableArray_1_t5584 *)__this, (Object_t *)___other, (Object_t *)___comparer, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::ThrowNullRefIfNotInitialized()
 void ImmutableArray_1_ThrowNullRefIfNotInitialized_m22702_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_ThrowNullRefIfNotInitialized_m22702(__this, method) (void)ImmutableArray_1_ThrowNullRefIfNotInitialized_m22702_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::ThrowInvalidOperationIfNotInitialized()
 void ImmutableArray_1_ThrowInvalidOperationIfNotInitialized_m22703_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_ThrowInvalidOperationIfNotInitialized_m22703(__this, method) (void)ImmutableArray_1_ThrowInvalidOperationIfNotInitialized_m22703_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::System.Collections.Immutable.IImmutableArray.ThrowInvalidOperationIfNotInitialized()
 void ImmutableArray_1_System_Collections_Immutable_IImmutableArray_ThrowInvalidOperationIfNotInitialized_m22704_gshared (ImmutableArray_1_t5584 * __this, MethodInfo* method);
#define ImmutableArray_1_System_Collections_Immutable_IImmutableArray_ThrowInvalidOperationIfNotInitialized_m22704(__this, method) (void)ImmutableArray_1_System_Collections_Immutable_IImmutableArray_ThrowInvalidOperationIfNotInitialized_m22704_gshared((ImmutableArray_1_t5584 *)__this, method)
// System.Collections.Immutable.ImmutableArray`1<T> System.Collections.Immutable.ImmutableArray`1<System.Object>::RemoveAtRange(System.Collections.Generic.ICollection`1<System.Int32>)
 ImmutableArray_1_t5584  ImmutableArray_1_RemoveAtRange_m22705 (ImmutableArray_1_t5584 * __this, Object_t* ___indexesToRemove, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::ThrowNullRefIfNotInitialized(System.Collections.Immutable.ImmutableArray`1<T>)
 void ImmutableArray_1_ThrowNullRefIfNotInitialized_m22706 (Object_t * __this/* static, unused */, ImmutableArray_1_t5584  ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Immutable.ImmutableArray`1<System.Object>::.cctor()
 void ImmutableArray_1__cctor_m22707_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define ImmutableArray_1__cctor_m22707(__this/* static, unused */, method) (void)ImmutableArray_1__cctor_m22707_gshared((Object_t *)__this/* static, unused */, method)
