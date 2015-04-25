#pragma once
#include <stdint.h>
// UnityEngine.Object
struct Object_t30;
struct Object_t30_marshaled;
// UnityEngine.GameObject
struct GameObject_t32;
// UnityEngine.MonoBehaviour
#include "UnityEngine_UnityEngine_MonoBehaviour.h"
// UnityStandardAssets.Utility.ActivateTrigger/Mode
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_Utility_Ac.h"
// UnityStandardAssets.Utility.ActivateTrigger
struct ActivateTrigger_t33  : public MonoBehaviour_t3
{
	// UnityStandardAssets.Utility.ActivateTrigger/Mode UnityStandardAssets.Utility.ActivateTrigger::action
	int32_t ___action_2;
	// UnityEngine.Object UnityStandardAssets.Utility.ActivateTrigger::target
	Object_t30 * ___target_3;
	// UnityEngine.GameObject UnityStandardAssets.Utility.ActivateTrigger::source
	GameObject_t32 * ___source_4;
	// System.Int32 UnityStandardAssets.Utility.ActivateTrigger::triggerCount
	int32_t ___triggerCount_5;
	// System.Boolean UnityStandardAssets.Utility.ActivateTrigger::repeatTrigger
	bool ___repeatTrigger_6;
};
