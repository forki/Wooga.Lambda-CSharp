#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t3696;
// System.Type
struct Type_t;
// System.String
struct String_t;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t3694;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Collections.IList
struct IList_t3099;
// System.Collections.IDictionary
struct IDictionary_t2963;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t2614;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Type)
 void ConstructionCall__ctor_m11710 (ConstructionCall_t3696 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ConstructionCall__ctor_m11711 (ConstructionCall_t3696 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitDictionary()
 void ConstructionCall_InitDictionary_m11712 (ConstructionCall_t3696 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_IsContextOk(System.Boolean)
 void ConstructionCall_set_IsContextOk_m11713 (ConstructionCall_t3696 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Type System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationType()
 Type_t * ConstructionCall_get_ActivationType_m11714 (ConstructionCall_t3696 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Runtime.Remoting.Messaging.ConstructionCall::get_ActivationTypeName()
 String_t* ConstructionCall_get_ActivationTypeName_m11715 (ConstructionCall_t3696 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Messaging.ConstructionCall::get_Activator()
 Object_t * ConstructionCall_get_Activator_m11716 (ConstructionCall_t3696 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::set_Activator(System.Runtime.Remoting.Activation.IActivator)
 void ConstructionCall_set_Activator_m11717 (ConstructionCall_t3696 * __this, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object[] System.Runtime.Remoting.Messaging.ConstructionCall::get_CallSiteActivationAttributes()
 ObjectU5BU5D_t126* ConstructionCall_get_CallSiteActivationAttributes_m11718 (ConstructionCall_t3696 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::SetActivationAttributes(System.Object[])
 void ConstructionCall_SetActivationAttributes_m11719 (ConstructionCall_t3696 * __this, ObjectU5BU5D_t126* ___attributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IList System.Runtime.Remoting.Messaging.ConstructionCall::get_ContextProperties()
 Object_t * ConstructionCall_get_ContextProperties_m11720 (ConstructionCall_t3696 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::InitMethodProperty(System.String,System.Object)
 void ConstructionCall_InitMethodProperty_m11721 (ConstructionCall_t3696 * __this, String_t* ___key, Object_t * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Remoting.Messaging.ConstructionCall::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void ConstructionCall_GetObjectData_m11722 (ConstructionCall_t3696 * __this, SerializationInfo_t2614 * ___info, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IDictionary System.Runtime.Remoting.Messaging.ConstructionCall::get_Properties()
 Object_t * ConstructionCall_get_Properties_m11723 (ConstructionCall_t3696 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
