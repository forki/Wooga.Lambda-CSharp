#pragma once

// UnityEngine.TrackedReference
struct TrackedReference_t1211;
struct TrackedReference_t1211_marshaled;
// System.Object
struct Object_t;

// System.Boolean UnityEngine.TrackedReference::Equals(System.Object)
 bool TrackedReference_Equals_m3972 (TrackedReference_t1211 * __this, Object_t * ___o, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TrackedReference::GetHashCode()
 int32_t TrackedReference_GetHashCode_m3973 (TrackedReference_t1211 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TrackedReference::op_Equality(UnityEngine.TrackedReference,UnityEngine.TrackedReference)
 bool TrackedReference_op_Equality_m3974 (Object_t * __this/* static, unused */, TrackedReference_t1211 * ___x, TrackedReference_t1211 * ___y, MethodInfo* method) IL2CPP_METHOD_ATTR;
void TrackedReference_t1211_marshal(const TrackedReference_t1211& unmarshaled, TrackedReference_t1211_marshaled& marshaled);
void TrackedReference_t1211_marshal_back(const TrackedReference_t1211_marshaled& marshaled, TrackedReference_t1211& unmarshaled);
void TrackedReference_t1211_marshal_cleanup(TrackedReference_t1211_marshaled& marshaled);
