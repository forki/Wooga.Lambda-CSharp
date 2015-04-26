#pragma once
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t340;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t252;
// UnityEngine.UI.Graphic
struct Graphic_t278;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t341;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.Navigation
#include "UnityEngine_UI_UnityEngine_UI_Navigation.h"
// UnityEngine.UI.Selectable/Transition
#include "UnityEngine_UI_UnityEngine_UI_Selectable_Transition.h"
// UnityEngine.UI.ColorBlock
#include "UnityEngine_UI_UnityEngine_UI_ColorBlock.h"
// UnityEngine.UI.SpriteState
#include "UnityEngine_UI_UnityEngine_UI_SpriteState.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"
// UnityEngine.UI.Selectable
struct Selectable_t257  : public UIBehaviour_t177
{
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t324  ___m_Navigation_3;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_4;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t264  ___m_Colors_5;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t342  ___m_SpriteState_6;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_t252 * ___m_AnimationTriggers_7;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_8;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_t278 * ___m_TargetGraphic_9;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_10;
	// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::m_CurrentSelectionState
	int32_t ___m_CurrentSelectionState_11;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t341 * ___m_CanvasGroupCache_12;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_13;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_14;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_15;
};
struct Selectable_t257_StaticFields{
	// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::s_List
	List_1_t340 * ___s_List_2;
};
