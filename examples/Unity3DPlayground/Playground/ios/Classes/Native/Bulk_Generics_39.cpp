#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_465.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo InternalEnumerator_1_t6400_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.SByte>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_465MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.SByte
#include "mscorlib_System_SByte.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Array
#include "mscorlib_System_Array.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo SByte_t110_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t2444_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m28662_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5171_MethodInfo;
extern MethodInfo Array_get_Length_m2933_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSByte_t110_m36537_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.SByte>(System.Int32)
 int8_t Array_InternalArray__get_Item_TisSByte_t110_m36537 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.SByte>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m28657_MethodInfo;
 void InternalEnumerator_1__ctor_m28657 (InternalEnumerator_1_t6400 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28658_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28658 (InternalEnumerator_1_t6400 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28659_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28659 (InternalEnumerator_1_t6400 * __this, MethodInfo* method){
	{
		int8_t L_0 = InternalEnumerator_1_get_Current_m28662(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m28662_MethodInfo);
		int8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SByte_t110_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.SByte>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m28660_MethodInfo;
 void InternalEnumerator_1_Dispose_m28660 (InternalEnumerator_1_t6400 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.SByte>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m28661_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m28661 (InternalEnumerator_1_t6400 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m2933(L_1, /*hidden argument*/&Array_get_Length_m2933_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.SByte>::get_Current()
 int8_t InternalEnumerator_1_get_Current_m28662 (InternalEnumerator_1_t6400 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t2444 * L_1 = (InvalidOperationException_t2444 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t2444_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5171(L_1, (String_t*) &_stringLiteral1182, /*hidden argument*/&InvalidOperationException__ctor_m5171_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t2444 * L_3 = (InvalidOperationException_t2444 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t2444_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5171(L_3, (String_t*) &_stringLiteral1183, /*hidden argument*/&InvalidOperationException__ctor_m5171_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m2933(L_5, /*hidden argument*/&Array_get_Length_m2933_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int8_t L_8 = Array_InternalArray__get_Item_TisSByte_t110_m36537(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSByte_t110_m36537_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.SByte>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6400____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6400_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6400, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6400____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6400_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6400, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6400_FieldInfos[] =
{
	&InternalEnumerator_1_t6400____array_0_FieldInfo,
	&InternalEnumerator_1_t6400____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t6400____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6400_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28659_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6400____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6400_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28662_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6400_PropertyInfos[] =
{
	&InternalEnumerator_1_t6400____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6400____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6400_InternalEnumerator_1__ctor_m28657_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28657_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.SByte>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28657_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m28657/* method */
	, &InternalEnumerator_1_t6400_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6400_InternalEnumerator_1__ctor_m28657_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28657_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28658_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28658_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28658/* method */
	, &InternalEnumerator_1_t6400_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28658_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28659_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.SByte>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28659_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28659/* method */
	, &InternalEnumerator_1_t6400_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28659_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28660_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.SByte>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28660_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m28660/* method */
	, &InternalEnumerator_1_t6400_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28660_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28661_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.SByte>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28661_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m28661/* method */
	, &InternalEnumerator_1_t6400_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28661_GenericMethod/* genericMethod */

};
extern Il2CppType SByte_t110_0_0_0;
extern void* RuntimeInvoker_SByte_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28662_GenericMethod;
// T System.Array/InternalEnumerator`1<System.SByte>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28662_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m28662/* method */
	, &InternalEnumerator_1_t6400_il2cpp_TypeInfo/* declaring_type */
	, &SByte_t110_0_0_0/* return_type */
	, RuntimeInvoker_SByte_t110/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28662_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6400_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28657_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28658_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28659_MethodInfo,
	&InternalEnumerator_1_Dispose_m28660_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28661_MethodInfo,
	&InternalEnumerator_1_get_Current_m28662_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m519_MethodInfo;
extern MethodInfo Object_Finalize_m288_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m520_MethodInfo;
extern MethodInfo ValueType_ToString_m521_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6400_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28659_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28661_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28658_MethodInfo,
	&InternalEnumerator_1_Dispose_m28660_MethodInfo,
	&InternalEnumerator_1_get_Current_m28662_MethodInfo,
};
extern TypeInfo IEnumerator_t51_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t114_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t8088_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t6400_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8088_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6400_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8088_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6400_0_0_0;
extern Il2CppType InternalEnumerator_1_t6400_1_0_0;
extern TypeInfo ValueType_t144_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t6400_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t6400_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6400_MethodInfos/* methods */
	, InternalEnumerator_1_t6400_PropertyInfos/* properties */
	, InternalEnumerator_1_t6400_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6400_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6400_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6400_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6400_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6400_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6400_1_0_0/* this_arg */
	, InternalEnumerator_1_t6400_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6400_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6400)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9762_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.SByte>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.SByte>
extern MethodInfo ICollection_1_get_Count_m45962_MethodInfo;
static PropertyInfo ICollection_1_t9762____Count_PropertyInfo = 
{
	&ICollection_1_t9762_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45962_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45963_MethodInfo;
static PropertyInfo ICollection_1_t9762____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9762_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45963_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9762_PropertyInfos[] =
{
	&ICollection_1_t9762____Count_PropertyInfo,
	&ICollection_1_t9762____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45962_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.SByte>::get_Count()
MethodInfo ICollection_1_get_Count_m45962_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9762_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m45962_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45963_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45963_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9762_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m45963_GenericMethod/* genericMethod */

};
extern Il2CppType SByte_t110_0_0_0;
extern Il2CppType SByte_t110_0_0_0;
static ParameterInfo ICollection_1_t9762_ICollection_1_Add_m45964_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t110_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_SByte_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45964_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Add(T)
MethodInfo ICollection_1_Add_m45964_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9762_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_SByte_t110/* invoker_method */
	, ICollection_1_t9762_ICollection_1_Add_m45964_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45964_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45965_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::Clear()
MethodInfo ICollection_1_Clear_m45965_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9762_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m45965_GenericMethod/* genericMethod */

};
extern Il2CppType SByte_t110_0_0_0;
static ParameterInfo ICollection_1_t9762_ICollection_1_Contains_m45966_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t110_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_SByte_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45966_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Contains(T)
MethodInfo ICollection_1_Contains_m45966_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9762_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_SByte_t110/* invoker_method */
	, ICollection_1_t9762_ICollection_1_Contains_m45966_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m45966_GenericMethod/* genericMethod */

};
extern Il2CppType SByteU5BU5D_t3877_0_0_0;
extern Il2CppType SByteU5BU5D_t3877_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9762_ICollection_1_CopyTo_m45967_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SByteU5BU5D_t3877_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45967_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.SByte>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45967_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9762_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9762_ICollection_1_CopyTo_m45967_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m45967_GenericMethod/* genericMethod */

};
extern Il2CppType SByte_t110_0_0_0;
static ParameterInfo ICollection_1_t9762_ICollection_1_Remove_m45968_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t110_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_SByte_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45968_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.SByte>::Remove(T)
MethodInfo ICollection_1_Remove_m45968_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9762_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_SByte_t110/* invoker_method */
	, ICollection_1_t9762_ICollection_1_Remove_m45968_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m45968_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9762_MethodInfos[] =
{
	&ICollection_1_get_Count_m45962_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45963_MethodInfo,
	&ICollection_1_Add_m45964_MethodInfo,
	&ICollection_1_Clear_m45965_MethodInfo,
	&ICollection_1_Contains_m45966_MethodInfo,
	&ICollection_1_CopyTo_m45967_MethodInfo,
	&ICollection_1_Remove_m45968_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t1668_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t9764_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9762_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9764_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9762_0_0_0;
extern Il2CppType ICollection_1_t9762_1_0_0;
struct ICollection_1_t9762;
extern Il2CppGenericClass ICollection_1_t9762_GenericClass;
TypeInfo ICollection_1_t9762_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9762_MethodInfos/* methods */
	, ICollection_1_t9762_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9762_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9762_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9762_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9762_0_0_0/* byval_arg */
	, &ICollection_1_t9762_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9762_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.SByte>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.SByte>
extern Il2CppType IEnumerator_1_t8088_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45969_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.SByte>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45969_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9764_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8088_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m45969_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9764_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45969_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9764_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9764_0_0_0;
extern Il2CppType IEnumerable_1_t9764_1_0_0;
struct IEnumerable_1_t9764;
extern Il2CppGenericClass IEnumerable_1_t9764_GenericClass;
TypeInfo IEnumerable_1_t9764_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9764_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9764_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9764_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9764_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9764_0_0_0/* byval_arg */
	, &IEnumerable_1_t9764_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9764_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9763_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.SByte>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.SByte>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.SByte>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.SByte>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.SByte>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.SByte>
extern MethodInfo IList_1_get_Item_m45970_MethodInfo;
extern MethodInfo IList_1_set_Item_m45971_MethodInfo;
static PropertyInfo IList_1_t9763____Item_PropertyInfo = 
{
	&IList_1_t9763_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45970_MethodInfo/* get */
	, &IList_1_set_Item_m45971_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9763_PropertyInfos[] =
{
	&IList_1_t9763____Item_PropertyInfo,
	NULL
};
extern Il2CppType SByte_t110_0_0_0;
static ParameterInfo IList_1_t9763_IList_1_IndexOf_m45972_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t110_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_SByte_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45972_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.SByte>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45972_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9763_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_SByte_t110/* invoker_method */
	, IList_1_t9763_IList_1_IndexOf_m45972_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m45972_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType SByte_t110_0_0_0;
static ParameterInfo IList_1_t9763_IList_1_Insert_m45973_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SByte_t110_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_SByte_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45973_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.SByte>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45973_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_SByte_t110/* invoker_method */
	, IList_1_t9763_IList_1_Insert_m45973_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m45973_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9763_IList_1_RemoveAt_m45974_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45974_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.SByte>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45974_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9763_IList_1_RemoveAt_m45974_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45974_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9763_IList_1_get_Item_m45970_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType SByte_t110_0_0_0;
extern void* RuntimeInvoker_SByte_t110_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45970_GenericMethod;
// T System.Collections.Generic.IList`1<System.SByte>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45970_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9763_il2cpp_TypeInfo/* declaring_type */
	, &SByte_t110_0_0_0/* return_type */
	, RuntimeInvoker_SByte_t110_Int32_t104/* invoker_method */
	, IList_1_t9763_IList_1_get_Item_m45970_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m45970_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType SByte_t110_0_0_0;
static ParameterInfo IList_1_t9763_IList_1_set_Item_m45971_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SByte_t110_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_SByte_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45971_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.SByte>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45971_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_SByte_t110/* invoker_method */
	, IList_1_t9763_IList_1_set_Item_m45971_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m45971_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9763_MethodInfos[] =
{
	&IList_1_IndexOf_m45972_MethodInfo,
	&IList_1_Insert_m45973_MethodInfo,
	&IList_1_RemoveAt_m45974_MethodInfo,
	&IList_1_get_Item_m45970_MethodInfo,
	&IList_1_set_Item_m45971_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9763_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9762_il2cpp_TypeInfo,
	&IEnumerable_1_t9764_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9763_0_0_0;
extern Il2CppType IList_1_t9763_1_0_0;
struct IList_1_t9763;
extern Il2CppGenericClass IList_1_t9763_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9763_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9763_MethodInfos/* methods */
	, IList_1_t9763_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9763_il2cpp_TypeInfo/* element_class */
	, IList_1_t9763_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9763_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9763_0_0_0/* byval_arg */
	, &IList_1_t9763_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9763_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9765_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>
extern MethodInfo ICollection_1_get_Count_m45975_MethodInfo;
static PropertyInfo ICollection_1_t9765____Count_PropertyInfo = 
{
	&ICollection_1_t9765_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45975_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45976_MethodInfo;
static PropertyInfo ICollection_1_t9765____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9765_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45976_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9765_PropertyInfos[] =
{
	&ICollection_1_t9765____Count_PropertyInfo,
	&ICollection_1_t9765____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45975_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::get_Count()
MethodInfo ICollection_1_get_Count_m45975_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9765_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m45975_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45976_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45976_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9765_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m45976_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t4017_0_0_0;
extern Il2CppType IComparable_1_t4017_0_0_0;
static ParameterInfo ICollection_1_t9765_ICollection_1_Add_m45977_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t4017_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45977_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Add(T)
MethodInfo ICollection_1_Add_m45977_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9765_ICollection_1_Add_m45977_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45977_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45978_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Clear()
MethodInfo ICollection_1_Clear_m45978_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m45978_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t4017_0_0_0;
static ParameterInfo ICollection_1_t9765_ICollection_1_Contains_m45979_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t4017_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45979_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Contains(T)
MethodInfo ICollection_1_Contains_m45979_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9765_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9765_ICollection_1_Contains_m45979_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m45979_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1U5BU5D_t6719_0_0_0;
extern Il2CppType IComparable_1U5BU5D_t6719_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9765_ICollection_1_CopyTo_m45980_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1U5BU5D_t6719_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45980_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45980_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9765_ICollection_1_CopyTo_m45980_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m45980_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t4017_0_0_0;
static ParameterInfo ICollection_1_t9765_ICollection_1_Remove_m45981_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t4017_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45981_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.SByte>>::Remove(T)
MethodInfo ICollection_1_Remove_m45981_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9765_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9765_ICollection_1_Remove_m45981_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m45981_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9765_MethodInfos[] =
{
	&ICollection_1_get_Count_m45975_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45976_MethodInfo,
	&ICollection_1_Add_m45977_MethodInfo,
	&ICollection_1_Clear_m45978_MethodInfo,
	&ICollection_1_Contains_m45979_MethodInfo,
	&ICollection_1_CopyTo_m45980_MethodInfo,
	&ICollection_1_Remove_m45981_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9767_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9765_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9767_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9765_0_0_0;
extern Il2CppType ICollection_1_t9765_1_0_0;
struct ICollection_1_t9765;
extern Il2CppGenericClass ICollection_1_t9765_GenericClass;
TypeInfo ICollection_1_t9765_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9765_MethodInfos/* methods */
	, ICollection_1_t9765_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9765_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9765_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9765_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9765_0_0_0/* byval_arg */
	, &ICollection_1_t9765_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9765_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.SByte>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.SByte>>
extern Il2CppType IEnumerator_1_t8090_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45982_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.SByte>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45982_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9767_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8090_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m45982_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9767_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45982_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9767_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9767_0_0_0;
extern Il2CppType IEnumerable_1_t9767_1_0_0;
struct IEnumerable_1_t9767;
extern Il2CppGenericClass IEnumerable_1_t9767_GenericClass;
TypeInfo IEnumerable_1_t9767_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9767_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9767_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9767_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9767_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9767_0_0_0/* byval_arg */
	, &IEnumerable_1_t9767_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9767_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8090_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.SByte>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.SByte>>
extern MethodInfo IEnumerator_1_get_Current_m45983_MethodInfo;
static PropertyInfo IEnumerator_1_t8090____Current_PropertyInfo = 
{
	&IEnumerator_1_t8090_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45983_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8090_PropertyInfos[] =
{
	&IEnumerator_1_t8090____Current_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t4017_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45983_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.SByte>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45983_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8090_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t4017_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m45983_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8090_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45983_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8090_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8090_0_0_0;
extern Il2CppType IEnumerator_1_t8090_1_0_0;
struct IEnumerator_1_t8090;
extern Il2CppGenericClass IEnumerator_1_t8090_GenericClass;
TypeInfo IEnumerator_1_t8090_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8090_MethodInfos/* methods */
	, IEnumerator_1_t8090_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8090_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8090_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8090_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8090_0_0_0/* byval_arg */
	, &IEnumerator_1_t8090_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8090_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4017_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.SByte>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.SByte>
extern Il2CppType SByte_t110_0_0_0;
static ParameterInfo IComparable_1_t4017_IComparable_1_CompareTo_m45984_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t110_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_SByte_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m45984_GenericMethod;
// System.Int32 System.IComparable`1<System.SByte>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m45984_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t4017_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_SByte_t110/* invoker_method */
	, IComparable_1_t4017_IComparable_1_CompareTo_m45984_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparable_1_CompareTo_m45984_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t4017_MethodInfos[] =
{
	&IComparable_1_CompareTo_m45984_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t4017_1_0_0;
struct IComparable_1_t4017;
extern Il2CppGenericClass IComparable_1_t4017_GenericClass;
TypeInfo IComparable_1_t4017_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t4017_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t4017_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t4017_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t4017_0_0_0/* byval_arg */
	, &IComparable_1_t4017_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t4017_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_466.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6401_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_466MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m28668_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t4017_m36548_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m30104_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m30104(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.SByte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.SByte>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t4017_m36548(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6401____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6401_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6401, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6401____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6401_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6401, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6401_FieldInfos[] =
{
	&InternalEnumerator_1_t6401____array_0_FieldInfo,
	&InternalEnumerator_1_t6401____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28665_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6401____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6401_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28665_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6401____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6401_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28668_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6401_PropertyInfos[] =
{
	&InternalEnumerator_1_t6401____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6401____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6401_InternalEnumerator_1__ctor_m28663_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28663_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28663_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6401_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6401_InternalEnumerator_1__ctor_m28663_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28663_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28664_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28664_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6401_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28664_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28665_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28665_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6401_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28665_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28666_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28666_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6401_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28666_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28667_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28667_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6401_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28667_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t4017_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28668_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.SByte>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28668_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6401_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t4017_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28668_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6401_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28663_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28664_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28665_MethodInfo,
	&InternalEnumerator_1_Dispose_m28666_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28667_MethodInfo,
	&InternalEnumerator_1_get_Current_m28668_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28667_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28664_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28666_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6401_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28665_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28667_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28664_MethodInfo,
	&InternalEnumerator_1_Dispose_m28666_MethodInfo,
	&InternalEnumerator_1_get_Current_m28668_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6401_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8090_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6401_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8090_il2cpp_TypeInfo, 8},
};
extern TypeInfo IComparable_1_t4017_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6401_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28668_MethodInfo/* Method Usage */,
	&IComparable_1_t4017_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIComparable_1_t4017_m36548_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6401_0_0_0;
extern Il2CppType InternalEnumerator_1_t6401_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6401_GenericClass;
TypeInfo InternalEnumerator_1_t6401_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6401_MethodInfos/* methods */
	, InternalEnumerator_1_t6401_PropertyInfos/* properties */
	, InternalEnumerator_1_t6401_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6401_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6401_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6401_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6401_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6401_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6401_1_0_0/* this_arg */
	, InternalEnumerator_1_t6401_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6401_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6401_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6401)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9766_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>
extern MethodInfo IList_1_get_Item_m45985_MethodInfo;
extern MethodInfo IList_1_set_Item_m45986_MethodInfo;
static PropertyInfo IList_1_t9766____Item_PropertyInfo = 
{
	&IList_1_t9766_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m45985_MethodInfo/* get */
	, &IList_1_set_Item_m45986_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9766_PropertyInfos[] =
{
	&IList_1_t9766____Item_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t4017_0_0_0;
static ParameterInfo IList_1_t9766_IList_1_IndexOf_m45987_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t4017_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m45987_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m45987_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9766_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9766_IList_1_IndexOf_m45987_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m45987_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType IComparable_1_t4017_0_0_0;
static ParameterInfo IList_1_t9766_IList_1_Insert_m45988_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t4017_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m45988_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m45988_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9766_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9766_IList_1_Insert_m45988_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m45988_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9766_IList_1_RemoveAt_m45989_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m45989_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m45989_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9766_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9766_IList_1_RemoveAt_m45989_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m45989_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9766_IList_1_get_Item_m45985_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType IComparable_1_t4017_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m45985_GenericMethod;
// T System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m45985_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9766_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t4017_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9766_IList_1_get_Item_m45985_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m45985_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType IComparable_1_t4017_0_0_0;
static ParameterInfo IList_1_t9766_IList_1_set_Item_m45986_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t4017_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m45986_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.SByte>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m45986_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9766_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9766_IList_1_set_Item_m45986_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m45986_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9766_MethodInfos[] =
{
	&IList_1_IndexOf_m45987_MethodInfo,
	&IList_1_Insert_m45988_MethodInfo,
	&IList_1_RemoveAt_m45989_MethodInfo,
	&IList_1_get_Item_m45985_MethodInfo,
	&IList_1_set_Item_m45986_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9766_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9765_il2cpp_TypeInfo,
	&IEnumerable_1_t9767_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9766_0_0_0;
extern Il2CppType IList_1_t9766_1_0_0;
struct IList_1_t9766;
extern Il2CppGenericClass IList_1_t9766_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9766_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9766_MethodInfos/* methods */
	, IList_1_t9766_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9766_il2cpp_TypeInfo/* element_class */
	, IList_1_t9766_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9766_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9766_0_0_0/* byval_arg */
	, &IList_1_t9766_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9766_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9768_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>
extern MethodInfo ICollection_1_get_Count_m45990_MethodInfo;
static PropertyInfo ICollection_1_t9768____Count_PropertyInfo = 
{
	&ICollection_1_t9768_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m45990_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m45991_MethodInfo;
static PropertyInfo ICollection_1_t9768____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9768_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m45991_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9768_PropertyInfos[] =
{
	&ICollection_1_t9768____Count_PropertyInfo,
	&ICollection_1_t9768____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m45990_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::get_Count()
MethodInfo ICollection_1_get_Count_m45990_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9768_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m45990_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m45991_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m45991_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9768_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m45991_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t4018_0_0_0;
extern Il2CppType IEquatable_1_t4018_0_0_0;
static ParameterInfo ICollection_1_t9768_ICollection_1_Add_m45992_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t4018_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m45992_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Add(T)
MethodInfo ICollection_1_Add_m45992_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9768_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9768_ICollection_1_Add_m45992_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m45992_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m45993_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Clear()
MethodInfo ICollection_1_Clear_m45993_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9768_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m45993_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t4018_0_0_0;
static ParameterInfo ICollection_1_t9768_ICollection_1_Contains_m45994_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t4018_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m45994_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Contains(T)
MethodInfo ICollection_1_Contains_m45994_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9768_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9768_ICollection_1_Contains_m45994_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m45994_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1U5BU5D_t6720_0_0_0;
extern Il2CppType IEquatable_1U5BU5D_t6720_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9768_ICollection_1_CopyTo_m45995_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1U5BU5D_t6720_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m45995_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m45995_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9768_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9768_ICollection_1_CopyTo_m45995_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m45995_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t4018_0_0_0;
static ParameterInfo ICollection_1_t9768_ICollection_1_Remove_m45996_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t4018_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m45996_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.SByte>>::Remove(T)
MethodInfo ICollection_1_Remove_m45996_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9768_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9768_ICollection_1_Remove_m45996_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m45996_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9768_MethodInfos[] =
{
	&ICollection_1_get_Count_m45990_MethodInfo,
	&ICollection_1_get_IsReadOnly_m45991_MethodInfo,
	&ICollection_1_Add_m45992_MethodInfo,
	&ICollection_1_Clear_m45993_MethodInfo,
	&ICollection_1_Contains_m45994_MethodInfo,
	&ICollection_1_CopyTo_m45995_MethodInfo,
	&ICollection_1_Remove_m45996_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9770_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9768_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9770_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9768_0_0_0;
extern Il2CppType ICollection_1_t9768_1_0_0;
struct ICollection_1_t9768;
extern Il2CppGenericClass ICollection_1_t9768_GenericClass;
TypeInfo ICollection_1_t9768_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9768_MethodInfos/* methods */
	, ICollection_1_t9768_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9768_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9768_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9768_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9768_0_0_0/* byval_arg */
	, &ICollection_1_t9768_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9768_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.SByte>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.SByte>>
extern Il2CppType IEnumerator_1_t8092_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m45997_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.SByte>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m45997_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9770_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8092_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m45997_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9770_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m45997_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9770_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9770_0_0_0;
extern Il2CppType IEnumerable_1_t9770_1_0_0;
struct IEnumerable_1_t9770;
extern Il2CppGenericClass IEnumerable_1_t9770_GenericClass;
TypeInfo IEnumerable_1_t9770_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9770_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9770_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9770_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9770_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9770_0_0_0/* byval_arg */
	, &IEnumerable_1_t9770_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9770_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8092_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.SByte>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.SByte>>
extern MethodInfo IEnumerator_1_get_Current_m45998_MethodInfo;
static PropertyInfo IEnumerator_1_t8092____Current_PropertyInfo = 
{
	&IEnumerator_1_t8092_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m45998_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8092_PropertyInfos[] =
{
	&IEnumerator_1_t8092____Current_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t4018_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m45998_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.SByte>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m45998_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8092_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t4018_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m45998_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8092_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m45998_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8092_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8092_0_0_0;
extern Il2CppType IEnumerator_1_t8092_1_0_0;
struct IEnumerator_1_t8092;
extern Il2CppGenericClass IEnumerator_1_t8092_GenericClass;
TypeInfo IEnumerator_1_t8092_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8092_MethodInfos/* methods */
	, IEnumerator_1_t8092_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8092_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8092_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8092_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8092_0_0_0/* byval_arg */
	, &IEnumerator_1_t8092_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8092_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4018_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.SByte>::Equals(T)
// Metadata Definition System.IEquatable`1<System.SByte>
extern Il2CppType SByte_t110_0_0_0;
static ParameterInfo IEquatable_1_t4018_IEquatable_1_Equals_m45999_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t110_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_SByte_t110 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m45999_GenericMethod;
// System.Boolean System.IEquatable`1<System.SByte>::Equals(T)
MethodInfo IEquatable_1_Equals_m45999_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t4018_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_SByte_t110/* invoker_method */
	, IEquatable_1_t4018_IEquatable_1_Equals_m45999_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEquatable_1_Equals_m45999_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t4018_MethodInfos[] =
{
	&IEquatable_1_Equals_m45999_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t4018_1_0_0;
struct IEquatable_1_t4018;
extern Il2CppGenericClass IEquatable_1_t4018_GenericClass;
TypeInfo IEquatable_1_t4018_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t4018_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t4018_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t4018_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t4018_0_0_0/* byval_arg */
	, &IEquatable_1_t4018_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t4018_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_467.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6402_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_467MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m28674_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t4018_m36559_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.SByte>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.SByte>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t4018_m36559(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6402____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6402_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6402, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6402____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6402_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6402, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6402_FieldInfos[] =
{
	&InternalEnumerator_1_t6402____array_0_FieldInfo,
	&InternalEnumerator_1_t6402____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28671_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6402____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6402_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28671_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6402____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6402_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28674_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6402_PropertyInfos[] =
{
	&InternalEnumerator_1_t6402____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6402____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6402_InternalEnumerator_1__ctor_m28669_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28669_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28669_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6402_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6402_InternalEnumerator_1__ctor_m28669_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28669_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28670_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28670_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6402_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28670_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28671_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28671_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6402_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28671_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28672_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28672_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6402_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28672_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28673_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28673_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6402_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28673_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t4018_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28674_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.SByte>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28674_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6402_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t4018_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28674_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6402_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28669_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28670_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28671_MethodInfo,
	&InternalEnumerator_1_Dispose_m28672_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28673_MethodInfo,
	&InternalEnumerator_1_get_Current_m28674_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28673_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28670_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28672_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6402_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28671_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28673_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28670_MethodInfo,
	&InternalEnumerator_1_Dispose_m28672_MethodInfo,
	&InternalEnumerator_1_get_Current_m28674_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6402_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8092_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6402_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8092_il2cpp_TypeInfo, 8},
};
extern TypeInfo IEquatable_1_t4018_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6402_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28674_MethodInfo/* Method Usage */,
	&IEquatable_1_t4018_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIEquatable_1_t4018_m36559_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6402_0_0_0;
extern Il2CppType InternalEnumerator_1_t6402_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6402_GenericClass;
TypeInfo InternalEnumerator_1_t6402_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6402_MethodInfos/* methods */
	, InternalEnumerator_1_t6402_PropertyInfos/* properties */
	, InternalEnumerator_1_t6402_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6402_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6402_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6402_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6402_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6402_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6402_1_0_0/* this_arg */
	, InternalEnumerator_1_t6402_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6402_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6402_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6402)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9769_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>
extern MethodInfo IList_1_get_Item_m46000_MethodInfo;
extern MethodInfo IList_1_set_Item_m46001_MethodInfo;
static PropertyInfo IList_1_t9769____Item_PropertyInfo = 
{
	&IList_1_t9769_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46000_MethodInfo/* get */
	, &IList_1_set_Item_m46001_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9769_PropertyInfos[] =
{
	&IList_1_t9769____Item_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t4018_0_0_0;
static ParameterInfo IList_1_t9769_IList_1_IndexOf_m46002_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t4018_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46002_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46002_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9769_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9769_IList_1_IndexOf_m46002_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46002_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType IEquatable_1_t4018_0_0_0;
static ParameterInfo IList_1_t9769_IList_1_Insert_m46003_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t4018_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46003_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46003_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9769_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9769_IList_1_Insert_m46003_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46003_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9769_IList_1_RemoveAt_m46004_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46004_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46004_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9769_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9769_IList_1_RemoveAt_m46004_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46004_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9769_IList_1_get_Item_m46000_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType IEquatable_1_t4018_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46000_GenericMethod;
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46000_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9769_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t4018_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9769_IList_1_get_Item_m46000_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46000_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType IEquatable_1_t4018_0_0_0;
static ParameterInfo IList_1_t9769_IList_1_set_Item_m46001_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t4018_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46001_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.SByte>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46001_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9769_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9769_IList_1_set_Item_m46001_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46001_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9769_MethodInfos[] =
{
	&IList_1_IndexOf_m46002_MethodInfo,
	&IList_1_Insert_m46003_MethodInfo,
	&IList_1_RemoveAt_m46004_MethodInfo,
	&IList_1_get_Item_m46000_MethodInfo,
	&IList_1_set_Item_m46001_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9769_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9768_il2cpp_TypeInfo,
	&IEnumerable_1_t9770_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9769_0_0_0;
extern Il2CppType IList_1_t9769_1_0_0;
struct IList_1_t9769;
extern Il2CppGenericClass IList_1_t9769_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9769_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9769_MethodInfos/* methods */
	, IList_1_t9769_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9769_il2cpp_TypeInfo/* element_class */
	, IList_1_t9769_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9769_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9769_0_0_0/* byval_arg */
	, &IList_1_t9769_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9769_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8093_il2cpp_TypeInfo;

// System.Int16
#include "mscorlib_System_Int16.h"


// T System.Collections.Generic.IEnumerator`1<System.Int16>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Int16>
extern MethodInfo IEnumerator_1_get_Current_m46005_MethodInfo;
static PropertyInfo IEnumerator_1_t8093____Current_PropertyInfo = 
{
	&IEnumerator_1_t8093_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46005_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8093_PropertyInfos[] =
{
	&IEnumerator_1_t8093____Current_PropertyInfo,
	NULL
};
extern Il2CppType Int16_t457_0_0_0;
extern void* RuntimeInvoker_Int16_t457 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46005_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Int16>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46005_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8093_il2cpp_TypeInfo/* declaring_type */
	, &Int16_t457_0_0_0/* return_type */
	, RuntimeInvoker_Int16_t457/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46005_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8093_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46005_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8093_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8093_0_0_0;
extern Il2CppType IEnumerator_1_t8093_1_0_0;
struct IEnumerator_1_t8093;
extern Il2CppGenericClass IEnumerator_1_t8093_GenericClass;
TypeInfo IEnumerator_1_t8093_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8093_MethodInfos/* methods */
	, IEnumerator_1_t8093_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8093_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8093_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8093_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8093_0_0_0/* byval_arg */
	, &IEnumerator_1_t8093_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8093_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_468.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6403_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Int16>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_468MethodDeclarations.h"

extern TypeInfo Int16_t457_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28680_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInt16_t457_m36570_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Int16>(System.Int32)
 int16_t Array_InternalArray__get_Item_TisInt16_t457_m36570 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Int16>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m28675_MethodInfo;
 void InternalEnumerator_1__ctor_m28675 (InternalEnumerator_1_t6403 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28676_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28676 (InternalEnumerator_1_t6403 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28677_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28677 (InternalEnumerator_1_t6403 * __this, MethodInfo* method){
	{
		int16_t L_0 = InternalEnumerator_1_get_Current_m28680(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m28680_MethodInfo);
		int16_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Int16_t457_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Int16>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m28678_MethodInfo;
 void InternalEnumerator_1_Dispose_m28678 (InternalEnumerator_1_t6403 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Int16>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m28679_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m28679 (InternalEnumerator_1_t6403 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m2933(L_1, /*hidden argument*/&Array_get_Length_m2933_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.Int16>::get_Current()
 int16_t InternalEnumerator_1_get_Current_m28680 (InternalEnumerator_1_t6403 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t2444 * L_1 = (InvalidOperationException_t2444 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t2444_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5171(L_1, (String_t*) &_stringLiteral1182, /*hidden argument*/&InvalidOperationException__ctor_m5171_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t2444 * L_3 = (InvalidOperationException_t2444 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t2444_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5171(L_3, (String_t*) &_stringLiteral1183, /*hidden argument*/&InvalidOperationException__ctor_m5171_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m2933(L_5, /*hidden argument*/&Array_get_Length_m2933_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		int16_t L_8 = Array_InternalArray__get_Item_TisInt16_t457_m36570(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisInt16_t457_m36570_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Int16>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6403____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6403_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6403, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6403____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6403_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6403, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6403_FieldInfos[] =
{
	&InternalEnumerator_1_t6403____array_0_FieldInfo,
	&InternalEnumerator_1_t6403____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t6403____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6403_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28677_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6403____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6403_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28680_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6403_PropertyInfos[] =
{
	&InternalEnumerator_1_t6403____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6403____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6403_InternalEnumerator_1__ctor_m28675_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28675_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Int16>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28675_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m28675/* method */
	, &InternalEnumerator_1_t6403_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6403_InternalEnumerator_1__ctor_m28675_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28675_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28676_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28676_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28676/* method */
	, &InternalEnumerator_1_t6403_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28676_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28677_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Int16>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28677_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28677/* method */
	, &InternalEnumerator_1_t6403_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28677_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28678_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Int16>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28678_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m28678/* method */
	, &InternalEnumerator_1_t6403_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28678_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28679_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Int16>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28679_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m28679/* method */
	, &InternalEnumerator_1_t6403_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28679_GenericMethod/* genericMethod */

};
extern Il2CppType Int16_t457_0_0_0;
extern void* RuntimeInvoker_Int16_t457 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28680_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Int16>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28680_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m28680/* method */
	, &InternalEnumerator_1_t6403_il2cpp_TypeInfo/* declaring_type */
	, &Int16_t457_0_0_0/* return_type */
	, RuntimeInvoker_Int16_t457/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28680_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6403_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28675_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28676_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28677_MethodInfo,
	&InternalEnumerator_1_Dispose_m28678_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28679_MethodInfo,
	&InternalEnumerator_1_get_Current_m28680_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t6403_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28677_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28679_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28676_MethodInfo,
	&InternalEnumerator_1_Dispose_m28678_MethodInfo,
	&InternalEnumerator_1_get_Current_m28680_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6403_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8093_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6403_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8093_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6403_0_0_0;
extern Il2CppType InternalEnumerator_1_t6403_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6403_GenericClass;
TypeInfo InternalEnumerator_1_t6403_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6403_MethodInfos/* methods */
	, InternalEnumerator_1_t6403_PropertyInfos/* properties */
	, InternalEnumerator_1_t6403_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6403_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6403_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6403_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6403_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6403_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6403_1_0_0/* this_arg */
	, InternalEnumerator_1_t6403_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6403_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6403)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9771_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Int16>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Int16>
extern MethodInfo ICollection_1_get_Count_m46006_MethodInfo;
static PropertyInfo ICollection_1_t9771____Count_PropertyInfo = 
{
	&ICollection_1_t9771_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46006_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46007_MethodInfo;
static PropertyInfo ICollection_1_t9771____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9771_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46007_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9771_PropertyInfos[] =
{
	&ICollection_1_t9771____Count_PropertyInfo,
	&ICollection_1_t9771____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46006_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Int16>::get_Count()
MethodInfo ICollection_1_get_Count_m46006_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9771_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46006_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46007_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46007_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9771_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46007_GenericMethod/* genericMethod */

};
extern Il2CppType Int16_t457_0_0_0;
extern Il2CppType Int16_t457_0_0_0;
static ParameterInfo ICollection_1_t9771_ICollection_1_Add_m46008_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t457_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int16_t457 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46008_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Add(T)
MethodInfo ICollection_1_Add_m46008_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9771_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int16_t457/* invoker_method */
	, ICollection_1_t9771_ICollection_1_Add_m46008_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46008_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46009_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::Clear()
MethodInfo ICollection_1_Clear_m46009_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9771_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46009_GenericMethod/* genericMethod */

};
extern Il2CppType Int16_t457_0_0_0;
static ParameterInfo ICollection_1_t9771_ICollection_1_Contains_m46010_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t457_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int16_t457 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46010_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Contains(T)
MethodInfo ICollection_1_Contains_m46010_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9771_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int16_t457/* invoker_method */
	, ICollection_1_t9771_ICollection_1_Contains_m46010_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46010_GenericMethod/* genericMethod */

};
extern Il2CppType Int16U5BU5D_t4051_0_0_0;
extern Il2CppType Int16U5BU5D_t4051_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9771_ICollection_1_CopyTo_m46011_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Int16U5BU5D_t4051_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46011_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Int16>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46011_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9771_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9771_ICollection_1_CopyTo_m46011_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46011_GenericMethod/* genericMethod */

};
extern Il2CppType Int16_t457_0_0_0;
static ParameterInfo ICollection_1_t9771_ICollection_1_Remove_m46012_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t457_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int16_t457 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46012_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Int16>::Remove(T)
MethodInfo ICollection_1_Remove_m46012_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9771_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int16_t457/* invoker_method */
	, ICollection_1_t9771_ICollection_1_Remove_m46012_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46012_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9771_MethodInfos[] =
{
	&ICollection_1_get_Count_m46006_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46007_MethodInfo,
	&ICollection_1_Add_m46008_MethodInfo,
	&ICollection_1_Clear_m46009_MethodInfo,
	&ICollection_1_Contains_m46010_MethodInfo,
	&ICollection_1_CopyTo_m46011_MethodInfo,
	&ICollection_1_Remove_m46012_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9773_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9771_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9773_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9771_0_0_0;
extern Il2CppType ICollection_1_t9771_1_0_0;
struct ICollection_1_t9771;
extern Il2CppGenericClass ICollection_1_t9771_GenericClass;
TypeInfo ICollection_1_t9771_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9771_MethodInfos/* methods */
	, ICollection_1_t9771_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9771_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9771_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9771_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9771_0_0_0/* byval_arg */
	, &ICollection_1_t9771_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9771_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int16>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Int16>
extern Il2CppType IEnumerator_1_t8093_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46013_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Int16>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46013_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9773_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8093_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46013_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9773_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46013_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9773_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9773_0_0_0;
extern Il2CppType IEnumerable_1_t9773_1_0_0;
struct IEnumerable_1_t9773;
extern Il2CppGenericClass IEnumerable_1_t9773_GenericClass;
TypeInfo IEnumerable_1_t9773_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9773_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9773_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9773_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9773_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9773_0_0_0/* byval_arg */
	, &IEnumerable_1_t9773_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9773_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9772_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Int16>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Int16>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Int16>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Int16>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Int16>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Int16>
extern MethodInfo IList_1_get_Item_m46014_MethodInfo;
extern MethodInfo IList_1_set_Item_m46015_MethodInfo;
static PropertyInfo IList_1_t9772____Item_PropertyInfo = 
{
	&IList_1_t9772_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46014_MethodInfo/* get */
	, &IList_1_set_Item_m46015_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9772_PropertyInfos[] =
{
	&IList_1_t9772____Item_PropertyInfo,
	NULL
};
extern Il2CppType Int16_t457_0_0_0;
static ParameterInfo IList_1_t9772_IList_1_IndexOf_m46016_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t457_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Int16_t457 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46016_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Int16>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46016_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9772_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Int16_t457/* invoker_method */
	, IList_1_t9772_IList_1_IndexOf_m46016_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46016_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType Int16_t457_0_0_0;
static ParameterInfo IList_1_t9772_IList_1_Insert_m46017_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Int16_t457_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int16_t457 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46017_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Int16>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46017_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9772_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int16_t457/* invoker_method */
	, IList_1_t9772_IList_1_Insert_m46017_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46017_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9772_IList_1_RemoveAt_m46018_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46018_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Int16>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46018_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9772_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9772_IList_1_RemoveAt_m46018_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46018_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9772_IList_1_get_Item_m46014_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Int16_t457_0_0_0;
extern void* RuntimeInvoker_Int16_t457_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46014_GenericMethod;
// T System.Collections.Generic.IList`1<System.Int16>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46014_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9772_il2cpp_TypeInfo/* declaring_type */
	, &Int16_t457_0_0_0/* return_type */
	, RuntimeInvoker_Int16_t457_Int32_t104/* invoker_method */
	, IList_1_t9772_IList_1_get_Item_m46014_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46014_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType Int16_t457_0_0_0;
static ParameterInfo IList_1_t9772_IList_1_set_Item_m46015_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Int16_t457_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int16_t457 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46015_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Int16>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46015_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9772_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int16_t457/* invoker_method */
	, IList_1_t9772_IList_1_set_Item_m46015_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46015_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9772_MethodInfos[] =
{
	&IList_1_IndexOf_m46016_MethodInfo,
	&IList_1_Insert_m46017_MethodInfo,
	&IList_1_RemoveAt_m46018_MethodInfo,
	&IList_1_get_Item_m46014_MethodInfo,
	&IList_1_set_Item_m46015_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9772_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9771_il2cpp_TypeInfo,
	&IEnumerable_1_t9773_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9772_0_0_0;
extern Il2CppType IList_1_t9772_1_0_0;
struct IList_1_t9772;
extern Il2CppGenericClass IList_1_t9772_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9772_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9772_MethodInfos/* methods */
	, IList_1_t9772_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9772_il2cpp_TypeInfo/* element_class */
	, IList_1_t9772_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9772_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9772_0_0_0/* byval_arg */
	, &IList_1_t9772_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9772_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9774_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>
extern MethodInfo ICollection_1_get_Count_m46019_MethodInfo;
static PropertyInfo ICollection_1_t9774____Count_PropertyInfo = 
{
	&ICollection_1_t9774_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46019_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46020_MethodInfo;
static PropertyInfo ICollection_1_t9774____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9774_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46020_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9774_PropertyInfos[] =
{
	&ICollection_1_t9774____Count_PropertyInfo,
	&ICollection_1_t9774____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46019_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::get_Count()
MethodInfo ICollection_1_get_Count_m46019_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9774_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46019_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46020_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46020_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9774_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46020_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t4019_0_0_0;
extern Il2CppType IComparable_1_t4019_0_0_0;
static ParameterInfo ICollection_1_t9774_ICollection_1_Add_m46021_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t4019_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46021_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Add(T)
MethodInfo ICollection_1_Add_m46021_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9774_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9774_ICollection_1_Add_m46021_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46021_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46022_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Clear()
MethodInfo ICollection_1_Clear_m46022_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9774_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46022_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t4019_0_0_0;
static ParameterInfo ICollection_1_t9774_ICollection_1_Contains_m46023_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t4019_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46023_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Contains(T)
MethodInfo ICollection_1_Contains_m46023_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9774_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9774_ICollection_1_Contains_m46023_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46023_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1U5BU5D_t6721_0_0_0;
extern Il2CppType IComparable_1U5BU5D_t6721_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9774_ICollection_1_CopyTo_m46024_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1U5BU5D_t6721_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46024_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46024_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9774_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9774_ICollection_1_CopyTo_m46024_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46024_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t4019_0_0_0;
static ParameterInfo ICollection_1_t9774_ICollection_1_Remove_m46025_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t4019_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46025_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IComparable`1<System.Int16>>::Remove(T)
MethodInfo ICollection_1_Remove_m46025_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9774_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9774_ICollection_1_Remove_m46025_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46025_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9774_MethodInfos[] =
{
	&ICollection_1_get_Count_m46019_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46020_MethodInfo,
	&ICollection_1_Add_m46021_MethodInfo,
	&ICollection_1_Clear_m46022_MethodInfo,
	&ICollection_1_Contains_m46023_MethodInfo,
	&ICollection_1_CopyTo_m46024_MethodInfo,
	&ICollection_1_Remove_m46025_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9776_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9774_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9776_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9774_0_0_0;
extern Il2CppType ICollection_1_t9774_1_0_0;
struct ICollection_1_t9774;
extern Il2CppGenericClass ICollection_1_t9774_GenericClass;
TypeInfo ICollection_1_t9774_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9774_MethodInfos/* methods */
	, ICollection_1_t9774_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9774_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9774_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9774_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9774_0_0_0/* byval_arg */
	, &ICollection_1_t9774_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9774_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int16>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int16>>
extern Il2CppType IEnumerator_1_t8095_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46026_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IComparable`1<System.Int16>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46026_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9776_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8095_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46026_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9776_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46026_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9776_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9776_0_0_0;
extern Il2CppType IEnumerable_1_t9776_1_0_0;
struct IEnumerable_1_t9776;
extern Il2CppGenericClass IEnumerable_1_t9776_GenericClass;
TypeInfo IEnumerable_1_t9776_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9776_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9776_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9776_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9776_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9776_0_0_0/* byval_arg */
	, &IEnumerable_1_t9776_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9776_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8095_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int16>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int16>>
extern MethodInfo IEnumerator_1_get_Current_m46027_MethodInfo;
static PropertyInfo IEnumerator_1_t8095____Current_PropertyInfo = 
{
	&IEnumerator_1_t8095_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46027_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8095_PropertyInfos[] =
{
	&IEnumerator_1_t8095____Current_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t4019_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46027_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IComparable`1<System.Int16>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46027_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8095_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t4019_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46027_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8095_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46027_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8095_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8095_0_0_0;
extern Il2CppType IEnumerator_1_t8095_1_0_0;
struct IEnumerator_1_t8095;
extern Il2CppGenericClass IEnumerator_1_t8095_GenericClass;
TypeInfo IEnumerator_1_t8095_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8095_MethodInfos/* methods */
	, IEnumerator_1_t8095_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8095_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8095_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8095_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8095_0_0_0/* byval_arg */
	, &IEnumerator_1_t8095_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8095_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4019_il2cpp_TypeInfo;



// System.Int32 System.IComparable`1<System.Int16>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Int16>
extern Il2CppType Int16_t457_0_0_0;
static ParameterInfo IComparable_1_t4019_IComparable_1_CompareTo_m46028_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t457_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Int16_t457 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m46028_GenericMethod;
// System.Int32 System.IComparable`1<System.Int16>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m46028_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t4019_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Int16_t457/* invoker_method */
	, IComparable_1_t4019_IComparable_1_CompareTo_m46028_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparable_1_CompareTo_m46028_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t4019_MethodInfos[] =
{
	&IComparable_1_CompareTo_m46028_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t4019_1_0_0;
struct IComparable_1_t4019;
extern Il2CppGenericClass IComparable_1_t4019_GenericClass;
TypeInfo IComparable_1_t4019_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t4019_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t4019_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t4019_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t4019_0_0_0/* byval_arg */
	, &IComparable_1_t4019_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t4019_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_469.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6404_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_469MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m28686_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIComparable_1_t4019_m36581_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int16>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IComparable`1<System.Int16>>(System.Int32)
#define Array_InternalArray__get_Item_TisIComparable_1_t4019_m36581(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6404____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6404_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6404, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6404____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6404_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6404, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6404_FieldInfos[] =
{
	&InternalEnumerator_1_t6404____array_0_FieldInfo,
	&InternalEnumerator_1_t6404____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28683_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6404____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6404_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28683_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6404____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6404_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28686_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6404_PropertyInfos[] =
{
	&InternalEnumerator_1_t6404____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6404____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6404_InternalEnumerator_1__ctor_m28681_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28681_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28681_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6404_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6404_InternalEnumerator_1__ctor_m28681_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28681_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28682_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28682_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6404_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28682_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28683_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28683_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6404_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28683_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28684_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28684_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6404_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28684_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28685_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28685_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6404_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28685_GenericMethod/* genericMethod */

};
extern Il2CppType IComparable_1_t4019_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28686_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IComparable`1<System.Int16>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28686_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6404_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t4019_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28686_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6404_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28681_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28682_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28683_MethodInfo,
	&InternalEnumerator_1_Dispose_m28684_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28685_MethodInfo,
	&InternalEnumerator_1_get_Current_m28686_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28685_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28682_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28684_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6404_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28683_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28685_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28682_MethodInfo,
	&InternalEnumerator_1_Dispose_m28684_MethodInfo,
	&InternalEnumerator_1_get_Current_m28686_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6404_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8095_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6404_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8095_il2cpp_TypeInfo, 8},
};
extern TypeInfo IComparable_1_t4019_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6404_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28686_MethodInfo/* Method Usage */,
	&IComparable_1_t4019_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIComparable_1_t4019_m36581_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6404_0_0_0;
extern Il2CppType InternalEnumerator_1_t6404_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6404_GenericClass;
TypeInfo InternalEnumerator_1_t6404_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6404_MethodInfos/* methods */
	, InternalEnumerator_1_t6404_PropertyInfos/* properties */
	, InternalEnumerator_1_t6404_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6404_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6404_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6404_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6404_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6404_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6404_1_0_0/* this_arg */
	, InternalEnumerator_1_t6404_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6404_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6404_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6404)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9775_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>
extern MethodInfo IList_1_get_Item_m46029_MethodInfo;
extern MethodInfo IList_1_set_Item_m46030_MethodInfo;
static PropertyInfo IList_1_t9775____Item_PropertyInfo = 
{
	&IList_1_t9775_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46029_MethodInfo/* get */
	, &IList_1_set_Item_m46030_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9775_PropertyInfos[] =
{
	&IList_1_t9775____Item_PropertyInfo,
	NULL
};
extern Il2CppType IComparable_1_t4019_0_0_0;
static ParameterInfo IList_1_t9775_IList_1_IndexOf_m46031_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t4019_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46031_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46031_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9775_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9775_IList_1_IndexOf_m46031_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46031_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType IComparable_1_t4019_0_0_0;
static ParameterInfo IList_1_t9775_IList_1_Insert_m46032_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t4019_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46032_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46032_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9775_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9775_IList_1_Insert_m46032_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46032_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9775_IList_1_RemoveAt_m46033_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46033_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46033_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9775_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9775_IList_1_RemoveAt_m46033_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46033_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9775_IList_1_get_Item_m46029_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType IComparable_1_t4019_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46029_GenericMethod;
// T System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46029_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9775_il2cpp_TypeInfo/* declaring_type */
	, &IComparable_1_t4019_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9775_IList_1_get_Item_m46029_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46029_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType IComparable_1_t4019_0_0_0;
static ParameterInfo IList_1_t9775_IList_1_set_Item_m46030_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IComparable_1_t4019_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46030_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IComparable`1<System.Int16>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46030_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9775_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9775_IList_1_set_Item_m46030_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46030_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9775_MethodInfos[] =
{
	&IList_1_IndexOf_m46031_MethodInfo,
	&IList_1_Insert_m46032_MethodInfo,
	&IList_1_RemoveAt_m46033_MethodInfo,
	&IList_1_get_Item_m46029_MethodInfo,
	&IList_1_set_Item_m46030_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9775_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9774_il2cpp_TypeInfo,
	&IEnumerable_1_t9776_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9775_0_0_0;
extern Il2CppType IList_1_t9775_1_0_0;
struct IList_1_t9775;
extern Il2CppGenericClass IList_1_t9775_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9775_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9775_MethodInfos/* methods */
	, IList_1_t9775_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9775_il2cpp_TypeInfo/* element_class */
	, IList_1_t9775_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9775_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9775_0_0_0/* byval_arg */
	, &IList_1_t9775_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9775_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9777_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>
extern MethodInfo ICollection_1_get_Count_m46034_MethodInfo;
static PropertyInfo ICollection_1_t9777____Count_PropertyInfo = 
{
	&ICollection_1_t9777_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46034_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46035_MethodInfo;
static PropertyInfo ICollection_1_t9777____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9777_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46035_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9777_PropertyInfos[] =
{
	&ICollection_1_t9777____Count_PropertyInfo,
	&ICollection_1_t9777____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46034_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::get_Count()
MethodInfo ICollection_1_get_Count_m46034_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9777_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46034_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46035_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46035_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9777_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46035_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t4020_0_0_0;
extern Il2CppType IEquatable_1_t4020_0_0_0;
static ParameterInfo ICollection_1_t9777_ICollection_1_Add_m46036_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t4020_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46036_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Add(T)
MethodInfo ICollection_1_Add_m46036_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9777_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9777_ICollection_1_Add_m46036_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46036_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46037_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Clear()
MethodInfo ICollection_1_Clear_m46037_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9777_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46037_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t4020_0_0_0;
static ParameterInfo ICollection_1_t9777_ICollection_1_Contains_m46038_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t4020_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46038_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Contains(T)
MethodInfo ICollection_1_Contains_m46038_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9777_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9777_ICollection_1_Contains_m46038_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46038_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1U5BU5D_t6722_0_0_0;
extern Il2CppType IEquatable_1U5BU5D_t6722_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9777_ICollection_1_CopyTo_m46039_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1U5BU5D_t6722_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46039_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46039_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9777_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9777_ICollection_1_CopyTo_m46039_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46039_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t4020_0_0_0;
static ParameterInfo ICollection_1_t9777_ICollection_1_Remove_m46040_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t4020_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46040_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.IEquatable`1<System.Int16>>::Remove(T)
MethodInfo ICollection_1_Remove_m46040_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9777_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9777_ICollection_1_Remove_m46040_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46040_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9777_MethodInfos[] =
{
	&ICollection_1_get_Count_m46034_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46035_MethodInfo,
	&ICollection_1_Add_m46036_MethodInfo,
	&ICollection_1_Clear_m46037_MethodInfo,
	&ICollection_1_Contains_m46038_MethodInfo,
	&ICollection_1_CopyTo_m46039_MethodInfo,
	&ICollection_1_Remove_m46040_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9779_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9777_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9779_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9777_0_0_0;
extern Il2CppType ICollection_1_t9777_1_0_0;
struct ICollection_1_t9777;
extern Il2CppGenericClass ICollection_1_t9777_GenericClass;
TypeInfo ICollection_1_t9777_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9777_MethodInfos/* methods */
	, ICollection_1_t9777_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9777_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9777_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9777_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9777_0_0_0/* byval_arg */
	, &ICollection_1_t9777_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9777_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int16>>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int16>>
extern Il2CppType IEnumerator_1_t8097_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46041_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.IEquatable`1<System.Int16>>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46041_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9779_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8097_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46041_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9779_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46041_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9779_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9779_0_0_0;
extern Il2CppType IEnumerable_1_t9779_1_0_0;
struct IEnumerable_1_t9779;
extern Il2CppGenericClass IEnumerable_1_t9779_GenericClass;
TypeInfo IEnumerable_1_t9779_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9779_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9779_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9779_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9779_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9779_0_0_0/* byval_arg */
	, &IEnumerable_1_t9779_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9779_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8097_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int16>>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int16>>
extern MethodInfo IEnumerator_1_get_Current_m46042_MethodInfo;
static PropertyInfo IEnumerator_1_t8097____Current_PropertyInfo = 
{
	&IEnumerator_1_t8097_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46042_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8097_PropertyInfos[] =
{
	&IEnumerator_1_t8097____Current_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t4020_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46042_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.IEquatable`1<System.Int16>>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46042_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8097_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t4020_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46042_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8097_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46042_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8097_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8097_0_0_0;
extern Il2CppType IEnumerator_1_t8097_1_0_0;
struct IEnumerator_1_t8097;
extern Il2CppGenericClass IEnumerator_1_t8097_GenericClass;
TypeInfo IEnumerator_1_t8097_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8097_MethodInfos/* methods */
	, IEnumerator_1_t8097_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8097_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8097_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8097_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8097_0_0_0/* byval_arg */
	, &IEnumerator_1_t8097_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8097_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4020_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Int16>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Int16>
extern Il2CppType Int16_t457_0_0_0;
static ParameterInfo IEquatable_1_t4020_IEquatable_1_Equals_m46043_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t457_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int16_t457 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m46043_GenericMethod;
// System.Boolean System.IEquatable`1<System.Int16>::Equals(T)
MethodInfo IEquatable_1_Equals_m46043_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t4020_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int16_t457/* invoker_method */
	, IEquatable_1_t4020_IEquatable_1_Equals_m46043_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEquatable_1_Equals_m46043_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t4020_MethodInfos[] =
{
	&IEquatable_1_Equals_m46043_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t4020_1_0_0;
struct IEquatable_1_t4020;
extern Il2CppGenericClass IEquatable_1_t4020_GenericClass;
TypeInfo IEquatable_1_t4020_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t4020_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t4020_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t4020_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t4020_0_0_0/* byval_arg */
	, &IEquatable_1_t4020_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t4020_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_470.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6405_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_470MethodDeclarations.h"

extern MethodInfo InternalEnumerator_1_get_Current_m28692_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIEquatable_1_t4020_m36592_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int16>>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.IEquatable`1<System.Int16>>(System.Int32)
#define Array_InternalArray__get_Item_TisIEquatable_1_t4020_m36592(__this, p0, method) (Object_t*)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::MoveNext()
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6405____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6405_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6405, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6405____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6405_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6405, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6405_FieldInfos[] =
{
	&InternalEnumerator_1_t6405____array_0_FieldInfo,
	&InternalEnumerator_1_t6405____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28689_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6405____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6405_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28689_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6405____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6405_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28692_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6405_PropertyInfos[] =
{
	&InternalEnumerator_1_t6405____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6405____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6405_InternalEnumerator_1__ctor_m28687_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28687_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28687_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6405_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6405_InternalEnumerator_1__ctor_m28687_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28687_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28688_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28688_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6405_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28688_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28689_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28689_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6405_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28689_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28690_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28690_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6405_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28690_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28691_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28691_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6405_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28691_GenericMethod/* genericMethod */

};
extern Il2CppType IEquatable_1_t4020_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28692_GenericMethod;
// T System.Array/InternalEnumerator`1<System.IEquatable`1<System.Int16>>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28692_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6405_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t4020_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28692_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6405_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28687_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28688_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28689_MethodInfo,
	&InternalEnumerator_1_Dispose_m28690_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28691_MethodInfo,
	&InternalEnumerator_1_get_Current_m28692_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28691_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28688_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28690_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6405_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28689_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28691_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28688_MethodInfo,
	&InternalEnumerator_1_Dispose_m28690_MethodInfo,
	&InternalEnumerator_1_get_Current_m28692_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6405_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8097_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6405_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8097_il2cpp_TypeInfo, 8},
};
extern TypeInfo IEquatable_1_t4020_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6405_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28692_MethodInfo/* Method Usage */,
	&IEquatable_1_t4020_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisIEquatable_1_t4020_m36592_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6405_0_0_0;
extern Il2CppType InternalEnumerator_1_t6405_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6405_GenericClass;
TypeInfo InternalEnumerator_1_t6405_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6405_MethodInfos/* methods */
	, InternalEnumerator_1_t6405_PropertyInfos/* properties */
	, InternalEnumerator_1_t6405_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6405_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6405_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6405_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6405_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6405_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6405_1_0_0/* this_arg */
	, InternalEnumerator_1_t6405_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6405_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6405_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6405)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9778_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>
extern MethodInfo IList_1_get_Item_m46044_MethodInfo;
extern MethodInfo IList_1_set_Item_m46045_MethodInfo;
static PropertyInfo IList_1_t9778____Item_PropertyInfo = 
{
	&IList_1_t9778_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46044_MethodInfo/* get */
	, &IList_1_set_Item_m46045_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9778_PropertyInfos[] =
{
	&IList_1_t9778____Item_PropertyInfo,
	NULL
};
extern Il2CppType IEquatable_1_t4020_0_0_0;
static ParameterInfo IList_1_t9778_IList_1_IndexOf_m46046_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t4020_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46046_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46046_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9778_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9778_IList_1_IndexOf_m46046_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46046_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType IEquatable_1_t4020_0_0_0;
static ParameterInfo IList_1_t9778_IList_1_Insert_m46047_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t4020_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46047_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46047_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9778_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9778_IList_1_Insert_m46047_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46047_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9778_IList_1_RemoveAt_m46048_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46048_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46048_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9778_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9778_IList_1_RemoveAt_m46048_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46048_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9778_IList_1_get_Item_m46044_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType IEquatable_1_t4020_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46044_GenericMethod;
// T System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46044_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9778_il2cpp_TypeInfo/* declaring_type */
	, &IEquatable_1_t4020_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9778_IList_1_get_Item_m46044_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46044_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType IEquatable_1_t4020_0_0_0;
static ParameterInfo IList_1_t9778_IList_1_set_Item_m46045_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IEquatable_1_t4020_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46045_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.IEquatable`1<System.Int16>>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46045_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9778_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9778_IList_1_set_Item_m46045_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46045_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9778_MethodInfos[] =
{
	&IList_1_IndexOf_m46046_MethodInfo,
	&IList_1_Insert_m46047_MethodInfo,
	&IList_1_RemoveAt_m46048_MethodInfo,
	&IList_1_get_Item_m46044_MethodInfo,
	&IList_1_set_Item_m46045_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9778_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9777_il2cpp_TypeInfo,
	&IEnumerable_1_t9779_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9778_0_0_0;
extern Il2CppType IList_1_t9778_1_0_0;
struct IList_1_t9778;
extern Il2CppGenericClass IList_1_t9778_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9778_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9778_MethodInfos/* methods */
	, IList_1_t9778_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9778_il2cpp_TypeInfo/* element_class */
	, IList_1_t9778_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9778_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9778_0_0_0/* byval_arg */
	, &IList_1_t9778_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9778_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparable_1_t4045_il2cpp_TypeInfo;

// System.Decimal
#include "mscorlib_System_Decimal.h"


// System.Int32 System.IComparable`1<System.Decimal>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Decimal>
extern Il2CppType Decimal_t3391_0_0_0;
extern Il2CppType Decimal_t3391_0_0_0;
static ParameterInfo IComparable_1_t4045_IComparable_1_CompareTo_m46049_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t3391_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Decimal_t3391 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IComparable_1_CompareTo_m46049_GenericMethod;
// System.Int32 System.IComparable`1<System.Decimal>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m46049_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t4045_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Decimal_t3391/* invoker_method */
	, IComparable_1_t4045_IComparable_1_CompareTo_m46049_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IComparable_1_CompareTo_m46049_GenericMethod/* genericMethod */

};
static MethodInfo* IComparable_1_t4045_MethodInfos[] =
{
	&IComparable_1_CompareTo_m46049_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t4045_0_0_0;
extern Il2CppType IComparable_1_t4045_1_0_0;
struct IComparable_1_t4045;
extern Il2CppGenericClass IComparable_1_t4045_GenericClass;
TypeInfo IComparable_1_t4045_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t4045_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t4045_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t4045_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t4045_0_0_0/* byval_arg */
	, &IComparable_1_t4045_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t4045_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t4046_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Decimal>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Decimal>
extern Il2CppType Decimal_t3391_0_0_0;
static ParameterInfo IEquatable_1_t4046_IEquatable_1_Equals_m46050_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Decimal_t3391_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Decimal_t3391 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEquatable_1_Equals_m46050_GenericMethod;
// System.Boolean System.IEquatable`1<System.Decimal>::Equals(T)
MethodInfo IEquatable_1_Equals_m46050_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t4046_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Decimal_t3391/* invoker_method */
	, IEquatable_1_t4046_IEquatable_1_Equals_m46050_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEquatable_1_Equals_m46050_GenericMethod/* genericMethod */

};
static MethodInfo* IEquatable_1_t4046_MethodInfos[] =
{
	&IEquatable_1_Equals_m46050_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t4046_0_0_0;
extern Il2CppType IEquatable_1_t4046_1_0_0;
struct IEquatable_1_t4046;
extern Il2CppGenericClass IEquatable_1_t4046_GenericClass;
TypeInfo IEquatable_1_t4046_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t4046_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t4046_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t4046_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t4046_0_0_0/* byval_arg */
	, &IEquatable_1_t4046_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t4046_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8098_il2cpp_TypeInfo;

// System.UIntPtr
#include "mscorlib_System_UIntPtr.h"


// T System.Collections.Generic.IEnumerator`1<System.UIntPtr>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.UIntPtr>
extern MethodInfo IEnumerator_1_get_Current_m46051_MethodInfo;
static PropertyInfo IEnumerator_1_t8098____Current_PropertyInfo = 
{
	&IEnumerator_1_t8098_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46051_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8098_PropertyInfos[] =
{
	&IEnumerator_1_t8098____Current_PropertyInfo,
	NULL
};
extern Il2CppType UIntPtr_t1069_0_0_0;
extern void* RuntimeInvoker_UIntPtr_t1069 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46051_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.UIntPtr>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46051_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8098_il2cpp_TypeInfo/* declaring_type */
	, &UIntPtr_t1069_0_0_0/* return_type */
	, RuntimeInvoker_UIntPtr_t1069/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46051_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8098_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46051_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8098_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8098_0_0_0;
extern Il2CppType IEnumerator_1_t8098_1_0_0;
struct IEnumerator_1_t8098;
extern Il2CppGenericClass IEnumerator_1_t8098_GenericClass;
TypeInfo IEnumerator_1_t8098_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8098_MethodInfos/* methods */
	, IEnumerator_1_t8098_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8098_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8098_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8098_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8098_0_0_0/* byval_arg */
	, &IEnumerator_1_t8098_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8098_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.UIntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_471.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6406_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.UIntPtr>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_471MethodDeclarations.h"

extern TypeInfo UIntPtr_t1069_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28698_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUIntPtr_t1069_m36603_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.UIntPtr>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.UIntPtr>(System.Int32)
 UIntPtr_t1069  Array_InternalArray__get_Item_TisUIntPtr_t1069_m36603 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m28693_MethodInfo;
 void InternalEnumerator_1__ctor_m28693 (InternalEnumerator_1_t6406 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28694_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28694 (InternalEnumerator_1_t6406 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.UIntPtr>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28695_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28695 (InternalEnumerator_1_t6406 * __this, MethodInfo* method){
	{
		UIntPtr_t1069  L_0 = InternalEnumerator_1_get_Current_m28698(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m28698_MethodInfo);
		UIntPtr_t1069  L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UIntPtr_t1069_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m28696_MethodInfo;
 void InternalEnumerator_1_Dispose_m28696 (InternalEnumerator_1_t6406 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.UIntPtr>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m28697_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m28697 (InternalEnumerator_1_t6406 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array_0);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m2933(L_1, /*hidden argument*/&Array_get_Length_m2933_MethodInfo);
		__this->___idx_1 = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx_1);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx_1);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx_1 = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<System.UIntPtr>::get_Current()
 UIntPtr_t1069  InternalEnumerator_1_get_Current_m28698 (InternalEnumerator_1_t6406 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx_1);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t2444 * L_1 = (InvalidOperationException_t2444 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t2444_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5171(L_1, (String_t*) &_stringLiteral1182, /*hidden argument*/&InvalidOperationException__ctor_m5171_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx_1);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t2444 * L_3 = (InvalidOperationException_t2444 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t2444_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m5171(L_3, (String_t*) &_stringLiteral1183, /*hidden argument*/&InvalidOperationException__ctor_m5171_MethodInfo);
		il2cpp_codegen_raise_exception(L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array_0);
		Array_t * L_5 = (__this->___array_0);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m2933(L_5, /*hidden argument*/&Array_get_Length_m2933_MethodInfo);
		int32_t L_7 = (__this->___idx_1);
		NullCheck(L_4);
		UIntPtr_t1069  L_8 = Array_InternalArray__get_Item_TisUIntPtr_t1069_m36603(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUIntPtr_t1069_m36603_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.UIntPtr>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6406____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6406_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6406, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6406____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6406_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6406, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6406_FieldInfos[] =
{
	&InternalEnumerator_1_t6406____array_0_FieldInfo,
	&InternalEnumerator_1_t6406____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t6406____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6406_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28695_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6406____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6406_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28698_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6406_PropertyInfos[] =
{
	&InternalEnumerator_1_t6406____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6406____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6406_InternalEnumerator_1__ctor_m28693_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28693_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28693_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m28693/* method */
	, &InternalEnumerator_1_t6406_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6406_InternalEnumerator_1__ctor_m28693_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28693_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28694_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28694_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28694/* method */
	, &InternalEnumerator_1_t6406_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28694_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28695_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.UIntPtr>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28695_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28695/* method */
	, &InternalEnumerator_1_t6406_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28695_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28696_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.UIntPtr>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28696_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m28696/* method */
	, &InternalEnumerator_1_t6406_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28696_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28697_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.UIntPtr>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28697_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m28697/* method */
	, &InternalEnumerator_1_t6406_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28697_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtr_t1069_0_0_0;
extern void* RuntimeInvoker_UIntPtr_t1069 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28698_GenericMethod;
// T System.Array/InternalEnumerator`1<System.UIntPtr>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28698_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m28698/* method */
	, &InternalEnumerator_1_t6406_il2cpp_TypeInfo/* declaring_type */
	, &UIntPtr_t1069_0_0_0/* return_type */
	, RuntimeInvoker_UIntPtr_t1069/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28698_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6406_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28693_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28694_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28695_MethodInfo,
	&InternalEnumerator_1_Dispose_m28696_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28697_MethodInfo,
	&InternalEnumerator_1_get_Current_m28698_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t6406_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28695_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28697_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28694_MethodInfo,
	&InternalEnumerator_1_Dispose_m28696_MethodInfo,
	&InternalEnumerator_1_get_Current_m28698_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6406_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8098_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6406_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8098_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6406_0_0_0;
extern Il2CppType InternalEnumerator_1_t6406_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6406_GenericClass;
TypeInfo InternalEnumerator_1_t6406_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6406_MethodInfos/* methods */
	, InternalEnumerator_1_t6406_PropertyInfos/* properties */
	, InternalEnumerator_1_t6406_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6406_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6406_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6406_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6406_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6406_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6406_1_0_0/* this_arg */
	, InternalEnumerator_1_t6406_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6406_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6406)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9780_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.UIntPtr>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.UIntPtr>
extern MethodInfo ICollection_1_get_Count_m46052_MethodInfo;
static PropertyInfo ICollection_1_t9780____Count_PropertyInfo = 
{
	&ICollection_1_t9780_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46052_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46053_MethodInfo;
static PropertyInfo ICollection_1_t9780____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9780_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46053_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9780_PropertyInfos[] =
{
	&ICollection_1_t9780____Count_PropertyInfo,
	&ICollection_1_t9780____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46052_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.UIntPtr>::get_Count()
MethodInfo ICollection_1_get_Count_m46052_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9780_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46052_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46053_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46053_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9780_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46053_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtr_t1069_0_0_0;
extern Il2CppType UIntPtr_t1069_0_0_0;
static ParameterInfo ICollection_1_t9780_ICollection_1_Add_m46054_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t1069_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46054_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::Add(T)
MethodInfo ICollection_1_Add_m46054_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9780_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_IntPtr_t31/* invoker_method */
	, ICollection_1_t9780_ICollection_1_Add_m46054_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46054_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46055_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::Clear()
MethodInfo ICollection_1_Clear_m46055_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9780_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46055_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtr_t1069_0_0_0;
static ParameterInfo ICollection_1_t9780_ICollection_1_Contains_m46056_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t1069_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46056_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::Contains(T)
MethodInfo ICollection_1_Contains_m46056_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9780_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_IntPtr_t31/* invoker_method */
	, ICollection_1_t9780_ICollection_1_Contains_m46056_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46056_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtrU5BU5D_t6724_0_0_0;
extern Il2CppType UIntPtrU5BU5D_t6724_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9780_ICollection_1_CopyTo_m46057_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtrU5BU5D_t6724_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46057_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.UIntPtr>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46057_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9780_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9780_ICollection_1_CopyTo_m46057_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46057_GenericMethod/* genericMethod */

};
extern Il2CppType UIntPtr_t1069_0_0_0;
static ParameterInfo ICollection_1_t9780_ICollection_1_Remove_m46058_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t1069_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46058_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.UIntPtr>::Remove(T)
MethodInfo ICollection_1_Remove_m46058_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9780_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_IntPtr_t31/* invoker_method */
	, ICollection_1_t9780_ICollection_1_Remove_m46058_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46058_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9780_MethodInfos[] =
{
	&ICollection_1_get_Count_m46052_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46053_MethodInfo,
	&ICollection_1_Add_m46054_MethodInfo,
	&ICollection_1_Clear_m46055_MethodInfo,
	&ICollection_1_Contains_m46056_MethodInfo,
	&ICollection_1_CopyTo_m46057_MethodInfo,
	&ICollection_1_Remove_m46058_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9782_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9780_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9782_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9780_0_0_0;
extern Il2CppType ICollection_1_t9780_1_0_0;
struct ICollection_1_t9780;
extern Il2CppGenericClass ICollection_1_t9780_GenericClass;
TypeInfo ICollection_1_t9780_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9780_MethodInfos/* methods */
	, ICollection_1_t9780_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9780_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9780_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9780_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9780_0_0_0/* byval_arg */
	, &ICollection_1_t9780_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9780_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UIntPtr>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.UIntPtr>
extern Il2CppType IEnumerator_1_t8098_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46059_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.UIntPtr>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46059_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9782_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8098_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46059_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9782_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46059_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9782_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9782_0_0_0;
extern Il2CppType IEnumerable_1_t9782_1_0_0;
struct IEnumerable_1_t9782;
extern Il2CppGenericClass IEnumerable_1_t9782_GenericClass;
TypeInfo IEnumerable_1_t9782_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9782_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9782_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9782_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9782_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9782_0_0_0/* byval_arg */
	, &IEnumerable_1_t9782_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9782_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9781_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.UIntPtr>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.UIntPtr>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.UIntPtr>
extern MethodInfo IList_1_get_Item_m46060_MethodInfo;
extern MethodInfo IList_1_set_Item_m46061_MethodInfo;
static PropertyInfo IList_1_t9781____Item_PropertyInfo = 
{
	&IList_1_t9781_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46060_MethodInfo/* get */
	, &IList_1_set_Item_m46061_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9781_PropertyInfos[] =
{
	&IList_1_t9781____Item_PropertyInfo,
	NULL
};
extern Il2CppType UIntPtr_t1069_0_0_0;
static ParameterInfo IList_1_t9781_IList_1_IndexOf_m46062_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t1069_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46062_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.UIntPtr>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46062_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9781_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_IntPtr_t31/* invoker_method */
	, IList_1_t9781_IList_1_IndexOf_m46062_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46062_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType UIntPtr_t1069_0_0_0;
static ParameterInfo IList_1_t9781_IList_1_Insert_m46063_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t1069_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46063_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46063_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_IntPtr_t31/* invoker_method */
	, IList_1_t9781_IList_1_Insert_m46063_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46063_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9781_IList_1_RemoveAt_m46064_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46064_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46064_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9781_IList_1_RemoveAt_m46064_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46064_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9781_IList_1_get_Item_m46060_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType UIntPtr_t1069_0_0_0;
extern void* RuntimeInvoker_UIntPtr_t1069_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46060_GenericMethod;
// T System.Collections.Generic.IList`1<System.UIntPtr>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46060_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9781_il2cpp_TypeInfo/* declaring_type */
	, &UIntPtr_t1069_0_0_0/* return_type */
	, RuntimeInvoker_UIntPtr_t1069_Int32_t104/* invoker_method */
	, IList_1_t9781_IList_1_get_Item_m46060_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46060_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType UIntPtr_t1069_0_0_0;
static ParameterInfo IList_1_t9781_IList_1_set_Item_m46061_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UIntPtr_t1069_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46061_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.UIntPtr>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46061_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_IntPtr_t31/* invoker_method */
	, IList_1_t9781_IList_1_set_Item_m46061_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46061_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9781_MethodInfos[] =
{
	&IList_1_IndexOf_m46062_MethodInfo,
	&IList_1_Insert_m46063_MethodInfo,
	&IList_1_RemoveAt_m46064_MethodInfo,
	&IList_1_get_Item_m46060_MethodInfo,
	&IList_1_set_Item_m46061_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9781_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9780_il2cpp_TypeInfo,
	&IEnumerable_1_t9782_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9781_0_0_0;
extern Il2CppType IList_1_t9781_1_0_0;
struct IList_1_t9781;
extern Il2CppGenericClass IList_1_t9781_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9781_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9781_MethodInfos/* methods */
	, IList_1_t9781_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9781_il2cpp_TypeInfo/* element_class */
	, IList_1_t9781_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9781_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9781_0_0_0/* byval_arg */
	, &IList_1_t9781_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9781_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8100_il2cpp_TypeInfo;

// System.FlagsAttribute
#include "mscorlib_System_FlagsAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46065_MethodInfo;
static PropertyInfo IEnumerator_1_t8100____Current_PropertyInfo = 
{
	&IEnumerator_1_t8100_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46065_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8100_PropertyInfos[] =
{
	&IEnumerator_1_t8100____Current_PropertyInfo,
	NULL
};
extern Il2CppType FlagsAttribute_t398_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46065_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.FlagsAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46065_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8100_il2cpp_TypeInfo/* declaring_type */
	, &FlagsAttribute_t398_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46065_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8100_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46065_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8100_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8100_0_0_0;
extern Il2CppType IEnumerator_1_t8100_1_0_0;
struct IEnumerator_1_t8100;
extern Il2CppGenericClass IEnumerator_1_t8100_GenericClass;
TypeInfo IEnumerator_1_t8100_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8100_MethodInfos/* methods */
	, IEnumerator_1_t8100_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8100_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8100_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8100_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8100_0_0_0/* byval_arg */
	, &IEnumerator_1_t8100_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8100_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.FlagsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_472.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6407_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.FlagsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_472MethodDeclarations.h"

extern TypeInfo FlagsAttribute_t398_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28704_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFlagsAttribute_t398_m36614_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.FlagsAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.FlagsAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisFlagsAttribute_t398_m36614(__this, p0, method) (FlagsAttribute_t398 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.FlagsAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.FlagsAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.FlagsAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.FlagsAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6407____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6407_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6407, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6407____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6407_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6407, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6407_FieldInfos[] =
{
	&InternalEnumerator_1_t6407____array_0_FieldInfo,
	&InternalEnumerator_1_t6407____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28701_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6407____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6407_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28701_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6407____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6407_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28704_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6407_PropertyInfos[] =
{
	&InternalEnumerator_1_t6407____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6407____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6407_InternalEnumerator_1__ctor_m28699_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28699_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28699_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6407_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6407_InternalEnumerator_1__ctor_m28699_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28699_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28700_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28700_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6407_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28700_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28701_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.FlagsAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28701_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6407_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28701_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28702_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.FlagsAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28702_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6407_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28702_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28703_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.FlagsAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28703_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6407_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28703_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t398_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28704_GenericMethod;
// T System.Array/InternalEnumerator`1<System.FlagsAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28704_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6407_il2cpp_TypeInfo/* declaring_type */
	, &FlagsAttribute_t398_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28704_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6407_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28699_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28700_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28701_MethodInfo,
	&InternalEnumerator_1_Dispose_m28702_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28703_MethodInfo,
	&InternalEnumerator_1_get_Current_m28704_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28703_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28700_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28702_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6407_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28701_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28703_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28700_MethodInfo,
	&InternalEnumerator_1_Dispose_m28702_MethodInfo,
	&InternalEnumerator_1_get_Current_m28704_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6407_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8100_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6407_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8100_il2cpp_TypeInfo, 8},
};
extern TypeInfo FlagsAttribute_t398_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6407_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28704_MethodInfo/* Method Usage */,
	&FlagsAttribute_t398_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisFlagsAttribute_t398_m36614_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6407_0_0_0;
extern Il2CppType InternalEnumerator_1_t6407_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6407_GenericClass;
TypeInfo InternalEnumerator_1_t6407_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6407_MethodInfos/* methods */
	, InternalEnumerator_1_t6407_PropertyInfos/* properties */
	, InternalEnumerator_1_t6407_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6407_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6407_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6407_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6407_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6407_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6407_1_0_0/* this_arg */
	, InternalEnumerator_1_t6407_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6407_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6407_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6407)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9783_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.FlagsAttribute>
extern MethodInfo ICollection_1_get_Count_m46066_MethodInfo;
static PropertyInfo ICollection_1_t9783____Count_PropertyInfo = 
{
	&ICollection_1_t9783_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46066_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46067_MethodInfo;
static PropertyInfo ICollection_1_t9783____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9783_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46067_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9783_PropertyInfos[] =
{
	&ICollection_1_t9783____Count_PropertyInfo,
	&ICollection_1_t9783____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46066_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46066_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9783_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46066_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46067_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46067_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9783_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46067_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t398_0_0_0;
extern Il2CppType FlagsAttribute_t398_0_0_0;
static ParameterInfo ICollection_1_t9783_ICollection_1_Add_m46068_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t398_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46068_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46068_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9783_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9783_ICollection_1_Add_m46068_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46068_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46069_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46069_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9783_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46069_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t398_0_0_0;
static ParameterInfo ICollection_1_t9783_ICollection_1_Contains_m46070_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t398_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46070_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46070_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9783_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9783_ICollection_1_Contains_m46070_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46070_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttributeU5BU5D_t6725_0_0_0;
extern Il2CppType FlagsAttributeU5BU5D_t6725_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9783_ICollection_1_CopyTo_m46071_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttributeU5BU5D_t6725_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46071_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.FlagsAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46071_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9783_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9783_ICollection_1_CopyTo_m46071_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46071_GenericMethod/* genericMethod */

};
extern Il2CppType FlagsAttribute_t398_0_0_0;
static ParameterInfo ICollection_1_t9783_ICollection_1_Remove_m46072_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t398_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46072_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.FlagsAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46072_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9783_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9783_ICollection_1_Remove_m46072_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46072_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9783_MethodInfos[] =
{
	&ICollection_1_get_Count_m46066_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46067_MethodInfo,
	&ICollection_1_Add_m46068_MethodInfo,
	&ICollection_1_Clear_m46069_MethodInfo,
	&ICollection_1_Contains_m46070_MethodInfo,
	&ICollection_1_CopyTo_m46071_MethodInfo,
	&ICollection_1_Remove_m46072_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9785_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9783_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9785_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9783_0_0_0;
extern Il2CppType ICollection_1_t9783_1_0_0;
struct ICollection_1_t9783;
extern Il2CppGenericClass ICollection_1_t9783_GenericClass;
TypeInfo ICollection_1_t9783_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9783_MethodInfos/* methods */
	, ICollection_1_t9783_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9783_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9783_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9783_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9783_0_0_0/* byval_arg */
	, &ICollection_1_t9783_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9783_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>
extern Il2CppType IEnumerator_1_t8100_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46073_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.FlagsAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46073_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9785_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8100_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46073_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9785_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46073_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9785_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9785_0_0_0;
extern Il2CppType IEnumerable_1_t9785_1_0_0;
struct IEnumerable_1_t9785;
extern Il2CppGenericClass IEnumerable_1_t9785_GenericClass;
TypeInfo IEnumerable_1_t9785_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9785_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9785_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9785_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9785_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9785_0_0_0/* byval_arg */
	, &IEnumerable_1_t9785_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9785_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9784_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.FlagsAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.FlagsAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.FlagsAttribute>
extern MethodInfo IList_1_get_Item_m46074_MethodInfo;
extern MethodInfo IList_1_set_Item_m46075_MethodInfo;
static PropertyInfo IList_1_t9784____Item_PropertyInfo = 
{
	&IList_1_t9784_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46074_MethodInfo/* get */
	, &IList_1_set_Item_m46075_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9784_PropertyInfos[] =
{
	&IList_1_t9784____Item_PropertyInfo,
	NULL
};
extern Il2CppType FlagsAttribute_t398_0_0_0;
static ParameterInfo IList_1_t9784_IList_1_IndexOf_m46076_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t398_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46076_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.FlagsAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46076_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9784_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9784_IList_1_IndexOf_m46076_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46076_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType FlagsAttribute_t398_0_0_0;
static ParameterInfo IList_1_t9784_IList_1_Insert_m46077_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t398_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46077_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46077_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9784_IList_1_Insert_m46077_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46077_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9784_IList_1_RemoveAt_m46078_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46078_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46078_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9784_IList_1_RemoveAt_m46078_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46078_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9784_IList_1_get_Item_m46074_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType FlagsAttribute_t398_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46074_GenericMethod;
// T System.Collections.Generic.IList`1<System.FlagsAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46074_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9784_il2cpp_TypeInfo/* declaring_type */
	, &FlagsAttribute_t398_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9784_IList_1_get_Item_m46074_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46074_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType FlagsAttribute_t398_0_0_0;
static ParameterInfo IList_1_t9784_IList_1_set_Item_m46075_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FlagsAttribute_t398_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46075_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.FlagsAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46075_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9784_IList_1_set_Item_m46075_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46075_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9784_MethodInfos[] =
{
	&IList_1_IndexOf_m46076_MethodInfo,
	&IList_1_Insert_m46077_MethodInfo,
	&IList_1_RemoveAt_m46078_MethodInfo,
	&IList_1_get_Item_m46074_MethodInfo,
	&IList_1_set_Item_m46075_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9784_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9783_il2cpp_TypeInfo,
	&IEnumerable_1_t9785_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9784_0_0_0;
extern Il2CppType IList_1_t9784_1_0_0;
struct IList_1_t9784;
extern Il2CppGenericClass IList_1_t9784_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9784_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9784_MethodInfos/* methods */
	, IList_1_t9784_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9784_il2cpp_TypeInfo/* element_class */
	, IList_1_t9784_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9784_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9784_0_0_0/* byval_arg */
	, &IList_1_t9784_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9784_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Converter_2_t6408_il2cpp_TypeInfo;
// System.Converter`2<System.Object,System.Object>
#include "mscorlib_System_Converter_2_genMethodDeclarations.h"

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Converter_2__ctor_m28705_MethodInfo;
 void Converter_2__ctor_m28705_gshared (Converter_2_t6408 * __this, Object_t * ___object, IntPtr_t31 ___method, MethodInfo* method)
{
	__this->___method_ptr_0 = (methodPointerType)((MethodInfo*)___method.___m_value_0)->method;
	__this->___method_3 = ___method;
	__this->___m_target_2 = ___object;
}
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
extern MethodInfo Converter_2_Invoke_m28706_MethodInfo;
 Object_t * Converter_2_Invoke_m28706_gshared (Converter_2_t6408 * __this, Object_t * ___input, MethodInfo* method)
{
	if(__this->___prev_9 != NULL)
	{
		Converter_2_Invoke_m28706((Converter_2_t6408 *)__this->___prev_9,___input, method);
	}
	bool ___methodIsStatic = MethodIsStatic((MethodInfo*)(__this->___method_3.___m_value_0));
	if (__this->___m_target_2 != NULL && ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t *, Object_t * __this, Object_t * ___input, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(NULL,__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	if (__this->___m_target_2 != NULL || ___methodIsStatic)
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, Object_t * ___input, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2,___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
	else
	{
		typedef Object_t * (*FunctionPointerType) (Object_t * __this, MethodInfo* method);
		return ((FunctionPointerType)__this->___method_ptr_0)(___input,(MethodInfo*)(__this->___method_3.___m_value_0));
	}
}
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
extern MethodInfo Converter_2_BeginInvoke_m28707_MethodInfo;
 Object_t * Converter_2_BeginInvoke_m28707_gshared (Converter_2_t6408 * __this, Object_t * ___input, AsyncCallback_t184 * ___callback, Object_t * ___object, MethodInfo* method)
{
	void *__d_args[2] = {0};
	__d_args[0] = ___input;
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
extern MethodInfo Converter_2_EndInvoke_m28708_MethodInfo;
 Object_t * Converter_2_EndInvoke_m28708_gshared (Converter_2_t6408 * __this, Object_t * ___result, MethodInfo* method)
{
	Il2CppObject *__result = il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
	return (Object_t *)__result;
}
// Metadata Definition System.Converter`2<System.Object,System.Object>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t31_0_0_0;
extern Il2CppType IntPtr_t31_0_0_0;
static ParameterInfo Converter_2_t6408_Converter_2__ctor_m28705_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t31_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2__ctor_m28705_GenericMethod;
// System.Void System.Converter`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
MethodInfo Converter_2__ctor_m28705_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Converter_2__ctor_m28705_gshared/* method */
	, &Converter_2_t6408_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_IntPtr_t31/* invoker_method */
	, Converter_2_t6408_Converter_2__ctor_m28705_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Converter_2__ctor_m28705_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Converter_2_t6408_Converter_2_Invoke_m28706_ParameterInfos[] = 
{
	{"input", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2_Invoke_m28706_GenericMethod;
// TOutput System.Converter`2<System.Object,System.Object>::Invoke(TInput)
MethodInfo Converter_2_Invoke_m28706_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Converter_2_Invoke_m28706_gshared/* method */
	, &Converter_2_t6408_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Converter_2_t6408_Converter_2_Invoke_m28706_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Converter_2_Invoke_m28706_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType AsyncCallback_t184_0_0_0;
extern Il2CppType AsyncCallback_t184_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Converter_2_t6408_Converter_2_BeginInvoke_m28707_ParameterInfos[] = 
{
	{"input", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t184_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t183_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2_BeginInvoke_m28707_GenericMethod;
// System.IAsyncResult System.Converter`2<System.Object,System.Object>::BeginInvoke(TInput,System.AsyncCallback,System.Object)
MethodInfo Converter_2_BeginInvoke_m28707_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Converter_2_BeginInvoke_m28707_gshared/* method */
	, &Converter_2_t6408_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t183_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, Converter_2_t6408_Converter_2_BeginInvoke_m28707_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Converter_2_BeginInvoke_m28707_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t183_0_0_0;
extern Il2CppType IAsyncResult_t183_0_0_0;
static ParameterInfo Converter_2_t6408_Converter_2_EndInvoke_m28708_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t183_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Converter_2_EndInvoke_m28708_GenericMethod;
// TOutput System.Converter`2<System.Object,System.Object>::EndInvoke(System.IAsyncResult)
MethodInfo Converter_2_EndInvoke_m28708_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Converter_2_EndInvoke_m28708_gshared/* method */
	, &Converter_2_t6408_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Converter_2_t6408_Converter_2_EndInvoke_m28708_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 13/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &Converter_2_EndInvoke_m28708_GenericMethod/* genericMethod */

};
static MethodInfo* Converter_2_t6408_MethodInfos[] =
{
	&Converter_2__ctor_m28705_MethodInfo,
	&Converter_2_Invoke_m28706_MethodInfo,
	&Converter_2_BeginInvoke_m28707_MethodInfo,
	&Converter_2_EndInvoke_m28708_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m2112_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m2113_MethodInfo;
extern MethodInfo Object_ToString_m316_MethodInfo;
extern MethodInfo Delegate_Clone_m2114_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m2115_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m2116_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m2117_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m2118_MethodInfo;
static MethodInfo* Converter_2_t6408_VTable[] =
{
	&MulticastDelegate_Equals_m2112_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&MulticastDelegate_GetHashCode_m2113_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&Delegate_Clone_m2114_MethodInfo,
	&MulticastDelegate_GetObjectData_m2115_MethodInfo,
	&Delegate_Clone_m2114_MethodInfo,
	&MulticastDelegate_GetObjectData_m2115_MethodInfo,
	&MulticastDelegate_GetInvocationList_m2116_MethodInfo,
	&MulticastDelegate_CombineImpl_m2117_MethodInfo,
	&MulticastDelegate_RemoveImpl_m2118_MethodInfo,
	&Converter_2_Invoke_m28706_MethodInfo,
	&Converter_2_BeginInvoke_m28707_MethodInfo,
	&Converter_2_EndInvoke_m28708_MethodInfo,
};
extern TypeInfo ICloneable_t458_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t459_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Converter_2_t6408_InterfacesOffsets[] = 
{
	{ &ICloneable_t458_il2cpp_TypeInfo, 4},
	{ &ISerializable_t459_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Converter_2_t6408_0_0_0;
extern Il2CppType Converter_2_t6408_1_0_0;
extern TypeInfo MulticastDelegate_t306_il2cpp_TypeInfo;
struct Converter_2_t6408;
extern Il2CppGenericClass Converter_2_t6408_GenericClass;
TypeInfo Converter_2_t6408_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Converter`2"/* name */
	, "System"/* namespaze */
	, Converter_2_t6408_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t306_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Converter_2_t6408_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Converter_2_t6408_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Converter_2_t6408_il2cpp_TypeInfo/* cast_class */
	, &Converter_2_t6408_0_0_0/* byval_arg */
	, &Converter_2_t6408_1_0_0/* this_arg */
	, Converter_2_t6408_InterfacesOffsets/* interface_offsets */
	, &Converter_2_t6408_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Converter_2_t6408)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 14/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo;
// System.Array/ArrayReadOnlyList`1<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_genMethodDeclarations.h"

// System.Exception
#include "mscorlib_System_Exception.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3_0.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo ArgumentOutOfRangeException_t2443_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t137_il2cpp_TypeInfo;
extern TypeInfo Void_t100_il2cpp_TypeInfo;
extern TypeInfo Int32_t104_il2cpp_TypeInfo;
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t136_il2cpp_TypeInfo;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
#include "mscorlib_System_Array_ArrayReadOnlyList_1_U3CGetEnumeratorU3_0MethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
extern MethodInfo ArgumentOutOfRangeException__ctor_m5169_MethodInfo;
extern MethodInfo ArrayReadOnlyList_1_ReadOnlyError_m28724_MethodInfo;
extern MethodInfo Object__ctor_m313_MethodInfo;
extern MethodInfo ArrayReadOnlyList_1_GetEnumerator_m28719_MethodInfo;
extern MethodInfo Array_IndexOf_TisObject_t_m14110_MethodInfo;
extern MethodInfo Array_CopyTo_m7882_MethodInfo;
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0__ctor_m28725_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m5174_MethodInfo;
struct Array_t;
// System.ArgumentNullException
#include "mscorlib_System_ArgumentNullException.h"
// Declaration System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
// System.Int32 System.Array::IndexOf<System.Object>(!!0[],!!0)
 int32_t Array_IndexOf_TisObject_t_m14110_gshared (Object_t * __this/* static, unused */, ObjectU5BU5D_t126* p0, Object_t * p1, MethodInfo* method);
#define Array_IndexOf_TisObject_t_m14110(__this/* static, unused */, p0, p1, method) (int32_t)Array_IndexOf_TisObject_t_m14110_gshared((Object_t *)__this/* static, unused */, (ObjectU5BU5D_t126*)p0, (Object_t *)p1, method)


// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
extern MethodInfo ArrayReadOnlyList_1__ctor_m28709_MethodInfo;
 void ArrayReadOnlyList_1__ctor_m28709_gshared (ArrayReadOnlyList_1_t6409 * __this, ObjectU5BU5D_t126* ___array, MethodInfo* method)
{
	{
		Object__ctor_m313(__this, /*hidden argument*/&Object__ctor_m313_MethodInfo);
		__this->___array_0 = ___array;
		return;
	}
}
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m28710_MethodInfo;
 Object_t * ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m28710_gshared (ArrayReadOnlyList_1_t6409 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (Object_t*)VirtFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0), __this);
		return L_0;
	}
}
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
extern MethodInfo ArrayReadOnlyList_1_get_Item_m28711_MethodInfo;
 Object_t * ArrayReadOnlyList_1_get_Item_m28711_gshared (ArrayReadOnlyList_1_t6409 * __this, int32_t ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t126* L_0 = (__this->___array_0);
		NullCheck(L_0);
		if ((((uint32_t)___index) < ((uint32_t)(((int32_t)(((Array_t *)L_0)->max_length))))))
		{
			goto IL_0016;
		}
	}
	{
		ArgumentOutOfRangeException_t2443 * L_1 = (ArgumentOutOfRangeException_t2443 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentOutOfRangeException_t2443_il2cpp_TypeInfo));
		ArgumentOutOfRangeException__ctor_m5169(L_1, (String_t*) &_stringLiteral132, /*hidden argument*/&ArgumentOutOfRangeException__ctor_m5169_MethodInfo);
		il2cpp_codegen_raise_exception(L_1);
	}

IL_0016:
	{
		ObjectU5BU5D_t126* L_2 = (__this->___array_0);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, ___index);
		int32_t L_3 = ___index;
		return (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_3));
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
extern MethodInfo ArrayReadOnlyList_1_set_Item_m28712_MethodInfo;
 void ArrayReadOnlyList_1_set_Item_m28712_gshared (ArrayReadOnlyList_1_t6409 * __this, int32_t ___index, Object_t * ___value, MethodInfo* method)
{
	{
		Exception_t115 * L_0 = (( Exception_t115 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
extern MethodInfo ArrayReadOnlyList_1_get_Count_m28713_MethodInfo;
 int32_t ArrayReadOnlyList_1_get_Count_m28713_gshared (ArrayReadOnlyList_1_t6409 * __this, MethodInfo* method)
{
	{
		ObjectU5BU5D_t126* L_0 = (__this->___array_0);
		NullCheck(L_0);
		return (((int32_t)(((Array_t *)L_0)->max_length)));
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
extern MethodInfo ArrayReadOnlyList_1_get_IsReadOnly_m28714_MethodInfo;
 bool ArrayReadOnlyList_1_get_IsReadOnly_m28714_gshared (ArrayReadOnlyList_1_t6409 * __this, MethodInfo* method)
{
	{
		return 1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
extern MethodInfo ArrayReadOnlyList_1_Add_m28715_MethodInfo;
 void ArrayReadOnlyList_1_Add_m28715_gshared (ArrayReadOnlyList_1_t6409 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t115 * L_0 = (( Exception_t115 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
extern MethodInfo ArrayReadOnlyList_1_Clear_m28716_MethodInfo;
 void ArrayReadOnlyList_1_Clear_m28716_gshared (ArrayReadOnlyList_1_t6409 * __this, MethodInfo* method)
{
	{
		Exception_t115 * L_0 = (( Exception_t115 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
extern MethodInfo ArrayReadOnlyList_1_Contains_m28717_MethodInfo;
 bool ArrayReadOnlyList_1_Contains_m28717_gshared (ArrayReadOnlyList_1_t6409 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t126* L_0 = (__this->___array_0);
		int32_t L_1 = (( int32_t (*) (Object_t * __this/* static, unused */, ObjectU5BU5D_t126* p0, Object_t * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, L_0, ___item, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return ((((int32_t)((((int32_t)L_1) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
extern MethodInfo ArrayReadOnlyList_1_CopyTo_m28718_MethodInfo;
 void ArrayReadOnlyList_1_CopyTo_m28718_gshared (ArrayReadOnlyList_1_t6409 * __this, ObjectU5BU5D_t126* ___array, int32_t ___index, MethodInfo* method)
{
	{
		ObjectU5BU5D_t126* L_0 = (__this->___array_0);
		NullCheck(L_0);
		VirtActionInvoker2< Array_t *, int32_t >::Invoke(&Array_CopyTo_m7882_MethodInfo, L_0, (Array_t *)(Array_t *)___array, ___index);
		return;
	}
}
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
 Object_t* ArrayReadOnlyList_1_GetEnumerator_m28719_gshared (ArrayReadOnlyList_1_t6409 * __this, MethodInfo* method)
{
	U3CGetEnumeratorU3Ec__Iterator0_t6410 * V_0 = {0};
	{
		U3CGetEnumeratorU3Ec__Iterator0_t6410 * L_0 = (U3CGetEnumeratorU3Ec__Iterator0_t6410 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3));
		(( void (*) (U3CGetEnumeratorU3Ec__Iterator0_t6410 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4)->method)(L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4));
		V_0 = L_0;
		NullCheck(V_0);
		V_0->___U3CU3Ef__this_3 = __this;
		return V_0;
	}
}
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
extern MethodInfo ArrayReadOnlyList_1_IndexOf_m28720_MethodInfo;
 int32_t ArrayReadOnlyList_1_IndexOf_m28720_gshared (ArrayReadOnlyList_1_t6409 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		ObjectU5BU5D_t126* L_0 = (__this->___array_0);
		int32_t L_1 = (( int32_t (*) (Object_t * __this/* static, unused */, ObjectU5BU5D_t126* p0, Object_t * p1, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(NULL /*static, unused*/, L_0, ___item, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_1;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
extern MethodInfo ArrayReadOnlyList_1_Insert_m28721_MethodInfo;
 void ArrayReadOnlyList_1_Insert_m28721_gshared (ArrayReadOnlyList_1_t6409 * __this, int32_t ___index, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t115 * L_0 = (( Exception_t115 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
extern MethodInfo ArrayReadOnlyList_1_Remove_m28722_MethodInfo;
 bool ArrayReadOnlyList_1_Remove_m28722_gshared (ArrayReadOnlyList_1_t6409 * __this, Object_t * ___item, MethodInfo* method)
{
	{
		Exception_t115 * L_0 = (( Exception_t115 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
extern MethodInfo ArrayReadOnlyList_1_RemoveAt_m28723_MethodInfo;
 void ArrayReadOnlyList_1_RemoveAt_m28723_gshared (ArrayReadOnlyList_1_t6409 * __this, int32_t ___index, MethodInfo* method)
{
	{
		Exception_t115 * L_0 = (( Exception_t115 * (*) (Object_t * __this/* static, unused */, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(NULL /*static, unused*/, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
 Exception_t115 * ArrayReadOnlyList_1_ReadOnlyError_m28724_gshared (Object_t * __this/* static, unused */, MethodInfo* method)
{
	{
		NotSupportedException_t136 * L_0 = (NotSupportedException_t136 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t136_il2cpp_TypeInfo));
		NotSupportedException__ctor_m5174(L_0, (String_t*) &_stringLiteral1186, /*hidden argument*/&NotSupportedException__ctor_m5174_MethodInfo);
		return L_0;
	}
}
// Metadata Definition System.Array/ArrayReadOnlyList`1<System.Object>
extern Il2CppType ObjectU5BU5D_t126_0_0_1;
FieldInfo ArrayReadOnlyList_1_t6409____array_0_FieldInfo = 
{
	"array"/* name */
	, &ObjectU5BU5D_t126_0_0_1/* type */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* parent */
	, offsetof(ArrayReadOnlyList_1_t6409, ___array_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* ArrayReadOnlyList_1_t6409_FieldInfos[] =
{
	&ArrayReadOnlyList_1_t6409____array_0_FieldInfo,
	NULL
};
static PropertyInfo ArrayReadOnlyList_1_t6409____Item_PropertyInfo = 
{
	&ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &ArrayReadOnlyList_1_get_Item_m28711_MethodInfo/* get */
	, &ArrayReadOnlyList_1_set_Item_m28712_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArrayReadOnlyList_1_t6409____Count_PropertyInfo = 
{
	&ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ArrayReadOnlyList_1_get_Count_m28713_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo ArrayReadOnlyList_1_t6409____IsReadOnly_PropertyInfo = 
{
	&ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ArrayReadOnlyList_1_get_IsReadOnly_m28714_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ArrayReadOnlyList_1_t6409_PropertyInfos[] =
{
	&ArrayReadOnlyList_1_t6409____Item_PropertyInfo,
	&ArrayReadOnlyList_1_t6409____Count_PropertyInfo,
	&ArrayReadOnlyList_1_t6409____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType ObjectU5BU5D_t126_0_0_0;
extern Il2CppType ObjectU5BU5D_t126_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1__ctor_m28709_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t126_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1__ctor_m28709_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::.ctor(T[])
MethodInfo ArrayReadOnlyList_1__ctor_m28709_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1__ctor_m28709_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1__ctor_m28709_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1__ctor_m28709_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_t51_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m28710_GenericMethod;
// System.Collections.IEnumerator System.Array/ArrayReadOnlyList`1<System.Object>::System.Collections.IEnumerable.GetEnumerator()
MethodInfo ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m28710_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m28710_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t51_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m28710_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_get_Item_m28711_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_Item_m28711_GenericMethod;
// T System.Array/ArrayReadOnlyList`1<System.Object>::get_Item(System.Int32)
MethodInfo ArrayReadOnlyList_1_get_Item_m28711_MethodInfo = 
{
	"get_Item"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_get_Item_m28711_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_get_Item_m28711_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_get_Item_m28711_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_set_Item_m28712_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_set_Item_m28712_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::set_Item(System.Int32,T)
MethodInfo ArrayReadOnlyList_1_set_Item_m28712_MethodInfo = 
{
	"set_Item"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_set_Item_m28712_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_set_Item_m28712_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_set_Item_m28712_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_Count_m28713_GenericMethod;
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::get_Count()
MethodInfo ArrayReadOnlyList_1_get_Count_m28713_MethodInfo = 
{
	"get_Count"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_get_Count_m28713_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_get_Count_m28713_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_get_IsReadOnly_m28714_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::get_IsReadOnly()
MethodInfo ArrayReadOnlyList_1_get_IsReadOnly_m28714_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_get_IsReadOnly_m28714_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 11/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_get_IsReadOnly_m28714_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_Add_m28715_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Add_m28715_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Add(T)
MethodInfo ArrayReadOnlyList_1_Add_m28715_MethodInfo = 
{
	"Add"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Add_m28715_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_Add_m28715_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Add_m28715_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Clear_m28716_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Clear()
MethodInfo ArrayReadOnlyList_1_Clear_m28716_MethodInfo = 
{
	"Clear"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Clear_m28716_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 13/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Clear_m28716_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_Contains_m28717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Contains_m28717_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Contains(T)
MethodInfo ArrayReadOnlyList_1_Contains_m28717_MethodInfo = 
{
	"Contains"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Contains_m28717_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_Contains_m28717_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 14/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Contains_m28717_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t126_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_CopyTo_m28718_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t126_0_0_0},
	{"index", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_CopyTo_m28718_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::CopyTo(T[],System.Int32)
MethodInfo ArrayReadOnlyList_1_CopyTo_m28718_MethodInfo = 
{
	"CopyTo"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_CopyTo_m28718_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_CopyTo_m28718_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 15/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_CopyTo_m28718_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_1_t137_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache ArrayReadOnlyList_1_t3399__CustomAttributeCache_ArrayReadOnlyList_1_GetEnumerator_m13626;
extern Il2CppGenericMethod ArrayReadOnlyList_1_GetEnumerator_m28719_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Array/ArrayReadOnlyList`1<System.Object>::GetEnumerator()
MethodInfo ArrayReadOnlyList_1_GetEnumerator_m28719_MethodInfo = 
{
	"GetEnumerator"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_GetEnumerator_m28719_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t137_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &ArrayReadOnlyList_1_t3399__CustomAttributeCache_ArrayReadOnlyList_1_GetEnumerator_m13626/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 17/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_GetEnumerator_m28719_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_IndexOf_m28720_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_IndexOf_m28720_GenericMethod;
// System.Int32 System.Array/ArrayReadOnlyList`1<System.Object>::IndexOf(T)
MethodInfo ArrayReadOnlyList_1_IndexOf_m28720_MethodInfo = 
{
	"IndexOf"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_IndexOf_m28720_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_IndexOf_m28720_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_IndexOf_m28720_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_Insert_m28721_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Insert_m28721_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::Insert(System.Int32,T)
MethodInfo ArrayReadOnlyList_1_Insert_m28721_MethodInfo = 
{
	"Insert"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Insert_m28721_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_Insert_m28721_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Insert_m28721_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_Remove_m28722_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_Remove_m28722_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1<System.Object>::Remove(T)
MethodInfo ArrayReadOnlyList_1_Remove_m28722_MethodInfo = 
{
	"Remove"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_Remove_m28722_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_Remove_m28722_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 16/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_Remove_m28722_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_RemoveAt_m28723_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_RemoveAt_m28723_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1<System.Object>::RemoveAt(System.Int32)
MethodInfo ArrayReadOnlyList_1_RemoveAt_m28723_MethodInfo = 
{
	"RemoveAt"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_RemoveAt_m28723_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, ArrayReadOnlyList_1_t6409_ArrayReadOnlyList_1_RemoveAt_m28723_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_RemoveAt_m28723_GenericMethod/* genericMethod */

};
extern Il2CppType Exception_t115_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ArrayReadOnlyList_1_ReadOnlyError_m28724_GenericMethod;
// System.Exception System.Array/ArrayReadOnlyList`1<System.Object>::ReadOnlyError()
MethodInfo ArrayReadOnlyList_1_ReadOnlyError_m28724_MethodInfo = 
{
	"ReadOnlyError"/* name */
	, (methodPointerType)&ArrayReadOnlyList_1_ReadOnlyError_m28724_gshared/* method */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* declaring_type */
	, &Exception_t115_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 145/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ArrayReadOnlyList_1_ReadOnlyError_m28724_GenericMethod/* genericMethod */

};
static MethodInfo* ArrayReadOnlyList_1_t6409_MethodInfos[] =
{
	&ArrayReadOnlyList_1__ctor_m28709_MethodInfo,
	&ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m28710_MethodInfo,
	&ArrayReadOnlyList_1_get_Item_m28711_MethodInfo,
	&ArrayReadOnlyList_1_set_Item_m28712_MethodInfo,
	&ArrayReadOnlyList_1_get_Count_m28713_MethodInfo,
	&ArrayReadOnlyList_1_get_IsReadOnly_m28714_MethodInfo,
	&ArrayReadOnlyList_1_Add_m28715_MethodInfo,
	&ArrayReadOnlyList_1_Clear_m28716_MethodInfo,
	&ArrayReadOnlyList_1_Contains_m28717_MethodInfo,
	&ArrayReadOnlyList_1_CopyTo_m28718_MethodInfo,
	&ArrayReadOnlyList_1_GetEnumerator_m28719_MethodInfo,
	&ArrayReadOnlyList_1_IndexOf_m28720_MethodInfo,
	&ArrayReadOnlyList_1_Insert_m28721_MethodInfo,
	&ArrayReadOnlyList_1_Remove_m28722_MethodInfo,
	&ArrayReadOnlyList_1_RemoveAt_m28723_MethodInfo,
	&ArrayReadOnlyList_1_ReadOnlyError_m28724_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m314_MethodInfo;
extern MethodInfo Object_GetHashCode_m315_MethodInfo;
static MethodInfo* ArrayReadOnlyList_1_t6409_VTable[] =
{
	&Object_Equals_m314_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&Object_GetHashCode_m315_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&ArrayReadOnlyList_1_System_Collections_IEnumerable_GetEnumerator_m28710_MethodInfo,
	&ArrayReadOnlyList_1_IndexOf_m28720_MethodInfo,
	&ArrayReadOnlyList_1_Insert_m28721_MethodInfo,
	&ArrayReadOnlyList_1_RemoveAt_m28723_MethodInfo,
	&ArrayReadOnlyList_1_get_Item_m28711_MethodInfo,
	&ArrayReadOnlyList_1_set_Item_m28712_MethodInfo,
	&ArrayReadOnlyList_1_get_Count_m28713_MethodInfo,
	&ArrayReadOnlyList_1_get_IsReadOnly_m28714_MethodInfo,
	&ArrayReadOnlyList_1_Add_m28715_MethodInfo,
	&ArrayReadOnlyList_1_Clear_m28716_MethodInfo,
	&ArrayReadOnlyList_1_Contains_m28717_MethodInfo,
	&ArrayReadOnlyList_1_CopyTo_m28718_MethodInfo,
	&ArrayReadOnlyList_1_Remove_m28722_MethodInfo,
	&ArrayReadOnlyList_1_GetEnumerator_m28719_MethodInfo,
};
extern TypeInfo IList_1_t4561_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t4470_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4557_il2cpp_TypeInfo;
static TypeInfo* ArrayReadOnlyList_1_t6409_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IList_1_t4561_il2cpp_TypeInfo,
	&ICollection_1_t4470_il2cpp_TypeInfo,
	&IEnumerable_1_t4557_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair ArrayReadOnlyList_1_t6409_InterfacesOffsets[] = 
{
	{ &IEnumerable_t1668_il2cpp_TypeInfo, 4},
	{ &IList_1_t4561_il2cpp_TypeInfo, 5},
	{ &ICollection_1_t4470_il2cpp_TypeInfo, 10},
	{ &IEnumerable_1_t4557_il2cpp_TypeInfo, 17},
};
extern TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo;
static Il2CppRGCTXData ArrayReadOnlyList_1_t6409_RGCTXData[5] = 
{
	&ArrayReadOnlyList_1_GetEnumerator_m28719_MethodInfo/* Method Usage */,
	&ArrayReadOnlyList_1_ReadOnlyError_m28724_MethodInfo/* Method Usage */,
	&Array_IndexOf_TisObject_t_m14110_MethodInfo/* Method Usage */,
	&U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* Class Usage */,
	&U3CGetEnumeratorU3Ec__Iterator0__ctor_m28725_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ArrayReadOnlyList_1_t6409_0_0_0;
extern Il2CppType ArrayReadOnlyList_1_t6409_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct ArrayReadOnlyList_1_t6409;
extern Il2CppGenericClass ArrayReadOnlyList_1_t6409_GenericClass;
extern CustomAttributesCache ArrayReadOnlyList_1_t3399__CustomAttributeCache;
extern CustomAttributesCache ArrayReadOnlyList_1_t3399__CustomAttributeCache_ArrayReadOnlyList_1_GetEnumerator_m13626;
TypeInfo ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ArrayReadOnlyList`1"/* name */
	, ""/* namespaze */
	, ArrayReadOnlyList_1_t6409_MethodInfos/* methods */
	, ArrayReadOnlyList_1_t6409_PropertyInfos/* properties */
	, ArrayReadOnlyList_1_t6409_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* element_class */
	, ArrayReadOnlyList_1_t6409_InterfacesTypeInfos/* implemented_interfaces */
	, ArrayReadOnlyList_1_t6409_VTable/* vtable */
	, &ArrayReadOnlyList_1_t3399__CustomAttributeCache/* custom_attributes_cache */
	, &ArrayReadOnlyList_1_t6409_il2cpp_TypeInfo/* cast_class */
	, &ArrayReadOnlyList_1_t6409_0_0_0/* byval_arg */
	, &ArrayReadOnlyList_1_t6409_1_0_0/* this_arg */
	, ArrayReadOnlyList_1_t6409_InterfacesOffsets/* interface_offsets */
	, &ArrayReadOnlyList_1_t6409_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, ArrayReadOnlyList_1_t6409_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (ArrayReadOnlyList_1_t6409)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048579/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 16/* method_count */
	, 3/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 18/* vtable_count */
	, 4/* interfaces_count */
	, 4/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// System.UInt32
#include "mscorlib_System_UInt32.h"
extern MethodInfo NotSupportedException__ctor_m438_MethodInfo;


// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
 void U3CGetEnumeratorU3Ec__Iterator0__ctor_m28725_gshared (U3CGetEnumeratorU3Ec__Iterator0_t6410 * __this, MethodInfo* method)
{
	{
		Object__ctor_m313(__this, /*hidden argument*/&Object__ctor_m313_MethodInfo);
		return;
	}
}
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m28726_MethodInfo;
 Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m28726_gshared (U3CGetEnumeratorU3Ec__Iterator0_t6410 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		return L_0;
	}
}
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m28727_MethodInfo;
 Object_t * U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m28727_gshared (U3CGetEnumeratorU3Ec__Iterator0_t6410 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___$current_2);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m28728_MethodInfo;
 bool U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m28728_gshared (U3CGetEnumeratorU3Ec__Iterator0_t6410 * __this, MethodInfo* method)
{
	uint32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = (__this->___$PC_1);
		V_0 = L_0;
		__this->___$PC_1 = (-1);
		if (V_0 == 0)
		{
			goto IL_001e;
		}
		if (V_0 == 1)
		{
			goto IL_004c;
		}
	}
	{
		goto IL_0076;
	}

IL_001e:
	{
		__this->___U3CiU3E__0_0 = 0;
		goto IL_005a;
	}

IL_0027:
	{
		ArrayReadOnlyList_1_t6409 * L_1 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_1);
		ObjectU5BU5D_t126* L_2 = (L_1->___array_0);
		int32_t L_3 = (__this->___U3CiU3E__0_0);
		NullCheck(L_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_2, L_3);
		int32_t L_4 = L_3;
		__this->___$current_2 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_2, L_4));
		__this->___$PC_1 = 1;
		goto IL_0078;
	}

IL_004c:
	{
		int32_t L_5 = (__this->___U3CiU3E__0_0);
		__this->___U3CiU3E__0_0 = ((int32_t)(L_5+1));
	}

IL_005a:
	{
		int32_t L_6 = (__this->___U3CiU3E__0_0);
		ArrayReadOnlyList_1_t6409 * L_7 = (__this->___U3CU3Ef__this_3);
		NullCheck(L_7);
		ObjectU5BU5D_t126* L_8 = (L_7->___array_0);
		NullCheck(L_8);
		if ((((int32_t)L_6) < ((int32_t)(((int32_t)(((Array_t *)L_8)->max_length))))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___$PC_1 = (-1);
	}

IL_0076:
	{
		return 0;
	}

IL_0078:
	{
		return 1;
	}
	// Dead block : IL_007a: ldloc.1
}
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_Dispose_m28729_MethodInfo;
 void U3CGetEnumeratorU3Ec__Iterator0_Dispose_m28729_gshared (U3CGetEnumeratorU3Ec__Iterator0_t6410 * __this, MethodInfo* method)
{
	{
		__this->___$PC_1 = (-1);
		return;
	}
}
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Reset()
extern MethodInfo U3CGetEnumeratorU3Ec__Iterator0_Reset_m28730_MethodInfo;
 void U3CGetEnumeratorU3Ec__Iterator0_Reset_m28730_gshared (U3CGetEnumeratorU3Ec__Iterator0_t6410 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t136 * L_0 = (NotSupportedException_t136 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t136_il2cpp_TypeInfo));
		NotSupportedException__ctor_m438(L_0, /*hidden argument*/&NotSupportedException__ctor_m438_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// Metadata Definition System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>
extern Il2CppType Int32_t104_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t6410____U3CiU3E__0_0_FieldInfo = 
{
	"<i>__0"/* name */
	, &Int32_t104_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t6410, ___U3CiU3E__0_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t6410____$PC_1_FieldInfo = 
{
	"$PC"/* name */
	, &Int32_t104_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t6410, ___$PC_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t6410____$current_2_FieldInfo = 
{
	"$current"/* name */
	, &Object_t_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t6410, ___$current_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ArrayReadOnlyList_1_t6409_0_0_3;
FieldInfo U3CGetEnumeratorU3Ec__Iterator0_t6410____U3CU3Ef__this_3_FieldInfo = 
{
	"<>f__this"/* name */
	, &ArrayReadOnlyList_1_t6409_0_0_3/* type */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* parent */
	, offsetof(U3CGetEnumeratorU3Ec__Iterator0_t6410, ___U3CU3Ef__this_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CGetEnumeratorU3Ec__Iterator0_t6410_FieldInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator0_t6410____U3CiU3E__0_0_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t6410____$PC_1_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t6410____$current_2_FieldInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t6410____U3CU3Ef__this_3_FieldInfo,
	NULL
};
static PropertyInfo U3CGetEnumeratorU3Ec__Iterator0_t6410____System_Collections_Generic_IEnumeratorU3CTU3E_Current_PropertyInfo = 
{
	&U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<T>.Current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m28726_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CGetEnumeratorU3Ec__Iterator0_t6410____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m28727_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CGetEnumeratorU3Ec__Iterator0_t6410_PropertyInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator0_t6410____System_Collections_Generic_IEnumeratorU3CTU3E_Current_PropertyInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_t6410____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0__ctor_m28725_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::.ctor()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0__ctor_m28725_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0__ctor_m28725_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0__ctor_m28725_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m13611;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m28726_GenericMethod;
// T System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.Generic.IEnumerator<T>.get_Current()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m28726_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<T>.get_Current"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m28726_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m13611/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m28726_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m13612;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m28727_GenericMethod;
// System.Object System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::System.Collections.IEnumerator.get_Current()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m28727_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m28727_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m13612/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m28727_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m28728_GenericMethod;
// System.Boolean System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::MoveNext()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m28728_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m28728_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m28728_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Dispose_m13614;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_Dispose_m28729_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Dispose()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_Dispose_m28729_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_Dispose_m28729_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Dispose_m13614/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_Dispose_m28729_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Reset_m13615;
extern Il2CppGenericMethod U3CGetEnumeratorU3Ec__Iterator0_Reset_m28730_GenericMethod;
// System.Void System.Array/ArrayReadOnlyList`1/<GetEnumerator>c__Iterator0<System.Object>::Reset()
MethodInfo U3CGetEnumeratorU3Ec__Iterator0_Reset_m28730_MethodInfo = 
{
	"Reset"/* name */
	, (methodPointerType)&U3CGetEnumeratorU3Ec__Iterator0_Reset_m28730_gshared/* method */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Reset_m13615/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CGetEnumeratorU3Ec__Iterator0_Reset_m28730_GenericMethod/* genericMethod */

};
static MethodInfo* U3CGetEnumeratorU3Ec__Iterator0_t6410_MethodInfos[] =
{
	&U3CGetEnumeratorU3Ec__Iterator0__ctor_m28725_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m28726_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m28727_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m28728_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_Dispose_m28729_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_Reset_m28730_MethodInfo,
	NULL
};
static MethodInfo* U3CGetEnumeratorU3Ec__Iterator0_t6410_VTable[] =
{
	&Object_Equals_m314_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&Object_GetHashCode_m315_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m28727_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_MoveNext_m28728_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_Reset_m28730_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_Dispose_m28729_MethodInfo,
	&U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m28726_MethodInfo,
};
static TypeInfo* U3CGetEnumeratorU3Ec__Iterator0_t6410_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t137_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CGetEnumeratorU3Ec__Iterator0_t6410_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t137_il2cpp_TypeInfo, 8},
};
extern TypeInfo Object_t_il2cpp_TypeInfo;
static Il2CppRGCTXData U3CGetEnumeratorU3Ec__Iterator0_t6410_RGCTXData[1] = 
{
	&Object_t_il2cpp_TypeInfo/* Class Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator0_t6410_0_0_0;
extern Il2CppType U3CGetEnumeratorU3Ec__Iterator0_t6410_1_0_0;
struct U3CGetEnumeratorU3Ec__Iterator0_t6410;
extern Il2CppGenericClass U3CGetEnumeratorU3Ec__Iterator0_t6410_GenericClass;
extern TypeInfo ArrayReadOnlyList_1_t3399_il2cpp_TypeInfo;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_Generic_IEnumeratorU3CTU3E_get_Current_m13611;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_System_Collections_IEnumerator_get_Current_m13612;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Dispose_m13614;
extern CustomAttributesCache U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache_U3CGetEnumeratorU3Ec__Iterator0_Reset_m13615;
TypeInfo U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "<GetEnumerator>c__Iterator0"/* name */
	, ""/* namespaze */
	, U3CGetEnumeratorU3Ec__Iterator0_t6410_MethodInfos/* methods */
	, U3CGetEnumeratorU3Ec__Iterator0_t6410_PropertyInfos/* properties */
	, U3CGetEnumeratorU3Ec__Iterator0_t6410_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &ArrayReadOnlyList_1_t3399_il2cpp_TypeInfo/* nested_in */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* element_class */
	, U3CGetEnumeratorU3Ec__Iterator0_t6410_InterfacesTypeInfos/* implemented_interfaces */
	, U3CGetEnumeratorU3Ec__Iterator0_t6410_VTable/* vtable */
	, &U3CGetEnumeratorU3Ec__Iterator0_t3398__CustomAttributeCache/* custom_attributes_cache */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_il2cpp_TypeInfo/* cast_class */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_0_0_0/* byval_arg */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_1_0_0/* this_arg */
	, U3CGetEnumeratorU3Ec__Iterator0_t6410_InterfacesOffsets/* interface_offsets */
	, &U3CGetEnumeratorU3Ec__Iterator0_t6410_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, U3CGetEnumeratorU3Ec__Iterator0_t6410_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CGetEnumeratorU3Ec__Iterator0_t6410)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 4/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8102_il2cpp_TypeInfo;

// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>
extern MethodInfo IEnumerator_1_get_Current_m46079_MethodInfo;
static PropertyInfo IEnumerator_1_t8102____Current_PropertyInfo = 
{
	&IEnumerator_1_t8102_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46079_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8102_PropertyInfos[] =
{
	&IEnumerator_1_t8102____Current_PropertyInfo,
	NULL
};
extern Il2CppType MethodInfo_t2624_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46079_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46079_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8102_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t2624_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46079_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8102_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46079_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8102_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8102_0_0_0;
extern Il2CppType IEnumerator_1_t8102_1_0_0;
struct IEnumerator_1_t8102;
extern Il2CppGenericClass IEnumerator_1_t8102_GenericClass;
TypeInfo IEnumerator_1_t8102_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8102_MethodInfos/* methods */
	, IEnumerator_1_t8102_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8102_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8102_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8102_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8102_0_0_0/* byval_arg */
	, &IEnumerator_1_t8102_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8102_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_473.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6411_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_473MethodDeclarations.h"

extern TypeInfo MethodInfo_t2624_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28736_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodInfo_t2624_m36650_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisMethodInfo_t2624_m36650(__this, p0, method) (MethodInfo_t2624 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6411____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6411_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6411, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6411____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6411_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6411, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6411_FieldInfos[] =
{
	&InternalEnumerator_1_t6411____array_0_FieldInfo,
	&InternalEnumerator_1_t6411____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28733_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6411____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6411_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28733_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6411____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6411_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28736_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6411_PropertyInfos[] =
{
	&InternalEnumerator_1_t6411____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6411____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6411_InternalEnumerator_1__ctor_m28731_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28731_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28731_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6411_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6411_InternalEnumerator_1__ctor_m28731_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28731_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28732_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28732_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6411_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28732_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28733_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28733_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6411_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28733_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28734_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28734_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6411_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28734_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28735_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28735_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6411_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28735_GenericMethod/* genericMethod */

};
extern Il2CppType MethodInfo_t2624_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28736_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.MethodInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28736_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6411_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t2624_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28736_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6411_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28731_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28732_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28733_MethodInfo,
	&InternalEnumerator_1_Dispose_m28734_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28735_MethodInfo,
	&InternalEnumerator_1_get_Current_m28736_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28735_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28732_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28734_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6411_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28733_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28735_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28732_MethodInfo,
	&InternalEnumerator_1_Dispose_m28734_MethodInfo,
	&InternalEnumerator_1_get_Current_m28736_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6411_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8102_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6411_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8102_il2cpp_TypeInfo, 8},
};
extern TypeInfo MethodInfo_t2624_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6411_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28736_MethodInfo/* Method Usage */,
	&MethodInfo_t2624_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMethodInfo_t2624_m36650_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6411_0_0_0;
extern Il2CppType InternalEnumerator_1_t6411_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6411_GenericClass;
TypeInfo InternalEnumerator_1_t6411_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6411_MethodInfos/* methods */
	, InternalEnumerator_1_t6411_PropertyInfos/* properties */
	, InternalEnumerator_1_t6411_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6411_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6411_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6411_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6411_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6411_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6411_1_0_0/* this_arg */
	, InternalEnumerator_1_t6411_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6411_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6411_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6411)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9786_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>
extern MethodInfo ICollection_1_get_Count_m46080_MethodInfo;
static PropertyInfo ICollection_1_t9786____Count_PropertyInfo = 
{
	&ICollection_1_t9786_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46080_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46081_MethodInfo;
static PropertyInfo ICollection_1_t9786____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9786_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46081_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9786_PropertyInfos[] =
{
	&ICollection_1_t9786____Count_PropertyInfo,
	&ICollection_1_t9786____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46080_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m46080_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9786_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46080_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46081_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46081_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9786_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46081_GenericMethod/* genericMethod */

};
extern Il2CppType MethodInfo_t2624_0_0_0;
extern Il2CppType MethodInfo_t2624_0_0_0;
static ParameterInfo ICollection_1_t9786_ICollection_1_Add_m46082_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t2624_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46082_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Add(T)
MethodInfo ICollection_1_Add_m46082_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9786_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9786_ICollection_1_Add_m46082_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46082_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46083_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Clear()
MethodInfo ICollection_1_Clear_m46083_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9786_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46083_GenericMethod/* genericMethod */

};
extern Il2CppType MethodInfo_t2624_0_0_0;
static ParameterInfo ICollection_1_t9786_ICollection_1_Contains_m46084_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t2624_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46084_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m46084_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9786_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9786_ICollection_1_Contains_m46084_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46084_GenericMethod/* genericMethod */

};
extern Il2CppType MethodInfoU5BU5D_t3408_0_0_0;
extern Il2CppType MethodInfoU5BU5D_t3408_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9786_ICollection_1_CopyTo_m46085_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodInfoU5BU5D_t3408_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46085_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46085_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9786_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9786_ICollection_1_CopyTo_m46085_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46085_GenericMethod/* genericMethod */

};
extern Il2CppType MethodInfo_t2624_0_0_0;
static ParameterInfo ICollection_1_t9786_ICollection_1_Remove_m46086_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t2624_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46086_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m46086_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9786_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9786_ICollection_1_Remove_m46086_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46086_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9786_MethodInfos[] =
{
	&ICollection_1_get_Count_m46080_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46081_MethodInfo,
	&ICollection_1_Add_m46082_MethodInfo,
	&ICollection_1_Clear_m46083_MethodInfo,
	&ICollection_1_Contains_m46084_MethodInfo,
	&ICollection_1_CopyTo_m46085_MethodInfo,
	&ICollection_1_Remove_m46086_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9788_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9786_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9788_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9786_0_0_0;
extern Il2CppType ICollection_1_t9786_1_0_0;
struct ICollection_1_t9786;
extern Il2CppGenericClass ICollection_1_t9786_GenericClass;
TypeInfo ICollection_1_t9786_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9786_MethodInfos/* methods */
	, ICollection_1_t9786_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9786_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9786_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9786_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9786_0_0_0/* byval_arg */
	, &ICollection_1_t9786_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9786_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>
extern Il2CppType IEnumerator_1_t8102_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46087_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46087_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9788_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8102_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46087_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9788_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46087_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9788_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9788_0_0_0;
extern Il2CppType IEnumerable_1_t9788_1_0_0;
struct IEnumerable_1_t9788;
extern Il2CppGenericClass IEnumerable_1_t9788_GenericClass;
TypeInfo IEnumerable_1_t9788_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9788_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9788_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9788_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9788_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9788_0_0_0/* byval_arg */
	, &IEnumerable_1_t9788_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9788_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9787_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodInfo>
extern MethodInfo IList_1_get_Item_m46088_MethodInfo;
extern MethodInfo IList_1_set_Item_m46089_MethodInfo;
static PropertyInfo IList_1_t9787____Item_PropertyInfo = 
{
	&IList_1_t9787_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46088_MethodInfo/* get */
	, &IList_1_set_Item_m46089_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9787_PropertyInfos[] =
{
	&IList_1_t9787____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodInfo_t2624_0_0_0;
static ParameterInfo IList_1_t9787_IList_1_IndexOf_m46090_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t2624_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46090_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46090_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9787_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9787_IList_1_IndexOf_m46090_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46090_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType MethodInfo_t2624_0_0_0;
static ParameterInfo IList_1_t9787_IList_1_Insert_m46091_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t2624_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46091_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46091_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9787_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9787_IList_1_Insert_m46091_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46091_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9787_IList_1_RemoveAt_m46092_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46092_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46092_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9787_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9787_IList_1_RemoveAt_m46092_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46092_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9787_IList_1_get_Item_m46088_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType MethodInfo_t2624_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46088_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46088_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9787_il2cpp_TypeInfo/* declaring_type */
	, &MethodInfo_t2624_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9787_IList_1_get_Item_m46088_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46088_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType MethodInfo_t2624_0_0_0;
static ParameterInfo IList_1_t9787_IList_1_set_Item_m46089_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t2624_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46089_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46089_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9787_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9787_IList_1_set_Item_m46089_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46089_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9787_MethodInfos[] =
{
	&IList_1_IndexOf_m46090_MethodInfo,
	&IList_1_Insert_m46091_MethodInfo,
	&IList_1_RemoveAt_m46092_MethodInfo,
	&IList_1_get_Item_m46088_MethodInfo,
	&IList_1_set_Item_m46089_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9787_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9786_il2cpp_TypeInfo,
	&IEnumerable_1_t9788_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9787_0_0_0;
extern Il2CppType IList_1_t9787_1_0_0;
struct IList_1_t9787;
extern Il2CppGenericClass IList_1_t9787_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9787_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9787_MethodInfos/* methods */
	, IList_1_t9787_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9787_il2cpp_TypeInfo/* element_class */
	, IList_1_t9787_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9787_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9787_0_0_0/* byval_arg */
	, &IList_1_t9787_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9787_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9789_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>
extern MethodInfo ICollection_1_get_Count_m46093_MethodInfo;
static PropertyInfo ICollection_1_t9789____Count_PropertyInfo = 
{
	&ICollection_1_t9789_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46093_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46094_MethodInfo;
static PropertyInfo ICollection_1_t9789____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9789_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46094_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9789_PropertyInfos[] =
{
	&ICollection_1_t9789____Count_PropertyInfo,
	&ICollection_1_t9789____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46093_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m46093_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9789_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46093_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46094_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46094_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9789_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46094_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodInfo_t4317_0_0_0;
extern Il2CppType _MethodInfo_t4317_0_0_0;
static ParameterInfo ICollection_1_t9789_ICollection_1_Add_m46095_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodInfo_t4317_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46095_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Add(T)
MethodInfo ICollection_1_Add_m46095_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9789_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9789_ICollection_1_Add_m46095_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46095_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46096_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Clear()
MethodInfo ICollection_1_Clear_m46096_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9789_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46096_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodInfo_t4317_0_0_0;
static ParameterInfo ICollection_1_t9789_ICollection_1_Contains_m46097_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodInfo_t4317_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46097_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m46097_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9789_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9789_ICollection_1_Contains_m46097_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46097_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodInfoU5BU5D_t6726_0_0_0;
extern Il2CppType _MethodInfoU5BU5D_t6726_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9789_ICollection_1_CopyTo_m46098_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_MethodInfoU5BU5D_t6726_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46098_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46098_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9789_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9789_ICollection_1_CopyTo_m46098_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46098_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodInfo_t4317_0_0_0;
static ParameterInfo ICollection_1_t9789_ICollection_1_Remove_m46099_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodInfo_t4317_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46099_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m46099_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9789_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9789_ICollection_1_Remove_m46099_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46099_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9789_MethodInfos[] =
{
	&ICollection_1_get_Count_m46093_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46094_MethodInfo,
	&ICollection_1_Add_m46095_MethodInfo,
	&ICollection_1_Clear_m46096_MethodInfo,
	&ICollection_1_Contains_m46097_MethodInfo,
	&ICollection_1_CopyTo_m46098_MethodInfo,
	&ICollection_1_Remove_m46099_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9791_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9789_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9791_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9789_0_0_0;
extern Il2CppType ICollection_1_t9789_1_0_0;
struct ICollection_1_t9789;
extern Il2CppGenericClass ICollection_1_t9789_GenericClass;
TypeInfo ICollection_1_t9789_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9789_MethodInfos/* methods */
	, ICollection_1_t9789_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9789_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9789_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9789_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9789_0_0_0/* byval_arg */
	, &ICollection_1_t9789_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9789_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodInfo>
extern Il2CppType IEnumerator_1_t8104_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46100_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46100_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9791_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8104_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46100_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9791_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46100_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9791_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9791_0_0_0;
extern Il2CppType IEnumerable_1_t9791_1_0_0;
struct IEnumerable_1_t9791;
extern Il2CppGenericClass IEnumerable_1_t9791_GenericClass;
TypeInfo IEnumerable_1_t9791_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9791_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9791_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9791_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9791_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9791_0_0_0/* byval_arg */
	, &IEnumerable_1_t9791_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9791_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8104_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodInfo>
extern MethodInfo IEnumerator_1_get_Current_m46101_MethodInfo;
static PropertyInfo IEnumerator_1_t8104____Current_PropertyInfo = 
{
	&IEnumerator_1_t8104_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46101_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8104_PropertyInfos[] =
{
	&IEnumerator_1_t8104____Current_PropertyInfo,
	NULL
};
extern Il2CppType _MethodInfo_t4317_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46101_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46101_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8104_il2cpp_TypeInfo/* declaring_type */
	, &_MethodInfo_t4317_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46101_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8104_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46101_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8104_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8104_0_0_0;
extern Il2CppType IEnumerator_1_t8104_1_0_0;
struct IEnumerator_1_t8104;
extern Il2CppGenericClass IEnumerator_1_t8104_GenericClass;
TypeInfo IEnumerator_1_t8104_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8104_MethodInfos/* methods */
	, IEnumerator_1_t8104_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8104_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8104_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8104_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8104_0_0_0/* byval_arg */
	, &IEnumerator_1_t8104_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8104_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_474.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6412_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_474MethodDeclarations.h"

extern TypeInfo _MethodInfo_t4317_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28742_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_MethodInfo_t4317_m36661_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MethodInfo_t4317_m36661(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6412____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6412_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6412, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6412____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6412_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6412, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6412_FieldInfos[] =
{
	&InternalEnumerator_1_t6412____array_0_FieldInfo,
	&InternalEnumerator_1_t6412____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28739_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6412____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6412_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28739_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6412____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6412_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28742_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6412_PropertyInfos[] =
{
	&InternalEnumerator_1_t6412____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6412____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6412_InternalEnumerator_1__ctor_m28737_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28737_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28737_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6412_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6412_InternalEnumerator_1__ctor_m28737_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28737_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28738_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28738_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6412_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28738_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28739_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28739_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6412_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28739_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28740_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28740_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6412_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28740_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28741_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28741_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6412_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28741_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodInfo_t4317_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28742_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28742_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6412_il2cpp_TypeInfo/* declaring_type */
	, &_MethodInfo_t4317_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28742_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6412_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28737_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28738_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28739_MethodInfo,
	&InternalEnumerator_1_Dispose_m28740_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28741_MethodInfo,
	&InternalEnumerator_1_get_Current_m28742_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28741_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28738_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28740_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6412_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28739_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28741_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28738_MethodInfo,
	&InternalEnumerator_1_Dispose_m28740_MethodInfo,
	&InternalEnumerator_1_get_Current_m28742_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6412_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8104_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6412_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8104_il2cpp_TypeInfo, 8},
};
extern TypeInfo _MethodInfo_t4317_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6412_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28742_MethodInfo/* Method Usage */,
	&_MethodInfo_t4317_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_MethodInfo_t4317_m36661_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6412_0_0_0;
extern Il2CppType InternalEnumerator_1_t6412_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6412_GenericClass;
TypeInfo InternalEnumerator_1_t6412_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6412_MethodInfos/* methods */
	, InternalEnumerator_1_t6412_PropertyInfos/* properties */
	, InternalEnumerator_1_t6412_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6412_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6412_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6412_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6412_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6412_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6412_1_0_0/* this_arg */
	, InternalEnumerator_1_t6412_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6412_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6412_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6412)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9790_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>
extern MethodInfo IList_1_get_Item_m46102_MethodInfo;
extern MethodInfo IList_1_set_Item_m46103_MethodInfo;
static PropertyInfo IList_1_t9790____Item_PropertyInfo = 
{
	&IList_1_t9790_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46102_MethodInfo/* get */
	, &IList_1_set_Item_m46103_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9790_PropertyInfos[] =
{
	&IList_1_t9790____Item_PropertyInfo,
	NULL
};
extern Il2CppType _MethodInfo_t4317_0_0_0;
static ParameterInfo IList_1_t9790_IList_1_IndexOf_m46104_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodInfo_t4317_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46104_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46104_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9790_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9790_IList_1_IndexOf_m46104_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46104_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType _MethodInfo_t4317_0_0_0;
static ParameterInfo IList_1_t9790_IList_1_Insert_m46105_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_MethodInfo_t4317_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46105_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46105_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9790_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9790_IList_1_Insert_m46105_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46105_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9790_IList_1_RemoveAt_m46106_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46106_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46106_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9790_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9790_IList_1_RemoveAt_m46106_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46106_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9790_IList_1_get_Item_m46102_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType _MethodInfo_t4317_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46102_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46102_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9790_il2cpp_TypeInfo/* declaring_type */
	, &_MethodInfo_t4317_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9790_IList_1_get_Item_m46102_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46102_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType _MethodInfo_t4317_0_0_0;
static ParameterInfo IList_1_t9790_IList_1_set_Item_m46103_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_MethodInfo_t4317_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46103_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46103_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9790_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9790_IList_1_set_Item_m46103_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46103_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9790_MethodInfos[] =
{
	&IList_1_IndexOf_m46104_MethodInfo,
	&IList_1_Insert_m46105_MethodInfo,
	&IList_1_RemoveAt_m46106_MethodInfo,
	&IList_1_get_Item_m46102_MethodInfo,
	&IList_1_set_Item_m46103_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9790_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9789_il2cpp_TypeInfo,
	&IEnumerable_1_t9791_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9790_0_0_0;
extern Il2CppType IList_1_t9790_1_0_0;
struct IList_1_t9790;
extern Il2CppGenericClass IList_1_t9790_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9790_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9790_MethodInfos/* methods */
	, IList_1_t9790_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9790_il2cpp_TypeInfo/* element_class */
	, IList_1_t9790_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9790_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9790_0_0_0/* byval_arg */
	, &IList_1_t9790_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9790_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9792_il2cpp_TypeInfo;

// System.Reflection.MethodBase
#include "mscorlib_System_Reflection_MethodBase.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>
extern MethodInfo ICollection_1_get_Count_m46107_MethodInfo;
static PropertyInfo ICollection_1_t9792____Count_PropertyInfo = 
{
	&ICollection_1_t9792_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46107_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46108_MethodInfo;
static PropertyInfo ICollection_1_t9792____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9792_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46108_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9792_PropertyInfos[] =
{
	&ICollection_1_t9792____Count_PropertyInfo,
	&ICollection_1_t9792____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46107_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::get_Count()
MethodInfo ICollection_1_get_Count_m46107_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9792_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46107_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46108_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46108_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9792_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46108_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBase_t2717_0_0_0;
extern Il2CppType MethodBase_t2717_0_0_0;
static ParameterInfo ICollection_1_t9792_ICollection_1_Add_m46109_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodBase_t2717_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46109_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Add(T)
MethodInfo ICollection_1_Add_m46109_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9792_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9792_ICollection_1_Add_m46109_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46109_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46110_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Clear()
MethodInfo ICollection_1_Clear_m46110_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9792_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46110_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBase_t2717_0_0_0;
static ParameterInfo ICollection_1_t9792_ICollection_1_Contains_m46111_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodBase_t2717_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46111_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Contains(T)
MethodInfo ICollection_1_Contains_m46111_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9792_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9792_ICollection_1_Contains_m46111_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46111_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBaseU5BU5D_t3630_0_0_0;
extern Il2CppType MethodBaseU5BU5D_t3630_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9792_ICollection_1_CopyTo_m46112_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodBaseU5BU5D_t3630_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46112_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46112_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9792_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9792_ICollection_1_CopyTo_m46112_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46112_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBase_t2717_0_0_0;
static ParameterInfo ICollection_1_t9792_ICollection_1_Remove_m46113_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodBase_t2717_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46113_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodBase>::Remove(T)
MethodInfo ICollection_1_Remove_m46113_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9792_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9792_ICollection_1_Remove_m46113_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46113_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9792_MethodInfos[] =
{
	&ICollection_1_get_Count_m46107_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46108_MethodInfo,
	&ICollection_1_Add_m46109_MethodInfo,
	&ICollection_1_Clear_m46110_MethodInfo,
	&ICollection_1_Contains_m46111_MethodInfo,
	&ICollection_1_CopyTo_m46112_MethodInfo,
	&ICollection_1_Remove_m46113_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9794_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9792_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9794_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9792_0_0_0;
extern Il2CppType ICollection_1_t9792_1_0_0;
struct ICollection_1_t9792;
extern Il2CppGenericClass ICollection_1_t9792_GenericClass;
TypeInfo ICollection_1_t9792_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9792_MethodInfos/* methods */
	, ICollection_1_t9792_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9792_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9792_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9792_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9792_0_0_0/* byval_arg */
	, &ICollection_1_t9792_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9792_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodBase>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodBase>
extern Il2CppType IEnumerator_1_t8105_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46114_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodBase>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46114_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9794_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8105_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46114_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9794_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46114_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9794_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9794_0_0_0;
extern Il2CppType IEnumerable_1_t9794_1_0_0;
struct IEnumerable_1_t9794;
extern Il2CppGenericClass IEnumerable_1_t9794_GenericClass;
TypeInfo IEnumerable_1_t9794_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9794_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9794_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9794_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9794_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9794_0_0_0/* byval_arg */
	, &IEnumerable_1_t9794_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9794_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8105_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodBase>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodBase>
extern MethodInfo IEnumerator_1_get_Current_m46115_MethodInfo;
static PropertyInfo IEnumerator_1_t8105____Current_PropertyInfo = 
{
	&IEnumerator_1_t8105_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46115_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8105_PropertyInfos[] =
{
	&IEnumerator_1_t8105____Current_PropertyInfo,
	NULL
};
extern Il2CppType MethodBase_t2717_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46115_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodBase>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46115_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8105_il2cpp_TypeInfo/* declaring_type */
	, &MethodBase_t2717_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46115_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8105_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46115_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8105_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8105_0_0_0;
extern Il2CppType IEnumerator_1_t8105_1_0_0;
struct IEnumerator_1_t8105;
extern Il2CppGenericClass IEnumerator_1_t8105_GenericClass;
TypeInfo IEnumerator_1_t8105_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8105_MethodInfos/* methods */
	, IEnumerator_1_t8105_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8105_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8105_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8105_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8105_0_0_0/* byval_arg */
	, &IEnumerator_1_t8105_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8105_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Reflection.MethodBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_475.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6413_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_475MethodDeclarations.h"

extern TypeInfo MethodBase_t2717_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28748_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodBase_t2717_m36672_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodBase>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodBase>(System.Int32)
#define Array_InternalArray__get_Item_TisMethodBase_t2717_m36672(__this, p0, method) (MethodBase_t2717 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodBase>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6413____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6413_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6413, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6413____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6413_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6413, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6413_FieldInfos[] =
{
	&InternalEnumerator_1_t6413____array_0_FieldInfo,
	&InternalEnumerator_1_t6413____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28745_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6413____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6413_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28745_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6413____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6413_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28748_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6413_PropertyInfos[] =
{
	&InternalEnumerator_1_t6413____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6413____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6413_InternalEnumerator_1__ctor_m28743_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28743_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28743_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6413_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6413_InternalEnumerator_1__ctor_m28743_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28743_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28744_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28744_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6413_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28744_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28745_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28745_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6413_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28745_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28746_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28746_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6413_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28746_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28747_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28747_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6413_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28747_GenericMethod/* genericMethod */

};
extern Il2CppType MethodBase_t2717_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28748_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.MethodBase>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28748_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6413_il2cpp_TypeInfo/* declaring_type */
	, &MethodBase_t2717_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28748_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6413_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28743_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28744_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28745_MethodInfo,
	&InternalEnumerator_1_Dispose_m28746_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28747_MethodInfo,
	&InternalEnumerator_1_get_Current_m28748_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28747_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28744_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28746_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6413_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28745_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28747_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28744_MethodInfo,
	&InternalEnumerator_1_Dispose_m28746_MethodInfo,
	&InternalEnumerator_1_get_Current_m28748_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6413_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8105_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6413_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8105_il2cpp_TypeInfo, 8},
};
extern TypeInfo MethodBase_t2717_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6413_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28748_MethodInfo/* Method Usage */,
	&MethodBase_t2717_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMethodBase_t2717_m36672_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6413_0_0_0;
extern Il2CppType InternalEnumerator_1_t6413_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6413_GenericClass;
TypeInfo InternalEnumerator_1_t6413_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6413_MethodInfos/* methods */
	, InternalEnumerator_1_t6413_PropertyInfos/* properties */
	, InternalEnumerator_1_t6413_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6413_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6413_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6413_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6413_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6413_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6413_1_0_0/* this_arg */
	, InternalEnumerator_1_t6413_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6413_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6413_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6413)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9793_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodBase>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodBase>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodBase>
extern MethodInfo IList_1_get_Item_m46116_MethodInfo;
extern MethodInfo IList_1_set_Item_m46117_MethodInfo;
static PropertyInfo IList_1_t9793____Item_PropertyInfo = 
{
	&IList_1_t9793_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46116_MethodInfo/* get */
	, &IList_1_set_Item_m46117_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9793_PropertyInfos[] =
{
	&IList_1_t9793____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodBase_t2717_0_0_0;
static ParameterInfo IList_1_t9793_IList_1_IndexOf_m46118_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodBase_t2717_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46118_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodBase>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46118_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9793_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9793_IList_1_IndexOf_m46118_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46118_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType MethodBase_t2717_0_0_0;
static ParameterInfo IList_1_t9793_IList_1_Insert_m46119_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodBase_t2717_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46119_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46119_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9793_IList_1_Insert_m46119_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46119_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9793_IList_1_RemoveAt_m46120_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46120_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46120_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9793_IList_1_RemoveAt_m46120_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46120_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9793_IList_1_get_Item_m46116_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType MethodBase_t2717_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46116_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.MethodBase>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46116_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9793_il2cpp_TypeInfo/* declaring_type */
	, &MethodBase_t2717_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9793_IList_1_get_Item_m46116_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46116_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType MethodBase_t2717_0_0_0;
static ParameterInfo IList_1_t9793_IList_1_set_Item_m46117_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodBase_t2717_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46117_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodBase>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46117_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9793_IList_1_set_Item_m46117_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46117_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9793_MethodInfos[] =
{
	&IList_1_IndexOf_m46118_MethodInfo,
	&IList_1_Insert_m46119_MethodInfo,
	&IList_1_RemoveAt_m46120_MethodInfo,
	&IList_1_get_Item_m46116_MethodInfo,
	&IList_1_set_Item_m46117_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9793_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9792_il2cpp_TypeInfo,
	&IEnumerable_1_t9794_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9793_0_0_0;
extern Il2CppType IList_1_t9793_1_0_0;
struct IList_1_t9793;
extern Il2CppGenericClass IList_1_t9793_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9793_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9793_MethodInfos/* methods */
	, IList_1_t9793_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9793_il2cpp_TypeInfo/* element_class */
	, IList_1_t9793_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9793_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9793_0_0_0/* byval_arg */
	, &IList_1_t9793_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9793_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9795_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo ICollection_1_get_Count_m46121_MethodInfo;
static PropertyInfo ICollection_1_t9795____Count_PropertyInfo = 
{
	&ICollection_1_t9795_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46121_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46122_MethodInfo;
static PropertyInfo ICollection_1_t9795____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9795_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46122_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9795_PropertyInfos[] =
{
	&ICollection_1_t9795____Count_PropertyInfo,
	&ICollection_1_t9795____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46121_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::get_Count()
MethodInfo ICollection_1_get_Count_m46121_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9795_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46121_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46122_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46122_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9795_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46122_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBase_t4312_0_0_0;
extern Il2CppType _MethodBase_t4312_0_0_0;
static ParameterInfo ICollection_1_t9795_ICollection_1_Add_m46123_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBase_t4312_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46123_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Add(T)
MethodInfo ICollection_1_Add_m46123_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9795_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9795_ICollection_1_Add_m46123_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46123_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46124_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Clear()
MethodInfo ICollection_1_Clear_m46124_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9795_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46124_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBase_t4312_0_0_0;
static ParameterInfo ICollection_1_t9795_ICollection_1_Contains_m46125_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBase_t4312_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46125_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Contains(T)
MethodInfo ICollection_1_Contains_m46125_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9795_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9795_ICollection_1_Contains_m46125_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46125_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBaseU5BU5D_t6727_0_0_0;
extern Il2CppType _MethodBaseU5BU5D_t6727_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9795_ICollection_1_CopyTo_m46126_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBaseU5BU5D_t6727_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46126_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46126_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9795_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9795_ICollection_1_CopyTo_m46126_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46126_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBase_t4312_0_0_0;
static ParameterInfo ICollection_1_t9795_ICollection_1_Remove_m46127_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBase_t4312_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46127_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._MethodBase>::Remove(T)
MethodInfo ICollection_1_Remove_m46127_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9795_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9795_ICollection_1_Remove_m46127_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46127_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9795_MethodInfos[] =
{
	&ICollection_1_get_Count_m46121_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46122_MethodInfo,
	&ICollection_1_Add_m46123_MethodInfo,
	&ICollection_1_Clear_m46124_MethodInfo,
	&ICollection_1_Contains_m46125_MethodInfo,
	&ICollection_1_CopyTo_m46126_MethodInfo,
	&ICollection_1_Remove_m46127_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9797_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9795_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9797_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9795_0_0_0;
extern Il2CppType ICollection_1_t9795_1_0_0;
struct ICollection_1_t9795;
extern Il2CppGenericClass ICollection_1_t9795_GenericClass;
TypeInfo ICollection_1_t9795_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9795_MethodInfos/* methods */
	, ICollection_1_t9795_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9795_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9795_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9795_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9795_0_0_0/* byval_arg */
	, &ICollection_1_t9795_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9795_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBase>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBase>
extern Il2CppType IEnumerator_1_t8107_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46128_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._MethodBase>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46128_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9797_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8107_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46128_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9797_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46128_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9797_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9797_0_0_0;
extern Il2CppType IEnumerable_1_t9797_1_0_0;
struct IEnumerable_1_t9797;
extern Il2CppGenericClass IEnumerable_1_t9797_GenericClass;
TypeInfo IEnumerable_1_t9797_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9797_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9797_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9797_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9797_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9797_0_0_0/* byval_arg */
	, &IEnumerable_1_t9797_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9797_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8107_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBase>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo IEnumerator_1_get_Current_m46129_MethodInfo;
static PropertyInfo IEnumerator_1_t8107____Current_PropertyInfo = 
{
	&IEnumerator_1_t8107_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46129_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8107_PropertyInfos[] =
{
	&IEnumerator_1_t8107____Current_PropertyInfo,
	NULL
};
extern Il2CppType _MethodBase_t4312_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46129_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._MethodBase>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46129_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8107_il2cpp_TypeInfo/* declaring_type */
	, &_MethodBase_t4312_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46129_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8107_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46129_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8107_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8107_0_0_0;
extern Il2CppType IEnumerator_1_t8107_1_0_0;
struct IEnumerator_1_t8107;
extern Il2CppGenericClass IEnumerator_1_t8107_GenericClass;
TypeInfo IEnumerator_1_t8107_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8107_MethodInfos/* methods */
	, IEnumerator_1_t8107_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8107_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8107_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8107_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8107_0_0_0/* byval_arg */
	, &IEnumerator_1_t8107_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8107_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_476.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6414_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_476MethodDeclarations.h"

extern TypeInfo _MethodBase_t4312_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28754_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_MethodBase_t4312_m36683_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBase>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._MethodBase>(System.Int32)
#define Array_InternalArray__get_Item_Tis_MethodBase_t4312_m36683(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6414____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6414_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6414, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6414____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6414_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6414, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6414_FieldInfos[] =
{
	&InternalEnumerator_1_t6414____array_0_FieldInfo,
	&InternalEnumerator_1_t6414____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28751_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6414____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6414_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28751_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6414____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6414_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28754_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6414_PropertyInfos[] =
{
	&InternalEnumerator_1_t6414____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6414____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6414_InternalEnumerator_1__ctor_m28749_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28749_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28749_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6414_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6414_InternalEnumerator_1__ctor_m28749_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28749_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28750_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28750_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6414_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28750_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28751_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28751_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6414_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28751_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28752_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28752_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6414_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28752_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28753_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28753_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6414_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28753_GenericMethod/* genericMethod */

};
extern Il2CppType _MethodBase_t4312_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28754_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._MethodBase>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28754_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6414_il2cpp_TypeInfo/* declaring_type */
	, &_MethodBase_t4312_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28754_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6414_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28749_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28750_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28751_MethodInfo,
	&InternalEnumerator_1_Dispose_m28752_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28753_MethodInfo,
	&InternalEnumerator_1_get_Current_m28754_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28753_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28750_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28752_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6414_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28751_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28753_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28750_MethodInfo,
	&InternalEnumerator_1_Dispose_m28752_MethodInfo,
	&InternalEnumerator_1_get_Current_m28754_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6414_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8107_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6414_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8107_il2cpp_TypeInfo, 8},
};
extern TypeInfo _MethodBase_t4312_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6414_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28754_MethodInfo/* Method Usage */,
	&_MethodBase_t4312_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_MethodBase_t4312_m36683_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6414_0_0_0;
extern Il2CppType InternalEnumerator_1_t6414_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6414_GenericClass;
TypeInfo InternalEnumerator_1_t6414_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6414_MethodInfos/* methods */
	, InternalEnumerator_1_t6414_PropertyInfos/* properties */
	, InternalEnumerator_1_t6414_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6414_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6414_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6414_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6414_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6414_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6414_1_0_0/* this_arg */
	, InternalEnumerator_1_t6414_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6414_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6414_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6414)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9796_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>
extern MethodInfo IList_1_get_Item_m46130_MethodInfo;
extern MethodInfo IList_1_set_Item_m46131_MethodInfo;
static PropertyInfo IList_1_t9796____Item_PropertyInfo = 
{
	&IList_1_t9796_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46130_MethodInfo/* get */
	, &IList_1_set_Item_m46131_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9796_PropertyInfos[] =
{
	&IList_1_t9796____Item_PropertyInfo,
	NULL
};
extern Il2CppType _MethodBase_t4312_0_0_0;
static ParameterInfo IList_1_t9796_IList_1_IndexOf_m46132_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_MethodBase_t4312_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46132_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46132_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9796_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9796_IList_1_IndexOf_m46132_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46132_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType _MethodBase_t4312_0_0_0;
static ParameterInfo IList_1_t9796_IList_1_Insert_m46133_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_MethodBase_t4312_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46133_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46133_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9796_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9796_IList_1_Insert_m46133_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46133_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9796_IList_1_RemoveAt_m46134_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46134_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46134_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9796_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9796_IList_1_RemoveAt_m46134_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46134_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9796_IList_1_get_Item_m46130_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType _MethodBase_t4312_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46130_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46130_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9796_il2cpp_TypeInfo/* declaring_type */
	, &_MethodBase_t4312_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9796_IList_1_get_Item_m46130_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46130_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType _MethodBase_t4312_0_0_0;
static ParameterInfo IList_1_t9796_IList_1_set_Item_m46131_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_MethodBase_t4312_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46131_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._MethodBase>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46131_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9796_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9796_IList_1_set_Item_m46131_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46131_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9796_MethodInfos[] =
{
	&IList_1_IndexOf_m46132_MethodInfo,
	&IList_1_Insert_m46133_MethodInfo,
	&IList_1_RemoveAt_m46134_MethodInfo,
	&IList_1_get_Item_m46130_MethodInfo,
	&IList_1_set_Item_m46131_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9796_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9795_il2cpp_TypeInfo,
	&IEnumerable_1_t9797_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9796_0_0_0;
extern Il2CppType IList_1_t9796_1_0_0;
struct IList_1_t9796;
extern Il2CppGenericClass IList_1_t9796_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9796_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9796_MethodInfos/* methods */
	, IList_1_t9796_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9796_il2cpp_TypeInfo/* element_class */
	, IList_1_t9796_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9796_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9796_0_0_0/* byval_arg */
	, &IList_1_t9796_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9796_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8109_il2cpp_TypeInfo;

// System.Reflection.ConstructorInfo
#include "mscorlib_System_Reflection_ConstructorInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>
extern MethodInfo IEnumerator_1_get_Current_m46135_MethodInfo;
static PropertyInfo IEnumerator_1_t8109____Current_PropertyInfo = 
{
	&IEnumerator_1_t8109_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46135_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8109_PropertyInfos[] =
{
	&IEnumerator_1_t8109____Current_PropertyInfo,
	NULL
};
extern Il2CppType ConstructorInfo_t2741_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46135_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46135_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8109_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t2741_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46135_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8109_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46135_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8109_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8109_0_0_0;
extern Il2CppType IEnumerator_1_t8109_1_0_0;
struct IEnumerator_1_t8109;
extern Il2CppGenericClass IEnumerator_1_t8109_GenericClass;
TypeInfo IEnumerator_1_t8109_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8109_MethodInfos/* methods */
	, IEnumerator_1_t8109_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8109_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8109_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8109_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8109_0_0_0/* byval_arg */
	, &IEnumerator_1_t8109_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8109_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_477.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6415_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_477MethodDeclarations.h"

extern TypeInfo ConstructorInfo_t2741_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28760_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisConstructorInfo_t2741_m36694_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ConstructorInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ConstructorInfo>(System.Int32)
#define Array_InternalArray__get_Item_TisConstructorInfo_t2741_m36694(__this, p0, method) (ConstructorInfo_t2741 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6415____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6415_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6415, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6415____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6415_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6415, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6415_FieldInfos[] =
{
	&InternalEnumerator_1_t6415____array_0_FieldInfo,
	&InternalEnumerator_1_t6415____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28757_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6415____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6415_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28757_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6415____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6415_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28760_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6415_PropertyInfos[] =
{
	&InternalEnumerator_1_t6415____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6415____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6415_InternalEnumerator_1__ctor_m28755_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28755_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28755_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6415_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6415_InternalEnumerator_1__ctor_m28755_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28755_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28756_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28756_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6415_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28756_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28757_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28757_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6415_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28757_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28758_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28758_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6415_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28758_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28759_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28759_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6415_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28759_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfo_t2741_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28760_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Reflection.ConstructorInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28760_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6415_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t2741_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28760_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6415_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28755_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28756_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28757_MethodInfo,
	&InternalEnumerator_1_Dispose_m28758_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28759_MethodInfo,
	&InternalEnumerator_1_get_Current_m28760_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28759_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28756_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28758_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6415_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28757_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28759_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28756_MethodInfo,
	&InternalEnumerator_1_Dispose_m28758_MethodInfo,
	&InternalEnumerator_1_get_Current_m28760_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6415_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8109_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6415_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8109_il2cpp_TypeInfo, 8},
};
extern TypeInfo ConstructorInfo_t2741_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6415_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28760_MethodInfo/* Method Usage */,
	&ConstructorInfo_t2741_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisConstructorInfo_t2741_m36694_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6415_0_0_0;
extern Il2CppType InternalEnumerator_1_t6415_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6415_GenericClass;
TypeInfo InternalEnumerator_1_t6415_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6415_MethodInfos/* methods */
	, InternalEnumerator_1_t6415_PropertyInfos/* properties */
	, InternalEnumerator_1_t6415_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6415_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6415_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6415_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6415_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6415_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6415_1_0_0/* this_arg */
	, InternalEnumerator_1_t6415_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6415_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6415_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6415)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9798_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>
extern MethodInfo ICollection_1_get_Count_m46136_MethodInfo;
static PropertyInfo ICollection_1_t9798____Count_PropertyInfo = 
{
	&ICollection_1_t9798_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46136_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46137_MethodInfo;
static PropertyInfo ICollection_1_t9798____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9798_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46137_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9798_PropertyInfos[] =
{
	&ICollection_1_t9798____Count_PropertyInfo,
	&ICollection_1_t9798____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46136_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m46136_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9798_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46136_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46137_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46137_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9798_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46137_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfo_t2741_0_0_0;
extern Il2CppType ConstructorInfo_t2741_0_0_0;
static ParameterInfo ICollection_1_t9798_ICollection_1_Add_m46138_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t2741_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46138_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Add(T)
MethodInfo ICollection_1_Add_m46138_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9798_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9798_ICollection_1_Add_m46138_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46138_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46139_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Clear()
MethodInfo ICollection_1_Clear_m46139_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9798_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46139_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfo_t2741_0_0_0;
static ParameterInfo ICollection_1_t9798_ICollection_1_Contains_m46140_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t2741_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46140_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m46140_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9798_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9798_ICollection_1_Contains_m46140_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46140_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfoU5BU5D_t3410_0_0_0;
extern Il2CppType ConstructorInfoU5BU5D_t3410_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9798_ICollection_1_CopyTo_m46141_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfoU5BU5D_t3410_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46141_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46141_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9798_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9798_ICollection_1_CopyTo_m46141_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46141_GenericMethod/* genericMethod */

};
extern Il2CppType ConstructorInfo_t2741_0_0_0;
static ParameterInfo ICollection_1_t9798_ICollection_1_Remove_m46142_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t2741_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46142_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ConstructorInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m46142_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9798_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9798_ICollection_1_Remove_m46142_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46142_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9798_MethodInfos[] =
{
	&ICollection_1_get_Count_m46136_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46137_MethodInfo,
	&ICollection_1_Add_m46138_MethodInfo,
	&ICollection_1_Clear_m46139_MethodInfo,
	&ICollection_1_Contains_m46140_MethodInfo,
	&ICollection_1_CopyTo_m46141_MethodInfo,
	&ICollection_1_Remove_m46142_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9800_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9798_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9800_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9798_0_0_0;
extern Il2CppType ICollection_1_t9798_1_0_0;
struct ICollection_1_t9798;
extern Il2CppGenericClass ICollection_1_t9798_GenericClass;
TypeInfo ICollection_1_t9798_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9798_MethodInfos/* methods */
	, ICollection_1_t9798_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9798_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9798_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9798_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9798_0_0_0/* byval_arg */
	, &ICollection_1_t9798_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9798_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>
extern Il2CppType IEnumerator_1_t8109_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46143_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ConstructorInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46143_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9800_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8109_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46143_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9800_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46143_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9800_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9800_0_0_0;
extern Il2CppType IEnumerable_1_t9800_1_0_0;
struct IEnumerable_1_t9800;
extern Il2CppGenericClass IEnumerable_1_t9800_GenericClass;
TypeInfo IEnumerable_1_t9800_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9800_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9800_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9800_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9800_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9800_0_0_0/* byval_arg */
	, &IEnumerable_1_t9800_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9800_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9799_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>
extern MethodInfo IList_1_get_Item_m46144_MethodInfo;
extern MethodInfo IList_1_set_Item_m46145_MethodInfo;
static PropertyInfo IList_1_t9799____Item_PropertyInfo = 
{
	&IList_1_t9799_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46144_MethodInfo/* get */
	, &IList_1_set_Item_m46145_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9799_PropertyInfos[] =
{
	&IList_1_t9799____Item_PropertyInfo,
	NULL
};
extern Il2CppType ConstructorInfo_t2741_0_0_0;
static ParameterInfo IList_1_t9799_IList_1_IndexOf_m46146_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t2741_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46146_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46146_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9799_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9799_IList_1_IndexOf_m46146_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46146_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ConstructorInfo_t2741_0_0_0;
static ParameterInfo IList_1_t9799_IList_1_Insert_m46147_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t2741_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46147_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46147_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9799_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9799_IList_1_Insert_m46147_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46147_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9799_IList_1_RemoveAt_m46148_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46148_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46148_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9799_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9799_IList_1_RemoveAt_m46148_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46148_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9799_IList_1_get_Item_m46144_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ConstructorInfo_t2741_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46144_GenericMethod;
// T System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46144_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9799_il2cpp_TypeInfo/* declaring_type */
	, &ConstructorInfo_t2741_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9799_IList_1_get_Item_m46144_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46144_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ConstructorInfo_t2741_0_0_0;
static ParameterInfo IList_1_t9799_IList_1_set_Item_m46145_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ConstructorInfo_t2741_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46145_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Reflection.ConstructorInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46145_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9799_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9799_IList_1_set_Item_m46145_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46145_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9799_MethodInfos[] =
{
	&IList_1_IndexOf_m46146_MethodInfo,
	&IList_1_Insert_m46147_MethodInfo,
	&IList_1_RemoveAt_m46148_MethodInfo,
	&IList_1_get_Item_m46144_MethodInfo,
	&IList_1_set_Item_m46145_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9799_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9798_il2cpp_TypeInfo,
	&IEnumerable_1_t9800_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9799_0_0_0;
extern Il2CppType IList_1_t9799_1_0_0;
struct IList_1_t9799;
extern Il2CppGenericClass IList_1_t9799_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9799_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9799_MethodInfos/* methods */
	, IList_1_t9799_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9799_il2cpp_TypeInfo/* element_class */
	, IList_1_t9799_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9799_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9799_0_0_0/* byval_arg */
	, &IList_1_t9799_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9799_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9801_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo ICollection_1_get_Count_m46149_MethodInfo;
static PropertyInfo ICollection_1_t9801____Count_PropertyInfo = 
{
	&ICollection_1_t9801_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46149_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46150_MethodInfo;
static PropertyInfo ICollection_1_t9801____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9801_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46150_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9801_PropertyInfos[] =
{
	&ICollection_1_t9801____Count_PropertyInfo,
	&ICollection_1_t9801____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46149_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m46149_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9801_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46149_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46150_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46150_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9801_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46150_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfo_t4311_0_0_0;
extern Il2CppType _ConstructorInfo_t4311_0_0_0;
static ParameterInfo ICollection_1_t9801_ICollection_1_Add_m46151_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t4311_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46151_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Add(T)
MethodInfo ICollection_1_Add_m46151_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9801_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9801_ICollection_1_Add_m46151_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46151_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46152_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Clear()
MethodInfo ICollection_1_Clear_m46152_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9801_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46152_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfo_t4311_0_0_0;
static ParameterInfo ICollection_1_t9801_ICollection_1_Contains_m46153_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t4311_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46153_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m46153_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9801_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9801_ICollection_1_Contains_m46153_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46153_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfoU5BU5D_t6728_0_0_0;
extern Il2CppType _ConstructorInfoU5BU5D_t6728_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9801_ICollection_1_CopyTo_m46154_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfoU5BU5D_t6728_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46154_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46154_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9801_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9801_ICollection_1_CopyTo_m46154_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46154_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfo_t4311_0_0_0;
static ParameterInfo ICollection_1_t9801_ICollection_1_Remove_m46155_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t4311_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46155_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices._ConstructorInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m46155_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9801_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9801_ICollection_1_Remove_m46155_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46155_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9801_MethodInfos[] =
{
	&ICollection_1_get_Count_m46149_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46150_MethodInfo,
	&ICollection_1_Add_m46151_MethodInfo,
	&ICollection_1_Clear_m46152_MethodInfo,
	&ICollection_1_Contains_m46153_MethodInfo,
	&ICollection_1_CopyTo_m46154_MethodInfo,
	&ICollection_1_Remove_m46155_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9803_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9801_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9803_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9801_0_0_0;
extern Il2CppType ICollection_1_t9801_1_0_0;
struct ICollection_1_t9801;
extern Il2CppGenericClass ICollection_1_t9801_GenericClass;
TypeInfo ICollection_1_t9801_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9801_MethodInfos/* methods */
	, ICollection_1_t9801_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9801_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9801_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9801_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9801_0_0_0/* byval_arg */
	, &ICollection_1_t9801_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9801_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>
extern Il2CppType IEnumerator_1_t8111_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46156_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices._ConstructorInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46156_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9803_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8111_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46156_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9803_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46156_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9803_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9803_0_0_0;
extern Il2CppType IEnumerable_1_t9803_1_0_0;
struct IEnumerable_1_t9803;
extern Il2CppGenericClass IEnumerable_1_t9803_GenericClass;
TypeInfo IEnumerable_1_t9803_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9803_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9803_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9803_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9803_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9803_0_0_0/* byval_arg */
	, &IEnumerable_1_t9803_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9803_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8111_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo IEnumerator_1_get_Current_m46157_MethodInfo;
static PropertyInfo IEnumerator_1_t8111____Current_PropertyInfo = 
{
	&IEnumerator_1_t8111_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46157_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8111_PropertyInfos[] =
{
	&IEnumerator_1_t8111____Current_PropertyInfo,
	NULL
};
extern Il2CppType _ConstructorInfo_t4311_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46157_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46157_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8111_il2cpp_TypeInfo/* declaring_type */
	, &_ConstructorInfo_t4311_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46157_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8111_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46157_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8111_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8111_0_0_0;
extern Il2CppType IEnumerator_1_t8111_1_0_0;
struct IEnumerator_1_t8111;
extern Il2CppGenericClass IEnumerator_1_t8111_GenericClass;
TypeInfo IEnumerator_1_t8111_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8111_MethodInfos/* methods */
	, IEnumerator_1_t8111_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8111_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8111_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8111_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8111_0_0_0/* byval_arg */
	, &IEnumerator_1_t8111_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8111_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_478.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6416_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_478MethodDeclarations.h"

extern TypeInfo _ConstructorInfo_t4311_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28766_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_Tis_ConstructorInfo_t4311_m36705_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices._ConstructorInfo>(System.Int32)
#define Array_InternalArray__get_Item_Tis_ConstructorInfo_t4311_m36705(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6416____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6416_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6416, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6416____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6416_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6416, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6416_FieldInfos[] =
{
	&InternalEnumerator_1_t6416____array_0_FieldInfo,
	&InternalEnumerator_1_t6416____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28763_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6416____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6416_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28763_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6416____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6416_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28766_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6416_PropertyInfos[] =
{
	&InternalEnumerator_1_t6416____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6416____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6416_InternalEnumerator_1__ctor_m28761_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28761_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28761_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6416_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6416_InternalEnumerator_1__ctor_m28761_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28761_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28762_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28762_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6416_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28762_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28763_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28763_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6416_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28763_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28764_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28764_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6416_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28764_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28765_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28765_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6416_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28765_GenericMethod/* genericMethod */

};
extern Il2CppType _ConstructorInfo_t4311_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28766_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices._ConstructorInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28766_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6416_il2cpp_TypeInfo/* declaring_type */
	, &_ConstructorInfo_t4311_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28766_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6416_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28761_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28762_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28763_MethodInfo,
	&InternalEnumerator_1_Dispose_m28764_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28765_MethodInfo,
	&InternalEnumerator_1_get_Current_m28766_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28765_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28762_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28764_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6416_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28763_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28765_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28762_MethodInfo,
	&InternalEnumerator_1_Dispose_m28764_MethodInfo,
	&InternalEnumerator_1_get_Current_m28766_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6416_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8111_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6416_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8111_il2cpp_TypeInfo, 8},
};
extern TypeInfo _ConstructorInfo_t4311_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6416_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28766_MethodInfo/* Method Usage */,
	&_ConstructorInfo_t4311_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_Tis_ConstructorInfo_t4311_m36705_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6416_0_0_0;
extern Il2CppType InternalEnumerator_1_t6416_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6416_GenericClass;
TypeInfo InternalEnumerator_1_t6416_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6416_MethodInfos/* methods */
	, InternalEnumerator_1_t6416_PropertyInfos/* properties */
	, InternalEnumerator_1_t6416_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6416_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6416_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6416_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6416_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6416_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6416_1_0_0/* this_arg */
	, InternalEnumerator_1_t6416_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6416_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6416_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6416)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9802_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>
extern MethodInfo IList_1_get_Item_m46158_MethodInfo;
extern MethodInfo IList_1_set_Item_m46159_MethodInfo;
static PropertyInfo IList_1_t9802____Item_PropertyInfo = 
{
	&IList_1_t9802_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46158_MethodInfo/* get */
	, &IList_1_set_Item_m46159_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9802_PropertyInfos[] =
{
	&IList_1_t9802____Item_PropertyInfo,
	NULL
};
extern Il2CppType _ConstructorInfo_t4311_0_0_0;
static ParameterInfo IList_1_t9802_IList_1_IndexOf_m46160_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t4311_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46160_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46160_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9802_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9802_IList_1_IndexOf_m46160_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46160_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType _ConstructorInfo_t4311_0_0_0;
static ParameterInfo IList_1_t9802_IList_1_Insert_m46161_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t4311_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46161_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46161_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9802_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9802_IList_1_Insert_m46161_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46161_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9802_IList_1_RemoveAt_m46162_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46162_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46162_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9802_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9802_IList_1_RemoveAt_m46162_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46162_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9802_IList_1_get_Item_m46158_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType _ConstructorInfo_t4311_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46158_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46158_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9802_il2cpp_TypeInfo/* declaring_type */
	, &_ConstructorInfo_t4311_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9802_IList_1_get_Item_m46158_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46158_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType _ConstructorInfo_t4311_0_0_0;
static ParameterInfo IList_1_t9802_IList_1_set_Item_m46159_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &_ConstructorInfo_t4311_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46159_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices._ConstructorInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46159_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9802_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9802_IList_1_set_Item_m46159_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46159_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9802_MethodInfos[] =
{
	&IList_1_IndexOf_m46160_MethodInfo,
	&IList_1_Insert_m46161_MethodInfo,
	&IList_1_RemoveAt_m46162_MethodInfo,
	&IList_1_get_Item_m46158_MethodInfo,
	&IList_1_set_Item_m46159_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9802_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9801_il2cpp_TypeInfo,
	&IEnumerable_1_t9803_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9802_0_0_0;
extern Il2CppType IList_1_t9802_1_0_0;
struct IList_1_t9802;
extern Il2CppGenericClass IList_1_t9802_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9802_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9802_MethodInfos/* methods */
	, IList_1_t9802_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9802_il2cpp_TypeInfo/* element_class */
	, IList_1_t9802_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9802_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9802_0_0_0/* byval_arg */
	, &IList_1_t9802_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9802_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8113_il2cpp_TypeInfo;

// System.MonoType
#include "mscorlib_System_MonoType.h"


// T System.Collections.Generic.IEnumerator`1<System.MonoType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.MonoType>
extern MethodInfo IEnumerator_1_get_Current_m46163_MethodInfo;
static PropertyInfo IEnumerator_1_t8113____Current_PropertyInfo = 
{
	&IEnumerator_1_t8113_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46163_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8113_PropertyInfos[] =
{
	&IEnumerator_1_t8113____Current_PropertyInfo,
	NULL
};
extern Il2CppType MonoType_t3954_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46163_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.MonoType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46163_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8113_il2cpp_TypeInfo/* declaring_type */
	, &MonoType_t3954_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46163_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8113_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46163_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8113_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8113_0_0_0;
extern Il2CppType IEnumerator_1_t8113_1_0_0;
struct IEnumerator_1_t8113;
extern Il2CppGenericClass IEnumerator_1_t8113_GenericClass;
TypeInfo IEnumerator_1_t8113_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8113_MethodInfos/* methods */
	, IEnumerator_1_t8113_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8113_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8113_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8113_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8113_0_0_0/* byval_arg */
	, &IEnumerator_1_t8113_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8113_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.MonoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_479.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6417_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.MonoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_479MethodDeclarations.h"

extern TypeInfo MonoType_t3954_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28772_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMonoType_t3954_m36716_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.MonoType>(System.Int32)
#define Array_InternalArray__get_Item_TisMonoType_t3954_m36716(__this, p0, method) (MonoType_t3954 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.MonoType>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.MonoType>::MoveNext()
// T System.Array/InternalEnumerator`1<System.MonoType>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.MonoType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6417____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6417_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6417, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6417____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6417_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6417, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6417_FieldInfos[] =
{
	&InternalEnumerator_1_t6417____array_0_FieldInfo,
	&InternalEnumerator_1_t6417____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28769_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6417____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6417_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28769_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6417____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6417_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28772_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6417_PropertyInfos[] =
{
	&InternalEnumerator_1_t6417____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6417____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6417_InternalEnumerator_1__ctor_m28767_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28767_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28767_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6417_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6417_InternalEnumerator_1__ctor_m28767_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28767_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28768_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28768_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6417_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28768_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28769_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.MonoType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28769_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6417_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28769_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28770_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.MonoType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28770_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6417_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28770_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28771_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.MonoType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28771_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6417_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28771_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t3954_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28772_GenericMethod;
// T System.Array/InternalEnumerator`1<System.MonoType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28772_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6417_il2cpp_TypeInfo/* declaring_type */
	, &MonoType_t3954_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28772_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6417_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28767_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28768_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28769_MethodInfo,
	&InternalEnumerator_1_Dispose_m28770_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28771_MethodInfo,
	&InternalEnumerator_1_get_Current_m28772_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28771_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28768_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28770_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6417_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28769_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28771_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28768_MethodInfo,
	&InternalEnumerator_1_Dispose_m28770_MethodInfo,
	&InternalEnumerator_1_get_Current_m28772_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6417_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8113_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6417_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8113_il2cpp_TypeInfo, 8},
};
extern TypeInfo MonoType_t3954_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6417_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28772_MethodInfo/* Method Usage */,
	&MonoType_t3954_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisMonoType_t3954_m36716_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6417_0_0_0;
extern Il2CppType InternalEnumerator_1_t6417_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6417_GenericClass;
TypeInfo InternalEnumerator_1_t6417_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6417_MethodInfos/* methods */
	, InternalEnumerator_1_t6417_PropertyInfos/* properties */
	, InternalEnumerator_1_t6417_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6417_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6417_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6417_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6417_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6417_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6417_1_0_0/* this_arg */
	, InternalEnumerator_1_t6417_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6417_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6417_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6417)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9804_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.MonoType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.MonoType>
extern MethodInfo ICollection_1_get_Count_m46164_MethodInfo;
static PropertyInfo ICollection_1_t9804____Count_PropertyInfo = 
{
	&ICollection_1_t9804_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46164_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46165_MethodInfo;
static PropertyInfo ICollection_1_t9804____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9804_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46165_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9804_PropertyInfos[] =
{
	&ICollection_1_t9804____Count_PropertyInfo,
	&ICollection_1_t9804____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46164_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.MonoType>::get_Count()
MethodInfo ICollection_1_get_Count_m46164_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9804_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46164_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46165_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46165_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46165_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t3954_0_0_0;
extern Il2CppType MonoType_t3954_0_0_0;
static ParameterInfo ICollection_1_t9804_ICollection_1_Add_m46166_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t3954_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46166_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Add(T)
MethodInfo ICollection_1_Add_m46166_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9804_ICollection_1_Add_m46166_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46166_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46167_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::Clear()
MethodInfo ICollection_1_Clear_m46167_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46167_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t3954_0_0_0;
static ParameterInfo ICollection_1_t9804_ICollection_1_Contains_m46168_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t3954_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46168_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Contains(T)
MethodInfo ICollection_1_Contains_m46168_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9804_ICollection_1_Contains_m46168_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46168_GenericMethod/* genericMethod */

};
extern Il2CppType MonoTypeU5BU5D_t4359_0_0_0;
extern Il2CppType MonoTypeU5BU5D_t4359_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9804_ICollection_1_CopyTo_m46169_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MonoTypeU5BU5D_t4359_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46169_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.MonoType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46169_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9804_ICollection_1_CopyTo_m46169_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46169_GenericMethod/* genericMethod */

};
extern Il2CppType MonoType_t3954_0_0_0;
static ParameterInfo ICollection_1_t9804_ICollection_1_Remove_m46170_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t3954_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46170_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.MonoType>::Remove(T)
MethodInfo ICollection_1_Remove_m46170_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9804_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9804_ICollection_1_Remove_m46170_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46170_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9804_MethodInfos[] =
{
	&ICollection_1_get_Count_m46164_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46165_MethodInfo,
	&ICollection_1_Add_m46166_MethodInfo,
	&ICollection_1_Clear_m46167_MethodInfo,
	&ICollection_1_Contains_m46168_MethodInfo,
	&ICollection_1_CopyTo_m46169_MethodInfo,
	&ICollection_1_Remove_m46170_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9806_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9804_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9806_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9804_0_0_0;
extern Il2CppType ICollection_1_t9804_1_0_0;
struct ICollection_1_t9804;
extern Il2CppGenericClass ICollection_1_t9804_GenericClass;
TypeInfo ICollection_1_t9804_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9804_MethodInfos/* methods */
	, ICollection_1_t9804_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9804_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9804_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9804_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9804_0_0_0/* byval_arg */
	, &ICollection_1_t9804_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9804_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.MonoType>
extern Il2CppType IEnumerator_1_t8113_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46171_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.MonoType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46171_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9806_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8113_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46171_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9806_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46171_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9806_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9806_0_0_0;
extern Il2CppType IEnumerable_1_t9806_1_0_0;
struct IEnumerable_1_t9806;
extern Il2CppGenericClass IEnumerable_1_t9806_GenericClass;
TypeInfo IEnumerable_1_t9806_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9806_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9806_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9806_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9806_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9806_0_0_0/* byval_arg */
	, &IEnumerable_1_t9806_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9806_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9805_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.MonoType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.MonoType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.MonoType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.MonoType>
extern MethodInfo IList_1_get_Item_m46172_MethodInfo;
extern MethodInfo IList_1_set_Item_m46173_MethodInfo;
static PropertyInfo IList_1_t9805____Item_PropertyInfo = 
{
	&IList_1_t9805_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46172_MethodInfo/* get */
	, &IList_1_set_Item_m46173_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9805_PropertyInfos[] =
{
	&IList_1_t9805____Item_PropertyInfo,
	NULL
};
extern Il2CppType MonoType_t3954_0_0_0;
static ParameterInfo IList_1_t9805_IList_1_IndexOf_m46174_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MonoType_t3954_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46174_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.MonoType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46174_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9805_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9805_IList_1_IndexOf_m46174_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46174_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType MonoType_t3954_0_0_0;
static ParameterInfo IList_1_t9805_IList_1_Insert_m46175_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MonoType_t3954_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46175_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46175_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9805_IList_1_Insert_m46175_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46175_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9805_IList_1_RemoveAt_m46176_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46176_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46176_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9805_IList_1_RemoveAt_m46176_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46176_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9805_IList_1_get_Item_m46172_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType MonoType_t3954_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46172_GenericMethod;
// T System.Collections.Generic.IList`1<System.MonoType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46172_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9805_il2cpp_TypeInfo/* declaring_type */
	, &MonoType_t3954_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9805_IList_1_get_Item_m46172_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46172_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType MonoType_t3954_0_0_0;
static ParameterInfo IList_1_t9805_IList_1_set_Item_m46173_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MonoType_t3954_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46173_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.MonoType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46173_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9805_IList_1_set_Item_m46173_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46173_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9805_MethodInfos[] =
{
	&IList_1_IndexOf_m46174_MethodInfo,
	&IList_1_Insert_m46175_MethodInfo,
	&IList_1_RemoveAt_m46176_MethodInfo,
	&IList_1_get_Item_m46172_MethodInfo,
	&IList_1_set_Item_m46173_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9805_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9804_il2cpp_TypeInfo,
	&IEnumerable_1_t9806_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9805_0_0_0;
extern Il2CppType IList_1_t9805_1_0_0;
struct IList_1_t9805;
extern Il2CppGenericClass IList_1_t9805_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9805_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9805_MethodInfos/* methods */
	, IList_1_t9805_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9805_il2cpp_TypeInfo/* element_class */
	, IList_1_t9805_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9805_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9805_0_0_0/* byval_arg */
	, &IList_1_t9805_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9805_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8115_il2cpp_TypeInfo;

// System.ParamArrayAttribute
#include "mscorlib_System_ParamArrayAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46177_MethodInfo;
static PropertyInfo IEnumerator_1_t8115____Current_PropertyInfo = 
{
	&IEnumerator_1_t8115_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46177_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8115_PropertyInfos[] =
{
	&IEnumerator_1_t8115____Current_PropertyInfo,
	NULL
};
extern Il2CppType ParamArrayAttribute_t470_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46177_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ParamArrayAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46177_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8115_il2cpp_TypeInfo/* declaring_type */
	, &ParamArrayAttribute_t470_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46177_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8115_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46177_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8115_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8115_0_0_0;
extern Il2CppType IEnumerator_1_t8115_1_0_0;
struct IEnumerator_1_t8115;
extern Il2CppGenericClass IEnumerator_1_t8115_GenericClass;
TypeInfo IEnumerator_1_t8115_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8115_MethodInfos/* methods */
	, IEnumerator_1_t8115_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8115_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8115_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8115_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8115_0_0_0/* byval_arg */
	, &IEnumerator_1_t8115_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8115_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_480.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6418_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_480MethodDeclarations.h"

extern TypeInfo ParamArrayAttribute_t470_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28778_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisParamArrayAttribute_t470_m36727_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ParamArrayAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ParamArrayAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisParamArrayAttribute_t470_m36727(__this, p0, method) (ParamArrayAttribute_t470 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.ParamArrayAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6418____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6418_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6418, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6418____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6418_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6418, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6418_FieldInfos[] =
{
	&InternalEnumerator_1_t6418____array_0_FieldInfo,
	&InternalEnumerator_1_t6418____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28775_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6418____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6418_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28775_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6418____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6418_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28778_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6418_PropertyInfos[] =
{
	&InternalEnumerator_1_t6418____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6418____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6418_InternalEnumerator_1__ctor_m28773_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28773_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28773_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6418_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6418_InternalEnumerator_1__ctor_m28773_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28773_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28774_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28774_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6418_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28774_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28775_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28775_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6418_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28775_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28776_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28776_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6418_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28776_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28777_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28777_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6418_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28777_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t470_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28778_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ParamArrayAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28778_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6418_il2cpp_TypeInfo/* declaring_type */
	, &ParamArrayAttribute_t470_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28778_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6418_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28773_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28774_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28775_MethodInfo,
	&InternalEnumerator_1_Dispose_m28776_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28777_MethodInfo,
	&InternalEnumerator_1_get_Current_m28778_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28777_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28774_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28776_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6418_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28775_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28777_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28774_MethodInfo,
	&InternalEnumerator_1_Dispose_m28776_MethodInfo,
	&InternalEnumerator_1_get_Current_m28778_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6418_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8115_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6418_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8115_il2cpp_TypeInfo, 8},
};
extern TypeInfo ParamArrayAttribute_t470_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6418_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28778_MethodInfo/* Method Usage */,
	&ParamArrayAttribute_t470_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisParamArrayAttribute_t470_m36727_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6418_0_0_0;
extern Il2CppType InternalEnumerator_1_t6418_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6418_GenericClass;
TypeInfo InternalEnumerator_1_t6418_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6418_MethodInfos/* methods */
	, InternalEnumerator_1_t6418_PropertyInfos/* properties */
	, InternalEnumerator_1_t6418_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6418_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6418_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6418_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6418_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6418_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6418_1_0_0/* this_arg */
	, InternalEnumerator_1_t6418_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6418_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6418_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6418)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9807_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>
extern MethodInfo ICollection_1_get_Count_m46178_MethodInfo;
static PropertyInfo ICollection_1_t9807____Count_PropertyInfo = 
{
	&ICollection_1_t9807_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46178_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46179_MethodInfo;
static PropertyInfo ICollection_1_t9807____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9807_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46179_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9807_PropertyInfos[] =
{
	&ICollection_1_t9807____Count_PropertyInfo,
	&ICollection_1_t9807____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46178_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46178_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9807_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46178_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46179_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46179_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9807_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46179_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t470_0_0_0;
extern Il2CppType ParamArrayAttribute_t470_0_0_0;
static ParameterInfo ICollection_1_t9807_ICollection_1_Add_m46180_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t470_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46180_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46180_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9807_ICollection_1_Add_m46180_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46180_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46181_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46181_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46181_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t470_0_0_0;
static ParameterInfo ICollection_1_t9807_ICollection_1_Contains_m46182_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t470_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46182_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46182_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9807_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9807_ICollection_1_Contains_m46182_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46182_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttributeU5BU5D_t6729_0_0_0;
extern Il2CppType ParamArrayAttributeU5BU5D_t6729_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9807_ICollection_1_CopyTo_m46183_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttributeU5BU5D_t6729_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46183_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46183_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9807_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9807_ICollection_1_CopyTo_m46183_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46183_GenericMethod/* genericMethod */

};
extern Il2CppType ParamArrayAttribute_t470_0_0_0;
static ParameterInfo ICollection_1_t9807_ICollection_1_Remove_m46184_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t470_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46184_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ParamArrayAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46184_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9807_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9807_ICollection_1_Remove_m46184_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46184_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9807_MethodInfos[] =
{
	&ICollection_1_get_Count_m46178_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46179_MethodInfo,
	&ICollection_1_Add_m46180_MethodInfo,
	&ICollection_1_Clear_m46181_MethodInfo,
	&ICollection_1_Contains_m46182_MethodInfo,
	&ICollection_1_CopyTo_m46183_MethodInfo,
	&ICollection_1_Remove_m46184_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9809_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9807_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9809_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9807_0_0_0;
extern Il2CppType ICollection_1_t9807_1_0_0;
struct ICollection_1_t9807;
extern Il2CppGenericClass ICollection_1_t9807_GenericClass;
TypeInfo ICollection_1_t9807_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9807_MethodInfos/* methods */
	, ICollection_1_t9807_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9807_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9807_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9807_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9807_0_0_0/* byval_arg */
	, &ICollection_1_t9807_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9807_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>
extern Il2CppType IEnumerator_1_t8115_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46185_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ParamArrayAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46185_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9809_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8115_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46185_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9809_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46185_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9809_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9809_0_0_0;
extern Il2CppType IEnumerable_1_t9809_1_0_0;
struct IEnumerable_1_t9809;
extern Il2CppGenericClass IEnumerable_1_t9809_GenericClass;
TypeInfo IEnumerable_1_t9809_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9809_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9809_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9809_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9809_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9809_0_0_0/* byval_arg */
	, &IEnumerable_1_t9809_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9809_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9808_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ParamArrayAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ParamArrayAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ParamArrayAttribute>
extern MethodInfo IList_1_get_Item_m46186_MethodInfo;
extern MethodInfo IList_1_set_Item_m46187_MethodInfo;
static PropertyInfo IList_1_t9808____Item_PropertyInfo = 
{
	&IList_1_t9808_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46186_MethodInfo/* get */
	, &IList_1_set_Item_m46187_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9808_PropertyInfos[] =
{
	&IList_1_t9808____Item_PropertyInfo,
	NULL
};
extern Il2CppType ParamArrayAttribute_t470_0_0_0;
static ParameterInfo IList_1_t9808_IList_1_IndexOf_m46188_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t470_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46188_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ParamArrayAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46188_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9808_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9808_IList_1_IndexOf_m46188_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46188_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ParamArrayAttribute_t470_0_0_0;
static ParameterInfo IList_1_t9808_IList_1_Insert_m46189_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t470_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46189_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46189_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9808_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9808_IList_1_Insert_m46189_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46189_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9808_IList_1_RemoveAt_m46190_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46190_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46190_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9808_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9808_IList_1_RemoveAt_m46190_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46190_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9808_IList_1_get_Item_m46186_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ParamArrayAttribute_t470_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46186_GenericMethod;
// T System.Collections.Generic.IList`1<System.ParamArrayAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46186_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9808_il2cpp_TypeInfo/* declaring_type */
	, &ParamArrayAttribute_t470_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9808_IList_1_get_Item_m46186_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46186_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ParamArrayAttribute_t470_0_0_0;
static ParameterInfo IList_1_t9808_IList_1_set_Item_m46187_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ParamArrayAttribute_t470_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46187_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ParamArrayAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46187_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9808_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9808_IList_1_set_Item_m46187_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46187_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9808_MethodInfos[] =
{
	&IList_1_IndexOf_m46188_MethodInfo,
	&IList_1_Insert_m46189_MethodInfo,
	&IList_1_RemoveAt_m46190_MethodInfo,
	&IList_1_get_Item_m46186_MethodInfo,
	&IList_1_set_Item_m46187_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9808_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9807_il2cpp_TypeInfo,
	&IEnumerable_1_t9809_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9808_0_0_0;
extern Il2CppType IList_1_t9808_1_0_0;
struct IList_1_t9808;
extern Il2CppGenericClass IList_1_t9808_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9808_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9808_MethodInfos/* methods */
	, IList_1_t9808_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9808_il2cpp_TypeInfo/* element_class */
	, IList_1_t9808_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9808_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9808_0_0_0/* byval_arg */
	, &IList_1_t9808_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9808_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8117_il2cpp_TypeInfo;

// System.Runtime.InteropServices.OutAttribute
#include "mscorlib_System_Runtime_InteropServices_OutAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46191_MethodInfo;
static PropertyInfo IEnumerator_1_t8117____Current_PropertyInfo = 
{
	&IEnumerator_1_t8117_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46191_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8117_PropertyInfos[] =
{
	&IEnumerator_1_t8117____Current_PropertyInfo,
	NULL
};
extern Il2CppType OutAttribute_t3412_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46191_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46191_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8117_il2cpp_TypeInfo/* declaring_type */
	, &OutAttribute_t3412_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46191_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8117_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46191_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8117_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8117_0_0_0;
extern Il2CppType IEnumerator_1_t8117_1_0_0;
struct IEnumerator_1_t8117;
extern Il2CppGenericClass IEnumerator_1_t8117_GenericClass;
TypeInfo IEnumerator_1_t8117_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8117_MethodInfos/* methods */
	, IEnumerator_1_t8117_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8117_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8117_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8117_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8117_0_0_0/* byval_arg */
	, &IEnumerator_1_t8117_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8117_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_481.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6419_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_481MethodDeclarations.h"

extern TypeInfo OutAttribute_t3412_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28784_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisOutAttribute_t3412_m36738_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OutAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.OutAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisOutAttribute_t3412_m36738(__this, p0, method) (OutAttribute_t3412 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6419____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6419_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6419, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6419____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6419_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6419, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6419_FieldInfos[] =
{
	&InternalEnumerator_1_t6419____array_0_FieldInfo,
	&InternalEnumerator_1_t6419____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28781_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6419____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6419_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28781_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6419____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6419_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28784_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6419_PropertyInfos[] =
{
	&InternalEnumerator_1_t6419____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6419____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6419_InternalEnumerator_1__ctor_m28779_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28779_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28779_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6419_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6419_InternalEnumerator_1__ctor_m28779_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28779_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28780_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28780_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6419_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28780_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28781_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28781_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6419_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28781_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28782_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28782_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6419_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28782_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28783_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28783_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6419_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28783_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t3412_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28784_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.OutAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28784_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6419_il2cpp_TypeInfo/* declaring_type */
	, &OutAttribute_t3412_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28784_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6419_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28779_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28780_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28781_MethodInfo,
	&InternalEnumerator_1_Dispose_m28782_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28783_MethodInfo,
	&InternalEnumerator_1_get_Current_m28784_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28783_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28780_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28782_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6419_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28781_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28783_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28780_MethodInfo,
	&InternalEnumerator_1_Dispose_m28782_MethodInfo,
	&InternalEnumerator_1_get_Current_m28784_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6419_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8117_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6419_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8117_il2cpp_TypeInfo, 8},
};
extern TypeInfo OutAttribute_t3412_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6419_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28784_MethodInfo/* Method Usage */,
	&OutAttribute_t3412_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisOutAttribute_t3412_m36738_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6419_0_0_0;
extern Il2CppType InternalEnumerator_1_t6419_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6419_GenericClass;
TypeInfo InternalEnumerator_1_t6419_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6419_MethodInfos/* methods */
	, InternalEnumerator_1_t6419_PropertyInfos/* properties */
	, InternalEnumerator_1_t6419_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6419_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6419_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6419_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6419_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6419_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6419_1_0_0/* this_arg */
	, InternalEnumerator_1_t6419_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6419_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6419_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6419)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9810_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo ICollection_1_get_Count_m46192_MethodInfo;
static PropertyInfo ICollection_1_t9810____Count_PropertyInfo = 
{
	&ICollection_1_t9810_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46192_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46193_MethodInfo;
static PropertyInfo ICollection_1_t9810____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9810_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46193_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9810_PropertyInfos[] =
{
	&ICollection_1_t9810____Count_PropertyInfo,
	&ICollection_1_t9810____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46192_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46192_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9810_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46192_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46193_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46193_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9810_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46193_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t3412_0_0_0;
extern Il2CppType OutAttribute_t3412_0_0_0;
static ParameterInfo ICollection_1_t9810_ICollection_1_Add_m46194_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t3412_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46194_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46194_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9810_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9810_ICollection_1_Add_m46194_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46194_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46195_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46195_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9810_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46195_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t3412_0_0_0;
static ParameterInfo ICollection_1_t9810_ICollection_1_Contains_m46196_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t3412_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46196_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46196_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9810_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9810_ICollection_1_Contains_m46196_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46196_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttributeU5BU5D_t6730_0_0_0;
extern Il2CppType OutAttributeU5BU5D_t6730_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9810_ICollection_1_CopyTo_m46197_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &OutAttributeU5BU5D_t6730_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46197_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46197_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9810_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9810_ICollection_1_CopyTo_m46197_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46197_GenericMethod/* genericMethod */

};
extern Il2CppType OutAttribute_t3412_0_0_0;
static ParameterInfo ICollection_1_t9810_ICollection_1_Remove_m46198_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t3412_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46198_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.OutAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46198_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9810_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9810_ICollection_1_Remove_m46198_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46198_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9810_MethodInfos[] =
{
	&ICollection_1_get_Count_m46192_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46193_MethodInfo,
	&ICollection_1_Add_m46194_MethodInfo,
	&ICollection_1_Clear_m46195_MethodInfo,
	&ICollection_1_Contains_m46196_MethodInfo,
	&ICollection_1_CopyTo_m46197_MethodInfo,
	&ICollection_1_Remove_m46198_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9812_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9810_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9812_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9810_0_0_0;
extern Il2CppType ICollection_1_t9810_1_0_0;
struct ICollection_1_t9810;
extern Il2CppGenericClass ICollection_1_t9810_GenericClass;
TypeInfo ICollection_1_t9810_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9810_MethodInfos/* methods */
	, ICollection_1_t9810_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9810_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9810_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9810_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9810_0_0_0/* byval_arg */
	, &ICollection_1_t9810_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9810_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>
extern Il2CppType IEnumerator_1_t8117_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46199_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.OutAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46199_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9812_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8117_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46199_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9812_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46199_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9812_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9812_0_0_0;
extern Il2CppType IEnumerable_1_t9812_1_0_0;
struct IEnumerable_1_t9812;
extern Il2CppGenericClass IEnumerable_1_t9812_GenericClass;
TypeInfo IEnumerable_1_t9812_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9812_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9812_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9812_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9812_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9812_0_0_0/* byval_arg */
	, &IEnumerable_1_t9812_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9812_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9811_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>
extern MethodInfo IList_1_get_Item_m46200_MethodInfo;
extern MethodInfo IList_1_set_Item_m46201_MethodInfo;
static PropertyInfo IList_1_t9811____Item_PropertyInfo = 
{
	&IList_1_t9811_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46200_MethodInfo/* get */
	, &IList_1_set_Item_m46201_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9811_PropertyInfos[] =
{
	&IList_1_t9811____Item_PropertyInfo,
	NULL
};
extern Il2CppType OutAttribute_t3412_0_0_0;
static ParameterInfo IList_1_t9811_IList_1_IndexOf_m46202_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t3412_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46202_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46202_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9811_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9811_IList_1_IndexOf_m46202_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46202_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType OutAttribute_t3412_0_0_0;
static ParameterInfo IList_1_t9811_IList_1_Insert_m46203_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t3412_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46203_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46203_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9811_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9811_IList_1_Insert_m46203_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46203_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9811_IList_1_RemoveAt_m46204_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46204_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46204_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9811_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9811_IList_1_RemoveAt_m46204_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46204_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9811_IList_1_get_Item_m46200_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType OutAttribute_t3412_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46200_GenericMethod;
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46200_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9811_il2cpp_TypeInfo/* declaring_type */
	, &OutAttribute_t3412_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9811_IList_1_get_Item_m46200_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46200_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType OutAttribute_t3412_0_0_0;
static ParameterInfo IList_1_t9811_IList_1_set_Item_m46201_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &OutAttribute_t3412_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46201_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.OutAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46201_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9811_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9811_IList_1_set_Item_m46201_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46201_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9811_MethodInfos[] =
{
	&IList_1_IndexOf_m46202_MethodInfo,
	&IList_1_Insert_m46203_MethodInfo,
	&IList_1_RemoveAt_m46204_MethodInfo,
	&IList_1_get_Item_m46200_MethodInfo,
	&IList_1_set_Item_m46201_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9811_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9810_il2cpp_TypeInfo,
	&IEnumerable_1_t9812_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9811_0_0_0;
extern Il2CppType IList_1_t9811_1_0_0;
struct IList_1_t9811;
extern Il2CppGenericClass IList_1_t9811_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9811_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9811_MethodInfos/* methods */
	, IList_1_t9811_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9811_il2cpp_TypeInfo/* element_class */
	, IList_1_t9811_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9811_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9811_0_0_0/* byval_arg */
	, &IList_1_t9811_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9811_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8119_il2cpp_TypeInfo;

// System.ObsoleteAttribute
#include "mscorlib_System_ObsoleteAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46205_MethodInfo;
static PropertyInfo IEnumerator_1_t8119____Current_PropertyInfo = 
{
	&IEnumerator_1_t8119_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46205_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8119_PropertyInfos[] =
{
	&IEnumerator_1_t8119____Current_PropertyInfo,
	NULL
};
extern Il2CppType ObsoleteAttribute_t423_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46205_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ObsoleteAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46205_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8119_il2cpp_TypeInfo/* declaring_type */
	, &ObsoleteAttribute_t423_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46205_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8119_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46205_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8119_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8119_0_0_0;
extern Il2CppType IEnumerator_1_t8119_1_0_0;
struct IEnumerator_1_t8119;
extern Il2CppGenericClass IEnumerator_1_t8119_GenericClass;
TypeInfo IEnumerator_1_t8119_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8119_MethodInfos/* methods */
	, IEnumerator_1_t8119_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8119_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8119_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8119_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8119_0_0_0/* byval_arg */
	, &IEnumerator_1_t8119_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8119_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.ObsoleteAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_482.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6420_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ObsoleteAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_482MethodDeclarations.h"

extern TypeInfo ObsoleteAttribute_t423_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28790_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisObsoleteAttribute_t423_m36749_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ObsoleteAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ObsoleteAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisObsoleteAttribute_t423_m36749(__this, p0, method) (ObsoleteAttribute_t423 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.ObsoleteAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6420____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6420_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6420, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6420____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6420_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6420, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6420_FieldInfos[] =
{
	&InternalEnumerator_1_t6420____array_0_FieldInfo,
	&InternalEnumerator_1_t6420____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28787_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6420____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6420_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28787_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6420____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6420_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28790_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6420_PropertyInfos[] =
{
	&InternalEnumerator_1_t6420____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6420____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6420_InternalEnumerator_1__ctor_m28785_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28785_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28785_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6420_InternalEnumerator_1__ctor_m28785_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28785_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28786_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28786_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28786_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28787_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28787_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6420_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28787_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28788_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28788_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6420_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28788_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28789_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28789_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6420_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28789_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttribute_t423_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28790_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ObsoleteAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28790_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6420_il2cpp_TypeInfo/* declaring_type */
	, &ObsoleteAttribute_t423_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28790_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6420_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28785_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28786_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28787_MethodInfo,
	&InternalEnumerator_1_Dispose_m28788_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28789_MethodInfo,
	&InternalEnumerator_1_get_Current_m28790_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28789_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28786_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28788_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6420_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28787_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28789_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28786_MethodInfo,
	&InternalEnumerator_1_Dispose_m28788_MethodInfo,
	&InternalEnumerator_1_get_Current_m28790_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6420_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8119_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6420_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8119_il2cpp_TypeInfo, 8},
};
extern TypeInfo ObsoleteAttribute_t423_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6420_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28790_MethodInfo/* Method Usage */,
	&ObsoleteAttribute_t423_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisObsoleteAttribute_t423_m36749_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6420_0_0_0;
extern Il2CppType InternalEnumerator_1_t6420_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6420_GenericClass;
TypeInfo InternalEnumerator_1_t6420_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6420_MethodInfos/* methods */
	, InternalEnumerator_1_t6420_PropertyInfos/* properties */
	, InternalEnumerator_1_t6420_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6420_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6420_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6420_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6420_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6420_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6420_1_0_0/* this_arg */
	, InternalEnumerator_1_t6420_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6420_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6420_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6420)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t9813_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>
extern MethodInfo ICollection_1_get_Count_m46206_MethodInfo;
static PropertyInfo ICollection_1_t9813____Count_PropertyInfo = 
{
	&ICollection_1_t9813_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m46206_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m46207_MethodInfo;
static PropertyInfo ICollection_1_t9813____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9813_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m46207_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9813_PropertyInfos[] =
{
	&ICollection_1_t9813____Count_PropertyInfo,
	&ICollection_1_t9813____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m46206_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m46206_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9813_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_Count_m46206_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m46207_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m46207_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9813_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_get_IsReadOnly_m46207_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttribute_t423_0_0_0;
extern Il2CppType ObsoleteAttribute_t423_0_0_0;
static ParameterInfo ICollection_1_t9813_ICollection_1_Add_m46208_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t423_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m46208_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Add(T)
MethodInfo ICollection_1_Add_m46208_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9813_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9813_ICollection_1_Add_m46208_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Add_m46208_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m46209_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Clear()
MethodInfo ICollection_1_Clear_m46209_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9813_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Clear_m46209_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttribute_t423_0_0_0;
static ParameterInfo ICollection_1_t9813_ICollection_1_Contains_m46210_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t423_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m46210_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m46210_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9813_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9813_ICollection_1_Contains_m46210_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Contains_m46210_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttributeU5BU5D_t6731_0_0_0;
extern Il2CppType ObsoleteAttributeU5BU5D_t6731_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9813_ICollection_1_CopyTo_m46211_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttributeU5BU5D_t6731_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m46211_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m46211_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9813_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9813_ICollection_1_CopyTo_m46211_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_CopyTo_m46211_GenericMethod/* genericMethod */

};
extern Il2CppType ObsoleteAttribute_t423_0_0_0;
static ParameterInfo ICollection_1_t9813_ICollection_1_Remove_m46212_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t423_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m46212_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ObsoleteAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m46212_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9813_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9813_ICollection_1_Remove_m46212_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &ICollection_1_Remove_m46212_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9813_MethodInfos[] =
{
	&ICollection_1_get_Count_m46206_MethodInfo,
	&ICollection_1_get_IsReadOnly_m46207_MethodInfo,
	&ICollection_1_Add_m46208_MethodInfo,
	&ICollection_1_Clear_m46209_MethodInfo,
	&ICollection_1_Contains_m46210_MethodInfo,
	&ICollection_1_CopyTo_m46211_MethodInfo,
	&ICollection_1_Remove_m46212_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9815_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9813_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9815_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9813_0_0_0;
extern Il2CppType ICollection_1_t9813_1_0_0;
struct ICollection_1_t9813;
extern Il2CppGenericClass ICollection_1_t9813_GenericClass;
TypeInfo ICollection_1_t9813_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9813_MethodInfos/* methods */
	, ICollection_1_t9813_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9813_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9813_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9813_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9813_0_0_0/* byval_arg */
	, &ICollection_1_t9813_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9813_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ObsoleteAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ObsoleteAttribute>
extern Il2CppType IEnumerator_1_t8119_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m46213_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ObsoleteAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m46213_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9815_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t8119_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerable_1_GetEnumerator_m46213_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9815_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m46213_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9815_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9815_0_0_0;
extern Il2CppType IEnumerable_1_t9815_1_0_0;
struct IEnumerable_1_t9815;
extern Il2CppGenericClass IEnumerable_1_t9815_GenericClass;
TypeInfo IEnumerable_1_t9815_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9815_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9815_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9815_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9815_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9815_0_0_0/* byval_arg */
	, &IEnumerable_1_t9815_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9815_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t9814_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ObsoleteAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ObsoleteAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ObsoleteAttribute>
extern MethodInfo IList_1_get_Item_m46214_MethodInfo;
extern MethodInfo IList_1_set_Item_m46215_MethodInfo;
static PropertyInfo IList_1_t9814____Item_PropertyInfo = 
{
	&IList_1_t9814_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m46214_MethodInfo/* get */
	, &IList_1_set_Item_m46215_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9814_PropertyInfos[] =
{
	&IList_1_t9814____Item_PropertyInfo,
	NULL
};
extern Il2CppType ObsoleteAttribute_t423_0_0_0;
static ParameterInfo IList_1_t9814_IList_1_IndexOf_m46216_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t423_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m46216_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ObsoleteAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m46216_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9814_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9814_IList_1_IndexOf_m46216_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_IndexOf_m46216_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ObsoleteAttribute_t423_0_0_0;
static ParameterInfo IList_1_t9814_IList_1_Insert_m46217_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t423_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m46217_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m46217_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9814_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9814_IList_1_Insert_m46217_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_Insert_m46217_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9814_IList_1_RemoveAt_m46218_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m46218_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m46218_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9814_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9814_IList_1_RemoveAt_m46218_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_RemoveAt_m46218_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9814_IList_1_get_Item_m46214_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ObsoleteAttribute_t423_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m46214_GenericMethod;
// T System.Collections.Generic.IList`1<System.ObsoleteAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m46214_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9814_il2cpp_TypeInfo/* declaring_type */
	, &ObsoleteAttribute_t423_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9814_IList_1_get_Item_m46214_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_get_Item_m46214_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ObsoleteAttribute_t423_0_0_0;
static ParameterInfo IList_1_t9814_IList_1_set_Item_m46215_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ObsoleteAttribute_t423_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m46215_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ObsoleteAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m46215_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9814_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9814_IList_1_set_Item_m46215_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IList_1_set_Item_m46215_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9814_MethodInfos[] =
{
	&IList_1_IndexOf_m46216_MethodInfo,
	&IList_1_Insert_m46217_MethodInfo,
	&IList_1_RemoveAt_m46218_MethodInfo,
	&IList_1_get_Item_m46214_MethodInfo,
	&IList_1_set_Item_m46215_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9814_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9813_il2cpp_TypeInfo,
	&IEnumerable_1_t9815_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9814_0_0_0;
extern Il2CppType IList_1_t9814_1_0_0;
struct IList_1_t9814;
extern Il2CppGenericClass IList_1_t9814_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9814_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9814_MethodInfos/* methods */
	, IList_1_t9814_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9814_il2cpp_TypeInfo/* element_class */
	, IList_1_t9814_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9814_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9814_0_0_0/* byval_arg */
	, &IList_1_t9814_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9814_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t8121_il2cpp_TypeInfo;

// System.Runtime.InteropServices.DllImportAttribute
#include "mscorlib_System_Runtime_InteropServices_DllImportAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
extern MethodInfo IEnumerator_1_get_Current_m46219_MethodInfo;
static PropertyInfo IEnumerator_1_t8121____Current_PropertyInfo = 
{
	&IEnumerator_1_t8121_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m46219_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t8121_PropertyInfos[] =
{
	&IEnumerator_1_t8121____Current_PropertyInfo,
	NULL
};
extern Il2CppType DllImportAttribute_t3413_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m46219_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m46219_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t8121_il2cpp_TypeInfo/* declaring_type */
	, &DllImportAttribute_t3413_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &IEnumerator_1_get_Current_m46219_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t8121_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m46219_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t8121_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t8121_0_0_0;
extern Il2CppType IEnumerator_1_t8121_1_0_0;
struct IEnumerator_1_t8121;
extern Il2CppGenericClass IEnumerator_1_t8121_GenericClass;
TypeInfo IEnumerator_1_t8121_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t8121_MethodInfos/* methods */
	, IEnumerator_1_t8121_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t8121_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t8121_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t8121_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t8121_0_0_0/* byval_arg */
	, &IEnumerator_1_t8121_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t8121_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_483.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t6421_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_483MethodDeclarations.h"

extern TypeInfo DllImportAttribute_t3413_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m28796_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDllImportAttribute_t3413_m36760_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.DllImportAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.DllImportAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDllImportAttribute_t3413_m36760(__this, p0, method) (DllImportAttribute_t3413 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t6421____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t6421_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6421, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t6421____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t6421_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t6421, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t6421_FieldInfos[] =
{
	&InternalEnumerator_1_t6421____array_0_FieldInfo,
	&InternalEnumerator_1_t6421____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28793_MethodInfo;
static PropertyInfo InternalEnumerator_1_t6421____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6421_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28793_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t6421____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t6421_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m28796_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t6421_PropertyInfos[] =
{
	&InternalEnumerator_1_t6421____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t6421____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t6421_InternalEnumerator_1__ctor_m28791_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m28791_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m28791_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t6421_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t6421_InternalEnumerator_1__ctor_m28791_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1__ctor_m28791_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28792_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28792_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t6421_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28792_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28793_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28793_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t6421_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28793_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m28794_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m28794_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t6421_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_Dispose_m28794_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m28795_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m28795_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t6421_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_MoveNext_m28795_GenericMethod/* genericMethod */

};
extern Il2CppType DllImportAttribute_t3413_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m28796_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DllImportAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m28796_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t6421_il2cpp_TypeInfo/* declaring_type */
	, &DllImportAttribute_t3413_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InternalEnumerator_1_get_Current_m28796_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t6421_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m28791_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28792_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28793_MethodInfo,
	&InternalEnumerator_1_Dispose_m28794_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28795_MethodInfo,
	&InternalEnumerator_1_get_Current_m28796_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m28795_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28792_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m28794_MethodInfo;
static MethodInfo* InternalEnumerator_1_t6421_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m28793_MethodInfo,
	&InternalEnumerator_1_MoveNext_m28795_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m28792_MethodInfo,
	&InternalEnumerator_1_Dispose_m28794_MethodInfo,
	&InternalEnumerator_1_get_Current_m28796_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t6421_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t8121_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t6421_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t8121_il2cpp_TypeInfo, 8},
};
extern TypeInfo DllImportAttribute_t3413_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t6421_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m28796_MethodInfo/* Method Usage */,
	&DllImportAttribute_t3413_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisDllImportAttribute_t3413_m36760_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t6421_0_0_0;
extern Il2CppType InternalEnumerator_1_t6421_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t6421_GenericClass;
TypeInfo InternalEnumerator_1_t6421_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t6421_MethodInfos/* methods */
	, InternalEnumerator_1_t6421_PropertyInfos/* properties */
	, InternalEnumerator_1_t6421_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t6421_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t6421_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t6421_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t6421_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t6421_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t6421_1_0_0/* this_arg */
	, InternalEnumerator_1_t6421_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t6421_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t6421_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t6421)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
