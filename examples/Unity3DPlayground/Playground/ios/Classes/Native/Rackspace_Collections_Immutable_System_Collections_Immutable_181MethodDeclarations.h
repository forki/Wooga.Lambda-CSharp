#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Immutable.ImmutableHashSet`1<System.Object>
struct ImmutableHashSet_1_t5757;
// System.Collections.Generic.IEqualityComparer`1<System.Object>
struct IEqualityComparer_1_t4468;
// System.Object
struct Object_t;
// System.Collections.Immutable.IBinaryTree
struct IBinaryTree_t960;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>
struct SortedInt32KeyNode_1_t5759;
// System.Collections.Immutable.IImmutableSet`1<System.Object>
struct IImmutableSet_1_t5760;
// System.Collections.Immutable.ImmutableHashSet`1/Builder<System.Object>
struct Builder_t5761;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_t4557;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Array
struct Array_t;
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
// System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_185.h"
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableHashSet`1/HashBucket<System.Object>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_10.h"

// System.Void System.Collections.Immutable.ImmutableHashSet`1<System.Object>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
 void ImmutableHashSet_1__ctor_m24368_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___equalityComparer, MethodInfo* method);
#define ImmutableHashSet_1__ctor_m24368(__this, ___equalityComparer, method) (void)ImmutableHashSet_1__ctor_m24368_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___equalityComparer, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1<System.Object>::.ctor(System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>>,System.Collections.Generic.IEqualityComparer`1<T>,System.Int32)
 void ImmutableHashSet_1__ctor_m24369_gshared (ImmutableHashSet_1_t5757 * __this, SortedInt32KeyNode_1_t5759 * ___root, Object_t* ___equalityComparer, int32_t ___count, MethodInfo* method);
#define ImmutableHashSet_1__ctor_m24369(__this, ___root, ___equalityComparer, ___count, method) (void)ImmutableHashSet_1__ctor_m24369_gshared((ImmutableHashSet_1_t5757 *)__this, (SortedInt32KeyNode_1_t5759 *)___root, (Object_t*)___equalityComparer, (int32_t)___count, method)
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Clear()
 ImmutableHashSet_1_t5757 * ImmutableHashSet_1_Clear_m24370_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_Clear_m24370(__this, method) (ImmutableHashSet_1_t5757 *)ImmutableHashSet_1_Clear_m24370_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Int32 System.Collections.Immutable.ImmutableHashSet`1<System.Object>::get_Count()
 int32_t ImmutableHashSet_1_get_Count_m24371_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_get_Count_m24371(__this, method) (int32_t)ImmutableHashSet_1_get_Count_m24371_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::get_IsEmpty()
 bool ImmutableHashSet_1_get_IsEmpty_m24372_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_get_IsEmpty_m24372(__this, method) (bool)ImmutableHashSet_1_get_IsEmpty_m24372_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::get_KeyComparer()
 Object_t* ImmutableHashSet_1_get_KeyComparer_m24373_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_get_KeyComparer_m24373(__this, method) (Object_t*)ImmutableHashSet_1_get_KeyComparer_m24373_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.Clear()
 Object_t* ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Clear_m24374_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Clear_m24374(__this, method) (Object_t*)ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Clear_m24374_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Object System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.ICollection.get_SyncRoot()
 Object_t * ImmutableHashSet_1_System_Collections_ICollection_get_SyncRoot_m24375_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_ICollection_get_SyncRoot_m24375(__this, method) (Object_t *)ImmutableHashSet_1_System_Collections_ICollection_get_SyncRoot_m24375_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.ICollection.get_IsSynchronized()
 bool ImmutableHashSet_1_System_Collections_ICollection_get_IsSynchronized_m24376_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_ICollection_get_IsSynchronized_m24376(__this, method) (bool)ImmutableHashSet_1_System_Collections_ICollection_get_IsSynchronized_m24376_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Collections.Immutable.IBinaryTree System.Collections.Immutable.ImmutableHashSet`1<System.Object>::get_Root()
 Object_t * ImmutableHashSet_1_get_Root_m24377_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_get_Root_m24377(__this, method) (Object_t *)ImmutableHashSet_1_get_Root_m24377_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::get_Origin()
 MutationInput_t5762  ImmutableHashSet_1_get_Origin_m24378 (ImmutableHashSet_1_t5757 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableHashSet`1/Builder<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::ToBuilder()
 Builder_t5761 * ImmutableHashSet_1_ToBuilder_m24379_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_ToBuilder_m24379(__this, method) (Builder_t5761 *)ImmutableHashSet_1_ToBuilder_m24379_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Add(T)
 ImmutableHashSet_1_t5757 * ImmutableHashSet_1_Add_m24380_gshared (ImmutableHashSet_1_t5757 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableHashSet_1_Add_m24380(__this, ___item, method) (ImmutableHashSet_1_t5757 *)ImmutableHashSet_1_Add_m24380_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t *)___item, method)
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Remove(T)
 ImmutableHashSet_1_t5757 * ImmutableHashSet_1_Remove_m24381_gshared (ImmutableHashSet_1_t5757 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableHashSet_1_Remove_m24381(__this, ___item, method) (ImmutableHashSet_1_t5757 *)ImmutableHashSet_1_Remove_m24381_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::TryGetValue(T,T&)
 bool ImmutableHashSet_1_TryGetValue_m24382_gshared (ImmutableHashSet_1_t5757 * __this, Object_t * ___equalValue, Object_t ** ___actualValue, MethodInfo* method);
#define ImmutableHashSet_1_TryGetValue_m24382(__this, ___equalValue, ___actualValue, method) (bool)ImmutableHashSet_1_TryGetValue_m24382_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t *)___equalValue, (Object_t **)___actualValue, method)
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Union(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableHashSet_1_t5757 * ImmutableHashSet_1_Union_m24383_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_Union_m24383(__this, ___other, method) (ImmutableHashSet_1_t5757 *)ImmutableHashSet_1_Union_m24383_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Intersect(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableHashSet_1_t5757 * ImmutableHashSet_1_Intersect_m24384_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_Intersect_m24384(__this, ___other, method) (ImmutableHashSet_1_t5757 *)ImmutableHashSet_1_Intersect_m24384_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Except(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableHashSet_1_t5757 * ImmutableHashSet_1_Except_m24385_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_Except_m24385(__this, ___other, method) (ImmutableHashSet_1_t5757 *)ImmutableHashSet_1_Except_m24385_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::SymmetricExcept(System.Collections.Generic.IEnumerable`1<T>)
 ImmutableHashSet_1_t5757 * ImmutableHashSet_1_SymmetricExcept_m24386_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_SymmetricExcept_m24386(__this, ___other, method) (ImmutableHashSet_1_t5757 *)ImmutableHashSet_1_SymmetricExcept_m24386_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::SetEquals(System.Collections.Generic.IEnumerable`1<T>)
 bool ImmutableHashSet_1_SetEquals_m24387_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_SetEquals_m24387(__this, ___other, method) (bool)ImmutableHashSet_1_SetEquals_m24387_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::IsProperSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool ImmutableHashSet_1_IsProperSubsetOf_m24388_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_IsProperSubsetOf_m24388(__this, ___other, method) (bool)ImmutableHashSet_1_IsProperSubsetOf_m24388_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::IsProperSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool ImmutableHashSet_1_IsProperSupersetOf_m24389_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_IsProperSupersetOf_m24389(__this, ___other, method) (bool)ImmutableHashSet_1_IsProperSupersetOf_m24389_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::IsSubsetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool ImmutableHashSet_1_IsSubsetOf_m24390_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_IsSubsetOf_m24390(__this, ___other, method) (bool)ImmutableHashSet_1_IsSubsetOf_m24390_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::IsSupersetOf(System.Collections.Generic.IEnumerable`1<T>)
 bool ImmutableHashSet_1_IsSupersetOf_m24391_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_IsSupersetOf_m24391(__this, ___other, method) (bool)ImmutableHashSet_1_IsSupersetOf_m24391_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Overlaps(System.Collections.Generic.IEnumerable`1<T>)
 bool ImmutableHashSet_1_Overlaps_m24392_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_Overlaps_m24392(__this, ___other, method) (bool)ImmutableHashSet_1_Overlaps_m24392_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.Add(T)
 Object_t* ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Add_m24393_gshared (ImmutableHashSet_1_t5757 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Add_m24393(__this, ___item, method) (Object_t*)ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Add_m24393_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t *)___item, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.Remove(T)
 Object_t* ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Remove_m24394_gshared (ImmutableHashSet_1_t5757 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Remove_m24394(__this, ___item, method) (Object_t*)ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Remove_m24394_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t *)___item, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.Union(System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Union_m24395_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Union_m24395(__this, ___other, method) (Object_t*)ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Union_m24395_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.Intersect(System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Intersect_m24396_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Intersect_m24396(__this, ___other, method) (Object_t*)ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Intersect_m24396_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.Except(System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Except_m24397_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Except_m24397(__this, ___other, method) (Object_t*)ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_Except_m24397_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Collections.Immutable.IImmutableSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Immutable.IImmutableSet<T>.SymmetricExcept(System.Collections.Generic.IEnumerable`1<T>)
 Object_t* ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_SymmetricExcept_m24398_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_SymmetricExcept_m24398(__this, ___other, method) (Object_t*)ImmutableHashSet_1_System_Collections_Immutable_IImmutableSetU3CTU3E_SymmetricExcept_m24398_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Contains(T)
 bool ImmutableHashSet_1_Contains_m24399_gshared (ImmutableHashSet_1_t5757 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableHashSet_1_Contains_m24399(__this, ___item, method) (bool)ImmutableHashSet_1_Contains_m24399_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t *)___item, method)
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::WithComparer(System.Collections.Generic.IEqualityComparer`1<T>)
 ImmutableHashSet_1_t5757 * ImmutableHashSet_1_WithComparer_m24400_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___equalityComparer, MethodInfo* method);
#define ImmutableHashSet_1_WithComparer_m24400(__this, ___equalityComparer, method) (ImmutableHashSet_1_t5757 *)ImmutableHashSet_1_WithComparer_m24400_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___equalityComparer, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Generic.ISet<T>.Add(T)
 bool ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_Add_m24401_gshared (ImmutableHashSet_1_t5757 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_Add_m24401(__this, ___item, method) (bool)ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_Add_m24401_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Generic.ISet<T>.ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
 void ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_ExceptWith_m24402_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_ExceptWith_m24402(__this, ___other, method) (void)ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_ExceptWith_m24402_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Generic.ISet<T>.IntersectWith(System.Collections.Generic.IEnumerable`1<T>)
 void ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_IntersectWith_m24403_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_IntersectWith_m24403(__this, ___other, method) (void)ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_IntersectWith_m24403_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Generic.ISet<T>.SymmetricExceptWith(System.Collections.Generic.IEnumerable`1<T>)
 void ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_SymmetricExceptWith_m24404_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_SymmetricExceptWith_m24404(__this, ___other, method) (void)ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_SymmetricExceptWith_m24404_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Generic.ISet<T>.UnionWith(System.Collections.Generic.IEnumerable`1<T>)
 void ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_UnionWith_m24405_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___other, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_UnionWith_m24405(__this, ___other, method) (void)ImmutableHashSet_1_System_Collections_Generic_ISetU3CTU3E_UnionWith_m24405_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___other, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24406_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24406(__this, method) (bool)ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m24406_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
 void ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24407_gshared (ImmutableHashSet_1_t5757 * __this, ObjectU5BU5D_t126* ___array, int32_t ___arrayIndex, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24407(__this, ___array, ___arrayIndex, method) (void)ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m24407_gshared((ImmutableHashSet_1_t5757 *)__this, (ObjectU5BU5D_t126*)___array, (int32_t)___arrayIndex, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Add(T)
 void ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24408_gshared (ImmutableHashSet_1_t5757 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24408(__this, ___item, method) (void)ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m24408_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Clear()
 void ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m24409_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m24409(__this, method) (void)ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Clear_m24409_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Generic.ICollection<T>.Remove(T)
 bool ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m24410_gshared (ImmutableHashSet_1_t5757 * __this, Object_t * ___item, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m24410(__this, ___item, method) (bool)ImmutableHashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Remove_m24410_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void ImmutableHashSet_1_System_Collections_ICollection_CopyTo_m24411_gshared (ImmutableHashSet_1_t5757 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_ICollection_CopyTo_m24411(__this, ___array, ___arrayIndex, method) (void)ImmutableHashSet_1_System_Collections_ICollection_CopyTo_m24411_gshared((ImmutableHashSet_1_t5757 *)__this, (Array_t *)___array, (int32_t)___arrayIndex, method)
// System.Collections.Immutable.ImmutableHashSet`1/Enumerator<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::GetEnumerator()
 Enumerator_t5763  ImmutableHashSet_1_GetEnumerator_m24412 (ImmutableHashSet_1_t5757 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* ImmutableHashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24413_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24413(__this, method) (Object_t*)ImmutableHashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m24413_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Collections.IEnumerator System.Collections.Immutable.ImmutableHashSet`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ImmutableHashSet_1_System_Collections_IEnumerable_GetEnumerator_m24414_gshared (ImmutableHashSet_1_t5757 * __this, MethodInfo* method);
#define ImmutableHashSet_1_System_Collections_IEnumerable_GetEnumerator_m24414(__this, method) (Object_t *)ImmutableHashSet_1_System_Collections_IEnumerable_GetEnumerator_m24414_gshared((ImmutableHashSet_1_t5757 *)__this, method)
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::IsSupersetOf(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T>)
 bool ImmutableHashSet_1_IsSupersetOf_m24415 (Object_t * __this/* static, unused */, Object_t* ___other, MutationInput_t5762  ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableHashSet`1/MutationResult<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Add(T,System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T>)
 MutationResult_t5764  ImmutableHashSet_1_Add_m24416 (Object_t * __this/* static, unused */, Object_t * ___item, MutationInput_t5762  ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableHashSet`1/MutationResult<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Remove(T,System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T>)
 MutationResult_t5764  ImmutableHashSet_1_Remove_m24417 (Object_t * __this/* static, unused */, Object_t * ___item, MutationInput_t5762  ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Contains(T,System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T>)
 bool ImmutableHashSet_1_Contains_m24418 (Object_t * __this/* static, unused */, Object_t * ___item, MutationInput_t5762  ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableHashSet`1/MutationResult<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Union(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T>)
 MutationResult_t5764  ImmutableHashSet_1_Union_m24419 (Object_t * __this/* static, unused */, Object_t* ___other, MutationInput_t5762  ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Overlaps(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T>)
 bool ImmutableHashSet_1_Overlaps_m24420 (Object_t * __this/* static, unused */, Object_t* ___other, MutationInput_t5762  ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::SetEquals(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T>)
 bool ImmutableHashSet_1_SetEquals_m24421 (Object_t * __this/* static, unused */, Object_t* ___other, MutationInput_t5762  ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::UpdateRoot(System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>>,System.Int32,System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>)
 SortedInt32KeyNode_1_t5759 * ImmutableHashSet_1_UpdateRoot_m24422 (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5759 * ___root, int32_t ___hashCode, HashBucket_t5765  ___newBucket, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableHashSet`1/MutationResult<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Intersect(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T>)
 MutationResult_t5764  ImmutableHashSet_1_Intersect_m24423 (Object_t * __this/* static, unused */, Object_t* ___other, MutationInput_t5762  ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableHashSet`1/MutationResult<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Except(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>,System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>>)
 MutationResult_t5764  ImmutableHashSet_1_Except_m24424 (Object_t * __this/* static, unused */, Object_t* ___other, Object_t* ___equalityComparer, SortedInt32KeyNode_1_t5759 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableHashSet`1/MutationResult<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::SymmetricExcept(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T>)
 MutationResult_t5764  ImmutableHashSet_1_SymmetricExcept_m24425 (Object_t * __this/* static, unused */, Object_t* ___other, MutationInput_t5762  ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::IsProperSubsetOf(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T>)
 bool ImmutableHashSet_1_IsProperSubsetOf_m24426 (Object_t * __this/* static, unused */, Object_t* ___other, MutationInput_t5762  ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::IsProperSupersetOf(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T>)
 bool ImmutableHashSet_1_IsProperSupersetOf_m24427 (Object_t * __this/* static, unused */, Object_t* ___other, MutationInput_t5762  ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Immutable.ImmutableHashSet`1<System.Object>::IsSubsetOf(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Immutable.ImmutableHashSet`1/MutationInput<T>)
 bool ImmutableHashSet_1_IsSubsetOf_m24428 (Object_t * __this/* static, unused */, Object_t* ___other, MutationInput_t5762  ___origin, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Wrap(System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>>,System.Collections.Generic.IEqualityComparer`1<T>,System.Int32)
 ImmutableHashSet_1_t5757 * ImmutableHashSet_1_Wrap_m24429_gshared (Object_t * __this/* static, unused */, SortedInt32KeyNode_1_t5759 * ___root, Object_t* ___equalityComparer, int32_t ___count, MethodInfo* method);
#define ImmutableHashSet_1_Wrap_m24429(__this/* static, unused */, ___root, ___equalityComparer, ___count, method) (ImmutableHashSet_1_t5757 *)ImmutableHashSet_1_Wrap_m24429_gshared((Object_t *)__this/* static, unused */, (SortedInt32KeyNode_1_t5759 *)___root, (Object_t*)___equalityComparer, (int32_t)___count, method)
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Wrap(System.Collections.Immutable.SortedInt32KeyNode`1<System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>>,System.Int32)
 ImmutableHashSet_1_t5757 * ImmutableHashSet_1_Wrap_m24430_gshared (ImmutableHashSet_1_t5757 * __this, SortedInt32KeyNode_1_t5759 * ___root, int32_t ___adjustedCountIfDifferentRoot, MethodInfo* method);
#define ImmutableHashSet_1_Wrap_m24430(__this, ___root, ___adjustedCountIfDifferentRoot, method) (ImmutableHashSet_1_t5757 *)ImmutableHashSet_1_Wrap_m24430_gshared((ImmutableHashSet_1_t5757 *)__this, (SortedInt32KeyNode_1_t5759 *)___root, (int32_t)___adjustedCountIfDifferentRoot, method)
// System.Collections.Immutable.ImmutableHashSet`1<T> System.Collections.Immutable.ImmutableHashSet`1<System.Object>::Union(System.Collections.Generic.IEnumerable`1<T>,System.Boolean)
 ImmutableHashSet_1_t5757 * ImmutableHashSet_1_Union_m24431_gshared (ImmutableHashSet_1_t5757 * __this, Object_t* ___items, bool ___avoidWithComparer, MethodInfo* method);
#define ImmutableHashSet_1_Union_m24431(__this, ___items, ___avoidWithComparer, method) (ImmutableHashSet_1_t5757 *)ImmutableHashSet_1_Union_m24431_gshared((ImmutableHashSet_1_t5757 *)__this, (Object_t*)___items, (bool)___avoidWithComparer, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1<System.Object>::.cctor()
 void ImmutableHashSet_1__cctor_m24432_gshared (Object_t * __this/* static, unused */, MethodInfo* method);
#define ImmutableHashSet_1__cctor_m24432(__this/* static, unused */, method) (void)ImmutableHashSet_1__cctor_m24432_gshared((Object_t *)__this/* static, unused */, method)
// System.Void System.Collections.Immutable.ImmutableHashSet`1<System.Object>::<.cctor>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Collections.Immutable.ImmutableHashSet`1/HashBucket<T>>)
 void ImmutableHashSet_1_U3C_cctorU3Eb__0_m24433 (Object_t * __this/* static, unused */, KeyValuePair_2_t5766  ___kv, MethodInfo* method) IL2CPP_METHOD_ATTR;
