#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.HashSet`1<System.Int32>
struct HashSet_1_t4768;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t4701;
// System.Collections.Generic.IEnumerable`1<System.Int32>
struct IEnumerable_1_t4700;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Collections.Generic.IEnumerator`1<System.Int32>
struct IEnumerator_1_t4704;
// System.Int32[]
struct Int32U5BU5D_t156;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"
// System.Collections.Generic.HashSet`1/Enumerator<System.Int32>
#include "System_Core_System_Collections_Generic_HashSet_1_Enumerator_.h"

// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor()
 void HashSet_1__ctor_m16686 (HashSet_1_t4768 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
 void HashSet_1__ctor_m16687 (HashSet_1_t4768 * __this, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
 void HashSet_1__ctor_m16688 (HashSet_1_t4768 * __this, Object_t* ___collection, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HashSet_1__ctor_m16689 (HashSet_1_t4768 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
 Object_t* HashSet_1_System_Collections_Generic_IEnumerableU3CTU3E_GetEnumerator_m16690 (HashSet_1_t4768 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
 bool HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_get_IsReadOnly_m16691 (HashSet_1_t4768 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.CopyTo(T[],System.Int32)
 void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_CopyTo_m16692 (HashSet_1_t4768 * __this, Int32U5BU5D_t156* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.Generic.ICollection<T>.Add(T)
 void HashSet_1_System_Collections_Generic_ICollectionU3CTU3E_Add_m16693 (HashSet_1_t4768 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Generic.HashSet`1<System.Int32>::System.Collections.IEnumerable.GetEnumerator()
 Object_t * HashSet_1_System_Collections_IEnumerable_GetEnumerator_m16694 (HashSet_1_t4768 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::get_Count()
 int32_t HashSet_1_get_Count_m16695 (HashSet_1_t4768 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Init(System.Int32,System.Collections.Generic.IEqualityComparer`1<T>)
 void HashSet_1_Init_m16696 (HashSet_1_t4768 * __this, int32_t ___capacity, Object_t* ___comparer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::InitArrays(System.Int32)
 void HashSet_1_InitArrays_m16697 (HashSet_1_t4768 * __this, int32_t ___size, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::SlotsContainsAt(System.Int32,System.Int32,T)
 bool HashSet_1_SlotsContainsAt_m16698 (HashSet_1_t4768 * __this, int32_t ___index, int32_t ___hash, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[],System.Int32)
 void HashSet_1_CopyTo_m16699 (HashSet_1_t4768 * __this, Int32U5BU5D_t156* ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::CopyTo(T[],System.Int32,System.Int32)
 void HashSet_1_CopyTo_m16700 (HashSet_1_t4768 * __this, Int32U5BU5D_t156* ___array, int32_t ___index, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Resize()
 void HashSet_1_Resize_m16701 (HashSet_1_t4768 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::GetLinkHashCode(System.Int32)
 int32_t HashSet_1_GetLinkHashCode_m16702 (HashSet_1_t4768 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.HashSet`1<System.Int32>::GetItemHashCode(T)
 int32_t HashSet_1_GetItemHashCode_m16703 (HashSet_1_t4768 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Add(T)
 bool HashSet_1_Add_m16704 (HashSet_1_t4768 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::Clear()
 void HashSet_1_Clear_m16705 (HashSet_1_t4768 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Contains(T)
 bool HashSet_1_Contains_m16706 (HashSet_1_t4768 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Generic.HashSet`1<System.Int32>::Remove(T)
 bool HashSet_1_Remove_m16707 (HashSet_1_t4768 * __this, int32_t ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void HashSet_1_GetObjectData_m16708 (HashSet_1_t4768 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Generic.HashSet`1<System.Int32>::OnDeserialization(System.Object)
 void HashSet_1_OnDeserialization_m16709 (HashSet_1_t4768 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1<System.Int32>::GetEnumerator()
 Enumerator_t4772  HashSet_1_GetEnumerator_m16710 (HashSet_1_t4768 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
