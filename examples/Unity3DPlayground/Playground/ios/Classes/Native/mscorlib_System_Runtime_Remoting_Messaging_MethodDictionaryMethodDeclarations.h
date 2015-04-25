#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.MethodDictionary
struct MethodDictionary_t3724;
// System.String[]
struct StringU5BU5D_t127;
// System.Object
struct Object_t;
// System.Collections.ICollection
struct ICollection_t975;
// System.Runtime.Remoting.Messaging.IMethodMessage
struct IMethodMessage_t3731;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// System.Collections.IDictionary
struct IDictionary_t2963;
// System.String
struct String_t;
// System.Array
struct Array_t;
// System.Collections.IDictionaryEnumerator
struct IDictionaryEnumerator_t976;

// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::.ctor(System.Runtime.Remoting.Messaging.IMethodMessage)
 void MethodDictionary__ctor_m11770 (MethodDictionary_t3724 * __this, Object_t * ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::System.Collections.IEnumerable.GetEnumerator()
 Object_t * MethodDictionary_System_Collections_IEnumerable_GetEnumerator_m11771 (MethodDictionary_t3724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_MethodKeys(System.String[])
 void MethodDictionary_set_MethodKeys_m11772 (MethodDictionary_t3724 * __this, StringU5BU5D_t127* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::AllocInternalProperties()
 Object_t * MethodDictionary_AllocInternalProperties_m11773 (MethodDictionary_t3724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.MethodDictionary::GetInternalProperties()
 Object_t * MethodDictionary_GetInternalProperties_m11774 (MethodDictionary_t3724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::IsOverridenKey(System.String)
 bool MethodDictionary_IsOverridenKey_m11775 (MethodDictionary_t3724 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsFixedSize()
 bool MethodDictionary_get_IsFixedSize_m11776 (MethodDictionary_t3724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsReadOnly()
 bool MethodDictionary_get_IsReadOnly_m11777 (MethodDictionary_t3724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_Item(System.Object)
 Object_t * MethodDictionary_get_Item_m11778 (MethodDictionary_t3724 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::set_Item(System.Object,System.Object)
 void MethodDictionary_set_Item_m11779 (MethodDictionary_t3724 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::GetMethodProperty(System.String)
 Object_t * MethodDictionary_GetMethodProperty_m11780 (MethodDictionary_t3724 * __this, String_t* ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::SetMethodProperty(System.String,System.Object)
 void MethodDictionary_SetMethodProperty_m11781 (MethodDictionary_t3724 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Keys()
 Object_t * MethodDictionary_get_Keys_m11782 (MethodDictionary_t3724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ICollection System.Runtime.Remoting.Messaging.MethodDictionary::get_Values()
 Object_t * MethodDictionary_get_Values_m11783 (MethodDictionary_t3724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Add(System.Object,System.Object)
 void MethodDictionary_Add_m11784 (MethodDictionary_t3724 * __this, Object_t * ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Clear()
 void MethodDictionary_Clear_m11785 (MethodDictionary_t3724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::Contains(System.Object)
 bool MethodDictionary_Contains_m11786 (MethodDictionary_t3724 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::Remove(System.Object)
 void MethodDictionary_Remove_m11787 (MethodDictionary_t3724 * __this, Object_t * ___key, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Runtime.Remoting.Messaging.MethodDictionary::get_Count()
 int32_t MethodDictionary_get_Count_m11788 (MethodDictionary_t3724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Remoting.Messaging.MethodDictionary::get_IsSynchronized()
 bool MethodDictionary_get_IsSynchronized_m11789 (MethodDictionary_t3724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Messaging.MethodDictionary::get_SyncRoot()
 Object_t * MethodDictionary_get_SyncRoot_m11790 (MethodDictionary_t3724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.MethodDictionary::CopyTo(System.Array,System.Int32)
 void MethodDictionary_CopyTo_m11791 (MethodDictionary_t3724 * __this, Array_t * ___array, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionaryEnumerator System.Runtime.Remoting.Messaging.MethodDictionary::GetEnumerator()
 Object_t * MethodDictionary_GetEnumerator_m11792 (MethodDictionary_t3724 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
