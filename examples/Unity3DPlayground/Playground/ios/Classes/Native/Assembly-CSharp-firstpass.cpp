#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
#include "stringLiterals.h"

extern TypeInfo U3CModuleU3E_t0_il2cpp_TypeInfo;
extern TypeInfo AxisTouchButton_t1_il2cpp_TypeInfo;
extern TypeInfo ButtonHandler_t5_il2cpp_TypeInfo;
extern TypeInfo ActiveInputMethod_t6_il2cpp_TypeInfo;
extern TypeInfo VirtualAxis_t2_il2cpp_TypeInfo;
extern TypeInfo VirtualButton_t7_il2cpp_TypeInfo;
extern TypeInfo CrossPlatformInputManager_t9_il2cpp_TypeInfo;
extern TypeInfo InputAxisScrollbar_t11_il2cpp_TypeInfo;
extern TypeInfo AxisOption_t12_il2cpp_TypeInfo;
extern TypeInfo Joystick_t13_il2cpp_TypeInfo;
extern TypeInfo MobileControlRig_t14_il2cpp_TypeInfo;
extern TypeInfo MobileInput_t15_il2cpp_TypeInfo;
extern TypeInfo StandaloneInput_t16_il2cpp_TypeInfo;
extern TypeInfo AxisOptions_t17_il2cpp_TypeInfo;
extern TypeInfo MappingType_t18_il2cpp_TypeInfo;
extern TypeInfo AxisMapping_t19_il2cpp_TypeInfo;
extern TypeInfo TiltInput_t20_il2cpp_TypeInfo;
extern TypeInfo AxisOption_t21_il2cpp_TypeInfo;
extern TypeInfo ControlStyle_t22_il2cpp_TypeInfo;
extern TypeInfo TouchPad_t24_il2cpp_TypeInfo;
extern TypeInfo VirtualInput_t8_il2cpp_TypeInfo;
extern TypeInfo Mode_t29_il2cpp_TypeInfo;
extern TypeInfo ActivateTrigger_t33_il2cpp_TypeInfo;
extern TypeInfo ReplacementDefinition_t36_il2cpp_TypeInfo;
extern TypeInfo ReplacementList_t38_il2cpp_TypeInfo;
extern TypeInfo AutoMobileShaderSwitch_t39_il2cpp_TypeInfo;
extern TypeInfo Vector3andSpace_t40_il2cpp_TypeInfo;
extern TypeInfo AutoMoveAndRotate_t41_il2cpp_TypeInfo;
extern TypeInfo CameraRefocus_t44_il2cpp_TypeInfo;
extern TypeInfo CurveControlledBob_t46_il2cpp_TypeInfo;
extern TypeInfo U3CDragObjectU3Ec__Iterator0_t48_il2cpp_TypeInfo;
extern TypeInfo DragRigidbody_t47_il2cpp_TypeInfo;
extern TypeInfo DynamicShadowSettings_t53_il2cpp_TypeInfo;
extern TypeInfo U3CFOVKickUpU3Ec__Iterator1_t55_il2cpp_TypeInfo;
extern TypeInfo U3CFOVKickDownU3Ec__Iterator2_t56_il2cpp_TypeInfo;
extern TypeInfo FOVKick_t54_il2cpp_TypeInfo;
extern TypeInfo FPSCounter_t58_il2cpp_TypeInfo;
extern TypeInfo FollowTarget_t59_il2cpp_TypeInfo;
extern TypeInfo ForcedReset_t60_il2cpp_TypeInfo;
extern TypeInfo U3CDoBobCycleU3Ec__Iterator3_t62_il2cpp_TypeInfo;
extern TypeInfo LerpControlledBob_t61_il2cpp_TypeInfo;
extern TypeInfo U3CResetCoroutineU3Ec__Iterator4_t65_il2cpp_TypeInfo;
extern TypeInfo ObjectResetter_t64_il2cpp_TypeInfo;
extern TypeInfo U3CStartU3Ec__Iterator5_t72_il2cpp_TypeInfo;
extern TypeInfo ParticleSystemDestroyer_t71_il2cpp_TypeInfo;
extern TypeInfo BuildTargetGroup_t73_il2cpp_TypeInfo;
extern TypeInfo PlatformSpecificContent_t76_il2cpp_TypeInfo;
extern TypeInfo SimpleActivatorMenu_t77_il2cpp_TypeInfo;
extern TypeInfo SimpleMouseRotator_t78_il2cpp_TypeInfo;
extern TypeInfo SmoothFollow_t79_il2cpp_TypeInfo;
extern TypeInfo Action_t80_il2cpp_TypeInfo;
extern TypeInfo Entry_t81_il2cpp_TypeInfo;
extern TypeInfo Entries_t83_il2cpp_TypeInfo;
extern TypeInfo U3CActivateU3Ec__Iterator6_t84_il2cpp_TypeInfo;
extern TypeInfo U3CDeactivateU3Ec__Iterator7_t85_il2cpp_TypeInfo;
extern TypeInfo U3CReloadLevelU3Ec__Iterator8_t86_il2cpp_TypeInfo;
extern TypeInfo TimedObjectActivator_t87_il2cpp_TypeInfo;
extern TypeInfo TimedObjectDestructor_t88_il2cpp_TypeInfo;
extern TypeInfo WaypointList_t90_il2cpp_TypeInfo;
extern TypeInfo RoutePoint_t91_il2cpp_TypeInfo;
extern TypeInfo WaypointCircuit_t89_il2cpp_TypeInfo;
extern TypeInfo ProgressStyle_t94_il2cpp_TypeInfo;
extern TypeInfo WaypointProgressTracker_t95_il2cpp_TypeInfo;
#include "utils/RegisterRuntimeInitializeAndCleanup.h"
#include <map>
struct TypeInfo;
struct MethodInfo;
TypeInfo* g_AssemblyU2DCSharpU2Dfirstpass_Assembly_Types[64] = 
{
	&U3CModuleU3E_t0_il2cpp_TypeInfo,
	&AxisTouchButton_t1_il2cpp_TypeInfo,
	&ButtonHandler_t5_il2cpp_TypeInfo,
	&ActiveInputMethod_t6_il2cpp_TypeInfo,
	&VirtualAxis_t2_il2cpp_TypeInfo,
	&VirtualButton_t7_il2cpp_TypeInfo,
	&CrossPlatformInputManager_t9_il2cpp_TypeInfo,
	&InputAxisScrollbar_t11_il2cpp_TypeInfo,
	&AxisOption_t12_il2cpp_TypeInfo,
	&Joystick_t13_il2cpp_TypeInfo,
	&MobileControlRig_t14_il2cpp_TypeInfo,
	&MobileInput_t15_il2cpp_TypeInfo,
	&StandaloneInput_t16_il2cpp_TypeInfo,
	&AxisOptions_t17_il2cpp_TypeInfo,
	&MappingType_t18_il2cpp_TypeInfo,
	&AxisMapping_t19_il2cpp_TypeInfo,
	&TiltInput_t20_il2cpp_TypeInfo,
	&AxisOption_t21_il2cpp_TypeInfo,
	&ControlStyle_t22_il2cpp_TypeInfo,
	&TouchPad_t24_il2cpp_TypeInfo,
	&VirtualInput_t8_il2cpp_TypeInfo,
	&Mode_t29_il2cpp_TypeInfo,
	&ActivateTrigger_t33_il2cpp_TypeInfo,
	&ReplacementDefinition_t36_il2cpp_TypeInfo,
	&ReplacementList_t38_il2cpp_TypeInfo,
	&AutoMobileShaderSwitch_t39_il2cpp_TypeInfo,
	&Vector3andSpace_t40_il2cpp_TypeInfo,
	&AutoMoveAndRotate_t41_il2cpp_TypeInfo,
	&CameraRefocus_t44_il2cpp_TypeInfo,
	&CurveControlledBob_t46_il2cpp_TypeInfo,
	&U3CDragObjectU3Ec__Iterator0_t48_il2cpp_TypeInfo,
	&DragRigidbody_t47_il2cpp_TypeInfo,
	&DynamicShadowSettings_t53_il2cpp_TypeInfo,
	&U3CFOVKickUpU3Ec__Iterator1_t55_il2cpp_TypeInfo,
	&U3CFOVKickDownU3Ec__Iterator2_t56_il2cpp_TypeInfo,
	&FOVKick_t54_il2cpp_TypeInfo,
	&FPSCounter_t58_il2cpp_TypeInfo,
	&FollowTarget_t59_il2cpp_TypeInfo,
	&ForcedReset_t60_il2cpp_TypeInfo,
	&U3CDoBobCycleU3Ec__Iterator3_t62_il2cpp_TypeInfo,
	&LerpControlledBob_t61_il2cpp_TypeInfo,
	&U3CResetCoroutineU3Ec__Iterator4_t65_il2cpp_TypeInfo,
	&ObjectResetter_t64_il2cpp_TypeInfo,
	&U3CStartU3Ec__Iterator5_t72_il2cpp_TypeInfo,
	&ParticleSystemDestroyer_t71_il2cpp_TypeInfo,
	&BuildTargetGroup_t73_il2cpp_TypeInfo,
	&PlatformSpecificContent_t76_il2cpp_TypeInfo,
	&SimpleActivatorMenu_t77_il2cpp_TypeInfo,
	&SimpleMouseRotator_t78_il2cpp_TypeInfo,
	&SmoothFollow_t79_il2cpp_TypeInfo,
	&Action_t80_il2cpp_TypeInfo,
	&Entry_t81_il2cpp_TypeInfo,
	&Entries_t83_il2cpp_TypeInfo,
	&U3CActivateU3Ec__Iterator6_t84_il2cpp_TypeInfo,
	&U3CDeactivateU3Ec__Iterator7_t85_il2cpp_TypeInfo,
	&U3CReloadLevelU3Ec__Iterator8_t86_il2cpp_TypeInfo,
	&TimedObjectActivator_t87_il2cpp_TypeInfo,
	&TimedObjectDestructor_t88_il2cpp_TypeInfo,
	&WaypointList_t90_il2cpp_TypeInfo,
	&RoutePoint_t91_il2cpp_TypeInfo,
	&WaypointCircuit_t89_il2cpp_TypeInfo,
	&ProgressStyle_t94_il2cpp_TypeInfo,
	&WaypointProgressTracker_t95_il2cpp_TypeInfo,
	NULL,
};
extern Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image;
extern CustomAttributesCache g_AssemblyU2DCSharpU2Dfirstpass_Assembly__CustomAttributeCache;
Il2CppAssembly g_AssemblyU2DCSharpU2Dfirstpass_Assembly = 
{
	{ "Assembly-CSharp-firstpass", 0, 0, 0, { 0 }, 32772, 0, 0, 0, 0, 0, 0 },
	&g_AssemblyU2DCSharpU2Dfirstpass_dll_Image,
	&g_AssemblyU2DCSharpU2Dfirstpass_Assembly__CustomAttributeCache,
};
Il2CppImage g_AssemblyU2DCSharpU2Dfirstpass_dll_Image = 
{
	 "Assembly-CSharp-firstpass.dll" ,
	&g_AssemblyU2DCSharpU2Dfirstpass_Assembly,
	g_AssemblyU2DCSharpU2Dfirstpass_Assembly_Types,
	63,
	NULL,
};
static void s_AssemblyU2DCSharpU2DfirstpassRegistration()
{
	RegisterAssembly (&g_AssemblyU2DCSharpU2Dfirstpass_Assembly);
}
static il2cpp::utils::RegisterRuntimeInitializeAndCleanup s_AssemblyU2DCSharpU2DfirstpassRegistrationVariable(&s_AssemblyU2DCSharpU2DfirstpassRegistration, NULL);
