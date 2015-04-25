#pragma once
#include <stdint.h>
// UnityEngine.Material
struct Material_t125;
// UnityEngine.UI.Graphic
struct Graphic_t273;
// UnityEngine.RectTransform
struct RectTransform_t267;
// UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine_UI_UnityEngine_EventSystems_UIBehaviour.h"
// UnityEngine.UI.Mask
struct Mask_t383  : public UIBehaviour_t172
{
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_2;
	// UnityEngine.Material UnityEngine.UI.Mask::m_RenderMaterial
	Material_t125 * ___m_RenderMaterial_3;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_t273 * ___m_Graphic_4;
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t267 * ___m_RectTransform_5;
};
