#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.TextGenerator
struct TextGenerator_t313;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex>
struct IList_1_t480;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo>
struct IList_1_t464;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo>
struct IList_1_t462;
// System.String
struct String_t;
// UnityEngine.Font
struct Font_t260;
// System.Object
struct Object_t;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_t312;
// UnityEngine.UICharInfo[]
struct UICharInfoU5BU5D_t2580;
// UnityEngine.UILineInfo[]
struct UILineInfoU5BU5D_t2581;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t2578;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t2579;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t275;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.VerticalWrapMode
#include "UnityEngine_UnityEngine_VerticalWrapMode.h"
// UnityEngine.HorizontalWrapMode
#include "UnityEngine_UnityEngine_HorizontalWrapMode.h"
// UnityEngine.TextAnchor
#include "UnityEngine_UnityEngine_TextAnchor.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.TextGenerationSettings
#include "UnityEngine_UnityEngine_TextGenerationSettings.h"

// System.Void UnityEngine.TextGenerator::.ctor()
 void TextGenerator__ctor_m2121 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::.ctor(System.Int32)
 void TextGenerator__ctor_m2312 (TextGenerator_t313 * __this, int32_t ___initialCapacity, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::System.IDisposable.Dispose()
 void TextGenerator_System_IDisposable_Dispose_m5935 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Init()
 void TextGenerator_Init_m5936 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Dispose_cpp()
 void TextGenerator_Dispose_cpp_m5937 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,UnityEngine.VerticalWrapMode,UnityEngine.HorizontalWrapMode,System.Boolean,UnityEngine.TextAnchor,UnityEngine.Vector2,UnityEngine.Vector2,System.Boolean)
 bool TextGenerator_Populate_Internal_m5938 (TextGenerator_t313 * __this, String_t* ___str, Font_t260 * ___font, Color_t145  ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, Vector2_t25  ___extents, Vector2_t25  ___pivot, bool ___generateOutOfBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate_Internal_cpp(System.String,UnityEngine.Font,UnityEngine.Color,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
 bool TextGenerator_Populate_Internal_cpp_m5939 (TextGenerator_t313 * __this, String_t* ___str, Font_t260 * ___font, Color_t145  ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::INTERNAL_CALL_Populate_Internal_cpp(UnityEngine.TextGenerator,System.String,UnityEngine.Font,UnityEngine.Color&,System.Int32,System.Single,UnityEngine.FontStyle,System.Boolean,System.Boolean,System.Int32,System.Int32,System.Int32,System.Int32,System.Boolean,UnityEngine.TextAnchor,System.Single,System.Single,System.Single,System.Single,System.Boolean)
 bool TextGenerator_INTERNAL_CALL_Populate_Internal_cpp_m5940 (Object_t * __this/* static, unused */, TextGenerator_t313 * ___self, String_t* ___str, Font_t260 * ___font, Color_t145 * ___color, int32_t ___fontSize, float ___lineSpacing, int32_t ___style, bool ___richText, bool ___resizeTextForBestFit, int32_t ___resizeTextMinSize, int32_t ___resizeTextMaxSize, int32_t ___verticalOverFlow, int32_t ___horizontalOverflow, bool ___updateBounds, int32_t ___anchor, float ___extentsX, float ___extentsY, float ___pivotX, float ___pivotY, bool ___generateOutOfBounds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UnityEngine.TextGenerator::get_rectExtents()
 Rect_t276  TextGenerator_get_rectExtents_m2185 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_vertexCount()
 int32_t TextGenerator_get_vertexCount_m5941 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVerticesInternal(System.Object)
 void TextGenerator_GetVerticesInternal_m5942 (TextGenerator_t313 * __this, Object_t * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UIVertex[] UnityEngine.TextGenerator::GetVerticesArray()
 UIVertexU5BU5D_t312* TextGenerator_GetVerticesArray_m5943 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCount()
 int32_t TextGenerator_get_characterCount_m5944 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_characterCountVisible()
 int32_t TextGenerator_get_characterCountVisible_m2161 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharactersInternal(System.Object)
 void TextGenerator_GetCharactersInternal_m5945 (TextGenerator_t313 * __this, Object_t * ___characters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UICharInfo[] UnityEngine.TextGenerator::GetCharactersArray()
 UICharInfoU5BU5D_t2580* TextGenerator_GetCharactersArray_m5946 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_lineCount()
 int32_t TextGenerator_get_lineCount_m2160 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLinesInternal(System.Object)
 void TextGenerator_GetLinesInternal_m5947 (TextGenerator_t313 * __this, Object_t * ___lines, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.UILineInfo[] UnityEngine.TextGenerator::GetLinesArray()
 UILineInfoU5BU5D_t2581* TextGenerator_GetLinesArray_m5948 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.TextGenerator::get_fontSizeUsedForBestFit()
 int32_t TextGenerator_get_fontSizeUsedForBestFit_m2209 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Finalize()
 void TextGenerator_Finalize_m5949 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::ValidatedSettings(UnityEngine.TextGenerationSettings)
 TextGenerationSettings_t347  TextGenerator_ValidatedSettings_m5950 (TextGenerator_t313 * __this, TextGenerationSettings_t347  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::Invalidate()
 void TextGenerator_Invalidate_m2321 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetCharacters(System.Collections.Generic.List`1<UnityEngine.UICharInfo>)
 void TextGenerator_GetCharacters_m5951 (TextGenerator_t313 * __this, List_1_t2578 * ___characters, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetLines(System.Collections.Generic.List`1<UnityEngine.UILineInfo>)
 void TextGenerator_GetLines_m5952 (TextGenerator_t313 * __this, List_1_t2579 * ___lines, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.TextGenerator::GetVertices(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
 void TextGenerator_GetVertices_m5953 (TextGenerator_t313 * __this, List_1_t275 * ___vertices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredWidth(System.String,UnityEngine.TextGenerationSettings)
 float TextGenerator_GetPreferredWidth_m2319 (TextGenerator_t313 * __this, String_t* ___str, TextGenerationSettings_t347  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.TextGenerator::GetPreferredHeight(System.String,UnityEngine.TextGenerationSettings)
 float TextGenerator_GetPreferredHeight_m2320 (TextGenerator_t313 * __this, String_t* ___str, TextGenerationSettings_t347  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::Populate(System.String,UnityEngine.TextGenerationSettings)
 bool TextGenerator_Populate_m2183 (TextGenerator_t313 * __this, String_t* ___str, TextGenerationSettings_t347  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.TextGenerator::PopulateAlways(System.String,UnityEngine.TextGenerationSettings)
 bool TextGenerator_PopulateAlways_m5954 (TextGenerator_t313 * __this, String_t* ___str, TextGenerationSettings_t347  ___settings, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
 Object_t* TextGenerator_get_verts_m2323 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::get_characters()
 Object_t* TextGenerator_get_characters_m2162 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::get_lines()
 Object_t* TextGenerator_get_lines_m2158 (TextGenerator_t313 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
