#pragma once
// System.Type[]
struct TypeU5BU5D_t1229;
// System.Reflection.Emit.TypeBuilder
struct TypeBuilder_t2242;
// System.Reflection.Emit.ParameterBuilder[]
struct ParameterBuilderU5BU5D_t2243;
// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"
// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"
// System.Reflection.CallingConventions
#include "mscorlib_System_Reflection_CallingConventions.h"
// System.Reflection.Emit.ConstructorBuilder
struct ConstructorBuilder_t2244  : public ConstructorInfo_t1391
{
	// System.Type[] System.Reflection.Emit.ConstructorBuilder::parameters
	TypeU5BU5D_t1229* ___parameters_2;
	// System.Reflection.MethodAttributes System.Reflection.Emit.ConstructorBuilder::attrs
	int32_t ___attrs_3;
	// System.Reflection.CallingConventions System.Reflection.Emit.ConstructorBuilder::call_conv
	int32_t ___call_conv_4;
	// System.Reflection.Emit.TypeBuilder System.Reflection.Emit.ConstructorBuilder::type
	TypeBuilder_t2242 * ___type_5;
	// System.Reflection.Emit.ParameterBuilder[] System.Reflection.Emit.ConstructorBuilder::pinfo
	ParameterBuilderU5BU5D_t2243* ___pinfo_6;
};
