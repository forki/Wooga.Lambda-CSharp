#pragma once
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t2411;
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2412;
// System.Object
#include "mscorlib_System_Object.h"
// System.Runtime.Serialization.BaseFixupRecord
struct BaseFixupRecord_t2412  : public Object_t
{
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectToBeFixed
	ObjectRecord_t2411 * ___ObjectToBeFixed_0;
	// System.Runtime.Serialization.ObjectRecord System.Runtime.Serialization.BaseFixupRecord::ObjectRequired
	ObjectRecord_t2411 * ___ObjectRequired_1;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameContainer
	BaseFixupRecord_t2412 * ___NextSameContainer_2;
	// System.Runtime.Serialization.BaseFixupRecord System.Runtime.Serialization.BaseFixupRecord::NextSameRequired
	BaseFixupRecord_t2412 * ___NextSameRequired_3;
};
