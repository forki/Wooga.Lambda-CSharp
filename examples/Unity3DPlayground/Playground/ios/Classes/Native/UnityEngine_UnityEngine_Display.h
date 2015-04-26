#pragma once
// UnityEngine.Display[]
struct DisplayU5BU5D_t1185;
// UnityEngine.Display
struct Display_t1186;
// UnityEngine.Display/DisplaysUpdatedDelegate
struct DisplaysUpdatedDelegate_t1184;
// System.Object
#include "mscorlib_System_Object.h"
// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// UnityEngine.Display
struct Display_t1186  : public Object_t
{
	// System.IntPtr UnityEngine.Display::nativeDisplay
	IntPtr_t37 ___nativeDisplay_0;
};
struct Display_t1186_StaticFields{
	// UnityEngine.Display[] UnityEngine.Display::displays
	DisplayU5BU5D_t1185* ___displays_1;
	// UnityEngine.Display UnityEngine.Display::_mainDisplay
	Display_t1186 * ____mainDisplay_2;
	// UnityEngine.Display/DisplaysUpdatedDelegate UnityEngine.Display::onDisplaysUpdated
	DisplaysUpdatedDelegate_t1184 * ___onDisplaysUpdated_3;
};
