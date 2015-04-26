#pragma once

// System.Collections.Specialized.NameObjectCollectionBase
struct NameObjectCollectionBase_t1544;
// System.Object
struct Object_t;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection
struct KeysCollection_t1546;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t1255;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t57;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t150;
// System.Collections.Specialized.NameObjectCollectionBase/_Item
struct _Item_t1543;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor()
 void NameObjectCollectionBase__ctor_m4418 (NameObjectCollectionBase_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void NameObjectCollectionBase__ctor_m4419 (NameObjectCollectionBase_t1544 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_IsSynchronized()
 bool NameObjectCollectionBase_System_Collections_ICollection_get_IsSynchronized_m4420 (NameObjectCollectionBase_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.get_SyncRoot()
 Object_t * NameObjectCollectionBase_System_Collections_ICollection_get_SyncRoot_m4421 (NameObjectCollectionBase_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
 void NameObjectCollectionBase_System_Collections_ICollection_CopyTo_m4422 (NameObjectCollectionBase_t1544 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::Init()
 void NameObjectCollectionBase_Init_m4423 (NameObjectCollectionBase_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/KeysCollection System.Collections.Specialized.NameObjectCollectionBase::get_Keys()
 KeysCollection_t1546 * NameObjectCollectionBase_get_Keys_m4424 (NameObjectCollectionBase_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Collections.Specialized.NameObjectCollectionBase::GetEnumerator()
 Object_t * NameObjectCollectionBase_GetEnumerator_m4425 (NameObjectCollectionBase_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void NameObjectCollectionBase_GetObjectData_m4426 (NameObjectCollectionBase_t1544 * __this, SerializationInfo_t1255 * ___info, StreamingContext_t1256  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Specialized.NameObjectCollectionBase::get_Count()
 int32_t NameObjectCollectionBase_get_Count_m4427 (NameObjectCollectionBase_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::OnDeserialization(System.Object)
 void NameObjectCollectionBase_OnDeserialization_m4428 (NameObjectCollectionBase_t1544 * __this, Object_t * ___sender, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::get_IsReadOnly()
 bool NameObjectCollectionBase_get_IsReadOnly_m4429 (NameObjectCollectionBase_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseAdd(System.String,System.Object)
 void NameObjectCollectionBase_BaseAdd_m4430 (NameObjectCollectionBase_t1544 * __this, String_t* ___name, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.Int32)
 Object_t * NameObjectCollectionBase_BaseGet_m4431 (NameObjectCollectionBase_t1544 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Collections.Specialized.NameObjectCollectionBase::BaseGet(System.String)
 Object_t * NameObjectCollectionBase_BaseGet_m4432 (NameObjectCollectionBase_t1544 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] System.Collections.Specialized.NameObjectCollectionBase::BaseGetAllKeys()
 StringU5BU5D_t150* NameObjectCollectionBase_BaseGetAllKeys_m4433 (NameObjectCollectionBase_t1544 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Collections.Specialized.NameObjectCollectionBase::BaseGetKey(System.Int32)
 String_t* NameObjectCollectionBase_BaseGetKey_m4434 (NameObjectCollectionBase_t1544 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseRemove(System.String)
 void NameObjectCollectionBase_BaseRemove_m4435 (NameObjectCollectionBase_t1544 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.Specialized.NameObjectCollectionBase::BaseSet(System.String,System.Object)
 void NameObjectCollectionBase_BaseSet_m4436 (NameObjectCollectionBase_t1544 * __this, String_t* ___name, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Specialized.NameObjectCollectionBase/_Item System.Collections.Specialized.NameObjectCollectionBase::FindFirstMatchedItem(System.String)
 _Item_t1543 * NameObjectCollectionBase_FindFirstMatchedItem_m4437 (NameObjectCollectionBase_t1544 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Collections.Specialized.NameObjectCollectionBase::Equals(System.String,System.String)
 bool NameObjectCollectionBase_Equals_m4438 (NameObjectCollectionBase_t1544 * __this, String_t* ___s1, String_t* ___s2, MethodInfo* method) IL2CPP_METHOD_ATTR;
