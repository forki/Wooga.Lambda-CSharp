#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.Selectable
struct Selectable_t252;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable>
struct List_1_t335;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_t247;
// UnityEngine.UI.Graphic
struct Graphic_t273;
// UnityEngine.UI.Image
struct Image_t23;
// UnityEngine.Animator
struct Animator_t338;
// UnityEngine.RectTransform
struct RectTransform_t267;
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t180;
// UnityEngine.Sprite
struct Sprite_t291;
// System.String
struct String_t;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t169;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t4;
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
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void UnityEngine.UI.Selectable::.ctor()
 void Selectable__ctor_m1318 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::.cctor()
 void Selectable__cctor_m1319 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.UI.Selectable> UnityEngine.UI.Selectable::get_allSelectables()
 List_1_t335 * Selectable_get_allSelectables_m1320 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::get_navigation()
 Navigation_t319  Selectable_get_navigation_m1321 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_navigation(UnityEngine.UI.Navigation)
 void Selectable_set_navigation_m1322 (Selectable_t252 * __this, Navigation_t319  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::get_transition()
 int32_t Selectable_get_transition_m1323 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_transition(UnityEngine.UI.Selectable/Transition)
 void Selectable_set_transition_m1324 (Selectable_t252 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::get_colors()
 ColorBlock_t259  Selectable_get_colors_m1325 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_colors(UnityEngine.UI.ColorBlock)
 void Selectable_set_colors_m1326 (Selectable_t252 * __this, ColorBlock_t259  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::get_spriteState()
 SpriteState_t337  Selectable_get_spriteState_m1327 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_spriteState(UnityEngine.UI.SpriteState)
 void Selectable_set_spriteState_m1328 (Selectable_t252 * __this, SpriteState_t337  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::get_animationTriggers()
 AnimationTriggers_t247 * Selectable_get_animationTriggers_m1329 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_animationTriggers(UnityEngine.UI.AnimationTriggers)
 void Selectable_set_animationTriggers_m1330 (Selectable_t252 * __this, AnimationTriggers_t247 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::get_targetGraphic()
 Graphic_t273 * Selectable_get_targetGraphic_m1331 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_targetGraphic(UnityEngine.UI.Graphic)
 void Selectable_set_targetGraphic_m1332 (Selectable_t252 * __this, Graphic_t273 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
 bool Selectable_get_interactable_m1333 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
 void Selectable_set_interactable_m1334 (Selectable_t252 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerInside()
 bool Selectable_get_isPointerInside_m1335 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerInside(System.Boolean)
 void Selectable_set_isPointerInside_m1336 (Selectable_t252 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_isPointerDown()
 bool Selectable_get_isPointerDown_m1337 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_isPointerDown(System.Boolean)
 void Selectable_set_isPointerDown_m1338 (Selectable_t252 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::get_hasSelection()
 bool Selectable_get_hasSelection_m1339 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_hasSelection(System.Boolean)
 void Selectable_set_hasSelection_m1340 (Selectable_t252 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Image UnityEngine.UI.Selectable::get_image()
 Image_t23 * Selectable_get_image_m1341 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::set_image(UnityEngine.UI.Image)
 void Selectable_set_image_m1342 (Selectable_t252 * __this, Image_t23 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animator UnityEngine.UI.Selectable::get_animator()
 Animator_t338 * Selectable_get_animator_m1343 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Awake()
 void Selectable_Awake_m1344 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnCanvasGroupChanged()
 void Selectable_OnCanvasGroupChanged_m1345 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsInteractable()
 bool Selectable_IsInteractable_m1346 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDidApplyAnimationProperties()
 void Selectable_OnDidApplyAnimationProperties_m1347 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnEnable()
 void Selectable_OnEnable_m1348 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSetProperty()
 void Selectable_OnSetProperty_m1349 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDisable()
 void Selectable_OnDisable_m1350 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable/SelectionState UnityEngine.UI.Selectable::get_currentSelectionState()
 int32_t Selectable_get_currentSelectionState_m1351 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InstantClearState()
 void Selectable_InstantClearState_m1352 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
 void Selectable_DoStateTransition_m1353 (Selectable_t252 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectable(UnityEngine.Vector3)
 Selectable_t252 * Selectable_FindSelectable_m1354 (Selectable_t252 * __this, Vector3_t10  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.UI.Selectable::GetPointOnRectEdge(UnityEngine.RectTransform,UnityEngine.Vector2)
 Vector3_t10  Selectable_GetPointOnRectEdge_m1355 (Object_t * __this/* static, unused */, RectTransform_t267 * ___rect, Vector2_t25  ___dir, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Navigate(UnityEngine.EventSystems.AxisEventData,UnityEngine.UI.Selectable)
 void Selectable_Navigate_m1356 (Selectable_t252 * __this, AxisEventData_t180 * ___eventData, Selectable_t252 * ___sel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnLeft()
 Selectable_t252 * Selectable_FindSelectableOnLeft_m1357 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnRight()
 Selectable_t252 * Selectable_FindSelectableOnRight_m1358 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnUp()
 Selectable_t252 * Selectable_FindSelectableOnUp_m1359 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Selectable UnityEngine.UI.Selectable::FindSelectableOnDown()
 Selectable_t252 * Selectable_FindSelectableOnDown_m1360 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnMove(UnityEngine.EventSystems.AxisEventData)
 void Selectable_OnMove_m1361 (Selectable_t252 * __this, AxisEventData_t180 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::StartColorTween(UnityEngine.Color,System.Boolean)
 void Selectable_StartColorTween_m1362 (Selectable_t252 * __this, Color_t145  ___targetColor, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::DoSpriteSwap(UnityEngine.Sprite)
 void Selectable_DoSpriteSwap_m1363 (Selectable_t252 * __this, Sprite_t291 * ___newSprite, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::TriggerAnimation(System.String)
 void Selectable_TriggerAnimation_m1364 (Selectable_t252 * __this, String_t* ___triggername, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsHighlighted(UnityEngine.EventSystems.BaseEventData)
 bool Selectable_IsHighlighted_m1365 (Selectable_t252 * __this, BaseEventData_t169 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed(UnityEngine.EventSystems.BaseEventData)
 bool Selectable_IsPressed_m1366 (Selectable_t252 * __this, BaseEventData_t169 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.Selectable::IsPressed()
 bool Selectable_IsPressed_m1367 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::UpdateSelectionState(UnityEngine.EventSystems.BaseEventData)
 void Selectable_UpdateSelectionState_m1368 (Selectable_t252 * __this, BaseEventData_t169 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::EvaluateAndTransitionToSelectionState(UnityEngine.EventSystems.BaseEventData)
 void Selectable_EvaluateAndTransitionToSelectionState_m1369 (Selectable_t252 * __this, BaseEventData_t169 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::InternalEvaluateAndTransitionToSelectionState(System.Boolean)
 void Selectable_InternalEvaluateAndTransitionToSelectionState_m1370 (Selectable_t252 * __this, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerDown_m1371 (Selectable_t252 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerUp(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerUp_m1372 (Selectable_t252 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerEnter(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerEnter_m1373 (Selectable_t252 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnPointerExit(UnityEngine.EventSystems.PointerEventData)
 void Selectable_OnPointerExit_m1374 (Selectable_t252 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnSelect(UnityEngine.EventSystems.BaseEventData)
 void Selectable_OnSelect_m1375 (Selectable_t252 * __this, BaseEventData_t169 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::OnDeselect(UnityEngine.EventSystems.BaseEventData)
 void Selectable_OnDeselect_m1376 (Selectable_t252 * __this, BaseEventData_t169 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.Selectable::Select()
 void Selectable_Select_m1377 (Selectable_t252 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
