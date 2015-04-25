#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedSet`1<System.Int32>
struct SortedSet_1_t5588;
// System.Collections.Generic.IComparer`1<System.Int32>
struct IComparer_1_t4389;
// System.Object
struct Object_t;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4700;
// System.Collections.Generic.TreeWalkPredicate`1<System.Int32>
struct TreeWalkPredicate_1_t5589;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.Array
struct Array_t;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4704;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.Generic.SortedSet`1/Node<System.Int32>
struct Node_t5587;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.SortedSet`1<System.Int32>>
struct IEqualityComparer_1_t5590;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t4701;
// System.Collections.Generic.ISet`1<System.Int32>
struct ISet_1_t5591;
// System.Predicate`1<System.Int32>
struct Predicate_1_t1061;
// System.Collections.Generic.SortedSet`1/Enumerator<System.Int32>
#include "Rackspace_Collections_Immutable_System_Collections_Generic_S_42.h"
// System.Collections.Generic.TreeRotation
#include "Rackspace_Collections_Immutable_System_Collections_Generic_T_0.h"
// System.Collections.Generic.SortedSet`1/ElementCount<System.Int32>
#include "Rackspace_Collections_Immutable_System_Collections_Generic_S_43.h"

// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::.ctor()
 void SortedSet_1__ctor_m22716 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::.ctor(System.Collections.Generic.IComparer`1<T>)
 void SortedSet_1__ctor_m22717 (SortedSet_1_t5588 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1__ctor_m22718 (SortedSet_1_t5588 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IComparer`1<T>)
 void SortedSet_1__ctor_m22719 (SortedSet_1_t5588 * __this, Object_t* ___collection, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::AddAllElements(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_AddAllElements_m22720 (SortedSet_1_t5588 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::RemoveAllElements(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_RemoveAllElements_m22721 (SortedSet_1_t5588 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::ContainsAllElements(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_ContainsAllElements_m22722 (SortedSet_1_t5588 * __this, Object_t* ___collection, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::InOrderTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>)
 bool SortedSet_1_InOrderTreeWalk_m22723 (SortedSet_1_t5588 * __this, TreeWalkPredicate_1_t5589 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::InOrderTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>,System.Boolean)
 bool SortedSet_1_InOrderTreeWalk_m22724 (SortedSet_1_t5588 * __this, TreeWalkPredicate_1_t5589 * ___action, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::BreadthFirstTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>)
 bool SortedSet_1_BreadthFirstTreeWalk_m22725 (SortedSet_1_t5588 * __this, TreeWalkPredicate_1_t5589 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.SortedSet`1<System.Int32>::get_Count()
 int32_t SortedSet_1_get_Count_m22726 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IComparer`1<T> System.Collections.Generic.SortedSet`1<System.Int32>::get_Comparer()
 Object_t* SortedSet_1_get_Comparer_m22727 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m22728 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::System.Collections.ICollection.get_IsSynchronized()
 bool SortedSet_1_System_Collections_ICollection_get_IsSynchronized_m22729 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Generic.SortedSet`1<System.Int32>::System.Collections.ICollection.get_SyncRoot()
 Object_t * SortedSet_1_System_Collections_ICollection_get_SyncRoot_m22730 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::VersionCheck()
 void SortedSet_1_VersionCheck_m22731 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::IsWithinRange(T)
 bool SortedSet_1_IsWithinRange_m22732 (SortedSet_1_t5588 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::Add(T)
 bool SortedSet_1_Add_m22733 (SortedSet_1_t5588 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
 void SortedSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m22734 (SortedSet_1_t5588 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::AddIfNotPresent(T)
 bool SortedSet_1_AddIfNotPresent_m22735 (SortedSet_1_t5588 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::Remove(T)
 bool SortedSet_1_Remove_m22736 (SortedSet_1_t5588 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::DoRemove(T)
 bool SortedSet_1_DoRemove_m22737 (SortedSet_1_t5588 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::Clear()
 void SortedSet_1_Clear_m22738 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::Contains(T)
 bool SortedSet_1_Contains_m22739 (SortedSet_1_t5588 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::CopyTo(T[])
 void SortedSet_1_CopyTo_m22740 (SortedSet_1_t5588 * __this, Int32U5BU5D_t156* ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::CopyTo(T[],System.Int32)
 void SortedSet_1_CopyTo_m22741 (SortedSet_1_t5588 * __this, Int32U5BU5D_t156* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::CopyTo(T[],System.Int32,System.Int32)
 void SortedSet_1_CopyTo_m22742 (SortedSet_1_t5588 * __this, Int32U5BU5D_t156* ___array, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void SortedSet_1_System_Collections_ICollection_CopyTo_m22743 (SortedSet_1_t5588 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1/Enumerator<T> System.Collections.Generic.SortedSet`1<System.Int32>::GetEnumerator()
 Enumerator_t5592  SortedSet_1_GetEnumerator_m22744 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.SortedSet`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* SortedSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m22745 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.SortedSet`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * SortedSet_1_System_Collections_IEnumerable_GetEnumerator_m22746 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Int32>::GetSibling(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
 Node_t5587 * SortedSet_1_GetSibling_m22747 (Object_t * __this/* static, unused */, Node_t5587 * ___node, Node_t5587 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::InsertionBalance(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>&,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
 void SortedSet_1_InsertionBalance_m22748 (SortedSet_1_t5588 * __this, Node_t5587 * ___current, Node_t5587 ** ___parent, Node_t5587 * ___grandParent, Node_t5587 * ___greatGrandParent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::Is2Node(System.Collections.Generic.SortedSet`1/Node<T>)
 bool SortedSet_1_Is2Node_m22749 (Object_t * __this/* static, unused */, Node_t5587 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::Is4Node(System.Collections.Generic.SortedSet`1/Node<T>)
 bool SortedSet_1_Is4Node_m22750 (Object_t * __this/* static, unused */, Node_t5587 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::IsBlack(System.Collections.Generic.SortedSet`1/Node<T>)
 bool SortedSet_1_IsBlack_m22751 (Object_t * __this/* static, unused */, Node_t5587 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::IsNullOrBlack(System.Collections.Generic.SortedSet`1/Node<T>)
 bool SortedSet_1_IsNullOrBlack_m22752 (Object_t * __this/* static, unused */, Node_t5587 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::IsRed(System.Collections.Generic.SortedSet`1/Node<T>)
 bool SortedSet_1_IsRed_m22753 (Object_t * __this/* static, unused */, Node_t5587 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::Merge2Nodes(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
 void SortedSet_1_Merge2Nodes_m22754 (Object_t * __this/* static, unused */, Node_t5587 * ___parent, Node_t5587 * ___child1, Node_t5587 * ___child2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::ReplaceChildOfNodeOrRoot(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
 void SortedSet_1_ReplaceChildOfNodeOrRoot_m22755 (SortedSet_1_t5588 * __this, Node_t5587 * ___parent, Node_t5587 * ___child, Node_t5587 * ___newChild, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::ReplaceNode(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
 void SortedSet_1_ReplaceNode_m22756 (SortedSet_1_t5588 * __this, Node_t5587 * ___match, Node_t5587 * ___parentOfMatch, Node_t5587 * ___succesor, Node_t5587 * ___parentOfSuccesor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Int32>::FindNode(T)
 Node_t5587 * SortedSet_1_FindNode_m22757 (SortedSet_1_t5588 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.SortedSet`1<System.Int32>::InternalIndexOf(T)
 int32_t SortedSet_1_InternalIndexOf_m22758 (SortedSet_1_t5588 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Int32>::FindRange(T,T)
 Node_t5587 * SortedSet_1_FindRange_m22759 (SortedSet_1_t5588 * __this, int32_t ___from, int32_t ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Int32>::FindRange(T,T,System.Boolean,System.Boolean)
 Node_t5587 * SortedSet_1_FindRange_m22760 (SortedSet_1_t5588 * __this, int32_t ___from, int32_t ___to, bool ___lowerBoundActive, bool ___upperBoundActive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::UpdateVersion()
 void SortedSet_1_UpdateVersion_m22761 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Int32>::RotateLeft(System.Collections.Generic.SortedSet`1/Node<T>)
 Node_t5587 * SortedSet_1_RotateLeft_m22762 (Object_t * __this/* static, unused */, Node_t5587 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Int32>::RotateLeftRight(System.Collections.Generic.SortedSet`1/Node<T>)
 Node_t5587 * SortedSet_1_RotateLeftRight_m22763 (Object_t * __this/* static, unused */, Node_t5587 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Int32>::RotateRight(System.Collections.Generic.SortedSet`1/Node<T>)
 Node_t5587 * SortedSet_1_RotateRight_m22764 (Object_t * __this/* static, unused */, Node_t5587 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Int32>::RotateRightLeft(System.Collections.Generic.SortedSet`1/Node<T>)
 Node_t5587 * SortedSet_1_RotateRightLeft_m22765 (Object_t * __this/* static, unused */, Node_t5587 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.TreeRotation System.Collections.Generic.SortedSet`1<System.Int32>::RotationNeeded(System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>,System.Collections.Generic.SortedSet`1/Node<T>)
 int32_t SortedSet_1_RotationNeeded_m22766 (Object_t * __this/* static, unused */, Node_t5587 * ___parent, Node_t5587 * ___current, Node_t5587 * ___sibling, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.SortedSet`1<T>> System.Collections.Generic.SortedSet`1<System.Int32>::CreateSetComparer()
 Object_t* SortedSet_1_CreateSetComparer_m22767 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEqualityComparer`1<System.Collections.Generic.SortedSet`1<T>> System.Collections.Generic.SortedSet`1<System.Int32>::CreateSetComparer(System.Collections.Generic.IEqualityComparer`1<T>)
 Object_t* SortedSet_1_CreateSetComparer_m22768 (Object_t * __this/* static, unused */, Object_t* ___memberEqualityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::SortedSetEquals(System.Collections.Generic.SortedSet`1<T>,System.Collections.Generic.SortedSet`1<T>,System.Collections.Generic.IComparer`1<T>)
 bool SortedSet_1_SortedSetEquals_m22769 (Object_t * __this/* static, unused */, SortedSet_1_t5588 * ___set1, SortedSet_1_t5588 * ___set2, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::AreComparersEqual(System.Collections.Generic.SortedSet`1<T>,System.Collections.Generic.SortedSet`1<T>)
 bool SortedSet_1_AreComparersEqual_m22770 (Object_t * __this/* static, unused */, SortedSet_1_t5588 * ___set1, SortedSet_1_t5588 * ___set2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::Split4Node(System.Collections.Generic.SortedSet`1/Node<T>)
 void SortedSet_1_Split4Node_m22771 (Object_t * __this/* static, unused */, Node_t5587 * ___node, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T[] System.Collections.Generic.SortedSet`1<System.Int32>::ToArray()
 Int32U5BU5D_t156* SortedSet_1_ToArray_m22772 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_UnionWith_m22773 (SortedSet_1_t5588 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1<System.Int32>::ConstructRootFromSortedArray(T[],System.Int32,System.Int32,System.Collections.Generic.SortedSet`1/Node<T>)
 Node_t5587 * SortedSet_1_ConstructRootFromSortedArray_m22774 (Object_t * __this/* static, unused */, Int32U5BU5D_t156* ___arr, int32_t ___startIndex, int32_t ___endIndex, Node_t5587 * ___redNode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::IntersectWith(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_IntersectWith_m22775 (SortedSet_1_t5588 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::IntersectWithEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_IntersectWithEnumerable_m22776 (SortedSet_1_t5588 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_ExceptWith_m22777 (SortedSet_1_t5588 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::SymmetricExceptWith(System.Collections.Generic.IEnumerable`1<T>)
 void SortedSet_1_SymmetricExceptWith_m22778 (SortedSet_1_t5588 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::SymmetricExceptWithSameEC(System.Collections.Generic.ISet`1<T>)
 void SortedSet_1_SymmetricExceptWithSameEC_m22779 (SortedSet_1_t5588 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1<System.Int32>::SymmetricExceptWithSameEC(T[])
 void SortedSet_1_SymmetricExceptWithSameEC_m22780 (SortedSet_1_t5588 * __this, Int32U5BU5D_t156* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::IsSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_IsSubsetOf_m22781 (SortedSet_1_t5588 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::IsSubsetOfSortedSetWithSameEC(System.Collections.Generic.SortedSet`1<T>)
 bool SortedSet_1_IsSubsetOfSortedSetWithSameEC_m22782 (SortedSet_1_t5588 * __this, SortedSet_1_t5588 * ___asSorted, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::IsProperSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_IsProperSubsetOf_m22783 (SortedSet_1_t5588 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::IsSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_IsSupersetOf_m22784 (SortedSet_1_t5588 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::IsProperSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_IsProperSupersetOf_m22785 (SortedSet_1_t5588 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_SetEquals_m22786 (SortedSet_1_t5588 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1<System.Int32>::Overlaps(System.Collections.Generic.IEnumerable`1<T>)
 bool SortedSet_1_Overlaps_m22787 (SortedSet_1_t5588 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1/ElementCount<T> System.Collections.Generic.SortedSet`1<System.Int32>::CheckUniqueAndUnfoundElements(System.Collections.Generic.IEnumerable`1<T>,System.Boolean)
 ElementCount_t5593  SortedSet_1_CheckUniqueAndUnfoundElements_m22788 (SortedSet_1_t5588 * __this, Object_t* ___other, bool ___returnIfUnfound, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.SortedSet`1<System.Int32>::RemoveWhere(System.Predicate`1<T>)
 int32_t SortedSet_1_RemoveWhere_m22789 (SortedSet_1_t5588 * __this, Predicate_1_t1061 * ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.SortedSet`1<System.Int32>::get_Min()
 int32_t SortedSet_1_get_Min_m22790 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// T System.Collections.Generic.SortedSet`1<System.Int32>::get_Max()
 int32_t SortedSet_1_get_Max_m22791 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<T> System.Collections.Generic.SortedSet`1<System.Int32>::Reverse()
 Object_t* SortedSet_1_Reverse_m22792 (SortedSet_1_t5588 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1<System.Int32>::GetViewBetween(T,T)
 SortedSet_1_t5588 * SortedSet_1_GetViewBetween_m22793 (SortedSet_1_t5588 * __this, int32_t ___lowerValue, int32_t ___upperValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.SortedSet`1<System.Int32>::log2(System.Int32)
 int32_t SortedSet_1_log2_m22794 (Object_t * __this/* static, unused */, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
