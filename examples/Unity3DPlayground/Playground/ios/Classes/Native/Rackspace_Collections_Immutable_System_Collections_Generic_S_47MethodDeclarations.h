#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>
struct TreeSubSet_t5601;
// System.Collections.Generic.SortedSet`1<System.Int32>
struct SortedSet_1_t5588;
// System.Collections.Generic.TreeWalkPredicate`1<System.Int32>
struct TreeWalkPredicate_1_t5589;
// System.Collections.Generic.SortedSet`1/Node<System.Int32>
struct Node_t5587;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4700;

// System.Void System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::.ctor(System.Collections.Generic.SortedSet`1<T>,T,T,System.Boolean,System.Boolean)
 void TreeSubSet__ctor_m22832 (TreeSubSet_t5601 * __this, SortedSet_1_t5588 * ___Underlying, int32_t ___Min, int32_t ___Max, bool ___lowerBoundActive, bool ___upperBoundActive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::AddIfNotPresent(T)
 bool TreeSubSet_AddIfNotPresent_m22833 (TreeSubSet_t5601 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::Contains(T)
 bool TreeSubSet_Contains_m22834 (TreeSubSet_t5601 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::DoRemove(T)
 bool TreeSubSet_DoRemove_m22835 (TreeSubSet_t5601 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::Clear()
 void TreeSubSet_Clear_m22836 (TreeSubSet_t5601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::IsWithinRange(T)
 bool TreeSubSet_IsWithinRange_m22837 (TreeSubSet_t5601 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::InOrderTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>,System.Boolean)
 bool TreeSubSet_InOrderTreeWalk_m22838 (TreeSubSet_t5601 * __this, TreeWalkPredicate_1_t5589 * ___action, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::BreadthFirstTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>)
 bool TreeSubSet_BreadthFirstTreeWalk_m22839 (TreeSubSet_t5601 * __this, TreeWalkPredicate_1_t5589 * ___action, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::FindNode(T)
 Node_t5587 * TreeSubSet_FindNode_m22840 (TreeSubSet_t5601 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::InternalIndexOf(T)
 int32_t TreeSubSet_InternalIndexOf_m22841 (TreeSubSet_t5601 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::VersionCheck()
 void TreeSubSet_VersionCheck_m22842 (TreeSubSet_t5601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::VersionCheckImpl()
 void TreeSubSet_VersionCheckImpl_m22843 (TreeSubSet_t5601 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::GetViewBetween(T,T)
 SortedSet_1_t5588 * TreeSubSet_GetViewBetween_m22844 (TreeSubSet_t5601 * __this, int32_t ___lowerValue, int32_t ___upperValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::IntersectWithEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void TreeSubSet_IntersectWithEnumerable_m22845 (TreeSubSet_t5601 * __this, Object_t* ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Int32>::<VersionCheckImpl>b__19(System.Collections.Generic.SortedSet`1/Node<T>)
 bool TreeSubSet_U3CVersionCheckImplU3Eb__19_m22846 (TreeSubSet_t5601 * __this, Node_t5587 * ___n, MethodInfo* method) IL2CPP_METHOD_ATTR;
