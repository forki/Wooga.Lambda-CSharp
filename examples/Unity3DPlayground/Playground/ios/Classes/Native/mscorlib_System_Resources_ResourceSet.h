#pragma once
#include <stdint.h>
// System.Resources.IResourceReader
struct IResourceReader_t3667;
// System.Collections.Hashtable
struct Hashtable_t2960;
// System.Object
#include "mscorlib_System_Object.h"
// System.Resources.ResourceSet
struct ResourceSet_t3666  : public Object_t
{
	// System.Resources.IResourceReader System.Resources.ResourceSet::Reader
	Object_t * ___Reader_0;
	// System.Collections.Hashtable System.Resources.ResourceSet::Table
	Hashtable_t2960 * ___Table_1;
	// System.Boolean System.Resources.ResourceSet::resources_read
	bool ___resources_read_2;
	// System.Boolean System.Resources.ResourceSet::disposed
	bool ___disposed_3;
};
