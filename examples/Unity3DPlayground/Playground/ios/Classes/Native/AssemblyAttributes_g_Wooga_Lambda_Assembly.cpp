#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
extern TypeInfo AssemblyFileVersionAttribute_t510_il2cpp_TypeInfo;
// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttribute.h"
// System.Reflection.AssemblyFileVersionAttribute
#include "mscorlib_System_Reflection_AssemblyFileVersionAttributeMethodDeclarations.h"
extern MethodInfo AssemblyFileVersionAttribute__ctor_m2452_MethodInfo;
extern TypeInfo DebuggableAttribute_t916_il2cpp_TypeInfo;
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttribute.h"
// System.Diagnostics.DebuggableAttribute
#include "mscorlib_System_Diagnostics_DebuggableAttributeMethodDeclarations.h"
extern MethodInfo DebuggableAttribute__ctor_m2811_MethodInfo;
extern TypeInfo InternalsVisibleToAttribute_t917_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToA.h"
// System.Runtime.CompilerServices.InternalsVisibleToAttribute
#include "mscorlib_System_Runtime_CompilerServices_InternalsVisibleToAMethodDeclarations.h"
extern MethodInfo InternalsVisibleToAttribute__ctor_m2812_MethodInfo;
extern TypeInfo AssemblyDescriptionAttribute_t505_il2cpp_TypeInfo;
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttribute.h"
// System.Reflection.AssemblyDescriptionAttribute
#include "mscorlib_System_Reflection_AssemblyDescriptionAttributeMethodDeclarations.h"
extern MethodInfo AssemblyDescriptionAttribute__ctor_m2447_MethodInfo;
extern TypeInfo ExtensionAttribute_t703_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribu.h"
// System.Runtime.CompilerServices.ExtensionAttribute
#include "System_Core_System_Runtime_CompilerServices_ExtensionAttribuMethodDeclarations.h"
extern MethodInfo ExtensionAttribute__ctor_m2581_MethodInfo;
extern TypeInfo AssemblyTitleAttribute_t504_il2cpp_TypeInfo;
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttribute.h"
// System.Reflection.AssemblyTitleAttribute
#include "mscorlib_System_Reflection_AssemblyTitleAttributeMethodDeclarations.h"
extern MethodInfo AssemblyTitleAttribute__ctor_m2446_MethodInfo;
extern TypeInfo CompilationRelaxationsAttribute_t918_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"
// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxatiMethodDeclarations.h"
extern MethodInfo CompilationRelaxationsAttribute__ctor_m2813_MethodInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t146_il2cpp_TypeInfo;
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilit.h"
// System.Runtime.CompilerServices.RuntimeCompatibilityAttribute
#include "mscorlib_System_Runtime_CompilerServices_RuntimeCompatibilitMethodDeclarations.h"
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m535_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m536_MethodInfo;
extern TypeInfo AssemblyProductAttribute_t508_il2cpp_TypeInfo;
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttribute.h"
// System.Reflection.AssemblyProductAttribute
#include "mscorlib_System_Reflection_AssemblyProductAttributeMethodDeclarations.h"
extern MethodInfo AssemblyProductAttribute__ctor_m2450_MethodInfo;
void g_Wooga_Lambda_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		AssemblyFileVersionAttribute_t510 * tmp;
		tmp = (AssemblyFileVersionAttribute_t510 *)il2cpp_codegen_object_new (&AssemblyFileVersionAttribute_t510_il2cpp_TypeInfo);
		AssemblyFileVersionAttribute__ctor_m2452(tmp, il2cpp_codegen_string_new_wrapper("0.2.0"), &AssemblyFileVersionAttribute__ctor_m2452_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		DebuggableAttribute_t916 * tmp;
		tmp = (DebuggableAttribute_t916 *)il2cpp_codegen_object_new (&DebuggableAttribute_t916_il2cpp_TypeInfo);
		DebuggableAttribute__ctor_m2811(tmp, 263, &DebuggableAttribute__ctor_m2811_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t917 * tmp;
		tmp = (InternalsVisibleToAttribute_t917 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t917_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m2812(tmp, il2cpp_codegen_string_new_wrapper("Wooga.Lambda.Tests"), &InternalsVisibleToAttribute__ctor_m2812_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t505 * tmp;
		tmp = (AssemblyDescriptionAttribute_t505 *)il2cpp_codegen_object_new (&AssemblyDescriptionAttribute_t505_il2cpp_TypeInfo);
		AssemblyDescriptionAttribute__ctor_m2447(tmp, il2cpp_codegen_string_new_wrapper("Functional utilities for C#"), &AssemblyDescriptionAttribute__ctor_m2447_MethodInfo);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t703 * tmp;
		tmp = (ExtensionAttribute_t703 *)il2cpp_codegen_object_new (&ExtensionAttribute_t703_il2cpp_TypeInfo);
		ExtensionAttribute__ctor_m2581(tmp, &ExtensionAttribute__ctor_m2581_MethodInfo);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t504 * tmp;
		tmp = (AssemblyTitleAttribute_t504 *)il2cpp_codegen_object_new (&AssemblyTitleAttribute_t504_il2cpp_TypeInfo);
		AssemblyTitleAttribute__ctor_m2446(tmp, il2cpp_codegen_string_new_wrapper("Wooga.Lambda"), &AssemblyTitleAttribute__ctor_m2446_MethodInfo);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		CompilationRelaxationsAttribute_t918 * tmp;
		tmp = (CompilationRelaxationsAttribute_t918 *)il2cpp_codegen_object_new (&CompilationRelaxationsAttribute_t918_il2cpp_TypeInfo);
		CompilationRelaxationsAttribute__ctor_m2813(tmp, 8, &CompilationRelaxationsAttribute__ctor_m2813_MethodInfo);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t146 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t146 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t146_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m535(tmp, &RuntimeCompatibilityAttribute__ctor_m535_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m536(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m536_MethodInfo);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t508 * tmp;
		tmp = (AssemblyProductAttribute_t508 *)il2cpp_codegen_object_new (&AssemblyProductAttribute_t508_il2cpp_TypeInfo);
		AssemblyProductAttribute__ctor_m2450(tmp, il2cpp_codegen_string_new_wrapper("Wooga.Lambda"), &AssemblyProductAttribute__ctor_m2450_MethodInfo);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Wooga_Lambda_Assembly__CustomAttributeCache = {
9,
NULL,
&g_Wooga_Lambda_Assembly_CustomAttributesCacheGenerator
};
