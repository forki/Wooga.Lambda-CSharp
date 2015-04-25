#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedSet`1<System.Object>
struct SortedSet_1_t5495;
// System.Collections.Generic.IComparer`1<System.Object>
struct IComparer_1_t4559;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Collections.Generic.TreeWalkPredicate`1<System.Object>
struct TreeWalkPredicate_1_t5498;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Object>
struct IEnumerator_1_t137;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Generic.SortedSet`1/Node<System.Object>
struct Node_t5497;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.SortedSet`1<System.Object>>
struct IEqualityComparer_1_t5499;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Collections.Generic.ISet`1<System.Object>
struct ISet_1_t5500;
// System.Predicate`1<System.Object>
struct Predicate_1_t4554;
// System.Collections.Generic.SortedSet`1/Enumerator<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Generic_S_28.h"
// System.Collections.Generic.TreeRotation
#include "Rackspace_Collections_Immutable_System_Collections_Generic_T_0.h"
// System.Collections.Generic.SortedSet`1/ElementCount<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Generic_S_29.h"

// System.Void System.Collections.Generic.SortedSet`1<System.Object>::.ctor()
 void SortedSet_1__ctor_m21776_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1__ctor_m21776(__this, method) (void)SortedSet_1__ctor_m21776_gshared((SortedSet_1_t5495 *)__this, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::.ctor(System.Collections.Generic.IComparer`1<T>)
 void SortedSet_1__ctor_m21777_gshared (SortedSet_1_t5495 * __this, Object_t* ___comparer, MethodInfo* method);
#define SortedSet_1__ctor_m21777(__this, ___comparer, method) (void)SortedSet_1__ctor_m21777_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1__ctor_m21778_gshared (SortedSet_1_t5495 * __this, Object_t* ___collection, MethodInfo* method);
#define SortedSet_1__ctor_m21778(__this, ___collection, method) (void)SortedSet_1__ctor_m21778_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IComparer`1<T>)
 void SortedSet_1__ctor_m21779_gshared (SortedSet_1_t5495 * __this, Object_t* ___collection, Object_t* ___comparer, MethodInfo* method);
#define SortedSet_1__ctor_m21779(__this, ___collection, ___comparer, method) (void)SortedSet_1__ctor_m21779_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___collection, (Object_t*)___comparer, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::AddAllElements(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_AddAllElements_m21780_gshared (SortedSet_1_t5495 * __this, Object_t* ___collection, MethodInfo* method);
#define SortedSet_1_AddAllElements_m21780(__this, ___collection, method) (void)SortedSet_1_AddAllElements_m21780_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___collection, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::RemoveAllElements(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_RemoveAllElements_m21781_gshared (SortedSet_1_t5495 * __this, Object_t* ___collection, MethodInfo* method);
#define SortedSet_1_RemoveAllElements_m21781(__this, ___collection, method) (void)SortedSet_1_RemoveAllElements_m21781_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::ContainsAllElements(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_ContainsAllElements_m21782_gshared (SortedSet_1_t5495 * __this, Object_t* ___collection, MethodInfo* method);
#define SortedSet_1_ContainsAllElements_m21782(__this, ___collection, method) (bool)SortedSet_1_ContainsAllElements_m21782_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___collection, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::InOrderTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>)
 bool SortedSet_1_InOrderTreeWalk_m21783_gshared (SortedSet_1_t5495 * __this, TreeWalkPredicate_1_t5498 * ___action, MethodInfo* method);
#define SortedSet_1_InOrderTreeWalk_m21783(__this, ___action, method) (bool)SortedSet_1_InOrderTreeWalk_m21783_gshared((SortedSet_1_t5495 *)__this, (TreeWalkPredicate_1_t5498 *)___action, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::InOrderTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>,System.Boolean)
 bool SortedSet_1_InOrderTreeWalk_m21784_gshared (SortedSet_1_t5495 * __this, TreeWalkPredicate_1_t5498 * ___action, bool ___reverse, MethodInfo* method);
#define SortedSet_1_InOrderTreeWalk_m21784(__this, ___action, ___reverse, method) (bool)SortedSet_1_InOrderTreeWalk_m21784_gshared((SortedSet_1_t5495 *)__this, (TreeWalkPredicate_1_t5498 *)___action, (bool)___reverse, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::BreadthFirstTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>)
 bool SortedSet_1_BreadthFirstTreeWalk_m21785_gshared (SortedSet_1_t5495 * __this, TreeWalkPredicate_1_t5498 * ___action, MethodInfo* method);
#define SortedSet_1_BreadthFirstTreeWalk_m21785(__this, ___action, method) (bool)SortedSet_1_BreadthFirstTreeWalk_m21785_gshared((SortedSet_1_t5495 *)__this, (TreeWalkPredicate_1_t5498 *)___action, method)
// System.Int32 System.Collections.Generic.SortedSet`1<System.Object>::get_Count()
 int32_t SortedSet_1_get_Count_m21786_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_get_Count_m21786(__this, method) (int32_t)SortedSet_1_get_Count_m21786_gshared((SortedSet_1_t5495 *)__this, method)
// System.Collections.Generic.IComparer`1<T> System.Collections.Generic.SortedSet`1<System.Object>::get_Comparer()
 Object_t* SortedSet_1_get_Comparer_m21787_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_get_Comparer_m21787(__this, method) (Object_t*)SortedSet_1_get_Comparer_m21787_gshared((SortedSet_1_t5495 *)__this, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21788_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21788(__this, method) (bool)SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m21788_gshared((SortedSet_1_t5495 *)__this, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool SortedSet_1_System_Collections_ICollection_get_IsSynchronized_m21789_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_System_Collections_ICollection_get_IsSynchronized_m21789(__this, method) (bool)SortedSet_1_System_Collections_ICollection_get_IsSynchronized_m21789_gshared((SortedSet_1_t5495 *)__this, method)
// System.Object System.Collections.Generic.SortedSet`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * SortedSet_1_System_Collections_ICollection_get_SyncRoot_m21790_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_System_Collections_ICollection_get_SyncRoot_m21790(__this, method) (Object_t *)SortedSet_1_System_Collections_ICollection_get_SyncRoot_m21790_gshared((SortedSet_1_t5495 *)__this, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::VersionCheck()
 void SortedSet_1_VersionCheck_m21791_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_VersionCheck_m21791(__this, method) (void)SortedSet_1_VersionCheck_m21791_gshared((SortedSet_1_t5495 *)__this, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::IsWithinRange(T)
 bool SortedSet_1_IsWithinRange_m21792_gshared (SortedSet_1_t5495 * __this, Object_t * ___item, MethodInfo* method);
#define SortedSet_1_IsWithinRange_m21792(__this, ___item, method) (bool)SortedSet_1_IsWithinRange_m21792_gshared((SortedSet_1_t5495 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::Add(T)
 bool SortedSet_1_Add_m21793_gshared (SortedSet_1_t5495 * __this, Object_t * ___item, MethodInfo* method);
#define SortedSet_1_Add_m21793(__this, ___item, method) (bool)SortedSet_1_Add_m21793_gshared((SortedSet_1_t5495 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
 void SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21794_gshared (SortedSet_1_t5495 * __this, Object_t * ___item, MethodInfo* method);
#define SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21794(__this, ___item, method) (void)SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m21794_gshared((SortedSet_1_t5495 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::AddIfNotPresent(T)
 bool SortedSet_1_AddIfNotPresent_m21795_gshared (SortedSet_1_t5495 * __this, Object_t * ___item, MethodInfo* method);
#define SortedSet_1_AddIfNotPresent_m21795(__this, ___item, method) (bool)SortedSet_1_AddIfNotPresent_m21795_gshared((SortedSet_1_t5495 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::Remove(T)
 bool SortedSet_1_Remove_m21796_gshared (SortedSet_1_t5495 * __this, Object_t * ___item, MethodInfo* method);
#define SortedSet_1_Remove_m21796(__this, ___item, method) (bool)SortedSet_1_Remove_m21796_gshared((SortedSet_1_t5495 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::DoRemove(T)
 bool SortedSet_1_DoRemove_m21797_gshared (SortedSet_1_t5495 * __this, Object_t * ___item, MethodInfo* method);
#define SortedSet_1_DoRemove_m21797(__this, ___item, method) (bool)SortedSet_1_DoRemove_m21797_gshared((SortedSet_1_t5495 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::Clear()
 void SortedSet_1_Clear_m21798_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_Clear_m21798(__this, method) (void)SortedSet_1_Clear_m21798_gshared((SortedSet_1_t5495 *)__this, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::Contains(T)
 bool SortedSet_1_Contains_m21799_gshared (SortedSet_1_t5495 * __this, Object_t * ___item, MethodInfo* method);
#define SortedSet_1_Contains_m21799(__this, ___item, method) (bool)SortedSet_1_Contains_m21799_gshared((SortedSet_1_t5495 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::CopyTo(T[])
 void SortedSet_1_CopyTo_m21800_gshared (SortedSet_1_t5495 * __this, ObjectU5BU5D_t126* ___array, MethodInfo* method);
#define SortedSet_1_CopyTo_m21800(__this, ___array, method) (void)SortedSet_1_CopyTo_m21800_gshared((SortedSet_1_t5495 *)__this, (ObjectU5BU5D_t126*)___array, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::CopyTo(T[],System.Int32)
 void SortedSet_1_CopyTo_m21801_gshared (SortedSet_1_t5495 * __this, ObjectU5BU5D_t126* ___array, int32_t ___index, MethodInfo* method);
#define SortedSet_1_CopyTo_m21801(__this, ___array, ___index, method) (void)SortedSet_1_CopyTo_m21801_gshared((SortedSet_1_t5495 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___index, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::CopyTo(T[],System.Int32,System.Int32)
 void SortedSet_1_CopyTo_m21802_gshared (SortedSet_1_t5495 * __this, ObjectU5BU5D_t126* ___array, int32_t ___index, int32_t ___count, MethodInfo* method);
#define SortedSet_1_CopyTo_m21802(__this, ___array, ___index, ___count, method) (void)SortedSet_1_CopyTo_m21802_gshared((SortedSet_1_t5495 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___index, (int32_t)___count, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void SortedSet_1_System_Collections_ICollection_CopyTo_m21803_gshared (SortedSet_1_t5495 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method);
#define SortedSet_1_System_Collections_ICollection_CopyTo_m21803(__this, ___array, ___index, method) (void)SortedSet_1_System_Collections_ICollection_CopyTo_m21803_gshared((SortedSet_1_t5495 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.Generic.SortedSet`1/Enumerator<T> System.Collections.Generic.SortedSet`1<System.Object>::GetEnumerator()
 Enumerator_t5501  SortedSet_1_GetEnumerator_m21804 (SortedSet_1_t5495 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.SortedSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* SortedSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21805_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21805(__this, method) (Object_t*)SortedSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m21805_gshared((SortedSet_1_t5495 *)__this, method)
// System.Collections.IEnumerator System.Collections.Generic.SortedSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * SortedSet_1_System_Collections_IEnumerable_GetEnumerator_m21806_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_System_Collections_IEnumerable_GetEnumerator_m21806(__this, method) (Object_t *)SortedSet_1_System_Collections_IEnumerable_GetEnumerator_m21806_gshared((SortedSet_1_t5495 *)__this, method)
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Object>::GetSibling(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
 Node_t5497 * SortedSet_1_GetSibling_m21807_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___node, Node_t5497 * ___parent, MethodInfo* method);
#define SortedSet_1_GetSibling_m21807(__this/* static, unused */, ___node, ___parent, method) (Node_t5497 *)SortedSet_1_GetSibling_m21807_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___node, (Node_t5497 *)___parent, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::InsertionBalance(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>&,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
 void SortedSet_1_InsertionBalance_m21808_gshared (SortedSet_1_t5495 * __this, Node_t5497 * ___current, Node_t5497 ** ___parent, Node_t5497 * ___grandParent, Node_t5497 * ___greatGrandParent, MethodInfo* method);
#define SortedSet_1_InsertionBalance_m21808(__this, ___current, ___parent, ___grandParent, ___greatGrandParent, method) (void)SortedSet_1_InsertionBalance_m21808_gshared((SortedSet_1_t5495 *)__this, (Node_t5497 *)___current, (Node_t5497 **)___parent, (Node_t5497 *)___grandParent, (Node_t5497 *)___greatGrandParent, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::Is2Node(System.Collections.Generic.SortedSet`1/Node<T>)
 bool SortedSet_1_Is2Node_m21809_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___node, MethodInfo* method);
#define SortedSet_1_Is2Node_m21809(__this/* static, unused */, ___node, method) (bool)SortedSet_1_Is2Node_m21809_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___node, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::Is4Node(System.Collections.Generic.SortedSet`1/Node<T>)
 bool SortedSet_1_Is4Node_m21810_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___node, MethodInfo* method);
#define SortedSet_1_Is4Node_m21810(__this/* static, unused */, ___node, method) (bool)SortedSet_1_Is4Node_m21810_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___node, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::IsBlack(System.Collections.Generic.SortedSet`1/Node<T>)
 bool SortedSet_1_IsBlack_m21811_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___node, MethodInfo* method);
#define SortedSet_1_IsBlack_m21811(__this/* static, unused */, ___node, method) (bool)SortedSet_1_IsBlack_m21811_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___node, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::IsNullOrBlack(System.Collections.Generic.SortedSet`1/Node<T>)
 bool SortedSet_1_IsNullOrBlack_m21812_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___node, MethodInfo* method);
#define SortedSet_1_IsNullOrBlack_m21812(__this/* static, unused */, ___node, method) (bool)SortedSet_1_IsNullOrBlack_m21812_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___node, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::IsRed(System.Collections.Generic.SortedSet`1/Node<T>)
 bool SortedSet_1_IsRed_m21813_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___node, MethodInfo* method);
#define SortedSet_1_IsRed_m21813(__this/* static, unused */, ___node, method) (bool)SortedSet_1_IsRed_m21813_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___node, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::Merge2Nodes(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
 void SortedSet_1_Merge2Nodes_m21814_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___parent, Node_t5497 * ___child1, Node_t5497 * ___child2, MethodInfo* method);
#define SortedSet_1_Merge2Nodes_m21814(__this/* static, unused */, ___parent, ___child1, ___child2, method) (void)SortedSet_1_Merge2Nodes_m21814_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___parent, (Node_t5497 *)___child1, (Node_t5497 *)___child2, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::ReplaceChildOfNodeOrRoot(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
 void SortedSet_1_ReplaceChildOfNodeOrRoot_m21815_gshared (SortedSet_1_t5495 * __this, Node_t5497 * ___parent, Node_t5497 * ___child, Node_t5497 * ___newChild, MethodInfo* method);
#define SortedSet_1_ReplaceChildOfNodeOrRoot_m21815(__this, ___parent, ___child, ___newChild, method) (void)SortedSet_1_ReplaceChildOfNodeOrRoot_m21815_gshared((SortedSet_1_t5495 *)__this, (Node_t5497 *)___parent, (Node_t5497 *)___child, (Node_t5497 *)___newChild, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::ReplaceNode(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
 void SortedSet_1_ReplaceNode_m21816_gshared (SortedSet_1_t5495 * __this, Node_t5497 * ___match, Node_t5497 * ___parentOfMatch, Node_t5497 * ___succesor, Node_t5497 * ___parentOfSuccesor, MethodInfo* method);
#define SortedSet_1_ReplaceNode_m21816(__this, ___match, ___parentOfMatch, ___succesor, ___parentOfSuccesor, method) (void)SortedSet_1_ReplaceNode_m21816_gshared((SortedSet_1_t5495 *)__this, (Node_t5497 *)___match, (Node_t5497 *)___parentOfMatch, (Node_t5497 *)___succesor, (Node_t5497 *)___parentOfSuccesor, method)
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Object>::FindNode(T)
 Node_t5497 * SortedSet_1_FindNode_m21817_gshared (SortedSet_1_t5495 * __this, Object_t * ___item, MethodInfo* method);
#define SortedSet_1_FindNode_m21817(__this, ___item, method) (Node_t5497 *)SortedSet_1_FindNode_m21817_gshared((SortedSet_1_t5495 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.SortedSet`1<System.Object>::InternalIndexOf(T)
 int32_t SortedSet_1_InternalIndexOf_m21818_gshared (SortedSet_1_t5495 * __this, Object_t * ___item, MethodInfo* method);
#define SortedSet_1_InternalIndexOf_m21818(__this, ___item, method) (int32_t)SortedSet_1_InternalIndexOf_m21818_gshared((SortedSet_1_t5495 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Object>::FindRange(T,T)
 Node_t5497 * SortedSet_1_FindRange_m21819_gshared (SortedSet_1_t5495 * __this, Object_t * ___from, Object_t * ___to, MethodInfo* method);
#define SortedSet_1_FindRange_m21819(__this, ___from, ___to, method) (Node_t5497 *)SortedSet_1_FindRange_m21819_gshared((SortedSet_1_t5495 *)__this, (Object_t *)___from, (Object_t *)___to, method)
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Object>::FindRange(T,T,System.Boolean,System.Boolean)
 Node_t5497 * SortedSet_1_FindRange_m21820_gshared (SortedSet_1_t5495 * __this, Object_t * ___from, Object_t * ___to, bool ___lowerBoundActive, bool ___upperBoundActive, MethodInfo* method);
#define SortedSet_1_FindRange_m21820(__this, ___from, ___to, ___lowerBoundActive, ___upperBoundActive, method) (Node_t5497 *)SortedSet_1_FindRange_m21820_gshared((SortedSet_1_t5495 *)__this, (Object_t *)___from, (Object_t *)___to, (bool)___lowerBoundActive, (bool)___upperBoundActive, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::UpdateVersion()
 void SortedSet_1_UpdateVersion_m21821_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_UpdateVersion_m21821(__this, method) (void)SortedSet_1_UpdateVersion_m21821_gshared((SortedSet_1_t5495 *)__this, method)
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Object>::RotateLeft(System.Collections.Generic.SortedSet`1/Node<T>)
 Node_t5497 * SortedSet_1_RotateLeft_m21822_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___node, MethodInfo* method);
#define SortedSet_1_RotateLeft_m21822(__this/* static, unused */, ___node, method) (Node_t5497 *)SortedSet_1_RotateLeft_m21822_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___node, method)
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Object>::RotateLeftRight(System.Collections.Generic.SortedSet`1/Node<T>)
 Node_t5497 * SortedSet_1_RotateLeftRight_m21823_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___node, MethodInfo* method);
#define SortedSet_1_RotateLeftRight_m21823(__this/* static, unused */, ___node, method) (Node_t5497 *)SortedSet_1_RotateLeftRight_m21823_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___node, method)
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Object>::RotateRight(System.Collections.Generic.SortedSet`1/Node<T>)
 Node_t5497 * SortedSet_1_RotateRight_m21824_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___node, MethodInfo* method);
#define SortedSet_1_RotateRight_m21824(__this/* static, unused */, ___node, method) (Node_t5497 *)SortedSet_1_RotateRight_m21824_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___node, method)
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Object>::RotateRightLeft(System.Collections.Generic.SortedSet`1/Node<T>)
 Node_t5497 * SortedSet_1_RotateRightLeft_m21825_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___node, MethodInfo* method);
#define SortedSet_1_RotateRightLeft_m21825(__this/* static, unused */, ___node, method) (Node_t5497 *)SortedSet_1_RotateRightLeft_m21825_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___node, method)
// System.Collections.Generic.TreeRotation System.Collections.Generic.SortedSet`1<System.Object>::RotationNeeded(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
 int32_t SortedSet_1_RotationNeeded_m21826_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___parent, Node_t5497 * ___current, Node_t5497 * ___sibling, MethodInfo* method);
#define SortedSet_1_RotationNeeded_m21826(__this/* static, unused */, ___parent, ___current, ___sibling, method) (int32_t)SortedSet_1_RotationNeeded_m21826_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___parent, (Node_t5497 *)___current, (Node_t5497 *)___sibling, method)
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.SortedSet`1<T>> System.Collections.Generic.SortedSet`1<System.Object>::CreateSetComparer()
 Object_t* SortedSet_1_CreateSetComparer_m21827_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define SortedSet_1_CreateSetComparer_m21827(__this/* static, unused */, method) (Object_t*)SortedSet_1_CreateSetComparer_m21827_gshared((Object_t *)__this/* static, unused */, method)
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.SortedSet`1<T>> System.Collections.Generic.SortedSet`1<System.Object>::CreateSetComparer(System.Collections.Generic.IEqualityComparer`1<T>)
 Object_t* SortedSet_1_CreateSetComparer_m21828_gshared (Object_t * __this/* static, unused */, Object_t* ___memberEqualityComparer, MethodInfo* method);
#define SortedSet_1_CreateSetComparer_m21828(__this/* static, unused */, ___memberEqualityComparer, method) (Object_t*)SortedSet_1_CreateSetComparer_m21828_gshared((Object_t *)__this/* static, unused */, (Object_t*)___memberEqualityComparer, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::SortedSetEquals(System.Collections.Generic.SortedSet`1<T>,System.Collections.Generic.SortedSet`1<T>,System.Collections.Generic.IComparer`1<T>)
 bool SortedSet_1_SortedSetEquals_m21829_gshared (Object_t * __this/* static, unused */, SortedSet_1_t5495 * ___set1, SortedSet_1_t5495 * ___set2, Object_t* ___comparer, MethodInfo* method);
#define SortedSet_1_SortedSetEquals_m21829(__this/* static, unused */, ___set1, ___set2, ___comparer, method) (bool)SortedSet_1_SortedSetEquals_m21829_gshared((Object_t *)__this/* static, unused */, (SortedSet_1_t5495 *)___set1, (SortedSet_1_t5495 *)___set2, (Object_t*)___comparer, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::AreComparersEqual(System.Collections.Generic.SortedSet`1<T>,System.Collections.Generic.SortedSet`1<T>)
 bool SortedSet_1_AreComparersEqual_m21830_gshared (Object_t * __this/* static, unused */, SortedSet_1_t5495 * ___set1, SortedSet_1_t5495 * ___set2, MethodInfo* method);
#define SortedSet_1_AreComparersEqual_m21830(__this/* static, unused */, ___set1, ___set2, method) (bool)SortedSet_1_AreComparersEqual_m21830_gshared((Object_t *)__this/* static, unused */, (SortedSet_1_t5495 *)___set1, (SortedSet_1_t5495 *)___set2, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::Split4Node(System.Collections.Generic.SortedSet`1/Node<T>)
 void SortedSet_1_Split4Node_m21831_gshared (Object_t * __this/* static, unused */, Node_t5497 * ___node, MethodInfo* method);
#define SortedSet_1_Split4Node_m21831(__this/* static, unused */, ___node, method) (void)SortedSet_1_Split4Node_m21831_gshared((Object_t *)__this/* static, unused */, (Node_t5497 *)___node, method)
// T[] System.Collections.Generic.SortedSet`1<System.Object>::ToArray()
 ObjectU5BU5D_t126* SortedSet_1_ToArray_m21832_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_ToArray_m21832(__this, method) (ObjectU5BU5D_t126*)SortedSet_1_ToArray_m21832_gshared((SortedSet_1_t5495 *)__this, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_UnionWith_m21833_gshared (SortedSet_1_t5495 * __this, Object_t* ___other, MethodInfo* method);
#define SortedSet_1_UnionWith_m21833(__this, ___other, method) (void)SortedSet_1_UnionWith_m21833_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___other, method)
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Object>::ConstructRootFromSortedArray(T[],System.Int32,System.Int32,System.Collections.Generic.SortedSet`1/Node<T>)
 Node_t5497 * SortedSet_1_ConstructRootFromSortedArray_m21834_gshared (Object_t * __this/* static, unused */, ObjectU5BU5D_t126* ___arr, int32_t ___startIndex, int32_t ___endIndex, Node_t5497 * ___redNode, MethodInfo* method);
#define SortedSet_1_ConstructRootFromSortedArray_m21834(__this/* static, unused */, ___arr, ___startIndex, ___endIndex, ___redNode, method) (Node_t5497 *)SortedSet_1_ConstructRootFromSortedArray_m21834_gshared((Object_t *)__this/* static, unused */, (ObjectU5BU5D_t126*)___arr, (int32_t)___startIndex, (int32_t)___endIndex, (Node_t5497 *)___redNode, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::IntersectWith(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_IntersectWith_m21835_gshared (SortedSet_1_t5495 * __this, Object_t* ___other, MethodInfo* method);
#define SortedSet_1_IntersectWith_m21835(__this, ___other, method) (void)SortedSet_1_IntersectWith_m21835_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::IntersectWithEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_IntersectWithEnumerable_m21836_gshared (SortedSet_1_t5495 * __this, Object_t* ___other, MethodInfo* method);
#define SortedSet_1_IntersectWithEnumerable_m21836(__this, ___other, method) (void)SortedSet_1_IntersectWithEnumerable_m21836_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_ExceptWith_m21837_gshared (SortedSet_1_t5495 * __this, Object_t* ___other, MethodInfo* method);
#define SortedSet_1_ExceptWith_m21837(__this, ___other, method) (void)SortedSet_1_ExceptWith_m21837_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::SymmetricExceptWith(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_SymmetricExceptWith_m21838_gshared (SortedSet_1_t5495 * __this, Object_t* ___other, MethodInfo* method);
#define SortedSet_1_SymmetricExceptWith_m21838(__this, ___other, method) (void)SortedSet_1_SymmetricExceptWith_m21838_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::SymmetricExceptWithSameEC(System.Collections.Generic.ISet`1<T>)
 void SortedSet_1_SymmetricExceptWithSameEC_m21839_gshared (SortedSet_1_t5495 * __this, Object_t* ___other, MethodInfo* method);
#define SortedSet_1_SymmetricExceptWithSameEC_m21839(__this, ___other, method) (void)SortedSet_1_SymmetricExceptWithSameEC_m21839_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Generic.SortedSet`1<System.Object>::SymmetricExceptWithSameEC(T[])
 void SortedSet_1_SymmetricExceptWithSameEC_m21840_gshared (SortedSet_1_t5495 * __this, ObjectU5BU5D_t126* ___other, MethodInfo* method);
#define SortedSet_1_SymmetricExceptWithSameEC_m21840(__this, ___other, method) (void)SortedSet_1_SymmetricExceptWithSameEC_m21840_gshared((SortedSet_1_t5495 *)__this, (ObjectU5BU5D_t126*)___other, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::IsSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_IsSubsetOf_m21841_gshared (SortedSet_1_t5495 * __this, Object_t* ___other, MethodInfo* method);
#define SortedSet_1_IsSubsetOf_m21841(__this, ___other, method) (bool)SortedSet_1_IsSubsetOf_m21841_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::IsSubsetOfSortedSetWithSameEC(System.Collections.Generic.SortedSet`1<T>)
 bool SortedSet_1_IsSubsetOfSortedSetWithSameEC_m21842_gshared (SortedSet_1_t5495 * __this, SortedSet_1_t5495 * ___asSorted, MethodInfo* method);
#define SortedSet_1_IsSubsetOfSortedSetWithSameEC_m21842(__this, ___asSorted, method) (bool)SortedSet_1_IsSubsetOfSortedSetWithSameEC_m21842_gshared((SortedSet_1_t5495 *)__this, (SortedSet_1_t5495 *)___asSorted, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::IsProperSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_IsProperSubsetOf_m21843_gshared (SortedSet_1_t5495 * __this, Object_t* ___other, MethodInfo* method);
#define SortedSet_1_IsProperSubsetOf_m21843(__this, ___other, method) (bool)SortedSet_1_IsProperSubsetOf_m21843_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::IsSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_IsSupersetOf_m21844_gshared (SortedSet_1_t5495 * __this, Object_t* ___other, MethodInfo* method);
#define SortedSet_1_IsSupersetOf_m21844(__this, ___other, method) (bool)SortedSet_1_IsSupersetOf_m21844_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::IsProperSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_IsProperSupersetOf_m21845_gshared (SortedSet_1_t5495 * __this, Object_t* ___other, MethodInfo* method);
#define SortedSet_1_IsProperSupersetOf_m21845(__this, ___other, method) (bool)SortedSet_1_IsProperSupersetOf_m21845_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_SetEquals_m21846_gshared (SortedSet_1_t5495 * __this, Object_t* ___other, MethodInfo* method);
#define SortedSet_1_SetEquals_m21846(__this, ___other, method) (bool)SortedSet_1_SetEquals_m21846_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Generic.SortedSet`1<System.Object>::Overlaps(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_Overlaps_m21847_gshared (SortedSet_1_t5495 * __this, Object_t* ___other, MethodInfo* method);
#define SortedSet_1_Overlaps_m21847(__this, ___other, method) (bool)SortedSet_1_Overlaps_m21847_gshared((SortedSet_1_t5495 *)__this, (Object_t*)___other, method)
// System.Collections.Generic.SortedSet`1/ElementCount<T> System.Collections.Generic.SortedSet`1<System.Object>::CheckUniqueAndUnfoundElements(System.Collections.Generic.IEnumerable`1<T>,System.Boolean)
 ElementCount_t5502  SortedSet_1_CheckUniqueAndUnfoundElements_m21848 (SortedSet_1_t5495 * __this, Object_t* ___other, bool ___returnIfUnfound, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.SortedSet`1<System.Object>::RemoveWhere(System.Predicate`1<T>)
 int32_t SortedSet_1_RemoveWhere_m21849_gshared (SortedSet_1_t5495 * __this, Predicate_1_t4554 * ___match, MethodInfo* method);
#define SortedSet_1_RemoveWhere_m21849(__this, ___match, method) (int32_t)SortedSet_1_RemoveWhere_m21849_gshared((SortedSet_1_t5495 *)__this, (Predicate_1_t4554 *)___match, method)
// T System.Collections.Generic.SortedSet`1<System.Object>::get_Min()
 Object_t * SortedSet_1_get_Min_m21850_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_get_Min_m21850(__this, method) (Object_t *)SortedSet_1_get_Min_m21850_gshared((SortedSet_1_t5495 *)__this, method)
// T System.Collections.Generic.SortedSet`1<System.Object>::get_Max()
 Object_t * SortedSet_1_get_Max_m21851_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_get_Max_m21851(__this, method) (Object_t *)SortedSet_1_get_Max_m21851_gshared((SortedSet_1_t5495 *)__this, method)
// System.Collections.Generic.IEnumerable`1<T> System.Collections.Generic.SortedSet`1<System.Object>::Reverse()
 Object_t* SortedSet_1_Reverse_m21852_gshared (SortedSet_1_t5495 * __this, MethodInfo* method);
#define SortedSet_1_Reverse_m21852(__this, method) (Object_t*)SortedSet_1_Reverse_m21852_gshared((SortedSet_1_t5495 *)__this, method)
// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1<System.Object>::GetViewBetween(T,T)
 SortedSet_1_t5495 * SortedSet_1_GetViewBetween_m21853_gshared (SortedSet_1_t5495 * __this, Object_t * ___lowerValue, Object_t * ___upperValue, MethodInfo* method);
#define SortedSet_1_GetViewBetween_m21853(__this, ___lowerValue, ___upperValue, method) (SortedSet_1_t5495 *)SortedSet_1_GetViewBetween_m21853_gshared((SortedSet_1_t5495 *)__this, (Object_t *)___lowerValue, (Object_t *)___upperValue, method)
// System.Int32 System.Collections.Generic.SortedSet`1<System.Object>::log2(System.Int32)
 int32_t SortedSet_1_log2_m21854_gshared (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method);
#define SortedSet_1_log2_m21854(__this/* static, unused */, ___value, method) (int32_t)SortedSet_1_log2_m21854_gshared((Object_t *)__this/* static, unused */, (int32_t)___value, method)
