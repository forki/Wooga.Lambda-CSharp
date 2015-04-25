#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Hashtable/SyncHashtable
struct SyncHashtable_t3538;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t975;
// System.Collections.Hashtable
struct Hashtable_t2960;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t976;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Collections.Hashtable)
 void SyncHashtable__ctor_m10434 (SyncHashtable_t3538 * __this, Hashtable_t2960 * ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SyncHashtable__ctor_m10435 (SyncHashtable_t3538 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable/SyncHashtable::System.Collections.IEnumerable.GetEnumerator()
 Object_t * SyncHashtable_System_Collections_IEnumerable_GetEnumerator_m10436 (SyncHashtable_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void SyncHashtable_GetObjectData_m10437 (SyncHashtable_t3538 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable/SyncHashtable::get_Count()
 int32_t SyncHashtable_get_Count_m10438 (SyncHashtable_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsSynchronized()
 bool SyncHashtable_get_IsSynchronized_m10439 (SyncHashtable_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_SyncRoot()
 Object_t * SyncHashtable_get_SyncRoot_m10440 (SyncHashtable_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsFixedSize()
 bool SyncHashtable_get_IsFixedSize_m10441 (SyncHashtable_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::get_IsReadOnly()
 bool SyncHashtable_get_IsReadOnly_m10442 (SyncHashtable_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Keys()
 Object_t * SyncHashtable_get_Keys_m10443 (SyncHashtable_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable/SyncHashtable::get_Values()
 Object_t * SyncHashtable_get_Values_m10444 (SyncHashtable_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::get_Item(System.Object)
 Object_t * SyncHashtable_get_Item_m10445 (SyncHashtable_t3538 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::set_Item(System.Object,System.Object)
 void SyncHashtable_set_Item_m10446 (SyncHashtable_t3538 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::CopyTo(System.Array,System.Int32)
 void SyncHashtable_CopyTo_m10447 (SyncHashtable_t3538 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Add(System.Object,System.Object)
 void SyncHashtable_Add_m10448 (SyncHashtable_t3538 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Clear()
 void SyncHashtable_Clear_m10449 (SyncHashtable_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::Contains(System.Object)
 bool SyncHashtable_Contains_m10450 (SyncHashtable_t3538 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable/SyncHashtable::GetEnumerator()
 Object_t * SyncHashtable_GetEnumerator_m10451 (SyncHashtable_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable/SyncHashtable::Remove(System.Object)
 void SyncHashtable_Remove_m10452 (SyncHashtable_t3538 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable/SyncHashtable::ContainsKey(System.Object)
 bool SyncHashtable_ContainsKey_m10453 (SyncHashtable_t3538 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable/SyncHashtable::Clone()
 Object_t * SyncHashtable_Clone_m10454 (SyncHashtable_t3538 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
