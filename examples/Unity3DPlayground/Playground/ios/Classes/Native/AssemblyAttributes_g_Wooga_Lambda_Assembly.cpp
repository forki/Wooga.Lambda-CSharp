#include "il2cpp_precompiled_header.h"

extern TypeInfo DebuggableAttribute_t1023_il2cpp_TypeInfo;
extern MethodInfo DebuggableAttribute__ctor_m2912_MethodInfo;
extern TypeInfo AssemblyTitleAttribute_t510_il2cpp_TypeInfo;
extern MethodInfo AssemblyTitleAttribute__ctor_m2452_MethodInfo;
extern TypeInfo CompilationRelaxationsAttribute_t1024_il2cpp_TypeInfo;
extern MethodInfo CompilationRelaxationsAttribute__ctor_m2913_MethodInfo;
extern TypeInfo ExtensionAttribute_t719_il2cpp_TypeInfo;
extern MethodInfo ExtensionAttribute__ctor_m2587_MethodInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t169_il2cpp_TypeInfo;
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m567_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m568_MethodInfo;
extern TypeInfo AssemblyProductAttribute_t514_il2cpp_TypeInfo;
extern MethodInfo AssemblyProductAttribute__ctor_m2456_MethodInfo;
extern TypeInfo AssemblyDescriptionAttribute_t511_il2cpp_TypeInfo;
extern MethodInfo AssemblyDescriptionAttribute__ctor_m2453_MethodInfo;
extern TypeInfo AssemblyFileVersionAttribute_t516_il2cpp_TypeInfo;
extern MethodInfo AssemblyFileVersionAttribute__ctor_m2458_MethodInfo;
extern TypeInfo InternalsVisibleToAttribute_t1025_il2cpp_TypeInfo;
extern MethodInfo InternalsVisibleToAttribute__ctor_m2914_MethodInfo;
void g_Wooga_Lambda_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		DebuggableAttribute_t1023 * tmp;
		tmp = (DebuggableAttribute_t1023 *)il2cpp_codegen_object_new (&DebuggableAttribute_t1023_il2cpp_TypeInfo);
		DebuggableAttribute__ctor_m2912(tmp, 263, &DebuggableAttribute__ctor_m2912_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t510 * tmp;
		tmp = (AssemblyTitleAttribute_t510 *)il2cpp_codegen_object_new (&AssemblyTitleAttribute_t510_il2cpp_TypeInfo);
		AssemblyTitleAttribute__ctor_m2452(tmp, il2cpp_codegen_string_new_wrapper("Wooga.Lambda"), &AssemblyTitleAttribute__ctor_m2452_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		CompilationRelaxationsAttribute_t1024 * tmp;
		tmp = (CompilationRelaxationsAttribute_t1024 *)il2cpp_codegen_object_new (&CompilationRelaxationsAttribute_t1024_il2cpp_TypeInfo);
		CompilationRelaxationsAttribute__ctor_m2913(tmp, 8, &CompilationRelaxationsAttribute__ctor_m2913_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		ExtensionAttribute_t719 * tmp;
		tmp = (ExtensionAttribute_t719 *)il2cpp_codegen_object_new (&ExtensionAttribute_t719_il2cpp_TypeInfo);
		ExtensionAttribute__ctor_m2587(tmp, &ExtensionAttribute__ctor_m2587_MethodInfo);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t169 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t169 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t169_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m567(tmp, &RuntimeCompatibilityAttribute__ctor_m567_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m568(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m568_MethodInfo);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t514 * tmp;
		tmp = (AssemblyProductAttribute_t514 *)il2cpp_codegen_object_new (&AssemblyProductAttribute_t514_il2cpp_TypeInfo);
		AssemblyProductAttribute__ctor_m2456(tmp, il2cpp_codegen_string_new_wrapper("Wooga.Lambda"), &AssemblyProductAttribute__ctor_m2456_MethodInfo);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t511 * tmp;
		tmp = (AssemblyDescriptionAttribute_t511 *)il2cpp_codegen_object_new (&AssemblyDescriptionAttribute_t511_il2cpp_TypeInfo);
		AssemblyDescriptionAttribute__ctor_m2453(tmp, il2cpp_codegen_string_new_wrapper("Functional primitives for Unity3D"), &AssemblyDescriptionAttribute__ctor_m2453_MethodInfo);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		AssemblyFileVersionAttribute_t516 * tmp;
		tmp = (AssemblyFileVersionAttribute_t516 *)il2cpp_codegen_object_new (&AssemblyFileVersionAttribute_t516_il2cpp_TypeInfo);
		AssemblyFileVersionAttribute__ctor_m2458(tmp, il2cpp_codegen_string_new_wrapper("0.3.3"), &AssemblyFileVersionAttribute__ctor_m2458_MethodInfo);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1025 * tmp;
		tmp = (InternalsVisibleToAttribute_t1025 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t1025_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m2914(tmp, il2cpp_codegen_string_new_wrapper("Wooga.Lambda.Tests"), &InternalsVisibleToAttribute__ctor_m2914_MethodInfo);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_Wooga_Lambda_Assembly__CustomAttributeCache = {
9,
NULL,
&g_Wooga_Lambda_Assembly_CustomAttributesCacheGenerator
};
