#pragma once

// System.Version
struct Version_t1648;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Version::.ctor()
 void Version__ctor_m11945 (Version_t1648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
 void Version__ctor_m11946 (Version_t1648 * __this, String_t* ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
 void Version__ctor_m6372 (Version_t1648 * __this, int32_t ___major, int32_t ___minor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
 void Version__ctor_m11947 (Version_t1648 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void Version_CheckedSet_m11948 (Version_t1648 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
 int32_t Version_get_Build_m11949 (Version_t1648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
 int32_t Version_get_Major_m6379 (Version_t1648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
 int32_t Version_get_Minor_m6380 (Version_t1648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
 int32_t Version_get_Revision_m11950 (Version_t1648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
 int32_t Version_CompareTo_m11951 (Version_t1648 * __this, Object_t * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
 bool Version_Equals_m11952 (Version_t1648 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
 int32_t Version_CompareTo_m11953 (Version_t1648 * __this, Version_t1648 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
 bool Version_Equals_m11954 (Version_t1648 * __this, Version_t1648 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
 int32_t Version_GetHashCode_m11955 (Version_t1648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
 String_t* Version_ToString_m11956 (Version_t1648 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
 Version_t1648 * Version_CreateFromString_m11957 (Object_t * __this/* static, unused */, String_t* ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
 bool Version_op_Equality_m6374 (Object_t * __this/* static, unused */, Version_t1648 * ___v1, Version_t1648 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
 bool Version_op_Inequality_m6377 (Object_t * __this/* static, unused */, Version_t1648 * ___v1, Version_t1648 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_LessThan(System.Version,System.Version)
 bool Version_op_LessThan_m6378 (Object_t * __this/* static, unused */, Version_t1648 * ___v1, Version_t1648 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
