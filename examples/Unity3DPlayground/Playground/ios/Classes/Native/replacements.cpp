#include "il2cpp_precompiled_header.h"

#ifndef _MSC_VER
#else
#endif

extern TypeInfo U3CModuleU3E_t1898_il2cpp_TypeInfo;
extern TypeInfo MSCompatUnicodeTable_t1899_il2cpp_TypeInfo;
extern TypeInfo SecurityElement_t1900_il2cpp_TypeInfo;
extern TypeInfo RemotingServices_t1901_il2cpp_TypeInfo;
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_replacements_Assembly_Types[5] = 
{
	&U3CModuleU3E_t1898_il2cpp_TypeInfo,
	&MSCompatUnicodeTable_t1899_il2cpp_TypeInfo,
	&SecurityElement_t1900_il2cpp_TypeInfo,
	&RemotingServices_t1901_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_replacements_dll_Image;
extern CustomAttributesCache g_replacements_Assembly__CustomAttributeCache;
Il2CppAssembly g_replacements_Assembly = 
{
	{ "replacements", 0, 0, 0, { 0 }, 32772, 0, 0, 0, 0, 0, 0 },
	&g_replacements_dll_Image,
	&g_replacements_Assembly__CustomAttributeCache,
};
Il2CppImage g_replacements_dll_Image = 
{
	 "replacements.dll" ,
	&g_replacements_Assembly,
	g_replacements_Assembly_Types,
	4,
	NULL,
};
static void s_replacementsRegistration()
{
	RegisterAssembly (&g_replacements_Assembly);
}
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_replacementsRegistrationVariable(&s_replacementsRegistration, NULL);
