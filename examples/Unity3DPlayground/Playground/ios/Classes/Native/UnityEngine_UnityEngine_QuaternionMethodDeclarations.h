#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Quaternion
struct Quaternion_t68;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void UnityEngine.Quaternion::.ctor(System.Single,System.Single,System.Single,System.Single)
 void Quaternion__ctor_m5547 (Quaternion_t68 * __this, float ___x, float ___y, float ___z, float ___w, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Quaternion::Dot(UnityEngine.Quaternion,UnityEngine.Quaternion)
 float Quaternion_Dot_m5548 (Object_t * __this/* static, unused */, Quaternion_t68  ___a, Quaternion_t68  ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::LookRotation(UnityEngine.Vector3)
 Quaternion_t68  Quaternion_LookRotation_m530 (Object_t * __this/* static, unused */, Vector3_t10  ___forward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_LookRotation(UnityEngine.Vector3&,UnityEngine.Vector3&)
 Quaternion_t68  Quaternion_INTERNAL_CALL_LookRotation_m5549 (Object_t * __this/* static, unused */, Vector3_t10 * ___forward, Vector3_t10 * ___upwards, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Inverse(UnityEngine.Quaternion)
 Quaternion_t68  Quaternion_Inverse_m2287 (Object_t * __this/* static, unused */, Quaternion_t68  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Inverse(UnityEngine.Quaternion&)
 Quaternion_t68  Quaternion_INTERNAL_CALL_Inverse_m5550 (Object_t * __this/* static, unused */, Quaternion_t68 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Quaternion::ToString()
 String_t* Quaternion_ToString_m5551 (Quaternion_t68 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::get_eulerAngles()
 Vector3_t10  Quaternion_get_eulerAngles_m5552 (Quaternion_t68 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
 Quaternion_t68  Quaternion_Euler_m507 (Object_t * __this/* static, unused */, float ___x, float ___y, float ___z, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::Internal_ToEulerRad(UnityEngine.Quaternion)
 Vector3_t10  Quaternion_Internal_ToEulerRad_m5553 (Object_t * __this/* static, unused */, Quaternion_t68  ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::INTERNAL_CALL_Internal_ToEulerRad(UnityEngine.Quaternion&)
 Vector3_t10  Quaternion_INTERNAL_CALL_Internal_ToEulerRad_m5554 (Object_t * __this/* static, unused */, Quaternion_t68 * ___rotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
 Quaternion_t68  Quaternion_Internal_FromEulerRad_m5555 (Object_t * __this/* static, unused */, Vector3_t10  ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::INTERNAL_CALL_Internal_FromEulerRad(UnityEngine.Vector3&)
 Quaternion_t68  Quaternion_INTERNAL_CALL_Internal_FromEulerRad_m5556 (Object_t * __this/* static, unused */, Vector3_t10 * ___euler, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Quaternion::GetHashCode()
 int32_t Quaternion_GetHashCode_m5557 (Quaternion_t68 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::Equals(System.Object)
 bool Quaternion_Equals_m5558 (Quaternion_t68 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Quaternion)
 Quaternion_t68  Quaternion_op_Multiply_m508 (Object_t * __this/* static, unused */, Quaternion_t68  ___lhs, Quaternion_t68  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
 Vector3_t10  Quaternion_op_Multiply_m512 (Object_t * __this/* static, unused */, Quaternion_t68  ___rotation, Vector3_t10  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Quaternion::op_Inequality(UnityEngine.Quaternion,UnityEngine.Quaternion)
 bool Quaternion_op_Inequality_m2196 (Object_t * __this/* static, unused */, Quaternion_t68  ___lhs, Quaternion_t68  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
