#pragma once
#include <stdint.h>
// System.Reflection.Assembly
struct Assembly_t1075;
// System.String
struct String_t;
// System.Object
#include "mscorlib_System_Object.h"
// System.Reflection.ResourceLocation
#include "mscorlib_System_Reflection_ResourceLocation.h"
// System.Reflection.ManifestResourceInfo
struct ManifestResourceInfo_t3605  : public Object_t
{
	// System.Reflection.Assembly System.Reflection.ManifestResourceInfo::_assembly
	Assembly_t1075 * ____assembly_0;
	// System.String System.Reflection.ManifestResourceInfo::_filename
	String_t* ____filename_1;
	// System.Reflection.ResourceLocation System.Reflection.ManifestResourceInfo::_location
	int32_t ____location_2;
};
