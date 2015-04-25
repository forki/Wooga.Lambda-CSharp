#pragma once
#include <stdint.h>
// System.Collections.Hashtable
struct Hashtable_t2960;
// System.String
struct String_t;
// System.Reflection.Assembly
struct Assembly_t1075;
// System.Type
struct Type_t;
// System.Globalization.CultureInfo
struct CultureInfo_t921;
// System.Object
#include "mscorlib_System_Object.h"
// System.Resources.ResourceManager
struct ResourceManager_t920  : public Object_t
{
	// System.String System.Resources.ResourceManager::BaseNameField
	String_t* ___BaseNameField_4;
	// System.Reflection.Assembly System.Resources.ResourceManager::MainAssembly
	Assembly_t1075 * ___MainAssembly_5;
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceSets
	Hashtable_t2960 * ___ResourceSets_6;
	// System.Boolean System.Resources.ResourceManager::ignoreCase
	bool ___ignoreCase_7;
	// System.Type System.Resources.ResourceManager::resourceSource
	Type_t * ___resourceSource_8;
	// System.Type System.Resources.ResourceManager::resourceSetType
	Type_t * ___resourceSetType_9;
	// System.String System.Resources.ResourceManager::resourceDir
	String_t* ___resourceDir_10;
	// System.Globalization.CultureInfo System.Resources.ResourceManager::neutral_culture
	CultureInfo_t921 * ___neutral_culture_11;
};
struct ResourceManager_t920_StaticFields{
	// System.Collections.Hashtable System.Resources.ResourceManager::ResourceCache
	Hashtable_t2960 * ___ResourceCache_0;
	// System.Collections.Hashtable System.Resources.ResourceManager::NonExistent
	Hashtable_t2960 * ___NonExistent_1;
	// System.Int32 System.Resources.ResourceManager::HeaderVersionNumber
	int32_t ___HeaderVersionNumber_2;
	// System.Int32 System.Resources.ResourceManager::MagicNumber
	int32_t ___MagicNumber_3;
};
