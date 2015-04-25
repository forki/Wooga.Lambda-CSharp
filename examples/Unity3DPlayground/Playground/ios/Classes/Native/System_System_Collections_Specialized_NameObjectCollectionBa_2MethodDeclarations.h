#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t2969;
// System.Object
struct Object_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t2971;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.String
struct String_t;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t2968;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
 void NameObjectCollectionBase__ctor_m6653 (NameObjectCollectionBase_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void NameObjectCollectionBase__ctor_m6654 (NameObjectCollectionBase_t2969 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
 bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_m6655 (NameObjectCollectionBase_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
 Object_t * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m6656 (NameObjectCollectionBase_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m6657 (NameObjectCollectionBase_t2969 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
 void NameObjectCollectionBase_Init_m6658 (NameObjectCollectionBase_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
 KeysCollection_t2971 * NameObjectCollectionBase_get_Keys_m6659 (NameObjectCollectionBase_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
 Object_t * NameObjectCollectionBase_GetEnumerator_m6660 (NameObjectCollectionBase_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void NameObjectCollectionBase_GetObjectData_m6661 (NameObjectCollectionBase_t2969 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
 int32_t NameObjectCollectionBase_get_Count_m6662 (NameObjectCollectionBase_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
 void NameObjectCollectionBase_OnDeserialization_m6663 (NameObjectCollectionBase_t2969 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
 bool NameObjectCollectionBase_get_IsReadOnly_m6664 (NameObjectCollectionBase_t2969 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
 void NameObjectCollectionBase_BaseAdd_m6665 (NameObjectCollectionBase_t2969 * __this, String_t* ___name, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
 Object_t * NameObjectCollectionBase_BaseGet_m6666 (NameObjectCollectionBase_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
 Object_t * NameObjectCollectionBase_BaseGet_m6667 (NameObjectCollectionBase_t2969 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
 String_t* NameObjectCollectionBase_BaseGetKey_m6668 (NameObjectCollectionBase_t2969 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
 _Item_t2968 * NameObjectCollectionBase_FindFirstMatchedItem_m6669 (NameObjectCollectionBase_t2969 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
