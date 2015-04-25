#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.SerializationCallbacks
struct SerializationCallbacks_t3797;
// System.Type
struct Type_t;
// System.Collections.ArrayList
struct ArrayList_t2972;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Runtime.Serialization.SerializationCallbacks::.ctor(System.Type)
 void SerializationCallbacks__ctor_m12016 (SerializationCallbacks_t3797 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::.cctor()
 void SerializationCallbacks__cctor_m12017 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Runtime.Serialization.SerializationCallbacks::get_HasDeserializedCallbacks()
 bool SerializationCallbacks_get_HasDeserializedCallbacks_m12018 (SerializationCallbacks_t3797 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.ArrayList System.Runtime.Serialization.SerializationCallbacks::GetMethodsByAttribute(System.Type,System.Type)
 ArrayList_t2972 * SerializationCallbacks_GetMethodsByAttribute_m12019 (Object_t * __this/* static, unused */, Type_t * ___type, Type_t * ___attr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::Invoke(System.Collections.ArrayList,System.Object,System.Runtime.Serialization.StreamingContext)
 void SerializationCallbacks_Invoke_m12020 (Object_t * __this/* static, unused */, ArrayList_t2972 * ___list, Object_t * ___target, StreamingContext_t2615  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserializing(System.Object,System.Runtime.Serialization.StreamingContext)
 void SerializationCallbacks_RaiseOnDeserializing_m12021 (SerializationCallbacks_t3797 * __this, Object_t * ___target, StreamingContext_t2615  ___contex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.SerializationCallbacks::RaiseOnDeserialized(System.Object,System.Runtime.Serialization.StreamingContext)
 void SerializationCallbacks_RaiseOnDeserialized_m12022 (SerializationCallbacks_t3797 * __this, Object_t * ___target, StreamingContext_t2615  ___contex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Runtime.Serialization.SerializationCallbacks System.Runtime.Serialization.SerializationCallbacks::GetSerializationCallbacks(System.Type)
 SerializationCallbacks_t3797 * SerializationCallbacks_GetSerializationCallbacks_m12023 (Object_t * __this/* static, unused */, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
