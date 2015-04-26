#pragma once

// System.Collections.Specialized.ListDictionary
struct ListDictionary_t1535;
// System.Object
struct Object_t;
// System.Collections.IComparer
struct IComparer_t1542;
// System.Collections.IEnumerator
struct IEnumerator_t57;
// System.Collections.Specialized.ListDictionary/DictionaryNode
struct DictionaryNode_t1539;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1538;

// System.Void System.Collections.Specialized.ListDictionary::.ctor()
 void ListDictionary__ctor_m4391 (ListDictionary_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::.ctor(System.Collections.IComparer)
 void ListDictionary__ctor_m4392 (ListDictionary_t1535 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.ListDictionary::System.Collections.IEnumerable.GetEnumerator()
 Object_t * ListDictionary_System_Collections_IEnumerable_GetEnumerator_m4393 (ListDictionary_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object)
 DictionaryNode_t1539 * ListDictionary_FindEntry_m4394 (ListDictionary_t1535 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.ListDictionary/DictionaryNode System.Collections.Specialized.ListDictionary::FindEntry(System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode&)
 DictionaryNode_t1539 * ListDictionary_FindEntry_m4395 (ListDictionary_t1535 * __this, Object_t * ___key, DictionaryNode_t1539 ** ___prev, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::AddImpl(System.Object,System.Object,System.Collections.Specialized.ListDictionary/DictionaryNode)
 void ListDictionary_AddImpl_m4396 (ListDictionary_t1535 * __this, Object_t * ___key, Object_t * ___value, DictionaryNode_t1539 * ___prev, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.ListDictionary::get_Count()
 int32_t ListDictionary_get_Count_m4397 (ListDictionary_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.ListDictionary::get_IsSynchronized()
 bool ListDictionary_get_IsSynchronized_m4398 (ListDictionary_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_SyncRoot()
 Object_t * ListDictionary_get_SyncRoot_m4399 (ListDictionary_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::CopyTo(System.Array,System.Int32)
 void ListDictionary_CopyTo_m4400 (ListDictionary_t1535 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.ListDictionary::get_Item(System.Object)
 Object_t * ListDictionary_get_Item_m4401 (ListDictionary_t1535 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::set_Item(System.Object,System.Object)
 void ListDictionary_set_Item_m4402 (ListDictionary_t1535 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Add(System.Object,System.Object)
 void ListDictionary_Add_m4403 (ListDictionary_t1535 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Clear()
 void ListDictionary_Clear_m4404 (ListDictionary_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Specialized.ListDictionary::GetEnumerator()
 Object_t * ListDictionary_GetEnumerator_m4405 (ListDictionary_t1535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.ListDictionary::Remove(System.Object)
 void ListDictionary_Remove_m4406 (ListDictionary_t1535 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
