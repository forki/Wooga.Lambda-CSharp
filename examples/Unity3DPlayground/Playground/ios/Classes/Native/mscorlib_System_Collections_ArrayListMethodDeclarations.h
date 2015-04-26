#pragma once

// System.Collections.ArrayList
struct ArrayList_t1547;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1405;
// System.Object[]
struct ObjectU5BU5D_t149;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t57;
// System.Collections.IComparer
struct IComparer_t1542;
// System.Type
struct Type_t;
// System.String
struct String_t;

// System.Void System.Collections.ArrayList::.ctor()
 void ArrayList__ctor_m6157 (ArrayList_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Collections.ICollection)
 void ArrayList__ctor_m6452 (ArrayList_t1547 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Int32)
 void ArrayList__ctor_m6440 (ArrayList_t1547 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.ctor(System.Object[],System.Int32,System.Int32)
 void ArrayList__ctor_m8949 (ArrayList_t1547 * __this, ObjectU5BU5D_t149* ___array, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::.cctor()
 void ArrayList__cctor_m8950 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_Item(System.Int32)
 Object_t * ArrayList_get_Item_m6155 (ArrayList_t1547 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::set_Item(System.Int32,System.Object)
 void ArrayList_set_Item_m6267 (ArrayList_t1547 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::get_Count()
 int32_t ArrayList_get_Count_m6153 (ArrayList_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsFixedSize()
 bool ArrayList_get_IsFixedSize_m7561 (ArrayList_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsReadOnly()
 bool ArrayList_get_IsReadOnly_m7562 (ArrayList_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::get_IsSynchronized()
 bool ArrayList_get_IsSynchronized_m6579 (ArrayList_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::get_SyncRoot()
 Object_t * ArrayList_get_SyncRoot_m6580 (ArrayList_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::EnsureCapacity(System.Int32)
 void ArrayList_EnsureCapacity_m8951 (ArrayList_t1547 * __this, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Shift(System.Int32,System.Int32)
 void ArrayList_Shift_m8952 (ArrayList_t1547 * __this, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::Add(System.Object)
 int32_t ArrayList_Add_m6168 (ArrayList_t1547 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Clear()
 void ArrayList_Clear_m6266 (ArrayList_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList::Contains(System.Object)
 bool ArrayList_Contains_m7563 (ArrayList_t1547 * __this, Object_t * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object)
 int32_t ArrayList_IndexOf_m7564 (ArrayList_t1547 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32)
 int32_t ArrayList_IndexOf_m8953 (ArrayList_t1547 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t ArrayList_IndexOf_m8954 (ArrayList_t1547 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Insert(System.Int32,System.Object)
 void ArrayList_Insert_m6564 (ArrayList_t1547 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::InsertRange(System.Int32,System.Collections.ICollection)
 void ArrayList_InsertRange_m8955 (ArrayList_t1547 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Remove(System.Object)
 void ArrayList_Remove_m7536 (ArrayList_t1547 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::RemoveAt(System.Int32)
 void ArrayList_RemoveAt_m6170 (ArrayList_t1547 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array)
 void ArrayList_CopyTo_m6174 (ArrayList_t1547 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Array,System.Int32)
 void ArrayList_CopyTo_m6581 (ArrayList_t1547 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void ArrayList_CopyTo_m8956 (ArrayList_t1547 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList::GetEnumerator()
 Object_t * ArrayList_GetEnumerator_m6158 (ArrayList_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::AddRange(System.Collections.ICollection)
 void ArrayList_AddRange_m6534 (ArrayList_t1547 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort()
 void ArrayList_Sort_m6650 (ArrayList_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::Sort(System.Collections.IComparer)
 void ArrayList_Sort_m8957 (ArrayList_t1547 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList::ToArray()
 ObjectU5BU5D_t149* ArrayList_ToArray_m8958 (ArrayList_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList::ToArray(System.Type)
 Array_t * ArrayList_ToArray_m6322 (ArrayList_t1547 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList::Clone()
 Object_t * ArrayList_Clone_m8959 (ArrayList_t1547 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList::ThrowNewArgumentOutOfRangeException(System.String,System.Object,System.String)
 void ArrayList_ThrowNewArgumentOutOfRangeException_m8960 (Object_t * __this/* static, unused */, String_t* ___name, Object_t * ___actual, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::Synchronized(System.Collections.ArrayList)
 ArrayList_t1547 * ArrayList_Synchronized_m8961 (Object_t * __this/* static, unused */, ArrayList_t1547 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Collections.ArrayList::ReadOnly(System.Collections.ArrayList)
 ArrayList_t1547 * ArrayList_ReadOnly_m7516 (Object_t * __this/* static, unused */, ArrayList_t1547 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
