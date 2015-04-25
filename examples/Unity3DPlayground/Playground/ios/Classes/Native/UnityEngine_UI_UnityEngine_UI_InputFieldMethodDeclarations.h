#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.UI.InputField
struct InputField_t307;
// UnityEngine.TextGenerator
struct TextGenerator_t313;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t264;
// UnityEngine.UI.Graphic
struct Graphic_t273;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t300;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_t302;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t305;
// System.Collections.IEnumerator
struct IEnumerator_t51;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t4;
// UnityEngine.Event
struct Event_t315;
struct Event_t315_marshaled;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_t169;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t275;
// UnityEngine.UI.InputField/ContentType[]
struct ContentTypeU5BU5D_t316;
// UnityEngine.Transform
struct Transform_t43;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.UI.InputField/ContentType
#include "UnityEngine_UI_UnityEngine_UI_InputField_ContentType.h"
// UnityEngine.UI.InputField/LineType
#include "UnityEngine_UI_UnityEngine_UI_InputField_LineType.h"
// UnityEngine.UI.InputField/InputType
#include "UnityEngine_UI_UnityEngine_UI_InputField_InputType.h"
// UnityEngine.TouchScreenKeyboardType
#include "UnityEngine_UnityEngine_TouchScreenKeyboardType.h"
// UnityEngine.UI.InputField/CharacterValidation
#include "UnityEngine_UI_UnityEngine_UI_InputField_CharacterValidation.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.UI.InputField/EditState
#include "UnityEngine_UI_UnityEngine_UI_InputField_EditState.h"
// UnityEngine.UI.CanvasUpdate
#include "UnityEngine_UI_UnityEngine_UI_CanvasUpdate.h"
// UnityEngine.UI.Selectable/SelectionState
#include "UnityEngine_UI_UnityEngine_UI_Selectable_SelectionState.h"

// System.Void UnityEngine.UI.InputField::.ctor()
 void InputField__ctor_m1061 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::.cctor()
 void InputField__cctor_m1062 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerator UnityEngine.UI.InputField::get_cachedInputTextGenerator()
 TextGenerator_t313 * InputField_get_cachedInputTextGenerator_m1063 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_shouldHideMobileInput(System.Boolean)
 void InputField_set_shouldHideMobileInput_m1064 (InputField_t307 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_shouldHideMobileInput()
 bool InputField_get_shouldHideMobileInput_m1065 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_text()
 String_t* InputField_get_text_m1066 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_text(System.String)
 void InputField_set_text_m1067 (InputField_t307 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_isFocused()
 bool InputField_get_isFocused_m1068 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::get_caretBlinkRate()
 float InputField_get_caretBlinkRate_m1069 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretBlinkRate(System.Single)
 void InputField_set_caretBlinkRate_m1070 (InputField_t307 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Text UnityEngine.UI.InputField::get_textComponent()
 Text_t264 * InputField_get_textComponent_m1071 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_textComponent(UnityEngine.UI.Text)
 void InputField_set_textComponent_m1072 (InputField_t307 * __this, Text_t264 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.Graphic UnityEngine.UI.InputField::get_placeholder()
 Graphic_t273 * InputField_get_placeholder_m1073 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_placeholder(UnityEngine.UI.Graphic)
 void InputField_set_placeholder_m1074 (InputField_t307 * __this, Graphic_t273 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color UnityEngine.UI.InputField::get_selectionColor()
 Color_t145  InputField_get_selectionColor_m1075 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_selectionColor(UnityEngine.Color)
 void InputField_set_selectionColor_m1076 (InputField_t307 * __this, Color_t145  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::get_onEndEdit()
 SubmitEvent_t300 * InputField_get_onEndEdit_m1077 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onEndEdit(UnityEngine.UI.InputField/SubmitEvent)
 void InputField_set_onEndEdit_m1078 (InputField_t307 * __this, SubmitEvent_t300 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::get_onValueChange()
 OnChangeEvent_t302 * InputField_get_onValueChange_m1079 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValueChange(UnityEngine.UI.InputField/OnChangeEvent)
 void InputField_set_onValueChange_m1080 (InputField_t307 * __this, OnChangeEvent_t302 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::get_onValidateInput()
 OnValidateInput_t305 * InputField_get_onValidateInput_m1081 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_onValidateInput(UnityEngine.UI.InputField/OnValidateInput)
 void InputField_set_onValidateInput_m1082 (InputField_t307 * __this, OnValidateInput_t305 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_characterLimit()
 int32_t InputField_get_characterLimit_m1083 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterLimit(System.Int32)
 void InputField_set_characterLimit_m1084 (InputField_t307 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::get_contentType()
 int32_t InputField_get_contentType_m1085 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_contentType(UnityEngine.UI.InputField/ContentType)
 void InputField_set_contentType_m1086 (InputField_t307 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::get_lineType()
 int32_t InputField_get_lineType_m1087 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_lineType(UnityEngine.UI.InputField/LineType)
 void InputField_set_lineType_m1088 (InputField_t307 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::get_inputType()
 int32_t InputField_get_inputType_m1089 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_inputType(UnityEngine.UI.InputField/InputType)
 void InputField_set_inputType_m1090 (InputField_t307 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::get_keyboardType()
 int32_t InputField_get_keyboardType_m1091 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_keyboardType(UnityEngine.TouchScreenKeyboardType)
 void InputField_set_keyboardType_m1092 (InputField_t307 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::get_characterValidation()
 int32_t InputField_get_characterValidation_m1093 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_characterValidation(UnityEngine.UI.InputField/CharacterValidation)
 void InputField_set_characterValidation_m1094 (InputField_t307 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_multiLine()
 bool InputField_get_multiLine_m1095 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::get_asteriskChar()
 uint16_t InputField_get_asteriskChar_m1096 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_asteriskChar(System.Char)
 void InputField_set_asteriskChar_m1097 (InputField_t307 * __this, uint16_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_wasCanceled()
 bool InputField_get_wasCanceled_m1098 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ClampPos(System.Int32&)
 void InputField_ClampPos_m1099 (InputField_t307 * __this, int32_t* ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretPosition()
 int32_t InputField_get_caretPosition_m1100 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretPosition(System.Int32)
 void InputField_set_caretPosition_m1101 (InputField_t307 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::get_caretSelectPos()
 int32_t InputField_get_caretSelectPos_m1102 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_caretSelectPos(System.Int32)
 void InputField_set_caretSelectPos_m1103 (InputField_t307 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::get_hasSelection()
 bool InputField_get_hasSelection_m1104 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEnable()
 void InputField_OnEnable_m1105 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDisable()
 void InputField_OnDisable_m1106 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::CaretBlink()
 Object_t * InputField_CaretBlink_m1107 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretVisible()
 void InputField_SetCaretVisible_m1108 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetCaretActive()
 void InputField_SetCaretActive_m1109 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFocus()
 void InputField_OnFocus_m1110 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SelectAll()
 void InputField_SelectAll_m1111 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextEnd(System.Boolean)
 void InputField_MoveTextEnd_m1112 (InputField_t307 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveTextStart(System.Boolean)
 void InputField_MoveTextStart_m1113 (InputField_t307 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::get_clipboard()
 String_t* InputField_get_clipboard_m1114 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::set_clipboard(System.String)
 void InputField_set_clipboard_m1115 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::InPlaceEditing()
 bool InputField_InPlaceEditing_m1116 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::LateUpdate()
 void InputField_LateUpdate_m1117 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.UI.InputField::ScreenToLocal(UnityEngine.Vector2)
 Vector2_t25  InputField_ScreenToLocal_m1118 (InputField_t307 * __this, Vector2_t25  ___screen, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetUnclampedCharacterLineFromPosition(UnityEngine.Vector2,UnityEngine.TextGenerator)
 int32_t InputField_GetUnclampedCharacterLineFromPosition_m1119 (InputField_t307 * __this, Vector2_t25  ___pos, TextGenerator_t313 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetCharacterIndexFromPosition(UnityEngine.Vector2)
 int32_t InputField_GetCharacterIndexFromPosition_m1120 (InputField_t307 * __this, Vector2_t25  ___pos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::MayDrag(UnityEngine.EventSystems.PointerEventData)
 bool InputField_MayDrag_m1121 (InputField_t307 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnBeginDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnBeginDrag_m1122 (InputField_t307 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnDrag_m1123 (InputField_t307 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator UnityEngine.UI.InputField::MouseDragOutsideRect(UnityEngine.EventSystems.PointerEventData)
 Object_t * InputField_MouseDragOutsideRect_m1124 (InputField_t307 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnEndDrag(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnEndDrag_m1125 (InputField_t307 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerDown(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnPointerDown_m1126 (InputField_t307 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UI.InputField/EditState UnityEngine.UI.InputField::KeyPressed(UnityEngine.Event)
 int32_t InputField_KeyPressed_m1127 (InputField_t307 * __this, Event_t315 * ___evt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsValidChar(System.Char)
 bool InputField_IsValidChar_m1128 (InputField_t307 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ProcessEvent(UnityEngine.Event)
 void InputField_ProcessEvent_m1129 (InputField_t307 * __this, Event_t315 * ___e, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnUpdateSelected(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnUpdateSelected_m1130 (InputField_t307 * __this, BaseEventData_t169 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.UI.InputField::GetSelectedString()
 String_t* InputField_GetSelectedString_m1131 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtNextWordBegin()
 int32_t InputField_FindtNextWordBegin_m1132 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveRight(System.Boolean,System.Boolean)
 void InputField_MoveRight_m1133 (InputField_t307 * __this, bool ___shift, bool ___ctrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::FindtPrevWordBegin()
 int32_t InputField_FindtPrevWordBegin_m1134 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveLeft(System.Boolean,System.Boolean)
 void InputField_MoveLeft_m1135 (InputField_t307 * __this, bool ___shift, bool ___ctrl, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::DetermineCharacterLine(System.Int32,UnityEngine.TextGenerator)
 int32_t InputField_DetermineCharacterLine_m1136 (InputField_t307 * __this, int32_t ___charPos, TextGenerator_t313 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineUpCharacterPosition(System.Int32,System.Boolean)
 int32_t InputField_LineUpCharacterPosition_m1137 (InputField_t307 * __this, int32_t ___originalPos, bool ___goToFirstChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::LineDownCharacterPosition(System.Int32,System.Boolean)
 int32_t InputField_LineDownCharacterPosition_m1138 (InputField_t307 * __this, int32_t ___originalPos, bool ___goToLastChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean)
 void InputField_MoveDown_m1139 (InputField_t307 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveDown(System.Boolean,System.Boolean)
 void InputField_MoveDown_m1140 (InputField_t307 * __this, bool ___shift, bool ___goToLastChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean)
 void InputField_MoveUp_m1141 (InputField_t307 * __this, bool ___shift, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MoveUp(System.Boolean,System.Boolean)
 void InputField_MoveUp_m1142 (InputField_t307 * __this, bool ___shift, bool ___goToFirstChar, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Delete()
 void InputField_Delete_m1143 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ForwardSpace()
 void InputField_ForwardSpace_m1144 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Backspace()
 void InputField_Backspace_m1145 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Insert(System.Char)
 void InputField_Insert_m1146 (InputField_t307 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChangedAndUpdateLabel()
 void InputField_SendOnValueChangedAndUpdateLabel_m1147 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnValueChanged()
 void InputField_SendOnValueChanged_m1148 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SendOnSubmit()
 void InputField_SendOnSubmit_m1149 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.String)
 void InputField_Append_m1150 (InputField_t307 * __this, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Append(System.Char)
 void InputField_Append_m1151 (InputField_t307 * __this, uint16_t ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateLabel()
 void InputField_UpdateLabel_m1152 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::IsSelectionVisible()
 bool InputField_IsSelectionVisible_m1153 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineStartPosition(UnityEngine.TextGenerator,System.Int32)
 int32_t InputField_GetLineStartPosition_m1154 (Object_t * __this/* static, unused */, TextGenerator_t313 * ___gen, int32_t ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.UI.InputField::GetLineEndPosition(UnityEngine.TextGenerator,System.Int32)
 int32_t InputField_GetLineEndPosition_m1155 (Object_t * __this/* static, unused */, TextGenerator_t313 * ___gen, int32_t ___line, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetDrawRangeToContainCaretPosition(UnityEngine.TextGenerator,System.Int32,System.Int32&,System.Int32&)
 void InputField_SetDrawRangeToContainCaretPosition_m1156 (InputField_t307 * __this, TextGenerator_t313 * ___gen, int32_t ___caretPos, int32_t* ___drawStart, int32_t* ___drawEnd, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::MarkGeometryAsDirty()
 void InputField_MarkGeometryAsDirty_m1157 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::Rebuild(UnityEngine.UI.CanvasUpdate)
 void InputField_Rebuild_m1158 (InputField_t307 * __this, int32_t ___update, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::UpdateGeometry()
 void InputField_UpdateGeometry_m1159 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::AssignPositioningIfNeeded()
 void InputField_AssignPositioningIfNeeded_m1160 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnFillVBO(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void InputField_OnFillVBO_m1161 (InputField_t307 * __this, List_1_t275 * ___vbo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateCursor(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
 void InputField_GenerateCursor_m1162 (InputField_t307 * __this, List_1_t275 * ___vbo, Vector2_t25  ___roundingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::CreateCursorVerts()
 void InputField_CreateCursorVerts_m1163 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.UI.InputField::SumLineHeights(System.Int32,UnityEngine.TextGenerator)
 float InputField_SumLineHeights_m1164 (InputField_t307 * __this, int32_t ___endLine, TextGenerator_t313 * ___generator, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::GenerateHightlight(System.Collections.Generic.List`1<UnityEngine.UIVertex>,UnityEngine.Vector2)
 void InputField_GenerateHightlight_m1165 (InputField_t307 * __this, List_1_t275 * ___vbo, Vector2_t25  ___roundingOffset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char UnityEngine.UI.InputField::Validate(System.String,System.Int32,System.Char)
 uint16_t InputField_Validate_m1166 (InputField_t307 * __this, String_t* ___text, int32_t ___pos, uint16_t ___ch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputField()
 void InputField_ActivateInputField_m1167 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::ActivateInputFieldInternal()
 void InputField_ActivateInputFieldInternal_m1168 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSelect(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnSelect_m1169 (InputField_t307 * __this, BaseEventData_t169 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnPointerClick(UnityEngine.EventSystems.PointerEventData)
 void InputField_OnPointerClick_m1170 (InputField_t307 * __this, PointerEventData_t4 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DeactivateInputField()
 void InputField_DeactivateInputField_m1171 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnDeselect(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnDeselect_m1172 (InputField_t307 * __this, BaseEventData_t169 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::OnSubmit(UnityEngine.EventSystems.BaseEventData)
 void InputField_OnSubmit_m1173 (InputField_t307 * __this, BaseEventData_t169 * ___eventData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::EnforceContentType()
 void InputField_EnforceContentType_m1174 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustomIfContentTypeIsNot(UnityEngine.UI.InputField/ContentType[])
 void InputField_SetToCustomIfContentTypeIsNot_m1175 (InputField_t307 * __this, ContentTypeU5BU5D_t316* ___allowedContentTypes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::SetToCustom()
 void InputField_SetToCustom_m1176 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.UI.InputField::DoStateTransition(UnityEngine.UI.Selectable/SelectionState,System.Boolean)
 void InputField_DoStateTransition_m1177 (InputField_t307 * __this, int32_t ___state, bool ___instant, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.IsDestroyed()
 bool InputField_UnityEngine_UI_ICanvasElement_IsDestroyed_m1178 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.UI.InputField::UnityEngine.UI.ICanvasElement.get_transform()
 Transform_t43 * InputField_UnityEngine_UI_ICanvasElement_get_transform_m1179 (InputField_t307 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
