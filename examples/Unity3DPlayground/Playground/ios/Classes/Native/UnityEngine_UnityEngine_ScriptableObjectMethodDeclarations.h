#pragma once

// UnityEngine.ScriptableObject
struct ScriptableObject_t1103;
struct ScriptableObject_t1103_marshaled;
// System.String
struct String_t;
// System.Type
struct Type_t;

// System.Void UnityEngine.ScriptableObject::.ctor()
 void ScriptableObject__ctor_m3089 (ScriptableObject_t1103 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.ScriptableObject::Internal_CreateScriptableObject(UnityEngine.ScriptableObject)
 void ScriptableObject_Internal_CreateScriptableObject_m3090 (Object_t * __this/* static, unused */, ScriptableObject_t1103 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.String)
 ScriptableObject_t1103 * ScriptableObject_CreateInstance_m3091 (Object_t * __this/* static, unused */, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstance(System.Type)
 ScriptableObject_t1103 * ScriptableObject_CreateInstance_m3092 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ScriptableObject UnityEngine.ScriptableObject::CreateInstanceFromType(System.Type)
 ScriptableObject_t1103 * ScriptableObject_CreateInstanceFromType_m3093 (Object_t * __this/* static, unused */, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
void ScriptableObject_t1103_marshal(const ScriptableObject_t1103& unmarshaled, ScriptableObject_t1103_marshaled& marshaled);
void ScriptableObject_t1103_marshal_back(const ScriptableObject_t1103_marshaled& marshaled, ScriptableObject_t1103& unmarshaled);
void ScriptableObject_t1103_marshal_cleanup(ScriptableObject_t1103_marshaled& marshaled);
