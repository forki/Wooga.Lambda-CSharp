#include "il2cpp_precompiled_header.h"

extern TypeInfo RuntimeCompatibilityAttribute_t169_il2cpp_TypeInfo;
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m567_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m568_MethodInfo;
void g_AssemblyU2DCSharpU2Dfirstpass_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		RuntimeCompatibilityAttribute_t169 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t169 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t169_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m567(tmp, &RuntimeCompatibilityAttribute__ctor_m567_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m568(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m568_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_AssemblyU2DCSharpU2Dfirstpass_Assembly__CustomAttributeCache = {
1,
NULL,
&g_AssemblyU2DCSharpU2Dfirstpass_Assembly_CustomAttributesCacheGenerator
};
