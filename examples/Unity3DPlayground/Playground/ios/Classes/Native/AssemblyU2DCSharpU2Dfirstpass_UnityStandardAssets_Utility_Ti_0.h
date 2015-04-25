#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t32;
// System.Object
#include "mscorlib_System_Object.h"
// UnityStandardAssets.Utility.TimedObjectActivator/Action
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ti.h"
// UnityStandardAssets.Utility.TimedObjectActivator/Entry
struct Entry_t81  : public Object_t
{
	// UnityEngine.GameObject UnityStandardAssets.Utility.TimedObjectActivator/Entry::target
	GameObject_t32 * ___target_0;
	// UnityStandardAssets.Utility.TimedObjectActivator/Action UnityStandardAssets.Utility.TimedObjectActivator/Entry::action
	int32_t ___action_1;
	// System.Single UnityStandardAssets.Utility.TimedObjectActivator/Entry::delay
	float ___delay_2;
};
