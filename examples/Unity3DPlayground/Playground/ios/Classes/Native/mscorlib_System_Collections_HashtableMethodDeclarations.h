#pragma once

// System.Collections.Hashtable
struct Hashtable_t1534;
// System.Collections.IComparer
struct IComparer_t1542;
// System.Collections.IHashCodeProvider
struct IHashCodeProvider_t1548;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t1405;
// System.Collections.IDictionary
struct IDictionary_t1537;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Collections.IEqualityComparer
struct IEqualityComparer_t1549;
// System.Collections.IEnumerator
struct IEnumerator_t57;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t1538;
// System.Collections.Hashtable/Slot[]
struct SlotU5BU5D_t2179;
// System.Int32[]
struct Int32U5BU5D_t1424;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Hashtable/EnumeratorMode
#include "mscorlib_System_Collections_Hashtable_EnumeratorMode.h"

// System.Void System.Collections.Hashtable::.ctor()
 void Hashtable__ctor_m6316 (Hashtable_t1534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
 void Hashtable__ctor_m9032 (Hashtable_t1534 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single)
 void Hashtable__ctor_m9033 (Hashtable_t1534 * __this, int32_t ___capacity, float ___loadFactor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32)
 void Hashtable__ctor_m6609 (Hashtable_t1534 * __this, int32_t ___capacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.Hashtable)
 void Hashtable__ctor_m9034 (Hashtable_t1534 * __this, Hashtable_t1534 * ___source, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IHashCodeProvider,System.Collections.IComparer)
 void Hashtable__ctor_m6137 (Hashtable_t1534 * __this, int32_t ___capacity, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Single,System.Collections.IHashCodeProvider,System.Collections.IComparer)
 void Hashtable__ctor_m9035 (Hashtable_t1534 * __this, Object_t * ___d, float ___loadFactor, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IDictionary,System.Collections.IHashCodeProvider,System.Collections.IComparer)
 void Hashtable__ctor_m6142 (Hashtable_t1534 * __this, Object_t * ___d, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Collections.IHashCodeProvider,System.Collections.IComparer)
 void Hashtable__ctor_m6447 (Hashtable_t1534 * __this, Object_t * ___hcp, Object_t * ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Hashtable__ctor_m9036 (Hashtable_t1534 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Collections.IEqualityComparer)
 void Hashtable__ctor_m6156 (Hashtable_t1534 * __this, int32_t ___capacity, Object_t * ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.ctor(System.Int32,System.Single,System.Collections.IEqualityComparer)
 void Hashtable__ctor_m9037 (Hashtable_t1534 * __this, int32_t ___capacity, float ___loadFactor, Object_t * ___equalityComparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::.cctor()
 void Hashtable__cctor_m9038 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Hashtable::System.Collections.IEnumerable.GetEnumerator()
 Object_t * Hashtable_System_Collections_IEnumerable_GetEnumerator_m9039 (Hashtable_t1534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_comparer(System.Collections.IComparer)
 void Hashtable_set_comparer_m9040 (Hashtable_t1534 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_hcp(System.Collections.IHashCodeProvider)
 void Hashtable_set_hcp_m9041 (Hashtable_t1534 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::get_Count()
 int32_t Hashtable_get_Count_m6315 (Hashtable_t1534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::get_IsSynchronized()
 bool Hashtable_get_IsSynchronized_m9042 (Hashtable_t1534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_SyncRoot()
 Object_t * Hashtable_get_SyncRoot_m6314 (Hashtable_t1534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Keys()
 Object_t * Hashtable_get_Keys_m6318 (Hashtable_t1534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Collections.Hashtable::get_Values()
 Object_t * Hashtable_get_Values_m7571 (Hashtable_t1534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::get_Item(System.Object)
 Object_t * Hashtable_get_Item_m6166 (Hashtable_t1534 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::set_Item(System.Object,System.Object)
 void Hashtable_set_Item_m6400 (Hashtable_t1534 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyTo(System.Array,System.Int32)
 void Hashtable_CopyTo_m9043 (Hashtable_t1534 * __this, Array_t * ___array, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Add(System.Object,System.Object)
 void Hashtable_Add_m6167 (Hashtable_t1534 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Clear()
 void Hashtable_Clear_m6651 (Hashtable_t1534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::Contains(System.Object)
 bool Hashtable_Contains_m6610 (Hashtable_t1534 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Collections.Hashtable::GetEnumerator()
 Object_t * Hashtable_GetEnumerator_m9044 (Hashtable_t1534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Remove(System.Object)
 void Hashtable_Remove_m6169 (Hashtable_t1534 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::ContainsKey(System.Object)
 bool Hashtable_ContainsKey_m6451 (Hashtable_t1534 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Hashtable::Clone()
 Object_t * Hashtable_Clone_m9045 (Hashtable_t1534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void Hashtable_GetObjectData_m9046 (Hashtable_t1534 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::OnDeserialization(System.Object)
 void Hashtable_OnDeserialization_m9047 (Hashtable_t1534 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Hashtable System.Collections.Hashtable::Synchronized(System.Collections.Hashtable)
 Hashtable_t1534 * Hashtable_Synchronized_m6317 (Object_t * __this/* static, unused */, Hashtable_t1534 * ___table, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::GetHash(System.Object)
 int32_t Hashtable_GetHash_m9048 (Hashtable_t1534 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::KeyEquals(System.Object,System.Object)
 bool Hashtable_KeyEquals_m9049 (Hashtable_t1534 * __this, Object_t * ___item, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::AdjustThreshold()
 void Hashtable_AdjustThreshold_m9050 (Hashtable_t1534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::SetTable(System.Collections.Hashtable/Slot[],System.Int32[])
 void Hashtable_SetTable_m9051 (Hashtable_t1534 * __this, SlotU5BU5D_t2179* ___table, Int32U5BU5D_t1424* ___hashes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::Find(System.Object)
 int32_t Hashtable_Find_m9052 (Hashtable_t1534 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::Rehash()
 void Hashtable_Rehash_m9053 (Hashtable_t1534 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::PutImpl(System.Object,System.Object,System.Boolean)
 void Hashtable_PutImpl_m9054 (Hashtable_t1534 * __this, Object_t * ___key, Object_t * ___value, bool ___overwrite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Hashtable::CopyToArray(System.Array,System.Int32,System.Collections.Hashtable/EnumeratorMode)
 void Hashtable_CopyToArray_m9055 (Hashtable_t1534 * __this, Array_t * ___arr, int32_t ___i, int32_t ___mode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Hashtable::TestPrime(System.Int32)
 bool Hashtable_TestPrime_m9056 (Object_t * __this/* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::CalcPrime(System.Int32)
 int32_t Hashtable_CalcPrime_m9057 (Object_t * __this/* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Hashtable::ToPrime(System.Int32)
 int32_t Hashtable_ToPrime_m9058 (Object_t * __this/* static, unused */, int32_t ___x, MethodInfo* method) IL2CPP_METHOD_ATTR;
