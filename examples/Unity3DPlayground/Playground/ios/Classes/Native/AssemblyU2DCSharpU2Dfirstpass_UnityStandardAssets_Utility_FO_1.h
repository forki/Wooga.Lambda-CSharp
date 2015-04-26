#pragma once
// UnityEngine.Camera
struct Camera_t48;
// UnityEngine.AnimationCurve
struct AnimationCurve_t51;
struct AnimationCurve_t51_marshaled;
// System.Object
#include "mscorlib_System_Object.h"
// UnityStandardAssets.Utility.FOVKick
struct FOVKick_t60  : public Object_t
{
	// UnityEngine.Camera UnityStandardAssets.Utility.FOVKick::Camera
	Camera_t48 * ___Camera_0;
	// System.Single UnityStandardAssets.Utility.FOVKick::originalFov
	float ___originalFov_1;
	// System.Single UnityStandardAssets.Utility.FOVKick::FOVIncrease
	float ___FOVIncrease_2;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToIncrease
	float ___TimeToIncrease_3;
	// System.Single UnityStandardAssets.Utility.FOVKick::TimeToDecrease
	float ___TimeToDecrease_4;
	// UnityEngine.AnimationCurve UnityStandardAssets.Utility.FOVKick::IncreaseCurve
	AnimationCurve_t51 * ___IncreaseCurve_5;
};
