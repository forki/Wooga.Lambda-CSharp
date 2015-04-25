#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo IList_1_t9162_il2cpp_TypeInfo;

// System.Diagnostics.Contracts.PureAttribute
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.PureAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.PureAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.PureAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.PureAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.PureAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.Contracts.PureAttribute>
extern MethodInfo IList_1_get_Item_m42948_MethodInfo;
extern MethodInfo IList_1_set_Item_m42949_MethodInfo;
static PropertyInfo IList_1_t9162____Item_PropertyInfo = 
{
	&IList_1_t9162_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m42948_MethodInfo/* get */
	, &IList_1_set_Item_m42949_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9162_PropertyInfos[] =
{
	&IList_1_t9162____Item_PropertyInfo,
	NULL
};
extern Il2CppType PureAttribute_t1049_0_0_0;
extern Il2CppType PureAttribute_t1049_0_0_0;
static ParameterInfo IList_1_t9162_IList_1_IndexOf_m42950_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PureAttribute_t1049_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m42950_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.PureAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m42950_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9162_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9162_IList_1_IndexOf_m42950_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m42950_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType PureAttribute_t1049_0_0_0;
static ParameterInfo IList_1_t9162_IList_1_Insert_m42951_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PureAttribute_t1049_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m42951_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.PureAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m42951_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9162_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9162_IList_1_Insert_m42951_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m42951_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9162_IList_1_RemoveAt_m42952_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m42952_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.PureAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m42952_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9162_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9162_IList_1_RemoveAt_m42952_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m42952_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9162_IList_1_get_Item_m42948_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType PureAttribute_t1049_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m42948_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.PureAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m42948_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9162_il2cpp_TypeInfo/* declaring_type */
	, &PureAttribute_t1049_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9162_IList_1_get_Item_m42948_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m42948_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType PureAttribute_t1049_0_0_0;
static ParameterInfo IList_1_t9162_IList_1_set_Item_m42949_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PureAttribute_t1049_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m42949_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.PureAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m42949_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9162_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9162_IList_1_set_Item_m42949_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m42949_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9162_MethodInfos[] =
{
	&IList_1_IndexOf_m42950_MethodInfo,
	&IList_1_Insert_m42951_MethodInfo,
	&IList_1_RemoveAt_m42952_MethodInfo,
	&IList_1_get_Item_m42948_MethodInfo,
	&IList_1_set_Item_m42949_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t1668_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t9161_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t9163_il2cpp_TypeInfo;
static TypeInfo* IList_1_t9162_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9161_il2cpp_TypeInfo,
	&IEnumerable_1_t9163_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9162_0_0_0;
extern Il2CppType IList_1_t9162_1_0_0;
struct IList_1_t9162;
extern Il2CppGenericClass IList_1_t9162_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9162_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9162_MethodInfos/* methods */
	, IList_1_t9162_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9162_il2cpp_TypeInfo/* element_class */
	, IList_1_t9162_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9162_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9162_0_0_0/* byval_arg */
	, &IList_1_t9162_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9162_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7687_il2cpp_TypeInfo;

// System.Diagnostics.Contracts.ContractClassAttribute
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_0.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>
extern MethodInfo IEnumerator_1_get_Current_m42953_MethodInfo;
static PropertyInfo IEnumerator_1_t7687____Current_PropertyInfo = 
{
	&IEnumerator_1_t7687_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m42953_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7687_PropertyInfos[] =
{
	&IEnumerator_1_t7687____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContractClassAttribute_t1050_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m42953_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m42953_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7687_il2cpp_TypeInfo/* declaring_type */
	, &ContractClassAttribute_t1050_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m42953_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7687_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m42953_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t51_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t114_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t7687_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7687_0_0_0;
extern Il2CppType IEnumerator_1_t7687_1_0_0;
struct IEnumerator_1_t7687;
extern Il2CppGenericClass IEnumerator_1_t7687_GenericClass;
TypeInfo IEnumerator_1_t7687_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7687_MethodInfos/* methods */
	, IEnumerator_1_t7687_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7687_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7687_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7687_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7687_0_0_0/* byval_arg */
	, &IEnumerator_1_t7687_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7687_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_259.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5846_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_259MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo ContractClassAttribute_t1050_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t2444_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m25020_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m5171_MethodInfo;
extern MethodInfo Array_get_Length_m2933_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContractClassAttribute_t1050_m34029_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m30104_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m30104(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractClassAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractClassAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisContractClassAttribute_t1050_m34029(__this, p0, method) (ContractClassAttribute_t1050 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5846____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5846_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5846, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5846____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5846_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5846, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5846_FieldInfos[] =
{
	&InternalEnumerator_1_t5846____array_0_FieldInfo,
	&InternalEnumerator_1_t5846____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25017_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5846____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5846_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25017_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5846____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5846_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25020_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5846_PropertyInfos[] =
{
	&InternalEnumerator_1_t5846____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5846____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5846_InternalEnumerator_1__ctor_m25015_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25015_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25015_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5846_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5846_InternalEnumerator_1__ctor_m25015_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25015_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25016_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25016_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5846_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25016_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25017_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25017_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5846_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25017_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25018_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25018_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5846_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25018_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25019_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25019_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5846_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25019_GenericMethod/* genericMethod */

};
extern Il2CppType ContractClassAttribute_t1050_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25020_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25020_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5846_il2cpp_TypeInfo/* declaring_type */
	, &ContractClassAttribute_t1050_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25020_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5846_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25015_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25016_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25017_MethodInfo,
	&InternalEnumerator_1_Dispose_m25018_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25019_MethodInfo,
	&InternalEnumerator_1_get_Current_m25020_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m519_MethodInfo;
extern MethodInfo Object_Finalize_m288_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m520_MethodInfo;
extern MethodInfo ValueType_ToString_m521_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m25019_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25016_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25018_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5846_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25017_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25019_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25016_MethodInfo,
	&InternalEnumerator_1_Dispose_m25018_MethodInfo,
	&InternalEnumerator_1_get_Current_m25020_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5846_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7687_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5846_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7687_il2cpp_TypeInfo, 8},
};
extern TypeInfo ContractClassAttribute_t1050_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5846_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25020_MethodInfo/* Method Usage */,
	&ContractClassAttribute_t1050_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContractClassAttribute_t1050_m34029_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5846_0_0_0;
extern Il2CppType InternalEnumerator_1_t5846_1_0_0;
extern TypeInfo ValueType_t144_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t5846_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t5846_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5846_MethodInfos/* methods */
	, InternalEnumerator_1_t5846_PropertyInfos/* properties */
	, InternalEnumerator_1_t5846_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5846_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5846_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5846_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5846_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5846_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5846_1_0_0/* this_arg */
	, InternalEnumerator_1_t5846_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5846_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5846_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5846)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9164_il2cpp_TypeInfo;

#include "Rackspace.Collections.Immutable_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>
extern MethodInfo ICollection_1_get_Count_m42954_MethodInfo;
static PropertyInfo ICollection_1_t9164____Count_PropertyInfo = 
{
	&ICollection_1_t9164_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m42954_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m42955_MethodInfo;
static PropertyInfo ICollection_1_t9164____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9164_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m42955_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9164_PropertyInfos[] =
{
	&ICollection_1_t9164____Count_PropertyInfo,
	&ICollection_1_t9164____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m42954_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m42954_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9164_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m42954_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m42955_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m42955_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9164_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m42955_GenericMethod/* genericMethod */

};
extern Il2CppType ContractClassAttribute_t1050_0_0_0;
extern Il2CppType ContractClassAttribute_t1050_0_0_0;
static ParameterInfo ICollection_1_t9164_ICollection_1_Add_m42956_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractClassAttribute_t1050_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m42956_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::Add(T)
MethodInfo ICollection_1_Add_m42956_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9164_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9164_ICollection_1_Add_m42956_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m42956_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m42957_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::Clear()
MethodInfo ICollection_1_Clear_m42957_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9164_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m42957_GenericMethod/* genericMethod */

};
extern Il2CppType ContractClassAttribute_t1050_0_0_0;
static ParameterInfo ICollection_1_t9164_ICollection_1_Contains_m42958_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractClassAttribute_t1050_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m42958_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m42958_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9164_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9164_ICollection_1_Contains_m42958_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m42958_GenericMethod/* genericMethod */

};
extern Il2CppType ContractClassAttributeU5BU5D_t7070_0_0_0;
extern Il2CppType ContractClassAttributeU5BU5D_t7070_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9164_ICollection_1_CopyTo_m42959_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractClassAttributeU5BU5D_t7070_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m42959_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m42959_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9164_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9164_ICollection_1_CopyTo_m42959_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m42959_GenericMethod/* genericMethod */

};
extern Il2CppType ContractClassAttribute_t1050_0_0_0;
static ParameterInfo ICollection_1_t9164_ICollection_1_Remove_m42960_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractClassAttribute_t1050_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m42960_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m42960_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9164_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9164_ICollection_1_Remove_m42960_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m42960_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9164_MethodInfos[] =
{
	&ICollection_1_get_Count_m42954_MethodInfo,
	&ICollection_1_get_IsReadOnly_m42955_MethodInfo,
	&ICollection_1_Add_m42956_MethodInfo,
	&ICollection_1_Clear_m42957_MethodInfo,
	&ICollection_1_Contains_m42958_MethodInfo,
	&ICollection_1_CopyTo_m42959_MethodInfo,
	&ICollection_1_Remove_m42960_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9166_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9164_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9166_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9164_0_0_0;
extern Il2CppType ICollection_1_t9164_1_0_0;
struct ICollection_1_t9164;
extern Il2CppGenericClass ICollection_1_t9164_GenericClass;
TypeInfo ICollection_1_t9164_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9164_MethodInfos/* methods */
	, ICollection_1_t9164_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9164_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9164_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9164_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9164_0_0_0/* byval_arg */
	, &ICollection_1_t9164_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9164_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractClassAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractClassAttribute>
extern Il2CppType IEnumerator_1_t7687_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m42961_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractClassAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m42961_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9166_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7687_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m42961_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9166_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m42961_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9166_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9166_0_0_0;
extern Il2CppType IEnumerable_1_t9166_1_0_0;
struct IEnumerable_1_t9166;
extern Il2CppGenericClass IEnumerable_1_t9166_GenericClass;
TypeInfo IEnumerable_1_t9166_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9166_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9166_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9166_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9166_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9166_0_0_0/* byval_arg */
	, &IEnumerable_1_t9166_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9166_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9165_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassAttribute>
extern MethodInfo IList_1_get_Item_m42962_MethodInfo;
extern MethodInfo IList_1_set_Item_m42963_MethodInfo;
static PropertyInfo IList_1_t9165____Item_PropertyInfo = 
{
	&IList_1_t9165_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m42962_MethodInfo/* get */
	, &IList_1_set_Item_m42963_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9165_PropertyInfos[] =
{
	&IList_1_t9165____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContractClassAttribute_t1050_0_0_0;
static ParameterInfo IList_1_t9165_IList_1_IndexOf_m42964_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractClassAttribute_t1050_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m42964_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m42964_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9165_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9165_IList_1_IndexOf_m42964_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m42964_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractClassAttribute_t1050_0_0_0;
static ParameterInfo IList_1_t9165_IList_1_Insert_m42965_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContractClassAttribute_t1050_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m42965_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m42965_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9165_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9165_IList_1_Insert_m42965_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m42965_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9165_IList_1_RemoveAt_m42966_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m42966_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m42966_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9165_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9165_IList_1_RemoveAt_m42966_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m42966_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9165_IList_1_get_Item_m42962_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ContractClassAttribute_t1050_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m42962_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m42962_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9165_il2cpp_TypeInfo/* declaring_type */
	, &ContractClassAttribute_t1050_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9165_IList_1_get_Item_m42962_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m42962_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractClassAttribute_t1050_0_0_0;
static ParameterInfo IList_1_t9165_IList_1_set_Item_m42963_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContractClassAttribute_t1050_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m42963_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m42963_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9165_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9165_IList_1_set_Item_m42963_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m42963_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9165_MethodInfos[] =
{
	&IList_1_IndexOf_m42964_MethodInfo,
	&IList_1_Insert_m42965_MethodInfo,
	&IList_1_RemoveAt_m42966_MethodInfo,
	&IList_1_get_Item_m42962_MethodInfo,
	&IList_1_set_Item_m42963_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9165_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9164_il2cpp_TypeInfo,
	&IEnumerable_1_t9166_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9165_0_0_0;
extern Il2CppType IList_1_t9165_1_0_0;
struct IList_1_t9165;
extern Il2CppGenericClass IList_1_t9165_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9165_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9165_MethodInfos/* methods */
	, IList_1_t9165_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9165_il2cpp_TypeInfo/* element_class */
	, IList_1_t9165_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9165_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9165_0_0_0/* byval_arg */
	, &IList_1_t9165_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9165_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7689_il2cpp_TypeInfo;

// System.Diagnostics.Contracts.ContractClassForAttribute
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_1.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>
extern MethodInfo IEnumerator_1_get_Current_m42967_MethodInfo;
static PropertyInfo IEnumerator_1_t7689____Current_PropertyInfo = 
{
	&IEnumerator_1_t7689_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m42967_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7689_PropertyInfos[] =
{
	&IEnumerator_1_t7689____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContractClassForAttribute_t1051_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m42967_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m42967_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7689_il2cpp_TypeInfo/* declaring_type */
	, &ContractClassForAttribute_t1051_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m42967_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7689_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m42967_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7689_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7689_0_0_0;
extern Il2CppType IEnumerator_1_t7689_1_0_0;
struct IEnumerator_1_t7689;
extern Il2CppGenericClass IEnumerator_1_t7689_GenericClass;
TypeInfo IEnumerator_1_t7689_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7689_MethodInfos/* methods */
	, IEnumerator_1_t7689_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7689_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7689_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7689_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7689_0_0_0/* byval_arg */
	, &IEnumerator_1_t7689_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7689_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_260.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5847_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_260MethodDeclarations.h"

extern TypeInfo ContractClassForAttribute_t1051_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25026_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContractClassForAttribute_t1051_m34040_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractClassForAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractClassForAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisContractClassForAttribute_t1051_m34040(__this, p0, method) (ContractClassForAttribute_t1051 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5847____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5847_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5847, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5847____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5847_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5847, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5847_FieldInfos[] =
{
	&InternalEnumerator_1_t5847____array_0_FieldInfo,
	&InternalEnumerator_1_t5847____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25023_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5847____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5847_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25023_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5847____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5847_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25026_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5847_PropertyInfos[] =
{
	&InternalEnumerator_1_t5847____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5847____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5847_InternalEnumerator_1__ctor_m25021_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25021_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25021_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5847_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5847_InternalEnumerator_1__ctor_m25021_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25021_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25022_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25022_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5847_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25022_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25023_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25023_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5847_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25023_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25024_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25024_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5847_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25024_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25025_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25025_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5847_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25025_GenericMethod/* genericMethod */

};
extern Il2CppType ContractClassForAttribute_t1051_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25026_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractClassForAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25026_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5847_il2cpp_TypeInfo/* declaring_type */
	, &ContractClassForAttribute_t1051_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25026_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5847_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25021_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25022_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25023_MethodInfo,
	&InternalEnumerator_1_Dispose_m25024_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25025_MethodInfo,
	&InternalEnumerator_1_get_Current_m25026_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25025_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25022_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25024_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5847_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25023_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25025_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25022_MethodInfo,
	&InternalEnumerator_1_Dispose_m25024_MethodInfo,
	&InternalEnumerator_1_get_Current_m25026_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5847_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7689_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5847_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7689_il2cpp_TypeInfo, 8},
};
extern TypeInfo ContractClassForAttribute_t1051_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5847_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25026_MethodInfo/* Method Usage */,
	&ContractClassForAttribute_t1051_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContractClassForAttribute_t1051_m34040_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5847_0_0_0;
extern Il2CppType InternalEnumerator_1_t5847_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5847_GenericClass;
TypeInfo InternalEnumerator_1_t5847_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5847_MethodInfos/* methods */
	, InternalEnumerator_1_t5847_PropertyInfos/* properties */
	, InternalEnumerator_1_t5847_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5847_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5847_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5847_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5847_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5847_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5847_1_0_0/* this_arg */
	, InternalEnumerator_1_t5847_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5847_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5847_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5847)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9167_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>
extern MethodInfo ICollection_1_get_Count_m42968_MethodInfo;
static PropertyInfo ICollection_1_t9167____Count_PropertyInfo = 
{
	&ICollection_1_t9167_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m42968_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m42969_MethodInfo;
static PropertyInfo ICollection_1_t9167____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9167_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m42969_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9167_PropertyInfos[] =
{
	&ICollection_1_t9167____Count_PropertyInfo,
	&ICollection_1_t9167____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m42968_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m42968_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9167_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m42968_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m42969_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m42969_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9167_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m42969_GenericMethod/* genericMethod */

};
extern Il2CppType ContractClassForAttribute_t1051_0_0_0;
extern Il2CppType ContractClassForAttribute_t1051_0_0_0;
static ParameterInfo ICollection_1_t9167_ICollection_1_Add_m42970_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractClassForAttribute_t1051_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m42970_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::Add(T)
MethodInfo ICollection_1_Add_m42970_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9167_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9167_ICollection_1_Add_m42970_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m42970_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m42971_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::Clear()
MethodInfo ICollection_1_Clear_m42971_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9167_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m42971_GenericMethod/* genericMethod */

};
extern Il2CppType ContractClassForAttribute_t1051_0_0_0;
static ParameterInfo ICollection_1_t9167_ICollection_1_Contains_m42972_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractClassForAttribute_t1051_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m42972_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m42972_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9167_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9167_ICollection_1_Contains_m42972_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m42972_GenericMethod/* genericMethod */

};
extern Il2CppType ContractClassForAttributeU5BU5D_t7071_0_0_0;
extern Il2CppType ContractClassForAttributeU5BU5D_t7071_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9167_ICollection_1_CopyTo_m42973_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractClassForAttributeU5BU5D_t7071_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m42973_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m42973_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9167_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9167_ICollection_1_CopyTo_m42973_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m42973_GenericMethod/* genericMethod */

};
extern Il2CppType ContractClassForAttribute_t1051_0_0_0;
static ParameterInfo ICollection_1_t9167_ICollection_1_Remove_m42974_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractClassForAttribute_t1051_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m42974_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractClassForAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m42974_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9167_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9167_ICollection_1_Remove_m42974_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m42974_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9167_MethodInfos[] =
{
	&ICollection_1_get_Count_m42968_MethodInfo,
	&ICollection_1_get_IsReadOnly_m42969_MethodInfo,
	&ICollection_1_Add_m42970_MethodInfo,
	&ICollection_1_Clear_m42971_MethodInfo,
	&ICollection_1_Contains_m42972_MethodInfo,
	&ICollection_1_CopyTo_m42973_MethodInfo,
	&ICollection_1_Remove_m42974_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9169_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9167_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9169_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9167_0_0_0;
extern Il2CppType ICollection_1_t9167_1_0_0;
struct ICollection_1_t9167;
extern Il2CppGenericClass ICollection_1_t9167_GenericClass;
TypeInfo ICollection_1_t9167_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9167_MethodInfos/* methods */
	, ICollection_1_t9167_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9167_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9167_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9167_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9167_0_0_0/* byval_arg */
	, &ICollection_1_t9167_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9167_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractClassForAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractClassForAttribute>
extern Il2CppType IEnumerator_1_t7689_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m42975_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractClassForAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m42975_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9169_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7689_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m42975_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9169_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m42975_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9169_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9169_0_0_0;
extern Il2CppType IEnumerable_1_t9169_1_0_0;
struct IEnumerable_1_t9169;
extern Il2CppGenericClass IEnumerable_1_t9169_GenericClass;
TypeInfo IEnumerable_1_t9169_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9169_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9169_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9169_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9169_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9169_0_0_0/* byval_arg */
	, &IEnumerable_1_t9169_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9169_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9168_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassForAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassForAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassForAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassForAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassForAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassForAttribute>
extern MethodInfo IList_1_get_Item_m42976_MethodInfo;
extern MethodInfo IList_1_set_Item_m42977_MethodInfo;
static PropertyInfo IList_1_t9168____Item_PropertyInfo = 
{
	&IList_1_t9168_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m42976_MethodInfo/* get */
	, &IList_1_set_Item_m42977_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9168_PropertyInfos[] =
{
	&IList_1_t9168____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContractClassForAttribute_t1051_0_0_0;
static ParameterInfo IList_1_t9168_IList_1_IndexOf_m42978_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractClassForAttribute_t1051_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m42978_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassForAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m42978_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9168_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9168_IList_1_IndexOf_m42978_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m42978_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractClassForAttribute_t1051_0_0_0;
static ParameterInfo IList_1_t9168_IList_1_Insert_m42979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContractClassForAttribute_t1051_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m42979_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassForAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m42979_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9168_IList_1_Insert_m42979_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m42979_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9168_IList_1_RemoveAt_m42980_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m42980_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassForAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m42980_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9168_IList_1_RemoveAt_m42980_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m42980_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9168_IList_1_get_Item_m42976_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ContractClassForAttribute_t1051_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m42976_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassForAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m42976_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9168_il2cpp_TypeInfo/* declaring_type */
	, &ContractClassForAttribute_t1051_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9168_IList_1_get_Item_m42976_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m42976_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractClassForAttribute_t1051_0_0_0;
static ParameterInfo IList_1_t9168_IList_1_set_Item_m42977_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContractClassForAttribute_t1051_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m42977_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractClassForAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m42977_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9168_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9168_IList_1_set_Item_m42977_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m42977_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9168_MethodInfos[] =
{
	&IList_1_IndexOf_m42978_MethodInfo,
	&IList_1_Insert_m42979_MethodInfo,
	&IList_1_RemoveAt_m42980_MethodInfo,
	&IList_1_get_Item_m42976_MethodInfo,
	&IList_1_set_Item_m42977_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9168_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9167_il2cpp_TypeInfo,
	&IEnumerable_1_t9169_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9168_0_0_0;
extern Il2CppType IList_1_t9168_1_0_0;
struct IList_1_t9168;
extern Il2CppGenericClass IList_1_t9168_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9168_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9168_MethodInfos/* methods */
	, IList_1_t9168_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9168_il2cpp_TypeInfo/* element_class */
	, IList_1_t9168_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9168_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9168_0_0_0/* byval_arg */
	, &IList_1_t9168_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9168_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7691_il2cpp_TypeInfo;

// System.Diagnostics.Contracts.ContractInvariantMethodAttribute
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_2.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>
extern MethodInfo IEnumerator_1_get_Current_m42981_MethodInfo;
static PropertyInfo IEnumerator_1_t7691____Current_PropertyInfo = 
{
	&IEnumerator_1_t7691_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m42981_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7691_PropertyInfos[] =
{
	&IEnumerator_1_t7691____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContractInvariantMethodAttribute_t1052_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m42981_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m42981_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7691_il2cpp_TypeInfo/* declaring_type */
	, &ContractInvariantMethodAttribute_t1052_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m42981_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7691_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m42981_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7691_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7691_0_0_0;
extern Il2CppType IEnumerator_1_t7691_1_0_0;
struct IEnumerator_1_t7691;
extern Il2CppGenericClass IEnumerator_1_t7691_GenericClass;
TypeInfo IEnumerator_1_t7691_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7691_MethodInfos/* methods */
	, IEnumerator_1_t7691_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7691_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7691_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7691_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7691_0_0_0/* byval_arg */
	, &IEnumerator_1_t7691_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7691_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_261.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5848_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_261MethodDeclarations.h"

extern TypeInfo ContractInvariantMethodAttribute_t1052_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25032_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContractInvariantMethodAttribute_t1052_m34051_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisContractInvariantMethodAttribute_t1052_m34051(__this, p0, method) (ContractInvariantMethodAttribute_t1052 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5848____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5848_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5848, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5848____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5848_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5848, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5848_FieldInfos[] =
{
	&InternalEnumerator_1_t5848____array_0_FieldInfo,
	&InternalEnumerator_1_t5848____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25029_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5848____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5848_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25029_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5848____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5848_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25032_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5848_PropertyInfos[] =
{
	&InternalEnumerator_1_t5848____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5848____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5848_InternalEnumerator_1__ctor_m25027_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25027_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25027_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5848_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5848_InternalEnumerator_1__ctor_m25027_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25027_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25028_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25028_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5848_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25028_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25029_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25029_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5848_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25029_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25030_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25030_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5848_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25030_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25031_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25031_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5848_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25031_GenericMethod/* genericMethod */

};
extern Il2CppType ContractInvariantMethodAttribute_t1052_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25032_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25032_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5848_il2cpp_TypeInfo/* declaring_type */
	, &ContractInvariantMethodAttribute_t1052_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25032_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5848_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25027_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25028_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25029_MethodInfo,
	&InternalEnumerator_1_Dispose_m25030_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25031_MethodInfo,
	&InternalEnumerator_1_get_Current_m25032_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25031_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25028_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25030_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5848_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25029_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25031_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25028_MethodInfo,
	&InternalEnumerator_1_Dispose_m25030_MethodInfo,
	&InternalEnumerator_1_get_Current_m25032_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5848_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7691_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5848_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7691_il2cpp_TypeInfo, 8},
};
extern TypeInfo ContractInvariantMethodAttribute_t1052_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5848_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25032_MethodInfo/* Method Usage */,
	&ContractInvariantMethodAttribute_t1052_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContractInvariantMethodAttribute_t1052_m34051_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5848_0_0_0;
extern Il2CppType InternalEnumerator_1_t5848_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5848_GenericClass;
TypeInfo InternalEnumerator_1_t5848_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5848_MethodInfos/* methods */
	, InternalEnumerator_1_t5848_PropertyInfos/* properties */
	, InternalEnumerator_1_t5848_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5848_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5848_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5848_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5848_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5848_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5848_1_0_0/* this_arg */
	, InternalEnumerator_1_t5848_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5848_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5848_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5848)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9170_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>
extern MethodInfo ICollection_1_get_Count_m42982_MethodInfo;
static PropertyInfo ICollection_1_t9170____Count_PropertyInfo = 
{
	&ICollection_1_t9170_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m42982_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m42983_MethodInfo;
static PropertyInfo ICollection_1_t9170____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9170_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m42983_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9170_PropertyInfos[] =
{
	&ICollection_1_t9170____Count_PropertyInfo,
	&ICollection_1_t9170____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m42982_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m42982_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9170_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m42982_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m42983_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m42983_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9170_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m42983_GenericMethod/* genericMethod */

};
extern Il2CppType ContractInvariantMethodAttribute_t1052_0_0_0;
extern Il2CppType ContractInvariantMethodAttribute_t1052_0_0_0;
static ParameterInfo ICollection_1_t9170_ICollection_1_Add_m42984_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractInvariantMethodAttribute_t1052_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m42984_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::Add(T)
MethodInfo ICollection_1_Add_m42984_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9170_ICollection_1_Add_m42984_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m42984_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m42985_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::Clear()
MethodInfo ICollection_1_Clear_m42985_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9170_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m42985_GenericMethod/* genericMethod */

};
extern Il2CppType ContractInvariantMethodAttribute_t1052_0_0_0;
static ParameterInfo ICollection_1_t9170_ICollection_1_Contains_m42986_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractInvariantMethodAttribute_t1052_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m42986_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m42986_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9170_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9170_ICollection_1_Contains_m42986_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m42986_GenericMethod/* genericMethod */

};
extern Il2CppType ContractInvariantMethodAttributeU5BU5D_t7072_0_0_0;
extern Il2CppType ContractInvariantMethodAttributeU5BU5D_t7072_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9170_ICollection_1_CopyTo_m42987_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractInvariantMethodAttributeU5BU5D_t7072_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m42987_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m42987_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9170_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9170_ICollection_1_CopyTo_m42987_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m42987_GenericMethod/* genericMethod */

};
extern Il2CppType ContractInvariantMethodAttribute_t1052_0_0_0;
static ParameterInfo ICollection_1_t9170_ICollection_1_Remove_m42988_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractInvariantMethodAttribute_t1052_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m42988_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m42988_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9170_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9170_ICollection_1_Remove_m42988_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m42988_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9170_MethodInfos[] =
{
	&ICollection_1_get_Count_m42982_MethodInfo,
	&ICollection_1_get_IsReadOnly_m42983_MethodInfo,
	&ICollection_1_Add_m42984_MethodInfo,
	&ICollection_1_Clear_m42985_MethodInfo,
	&ICollection_1_Contains_m42986_MethodInfo,
	&ICollection_1_CopyTo_m42987_MethodInfo,
	&ICollection_1_Remove_m42988_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9172_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9170_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9172_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9170_0_0_0;
extern Il2CppType ICollection_1_t9170_1_0_0;
struct ICollection_1_t9170;
extern Il2CppGenericClass ICollection_1_t9170_GenericClass;
TypeInfo ICollection_1_t9170_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9170_MethodInfos/* methods */
	, ICollection_1_t9170_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9170_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9170_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9170_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9170_0_0_0/* byval_arg */
	, &ICollection_1_t9170_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9170_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>
extern Il2CppType IEnumerator_1_t7691_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m42989_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m42989_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9172_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7691_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m42989_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9172_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m42989_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9172_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9172_0_0_0;
extern Il2CppType IEnumerable_1_t9172_1_0_0;
struct IEnumerable_1_t9172;
extern Il2CppGenericClass IEnumerable_1_t9172_GenericClass;
TypeInfo IEnumerable_1_t9172_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9172_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9172_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9172_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9172_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9172_0_0_0/* byval_arg */
	, &IEnumerable_1_t9172_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9172_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9171_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>
extern MethodInfo IList_1_get_Item_m42990_MethodInfo;
extern MethodInfo IList_1_set_Item_m42991_MethodInfo;
static PropertyInfo IList_1_t9171____Item_PropertyInfo = 
{
	&IList_1_t9171_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m42990_MethodInfo/* get */
	, &IList_1_set_Item_m42991_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9171_PropertyInfos[] =
{
	&IList_1_t9171____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContractInvariantMethodAttribute_t1052_0_0_0;
static ParameterInfo IList_1_t9171_IList_1_IndexOf_m42992_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractInvariantMethodAttribute_t1052_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m42992_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m42992_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9171_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9171_IList_1_IndexOf_m42992_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m42992_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractInvariantMethodAttribute_t1052_0_0_0;
static ParameterInfo IList_1_t9171_IList_1_Insert_m42993_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContractInvariantMethodAttribute_t1052_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m42993_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m42993_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9171_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9171_IList_1_Insert_m42993_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m42993_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9171_IList_1_RemoveAt_m42994_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m42994_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m42994_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9171_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9171_IList_1_RemoveAt_m42994_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m42994_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9171_IList_1_get_Item_m42990_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ContractInvariantMethodAttribute_t1052_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m42990_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m42990_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9171_il2cpp_TypeInfo/* declaring_type */
	, &ContractInvariantMethodAttribute_t1052_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9171_IList_1_get_Item_m42990_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m42990_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractInvariantMethodAttribute_t1052_0_0_0;
static ParameterInfo IList_1_t9171_IList_1_set_Item_m42991_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContractInvariantMethodAttribute_t1052_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m42991_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractInvariantMethodAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m42991_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9171_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9171_IList_1_set_Item_m42991_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m42991_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9171_MethodInfos[] =
{
	&IList_1_IndexOf_m42992_MethodInfo,
	&IList_1_Insert_m42993_MethodInfo,
	&IList_1_RemoveAt_m42994_MethodInfo,
	&IList_1_get_Item_m42990_MethodInfo,
	&IList_1_set_Item_m42991_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9171_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9170_il2cpp_TypeInfo,
	&IEnumerable_1_t9172_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9171_0_0_0;
extern Il2CppType IList_1_t9171_1_0_0;
struct IList_1_t9171;
extern Il2CppGenericClass IList_1_t9171_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9171_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9171_MethodInfos/* methods */
	, IList_1_t9171_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9171_il2cpp_TypeInfo/* element_class */
	, IList_1_t9171_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9171_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9171_0_0_0/* byval_arg */
	, &IList_1_t9171_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9171_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7693_il2cpp_TypeInfo;

// System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_3.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>
extern MethodInfo IEnumerator_1_get_Current_m42995_MethodInfo;
static PropertyInfo IEnumerator_1_t7693____Current_PropertyInfo = 
{
	&IEnumerator_1_t7693_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m42995_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7693_PropertyInfos[] =
{
	&IEnumerator_1_t7693____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContractReferenceAssemblyAttribute_t1053_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m42995_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m42995_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7693_il2cpp_TypeInfo/* declaring_type */
	, &ContractReferenceAssemblyAttribute_t1053_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m42995_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7693_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m42995_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7693_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7693_0_0_0;
extern Il2CppType IEnumerator_1_t7693_1_0_0;
struct IEnumerator_1_t7693;
extern Il2CppGenericClass IEnumerator_1_t7693_GenericClass;
TypeInfo IEnumerator_1_t7693_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7693_MethodInfos/* methods */
	, IEnumerator_1_t7693_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7693_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7693_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7693_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7693_0_0_0/* byval_arg */
	, &IEnumerator_1_t7693_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7693_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_262.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5849_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_262MethodDeclarations.h"

extern TypeInfo ContractReferenceAssemblyAttribute_t1053_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25038_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContractReferenceAssemblyAttribute_t1053_m34062_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisContractReferenceAssemblyAttribute_t1053_m34062(__this, p0, method) (ContractReferenceAssemblyAttribute_t1053 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5849____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5849_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5849, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5849____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5849_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5849, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5849_FieldInfos[] =
{
	&InternalEnumerator_1_t5849____array_0_FieldInfo,
	&InternalEnumerator_1_t5849____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25035_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5849____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5849_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25035_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5849____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5849_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25038_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5849_PropertyInfos[] =
{
	&InternalEnumerator_1_t5849____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5849____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5849_InternalEnumerator_1__ctor_m25033_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25033_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25033_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5849_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5849_InternalEnumerator_1__ctor_m25033_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25033_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25034_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25034_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5849_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25034_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25035_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25035_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5849_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25035_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25036_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25036_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5849_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25036_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25037_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25037_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5849_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25037_GenericMethod/* genericMethod */

};
extern Il2CppType ContractReferenceAssemblyAttribute_t1053_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25038_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25038_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5849_il2cpp_TypeInfo/* declaring_type */
	, &ContractReferenceAssemblyAttribute_t1053_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25038_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5849_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25033_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25034_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25035_MethodInfo,
	&InternalEnumerator_1_Dispose_m25036_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25037_MethodInfo,
	&InternalEnumerator_1_get_Current_m25038_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25037_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25034_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25036_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5849_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25035_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25037_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25034_MethodInfo,
	&InternalEnumerator_1_Dispose_m25036_MethodInfo,
	&InternalEnumerator_1_get_Current_m25038_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5849_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7693_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5849_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7693_il2cpp_TypeInfo, 8},
};
extern TypeInfo ContractReferenceAssemblyAttribute_t1053_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5849_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25038_MethodInfo/* Method Usage */,
	&ContractReferenceAssemblyAttribute_t1053_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContractReferenceAssemblyAttribute_t1053_m34062_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5849_0_0_0;
extern Il2CppType InternalEnumerator_1_t5849_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5849_GenericClass;
TypeInfo InternalEnumerator_1_t5849_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5849_MethodInfos/* methods */
	, InternalEnumerator_1_t5849_PropertyInfos/* properties */
	, InternalEnumerator_1_t5849_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5849_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5849_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5849_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5849_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5849_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5849_1_0_0/* this_arg */
	, InternalEnumerator_1_t5849_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5849_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5849_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5849)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9173_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>
extern MethodInfo ICollection_1_get_Count_m42996_MethodInfo;
static PropertyInfo ICollection_1_t9173____Count_PropertyInfo = 
{
	&ICollection_1_t9173_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m42996_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m42997_MethodInfo;
static PropertyInfo ICollection_1_t9173____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9173_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m42997_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9173_PropertyInfos[] =
{
	&ICollection_1_t9173____Count_PropertyInfo,
	&ICollection_1_t9173____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m42996_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m42996_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9173_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m42996_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m42997_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m42997_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9173_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m42997_GenericMethod/* genericMethod */

};
extern Il2CppType ContractReferenceAssemblyAttribute_t1053_0_0_0;
extern Il2CppType ContractReferenceAssemblyAttribute_t1053_0_0_0;
static ParameterInfo ICollection_1_t9173_ICollection_1_Add_m42998_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractReferenceAssemblyAttribute_t1053_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m42998_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::Add(T)
MethodInfo ICollection_1_Add_m42998_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9173_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9173_ICollection_1_Add_m42998_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m42998_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m42999_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::Clear()
MethodInfo ICollection_1_Clear_m42999_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9173_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m42999_GenericMethod/* genericMethod */

};
extern Il2CppType ContractReferenceAssemblyAttribute_t1053_0_0_0;
static ParameterInfo ICollection_1_t9173_ICollection_1_Contains_m43000_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractReferenceAssemblyAttribute_t1053_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43000_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m43000_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9173_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9173_ICollection_1_Contains_m43000_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43000_GenericMethod/* genericMethod */

};
extern Il2CppType ContractReferenceAssemblyAttributeU5BU5D_t7073_0_0_0;
extern Il2CppType ContractReferenceAssemblyAttributeU5BU5D_t7073_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9173_ICollection_1_CopyTo_m43001_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractReferenceAssemblyAttributeU5BU5D_t7073_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43001_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43001_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9173_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9173_ICollection_1_CopyTo_m43001_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43001_GenericMethod/* genericMethod */

};
extern Il2CppType ContractReferenceAssemblyAttribute_t1053_0_0_0;
static ParameterInfo ICollection_1_t9173_ICollection_1_Remove_m43002_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractReferenceAssemblyAttribute_t1053_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43002_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m43002_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9173_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9173_ICollection_1_Remove_m43002_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43002_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9173_MethodInfos[] =
{
	&ICollection_1_get_Count_m42996_MethodInfo,
	&ICollection_1_get_IsReadOnly_m42997_MethodInfo,
	&ICollection_1_Add_m42998_MethodInfo,
	&ICollection_1_Clear_m42999_MethodInfo,
	&ICollection_1_Contains_m43000_MethodInfo,
	&ICollection_1_CopyTo_m43001_MethodInfo,
	&ICollection_1_Remove_m43002_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9175_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9173_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9175_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9173_0_0_0;
extern Il2CppType ICollection_1_t9173_1_0_0;
struct ICollection_1_t9173;
extern Il2CppGenericClass ICollection_1_t9173_GenericClass;
TypeInfo ICollection_1_t9173_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9173_MethodInfos/* methods */
	, ICollection_1_t9173_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9173_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9173_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9173_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9173_0_0_0/* byval_arg */
	, &ICollection_1_t9173_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9173_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>
extern Il2CppType IEnumerator_1_t7693_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43003_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43003_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9175_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7693_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43003_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9175_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43003_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9175_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9175_0_0_0;
extern Il2CppType IEnumerable_1_t9175_1_0_0;
struct IEnumerable_1_t9175;
extern Il2CppGenericClass IEnumerable_1_t9175_GenericClass;
TypeInfo IEnumerable_1_t9175_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9175_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9175_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9175_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9175_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9175_0_0_0/* byval_arg */
	, &IEnumerable_1_t9175_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9175_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9174_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>
extern MethodInfo IList_1_get_Item_m43004_MethodInfo;
extern MethodInfo IList_1_set_Item_m43005_MethodInfo;
static PropertyInfo IList_1_t9174____Item_PropertyInfo = 
{
	&IList_1_t9174_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43004_MethodInfo/* get */
	, &IList_1_set_Item_m43005_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9174_PropertyInfos[] =
{
	&IList_1_t9174____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContractReferenceAssemblyAttribute_t1053_0_0_0;
static ParameterInfo IList_1_t9174_IList_1_IndexOf_m43006_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractReferenceAssemblyAttribute_t1053_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43006_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43006_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9174_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9174_IList_1_IndexOf_m43006_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43006_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractReferenceAssemblyAttribute_t1053_0_0_0;
static ParameterInfo IList_1_t9174_IList_1_Insert_m43007_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContractReferenceAssemblyAttribute_t1053_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43007_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43007_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9174_IList_1_Insert_m43007_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43007_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9174_IList_1_RemoveAt_m43008_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43008_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43008_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9174_IList_1_RemoveAt_m43008_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43008_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9174_IList_1_get_Item_m43004_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ContractReferenceAssemblyAttribute_t1053_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43004_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43004_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9174_il2cpp_TypeInfo/* declaring_type */
	, &ContractReferenceAssemblyAttribute_t1053_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9174_IList_1_get_Item_m43004_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43004_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractReferenceAssemblyAttribute_t1053_0_0_0;
static ParameterInfo IList_1_t9174_IList_1_set_Item_m43005_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContractReferenceAssemblyAttribute_t1053_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43005_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractReferenceAssemblyAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43005_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9174_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9174_IList_1_set_Item_m43005_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43005_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9174_MethodInfos[] =
{
	&IList_1_IndexOf_m43006_MethodInfo,
	&IList_1_Insert_m43007_MethodInfo,
	&IList_1_RemoveAt_m43008_MethodInfo,
	&IList_1_get_Item_m43004_MethodInfo,
	&IList_1_set_Item_m43005_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9174_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9173_il2cpp_TypeInfo,
	&IEnumerable_1_t9175_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9174_0_0_0;
extern Il2CppType IList_1_t9174_1_0_0;
struct IList_1_t9174;
extern Il2CppGenericClass IList_1_t9174_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9174_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9174_MethodInfos/* methods */
	, IList_1_t9174_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9174_il2cpp_TypeInfo/* element_class */
	, IList_1_t9174_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9174_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9174_0_0_0/* byval_arg */
	, &IList_1_t9174_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9174_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7695_il2cpp_TypeInfo;

// System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_4.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>
extern MethodInfo IEnumerator_1_get_Current_m43009_MethodInfo;
static PropertyInfo IEnumerator_1_t7695____Current_PropertyInfo = 
{
	&IEnumerator_1_t7695_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43009_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7695_PropertyInfos[] =
{
	&IEnumerator_1_t7695____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContractRuntimeIgnoredAttribute_t1054_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43009_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43009_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7695_il2cpp_TypeInfo/* declaring_type */
	, &ContractRuntimeIgnoredAttribute_t1054_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43009_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7695_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43009_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7695_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7695_0_0_0;
extern Il2CppType IEnumerator_1_t7695_1_0_0;
struct IEnumerator_1_t7695;
extern Il2CppGenericClass IEnumerator_1_t7695_GenericClass;
TypeInfo IEnumerator_1_t7695_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7695_MethodInfos/* methods */
	, IEnumerator_1_t7695_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7695_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7695_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7695_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7695_0_0_0/* byval_arg */
	, &IEnumerator_1_t7695_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7695_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_263.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5850_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_263MethodDeclarations.h"

extern TypeInfo ContractRuntimeIgnoredAttribute_t1054_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25044_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContractRuntimeIgnoredAttribute_t1054_m34073_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisContractRuntimeIgnoredAttribute_t1054_m34073(__this, p0, method) (ContractRuntimeIgnoredAttribute_t1054 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5850____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5850_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5850, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5850____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5850_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5850, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5850_FieldInfos[] =
{
	&InternalEnumerator_1_t5850____array_0_FieldInfo,
	&InternalEnumerator_1_t5850____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25041_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5850____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5850_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25041_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5850____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5850_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25044_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5850_PropertyInfos[] =
{
	&InternalEnumerator_1_t5850____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5850____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5850_InternalEnumerator_1__ctor_m25039_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25039_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25039_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5850_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5850_InternalEnumerator_1__ctor_m25039_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25039_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25040_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25040_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5850_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25040_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25041_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25041_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5850_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25041_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25042_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25042_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5850_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25042_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25043_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25043_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5850_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25043_GenericMethod/* genericMethod */

};
extern Il2CppType ContractRuntimeIgnoredAttribute_t1054_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25044_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25044_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5850_il2cpp_TypeInfo/* declaring_type */
	, &ContractRuntimeIgnoredAttribute_t1054_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25044_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5850_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25039_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25040_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25041_MethodInfo,
	&InternalEnumerator_1_Dispose_m25042_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25043_MethodInfo,
	&InternalEnumerator_1_get_Current_m25044_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25043_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25040_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25042_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5850_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25041_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25043_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25040_MethodInfo,
	&InternalEnumerator_1_Dispose_m25042_MethodInfo,
	&InternalEnumerator_1_get_Current_m25044_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5850_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7695_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5850_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7695_il2cpp_TypeInfo, 8},
};
extern TypeInfo ContractRuntimeIgnoredAttribute_t1054_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5850_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25044_MethodInfo/* Method Usage */,
	&ContractRuntimeIgnoredAttribute_t1054_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContractRuntimeIgnoredAttribute_t1054_m34073_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5850_0_0_0;
extern Il2CppType InternalEnumerator_1_t5850_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5850_GenericClass;
TypeInfo InternalEnumerator_1_t5850_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5850_MethodInfos/* methods */
	, InternalEnumerator_1_t5850_PropertyInfos/* properties */
	, InternalEnumerator_1_t5850_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5850_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5850_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5850_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5850_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5850_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5850_1_0_0/* this_arg */
	, InternalEnumerator_1_t5850_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5850_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5850_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5850)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9176_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>
extern MethodInfo ICollection_1_get_Count_m43010_MethodInfo;
static PropertyInfo ICollection_1_t9176____Count_PropertyInfo = 
{
	&ICollection_1_t9176_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43010_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43011_MethodInfo;
static PropertyInfo ICollection_1_t9176____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9176_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43011_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9176_PropertyInfos[] =
{
	&ICollection_1_t9176____Count_PropertyInfo,
	&ICollection_1_t9176____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43010_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m43010_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9176_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43010_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43011_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43011_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9176_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43011_GenericMethod/* genericMethod */

};
extern Il2CppType ContractRuntimeIgnoredAttribute_t1054_0_0_0;
extern Il2CppType ContractRuntimeIgnoredAttribute_t1054_0_0_0;
static ParameterInfo ICollection_1_t9176_ICollection_1_Add_m43012_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractRuntimeIgnoredAttribute_t1054_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43012_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::Add(T)
MethodInfo ICollection_1_Add_m43012_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9176_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9176_ICollection_1_Add_m43012_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43012_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43013_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::Clear()
MethodInfo ICollection_1_Clear_m43013_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9176_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43013_GenericMethod/* genericMethod */

};
extern Il2CppType ContractRuntimeIgnoredAttribute_t1054_0_0_0;
static ParameterInfo ICollection_1_t9176_ICollection_1_Contains_m43014_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractRuntimeIgnoredAttribute_t1054_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43014_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m43014_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9176_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9176_ICollection_1_Contains_m43014_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43014_GenericMethod/* genericMethod */

};
extern Il2CppType ContractRuntimeIgnoredAttributeU5BU5D_t7074_0_0_0;
extern Il2CppType ContractRuntimeIgnoredAttributeU5BU5D_t7074_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9176_ICollection_1_CopyTo_m43015_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractRuntimeIgnoredAttributeU5BU5D_t7074_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43015_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43015_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9176_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9176_ICollection_1_CopyTo_m43015_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43015_GenericMethod/* genericMethod */

};
extern Il2CppType ContractRuntimeIgnoredAttribute_t1054_0_0_0;
static ParameterInfo ICollection_1_t9176_ICollection_1_Remove_m43016_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractRuntimeIgnoredAttribute_t1054_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43016_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m43016_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9176_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9176_ICollection_1_Remove_m43016_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43016_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9176_MethodInfos[] =
{
	&ICollection_1_get_Count_m43010_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43011_MethodInfo,
	&ICollection_1_Add_m43012_MethodInfo,
	&ICollection_1_Clear_m43013_MethodInfo,
	&ICollection_1_Contains_m43014_MethodInfo,
	&ICollection_1_CopyTo_m43015_MethodInfo,
	&ICollection_1_Remove_m43016_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9178_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9176_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9178_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9176_0_0_0;
extern Il2CppType ICollection_1_t9176_1_0_0;
struct ICollection_1_t9176;
extern Il2CppGenericClass ICollection_1_t9176_GenericClass;
TypeInfo ICollection_1_t9176_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9176_MethodInfos/* methods */
	, ICollection_1_t9176_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9176_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9176_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9176_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9176_0_0_0/* byval_arg */
	, &ICollection_1_t9176_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9176_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>
extern Il2CppType IEnumerator_1_t7695_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43017_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43017_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9178_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7695_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43017_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9178_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43017_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9178_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9178_0_0_0;
extern Il2CppType IEnumerable_1_t9178_1_0_0;
struct IEnumerable_1_t9178;
extern Il2CppGenericClass IEnumerable_1_t9178_GenericClass;
TypeInfo IEnumerable_1_t9178_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9178_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9178_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9178_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9178_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9178_0_0_0/* byval_arg */
	, &IEnumerable_1_t9178_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9178_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9177_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>
extern MethodInfo IList_1_get_Item_m43018_MethodInfo;
extern MethodInfo IList_1_set_Item_m43019_MethodInfo;
static PropertyInfo IList_1_t9177____Item_PropertyInfo = 
{
	&IList_1_t9177_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43018_MethodInfo/* get */
	, &IList_1_set_Item_m43019_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9177_PropertyInfos[] =
{
	&IList_1_t9177____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContractRuntimeIgnoredAttribute_t1054_0_0_0;
static ParameterInfo IList_1_t9177_IList_1_IndexOf_m43020_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractRuntimeIgnoredAttribute_t1054_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43020_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43020_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9177_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9177_IList_1_IndexOf_m43020_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43020_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractRuntimeIgnoredAttribute_t1054_0_0_0;
static ParameterInfo IList_1_t9177_IList_1_Insert_m43021_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContractRuntimeIgnoredAttribute_t1054_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43021_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43021_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9177_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9177_IList_1_Insert_m43021_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43021_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9177_IList_1_RemoveAt_m43022_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43022_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43022_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9177_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9177_IList_1_RemoveAt_m43022_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43022_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9177_IList_1_get_Item_m43018_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ContractRuntimeIgnoredAttribute_t1054_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43018_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43018_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9177_il2cpp_TypeInfo/* declaring_type */
	, &ContractRuntimeIgnoredAttribute_t1054_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9177_IList_1_get_Item_m43018_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43018_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractRuntimeIgnoredAttribute_t1054_0_0_0;
static ParameterInfo IList_1_t9177_IList_1_set_Item_m43019_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContractRuntimeIgnoredAttribute_t1054_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43019_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractRuntimeIgnoredAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43019_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9177_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9177_IList_1_set_Item_m43019_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43019_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9177_MethodInfos[] =
{
	&IList_1_IndexOf_m43020_MethodInfo,
	&IList_1_Insert_m43021_MethodInfo,
	&IList_1_RemoveAt_m43022_MethodInfo,
	&IList_1_get_Item_m43018_MethodInfo,
	&IList_1_set_Item_m43019_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9177_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9176_il2cpp_TypeInfo,
	&IEnumerable_1_t9178_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9177_0_0_0;
extern Il2CppType IList_1_t9177_1_0_0;
struct IList_1_t9177;
extern Il2CppGenericClass IList_1_t9177_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9177_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9177_MethodInfos/* methods */
	, IList_1_t9177_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9177_il2cpp_TypeInfo/* element_class */
	, IList_1_t9177_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9177_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9177_0_0_0/* byval_arg */
	, &IList_1_t9177_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9177_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7697_il2cpp_TypeInfo;

// System.Diagnostics.Contracts.ContractVerificationAttribute
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_5.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>
extern MethodInfo IEnumerator_1_get_Current_m43023_MethodInfo;
static PropertyInfo IEnumerator_1_t7697____Current_PropertyInfo = 
{
	&IEnumerator_1_t7697_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43023_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7697_PropertyInfos[] =
{
	&IEnumerator_1_t7697____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContractVerificationAttribute_t1055_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43023_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43023_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7697_il2cpp_TypeInfo/* declaring_type */
	, &ContractVerificationAttribute_t1055_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43023_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7697_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43023_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7697_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7697_0_0_0;
extern Il2CppType IEnumerator_1_t7697_1_0_0;
struct IEnumerator_1_t7697;
extern Il2CppGenericClass IEnumerator_1_t7697_GenericClass;
TypeInfo IEnumerator_1_t7697_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7697_MethodInfos/* methods */
	, IEnumerator_1_t7697_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7697_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7697_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7697_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7697_0_0_0/* byval_arg */
	, &IEnumerator_1_t7697_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7697_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_264.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5851_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_264MethodDeclarations.h"

extern TypeInfo ContractVerificationAttribute_t1055_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25050_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContractVerificationAttribute_t1055_m34084_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractVerificationAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractVerificationAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisContractVerificationAttribute_t1055_m34084(__this, p0, method) (ContractVerificationAttribute_t1055 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5851____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5851_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5851, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5851____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5851_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5851, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5851_FieldInfos[] =
{
	&InternalEnumerator_1_t5851____array_0_FieldInfo,
	&InternalEnumerator_1_t5851____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25047_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5851____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5851_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25047_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5851____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5851_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25050_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5851_PropertyInfos[] =
{
	&InternalEnumerator_1_t5851____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5851____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5851_InternalEnumerator_1__ctor_m25045_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25045_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25045_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5851_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5851_InternalEnumerator_1__ctor_m25045_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25045_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25046_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25046_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5851_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25046_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25047_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25047_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5851_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25047_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25048_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25048_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5851_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25048_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25049_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25049_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5851_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25049_GenericMethod/* genericMethod */

};
extern Il2CppType ContractVerificationAttribute_t1055_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25050_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25050_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5851_il2cpp_TypeInfo/* declaring_type */
	, &ContractVerificationAttribute_t1055_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25050_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5851_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25045_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25046_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25047_MethodInfo,
	&InternalEnumerator_1_Dispose_m25048_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25049_MethodInfo,
	&InternalEnumerator_1_get_Current_m25050_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25049_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25046_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25048_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5851_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25047_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25049_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25046_MethodInfo,
	&InternalEnumerator_1_Dispose_m25048_MethodInfo,
	&InternalEnumerator_1_get_Current_m25050_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5851_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7697_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5851_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7697_il2cpp_TypeInfo, 8},
};
extern TypeInfo ContractVerificationAttribute_t1055_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5851_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25050_MethodInfo/* Method Usage */,
	&ContractVerificationAttribute_t1055_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContractVerificationAttribute_t1055_m34084_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5851_0_0_0;
extern Il2CppType InternalEnumerator_1_t5851_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5851_GenericClass;
TypeInfo InternalEnumerator_1_t5851_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5851_MethodInfos/* methods */
	, InternalEnumerator_1_t5851_PropertyInfos/* properties */
	, InternalEnumerator_1_t5851_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5851_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5851_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5851_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5851_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5851_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5851_1_0_0/* this_arg */
	, InternalEnumerator_1_t5851_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5851_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5851_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5851)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9179_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>
extern MethodInfo ICollection_1_get_Count_m43024_MethodInfo;
static PropertyInfo ICollection_1_t9179____Count_PropertyInfo = 
{
	&ICollection_1_t9179_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43024_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43025_MethodInfo;
static PropertyInfo ICollection_1_t9179____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9179_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43025_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9179_PropertyInfos[] =
{
	&ICollection_1_t9179____Count_PropertyInfo,
	&ICollection_1_t9179____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43024_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m43024_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9179_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43024_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43025_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43025_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9179_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43025_GenericMethod/* genericMethod */

};
extern Il2CppType ContractVerificationAttribute_t1055_0_0_0;
extern Il2CppType ContractVerificationAttribute_t1055_0_0_0;
static ParameterInfo ICollection_1_t9179_ICollection_1_Add_m43026_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractVerificationAttribute_t1055_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43026_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::Add(T)
MethodInfo ICollection_1_Add_m43026_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9179_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9179_ICollection_1_Add_m43026_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43026_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43027_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::Clear()
MethodInfo ICollection_1_Clear_m43027_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9179_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43027_GenericMethod/* genericMethod */

};
extern Il2CppType ContractVerificationAttribute_t1055_0_0_0;
static ParameterInfo ICollection_1_t9179_ICollection_1_Contains_m43028_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractVerificationAttribute_t1055_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43028_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m43028_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9179_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9179_ICollection_1_Contains_m43028_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43028_GenericMethod/* genericMethod */

};
extern Il2CppType ContractVerificationAttributeU5BU5D_t7075_0_0_0;
extern Il2CppType ContractVerificationAttributeU5BU5D_t7075_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9179_ICollection_1_CopyTo_m43029_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractVerificationAttributeU5BU5D_t7075_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43029_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43029_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9179_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9179_ICollection_1_CopyTo_m43029_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43029_GenericMethod/* genericMethod */

};
extern Il2CppType ContractVerificationAttribute_t1055_0_0_0;
static ParameterInfo ICollection_1_t9179_ICollection_1_Remove_m43030_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractVerificationAttribute_t1055_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43030_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m43030_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9179_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9179_ICollection_1_Remove_m43030_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43030_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9179_MethodInfos[] =
{
	&ICollection_1_get_Count_m43024_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43025_MethodInfo,
	&ICollection_1_Add_m43026_MethodInfo,
	&ICollection_1_Clear_m43027_MethodInfo,
	&ICollection_1_Contains_m43028_MethodInfo,
	&ICollection_1_CopyTo_m43029_MethodInfo,
	&ICollection_1_Remove_m43030_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9181_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9179_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9181_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9179_0_0_0;
extern Il2CppType ICollection_1_t9179_1_0_0;
struct ICollection_1_t9179;
extern Il2CppGenericClass ICollection_1_t9179_GenericClass;
TypeInfo ICollection_1_t9179_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9179_MethodInfos/* methods */
	, ICollection_1_t9179_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9179_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9179_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9179_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9179_0_0_0/* byval_arg */
	, &ICollection_1_t9179_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9179_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractVerificationAttribute>
extern Il2CppType IEnumerator_1_t7697_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43031_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43031_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9181_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7697_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43031_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9181_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43031_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9181_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9181_0_0_0;
extern Il2CppType IEnumerable_1_t9181_1_0_0;
struct IEnumerable_1_t9181;
extern Il2CppGenericClass IEnumerable_1_t9181_GenericClass;
TypeInfo IEnumerable_1_t9181_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9181_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9181_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9181_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9181_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9181_0_0_0/* byval_arg */
	, &IEnumerable_1_t9181_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9181_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9180_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractVerificationAttribute>
extern MethodInfo IList_1_get_Item_m43032_MethodInfo;
extern MethodInfo IList_1_set_Item_m43033_MethodInfo;
static PropertyInfo IList_1_t9180____Item_PropertyInfo = 
{
	&IList_1_t9180_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43032_MethodInfo/* get */
	, &IList_1_set_Item_m43033_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9180_PropertyInfos[] =
{
	&IList_1_t9180____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContractVerificationAttribute_t1055_0_0_0;
static ParameterInfo IList_1_t9180_IList_1_IndexOf_m43034_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractVerificationAttribute_t1055_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43034_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43034_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9180_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9180_IList_1_IndexOf_m43034_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43034_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractVerificationAttribute_t1055_0_0_0;
static ParameterInfo IList_1_t9180_IList_1_Insert_m43035_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContractVerificationAttribute_t1055_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43035_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43035_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9180_IList_1_Insert_m43035_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43035_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9180_IList_1_RemoveAt_m43036_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43036_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43036_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9180_IList_1_RemoveAt_m43036_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43036_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9180_IList_1_get_Item_m43032_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ContractVerificationAttribute_t1055_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43032_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43032_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9180_il2cpp_TypeInfo/* declaring_type */
	, &ContractVerificationAttribute_t1055_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9180_IList_1_get_Item_m43032_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43032_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractVerificationAttribute_t1055_0_0_0;
static ParameterInfo IList_1_t9180_IList_1_set_Item_m43033_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContractVerificationAttribute_t1055_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43033_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractVerificationAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43033_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9180_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9180_IList_1_set_Item_m43033_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43033_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9180_MethodInfos[] =
{
	&IList_1_IndexOf_m43034_MethodInfo,
	&IList_1_Insert_m43035_MethodInfo,
	&IList_1_RemoveAt_m43036_MethodInfo,
	&IList_1_get_Item_m43032_MethodInfo,
	&IList_1_set_Item_m43033_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9180_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9179_il2cpp_TypeInfo,
	&IEnumerable_1_t9181_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9180_0_0_0;
extern Il2CppType IList_1_t9180_1_0_0;
struct IList_1_t9180;
extern Il2CppGenericClass IList_1_t9180_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9180_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9180_MethodInfos/* methods */
	, IList_1_t9180_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9180_il2cpp_TypeInfo/* element_class */
	, IList_1_t9180_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9180_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9180_0_0_0/* byval_arg */
	, &IList_1_t9180_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9180_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7699_il2cpp_TypeInfo;

// System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_6.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>
extern MethodInfo IEnumerator_1_get_Current_m43037_MethodInfo;
static PropertyInfo IEnumerator_1_t7699____Current_PropertyInfo = 
{
	&IEnumerator_1_t7699_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43037_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7699_PropertyInfos[] =
{
	&IEnumerator_1_t7699____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContractPublicPropertyNameAttribute_t1056_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43037_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43037_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7699_il2cpp_TypeInfo/* declaring_type */
	, &ContractPublicPropertyNameAttribute_t1056_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43037_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7699_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43037_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7699_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7699_0_0_0;
extern Il2CppType IEnumerator_1_t7699_1_0_0;
struct IEnumerator_1_t7699;
extern Il2CppGenericClass IEnumerator_1_t7699_GenericClass;
TypeInfo IEnumerator_1_t7699_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7699_MethodInfos/* methods */
	, IEnumerator_1_t7699_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7699_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7699_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7699_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7699_0_0_0/* byval_arg */
	, &IEnumerator_1_t7699_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7699_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_265.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5852_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_265MethodDeclarations.h"

extern TypeInfo ContractPublicPropertyNameAttribute_t1056_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25056_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContractPublicPropertyNameAttribute_t1056_m34095_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisContractPublicPropertyNameAttribute_t1056_m34095(__this, p0, method) (ContractPublicPropertyNameAttribute_t1056 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5852____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5852_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5852, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5852____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5852_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5852, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5852_FieldInfos[] =
{
	&InternalEnumerator_1_t5852____array_0_FieldInfo,
	&InternalEnumerator_1_t5852____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25053_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5852____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5852_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25053_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5852____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5852_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25056_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5852_PropertyInfos[] =
{
	&InternalEnumerator_1_t5852____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5852____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5852_InternalEnumerator_1__ctor_m25051_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25051_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25051_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5852_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5852_InternalEnumerator_1__ctor_m25051_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25051_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25052_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25052_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5852_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25052_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25053_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25053_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5852_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25053_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25054_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25054_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5852_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25054_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25055_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25055_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5852_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25055_GenericMethod/* genericMethod */

};
extern Il2CppType ContractPublicPropertyNameAttribute_t1056_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25056_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25056_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5852_il2cpp_TypeInfo/* declaring_type */
	, &ContractPublicPropertyNameAttribute_t1056_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25056_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5852_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25051_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25052_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25053_MethodInfo,
	&InternalEnumerator_1_Dispose_m25054_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25055_MethodInfo,
	&InternalEnumerator_1_get_Current_m25056_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25055_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25052_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25054_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5852_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25053_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25055_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25052_MethodInfo,
	&InternalEnumerator_1_Dispose_m25054_MethodInfo,
	&InternalEnumerator_1_get_Current_m25056_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5852_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7699_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5852_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7699_il2cpp_TypeInfo, 8},
};
extern TypeInfo ContractPublicPropertyNameAttribute_t1056_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5852_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25056_MethodInfo/* Method Usage */,
	&ContractPublicPropertyNameAttribute_t1056_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContractPublicPropertyNameAttribute_t1056_m34095_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5852_0_0_0;
extern Il2CppType InternalEnumerator_1_t5852_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5852_GenericClass;
TypeInfo InternalEnumerator_1_t5852_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5852_MethodInfos/* methods */
	, InternalEnumerator_1_t5852_PropertyInfos/* properties */
	, InternalEnumerator_1_t5852_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5852_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5852_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5852_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5852_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5852_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5852_1_0_0/* this_arg */
	, InternalEnumerator_1_t5852_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5852_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5852_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5852)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9182_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>
extern MethodInfo ICollection_1_get_Count_m43038_MethodInfo;
static PropertyInfo ICollection_1_t9182____Count_PropertyInfo = 
{
	&ICollection_1_t9182_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43038_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43039_MethodInfo;
static PropertyInfo ICollection_1_t9182____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9182_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43039_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9182_PropertyInfos[] =
{
	&ICollection_1_t9182____Count_PropertyInfo,
	&ICollection_1_t9182____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43038_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m43038_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9182_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43038_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43039_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43039_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9182_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43039_GenericMethod/* genericMethod */

};
extern Il2CppType ContractPublicPropertyNameAttribute_t1056_0_0_0;
extern Il2CppType ContractPublicPropertyNameAttribute_t1056_0_0_0;
static ParameterInfo ICollection_1_t9182_ICollection_1_Add_m43040_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractPublicPropertyNameAttribute_t1056_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43040_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::Add(T)
MethodInfo ICollection_1_Add_m43040_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9182_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9182_ICollection_1_Add_m43040_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43040_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43041_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::Clear()
MethodInfo ICollection_1_Clear_m43041_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9182_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43041_GenericMethod/* genericMethod */

};
extern Il2CppType ContractPublicPropertyNameAttribute_t1056_0_0_0;
static ParameterInfo ICollection_1_t9182_ICollection_1_Contains_m43042_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractPublicPropertyNameAttribute_t1056_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43042_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m43042_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9182_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9182_ICollection_1_Contains_m43042_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43042_GenericMethod/* genericMethod */

};
extern Il2CppType ContractPublicPropertyNameAttributeU5BU5D_t7076_0_0_0;
extern Il2CppType ContractPublicPropertyNameAttributeU5BU5D_t7076_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9182_ICollection_1_CopyTo_m43043_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractPublicPropertyNameAttributeU5BU5D_t7076_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43043_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43043_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9182_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9182_ICollection_1_CopyTo_m43043_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43043_GenericMethod/* genericMethod */

};
extern Il2CppType ContractPublicPropertyNameAttribute_t1056_0_0_0;
static ParameterInfo ICollection_1_t9182_ICollection_1_Remove_m43044_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractPublicPropertyNameAttribute_t1056_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43044_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m43044_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9182_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9182_ICollection_1_Remove_m43044_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43044_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9182_MethodInfos[] =
{
	&ICollection_1_get_Count_m43038_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43039_MethodInfo,
	&ICollection_1_Add_m43040_MethodInfo,
	&ICollection_1_Clear_m43041_MethodInfo,
	&ICollection_1_Contains_m43042_MethodInfo,
	&ICollection_1_CopyTo_m43043_MethodInfo,
	&ICollection_1_Remove_m43044_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9184_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9182_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9184_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9182_0_0_0;
extern Il2CppType ICollection_1_t9182_1_0_0;
struct ICollection_1_t9182;
extern Il2CppGenericClass ICollection_1_t9182_GenericClass;
TypeInfo ICollection_1_t9182_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9182_MethodInfos/* methods */
	, ICollection_1_t9182_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9182_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9182_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9182_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9182_0_0_0/* byval_arg */
	, &ICollection_1_t9182_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9182_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>
extern Il2CppType IEnumerator_1_t7699_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43045_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43045_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9184_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7699_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43045_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9184_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43045_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9184_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9184_0_0_0;
extern Il2CppType IEnumerable_1_t9184_1_0_0;
struct IEnumerable_1_t9184;
extern Il2CppGenericClass IEnumerable_1_t9184_GenericClass;
TypeInfo IEnumerable_1_t9184_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9184_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9184_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9184_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9184_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9184_0_0_0/* byval_arg */
	, &IEnumerable_1_t9184_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9184_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9183_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>
extern MethodInfo IList_1_get_Item_m43046_MethodInfo;
extern MethodInfo IList_1_set_Item_m43047_MethodInfo;
static PropertyInfo IList_1_t9183____Item_PropertyInfo = 
{
	&IList_1_t9183_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43046_MethodInfo/* get */
	, &IList_1_set_Item_m43047_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9183_PropertyInfos[] =
{
	&IList_1_t9183____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContractPublicPropertyNameAttribute_t1056_0_0_0;
static ParameterInfo IList_1_t9183_IList_1_IndexOf_m43048_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractPublicPropertyNameAttribute_t1056_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43048_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43048_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9183_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9183_IList_1_IndexOf_m43048_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43048_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractPublicPropertyNameAttribute_t1056_0_0_0;
static ParameterInfo IList_1_t9183_IList_1_Insert_m43049_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContractPublicPropertyNameAttribute_t1056_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43049_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43049_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9183_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9183_IList_1_Insert_m43049_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43049_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9183_IList_1_RemoveAt_m43050_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43050_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43050_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9183_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9183_IList_1_RemoveAt_m43050_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43050_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9183_IList_1_get_Item_m43046_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ContractPublicPropertyNameAttribute_t1056_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43046_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43046_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9183_il2cpp_TypeInfo/* declaring_type */
	, &ContractPublicPropertyNameAttribute_t1056_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9183_IList_1_get_Item_m43046_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43046_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractPublicPropertyNameAttribute_t1056_0_0_0;
static ParameterInfo IList_1_t9183_IList_1_set_Item_m43047_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContractPublicPropertyNameAttribute_t1056_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43047_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractPublicPropertyNameAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43047_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9183_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9183_IList_1_set_Item_m43047_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43047_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9183_MethodInfos[] =
{
	&IList_1_IndexOf_m43048_MethodInfo,
	&IList_1_Insert_m43049_MethodInfo,
	&IList_1_RemoveAt_m43050_MethodInfo,
	&IList_1_get_Item_m43046_MethodInfo,
	&IList_1_set_Item_m43047_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9183_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9182_il2cpp_TypeInfo,
	&IEnumerable_1_t9184_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9183_0_0_0;
extern Il2CppType IList_1_t9183_1_0_0;
struct IList_1_t9183;
extern Il2CppGenericClass IList_1_t9183_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9183_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9183_MethodInfos/* methods */
	, IList_1_t9183_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9183_il2cpp_TypeInfo/* element_class */
	, IList_1_t9183_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9183_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9183_0_0_0/* byval_arg */
	, &IList_1_t9183_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9183_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7701_il2cpp_TypeInfo;

// System.Diagnostics.Contracts.ContractArgumentValidatorAttribute
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_7.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>
extern MethodInfo IEnumerator_1_get_Current_m43051_MethodInfo;
static PropertyInfo IEnumerator_1_t7701____Current_PropertyInfo = 
{
	&IEnumerator_1_t7701_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43051_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7701_PropertyInfos[] =
{
	&IEnumerator_1_t7701____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContractArgumentValidatorAttribute_t1057_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43051_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43051_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7701_il2cpp_TypeInfo/* declaring_type */
	, &ContractArgumentValidatorAttribute_t1057_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43051_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7701_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43051_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7701_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7701_0_0_0;
extern Il2CppType IEnumerator_1_t7701_1_0_0;
struct IEnumerator_1_t7701;
extern Il2CppGenericClass IEnumerator_1_t7701_GenericClass;
TypeInfo IEnumerator_1_t7701_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7701_MethodInfos/* methods */
	, IEnumerator_1_t7701_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7701_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7701_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7701_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7701_0_0_0/* byval_arg */
	, &IEnumerator_1_t7701_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7701_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_266.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5853_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_266MethodDeclarations.h"

extern TypeInfo ContractArgumentValidatorAttribute_t1057_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25062_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContractArgumentValidatorAttribute_t1057_m34106_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisContractArgumentValidatorAttribute_t1057_m34106(__this, p0, method) (ContractArgumentValidatorAttribute_t1057 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5853____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5853_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5853, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5853____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5853_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5853, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5853_FieldInfos[] =
{
	&InternalEnumerator_1_t5853____array_0_FieldInfo,
	&InternalEnumerator_1_t5853____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25059_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5853____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5853_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25059_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5853____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5853_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25062_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5853_PropertyInfos[] =
{
	&InternalEnumerator_1_t5853____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5853____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5853_InternalEnumerator_1__ctor_m25057_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25057_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25057_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5853_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5853_InternalEnumerator_1__ctor_m25057_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25057_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25058_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25058_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5853_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25058_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25059_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25059_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5853_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25059_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25060_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25060_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5853_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25060_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25061_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25061_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5853_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25061_GenericMethod/* genericMethod */

};
extern Il2CppType ContractArgumentValidatorAttribute_t1057_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25062_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25062_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5853_il2cpp_TypeInfo/* declaring_type */
	, &ContractArgumentValidatorAttribute_t1057_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25062_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5853_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25057_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25058_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25059_MethodInfo,
	&InternalEnumerator_1_Dispose_m25060_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25061_MethodInfo,
	&InternalEnumerator_1_get_Current_m25062_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25061_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25058_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25060_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5853_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25059_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25061_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25058_MethodInfo,
	&InternalEnumerator_1_Dispose_m25060_MethodInfo,
	&InternalEnumerator_1_get_Current_m25062_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5853_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7701_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5853_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7701_il2cpp_TypeInfo, 8},
};
extern TypeInfo ContractArgumentValidatorAttribute_t1057_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5853_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25062_MethodInfo/* Method Usage */,
	&ContractArgumentValidatorAttribute_t1057_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContractArgumentValidatorAttribute_t1057_m34106_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5853_0_0_0;
extern Il2CppType InternalEnumerator_1_t5853_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5853_GenericClass;
TypeInfo InternalEnumerator_1_t5853_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5853_MethodInfos/* methods */
	, InternalEnumerator_1_t5853_PropertyInfos/* properties */
	, InternalEnumerator_1_t5853_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5853_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5853_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5853_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5853_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5853_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5853_1_0_0/* this_arg */
	, InternalEnumerator_1_t5853_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5853_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5853_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5853)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9185_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>
extern MethodInfo ICollection_1_get_Count_m43052_MethodInfo;
static PropertyInfo ICollection_1_t9185____Count_PropertyInfo = 
{
	&ICollection_1_t9185_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43052_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43053_MethodInfo;
static PropertyInfo ICollection_1_t9185____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9185_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43053_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9185_PropertyInfos[] =
{
	&ICollection_1_t9185____Count_PropertyInfo,
	&ICollection_1_t9185____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43052_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m43052_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9185_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43052_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43053_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43053_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9185_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43053_GenericMethod/* genericMethod */

};
extern Il2CppType ContractArgumentValidatorAttribute_t1057_0_0_0;
extern Il2CppType ContractArgumentValidatorAttribute_t1057_0_0_0;
static ParameterInfo ICollection_1_t9185_ICollection_1_Add_m43054_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractArgumentValidatorAttribute_t1057_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43054_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::Add(T)
MethodInfo ICollection_1_Add_m43054_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9185_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9185_ICollection_1_Add_m43054_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43054_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43055_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::Clear()
MethodInfo ICollection_1_Clear_m43055_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9185_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43055_GenericMethod/* genericMethod */

};
extern Il2CppType ContractArgumentValidatorAttribute_t1057_0_0_0;
static ParameterInfo ICollection_1_t9185_ICollection_1_Contains_m43056_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractArgumentValidatorAttribute_t1057_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43056_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m43056_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9185_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9185_ICollection_1_Contains_m43056_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43056_GenericMethod/* genericMethod */

};
extern Il2CppType ContractArgumentValidatorAttributeU5BU5D_t7077_0_0_0;
extern Il2CppType ContractArgumentValidatorAttributeU5BU5D_t7077_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9185_ICollection_1_CopyTo_m43057_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractArgumentValidatorAttributeU5BU5D_t7077_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43057_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43057_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9185_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9185_ICollection_1_CopyTo_m43057_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43057_GenericMethod/* genericMethod */

};
extern Il2CppType ContractArgumentValidatorAttribute_t1057_0_0_0;
static ParameterInfo ICollection_1_t9185_ICollection_1_Remove_m43058_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractArgumentValidatorAttribute_t1057_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43058_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m43058_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9185_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9185_ICollection_1_Remove_m43058_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43058_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9185_MethodInfos[] =
{
	&ICollection_1_get_Count_m43052_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43053_MethodInfo,
	&ICollection_1_Add_m43054_MethodInfo,
	&ICollection_1_Clear_m43055_MethodInfo,
	&ICollection_1_Contains_m43056_MethodInfo,
	&ICollection_1_CopyTo_m43057_MethodInfo,
	&ICollection_1_Remove_m43058_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9187_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9185_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9187_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9185_0_0_0;
extern Il2CppType ICollection_1_t9185_1_0_0;
struct ICollection_1_t9185;
extern Il2CppGenericClass ICollection_1_t9185_GenericClass;
TypeInfo ICollection_1_t9185_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9185_MethodInfos/* methods */
	, ICollection_1_t9185_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9185_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9185_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9185_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9185_0_0_0/* byval_arg */
	, &ICollection_1_t9185_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9185_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>
extern Il2CppType IEnumerator_1_t7701_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43059_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43059_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9187_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7701_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43059_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9187_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43059_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9187_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9187_0_0_0;
extern Il2CppType IEnumerable_1_t9187_1_0_0;
struct IEnumerable_1_t9187;
extern Il2CppGenericClass IEnumerable_1_t9187_GenericClass;
TypeInfo IEnumerable_1_t9187_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9187_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9187_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9187_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9187_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9187_0_0_0/* byval_arg */
	, &IEnumerable_1_t9187_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9187_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9186_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>
extern MethodInfo IList_1_get_Item_m43060_MethodInfo;
extern MethodInfo IList_1_set_Item_m43061_MethodInfo;
static PropertyInfo IList_1_t9186____Item_PropertyInfo = 
{
	&IList_1_t9186_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43060_MethodInfo/* get */
	, &IList_1_set_Item_m43061_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9186_PropertyInfos[] =
{
	&IList_1_t9186____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContractArgumentValidatorAttribute_t1057_0_0_0;
static ParameterInfo IList_1_t9186_IList_1_IndexOf_m43062_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractArgumentValidatorAttribute_t1057_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43062_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43062_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9186_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9186_IList_1_IndexOf_m43062_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43062_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractArgumentValidatorAttribute_t1057_0_0_0;
static ParameterInfo IList_1_t9186_IList_1_Insert_m43063_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContractArgumentValidatorAttribute_t1057_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43063_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43063_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9186_IList_1_Insert_m43063_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43063_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9186_IList_1_RemoveAt_m43064_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43064_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43064_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9186_IList_1_RemoveAt_m43064_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43064_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9186_IList_1_get_Item_m43060_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ContractArgumentValidatorAttribute_t1057_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43060_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43060_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9186_il2cpp_TypeInfo/* declaring_type */
	, &ContractArgumentValidatorAttribute_t1057_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9186_IList_1_get_Item_m43060_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43060_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractArgumentValidatorAttribute_t1057_0_0_0;
static ParameterInfo IList_1_t9186_IList_1_set_Item_m43061_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContractArgumentValidatorAttribute_t1057_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43061_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractArgumentValidatorAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43061_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9186_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9186_IList_1_set_Item_m43061_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43061_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9186_MethodInfos[] =
{
	&IList_1_IndexOf_m43062_MethodInfo,
	&IList_1_Insert_m43063_MethodInfo,
	&IList_1_RemoveAt_m43064_MethodInfo,
	&IList_1_get_Item_m43060_MethodInfo,
	&IList_1_set_Item_m43061_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9186_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9185_il2cpp_TypeInfo,
	&IEnumerable_1_t9187_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9186_0_0_0;
extern Il2CppType IList_1_t9186_1_0_0;
struct IList_1_t9186;
extern Il2CppGenericClass IList_1_t9186_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9186_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9186_MethodInfos/* methods */
	, IList_1_t9186_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9186_il2cpp_TypeInfo/* element_class */
	, IList_1_t9186_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9186_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9186_0_0_0/* byval_arg */
	, &IList_1_t9186_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9186_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7703_il2cpp_TypeInfo;

// System.Diagnostics.Contracts.ContractAbbreviatorAttribute
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_8.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>
extern MethodInfo IEnumerator_1_get_Current_m43065_MethodInfo;
static PropertyInfo IEnumerator_1_t7703____Current_PropertyInfo = 
{
	&IEnumerator_1_t7703_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43065_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7703_PropertyInfos[] =
{
	&IEnumerator_1_t7703____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContractAbbreviatorAttribute_t1058_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43065_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43065_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7703_il2cpp_TypeInfo/* declaring_type */
	, &ContractAbbreviatorAttribute_t1058_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43065_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7703_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43065_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7703_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7703_0_0_0;
extern Il2CppType IEnumerator_1_t7703_1_0_0;
struct IEnumerator_1_t7703;
extern Il2CppGenericClass IEnumerator_1_t7703_GenericClass;
TypeInfo IEnumerator_1_t7703_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7703_MethodInfos/* methods */
	, IEnumerator_1_t7703_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7703_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7703_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7703_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7703_0_0_0/* byval_arg */
	, &IEnumerator_1_t7703_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7703_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_267.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5854_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_267MethodDeclarations.h"

extern TypeInfo ContractAbbreviatorAttribute_t1058_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25068_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContractAbbreviatorAttribute_t1058_m34117_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisContractAbbreviatorAttribute_t1058_m34117(__this, p0, method) (ContractAbbreviatorAttribute_t1058 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5854____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5854_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5854, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5854____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5854_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5854, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5854_FieldInfos[] =
{
	&InternalEnumerator_1_t5854____array_0_FieldInfo,
	&InternalEnumerator_1_t5854____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25065_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5854____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5854_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25065_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5854____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5854_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25068_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5854_PropertyInfos[] =
{
	&InternalEnumerator_1_t5854____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5854____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5854_InternalEnumerator_1__ctor_m25063_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25063_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25063_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5854_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5854_InternalEnumerator_1__ctor_m25063_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25063_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25064_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25064_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5854_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25064_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25065_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25065_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5854_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25065_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25066_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25066_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5854_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25066_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25067_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25067_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5854_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25067_GenericMethod/* genericMethod */

};
extern Il2CppType ContractAbbreviatorAttribute_t1058_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25068_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25068_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5854_il2cpp_TypeInfo/* declaring_type */
	, &ContractAbbreviatorAttribute_t1058_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25068_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5854_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25063_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25064_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25065_MethodInfo,
	&InternalEnumerator_1_Dispose_m25066_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25067_MethodInfo,
	&InternalEnumerator_1_get_Current_m25068_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25067_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25064_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25066_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5854_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25065_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25067_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25064_MethodInfo,
	&InternalEnumerator_1_Dispose_m25066_MethodInfo,
	&InternalEnumerator_1_get_Current_m25068_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5854_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7703_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5854_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7703_il2cpp_TypeInfo, 8},
};
extern TypeInfo ContractAbbreviatorAttribute_t1058_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5854_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25068_MethodInfo/* Method Usage */,
	&ContractAbbreviatorAttribute_t1058_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContractAbbreviatorAttribute_t1058_m34117_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5854_0_0_0;
extern Il2CppType InternalEnumerator_1_t5854_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5854_GenericClass;
TypeInfo InternalEnumerator_1_t5854_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5854_MethodInfos/* methods */
	, InternalEnumerator_1_t5854_PropertyInfos/* properties */
	, InternalEnumerator_1_t5854_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5854_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5854_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5854_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5854_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5854_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5854_1_0_0/* this_arg */
	, InternalEnumerator_1_t5854_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5854_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5854_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5854)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9188_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>
extern MethodInfo ICollection_1_get_Count_m43066_MethodInfo;
static PropertyInfo ICollection_1_t9188____Count_PropertyInfo = 
{
	&ICollection_1_t9188_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43066_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43067_MethodInfo;
static PropertyInfo ICollection_1_t9188____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9188_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43067_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9188_PropertyInfos[] =
{
	&ICollection_1_t9188____Count_PropertyInfo,
	&ICollection_1_t9188____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43066_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m43066_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9188_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43066_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43067_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43067_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9188_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43067_GenericMethod/* genericMethod */

};
extern Il2CppType ContractAbbreviatorAttribute_t1058_0_0_0;
extern Il2CppType ContractAbbreviatorAttribute_t1058_0_0_0;
static ParameterInfo ICollection_1_t9188_ICollection_1_Add_m43068_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractAbbreviatorAttribute_t1058_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43068_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::Add(T)
MethodInfo ICollection_1_Add_m43068_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9188_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9188_ICollection_1_Add_m43068_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43068_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43069_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::Clear()
MethodInfo ICollection_1_Clear_m43069_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9188_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43069_GenericMethod/* genericMethod */

};
extern Il2CppType ContractAbbreviatorAttribute_t1058_0_0_0;
static ParameterInfo ICollection_1_t9188_ICollection_1_Contains_m43070_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractAbbreviatorAttribute_t1058_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43070_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m43070_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9188_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9188_ICollection_1_Contains_m43070_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43070_GenericMethod/* genericMethod */

};
extern Il2CppType ContractAbbreviatorAttributeU5BU5D_t7078_0_0_0;
extern Il2CppType ContractAbbreviatorAttributeU5BU5D_t7078_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9188_ICollection_1_CopyTo_m43071_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractAbbreviatorAttributeU5BU5D_t7078_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43071_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43071_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9188_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9188_ICollection_1_CopyTo_m43071_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43071_GenericMethod/* genericMethod */

};
extern Il2CppType ContractAbbreviatorAttribute_t1058_0_0_0;
static ParameterInfo ICollection_1_t9188_ICollection_1_Remove_m43072_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractAbbreviatorAttribute_t1058_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43072_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m43072_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9188_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9188_ICollection_1_Remove_m43072_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43072_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9188_MethodInfos[] =
{
	&ICollection_1_get_Count_m43066_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43067_MethodInfo,
	&ICollection_1_Add_m43068_MethodInfo,
	&ICollection_1_Clear_m43069_MethodInfo,
	&ICollection_1_Contains_m43070_MethodInfo,
	&ICollection_1_CopyTo_m43071_MethodInfo,
	&ICollection_1_Remove_m43072_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9190_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9188_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9190_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9188_0_0_0;
extern Il2CppType ICollection_1_t9188_1_0_0;
struct ICollection_1_t9188;
extern Il2CppGenericClass ICollection_1_t9188_GenericClass;
TypeInfo ICollection_1_t9188_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9188_MethodInfos/* methods */
	, ICollection_1_t9188_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9188_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9188_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9188_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9188_0_0_0/* byval_arg */
	, &ICollection_1_t9188_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9188_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>
extern Il2CppType IEnumerator_1_t7703_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43073_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43073_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9190_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7703_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43073_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9190_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43073_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9190_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9190_0_0_0;
extern Il2CppType IEnumerable_1_t9190_1_0_0;
struct IEnumerable_1_t9190;
extern Il2CppGenericClass IEnumerable_1_t9190_GenericClass;
TypeInfo IEnumerable_1_t9190_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9190_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9190_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9190_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9190_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9190_0_0_0/* byval_arg */
	, &IEnumerable_1_t9190_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9190_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9189_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>
extern MethodInfo IList_1_get_Item_m43074_MethodInfo;
extern MethodInfo IList_1_set_Item_m43075_MethodInfo;
static PropertyInfo IList_1_t9189____Item_PropertyInfo = 
{
	&IList_1_t9189_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43074_MethodInfo/* get */
	, &IList_1_set_Item_m43075_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9189_PropertyInfos[] =
{
	&IList_1_t9189____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContractAbbreviatorAttribute_t1058_0_0_0;
static ParameterInfo IList_1_t9189_IList_1_IndexOf_m43076_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractAbbreviatorAttribute_t1058_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43076_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43076_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9189_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9189_IList_1_IndexOf_m43076_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43076_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractAbbreviatorAttribute_t1058_0_0_0;
static ParameterInfo IList_1_t9189_IList_1_Insert_m43077_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContractAbbreviatorAttribute_t1058_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43077_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43077_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9189_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9189_IList_1_Insert_m43077_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43077_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9189_IList_1_RemoveAt_m43078_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43078_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43078_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9189_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9189_IList_1_RemoveAt_m43078_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43078_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9189_IList_1_get_Item_m43074_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ContractAbbreviatorAttribute_t1058_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43074_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43074_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9189_il2cpp_TypeInfo/* declaring_type */
	, &ContractAbbreviatorAttribute_t1058_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9189_IList_1_get_Item_m43074_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43074_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractAbbreviatorAttribute_t1058_0_0_0;
static ParameterInfo IList_1_t9189_IList_1_set_Item_m43075_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContractAbbreviatorAttribute_t1058_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43075_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractAbbreviatorAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43075_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9189_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9189_IList_1_set_Item_m43075_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43075_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9189_MethodInfos[] =
{
	&IList_1_IndexOf_m43076_MethodInfo,
	&IList_1_Insert_m43077_MethodInfo,
	&IList_1_RemoveAt_m43078_MethodInfo,
	&IList_1_get_Item_m43074_MethodInfo,
	&IList_1_set_Item_m43075_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9189_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9188_il2cpp_TypeInfo,
	&IEnumerable_1_t9190_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9189_0_0_0;
extern Il2CppType IList_1_t9189_1_0_0;
struct IList_1_t9189;
extern Il2CppGenericClass IList_1_t9189_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9189_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9189_MethodInfos/* methods */
	, IList_1_t9189_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9189_il2cpp_TypeInfo/* element_class */
	, IList_1_t9189_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9189_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9189_0_0_0/* byval_arg */
	, &IList_1_t9189_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9189_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7705_il2cpp_TypeInfo;

// System.Diagnostics.Contracts.ContractOptionAttribute
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_9.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m43079_MethodInfo;
static PropertyInfo IEnumerator_1_t7705____Current_PropertyInfo = 
{
	&IEnumerator_1_t7705_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43079_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7705_PropertyInfos[] =
{
	&IEnumerator_1_t7705____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContractOptionAttribute_t1059_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43079_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43079_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7705_il2cpp_TypeInfo/* declaring_type */
	, &ContractOptionAttribute_t1059_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43079_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7705_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43079_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7705_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7705_0_0_0;
extern Il2CppType IEnumerator_1_t7705_1_0_0;
struct IEnumerator_1_t7705;
extern Il2CppGenericClass IEnumerator_1_t7705_GenericClass;
TypeInfo IEnumerator_1_t7705_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7705_MethodInfos/* methods */
	, IEnumerator_1_t7705_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7705_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7705_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7705_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7705_0_0_0/* byval_arg */
	, &IEnumerator_1_t7705_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7705_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_268.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5855_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_268MethodDeclarations.h"

extern TypeInfo ContractOptionAttribute_t1059_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25074_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContractOptionAttribute_t1059_m34128_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractOptionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractOptionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisContractOptionAttribute_t1059_m34128(__this, p0, method) (ContractOptionAttribute_t1059 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5855____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5855_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5855, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5855____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5855_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5855, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5855_FieldInfos[] =
{
	&InternalEnumerator_1_t5855____array_0_FieldInfo,
	&InternalEnumerator_1_t5855____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25071_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5855____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5855_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25071_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5855____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5855_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25074_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5855_PropertyInfos[] =
{
	&InternalEnumerator_1_t5855____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5855____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5855_InternalEnumerator_1__ctor_m25069_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25069_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25069_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5855_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5855_InternalEnumerator_1__ctor_m25069_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25069_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25070_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25070_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5855_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25070_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25071_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25071_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5855_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25071_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25072_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25072_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5855_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25072_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25073_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25073_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5855_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25073_GenericMethod/* genericMethod */

};
extern Il2CppType ContractOptionAttribute_t1059_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25074_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractOptionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25074_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5855_il2cpp_TypeInfo/* declaring_type */
	, &ContractOptionAttribute_t1059_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25074_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5855_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25069_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25070_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25071_MethodInfo,
	&InternalEnumerator_1_Dispose_m25072_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25073_MethodInfo,
	&InternalEnumerator_1_get_Current_m25074_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25073_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25070_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25072_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5855_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25071_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25073_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25070_MethodInfo,
	&InternalEnumerator_1_Dispose_m25072_MethodInfo,
	&InternalEnumerator_1_get_Current_m25074_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5855_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7705_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5855_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7705_il2cpp_TypeInfo, 8},
};
extern TypeInfo ContractOptionAttribute_t1059_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5855_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25074_MethodInfo/* Method Usage */,
	&ContractOptionAttribute_t1059_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisContractOptionAttribute_t1059_m34128_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5855_0_0_0;
extern Il2CppType InternalEnumerator_1_t5855_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5855_GenericClass;
TypeInfo InternalEnumerator_1_t5855_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5855_MethodInfos/* methods */
	, InternalEnumerator_1_t5855_PropertyInfos/* properties */
	, InternalEnumerator_1_t5855_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5855_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5855_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5855_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5855_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5855_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5855_1_0_0/* this_arg */
	, InternalEnumerator_1_t5855_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5855_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5855_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5855)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9191_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>
extern MethodInfo ICollection_1_get_Count_m43080_MethodInfo;
static PropertyInfo ICollection_1_t9191____Count_PropertyInfo = 
{
	&ICollection_1_t9191_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43080_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43081_MethodInfo;
static PropertyInfo ICollection_1_t9191____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9191_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43081_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9191_PropertyInfos[] =
{
	&ICollection_1_t9191____Count_PropertyInfo,
	&ICollection_1_t9191____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43080_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m43080_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9191_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43080_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43081_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43081_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9191_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43081_GenericMethod/* genericMethod */

};
extern Il2CppType ContractOptionAttribute_t1059_0_0_0;
extern Il2CppType ContractOptionAttribute_t1059_0_0_0;
static ParameterInfo ICollection_1_t9191_ICollection_1_Add_m43082_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractOptionAttribute_t1059_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43082_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m43082_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9191_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9191_ICollection_1_Add_m43082_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43082_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43083_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m43083_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9191_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43083_GenericMethod/* genericMethod */

};
extern Il2CppType ContractOptionAttribute_t1059_0_0_0;
static ParameterInfo ICollection_1_t9191_ICollection_1_Contains_m43084_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractOptionAttribute_t1059_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43084_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m43084_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9191_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9191_ICollection_1_Contains_m43084_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43084_GenericMethod/* genericMethod */

};
extern Il2CppType ContractOptionAttributeU5BU5D_t7079_0_0_0;
extern Il2CppType ContractOptionAttributeU5BU5D_t7079_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9191_ICollection_1_CopyTo_m43085_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractOptionAttributeU5BU5D_t7079_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43085_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43085_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9191_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9191_ICollection_1_CopyTo_m43085_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43085_GenericMethod/* genericMethod */

};
extern Il2CppType ContractOptionAttribute_t1059_0_0_0;
static ParameterInfo ICollection_1_t9191_ICollection_1_Remove_m43086_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractOptionAttribute_t1059_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43086_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractOptionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m43086_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9191_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9191_ICollection_1_Remove_m43086_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43086_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9191_MethodInfos[] =
{
	&ICollection_1_get_Count_m43080_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43081_MethodInfo,
	&ICollection_1_Add_m43082_MethodInfo,
	&ICollection_1_Clear_m43083_MethodInfo,
	&ICollection_1_Contains_m43084_MethodInfo,
	&ICollection_1_CopyTo_m43085_MethodInfo,
	&ICollection_1_Remove_m43086_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9193_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9191_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9193_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9191_0_0_0;
extern Il2CppType ICollection_1_t9191_1_0_0;
struct ICollection_1_t9191;
extern Il2CppGenericClass ICollection_1_t9191_GenericClass;
TypeInfo ICollection_1_t9191_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9191_MethodInfos/* methods */
	, ICollection_1_t9191_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9191_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9191_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9191_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9191_0_0_0/* byval_arg */
	, &ICollection_1_t9191_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9191_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractOptionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractOptionAttribute>
extern Il2CppType IEnumerator_1_t7705_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43087_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractOptionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43087_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9193_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7705_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43087_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9193_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43087_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9193_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9193_0_0_0;
extern Il2CppType IEnumerable_1_t9193_1_0_0;
struct IEnumerable_1_t9193;
extern Il2CppGenericClass IEnumerable_1_t9193_GenericClass;
TypeInfo IEnumerable_1_t9193_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9193_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9193_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9193_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9193_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9193_0_0_0/* byval_arg */
	, &IEnumerable_1_t9193_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9193_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9192_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractOptionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractOptionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractOptionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractOptionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractOptionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractOptionAttribute>
extern MethodInfo IList_1_get_Item_m43088_MethodInfo;
extern MethodInfo IList_1_set_Item_m43089_MethodInfo;
static PropertyInfo IList_1_t9192____Item_PropertyInfo = 
{
	&IList_1_t9192_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43088_MethodInfo/* get */
	, &IList_1_set_Item_m43089_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9192_PropertyInfos[] =
{
	&IList_1_t9192____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContractOptionAttribute_t1059_0_0_0;
static ParameterInfo IList_1_t9192_IList_1_IndexOf_m43090_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractOptionAttribute_t1059_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43090_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractOptionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43090_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9192_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9192_IList_1_IndexOf_m43090_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43090_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractOptionAttribute_t1059_0_0_0;
static ParameterInfo IList_1_t9192_IList_1_Insert_m43091_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContractOptionAttribute_t1059_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43091_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractOptionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43091_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9192_IList_1_Insert_m43091_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43091_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9192_IList_1_RemoveAt_m43092_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43092_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractOptionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43092_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9192_IList_1_RemoveAt_m43092_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43092_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9192_IList_1_get_Item_m43088_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ContractOptionAttribute_t1059_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43088_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractOptionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43088_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9192_il2cpp_TypeInfo/* declaring_type */
	, &ContractOptionAttribute_t1059_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9192_IList_1_get_Item_m43088_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43088_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractOptionAttribute_t1059_0_0_0;
static ParameterInfo IList_1_t9192_IList_1_set_Item_m43089_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContractOptionAttribute_t1059_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43089_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractOptionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43089_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9192_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9192_IList_1_set_Item_m43089_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43089_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9192_MethodInfos[] =
{
	&IList_1_IndexOf_m43090_MethodInfo,
	&IList_1_Insert_m43091_MethodInfo,
	&IList_1_RemoveAt_m43092_MethodInfo,
	&IList_1_get_Item_m43088_MethodInfo,
	&IList_1_set_Item_m43089_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9192_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9191_il2cpp_TypeInfo,
	&IEnumerable_1_t9193_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9192_0_0_0;
extern Il2CppType IList_1_t9192_1_0_0;
struct IList_1_t9192;
extern Il2CppGenericClass IList_1_t9192_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9192_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9192_MethodInfos/* methods */
	, IList_1_t9192_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9192_il2cpp_TypeInfo/* element_class */
	, IList_1_t9192_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9192_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9192_0_0_0/* byval_arg */
	, &IList_1_t9192_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9192_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7707_il2cpp_TypeInfo;

// System.Diagnostics.Contracts.ContractFailureKind
#include "Rackspace_Collections_Immutable_System_Diagnostics_Contracts_11.h"


// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>
extern MethodInfo IEnumerator_1_get_Current_m43093_MethodInfo;
static PropertyInfo IEnumerator_1_t7707____Current_PropertyInfo = 
{
	&IEnumerator_1_t7707_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43093_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7707_PropertyInfos[] =
{
	&IEnumerator_1_t7707____Current_PropertyInfo,
	NULL
};
extern Il2CppType ContractFailureKind_t1062_0_0_0;
extern void* RuntimeInvoker_ContractFailureKind_t1062 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43093_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43093_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7707_il2cpp_TypeInfo/* declaring_type */
	, &ContractFailureKind_t1062_0_0_0/* return_type */
	, RuntimeInvoker_ContractFailureKind_t1062/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43093_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7707_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43093_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7707_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7707_0_0_0;
extern Il2CppType IEnumerator_1_t7707_1_0_0;
struct IEnumerator_1_t7707;
extern Il2CppGenericClass IEnumerator_1_t7707_GenericClass;
TypeInfo IEnumerator_1_t7707_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7707_MethodInfos/* methods */
	, IEnumerator_1_t7707_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7707_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7707_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7707_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7707_0_0_0/* byval_arg */
	, &IEnumerator_1_t7707_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7707_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_269.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5856_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_269MethodDeclarations.h"

extern TypeInfo ContractFailureKind_t1062_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25080_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContractFailureKind_t1062_m34144_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractFailureKind>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Diagnostics.Contracts.ContractFailureKind>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisContractFailureKind_t1062_m34144 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25075_MethodInfo;
 void InternalEnumerator_1__ctor_m25075 (InternalEnumerator_1_t5856 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25076_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25076 (InternalEnumerator_1_t5856 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25077_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25077 (InternalEnumerator_1_t5856 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25080(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25080_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ContractFailureKind_t1062_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25078_MethodInfo;
 void InternalEnumerator_1_Dispose_m25078 (InternalEnumerator_1_t5856 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25079_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25079 (InternalEnumerator_1_t5856 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25080 (InternalEnumerator_1_t5856 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisContractFailureKind_t1062_m34144(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisContractFailureKind_t1062_m34144_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5856____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5856_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5856, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5856____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5856_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5856, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5856_FieldInfos[] =
{
	&InternalEnumerator_1_t5856____array_0_FieldInfo,
	&InternalEnumerator_1_t5856____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t5856____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5856_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25077_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5856____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5856_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25080_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5856_PropertyInfos[] =
{
	&InternalEnumerator_1_t5856____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5856____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5856_InternalEnumerator_1__ctor_m25075_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25075_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25075_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25075/* method */
	, &InternalEnumerator_1_t5856_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5856_InternalEnumerator_1__ctor_m25075_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25075_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25076_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25076_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25076/* method */
	, &InternalEnumerator_1_t5856_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25076_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25077_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25077_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25077/* method */
	, &InternalEnumerator_1_t5856_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25077_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25078_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25078_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25078/* method */
	, &InternalEnumerator_1_t5856_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25078_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25079_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25079_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25079/* method */
	, &InternalEnumerator_1_t5856_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25079_GenericMethod/* genericMethod */

};
extern Il2CppType ContractFailureKind_t1062_0_0_0;
extern void* RuntimeInvoker_ContractFailureKind_t1062 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25080_GenericMethod;
// T System.Array/InternalEnumerator`1<System.Diagnostics.Contracts.ContractFailureKind>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25080_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25080/* method */
	, &InternalEnumerator_1_t5856_il2cpp_TypeInfo/* declaring_type */
	, &ContractFailureKind_t1062_0_0_0/* return_type */
	, RuntimeInvoker_ContractFailureKind_t1062/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25080_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5856_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25075_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25076_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25077_MethodInfo,
	&InternalEnumerator_1_Dispose_m25078_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25079_MethodInfo,
	&InternalEnumerator_1_get_Current_m25080_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t5856_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25077_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25079_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25076_MethodInfo,
	&InternalEnumerator_1_Dispose_m25078_MethodInfo,
	&InternalEnumerator_1_get_Current_m25080_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5856_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7707_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5856_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7707_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5856_0_0_0;
extern Il2CppType InternalEnumerator_1_t5856_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5856_GenericClass;
TypeInfo InternalEnumerator_1_t5856_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5856_MethodInfos/* methods */
	, InternalEnumerator_1_t5856_PropertyInfos/* properties */
	, InternalEnumerator_1_t5856_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5856_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5856_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5856_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5856_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5856_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5856_1_0_0/* this_arg */
	, InternalEnumerator_1_t5856_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5856_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5856)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9194_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>
extern MethodInfo ICollection_1_get_Count_m43094_MethodInfo;
static PropertyInfo ICollection_1_t9194____Count_PropertyInfo = 
{
	&ICollection_1_t9194_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43094_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43095_MethodInfo;
static PropertyInfo ICollection_1_t9194____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9194_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43095_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9194_PropertyInfos[] =
{
	&ICollection_1_t9194____Count_PropertyInfo,
	&ICollection_1_t9194____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43094_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::get_Count()
MethodInfo ICollection_1_get_Count_m43094_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9194_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43094_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43095_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43095_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9194_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43095_GenericMethod/* genericMethod */

};
extern Il2CppType ContractFailureKind_t1062_0_0_0;
extern Il2CppType ContractFailureKind_t1062_0_0_0;
static ParameterInfo ICollection_1_t9194_ICollection_1_Add_m43096_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractFailureKind_t1062_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43096_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::Add(T)
MethodInfo ICollection_1_Add_m43096_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, ICollection_1_t9194_ICollection_1_Add_m43096_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43096_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43097_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::Clear()
MethodInfo ICollection_1_Clear_m43097_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9194_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43097_GenericMethod/* genericMethod */

};
extern Il2CppType ContractFailureKind_t1062_0_0_0;
static ParameterInfo ICollection_1_t9194_ICollection_1_Contains_m43098_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractFailureKind_t1062_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43098_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::Contains(T)
MethodInfo ICollection_1_Contains_m43098_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9194_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int32_t104/* invoker_method */
	, ICollection_1_t9194_ICollection_1_Contains_m43098_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43098_GenericMethod/* genericMethod */

};
extern Il2CppType ContractFailureKindU5BU5D_t7080_0_0_0;
extern Il2CppType ContractFailureKindU5BU5D_t7080_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9194_ICollection_1_CopyTo_m43099_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContractFailureKindU5BU5D_t7080_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43099_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43099_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9194_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9194_ICollection_1_CopyTo_m43099_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43099_GenericMethod/* genericMethod */

};
extern Il2CppType ContractFailureKind_t1062_0_0_0;
static ParameterInfo ICollection_1_t9194_ICollection_1_Remove_m43100_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractFailureKind_t1062_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43100_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.Diagnostics.Contracts.ContractFailureKind>::Remove(T)
MethodInfo ICollection_1_Remove_m43100_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9194_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int32_t104/* invoker_method */
	, ICollection_1_t9194_ICollection_1_Remove_m43100_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43100_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9194_MethodInfos[] =
{
	&ICollection_1_get_Count_m43094_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43095_MethodInfo,
	&ICollection_1_Add_m43096_MethodInfo,
	&ICollection_1_Clear_m43097_MethodInfo,
	&ICollection_1_Contains_m43098_MethodInfo,
	&ICollection_1_CopyTo_m43099_MethodInfo,
	&ICollection_1_Remove_m43100_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9196_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9194_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9196_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9194_0_0_0;
extern Il2CppType ICollection_1_t9194_1_0_0;
struct ICollection_1_t9194;
extern Il2CppGenericClass ICollection_1_t9194_GenericClass;
TypeInfo ICollection_1_t9194_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9194_MethodInfos/* methods */
	, ICollection_1_t9194_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9194_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9194_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9194_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9194_0_0_0/* byval_arg */
	, &ICollection_1_t9194_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9194_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractFailureKind>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractFailureKind>
extern Il2CppType IEnumerator_1_t7707_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43101_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Diagnostics.Contracts.ContractFailureKind>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43101_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9196_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7707_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43101_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9196_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43101_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9196_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9196_0_0_0;
extern Il2CppType IEnumerable_1_t9196_1_0_0;
struct IEnumerable_1_t9196;
extern Il2CppGenericClass IEnumerable_1_t9196_GenericClass;
TypeInfo IEnumerable_1_t9196_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9196_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9196_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9196_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9196_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9196_0_0_0/* byval_arg */
	, &IEnumerable_1_t9196_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9196_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9195_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractFailureKind>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractFailureKind>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractFailureKind>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractFailureKind>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractFailureKind>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractFailureKind>
extern MethodInfo IList_1_get_Item_m43102_MethodInfo;
extern MethodInfo IList_1_set_Item_m43103_MethodInfo;
static PropertyInfo IList_1_t9195____Item_PropertyInfo = 
{
	&IList_1_t9195_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43102_MethodInfo/* get */
	, &IList_1_set_Item_m43103_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9195_PropertyInfos[] =
{
	&IList_1_t9195____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContractFailureKind_t1062_0_0_0;
static ParameterInfo IList_1_t9195_IList_1_IndexOf_m43104_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContractFailureKind_t1062_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43104_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractFailureKind>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43104_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9195_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9195_IList_1_IndexOf_m43104_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43104_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractFailureKind_t1062_0_0_0;
static ParameterInfo IList_1_t9195_IList_1_Insert_m43105_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContractFailureKind_t1062_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43105_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractFailureKind>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43105_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9195_IList_1_Insert_m43105_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43105_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9195_IList_1_RemoveAt_m43106_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43106_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractFailureKind>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43106_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9195_IList_1_RemoveAt_m43106_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43106_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9195_IList_1_get_Item_m43102_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ContractFailureKind_t1062_0_0_0;
extern void* RuntimeInvoker_ContractFailureKind_t1062_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43102_GenericMethod;
// T System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractFailureKind>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43102_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9195_il2cpp_TypeInfo/* declaring_type */
	, &ContractFailureKind_t1062_0_0_0/* return_type */
	, RuntimeInvoker_ContractFailureKind_t1062_Int32_t104/* invoker_method */
	, IList_1_t9195_IList_1_get_Item_m43102_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43102_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ContractFailureKind_t1062_0_0_0;
static ParameterInfo IList_1_t9195_IList_1_set_Item_m43103_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContractFailureKind_t1062_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43103_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.Diagnostics.Contracts.ContractFailureKind>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43103_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9195_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9195_IList_1_set_Item_m43103_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43103_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9195_MethodInfos[] =
{
	&IList_1_IndexOf_m43104_MethodInfo,
	&IList_1_Insert_m43105_MethodInfo,
	&IList_1_RemoveAt_m43106_MethodInfo,
	&IList_1_get_Item_m43102_MethodInfo,
	&IList_1_set_Item_m43103_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9195_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9194_il2cpp_TypeInfo,
	&IEnumerable_1_t9196_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9195_0_0_0;
extern Il2CppType IList_1_t9195_1_0_0;
struct IList_1_t9195;
extern Il2CppGenericClass IList_1_t9195_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9195_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9195_MethodInfos/* methods */
	, IList_1_t9195_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9195_il2cpp_TypeInfo/* element_class */
	, IList_1_t9195_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9195_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9195_0_0_0/* byval_arg */
	, &IList_1_t9195_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9195_GenericClass/* generic_class */
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
// System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Linq_ImmutableArrayEx_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo;
// System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>
#include "Rackspace_Collections_Immutable_System_Linq_ImmutableArrayEx_1MethodDeclarations.h"

// System.Threading.Thread
#include "mscorlib_System_Threading_Thread.h"
// System.Collections.Immutable.ImmutableArray`1<System.Object>
#include "Rackspace_Collections_Immutable_System_Collections_Immutable_126.h"
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
#include "System_Core_System_Func_2_gen_22.h"
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_gen_0.h"
#include "mscorlib_ArrayTypes.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedException.h"
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Thread_t155_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t137_il2cpp_TypeInfo;
extern TypeInfo ImmutableArray_1_t5584_il2cpp_TypeInfo;
extern TypeInfo Func_2_t5857_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t4557_il2cpp_TypeInfo;
extern TypeInfo Func_3_t5419_il2cpp_TypeInfo;
extern TypeInfo Boolean_t109_il2cpp_TypeInfo;
extern TypeInfo Void_t100_il2cpp_TypeInfo;
extern TypeInfo NotSupportedException_t136_il2cpp_TypeInfo;
// System.Threading.Thread
#include "mscorlib_System_Threading_ThreadMethodDeclarations.h"
// System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
#include "System_Core_System_Func_2_gen_22MethodDeclarations.h"
// System.Func`3<System.Object,System.Object,System.Object>
#include "System_Core_System_Func_3_gen_0MethodDeclarations.h"
// System.NotSupportedException
#include "mscorlib_System_NotSupportedExceptionMethodDeclarations.h"
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
extern MethodInfo Thread_get_CurrentThread_m558_MethodInfo;
extern MethodInfo Thread_get_ManagedThreadId_m559_MethodInfo;
extern MethodInfo U3CSelectManyIteratorU3Ed__0_3__ctor_m25088_MethodInfo;
extern MethodInfo U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m25081_MethodInfo;
extern MethodInfo Func_2_Invoke_m25092_MethodInfo;
extern MethodInfo IEnumerable_1_GetEnumerator_m33498_MethodInfo;
extern MethodInfo IEnumerator_1_get_Current_m33574_MethodInfo;
extern MethodInfo Func_3_Invoke_m21539_MethodInfo;
extern MethodInfo IEnumerator_MoveNext_m344_MethodInfo;
extern MethodInfo U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally7_m25090_MethodInfo;
extern MethodInfo U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally3_m25089_MethodInfo;
extern MethodInfo U3CSelectManyIteratorU3Ed__0_3_System_IDisposable_Dispose_m25086_MethodInfo;
extern MethodInfo NotSupportedException__ctor_m438_MethodInfo;
extern MethodInfo Object__ctor_m313_MethodInfo;
extern MethodInfo IDisposable_Dispose_m345_MethodInfo;


// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
 Object_t* U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m25081_gshared (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method)
{
	U3CSelectManyIteratorU3Ed__0_3_t5858 * V_0 = {0};
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t155_il2cpp_TypeInfo));
		Thread_t155 * L_0 = Thread_get_CurrentThread_m558(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentThread_m558_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = Thread_get_ManagedThreadId_m559(L_0, /*hidden argument*/&Thread_get_ManagedThreadId_m559_MethodInfo);
		int32_t L_2 = (__this->___U3CU3El__initialThreadId_2);
		if ((((uint32_t)L_1) != ((uint32_t)L_2)))
		{
			goto IL_0027;
		}
	}
	{
		int32_t L_3 = (__this->___U3CU3E1__state_1);
		if ((((uint32_t)L_3) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0027;
		}
	}
	{
		__this->___U3CU3E1__state_1 = 0;
		V_0 = __this;
		goto IL_002e;
	}

IL_0027:
	{
		U3CSelectManyIteratorU3Ed__0_3_t5858 * L_4 = (U3CSelectManyIteratorU3Ed__0_3_t5858 *)il2cpp_codegen_object_new (IL2CPP_RGCTX_DATA(InitializedTypeInfo(method->declaring_type)->rgctx_data, 0));
		(( void (*) (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, int32_t p0, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1)->method)(L_4, 0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 1));
		V_0 = L_4;
	}

IL_002e:
	{
		ImmutableArray_1_t5584  L_5 = (__this->___U3CU3E3__immutableArray_4);
		NullCheck(V_0);
		V_0->___immutableArray_3 = L_5;
		Func_2_t5857 * L_6 = (__this->___U3CU3E3__collectionSelector_6);
		NullCheck(V_0);
		V_0->___collectionSelector_5 = L_6;
		Func_3_t5419 * L_7 = (__this->___U3CU3E3__resultSelector_8);
		NullCheck(V_0);
		V_0->___resultSelector_7 = L_7;
		return V_0;
	}
}
// System.Collections.IEnumerator System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
extern MethodInfo U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerable_GetEnumerator_m25082_MethodInfo;
 Object_t * U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerable_GetEnumerator_m25082_gshared (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method)
{
	{
		Object_t* L_0 = (( Object_t* (*) (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 2));
		return L_0;
	}
}
// System.Boolean System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::MoveNext()
extern MethodInfo U3CSelectManyIteratorU3Ed__0_3_MoveNext_m25083_MethodInfo;
 bool U3CSelectManyIteratorU3Ed__0_3_MoveNext_m25083_gshared (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method)
{
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t leaveInstructions[1] = {0};
	Exception_t115 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t115 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);

IL_0000:
	try
	{ // begin try (depth: 1)
		{
			int32_t L_0 = (__this->___U3CU3E1__state_1);
			V_1 = L_0;
			if ((((int32_t)V_1) == ((int32_t)0)))
			{
				goto IL_0017;
			}
		}

IL_000b:
		{
			if ((((int32_t)V_1) == ((int32_t)3)))
			{
				goto IL_00b7;
			}
		}

IL_0012:
		{
			goto IL_00f8;
		}

IL_0017:
		{
			__this->___U3CU3E1__state_1 = (-1);
			__this->___U3CU3E1__state_1 = 1;
			ImmutableArray_1_t5584 * L_1 = &(__this->___immutableArray_3);
			NullCheck(L_1);
			ObjectU5BU5D_t126* L_2 = (L_1->___array_1);
			__this->___U3CU3E7__wrap4_11 = L_2;
			__this->___U3CU3E7__wrap5_12 = 0;
			goto IL_00df;
		}

IL_0042:
		{
			ObjectU5BU5D_t126* L_3 = (__this->___U3CU3E7__wrap4_11);
			int32_t L_4 = (__this->___U3CU3E7__wrap5_12);
			NullCheck(L_3);
			IL2CPP_ARRAY_BOUNDS_CHECK(L_3, L_4);
			int32_t L_5 = L_4;
			__this->___U3CitemU3E5__1_9 = (*(Object_t **)(Object_t **)SZArrayLdElema(L_3, L_5));
			Func_2_t5857 * L_6 = (__this->___collectionSelector_5);
			Object_t * L_7 = (__this->___U3CitemU3E5__1_9);
			NullCheck(L_6);
			Object_t* L_8 = (Object_t*)VirtFuncInvoker1< Object_t*, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 3), L_6, L_7);
			NullCheck(L_8);
			Object_t* L_9 = (Object_t*)InterfaceFuncInvoker0< Object_t* >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 4), L_8);
			__this->___U3CU3E7__wrap6_13 = L_9;
			__this->___U3CU3E1__state_1 = 2;
			goto IL_00be;
		}

IL_007e:
		{
			Object_t* L_10 = (__this->___U3CU3E7__wrap6_13);
			NullCheck(L_10);
			Object_t * L_11 = (Object_t *)InterfaceFuncInvoker0< Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 5), L_10);
			__this->___U3CresultU3E5__2_10 = L_11;
			Func_3_t5419 * L_12 = (__this->___resultSelector_7);
			Object_t * L_13 = (__this->___U3CitemU3E5__1_9);
			Object_t * L_14 = (__this->___U3CresultU3E5__2_10);
			NullCheck(L_12);
			Object_t * L_15 = (Object_t *)VirtFuncInvoker2< Object_t *, Object_t *, Object_t * >::Invoke(IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 6), L_12, L_13, L_14);
			__this->___U3CU3E2__current_0 = L_15;
			__this->___U3CU3E1__state_1 = 3;
			V_0 = 1;
			// IL_00b5: leave.s IL_0103
			goto IL_0103;
		}

IL_00b7:
		{
			__this->___U3CU3E1__state_1 = 2;
		}

IL_00be:
		{
			Object_t* L_16 = (__this->___U3CU3E7__wrap6_13);
			NullCheck(L_16);
			bool L_17 = (bool)InterfaceFuncInvoker0< bool >::Invoke(&IEnumerator_MoveNext_m344_MethodInfo, L_16);
			if (L_17)
			{
				goto IL_007e;
			}
		}

IL_00cb:
		{
			(( void (*) (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
			int32_t L_18 = (__this->___U3CU3E7__wrap5_12);
			__this->___U3CU3E7__wrap5_12 = ((int32_t)(L_18+1));
		}

IL_00df:
		{
			int32_t L_19 = (__this->___U3CU3E7__wrap5_12);
			ObjectU5BU5D_t126* L_20 = (__this->___U3CU3E7__wrap4_11);
			NullCheck(L_20);
			if ((((int32_t)L_19) < ((int32_t)(((int32_t)(((Array_t *)L_20)->max_length))))))
			{
				goto IL_0042;
			}
		}

IL_00f2:
		{
			(( void (*) (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		}

IL_00f8:
		{
			V_0 = 0;
			// IL_00fa: leave.s IL_0103
			goto IL_0103;
		}
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_00fc;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t115 *)e.ex;
		goto IL_00fc;
	}

IL_00fc:
	{ // begin fault (depth: 1)
		(( void (*) (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 9));
		// fault node depth: 1
		switch (leaveInstructions[0])
		{
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t115 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end fault

IL_0103:
	{
		return V_0;
	}
}
// TResult System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
extern MethodInfo U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m25084_MethodInfo;
 Object_t * U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m25084_gshared (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U3CU3E2__current_0);
		return L_0;
	}
}
// System.Void System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerator.Reset()
extern MethodInfo U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_Reset_m25085_MethodInfo;
 void U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_Reset_m25085_gshared (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method)
{
	{
		NotSupportedException_t136 * L_0 = (NotSupportedException_t136 *)il2cpp_codegen_object_new (InitializedTypeInfo(&NotSupportedException_t136_il2cpp_TypeInfo));
		NotSupportedException__ctor_m438(L_0, /*hidden argument*/&NotSupportedException__ctor_m438_MethodInfo);
		il2cpp_codegen_raise_exception(L_0);
	}
}
// System.Void System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::System.IDisposable.Dispose()
 void U3CSelectManyIteratorU3Ed__0_3_System_IDisposable_Dispose_m25086_gshared (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t leaveInstructions[1] = {0};
	Exception_t115 * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t115 * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	{
		int32_t L_0 = (__this->___U3CU3E1__state_1);
		V_0 = L_0;
		if (((int32_t)(V_0-1)) == 0)
		{
			goto IL_001c;
		}
		if (((int32_t)(V_0-1)) == 1)
		{
			goto IL_001c;
		}
		if (((int32_t)(V_0-1)) == 2)
		{
			goto IL_001c;
		}
	}
	{
		return;
	}

IL_001c:
	{
		int32_t L_1 = (__this->___U3CU3E1__state_1);
		V_1 = L_1;
		if (((int32_t)(V_1-2)) == 0)
		{
			goto IL_0035;
		}
		if (((int32_t)(V_1-2)) == 1)
		{
			goto IL_0035;
		}
	}
	{
		goto IL_003e;
	}

IL_0035:
	try
	{ // begin try (depth: 1)
		// IL_0035: leave.s IL_003e
		leaveInstructions[0] = 0x3E; // 1
		THROW_SENTINEL(IL_003e);
		// finally target depth: 1
	} // end try (depth: 1)
	catch(Il2CppFinallySentinel& e)
	{
		goto IL_0037;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t115 *)e.ex;
		goto IL_0037;
	}

IL_0037:
	{ // begin finally (depth: 1)
		(( void (*) (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 7));
		// finally node depth: 1
		switch (leaveInstructions[0])
		{
			case 0x3E:
				goto IL_003e;
			default:
			{
				#if IL2CPP_DEBUG
				assert( __last_unhandled_exception != 0 && "invalid leaveInstruction at depth 1, __last_unhandled_exception has not been set");
				#endif
				Exception_t115 * _tmp_exception_local = __last_unhandled_exception;
				__last_unhandled_exception = 0;
				il2cpp_codegen_raise_exception(_tmp_exception_local);
			}
		}
	} // end finally (depth: 1)

IL_003e:
	{
		(( void (*) (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method))IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8)->method)(__this, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(InitializedTypeInfo(method->declaring_type)->rgctx_data, 8));
		return;
	}
}
// System.Object System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
extern MethodInfo U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_get_Current_m25087_MethodInfo;
 Object_t * U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_get_Current_m25087_gshared (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method)
{
	{
		Object_t * L_0 = (__this->___U3CU3E2__current_0);
		Object_t * L_1 = L_0;
		return ((Object_t *)L_1);
	}
}
// System.Void System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::.ctor(System.Int32)
 void U3CSelectManyIteratorU3Ed__0_3__ctor_m25088_gshared (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, int32_t ___U3CU3E1__state, MethodInfo* method)
{
	{
		Object__ctor_m313(__this, /*hidden argument*/&Object__ctor_m313_MethodInfo);
		__this->___U3CU3E1__state_1 = ___U3CU3E1__state;
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Thread_t155_il2cpp_TypeInfo));
		Thread_t155 * L_0 = Thread_get_CurrentThread_m558(NULL /*static, unused*/, /*hidden argument*/&Thread_get_CurrentThread_m558_MethodInfo);
		NullCheck(L_0);
		int32_t L_1 = Thread_get_ManagedThreadId_m559(L_0, /*hidden argument*/&Thread_get_ManagedThreadId_m559_MethodInfo);
		__this->___U3CU3El__initialThreadId_2 = L_1;
		return;
	}
}
// System.Void System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::<>m__Finally3()
 void U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally3_m25089_gshared (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method)
{
	{
		__this->___U3CU3E1__state_1 = (-1);
		return;
	}
}
// System.Void System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::<>m__Finally7()
 void U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally7_m25090_gshared (U3CSelectManyIteratorU3Ed__0_3_t5858 * __this, MethodInfo* method)
{
	{
		__this->___U3CU3E1__state_1 = 1;
		Object_t* L_0 = (__this->___U3CU3E7__wrap6_13);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		Object_t* L_1 = (__this->___U3CU3E7__wrap6_13);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(&IDisposable_Dispose_m345_MethodInfo, L_1);
	}

IL_001a:
	{
		return;
	}
}
// Metadata Definition System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>
extern Il2CppType Object_t_0_0_1;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E2__current_0_FieldInfo = 
{
	"<>2__current"/* name */
	, &Object_t_0_0_1/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___U3CU3E2__current_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E1__state_1_FieldInfo = 
{
	"<>1__state"/* name */
	, &Int32_t104_0_0_1/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___U3CU3E1__state_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3El__initialThreadId_2_FieldInfo = 
{
	"<>l__initialThreadId"/* name */
	, &Int32_t104_0_0_1/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___U3CU3El__initialThreadId_2)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ImmutableArray_1_t5584_0_0_6;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____immutableArray_3_FieldInfo = 
{
	"immutableArray"/* name */
	, &ImmutableArray_1_t5584_0_0_6/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___immutableArray_3)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ImmutableArray_1_t5584_0_0_6;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E3__immutableArray_4_FieldInfo = 
{
	"<>3__immutableArray"/* name */
	, &ImmutableArray_1_t5584_0_0_6/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___U3CU3E3__immutableArray_4)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Func_2_t5857_0_0_6;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____collectionSelector_5_FieldInfo = 
{
	"collectionSelector"/* name */
	, &Func_2_t5857_0_0_6/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___collectionSelector_5)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Func_2_t5857_0_0_6;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E3__collectionSelector_6_FieldInfo = 
{
	"<>3__collectionSelector"/* name */
	, &Func_2_t5857_0_0_6/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___U3CU3E3__collectionSelector_6)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Func_3_t5419_0_0_6;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____resultSelector_7_FieldInfo = 
{
	"resultSelector"/* name */
	, &Func_3_t5419_0_0_6/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___resultSelector_7)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Func_3_t5419_0_0_6;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E3__resultSelector_8_FieldInfo = 
{
	"<>3__resultSelector"/* name */
	, &Func_3_t5419_0_0_6/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___U3CU3E3__resultSelector_8)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_6;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____U3CitemU3E5__1_9_FieldInfo = 
{
	"<item>5__1"/* name */
	, &Object_t_0_0_6/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___U3CitemU3E5__1_9)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Object_t_0_0_6;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____U3CresultU3E5__2_10_FieldInfo = 
{
	"<result>5__2"/* name */
	, &Object_t_0_0_6/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___U3CresultU3E5__2_10)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType ObjectU5BU5D_t126_0_0_6;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E7__wrap4_11_FieldInfo = 
{
	"<>7__wrap4"/* name */
	, &ObjectU5BU5D_t126_0_0_6/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___U3CU3E7__wrap4_11)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_6;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E7__wrap5_12_FieldInfo = 
{
	"<>7__wrap5"/* name */
	, &Int32_t104_0_0_6/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___U3CU3E7__wrap5_12)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType IEnumerator_1_t137_0_0_6;
FieldInfo U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E7__wrap6_13_FieldInfo = 
{
	"<>7__wrap6"/* name */
	, &IEnumerator_1_t137_0_0_6/* type */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, offsetof(U3CSelectManyIteratorU3Ed__0_3_t5858, ___U3CU3E7__wrap6_13)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* U3CSelectManyIteratorU3Ed__0_3_t5858_FieldInfos[] =
{
	&U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E2__current_0_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E1__state_1_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3El__initialThreadId_2_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____immutableArray_3_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E3__immutableArray_4_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____collectionSelector_5_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E3__collectionSelector_6_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____resultSelector_7_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E3__resultSelector_8_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____U3CitemU3E5__1_9_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____U3CresultU3E5__2_10_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E7__wrap4_11_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E7__wrap5_12_FieldInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____U3CU3E7__wrap6_13_FieldInfo,
	NULL
};
static PropertyInfo U3CSelectManyIteratorU3Ed__0_3_t5858____System_Collections_Generic_IEnumeratorU3CTResultU3E_Current_PropertyInfo = 
{
	&U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, "System.Collections.Generic.IEnumerator<TResult>.Current"/* name */
	, &U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m25084_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo U3CSelectManyIteratorU3Ed__0_3_t5858____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_get_Current_m25087_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* U3CSelectManyIteratorU3Ed__0_3_t5858_PropertyInfos[] =
{
	&U3CSelectManyIteratorU3Ed__0_3_t5858____System_Collections_Generic_IEnumeratorU3CTResultU3E_Current_PropertyInfo,
	&U3CSelectManyIteratorU3Ed__0_3_t5858____System_Collections_IEnumerator_Current_PropertyInfo,
	NULL
};
extern Il2CppType IEnumerator_1_t137_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m4995;
extern Il2CppGenericMethod U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m25081_GenericMethod;
// System.Collections.Generic.IEnumerator`1<TResult> System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
MethodInfo U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m25081_MethodInfo = 
{
	"System.Collections.Generic.IEnumerable<TResult>.GetEnumerator"/* name */
	, (methodPointerType)&U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m25081_gshared/* method */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t137_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m4995/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m25081_GenericMethod/* genericMethod */

};
extern Il2CppType IEnumerator_t51_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerable_GetEnumerator_m4996;
extern Il2CppGenericMethod U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerable_GetEnumerator_m25082_GenericMethod;
// System.Collections.IEnumerator System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerable.GetEnumerator()
MethodInfo U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerable_GetEnumerator_m25082_MethodInfo = 
{
	"System.Collections.IEnumerable.GetEnumerator"/* name */
	, (methodPointerType)&U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerable_GetEnumerator_m25082_gshared/* method */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_t51_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerable_GetEnumerator_m4996/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerable_GetEnumerator_m25082_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CSelectManyIteratorU3Ed__0_3_MoveNext_m25083_GenericMethod;
// System.Boolean System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::MoveNext()
MethodInfo U3CSelectManyIteratorU3Ed__0_3_MoveNext_m25083_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&U3CSelectManyIteratorU3Ed__0_3_MoveNext_m25083_gshared/* method */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CSelectManyIteratorU3Ed__0_3_MoveNext_m25083_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m4998;
extern Il2CppGenericMethod U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m25084_GenericMethod;
// TResult System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::System.Collections.Generic.IEnumerator<TResult>.get_Current()
MethodInfo U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m25084_MethodInfo = 
{
	"System.Collections.Generic.IEnumerator<TResult>.get_Current"/* name */
	, (methodPointerType)&U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m25084_gshared/* method */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m4998/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m25084_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_Reset_m4999;
extern Il2CppGenericMethod U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_Reset_m25085_GenericMethod;
// System.Void System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerator.Reset()
MethodInfo U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_Reset_m25085_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_Reset_m25085_gshared/* method */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_Reset_m4999/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_Reset_m25085_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CSelectManyIteratorU3Ed__0_3_System_IDisposable_Dispose_m25086_GenericMethod;
// System.Void System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::System.IDisposable.Dispose()
MethodInfo U3CSelectManyIteratorU3Ed__0_3_System_IDisposable_Dispose_m25086_MethodInfo = 
{
	"System.IDisposable.Dispose"/* name */
	, (methodPointerType)&U3CSelectManyIteratorU3Ed__0_3_System_IDisposable_Dispose_m25086_gshared/* method */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 10/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CSelectManyIteratorU3Ed__0_3_System_IDisposable_Dispose_m25086_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_get_Current_m5001;
extern Il2CppGenericMethod U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_get_Current_m25087_GenericMethod;
// System.Object System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
MethodInfo U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_get_Current_m25087_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_get_Current_m25087_gshared/* method */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_get_Current_m5001/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_get_Current_m25087_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo U3CSelectManyIteratorU3Ed__0_3_t5858_U3CSelectManyIteratorU3Ed__0_3__ctor_m25088_ParameterInfos[] = 
{
	{"<>1__state", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3__ctor_m5002;
extern Il2CppGenericMethod U3CSelectManyIteratorU3Ed__0_3__ctor_m25088_GenericMethod;
// System.Void System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::.ctor(System.Int32)
MethodInfo U3CSelectManyIteratorU3Ed__0_3__ctor_m25088_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&U3CSelectManyIteratorU3Ed__0_3__ctor_m25088_gshared/* method */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, U3CSelectManyIteratorU3Ed__0_3_t5858_U3CSelectManyIteratorU3Ed__0_3__ctor_m25088_ParameterInfos/* parameters */
	, &U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3__ctor_m5002/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CSelectManyIteratorU3Ed__0_3__ctor_m25088_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally3_m25089_GenericMethod;
// System.Void System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::<>m__Finally3()
MethodInfo U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally3_m25089_MethodInfo = 
{
	"<>m__Finally3"/* name */
	, (methodPointerType)&U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally3_m25089_gshared/* method */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally3_m25089_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally7_m25090_GenericMethod;
// System.Void System.Linq.ImmutableArrayExtensions/<SelectManyIterator>d__0`3<System.Object,System.Object,System.Object>::<>m__Finally7()
MethodInfo U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally7_m25090_MethodInfo = 
{
	"<>m__Finally7"/* name */
	, (methodPointerType)&U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally7_m25090_gshared/* method */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally7_m25090_GenericMethod/* genericMethod */

};
static MethodInfo* U3CSelectManyIteratorU3Ed__0_3_t5858_MethodInfos[] =
{
	&U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m25081_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerable_GetEnumerator_m25082_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_MoveNext_m25083_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m25084_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_Reset_m25085_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_System_IDisposable_Dispose_m25086_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_get_Current_m25087_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3__ctor_m25088_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally3_m25089_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally7_m25090_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m314_MethodInfo;
extern MethodInfo Object_GetHashCode_m315_MethodInfo;
extern MethodInfo Object_ToString_m316_MethodInfo;
static MethodInfo* U3CSelectManyIteratorU3Ed__0_3_t5858_VTable[] =
{
	&Object_Equals_m314_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&Object_GetHashCode_m315_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m25081_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerable_GetEnumerator_m25082_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m25084_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_get_Current_m25087_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_MoveNext_m25083_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_Reset_m25085_MethodInfo,
	&U3CSelectManyIteratorU3Ed__0_3_System_IDisposable_Dispose_m25086_MethodInfo,
};
static TypeInfo* U3CSelectManyIteratorU3Ed__0_3_t5858_InterfacesTypeInfos[] = 
{
	&IEnumerable_1_t4557_il2cpp_TypeInfo,
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerator_1_t137_il2cpp_TypeInfo,
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair U3CSelectManyIteratorU3Ed__0_3_t5858_InterfacesOffsets[] = 
{
	{ &IEnumerable_1_t4557_il2cpp_TypeInfo, 4},
	{ &IEnumerable_t1668_il2cpp_TypeInfo, 5},
	{ &IEnumerator_1_t137_il2cpp_TypeInfo, 6},
	{ &IEnumerator_t51_il2cpp_TypeInfo, 7},
	{ &IDisposable_t114_il2cpp_TypeInfo, 10},
};
extern TypeInfo U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
static Il2CppRGCTXData U3CSelectManyIteratorU3Ed__0_3_t5858_RGCTXData[11] = 
{
	&U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* Class Usage */,
	&U3CSelectManyIteratorU3Ed__0_3__ctor_m25088_MethodInfo/* Method Usage */,
	&U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m25081_MethodInfo/* Method Usage */,
	&Func_2_Invoke_m25092_MethodInfo/* Method Usage */,
	&IEnumerable_1_GetEnumerator_m33498_MethodInfo/* Method Usage */,
	&IEnumerator_1_get_Current_m33574_MethodInfo/* Method Usage */,
	&Func_3_Invoke_m21539_MethodInfo/* Method Usage */,
	&U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally7_m25090_MethodInfo/* Method Usage */,
	&U3CSelectManyIteratorU3Ed__0_3_U3CU3Em__Finally3_m25089_MethodInfo/* Method Usage */,
	&U3CSelectManyIteratorU3Ed__0_3_System_IDisposable_Dispose_m25086_MethodInfo/* Method Usage */,
	&Object_t_il2cpp_TypeInfo/* Class Usage */,
};
extern Il2CppImage g_Rackspace_Collections_Immutable_dll_Image;
extern Il2CppType U3CSelectManyIteratorU3Ed__0_3_t5858_0_0_0;
extern Il2CppType U3CSelectManyIteratorU3Ed__0_3_t5858_1_0_0;
struct U3CSelectManyIteratorU3Ed__0_3_t5858;
extern Il2CppGenericClass U3CSelectManyIteratorU3Ed__0_3_t5858_GenericClass;
extern TypeInfo ImmutableArrayExtensions_t1067_il2cpp_TypeInfo;
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache;
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumerableU3CTResultU3E_GetEnumerator_m4995;
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerable_GetEnumerator_m4996;
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_Generic_IEnumeratorU3CTResultU3E_get_Current_m4998;
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_Reset_m4999;
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3_System_Collections_IEnumerator_get_Current_m5001;
extern CustomAttributesCache U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache_U3CSelectManyIteratorU3Ed__0_3__ctor_m5002;
TypeInfo U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo = 
{
	&g_Rackspace_Collections_Immutable_dll_Image/* image */
	, NULL/* gc_desc */
	, "<SelectManyIterator>d__0`3"/* name */
	, ""/* namespaze */
	, U3CSelectManyIteratorU3Ed__0_3_t5858_MethodInfos/* methods */
	, U3CSelectManyIteratorU3Ed__0_3_t5858_PropertyInfos/* properties */
	, U3CSelectManyIteratorU3Ed__0_3_t5858_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &ImmutableArrayExtensions_t1067_il2cpp_TypeInfo/* nested_in */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* element_class */
	, U3CSelectManyIteratorU3Ed__0_3_t5858_InterfacesTypeInfos/* implemented_interfaces */
	, U3CSelectManyIteratorU3Ed__0_3_t5858_VTable/* vtable */
	, &U3CSelectManyIteratorU3Ed__0_3_t1066__CustomAttributeCache/* custom_attributes_cache */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_il2cpp_TypeInfo/* cast_class */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_0_0_0/* byval_arg */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_1_0_0/* this_arg */
	, U3CSelectManyIteratorU3Ed__0_3_t5858_InterfacesOffsets/* interface_offsets */
	, &U3CSelectManyIteratorU3Ed__0_3_t5858_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, U3CSelectManyIteratorU3Ed__0_3_t5858_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (U3CSelectManyIteratorU3Ed__0_3_t5858)/* instance_size */
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
	, 10/* method_count */
	, 2/* property_count */
	, 14/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 11/* vtable_count */
	, 5/* interfaces_count */
	, 5/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::.ctor(System.Object,System.IntPtr)
// TResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::Invoke(T)
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
// TResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::EndInvoke(System.IAsyncResult)
// Metadata Definition System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t31_0_0_0;
extern Il2CppType IntPtr_t31_0_0_0;
static ParameterInfo Func_2_t5857_Func_2__ctor_m25091_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t31_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2__ctor_m25091_GenericMethod;
// System.Void System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::.ctor(System.Object,System.IntPtr)
MethodInfo Func_2__ctor_m25091_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Func_2__ctor_m16592_gshared/* method */
	, &Func_2_t5857_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_IntPtr_t31/* invoker_method */
	, Func_2_t5857_Func_2__ctor_m25091_ParameterInfos/* parameters */
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
	, &Func_2__ctor_m25091_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Func_2_t5857_Func_2_Invoke_m25092_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IEnumerable_1_t4557_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2_Invoke_m25092_GenericMethod;
// TResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::Invoke(T)
MethodInfo Func_2_Invoke_m25092_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Func_2_Invoke_m16594_gshared/* method */
	, &Func_2_t5857_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerable_1_t4557_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Func_2_t5857_Func_2_Invoke_m25092_ParameterInfos/* parameters */
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
	, &Func_2_Invoke_m25092_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType AsyncCallback_t184_0_0_0;
extern Il2CppType AsyncCallback_t184_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Func_2_t5857_Func_2_BeginInvoke_m25093_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t184_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t183_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2_BeginInvoke_m25093_GenericMethod;
// System.IAsyncResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::BeginInvoke(T,System.AsyncCallback,System.Object)
MethodInfo Func_2_BeginInvoke_m25093_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Func_2_BeginInvoke_m16596_gshared/* method */
	, &Func_2_t5857_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t183_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, Func_2_t5857_Func_2_BeginInvoke_m25093_ParameterInfos/* parameters */
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
	, &Func_2_BeginInvoke_m25093_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t183_0_0_0;
extern Il2CppType IAsyncResult_t183_0_0_0;
static ParameterInfo Func_2_t5857_Func_2_EndInvoke_m25094_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t183_0_0_0},
};
extern Il2CppType IEnumerable_1_t4557_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod Func_2_EndInvoke_m25094_GenericMethod;
// TResult System.Func`2<System.Object,System.Collections.Generic.IEnumerable`1<System.Object>>::EndInvoke(System.IAsyncResult)
MethodInfo Func_2_EndInvoke_m25094_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Func_2_EndInvoke_m16598_gshared/* method */
	, &Func_2_t5857_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerable_1_t4557_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t/* invoker_method */
	, Func_2_t5857_Func_2_EndInvoke_m25094_ParameterInfos/* parameters */
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
	, &Func_2_EndInvoke_m25094_GenericMethod/* genericMethod */

};
static MethodInfo* Func_2_t5857_MethodInfos[] =
{
	&Func_2__ctor_m25091_MethodInfo,
	&Func_2_Invoke_m25092_MethodInfo,
	&Func_2_BeginInvoke_m25093_MethodInfo,
	&Func_2_EndInvoke_m25094_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m2112_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m2113_MethodInfo;
extern MethodInfo Delegate_Clone_m2114_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m2115_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m2116_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m2117_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m2118_MethodInfo;
extern MethodInfo Func_2_BeginInvoke_m25093_MethodInfo;
extern MethodInfo Func_2_EndInvoke_m25094_MethodInfo;
static MethodInfo* Func_2_t5857_VTable[] =
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
	&Func_2_Invoke_m25092_MethodInfo,
	&Func_2_BeginInvoke_m25093_MethodInfo,
	&Func_2_EndInvoke_m25094_MethodInfo,
};
extern TypeInfo ICloneable_t458_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t459_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Func_2_t5857_InterfacesOffsets[] = 
{
	{ &ICloneable_t458_il2cpp_TypeInfo, 4},
	{ &ISerializable_t459_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_System_Core_dll_Image;
extern Il2CppType Func_2_t5857_0_0_0;
extern Il2CppType Func_2_t5857_1_0_0;
extern TypeInfo MulticastDelegate_t306_il2cpp_TypeInfo;
struct Func_2_t5857;
extern Il2CppGenericClass Func_2_t5857_GenericClass;
TypeInfo Func_2_t5857_il2cpp_TypeInfo = 
{
	&g_System_Core_dll_Image/* image */
	, NULL/* gc_desc */
	, "Func`2"/* name */
	, "System"/* namespaze */
	, Func_2_t5857_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t306_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Func_2_t5857_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Func_2_t5857_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Func_2_t5857_il2cpp_TypeInfo/* cast_class */
	, &Func_2_t5857_0_0_0/* byval_arg */
	, &Func_2_t5857_1_0_0/* this_arg */
	, Func_2_t5857_InterfacesOffsets/* interface_offsets */
	, &Func_2_t5857_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Func_2_t5857)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t7709_il2cpp_TypeInfo;

// System.ExceptionArgument
#include "Rackspace_Collections_Immutable_System_ExceptionArgument.h"


// T System.Collections.Generic.IEnumerator`1<System.ExceptionArgument>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.ExceptionArgument>
extern MethodInfo IEnumerator_1_get_Current_m43107_MethodInfo;
static PropertyInfo IEnumerator_1_t7709____Current_PropertyInfo = 
{
	&IEnumerator_1_t7709_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43107_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7709_PropertyInfos[] =
{
	&IEnumerator_1_t7709____Current_PropertyInfo,
	NULL
};
extern Il2CppType ExceptionArgument_t1071_0_0_0;
extern void* RuntimeInvoker_ExceptionArgument_t1071 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43107_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<System.ExceptionArgument>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43107_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7709_il2cpp_TypeInfo/* declaring_type */
	, &ExceptionArgument_t1071_0_0_0/* return_type */
	, RuntimeInvoker_ExceptionArgument_t1071/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43107_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7709_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43107_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7709_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7709_0_0_0;
extern Il2CppType IEnumerator_1_t7709_1_0_0;
struct IEnumerator_1_t7709;
extern Il2CppGenericClass IEnumerator_1_t7709_GenericClass;
TypeInfo IEnumerator_1_t7709_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7709_MethodInfos/* methods */
	, IEnumerator_1_t7709_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7709_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7709_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7709_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7709_0_0_0/* byval_arg */
	, &IEnumerator_1_t7709_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7709_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.ExceptionArgument>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_270.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5859_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.ExceptionArgument>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_270MethodDeclarations.h"

extern TypeInfo ExceptionArgument_t1071_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25100_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisExceptionArgument_t1071_m34162_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.ExceptionArgument>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.ExceptionArgument>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisExceptionArgument_t1071_m34162 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<System.ExceptionArgument>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25095_MethodInfo;
 void InternalEnumerator_1__ctor_m25095 (InternalEnumerator_1_t5859 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.ExceptionArgument>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25096_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25096 (InternalEnumerator_1_t5859 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.ExceptionArgument>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25097_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25097 (InternalEnumerator_1_t5859 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25100(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25100_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ExceptionArgument_t1071_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.ExceptionArgument>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25098_MethodInfo;
 void InternalEnumerator_1_Dispose_m25098 (InternalEnumerator_1_t5859 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.ExceptionArgument>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25099_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25099 (InternalEnumerator_1_t5859 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.ExceptionArgument>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25100 (InternalEnumerator_1_t5859 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisExceptionArgument_t1071_m34162(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisExceptionArgument_t1071_m34162_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.ExceptionArgument>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5859____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5859_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5859, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5859____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5859_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5859, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5859_FieldInfos[] =
{
	&InternalEnumerator_1_t5859____array_0_FieldInfo,
	&InternalEnumerator_1_t5859____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t5859____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5859_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25097_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5859____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5859_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25100_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5859_PropertyInfos[] =
{
	&InternalEnumerator_1_t5859____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5859____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5859_InternalEnumerator_1__ctor_m25095_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25095_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ExceptionArgument>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25095_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25095/* method */
	, &InternalEnumerator_1_t5859_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5859_InternalEnumerator_1__ctor_m25095_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25095_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25096_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ExceptionArgument>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25096_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25096/* method */
	, &InternalEnumerator_1_t5859_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25096_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25097_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<System.ExceptionArgument>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25097_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25097/* method */
	, &InternalEnumerator_1_t5859_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25097_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25098_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<System.ExceptionArgument>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25098_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25098/* method */
	, &InternalEnumerator_1_t5859_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25098_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25099_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<System.ExceptionArgument>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25099_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25099/* method */
	, &InternalEnumerator_1_t5859_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25099_GenericMethod/* genericMethod */

};
extern Il2CppType ExceptionArgument_t1071_0_0_0;
extern void* RuntimeInvoker_ExceptionArgument_t1071 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25100_GenericMethod;
// T System.Array/InternalEnumerator`1<System.ExceptionArgument>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25100_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25100/* method */
	, &InternalEnumerator_1_t5859_il2cpp_TypeInfo/* declaring_type */
	, &ExceptionArgument_t1071_0_0_0/* return_type */
	, RuntimeInvoker_ExceptionArgument_t1071/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25100_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5859_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25095_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25096_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25097_MethodInfo,
	&InternalEnumerator_1_Dispose_m25098_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25099_MethodInfo,
	&InternalEnumerator_1_get_Current_m25100_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t5859_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25097_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25099_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25096_MethodInfo,
	&InternalEnumerator_1_Dispose_m25098_MethodInfo,
	&InternalEnumerator_1_get_Current_m25100_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5859_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7709_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5859_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7709_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5859_0_0_0;
extern Il2CppType InternalEnumerator_1_t5859_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5859_GenericClass;
TypeInfo InternalEnumerator_1_t5859_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5859_MethodInfos/* methods */
	, InternalEnumerator_1_t5859_PropertyInfos/* properties */
	, InternalEnumerator_1_t5859_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5859_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5859_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5859_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5859_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5859_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5859_1_0_0/* this_arg */
	, InternalEnumerator_1_t5859_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5859_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5859)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9197_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.ExceptionArgument>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.ExceptionArgument>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.ExceptionArgument>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.ExceptionArgument>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.ExceptionArgument>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.ExceptionArgument>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.ExceptionArgument>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.ExceptionArgument>
extern MethodInfo ICollection_1_get_Count_m43108_MethodInfo;
static PropertyInfo ICollection_1_t9197____Count_PropertyInfo = 
{
	&ICollection_1_t9197_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43108_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43109_MethodInfo;
static PropertyInfo ICollection_1_t9197____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9197_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43109_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9197_PropertyInfos[] =
{
	&ICollection_1_t9197____Count_PropertyInfo,
	&ICollection_1_t9197____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43108_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<System.ExceptionArgument>::get_Count()
MethodInfo ICollection_1_get_Count_m43108_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9197_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43108_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43109_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ExceptionArgument>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43109_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9197_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43109_GenericMethod/* genericMethod */

};
extern Il2CppType ExceptionArgument_t1071_0_0_0;
extern Il2CppType ExceptionArgument_t1071_0_0_0;
static ParameterInfo ICollection_1_t9197_ICollection_1_Add_m43110_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExceptionArgument_t1071_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43110_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ExceptionArgument>::Add(T)
MethodInfo ICollection_1_Add_m43110_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9197_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, ICollection_1_t9197_ICollection_1_Add_m43110_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43110_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43111_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ExceptionArgument>::Clear()
MethodInfo ICollection_1_Clear_m43111_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9197_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43111_GenericMethod/* genericMethod */

};
extern Il2CppType ExceptionArgument_t1071_0_0_0;
static ParameterInfo ICollection_1_t9197_ICollection_1_Contains_m43112_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExceptionArgument_t1071_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43112_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ExceptionArgument>::Contains(T)
MethodInfo ICollection_1_Contains_m43112_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9197_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int32_t104/* invoker_method */
	, ICollection_1_t9197_ICollection_1_Contains_m43112_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43112_GenericMethod/* genericMethod */

};
extern Il2CppType ExceptionArgumentU5BU5D_t7081_0_0_0;
extern Il2CppType ExceptionArgumentU5BU5D_t7081_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9197_ICollection_1_CopyTo_m43113_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ExceptionArgumentU5BU5D_t7081_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43113_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<System.ExceptionArgument>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43113_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9197_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9197_ICollection_1_CopyTo_m43113_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43113_GenericMethod/* genericMethod */

};
extern Il2CppType ExceptionArgument_t1071_0_0_0;
static ParameterInfo ICollection_1_t9197_ICollection_1_Remove_m43114_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExceptionArgument_t1071_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43114_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<System.ExceptionArgument>::Remove(T)
MethodInfo ICollection_1_Remove_m43114_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9197_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int32_t104/* invoker_method */
	, ICollection_1_t9197_ICollection_1_Remove_m43114_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43114_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9197_MethodInfos[] =
{
	&ICollection_1_get_Count_m43108_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43109_MethodInfo,
	&ICollection_1_Add_m43110_MethodInfo,
	&ICollection_1_Clear_m43111_MethodInfo,
	&ICollection_1_Contains_m43112_MethodInfo,
	&ICollection_1_CopyTo_m43113_MethodInfo,
	&ICollection_1_Remove_m43114_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9199_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9197_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9199_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9197_0_0_0;
extern Il2CppType ICollection_1_t9197_1_0_0;
struct ICollection_1_t9197;
extern Il2CppGenericClass ICollection_1_t9197_GenericClass;
TypeInfo ICollection_1_t9197_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9197_MethodInfos/* methods */
	, ICollection_1_t9197_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9197_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9197_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9197_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9197_0_0_0/* byval_arg */
	, &ICollection_1_t9197_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9197_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ExceptionArgument>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.ExceptionArgument>
extern Il2CppType IEnumerator_1_t7709_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43115_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.ExceptionArgument>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43115_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9199_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7709_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43115_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9199_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43115_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9199_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9199_0_0_0;
extern Il2CppType IEnumerable_1_t9199_1_0_0;
struct IEnumerable_1_t9199;
extern Il2CppGenericClass IEnumerable_1_t9199_GenericClass;
TypeInfo IEnumerable_1_t9199_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9199_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9199_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9199_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9199_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9199_0_0_0/* byval_arg */
	, &IEnumerable_1_t9199_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9199_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9198_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.ExceptionArgument>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.ExceptionArgument>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.ExceptionArgument>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.ExceptionArgument>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.ExceptionArgument>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.ExceptionArgument>
extern MethodInfo IList_1_get_Item_m43116_MethodInfo;
extern MethodInfo IList_1_set_Item_m43117_MethodInfo;
static PropertyInfo IList_1_t9198____Item_PropertyInfo = 
{
	&IList_1_t9198_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43116_MethodInfo/* get */
	, &IList_1_set_Item_m43117_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9198_PropertyInfos[] =
{
	&IList_1_t9198____Item_PropertyInfo,
	NULL
};
extern Il2CppType ExceptionArgument_t1071_0_0_0;
static ParameterInfo IList_1_t9198_IList_1_IndexOf_m43118_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ExceptionArgument_t1071_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43118_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<System.ExceptionArgument>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43118_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9198_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9198_IList_1_IndexOf_m43118_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43118_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ExceptionArgument_t1071_0_0_0;
static ParameterInfo IList_1_t9198_IList_1_Insert_m43119_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ExceptionArgument_t1071_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43119_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ExceptionArgument>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43119_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9198_IList_1_Insert_m43119_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43119_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9198_IList_1_RemoveAt_m43120_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43120_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ExceptionArgument>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43120_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9198_IList_1_RemoveAt_m43120_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43120_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9198_IList_1_get_Item_m43116_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ExceptionArgument_t1071_0_0_0;
extern void* RuntimeInvoker_ExceptionArgument_t1071_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43116_GenericMethod;
// T System.Collections.Generic.IList`1<System.ExceptionArgument>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43116_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9198_il2cpp_TypeInfo/* declaring_type */
	, &ExceptionArgument_t1071_0_0_0/* return_type */
	, RuntimeInvoker_ExceptionArgument_t1071_Int32_t104/* invoker_method */
	, IList_1_t9198_IList_1_get_Item_m43116_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43116_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ExceptionArgument_t1071_0_0_0;
static ParameterInfo IList_1_t9198_IList_1_set_Item_m43117_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ExceptionArgument_t1071_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43117_GenericMethod;
// System.Void System.Collections.Generic.IList`1<System.ExceptionArgument>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43117_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9198_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9198_IList_1_set_Item_m43117_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43117_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9198_MethodInfos[] =
{
	&IList_1_IndexOf_m43118_MethodInfo,
	&IList_1_Insert_m43119_MethodInfo,
	&IList_1_RemoveAt_m43120_MethodInfo,
	&IList_1_get_Item_m43116_MethodInfo,
	&IList_1_set_Item_m43117_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9198_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9197_il2cpp_TypeInfo,
	&IEnumerable_1_t9199_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9198_0_0_0;
extern Il2CppType IList_1_t9198_1_0_0;
struct IList_1_t9198;
extern Il2CppGenericClass IList_1_t9198_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9198_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9198_MethodInfos/* methods */
	, IList_1_t9198_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9198_il2cpp_TypeInfo/* element_class */
	, IList_1_t9198_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9198_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9198_0_0_0/* byval_arg */
	, &IList_1_t9198_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9198_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7711_il2cpp_TypeInfo;

// Validation.ValidatedNotNullAttribute
#include "Rackspace_Collections_Immutable_Validation_ValidatedNotNullA.h"


// T System.Collections.Generic.IEnumerator`1<Validation.ValidatedNotNullAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Validation.ValidatedNotNullAttribute>
extern MethodInfo IEnumerator_1_get_Current_m43121_MethodInfo;
static PropertyInfo IEnumerator_1_t7711____Current_PropertyInfo = 
{
	&IEnumerator_1_t7711_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43121_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7711_PropertyInfos[] =
{
	&IEnumerator_1_t7711____Current_PropertyInfo,
	NULL
};
extern Il2CppType ValidatedNotNullAttribute_t1074_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43121_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<Validation.ValidatedNotNullAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43121_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7711_il2cpp_TypeInfo/* declaring_type */
	, &ValidatedNotNullAttribute_t1074_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43121_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7711_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43121_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7711_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7711_0_0_0;
extern Il2CppType IEnumerator_1_t7711_1_0_0;
struct IEnumerator_1_t7711;
extern Il2CppGenericClass IEnumerator_1_t7711_GenericClass;
TypeInfo IEnumerator_1_t7711_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7711_MethodInfos/* methods */
	, IEnumerator_1_t7711_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7711_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7711_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7711_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7711_0_0_0/* byval_arg */
	, &IEnumerator_1_t7711_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7711_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_271.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5860_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_271MethodDeclarations.h"

extern TypeInfo ValidatedNotNullAttribute_t1074_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25106_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisValidatedNotNullAttribute_t1074_m34173_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Validation.ValidatedNotNullAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Validation.ValidatedNotNullAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisValidatedNotNullAttribute_t1074_m34173(__this, p0, method) (ValidatedNotNullAttribute_t1074 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5860____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5860_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5860, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5860____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5860_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5860, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5860_FieldInfos[] =
{
	&InternalEnumerator_1_t5860____array_0_FieldInfo,
	&InternalEnumerator_1_t5860____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25103_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5860____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5860_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25103_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5860____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5860_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25106_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5860_PropertyInfos[] =
{
	&InternalEnumerator_1_t5860____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5860____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5860_InternalEnumerator_1__ctor_m25101_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25101_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25101_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5860_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5860_InternalEnumerator_1__ctor_m25101_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25101_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25102_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25102_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5860_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25102_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25103_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25103_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5860_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25103_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25104_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25104_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5860_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25104_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25105_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25105_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5860_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25105_GenericMethod/* genericMethod */

};
extern Il2CppType ValidatedNotNullAttribute_t1074_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25106_GenericMethod;
// T System.Array/InternalEnumerator`1<Validation.ValidatedNotNullAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25106_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5860_il2cpp_TypeInfo/* declaring_type */
	, &ValidatedNotNullAttribute_t1074_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25106_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5860_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25101_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25102_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25103_MethodInfo,
	&InternalEnumerator_1_Dispose_m25104_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25105_MethodInfo,
	&InternalEnumerator_1_get_Current_m25106_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25105_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25102_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25104_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5860_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25103_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25105_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25102_MethodInfo,
	&InternalEnumerator_1_Dispose_m25104_MethodInfo,
	&InternalEnumerator_1_get_Current_m25106_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5860_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7711_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5860_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7711_il2cpp_TypeInfo, 8},
};
extern TypeInfo ValidatedNotNullAttribute_t1074_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5860_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25106_MethodInfo/* Method Usage */,
	&ValidatedNotNullAttribute_t1074_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisValidatedNotNullAttribute_t1074_m34173_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5860_0_0_0;
extern Il2CppType InternalEnumerator_1_t5860_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5860_GenericClass;
TypeInfo InternalEnumerator_1_t5860_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5860_MethodInfos/* methods */
	, InternalEnumerator_1_t5860_PropertyInfos/* properties */
	, InternalEnumerator_1_t5860_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5860_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5860_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5860_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5860_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5860_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5860_1_0_0/* this_arg */
	, InternalEnumerator_1_t5860_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5860_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5860_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5860)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9200_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>
extern MethodInfo ICollection_1_get_Count_m43122_MethodInfo;
static PropertyInfo ICollection_1_t9200____Count_PropertyInfo = 
{
	&ICollection_1_t9200_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43122_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43123_MethodInfo;
static PropertyInfo ICollection_1_t9200____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9200_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43123_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9200_PropertyInfos[] =
{
	&ICollection_1_t9200____Count_PropertyInfo,
	&ICollection_1_t9200____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43122_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m43122_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9200_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43122_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43123_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43123_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9200_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43123_GenericMethod/* genericMethod */

};
extern Il2CppType ValidatedNotNullAttribute_t1074_0_0_0;
extern Il2CppType ValidatedNotNullAttribute_t1074_0_0_0;
static ParameterInfo ICollection_1_t9200_ICollection_1_Add_m43124_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ValidatedNotNullAttribute_t1074_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43124_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::Add(T)
MethodInfo ICollection_1_Add_m43124_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9200_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9200_ICollection_1_Add_m43124_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43124_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43125_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::Clear()
MethodInfo ICollection_1_Clear_m43125_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9200_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43125_GenericMethod/* genericMethod */

};
extern Il2CppType ValidatedNotNullAttribute_t1074_0_0_0;
static ParameterInfo ICollection_1_t9200_ICollection_1_Contains_m43126_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ValidatedNotNullAttribute_t1074_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43126_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m43126_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9200_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9200_ICollection_1_Contains_m43126_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43126_GenericMethod/* genericMethod */

};
extern Il2CppType ValidatedNotNullAttributeU5BU5D_t7082_0_0_0;
extern Il2CppType ValidatedNotNullAttributeU5BU5D_t7082_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9200_ICollection_1_CopyTo_m43127_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ValidatedNotNullAttributeU5BU5D_t7082_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43127_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43127_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9200_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9200_ICollection_1_CopyTo_m43127_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43127_GenericMethod/* genericMethod */

};
extern Il2CppType ValidatedNotNullAttribute_t1074_0_0_0;
static ParameterInfo ICollection_1_t9200_ICollection_1_Remove_m43128_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ValidatedNotNullAttribute_t1074_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43128_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<Validation.ValidatedNotNullAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m43128_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9200_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9200_ICollection_1_Remove_m43128_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43128_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9200_MethodInfos[] =
{
	&ICollection_1_get_Count_m43122_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43123_MethodInfo,
	&ICollection_1_Add_m43124_MethodInfo,
	&ICollection_1_Clear_m43125_MethodInfo,
	&ICollection_1_Contains_m43126_MethodInfo,
	&ICollection_1_CopyTo_m43127_MethodInfo,
	&ICollection_1_Remove_m43128_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9202_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9200_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9202_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9200_0_0_0;
extern Il2CppType ICollection_1_t9200_1_0_0;
struct ICollection_1_t9200;
extern Il2CppGenericClass ICollection_1_t9200_GenericClass;
TypeInfo ICollection_1_t9200_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9200_MethodInfos/* methods */
	, ICollection_1_t9200_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9200_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9200_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9200_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9200_0_0_0/* byval_arg */
	, &ICollection_1_t9200_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9200_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Validation.ValidatedNotNullAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Validation.ValidatedNotNullAttribute>
extern Il2CppType IEnumerator_1_t7711_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43129_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Validation.ValidatedNotNullAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43129_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9202_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7711_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43129_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9202_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43129_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9202_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9202_0_0_0;
extern Il2CppType IEnumerable_1_t9202_1_0_0;
struct IEnumerable_1_t9202;
extern Il2CppGenericClass IEnumerable_1_t9202_GenericClass;
TypeInfo IEnumerable_1_t9202_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9202_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9202_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9202_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9202_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9202_0_0_0/* byval_arg */
	, &IEnumerable_1_t9202_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9202_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9201_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Validation.ValidatedNotNullAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Validation.ValidatedNotNullAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Validation.ValidatedNotNullAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Validation.ValidatedNotNullAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Validation.ValidatedNotNullAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Validation.ValidatedNotNullAttribute>
extern MethodInfo IList_1_get_Item_m43130_MethodInfo;
extern MethodInfo IList_1_set_Item_m43131_MethodInfo;
static PropertyInfo IList_1_t9201____Item_PropertyInfo = 
{
	&IList_1_t9201_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43130_MethodInfo/* get */
	, &IList_1_set_Item_m43131_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9201_PropertyInfos[] =
{
	&IList_1_t9201____Item_PropertyInfo,
	NULL
};
extern Il2CppType ValidatedNotNullAttribute_t1074_0_0_0;
static ParameterInfo IList_1_t9201_IList_1_IndexOf_m43132_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ValidatedNotNullAttribute_t1074_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43132_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<Validation.ValidatedNotNullAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43132_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9201_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9201_IList_1_IndexOf_m43132_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43132_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ValidatedNotNullAttribute_t1074_0_0_0;
static ParameterInfo IList_1_t9201_IList_1_Insert_m43133_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ValidatedNotNullAttribute_t1074_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43133_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Validation.ValidatedNotNullAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43133_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9201_IList_1_Insert_m43133_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43133_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9201_IList_1_RemoveAt_m43134_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43134_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Validation.ValidatedNotNullAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43134_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9201_IList_1_RemoveAt_m43134_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43134_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9201_IList_1_get_Item_m43130_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType ValidatedNotNullAttribute_t1074_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43130_GenericMethod;
// T System.Collections.Generic.IList`1<Validation.ValidatedNotNullAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43130_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9201_il2cpp_TypeInfo/* declaring_type */
	, &ValidatedNotNullAttribute_t1074_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9201_IList_1_get_Item_m43130_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43130_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType ValidatedNotNullAttribute_t1074_0_0_0;
static ParameterInfo IList_1_t9201_IList_1_set_Item_m43131_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ValidatedNotNullAttribute_t1074_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43131_GenericMethod;
// System.Void System.Collections.Generic.IList`1<Validation.ValidatedNotNullAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43131_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9201_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9201_IList_1_set_Item_m43131_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43131_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9201_MethodInfos[] =
{
	&IList_1_IndexOf_m43132_MethodInfo,
	&IList_1_Insert_m43133_MethodInfo,
	&IList_1_RemoveAt_m43134_MethodInfo,
	&IList_1_get_Item_m43130_MethodInfo,
	&IList_1_set_Item_m43131_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9201_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9200_il2cpp_TypeInfo,
	&IEnumerable_1_t9202_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9201_0_0_0;
extern Il2CppType IList_1_t9201_1_0_0;
struct IList_1_t9201;
extern Il2CppGenericClass IList_1_t9201_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9201_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9201_MethodInfos/* methods */
	, IList_1_t9201_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9201_il2cpp_TypeInfo/* element_class */
	, IList_1_t9201_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9201_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9201_0_0_0/* byval_arg */
	, &IList_1_t9201_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9201_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7713_il2cpp_TypeInfo;

// UnityEngine.AssetBundle
#include "UnityEngine_UnityEngine_AssetBundle.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.AssetBundle>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.AssetBundle>
extern MethodInfo IEnumerator_1_get_Current_m43135_MethodInfo;
static PropertyInfo IEnumerator_1_t7713____Current_PropertyInfo = 
{
	&IEnumerator_1_t7713_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43135_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7713_PropertyInfos[] =
{
	&IEnumerator_1_t7713____Current_PropertyInfo,
	NULL
};
extern Il2CppType AssetBundle_t2457_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43135_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.AssetBundle>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43135_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7713_il2cpp_TypeInfo/* declaring_type */
	, &AssetBundle_t2457_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43135_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7713_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43135_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7713_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7713_0_0_0;
extern Il2CppType IEnumerator_1_t7713_1_0_0;
struct IEnumerator_1_t7713;
extern Il2CppGenericClass IEnumerator_1_t7713_GenericClass;
TypeInfo IEnumerator_1_t7713_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7713_MethodInfos/* methods */
	, IEnumerator_1_t7713_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7713_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7713_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7713_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7713_0_0_0/* byval_arg */
	, &IEnumerator_1_t7713_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7713_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_272.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5861_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_272MethodDeclarations.h"

extern TypeInfo AssetBundle_t2457_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25112_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAssetBundle_t2457_m34184_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.AssetBundle>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.AssetBundle>(System.Int32)
#define Array_InternalArray__get_Item_TisAssetBundle_t2457_m34184(__this, p0, method) (AssetBundle_t2457 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5861____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5861_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5861, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5861____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5861_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5861, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5861_FieldInfos[] =
{
	&InternalEnumerator_1_t5861____array_0_FieldInfo,
	&InternalEnumerator_1_t5861____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25109_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5861____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5861_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25109_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5861____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5861_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25112_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5861_PropertyInfos[] =
{
	&InternalEnumerator_1_t5861____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5861____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5861_InternalEnumerator_1__ctor_m25107_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25107_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25107_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5861_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5861_InternalEnumerator_1__ctor_m25107_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25107_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25108_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25108_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5861_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25108_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25109_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25109_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5861_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25109_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25110_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25110_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5861_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25110_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25111_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25111_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5861_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25111_GenericMethod/* genericMethod */

};
extern Il2CppType AssetBundle_t2457_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25112_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.AssetBundle>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25112_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5861_il2cpp_TypeInfo/* declaring_type */
	, &AssetBundle_t2457_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25112_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5861_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25107_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25108_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25109_MethodInfo,
	&InternalEnumerator_1_Dispose_m25110_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25111_MethodInfo,
	&InternalEnumerator_1_get_Current_m25112_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25111_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25108_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25110_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5861_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25109_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25111_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25108_MethodInfo,
	&InternalEnumerator_1_Dispose_m25110_MethodInfo,
	&InternalEnumerator_1_get_Current_m25112_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5861_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7713_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5861_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7713_il2cpp_TypeInfo, 8},
};
extern TypeInfo AssetBundle_t2457_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5861_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25112_MethodInfo/* Method Usage */,
	&AssetBundle_t2457_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisAssetBundle_t2457_m34184_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5861_0_0_0;
extern Il2CppType InternalEnumerator_1_t5861_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5861_GenericClass;
TypeInfo InternalEnumerator_1_t5861_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5861_MethodInfos/* methods */
	, InternalEnumerator_1_t5861_PropertyInfos/* properties */
	, InternalEnumerator_1_t5861_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5861_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5861_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5861_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5861_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5861_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5861_1_0_0/* this_arg */
	, InternalEnumerator_1_t5861_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5861_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5861_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5861)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9203_il2cpp_TypeInfo;

#include "UnityEngine_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>
extern MethodInfo ICollection_1_get_Count_m43136_MethodInfo;
static PropertyInfo ICollection_1_t9203____Count_PropertyInfo = 
{
	&ICollection_1_t9203_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43136_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43137_MethodInfo;
static PropertyInfo ICollection_1_t9203____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9203_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43137_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9203_PropertyInfos[] =
{
	&ICollection_1_t9203____Count_PropertyInfo,
	&ICollection_1_t9203____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43136_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::get_Count()
MethodInfo ICollection_1_get_Count_m43136_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9203_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43136_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43137_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43137_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9203_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43137_GenericMethod/* genericMethod */

};
extern Il2CppType AssetBundle_t2457_0_0_0;
extern Il2CppType AssetBundle_t2457_0_0_0;
static ParameterInfo ICollection_1_t9203_ICollection_1_Add_m43138_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssetBundle_t2457_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43138_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::Add(T)
MethodInfo ICollection_1_Add_m43138_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9203_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9203_ICollection_1_Add_m43138_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43138_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43139_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::Clear()
MethodInfo ICollection_1_Clear_m43139_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9203_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43139_GenericMethod/* genericMethod */

};
extern Il2CppType AssetBundle_t2457_0_0_0;
static ParameterInfo ICollection_1_t9203_ICollection_1_Contains_m43140_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssetBundle_t2457_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43140_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::Contains(T)
MethodInfo ICollection_1_Contains_m43140_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9203_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9203_ICollection_1_Contains_m43140_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43140_GenericMethod/* genericMethod */

};
extern Il2CppType AssetBundleU5BU5D_t6988_0_0_0;
extern Il2CppType AssetBundleU5BU5D_t6988_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9203_ICollection_1_CopyTo_m43141_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AssetBundleU5BU5D_t6988_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43141_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43141_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9203_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9203_ICollection_1_CopyTo_m43141_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43141_GenericMethod/* genericMethod */

};
extern Il2CppType AssetBundle_t2457_0_0_0;
static ParameterInfo ICollection_1_t9203_ICollection_1_Remove_m43142_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssetBundle_t2457_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43142_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.AssetBundle>::Remove(T)
MethodInfo ICollection_1_Remove_m43142_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9203_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9203_ICollection_1_Remove_m43142_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43142_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9203_MethodInfos[] =
{
	&ICollection_1_get_Count_m43136_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43137_MethodInfo,
	&ICollection_1_Add_m43138_MethodInfo,
	&ICollection_1_Clear_m43139_MethodInfo,
	&ICollection_1_Contains_m43140_MethodInfo,
	&ICollection_1_CopyTo_m43141_MethodInfo,
	&ICollection_1_Remove_m43142_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9205_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9203_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9205_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9203_0_0_0;
extern Il2CppType ICollection_1_t9203_1_0_0;
struct ICollection_1_t9203;
extern Il2CppGenericClass ICollection_1_t9203_GenericClass;
TypeInfo ICollection_1_t9203_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9203_MethodInfos/* methods */
	, ICollection_1_t9203_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9203_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9203_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9203_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9203_0_0_0/* byval_arg */
	, &ICollection_1_t9203_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9203_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.AssetBundle>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.AssetBundle>
extern Il2CppType IEnumerator_1_t7713_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43143_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.AssetBundle>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43143_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9205_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7713_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43143_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9205_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43143_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9205_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9205_0_0_0;
extern Il2CppType IEnumerable_1_t9205_1_0_0;
struct IEnumerable_1_t9205;
extern Il2CppGenericClass IEnumerable_1_t9205_GenericClass;
TypeInfo IEnumerable_1_t9205_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9205_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9205_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9205_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9205_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9205_0_0_0/* byval_arg */
	, &IEnumerable_1_t9205_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9205_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9204_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.AssetBundle>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.AssetBundle>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.AssetBundle>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.AssetBundle>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.AssetBundle>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.AssetBundle>
extern MethodInfo IList_1_get_Item_m43144_MethodInfo;
extern MethodInfo IList_1_set_Item_m43145_MethodInfo;
static PropertyInfo IList_1_t9204____Item_PropertyInfo = 
{
	&IList_1_t9204_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43144_MethodInfo/* get */
	, &IList_1_set_Item_m43145_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9204_PropertyInfos[] =
{
	&IList_1_t9204____Item_PropertyInfo,
	NULL
};
extern Il2CppType AssetBundle_t2457_0_0_0;
static ParameterInfo IList_1_t9204_IList_1_IndexOf_m43146_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AssetBundle_t2457_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43146_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.AssetBundle>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43146_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9204_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9204_IList_1_IndexOf_m43146_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43146_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType AssetBundle_t2457_0_0_0;
static ParameterInfo IList_1_t9204_IList_1_Insert_m43147_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AssetBundle_t2457_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43147_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.AssetBundle>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43147_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9204_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9204_IList_1_Insert_m43147_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43147_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9204_IList_1_RemoveAt_m43148_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43148_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.AssetBundle>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43148_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9204_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9204_IList_1_RemoveAt_m43148_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43148_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9204_IList_1_get_Item_m43144_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType AssetBundle_t2457_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43144_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.AssetBundle>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43144_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9204_il2cpp_TypeInfo/* declaring_type */
	, &AssetBundle_t2457_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t104/* invoker_method */
	, IList_1_t9204_IList_1_get_Item_m43144_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43144_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType AssetBundle_t2457_0_0_0;
static ParameterInfo IList_1_t9204_IList_1_set_Item_m43145_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AssetBundle_t2457_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43145_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.AssetBundle>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43145_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9204_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Object_t/* invoker_method */
	, IList_1_t9204_IList_1_set_Item_m43145_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43145_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9204_MethodInfos[] =
{
	&IList_1_IndexOf_m43146_MethodInfo,
	&IList_1_Insert_m43147_MethodInfo,
	&IList_1_RemoveAt_m43148_MethodInfo,
	&IList_1_get_Item_m43144_MethodInfo,
	&IList_1_set_Item_m43145_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9204_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9203_il2cpp_TypeInfo,
	&IEnumerable_1_t9205_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9204_0_0_0;
extern Il2CppType IList_1_t9204_1_0_0;
struct IList_1_t9204;
extern Il2CppGenericClass IList_1_t9204_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9204_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9204_MethodInfos/* methods */
	, IList_1_t9204_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9204_il2cpp_TypeInfo/* element_class */
	, IList_1_t9204_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9204_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9204_0_0_0/* byval_arg */
	, &IList_1_t9204_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9204_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.AssetBundle>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_68.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t5862_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<UnityEngine.AssetBundle>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_68MethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
// UnityEngine.Events.InvokableCall`1<UnityEngine.AssetBundle>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_70.h"
extern TypeInfo ObjectU5BU5D_t126_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t5863_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<UnityEngine.AssetBundle>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_70MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m25115_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m25117_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.AssetBundle>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.AssetBundle>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<UnityEngine.AssetBundle>
extern Il2CppType ObjectU5BU5D_t126_0_0_33;
FieldInfo CachedInvokableCall_1_t5862____m_Arg1_1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t126_0_0_33/* type */
	, &CachedInvokableCall_1_t5862_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t5862, ___m_Arg1_1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t5862_FieldInfos[] =
{
	&CachedInvokableCall_1_t5862____m_Arg1_1_FieldInfo,
	NULL
};
extern Il2CppType Object_t30_0_0_0;
extern Il2CppType Object_t30_0_0_0;
extern Il2CppType MethodInfo_t2624_0_0_0;
extern Il2CppType MethodInfo_t2624_0_0_0;
extern Il2CppType AssetBundle_t2457_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5862_CachedInvokableCall_1__ctor_m25113_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t30_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t2624_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &AssetBundle_t2457_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1__ctor_m25113_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.AssetBundle>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m25113_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m14313_gshared/* method */
	, &CachedInvokableCall_1_t5862_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5862_CachedInvokableCall_1__ctor_m25113_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1__ctor_m25113_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t126_0_0_0;
extern Il2CppType ObjectU5BU5D_t126_0_0_0;
static ParameterInfo CachedInvokableCall_1_t5862_CachedInvokableCall_1_Invoke_m25114_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t126_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod CachedInvokableCall_1_Invoke_m25114_GenericMethod;
// System.Void UnityEngine.Events.CachedInvokableCall`1<UnityEngine.AssetBundle>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m25114_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m14315_gshared/* method */
	, &CachedInvokableCall_1_t5862_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, CachedInvokableCall_1_t5862_CachedInvokableCall_1_Invoke_m25114_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &CachedInvokableCall_1_Invoke_m25114_GenericMethod/* genericMethod */

};
static MethodInfo* CachedInvokableCall_1_t5862_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m25113_MethodInfo,
	&CachedInvokableCall_1_Invoke_m25114_MethodInfo,
	NULL
};
extern MethodInfo CachedInvokableCall_1_Invoke_m25114_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m25118_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t5862_VTable[] =
{
	&Object_Equals_m314_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&Object_GetHashCode_m315_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&CachedInvokableCall_1_Invoke_m25114_MethodInfo,
	&InvokableCall_1_Find_m25118_MethodInfo,
};
extern Il2CppType UnityAction_1_t5864_0_0_0;
extern TypeInfo UnityAction_1_t5864_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisAssetBundle_t2457_m34194_MethodInfo;
extern TypeInfo AssetBundle_t2457_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m25120_MethodInfo;
extern TypeInfo AssetBundle_t2457_il2cpp_TypeInfo;
static Il2CppRGCTXData CachedInvokableCall_1_t5862_RGCTXData[8] = 
{
	&UnityAction_1_t5864_0_0_0/* Type Usage */,
	&UnityAction_1_t5864_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisAssetBundle_t2457_m34194_MethodInfo/* Method Usage */,
	&AssetBundle_t2457_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m25120_MethodInfo/* Method Usage */,
	&InvokableCall_1__ctor_m25115_MethodInfo/* Method Usage */,
	&AssetBundle_t2457_il2cpp_TypeInfo/* Class Usage */,
	&InvokableCall_1_Invoke_m25117_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t5862_0_0_0;
extern Il2CppType CachedInvokableCall_1_t5862_1_0_0;
struct CachedInvokableCall_1_t5862;
extern Il2CppGenericClass CachedInvokableCall_1_t5862_GenericClass;
TypeInfo CachedInvokableCall_1_t5862_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t5862_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t5862_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t5863_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t5862_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t5862_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t5862_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t5862_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t5862_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t5862_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t5862_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t5862)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif

// UnityEngine.Events.UnityAction`1<UnityEngine.AssetBundle>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_75.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo UnityAction_1_t5864_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t483_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<UnityEngine.AssetBundle>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_75MethodDeclarations.h"
extern MethodInfo BaseInvokableCall__ctor_m6097_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m280_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m6282_MethodInfo;
extern MethodInfo Delegate_Combine_m2022_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m6096_MethodInfo;
extern MethodInfo ArgumentException__ctor_m2334_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m6098_MethodInfo;
extern MethodInfo Delegate_get_Target_m6278_MethodInfo;
extern MethodInfo Delegate_get_Method_m6276_MethodInfo;
struct BaseInvokableCall_t2623;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
struct BaseInvokableCall_t2623;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
 void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m30202_gshared (Object_t * __this/* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m30202(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m30202_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.AssetBundle>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<UnityEngine.AssetBundle>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisAssetBundle_t2457_m34194(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m30202_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)


// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.AssetBundle>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.AssetBundle>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.AssetBundle>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.AssetBundle>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<UnityEngine.AssetBundle>
extern Il2CppType UnityAction_1_t5864_0_0_1;
FieldInfo InvokableCall_1_t5863____Delegate_0_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t5864_0_0_1/* type */
	, &InvokableCall_1_t5863_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t5863, ___Delegate_0)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t5863_FieldInfos[] =
{
	&InvokableCall_1_t5863____Delegate_0_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t2624_0_0_0;
static ParameterInfo InvokableCall_1_t5863_InvokableCall_1__ctor_m25115_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t2624_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m25115_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.AssetBundle>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m25115_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m14316_gshared/* method */
	, &InvokableCall_1_t5863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5863_InvokableCall_1__ctor_m25115_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1__ctor_m25115_GenericMethod/* genericMethod */

};
extern Il2CppType UnityAction_1_t5864_0_0_0;
static ParameterInfo InvokableCall_1_t5863_InvokableCall_1__ctor_m25116_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t5864_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1__ctor_m25116_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.AssetBundle>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m25116_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m14317_gshared/* method */
	, &InvokableCall_1_t5863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InvokableCall_1_t5863_InvokableCall_1__ctor_m25116_ParameterInfos/* parameters */
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
	, &InvokableCall_1__ctor_m25116_GenericMethod/* genericMethod */

};
extern Il2CppType ObjectU5BU5D_t126_0_0_0;
static ParameterInfo InvokableCall_1_t5863_InvokableCall_1_Invoke_m25117_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t126_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Invoke_m25117_GenericMethod;
// System.Void UnityEngine.Events.InvokableCall`1<UnityEngine.AssetBundle>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m25117_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m14318_gshared/* method */
	, &InvokableCall_1_t5863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InvokableCall_1_t5863_InvokableCall_1_Invoke_m25117_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Invoke_m25117_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t2624_0_0_0;
static ParameterInfo InvokableCall_1_t5863_InvokableCall_1_Find_m25118_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t2624_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InvokableCall_1_Find_m25118_GenericMethod;
// System.Boolean UnityEngine.Events.InvokableCall`1<UnityEngine.AssetBundle>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m25118_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m14319_gshared/* method */
	, &InvokableCall_1_t5863_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t5863_InvokableCall_1_Find_m25118_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */
	, &InvokableCall_1_Find_m25118_GenericMethod/* genericMethod */

};
static MethodInfo* InvokableCall_1_t5863_MethodInfos[] =
{
	&InvokableCall_1__ctor_m25115_MethodInfo,
	&InvokableCall_1__ctor_m25116_MethodInfo,
	&InvokableCall_1_Invoke_m25117_MethodInfo,
	&InvokableCall_1_Find_m25118_MethodInfo,
	NULL
};
static MethodInfo* InvokableCall_1_t5863_VTable[] =
{
	&Object_Equals_m314_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&Object_GetHashCode_m315_MethodInfo,
	&Object_ToString_m316_MethodInfo,
	&InvokableCall_1_Invoke_m25117_MethodInfo,
	&InvokableCall_1_Find_m25118_MethodInfo,
};
extern TypeInfo UnityAction_1_t5864_il2cpp_TypeInfo;
extern TypeInfo AssetBundle_t2457_il2cpp_TypeInfo;
static Il2CppRGCTXData InvokableCall_1_t5863_RGCTXData[5] = 
{
	&UnityAction_1_t5864_0_0_0/* Type Usage */,
	&UnityAction_1_t5864_il2cpp_TypeInfo/* Class Usage */,
	&BaseInvokableCall_ThrowOnInvalidArg_TisAssetBundle_t2457_m34194_MethodInfo/* Method Usage */,
	&AssetBundle_t2457_il2cpp_TypeInfo/* Class Usage */,
	&UnityAction_1_Invoke_m25120_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t5863_0_0_0;
extern Il2CppType InvokableCall_1_t5863_1_0_0;
extern TypeInfo BaseInvokableCall_t2623_il2cpp_TypeInfo;
struct InvokableCall_1_t5863;
extern Il2CppGenericClass InvokableCall_1_t5863_GenericClass;
TypeInfo InvokableCall_1_t5863_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t5863_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t5863_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t2623_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t5863_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t5863_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t5863_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t5863_0_0_0/* byval_arg */
	, &InvokableCall_1_t5863_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t5863_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t5863_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t5863)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
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
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif



// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.AssetBundle>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.AssetBundle>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.AssetBundle>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.AssetBundle>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<UnityEngine.AssetBundle>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t31_0_0_0;
static ParameterInfo UnityAction_1_t5864_UnityAction_1__ctor_m25119_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t31_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_IntPtr_t31 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1__ctor_m25119_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.AssetBundle>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m25119_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m14320_gshared/* method */
	, &UnityAction_1_t5864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_IntPtr_t31/* invoker_method */
	, UnityAction_1_t5864_UnityAction_1__ctor_m25119_ParameterInfos/* parameters */
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
	, &UnityAction_1__ctor_m25119_GenericMethod/* genericMethod */

};
extern Il2CppType AssetBundle_t2457_0_0_0;
static ParameterInfo UnityAction_1_t5864_UnityAction_1_Invoke_m25120_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &AssetBundle_t2457_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_Invoke_m25120_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.AssetBundle>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m25120_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m14321_gshared/* method */
	, &UnityAction_1_t5864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, UnityAction_1_t5864_UnityAction_1_Invoke_m25120_ParameterInfos/* parameters */
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
	, &UnityAction_1_Invoke_m25120_GenericMethod/* genericMethod */

};
extern Il2CppType AssetBundle_t2457_0_0_0;
extern Il2CppType AsyncCallback_t184_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t5864_UnityAction_1_BeginInvoke_m25121_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &AssetBundle_t2457_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t184_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern Il2CppType IAsyncResult_t183_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_BeginInvoke_m25121_GenericMethod;
// System.IAsyncResult UnityEngine.Events.UnityAction`1<UnityEngine.AssetBundle>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m25121_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m14322_gshared/* method */
	, &UnityAction_1_t5864_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t183_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t5864_UnityAction_1_BeginInvoke_m25121_ParameterInfos/* parameters */
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
	, &UnityAction_1_BeginInvoke_m25121_GenericMethod/* genericMethod */

};
extern Il2CppType IAsyncResult_t183_0_0_0;
static ParameterInfo UnityAction_1_t5864_UnityAction_1_EndInvoke_m25122_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t183_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod UnityAction_1_EndInvoke_m25122_GenericMethod;
// System.Void UnityEngine.Events.UnityAction`1<UnityEngine.AssetBundle>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m25122_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m14323_gshared/* method */
	, &UnityAction_1_t5864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, UnityAction_1_t5864_UnityAction_1_EndInvoke_m25122_ParameterInfos/* parameters */
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
	, &UnityAction_1_EndInvoke_m25122_GenericMethod/* genericMethod */

};
static MethodInfo* UnityAction_1_t5864_MethodInfos[] =
{
	&UnityAction_1__ctor_m25119_MethodInfo,
	&UnityAction_1_Invoke_m25120_MethodInfo,
	&UnityAction_1_BeginInvoke_m25121_MethodInfo,
	&UnityAction_1_EndInvoke_m25122_MethodInfo,
	NULL
};
extern MethodInfo UnityAction_1_BeginInvoke_m25121_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m25122_MethodInfo;
static MethodInfo* UnityAction_1_t5864_VTable[] =
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
	&UnityAction_1_Invoke_m25120_MethodInfo,
	&UnityAction_1_BeginInvoke_m25121_MethodInfo,
	&UnityAction_1_EndInvoke_m25122_MethodInfo,
};
static Il2CppInterfaceOffsetPair UnityAction_1_t5864_InterfacesOffsets[] = 
{
	{ &ICloneable_t458_il2cpp_TypeInfo, 4},
	{ &ISerializable_t459_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t5864_1_0_0;
struct UnityAction_1_t5864;
extern Il2CppGenericClass UnityAction_1_t5864_GenericClass;
TypeInfo UnityAction_1_t5864_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t5864_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t306_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t5864_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t5864_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t5864_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t5864_0_0_0/* byval_arg */
	, &UnityAction_1_t5864_1_0_0/* this_arg */
	, UnityAction_1_t5864_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t5864_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t5864)/* instance_size */
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
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t7715_il2cpp_TypeInfo;

// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.SendMessageOptions>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.SendMessageOptions>
extern MethodInfo IEnumerator_1_get_Current_m43149_MethodInfo;
static PropertyInfo IEnumerator_1_t7715____Current_PropertyInfo = 
{
	&IEnumerator_1_t7715_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43149_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7715_PropertyInfos[] =
{
	&IEnumerator_1_t7715____Current_PropertyInfo,
	NULL
};
extern Il2CppType SendMessageOptions_t2459_0_0_0;
extern void* RuntimeInvoker_SendMessageOptions_t2459 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43149_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.SendMessageOptions>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43149_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7715_il2cpp_TypeInfo/* declaring_type */
	, &SendMessageOptions_t2459_0_0_0/* return_type */
	, RuntimeInvoker_SendMessageOptions_t2459/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43149_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7715_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43149_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7715_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7715_0_0_0;
extern Il2CppType IEnumerator_1_t7715_1_0_0;
struct IEnumerator_1_t7715;
extern Il2CppGenericClass IEnumerator_1_t7715_GenericClass;
TypeInfo IEnumerator_1_t7715_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7715_MethodInfos/* methods */
	, IEnumerator_1_t7715_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7715_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7715_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7715_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7715_0_0_0/* byval_arg */
	, &IEnumerator_1_t7715_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7715_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_273.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5865_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_273MethodDeclarations.h"

extern TypeInfo SendMessageOptions_t2459_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25128_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSendMessageOptions_t2459_m34196_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.SendMessageOptions>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.SendMessageOptions>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSendMessageOptions_t2459_m34196 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25123_MethodInfo;
 void InternalEnumerator_1__ctor_m25123 (InternalEnumerator_1_t5865 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25124_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25124 (InternalEnumerator_1_t5865 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25125_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25125 (InternalEnumerator_1_t5865 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25128(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25128_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SendMessageOptions_t2459_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25126_MethodInfo;
 void InternalEnumerator_1_Dispose_m25126 (InternalEnumerator_1_t5865 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25127_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25127 (InternalEnumerator_1_t5865 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25128 (InternalEnumerator_1_t5865 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSendMessageOptions_t2459_m34196(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSendMessageOptions_t2459_m34196_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5865____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5865_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5865, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5865____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5865_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5865, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5865_FieldInfos[] =
{
	&InternalEnumerator_1_t5865____array_0_FieldInfo,
	&InternalEnumerator_1_t5865____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t5865____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5865_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25125_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5865____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5865_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25128_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5865_PropertyInfos[] =
{
	&InternalEnumerator_1_t5865____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5865____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5865_InternalEnumerator_1__ctor_m25123_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25123_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25123_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25123/* method */
	, &InternalEnumerator_1_t5865_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5865_InternalEnumerator_1__ctor_m25123_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25123_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25124_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25124_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25124/* method */
	, &InternalEnumerator_1_t5865_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25124_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25125_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25125_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25125/* method */
	, &InternalEnumerator_1_t5865_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25125_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25126_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25126_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25126/* method */
	, &InternalEnumerator_1_t5865_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25126_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25127_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25127_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25127/* method */
	, &InternalEnumerator_1_t5865_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25127_GenericMethod/* genericMethod */

};
extern Il2CppType SendMessageOptions_t2459_0_0_0;
extern void* RuntimeInvoker_SendMessageOptions_t2459 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25128_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.SendMessageOptions>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25128_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25128/* method */
	, &InternalEnumerator_1_t5865_il2cpp_TypeInfo/* declaring_type */
	, &SendMessageOptions_t2459_0_0_0/* return_type */
	, RuntimeInvoker_SendMessageOptions_t2459/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25128_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5865_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25123_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25124_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25125_MethodInfo,
	&InternalEnumerator_1_Dispose_m25126_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25127_MethodInfo,
	&InternalEnumerator_1_get_Current_m25128_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t5865_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25125_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25127_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25124_MethodInfo,
	&InternalEnumerator_1_Dispose_m25126_MethodInfo,
	&InternalEnumerator_1_get_Current_m25128_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5865_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7715_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5865_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7715_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5865_0_0_0;
extern Il2CppType InternalEnumerator_1_t5865_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5865_GenericClass;
TypeInfo InternalEnumerator_1_t5865_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5865_MethodInfos/* methods */
	, InternalEnumerator_1_t5865_PropertyInfos/* properties */
	, InternalEnumerator_1_t5865_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5865_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5865_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5865_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5865_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5865_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5865_1_0_0/* this_arg */
	, InternalEnumerator_1_t5865_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5865_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5865)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9206_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>
extern MethodInfo ICollection_1_get_Count_m43150_MethodInfo;
static PropertyInfo ICollection_1_t9206____Count_PropertyInfo = 
{
	&ICollection_1_t9206_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43150_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43151_MethodInfo;
static PropertyInfo ICollection_1_t9206____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9206_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43151_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9206_PropertyInfos[] =
{
	&ICollection_1_t9206____Count_PropertyInfo,
	&ICollection_1_t9206____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43150_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::get_Count()
MethodInfo ICollection_1_get_Count_m43150_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9206_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43150_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43151_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43151_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9206_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43151_GenericMethod/* genericMethod */

};
extern Il2CppType SendMessageOptions_t2459_0_0_0;
extern Il2CppType SendMessageOptions_t2459_0_0_0;
static ParameterInfo ICollection_1_t9206_ICollection_1_Add_m43152_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SendMessageOptions_t2459_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43152_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::Add(T)
MethodInfo ICollection_1_Add_m43152_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9206_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, ICollection_1_t9206_ICollection_1_Add_m43152_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43152_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43153_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::Clear()
MethodInfo ICollection_1_Clear_m43153_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9206_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43153_GenericMethod/* genericMethod */

};
extern Il2CppType SendMessageOptions_t2459_0_0_0;
static ParameterInfo ICollection_1_t9206_ICollection_1_Contains_m43154_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SendMessageOptions_t2459_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43154_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::Contains(T)
MethodInfo ICollection_1_Contains_m43154_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9206_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int32_t104/* invoker_method */
	, ICollection_1_t9206_ICollection_1_Contains_m43154_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43154_GenericMethod/* genericMethod */

};
extern Il2CppType SendMessageOptionsU5BU5D_t6989_0_0_0;
extern Il2CppType SendMessageOptionsU5BU5D_t6989_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9206_ICollection_1_CopyTo_m43155_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SendMessageOptionsU5BU5D_t6989_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43155_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43155_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9206_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9206_ICollection_1_CopyTo_m43155_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43155_GenericMethod/* genericMethod */

};
extern Il2CppType SendMessageOptions_t2459_0_0_0;
static ParameterInfo ICollection_1_t9206_ICollection_1_Remove_m43156_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SendMessageOptions_t2459_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43156_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.SendMessageOptions>::Remove(T)
MethodInfo ICollection_1_Remove_m43156_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9206_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int32_t104/* invoker_method */
	, ICollection_1_t9206_ICollection_1_Remove_m43156_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43156_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9206_MethodInfos[] =
{
	&ICollection_1_get_Count_m43150_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43151_MethodInfo,
	&ICollection_1_Add_m43152_MethodInfo,
	&ICollection_1_Clear_m43153_MethodInfo,
	&ICollection_1_Contains_m43154_MethodInfo,
	&ICollection_1_CopyTo_m43155_MethodInfo,
	&ICollection_1_Remove_m43156_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9208_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9206_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9208_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9206_0_0_0;
extern Il2CppType ICollection_1_t9206_1_0_0;
struct ICollection_1_t9206;
extern Il2CppGenericClass ICollection_1_t9206_GenericClass;
TypeInfo ICollection_1_t9206_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9206_MethodInfos/* methods */
	, ICollection_1_t9206_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9206_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9206_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9206_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9206_0_0_0/* byval_arg */
	, &ICollection_1_t9206_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9206_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SendMessageOptions>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.SendMessageOptions>
extern Il2CppType IEnumerator_1_t7715_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43157_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.SendMessageOptions>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43157_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9208_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7715_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43157_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9208_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43157_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9208_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9208_0_0_0;
extern Il2CppType IEnumerable_1_t9208_1_0_0;
struct IEnumerable_1_t9208;
extern Il2CppGenericClass IEnumerable_1_t9208_GenericClass;
TypeInfo IEnumerable_1_t9208_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9208_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9208_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9208_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9208_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9208_0_0_0/* byval_arg */
	, &IEnumerable_1_t9208_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9208_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9207_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SendMessageOptions>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SendMessageOptions>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SendMessageOptions>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.SendMessageOptions>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.SendMessageOptions>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.SendMessageOptions>
extern MethodInfo IList_1_get_Item_m43158_MethodInfo;
extern MethodInfo IList_1_set_Item_m43159_MethodInfo;
static PropertyInfo IList_1_t9207____Item_PropertyInfo = 
{
	&IList_1_t9207_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43158_MethodInfo/* get */
	, &IList_1_set_Item_m43159_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9207_PropertyInfos[] =
{
	&IList_1_t9207____Item_PropertyInfo,
	NULL
};
extern Il2CppType SendMessageOptions_t2459_0_0_0;
static ParameterInfo IList_1_t9207_IList_1_IndexOf_m43160_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SendMessageOptions_t2459_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43160_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.SendMessageOptions>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43160_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9207_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9207_IList_1_IndexOf_m43160_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43160_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType SendMessageOptions_t2459_0_0_0;
static ParameterInfo IList_1_t9207_IList_1_Insert_m43161_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SendMessageOptions_t2459_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43161_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.SendMessageOptions>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43161_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9207_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9207_IList_1_Insert_m43161_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43161_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9207_IList_1_RemoveAt_m43162_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43162_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.SendMessageOptions>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43162_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9207_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9207_IList_1_RemoveAt_m43162_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43162_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9207_IList_1_get_Item_m43158_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType SendMessageOptions_t2459_0_0_0;
extern void* RuntimeInvoker_SendMessageOptions_t2459_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43158_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.SendMessageOptions>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43158_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9207_il2cpp_TypeInfo/* declaring_type */
	, &SendMessageOptions_t2459_0_0_0/* return_type */
	, RuntimeInvoker_SendMessageOptions_t2459_Int32_t104/* invoker_method */
	, IList_1_t9207_IList_1_get_Item_m43158_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43158_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType SendMessageOptions_t2459_0_0_0;
static ParameterInfo IList_1_t9207_IList_1_set_Item_m43159_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SendMessageOptions_t2459_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43159_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.SendMessageOptions>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43159_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9207_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9207_IList_1_set_Item_m43159_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43159_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9207_MethodInfos[] =
{
	&IList_1_IndexOf_m43160_MethodInfo,
	&IList_1_Insert_m43161_MethodInfo,
	&IList_1_RemoveAt_m43162_MethodInfo,
	&IList_1_get_Item_m43158_MethodInfo,
	&IList_1_set_Item_m43159_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9207_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9206_il2cpp_TypeInfo,
	&IEnumerable_1_t9208_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9207_0_0_0;
extern Il2CppType IList_1_t9207_1_0_0;
struct IList_1_t9207;
extern Il2CppGenericClass IList_1_t9207_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9207_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9207_MethodInfos/* methods */
	, IList_1_t9207_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9207_il2cpp_TypeInfo/* element_class */
	, IList_1_t9207_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9207_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9207_0_0_0/* byval_arg */
	, &IList_1_t9207_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9207_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7717_il2cpp_TypeInfo;

// UnityEngine.Space
#include "UnityEngine_UnityEngine_Space.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.Space>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.Space>
extern MethodInfo IEnumerator_1_get_Current_m43163_MethodInfo;
static PropertyInfo IEnumerator_1_t7717____Current_PropertyInfo = 
{
	&IEnumerator_1_t7717_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43163_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7717_PropertyInfos[] =
{
	&IEnumerator_1_t7717____Current_PropertyInfo,
	NULL
};
extern Il2CppType Space_t132_0_0_0;
extern void* RuntimeInvoker_Space_t132 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43163_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.Space>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43163_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7717_il2cpp_TypeInfo/* declaring_type */
	, &Space_t132_0_0_0/* return_type */
	, RuntimeInvoker_Space_t132/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43163_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7717_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43163_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7717_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7717_0_0_0;
extern Il2CppType IEnumerator_1_t7717_1_0_0;
struct IEnumerator_1_t7717;
extern Il2CppGenericClass IEnumerator_1_t7717_GenericClass;
TypeInfo IEnumerator_1_t7717_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7717_MethodInfos/* methods */
	, IEnumerator_1_t7717_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7717_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7717_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7717_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7717_0_0_0/* byval_arg */
	, &IEnumerator_1_t7717_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7717_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.Space>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_274.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5866_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.Space>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_274MethodDeclarations.h"

extern TypeInfo Space_t132_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25134_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSpace_t132_m34207_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.Space>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.Space>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSpace_t132_m34207 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.Space>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25129_MethodInfo;
 void InternalEnumerator_1__ctor_m25129 (InternalEnumerator_1_t5866 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Space>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25130_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25130 (InternalEnumerator_1_t5866 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Space>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25131_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25131 (InternalEnumerator_1_t5866 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25134(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25134_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Space_t132_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Space>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25132_MethodInfo;
 void InternalEnumerator_1_Dispose_m25132 (InternalEnumerator_1_t5866 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Space>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25133_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25133 (InternalEnumerator_1_t5866 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityEngine.Space>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25134 (InternalEnumerator_1_t5866 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSpace_t132_m34207(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSpace_t132_m34207_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.Space>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5866____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5866_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5866, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5866____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5866_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5866, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5866_FieldInfos[] =
{
	&InternalEnumerator_1_t5866____array_0_FieldInfo,
	&InternalEnumerator_1_t5866____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t5866____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5866_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25131_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5866____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5866_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25134_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5866_PropertyInfos[] =
{
	&InternalEnumerator_1_t5866____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5866____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5866_InternalEnumerator_1__ctor_m25129_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25129_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Space>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25129_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25129/* method */
	, &InternalEnumerator_1_t5866_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5866_InternalEnumerator_1__ctor_m25129_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25129_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25130_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Space>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25130_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25130/* method */
	, &InternalEnumerator_1_t5866_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25130_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25131_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.Space>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25131_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25131/* method */
	, &InternalEnumerator_1_t5866_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25131_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25132_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.Space>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25132_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25132/* method */
	, &InternalEnumerator_1_t5866_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25132_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25133_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.Space>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25133_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25133/* method */
	, &InternalEnumerator_1_t5866_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25133_GenericMethod/* genericMethod */

};
extern Il2CppType Space_t132_0_0_0;
extern void* RuntimeInvoker_Space_t132 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25134_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.Space>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25134_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25134/* method */
	, &InternalEnumerator_1_t5866_il2cpp_TypeInfo/* declaring_type */
	, &Space_t132_0_0_0/* return_type */
	, RuntimeInvoker_Space_t132/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25134_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5866_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25129_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25130_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25131_MethodInfo,
	&InternalEnumerator_1_Dispose_m25132_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25133_MethodInfo,
	&InternalEnumerator_1_get_Current_m25134_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t5866_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25131_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25133_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25130_MethodInfo,
	&InternalEnumerator_1_Dispose_m25132_MethodInfo,
	&InternalEnumerator_1_get_Current_m25134_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5866_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7717_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5866_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7717_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5866_0_0_0;
extern Il2CppType InternalEnumerator_1_t5866_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5866_GenericClass;
TypeInfo InternalEnumerator_1_t5866_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5866_MethodInfos/* methods */
	, InternalEnumerator_1_t5866_PropertyInfos/* properties */
	, InternalEnumerator_1_t5866_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5866_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5866_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5866_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5866_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5866_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5866_1_0_0/* this_arg */
	, InternalEnumerator_1_t5866_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5866_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5866)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9209_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Space>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Space>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Space>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Space>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Space>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Space>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Space>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.Space>
extern MethodInfo ICollection_1_get_Count_m43164_MethodInfo;
static PropertyInfo ICollection_1_t9209____Count_PropertyInfo = 
{
	&ICollection_1_t9209_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43164_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43165_MethodInfo;
static PropertyInfo ICollection_1_t9209____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9209_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43165_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9209_PropertyInfos[] =
{
	&ICollection_1_t9209____Count_PropertyInfo,
	&ICollection_1_t9209____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43164_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.Space>::get_Count()
MethodInfo ICollection_1_get_Count_m43164_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9209_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43164_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43165_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Space>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43165_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9209_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43165_GenericMethod/* genericMethod */

};
extern Il2CppType Space_t132_0_0_0;
extern Il2CppType Space_t132_0_0_0;
static ParameterInfo ICollection_1_t9209_ICollection_1_Add_m43166_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Space_t132_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43166_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Space>::Add(T)
MethodInfo ICollection_1_Add_m43166_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9209_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, ICollection_1_t9209_ICollection_1_Add_m43166_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43166_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43167_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Space>::Clear()
MethodInfo ICollection_1_Clear_m43167_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9209_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43167_GenericMethod/* genericMethod */

};
extern Il2CppType Space_t132_0_0_0;
static ParameterInfo ICollection_1_t9209_ICollection_1_Contains_m43168_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Space_t132_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43168_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Space>::Contains(T)
MethodInfo ICollection_1_Contains_m43168_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9209_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int32_t104/* invoker_method */
	, ICollection_1_t9209_ICollection_1_Contains_m43168_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43168_GenericMethod/* genericMethod */

};
extern Il2CppType SpaceU5BU5D_t6990_0_0_0;
extern Il2CppType SpaceU5BU5D_t6990_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9209_ICollection_1_CopyTo_m43169_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SpaceU5BU5D_t6990_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43169_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.Space>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43169_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9209_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9209_ICollection_1_CopyTo_m43169_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43169_GenericMethod/* genericMethod */

};
extern Il2CppType Space_t132_0_0_0;
static ParameterInfo ICollection_1_t9209_ICollection_1_Remove_m43170_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Space_t132_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43170_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.Space>::Remove(T)
MethodInfo ICollection_1_Remove_m43170_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9209_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int32_t104/* invoker_method */
	, ICollection_1_t9209_ICollection_1_Remove_m43170_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43170_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9209_MethodInfos[] =
{
	&ICollection_1_get_Count_m43164_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43165_MethodInfo,
	&ICollection_1_Add_m43166_MethodInfo,
	&ICollection_1_Clear_m43167_MethodInfo,
	&ICollection_1_Contains_m43168_MethodInfo,
	&ICollection_1_CopyTo_m43169_MethodInfo,
	&ICollection_1_Remove_m43170_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9211_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9209_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9211_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9209_0_0_0;
extern Il2CppType ICollection_1_t9209_1_0_0;
struct ICollection_1_t9209;
extern Il2CppGenericClass ICollection_1_t9209_GenericClass;
TypeInfo ICollection_1_t9209_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9209_MethodInfos/* methods */
	, ICollection_1_t9209_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9209_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9209_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9209_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9209_0_0_0/* byval_arg */
	, &ICollection_1_t9209_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9209_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Space>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.Space>
extern Il2CppType IEnumerator_1_t7717_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43171_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.Space>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43171_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9211_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7717_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43171_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9211_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43171_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9211_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9211_0_0_0;
extern Il2CppType IEnumerable_1_t9211_1_0_0;
struct IEnumerable_1_t9211;
extern Il2CppGenericClass IEnumerable_1_t9211_GenericClass;
TypeInfo IEnumerable_1_t9211_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9211_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9211_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9211_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9211_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9211_0_0_0/* byval_arg */
	, &IEnumerable_1_t9211_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9211_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9210_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Space>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Space>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Space>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.Space>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.Space>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.Space>
extern MethodInfo IList_1_get_Item_m43172_MethodInfo;
extern MethodInfo IList_1_set_Item_m43173_MethodInfo;
static PropertyInfo IList_1_t9210____Item_PropertyInfo = 
{
	&IList_1_t9210_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43172_MethodInfo/* get */
	, &IList_1_set_Item_m43173_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9210_PropertyInfos[] =
{
	&IList_1_t9210____Item_PropertyInfo,
	NULL
};
extern Il2CppType Space_t132_0_0_0;
static ParameterInfo IList_1_t9210_IList_1_IndexOf_m43174_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Space_t132_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43174_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.Space>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43174_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9210_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9210_IList_1_IndexOf_m43174_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43174_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType Space_t132_0_0_0;
static ParameterInfo IList_1_t9210_IList_1_Insert_m43175_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Space_t132_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43175_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Space>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43175_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9210_IList_1_Insert_m43175_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43175_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9210_IList_1_RemoveAt_m43176_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43176_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Space>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43176_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9210_IList_1_RemoveAt_m43176_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43176_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9210_IList_1_get_Item_m43172_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Space_t132_0_0_0;
extern void* RuntimeInvoker_Space_t132_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43172_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.Space>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43172_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9210_il2cpp_TypeInfo/* declaring_type */
	, &Space_t132_0_0_0/* return_type */
	, RuntimeInvoker_Space_t132_Int32_t104/* invoker_method */
	, IList_1_t9210_IList_1_get_Item_m43172_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43172_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType Space_t132_0_0_0;
static ParameterInfo IList_1_t9210_IList_1_set_Item_m43173_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Space_t132_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43173_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.Space>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43173_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9210_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9210_IList_1_set_Item_m43173_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43173_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9210_MethodInfos[] =
{
	&IList_1_IndexOf_m43174_MethodInfo,
	&IList_1_Insert_m43175_MethodInfo,
	&IList_1_RemoveAt_m43176_MethodInfo,
	&IList_1_get_Item_m43172_MethodInfo,
	&IList_1_set_Item_m43173_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9210_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9209_il2cpp_TypeInfo,
	&IEnumerable_1_t9211_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9210_0_0_0;
extern Il2CppType IList_1_t9210_1_0_0;
struct IList_1_t9210;
extern Il2CppGenericClass IList_1_t9210_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9210_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9210_MethodInfos/* methods */
	, IList_1_t9210_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9210_il2cpp_TypeInfo/* element_class */
	, IList_1_t9210_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9210_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9210_0_0_0/* byval_arg */
	, &IList_1_t9210_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9210_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7719_il2cpp_TypeInfo;

// UnityEngine.RuntimePlatform
#include "UnityEngine_UnityEngine_RuntimePlatform.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.RuntimePlatform>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.RuntimePlatform>
extern MethodInfo IEnumerator_1_get_Current_m43177_MethodInfo;
static PropertyInfo IEnumerator_1_t7719____Current_PropertyInfo = 
{
	&IEnumerator_1_t7719_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43177_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7719_PropertyInfos[] =
{
	&IEnumerator_1_t7719____Current_PropertyInfo,
	NULL
};
extern Il2CppType RuntimePlatform_t2460_0_0_0;
extern void* RuntimeInvoker_RuntimePlatform_t2460 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43177_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.RuntimePlatform>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43177_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7719_il2cpp_TypeInfo/* declaring_type */
	, &RuntimePlatform_t2460_0_0_0/* return_type */
	, RuntimeInvoker_RuntimePlatform_t2460/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43177_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7719_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43177_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7719_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7719_0_0_0;
extern Il2CppType IEnumerator_1_t7719_1_0_0;
struct IEnumerator_1_t7719;
extern Il2CppGenericClass IEnumerator_1_t7719_GenericClass;
TypeInfo IEnumerator_1_t7719_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7719_MethodInfos/* methods */
	, IEnumerator_1_t7719_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7719_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7719_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7719_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7719_0_0_0/* byval_arg */
	, &IEnumerator_1_t7719_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7719_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_275.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5867_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_275MethodDeclarations.h"

extern TypeInfo RuntimePlatform_t2460_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25140_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRuntimePlatform_t2460_m34218_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.RuntimePlatform>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.RuntimePlatform>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisRuntimePlatform_t2460_m34218 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25135_MethodInfo;
 void InternalEnumerator_1__ctor_m25135 (InternalEnumerator_1_t5867 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25136_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25136 (InternalEnumerator_1_t5867 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25137_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25137 (InternalEnumerator_1_t5867 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25140(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25140_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&RuntimePlatform_t2460_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25138_MethodInfo;
 void InternalEnumerator_1_Dispose_m25138 (InternalEnumerator_1_t5867 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25139_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25139 (InternalEnumerator_1_t5867 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25140 (InternalEnumerator_1_t5867 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisRuntimePlatform_t2460_m34218(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisRuntimePlatform_t2460_m34218_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5867____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5867_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5867, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5867____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5867_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5867, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5867_FieldInfos[] =
{
	&InternalEnumerator_1_t5867____array_0_FieldInfo,
	&InternalEnumerator_1_t5867____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t5867____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5867_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25137_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5867____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5867_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25140_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5867_PropertyInfos[] =
{
	&InternalEnumerator_1_t5867____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5867____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5867_InternalEnumerator_1__ctor_m25135_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25135_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25135_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25135/* method */
	, &InternalEnumerator_1_t5867_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5867_InternalEnumerator_1__ctor_m25135_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25135_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25136_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25136_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25136/* method */
	, &InternalEnumerator_1_t5867_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25136_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25137_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25137_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25137/* method */
	, &InternalEnumerator_1_t5867_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25137_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25138_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25138_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25138/* method */
	, &InternalEnumerator_1_t5867_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25138_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25139_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25139_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25139/* method */
	, &InternalEnumerator_1_t5867_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25139_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimePlatform_t2460_0_0_0;
extern void* RuntimeInvoker_RuntimePlatform_t2460 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25140_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.RuntimePlatform>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25140_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25140/* method */
	, &InternalEnumerator_1_t5867_il2cpp_TypeInfo/* declaring_type */
	, &RuntimePlatform_t2460_0_0_0/* return_type */
	, RuntimeInvoker_RuntimePlatform_t2460/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25140_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5867_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25135_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25136_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25137_MethodInfo,
	&InternalEnumerator_1_Dispose_m25138_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25139_MethodInfo,
	&InternalEnumerator_1_get_Current_m25140_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t5867_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25137_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25139_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25136_MethodInfo,
	&InternalEnumerator_1_Dispose_m25138_MethodInfo,
	&InternalEnumerator_1_get_Current_m25140_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5867_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7719_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5867_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7719_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5867_0_0_0;
extern Il2CppType InternalEnumerator_1_t5867_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5867_GenericClass;
TypeInfo InternalEnumerator_1_t5867_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5867_MethodInfos/* methods */
	, InternalEnumerator_1_t5867_PropertyInfos/* properties */
	, InternalEnumerator_1_t5867_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5867_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5867_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5867_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5867_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5867_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5867_1_0_0/* this_arg */
	, InternalEnumerator_1_t5867_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5867_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5867)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9212_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>
extern MethodInfo ICollection_1_get_Count_m43178_MethodInfo;
static PropertyInfo ICollection_1_t9212____Count_PropertyInfo = 
{
	&ICollection_1_t9212_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43178_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43179_MethodInfo;
static PropertyInfo ICollection_1_t9212____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9212_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43179_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9212_PropertyInfos[] =
{
	&ICollection_1_t9212____Count_PropertyInfo,
	&ICollection_1_t9212____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43178_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::get_Count()
MethodInfo ICollection_1_get_Count_m43178_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9212_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43178_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43179_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43179_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9212_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43179_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimePlatform_t2460_0_0_0;
extern Il2CppType RuntimePlatform_t2460_0_0_0;
static ParameterInfo ICollection_1_t9212_ICollection_1_Add_m43180_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimePlatform_t2460_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43180_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::Add(T)
MethodInfo ICollection_1_Add_m43180_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9212_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, ICollection_1_t9212_ICollection_1_Add_m43180_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43180_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43181_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::Clear()
MethodInfo ICollection_1_Clear_m43181_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9212_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43181_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimePlatform_t2460_0_0_0;
static ParameterInfo ICollection_1_t9212_ICollection_1_Contains_m43182_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimePlatform_t2460_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43182_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::Contains(T)
MethodInfo ICollection_1_Contains_m43182_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9212_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int32_t104/* invoker_method */
	, ICollection_1_t9212_ICollection_1_Contains_m43182_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43182_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimePlatformU5BU5D_t6991_0_0_0;
extern Il2CppType RuntimePlatformU5BU5D_t6991_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9212_ICollection_1_CopyTo_m43183_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RuntimePlatformU5BU5D_t6991_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43183_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43183_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9212_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9212_ICollection_1_CopyTo_m43183_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43183_GenericMethod/* genericMethod */

};
extern Il2CppType RuntimePlatform_t2460_0_0_0;
static ParameterInfo ICollection_1_t9212_ICollection_1_Remove_m43184_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimePlatform_t2460_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43184_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.RuntimePlatform>::Remove(T)
MethodInfo ICollection_1_Remove_m43184_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9212_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int32_t104/* invoker_method */
	, ICollection_1_t9212_ICollection_1_Remove_m43184_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43184_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9212_MethodInfos[] =
{
	&ICollection_1_get_Count_m43178_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43179_MethodInfo,
	&ICollection_1_Add_m43180_MethodInfo,
	&ICollection_1_Clear_m43181_MethodInfo,
	&ICollection_1_Contains_m43182_MethodInfo,
	&ICollection_1_CopyTo_m43183_MethodInfo,
	&ICollection_1_Remove_m43184_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9214_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9212_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9214_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9212_0_0_0;
extern Il2CppType ICollection_1_t9212_1_0_0;
struct ICollection_1_t9212;
extern Il2CppGenericClass ICollection_1_t9212_GenericClass;
TypeInfo ICollection_1_t9212_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9212_MethodInfos/* methods */
	, ICollection_1_t9212_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9212_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9212_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9212_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9212_0_0_0/* byval_arg */
	, &ICollection_1_t9212_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9212_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RuntimePlatform>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.RuntimePlatform>
extern Il2CppType IEnumerator_1_t7719_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43185_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.RuntimePlatform>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43185_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9214_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7719_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43185_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9214_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43185_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9214_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9214_0_0_0;
extern Il2CppType IEnumerable_1_t9214_1_0_0;
struct IEnumerable_1_t9214;
extern Il2CppGenericClass IEnumerable_1_t9214_GenericClass;
TypeInfo IEnumerable_1_t9214_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9214_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9214_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9214_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9214_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9214_0_0_0/* byval_arg */
	, &IEnumerable_1_t9214_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9214_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9213_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RuntimePlatform>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RuntimePlatform>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RuntimePlatform>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.RuntimePlatform>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.RuntimePlatform>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.RuntimePlatform>
extern MethodInfo IList_1_get_Item_m43186_MethodInfo;
extern MethodInfo IList_1_set_Item_m43187_MethodInfo;
static PropertyInfo IList_1_t9213____Item_PropertyInfo = 
{
	&IList_1_t9213_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43186_MethodInfo/* get */
	, &IList_1_set_Item_m43187_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9213_PropertyInfos[] =
{
	&IList_1_t9213____Item_PropertyInfo,
	NULL
};
extern Il2CppType RuntimePlatform_t2460_0_0_0;
static ParameterInfo IList_1_t9213_IList_1_IndexOf_m43188_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RuntimePlatform_t2460_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43188_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.RuntimePlatform>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43188_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9213_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9213_IList_1_IndexOf_m43188_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43188_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType RuntimePlatform_t2460_0_0_0;
static ParameterInfo IList_1_t9213_IList_1_Insert_m43189_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RuntimePlatform_t2460_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43189_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.RuntimePlatform>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43189_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9213_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9213_IList_1_Insert_m43189_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43189_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9213_IList_1_RemoveAt_m43190_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43190_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.RuntimePlatform>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43190_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9213_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9213_IList_1_RemoveAt_m43190_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43190_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9213_IList_1_get_Item_m43186_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType RuntimePlatform_t2460_0_0_0;
extern void* RuntimeInvoker_RuntimePlatform_t2460_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43186_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.RuntimePlatform>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43186_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9213_il2cpp_TypeInfo/* declaring_type */
	, &RuntimePlatform_t2460_0_0_0/* return_type */
	, RuntimeInvoker_RuntimePlatform_t2460_Int32_t104/* invoker_method */
	, IList_1_t9213_IList_1_get_Item_m43186_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43186_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType RuntimePlatform_t2460_0_0_0;
static ParameterInfo IList_1_t9213_IList_1_set_Item_m43187_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RuntimePlatform_t2460_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43187_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.RuntimePlatform>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43187_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9213_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9213_IList_1_set_Item_m43187_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43187_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9213_MethodInfos[] =
{
	&IList_1_IndexOf_m43188_MethodInfo,
	&IList_1_Insert_m43189_MethodInfo,
	&IList_1_RemoveAt_m43190_MethodInfo,
	&IList_1_get_Item_m43186_MethodInfo,
	&IList_1_set_Item_m43187_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9213_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9212_il2cpp_TypeInfo,
	&IEnumerable_1_t9214_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9213_0_0_0;
extern Il2CppType IList_1_t9213_1_0_0;
struct IList_1_t9213;
extern Il2CppGenericClass IList_1_t9213_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9213_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9213_MethodInfos/* methods */
	, IList_1_t9213_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9213_il2cpp_TypeInfo/* element_class */
	, IList_1_t9213_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9213_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9213_0_0_0/* byval_arg */
	, &IList_1_t9213_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9213_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7721_il2cpp_TypeInfo;

// UnityEngine.LogType
#include "UnityEngine_UnityEngine_LogType.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.LogType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.LogType>
extern MethodInfo IEnumerator_1_get_Current_m43191_MethodInfo;
static PropertyInfo IEnumerator_1_t7721____Current_PropertyInfo = 
{
	&IEnumerator_1_t7721_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43191_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7721_PropertyInfos[] =
{
	&IEnumerator_1_t7721____Current_PropertyInfo,
	NULL
};
extern Il2CppType LogType_t2461_0_0_0;
extern void* RuntimeInvoker_LogType_t2461 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43191_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.LogType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43191_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7721_il2cpp_TypeInfo/* declaring_type */
	, &LogType_t2461_0_0_0/* return_type */
	, RuntimeInvoker_LogType_t2461/* invoker_method */
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
	, &IEnumerator_1_get_Current_m43191_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7721_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43191_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7721_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7721_0_0_0;
extern Il2CppType IEnumerator_1_t7721_1_0_0;
struct IEnumerator_1_t7721;
extern Il2CppGenericClass IEnumerator_1_t7721_GenericClass;
TypeInfo IEnumerator_1_t7721_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7721_MethodInfos/* methods */
	, IEnumerator_1_t7721_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7721_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7721_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7721_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7721_0_0_0/* byval_arg */
	, &IEnumerator_1_t7721_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7721_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.LogType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_276.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5868_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.LogType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_276MethodDeclarations.h"

extern TypeInfo LogType_t2461_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25146_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLogType_t2461_m34229_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.LogType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.LogType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisLogType_t2461_m34229 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;


// System.Void System.Array/InternalEnumerator`1<UnityEngine.LogType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m25141_MethodInfo;
 void InternalEnumerator_1__ctor_m25141 (InternalEnumerator_1_t5868 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array_0 = ___array;
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.LogType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25142_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25142 (InternalEnumerator_1_t5868 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<UnityEngine.LogType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25143_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25143 (InternalEnumerator_1_t5868 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m25146(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m25146_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&LogType_t2461_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<UnityEngine.LogType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m25144_MethodInfo;
 void InternalEnumerator_1_Dispose_m25144 (InternalEnumerator_1_t5868 * __this, MethodInfo* method){
	{
		__this->___idx_1 = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.LogType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m25145_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m25145 (InternalEnumerator_1_t5868 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<UnityEngine.LogType>::get_Current()
 int32_t InternalEnumerator_1_get_Current_m25146 (InternalEnumerator_1_t5868 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisLogType_t2461_m34229(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisLogType_t2461_m34229_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.LogType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5868____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5868_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5868, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5868____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5868_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5868, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5868_FieldInfos[] =
{
	&InternalEnumerator_1_t5868____array_0_FieldInfo,
	&InternalEnumerator_1_t5868____idx_1_FieldInfo,
	NULL
};
static PropertyInfo InternalEnumerator_1_t5868____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5868_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25143_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5868____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5868_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25146_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5868_PropertyInfos[] =
{
	&InternalEnumerator_1_t5868____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5868____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5868_InternalEnumerator_1__ctor_m25141_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25141_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.LogType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25141_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m25141/* method */
	, &InternalEnumerator_1_t5868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5868_InternalEnumerator_1__ctor_m25141_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25141_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25142_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.LogType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25142_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25142/* method */
	, &InternalEnumerator_1_t5868_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25142_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25143_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.LogType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25143_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25143/* method */
	, &InternalEnumerator_1_t5868_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25143_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25144_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.LogType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25144_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m25144/* method */
	, &InternalEnumerator_1_t5868_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25144_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25145_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.LogType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25145_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m25145/* method */
	, &InternalEnumerator_1_t5868_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25145_GenericMethod/* genericMethod */

};
extern Il2CppType LogType_t2461_0_0_0;
extern void* RuntimeInvoker_LogType_t2461 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25146_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.LogType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25146_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m25146/* method */
	, &InternalEnumerator_1_t5868_il2cpp_TypeInfo/* declaring_type */
	, &LogType_t2461_0_0_0/* return_type */
	, RuntimeInvoker_LogType_t2461/* invoker_method */
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
	, &InternalEnumerator_1_get_Current_m25146_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5868_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25141_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25142_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25143_MethodInfo,
	&InternalEnumerator_1_Dispose_m25144_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25145_MethodInfo,
	&InternalEnumerator_1_get_Current_m25146_MethodInfo,
	NULL
};
static MethodInfo* InternalEnumerator_1_t5868_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25143_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25145_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25142_MethodInfo,
	&InternalEnumerator_1_Dispose_m25144_MethodInfo,
	&InternalEnumerator_1_get_Current_m25146_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5868_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7721_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5868_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7721_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5868_0_0_0;
extern Il2CppType InternalEnumerator_1_t5868_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5868_GenericClass;
TypeInfo InternalEnumerator_1_t5868_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5868_MethodInfos/* methods */
	, InternalEnumerator_1_t5868_PropertyInfos/* properties */
	, InternalEnumerator_1_t5868_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5868_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5868_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5868_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5868_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5868_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5868_1_0_0/* this_arg */
	, InternalEnumerator_1_t5868_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5868_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5868)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9215_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.LogType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.LogType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.LogType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.LogType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.LogType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.LogType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.LogType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.LogType>
extern MethodInfo ICollection_1_get_Count_m43192_MethodInfo;
static PropertyInfo ICollection_1_t9215____Count_PropertyInfo = 
{
	&ICollection_1_t9215_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43192_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43193_MethodInfo;
static PropertyInfo ICollection_1_t9215____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9215_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43193_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9215_PropertyInfos[] =
{
	&ICollection_1_t9215____Count_PropertyInfo,
	&ICollection_1_t9215____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43192_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.LogType>::get_Count()
MethodInfo ICollection_1_get_Count_m43192_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9215_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43192_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43193_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.LogType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43193_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9215_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43193_GenericMethod/* genericMethod */

};
extern Il2CppType LogType_t2461_0_0_0;
extern Il2CppType LogType_t2461_0_0_0;
static ParameterInfo ICollection_1_t9215_ICollection_1_Add_m43194_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LogType_t2461_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43194_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.LogType>::Add(T)
MethodInfo ICollection_1_Add_m43194_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9215_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, ICollection_1_t9215_ICollection_1_Add_m43194_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43194_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43195_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.LogType>::Clear()
MethodInfo ICollection_1_Clear_m43195_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9215_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43195_GenericMethod/* genericMethod */

};
extern Il2CppType LogType_t2461_0_0_0;
static ParameterInfo ICollection_1_t9215_ICollection_1_Contains_m43196_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LogType_t2461_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43196_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.LogType>::Contains(T)
MethodInfo ICollection_1_Contains_m43196_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9215_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int32_t104/* invoker_method */
	, ICollection_1_t9215_ICollection_1_Contains_m43196_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43196_GenericMethod/* genericMethod */

};
extern Il2CppType LogTypeU5BU5D_t6992_0_0_0;
extern Il2CppType LogTypeU5BU5D_t6992_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9215_ICollection_1_CopyTo_m43197_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &LogTypeU5BU5D_t6992_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43197_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.LogType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43197_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9215_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9215_ICollection_1_CopyTo_m43197_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43197_GenericMethod/* genericMethod */

};
extern Il2CppType LogType_t2461_0_0_0;
static ParameterInfo ICollection_1_t9215_ICollection_1_Remove_m43198_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LogType_t2461_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43198_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.LogType>::Remove(T)
MethodInfo ICollection_1_Remove_m43198_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9215_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Int32_t104/* invoker_method */
	, ICollection_1_t9215_ICollection_1_Remove_m43198_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43198_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9215_MethodInfos[] =
{
	&ICollection_1_get_Count_m43192_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43193_MethodInfo,
	&ICollection_1_Add_m43194_MethodInfo,
	&ICollection_1_Clear_m43195_MethodInfo,
	&ICollection_1_Contains_m43196_MethodInfo,
	&ICollection_1_CopyTo_m43197_MethodInfo,
	&ICollection_1_Remove_m43198_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9217_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9215_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9217_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9215_0_0_0;
extern Il2CppType ICollection_1_t9215_1_0_0;
struct ICollection_1_t9215;
extern Il2CppGenericClass ICollection_1_t9215_GenericClass;
TypeInfo ICollection_1_t9215_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9215_MethodInfos/* methods */
	, ICollection_1_t9215_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9215_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9215_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9215_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9215_0_0_0/* byval_arg */
	, &ICollection_1_t9215_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9215_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.LogType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.LogType>
extern Il2CppType IEnumerator_1_t7721_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43199_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.LogType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43199_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9217_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7721_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43199_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9217_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43199_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9217_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9217_0_0_0;
extern Il2CppType IEnumerable_1_t9217_1_0_0;
struct IEnumerable_1_t9217;
extern Il2CppGenericClass IEnumerable_1_t9217_GenericClass;
TypeInfo IEnumerable_1_t9217_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9217_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9217_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9217_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9217_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9217_0_0_0/* byval_arg */
	, &IEnumerable_1_t9217_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9217_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t9216_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<UnityEngine.LogType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.LogType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<UnityEngine.LogType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<UnityEngine.LogType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<UnityEngine.LogType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<UnityEngine.LogType>
extern MethodInfo IList_1_get_Item_m43200_MethodInfo;
extern MethodInfo IList_1_set_Item_m43201_MethodInfo;
static PropertyInfo IList_1_t9216____Item_PropertyInfo = 
{
	&IList_1_t9216_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m43200_MethodInfo/* get */
	, &IList_1_set_Item_m43201_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t9216_PropertyInfos[] =
{
	&IList_1_t9216____Item_PropertyInfo,
	NULL
};
extern Il2CppType LogType_t2461_0_0_0;
static ParameterInfo IList_1_t9216_IList_1_IndexOf_m43202_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LogType_t2461_0_0_0},
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_IndexOf_m43202_GenericMethod;
// System.Int32 System.Collections.Generic.IList`1<UnityEngine.LogType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m43202_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t9216_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t104_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9216_IList_1_IndexOf_m43202_ParameterInfos/* parameters */
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
	, &IList_1_IndexOf_m43202_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType LogType_t2461_0_0_0;
static ParameterInfo IList_1_t9216_IList_1_Insert_m43203_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &LogType_t2461_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_Insert_m43203_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.LogType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m43203_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t9216_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9216_IList_1_Insert_m43203_ParameterInfos/* parameters */
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
	, &IList_1_Insert_m43203_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9216_IList_1_RemoveAt_m43204_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_RemoveAt_m43204_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.LogType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m43204_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t9216_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104/* invoker_method */
	, IList_1_t9216_IList_1_RemoveAt_m43204_ParameterInfos/* parameters */
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
	, &IList_1_RemoveAt_m43204_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo IList_1_t9216_IList_1_get_Item_m43200_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType LogType_t2461_0_0_0;
extern void* RuntimeInvoker_LogType_t2461_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_get_Item_m43200_GenericMethod;
// T System.Collections.Generic.IList`1<UnityEngine.LogType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m43200_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t9216_il2cpp_TypeInfo/* declaring_type */
	, &LogType_t2461_0_0_0/* return_type */
	, RuntimeInvoker_LogType_t2461_Int32_t104/* invoker_method */
	, IList_1_t9216_IList_1_get_Item_m43200_ParameterInfos/* parameters */
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
	, &IList_1_get_Item_m43200_GenericMethod/* genericMethod */

};
extern Il2CppType Int32_t104_0_0_0;
extern Il2CppType LogType_t2461_0_0_0;
static ParameterInfo IList_1_t9216_IList_1_set_Item_m43201_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &LogType_t2461_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Int32_t104_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IList_1_set_Item_m43201_GenericMethod;
// System.Void System.Collections.Generic.IList`1<UnityEngine.LogType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m43201_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t9216_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Int32_t104_Int32_t104/* invoker_method */
	, IList_1_t9216_IList_1_set_Item_m43201_ParameterInfos/* parameters */
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
	, &IList_1_set_Item_m43201_GenericMethod/* genericMethod */

};
static MethodInfo* IList_1_t9216_MethodInfos[] =
{
	&IList_1_IndexOf_m43202_MethodInfo,
	&IList_1_Insert_m43203_MethodInfo,
	&IList_1_RemoveAt_m43204_MethodInfo,
	&IList_1_get_Item_m43200_MethodInfo,
	&IList_1_set_Item_m43201_MethodInfo,
	NULL
};
static TypeInfo* IList_1_t9216_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&ICollection_1_t9215_il2cpp_TypeInfo,
	&IEnumerable_1_t9217_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t9216_0_0_0;
extern Il2CppType IList_1_t9216_1_0_0;
struct IList_1_t9216;
extern Il2CppGenericClass IList_1_t9216_GenericClass;
extern CustomAttributesCache IList_1_t4196__CustomAttributeCache;
TypeInfo IList_1_t9216_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t9216_MethodInfos/* methods */
	, IList_1_t9216_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t9216_il2cpp_TypeInfo/* element_class */
	, IList_1_t9216_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t4196__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t9216_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t9216_0_0_0/* byval_arg */
	, &IList_1_t9216_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t9216_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t7723_il2cpp_TypeInfo;

// UnityEngine.ScriptableObject
#include "UnityEngine_UnityEngine_ScriptableObject.h"


// T System.Collections.Generic.IEnumerator`1<UnityEngine.ScriptableObject>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<UnityEngine.ScriptableObject>
extern MethodInfo IEnumerator_1_get_Current_m43205_MethodInfo;
static PropertyInfo IEnumerator_1_t7723____Current_PropertyInfo = 
{
	&IEnumerator_1_t7723_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m43205_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t7723_PropertyInfos[] =
{
	&IEnumerator_1_t7723____Current_PropertyInfo,
	NULL
};
extern Il2CppType ScriptableObject_t2463_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerator_1_get_Current_m43205_GenericMethod;
// T System.Collections.Generic.IEnumerator`1<UnityEngine.ScriptableObject>::get_Current()
MethodInfo IEnumerator_1_get_Current_m43205_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t7723_il2cpp_TypeInfo/* declaring_type */
	, &ScriptableObject_t2463_0_0_0/* return_type */
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
	, &IEnumerator_1_get_Current_m43205_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerator_1_t7723_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m43205_MethodInfo,
	NULL
};
static TypeInfo* IEnumerator_1_t7723_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t7723_0_0_0;
extern Il2CppType IEnumerator_1_t7723_1_0_0;
struct IEnumerator_1_t7723;
extern Il2CppGenericClass IEnumerator_1_t7723_GenericClass;
TypeInfo IEnumerator_1_t7723_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t7723_MethodInfos/* methods */
	, IEnumerator_1_t7723_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t7723_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t7723_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t7723_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t7723_0_0_0/* byval_arg */
	, &IEnumerator_1_t7723_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t7723_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_277.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t5869_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_277MethodDeclarations.h"

extern TypeInfo ScriptableObject_t2463_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m25152_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisScriptableObject_t2463_m34240_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<UnityEngine.ScriptableObject>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<UnityEngine.ScriptableObject>(System.Int32)
#define Array_InternalArray__get_Item_TisScriptableObject_t2463_m34240(__this, p0, method) (ScriptableObject_t2463 *)Array_InternalArray__get_Item_TisObject_t_m30104_gshared((Array_t *)__this, (int32_t)p0, method)


// System.Void System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::MoveNext()
// T System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t5869____array_0_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t5869_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5869, ___array_0) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t104_0_0_1;
FieldInfo InternalEnumerator_1_t5869____idx_1_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t104_0_0_1/* type */
	, &InternalEnumerator_1_t5869_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t5869, ___idx_1) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t5869_FieldInfos[] =
{
	&InternalEnumerator_1_t5869____array_0_FieldInfo,
	&InternalEnumerator_1_t5869____idx_1_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25149_MethodInfo;
static PropertyInfo InternalEnumerator_1_t5869____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5869_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25149_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo InternalEnumerator_1_t5869____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t5869_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m25152_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t5869_PropertyInfos[] =
{
	&InternalEnumerator_1_t5869____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t5869____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t5869_InternalEnumerator_1__ctor_m25147_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1__ctor_m25147_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m25147_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m14259_gshared/* method */
	, &InternalEnumerator_1_t5869_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, InternalEnumerator_1_t5869_InternalEnumerator_1__ctor_m25147_ParameterInfos/* parameters */
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
	, &InternalEnumerator_1__ctor_m25147_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25148_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25148_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m14261_gshared/* method */
	, &InternalEnumerator_1_t5869_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25148_GenericMethod/* genericMethod */

};
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25149_GenericMethod;
// System.Object System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25149_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m14263_gshared/* method */
	, &InternalEnumerator_1_t5869_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25149_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_Dispose_m25150_GenericMethod;
// System.Void System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m25150_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m14265_gshared/* method */
	, &InternalEnumerator_1_t5869_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_Dispose_m25150_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_MoveNext_m25151_GenericMethod;
// System.Boolean System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m25151_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m14267_gshared/* method */
	, &InternalEnumerator_1_t5869_il2cpp_TypeInfo/* declaring_type */
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
	, &InternalEnumerator_1_MoveNext_m25151_GenericMethod/* genericMethod */

};
extern Il2CppType ScriptableObject_t2463_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod InternalEnumerator_1_get_Current_m25152_GenericMethod;
// T System.Array/InternalEnumerator`1<UnityEngine.ScriptableObject>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m25152_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m14269_gshared/* method */
	, &InternalEnumerator_1_t5869_il2cpp_TypeInfo/* declaring_type */
	, &ScriptableObject_t2463_0_0_0/* return_type */
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
	, &InternalEnumerator_1_get_Current_m25152_GenericMethod/* genericMethod */

};
static MethodInfo* InternalEnumerator_1_t5869_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m25147_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25148_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25149_MethodInfo,
	&InternalEnumerator_1_Dispose_m25150_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25151_MethodInfo,
	&InternalEnumerator_1_get_Current_m25152_MethodInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_MoveNext_m25151_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25148_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m25150_MethodInfo;
static MethodInfo* InternalEnumerator_1_t5869_VTable[] =
{
	&ValueType_Equals_m519_MethodInfo,
	&Object_Finalize_m288_MethodInfo,
	&ValueType_GetHashCode_m520_MethodInfo,
	&ValueType_ToString_m521_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m25149_MethodInfo,
	&InternalEnumerator_1_MoveNext_m25151_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m25148_MethodInfo,
	&InternalEnumerator_1_Dispose_m25150_MethodInfo,
	&InternalEnumerator_1_get_Current_m25152_MethodInfo,
};
static TypeInfo* InternalEnumerator_1_t5869_InterfacesTypeInfos[] = 
{
	&IEnumerator_t51_il2cpp_TypeInfo,
	&IDisposable_t114_il2cpp_TypeInfo,
	&IEnumerator_1_t7723_il2cpp_TypeInfo,
};
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t5869_InterfacesOffsets[] = 
{
	{ &IEnumerator_t51_il2cpp_TypeInfo, 4},
	{ &IDisposable_t114_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t7723_il2cpp_TypeInfo, 8},
};
extern TypeInfo ScriptableObject_t2463_il2cpp_TypeInfo;
static Il2CppRGCTXData InternalEnumerator_1_t5869_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m25152_MethodInfo/* Method Usage */,
	&ScriptableObject_t2463_il2cpp_TypeInfo/* Class Usage */,
	&Array_InternalArray__get_Item_TisScriptableObject_t2463_m34240_MethodInfo/* Method Usage */,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t5869_0_0_0;
extern Il2CppType InternalEnumerator_1_t5869_1_0_0;
extern Il2CppGenericClass InternalEnumerator_1_t5869_GenericClass;
TypeInfo InternalEnumerator_1_t5869_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t5869_MethodInfos/* methods */
	, InternalEnumerator_1_t5869_PropertyInfos/* properties */
	, InternalEnumerator_1_t5869_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t144_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t5869_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t5869_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t5869_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t5869_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t5869_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t5869_1_0_0/* this_arg */
	, InternalEnumerator_1_t5869_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t5869_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t5869_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t5869)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t9218_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>
extern MethodInfo ICollection_1_get_Count_m43206_MethodInfo;
static PropertyInfo ICollection_1_t9218____Count_PropertyInfo = 
{
	&ICollection_1_t9218_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m43206_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m43207_MethodInfo;
static PropertyInfo ICollection_1_t9218____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t9218_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m43207_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t9218_PropertyInfos[] =
{
	&ICollection_1_t9218____Count_PropertyInfo,
	&ICollection_1_t9218____IsReadOnly_PropertyInfo,
	NULL
};
extern Il2CppType Int32_t104_0_0_0;
extern void* RuntimeInvoker_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_Count_m43206_GenericMethod;
// System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::get_Count()
MethodInfo ICollection_1_get_Count_m43206_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t9218_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_Count_m43206_GenericMethod/* genericMethod */

};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_get_IsReadOnly_m43207_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m43207_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t9218_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_get_IsReadOnly_m43207_GenericMethod/* genericMethod */

};
extern Il2CppType ScriptableObject_t2463_0_0_0;
extern Il2CppType ScriptableObject_t2463_0_0_0;
static ParameterInfo ICollection_1_t9218_ICollection_1_Add_m43208_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ScriptableObject_t2463_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Add_m43208_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Add(T)
MethodInfo ICollection_1_Add_m43208_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t9218_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t/* invoker_method */
	, ICollection_1_t9218_ICollection_1_Add_m43208_ParameterInfos/* parameters */
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
	, &ICollection_1_Add_m43208_GenericMethod/* genericMethod */

};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Clear_m43209_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Clear()
MethodInfo ICollection_1_Clear_m43209_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t9218_il2cpp_TypeInfo/* declaring_type */
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
	, &ICollection_1_Clear_m43209_GenericMethod/* genericMethod */

};
extern Il2CppType ScriptableObject_t2463_0_0_0;
static ParameterInfo ICollection_1_t9218_ICollection_1_Contains_m43210_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ScriptableObject_t2463_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Contains_m43210_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Contains(T)
MethodInfo ICollection_1_Contains_m43210_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t9218_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9218_ICollection_1_Contains_m43210_ParameterInfos/* parameters */
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
	, &ICollection_1_Contains_m43210_GenericMethod/* genericMethod */

};
extern Il2CppType ScriptableObjectU5BU5D_t6993_0_0_0;
extern Il2CppType ScriptableObjectU5BU5D_t6993_0_0_0;
extern Il2CppType Int32_t104_0_0_0;
static ParameterInfo ICollection_1_t9218_ICollection_1_CopyTo_m43211_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ScriptableObjectU5BU5D_t6993_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t104_0_0_0},
};
extern Il2CppType Void_t100_0_0_0;
extern void* RuntimeInvoker_Void_t100_Object_t_Int32_t104 (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_CopyTo_m43211_GenericMethod;
// System.Void System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m43211_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t9218_il2cpp_TypeInfo/* declaring_type */
	, &Void_t100_0_0_0/* return_type */
	, RuntimeInvoker_Void_t100_Object_t_Int32_t104/* invoker_method */
	, ICollection_1_t9218_ICollection_1_CopyTo_m43211_ParameterInfos/* parameters */
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
	, &ICollection_1_CopyTo_m43211_GenericMethod/* genericMethod */

};
extern Il2CppType ScriptableObject_t2463_0_0_0;
static ParameterInfo ICollection_1_t9218_ICollection_1_Remove_m43212_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ScriptableObject_t2463_0_0_0},
};
extern Il2CppType Boolean_t109_0_0_0;
extern void* RuntimeInvoker_Boolean_t109_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod ICollection_1_Remove_m43212_GenericMethod;
// System.Boolean System.Collections.Generic.ICollection`1<UnityEngine.ScriptableObject>::Remove(T)
MethodInfo ICollection_1_Remove_m43212_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t9218_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t109_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t109_Object_t/* invoker_method */
	, ICollection_1_t9218_ICollection_1_Remove_m43212_ParameterInfos/* parameters */
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
	, &ICollection_1_Remove_m43212_GenericMethod/* genericMethod */

};
static MethodInfo* ICollection_1_t9218_MethodInfos[] =
{
	&ICollection_1_get_Count_m43206_MethodInfo,
	&ICollection_1_get_IsReadOnly_m43207_MethodInfo,
	&ICollection_1_Add_m43208_MethodInfo,
	&ICollection_1_Clear_m43209_MethodInfo,
	&ICollection_1_Contains_m43210_MethodInfo,
	&ICollection_1_CopyTo_m43211_MethodInfo,
	&ICollection_1_Remove_m43212_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_1_t9220_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t9218_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
	&IEnumerable_1_t9220_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t9218_0_0_0;
extern Il2CppType ICollection_1_t9218_1_0_0;
struct ICollection_1_t9218;
extern Il2CppGenericClass ICollection_1_t9218_GenericClass;
TypeInfo ICollection_1_t9218_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t9218_MethodInfos/* methods */
	, ICollection_1_t9218_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t9218_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t9218_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t9218_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t9218_0_0_0/* byval_arg */
	, &ICollection_1_t9218_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t9218_GenericClass/* generic_class */
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



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ScriptableObject>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<UnityEngine.ScriptableObject>
extern Il2CppType IEnumerator_1_t7723_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
extern Il2CppGenericMethod IEnumerable_1_GetEnumerator_m43213_GenericMethod;
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<UnityEngine.ScriptableObject>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m43213_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t9220_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t7723_0_0_0/* return_type */
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
	, &IEnumerable_1_GetEnumerator_m43213_GenericMethod/* genericMethod */

};
static MethodInfo* IEnumerable_1_t9220_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m43213_MethodInfo,
	NULL
};
static TypeInfo* IEnumerable_1_t9220_InterfacesTypeInfos[] = 
{
	&IEnumerable_t1668_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t9220_0_0_0;
extern Il2CppType IEnumerable_1_t9220_1_0_0;
struct IEnumerable_1_t9220;
extern Il2CppGenericClass IEnumerable_1_t9220_GenericClass;
TypeInfo IEnumerable_1_t9220_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t9220_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t9220_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t9220_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t9220_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t9220_0_0_0/* byval_arg */
	, &IEnumerable_1_t9220_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t9220_GenericClass/* generic_class */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
