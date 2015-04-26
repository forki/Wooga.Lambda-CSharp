#include "il2cpp_precompiled_header.h"

extern TypeInfo NeutralResourcesLanguageAttribute_t1526_il2cpp_TypeInfo;
extern MethodInfo NeutralResourcesLanguageAttribute__ctor_m4362_MethodInfo;
extern TypeInfo CLSCompliantAttribute_t1525_il2cpp_TypeInfo;
extern MethodInfo CLSCompliantAttribute__ctor_m4361_MethodInfo;
extern TypeInfo AssemblyInformationalVersionAttribute_t1520_il2cpp_TypeInfo;
extern MethodInfo AssemblyInformationalVersionAttribute__ctor_m4355_MethodInfo;
extern TypeInfo SatelliteContractVersionAttribute_t1521_il2cpp_TypeInfo;
extern MethodInfo SatelliteContractVersionAttribute__ctor_m4356_MethodInfo;
extern TypeInfo AssemblyCopyrightAttribute_t515_il2cpp_TypeInfo;
extern MethodInfo AssemblyCopyrightAttribute__ctor_m2457_MethodInfo;
extern TypeInfo AssemblyProductAttribute_t514_il2cpp_TypeInfo;
extern MethodInfo AssemblyProductAttribute__ctor_m2456_MethodInfo;
extern TypeInfo AssemblyCompanyAttribute_t513_il2cpp_TypeInfo;
extern MethodInfo AssemblyCompanyAttribute__ctor_m2455_MethodInfo;
extern TypeInfo AssemblyDefaultAliasAttribute_t1522_il2cpp_TypeInfo;
extern MethodInfo AssemblyDefaultAliasAttribute__ctor_m4357_MethodInfo;
extern TypeInfo AssemblyDescriptionAttribute_t511_il2cpp_TypeInfo;
extern MethodInfo AssemblyDescriptionAttribute__ctor_m2453_MethodInfo;
extern TypeInfo ComVisibleAttribute_t518_il2cpp_TypeInfo;
extern MethodInfo ComVisibleAttribute__ctor_m2460_MethodInfo;
extern TypeInfo AssemblyTitleAttribute_t510_il2cpp_TypeInfo;
extern MethodInfo AssemblyTitleAttribute__ctor_m2452_MethodInfo;
extern TypeInfo RuntimeCompatibilityAttribute_t169_il2cpp_TypeInfo;
extern MethodInfo RuntimeCompatibilityAttribute__ctor_m567_MethodInfo;
extern MethodInfo RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m568_MethodInfo;
extern TypeInfo CompilationRelaxationsAttribute_t1024_il2cpp_TypeInfo;
extern MethodInfo CompilationRelaxationsAttribute__ctor_m4358_MethodInfo;
extern TypeInfo DebuggableAttribute_t1023_il2cpp_TypeInfo;
extern MethodInfo DebuggableAttribute__ctor_m2912_MethodInfo;
extern TypeInfo AssemblyDelaySignAttribute_t1524_il2cpp_TypeInfo;
extern MethodInfo AssemblyDelaySignAttribute__ctor_m4360_MethodInfo;
extern TypeInfo AssemblyKeyFileAttribute_t1523_il2cpp_TypeInfo;
extern MethodInfo AssemblyKeyFileAttribute__ctor_m4359_MethodInfo;
extern TypeInfo InternalsVisibleToAttribute_t1025_il2cpp_TypeInfo;
extern MethodInfo InternalsVisibleToAttribute__ctor_m2914_MethodInfo;
extern TypeInfo AssemblyFileVersionAttribute_t516_il2cpp_TypeInfo;
extern MethodInfo AssemblyFileVersionAttribute__ctor_m2458_MethodInfo;
void g_System_Assembly_CustomAttributesCacheGenerator(CustomAttributesCache* cache)
{
	cache->attributes = (Il2CppObject**)il2cpp_gc_alloc_fixed(sizeof(Object_t *) * cache->count, 0);
	{
		NeutralResourcesLanguageAttribute_t1526 * tmp;
		tmp = (NeutralResourcesLanguageAttribute_t1526 *)il2cpp_codegen_object_new (&NeutralResourcesLanguageAttribute_t1526_il2cpp_TypeInfo);
		NeutralResourcesLanguageAttribute__ctor_m4362(tmp, il2cpp_codegen_string_new_wrapper("en-US"), &NeutralResourcesLanguageAttribute__ctor_m4362_MethodInfo);
		cache->attributes[0] = (Il2CppObject*)tmp;
	}
	{
		CLSCompliantAttribute_t1525 * tmp;
		tmp = (CLSCompliantAttribute_t1525 *)il2cpp_codegen_object_new (&CLSCompliantAttribute_t1525_il2cpp_TypeInfo);
		CLSCompliantAttribute__ctor_m4361(tmp, true, &CLSCompliantAttribute__ctor_m4361_MethodInfo);
		cache->attributes[1] = (Il2CppObject*)tmp;
	}
	{
		AssemblyInformationalVersionAttribute_t1520 * tmp;
		tmp = (AssemblyInformationalVersionAttribute_t1520 *)il2cpp_codegen_object_new (&AssemblyInformationalVersionAttribute_t1520_il2cpp_TypeInfo);
		AssemblyInformationalVersionAttribute__ctor_m4355(tmp, il2cpp_codegen_string_new_wrapper("3.0.40818.0"), &AssemblyInformationalVersionAttribute__ctor_m4355_MethodInfo);
		cache->attributes[2] = (Il2CppObject*)tmp;
	}
	{
		SatelliteContractVersionAttribute_t1521 * tmp;
		tmp = (SatelliteContractVersionAttribute_t1521 *)il2cpp_codegen_object_new (&SatelliteContractVersionAttribute_t1521_il2cpp_TypeInfo);
		SatelliteContractVersionAttribute__ctor_m4356(tmp, il2cpp_codegen_string_new_wrapper("2.0.5.0"), &SatelliteContractVersionAttribute__ctor_m4356_MethodInfo);
		cache->attributes[3] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCopyrightAttribute_t515 * tmp;
		tmp = (AssemblyCopyrightAttribute_t515 *)il2cpp_codegen_object_new (&AssemblyCopyrightAttribute_t515_il2cpp_TypeInfo);
		AssemblyCopyrightAttribute__ctor_m2457(tmp, il2cpp_codegen_string_new_wrapper("(c) various MONO Authors"), &AssemblyCopyrightAttribute__ctor_m2457_MethodInfo);
		cache->attributes[4] = (Il2CppObject*)tmp;
	}
	{
		AssemblyProductAttribute_t514 * tmp;
		tmp = (AssemblyProductAttribute_t514 *)il2cpp_codegen_object_new (&AssemblyProductAttribute_t514_il2cpp_TypeInfo);
		AssemblyProductAttribute__ctor_m2456(tmp, il2cpp_codegen_string_new_wrapper("MONO Common language infrastructure"), &AssemblyProductAttribute__ctor_m2456_MethodInfo);
		cache->attributes[5] = (Il2CppObject*)tmp;
	}
	{
		AssemblyCompanyAttribute_t513 * tmp;
		tmp = (AssemblyCompanyAttribute_t513 *)il2cpp_codegen_object_new (&AssemblyCompanyAttribute_t513_il2cpp_TypeInfo);
		AssemblyCompanyAttribute__ctor_m2455(tmp, il2cpp_codegen_string_new_wrapper("MONO development team"), &AssemblyCompanyAttribute__ctor_m2455_MethodInfo);
		cache->attributes[6] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDefaultAliasAttribute_t1522 * tmp;
		tmp = (AssemblyDefaultAliasAttribute_t1522 *)il2cpp_codegen_object_new (&AssemblyDefaultAliasAttribute_t1522_il2cpp_TypeInfo);
		AssemblyDefaultAliasAttribute__ctor_m4357(tmp, il2cpp_codegen_string_new_wrapper("System.dll"), &AssemblyDefaultAliasAttribute__ctor_m4357_MethodInfo);
		cache->attributes[7] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDescriptionAttribute_t511 * tmp;
		tmp = (AssemblyDescriptionAttribute_t511 *)il2cpp_codegen_object_new (&AssemblyDescriptionAttribute_t511_il2cpp_TypeInfo);
		AssemblyDescriptionAttribute__ctor_m2453(tmp, il2cpp_codegen_string_new_wrapper("System.dll"), &AssemblyDescriptionAttribute__ctor_m2453_MethodInfo);
		cache->attributes[8] = (Il2CppObject*)tmp;
	}
	{
		ComVisibleAttribute_t518 * tmp;
		tmp = (ComVisibleAttribute_t518 *)il2cpp_codegen_object_new (&ComVisibleAttribute_t518_il2cpp_TypeInfo);
		ComVisibleAttribute__ctor_m2460(tmp, false, &ComVisibleAttribute__ctor_m2460_MethodInfo);
		cache->attributes[9] = (Il2CppObject*)tmp;
	}
	{
		AssemblyTitleAttribute_t510 * tmp;
		tmp = (AssemblyTitleAttribute_t510 *)il2cpp_codegen_object_new (&AssemblyTitleAttribute_t510_il2cpp_TypeInfo);
		AssemblyTitleAttribute__ctor_m2452(tmp, il2cpp_codegen_string_new_wrapper("System.dll"), &AssemblyTitleAttribute__ctor_m2452_MethodInfo);
		cache->attributes[10] = (Il2CppObject*)tmp;
	}
	{
		RuntimeCompatibilityAttribute_t169 * tmp;
		tmp = (RuntimeCompatibilityAttribute_t169 *)il2cpp_codegen_object_new (&RuntimeCompatibilityAttribute_t169_il2cpp_TypeInfo);
		RuntimeCompatibilityAttribute__ctor_m567(tmp, &RuntimeCompatibilityAttribute__ctor_m567_MethodInfo);
		RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m568(tmp, true, &RuntimeCompatibilityAttribute_set_WrapNonExceptionThrows_m568_MethodInfo);
		cache->attributes[11] = (Il2CppObject*)tmp;
	}
	{
		CompilationRelaxationsAttribute_t1024 * tmp;
		tmp = (CompilationRelaxationsAttribute_t1024 *)il2cpp_codegen_object_new (&CompilationRelaxationsAttribute_t1024_il2cpp_TypeInfo);
		CompilationRelaxationsAttribute__ctor_m4358(tmp, 8, &CompilationRelaxationsAttribute__ctor_m4358_MethodInfo);
		cache->attributes[12] = (Il2CppObject*)tmp;
	}
	{
		DebuggableAttribute_t1023 * tmp;
		tmp = (DebuggableAttribute_t1023 *)il2cpp_codegen_object_new (&DebuggableAttribute_t1023_il2cpp_TypeInfo);
		DebuggableAttribute__ctor_m2912(tmp, 2, &DebuggableAttribute__ctor_m2912_MethodInfo);
		cache->attributes[13] = (Il2CppObject*)tmp;
	}
	{
		AssemblyDelaySignAttribute_t1524 * tmp;
		tmp = (AssemblyDelaySignAttribute_t1524 *)il2cpp_codegen_object_new (&AssemblyDelaySignAttribute_t1524_il2cpp_TypeInfo);
		AssemblyDelaySignAttribute__ctor_m4360(tmp, true, &AssemblyDelaySignAttribute__ctor_m4360_MethodInfo);
		cache->attributes[14] = (Il2CppObject*)tmp;
	}
	{
		AssemblyKeyFileAttribute_t1523 * tmp;
		tmp = (AssemblyKeyFileAttribute_t1523 *)il2cpp_codegen_object_new (&AssemblyKeyFileAttribute_t1523_il2cpp_TypeInfo);
		AssemblyKeyFileAttribute__ctor_m4359(tmp, il2cpp_codegen_string_new_wrapper("../silverlight.pub"), &AssemblyKeyFileAttribute__ctor_m4359_MethodInfo);
		cache->attributes[15] = (Il2CppObject*)tmp;
	}
	{
		InternalsVisibleToAttribute_t1025 * tmp;
		tmp = (InternalsVisibleToAttribute_t1025 *)il2cpp_codegen_object_new (&InternalsVisibleToAttribute_t1025_il2cpp_TypeInfo);
		InternalsVisibleToAttribute__ctor_m2914(tmp, il2cpp_codegen_string_new_wrapper("System.Net, PublicKey=00240000048000009400000006020000002400005253413100040000010001008D56C76F9E8649383049F383C44BE0EC204181822A6C31CF5EB7EF486944D032188EA1D3920763712CCB12D75FB77E9811149E6148E5D32FBAAB37611C1878DDC19E20EF135D0CB2CFF2BFEC3D115810C3D9069638FE4BE215DBF795861920E5AB6F7DB2E2CEEF136AC23D5DD2BF031700AEC232F6C6B1C785B4305C123B37AB"), &InternalsVisibleToAttribute__ctor_m2914_MethodInfo);
		cache->attributes[16] = (Il2CppObject*)tmp;
	}
	{
		AssemblyFileVersionAttribute_t516 * tmp;
		tmp = (AssemblyFileVersionAttribute_t516 *)il2cpp_codegen_object_new (&AssemblyFileVersionAttribute_t516_il2cpp_TypeInfo);
		AssemblyFileVersionAttribute__ctor_m2458(tmp, il2cpp_codegen_string_new_wrapper("3.0.40818.0"), &AssemblyFileVersionAttribute__ctor_m2458_MethodInfo);
		cache->attributes[17] = (Il2CppObject*)tmp;
	}
}
CustomAttributesCache g_System_Assembly__CustomAttributeCache = {
18,
NULL,
&g_System_Assembly_CustomAttributesCacheGenerator
};
