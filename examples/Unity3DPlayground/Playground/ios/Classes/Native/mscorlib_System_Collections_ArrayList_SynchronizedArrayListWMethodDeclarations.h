#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.ArrayList/SynchronizedArrayListWrapper
struct SynchronizedArrayListWrapper_t3526;
// System.Object
struct Object_t;
// System.Collections.ArrayList
struct ArrayList_t2972;
// System.Collections.ICollection
struct ICollection_t975;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.IComparer
struct IComparer_t925;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Type
struct Type_t;

// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::.ctor(System.Collections.ArrayList)
 void SynchronizedArrayListWrapper__ctor_m10320 (SynchronizedArrayListWrapper_t3526 * __this, ArrayList_t2972 * ___innerArrayList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Item(System.Int32)
 Object_t * SynchronizedArrayListWrapper_get_Item_m10321 (SynchronizedArrayListWrapper_t3526 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::set_Item(System.Int32,System.Object)
 void SynchronizedArrayListWrapper_set_Item_m10322 (SynchronizedArrayListWrapper_t3526 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::get_Count()
 int32_t SynchronizedArrayListWrapper_get_Count_m10323 (SynchronizedArrayListWrapper_t3526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsFixedSize()
 bool SynchronizedArrayListWrapper_get_IsFixedSize_m10324 (SynchronizedArrayListWrapper_t3526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsReadOnly()
 bool SynchronizedArrayListWrapper_get_IsReadOnly_m10325 (SynchronizedArrayListWrapper_t3526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::get_IsSynchronized()
 bool SynchronizedArrayListWrapper_get_IsSynchronized_m10326 (SynchronizedArrayListWrapper_t3526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::get_SyncRoot()
 Object_t * SynchronizedArrayListWrapper_get_SyncRoot_m10327 (SynchronizedArrayListWrapper_t3526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::Add(System.Object)
 int32_t SynchronizedArrayListWrapper_Add_m10328 (SynchronizedArrayListWrapper_t3526 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Clear()
 void SynchronizedArrayListWrapper_Clear_m10329 (SynchronizedArrayListWrapper_t3526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.ArrayList/SynchronizedArrayListWrapper::Contains(System.Object)
 bool SynchronizedArrayListWrapper_Contains_m10330 (SynchronizedArrayListWrapper_t3526 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object)
 int32_t SynchronizedArrayListWrapper_IndexOf_m10331 (SynchronizedArrayListWrapper_t3526 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32)
 int32_t SynchronizedArrayListWrapper_IndexOf_m10332 (SynchronizedArrayListWrapper_t3526 * __this, Object_t * ___value, int32_t ___startIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.ArrayList/SynchronizedArrayListWrapper::IndexOf(System.Object,System.Int32,System.Int32)
 int32_t SynchronizedArrayListWrapper_IndexOf_m10333 (SynchronizedArrayListWrapper_t3526 * __this, Object_t * ___value, int32_t ___startIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Insert(System.Int32,System.Object)
 void SynchronizedArrayListWrapper_Insert_m10334 (SynchronizedArrayListWrapper_t3526 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::InsertRange(System.Int32,System.Collections.ICollection)
 void SynchronizedArrayListWrapper_InsertRange_m10335 (SynchronizedArrayListWrapper_t3526 * __this, int32_t ___index, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Remove(System.Object)
 void SynchronizedArrayListWrapper_Remove_m10336 (SynchronizedArrayListWrapper_t3526 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::RemoveAt(System.Int32)
 void SynchronizedArrayListWrapper_RemoveAt_m10337 (SynchronizedArrayListWrapper_t3526 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array)
 void SynchronizedArrayListWrapper_CopyTo_m10338 (SynchronizedArrayListWrapper_t3526 * __this, Array_t * ___array, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Array,System.Int32)
 void SynchronizedArrayListWrapper_CopyTo_m10339 (SynchronizedArrayListWrapper_t3526 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::CopyTo(System.Int32,System.Array,System.Int32,System.Int32)
 void SynchronizedArrayListWrapper_CopyTo_m10340 (SynchronizedArrayListWrapper_t3526 * __this, int32_t ___index, Array_t * ___array, int32_t ___arrayIndex, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.ArrayList/SynchronizedArrayListWrapper::GetEnumerator()
 Object_t * SynchronizedArrayListWrapper_GetEnumerator_m10341 (SynchronizedArrayListWrapper_t3526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::AddRange(System.Collections.ICollection)
 void SynchronizedArrayListWrapper_AddRange_m10342 (SynchronizedArrayListWrapper_t3526 * __this, Object_t * ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.ArrayList/SynchronizedArrayListWrapper::Clone()
 Object_t * SynchronizedArrayListWrapper_Clone_m10343 (SynchronizedArrayListWrapper_t3526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort()
 void SynchronizedArrayListWrapper_Sort_m10344 (SynchronizedArrayListWrapper_t3526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ArrayList/SynchronizedArrayListWrapper::Sort(System.Collections.IComparer)
 void SynchronizedArrayListWrapper_Sort_m10345 (SynchronizedArrayListWrapper_t3526 * __this, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray()
 ObjectU5BU5D_t126* SynchronizedArrayListWrapper_ToArray_m10346 (SynchronizedArrayListWrapper_t3526 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Array System.Collections.ArrayList/SynchronizedArrayListWrapper::ToArray(System.Type)
 Array_t * SynchronizedArrayListWrapper_ToArray_m10347 (SynchronizedArrayListWrapper_t3526 * __this, Type_t * ___elementType, MethodInfo* method) IL2CPP_METHOD_ATTR;
