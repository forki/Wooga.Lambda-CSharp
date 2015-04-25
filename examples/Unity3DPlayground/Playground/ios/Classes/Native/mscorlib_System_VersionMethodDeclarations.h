#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Version
struct Version_t2996;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Version::.ctor()
 void Version__ctor_m13505 (Version_t2996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.String)
 void Version__ctor_m13506 (Version_t2996 * __this, String_t* ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32)
 void Version__ctor_m7686 (Version_t2996 * __this, int32_t ___major, int32_t ___minor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32)
 void Version__ctor_m13507 (Version_t2996 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::.ctor(System.Int32,System.Int32,System.Int32,System.Int32)
 void Version__ctor_m13508 (Version_t2996 * __this, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Version::CheckedSet(System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void Version_CheckedSet_m13509 (Version_t2996 * __this, int32_t ___defined, int32_t ___major, int32_t ___minor, int32_t ___build, int32_t ___revision, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Build()
 int32_t Version_get_Build_m13510 (Version_t2996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Major()
 int32_t Version_get_Major_m13511 (Version_t2996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Minor()
 int32_t Version_get_Minor_m13512 (Version_t2996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::get_Revision()
 int32_t Version_get_Revision_m13513 (Version_t2996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Object System.Version::Clone()
 Object_t * Version_Clone_m13514 (Version_t2996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Object)
 int32_t Version_CompareTo_m13515 (Version_t2996 * __this, Object_t * ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Object)
 bool Version_Equals_m13516 (Version_t2996 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::CompareTo(System.Version)
 int32_t Version_CompareTo_m13517 (Version_t2996 * __this, Version_t2996 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::Equals(System.Version)
 bool Version_Equals_m13518 (Version_t2996 * __this, Version_t2996 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Version::GetHashCode()
 int32_t Version_GetHashCode_m13519 (Version_t2996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Version::ToString()
 String_t* Version_ToString_m13520 (Version_t2996 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Version System.Version::CreateFromString(System.String)
 Version_t2996 * Version_CreateFromString_m13521 (Object_t * __this/* static, unused */, String_t* ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Equality(System.Version,System.Version)
 bool Version_op_Equality_m13522 (Object_t * __this/* static, unused */, Version_t2996 * ___v1, Version_t2996 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Version::op_Inequality(System.Version,System.Version)
 bool Version_op_Inequality_m13523 (Object_t * __this/* static, unused */, Version_t2996 * ___v1, Version_t2996 * ___v2, MethodInfo* method) IL2CPP_METHOD_ATTR;
