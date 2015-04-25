#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>
struct TreeSubSet_t5510;
// System.Collections.Generic.SortedSet`1<System.Object>
struct SortedSet_1_t5495;
// System.Object
struct Object_t;
// System.Collections.Generic.TreeWalkPredicate`1<System.Object>
struct TreeWalkPredicate_1_t5498;
// System.Collections.Generic.SortedSet`1/Node<System.Object>
struct Node_t5497;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;

// System.Void System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::.ctor(System.Collections.Generic.SortedSet`1<T>,T,T,System.Boolean,System.Boolean)
 void TreeSubSet__ctor_m21892_gshared (TreeSubSet_t5510 * __this, SortedSet_1_t5495 * ___Underlying, Object_t * ___Min, Object_t * ___Max, bool ___lowerBoundActive, bool ___upperBoundActive, MethodInfo* method);
#define TreeSubSet__ctor_m21892(__this, ___Underlying, ___Min, ___Max, ___lowerBoundActive, ___upperBoundActive, method) (void)TreeSubSet__ctor_m21892_gshared((TreeSubSet_t5510 *)__this, (SortedSet_1_t5495 *)___Underlying, (Object_t *)___Min, (Object_t *)___Max, (bool)___lowerBoundActive, (bool)___upperBoundActive, method)
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::AddIfNotPresent(T)
 bool TreeSubSet_AddIfNotPresent_m21893_gshared (TreeSubSet_t5510 * __this, Object_t * ___item, MethodInfo* method);
#define TreeSubSet_AddIfNotPresent_m21893(__this, ___item, method) (bool)TreeSubSet_AddIfNotPresent_m21893_gshared((TreeSubSet_t5510 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::Contains(T)
 bool TreeSubSet_Contains_m21894_gshared (TreeSubSet_t5510 * __this, Object_t * ___item, MethodInfo* method);
#define TreeSubSet_Contains_m21894(__this, ___item, method) (bool)TreeSubSet_Contains_m21894_gshared((TreeSubSet_t5510 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::DoRemove(T)
 bool TreeSubSet_DoRemove_m21895_gshared (TreeSubSet_t5510 * __this, Object_t * ___item, MethodInfo* method);
#define TreeSubSet_DoRemove_m21895(__this, ___item, method) (bool)TreeSubSet_DoRemove_m21895_gshared((TreeSubSet_t5510 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::Clear()
 void TreeSubSet_Clear_m21896_gshared (TreeSubSet_t5510 * __this, MethodInfo* method);
#define TreeSubSet_Clear_m21896(__this, method) (void)TreeSubSet_Clear_m21896_gshared((TreeSubSet_t5510 *)__this, method)
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::IsWithinRange(T)
 bool TreeSubSet_IsWithinRange_m21897_gshared (TreeSubSet_t5510 * __this, Object_t * ___item, MethodInfo* method);
#define TreeSubSet_IsWithinRange_m21897(__this, ___item, method) (bool)TreeSubSet_IsWithinRange_m21897_gshared((TreeSubSet_t5510 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::InOrderTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>,System.Boolean)
 bool TreeSubSet_InOrderTreeWalk_m21898_gshared (TreeSubSet_t5510 * __this, TreeWalkPredicate_1_t5498 * ___action, bool ___reverse, MethodInfo* method);
#define TreeSubSet_InOrderTreeWalk_m21898(__this, ___action, ___reverse, method) (bool)TreeSubSet_InOrderTreeWalk_m21898_gshared((TreeSubSet_t5510 *)__this, (TreeWalkPredicate_1_t5498 *)___action, (bool)___reverse, method)
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::BreadthFirstTreeWalk(System.Collections.Generic.TreeWalkPredicate`1<T>)
 bool TreeSubSet_BreadthFirstTreeWalk_m21899_gshared (TreeSubSet_t5510 * __this, TreeWalkPredicate_1_t5498 * ___action, MethodInfo* method);
#define TreeSubSet_BreadthFirstTreeWalk_m21899(__this, ___action, method) (bool)TreeSubSet_BreadthFirstTreeWalk_m21899_gshared((TreeSubSet_t5510 *)__this, (TreeWalkPredicate_1_t5498 *)___action, method)
// System.Collections.Generic.SortedSet`1/Node<T> System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::FindNode(T)
 Node_t5497 * TreeSubSet_FindNode_m21900_gshared (TreeSubSet_t5510 * __this, Object_t * ___item, MethodInfo* method);
#define TreeSubSet_FindNode_m21900(__this, ___item, method) (Node_t5497 *)TreeSubSet_FindNode_m21900_gshared((TreeSubSet_t5510 *)__this, (Object_t *)___item, method)
// System.Int32 System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::InternalIndexOf(T)
 int32_t TreeSubSet_InternalIndexOf_m21901_gshared (TreeSubSet_t5510 * __this, Object_t * ___item, MethodInfo* method);
#define TreeSubSet_InternalIndexOf_m21901(__this, ___item, method) (int32_t)TreeSubSet_InternalIndexOf_m21901_gshared((TreeSubSet_t5510 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::VersionCheck()
 void TreeSubSet_VersionCheck_m21902_gshared (TreeSubSet_t5510 * __this, MethodInfo* method);
#define TreeSubSet_VersionCheck_m21902(__this, method) (void)TreeSubSet_VersionCheck_m21902_gshared((TreeSubSet_t5510 *)__this, method)
// System.Void System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::VersionCheckImpl()
 void TreeSubSet_VersionCheckImpl_m21903_gshared (TreeSubSet_t5510 * __this, MethodInfo* method);
#define TreeSubSet_VersionCheckImpl_m21903(__this, method) (void)TreeSubSet_VersionCheckImpl_m21903_gshared((TreeSubSet_t5510 *)__this, method)
// System.Collections.Generic.SortedSet`1<T> System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::GetViewBetween(T,T)
 SortedSet_1_t5495 * TreeSubSet_GetViewBetween_m21904_gshared (TreeSubSet_t5510 * __this, Object_t * ___lowerValue, Object_t * ___upperValue, MethodInfo* method);
#define TreeSubSet_GetViewBetween_m21904(__this, ___lowerValue, ___upperValue, method) (SortedSet_1_t5495 *)TreeSubSet_GetViewBetween_m21904_gshared((TreeSubSet_t5510 *)__this, (Object_t *)___lowerValue, (Object_t *)___upperValue, method)
// System.Void System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::IntersectWithEnumerable(System.Collections.Generic.IEnumerable`1<T>)
 void TreeSubSet_IntersectWithEnumerable_m21905_gshared (TreeSubSet_t5510 * __this, Object_t* ___other, MethodInfo* method);
#define TreeSubSet_IntersectWithEnumerable_m21905(__this, ___other, method) (void)TreeSubSet_IntersectWithEnumerable_m21905_gshared((TreeSubSet_t5510 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Generic.SortedSet`1/TreeSubSet<System.Object>::<VersionCheckImpl>b__19(System.Collections.Generic.SortedSet`1/Node<T>)
 bool TreeSubSet_U3CVersionCheckImplU3Eb__19_m21906_gshared (TreeSubSet_t5510 * __this, Node_t5497 * ___n, MethodInfo* method);
#define TreeSubSet_U3CVersionCheckImplU3Eb__19_m21906(__this, ___n, method) (bool)TreeSubSet_U3CVersionCheckImplU3Eb__19_m21906_gshared((TreeSubSet_t5510 *)__this, (Node_t5497 *)___n, method)
