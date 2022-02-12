#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


struct VirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct VirtualActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericVirtualActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct GenericInterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2)
	{
		void* params[2] = { p1, &p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3 p3)
	{
		void* params[3] = { p1, p2, &p3 };
		method->invoker_method(methodPtr, method, obj, params, NULL);
	}
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.Object>
struct Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Collections.Generic.Dictionary`2<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// TMPro.FastAction`1<System.Boolean>
struct FastAction_1_tFC26007E6ECC49160C91059DC218FDD0602EE4F3;
// TMPro.FastAction`1<System.Object>
struct FastAction_1_t30779A2821DCE05CA702D5800B30CABF67687135;
// TMPro.FastAction`1<UnityEngine.Object>
struct FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005;
// TMPro.FastAction`2<System.Boolean,UnityEngine.Material>
struct FastAction_2_tECA23F8F5AC1D6DF8BAB8AEDD017A064D210F83A;
// TMPro.FastAction`2<System.Boolean,UnityEngine.Object>
struct FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B;
// TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs>
struct FastAction_2_t7A930CE5DBE699F7BADA18E19F951E3D68821A0D;
// TMPro.FastAction`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material>
struct FastAction_3_tF1621854653F0CB64C7EE2C86A181B843FA49E77;
// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset>
struct Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C;
// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset>
struct Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5;
// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable>
struct HashSet_1_tC2DD42EF8D44AC9B58E6A24D2D499C4A792620C9;
// System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic>
struct HashSet_1_t7339109B23CAC1C7B695498778D7AC8166F04AF7;
// System.Collections.Generic.LinkedList`1<System.Action`1<UnityEngine.Object>>
struct LinkedList_1_tA75C78C76C8C00278F758EE6873486604C8C880C;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>
struct List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t099FA1DB61217A855A3732B3DCA8E909BB24E1AB;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// CurvedUI.CurvedUITMPSubmesh[]
struct CurvedUITMPSubmeshU5BU5D_t8CAF4ED9A371C184CAB4123B82D9C518F3E0355B;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Material[]
struct MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D;
// TMPro.MaterialReference[]
struct MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// TMPro.RichTextTagAttribute[]
struct RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_LineInfo[]
struct TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E;
// TMPro.TMP_LinkInfo[]
struct TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E;
// TMPro.TMP_MeshInfo[]
struct TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7;
// TMPro.TMP_PageInfo[]
struct TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9;
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
// TMPro.TMP_WordInfo[]
struct TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// TMPro.WordWrapState[]
struct WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9;
// TMPro.TMP_Text/UnicodeChar[]
struct UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CurvedUI.CurvedUISettings
struct CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2;
// CurvedUI.CurvedUITMP
struct CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73;
// CurvedUI.CurvedUITMPInputFieldCaret
struct CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8;
// CurvedUI.CurvedUITMPSubmesh
struct CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532;
// CurvedUI.CurvedUIVertexEffect
struct CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88;
// CurvedUI.CurvedUIViveController
struct CurvedUIViveController_t4D748E4AB476CDE20BDF09579CBD91E92D5C544E;
// System.Delegate
struct Delegate_t;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.Event
struct Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB;
// UnityEngine.EventSystems.EventSystem
struct EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707;
// TMPro.FastAction
struct FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.EventSystems.IScrollHandler
struct IScrollHandler_t762CB73017D561E11CF6759ED9FD8C9F24B3D13F;
// TMPro.ITextPreprocessor
struct ITextPreprocessor_tDBB49C8B68D7B80E8D233B9D9666C43981EFAAB9;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// UnityEngine.UI.Mask
struct Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// CurvedUI.OptionalDependencyAttribute
struct OptionalDependencyAttribute_tA4AF5D8DF636D9E52A8F86F02F7CE9B16E2E8708;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.UI.RectangularVertexClipper
struct RectangularVertexClipper_t55234A392C423FCC9A016503B2D1763D52E6605A;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.UI.Scrollbar
struct Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// TMPro.TMP_Character
struct TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35;
// TMPro.TMP_ColorGradient
struct TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB;
// TMPro.TMP_FontAsset
struct TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160;
// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F;
// TMPro.TMP_InputValidator
struct TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98;
// TMPro.TMP_ScrollbarEventHandler
struct TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D;
// TMPro.TMP_SpriteAnimator
struct TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4;
// TMPro.TMP_SpriteAsset
struct TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39;
// TMPro.TMP_Style
struct TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C;
// TMPro.TMP_StyleSheet
struct TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859;
// TMPro.TMP_SubMeshUI
struct TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D;
// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9;
// TMPro.TMP_TextElement
struct TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5;
// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// CurvedUI.ViveEvent
struct ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E;
// CurvedUI.ViveInputEvent
struct ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.WaitForSecondsRealtime
struct WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01;
// CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10
struct U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.RectTransform/ReapplyDrivenProperties
struct ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24;
// TMPro.TMP_InputField/OnChangeEvent
struct OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D;
// TMPro.TMP_InputField/OnValidateInput
struct OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530;
// TMPro.TMP_InputField/SelectionEvent
struct SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119;
// TMPro.TMP_InputField/SubmitEvent
struct SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500;
// TMPro.TMP_InputField/TextSelectionEvent
struct TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401;
// TMPro.TMP_InputField/TouchScreenKeyboardEvent
struct TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1;

IL2CPP_EXTERN_C RuntimeClass* Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral25EC8B5027C4C127EC75896F8B03EF13CBFF95DE;
IL2CPP_EXTERN_C String_t* _stringLiteralDC643805631DCFA7AF65357A1ADA341A23CA30AA;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m1C73B3D3E924B85529A025308CD97ACF478C95FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m1595B542FEE8A9C01F3DB0B958F701F8F0A6D730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_mA60BA18571108CDB4B49B76D1544DC204BD2AB34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB300C664BECCAFAF312075478DA59178E9B81A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m8D827B7D1B6A4BF71180B04A5C9F809CFB9747F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m73B2BCA1676B787256F424483A1EB6B9841A4695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1935F4927E7D67A4997E9F2C35B4ED2C0C335BD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8B2B63CDB07B0BCF7C0DE5D790F95F8BC0980B04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6BB7FC406CF1B8EB37AE3099B84F083FA62B04E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mFC7CE5CA138CCC1A0AE91CEA65F6CD8F9BAA436B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m5F6AF2A1EF0047D4F719FA30ADA5314A3EC8BBBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6A9761CF6ADDB200800BC055298CF4AF4BA44CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2A410A484DC099A68EE94C2134DFDB0609D241C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m95B374E678B6610B02FFA7111D74A0E3F9511E3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE0CF77F0BE4341A4B9E794E8F15E91789C40C6D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CCaretBlinkerU3Ed__10_System_Collections_IEnumerator_Reset_m4DF2E74FC878045B0B26356BC2394CEA1A0C0A38_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TMPro.FastAction`1<UnityEngine.Object>
struct FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005  : public RuntimeObject
{
	// System.Collections.Generic.LinkedList`1<System.Action`1<A>> TMPro.FastAction`1::delegates
	LinkedList_1_tA75C78C76C8C00278F758EE6873486604C8C880C* ___delegates_0;
	// System.Collections.Generic.Dictionary`2<System.Action`1<A>,System.Collections.Generic.LinkedListNode`1<System.Action`1<A>>> TMPro.FastAction`1::lookup
	Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E* ___lookup_1;
};

// System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>
struct List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	CurvedUITMPSubmeshU5BU5D_t8CAF4ED9A371C184CAB4123B82D9C518F3E0355B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	CurvedUITMPSubmeshU5BU5D_t8CAF4ED9A371C184CAB4123B82D9C518F3E0355B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___s_emptyArray_5;
};

// UnityEngine.EventSystems.AbstractEventData
struct AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7  : public RuntimeObject
{
	// System.Boolean UnityEngine.EventSystems.AbstractEventData::m_Used
	bool ___m_Used_0;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// TMPro.TMPro_EventManager
struct TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9  : public RuntimeObject
{
};

struct TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields
{
	// TMPro.FastAction`2<System.Object,TMPro.Compute_DT_EventArgs> TMPro.TMPro_EventManager::COMPUTE_DT_EVENT
	FastAction_2_t7A930CE5DBE699F7BADA18E19F951E3D68821A0D* ___COMPUTE_DT_EVENT_0;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Material> TMPro.TMPro_EventManager::MATERIAL_PROPERTY_EVENT
	FastAction_2_tECA23F8F5AC1D6DF8BAB8AEDD017A064D210F83A* ___MATERIAL_PROPERTY_EVENT_1;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::FONT_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___FONT_PROPERTY_EVENT_2;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::SPRITE_ASSET_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___SPRITE_ASSET_PROPERTY_EVENT_3;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::TEXTMESHPRO_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___TEXTMESHPRO_PROPERTY_EVENT_4;
	// TMPro.FastAction`3<UnityEngine.GameObject,UnityEngine.Material,UnityEngine.Material> TMPro.TMPro_EventManager::DRAG_AND_DROP_MATERIAL_EVENT
	FastAction_3_tF1621854653F0CB64C7EE2C86A181B843FA49E77* ___DRAG_AND_DROP_MATERIAL_EVENT_5;
	// TMPro.FastAction`1<System.Boolean> TMPro.TMPro_EventManager::TEXT_STYLE_PROPERTY_EVENT
	FastAction_1_tFC26007E6ECC49160C91059DC218FDD0602EE4F3* ___TEXT_STYLE_PROPERTY_EVENT_6;
	// TMPro.FastAction`1<UnityEngine.Object> TMPro.TMPro_EventManager::COLOR_GRADIENT_PROPERTY_EVENT
	FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* ___COLOR_GRADIENT_PROPERTY_EVENT_7;
	// TMPro.FastAction TMPro.TMPro_EventManager::TMP_SETTINGS_PROPERTY_EVENT
	FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D* ___TMP_SETTINGS_PROPERTY_EVENT_8;
	// TMPro.FastAction TMPro.TMPro_EventManager::RESOURCE_LOAD_EVENT
	FastAction_t32D4ADE06921D3EAB9BCE9B6397C82A4A898644D* ___RESOURCE_LOAD_EVENT_9;
	// TMPro.FastAction`2<System.Boolean,UnityEngine.Object> TMPro.TMPro_EventManager::TEXTMESHPRO_UGUI_PROPERTY_EVENT
	FastAction_2_t67E5AC7D6D05EC71192B279EA4EC495B4B3B4A9B* ___TEXTMESHPRO_UGUI_PROPERTY_EVENT_10;
	// TMPro.FastAction`1<UnityEngine.Object> TMPro.TMPro_EventManager::TEXT_CHANGED_EVENT
	FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* ___TEXT_CHANGED_EVENT_11;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10
struct U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C  : public RuntimeObject
{
	// System.Int32 CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// CurvedUI.CurvedUITMPInputFieldCaret CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::<>4__this
	CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* ___U3CU3E4__this_2;
};

// System.Collections.Generic.List`1/Enumerator<CurvedUI.CurvedUITMPSubmesh>
struct Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// TMPro.TMP_TextProcessingStack`1<System.Int32>
struct TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<System.Single>
struct TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	float ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient>
struct TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F  : public AbstractEventData_tAE1A127ED657117548181D29FFE4B1B14D8E67F7
{
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseEventData::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_1;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// UnityEngine.Color32
struct Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 UnityEngine.Color32::rgba
			int32_t ___rgba_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___rgba_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte UnityEngine.Color32::r
			uint8_t ___r_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___r_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___g_2_OffsetPadding[1];
			// System.Byte UnityEngine.Color32::g
			uint8_t ___g_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___g_2_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___g_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___b_3_OffsetPadding[2];
			// System.Byte UnityEngine.Color32::b
			uint8_t ___b_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___b_3_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___b_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___a_4_OffsetPadding[3];
			// System.Byte UnityEngine.Color32::a
			uint8_t ___a_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___a_4_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___a_4_forAlignmentOnly;
		};
	};
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};

struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray_0;
};
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B 
{
	// System.Int32 TMPro.MaterialReference::index
	int32_t ___index_0;
	// TMPro.TMP_FontAsset TMPro.MaterialReference::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// TMPro.TMP_SpriteAsset TMPro.MaterialReference::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	// UnityEngine.Material TMPro.MaterialReference::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	// System.Boolean TMPro.MaterialReference::isDefaultMaterial
	bool ___isDefaultMaterial_4;
	// System.Boolean TMPro.MaterialReference::isFallbackMaterial
	bool ___isFallbackMaterial_5;
	// UnityEngine.Material TMPro.MaterialReference::fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	// System.Single TMPro.MaterialReference::padding
	float ___padding_7;
	// System.Int32 TMPro.MaterialReference::referenceCount
	int32_t ___referenceCount_8;
};
// Native definition for P/Invoke marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_pinvoke
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};
// Native definition for COM marshalling of TMPro.MaterialReference
struct MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B_marshaled_com
{
	int32_t ___index_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_2;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_3;
	int32_t ___isDefaultMaterial_4;
	int32_t ___isFallbackMaterial_5;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___fallbackMaterial_6;
	float ___padding_7;
	int32_t ___referenceCount_8;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// CurvedUI.OptionalDependencyAttribute
struct OptionalDependencyAttribute_tA4AF5D8DF636D9E52A8F86F02F7CE9B16E2E8708  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String CurvedUI.OptionalDependencyAttribute::dependentClass
	String_t* ___dependentClass_0;
	// System.String CurvedUI.OptionalDependencyAttribute::define
	String_t* ___define_1;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// TMPro.TMP_FontStyleStack
struct TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC 
{
	// System.Byte TMPro.TMP_FontStyleStack::bold
	uint8_t ___bold_0;
	// System.Byte TMPro.TMP_FontStyleStack::italic
	uint8_t ___italic_1;
	// System.Byte TMPro.TMP_FontStyleStack::underline
	uint8_t ___underline_2;
	// System.Byte TMPro.TMP_FontStyleStack::strikethrough
	uint8_t ___strikethrough_3;
	// System.Byte TMPro.TMP_FontStyleStack::highlight
	uint8_t ___highlight_4;
	// System.Byte TMPro.TMP_FontStyleStack::superscript
	uint8_t ___superscript_5;
	// System.Byte TMPro.TMP_FontStyleStack::subscript
	uint8_t ___subscript_6;
	// System.Byte TMPro.TMP_FontStyleStack::uppercase
	uint8_t ___uppercase_7;
	// System.Byte TMPro.TMP_FontStyleStack::lowercase
	uint8_t ___lowercase_8;
	// System.Byte TMPro.TMP_FontStyleStack::smallcaps
	uint8_t ___smallcaps_9;
};

// TMPro.TMP_Offset
struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 
{
	// System.Single TMPro.TMP_Offset::m_Left
	float ___m_Left_0;
	// System.Single TMPro.TMP_Offset::m_Right
	float ___m_Right_1;
	// System.Single TMPro.TMP_Offset::m_Top
	float ___m_Top_2;
	// System.Single TMPro.TMP_Offset::m_Bottom
	float ___m_Bottom_3;
};

struct TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6_StaticFields
{
	// TMPro.TMP_Offset TMPro.TMP_Offset::k_ZeroOffset
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___k_ZeroOffset_4;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
};

// UnityEngine.Vector2Int
struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A 
{
	// System.Int32 UnityEngine.Vector2Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector2Int::m_Y
	int32_t ___m_Y_1;
};

struct Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_StaticFields
{
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Zero
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Zero_2;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_One
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_One_3;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Up
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Up_4;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Down
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Down_5;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Left
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Left_6;
	// UnityEngine.Vector2Int UnityEngine.Vector2Int::s_Right
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___s_Right_7;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20
struct __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72__padding[20];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24
struct __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A__padding[24];
	};
};

// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32
struct __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 
{
	union
	{
		struct
		{
			union
			{
			};
		};
		uint8_t __StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069__padding[32];
	};
};

// TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 
{
	// TMPro.TMP_Character TMPro.TMP_Text/SpecialCharacter::character
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	// TMPro.TMP_FontAsset TMPro.TMP_Text/SpecialCharacter::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	// UnityEngine.Material TMPro.TMP_Text/SpecialCharacter::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	// System.Int32 TMPro.TMP_Text/SpecialCharacter::materialIndex
	int32_t ___materialIndex_3;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_pinvoke
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};
// Native definition for COM marshalling of TMPro.TMP_Text/SpecialCharacter
struct SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777_marshaled_com
{
	TMP_Character_t7D37A55EF1A9FF6D0BFE6D50E86A00F80E7FAF35* ___character_0;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_1;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_2;
	int32_t ___materialIndex_3;
};

// TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 
{
	// System.UInt32[] TMPro.TMP_Text/TextBackingContainer::m_Array
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___m_Array_0;
	// System.Int32 TMPro.TMP_Text/TextBackingContainer::m_Count
	int32_t ___m_Count_1;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_pinvoke
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};
// Native definition for COM marshalling of TMPro.TMP_Text/TextBackingContainer
struct TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361_marshaled_com
{
	Il2CppSafeArray/*NONE*/* ___m_Array_0;
	int32_t ___m_Count_1;
};

// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32>
struct TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference>
struct TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	MaterialReference_tFD98FFFBBDF168028E637446C6676507186F4D0B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// <PrivateImplementationDetails>
struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA  : public RuntimeObject
{
};

struct U3CPrivateImplementationDetailsU3E_t0F5473E849A5A5185A9F4C5246F0C32816C49FCA_StaticFields
{
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::1385A3395CDC9F7F90324CB0A06C5AC11AD4A425A35BBB7D5C9C0C33D8ADE9A0
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___1385A3395CDC9F7F90324CB0A06C5AC11AD4A425A35BBB7D5C9C0C33D8ADE9A0_0;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::1B134934983D969A9B865446C4F2033761F0CD8E0AAD1445CDD8C3993FBAE9D9
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___1B134934983D969A9B865446C4F2033761F0CD8E0AAD1445CDD8C3993FBAE9D9_1;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=32 <PrivateImplementationDetails>::5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC
	__StaticArrayInitTypeSizeU3D32_tC3894D25C1E879699FE1C9BAB1BBF2787B405069 ___5F5673AE83EE13B46A7C1D9CE2F8CC01C37CFC893B0AC5E6E9260B79215F5ADC_2;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=24 <PrivateImplementationDetails>::753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1
	__StaticArrayInitTypeSizeU3D24_t3464DA68B6CCAB9A0A43F94B3DB9AA7E7FDDB19A ___753D5E1ADA77B20B9959A1030B8E0BA5CF925F2881D3635C3F791E5A0AE0EEB1_3;
	// <PrivateImplementationDetails>/__StaticArrayInitTypeSize=20 <PrivateImplementationDetails>::9F95F0EC2554B6E680D7AE6CD0929E16B4EFC86142A8F454EFE992CCC97C99D2
	__StaticArrayInitTypeSizeU3D20_tA394C0A7DC4F4F05D2190B09E23BDE8536718D72 ___9F95F0EC2554B6E680D7AE6CD0929E16B4EFC86142A8F454EFE992CCC97C99D2_4;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// TMPro.ColorMode
struct ColorMode_tA7A815AAB9F175EFBA0AE0814E55728432A880BF 
{
	// System.Int32 TMPro.ColorMode::value__
	int32_t ___value___2;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// TMPro.Extents
struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 
{
	// UnityEngine.Vector2 TMPro.Extents::min
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___min_2;
	// UnityEngine.Vector2 TMPro.Extents::max
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___max_3;
};

struct Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8_StaticFields
{
	// TMPro.Extents TMPro.Extents::zero
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___zero_0;
	// TMPro.Extents TMPro.Extents::uninitialized
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___uninitialized_1;
};

// TMPro.FontStyles
struct FontStyles_t9E611EE6BBE6E192A73EAFF7872596517C527FF5 
{
	// System.Int32 TMPro.FontStyles::value__
	int32_t ___value___2;
};

// TMPro.FontWeight
struct FontWeight_tA2585C0A73B70D31CE71E7843149098A5E16BC80 
{
	// System.Int32 TMPro.FontWeight::value__
	int32_t ___value___2;
};

// TMPro.HighlightState
struct HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B 
{
	// UnityEngine.Color32 TMPro.HighlightState::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_0;
	// TMPro.TMP_Offset TMPro.HighlightState::padding
	TMP_Offset_t2262BE4E87D9662487777FF8FFE1B17B0E4438C6 ___padding_1;
};

// TMPro.HorizontalAlignmentOptions
struct HorizontalAlignmentOptions_tCC21260E9FBEC656BA7783643ED5F44AFF7955A1 
{
	// System.Int32 TMPro.HorizontalAlignmentOptions::value__
	int32_t ___value___2;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// TMPro.TMP_TextElementType
struct TMP_TextElementType_t51EE6662436732F22C6B599F5757B7F35F706342 
{
	// System.Int32 TMPro.TMP_TextElementType::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextInfo
struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D  : public RuntimeObject
{
	// TMPro.TMP_Text TMPro.TMP_TextInfo::textComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___textComponent_2;
	// System.Int32 TMPro.TMP_TextInfo::characterCount
	int32_t ___characterCount_3;
	// System.Int32 TMPro.TMP_TextInfo::spriteCount
	int32_t ___spriteCount_4;
	// System.Int32 TMPro.TMP_TextInfo::spaceCount
	int32_t ___spaceCount_5;
	// System.Int32 TMPro.TMP_TextInfo::wordCount
	int32_t ___wordCount_6;
	// System.Int32 TMPro.TMP_TextInfo::linkCount
	int32_t ___linkCount_7;
	// System.Int32 TMPro.TMP_TextInfo::lineCount
	int32_t ___lineCount_8;
	// System.Int32 TMPro.TMP_TextInfo::pageCount
	int32_t ___pageCount_9;
	// System.Int32 TMPro.TMP_TextInfo::materialCount
	int32_t ___materialCount_10;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_TextInfo::characterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___characterInfo_11;
	// TMPro.TMP_WordInfo[] TMPro.TMP_TextInfo::wordInfo
	TMP_WordInfoU5BU5D_tD1759E5A84DCCCD42B718D79E953E72A432BB4DC* ___wordInfo_12;
	// TMPro.TMP_LinkInfo[] TMPro.TMP_TextInfo::linkInfo
	TMP_LinkInfoU5BU5D_tE11BE54A5923BD2148E716289F44EA465E06536E* ___linkInfo_13;
	// TMPro.TMP_LineInfo[] TMPro.TMP_TextInfo::lineInfo
	TMP_LineInfoU5BU5D_tE485ECF6A7A96441C72B53D75E7A5A5461A2CA0E* ___lineInfo_14;
	// TMPro.TMP_PageInfo[] TMPro.TMP_TextInfo::pageInfo
	TMP_PageInfoU5BU5D_tE3DAAA8E2E9147F97C424A9034F677A516E8DAF9* ___pageInfo_15;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::meshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___meshInfo_16;
	// TMPro.TMP_MeshInfo[] TMPro.TMP_TextInfo::m_CachedMeshInfo
	TMP_MeshInfoU5BU5D_t3549EA3B9F542558E0DB1EDFAB98C612FE4231D7* ___m_CachedMeshInfo_17;
};

struct TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D_StaticFields
{
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorPositive
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorPositive_0;
	// UnityEngine.Vector2 TMPro.TMP_TextInfo::k_InfinityVectorNegative
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_InfinityVectorNegative_1;
};

// TMPro.TMP_Vertex
struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A 
{
	// UnityEngine.Vector3 TMPro.TMP_Vertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv_1;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv2_2;
	// UnityEngine.Vector2 TMPro.TMP_Vertex::uv4
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___uv4_3;
	// UnityEngine.Color32 TMPro.TMP_Vertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_4;
};

struct TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A_StaticFields
{
	// TMPro.TMP_Vertex TMPro.TMP_Vertex::k_Zero
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___k_Zero_5;
};

// TMPro.TextAlignmentOptions
struct TextAlignmentOptions_tF3FA9020F7E2AF1A48660044540254009A22EF01 
{
	// System.Int32 TMPro.TextAlignmentOptions::value__
	int32_t ___value___2;
};

// TMPro.TextOverflowModes
struct TextOverflowModes_t7DCCD00C16E3223CE50CDDCC53F785C0405BE203 
{
	// System.Int32 TMPro.TextOverflowModes::value__
	int32_t ___value___2;
};

// TMPro.TextRenderFlags
struct TextRenderFlags_tE023FF398ECFE57A1DBC6FD2A1AF4AE9620F6E1C 
{
	// System.Int32 TMPro.TextRenderFlags::value__
	int32_t ___value___2;
};

// TMPro.TextureMappingOptions
struct TextureMappingOptions_t0E1A47C529DEB45A875486256E7026E97C940DAE 
{
	// System.Int32 TMPro.TextureMappingOptions::value__
	int32_t ___value___2;
};

// UnityEngine.TouchScreenKeyboardType
struct TouchScreenKeyboardType_t3F5A06315B263282460BE67DE01393B6FB3780C1 
{
	// System.Int32 UnityEngine.TouchScreenKeyboardType::value__
	int32_t ___value___2;
};

// UnityEngine.UIVertex
struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 
{
	// UnityEngine.Vector3 UnityEngine.UIVertex::position
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position_0;
	// UnityEngine.Vector3 UnityEngine.UIVertex::normal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___normal_1;
	// UnityEngine.Vector4 UnityEngine.UIVertex::tangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent_2;
	// UnityEngine.Color32 UnityEngine.UIVertex::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_3;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv0_4;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv1
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv1_5;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv2
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv2_6;
	// UnityEngine.Vector4 UnityEngine.UIVertex::uv3
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___uv3_7;
};

struct UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207_StaticFields
{
	// UnityEngine.Color32 UnityEngine.UIVertex::s_DefaultColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_DefaultColor_8;
	// UnityEngine.Vector4 UnityEngine.UIVertex::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.UIVertex UnityEngine.UIVertex::simpleVert
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___simpleVert_10;
};

// TMPro.VertexGradient
struct VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F 
{
	// UnityEngine.Color TMPro.VertexGradient::topLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topLeft_0;
	// UnityEngine.Color TMPro.VertexGradient::topRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___topRight_1;
	// UnityEngine.Color TMPro.VertexGradient::bottomLeft
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomLeft_2;
	// UnityEngine.Color TMPro.VertexGradient::bottomRight
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___bottomRight_3;
};

// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE  : public RuntimeObject
{
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Positions
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Positions_0;
	// System.Collections.Generic.List`1<UnityEngine.Color32> UnityEngine.UI.VertexHelper::m_Colors
	List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8* ___m_Colors_1;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv0S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv0S_2;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv1S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv1S_3;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv2S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv2S_4;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Uv3S
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Uv3S_5;
	// System.Collections.Generic.List`1<UnityEngine.Vector3> UnityEngine.UI.VertexHelper::m_Normals
	List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B* ___m_Normals_6;
	// System.Collections.Generic.List`1<UnityEngine.Vector4> UnityEngine.UI.VertexHelper::m_Tangents
	List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317* ___m_Tangents_7;
	// System.Collections.Generic.List`1<System.Int32> UnityEngine.UI.VertexHelper::m_Indices
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___m_Indices_8;
	// System.Boolean UnityEngine.UI.VertexHelper::m_ListsInitalized
	bool ___m_ListsInitalized_11;
};

struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.UI.VertexHelper::s_DefaultTangent
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___s_DefaultTangent_9;
	// UnityEngine.Vector3 UnityEngine.UI.VertexHelper::s_DefaultNormal
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___s_DefaultNormal_10;
};

// TMPro.VertexSortingOrder
struct VertexSortingOrder_t95B7AEDBDCAACC3459B6476E5CCC594A6422FFA8 
{
	// System.Int32 TMPro.VertexSortingOrder::value__
	int32_t ___value___2;
};

// TMPro.VerticalAlignmentOptions
struct VerticalAlignmentOptions_tCEF70AF60282B71AEEE14D51253CE6A61E72D855 
{
	// System.Int32 TMPro.VerticalAlignmentOptions::value__
	int32_t ___value___2;
};

// CurvedUI.ViveInputArgs
struct ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 
{
	// System.UInt32 CurvedUI.ViveInputArgs::controllerIndex
	uint32_t ___controllerIndex_0;
	// System.Single CurvedUI.ViveInputArgs::buttonPressure
	float ___buttonPressure_1;
	// UnityEngine.Vector2 CurvedUI.ViveInputArgs::touchpadAxis
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___touchpadAxis_2;
};

// CurvedUI.CurvedUISettings/CurvedUIShape
struct CurvedUIShape_t960C3507437D0D563B5B43E270843A165979447A 
{
	// System.Int32 CurvedUI.CurvedUISettings/CurvedUIShape::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/FillMethod
struct FillMethod_t36837ED12068DF1582CC20489D571B0BCAA7AD19 
{
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Image/Type
struct Type_t81D6F138C2FC745112D5247CD91BD483EDFFC041 
{
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Selectable/Transition
struct Transition_tF856A77C9FAC6D26EA3CA158CF68B739D35397B3 
{
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;
};

// TMPro.TMP_InputField/CharacterValidation
struct CharacterValidation_t14B82768014D219C74BC91657D6B013A0CAFF2B9 
{
	// System.Int32 TMPro.TMP_InputField/CharacterValidation::value__
	int32_t ___value___2;
};

// TMPro.TMP_InputField/ContentType
struct ContentType_tC6315BB238AB8B34EEAC496ECDA3F92692694276 
{
	// System.Int32 TMPro.TMP_InputField/ContentType::value__
	int32_t ___value___2;
};

// TMPro.TMP_InputField/InputType
struct InputType_tF2224DC7469AAC22BF653D00F6E29F8739175DA1 
{
	// System.Int32 TMPro.TMP_InputField/InputType::value__
	int32_t ___value___2;
};

// TMPro.TMP_InputField/LineType
struct LineType_t004C9AD8E9A2D86ABDE2F2F55F09446F6E46AF6E 
{
	// System.Int32 TMPro.TMP_InputField/LineType::value__
	int32_t ___value___2;
};

// TMPro.TMP_Text/TextInputSources
struct TextInputSources_t41387D6C9CB16E60390F47A15AEB8185BE966D26 
{
	// System.Int32 TMPro.TMP_Text/TextInputSources::value__
	int32_t ___value___2;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight>
struct TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState>
struct TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions>
struct TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	int32_t ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 
{
	// System.Char TMPro.TMP_CharacterInfo::character
	Il2CppChar ___character_0;
	// System.Int32 TMPro.TMP_CharacterInfo::index
	int32_t ___index_1;
	// System.Int32 TMPro.TMP_CharacterInfo::stringLength
	int32_t ___stringLength_2;
	// TMPro.TMP_TextElementType TMPro.TMP_CharacterInfo::elementType
	int32_t ___elementType_3;
	// TMPro.TMP_TextElement TMPro.TMP_CharacterInfo::textElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	// TMPro.TMP_FontAsset TMPro.TMP_CharacterInfo::fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	// TMPro.TMP_SpriteAsset TMPro.TMP_CharacterInfo::spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	// System.Int32 TMPro.TMP_CharacterInfo::spriteIndex
	int32_t ___spriteIndex_7;
	// UnityEngine.Material TMPro.TMP_CharacterInfo::material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	// System.Int32 TMPro.TMP_CharacterInfo::materialReferenceIndex
	int32_t ___materialReferenceIndex_9;
	// System.Boolean TMPro.TMP_CharacterInfo::isUsingAlternateTypeface
	bool ___isUsingAlternateTypeface_10;
	// System.Single TMPro.TMP_CharacterInfo::pointSize
	float ___pointSize_11;
	// System.Int32 TMPro.TMP_CharacterInfo::lineNumber
	int32_t ___lineNumber_12;
	// System.Int32 TMPro.TMP_CharacterInfo::pageNumber
	int32_t ___pageNumber_13;
	// System.Int32 TMPro.TMP_CharacterInfo::vertexIndex
	int32_t ___vertexIndex_14;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TL
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_TR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	// TMPro.TMP_Vertex TMPro.TMP_CharacterInfo::vertex_BR
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomLeft
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::topRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	// UnityEngine.Vector3 TMPro.TMP_CharacterInfo::bottomRight
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	// System.Single TMPro.TMP_CharacterInfo::origin
	float ___origin_23;
	// System.Single TMPro.TMP_CharacterInfo::xAdvance
	float ___xAdvance_24;
	// System.Single TMPro.TMP_CharacterInfo::ascender
	float ___ascender_25;
	// System.Single TMPro.TMP_CharacterInfo::baseLine
	float ___baseLine_26;
	// System.Single TMPro.TMP_CharacterInfo::descender
	float ___descender_27;
	// System.Single TMPro.TMP_CharacterInfo::adjustedAscender
	float ___adjustedAscender_28;
	// System.Single TMPro.TMP_CharacterInfo::adjustedDescender
	float ___adjustedDescender_29;
	// System.Single TMPro.TMP_CharacterInfo::aspectRatio
	float ___aspectRatio_30;
	// System.Single TMPro.TMP_CharacterInfo::scale
	float ___scale_31;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::color
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	// System.Int32 TMPro.TMP_CharacterInfo::underlineVertexIndex
	int32_t ___underlineVertexIndex_34;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	// System.Int32 TMPro.TMP_CharacterInfo::strikethroughVertexIndex
	int32_t ___strikethroughVertexIndex_36;
	// UnityEngine.Color32 TMPro.TMP_CharacterInfo::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	// TMPro.HighlightState TMPro.TMP_CharacterInfo::highlightState
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	// TMPro.FontStyles TMPro.TMP_CharacterInfo::style
	int32_t ___style_39;
	// System.Boolean TMPro.TMP_CharacterInfo::isVisible
	bool ___isVisible_40;
};
// Native definition for P/Invoke marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_pinvoke
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};
// Native definition for COM marshalling of TMPro.TMP_CharacterInfo
struct TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8_marshaled_com
{
	uint8_t ___character_0;
	int32_t ___index_1;
	int32_t ___stringLength_2;
	int32_t ___elementType_3;
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___textElement_4;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___fontAsset_5;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___spriteAsset_6;
	int32_t ___spriteIndex_7;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___material_8;
	int32_t ___materialReferenceIndex_9;
	int32_t ___isUsingAlternateTypeface_10;
	float ___pointSize_11;
	int32_t ___lineNumber_12;
	int32_t ___pageNumber_13;
	int32_t ___vertexIndex_14;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BL_15;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TL_16;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_TR_17;
	TMP_Vertex_t0FD80AE2515219689310A8F619A265667B530E1A ___vertex_BR_18;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topLeft_19;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomLeft_20;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___topRight_21;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___bottomRight_22;
	float ___origin_23;
	float ___xAdvance_24;
	float ___ascender_25;
	float ___baseLine_26;
	float ___descender_27;
	float ___adjustedAscender_28;
	float ___adjustedDescender_29;
	float ___aspectRatio_30;
	float ___scale_31;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___color_32;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_33;
	int32_t ___underlineVertexIndex_34;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_35;
	int32_t ___strikethroughVertexIndex_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_37;
	HighlightState_tE4F50287E5E2E91D42AB77DEA281D88D3AD6A28B ___highlightState_38;
	int32_t ___style_39;
	int32_t ___isVisible_40;
};

// TMPro.TMP_LineInfo
struct TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 
{
	// System.Int32 TMPro.TMP_LineInfo::controlCharacterCount
	int32_t ___controlCharacterCount_0;
	// System.Int32 TMPro.TMP_LineInfo::characterCount
	int32_t ___characterCount_1;
	// System.Int32 TMPro.TMP_LineInfo::visibleCharacterCount
	int32_t ___visibleCharacterCount_2;
	// System.Int32 TMPro.TMP_LineInfo::spaceCount
	int32_t ___spaceCount_3;
	// System.Int32 TMPro.TMP_LineInfo::wordCount
	int32_t ___wordCount_4;
	// System.Int32 TMPro.TMP_LineInfo::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.TMP_LineInfo::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.TMP_LineInfo::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.TMP_LineInfo::lastVisibleCharacterIndex
	int32_t ___lastVisibleCharacterIndex_8;
	// System.Single TMPro.TMP_LineInfo::length
	float ___length_9;
	// System.Single TMPro.TMP_LineInfo::lineHeight
	float ___lineHeight_10;
	// System.Single TMPro.TMP_LineInfo::ascender
	float ___ascender_11;
	// System.Single TMPro.TMP_LineInfo::baseline
	float ___baseline_12;
	// System.Single TMPro.TMP_LineInfo::descender
	float ___descender_13;
	// System.Single TMPro.TMP_LineInfo::maxAdvance
	float ___maxAdvance_14;
	// System.Single TMPro.TMP_LineInfo::width
	float ___width_15;
	// System.Single TMPro.TMP_LineInfo::marginLeft
	float ___marginLeft_16;
	// System.Single TMPro.TMP_LineInfo::marginRight
	float ___marginRight_17;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_LineInfo::alignment
	int32_t ___alignment_18;
	// TMPro.Extents TMPro.TMP_LineInfo::lineExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___lineExtents_19;
};

// System.Action`1<UnityEngine.Object>
struct Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A  : public MulticastDelegate_t
{
};

// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C  : public MulticastDelegate_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
	// System.Boolean UnityEngine.CanvasRenderer::<isMask>k__BackingField
	bool ___U3CisMaskU3Ek__BackingField_4;
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// CurvedUI.ViveEvent
struct ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E  : public MulticastDelegate_t
{
};

// CurvedUI.ViveInputEvent
struct ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB  : public MulticastDelegate_t
{
};

// TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A 
{
	// System.Int32 TMPro.WordWrapState::previous_WordBreak
	int32_t ___previous_WordBreak_0;
	// System.Int32 TMPro.WordWrapState::total_CharacterCount
	int32_t ___total_CharacterCount_1;
	// System.Int32 TMPro.WordWrapState::visible_CharacterCount
	int32_t ___visible_CharacterCount_2;
	// System.Int32 TMPro.WordWrapState::visible_SpriteCount
	int32_t ___visible_SpriteCount_3;
	// System.Int32 TMPro.WordWrapState::visible_LinkCount
	int32_t ___visible_LinkCount_4;
	// System.Int32 TMPro.WordWrapState::firstCharacterIndex
	int32_t ___firstCharacterIndex_5;
	// System.Int32 TMPro.WordWrapState::firstVisibleCharacterIndex
	int32_t ___firstVisibleCharacterIndex_6;
	// System.Int32 TMPro.WordWrapState::lastCharacterIndex
	int32_t ___lastCharacterIndex_7;
	// System.Int32 TMPro.WordWrapState::lastVisibleCharIndex
	int32_t ___lastVisibleCharIndex_8;
	// System.Int32 TMPro.WordWrapState::lineNumber
	int32_t ___lineNumber_9;
	// System.Single TMPro.WordWrapState::maxCapHeight
	float ___maxCapHeight_10;
	// System.Single TMPro.WordWrapState::maxAscender
	float ___maxAscender_11;
	// System.Single TMPro.WordWrapState::maxDescender
	float ___maxDescender_12;
	// System.Single TMPro.WordWrapState::startOfLineAscender
	float ___startOfLineAscender_13;
	// System.Single TMPro.WordWrapState::maxLineAscender
	float ___maxLineAscender_14;
	// System.Single TMPro.WordWrapState::maxLineDescender
	float ___maxLineDescender_15;
	// System.Single TMPro.WordWrapState::pageAscender
	float ___pageAscender_16;
	// TMPro.HorizontalAlignmentOptions TMPro.WordWrapState::horizontalAlignment
	int32_t ___horizontalAlignment_17;
	// System.Single TMPro.WordWrapState::marginLeft
	float ___marginLeft_18;
	// System.Single TMPro.WordWrapState::marginRight
	float ___marginRight_19;
	// System.Single TMPro.WordWrapState::xAdvance
	float ___xAdvance_20;
	// System.Single TMPro.WordWrapState::preferredWidth
	float ___preferredWidth_21;
	// System.Single TMPro.WordWrapState::preferredHeight
	float ___preferredHeight_22;
	// System.Single TMPro.WordWrapState::previousLineScale
	float ___previousLineScale_23;
	// System.Int32 TMPro.WordWrapState::wordCount
	int32_t ___wordCount_24;
	// TMPro.FontStyles TMPro.WordWrapState::fontStyle
	int32_t ___fontStyle_25;
	// System.Int32 TMPro.WordWrapState::italicAngle
	int32_t ___italicAngle_26;
	// System.Single TMPro.WordWrapState::fontScaleMultiplier
	float ___fontScaleMultiplier_27;
	// System.Single TMPro.WordWrapState::currentFontSize
	float ___currentFontSize_28;
	// System.Single TMPro.WordWrapState::baselineOffset
	float ___baselineOffset_29;
	// System.Single TMPro.WordWrapState::lineOffset
	float ___lineOffset_30;
	// System.Boolean TMPro.WordWrapState::isDrivenLineSpacing
	bool ___isDrivenLineSpacing_31;
	// System.Single TMPro.WordWrapState::glyphHorizontalAdvanceAdjustment
	float ___glyphHorizontalAdvanceAdjustment_32;
	// System.Single TMPro.WordWrapState::cSpace
	float ___cSpace_33;
	// System.Single TMPro.WordWrapState::mSpace
	float ___mSpace_34;
	// TMPro.TMP_TextInfo TMPro.WordWrapState::textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	// TMPro.TMP_LineInfo TMPro.WordWrapState::lineInfo
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	// UnityEngine.Color32 TMPro.WordWrapState::vertexColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	// UnityEngine.Color32 TMPro.WordWrapState::underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	// UnityEngine.Color32 TMPro.WordWrapState::strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	// UnityEngine.Color32 TMPro.WordWrapState::highlightColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	// TMPro.TMP_FontStyleStack TMPro.WordWrapState::basicStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::italicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.WordWrapState::highlightColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.WordWrapState::highlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.WordWrapState::colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.WordWrapState::fontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::styleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.WordWrapState::baselineStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.WordWrapState::actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.WordWrapState::materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.WordWrapState::lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	// System.Int32 TMPro.WordWrapState::spriteAnimationID
	int32_t ___spriteAnimationID_57;
	// TMPro.TMP_FontAsset TMPro.WordWrapState::currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	// TMPro.TMP_SpriteAsset TMPro.WordWrapState::currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	// UnityEngine.Material TMPro.WordWrapState::currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	// System.Int32 TMPro.WordWrapState::currentMaterialIndex
	int32_t ___currentMaterialIndex_61;
	// TMPro.Extents TMPro.WordWrapState::meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	// System.Boolean TMPro.WordWrapState::tagNoParsing
	bool ___tagNoParsing_63;
	// System.Boolean TMPro.WordWrapState::isNonBreakingSpace
	bool ___isNonBreakingSpace_64;
};
// Native definition for P/Invoke marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_pinvoke
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};
// Native definition for COM marshalling of TMPro.WordWrapState
struct WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A_marshaled_com
{
	int32_t ___previous_WordBreak_0;
	int32_t ___total_CharacterCount_1;
	int32_t ___visible_CharacterCount_2;
	int32_t ___visible_SpriteCount_3;
	int32_t ___visible_LinkCount_4;
	int32_t ___firstCharacterIndex_5;
	int32_t ___firstVisibleCharacterIndex_6;
	int32_t ___lastCharacterIndex_7;
	int32_t ___lastVisibleCharIndex_8;
	int32_t ___lineNumber_9;
	float ___maxCapHeight_10;
	float ___maxAscender_11;
	float ___maxDescender_12;
	float ___startOfLineAscender_13;
	float ___maxLineAscender_14;
	float ___maxLineDescender_15;
	float ___pageAscender_16;
	int32_t ___horizontalAlignment_17;
	float ___marginLeft_18;
	float ___marginRight_19;
	float ___xAdvance_20;
	float ___preferredWidth_21;
	float ___preferredHeight_22;
	float ___previousLineScale_23;
	int32_t ___wordCount_24;
	int32_t ___fontStyle_25;
	int32_t ___italicAngle_26;
	float ___fontScaleMultiplier_27;
	float ___currentFontSize_28;
	float ___baselineOffset_29;
	float ___lineOffset_30;
	int32_t ___isDrivenLineSpacing_31;
	float ___glyphHorizontalAdvanceAdjustment_32;
	float ___cSpace_33;
	float ___mSpace_34;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___textInfo_35;
	TMP_LineInfo_tB75C1965B58DB7B3A046C8CA55AD6AB92B6B17B3 ___lineInfo_36;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vertexColor_37;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___underlineColor_38;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___strikethroughColor_39;
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___highlightColor_40;
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___basicStyleStack_41;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___italicAngleStack_42;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___colorStack_43;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___underlineColorStack_44;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___strikethroughColorStack_45;
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___highlightColorStack_46;
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___highlightStateStack_47;
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___colorGradientStack_48;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___sizeStack_49;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___indentStack_50;
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___fontWeightStack_51;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___styleStack_52;
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___baselineStack_53;
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___actionStack_54;
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___materialReferenceStack_55;
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___lineJustificationStack_56;
	int32_t ___spriteAnimationID_57;
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___currentFontAsset_58;
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___currentSpriteAsset_59;
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___currentMaterial_60;
	int32_t ___currentMaterialIndex_61;
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___meshExtents_62;
	int32_t ___tagNoParsing_63;
	int32_t ___isNonBreakingSpace_64;
};

// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState>
struct TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F 
{
	// T[] TMPro.TMP_TextProcessingStack`1::itemStack
	WordWrapStateU5BU5D_t473D59C9DBCC949CE72EF1EB471CBA152A6CEAC9* ___itemStack_0;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::index
	int32_t ___index_1;
	// T TMPro.TMP_TextProcessingStack`1::m_DefaultItem
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_DefaultItem_2;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Capacity
	int32_t ___m_Capacity_3;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_RolloverSize
	int32_t ___m_RolloverSize_4;
	// System.Int32 TMPro.TMP_TextProcessingStack`1::m_Count
	int32_t ___m_Count_5;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5  : public Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1
{
};

struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_StaticFields
{
	// UnityEngine.RectTransform/ReapplyDrivenProperties UnityEngine.RectTransform::reapplyDrivenProperties
	ReapplyDrivenProperties_t3482EA130A01FF7EE2EEFE37F66A5215D08CFE24* ___reapplyDrivenProperties_4;
};

// CurvedUI.CurvedUISettings
struct CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CurvedUI.CurvedUISettings/CurvedUIShape CurvedUI.CurvedUISettings::shape
	int32_t ___shape_5;
	// System.Single CurvedUI.CurvedUISettings::quality
	float ___quality_6;
	// System.Boolean CurvedUI.CurvedUISettings::interactable
	bool ___interactable_7;
	// System.Boolean CurvedUI.CurvedUISettings::blocksRaycasts
	bool ___blocksRaycasts_8;
	// System.Boolean CurvedUI.CurvedUISettings::forceUseBoxCollider
	bool ___forceUseBoxCollider_9;
	// System.Int32 CurvedUI.CurvedUISettings::angle
	int32_t ___angle_10;
	// System.Boolean CurvedUI.CurvedUISettings::preserveAspect
	bool ___preserveAspect_11;
	// System.Int32 CurvedUI.CurvedUISettings::vertAngle
	int32_t ___vertAngle_12;
	// System.Single CurvedUI.CurvedUISettings::ringFill
	float ___ringFill_13;
	// System.Int32 CurvedUI.CurvedUISettings::ringExternalDiamater
	int32_t ___ringExternalDiamater_14;
	// System.Boolean CurvedUI.CurvedUISettings::ringFlipVertical
	bool ___ringFlipVertical_15;
	// System.Int32 CurvedUI.CurvedUISettings::baseCircleSegments
	int32_t ___baseCircleSegments_16;
	// UnityEngine.Vector2 CurvedUI.CurvedUISettings::savedRectSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___savedRectSize_17;
	// System.Single CurvedUI.CurvedUISettings::savedRadius
	float ___savedRadius_18;
	// UnityEngine.Canvas CurvedUI.CurvedUISettings::myCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___myCanvas_19;
	// UnityEngine.RectTransform CurvedUI.CurvedUISettings::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_20;
};

// CurvedUI.CurvedUITMP
struct CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// CurvedUI.CurvedUIVertexEffect CurvedUI.CurvedUITMP::crvdVE
	CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* ___crvdVE_4;
	// TMPro.TextMeshProUGUI CurvedUI.CurvedUITMP::tmpText
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___tmpText_5;
	// CurvedUI.CurvedUISettings CurvedUI.CurvedUITMP::mySettings
	CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* ___mySettings_6;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> CurvedUI.CurvedUITMP::m_UIVerts
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_UIVerts_7;
	// UnityEngine.UIVertex CurvedUI.CurvedUITMP::m_tempVertex
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___m_tempVertex_8;
	// CurvedUI.CurvedUITMPSubmesh CurvedUI.CurvedUITMP::m_tempSubMsh
	CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* ___m_tempSubMsh_9;
	// UnityEngine.Vector2 CurvedUI.CurvedUITMP::savedSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___savedSize_10;
	// UnityEngine.Vector3 CurvedUI.CurvedUITMP::savedUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___savedUp_11;
	// UnityEngine.Vector3 CurvedUI.CurvedUITMP::savedPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___savedPos_12;
	// UnityEngine.Vector3 CurvedUI.CurvedUITMP::savedLocalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___savedLocalScale_13;
	// UnityEngine.Vector3 CurvedUI.CurvedUITMP::savedGlobalScale
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___savedGlobalScale_14;
	// System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh> CurvedUI.CurvedUITMP::subMeshes
	List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* ___subMeshes_15;
	// System.Boolean CurvedUI.CurvedUITMP::Dirty
	bool ___Dirty_16;
	// System.Boolean CurvedUI.CurvedUITMP::curvingRequired
	bool ___curvingRequired_17;
	// System.Boolean CurvedUI.CurvedUITMP::tesselationRequired
	bool ___tesselationRequired_18;
	// System.Boolean CurvedUI.CurvedUITMP::quitting
	bool ___quitting_19;
	// UnityEngine.Vector3[] CurvedUI.CurvedUITMP::vertices
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___vertices_20;
};

// CurvedUI.CurvedUITMPInputFieldCaret
struct CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// TMPro.TMP_InputField CurvedUI.CurvedUITMPInputFieldCaret::myField
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* ___myField_4;
	// UnityEngine.RectTransform CurvedUI.CurvedUITMPInputFieldCaret::myCaret
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___myCaret_5;
	// UnityEngine.Color CurvedUI.CurvedUITMPInputFieldCaret::origCaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___origCaretColor_6;
	// UnityEngine.Color CurvedUI.CurvedUITMPInputFieldCaret::origSelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___origSelectionColor_7;
	// System.Boolean CurvedUI.CurvedUITMPInputFieldCaret::selected
	bool ___selected_8;
	// System.Boolean CurvedUI.CurvedUITMPInputFieldCaret::selectingText
	bool ___selectingText_9;
};

// CurvedUI.CurvedUITMPSubmesh
struct CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.VertexHelper CurvedUI.CurvedUITMPSubmesh::vh
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh_4;
	// UnityEngine.Mesh CurvedUI.CurvedUITMPSubmesh::straightMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___straightMesh_5;
	// UnityEngine.Mesh CurvedUI.CurvedUITMPSubmesh::curvedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___curvedMesh_6;
	// CurvedUI.CurvedUIVertexEffect CurvedUI.CurvedUITMPSubmesh::crvdVE
	CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* ___crvdVE_7;
	// TMPro.TMP_SubMeshUI CurvedUI.CurvedUITMPSubmesh::TMPsub
	TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* ___TMPsub_8;
	// TMPro.TextMeshProUGUI CurvedUI.CurvedUITMPSubmesh::TMPtext
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___TMPtext_9;
};

// CurvedUI.CurvedUIViveController
struct CurvedUIViveController_t4D748E4AB476CDE20BDF09579CBD91E92D5C544E  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Graphic_4;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Mask
struct Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.RectTransform UnityEngine.UI.Mask::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_4;
	// System.Boolean UnityEngine.UI.Mask::m_ShowMaskGraphic
	bool ___m_ShowMaskGraphic_5;
	// UnityEngine.UI.Graphic UnityEngine.UI.Mask::m_Graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Graphic_6;
	// UnityEngine.Material UnityEngine.UI.Mask::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_7;
	// UnityEngine.Material UnityEngine.UI.Mask::m_UnmaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_UnmaskMaterial_8;
};

// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.RectangularVertexClipper UnityEngine.UI.RectMask2D::m_VertexClipper
	RectangularVertexClipper_t55234A392C423FCC9A016503B2D1763D52E6605A* ___m_VertexClipper_4;
	// UnityEngine.RectTransform UnityEngine.UI.RectMask2D::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_5;
	// System.Collections.Generic.HashSet`1<UnityEngine.UI.MaskableGraphic> UnityEngine.UI.RectMask2D::m_MaskableTargets
	HashSet_1_t7339109B23CAC1C7B695498778D7AC8166F04AF7* ___m_MaskableTargets_6;
	// System.Collections.Generic.HashSet`1<UnityEngine.UI.IClippable> UnityEngine.UI.RectMask2D::m_ClipTargets
	HashSet_1_tC2DD42EF8D44AC9B58E6A24D2D499C4A792620C9* ___m_ClipTargets_7;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ShouldRecalculateClipRects
	bool ___m_ShouldRecalculateClipRects_8;
	// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D> UnityEngine.UI.RectMask2D::m_Clippers
	List_1_t099FA1DB61217A855A3732B3DCA8E909BB24E1AB* ___m_Clippers_9;
	// UnityEngine.Rect UnityEngine.UI.RectMask2D::m_LastClipRectCanvasSpace
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_LastClipRectCanvasSpace_10;
	// System.Boolean UnityEngine.UI.RectMask2D::m_ForceClip
	bool ___m_ForceClip_11;
	// UnityEngine.Vector4 UnityEngine.UI.RectMask2D::m_Padding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_Padding_12;
	// UnityEngine.Vector2Int UnityEngine.UI.RectMask2D::m_Softness
	Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___m_Softness_13;
	// UnityEngine.Canvas UnityEngine.UI.RectMask2D::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// UnityEngine.Vector3[] UnityEngine.UI.RectMask2D::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_15;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// CurvedUI.CurvedUIVertexEffect
struct CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88  : public BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D
{
	// System.Boolean CurvedUI.CurvedUIVertexEffect::DoNotTesselate
	bool ___DoNotTesselate_5;
	// UnityEngine.Canvas CurvedUI.CurvedUIVertexEffect::myCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___myCanvas_6;
	// CurvedUI.CurvedUISettings CurvedUI.CurvedUIVertexEffect::mySettings
	CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* ___mySettings_7;
	// UnityEngine.UI.Graphic CurvedUI.CurvedUIVertexEffect::myGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___myGraphic_8;
	// UnityEngine.UI.Text CurvedUI.CurvedUIVertexEffect::myText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___myText_9;
	// TMPro.TextMeshProUGUI CurvedUI.CurvedUIVertexEffect::myTMP
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___myTMP_10;
	// CurvedUI.CurvedUITMPSubmesh CurvedUI.CurvedUIVertexEffect::myTMPSubMesh
	CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* ___myTMPSubMesh_11;
	// System.Boolean CurvedUI.CurvedUIVertexEffect::m_tesselationRequired
	bool ___m_tesselationRequired_12;
	// System.Boolean CurvedUI.CurvedUIVertexEffect::curvingRequired
	bool ___curvingRequired_13;
	// System.Boolean CurvedUI.CurvedUIVertexEffect::TransformMisaligned
	bool ___TransformMisaligned_14;
	// UnityEngine.Matrix4x4 CurvedUI.CurvedUIVertexEffect::CanvasToWorld
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___CanvasToWorld_15;
	// UnityEngine.Matrix4x4 CurvedUI.CurvedUIVertexEffect::CanvasToLocal
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___CanvasToLocal_16;
	// UnityEngine.Matrix4x4 CurvedUI.CurvedUIVertexEffect::MyToWorld
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___MyToWorld_17;
	// UnityEngine.Matrix4x4 CurvedUI.CurvedUIVertexEffect::MyToLocal
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___MyToLocal_18;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> CurvedUI.CurvedUIVertexEffect::m_tesselatedVerts
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_tesselatedVerts_19;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> CurvedUI.CurvedUIVertexEffect::m_curvedVerts
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_curvedVerts_20;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> CurvedUI.CurvedUIVertexEffect::m_vertsInQuads
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_vertsInQuads_21;
	// UnityEngine.UIVertex CurvedUI.CurvedUIVertexEffect::m_ret
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___m_ret_22;
	// UnityEngine.UIVertex[] CurvedUI.CurvedUIVertexEffect::m_quad
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_quad_23;
	// System.Single[] CurvedUI.CurvedUIVertexEffect::m_weights
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_weights_24;
	// UnityEngine.Vector3 CurvedUI.CurvedUIVertexEffect::savedPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___savedPos_25;
	// UnityEngine.Vector3 CurvedUI.CurvedUIVertexEffect::savedUp
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___savedUp_26;
	// UnityEngine.Vector2 CurvedUI.CurvedUIVertexEffect::savedRectSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___savedRectSize_27;
	// UnityEngine.Color CurvedUI.CurvedUIVertexEffect::savedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___savedColor_28;
	// UnityEngine.Vector4 CurvedUI.CurvedUIVertexEffect::savedTextUV0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___savedTextUV0_29;
	// System.Single CurvedUI.CurvedUIVertexEffect::savedFill
	float ___savedFill_30;
	// UnityEngine.Vector4 CurvedUI.CurvedUIVertexEffect::_uv0
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____uv0_31;
	// UnityEngine.Vector4 CurvedUI.CurvedUIVertexEffect::_uv1
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ____uv1_32;
	// UnityEngine.Vector3 CurvedUI.CurvedUIVertexEffect::_pos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ____pos_33;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// TMPro.TMP_InputField
struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard TMPro.TMP_InputField::m_SoftKeyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_SoftKeyboard_20;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_22;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextViewport
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextViewport_23;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextComponentRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextComponentRectMask_24;
	// UnityEngine.UI.RectMask2D TMPro.TMP_InputField::m_TextViewportRectMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_TextViewportRectMask_25;
	// UnityEngine.Rect TMPro.TMP_InputField::m_CachedViewportRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_CachedViewportRect_26;
	// TMPro.TMP_Text TMPro.TMP_InputField::m_TextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_TextComponent_27;
	// UnityEngine.RectTransform TMPro.TMP_InputField::m_TextComponentRectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_TextComponentRectTransform_28;
	// UnityEngine.UI.Graphic TMPro.TMP_InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_29;
	// UnityEngine.UI.Scrollbar TMPro.TMP_InputField::m_VerticalScrollbar
	Scrollbar_t7CDC9B956698D9385A11E4C12964CD51477072C3* ___m_VerticalScrollbar_30;
	// TMPro.TMP_ScrollbarEventHandler TMPro.TMP_InputField::m_VerticalScrollbarEventHandler
	TMP_ScrollbarEventHandler_t84C389ED6800977DAEA8C025E18C9F3321888F4D* ___m_VerticalScrollbarEventHandler_31;
	// System.Boolean TMPro.TMP_InputField::m_IsDrivenByLayoutComponents
	bool ___m_IsDrivenByLayoutComponents_32;
	// UnityEngine.UI.LayoutGroup TMPro.TMP_InputField::m_LayoutGroup
	LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE* ___m_LayoutGroup_33;
	// UnityEngine.EventSystems.IScrollHandler TMPro.TMP_InputField::m_IScrollHandlerParent
	RuntimeObject* ___m_IScrollHandlerParent_34;
	// System.Single TMPro.TMP_InputField::m_ScrollPosition
	float ___m_ScrollPosition_35;
	// System.Single TMPro.TMP_InputField::m_ScrollSensitivity
	float ___m_ScrollSensitivity_36;
	// TMPro.TMP_InputField/ContentType TMPro.TMP_InputField::m_ContentType
	int32_t ___m_ContentType_37;
	// TMPro.TMP_InputField/InputType TMPro.TMP_InputField::m_InputType
	int32_t ___m_InputType_38;
	// System.Char TMPro.TMP_InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_39;
	// UnityEngine.TouchScreenKeyboardType TMPro.TMP_InputField::m_KeyboardType
	int32_t ___m_KeyboardType_40;
	// TMPro.TMP_InputField/LineType TMPro.TMP_InputField::m_LineType
	int32_t ___m_LineType_41;
	// System.Boolean TMPro.TMP_InputField::m_HideMobileInput
	bool ___m_HideMobileInput_42;
	// System.Boolean TMPro.TMP_InputField::m_HideSoftKeyboard
	bool ___m_HideSoftKeyboard_43;
	// TMPro.TMP_InputField/CharacterValidation TMPro.TMP_InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_44;
	// System.String TMPro.TMP_InputField::m_RegexValue
	String_t* ___m_RegexValue_45;
	// System.Single TMPro.TMP_InputField::m_GlobalPointSize
	float ___m_GlobalPointSize_46;
	// System.Int32 TMPro.TMP_InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_47;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnEndEdit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnEndEdit_48;
	// TMPro.TMP_InputField/SubmitEvent TMPro.TMP_InputField::m_OnSubmit
	SubmitEvent_tF7E2843B6A79D94B8EEEA259707F77BD1773B500* ___m_OnSubmit_49;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnSelect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnSelect_50;
	// TMPro.TMP_InputField/SelectionEvent TMPro.TMP_InputField::m_OnDeselect
	SelectionEvent_t8FC75B869F70C9F0BF13390AD0237AD310511119* ___m_OnDeselect_51;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnTextSelection_52;
	// TMPro.TMP_InputField/TextSelectionEvent TMPro.TMP_InputField::m_OnEndTextSelection
	TextSelectionEvent_t6C496DAA6DAF01754C27C58A94A5FBA562BA9401* ___m_OnEndTextSelection_53;
	// TMPro.TMP_InputField/OnChangeEvent TMPro.TMP_InputField::m_OnValueChanged
	OnChangeEvent_tDBB13012ABF81899E4DFDD82258EB7E9BB7A9F1D* ___m_OnValueChanged_54;
	// TMPro.TMP_InputField/TouchScreenKeyboardEvent TMPro.TMP_InputField::m_OnTouchScreenKeyboardStatusChanged
	TouchScreenKeyboardEvent_tB9BEBEF5D6F2B52547EF3861FF437AC25BC06AF1* ___m_OnTouchScreenKeyboardStatusChanged_55;
	// TMPro.TMP_InputField/OnValidateInput TMPro.TMP_InputField::m_OnValidateInput
	OnValidateInput_t88ECDC5C12A807AF2A5761369563B0FAA6A25530* ___m_OnValidateInput_56;
	// UnityEngine.Color TMPro.TMP_InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_57;
	// System.Boolean TMPro.TMP_InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_58;
	// UnityEngine.Color TMPro.TMP_InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_59;
	// System.String TMPro.TMP_InputField::m_Text
	String_t* ___m_Text_60;
	// System.Single TMPro.TMP_InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_61;
	// System.Int32 TMPro.TMP_InputField::m_CaretWidth
	int32_t ___m_CaretWidth_62;
	// System.Boolean TMPro.TMP_InputField::m_ReadOnly
	bool ___m_ReadOnly_63;
	// System.Boolean TMPro.TMP_InputField::m_RichText
	bool ___m_RichText_64;
	// System.Int32 TMPro.TMP_InputField::m_StringPosition
	int32_t ___m_StringPosition_65;
	// System.Int32 TMPro.TMP_InputField::m_StringSelectPosition
	int32_t ___m_StringSelectPosition_66;
	// System.Int32 TMPro.TMP_InputField::m_CaretPosition
	int32_t ___m_CaretPosition_67;
	// System.Int32 TMPro.TMP_InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_68;
	// UnityEngine.RectTransform TMPro.TMP_InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_69;
	// UnityEngine.UIVertex[] TMPro.TMP_InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_70;
	// UnityEngine.CanvasRenderer TMPro.TMP_InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_71;
	// UnityEngine.Vector2 TMPro.TMP_InputField::m_LastPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastPosition_72;
	// UnityEngine.Mesh TMPro.TMP_InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_73;
	// System.Boolean TMPro.TMP_InputField::m_AllowInput
	bool ___m_AllowInput_74;
	// System.Boolean TMPro.TMP_InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_75;
	// System.Boolean TMPro.TMP_InputField::m_UpdateDrag
	bool ___m_UpdateDrag_76;
	// System.Boolean TMPro.TMP_InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_77;
	// System.Boolean TMPro.TMP_InputField::m_CaretVisible
	bool ___m_CaretVisible_80;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_81;
	// System.Single TMPro.TMP_InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_82;
	// UnityEngine.Coroutine TMPro.TMP_InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_83;
	// System.String TMPro.TMP_InputField::m_OriginalText
	String_t* ___m_OriginalText_84;
	// System.Boolean TMPro.TMP_InputField::m_WasCanceled
	bool ___m_WasCanceled_85;
	// System.Boolean TMPro.TMP_InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_86;
	// UnityEngine.WaitForSecondsRealtime TMPro.TMP_InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_87;
	// System.Boolean TMPro.TMP_InputField::m_PreventCallback
	bool ___m_PreventCallback_88;
	// System.Boolean TMPro.TMP_InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_89;
	// System.Boolean TMPro.TMP_InputField::m_IsTextComponentUpdateRequired
	bool ___m_IsTextComponentUpdateRequired_90;
	// System.Boolean TMPro.TMP_InputField::m_isLastKeyBackspace
	bool ___m_isLastKeyBackspace_91;
	// System.Single TMPro.TMP_InputField::m_PointerDownClickStartTime
	float ___m_PointerDownClickStartTime_92;
	// System.Single TMPro.TMP_InputField::m_KeyDownStartTime
	float ___m_KeyDownStartTime_93;
	// System.Single TMPro.TMP_InputField::m_DoubleClickDelay
	float ___m_DoubleClickDelay_94;
	// System.Boolean TMPro.TMP_InputField::m_IsCompositionActive
	bool ___m_IsCompositionActive_96;
	// System.Boolean TMPro.TMP_InputField::m_ShouldUpdateIMEWindowPosition
	bool ___m_ShouldUpdateIMEWindowPosition_97;
	// System.Int32 TMPro.TMP_InputField::m_PreviousIMEInsertionLine
	int32_t ___m_PreviousIMEInsertionLine_98;
	// TMPro.TMP_FontAsset TMPro.TMP_InputField::m_GlobalFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_GlobalFontAsset_99;
	// System.Boolean TMPro.TMP_InputField::m_OnFocusSelectAll
	bool ___m_OnFocusSelectAll_100;
	// System.Boolean TMPro.TMP_InputField::m_isSelectAll
	bool ___m_isSelectAll_101;
	// System.Boolean TMPro.TMP_InputField::m_ResetOnDeActivation
	bool ___m_ResetOnDeActivation_102;
	// System.Boolean TMPro.TMP_InputField::m_SelectionStillActive
	bool ___m_SelectionStillActive_103;
	// System.Boolean TMPro.TMP_InputField::m_ReleaseSelection
	bool ___m_ReleaseSelection_104;
	// UnityEngine.GameObject TMPro.TMP_InputField::m_PreviouslySelectedObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_PreviouslySelectedObject_105;
	// System.Boolean TMPro.TMP_InputField::m_RestoreOriginalTextOnEscape
	bool ___m_RestoreOriginalTextOnEscape_106;
	// System.Boolean TMPro.TMP_InputField::m_isRichTextEditingAllowed
	bool ___m_isRichTextEditingAllowed_107;
	// System.Int32 TMPro.TMP_InputField::m_LineLimit
	int32_t ___m_LineLimit_108;
	// TMPro.TMP_InputValidator TMPro.TMP_InputField::m_InputValidator
	TMP_InputValidator_t3429AF61284AE19180C3FB81C0C7D2F90165EA98* ___m_InputValidator_109;
	// System.Boolean TMPro.TMP_InputField::m_isSelected
	bool ___m_isSelected_110;
	// System.Boolean TMPro.TMP_InputField::m_IsStringPositionDirty
	bool ___m_IsStringPositionDirty_111;
	// System.Boolean TMPro.TMP_InputField::m_IsCaretPositionDirty
	bool ___m_IsCaretPositionDirty_112;
	// System.Boolean TMPro.TMP_InputField::m_forceRectTransformAdjustment
	bool ___m_forceRectTransformAdjustment_113;
	// UnityEngine.Event TMPro.TMP_InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_114;
};

struct TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_StaticFields
{
	// System.Char[] TMPro.TMP_InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// TMPro.TMP_SubMeshUI
struct TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// TMPro.TMP_FontAsset TMPro.TMP_SubMeshUI::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_36;
	// TMPro.TMP_SpriteAsset TMPro.TMP_SubMeshUI::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_37;
	// UnityEngine.Material TMPro.TMP_SubMeshUI::m_material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_material_38;
	// UnityEngine.Material TMPro.TMP_SubMeshUI::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_39;
	// UnityEngine.Material TMPro.TMP_SubMeshUI::m_fallbackMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fallbackMaterial_40;
	// UnityEngine.Material TMPro.TMP_SubMeshUI::m_fallbackSourceMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fallbackSourceMaterial_41;
	// System.Boolean TMPro.TMP_SubMeshUI::m_isDefaultMaterial
	bool ___m_isDefaultMaterial_42;
	// System.Single TMPro.TMP_SubMeshUI::m_padding
	float ___m_padding_43;
	// UnityEngine.Mesh TMPro.TMP_SubMeshUI::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_44;
	// TMPro.TextMeshProUGUI TMPro.TMP_SubMeshUI::m_TextComponent
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* ___m_TextComponent_45;
	// System.Boolean TMPro.TMP_SubMeshUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_46;
	// System.Boolean TMPro.TMP_SubMeshUI::m_materialDirty
	bool ___m_materialDirty_47;
	// System.Int32 TMPro.TMP_SubMeshUI::m_materialReferenceIndex
	int32_t ___m_materialReferenceIndex_48;
	// UnityEngine.Transform TMPro.TMP_SubMeshUI::m_RootCanvasTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_RootCanvasTransform_49;
};

// TMPro.TMP_Text
struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// System.String TMPro.TMP_Text::m_text
	String_t* ___m_text_36;
	// System.Boolean TMPro.TMP_Text::m_IsTextBackingStringDirty
	bool ___m_IsTextBackingStringDirty_37;
	// TMPro.ITextPreprocessor TMPro.TMP_Text::m_TextPreprocessor
	RuntimeObject* ___m_TextPreprocessor_38;
	// System.Boolean TMPro.TMP_Text::m_isRightToLeft
	bool ___m_isRightToLeft_39;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_fontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_fontAsset_40;
	// TMPro.TMP_FontAsset TMPro.TMP_Text::m_currentFontAsset
	TMP_FontAsset_t923BF2F78D7C5AC36376E168A1193B7CB4855160* ___m_currentFontAsset_41;
	// System.Boolean TMPro.TMP_Text::m_isSDFShader
	bool ___m_isSDFShader_42;
	// UnityEngine.Material TMPro.TMP_Text::m_sharedMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_sharedMaterial_43;
	// UnityEngine.Material TMPro.TMP_Text::m_currentMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_currentMaterial_44;
	// System.Int32 TMPro.TMP_Text::m_currentMaterialIndex
	int32_t ___m_currentMaterialIndex_48;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontSharedMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontSharedMaterials_49;
	// UnityEngine.Material TMPro.TMP_Text::m_fontMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_fontMaterial_50;
	// UnityEngine.Material[] TMPro.TMP_Text::m_fontMaterials
	MaterialU5BU5D_t2B1D11C42DB07A4400C0535F92DBB87A2E346D3D* ___m_fontMaterials_51;
	// System.Boolean TMPro.TMP_Text::m_isMaterialDirty
	bool ___m_isMaterialDirty_52;
	// UnityEngine.Color32 TMPro.TMP_Text::m_fontColor32
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_fontColor32_53;
	// UnityEngine.Color TMPro.TMP_Text::m_fontColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_fontColor_54;
	// UnityEngine.Color32 TMPro.TMP_Text::m_underlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_underlineColor_56;
	// UnityEngine.Color32 TMPro.TMP_Text::m_strikethroughColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_strikethroughColor_57;
	// System.Boolean TMPro.TMP_Text::m_enableVertexGradient
	bool ___m_enableVertexGradient_58;
	// TMPro.ColorMode TMPro.TMP_Text::m_colorMode
	int32_t ___m_colorMode_59;
	// TMPro.VertexGradient TMPro.TMP_Text::m_fontColorGradient
	VertexGradient_t2C057B53C0EA6E987C2B7BAB0305E686DA1C9A8F ___m_fontColorGradient_60;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_fontColorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_fontColorGradientPreset_61;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_spriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_spriteAsset_62;
	// System.Boolean TMPro.TMP_Text::m_tintAllSprites
	bool ___m_tintAllSprites_63;
	// System.Boolean TMPro.TMP_Text::m_tintSprite
	bool ___m_tintSprite_64;
	// UnityEngine.Color32 TMPro.TMP_Text::m_spriteColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_spriteColor_65;
	// TMPro.TMP_StyleSheet TMPro.TMP_Text::m_StyleSheet
	TMP_StyleSheet_t70C71699F5CB2D855C361DBB78A44C901236C859* ___m_StyleSheet_66;
	// TMPro.TMP_Style TMPro.TMP_Text::m_TextStyle
	TMP_Style_tA9E5B1B35EBFE24EF980CEA03251B638282E120C* ___m_TextStyle_67;
	// System.Int32 TMPro.TMP_Text::m_TextStyleHashCode
	int32_t ___m_TextStyleHashCode_68;
	// System.Boolean TMPro.TMP_Text::m_overrideHtmlColors
	bool ___m_overrideHtmlColors_69;
	// UnityEngine.Color32 TMPro.TMP_Text::m_faceColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_faceColor_70;
	// UnityEngine.Color32 TMPro.TMP_Text::m_outlineColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_outlineColor_71;
	// System.Single TMPro.TMP_Text::m_outlineWidth
	float ___m_outlineWidth_72;
	// System.Single TMPro.TMP_Text::m_fontSize
	float ___m_fontSize_73;
	// System.Single TMPro.TMP_Text::m_currentFontSize
	float ___m_currentFontSize_74;
	// System.Single TMPro.TMP_Text::m_fontSizeBase
	float ___m_fontSizeBase_75;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_sizeStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_sizeStack_76;
	// TMPro.FontWeight TMPro.TMP_Text::m_fontWeight
	int32_t ___m_fontWeight_77;
	// TMPro.FontWeight TMPro.TMP_Text::m_FontWeightInternal
	int32_t ___m_FontWeightInternal_78;
	// TMPro.TMP_TextProcessingStack`1<TMPro.FontWeight> TMPro.TMP_Text::m_FontWeightStack
	TMP_TextProcessingStack_1_tA5C8CED87DD9E73F6359E23B334FFB5B6F813FD4 ___m_FontWeightStack_79;
	// System.Boolean TMPro.TMP_Text::m_enableAutoSizing
	bool ___m_enableAutoSizing_80;
	// System.Single TMPro.TMP_Text::m_maxFontSize
	float ___m_maxFontSize_81;
	// System.Single TMPro.TMP_Text::m_minFontSize
	float ___m_minFontSize_82;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeIterationCount
	int32_t ___m_AutoSizeIterationCount_83;
	// System.Int32 TMPro.TMP_Text::m_AutoSizeMaxIterationCount
	int32_t ___m_AutoSizeMaxIterationCount_84;
	// System.Boolean TMPro.TMP_Text::m_IsAutoSizePointSizeSet
	bool ___m_IsAutoSizePointSizeSet_85;
	// System.Single TMPro.TMP_Text::m_fontSizeMin
	float ___m_fontSizeMin_86;
	// System.Single TMPro.TMP_Text::m_fontSizeMax
	float ___m_fontSizeMax_87;
	// TMPro.FontStyles TMPro.TMP_Text::m_fontStyle
	int32_t ___m_fontStyle_88;
	// TMPro.FontStyles TMPro.TMP_Text::m_FontStyleInternal
	int32_t ___m_FontStyleInternal_89;
	// TMPro.TMP_FontStyleStack TMPro.TMP_Text::m_fontStyleStack
	TMP_FontStyleStack_t52885F172FADBC21346C835B5302167BDA8020DC ___m_fontStyleStack_90;
	// System.Boolean TMPro.TMP_Text::m_isUsingBold
	bool ___m_isUsingBold_91;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_HorizontalAlignment
	int32_t ___m_HorizontalAlignment_92;
	// TMPro.VerticalAlignmentOptions TMPro.TMP_Text::m_VerticalAlignment
	int32_t ___m_VerticalAlignment_93;
	// TMPro.TextAlignmentOptions TMPro.TMP_Text::m_textAlignment
	int32_t ___m_textAlignment_94;
	// TMPro.HorizontalAlignmentOptions TMPro.TMP_Text::m_lineJustification
	int32_t ___m_lineJustification_95;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HorizontalAlignmentOptions> TMPro.TMP_Text::m_lineJustificationStack
	TMP_TextProcessingStack_1_t243EA1B5D7FD2295D6533B953F0BBE8F52EFB8A0 ___m_lineJustificationStack_96;
	// UnityEngine.Vector3[] TMPro.TMP_Text::m_textContainerLocalCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_textContainerLocalCorners_97;
	// System.Single TMPro.TMP_Text::m_characterSpacing
	float ___m_characterSpacing_98;
	// System.Single TMPro.TMP_Text::m_cSpacing
	float ___m_cSpacing_99;
	// System.Single TMPro.TMP_Text::m_monoSpacing
	float ___m_monoSpacing_100;
	// System.Single TMPro.TMP_Text::m_wordSpacing
	float ___m_wordSpacing_101;
	// System.Single TMPro.TMP_Text::m_lineSpacing
	float ___m_lineSpacing_102;
	// System.Single TMPro.TMP_Text::m_lineSpacingDelta
	float ___m_lineSpacingDelta_103;
	// System.Single TMPro.TMP_Text::m_lineHeight
	float ___m_lineHeight_104;
	// System.Boolean TMPro.TMP_Text::m_IsDrivenLineSpacing
	bool ___m_IsDrivenLineSpacing_105;
	// System.Single TMPro.TMP_Text::m_lineSpacingMax
	float ___m_lineSpacingMax_106;
	// System.Single TMPro.TMP_Text::m_paragraphSpacing
	float ___m_paragraphSpacing_107;
	// System.Single TMPro.TMP_Text::m_charWidthMaxAdj
	float ___m_charWidthMaxAdj_108;
	// System.Single TMPro.TMP_Text::m_charWidthAdjDelta
	float ___m_charWidthAdjDelta_109;
	// System.Boolean TMPro.TMP_Text::m_enableWordWrapping
	bool ___m_enableWordWrapping_110;
	// System.Boolean TMPro.TMP_Text::m_isCharacterWrappingEnabled
	bool ___m_isCharacterWrappingEnabled_111;
	// System.Boolean TMPro.TMP_Text::m_isNonBreakingSpace
	bool ___m_isNonBreakingSpace_112;
	// System.Boolean TMPro.TMP_Text::m_isIgnoringAlignment
	bool ___m_isIgnoringAlignment_113;
	// System.Single TMPro.TMP_Text::m_wordWrappingRatios
	float ___m_wordWrappingRatios_114;
	// TMPro.TextOverflowModes TMPro.TMP_Text::m_overflowMode
	int32_t ___m_overflowMode_115;
	// System.Int32 TMPro.TMP_Text::m_firstOverflowCharacterIndex
	int32_t ___m_firstOverflowCharacterIndex_116;
	// TMPro.TMP_Text TMPro.TMP_Text::m_linkedTextComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___m_linkedTextComponent_117;
	// TMPro.TMP_Text TMPro.TMP_Text::parentLinkedComponent
	TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* ___parentLinkedComponent_118;
	// System.Boolean TMPro.TMP_Text::m_isTextTruncated
	bool ___m_isTextTruncated_119;
	// System.Boolean TMPro.TMP_Text::m_enableKerning
	bool ___m_enableKerning_120;
	// System.Single TMPro.TMP_Text::m_GlyphHorizontalAdvanceAdjustment
	float ___m_GlyphHorizontalAdvanceAdjustment_121;
	// System.Boolean TMPro.TMP_Text::m_enableExtraPadding
	bool ___m_enableExtraPadding_122;
	// System.Boolean TMPro.TMP_Text::checkPaddingRequired
	bool ___checkPaddingRequired_123;
	// System.Boolean TMPro.TMP_Text::m_isRichText
	bool ___m_isRichText_124;
	// System.Boolean TMPro.TMP_Text::m_parseCtrlCharacters
	bool ___m_parseCtrlCharacters_125;
	// System.Boolean TMPro.TMP_Text::m_isOverlay
	bool ___m_isOverlay_126;
	// System.Boolean TMPro.TMP_Text::m_isOrthographic
	bool ___m_isOrthographic_127;
	// System.Boolean TMPro.TMP_Text::m_isCullingEnabled
	bool ___m_isCullingEnabled_128;
	// System.Boolean TMPro.TMP_Text::m_isMaskingEnabled
	bool ___m_isMaskingEnabled_129;
	// System.Boolean TMPro.TMP_Text::isMaskUpdateRequired
	bool ___isMaskUpdateRequired_130;
	// System.Boolean TMPro.TMP_Text::m_ignoreCulling
	bool ___m_ignoreCulling_131;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_horizontalMapping
	int32_t ___m_horizontalMapping_132;
	// TMPro.TextureMappingOptions TMPro.TMP_Text::m_verticalMapping
	int32_t ___m_verticalMapping_133;
	// System.Single TMPro.TMP_Text::m_uvLineOffset
	float ___m_uvLineOffset_134;
	// TMPro.TextRenderFlags TMPro.TMP_Text::m_renderMode
	int32_t ___m_renderMode_135;
	// TMPro.VertexSortingOrder TMPro.TMP_Text::m_geometrySortingOrder
	int32_t ___m_geometrySortingOrder_136;
	// System.Boolean TMPro.TMP_Text::m_IsTextObjectScaleStatic
	bool ___m_IsTextObjectScaleStatic_137;
	// System.Boolean TMPro.TMP_Text::m_VertexBufferAutoSizeReduction
	bool ___m_VertexBufferAutoSizeReduction_138;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacter
	int32_t ___m_firstVisibleCharacter_139;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleCharacters
	int32_t ___m_maxVisibleCharacters_140;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleWords
	int32_t ___m_maxVisibleWords_141;
	// System.Int32 TMPro.TMP_Text::m_maxVisibleLines
	int32_t ___m_maxVisibleLines_142;
	// System.Boolean TMPro.TMP_Text::m_useMaxVisibleDescender
	bool ___m_useMaxVisibleDescender_143;
	// System.Int32 TMPro.TMP_Text::m_pageToDisplay
	int32_t ___m_pageToDisplay_144;
	// System.Boolean TMPro.TMP_Text::m_isNewPage
	bool ___m_isNewPage_145;
	// UnityEngine.Vector4 TMPro.TMP_Text::m_margin
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_margin_146;
	// System.Single TMPro.TMP_Text::m_marginLeft
	float ___m_marginLeft_147;
	// System.Single TMPro.TMP_Text::m_marginRight
	float ___m_marginRight_148;
	// System.Single TMPro.TMP_Text::m_marginWidth
	float ___m_marginWidth_149;
	// System.Single TMPro.TMP_Text::m_marginHeight
	float ___m_marginHeight_150;
	// System.Single TMPro.TMP_Text::m_width
	float ___m_width_151;
	// TMPro.TMP_TextInfo TMPro.TMP_Text::m_textInfo
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* ___m_textInfo_152;
	// System.Boolean TMPro.TMP_Text::m_havePropertiesChanged
	bool ___m_havePropertiesChanged_153;
	// System.Boolean TMPro.TMP_Text::m_isUsingLegacyAnimationComponent
	bool ___m_isUsingLegacyAnimationComponent_154;
	// UnityEngine.Transform TMPro.TMP_Text::m_transform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___m_transform_155;
	// UnityEngine.RectTransform TMPro.TMP_Text::m_rectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_rectTransform_156;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousRectTransformSize
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousRectTransformSize_157;
	// UnityEngine.Vector2 TMPro.TMP_Text::m_PreviousPivotPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_PreviousPivotPosition_158;
	// System.Boolean TMPro.TMP_Text::<autoSizeTextContainer>k__BackingField
	bool ___U3CautoSizeTextContainerU3Ek__BackingField_159;
	// System.Boolean TMPro.TMP_Text::m_autoSizeTextContainer
	bool ___m_autoSizeTextContainer_160;
	// UnityEngine.Mesh TMPro.TMP_Text::m_mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_mesh_161;
	// System.Boolean TMPro.TMP_Text::m_isVolumetricText
	bool ___m_isVolumetricText_162;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TMP_Text::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_165;
	// TMPro.TMP_SpriteAnimator TMPro.TMP_Text::m_spriteAnimator
	TMP_SpriteAnimator_t2E0F016A61CA343E3222FF51E7CF0E53F9F256E4* ___m_spriteAnimator_166;
	// System.Single TMPro.TMP_Text::m_flexibleHeight
	float ___m_flexibleHeight_167;
	// System.Single TMPro.TMP_Text::m_flexibleWidth
	float ___m_flexibleWidth_168;
	// System.Single TMPro.TMP_Text::m_minWidth
	float ___m_minWidth_169;
	// System.Single TMPro.TMP_Text::m_minHeight
	float ___m_minHeight_170;
	// System.Single TMPro.TMP_Text::m_maxWidth
	float ___m_maxWidth_171;
	// System.Single TMPro.TMP_Text::m_maxHeight
	float ___m_maxHeight_172;
	// UnityEngine.UI.LayoutElement TMPro.TMP_Text::m_LayoutElement
	LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A* ___m_LayoutElement_173;
	// System.Single TMPro.TMP_Text::m_preferredWidth
	float ___m_preferredWidth_174;
	// System.Single TMPro.TMP_Text::m_renderedWidth
	float ___m_renderedWidth_175;
	// System.Boolean TMPro.TMP_Text::m_isPreferredWidthDirty
	bool ___m_isPreferredWidthDirty_176;
	// System.Single TMPro.TMP_Text::m_preferredHeight
	float ___m_preferredHeight_177;
	// System.Single TMPro.TMP_Text::m_renderedHeight
	float ___m_renderedHeight_178;
	// System.Boolean TMPro.TMP_Text::m_isPreferredHeightDirty
	bool ___m_isPreferredHeightDirty_179;
	// System.Boolean TMPro.TMP_Text::m_isCalculatingPreferredValues
	bool ___m_isCalculatingPreferredValues_180;
	// System.Int32 TMPro.TMP_Text::m_layoutPriority
	int32_t ___m_layoutPriority_181;
	// System.Boolean TMPro.TMP_Text::m_isLayoutDirty
	bool ___m_isLayoutDirty_182;
	// System.Boolean TMPro.TMP_Text::m_isAwake
	bool ___m_isAwake_183;
	// System.Boolean TMPro.TMP_Text::m_isWaitingOnResourceLoad
	bool ___m_isWaitingOnResourceLoad_184;
	// TMPro.TMP_Text/TextInputSources TMPro.TMP_Text::m_inputSource
	int32_t ___m_inputSource_185;
	// System.Single TMPro.TMP_Text::m_fontScaleMultiplier
	float ___m_fontScaleMultiplier_186;
	// System.Single TMPro.TMP_Text::tag_LineIndent
	float ___tag_LineIndent_190;
	// System.Single TMPro.TMP_Text::tag_Indent
	float ___tag_Indent_191;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_indentStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_indentStack_192;
	// System.Boolean TMPro.TMP_Text::tag_NoParsing
	bool ___tag_NoParsing_193;
	// System.Boolean TMPro.TMP_Text::m_isParsingText
	bool ___m_isParsingText_194;
	// UnityEngine.Matrix4x4 TMPro.TMP_Text::m_FXMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_FXMatrix_195;
	// System.Boolean TMPro.TMP_Text::m_isFXMatrixSet
	bool ___m_isFXMatrixSet_196;
	// TMPro.TMP_Text/UnicodeChar[] TMPro.TMP_Text::m_TextProcessingArray
	UnicodeCharU5BU5D_t67F27D09F8EB28D2C42DFF16FE60054F157012F5* ___m_TextProcessingArray_197;
	// System.Int32 TMPro.TMP_Text::m_InternalTextProcessingArraySize
	int32_t ___m_InternalTextProcessingArraySize_198;
	// TMPro.TMP_CharacterInfo[] TMPro.TMP_Text::m_internalCharacterInfo
	TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* ___m_internalCharacterInfo_199;
	// System.Int32 TMPro.TMP_Text::m_totalCharacterCount
	int32_t ___m_totalCharacterCount_200;
	// System.Int32 TMPro.TMP_Text::m_characterCount
	int32_t ___m_characterCount_207;
	// System.Int32 TMPro.TMP_Text::m_firstCharacterOfLine
	int32_t ___m_firstCharacterOfLine_208;
	// System.Int32 TMPro.TMP_Text::m_firstVisibleCharacterOfLine
	int32_t ___m_firstVisibleCharacterOfLine_209;
	// System.Int32 TMPro.TMP_Text::m_lastCharacterOfLine
	int32_t ___m_lastCharacterOfLine_210;
	// System.Int32 TMPro.TMP_Text::m_lastVisibleCharacterOfLine
	int32_t ___m_lastVisibleCharacterOfLine_211;
	// System.Int32 TMPro.TMP_Text::m_lineNumber
	int32_t ___m_lineNumber_212;
	// System.Int32 TMPro.TMP_Text::m_lineVisibleCharacterCount
	int32_t ___m_lineVisibleCharacterCount_213;
	// System.Int32 TMPro.TMP_Text::m_pageNumber
	int32_t ___m_pageNumber_214;
	// System.Single TMPro.TMP_Text::m_PageAscender
	float ___m_PageAscender_215;
	// System.Single TMPro.TMP_Text::m_maxTextAscender
	float ___m_maxTextAscender_216;
	// System.Single TMPro.TMP_Text::m_maxCapHeight
	float ___m_maxCapHeight_217;
	// System.Single TMPro.TMP_Text::m_ElementAscender
	float ___m_ElementAscender_218;
	// System.Single TMPro.TMP_Text::m_ElementDescender
	float ___m_ElementDescender_219;
	// System.Single TMPro.TMP_Text::m_maxLineAscender
	float ___m_maxLineAscender_220;
	// System.Single TMPro.TMP_Text::m_maxLineDescender
	float ___m_maxLineDescender_221;
	// System.Single TMPro.TMP_Text::m_startOfLineAscender
	float ___m_startOfLineAscender_222;
	// System.Single TMPro.TMP_Text::m_startOfLineDescender
	float ___m_startOfLineDescender_223;
	// System.Single TMPro.TMP_Text::m_lineOffset
	float ___m_lineOffset_224;
	// TMPro.Extents TMPro.TMP_Text::m_meshExtents
	Extents_tA2D2F95811D0A18CB7AC3570D2D8F8CD3AF4C4A8 ___m_meshExtents_225;
	// UnityEngine.Color32 TMPro.TMP_Text::m_htmlColor
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___m_htmlColor_226;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_colorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_colorStack_227;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_underlineColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_underlineColorStack_228;
	// TMPro.TMP_TextProcessingStack`1<UnityEngine.Color32> TMPro.TMP_Text::m_strikethroughColorStack
	TMP_TextProcessingStack_1_tF2CD5BE59E5EB22EA9E3EE3043A004EA918C4BB3 ___m_strikethroughColorStack_229;
	// TMPro.TMP_TextProcessingStack`1<TMPro.HighlightState> TMPro.TMP_Text::m_HighlightStateStack
	TMP_TextProcessingStack_1_t57AECDCC936A7FF1D6CF66CA11560B28A675648D ___m_HighlightStateStack_230;
	// TMPro.TMP_ColorGradient TMPro.TMP_Text::m_colorGradientPreset
	TMP_ColorGradient_t17B51752B4E9499A1FF7D875DCEC1D15A0F4AEBB* ___m_colorGradientPreset_231;
	// TMPro.TMP_TextProcessingStack`1<TMPro.TMP_ColorGradient> TMPro.TMP_Text::m_colorGradientStack
	TMP_TextProcessingStack_1_tC8FAEB17246D3B171EFD11165A5761AE39B40D0C ___m_colorGradientStack_232;
	// System.Boolean TMPro.TMP_Text::m_colorGradientPresetIsTinted
	bool ___m_colorGradientPresetIsTinted_233;
	// System.Single TMPro.TMP_Text::m_tabSpacing
	float ___m_tabSpacing_234;
	// System.Single TMPro.TMP_Text::m_spacing
	float ___m_spacing_235;
	// TMPro.TMP_TextProcessingStack`1<System.Int32>[] TMPro.TMP_Text::m_TextStyleStacks
	TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2* ___m_TextStyleStacks_236;
	// System.Int32 TMPro.TMP_Text::m_TextStyleStackDepth
	int32_t ___m_TextStyleStackDepth_237;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_ItalicAngleStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_ItalicAngleStack_238;
	// System.Int32 TMPro.TMP_Text::m_ItalicAngle
	int32_t ___m_ItalicAngle_239;
	// TMPro.TMP_TextProcessingStack`1<System.Int32> TMPro.TMP_Text::m_actionStack
	TMP_TextProcessingStack_1_tFBA719426D68CE1F2B5849D97AF5E5D65846290C ___m_actionStack_240;
	// System.Single TMPro.TMP_Text::m_padding
	float ___m_padding_241;
	// System.Single TMPro.TMP_Text::m_baselineOffset
	float ___m_baselineOffset_242;
	// TMPro.TMP_TextProcessingStack`1<System.Single> TMPro.TMP_Text::m_baselineOffsetStack
	TMP_TextProcessingStack_1_t138EC06BE7F101AA0A3C8D2DC951E55AACE085E9 ___m_baselineOffsetStack_243;
	// System.Single TMPro.TMP_Text::m_xAdvance
	float ___m_xAdvance_244;
	// TMPro.TMP_TextElementType TMPro.TMP_Text::m_textElementType
	int32_t ___m_textElementType_245;
	// TMPro.TMP_TextElement TMPro.TMP_Text::m_cached_TextElement
	TMP_TextElement_t262A55214F712D4274485ABE5676E5254B84D0A5* ___m_cached_TextElement_246;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Ellipsis
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Ellipsis_247;
	// TMPro.TMP_Text/SpecialCharacter TMPro.TMP_Text::m_Underline
	SpecialCharacter_t6C1DBE8C490706D1620899BAB7F0B8091AD26777 ___m_Underline_248;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_defaultSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_defaultSpriteAsset_249;
	// TMPro.TMP_SpriteAsset TMPro.TMP_Text::m_currentSpriteAsset
	TMP_SpriteAsset_t81F779E6F705CE190DC0D1F93A954CB8B1774B39* ___m_currentSpriteAsset_250;
	// System.Int32 TMPro.TMP_Text::m_spriteCount
	int32_t ___m_spriteCount_251;
	// System.Int32 TMPro.TMP_Text::m_spriteIndex
	int32_t ___m_spriteIndex_252;
	// System.Int32 TMPro.TMP_Text::m_spriteAnimationID
	int32_t ___m_spriteAnimationID_253;
	// System.Boolean TMPro.TMP_Text::m_ignoreActiveState
	bool ___m_ignoreActiveState_256;
	// TMPro.TMP_Text/TextBackingContainer TMPro.TMP_Text::m_TextBackingArray
	TextBackingContainer_t33D1CE628E7B26C45EDAC1D87BEF2DD22A5C6361 ___m_TextBackingArray_257;
	// System.Decimal[] TMPro.TMP_Text::k_Power
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___k_Power_258;
};

struct TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9_StaticFields
{
	// TMPro.MaterialReference[] TMPro.TMP_Text::m_materialReferences
	MaterialReferenceU5BU5D_t7491D335AB3E3E13CE9C0F5E931F396F6A02E1F2* ___m_materialReferences_45;
	// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> TMPro.TMP_Text::m_materialReferenceIndexLookup
	Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180* ___m_materialReferenceIndexLookup_46;
	// TMPro.TMP_TextProcessingStack`1<TMPro.MaterialReference> TMPro.TMP_Text::m_materialReferenceStack
	TMP_TextProcessingStack_1_tB03E08F69415B281A5A81138F09E49EE58402DF9 ___m_materialReferenceStack_47;
	// UnityEngine.Color32 TMPro.TMP_Text::s_colorWhite
	Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___s_colorWhite_55;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_FontAsset> TMPro.TMP_Text::OnFontAssetRequest
	Func_3_tC721DF8CDD07ED66A4833A19A2ED2302608C906C* ___OnFontAssetRequest_163;
	// System.Func`3<System.Int32,System.String,TMPro.TMP_SpriteAsset> TMPro.TMP_Text::OnSpriteAssetRequest
	Func_3_t6F6D9932638EA1A5A45303C6626C818C25D164E5* ___OnSpriteAssetRequest_164;
	// System.Char[] TMPro.TMP_Text::m_htmlTag
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_htmlTag_187;
	// TMPro.RichTextTagAttribute[] TMPro.TMP_Text::m_xmlAttribute
	RichTextTagAttributeU5BU5D_t5816316EFD8F59DBC30B9F88E15828C564E47B6D* ___m_xmlAttribute_188;
	// System.Single[] TMPro.TMP_Text::m_attributeParameterValues
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___m_attributeParameterValues_189;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedWordWrapState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedWordWrapState_201;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLineState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLineState_202;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedEllipsisState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedEllipsisState_203;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedLastValidState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedLastValidState_204;
	// TMPro.WordWrapState TMPro.TMP_Text::m_SavedSoftLineBreakState
	WordWrapState_t80F67D8CAA9B1A0A3D5266521E23A9F3100EDD0A ___m_SavedSoftLineBreakState_205;
	// TMPro.TMP_TextProcessingStack`1<TMPro.WordWrapState> TMPro.TMP_Text::m_EllipsisInsertionCandidateStack
	TMP_TextProcessingStack_1_t2DDA00FFC64AF6E3AFD475AB2086D16C34787E0F ___m_EllipsisInsertionCandidateStack_206;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_ParseTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseTextMarker_254;
	// Unity.Profiling.ProfilerMarker TMPro.TMP_Text::k_InsertNewLineMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_InsertNewLineMarker_255;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargePositiveVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargePositiveVector2_259;
	// UnityEngine.Vector2 TMPro.TMP_Text::k_LargeNegativeVector2
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___k_LargeNegativeVector2_260;
	// System.Single TMPro.TMP_Text::k_LargePositiveFloat
	float ___k_LargePositiveFloat_261;
	// System.Single TMPro.TMP_Text::k_LargeNegativeFloat
	float ___k_LargeNegativeFloat_262;
	// System.Int32 TMPro.TMP_Text::k_LargePositiveInt
	int32_t ___k_LargePositiveInt_263;
	// System.Int32 TMPro.TMP_Text::k_LargeNegativeInt
	int32_t ___k_LargeNegativeInt_264;
};

// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957  : public TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9
{
	// System.Boolean TMPro.TextMeshProUGUI::m_isRebuildingLayout
	bool ___m_isRebuildingLayout_265;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedGraphicRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedGraphicRebuild_266;
	// UnityEngine.Coroutine TMPro.TextMeshProUGUI::m_DelayedMaterialRebuild
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DelayedMaterialRebuild_267;
	// UnityEngine.Rect TMPro.TextMeshProUGUI::m_ClipRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_ClipRect_268;
	// System.Boolean TMPro.TextMeshProUGUI::m_ValidRect
	bool ___m_ValidRect_269;
	// System.Action`1<TMPro.TMP_TextInfo> TMPro.TextMeshProUGUI::OnPreRenderText
	Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1* ___OnPreRenderText_270;
	// System.Boolean TMPro.TextMeshProUGUI::m_hasFontAssetChanged
	bool ___m_hasFontAssetChanged_271;
	// TMPro.TMP_SubMeshUI[] TMPro.TextMeshProUGUI::m_subTextObjects
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* ___m_subTextObjects_272;
	// System.Single TMPro.TextMeshProUGUI::m_previousLossyScaleY
	float ___m_previousLossyScaleY_273;
	// UnityEngine.Vector3[] TMPro.TextMeshProUGUI::m_RectTransformCorners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_RectTransformCorners_274;
	// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::m_canvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_canvasRenderer_275;
	// UnityEngine.Canvas TMPro.TextMeshProUGUI::m_canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_canvas_276;
	// System.Single TMPro.TextMeshProUGUI::m_CanvasScaleFactor
	float ___m_CanvasScaleFactor_277;
	// System.Boolean TMPro.TextMeshProUGUI::m_isFirstAllocation
	bool ___m_isFirstAllocation_278;
	// System.Int32 TMPro.TextMeshProUGUI::m_max_characters
	int32_t ___m_max_characters_279;
	// UnityEngine.Material TMPro.TextMeshProUGUI::m_baseMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_baseMaterial_280;
	// System.Boolean TMPro.TextMeshProUGUI::m_isScrollRegionSet
	bool ___m_isScrollRegionSet_281;
	// UnityEngine.Vector4 TMPro.TextMeshProUGUI::m_maskOffset
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_maskOffset_282;
	// UnityEngine.Matrix4x4 TMPro.TextMeshProUGUI::m_EnvMapMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_EnvMapMatrix_283;
	// System.Boolean TMPro.TextMeshProUGUI::m_isRegisteredForEvents
	bool ___m_isRegisteredForEvents_284;
};

struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_StaticFields
{
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextMarker_285;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SetArraySizesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SetArraySizesMarker_286;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIMarker_287;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ParseMarkupTextMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ParseMarkupTextMarker_288;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CharacterLookupMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CharacterLookupMarker_289;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleGPOSFeaturesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleGPOSFeaturesMarker_290;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_CalculateVerticesPositionMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_CalculateVerticesPositionMarker_291;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeTextMetricsMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeTextMetricsMarker_292;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVisibleCharacterMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVisibleCharacterMarker_293;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleWhiteSpacesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleWhiteSpacesMarker_294;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleHorizontalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleHorizontalLineBreakingMarker_295;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleVerticalLineBreakingMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleVerticalLineBreakingMarker_296;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveGlyphVertexDataMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveGlyphVertexDataMarker_297;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_ComputeCharacterAdvanceMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_ComputeCharacterAdvanceMarker_298;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleCarriageReturnMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleCarriageReturnMarker_299;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_HandleLineTerminationMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_HandleLineTerminationMarker_300;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SavePageInfoMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SavePageInfoMarker_301;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_SaveProcessingStatesMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_SaveProcessingStatesMarker_302;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIMarker_303;
	// Unity.Profiling.ProfilerMarker TMPro.TextMeshProUGUI::k_GenerateTextPhaseIIIMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateTextPhaseIIIMarker_304;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771  : public RuntimeArray
{
	ALIGN_FIELD (8) Delegate_t* m_Items[1];

	inline Delegate_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Delegate_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C  : public RuntimeArray
{
	ALIGN_FIELD (8) Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 m_Items[1];

	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 value)
	{
		m_Items[index] = value;
	}
};
// TMPro.TMP_SubMeshUI[]
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* m_Items[1];

	inline TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 m_Items[1];

	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___textElement_4), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___fontAsset_5), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___spriteAsset_6), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((m_Items + index)->___material_8), (void*)NULL);
		#endif
	}
};
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F  : public RuntimeArray
{
	ALIGN_FIELD (8) UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 m_Items[1];

	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void TMPro.FastAction`1<System.Object>::Add(System.Action`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastAction_1_Add_mAFBAB8BEFC425D727FF303611342E6D1E6E82D86_gshared (FastAction_1_t30779A2821DCE05CA702D5800B30CABF67687135* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___rhs0, const RuntimeMethod* method) ;
// System.Void TMPro.FastAction`1<System.Object>::Remove(System.Action`1<A>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FastAction_1_Remove_m0C649E2173AA0370C08417DCFD89B7304F28BC0C_gshared (FastAction_1_t30779A2821DCE05CA702D5800B30CABF67687135* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___rhs0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___value1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_m666F5F51355332BE73E665B5FC6777A9905D56AA_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_mF6685B145584B06CFE932A358137E65532338DE1_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___go0, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<CurvedUI.CurvedUISettings>()
inline CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// System.Void CurvedUI.CurvedUITMP::FindTMP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FindTMP_m6438102AC53D8B20D1E93185009282A180233F3B (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_RegisterDirtyMaterialCallback_m5EDBA1E08656A49997538A1C7DE29201FDE0A013 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Object>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m95478636F075134CA2998E22B214611472600983 (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void TMPro.FastAction`1<UnityEngine.Object>::Add(System.Action`1<A>)
inline void FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6 (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* __this, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* ___rhs0, const RuntimeMethod* method)
{
	((  void (*) (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005*, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*, const RuntimeMethod*))FastAction_1_Add_mAFBAB8BEFC425D727FF303611342E6D1E6E82D86_gshared)(__this, ___rhs0, method);
}
// System.Void TMPro.TMP_Text::SetText(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, String_t* ___sourceText0, bool ___syncTextInputBox1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_UnregisterDirtyMaterialCallback_m62B9DB9B9021EC647E1B3D5122FE3693F8FC9BD2 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action0, const RuntimeMethod* method) ;
// System.Void TMPro.FastAction`1<UnityEngine.Object>::Remove(System.Action`1<A>)
inline void FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* __this, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* ___rhs0, const RuntimeMethod* method)
{
	((  void (*) (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005*, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*, const RuntimeMethod*))FastAction_1_Remove_m0C649E2173AA0370C08417DCFD89B7304F28BC0C_gshared)(__this, ___rhs0, method);
}
// System.Boolean CurvedUI.CurvedUITMP::ShouldTesselate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUITMP_ShouldTesselate_m689E16AB706109496751DEA326C551CF1214D54B (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_renderMode(TMPro.TextRenderFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_renderMode_m091533DEE7FD20A61249DC52C786ED4FFE5A5C2A (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::CreateUIVertexList(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_CreateUIVertexList_m57345FC6BDFFB8143D5FA4BC52E652BBE265EBBF (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyTMPMesh(System.Collections.Generic.List`1<UnityEngine.UIVertex>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_ModifyTMPMesh_m1399E60A903D57BEA95FE80DE7CBF42E50C104F2 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** ___vertexList0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::FillMeshWithUIVertexList(UnityEngine.Mesh,System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FillMeshWithUIVertexList_mEDA5D96395071B4167976CBAD82678ECC503A350 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___list1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::FindSubmeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FindSubmeshes_mB0395DAA0DCE9EB4D8E10CBF9A99D430753AD0AE (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>::GetEnumerator()
inline Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1 List_1_GetEnumerator_m95B374E678B6610B02FFA7111D74A0E3F9511E3E (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1 (*) (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<CurvedUI.CurvedUITMPSubmesh>::Dispose()
inline void Enumerator_Dispose_m1935F4927E7D67A4997E9F2C35B4ED2C0C335BD7 (Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<CurvedUI.CurvedUITMPSubmesh>::get_Current()
inline CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* Enumerator_get_Current_m6BB7FC406CF1B8EB37AE3099B84F083FA62B04E9_inline (Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1* __this, const RuntimeMethod* method)
{
	return ((  CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* (*) (Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void CurvedUI.CurvedUITMPSubmesh::UpdateSubmesh(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPSubmesh_UpdateSubmesh_mA3045387F2148F655658002E28CF31A87BAC7F1D (CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* __this, bool ___tesselate0, bool ___curve1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<CurvedUI.CurvedUITMPSubmesh>::MoveNext()
inline bool Enumerator_MoveNext_m8B2B63CDB07B0BCF7C0DE5D790F95F8BC0980B04 (Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// UnityEngine.CanvasRenderer TMPro.TextMeshProUGUI::get_canvasRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* TextMeshProUGUI_get_canvasRenderer_m74291CFD17F47B70F21F49C93058D2756A521887 (TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasRenderer::SetMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_SetMesh_m1DF21BBC31233AC324BC08331BB542C619DC7543 (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Void UnityEngine.CanvasRenderer::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CanvasRenderer_Clear_m496D522F1DBD1037417E470CF2D4D9FD22F68E81 (CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mesh::get_vertexCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
inline int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_gshared)(__this, ___index0, ___count1, method);
}
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::GetUIVertexFromMesh(UnityEngine.UIVertex&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_GetUIVertexFromMesh_mE3FE10841519A8EAE139A390D725291F002B41E0 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___vert0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
inline void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline)(__this, ___item0, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, const RuntimeMethod*))List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
inline void List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_gshared)(__this, ___index0, ___value1, method);
}
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.GameObject::GetComponent<CurvedUI.CurvedUIVertexEffect>()
inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* GameObject_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mFC7CE5CA138CCC1A0AE91CEA65F6CD8F9BAA436B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Transform::set_hasChanged(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, bool ___value0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<TMPro.TMP_SubMeshUI>()
inline TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* Component_GetComponentsInChildren_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m1595B542FEE8A9C01F3DB0B958F701F8F0A6D730 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<CurvedUI.CurvedUITMPSubmesh>(UnityEngine.GameObject)
inline CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_mA60BA18571108CDB4B49B76D1544DC204BD2AB34 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method)
{
	return ((  CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_m666F5F51355332BE73E665B5FC6777A9905D56AA_gshared)(___go0, method);
}
// System.Boolean System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>::Contains(T)
inline bool List_1_Contains_m2A410A484DC099A68EE94C2134DFDB0609D241C7 (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* __this, CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD*, CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532*, const RuntimeMethod*))List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>::Add(T)
inline void List_1_Add_m6A9761CF6ADDB200800BC055298CF4AF4BA44CA0_inline (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* __this, CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD*, CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUIExtensionMethods::AlmostEqual(UnityEngine.Vector3,UnityEngine.Vector3,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIExtensionMethods_AlmostEqual_m54CB785F14677C4EAEF1E4CFBAE87592851BE716 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, double ___accuracy2, const RuntimeMethod* method) ;
// CurvedUI.CurvedUISettings/CurvedUIShape CurvedUI.CurvedUISettings::get_Shape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
inline void List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>::.ctor()
inline void List_1__ctor_mE0CF77F0BE4341A4B9E794E8F15E91789C40C6D2 (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TMPro.TMP_InputField>()
inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::CheckAndConvertMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_CheckAndConvertMask_mE0063CE6557D6EC0F7EFADCF6D652C1E107E1654 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::UpdateCaret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_UpdateCaret_m433E3D7AC784A906D073DFD42A3EBCAA1C424F25 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::CreateCaret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_CreateCaret_m6D5029656825BDE5458938D770C85B9075FFAF92 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator CurvedUI.CurvedUITMPInputFieldCaret::CaretBlinker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurvedUITMPInputFieldCaret_CaretBlinker_m72C5EC00E30E087A2970AEA2228794CA9D29CBAE (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkerU3Ed__10__ctor_mC94964453788B59FFB9C854766DD5AE77DEFCF06 (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, String_t* ___name0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<UnityEngine.RectTransform>()
inline RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<CurvedUI.CurvedUIVertexEffect>()
inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::GetChild(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_one()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition3D(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_pivot(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// UnityEngine.Color TMPro.TMP_InputField::get_caretColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TMP_InputField_get_caretColor_m9733E1CB5CAD3CCFA9C32343D12F0095BA6DC76F (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetAsFirstSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_customCaretColor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_customCaretColor_m9A33CA9154050A1C09881207B9C7B832B6C44B6B (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_caretColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_caretColor_mAF2AF8646B44D6AAA885F2A664DB88431E22177C (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.Color TMPro.TMP_InputField::get_selectionColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F TMP_InputField_get_selectionColor_m99D5B9FBC11FEAA170C113FB238120A73429F5BB (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_selectionColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_selectionColor_m9B30F4DC90BBD21ECDA6B5888F2F8E4B2EC7686D (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_caretPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 CurvedUI.CurvedUITMPInputFieldCaret::GetLocalPositionInText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, int32_t ___charNo0, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_selectionFocusPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Int32 TMPro.TMP_InputField::get_selectionAnchorPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// TMPro.TMP_Text TMPro.TMP_InputField::get_textComponent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Single TMPro.TMP_Text::get_fontSize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731 (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_sizeDelta(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RectTransform::set_anchoredPosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___value0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Int32 TMPro.TMP_InputField::get_caretWidth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TMP_InputField_get_caretWidth_mA95E0A88F505D9618791AEDE9D649CA70F7E3B65 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Boolean TMPro.TMP_InputField::get_isFocused()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TMP_InputField_get_isFocused_m7FD1AA3B92404C30596FF6EE5F644757A2F060DE (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// TMPro.TMP_TextInfo TMPro.TMP_Text::get_textInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Collections.IEnumerator UnityEngine.Transform::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.RectMask2D>()
inline RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.Object::DestroyImmediate(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<UnityEngine.UI.Image>(UnityEngine.Component)
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* CurvedUIExtensionMethods_AddComponentIfMissing_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m8D827B7D1B6A4BF71180B04A5C9F809CFB9747F7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___go0, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_mF6685B145584B06CFE932A358137E65532338DE1_gshared)(___go0, method);
}
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<UnityEngine.UI.Mask>(UnityEngine.Component)
inline Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* CurvedUIExtensionMethods_AddComponentIfMissing_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m73B2BCA1676B787256F424483A1EB6B9841A4695 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___go0, const RuntimeMethod* method)
{
	return ((  Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_mF6685B145584B06CFE932A358137E65532338DE1_gshared)(___go0, method);
}
// System.Single TMPro.TMP_InputField::get_caretBlinkRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float TMP_InputField_get_caretBlinkRate_mACAF2093330BB9CB0B8C5F7D76EAA4EB0AE4DD18 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_InputField::set_caretBlinkRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_InputField_set_caretBlinkRate_m4D4B8F3C2169EE3FA7B27BECBD1563BFAD7B41F7 (TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* __this, float ___value0, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<TMPro.TMP_SubMeshUI>()
inline TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* GameObject_GetComponent_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m5F6AF2A1EF0047D4F719FA30ADA5314A3EC8BBBD (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponentInParent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponentInParent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m1C73B3D3E924B85529A025308CD97ACF478C95FE (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<CurvedUI.CurvedUIVertexEffect>(UnityEngine.GameObject)
inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB300C664BECCAFAF312075478DA59178E9B81A2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method)
{
	return ((  CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_m666F5F51355332BE73E665B5FC6777A9905D56AA_gshared)(___go0, method);
}
// UnityEngine.Mesh TMPro.TMP_SubMeshUI::get_mesh()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* TMP_SubMeshUI_get_mesh_m18BAE0DB357DC5D7993D07BD826429AF727548E2 (TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::.ctor(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper__ctor_mE42FAE63F4A3200C38ACFDD9C3F601FDC7E258F8 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::FillMesh(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_FillMesh_m524F00287F0A0C7683E2CC7768A77B5755544A0E (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::set_CurvingRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_CurvingRequired_m955958BBAD2A29D7606644AA29A073D2FC6C9778 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CurvedUI.CurvedUIViveController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIViveController__ctor_m46A92F889471DFDC2CCE1F7B72E9E5DF1FE527B9 (CurvedUIViveController_t4D748E4AB476CDE20BDF09579CBD91E92D5C544E* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_Multicast(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* currentDelegate = reinterpret_cast<ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___sender0, ___e1, method);
	}
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_Open(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, ___e1, method);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_Closed(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___sender0, ___e1, method);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenStaticInvoker(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0, ___e1);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_ClosedStaticInvoker(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, const RuntimeMethod* method)
{
	InvokerActionInvoker3< RuntimeObject*, RuntimeObject*, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0, ___e1);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenVirtual(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, const RuntimeMethod* method)
{
	VirtualActionInvoker1< ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 >::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0, ___e1);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenInterface(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, const RuntimeMethod* method)
{
	InterfaceActionInvoker1< ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 >::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0, ___e1);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenGenericVirtual(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker1< ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 >::Invoke(method, ___sender0, ___e1);
}
void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenGenericInterface(ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker1< ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 >::Invoke(method, ___sender0, ___e1);
}
// System.Void CurvedUI.ViveInputEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViveInputEvent__ctor_mF3796A815A98BE5508EB40D37F1A85E7E87F199D (ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 2;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_Closed;
	}
	else
	{
		bool isOpen = methodCount == 1;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A_Multicast;
}
// System.Void CurvedUI.ViveInputEvent::Invoke(System.Object,CurvedUI.ViveInputArgs)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViveInputEvent_Invoke_m80302D14096F46D72A4A868821C95B113987FB0A (ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___sender0, ___e1, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CurvedUI.ViveInputEvent::BeginInvoke(System.Object,CurvedUI.ViveInputArgs,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ViveInputEvent_BeginInvoke_m6045D0AED5B69D05D176D370B0F496E63B1D2836 (ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___sender0, ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817 ___e1, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback2, RuntimeObject* ___object3, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	void *__d_args[3] = {0};
	__d_args[0] = ___sender0;
	__d_args[1] = Box(ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817_il2cpp_TypeInfo_var, &___e1);
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback2, (RuntimeObject*)___object3);;
}
// System.Void CurvedUI.ViveInputEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViveInputEvent_EndInvoke_m5332E2C98382423FB6E8DAA6E697AABAFA73191C (ViveInputEvent_tB0BD722DD38084E61402FF8283112B6BAF5C09AB* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_Multicast(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method)
{
	il2cpp_array_size_t length = __this->___delegates_13->max_length;
	Delegate_t** delegatesToInvoke = reinterpret_cast<Delegate_t**>(__this->___delegates_13->GetAddressAtUnchecked(0));
	typedef void (*FunctionPointerType) (ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method);
	for (il2cpp_array_size_t i = 0; i < length; i++)
	{
		ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* currentDelegate = reinterpret_cast<ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E*>(delegatesToInvoke[i]);
		((FunctionPointerType)currentDelegate->___invoke_impl_1)(currentDelegate, ___sender0, method);
	}
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_Open(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(___sender0, method);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_Closed(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method)
{
	typedef void (*FunctionPointerType) (RuntimeObject*, RuntimeObject*, const RuntimeMethod*);
	((FunctionPointerType)__this->___method_ptr_0)(__this->___m_target_2, ___sender0, method);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenStaticInvoker(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method)
{
	InvokerActionInvoker1< RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, ___sender0);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_ClosedStaticInvoker(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method)
{
	InvokerActionInvoker2< RuntimeObject*, RuntimeObject* >::Invoke(__this->___method_ptr_0, method, NULL, __this->___m_target_2, ___sender0);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenVirtual(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method)
{
	VirtualActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), ___sender0);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenInterface(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method)
{
	InterfaceActionInvoker0::Invoke(il2cpp_codegen_method_get_slot(method), il2cpp_codegen_method_get_declaring_type(method), ___sender0);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenGenericVirtual(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method)
{
	GenericVirtualActionInvoker0::Invoke(method, ___sender0);
}
void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenGenericInterface(ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method)
{
	GenericInterfaceActionInvoker0::Invoke(method, ___sender0);
}
// System.Void CurvedUI.ViveEvent::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViveEvent__ctor_m0BC3268E51BE9ED084304D513A36870B895ABDB5 (ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) 
{
	__this->___method_ptr_0 = il2cpp_codegen_get_virtual_call_method_pointer((RuntimeMethod*)___method1);
	__this->___method_3 = ___method1;
	__this->___m_target_2 = ___object0;
	Il2CppCodeGenWriteBarrier((void**)(&__this->___m_target_2), (void*)___object0);
	int methodCount = il2cpp_codegen_method_parameter_count((RuntimeMethod*)___method1);
	if (MethodIsStatic((RuntimeMethod*)___method1))
	{
		bool isOpen = methodCount == 1;
		if (il2cpp_codegen_call_method_via_invoker((RuntimeMethod*)___method1))
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenStaticInvoker;
			else
				__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_ClosedStaticInvoker;
		else
			if (isOpen)
				__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_Open;
			else
				__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_Closed;
	}
	else
	{
		bool isOpen = methodCount == 0;
		if (isOpen)
		{
			if (__this->___method_is_virtual_12)
			{
				if (il2cpp_codegen_method_is_generic_instance_method((RuntimeMethod*)___method1))
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenGenericInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenGenericVirtual;
				else
					if (il2cpp_codegen_method_is_interface_method((RuntimeMethod*)___method1))
						__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenInterface;
					else
						__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_OpenVirtual;
			}
			else
			{
				__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_Open;
			}
		}
		else
		{
			__this->___invoke_impl_1 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_Closed;
		}
	}
	__this->___extra_arg_5 = (intptr_t)&ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371_Multicast;
}
// System.Void CurvedUI.ViveEvent::Invoke(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViveEvent_Invoke_m8F360060D2A4407608EA44E10A38DCF4E0B8A371 (ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___sender0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
// System.IAsyncResult CurvedUI.ViveEvent::BeginInvoke(System.Object,System.AsyncCallback,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ViveEvent_BeginInvoke_m075C2C39BFC33B38A3C23C748303B1439084133D (ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___sender0, AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C* ___callback1, RuntimeObject* ___object2, const RuntimeMethod* method) 
{
	void *__d_args[2] = {0};
	__d_args[0] = ___sender0;
	return (RuntimeObject*)il2cpp_codegen_delegate_begin_invoke((RuntimeDelegate*)__this, __d_args, (RuntimeDelegate*)___callback1, (RuntimeObject*)___object2);;
}
// System.Void CurvedUI.ViveEvent::EndInvoke(System.IAsyncResult)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ViveEvent_EndInvoke_mCE7321CA2B97FD65BEF2F6152CD0A9339E576704 (ViveEvent_t156B57CE42717A58F8A0B469F11EF90C2BF8273E* __this, RuntimeObject* ___result0, const RuntimeMethod* method) 
{
	il2cpp_codegen_delegate_end_invoke((Il2CppAsyncResult*) ___result0, 0);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CurvedUI.CurvedUITMP::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_Start_m1D0E0F501F954DCE8E6C43B57F2DDBCCBA17FE1B (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (mySettings == null)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_0 = __this->___mySettings_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// mySettings = GetComponentInParent<CurvedUISettings>();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_3;
		L_3 = Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7(__this, Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var);
		__this->___mySettings_6 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mySettings_6), (void*)L_3);
	}

IL_001d:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_OnEnable_m8D10FAACCF8A67595A98C3FAF75588950BEC6350 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// FindTMP();
		CurvedUITMP_FindTMP_m6438102AC53D8B20D1E93185009282A180233F3B(__this, NULL);
		// if (tmpText)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___tmpText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0060;
		}
	}
	{
		// tmpText.RegisterDirtyMaterialCallback(TesselationRequiredCallback);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___tmpText_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Graphic_RegisterDirtyMaterialCallback_m5EDBA1E08656A49997538A1C7DE29201FDE0A013(L_3, L_4, NULL);
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Add(TMPTextChangedCallback);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_5 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_6 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_6, __this, (intptr_t)((void*)CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6(L_5, L_6, FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var);
		// tmpText.SetText(tmpText.text);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_7 = __this->___tmpText_5;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___tmpText_5;
		NullCheck(L_8);
		String_t* L_9;
		L_9 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_8);
		NullCheck(L_7);
		TMP_Text_SetText_m848189C290727009A95A00E432B66DFB2F2C3454(L_7, L_9, (bool)1, NULL);
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_OnDisable_mB96E2DC6F61743B4DB902430517CEC95830FAFEE (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (tmpText)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___tmpText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0041;
		}
	}
	{
		// tmpText.UnregisterDirtyMaterialCallback(TesselationRequiredCallback);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_3 = __this->___tmpText_5;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Graphic_UnregisterDirtyMaterialCallback_m62B9DB9B9021EC647E1B3D5122FE3693F8FC9BD2(L_3, L_4, NULL);
		// TMPro_EventManager.TEXT_CHANGED_EVENT.Remove(TMPTextChangedCallback);
		il2cpp_codegen_runtime_class_init_inline(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var);
		FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* L_5 = ((TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_StaticFields*)il2cpp_codegen_static_fields_for(TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var))->___TEXT_CHANGED_EVENT_11;
		Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* L_6 = (Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*)il2cpp_codegen_object_new(Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Action_1__ctor_m95478636F075134CA2998E22B214611472600983(L_6, __this, (intptr_t)((void*)CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156_RuntimeMethod_var), NULL);
		NullCheck(L_5);
		FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F(L_5, L_6, FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var);
	}

IL_0041:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::OnDestroy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_OnDestroy_m76CD7C1C2A384694798473B8B166410F651360BD (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	{
		// quitting = true;
		__this->___quitting_19 = (bool)1;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_LateUpdate_m08C38D0D9D0AEAD182AD498C4FB4806F30B68257 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m1935F4927E7D67A4997E9F2C35B4ED2C0C335BD7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m8B2B63CDB07B0BCF7C0DE5D790F95F8BC0980B04_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m6BB7FC406CF1B8EB37AE3099B84F083FA62B04E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m95B374E678B6610B02FFA7111D74A0E3F9511E3E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_6;
	memset((&V_6), 0, sizeof(V_6));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_7;
	memset((&V_7), 0, sizeof(V_7));
	Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1 V_8;
	memset((&V_8), 0, sizeof(V_8));
	CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* V_9 = NULL;
	bool V_10 = false;
	int32_t G_B7_0 = 0;
	int32_t G_B15_0 = 0;
	int32_t G_B17_0 = 0;
	{
		// if (!tmpText) FindTMP();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___tmpText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if (!tmpText) FindTMP();
		CurvedUITMP_FindTMP_m6438102AC53D8B20D1E93185009282A180233F3B(__this, NULL);
	}

IL_001a:
	{
		// if (mySettings == null) return;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_3 = __this->___mySettings_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_3, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_002f;
		}
	}
	{
		// if (mySettings == null) return;
		goto IL_025b;
	}

IL_002f:
	{
		// if (tmpText && !quitting)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_6 = __this->___tmpText_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_6, NULL);
		if (!L_7)
		{
			goto IL_0047;
		}
	}
	{
		bool L_8 = __this->___quitting_19;
		G_B7_0 = ((((int32_t)L_8) == ((int32_t)0))? 1 : 0);
		goto IL_0048;
	}

IL_0047:
	{
		G_B7_0 = 0;
	}

IL_0048:
	{
		V_2 = (bool)G_B7_0;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_025b;
		}
	}
	{
		// if (ShouldTesselate())
		bool L_10;
		L_10 = CurvedUITMP_ShouldTesselate_m689E16AB706109496751DEA326C551CF1214D54B(__this, NULL);
		V_3 = L_10;
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_0061;
		}
	}
	{
		// tesselationRequired = true;
		__this->___tesselationRequired_18 = (bool)1;
	}

IL_0061:
	{
		// if (Dirty || tesselationRequired || (curvingRequired && !Application.isPlaying))
		bool L_12 = __this->___Dirty_16;
		if (L_12)
		{
			goto IL_0086;
		}
	}
	{
		bool L_13 = __this->___tesselationRequired_18;
		if (L_13)
		{
			goto IL_0086;
		}
	}
	{
		bool L_14 = __this->___curvingRequired_17;
		if (!L_14)
		{
			goto IL_0083;
		}
	}
	{
		bool L_15;
		L_15 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		G_B15_0 = ((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		goto IL_0084;
	}

IL_0083:
	{
		G_B15_0 = 0;
	}

IL_0084:
	{
		G_B17_0 = G_B15_0;
		goto IL_0087;
	}

IL_0086:
	{
		G_B17_0 = 1;
	}

IL_0087:
	{
		V_4 = (bool)G_B17_0;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_0212;
		}
	}
	{
		// if (mySettings == null)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_17 = __this->___mySettings_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_17, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_5 = L_18;
		bool L_19 = V_5;
		if (!L_19)
		{
			goto IL_00b1;
		}
	}
	{
		// enabled = false;
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(__this, (bool)0, NULL);
		// return;
		goto IL_025b;
	}

IL_00b1:
	{
		// tmpText.renderMode = TMPro.TextRenderFlags.Render;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_20 = __this->___tmpText_5;
		NullCheck(L_20);
		TMP_Text_set_renderMode_m091533DEE7FD20A61249DC52C786ED4FFE5A5C2A(L_20, ((int32_t)255), NULL);
		// tmpText.ForceMeshUpdate(true);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_21 = __this->___tmpText_5;
		NullCheck(L_21);
		VirtualActionInvoker2< bool, bool >::Invoke(106 /* System.Void TMPro.TMP_Text::ForceMeshUpdate(System.Boolean,System.Boolean) */, L_21, (bool)1, (bool)0);
		// CreateUIVertexList(tmpText.mesh);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_22 = __this->___tmpText_5;
		NullCheck(L_22);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_23;
		L_23 = VirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(77 /* UnityEngine.Mesh TMPro.TMP_Text::get_mesh() */, L_22);
		CurvedUITMP_CreateUIVertexList_m57345FC6BDFFB8143D5FA4BC52E652BBE265EBBF(__this, L_23, NULL);
		// crvdVE.ModifyTMPMesh(ref m_UIVerts);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_24 = __this->___crvdVE_4;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** L_25 = (&__this->___m_UIVerts_7);
		NullCheck(L_24);
		CurvedUIVertexEffect_ModifyTMPMesh_m1399E60A903D57BEA95FE80DE7CBF42E50C104F2(L_24, L_25, NULL);
		// FillMeshWithUIVertexList(tmpText.mesh, m_UIVerts);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_26 = __this->___tmpText_5;
		NullCheck(L_26);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_27;
		L_27 = VirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(77 /* UnityEngine.Mesh TMPro.TMP_Text::get_mesh() */, L_26);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_28 = __this->___m_UIVerts_7;
		CurvedUITMP_FillMeshWithUIVertexList_mEDA5D96395071B4167976CBAD82678ECC503A350(__this, L_27, L_28, NULL);
		// tmpText.renderMode = TMPro.TextRenderFlags.DontRender;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_29 = __this->___tmpText_5;
		NullCheck(L_29);
		TMP_Text_set_renderMode_m091533DEE7FD20A61249DC52C786ED4FFE5A5C2A(L_29, 0, NULL);
		// savedLocalScale = mySettings.transform.localScale;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_30 = __this->___mySettings_6;
		NullCheck(L_30);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31;
		L_31 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_30, NULL);
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_31, NULL);
		__this->___savedLocalScale_13 = L_32;
		// savedGlobalScale = mySettings.transform.lossyScale;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_33 = __this->___mySettings_6;
		NullCheck(L_33);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34;
		L_34 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_33, NULL);
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_34, NULL);
		__this->___savedGlobalScale_14 = L_35;
		// savedSize = (transform as RectTransform).rect.size;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36;
		L_36 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_36, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_37;
		L_37 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_36, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_6 = L_37;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38;
		L_38 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_6), NULL);
		__this->___savedSize_10 = L_38;
		// savedUp = mySettings.transform.worldToLocalMatrix.MultiplyVector(transform.up);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_39 = __this->___mySettings_6;
		NullCheck(L_39);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_40;
		L_40 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_39, NULL);
		NullCheck(L_40);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_41;
		L_41 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_40, NULL);
		V_7 = L_41;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_42;
		L_42 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_42);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43;
		L_43 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_42, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44;
		L_44 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_7), L_43, NULL);
		__this->___savedUp_11 = L_44;
		// savedPos = mySettings.transform.worldToLocalMatrix.MultiplyPoint3x4(transform.position);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_45 = __this->___mySettings_6;
		NullCheck(L_45);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_46;
		L_46 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_45, NULL);
		NullCheck(L_46);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_47;
		L_47 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_46, NULL);
		V_7 = L_47;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_48;
		L_48 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_48);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49;
		L_49 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_48, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		L_50 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_7), L_49, NULL);
		__this->___savedPos_12 = L_50;
		// tesselationRequired = false;
		__this->___tesselationRequired_18 = (bool)0;
		// curvingRequired = false;
		__this->___curvingRequired_17 = (bool)0;
		// Dirty = false;
		__this->___Dirty_16 = (bool)0;
		// FindSubmeshes();
		CurvedUITMP_FindSubmeshes_mB0395DAA0DCE9EB4D8E10CBF9A99D430753AD0AE(__this, NULL);
		// foreach (CurvedUITMPSubmesh mesh in subMeshes)
		List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* L_51 = __this->___subMeshes_15;
		NullCheck(L_51);
		Enumerator_t737623E17A61BF4DC353BE5A9F34FB48372047E1 L_52;
		L_52 = List_1_GetEnumerator_m95B374E678B6610B02FFA7111D74A0E3F9511E3E(L_51, List_1_GetEnumerator_m95B374E678B6610B02FFA7111D74A0E3F9511E3E_RuntimeMethod_var);
		V_8 = L_52;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0202:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m1935F4927E7D67A4997E9F2C35B4ED2C0C335BD7((&V_8), Enumerator_Dispose_m1935F4927E7D67A4997E9F2C35B4ED2C0C335BD7_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_01f7_1;
			}

IL_01e4_1:
			{
				// foreach (CurvedUITMPSubmesh mesh in subMeshes)
				CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_53;
				L_53 = Enumerator_get_Current_m6BB7FC406CF1B8EB37AE3099B84F083FA62B04E9_inline((&V_8), Enumerator_get_Current_m6BB7FC406CF1B8EB37AE3099B84F083FA62B04E9_RuntimeMethod_var);
				V_9 = L_53;
				// mesh.UpdateSubmesh(true, false);
				CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_54 = V_9;
				NullCheck(L_54);
				CurvedUITMPSubmesh_UpdateSubmesh_mA3045387F2148F655658002E28CF31A87BAC7F1D(L_54, (bool)1, (bool)0, NULL);
			}

IL_01f7_1:
			{
				// foreach (CurvedUITMPSubmesh mesh in subMeshes)
				bool L_55;
				L_55 = Enumerator_MoveNext_m8B2B63CDB07B0BCF7C0DE5D790F95F8BC0980B04((&V_8), Enumerator_MoveNext_m8B2B63CDB07B0BCF7C0DE5D790F95F8BC0980B04_RuntimeMethod_var);
				if (L_55)
				{
					goto IL_01e4_1;
				}
			}
			{
				goto IL_0211;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0211:
	{
	}

IL_0212:
	{
		// if(tmpText.text.Length > 0)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_56 = __this->___tmpText_5;
		NullCheck(L_56);
		String_t* L_57;
		L_57 = VirtualFuncInvoker0< String_t* >::Invoke(65 /* System.String TMPro.TMP_Text::get_text() */, L_56);
		NullCheck(L_57);
		int32_t L_58;
		L_58 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_57, NULL);
		V_10 = (bool)((((int32_t)L_58) > ((int32_t)0))? 1 : 0);
		bool L_59 = V_10;
		if (!L_59)
		{
			goto IL_0249;
		}
	}
	{
		// tmpText.canvasRenderer.SetMesh(tmpText.mesh);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_60 = __this->___tmpText_5;
		NullCheck(L_60);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_61;
		L_61 = TextMeshProUGUI_get_canvasRenderer_m74291CFD17F47B70F21F49C93058D2756A521887(L_60, NULL);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_62 = __this->___tmpText_5;
		NullCheck(L_62);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_63;
		L_63 = VirtualFuncInvoker0< Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* >::Invoke(77 /* UnityEngine.Mesh TMPro.TMP_Text::get_mesh() */, L_62);
		NullCheck(L_61);
		CanvasRenderer_SetMesh_m1DF21BBC31233AC324BC08331BB542C619DC7543(L_61, L_63, NULL);
		goto IL_025a;
	}

IL_0249:
	{
		// tmpText.canvasRenderer.Clear();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_64 = __this->___tmpText_5;
		NullCheck(L_64);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_65;
		L_65 = TextMeshProUGUI_get_canvasRenderer_m74291CFD17F47B70F21F49C93058D2756A521887(L_64, NULL);
		NullCheck(L_65);
		CanvasRenderer_Clear_m496D522F1DBD1037417E470CF2D4D9FD22F68E81(L_65, NULL);
	}

IL_025a:
	{
	}

IL_025b:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::CreateUIVertexList(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_CreateUIVertexList_m57345FC6BDFFB8143D5FA4BC52E652BBE265EBBF (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	bool V_3 = false;
	{
		// if (mesh.vertexCount < m_UIVerts.Count)
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_0 = ___mesh0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_0, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = __this->___m_UIVerts_7;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_2, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)L_1) < ((int32_t)L_3))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003c;
		}
	}
	{
		// m_UIVerts.RemoveRange(mesh.vertexCount, m_UIVerts.Count - mesh.vertexCount);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_5 = __this->___m_UIVerts_7;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_6 = ___mesh0;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_6, NULL);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = __this->___m_UIVerts_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_8, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_10 = ___mesh0;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_10, NULL);
		NullCheck(L_5);
		List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229(L_5, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_11)), List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var);
	}

IL_003c:
	{
		// vertices = mesh.vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_12 = ___mesh0;
		NullCheck(L_12);
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_13;
		L_13 = Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9(L_12, NULL);
		__this->___vertices_20 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vertices_20), (void*)L_13);
		// for (int i = 0; i < mesh.vertexCount; i++)
		V_1 = 0;
		goto IL_00cf;
	}

IL_004f:
	{
		// if (m_UIVerts.Count <= i)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_14 = __this->___m_UIVerts_7;
		NullCheck(L_14);
		int32_t L_15;
		L_15 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_14, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		int32_t L_16 = V_1;
		V_2 = (bool)((((int32_t)((((int32_t)L_15) > ((int32_t)L_16))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_17 = V_2;
		if (!L_17)
		{
			goto IL_0095;
		}
	}
	{
		// m_tempVertex = new UIVertex();
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_18 = (&__this->___m_tempVertex_8);
		il2cpp_codegen_initobj(L_18, sizeof(UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207));
		// GetUIVertexFromMesh(ref m_tempVertex, i);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_19 = (&__this->___m_tempVertex_8);
		int32_t L_20 = V_1;
		CurvedUITMP_GetUIVertexFromMesh_mE3FE10841519A8EAE139A390D725291F002B41E0(__this, L_19, L_20, NULL);
		// m_UIVerts.Add(m_tempVertex);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_21 = __this->___m_UIVerts_7;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_22 = __this->___m_tempVertex_8;
		NullCheck(L_21);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_21, L_22, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		goto IL_00ca;
	}

IL_0095:
	{
		// m_tempVertex = m_UIVerts[i];
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = __this->___m_UIVerts_7;
		int32_t L_24 = V_1;
		NullCheck(L_23);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_25;
		L_25 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_23, L_24, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		__this->___m_tempVertex_8 = L_25;
		// GetUIVertexFromMesh(ref m_tempVertex, i);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_26 = (&__this->___m_tempVertex_8);
		int32_t L_27 = V_1;
		CurvedUITMP_GetUIVertexFromMesh_mE3FE10841519A8EAE139A390D725291F002B41E0(__this, L_26, L_27, NULL);
		// m_UIVerts[i] = m_tempVertex;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_28 = __this->___m_UIVerts_7;
		int32_t L_29 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_30 = __this->___m_tempVertex_8;
		NullCheck(L_28);
		List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33(L_28, L_29, L_30, List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
	}

IL_00ca:
	{
		// for (int i = 0; i < mesh.vertexCount; i++)
		int32_t L_31 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_31, 1));
	}

IL_00cf:
	{
		// for (int i = 0; i < mesh.vertexCount; i++)
		int32_t L_32 = V_1;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_33 = ___mesh0;
		NullCheck(L_33);
		int32_t L_34;
		L_34 = Mesh_get_vertexCount_mB7BE0340AAF272933068D830C8E711FC8978E12C(L_33, NULL);
		V_3 = (bool)((((int32_t)L_32) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_3;
		if (L_35)
		{
			goto IL_004f;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::GetUIVertexFromMesh(UnityEngine.UIVertex&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_GetUIVertexFromMesh_mE3FE10841519A8EAE139A390D725291F002B41E0 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___vert0, int32_t ___i1, const RuntimeMethod* method) 
{
	{
		// vert.position = vertices[i];
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_0 = ___vert0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_1 = __this->___vertices_20;
		int32_t L_2 = ___i1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		L_0->___position_0 = L_4;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::FillMeshWithUIVertexList(UnityEngine.Mesh,System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FillMeshWithUIVertexList_mEDA5D96395071B4167976CBAD82678ECC503A350 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___list1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25EC8B5027C4C127EC75896F8B03EF13CBFF95DE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// if (list.Count >= 65536)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ___list1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_0, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_0 = (bool)((((int32_t)((((int32_t)L_1) < ((int32_t)((int32_t)65536)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0023;
		}
	}
	{
		// Debug.LogError("CURVEDUI: Unity UI Mesh can not have more than 65536 vertices. Remove some UI elements or lower quality.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteral25EC8B5027C4C127EC75896F8B03EF13CBFF95DE, NULL);
		// return;
		goto IL_0066;
	}

IL_0023:
	{
		// for (int i = 0; i < list.Count; i++)
		V_1 = 0;
		goto IL_0045;
	}

IL_0027:
	{
		// vertices[i] = list[i].position;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_3 = __this->___vertices_20;
		int32_t L_4 = V_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_5 = ___list1;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_7;
		L_7 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_5, L_6, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = L_7.___position_0;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(L_4), (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2)L_8);
		// for (int i = 0; i < list.Count; i++)
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0045:
	{
		// for (int i = 0; i < list.Count; i++)
		int32_t L_10 = V_1;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = ___list1;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_11, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_2 = (bool)((((int32_t)L_10) < ((int32_t)L_12))? 1 : 0);
		bool L_13 = V_2;
		if (L_13)
		{
			goto IL_0027;
		}
	}
	{
		// mesh.vertices = vertices;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_14 = ___mesh0;
		Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* L_15 = __this->___vertices_20;
		NullCheck(L_14);
		Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C(L_14, L_15, NULL);
		// mesh.RecalculateBounds();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_16 = ___mesh0;
		NullCheck(L_16);
		Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B(L_16, NULL);
	}

IL_0066:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::FindTMP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FindTMP_m6438102AC53D8B20D1E93185009282A180233F3B (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mFC7CE5CA138CCC1A0AE91CEA65F6CD8F9BAA436B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (this.GetComponent<TextMeshProUGUI>() != null)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0;
		L_0 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0055;
		}
	}
	{
		// tmpText = this.gameObject.GetComponent<TextMeshProUGUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_4;
		L_4 = GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E(L_3, GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var);
		__this->___tmpText_5 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___tmpText_5), (void*)L_4);
		// crvdVE = this.gameObject.GetComponent<CurvedUIVertexEffect>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_5);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_6;
		L_6 = GameObject_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mFC7CE5CA138CCC1A0AE91CEA65F6CD8F9BAA436B(L_5, GameObject_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mFC7CE5CA138CCC1A0AE91CEA65F6CD8F9BAA436B_RuntimeMethod_var);
		__this->___crvdVE_4 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crvdVE_4), (void*)L_6);
		// mySettings = GetComponentInParent<CurvedUISettings>();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_7;
		L_7 = Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7(__this, Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var);
		__this->___mySettings_6 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mySettings_6), (void*)L_7);
		// transform.hasChanged = false;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Transform_set_hasChanged_mCE980898F6D52F81E7E6B772DCA89E13A15870AE(L_8, (bool)0, NULL);
		// FindSubmeshes();
		CurvedUITMP_FindSubmeshes_mB0395DAA0DCE9EB4D8E10CBF9A99D430753AD0AE(__this, NULL);
	}

IL_0055:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::FindSubmeshes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FindSubmeshes_mB0395DAA0DCE9EB4D8E10CBF9A99D430753AD0AE (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m1595B542FEE8A9C01F3DB0B958F701F8F0A6D730_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_mA60BA18571108CDB4B49B76D1544DC204BD2AB34_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m6A9761CF6ADDB200800BC055298CF4AF4BA44CA0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Contains_m2A410A484DC099A68EE94C2134DFDB0609D241C7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* V_0 = NULL;
	int32_t V_1 = 0;
	TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* V_2 = NULL;
	bool V_3 = false;
	{
		// foreach (TMP_SubMeshUI sub in GetComponentsInChildren<TMP_SubMeshUI>())
		TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* L_0;
		L_0 = Component_GetComponentsInChildren_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m1595B542FEE8A9C01F3DB0B958F701F8F0A6D730(__this, Component_GetComponentsInChildren_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m1595B542FEE8A9C01F3DB0B958F701F8F0A6D730_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0052;
	}

IL_000d:
	{
		// foreach (TMP_SubMeshUI sub in GetComponentsInChildren<TMP_SubMeshUI>())
		TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// m_tempSubMsh = sub.gameObject.AddComponentIfMissing<CurvedUITMPSubmesh>();
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_5 = V_2;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6;
		L_6 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_5, NULL);
		CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_7;
		L_7 = CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_mA60BA18571108CDB4B49B76D1544DC204BD2AB34(L_6, CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_mA60BA18571108CDB4B49B76D1544DC204BD2AB34_RuntimeMethod_var);
		__this->___m_tempSubMsh_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_tempSubMsh_9), (void*)L_7);
		// if (!subMeshes.Contains(m_tempSubMsh))
		List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* L_8 = __this->___subMeshes_15;
		CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_9 = __this->___m_tempSubMsh_9;
		NullCheck(L_8);
		bool L_10;
		L_10 = List_1_Contains_m2A410A484DC099A68EE94C2134DFDB0609D241C7(L_8, L_9, List_1_Contains_m2A410A484DC099A68EE94C2134DFDB0609D241C7_RuntimeMethod_var);
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_004d;
		}
	}
	{
		// subMeshes.Add(m_tempSubMsh);
		List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* L_12 = __this->___subMeshes_15;
		CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_13 = __this->___m_tempSubMsh_9;
		NullCheck(L_12);
		List_1_Add_m6A9761CF6ADDB200800BC055298CF4AF4BA44CA0_inline(L_12, L_13, List_1_Add_m6A9761CF6ADDB200800BC055298CF4AF4BA44CA0_RuntimeMethod_var);
	}

IL_004d:
	{
		int32_t L_14 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0052:
	{
		// foreach (TMP_SubMeshUI sub in GetComponentsInChildren<TMP_SubMeshUI>())
		int32_t L_15 = V_1;
		TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29* L_16 = V_0;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUITMP::ShouldTesselate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUITMP_ShouldTesselate_m689E16AB706109496751DEA326C551CF1214D54B (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_7;
	memset((&V_7), 0, sizeof(V_7));
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B13_0 = 0;
	{
		// if (savedSize != (transform as RectTransform).rect.size)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = __this->___savedSize_10;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_1;
		L_1 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_1, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_2;
		L_2 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_1, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_2 = L_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3;
		L_3 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_2), NULL);
		bool L_4;
		L_4 = Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline(L_0, L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0030;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_017f;
	}

IL_0030:
	{
		// else if (savedLocalScale != mySettings.transform.localScale)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = __this->___savedLocalScale_13;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_7 = __this->___mySettings_6;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F(L_8, NULL);
		bool L_10;
		L_10 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_6, L_9, NULL);
		V_4 = L_10;
		bool L_11 = V_4;
		if (!L_11)
		{
			goto IL_0059;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_017f;
	}

IL_0059:
	{
		// else if (savedGlobalScale != mySettings.transform.lossyScale)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___savedGlobalScale_14;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_13 = __this->___mySettings_6;
		NullCheck(L_13);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_13, NULL);
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07(L_14, NULL);
		bool L_16;
		L_16 = Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline(L_12, L_15, NULL);
		V_5 = L_16;
		bool L_17 = V_5;
		if (!L_17)
		{
			goto IL_0082;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_017f;
	}

IL_0082:
	{
		// else if (!savedUp.AlmostEqual(mySettings.transform.worldToLocalMatrix.MultiplyVector(transform.up)))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = __this->___savedUp_11;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_19 = __this->___mySettings_6;
		NullCheck(L_19);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_20;
		L_20 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_19, NULL);
		NullCheck(L_20);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_21;
		L_21 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_20, NULL);
		V_7 = L_21;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_22;
		L_22 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_22, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_7), L_23, NULL);
		bool L_25;
		L_25 = CurvedUIExtensionMethods_AlmostEqual_m54CB785F14677C4EAEF1E4CFBAE87592851BE716(L_18, L_24, (0.01), NULL);
		V_6 = (bool)((((int32_t)L_25) == ((int32_t)0))? 1 : 0);
		bool L_26 = V_6;
		if (!L_26)
		{
			goto IL_00cb;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_017f;
	}

IL_00cb:
	{
		// Vector3 testedPos = mySettings.transform.worldToLocalMatrix.MultiplyPoint3x4(transform.position);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_27 = __this->___mySettings_6;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		NullCheck(L_28);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_29;
		L_29 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_28, NULL);
		V_7 = L_29;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_30, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32;
		L_32 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_7), L_31, NULL);
		V_0 = L_32;
		// if (!savedPos.AlmostEqual(testedPos))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = __this->___savedPos_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = V_0;
		bool L_35;
		L_35 = CurvedUIExtensionMethods_AlmostEqual_m54CB785F14677C4EAEF1E4CFBAE87592851BE716(L_33, L_34, (0.01), NULL);
		V_8 = (bool)((((int32_t)L_35) == ((int32_t)0))? 1 : 0);
		bool L_36 = V_8;
		if (!L_36)
		{
			goto IL_017b;
		}
	}
	{
		// if (mySettings.Shape != CurvedUISettings.CurvedUIShape.CYLINDER || Mathf.Pow(testedPos.x - savedPos.x, 2) > 0.00001 || Mathf.Pow(testedPos.z - savedPos.z, 2) > 0.00001)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_37 = __this->___mySettings_6;
		NullCheck(L_37);
		int32_t L_38;
		L_38 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960(L_37, NULL);
		if (L_38)
		{
			goto IL_016e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_0;
		float L_40 = L_39.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_41 = (&__this->___savedPos_12);
		float L_42 = L_41->___x_2;
		float L_43;
		L_43 = powf(((float)il2cpp_codegen_subtract(L_40, L_42)), (2.0f));
		if ((((double)((double)L_43)) > ((double)(1.0000000000000001E-05))))
		{
			goto IL_016e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = V_0;
		float L_45 = L_44.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_46 = (&__this->___savedPos_12);
		float L_47 = L_46->___z_4;
		float L_48;
		L_48 = powf(((float)il2cpp_codegen_subtract(L_45, L_47)), (2.0f));
		G_B13_0 = ((((double)((double)L_48)) > ((double)(1.0000000000000001E-05)))? 1 : 0);
		goto IL_016f;
	}

IL_016e:
	{
		G_B13_0 = 1;
	}

IL_016f:
	{
		V_9 = (bool)G_B13_0;
		bool L_49 = V_9;
		if (!L_49)
		{
			goto IL_017a;
		}
	}
	{
		// return true;
		V_3 = (bool)1;
		goto IL_017f;
	}

IL_017a:
	{
	}

IL_017b:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_017f;
	}

IL_017f:
	{
		// }
		bool L_50 = V_3;
		return L_50;
	}
}
// System.Void CurvedUI.CurvedUITMP::TMPTextChangedCallback(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (obj != (object)tmpText) return;
		RuntimeObject* L_0 = ___obj0;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_1 = __this->___tmpText_5;
		V_0 = (bool)((((int32_t)((((RuntimeObject*)(RuntimeObject*)L_0) == ((RuntimeObject*)(TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957*)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0013;
		}
	}
	{
		// if (obj != (object)tmpText) return;
		goto IL_001a;
	}

IL_0013:
	{
		// tesselationRequired = true;
		__this->___tesselationRequired_18 = (bool)1;
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::TesselationRequiredCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	{
		// tesselationRequired = true;
		__this->___tesselationRequired_18 = (bool)1;
		// curvingRequired = true;
		__this->___curvingRequired_17 = (bool)1;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMP::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP__ctor_m73B0E23ADEFBD75FE144923AA9829A139A459EF3 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE0CF77F0BE4341A4B9E794E8F15E91789C40C6D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<UIVertex> m_UIVerts = new List<UIVertex>();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_0, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		__this->___m_UIVerts_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_UIVerts_7), (void*)L_0);
		// private List<CurvedUITMPSubmesh> subMeshes = new List<CurvedUITMPSubmesh>();
		List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD* L_1 = (List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD*)il2cpp_codegen_object_new(List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mE0CF77F0BE4341A4B9E794E8F15E91789C40C6D2(L_1, List_1__ctor_mE0CF77F0BE4341A4B9E794E8F15E91789C40C6D2_RuntimeMethod_var);
		__this->___subMeshes_15 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___subMeshes_15), (void*)L_1);
		// public bool Dirty = false; // set this to true to force mesh update.
		__this->___Dirty_16 = (bool)0;
		// private bool curvingRequired = false;
		__this->___curvingRequired_17 = (bool)0;
		// private bool tesselationRequired = false;
		__this->___tesselationRequired_18 = (bool)0;
		// private bool quitting = false;
		__this->___quitting_19 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_Awake_m4167FBF1271690D82ABE54633C06E80AD50DB605 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// myField = this.GetComponent<TMP_InputField>();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0;
		L_0 = Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28(__this, Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28_RuntimeMethod_var);
		__this->___myField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myField_4), (void*)L_0);
		// if (myField)
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_1 = __this->___myField_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0023;
		}
	}
	{
		// CheckAndConvertMask();
		CurvedUITMPInputFieldCaret_CheckAndConvertMask_mE0063CE6557D6EC0F7EFADCF6D652C1E107E1654(__this, NULL);
	}

IL_0023:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_Update_mFD346CD3663B750FBD097C0C30E033A039CB87D3 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (selected)
		bool L_0 = __this->___selected_8;
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// UpdateCaret();
		CurvedUITMPInputFieldCaret_UpdateCaret_m433E3D7AC784A906D073DFD42A3EBCAA1C424F25(__this, NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::OnSelect(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_OnSelect_mC107B37A5A807A93928739D071CF1AA81A63DD32 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (myCaret == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___myCaret_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// CreateCaret();
		CurvedUITMPInputFieldCaret_CreateCaret_m6D5029656825BDE5458938D770C85B9075FFAF92(__this, NULL);
	}

IL_0018:
	{
		// selected = true;
		__this->___selected_8 = (bool)1;
		// myCaret.gameObject.SetActive(true);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_3 = __this->___myCaret_5;
		NullCheck(L_3);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_3, NULL);
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)1, NULL);
		// StartCoroutine(CaretBlinker());
		RuntimeObject* L_5;
		L_5 = CurvedUITMPInputFieldCaret_CaretBlinker_m72C5EC00E30E087A2970AEA2228794CA9D29CBAE(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_6;
		L_6 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_5, NULL);
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::OnDeselect(UnityEngine.EventSystems.BaseEventData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_OnDeselect_mC13CB58ABA420338B80D38EA52BA6B616D005612 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___eventData0, const RuntimeMethod* method) 
{
	{
		// selected = false;
		__this->___selected_8 = (bool)0;
		// myCaret.gameObject.SetActive(false);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___myCaret_5;
		NullCheck(L_0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_0, NULL);
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator CurvedUI.CurvedUITMPInputFieldCaret::CaretBlinker()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurvedUITMPInputFieldCaret_CaretBlinker_m72C5EC00E30E087A2970AEA2228794CA9D29CBAE (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* L_0 = (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C*)il2cpp_codegen_object_new(U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CCaretBlinkerU3Ed__10__ctor_mC94964453788B59FFB9C854766DD5AE77DEFCF06(L_0, 0, NULL);
		U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::CreateCaret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_CreateCaret_m6D5029656825BDE5458938D770C85B9075FFAF92 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC643805631DCFA7AF65357A1ADA341A23CA30AA);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// GameObject go = new GameObject("CurvedUI_TMPCaret");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)il2cpp_codegen_object_new(GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameObject__ctor_m37D512B05D292F954792225E6C6EEE95293A9B88(L_0, _stringLiteralDC643805631DCFA7AF65357A1ADA341A23CA30AA, NULL);
		V_0 = L_0;
		// go.AddComponent<RectTransform>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = V_0;
		NullCheck(L_1);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_2;
		L_2 = GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388(L_1, GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var);
		// go.AddComponent<Image>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		NullCheck(L_3);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_4;
		L_4 = GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0(L_3, GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var);
		// go.AddComponent<CurvedUIVertexEffect>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = V_0;
		NullCheck(L_5);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_6;
		L_6 = GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783(L_5, GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783_RuntimeMethod_var);
		// go.transform.SetParent(transform.GetChild(0).GetChild(0));//Nest the cursor down with the scrolling child so it properly moves with text.
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = V_0;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_9;
		L_9 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_9);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_9, 0, NULL);
		NullCheck(L_10);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11;
		L_11 = Transform_GetChild_mE686DF0C7AAC1F7AEF356967B1C04D8B8E240EAF(L_10, 0, NULL);
		NullCheck(L_8);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_8, L_11, NULL);
		// go.transform.localScale = Vector3.one;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = V_0;
		NullCheck(L_12);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13;
		L_13 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_12, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14;
		L_14 = Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline(NULL);
		NullCheck(L_13);
		Transform_set_localScale_mBA79E811BAF6C47B80FF76414C12B47B3CD03633(L_13, L_14, NULL);
		// (go.transform as RectTransform).anchoredPosition3D = Vector3.zero;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = V_0;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_16, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		RectTransform_set_anchoredPosition3D_m214FBDBA019743FAED8FA03857475073AA0539C4(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_16, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_17, NULL);
		// (go.transform as RectTransform).pivot = new Vector2(0, 1.0f);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = V_0;
		NullCheck(L_18);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_19;
		L_19 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_18, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_20;
		memset((&L_20), 0, sizeof(L_20));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_20), (0.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_19, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		RectTransform_set_pivot_m79D0177D383D432A93C2615F1932B739B1C6E146(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_19, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), L_20, NULL);
		// go.GetComponent<Image>().color = myField.caretColor;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = V_0;
		NullCheck(L_21);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_22;
		L_22 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_21, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_23 = __this->___myField_4;
		NullCheck(L_23);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_24;
		L_24 = TMP_InputField_get_caretColor_m9733E1CB5CAD3CCFA9C32343D12F0095BA6DC76F(L_23, NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_22, L_24);
		// myCaret = go.transform as RectTransform;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = V_0;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_25, NULL);
		__this->___myCaret_5 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_26, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myCaret_5), (void*)((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_26, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		// go.transform.SetAsFirstSibling();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = V_0;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_27, NULL);
		NullCheck(L_28);
		Transform_SetAsFirstSibling_mBE0D0E76099F829466DC2FBD71ACFCF3C8EC03BD(L_28, NULL);
		// myField.customCaretColor = true;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_29 = __this->___myField_4;
		NullCheck(L_29);
		TMP_InputField_set_customCaretColor_m9A33CA9154050A1C09881207B9C7B832B6C44B6B(L_29, (bool)1, NULL);
		// origCaretColor = myField.caretColor;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_30 = __this->___myField_4;
		NullCheck(L_30);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		L_31 = TMP_InputField_get_caretColor_m9733E1CB5CAD3CCFA9C32343D12F0095BA6DC76F(L_30, NULL);
		__this->___origCaretColor_6 = L_31;
		// myField.caretColor = new Color(0f, 0f, 0f, 0f);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_32 = __this->___myField_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		memset((&L_33), 0, sizeof(L_33));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_33), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		TMP_InputField_set_caretColor_mAF2AF8646B44D6AAA885F2A664DB88431E22177C(L_32, L_33, NULL);
		// origSelectionColor = myField.selectionColor;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_34 = __this->___myField_4;
		NullCheck(L_34);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_35;
		L_35 = TMP_InputField_get_selectionColor_m99D5B9FBC11FEAA170C113FB238120A73429F5BB(L_34, NULL);
		__this->___origSelectionColor_7 = L_35;
		// myField.selectionColor = new Color(0f, 0f, 0f, 0f);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_36 = __this->___myField_4;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_37;
		memset((&L_37), 0, sizeof(L_37));
		Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline((&L_37), (0.0f), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_36);
		TMP_InputField_set_selectionColor_m9B30F4DC90BBD21ECDA6B5888F2F8E4B2EC7686D(L_36, L_37, NULL);
		// go.gameObject.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = V_0;
		NullCheck(L_38);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39;
		L_39 = GameObject_get_gameObject_m0878015B8CF7F5D432B583C187725810D27B57DC(L_38, NULL);
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::UpdateCaret()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_UpdateCaret_m433E3D7AC784A906D073DFD42A3EBCAA1C424F25 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	bool V_2 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B6_0;
	memset((&G_B6_0), 0, sizeof(G_B6_0));
	{
		// if (myCaret == null)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___myCaret_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_1;
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_0018;
		}
	}
	{
		// CreateCaret();
		CurvedUITMPInputFieldCaret_CreateCaret_m6D5029656825BDE5458938D770C85B9075FFAF92(__this, NULL);
	}

IL_0018:
	{
		// Vector2 newCaretPos = GetLocalPositionInText(myField.caretPosition);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___myField_4;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = TMP_InputField_get_caretPosition_m1F103634776349DFA375AC8C64F1D2535A693A15(L_3, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5;
		L_5 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_4, NULL);
		V_0 = L_5;
		// if (myField.selectionFocusPosition != myField.selectionAnchorPosition) // user is selecting text is those two are not equal.
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_6 = __this->___myField_4;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_6, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_8 = __this->___myField_4;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_8, NULL);
		V_2 = (bool)((((int32_t)((((int32_t)L_7) == ((int32_t)L_9))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0159;
		}
	}
	{
		// selectingText = true;
		__this->___selectingText_9 = (bool)1;
		// Vector2 selectionSize = new Vector2(
		//     GetLocalPositionInText(myField.selectionAnchorPosition).x - GetLocalPositionInText(myField.selectionFocusPosition).x,
		//     GetLocalPositionInText(myField.selectionAnchorPosition).y - GetLocalPositionInText(myField.selectionFocusPosition).y
		//     );
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_11 = __this->___myField_4;
		NullCheck(L_11);
		int32_t L_12;
		L_12 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_11, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_12, NULL);
		float L_14 = L_13.___x_0;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_15 = __this->___myField_4;
		NullCheck(L_15);
		int32_t L_16;
		L_16 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_15, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17;
		L_17 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_16, NULL);
		float L_18 = L_17.___x_0;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_19 = __this->___myField_4;
		NullCheck(L_19);
		int32_t L_20;
		L_20 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_19, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21;
		L_21 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_20, NULL);
		float L_22 = L_21.___y_1;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_23 = __this->___myField_4;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_23, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_24, NULL);
		float L_26 = L_25.___y_1;
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), ((float)il2cpp_codegen_subtract(L_14, L_18)), ((float)il2cpp_codegen_subtract(L_22, L_26)), NULL);
		// newCaretPos = selectionSize.x < 0 ? GetLocalPositionInText(myField.selectionAnchorPosition) : GetLocalPositionInText(myField.selectionFocusPosition);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_27 = V_3;
		float L_28 = L_27.___x_0;
		if ((((float)L_28) < ((float)(0.0f))))
		{
			goto IL_00d5;
		}
	}
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_29 = __this->___myField_4;
		NullCheck(L_29);
		int32_t L_30;
		L_30 = TMP_InputField_get_selectionFocusPosition_m64C9DB19CDB18E29B7CB02DCC84B5F05ACDB473E(L_29, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_31;
		L_31 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_30, NULL);
		G_B6_0 = L_31;
		goto IL_00e6;
	}

IL_00d5:
	{
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_32 = __this->___myField_4;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = TMP_InputField_get_selectionAnchorPosition_mAAD925C368B16EFE972C11F551A1D9DCB93B0B93(L_32, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_34;
		L_34 = CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704(__this, L_33, NULL);
		G_B6_0 = L_34;
	}

IL_00e6:
	{
		V_0 = G_B6_0;
		// selectionSize = new Vector2(Mathf.Abs(selectionSize.x), Mathf.Abs(selectionSize.y) + myField.textComponent.fontSize);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_35 = V_3;
		float L_36 = L_35.___x_0;
		float L_37;
		L_37 = fabsf(L_36);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_38 = V_3;
		float L_39 = L_38.___y_1;
		float L_40;
		L_40 = fabsf(L_39);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_41 = __this->___myField_4;
		NullCheck(L_41);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_42;
		L_42 = TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE(L_41, NULL);
		NullCheck(L_42);
		float L_43;
		L_43 = TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731(L_42, NULL);
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&V_3), L_37, ((float)il2cpp_codegen_add(L_40, L_43)), NULL);
		// myCaret.sizeDelta = new Vector2(selectionSize.x, selectionSize.y);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_44 = __this->___myCaret_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_45 = V_3;
		float L_46 = L_45.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47 = V_3;
		float L_48 = L_47.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_49;
		memset((&L_49), 0, sizeof(L_49));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_49), L_46, L_48, /*hidden argument*/NULL);
		NullCheck(L_44);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_44, L_49, NULL);
		// myCaret.anchoredPosition = newCaretPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_50 = __this->___myCaret_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_51 = V_0;
		NullCheck(L_50);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_50, L_51, NULL);
		// myCaret.GetComponent<Image>().color = origSelectionColor;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_52 = __this->___myCaret_5;
		NullCheck(L_52);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_53;
		L_53 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_52, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54 = __this->___origSelectionColor_7;
		NullCheck(L_53);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_53, L_54);
		goto IL_01b3;
	}

IL_0159:
	{
		// selectingText = false;
		__this->___selectingText_9 = (bool)0;
		// myCaret.sizeDelta = new Vector2(myField.caretWidth, myField.textComponent.fontSize);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_55 = __this->___myCaret_5;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_56 = __this->___myField_4;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = TMP_InputField_get_caretWidth_mA95E0A88F505D9618791AEDE9D649CA70F7E3B65(L_56, NULL);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_58 = __this->___myField_4;
		NullCheck(L_58);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_59;
		L_59 = TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE(L_58, NULL);
		NullCheck(L_59);
		float L_60;
		L_60 = TMP_Text_get_fontSize_m13A8365A56EA2B726EAD826B4A69C8918A528731(L_59, NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_61;
		memset((&L_61), 0, sizeof(L_61));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_61), ((float)L_57), L_60, /*hidden argument*/NULL);
		NullCheck(L_55);
		RectTransform_set_sizeDelta_mC9A980EA6036E6725EF24CEDF3EE80A9B2B50EE5(L_55, L_61, NULL);
		// myCaret.anchoredPosition = newCaretPos;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_62 = __this->___myCaret_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_63 = V_0;
		NullCheck(L_62);
		RectTransform_set_anchoredPosition_mF903ACE04F6959B1CD67E2B94FABC0263068F965(L_62, L_63, NULL);
		// myCaret.GetComponent<Image>().color = origCaretColor;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_64 = __this->___myCaret_5;
		NullCheck(L_64);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_65;
		L_65 = Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79(L_64, Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_66 = __this->___origCaretColor_6;
		NullCheck(L_65);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_65, L_66);
	}

IL_01b3:
	{
		// }
		return;
	}
}
// UnityEngine.Vector2 CurvedUI.CurvedUITMPInputFieldCaret::GetLocalPositionInText(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CurvedUITMPInputFieldCaret_GetLocalPositionInText_m8813681023A5E99812CA317697044C47944B7704 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, int32_t ___charNo0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* V_1 = NULL;
	TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (myField.isFocused)
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___myField_4;
		NullCheck(L_0);
		bool L_1;
		L_1 = TMP_InputField_get_isFocused_m7FD1AA3B92404C30596FF6EE5F644757A2F060DE(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0062;
		}
	}
	{
		// TMP_TextInfo txtInfo = myField.textComponent.textInfo;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_3 = __this->___myField_4;
		NullCheck(L_3);
		TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* L_4;
		L_4 = TMP_InputField_get_textComponent_m85C4BC3F4C18206B3B942F03DB0B953B028EE1CE(L_3, NULL);
		NullCheck(L_4);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_5;
		L_5 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E(L_4, NULL);
		V_1 = L_5;
		// if (charNo > txtInfo.characterCount - 1) //do not go over the text length.
		int32_t L_6 = ___charNo0;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_7 = V_1;
		NullCheck(L_7);
		int32_t L_8 = L_7->___characterCount_3;
		V_3 = (bool)((((int32_t)L_6) > ((int32_t)((int32_t)il2cpp_codegen_subtract(L_8, 1))))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_003b;
		}
	}
	{
		// charNo = txtInfo.characterCount - 1;
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_10 = V_1;
		NullCheck(L_10);
		int32_t L_11 = L_10->___characterCount_3;
		___charNo0 = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
	}

IL_003b:
	{
		// TMP_CharacterInfo charInfo = txtInfo.characterInfo[charNo];
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_12 = V_1;
		NullCheck(L_12);
		TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99* L_13 = L_12->___characterInfo_11;
		int32_t L_14 = ___charNo0;
		NullCheck(L_13);
		int32_t L_15 = L_14;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		V_2 = L_16;
		// return new Vector2(charInfo.topLeft.x, charInfo.ascender);
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_17 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = L_17.___topLeft_19;
		float L_19 = L_18.___x_2;
		TMP_CharacterInfo_t8B8FF32D6AACE251F2E7835AA5BC6608D535D9F8 L_20 = V_2;
		float L_21 = L_20.___ascender_25;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_22), L_19, L_21, /*hidden argument*/NULL);
		V_4 = L_22;
		goto IL_006b;
	}

IL_0062:
	{
		// else return Vector2.zero; // field not focused, return 0,0
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_23;
		L_23 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		V_4 = L_23;
		goto IL_006b;
	}

IL_006b:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_24 = V_4;
		return L_24;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::CheckAndConvertMask()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_CheckAndConvertMask_mE0063CE6557D6EC0F7EFADCF6D652C1E107E1654 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIExtensionMethods_AddComponentIfMissing_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m8D827B7D1B6A4BF71180B04A5C9F809CFB9747F7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIExtensionMethods_AddComponentIfMissing_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m73B2BCA1676B787256F424483A1EB6B9841A4695_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_1 = NULL;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	{
		// foreach(Transform trans in this.transform)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0;
		L_0 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Transform_GetEnumerator_mA7E1C882ACA0C33E284711CD09971DEA3FFEF404(L_0, NULL);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_2 = V_0;
					V_3 = ((RuntimeObject*)IsInst((RuntimeObject*)L_2, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_3 = V_3;
					if (!L_3)
					{
						goto IL_0065;
					}
				}
				{
					RuntimeObject* L_4 = V_3;
					NullCheck(L_4);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_4);
				}

IL_0065:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_004a_1;
			}

IL_0010_1:
			{
				// foreach(Transform trans in this.transform)
				RuntimeObject* L_5 = V_0;
				NullCheck(L_5);
				RuntimeObject* L_6;
				L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_5);
				V_1 = ((Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*)CastclassClass((RuntimeObject*)L_6, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var));
				// if(trans.GetComponent<RectMask2D>()!= null)
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7 = V_1;
				NullCheck(L_7);
				RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* L_8;
				L_8 = Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2(L_7, Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				bool L_9;
				L_9 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
				V_2 = L_9;
				bool L_10 = V_2;
				if (!L_10)
				{
					goto IL_0049_1;
				}
			}
			{
				// DestroyImmediate (trans.GetComponent<RectMask2D>());
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = V_1;
				NullCheck(L_11);
				RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* L_12;
				L_12 = Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2(L_11, Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2_RuntimeMethod_var);
				il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
				Object_DestroyImmediate_m8249CABCDF344BE3A67EE765122EBB415DC2BC57(L_12, NULL);
				// trans.AddComponentIfMissing<Image>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = V_1;
				Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_14;
				L_14 = CurvedUIExtensionMethods_AddComponentIfMissing_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m8D827B7D1B6A4BF71180B04A5C9F809CFB9747F7(L_13, CurvedUIExtensionMethods_AddComponentIfMissing_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m8D827B7D1B6A4BF71180B04A5C9F809CFB9747F7_RuntimeMethod_var);
				// trans.AddComponentIfMissing<Mask>();
				Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15 = V_1;
				Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213* L_16;
				L_16 = CurvedUIExtensionMethods_AddComponentIfMissing_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m73B2BCA1676B787256F424483A1EB6B9841A4695(L_15, CurvedUIExtensionMethods_AddComponentIfMissing_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m73B2BCA1676B787256F424483A1EB6B9841A4695_RuntimeMethod_var);
			}

IL_0049_1:
			{
			}

IL_004a_1:
			{
				// foreach(Transform trans in this.transform)
				RuntimeObject* L_17 = V_0;
				NullCheck(L_17);
				bool L_18;
				L_18 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_17);
				if (L_18)
				{
					goto IL_0010_1;
				}
			}
			{
				goto IL_0066;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0066:
	{
		// }
		return;
	}
}
// UnityEngine.Color CurvedUI.CurvedUITMPInputFieldCaret::get_CaretColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F CurvedUITMPInputFieldCaret_get_CaretColor_m4D7BFED4BAA481F61E54C735F82EEE2AF517FA3A (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return origCaretColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___origCaretColor_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return origCaretColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::set_CaretColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_set_CaretColor_mF9F00D2FD40360FC235877F057C4AD31C8046E79 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// set { origCaretColor = value; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___origCaretColor_6 = L_0;
		// set { origCaretColor = value; }
		return;
	}
}
// UnityEngine.Color CurvedUI.CurvedUITMPInputFieldCaret::get_SelectionColor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F CurvedUITMPInputFieldCaret_get_SelectionColor_mD4BF91085A9DDF8382BD1F99F1E75B2566C766EA (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return origSelectionColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = __this->___origSelectionColor_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return origSelectionColor; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::set_SelectionColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_set_SelectionColor_mB54150D6772E1B39CE66366F1DE443674FCBEE43 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) 
{
	{
		// set { origSelectionColor = value; }
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___value0;
		__this->___origSelectionColor_7 = L_0;
		// set { origSelectionColor = value; }
		return;
	}
}
// System.Single CurvedUI.CurvedUITMPInputFieldCaret::get_CaretBlinkRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUITMPInputFieldCaret_get_CaretBlinkRate_m59FF878D8BEED788983786D46E2E07EF10517414 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return myField.caretBlinkRate; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___myField_4;
		NullCheck(L_0);
		float L_1;
		L_1 = TMP_InputField_get_caretBlinkRate_mACAF2093330BB9CB0B8C5F7D76EAA4EB0AE4DD18(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return myField.caretBlinkRate; }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::set_CaretBlinkRate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret_set_CaretBlinkRate_m51D44DA31C805F4230D4748FF393A20665E67FEF (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, float ___value0, const RuntimeMethod* method) 
{
	{
		// set { myField.caretBlinkRate = value; }
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_0 = __this->___myField_4;
		float L_1 = ___value0;
		NullCheck(L_0);
		TMP_InputField_set_caretBlinkRate_m4D4B8F3C2169EE3FA7B27BECBD1563BFAD7B41F7(L_0, L_1, NULL);
		// set { myField.caretBlinkRate = value; }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPInputFieldCaret__ctor_mEAD98784C4CC176617278B6634C6DBBF22E37B29 (CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* __this, const RuntimeMethod* method) 
{
	{
		// bool selected = false;
		__this->___selected_8 = (bool)0;
		// bool selectingText = false;
		__this->___selectingText_9 = (bool)0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkerU3Ed__10__ctor_mC94964453788B59FFB9C854766DD5AE77DEFCF06 (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkerU3Ed__10_System_IDisposable_Dispose_m7047638C4D04F18DAFE67D4B1ED0CB4AC422A8FF (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CCaretBlinkerU3Ed__10_MoveNext_m90B74856F6710E73256662FA30DF3A31971706B3 (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B10_0 = NULL;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B9_0 = NULL;
	int32_t G_B11_0 = 0;
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* G_B11_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0014;
		}
	}
	{
		goto IL_0016;
	}

IL_0012:
	{
		goto IL_0018;
	}

IL_0014:
	{
		goto IL_008c;
	}

IL_0016:
	{
		return (bool)0;
	}

IL_0018:
	{
		__this->___U3CU3E1__state_0 = (-1);
		goto IL_0094;
	}

IL_0022:
	{
		// myCaret.gameObject.SetActive(selectingText ? true : !myCaret.gameObject.activeSelf);
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_3 = __this->___U3CU3E4__this_2;
		NullCheck(L_3);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = L_3->___myCaret_5;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5;
		L_5 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_4, NULL);
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_6 = __this->___U3CU3E4__this_2;
		NullCheck(L_6);
		bool L_7 = L_6->___selectingText_9;
		G_B9_0 = L_5;
		if (L_7)
		{
			G_B10_0 = L_5;
			goto IL_005a;
		}
	}
	{
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_8 = __this->___U3CU3E4__this_2;
		NullCheck(L_8);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9 = L_8->___myCaret_5;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		bool L_11;
		L_11 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_10, NULL);
		G_B11_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		G_B11_1 = G_B9_0;
		goto IL_005b;
	}

IL_005a:
	{
		G_B11_0 = 1;
		G_B11_1 = G_B10_0;
	}

IL_005b:
	{
		NullCheck(G_B11_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(G_B11_1, (bool)G_B11_0, NULL);
		// yield return new WaitForSeconds(0.5f / (float)myField.caretBlinkRate);
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_12 = __this->___U3CU3E4__this_2;
		NullCheck(L_12);
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_13 = L_12->___myField_4;
		NullCheck(L_13);
		float L_14;
		L_14 = TMP_InputField_get_caretBlinkRate_mACAF2093330BB9CB0B8C5F7D76EAA4EB0AE4DD18(L_13, NULL);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_15 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_15, ((float)((0.5f)/((float)L_14))), NULL);
		__this->___U3CU3E2__current_1 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_15);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_008c:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_0094:
	{
		// while (selected)
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_16 = __this->___U3CU3E4__this_2;
		NullCheck(L_16);
		bool L_17 = L_16->___selected_8;
		V_1 = L_17;
		bool L_18 = V_1;
		if (L_18)
		{
			goto IL_0022;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCaretBlinkerU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0F6FDD0B8B49CB8F93F38F06C465B403C8910F34 (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CCaretBlinkerU3Ed__10_System_Collections_IEnumerator_Reset_m4DF2E74FC878045B0B26356BC2394CEA1A0C0A38 (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CCaretBlinkerU3Ed__10_System_Collections_IEnumerator_Reset_m4DF2E74FC878045B0B26356BC2394CEA1A0C0A38_RuntimeMethod_var)));
	}
}
// System.Object CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CCaretBlinkerU3Ed__10_System_Collections_IEnumerator_get_Current_m57F4F1C216A14B675561231138678947DCAD8A87 (U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CurvedUI.CurvedUITMPSubmesh::UpdateSubmesh(System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPSubmesh_UpdateSubmesh_mA3045387F2148F655658002E28CF31A87BAC7F1D (CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* __this, bool ___tesselate0, bool ___curve1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m1C73B3D3E924B85529A025308CD97ACF478C95FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB300C664BECCAFAF312075478DA59178E9B81A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m5F6AF2A1EF0047D4F719FA30ADA5314A3EC8BBBD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t G_B13_0 = 0;
	int32_t G_B20_0 = 0;
	{
		// if (TMPsub == null) TMPsub = gameObject.GetComponent<TMP_SubMeshUI>();
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_0 = __this->___TMPsub_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0022;
		}
	}
	{
		// if (TMPsub == null) TMPsub = gameObject.GetComponent<TMP_SubMeshUI>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_4;
		L_4 = GameObject_GetComponent_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m5F6AF2A1EF0047D4F719FA30ADA5314A3EC8BBBD(L_3, GameObject_GetComponent_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m5F6AF2A1EF0047D4F719FA30ADA5314A3EC8BBBD_RuntimeMethod_var);
		__this->___TMPsub_8 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TMPsub_8), (void*)L_4);
	}

IL_0022:
	{
		// if (TMPsub == null) return;
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_5 = __this->___TMPsub_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0037;
		}
	}
	{
		// if (TMPsub == null) return;
		goto IL_0189;
	}

IL_0037:
	{
		// if (TMPtext == null)TMPtext = GetComponentInParent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_8 = __this->___TMPtext_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_9;
		bool L_10 = V_2;
		if (!L_10)
		{
			goto IL_0053;
		}
	}
	{
		// if (TMPtext == null)TMPtext = GetComponentInParent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_11;
		L_11 = Component_GetComponentInParent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m1C73B3D3E924B85529A025308CD97ACF478C95FE(__this, Component_GetComponentInParent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m1C73B3D3E924B85529A025308CD97ACF478C95FE_RuntimeMethod_var);
		__this->___TMPtext_9 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TMPtext_9), (void*)L_11);
	}

IL_0053:
	{
		// if (crvdVE == null)crvdVE = gameObject.AddComponentIfMissing<CurvedUIVertexEffect>();
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_12 = __this->___crvdVE_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_12, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_13;
		bool L_14 = V_3;
		if (!L_14)
		{
			goto IL_0074;
		}
	}
	{
		// if (crvdVE == null)crvdVE = gameObject.AddComponentIfMissing<CurvedUIVertexEffect>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_16;
		L_16 = CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB300C664BECCAFAF312075478DA59178E9B81A2(L_15, CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB300C664BECCAFAF312075478DA59178E9B81A2_RuntimeMethod_var);
		__this->___crvdVE_7 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___crvdVE_7), (void*)L_16);
	}

IL_0074:
	{
		// if (tesselate || straightMesh == null || vh == null || (!Application.isPlaying))
		bool L_17 = ___tesselate0;
		if (L_17)
		{
			goto IL_0097;
		}
	}
	{
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_18 = __this->___straightMesh_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_19;
		L_19 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_18, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_19)
		{
			goto IL_0097;
		}
	}
	{
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_20 = __this->___vh_4;
		if (!L_20)
		{
			goto IL_0097;
		}
	}
	{
		bool L_21;
		L_21 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		G_B13_0 = ((((int32_t)L_21) == ((int32_t)0))? 1 : 0);
		goto IL_0098;
	}

IL_0097:
	{
		G_B13_0 = 1;
	}

IL_0098:
	{
		V_4 = (bool)G_B13_0;
		bool L_22 = V_4;
		if (!L_22)
		{
			goto IL_00d6;
		}
	}
	{
		// vh = new VertexHelper(TMPsub.mesh);
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_23 = __this->___TMPsub_8;
		NullCheck(L_23);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_24;
		L_24 = TMP_SubMeshUI_get_mesh_m18BAE0DB357DC5D7993D07BD826429AF727548E2(L_23, NULL);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_25 = (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE*)il2cpp_codegen_object_new(VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		VertexHelper__ctor_mE42FAE63F4A3200C38ACFDD9C3F601FDC7E258F8(L_25, L_24, NULL);
		__this->___vh_4 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vh_4), (void*)L_25);
		// straightMesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_26 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_26, NULL);
		__this->___straightMesh_5 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___straightMesh_5), (void*)L_26);
		// vh.FillMesh(straightMesh);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_27 = __this->___vh_4;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_28 = __this->___straightMesh_5;
		NullCheck(L_27);
		VertexHelper_FillMesh_m524F00287F0A0C7683E2CC7768A77B5755544A0E(L_27, L_28, NULL);
		// curve = true;
		___curve1 = (bool)1;
	}

IL_00d6:
	{
		// if (curve)
		bool L_29 = ___curve1;
		V_5 = L_29;
		bool L_30 = V_5;
		if (!L_30)
		{
			goto IL_012c;
		}
	}
	{
		// vh = new VertexHelper(straightMesh);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_31 = __this->___straightMesh_5;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_32 = (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE*)il2cpp_codegen_object_new(VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		VertexHelper__ctor_mE42FAE63F4A3200C38ACFDD9C3F601FDC7E258F8(L_32, L_31, NULL);
		__this->___vh_4 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___vh_4), (void*)L_32);
		// crvdVE.ModifyMesh(vh);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_33 = __this->___crvdVE_7;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_34 = __this->___vh_4;
		NullCheck(L_33);
		VirtualActionInvoker1< VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* >::Invoke(20 /* System.Void UnityEngine.UI.BaseMeshEffect::ModifyMesh(UnityEngine.UI.VertexHelper) */, L_33, L_34);
		// curvedMesh = new Mesh();
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_35 = (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4*)il2cpp_codegen_object_new(Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		Mesh__ctor_m5A9AECEDDAFFD84811ED8928012BDE97A9CEBD00(L_35, NULL);
		__this->___curvedMesh_6 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___curvedMesh_6), (void*)L_35);
		// vh.FillMesh(curvedMesh);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_36 = __this->___vh_4;
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_37 = __this->___curvedMesh_6;
		NullCheck(L_36);
		VertexHelper_FillMesh_m524F00287F0A0C7683E2CC7768A77B5755544A0E(L_36, L_37, NULL);
		// crvdVE.CurvingRequired = true;
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_38 = __this->___crvdVE_7;
		NullCheck(L_38);
		CurvedUIVertexEffect_set_CurvingRequired_m955958BBAD2A29D7606644AA29A073D2FC6C9778(L_38, (bool)1, NULL);
	}

IL_012c:
	{
		// TMPsub.canvasRenderer.SetMesh(curvedMesh);
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_39 = __this->___TMPsub_8;
		NullCheck(L_39);
		CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* L_40;
		L_40 = Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1(L_39, NULL);
		Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* L_41 = __this->___curvedMesh_6;
		NullCheck(L_40);
		CanvasRenderer_SetMesh_m1DF21BBC31233AC324BC08331BB542C619DC7543(L_40, L_41, NULL);
		// if (TMPtext != null && TMPtext.textInfo.materialCount < 2)
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_42 = __this->___TMPtext_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_43;
		L_43 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_42, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_43)
		{
			goto IL_0166;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_44 = __this->___TMPtext_9;
		NullCheck(L_44);
		TMP_TextInfo_t09A8E906329422C3F0C059876801DD695B8D524D* L_45;
		L_45 = TMP_Text_get_textInfo_mA24C606B8EA51436E4AA3B9D6DCDFA7A8995E10E(L_44, NULL);
		NullCheck(L_45);
		int32_t L_46 = L_45->___materialCount_10;
		G_B20_0 = ((((int32_t)L_46) < ((int32_t)2))? 1 : 0);
		goto IL_0167;
	}

IL_0166:
	{
		G_B20_0 = 0;
	}

IL_0167:
	{
		V_6 = (bool)G_B20_0;
		bool L_47 = V_6;
		if (!L_47)
		{
			goto IL_0189;
		}
	}
	{
		// TMPsub.enabled = false;
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_48 = __this->___TMPsub_8;
		NullCheck(L_48);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_48, (bool)0, NULL);
		// TMPsub.enabled = true;
		TMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D* L_49 = __this->___TMPsub_8;
		NullCheck(L_49);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_49, (bool)1, NULL);
	}

IL_0189:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUITMPSubmesh::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMPSubmesh__ctor_m2BC8C8249E4DB8F727A91B4A9B60C9622929AF53 (CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CurvedUI.OptionalDependencyAttribute::.ctor(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionalDependencyAttribute__ctor_mD206637E5553A65E68C6D9A263964D4DAD965A9A (OptionalDependencyAttribute_tA4AF5D8DF636D9E52A8F86F02F7CE9B16E2E8708* __this, String_t* ___dependentClass0, String_t* ___define1, const RuntimeMethod* method) 
{
	{
		// public OptionalDependencyAttribute(string dependentClass, string define)
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// this.dependentClass = dependentClass;
		String_t* L_0 = ___dependentClass0;
		__this->___dependentClass_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dependentClass_0), (void*)L_0);
		// this.define = define;
		String_t* L_1 = ___define1;
		__this->___define_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___define_1), (void*)L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_one_mE6A2D5C6578E94268024613B596BF09F990B1260_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___oneVector_6;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_0 = L_0;
		float L_1 = ___y1;
		__this->___y_1 = L_1;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_m3786F0D6E510D9CFA544523A955870BD2A514C8C_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		float L_3 = ___a3;
		__this->___a_3 = L_3;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ((Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields*)il2cpp_codegen_static_fields_for(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var))->___zeroVector_2;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___item0, const RuntimeMethod* method) 
{
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_1 = (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_6 = V_0;
		int32_t L_7 = V_1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_8);
		return;
	}

IL_0034:
	{
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_9 = ___item0;
		((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___lhs0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___rhs1;
		float L_3 = L_2.___x_0;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_4 = ___lhs0;
		float L_5 = L_4.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6 = ___rhs1;
		float L_7 = L_6.___y_1;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_8, L_9)), ((float)il2cpp_codegen_multiply(L_10, L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___lhs0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___rhs1;
		float L_3 = L_2.___x_2;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___lhs0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___rhs1;
		float L_7 = L_6.___y_3;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___lhs0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___rhs1;
		float L_11 = L_10.___z_4;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		float L_12 = V_0;
		float L_13 = V_0;
		float L_14 = V_1;
		float L_15 = V_1;
		float L_16 = V_2;
		float L_17 = V_2;
		V_3 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_12, L_13)), ((float)il2cpp_codegen_multiply(L_14, L_15)))), ((float)il2cpp_codegen_multiply(L_16, L_17))));
		float L_18 = V_3;
		V_4 = (bool)((((float)L_18) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0043;
	}

IL_0043:
	{
		bool L_19 = V_4;
		return L_19;
	}
}
