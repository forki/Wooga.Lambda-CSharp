#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Remoting.Activation.ActivationServices
struct ActivationServices_t3695;
// System.Runtime.Remoting.Activation.IActivator
struct IActivator_t3694;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Object[]
struct ObjectU5BU5D_t126;
// System.Runtime.Remoting.Messaging.ConstructionCall
struct ConstructionCall_t3696;
// System.String
struct String_t;

// System.Runtime.Remoting.Activation.IActivator System.Runtime.Remoting.Activation.ActivationServices::get_ConstructionActivator()
 Object_t * ActivationServices_get_ConstructionActivator_m11642 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Activation.ActivationServices::CreateProxyFromAttributes(System.Type,System.Object[])
 Object_t * ActivationServices_CreateProxyFromAttributes_m11643 (Object_t * __this/* static, unused */, Type_t * ___type, ObjectU5BU5D_t126* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Remoting.Messaging.ConstructionCall System.Runtime.Remoting.Activation.ActivationServices::CreateConstructionCall(System.Type,System.String,System.Object[])
 ConstructionCall_t3696 * ActivationServices_CreateConstructionCall_m11644 (Object_t * __this/* static, unused */, Type_t * ___type, String_t* ___activationUrl, ObjectU5BU5D_t126* ___activationAttributes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Runtime.Remoting.Activation.ActivationServices::AllocateUninitializedClassInstance(System.Type)
 Object_t * ActivationServices_AllocateUninitializedClassInstance_m11645 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
