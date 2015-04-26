#pragma once
// System.Type
struct Type_t;
// System.Array
struct Array_t;
// System.String[]
struct StringU5BU5D_t150;
// System.Collections.Hashtable
struct Hashtable_t1534;
// System.Object
struct Object_t;
// System.MonoEnumInfo/SByteComparer
struct SByteComparer_t2558;
// System.MonoEnumInfo/ShortComparer
struct ShortComparer_t2559;
// System.MonoEnumInfo/IntComparer
struct IntComparer_t2560;
// System.MonoEnumInfo/LongComparer
struct LongComparer_t2561;
// System.ValueType
#include "mscorlib_System_ValueType.h"
// System.MonoEnumInfo
struct MonoEnumInfo_t2562 
{
	// System.Type System.MonoEnumInfo::utype
	Type_t * ___utype_0;
	// System.Array System.MonoEnumInfo::values
	Array_t * ___values_1;
	// System.String[] System.MonoEnumInfo::names
	StringU5BU5D_t150* ___names_2;
	// System.Collections.Hashtable System.MonoEnumInfo::name_hash
	Hashtable_t1534 * ___name_hash_3;
};
struct MonoEnumInfo_t2562_StaticFields{
	// System.Collections.Hashtable System.MonoEnumInfo::global_cache
	Hashtable_t1534 * ___global_cache_5;
	// System.Object System.MonoEnumInfo::global_cache_monitor
	Object_t * ___global_cache_monitor_6;
	// System.MonoEnumInfo/SByteComparer System.MonoEnumInfo::sbyte_comparer
	SByteComparer_t2558 * ___sbyte_comparer_7;
	// System.MonoEnumInfo/ShortComparer System.MonoEnumInfo::short_comparer
	ShortComparer_t2559 * ___short_comparer_8;
	// System.MonoEnumInfo/IntComparer System.MonoEnumInfo::int_comparer
	IntComparer_t2560 * ___int_comparer_9;
	// System.MonoEnumInfo/LongComparer System.MonoEnumInfo::long_comparer
	LongComparer_t2561 * ___long_comparer_10;
};
struct MonoEnumInfo_t2562_ThreadStaticFields{
	// System.Collections.Hashtable System.MonoEnumInfo::cache
	Hashtable_t1534 * ___cache_4;
};
