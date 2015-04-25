#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableSortedSet`1<System.Object>
struct ImmutableSortedSet_1_t5817;
// System.Object
struct Object_t;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Collections.Immutable.IBinaryTree
struct IBinaryTree_t960;
// System.Collections.Immutable.ImmutableSortedSet`1/Node<System.Object>
struct Node_t5818;
// System.Collections.Immutable.ImmutableSortedSet`1/Builder<System.Object>
struct Builder_t5819;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Collections.Immutable.IImmutableSet`1<System.Object>
struct IImmutableSet_1_t5760;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_215.h"

// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::.ctor(System.Collections.Generic.IComparer`1<T>)
 void ImmutableSortedSet_1__ctor_m24744_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___comparer, MethodInfo* method);
#define ImmutableSortedSet_1__ctor_m24744(__this, ___comparer, method) (void)ImmutableSortedSet_1__ctor_m24744_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::.ctor(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>,System.Collections.Generic.IComparer`1<T>)
 void ImmutableSortedSet_1__ctor_m24745_gshared (ImmutableSortedSet_1_t5817 * __this, Node_t5818 * ___root, Object_t* ___comparer, MethodInfo* method);
#define ImmutableSortedSet_1__ctor_m24745(__this, ___root, ___comparer, method) (void)ImmutableSortedSet_1__ctor_m24745_gshared((ImmutableSortedSet_1_t5817 *)__this, (Node_t5818 *)___root, (Object_t*)___comparer, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::Clear()
 ImmutableSortedSet_1_t5817 * ImmutableSortedSet_1_Clear_m24746_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_Clear_m24746(__this, method) (ImmutableSortedSet_1_t5817 *)ImmutableSortedSet_1_Clear_m24746_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// T System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::get_Max()
 Object_t * ImmutableSortedSet_1_get_Max_m24747_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_get_Max_m24747(__this, method) (Object_t *)ImmutableSortedSet_1_get_Max_m24747_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// T System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::get_Min()
 Object_t * ImmutableSortedSet_1_get_Min_m24748_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_get_Min_m24748(__this, method) (Object_t *)ImmutableSortedSet_1_get_Min_m24748_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::get_IsEmpty()
 bool ImmutableSortedSet_1_get_IsEmpty_m24749_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_get_IsEmpty_m24749(__this, method) (bool)ImmutableSortedSet_1_get_IsEmpty_m24749_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::get_Count()
 int32_t ImmutableSortedSet_1_get_Count_m24750_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_get_Count_m24750(__this, method) (int32_t)ImmutableSortedSet_1_get_Count_m24750_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Collections.Generic.IComparer`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::get_KeyComparer()
 Object_t* ImmutableSortedSet_1_get_KeyComparer_m24751_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_get_KeyComparer_m24751(__this, method) (Object_t*)ImmutableSortedSet_1_get_KeyComparer_m24751_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::get_Root()
 Object_t * ImmutableSortedSet_1_get_Root_m24752_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_get_Root_m24752(__this, method) (Object_t *)ImmutableSortedSet_1_get_Root_m24752_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// T System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::get_Item(System.Int32)
 Object_t * ImmutableSortedSet_1_get_Item_m24753_gshared (ImmutableSortedSet_1_t5817 * __this, int32_t ___index, MethodInfo* method);
#define ImmutableSortedSet_1_get_Item_m24753(__this, ___index, method) (Object_t *)ImmutableSortedSet_1_get_Item_m24753_gshared((ImmutableSortedSet_1_t5817 *)__this, (int32_t)___index, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Builder<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::ToBuilder()
 Builder_t5819 * ImmutableSortedSet_1_ToBuilder_m24754_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_ToBuilder_m24754(__this, method) (Builder_t5819 *)ImmutableSortedSet_1_ToBuilder_m24754_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::Add(T)
 ImmutableSortedSet_1_t5817 * ImmutableSortedSet_1_Add_m24755_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedSet_1_Add_m24755(__this, ___value, method) (ImmutableSortedSet_1_t5817 *)ImmutableSortedSet_1_Add_m24755_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___value, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::Remove(T)
 ImmutableSortedSet_1_t5817 * ImmutableSortedSet_1_Remove_m24756_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedSet_1_Remove_m24756(__this, ___value, method) (ImmutableSortedSet_1_t5817 *)ImmutableSortedSet_1_Remove_m24756_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___value, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::TryGetValue(T,T&)
 bool ImmutableSortedSet_1_TryGetValue_m24757_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___equalValue, Object_t ** ___actualValue, MethodInfo* method);
#define ImmutableSortedSet_1_TryGetValue_m24757(__this, ___equalValue, ___actualValue, method) (bool)ImmutableSortedSet_1_TryGetValue_m24757_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___equalValue, (Object_t **)___actualValue, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::Intersect(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableSortedSet_1_t5817 * ImmutableSortedSet_1_Intersect_m24758_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_Intersect_m24758(__this, ___other, method) (ImmutableSortedSet_1_t5817 *)ImmutableSortedSet_1_Intersect_m24758_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::Except(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableSortedSet_1_t5817 * ImmutableSortedSet_1_Except_m24759_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_Except_m24759(__this, ___other, method) (ImmutableSortedSet_1_t5817 *)ImmutableSortedSet_1_Except_m24759_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::SymmetricExcept(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableSortedSet_1_t5817 * ImmutableSortedSet_1_SymmetricExcept_m24760_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_SymmetricExcept_m24760(__this, ___other, method) (ImmutableSortedSet_1_t5817 *)ImmutableSortedSet_1_SymmetricExcept_m24760_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::Union(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableSortedSet_1_t5817 * ImmutableSortedSet_1_Union_m24761_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_Union_m24761(__this, ___other, method) (ImmutableSortedSet_1_t5817 *)ImmutableSortedSet_1_Union_m24761_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::WithComparer(System.Collections.Generic.IComparer`1<T>)
 ImmutableSortedSet_1_t5817 * ImmutableSortedSet_1_WithComparer_m24762_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___comparer, MethodInfo* method);
#define ImmutableSortedSet_1_WithComparer_m24762(__this, ___comparer, method) (ImmutableSortedSet_1_t5817 *)ImmutableSortedSet_1_WithComparer_m24762_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___comparer, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
 bool ImmutableSortedSet_1_SetEquals_m24763_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_SetEquals_m24763(__this, ___other, method) (bool)ImmutableSortedSet_1_SetEquals_m24763_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::IsProperSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool ImmutableSortedSet_1_IsProperSubsetOf_m24764_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_IsProperSubsetOf_m24764(__this, ___other, method) (bool)ImmutableSortedSet_1_IsProperSubsetOf_m24764_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::IsProperSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool ImmutableSortedSet_1_IsProperSupersetOf_m24765_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_IsProperSupersetOf_m24765(__this, ___other, method) (bool)ImmutableSortedSet_1_IsProperSupersetOf_m24765_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::IsSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool ImmutableSortedSet_1_IsSubsetOf_m24766_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_IsSubsetOf_m24766(__this, ___other, method) (bool)ImmutableSortedSet_1_IsSubsetOf_m24766_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::IsSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool ImmutableSortedSet_1_IsSupersetOf_m24767_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_IsSupersetOf_m24767(__this, ___other, method) (bool)ImmutableSortedSet_1_IsSupersetOf_m24767_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::Overlaps(System.Collections.Generic.IEnumerable`1<T>)
 bool ImmutableSortedSet_1_Overlaps_m24768_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_Overlaps_m24768(__this, ___other, method) (bool)ImmutableSortedSet_1_Overlaps_m24768_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Collections.Generic.IEnumerable`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::Reverse()
 Object_t* ImmutableSortedSet_1_Reverse_m24769_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_Reverse_m24769(__this, method) (Object_t*)ImmutableSortedSet_1_Reverse_m24769_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::IndexOf(T)
 int32_t ImmutableSortedSet_1_IndexOf_m24770_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableSortedSet_1_IndexOf_m24770(__this, ___item, method) (int32_t)ImmutableSortedSet_1_IndexOf_m24770_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::Contains(T)
 bool ImmutableSortedSet_1_Contains_m24771_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedSet_1_Contains_m24771(__this, ___value, method) (bool)ImmutableSortedSet_1_Contains_m24771_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___value, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.Clear()
 Object_t* ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Clear_m24772_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Clear_m24772(__this, method) (Object_t*)ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Clear_m24772_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.Add(T)
 Object_t* ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Add_m24773_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Add_m24773(__this, ___value, method) (Object_t*)ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Add_m24773_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___value, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.Remove(T)
 Object_t* ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Remove_m24774_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Remove_m24774(__this, ___value, method) (Object_t*)ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Remove_m24774_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___value, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.Intersect(System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Intersect_m24775_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Intersect_m24775(__this, ___other, method) (Object_t*)ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Intersect_m24775_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.Except(System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Except_m24776_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Except_m24776(__this, ___other, method) (Object_t*)ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Except_m24776_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.SymmetricExcept(System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_SymmetricExcept_m24777_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_SymmetricExcept_m24777(__this, ___other, method) (Object_t*)ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_SymmetricExcept_m24777_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.Union(System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Union_m24778_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Union_m24778(__this, ___other, method) (Object_t*)ImmutableSortedSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Union_m24778_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.ISet<T>.Add(T)
 bool ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_Add_m24779_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_Add_m24779(__this, ___item, method) (bool)ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_Add_m24779_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.ISet<T>.ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
 void ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_ExceptWith_m24780_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_ExceptWith_m24780(__this, ___other, method) (void)ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_ExceptWith_m24780_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.ISet<T>.IntersectWith(System.Collections.Generic.IEnumerable`1<T>)
 void ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_IntersectWith_m24781_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_IntersectWith_m24781(__this, ___other, method) (void)ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_IntersectWith_m24781_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.ISet<T>.SymmetricExceptWith(System.Collections.Generic.IEnumerable`1<T>)
 void ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_SymmetricExceptWith_m24782_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_SymmetricExceptWith_m24782(__this, ___other, method) (void)ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_SymmetricExceptWith_m24782_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.ISet<T>.UnionWith(System.Collections.Generic.IEnumerable`1<T>)
 void ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_UnionWith_m24783_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_UnionWith_m24783(__this, ___other, method) (void)ImmutableSortedSet_1_System_Collections_Generic_ISetU3CTU3E_UnionWith_m24783_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24784_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24784(__this, method) (bool)ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24784_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
 void ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24785_gshared (ImmutableSortedSet_1_t5817 * __this, ObjectU5BU5D_t126* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24785(__this, ___array, ___arrayIndex, method) (void)ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24785_gshared((ImmutableSortedSet_1_t5817 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
 void ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24786_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24786(__this, ___item, method) (void)ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24786_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
 void ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m24787_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m24787(__this, method) (void)ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m24787_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m24788_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m24788(__this, ___item, method) (bool)ImmutableSortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m24788_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___item, method)
// T System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.IList<T>.get_Item(System.Int32)
 Object_t * ImmutableSortedSet_1_System_Collections_Generic_IListU3CTU3E_get_Item_m24789_gshared (ImmutableSortedSet_1_t5817 * __this, int32_t ___index, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_IListU3CTU3E_get_Item_m24789(__this, ___index, method) (Object_t *)ImmutableSortedSet_1_System_Collections_Generic_IListU3CTU3E_get_Item_m24789_gshared((ImmutableSortedSet_1_t5817 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.IList<T>.set_Item(System.Int32,T)
 void ImmutableSortedSet_1_System_Collections_Generic_IListU3CTU3E_set_Item_m24790_gshared (ImmutableSortedSet_1_t5817 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_IListU3CTU3E_set_Item_m24790(__this, ___index, ___value, method) (void)ImmutableSortedSet_1_System_Collections_Generic_IListU3CTU3E_set_Item_m24790_gshared((ImmutableSortedSet_1_t5817 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.IList<T>.Insert(System.Int32,T)
 void ImmutableSortedSet_1_System_Collections_Generic_IListU3CTU3E_Insert_m24791_gshared (ImmutableSortedSet_1_t5817 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_IListU3CTU3E_Insert_m24791(__this, ___index, ___item, method) (void)ImmutableSortedSet_1_System_Collections_Generic_IListU3CTU3E_Insert_m24791_gshared((ImmutableSortedSet_1_t5817 *)__this, (int32_t)___index, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.IList<T>.RemoveAt(System.Int32)
 void ImmutableSortedSet_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m24792_gshared (ImmutableSortedSet_1_t5817 * __this, int32_t ___index, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m24792(__this, ___index, method) (void)ImmutableSortedSet_1_System_Collections_Generic_IListU3CTU3E_RemoveAt_m24792_gshared((ImmutableSortedSet_1_t5817 *)__this, (int32_t)___index, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.IList.get_IsFixedSize()
 bool ImmutableSortedSet_1_System_Collections_IList_get_IsFixedSize_m24793_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_IList_get_IsFixedSize_m24793(__this, method) (bool)ImmutableSortedSet_1_System_Collections_IList_get_IsFixedSize_m24793_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.IList.get_IsReadOnly()
 bool ImmutableSortedSet_1_System_Collections_IList_get_IsReadOnly_m24794_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_IList_get_IsReadOnly_m24794(__this, method) (bool)ImmutableSortedSet_1_System_Collections_IList_get_IsReadOnly_m24794_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Object System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ImmutableSortedSet_1_System_Collections_ICollection_get_SyncRoot_m24795_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_ICollection_get_SyncRoot_m24795(__this, method) (Object_t *)ImmutableSortedSet_1_System_Collections_ICollection_get_SyncRoot_m24795_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool ImmutableSortedSet_1_System_Collections_ICollection_get_IsSynchronized_m24796_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_ICollection_get_IsSynchronized_m24796(__this, method) (bool)ImmutableSortedSet_1_System_Collections_ICollection_get_IsSynchronized_m24796_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.IList.Add(System.Object)
 int32_t ImmutableSortedSet_1_System_Collections_IList_Add_m24797_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_IList_Add_m24797(__this, ___value, method) (int32_t)ImmutableSortedSet_1_System_Collections_IList_Add_m24797_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.IList.Clear()
 void ImmutableSortedSet_1_System_Collections_IList_Clear_m24798_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_IList_Clear_m24798(__this, method) (void)ImmutableSortedSet_1_System_Collections_IList_Clear_m24798_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.IList.Contains(System.Object)
 bool ImmutableSortedSet_1_System_Collections_IList_Contains_m24799_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_IList_Contains_m24799(__this, ___value, method) (bool)ImmutableSortedSet_1_System_Collections_IList_Contains_m24799_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___value, method)
// System.Int32 System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.IList.IndexOf(System.Object)
 int32_t ImmutableSortedSet_1_System_Collections_IList_IndexOf_m24800_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_IList_IndexOf_m24800(__this, ___value, method) (int32_t)ImmutableSortedSet_1_System_Collections_IList_IndexOf_m24800_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.IList.Insert(System.Int32,System.Object)
 void ImmutableSortedSet_1_System_Collections_IList_Insert_m24801_gshared (ImmutableSortedSet_1_t5817 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_IList_Insert_m24801(__this, ___index, ___value, method) (void)ImmutableSortedSet_1_System_Collections_IList_Insert_m24801_gshared((ImmutableSortedSet_1_t5817 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.IList.Remove(System.Object)
 void ImmutableSortedSet_1_System_Collections_IList_Remove_m24802_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_IList_Remove_m24802(__this, ___value, method) (void)ImmutableSortedSet_1_System_Collections_IList_Remove_m24802_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.IList.RemoveAt(System.Int32)
 void ImmutableSortedSet_1_System_Collections_IList_RemoveAt_m24803_gshared (ImmutableSortedSet_1_t5817 * __this, int32_t ___index, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_IList_RemoveAt_m24803(__this, ___index, method) (void)ImmutableSortedSet_1_System_Collections_IList_RemoveAt_m24803_gshared((ImmutableSortedSet_1_t5817 *)__this, (int32_t)___index, method)
// System.Object System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.IList.get_Item(System.Int32)
 Object_t * ImmutableSortedSet_1_System_Collections_IList_get_Item_m24804_gshared (ImmutableSortedSet_1_t5817 * __this, int32_t ___index, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_IList_get_Item_m24804(__this, ___index, method) (Object_t *)ImmutableSortedSet_1_System_Collections_IList_get_Item_m24804_gshared((ImmutableSortedSet_1_t5817 *)__this, (int32_t)___index, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.IList.set_Item(System.Int32,System.Object)
 void ImmutableSortedSet_1_System_Collections_IList_set_Item_m24805_gshared (ImmutableSortedSet_1_t5817 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_IList_set_Item_m24805(__this, ___index, ___value, method) (void)ImmutableSortedSet_1_System_Collections_IList_set_Item_m24805_gshared((ImmutableSortedSet_1_t5817 *)__this, (int32_t)___index, (Object_t *)___value, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ImmutableSortedSet_1_System_Collections_ICollection_CopyTo_m24806_gshared (ImmutableSortedSet_1_t5817 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_ICollection_CopyTo_m24806(__this, ___array, ___index, method) (void)ImmutableSortedSet_1_System_Collections_ICollection_CopyTo_m24806_gshared((ImmutableSortedSet_1_t5817 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* ImmutableSortedSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24807_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24807(__this, method) (Object_t*)ImmutableSortedSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24807_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ImmutableSortedSet_1_System_Collections_IEnumerable_GetEnumerator_m24808_gshared (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method);
#define ImmutableSortedSet_1_System_Collections_IEnumerable_GetEnumerator_m24808(__this, method) (Object_t *)ImmutableSortedSet_1_System_Collections_IEnumerable_GetEnumerator_m24808_gshared((ImmutableSortedSet_1_t5817 *)__this, method)
// System.Collections.Immutable.ImmutableSortedSet`1/Enumerator<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::GetEnumerator()
 Enumerator_t5820  ImmutableSortedSet_1_GetEnumerator_m24809 (ImmutableSortedSet_1_t5817 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::TryCastToImmutableSortedSet(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Immutable.ImmutableSortedSet`1<T>&)
 bool ImmutableSortedSet_1_TryCastToImmutableSortedSet_m24810_gshared (Object_t * __this/* static, unused */, Object_t* ___sequence, ImmutableSortedSet_1_t5817 ** ___other, MethodInfo* method);
#define ImmutableSortedSet_1_TryCastToImmutableSortedSet_m24810(__this/* static, unused */, ___sequence, ___other, method) (bool)ImmutableSortedSet_1_TryCastToImmutableSortedSet_m24810_gshared((Object_t *)__this/* static, unused */, (Object_t*)___sequence, (ImmutableSortedSet_1_t5817 **)___other, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::Wrap(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>,System.Collections.Generic.IComparer`1<T>)
 ImmutableSortedSet_1_t5817 * ImmutableSortedSet_1_Wrap_m24811_gshared (Object_t * __this/* static, unused */, Node_t5818 * ___root, Object_t* ___comparer, MethodInfo* method);
#define ImmutableSortedSet_1_Wrap_m24811(__this/* static, unused */, ___root, ___comparer, method) (ImmutableSortedSet_1_t5817 *)ImmutableSortedSet_1_Wrap_m24811_gshared((Object_t *)__this/* static, unused */, (Node_t5818 *)___root, (Object_t*)___comparer, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::UnionIncremental(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableSortedSet_1_t5817 * ImmutableSortedSet_1_UnionIncremental_m24812_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___items, MethodInfo* method);
#define ImmutableSortedSet_1_UnionIncremental_m24812(__this, ___items, method) (ImmutableSortedSet_1_t5817 *)ImmutableSortedSet_1_UnionIncremental_m24812_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___items, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::Wrap(System.Collections.Immutable.ImmutableSortedSet`1/Node<T>)
 ImmutableSortedSet_1_t5817 * ImmutableSortedSet_1_Wrap_m24813_gshared (ImmutableSortedSet_1_t5817 * __this, Node_t5818 * ___root, MethodInfo* method);
#define ImmutableSortedSet_1_Wrap_m24813(__this, ___root, method) (ImmutableSortedSet_1_t5817 *)ImmutableSortedSet_1_Wrap_m24813_gshared((ImmutableSortedSet_1_t5817 *)__this, (Node_t5818 *)___root, method)
// System.Collections.Immutable.ImmutableSortedSet`1<T> System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::LeafToRootRefill(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableSortedSet_1_t5817 * ImmutableSortedSet_1_LeafToRootRefill_m24814_gshared (ImmutableSortedSet_1_t5817 * __this, Object_t* ___addedItems, MethodInfo* method);
#define ImmutableSortedSet_1_LeafToRootRefill_m24814(__this, ___addedItems, method) (ImmutableSortedSet_1_t5817 *)ImmutableSortedSet_1_LeafToRootRefill_m24814_gshared((ImmutableSortedSet_1_t5817 *)__this, (Object_t*)___addedItems, method)
// System.Void System.Collections.Immutable.ImmutableSortedSet`1<System.Object>::.cctor()
 void ImmutableSortedSet_1__cctor_m24815_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define ImmutableSortedSet_1__cctor_m24815(__this/* static, unused */, method) (void)ImmutableSortedSet_1__cctor_m24815_gshared((Object_t *)__this/* static, unused */, method)
