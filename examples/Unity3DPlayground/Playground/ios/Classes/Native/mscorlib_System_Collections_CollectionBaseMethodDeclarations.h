#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.CollectionBase
struct CollectionBase_t3032;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t2972;
// System.Collections.IList
struct IList_t3099;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;

// System.Void System.Collections.CollectionBase::.ctor()
 void CollectionBase__ctor_m7838 (CollectionBase_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void CollectionBase_System_Collections_ICollection_CopyTo_m7816 (CollectionBase_t3032 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.ICollection.get_SyncRoot()
 Object_t * CollectionBase_System_Collections_ICollection_get_SyncRoot_m7815 (CollectionBase_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.ICollection.get_IsSynchronized()
 bool CollectionBase_System_Collections_ICollection_get_IsSynchronized_m7814 (CollectionBase_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.Add(System.Object)
 int32_t CollectionBase_System_Collections_IList_Add_m7821 (CollectionBase_t3032 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.Contains(System.Object)
 bool CollectionBase_System_Collections_IList_Contains_m7823 (CollectionBase_t3032 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::System.Collections.IList.IndexOf(System.Object)
 int32_t CollectionBase_System_Collections_IList_IndexOf_m7824 (CollectionBase_t3032 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Insert(System.Int32,System.Object)
 void CollectionBase_System_Collections_IList_Insert_m7825 (CollectionBase_t3032 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.Remove(System.Object)
 void CollectionBase_System_Collections_IList_Remove_m7826 (CollectionBase_t3032 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsFixedSize()
 bool CollectionBase_System_Collections_IList_get_IsFixedSize_m7817 (CollectionBase_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.CollectionBase::System.Collections.IList.get_IsReadOnly()
 bool CollectionBase_System_Collections_IList_get_IsReadOnly_m7818 (CollectionBase_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.CollectionBase::System.Collections.IList.get_Item(System.Int32)
 Object_t * CollectionBase_System_Collections_IList_get_Item_m7819 (CollectionBase_t3032 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::System.Collections.IList.set_Item(System.Int32,System.Object)
 void CollectionBase_System_Collections_IList_set_Item_m7820 (CollectionBase_t3032 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.CollectionBase::get_Count()
 int32_t CollectionBase_get_Count_m7779 (CollectionBase_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.CollectionBase::GetEnumerator()
 Object_t * CollectionBase_GetEnumerator_m7813 (CollectionBase_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::Clear()
 void CollectionBase_Clear_m7822 (CollectionBase_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::RemoveAt(System.Int32)
 void CollectionBase_RemoveAt_m7827 (CollectionBase_t3032 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.CollectionBase::get_InnerList()
 ArrayList_t2972 * CollectionBase_get_InnerList_m7806 (CollectionBase_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Collections.CollectionBase::get_List()
 Object_t * CollectionBase_get_List_m7950 (CollectionBase_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClear()
 void CollectionBase_OnClear_m7828 (CollectionBase_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnClearComplete()
 void CollectionBase_OnClearComplete_m7829 (CollectionBase_t3032 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsert(System.Int32,System.Object)
 void CollectionBase_OnInsert_m7830 (CollectionBase_t3032 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnInsertComplete(System.Int32,System.Object)
 void CollectionBase_OnInsertComplete_m7831 (CollectionBase_t3032 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemove(System.Int32,System.Object)
 void CollectionBase_OnRemove_m7832 (CollectionBase_t3032 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnRemoveComplete(System.Int32,System.Object)
 void CollectionBase_OnRemoveComplete_m7833 (CollectionBase_t3032 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSet(System.Int32,System.Object,System.Object)
 void CollectionBase_OnSet_m7834 (CollectionBase_t3032 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnSetComplete(System.Int32,System.Object,System.Object)
 void CollectionBase_OnSetComplete_m7835 (CollectionBase_t3032 * __this, int32_t ___index, Object_t * ___oldValue, Object_t * ___newValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.CollectionBase::OnValidate(System.Object)
 void CollectionBase_OnValidate_m7836 (CollectionBase_t3032 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
