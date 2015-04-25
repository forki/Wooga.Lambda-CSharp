#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.ScriptableObject
struct ScriptableObject_t2463;
struct ScriptableObject_t2463_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
 void ScriptableObject__ctor_m5201 (ScriptableObject_t2463 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
 void ScriptableObject_Internal_CreateScriptableObject_m5202 (Object_t * __this/* static, unused */, ScriptableObject_t2463 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
 ScriptableObject_t2463 * ScriptableObject_CreateInstance_m5203 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
 ScriptableObject_t2463 * ScriptableObject_CreateInstance_m5204 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
 ScriptableObject_t2463 * ScriptableObject_CreateInstanceFromType_m5205 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t2463_marshal(const ScriptableObject_t2463& unmarshaled, ScriptableObject_t2463_marshaled& marshaled);
void ScriptableObject_t2463_marshal_back(const ScriptableObject_t2463_marshaled& marshaled, ScriptableObject_t2463& unmarshaled);
void ScriptableObject_t2463_marshal_cleanup(ScriptableObject_t2463_marshaled& marshaled);
