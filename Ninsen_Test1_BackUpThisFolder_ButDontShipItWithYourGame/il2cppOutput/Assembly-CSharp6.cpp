﻿#include "pch-cpp.hpp"

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
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC;
// System.Action`1<System.Int32>
struct Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<UnityEngine.Object>
struct Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A;
// System.Action`1<TMPro.TMP_TextInfo>
struct Action_1_tB93AB717F9D419A1BEC832FF76E74EAA32184CC1;
// System.Action`2<System.Int32,System.Int32>
struct Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8;
// System.Comparison`1<UnityEngine.UI.Graphic>
struct Comparison_1_t236C83451572505C1D483C9DFB0550F3470A17B8;
// System.Collections.Generic.Dictionary`2<System.Action`1<UnityEngine.Object>,System.Collections.Generic.LinkedListNode`1<System.Action`1<UnityEngine.Object>>>
struct Dictionary_2_t9FB13B661433DEEC78301CAC98E6FF103A9FF47E;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_tABE19B9C5C52F1DE14F0D3287B2696E7D7419180;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData>
struct Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493;
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
// System.Collections.Generic.IEnumerable`1<UnityEngine.UIVertex>
struct IEnumerable_1_t8D0452F3634038D896C40F4D328AF2B9B4D70219;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex>
struct IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D;
// System.Collections.Generic.LinkedList`1<System.Action`1<UnityEngine.Object>>
struct LinkedList_1_tA75C78C76C8C00278F758EE6873486604C8C880C;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<UnityEngine.Color32>
struct List_1_t3517D52AE25CA3B19051E691E9C06ED03A3AB9B8;
// System.Collections.Generic.List`1<CurvedUI.CurvedUITMPSubmesh>
struct List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD;
// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B;
// System.Collections.Generic.List`1<UnityEngine.UI.Graphic>
struct List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult>
struct List_1_t8292C421BBB00D7661DC07462822936152BAB446;
// System.Collections.Generic.List`1<UnityEngine.UI.RectMask2D>
struct List_1_t099FA1DB61217A855A3732B3DCA8E909BB24E1AB;
// System.Collections.Generic.List`1<UnityEngine.UICharInfo>
struct List_1_t67A1600A303BB89506DFD21B59687088B7E0675B;
// System.Collections.Generic.List`1<UnityEngine.UILineInfo>
struct List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5;
// System.Collections.Generic.List`1<UnityEngine.UIVertex>
struct List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A;
// System.Collections.Generic.List`1<UnityEngine.Vector3>
struct List_1_t77B94703E05C519A9010DD0614F757F974E1CD8B;
// System.Collections.Generic.List`1<UnityEngine.Vector4>
struct List_1_tF42FEB6C3B18B7E7C8F2DE1FEBA00D2491736317;
// System.Predicate`1<UnityEngine.GameObject>
struct Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// TMPro.TMP_TextProcessingStack`1<System.Int32>[]
struct TMP_TextProcessingStack_1U5BU5D_t08293E0BB072311BB96170F351D1083BCA97B9B2;
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.Color32[]
struct Color32U5BU5D_t38116C3E91765C4C5726CE12C77FAD7F9F737259;
// CurvedUI.CurvedUITMPSubmesh[]
struct CurvedUITMPSubmeshU5BU5D_t8CAF4ED9A371C184CAB4123B82D9C518F3E0355B;
// CurvedUI.CurvedUIVertexEffect[]
struct CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// TMPro.FontWeight[]
struct FontWeightU5BU5D_t2A406B5BAB0DD0F06E7F1773DB062E4AF98067BA;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F;
// TMPro.HighlightState[]
struct HighlightStateU5BU5D_tA878A0AF1F4F52882ACD29515AADC277EE135622;
// TMPro.HorizontalAlignmentOptions[]
struct HorizontalAlignmentOptionsU5BU5D_t4D185662282BFB910D8B9A8199E91578E9422658;
// UnityEngine.UI.InputField[]
struct InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1;
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
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// TMPro.TMP_CharacterInfo[]
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
// TMPro.TMP_ColorGradient[]
struct TMP_ColorGradientU5BU5D_t2F65E8C42F268DFF33BB1392D94BCF5B5087308A;
// TMPro.TMP_InputField[]
struct TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8;
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
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
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
// UnityEngine.EventSystems.AxisEventData
struct AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938;
// UnityEngine.EventSystems.BaseEventData
struct BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F;
// UnityEngine.EventSystems.BaseInput
struct BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622;
// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D;
// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// CurvedUI.CurvedUIInputFieldCaret
struct CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA;
// CurvedUIInputModule
struct CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386;
// CurvedUI.CurvedUIRaycaster
struct CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76;
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
// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
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
// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140;
// UnityEngine.UI.LayoutElement
struct LayoutElement_tB1F24CC11AF4AA87015C8D8EE06D22349C5BF40A;
// UnityEngine.UI.LayoutGroup
struct LayoutGroup_t32417833C700E77EDFA7C20034DAFD26604E05CE;
// UnityEngine.UI.Mask
struct Mask_tE8E16C858EC6ECCE545C03802BD1399F7F406213;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// OVRCameraRig
struct OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// CurvedUI.OptionalDependencyAttribute
struct OptionalDependencyAttribute_tA4AF5D8DF636D9E52A8F86F02F7CE9B16E2E8708;
// UnityEngine.EventSystems.PointerEventData
struct PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB;
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
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// TMPro.TextMeshProUGUI
struct TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.TouchScreenKeyboard
struct TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Type
struct Type_t;
// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D;
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
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// UnityEngine.Canvas/WillRenderCanvases
struct WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC;
// CurvedUI.CurvedUIRaycaster/<>c
struct U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A;
// CurvedUI.CurvedUITMPInputFieldCaret/<CaretBlinker>d__10
struct U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1;
// UnityEngine.UI.InputField/EndEditEvent
struct EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655;
// UnityEngine.UI.InputField/OnChangeEvent
struct OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F;
// UnityEngine.UI.InputField/OnValidateInput
struct OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B;
// UnityEngine.UI.InputField/SubmitEvent
struct SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData
struct MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154;
// UnityEngine.EventSystems.PointerInputModule/MouseState
struct MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09;
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
IL2CPP_EXTERN_C RuntimeClass* Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObject_t76FEDD663AB33C991A9C9A23129337651094216F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_tA7C96C24DE882DB5FA936CA80F46608A0041A566_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t6A6CDA0B3206A89B1A4A94A006B31DEA523606CD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TMPro_EventManager_t0234DB5BF625FC164B395C5C3B6F2CB8C89A3BA9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CCaretBlinkerU3Ed__10_t6FE51EF13E08C376AC9100DDDA9B749550DD038C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ViveInputArgs_tA1582F8B512EB0811E34A70D77F5265E688EA817_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral1CA45F7FE0CD0814F68F08588BD4DA94450116C3;
IL2CPP_EXTERN_C String_t* _stringLiteral25EC8B5027C4C127EC75896F8B03EF13CBFF95DE;
IL2CPP_EXTERN_C String_t* _stringLiteral3B46302701BEE88904D8B185D12F907471B2D231;
IL2CPP_EXTERN_C String_t* _stringLiteral3EA4783D72C469D17904F0B941A1607293CE17D8;
IL2CPP_EXTERN_C String_t* _stringLiteral5BA2AB84F73D215077B6EA830A5ADFEE63A5C5DE;
IL2CPP_EXTERN_C String_t* _stringLiteral76BC599F35709DDFA80B78ED2DD26FEC406690B7;
IL2CPP_EXTERN_C String_t* _stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152;
IL2CPP_EXTERN_C String_t* _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1;
IL2CPP_EXTERN_C String_t* _stringLiteralDC643805631DCFA7AF65357A1ADA341A23CA30AA;
IL2CPP_EXTERN_C String_t* _stringLiteralDDD374A7E41DD53902353C5AE7ED852D7D631EF0;
IL2CPP_EXTERN_C String_t* _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC;
IL2CPP_EXTERN_C String_t* _stringLiteralF5E18CA9BC348412D57A3E586EF2AFECE4B28139;
IL2CPP_EXTERN_C String_t* _stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInParent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m1C73B3D3E924B85529A025308CD97ACF478C95FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_mC27E0B9D788FD1008307D710E0FC0B9C30BB6828_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_m8947457C233E7D195B4D3F6D3458060F45A95A6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_mFA87FBAC47001E257FEA54146E60B9A3885AB565_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB912792459B63AD30A5C70BA8B06EA965B0C0A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mE74EE63C85A63FC34DCFC631BC229207B420BC79_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670_m6D14E9D9ED30494BDFDA9210DE8FC7869AAD48E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_m638A3878EFC37F712EE8D8F0A24B543B256F7A28_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m8B08E2AF2F8395AC7D0948D3A03628A2C193C455_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m572F210B8FC74385E1F23007FEBF22F39042217D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m1FF4411D21B902EA7DE5259ED315E420FD4340EC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mE5AE22441D30BBF9D2D3471D492068C3007D20C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m1595B542FEE8A9C01F3DB0B958F701F8F0A6D730_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m24F09A90E26E64A56618D8CED3E95C064BEBFDF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_m102070591A00F3B095E6F4E4F6DA897B2A82AFB6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_m13EBD191CB75608EF8A61D6A7AFA49E51031FE0E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8_m69B78304C618436E545F40E2F0F87E6A469B0B6E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_mA60BA18571108CDB4B49B76D1544DC204BD2AB34_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB300C664BECCAFAF312075478DA59178E9B81A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_m8D827B7D1B6A4BF71180B04A5C9F809CFB9747F7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIExtensionMethods_AddComponentIfMissing_TisMask_tE8E16C858EC6ECCE545C03802BD1399F7F406213_m73B2BCA1676B787256F424483A1EB6B9841A4695_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUITMP_TMPTextChangedCallback_mC209F5B8587AA50B289E52EB48CF19C3FC5F1156_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUITMP_TesselationRequiredCallback_m5E9C6456C74BC124B72A299A2400B00208268412_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIVertexEffect_FontTextureRebuiltCallback_mDD0250B346A05D9A7BF209188032786B4A00B4E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m1935F4927E7D67A4997E9F2C35B4ED2C0C335BD7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m8B2B63CDB07B0BCF7C0DE5D790F95F8BC0980B04_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m6BB7FC406CF1B8EB37AE3099B84F083FA62B04E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastAction_1_Add_m368726E3508DB2176C4F87A79C0C0CC4816176D6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_m73A0EE72E844324C501B6DCEB597D9792AA8B108_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_m4AF269DEC713DA8FAC72F84578D662013D1295D2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA327C9E1CA12BC531D587E7567F2067B96E6B6A0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisRectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_m771EB78FF8813B5AFF21AC0D252E5461943E6388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mFC7CE5CA138CCC1A0AE91CEA65F6CD8F9BAA436B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTMP_SubMeshUI_tC465A77BC412382AABB3052CBA268623AAF3A25D_m5F6AF2A1EF0047D4F719FA30ADA5314A3EC8BBBD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_mBDBF977A8C7734F6EDD83FC65C6FDDE74427611E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m6A9761CF6ADDB200800BC055298CF4AF4BA44CA0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Contains_m2A410A484DC099A68EE94C2134DFDB0609D241C7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m95B374E678B6610B02FFA7111D74A0E3F9511E3E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var;
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

struct BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799;
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841;
struct CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F;
struct InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TMP_CharacterInfoU5BU5D_t297D56FCF66DAA99D8FEA7C30F9F3926902C5B99;
struct TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8;
struct TMP_SubMeshUIU5BU5D_tC77B263183A59A75345C26152457207EAC3BBF29;
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A;
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

// System.Collections.Generic.List`1<UnityEngine.GameObject>
struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___s_emptyArray_5;
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

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
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

// CurvedUI.CurvedUIRaycaster/<>c
struct U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A  : public RuntimeObject
{
};

struct U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_StaticFields
{
	// CurvedUI.CurvedUIRaycaster/<>c CurvedUI.CurvedUIRaycaster/<>c::<>9
	U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster/<>c::<>9__21_0
	Predicate_1_t0729156EF7F8B2C367BA6C92C091D97CDEC0B53F* ___U3CU3E9__21_0_1;
	// System.Comparison`1<UnityEngine.UI.Graphic> CurvedUI.CurvedUIRaycaster/<>c::<>9__32_0
	Comparison_1_t236C83451572505C1D483C9DFB0550F3470A17B8* ___U3CU3E9__32_0_2;
	// System.Comparison`1<UnityEngine.UI.Graphic> CurvedUI.CurvedUIRaycaster/<>c::<>9__55_0
	Comparison_1_t236C83451572505C1D483C9DFB0550F3470A17B8* ___U3CU3E9__55_0_3;
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

// UnityEngine.LayerMask
struct LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB 
{
	// System.Int32 UnityEngine.LayerMask::m_Mask
	int32_t ___m_Mask_0;
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

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
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

// UnityEngine.FontStyle
struct FontStyle_tDD46734FA9BCB99FB315CD7CAD1137EE536136D1 
{
	// System.Int32 UnityEngine.FontStyle::value__
	int32_t ___value___2;
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

// UnityEngine.HorizontalWrapMode
struct HorizontalWrapMode_tFBCA6173D94996068BC1CFFCB88108F1BAD39688 
{
	// System.Int32 UnityEngine.HorizontalWrapMode::value__
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

// UnityEngine.Ray
struct Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 
{
	// UnityEngine.Vector3 UnityEngine.Ray::m_Origin
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Origin_0;
	// UnityEngine.Vector3 UnityEngine.Ray::m_Direction
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Direction_1;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
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

// UnityEngine.TextAnchor
struct TextAnchor_tA46E794186AC1CD0F22888652F589EBF7DFDF830 
{
	// System.Int32 UnityEngine.TextAnchor::value__
	int32_t ___value___2;
};

// UnityEngine.TextGenerationError
struct TextGenerationError_t7F7ADE7701202BDB4025B7ADEED6DA0F20064128 
{
	// System.Int32 UnityEngine.TextGenerationError::value__
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

// UnityEngine.VerticalWrapMode
struct VerticalWrapMode_t16A70E87910F9A8784E74B8F3E0DCEFA3F98DEB3 
{
	// System.Int32 UnityEngine.VerticalWrapMode::value__
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

// CurvedUIInputModule/CUIControlMethod
struct CUIControlMethod_t213D60EEB580A49015A764797E87DC656E969200 
{
	// System.Int32 CurvedUIInputModule/CUIControlMethod::value__
	int32_t ___value___2;
};

// CurvedUIInputModule/Hand
struct Hand_t7F2EF38DFBB8E9E7A361DE19D553823067DBC738 
{
	// System.Int32 CurvedUIInputModule/Hand::value__
	int32_t ___value___2;
};

// CurvedUI.CurvedUISettings/CurvedUIShape
struct CurvedUIShape_t960C3507437D0D563B5B43E270843A165979447A 
{
	// System.Int32 CurvedUI.CurvedUISettings/CurvedUIShape::value__
	int32_t ___value___2;
};

// UnityEngine.UI.GraphicRaycaster/BlockingObjects
struct BlockingObjects_t102C088885358E52B8A917F94294644312B2AA79 
{
	// System.Int32 UnityEngine.UI.GraphicRaycaster/BlockingObjects::value__
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

// UnityEngine.UI.InputField/CharacterValidation
struct CharacterValidation_t5DAA94F9780B40CCF419821363E89B30E2EF7380 
{
	// System.Int32 UnityEngine.UI.InputField/CharacterValidation::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/ContentType
struct ContentType_t7E546E516F92E955324D479BB71667931F1A7956 
{
	// System.Int32 UnityEngine.UI.InputField/ContentType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/InputType
struct InputType_t036D7DF2772E6C8C7DB969C7501F6513339572D4 
{
	// System.Int32 UnityEngine.UI.InputField/InputType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.InputField/LineType
struct LineType_tC4DBAA8629361B209A2BA0625320B24FC4566B6B 
{
	// System.Int32 UnityEngine.UI.InputField/LineType::value__
	int32_t ___value___2;
};

// UnityEngine.UI.Navigation/Mode
struct Mode_t2D49D0E10E2FDA0026278C2400C16033888D0542 
{
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;
};

// OVRInput/Button
struct Button_tA5F6C329BA19678946F9C1B5827CA5AE3E48A5FB 
{
	// System.Int32 OVRInput/Button::value__
	int32_t ___value___2;
};

// OVRInput/Controller
struct Controller_tBCAA59EAD9BFE2381E974A48B203D044B6CE1ECB 
{
	// System.Int32 OVRInput/Controller::value__
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

// UnityEngine.Font
struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::m_FontTextureRebuildCallback
	FontTextureRebuildCallback_t76D5E172DF8AA57E67763D453AAC40F0961D09B1* ___m_FontTextureRebuildCallback_5;
};

struct Font_tC95270EA3198038970422D78B74A7F2E218A96B6_StaticFields
{
	// System.Action`1<UnityEngine.Font> UnityEngine.Font::textureRebuilt
	Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___textureRebuilt_4;
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

// UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3 
{
	// UnityEngine.Font UnityEngine.TextGenerationSettings::font
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	// UnityEngine.Color UnityEngine.TextGenerationSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	// System.Int32 UnityEngine.TextGenerationSettings::fontSize
	int32_t ___fontSize_2;
	// System.Single UnityEngine.TextGenerationSettings::lineSpacing
	float ___lineSpacing_3;
	// System.Boolean UnityEngine.TextGenerationSettings::richText
	bool ___richText_4;
	// System.Single UnityEngine.TextGenerationSettings::scaleFactor
	float ___scaleFactor_5;
	// UnityEngine.FontStyle UnityEngine.TextGenerationSettings::fontStyle
	int32_t ___fontStyle_6;
	// UnityEngine.TextAnchor UnityEngine.TextGenerationSettings::textAnchor
	int32_t ___textAnchor_7;
	// System.Boolean UnityEngine.TextGenerationSettings::alignByGeometry
	bool ___alignByGeometry_8;
	// System.Boolean UnityEngine.TextGenerationSettings::resizeTextForBestFit
	bool ___resizeTextForBestFit_9;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMinSize
	int32_t ___resizeTextMinSize_10;
	// System.Int32 UnityEngine.TextGenerationSettings::resizeTextMaxSize
	int32_t ___resizeTextMaxSize_11;
	// System.Boolean UnityEngine.TextGenerationSettings::updateBounds
	bool ___updateBounds_12;
	// UnityEngine.VerticalWrapMode UnityEngine.TextGenerationSettings::verticalOverflow
	int32_t ___verticalOverflow_13;
	// UnityEngine.HorizontalWrapMode UnityEngine.TextGenerationSettings::horizontalOverflow
	int32_t ___horizontalOverflow_14;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::generationExtents
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___generationExtents_15;
	// UnityEngine.Vector2 UnityEngine.TextGenerationSettings::pivot
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_16;
	// System.Boolean UnityEngine.TextGenerationSettings::generateOutOfBounds
	bool ___generateOutOfBounds_17;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshaled_pinvoke
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___generationExtents_15;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};
// Native definition for COM marshalling of UnityEngine.TextGenerationSettings
struct TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshaled_com
{
	Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___font_0;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_1;
	int32_t ___fontSize_2;
	float ___lineSpacing_3;
	int32_t ___richText_4;
	float ___scaleFactor_5;
	int32_t ___fontStyle_6;
	int32_t ___textAnchor_7;
	int32_t ___alignByGeometry_8;
	int32_t ___resizeTextForBestFit_9;
	int32_t ___resizeTextMinSize_10;
	int32_t ___resizeTextMaxSize_11;
	int32_t ___updateBounds_12;
	int32_t ___verticalOverflow_13;
	int32_t ___horizontalOverflow_14;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___generationExtents_15;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pivot_16;
	int32_t ___generateOutOfBounds_17;
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// System.Action`1<UnityEngine.Font>
struct Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC  : public MulticastDelegate_t
{
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

// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC  : public RuntimeObject
{
	// System.IntPtr UnityEngine.TextGenerator::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.String UnityEngine.TextGenerator::m_LastString
	String_t* ___m_LastString_1;
	// UnityEngine.TextGenerationSettings UnityEngine.TextGenerator::m_LastSettings
	TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3 ___m_LastSettings_2;
	// System.Boolean UnityEngine.TextGenerator::m_HasGenerated
	bool ___m_HasGenerated_3;
	// UnityEngine.TextGenerationError UnityEngine.TextGenerator::m_LastValid
	int32_t ___m_LastValid_4;
	// System.Collections.Generic.List`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::m_Verts
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_Verts_5;
	// System.Collections.Generic.List`1<UnityEngine.UICharInfo> UnityEngine.TextGenerator::m_Characters
	List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___m_Characters_6;
	// System.Collections.Generic.List`1<UnityEngine.UILineInfo> UnityEngine.TextGenerator::m_Lines
	List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___m_Lines_7;
	// System.Boolean UnityEngine.TextGenerator::m_CachedVerts
	bool ___m_CachedVerts_8;
	// System.Boolean UnityEngine.TextGenerator::m_CachedCharacters
	bool ___m_CachedCharacters_9;
	// System.Boolean UnityEngine.TextGenerator::m_CachedLines
	bool ___m_CachedLines_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	char* ___m_LastString_1;
	TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshaled_pinvoke ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_Verts_5;
	List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___m_Characters_6;
	List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
};
// Native definition for COM marshalling of UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppChar* ___m_LastString_1;
	TextGenerationSettings_tBB6E86AC0B348D19158D6721BE790865B04993F3_marshaled_com ___m_LastSettings_2;
	int32_t ___m_HasGenerated_3;
	int32_t ___m_LastValid_4;
	List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___m_Verts_5;
	List_1_t67A1600A303BB89506DFD21B59687088B7E0675B* ___m_Characters_6;
	List_1_t9209B29AC606399207E97BDCD817DEA5B6C63CA5* ___m_Lines_7;
	int32_t ___m_CachedVerts_8;
	int32_t ___m_CachedCharacters_9;
	int32_t ___m_CachedLines_10;
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

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_StaticFields
{
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::preWillRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___preWillRenderCanvases_4;
	// UnityEngine.Canvas/WillRenderCanvases UnityEngine.Canvas::willRenderCanvases
	WillRenderCanvases_tA4A6E66DBA797DCB45B995DBA449A9D1D80D0FBC* ___willRenderCanvases_5;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externBeginRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternBeginRenderOverlaysU3Ek__BackingField_6;
	// System.Action`2<System.Int32,System.Int32> UnityEngine.Canvas::<externRenderOverlaysBefore>k__BackingField
	Action_2_tD7438462601D3939500ED67463331FE00CFFBDB8* ___U3CexternRenderOverlaysBeforeU3Ek__BackingField_7;
	// System.Action`1<System.Int32> UnityEngine.Canvas::<externEndRenderOverlays>k__BackingField
	Action_1_tD69A6DC9FBE94131E52F5A73B2A9D4AB51EEC404* ___U3CexternEndRenderOverlaysU3Ek__BackingField_8;
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

// CurvedUI.CurvedUIInputFieldCaret
struct CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.InputField CurvedUI.CurvedUIInputFieldCaret::myField
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* ___myField_4;
	// UnityEngine.RectTransform CurvedUI.CurvedUIInputFieldCaret::myCaret
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___myCaret_5;
	// UnityEngine.Color CurvedUI.CurvedUIInputFieldCaret::origCaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___origCaretColor_6;
	// UnityEngine.Color CurvedUI.CurvedUIInputFieldCaret::origSelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___origSelectionColor_7;
	// System.Boolean CurvedUI.CurvedUIInputFieldCaret::selected
	bool ___selected_8;
	// System.Boolean CurvedUI.CurvedUIInputFieldCaret::selectingText
	bool ___selectingText_9;
	// System.Int32 CurvedUI.CurvedUIInputFieldCaret::lastCharDist
	int32_t ___lastCharDist_10;
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

// UnityEngine.EventSystems.BaseInputModule
struct BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> UnityEngine.EventSystems.BaseInputModule::m_RaycastResultCache
	List_1_t8292C421BBB00D7661DC07462822936152BAB446* ___m_RaycastResultCache_4;
	// UnityEngine.EventSystems.AxisEventData UnityEngine.EventSystems.BaseInputModule::m_AxisEventData
	AxisEventData_t4AA742BC101B1AA300B16EE7F19E31B91F37A938* ___m_AxisEventData_5;
	// UnityEngine.EventSystems.EventSystem UnityEngine.EventSystems.BaseInputModule::m_EventSystem
	EventSystem_t61C51380B105BE9D2C39C4F15B7E655659957707* ___m_EventSystem_6;
	// UnityEngine.EventSystems.BaseEventData UnityEngine.EventSystems.BaseInputModule::m_BaseEventData
	BaseEventData_tE03A848325C0AE8E76C6CA15FD86395EBF83364F* ___m_BaseEventData_7;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_InputOverride
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_InputOverride_8;
	// UnityEngine.EventSystems.BaseInput UnityEngine.EventSystems.BaseInputModule::m_DefaultInput
	BaseInput_t69C46B0AA3C24F1CA842A0D03CACACC4EC788622* ___m_DefaultInput_9;
};

// UnityEngine.UI.BaseMeshEffect
struct BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.UI.Graphic UnityEngine.UI.BaseMeshEffect::m_Graphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Graphic_4;
};

// UnityEngine.EventSystems.BaseRaycaster
struct BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.EventSystems.BaseRaycaster UnityEngine.EventSystems.BaseRaycaster::m_RootRaycaster
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* ___m_RootRaycaster_4;
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

// UnityEngine.UI.GraphicRaycaster
struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B  : public BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832
{
	// System.Boolean UnityEngine.UI.GraphicRaycaster::m_IgnoreReversedGraphics
	bool ___m_IgnoreReversedGraphics_6;
	// UnityEngine.UI.GraphicRaycaster/BlockingObjects UnityEngine.UI.GraphicRaycaster::m_BlockingObjects
	int32_t ___m_BlockingObjects_7;
	// UnityEngine.LayerMask UnityEngine.UI.GraphicRaycaster::m_BlockingMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___m_BlockingMask_8;
	// UnityEngine.Canvas UnityEngine.UI.GraphicRaycaster::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_9;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::m_RaycastResults
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___m_RaycastResults_10;
};

struct GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> UnityEngine.UI.GraphicRaycaster::s_SortedGraphics
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___s_SortedGraphics_11;
};

// UnityEngine.UI.InputField
struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.TouchScreenKeyboard UnityEngine.UI.InputField::m_Keyboard
	TouchScreenKeyboard_tE87B78A3DAED69816B44C99270A734682E093E7A* ___m_Keyboard_20;
	// UnityEngine.UI.Text UnityEngine.UI.InputField::m_TextComponent
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___m_TextComponent_22;
	// UnityEngine.UI.Graphic UnityEngine.UI.InputField::m_Placeholder
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_Placeholder_23;
	// UnityEngine.UI.InputField/ContentType UnityEngine.UI.InputField::m_ContentType
	int32_t ___m_ContentType_24;
	// UnityEngine.UI.InputField/InputType UnityEngine.UI.InputField::m_InputType
	int32_t ___m_InputType_25;
	// System.Char UnityEngine.UI.InputField::m_AsteriskChar
	Il2CppChar ___m_AsteriskChar_26;
	// UnityEngine.TouchScreenKeyboardType UnityEngine.UI.InputField::m_KeyboardType
	int32_t ___m_KeyboardType_27;
	// UnityEngine.UI.InputField/LineType UnityEngine.UI.InputField::m_LineType
	int32_t ___m_LineType_28;
	// System.Boolean UnityEngine.UI.InputField::m_HideMobileInput
	bool ___m_HideMobileInput_29;
	// UnityEngine.UI.InputField/CharacterValidation UnityEngine.UI.InputField::m_CharacterValidation
	int32_t ___m_CharacterValidation_30;
	// System.Int32 UnityEngine.UI.InputField::m_CharacterLimit
	int32_t ___m_CharacterLimit_31;
	// UnityEngine.UI.InputField/SubmitEvent UnityEngine.UI.InputField::m_OnSubmit
	SubmitEvent_t1E0F5A2AB28D0DB55AE18E8DA99147D86492DD5D* ___m_OnSubmit_32;
	// UnityEngine.UI.InputField/EndEditEvent UnityEngine.UI.InputField::m_OnDidEndEdit
	EndEditEvent_t946A962BA13CF60BB0BE7AD091DA041FD788E655* ___m_OnDidEndEdit_33;
	// UnityEngine.UI.InputField/OnChangeEvent UnityEngine.UI.InputField::m_OnValueChanged
	OnChangeEvent_tE4829F88300B0E0E0D1B78B453AF25FC1AA55E2F* ___m_OnValueChanged_34;
	// UnityEngine.UI.InputField/OnValidateInput UnityEngine.UI.InputField::m_OnValidateInput
	OnValidateInput_t48916A4E9C9FD6204401FF0808C2B7A93D73418B* ___m_OnValidateInput_35;
	// UnityEngine.Color UnityEngine.UI.InputField::m_CaretColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_CaretColor_36;
	// System.Boolean UnityEngine.UI.InputField::m_CustomCaretColor
	bool ___m_CustomCaretColor_37;
	// UnityEngine.Color UnityEngine.UI.InputField::m_SelectionColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectionColor_38;
	// System.String UnityEngine.UI.InputField::m_Text
	String_t* ___m_Text_39;
	// System.Single UnityEngine.UI.InputField::m_CaretBlinkRate
	float ___m_CaretBlinkRate_40;
	// System.Int32 UnityEngine.UI.InputField::m_CaretWidth
	int32_t ___m_CaretWidth_41;
	// System.Boolean UnityEngine.UI.InputField::m_ReadOnly
	bool ___m_ReadOnly_42;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateOnSelect
	bool ___m_ShouldActivateOnSelect_43;
	// System.Int32 UnityEngine.UI.InputField::m_CaretPosition
	int32_t ___m_CaretPosition_44;
	// System.Int32 UnityEngine.UI.InputField::m_CaretSelectPosition
	int32_t ___m_CaretSelectPosition_45;
	// UnityEngine.RectTransform UnityEngine.UI.InputField::caretRectTrans
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___caretRectTrans_46;
	// UnityEngine.UIVertex[] UnityEngine.UI.InputField::m_CursorVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_CursorVerts_47;
	// UnityEngine.TextGenerator UnityEngine.UI.InputField::m_InputTextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_InputTextCache_48;
	// UnityEngine.CanvasRenderer UnityEngine.UI.InputField::m_CachedInputRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CachedInputRenderer_49;
	// System.Boolean UnityEngine.UI.InputField::m_PreventFontCallback
	bool ___m_PreventFontCallback_50;
	// UnityEngine.Mesh UnityEngine.UI.InputField::m_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_Mesh_51;
	// System.Boolean UnityEngine.UI.InputField::m_AllowInput
	bool ___m_AllowInput_52;
	// System.Boolean UnityEngine.UI.InputField::m_ShouldActivateNextUpdate
	bool ___m_ShouldActivateNextUpdate_53;
	// System.Boolean UnityEngine.UI.InputField::m_UpdateDrag
	bool ___m_UpdateDrag_54;
	// System.Boolean UnityEngine.UI.InputField::m_DragPositionOutOfBounds
	bool ___m_DragPositionOutOfBounds_55;
	// System.Boolean UnityEngine.UI.InputField::m_CaretVisible
	bool ___m_CaretVisible_58;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_BlinkCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_BlinkCoroutine_59;
	// System.Single UnityEngine.UI.InputField::m_BlinkStartTime
	float ___m_BlinkStartTime_60;
	// System.Int32 UnityEngine.UI.InputField::m_DrawStart
	int32_t ___m_DrawStart_61;
	// System.Int32 UnityEngine.UI.InputField::m_DrawEnd
	int32_t ___m_DrawEnd_62;
	// UnityEngine.Coroutine UnityEngine.UI.InputField::m_DragCoroutine
	Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* ___m_DragCoroutine_63;
	// System.String UnityEngine.UI.InputField::m_OriginalText
	String_t* ___m_OriginalText_64;
	// System.Boolean UnityEngine.UI.InputField::m_WasCanceled
	bool ___m_WasCanceled_65;
	// System.Boolean UnityEngine.UI.InputField::m_HasDoneFocusTransition
	bool ___m_HasDoneFocusTransition_66;
	// UnityEngine.WaitForSecondsRealtime UnityEngine.UI.InputField::m_WaitForSecondsRealtime
	WaitForSecondsRealtime_tA8CE0AAB4B0C872B843E7973637037D17682BA01* ___m_WaitForSecondsRealtime_67;
	// System.Boolean UnityEngine.UI.InputField::m_TouchKeyboardAllowsInPlaceEditing
	bool ___m_TouchKeyboardAllowsInPlaceEditing_68;
	// UnityEngine.Event UnityEngine.UI.InputField::m_ProcessingEvent
	Event_tEBC6F24B56CE22B9C9AD1AC6C24A6B83BC3860CB* ___m_ProcessingEvent_70;
};

struct InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_StaticFields
{
	// System.Char[] UnityEngine.UI.InputField::kSeparators
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___kSeparators_21;
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

// UnityEngine.EventSystems.PointerInputModule
struct PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556  : public BaseInputModule_tF3B7C22AF1419B2AC9ECE6589357DC1B88ED96B1
{
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.EventSystems.PointerEventData> UnityEngine.EventSystems.PointerInputModule::m_PointerData
	Dictionary_2_t489B023479196B8FC9709A9F834FC38729BD9493* ___m_PointerData_14;
	// UnityEngine.EventSystems.PointerInputModule/MouseState UnityEngine.EventSystems.PointerInputModule::m_MouseState
	MouseState_tCCE70861DE1EEECF949AFE8E2A922541D4E08A09* ___m_MouseState_15;
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

// CurvedUI.CurvedUIRaycaster
struct CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76  : public GraphicRaycaster_t16FC39434AE5B47D3C2993134CDCF7F4AE6A6D7B
{
	// System.Boolean CurvedUI.CurvedUIRaycaster::showDebug
	bool ___showDebug_12;
	// System.Boolean CurvedUI.CurvedUIRaycaster::overrideEventData
	bool ___overrideEventData_13;
	// UnityEngine.Canvas CurvedUI.CurvedUIRaycaster::myCanvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___myCanvas_14;
	// CurvedUI.CurvedUISettings CurvedUI.CurvedUIRaycaster::mySettings
	CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* ___mySettings_15;
	// UnityEngine.Vector3 CurvedUI.CurvedUIRaycaster::cyllinderMidPoint
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___cyllinderMidPoint_16;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::objectsUnderPointer
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___objectsUnderPointer_17;
	// UnityEngine.Vector2 CurvedUI.CurvedUIRaycaster::lastCanvasPos
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastCanvasPos_18;
	// UnityEngine.GameObject CurvedUI.CurvedUIRaycaster::colliderContainer
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___colliderContainer_19;
	// UnityEngine.EventSystems.PointerEventData CurvedUI.CurvedUIRaycaster::lastFrameEventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___lastFrameEventData_20;
	// UnityEngine.EventSystems.PointerEventData CurvedUI.CurvedUIRaycaster::curEventData
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___curEventData_21;
	// UnityEngine.EventSystems.PointerEventData CurvedUI.CurvedUIRaycaster::eventDataToUse
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___eventDataToUse_22;
	// UnityEngine.Ray CurvedUI.CurvedUIRaycaster::cachedRay
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___cachedRay_23;
	// UnityEngine.UI.Graphic CurvedUI.CurvedUIRaycaster::gph
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___gph_24;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::selectablesUnderGaze
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___selectablesUnderGaze_25;
	// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::selectablesUnderGazeLastFrame
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* ___selectablesUnderGazeLastFrame_26;
	// System.Single CurvedUI.CurvedUIRaycaster::objectsUnderGazeLastChangeTime
	float ___objectsUnderGazeLastChangeTime_27;
	// System.Boolean CurvedUI.CurvedUIRaycaster::gazeClickExecuted
	bool ___gazeClickExecuted_28;
	// System.Boolean CurvedUI.CurvedUIRaycaster::pointingAtCanvas
	bool ___pointingAtCanvas_29;
	// System.Boolean CurvedUI.CurvedUIRaycaster::pointingAtCanvasLastFrame
	bool ___pointingAtCanvasLastFrame_30;
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> CurvedUI.CurvedUIRaycaster::m_RaycastResults
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___m_RaycastResults_31;
};

struct CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_StaticFields
{
	// System.Collections.Generic.List`1<UnityEngine.UI.Graphic> CurvedUI.CurvedUIRaycaster::s_SortedGraphics
	List_1_tF6D13D87DD02D4EF3ECD7763371397BD6D1A2C0F* ___s_SortedGraphics_32;
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

// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530  : public PointerInputModule_tD71E11FA989C22D83883E120EAA4F05929907556
{
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_PrevActionTime
	float ___m_PrevActionTime_16;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMoveVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMoveVector_17;
	// System.Int32 UnityEngine.EventSystems.StandaloneInputModule::m_ConsecutiveMoveCount
	int32_t ___m_ConsecutiveMoveCount_18;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_LastMousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_LastMousePosition_19;
	// UnityEngine.Vector2 UnityEngine.EventSystems.StandaloneInputModule::m_MousePosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___m_MousePosition_20;
	// UnityEngine.GameObject UnityEngine.EventSystems.StandaloneInputModule::m_CurrentFocusedGameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_CurrentFocusedGameObject_21;
	// UnityEngine.EventSystems.PointerEventData UnityEngine.EventSystems.StandaloneInputModule::m_InputPointerEvent
	PointerEventData_t9670F3C7D823CCB738A1604C72A1EB90292396FB* ___m_InputPointerEvent_22;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_HorizontalAxis
	String_t* ___m_HorizontalAxis_23;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_VerticalAxis
	String_t* ___m_VerticalAxis_24;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_SubmitButton
	String_t* ___m_SubmitButton_25;
	// System.String UnityEngine.EventSystems.StandaloneInputModule::m_CancelButton
	String_t* ___m_CancelButton_26;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_InputActionsPerSecond
	float ___m_InputActionsPerSecond_27;
	// System.Single UnityEngine.EventSystems.StandaloneInputModule::m_RepeatDelay
	float ___m_RepeatDelay_28;
	// System.Boolean UnityEngine.EventSystems.StandaloneInputModule::m_ForceModuleActive
	bool ___m_ForceModuleActive_29;
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

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};

// CurvedUIInputModule
struct CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386  : public StandaloneInputModule_tD8B581E4A0A2A25B99EB002FF669C4EEED350530
{
	// CurvedUIInputModule/CUIControlMethod CurvedUIInputModule::controlMethod
	int32_t ___controlMethod_30;
	// System.String CurvedUIInputModule::submitButtonName
	String_t* ___submitButtonName_31;
	// UnityEngine.Camera CurvedUIInputModule::mainEventCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainEventCamera_32;
	// UnityEngine.LayerMask CurvedUIInputModule::raycastLayerMask
	LayerMask_t97CB6BDADEDC3D6423C7BCFEA7F86DA2EC6241DB ___raycastLayerMask_33;
	// System.Boolean CurvedUIInputModule::gazeUseTimedClick
	bool ___gazeUseTimedClick_34;
	// System.Single CurvedUIInputModule::gazeClickTimer
	float ___gazeClickTimer_35;
	// System.Single CurvedUIInputModule::gazeClickTimerDelay
	float ___gazeClickTimerDelay_36;
	// UnityEngine.UI.Image CurvedUIInputModule::gazeTimedClickProgressImage
	Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* ___gazeTimedClickProgressImage_37;
	// System.Single CurvedUIInputModule::worldSpaceMouseSensitivity
	float ___worldSpaceMouseSensitivity_38;
	// CurvedUIInputModule/Hand CurvedUIInputModule::usedHand
	int32_t ___usedHand_39;
	// UnityEngine.Transform CurvedUIInputModule::pointerTransformOverride
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___pointerTransformOverride_40;
	// UnityEngine.GameObject CurvedUIInputModule::currentDragging
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentDragging_43;
	// UnityEngine.GameObject CurvedUIInputModule::currentPointedAt
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___currentPointedAt_44;
	// UnityEngine.GameObject CurvedUIInputModule::m_rightController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_rightController_45;
	// UnityEngine.GameObject CurvedUIInputModule::m_leftController
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___m_leftController_46;
	// System.Single CurvedUIInputModule::gazeTimerProgress
	float ___gazeTimerProgress_47;
	// UnityEngine.Ray CurvedUIInputModule::customControllerRay
	Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___customControllerRay_48;
	// System.Single CurvedUIInputModule::dragThreshold
	float ___dragThreshold_49;
	// System.Boolean CurvedUIInputModule::pressedDown
	bool ___pressedDown_50;
	// System.Boolean CurvedUIInputModule::pressedLastFrame
	bool ___pressedLastFrame_51;
	// UnityEngine.Vector2 CurvedUIInputModule::lastEventDataPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastEventDataPosition_52;
	// UnityEngine.EventSystems.PointerInputModule/MouseButtonEventData CurvedUIInputModule::storedData
	MouseButtonEventData_t0761D63D3A2B13090597C22DD97597CC7FE4D154* ___storedData_53;
	// UnityEngine.Vector3 CurvedUIInputModule::lastMouseOnScreenPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lastMouseOnScreenPos_54;
	// UnityEngine.Vector2 CurvedUIInputModule::worldSpaceMouseInCanvasSpace
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___worldSpaceMouseInCanvasSpace_55;
	// UnityEngine.Vector2 CurvedUIInputModule::lastWorldSpaceMouseOnCanvas
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lastWorldSpaceMouseOnCanvas_56;
	// UnityEngine.Vector2 CurvedUIInputModule::worldSpaceMouseOnCanvasDelta
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___worldSpaceMouseOnCanvasDelta_57;
	// UnityEngine.Transform CurvedUIInputModule::TouchControllerTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___TouchControllerTransform_58;
	// OVRInput/Button CurvedUIInputModule::InteractionButton
	int32_t ___InteractionButton_59;
	// OVRCameraRig CurvedUIInputModule::oculusCameraRig
	OVRCameraRig_t7FC2BB0D30DED2B7F0C8914AF2B66E9F4CF891A9* ___oculusCameraRig_60;
	// OVRInput/Controller CurvedUIInputModule::activeCont
	int32_t ___activeCont_61;
};

struct CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_StaticFields
{
	// System.Boolean CurvedUIInputModule::disableOtherInputModulesOnStart
	bool ___disableOtherInputModulesOnStart_41;
	// CurvedUIInputModule CurvedUIInputModule::instance
	CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* ___instance_42;
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
// UnityEngine.EventSystems.BaseRaycaster[]
struct BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799  : public RuntimeArray
{
	ALIGN_FIELD (8) BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* m_Items[1];

	inline BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Canvas[]
struct CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841  : public RuntimeArray
{
	ALIGN_FIELD (8) Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* m_Items[1];

	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Graphic[]
struct GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F  : public RuntimeArray
{
	ALIGN_FIELD (8) Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* m_Items[1];

	inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// CurvedUI.CurvedUIVertexEffect[]
struct CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2  : public RuntimeArray
{
	ALIGN_FIELD (8) CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* m_Items[1];

	inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.InputField[]
struct InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1  : public RuntimeArray
{
	ALIGN_FIELD (8) InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* m_Items[1];

	inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TextMeshProUGUI[]
struct TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A  : public RuntimeArray
{
	ALIGN_FIELD (8) TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* m_Items[1];

	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// TMPro.TMP_InputField[]
struct TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8  : public RuntimeArray
{
	ALIGN_FIELD (8) TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* m_Items[1];

	inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
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


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<System.Object>(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_m666F5F51355332BE73E665B5FC6777A9905D56AA_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<System.Object>(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<System.Object>(UnityEngine.Component)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_mF6685B145584B06CFE932A358137E65532338DE1_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___go0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___value1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___item0, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A_gshared (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
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
// System.Boolean System.Collections.Generic.List`1<System.Object>::Contains(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Contains_m4C9139C2A6B23E9343D3F87807B32C6E2CFE660D_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;

// System.Void CurvedUI.CurvedUIRaycaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8DE73B237768336C8431841D166319FE24A7B69F (U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Selectable>()
inline Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.Graphic::get_depth()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Graphic_get_depth_m16A82C751AE0497941048A3715D48A1066939460 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::CompareTo(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586 (int32_t* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.GameObject::get_layer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, int32_t ___value0, const RuntimeMethod* method) ;
// UnityEngine.RectTransform CurvedUI.CurvedUISettings::get_RectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// UnityEngine.Rect UnityEngine.RectTransform::get_rect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488 (RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337 (const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponents<UnityEngine.EventSystems.BaseRaycaster>()
inline BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* Component_GetComponents_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_m102070591A00F3B095E6F4E4F6DA897B2A82AFB6 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_m35447B0B07F9C06A1AF846E482EC6FEB09D2436F_gshared)(__this, method);
}
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<CurvedUI.CurvedUIRaycaster>(UnityEngine.GameObject)
inline CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_m13EBD191CB75608EF8A61D6A7AFA49E51031FE0E (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method)
{
	return ((  CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_m666F5F51355332BE73E665B5FC6777A9905D56AA_gshared)(___go0, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Canvas>()
inline CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* Component_GetComponentsInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m8B08E2AF2F8395AC7D0948D3A03628A2C193C455 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.String UnityEngine.Object::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5 (RuntimeObject* ___message0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___context1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Canvas>()
inline Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Single CurvedUI.CurvedUISettings::GetCyllinderRadiusInCanvasSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Graphic>()
inline GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Boolean UnityEngine.Vector2::op_Inequality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUISettings::SetUIAngle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___newAngle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<CurvedUI.CurvedUIVertexEffect>()
inline CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m1F5B6FC0689B07D4FAAC0C605D9B2933A9B32543_gshared)(__this, method);
}
// System.Void CurvedUI.CurvedUIVertexEffect::SetDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_SetDirty_mDE58FDE3D93E15271604480ABE22590757DAA100 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<CurvedUI.CurvedUIRaycaster>()
inline CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void CurvedUI.CurvedUIRaycaster::RebuildCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIRaycaster_RebuildCollider_m9BCDA92282DCA114A6D7AD52FF7F819BDBAB698F (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, const RuntimeMethod* method) ;
// System.Int32 CurvedUI.CurvedUISettings::get_Angle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Single CurvedUI.CurvedUISettings::get_SavedRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUISettings::get_RingFlipVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Int32 CurvedUI.CurvedUISettings::get_RingExternalDiameter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Single CurvedUI.CurvedUISettings::get_RingFill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_RingFill_mD2847B47EBBC41023A34E40FA2D6583FC5F2F2D1 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Single CurvedUI.CurvedUIExtensionMethods::Remap(System.Single,System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUIExtensionMethods_Remap_m6FE4C83EBA65F6FED4242A28626F9F19BE6E0533 (float ___value0, float ___from11, float ___to12, float ___from23, float ___to24, const RuntimeMethod* method) ;
// System.Int32 CurvedUI.CurvedUISettings::get_VerticalAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_VerticalAngle_mA8B6369AF4F0EE3DC10FDD87AC000921D90E04A4 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUISettings::get_PreserveAspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline (const RuntimeMethod* method) ;
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.Graphic>(System.Boolean)
inline GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m572F210B8FC74385E1F23007FEBF22F39042217D (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___includeInactive0, method);
}
// T UnityEngine.Component::GetComponent<CurvedUI.CurvedUIVertexEffect>()
inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* Component_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB912792459B63AD30A5C70BA8B06EA965B0C0A3 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<CurvedUI.CurvedUIVertexEffect>()
inline CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.UI.InputField>(System.Boolean)
inline InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1* Component_GetComponentsInChildren_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m1FF4411D21B902EA7DE5259ED315E420FD4340EC (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___includeInactive0, method);
}
// T UnityEngine.Component::GetComponent<CurvedUI.CurvedUIInputFieldCaret>()
inline CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA* Component_GetComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_mC27E0B9D788FD1008307D710E0FC0B9C30BB6828 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<CurvedUI.CurvedUIInputFieldCaret>()
inline CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA* GameObject_AddComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_m73A0EE72E844324C501B6DCEB597D9792AA8B108 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<TMPro.TextMeshProUGUI>(System.Boolean)
inline TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* Component_GetComponentsInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m24F09A90E26E64A56618D8CED3E95C064BEBFDF4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___includeInactive0, method);
}
// T UnityEngine.Component::GetComponent<CurvedUI.CurvedUITMP>()
inline CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* Component_GetComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_mFA87FBAC47001E257FEA54146E60B9A3885AB565 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.GameObject::AddComponent<CurvedUI.CurvedUITMP>()
inline CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* GameObject_AddComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_m4AF269DEC713DA8FAC72F84578D662013D1295D2 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_m69B93700FACCF372F5753371C6E8FB780800B824_gshared)(__this, method);
}
// T[] UnityEngine.Component::GetComponentsInChildren<TMPro.TMP_InputField>(System.Boolean)
inline TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8* Component_GetComponentsInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mE5AE22441D30BBF9D2D3471D492068C3007D20C0 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, bool ___includeInactive0, const RuntimeMethod* method)
{
	return ((  TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, bool, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m90734C3A39A158985239CB90DE2F0792F1D99926_gshared)(__this, ___includeInactive0, method);
}
// T CurvedUI.CurvedUIExtensionMethods::AddComponentIfMissing<CurvedUI.CurvedUITMPInputFieldCaret>(UnityEngine.Component)
inline CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8_m69B78304C618436E545F40E2F0F87E6A469B0B6E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* ___go0, const RuntimeMethod* method)
{
	return ((  CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))CurvedUIExtensionMethods_AddComponentIfMissing_TisRuntimeObject_mF6685B145584B06CFE932A358137E65532338DE1_gshared)(___go0, method);
}
// CurvedUI.CurvedUISettings/CurvedUIShape CurvedUI.CurvedUISettings::get_Shape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToCyllinder(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToCyllinder_m12EFB7BA23AA76CDC724FC71957A60EDAD40660E (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToCyllinderVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToCyllinderVertical_m8C7D1A1B09B76B8077EB7A5998C7F9375571B173 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToRing(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToRing_m303886D7B4A9F6A87EA1913D6AFD5E4FD3B13B1C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToSphere(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToSphere_mC7000D24730E5F03AAD0D21E0E9AB1B781492A8D (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::VertexPositionToCurvedCanvas(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_VertexPositionToCurvedCanvas_m133B14EA06CF870431EC6AC9877B36CFBDB61D65 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsNaN(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) ;
// System.Boolean System.Single::IsInfinity(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m500DB7A91ADC75BE691663649FCA28485FA720AB_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_localToWorldMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___point0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUIExtensionMethods::ModifyY(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUIExtensionMethods_ModifyY_m4CE14AC5E24894B12061A6D4AEEE4481186D4254 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___trans0, float ___newVal1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyVector(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937 (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_normalized()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 CurvedUI.CurvedUIExtensionMethods::ModifyX(UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUIExtensionMethods_ModifyX_mB7903680A37D1FEAB2C8DB75A073DF3AF73D304B (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___trans0, float ___newVal1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_UnaryNegation(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline (const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Clamp(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) ;
// System.Single CurvedUI.CurvedUISettings::GetSegmentsByAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_GetSegmentsByAngle_mB9310D4776001563D73595C6A5026424DEA1D8B9 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, float ___angle0, const RuntimeMethod* method) ;
// UnityEngine.Vector2 UnityEngine.Vector2::op_Division(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) ;
// System.Single CurvedUI.CurvedUISettings::get_Quality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_Quality_mD4FAA57D6D6197E3CB9D02D7CB1247AFCCF350F6 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) ;
// System.Single CurvedUI.CurvedUIExtensionMethods::Abs(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUIExtensionMethods_Abs_m4B664419261B9586FA9F1D8EFC1AE35F341F4944 (float ___value0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::set_CurvingRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_CurvingRequired_m955958BBAD2A29D7606644AA29A073D2FC6C9778 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUIRaycaster::get_PointingAtCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIRaycaster_get_PointingAtCanvas_mAB3CF97B0286809A4116DA42464B7E61A20C29CA (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIRaycaster::Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIRaycaster_Click_mC59574F26CE82DE645643D2C8B6225BD274C47E3 (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, const RuntimeMethod* method) ;
// CurvedUIInputModule/CUIControlMethod CurvedUIInputModule::get_ControlMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUIInputModule_get_ControlMethod_m638A860DAE7C6CD43ADCE3B9606EE40843B8522A (const RuntimeMethod* method) ;
// System.Void CurvedUIInputModule::set_ControlMethod(CurvedUIInputModule/CUIControlMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIInputModule_set_ControlMethod_mE122CC6C6FE47AB331235BEA053EED0D244870B5 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::GetObjectsUnderPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CurvedUIRaycaster_GetObjectsUnderPointer_m38A63021371980C1EC1A625AB69AC60A3040F950 (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.GameObject>::.ctor()
inline void List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// UnityEngine.Camera UnityEngine.Canvas::get_worldCamera()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853 (Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::GetObjectsUnderScreenPos(UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CurvedUIRaycaster_GetObjectsUnderScreenPos_m7F3BB3E9329D6F8180F80173AC25057141176CD0 (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___screenPos0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___eventCamera1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUIRaycaster::GetObjectsHitByRay(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CurvedUIRaycaster_GetObjectsHitByRay_m3819C5A0CB923094509F22CDB857231F574310F2 (CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, const RuntimeMethod* method) ;
// CurvedUIInputModule CurvedUIInputModule::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* CurvedUIInputModule_get_Instance_m61740C43FEDC099210588F5D73459D222D789ACD (const RuntimeMethod* method) ;
// System.Boolean CurvedUIInputModule::get_GazeUseTimedClick()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CurvedUIInputModule_get_GazeUseTimedClick_m5A4D1EF48159BAEAB7442199036ED6071DC0A98C_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) ;
// System.Void CurvedUIInputModule::set_GazeUseTimedClick(System.Boolean)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CurvedUIInputModule_set_GazeUseTimedClick_m5103211575DCD154F3173A9DF228B16E1AE76CF0_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Single CurvedUIInputModule::get_GazeClickTimer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUIInputModule_get_GazeClickTimer_mBACA415983885ED0D52C2BA1806BD9D999CCAFC3_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) ;
// System.Void CurvedUIInputModule::set_GazeClickTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIInputModule_set_GazeClickTimer_m0FF55B26ECDF47724A45355E8738C49E94759B27 (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single CurvedUIInputModule::get_GazeClickTimerDelay()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUIInputModule_get_GazeClickTimerDelay_mEE9D705F5B6072FA19FA68794CF59F697124E0B7_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) ;
// System.Void CurvedUIInputModule::set_GazeClickTimerDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIInputModule_set_GazeClickTimerDelay_mFE44D70901F6C53ECEE461865BD69E0F0E26F945 (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, float ___value0, const RuntimeMethod* method) ;
// System.Single CurvedUIInputModule::get_GazeTimerProgress()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUIInputModule_get_GazeTimerProgress_m20F15F571020564B09F34E9E9E85B31B96792B74_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Graphic>()
inline Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<TMPro.TextMeshProUGUI>()
inline TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// T UnityEngine.Component::GetComponent<CurvedUI.CurvedUITMPSubmesh>()
inline CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* Component_GetComponent_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_m8947457C233E7D195B4D3F6D3458060F45A95A6E (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// CurvedUI.CurvedUISettings CurvedUI.CurvedUIVertexEffect::FindParentSettings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* CurvedUIVertexEffect_FindParentSettings_m53B1CC1A4E297E5593C3480B7880550DD879728C (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___forceNew0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Implicit(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___exists0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_RegisterDirtyMaterialCallback_m5EDBA1E08656A49997538A1C7DE29201FDE0A013 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::RegisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_RegisterDirtyVerticesCallback_m46034B2100B5D28BDBCCB34C1283B1B9B2DB9A9E (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action0, const RuntimeMethod* method) ;
// System.Void System.Action`1<UnityEngine.Font>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m970A8DFC8A17354AB74107AC11E2ACE2A3D5200F (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC*, RuntimeObject*, intptr_t, const RuntimeMethod*))Action_1__ctor_m2E1DFA67718FC1A0B6E5DFEB78831FFE9C059EB4_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Font::add_textureRebuilt(System.Action`1<UnityEngine.Font>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Font_add_textureRebuilt_m0C7E9998192691918BC92548EE955380AD63FF0B (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.EventSystems.UIBehaviour::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45 (UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.UI.Selectable>()
inline Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// UnityEngine.Matrix4x4 UnityEngine.Transform::get_worldToLocalMatrix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Type System.Object::GetType()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0 (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyMaterialCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_UnregisterDirtyMaterialCallback_m62B9DB9B9021EC647E1B3D5122FE3693F8FC9BD2 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Graphic::UnregisterDirtyVerticesCallback(UnityEngine.Events.UnityAction)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Graphic_UnregisterDirtyVerticesCallback_mA36A388BF7DDB2D71596D6F13CEFCA79B4199B5C (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___action0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Font::remove_textureRebuilt(System.Action`1<UnityEngine.Font>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Font_remove_textureRebuilt_mCCA3614ED92E2BE1EAC5FCE2D7DDFEDB0DCDE127 (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* ___value0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::set_tesselationRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___value0, const RuntimeMethod* method) ;
// UnityEngine.Font UnityEngine.UI.Text::get_font()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Font_tC95270EA3198038970422D78B74A7F2E218A96B6* Text_get_font_mBF98ED39D5C5081AF14A64170EC3391D206CCAFD (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUIVertexEffect::get_tesselationRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Inequality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Single UnityEngine.UI.Image::get_fillAmount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUIExtensionMethods::AlmostEqual(UnityEngine.Vector3,UnityEngine.Vector3,System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIExtensionMethods_AlmostEqual_m54CB785F14677C4EAEF1E4CFBAE87592851BE716 (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, double ___accuracy2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) ;
// System.Boolean CurvedUI.CurvedUIVertexEffect::ShouldModify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_ShouldModify_mCC1D27BCDD16442C8896AC7CEBB12D1531BEAFB9 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::CheckTextFontMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_CheckTextFontMaterial_m46226586E181FB5CB4AF23FE0CFAB96C60559637 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::.ctor()
inline void List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Clear()
inline void List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_gshared_inline)(__this, method);
}
// System.Void UnityEngine.UI.VertexHelper::GetUIVertexStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___stream0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::TesselateGeometry(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_TesselateGeometry_m001143606FBA1736ACA55BBA194527DB340EEE8A (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___verts0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Count()
inline int32_t List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, const RuntimeMethod*))List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<UnityEngine.UIVertex>::get_Item(System.Int32)
inline UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, const RuntimeMethod*))List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_gshared)(__this, ___index0, method);
}
// UnityEngine.UIVertex CurvedUI.CurvedUIVertexEffect::CurveVertex(UnityEngine.UIVertex,System.Single,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 CurvedUIVertexEffect_CurveVertex_mD01F1EE23791D3FC1A04A1406F0CA8E68267ACDA (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___input0, float ___cylinder_angle1, float ___radius2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___canvasSize3, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::set_Item(System.Int32,T)
inline void List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_gshared)(__this, ___index0, ___value1, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::Add(T)
inline void List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, const RuntimeMethod*))List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_gshared_inline)(__this, ___item0, method);
}
// System.Void UnityEngine.UI.VertexHelper::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.UI.VertexHelper::get_currentVertCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VertexHelper_get_currentVertCount_m45BFEBD6FCB7DF3BF9F76946D6002BDC58B173A4 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::AddVert(UnityEngine.UIVertex)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddVert_mB65D778E8E3C6916CDFF5382208890882C3031BA (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___v0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::AddTriangle(System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, int32_t ___idx00, int32_t ___idx11, int32_t ___idx22, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.VertexHelper::AddUIVertexTriangleStream(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841 (VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___verts0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1 (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, const RuntimeMethod* method) ;
// UnityEngine.TextGenerator UnityEngine.UI.Text::get_cachedTextGenerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* Text_get_cachedTextGenerator_mFC242539F7380F54696D431B126B69DC4EFC821E (Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.IList`1<UnityEngine.UIVertex> UnityEngine.TextGenerator::get_verts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TextGenerator_get_verts_mA197E8944ABE4831B93275662BB66EC53DE349D8 (TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Inequality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_m23600308603A706A9DD6057603DEA82E9A6F9FEF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponentInParent<CurvedUI.CurvedUISettings>()
inline CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponentInParent_TisRuntimeObject_m6746D6BB99912B1B509746C993906492F86CD119_gshared)(__this, method);
}
// UnityEngine.Vector2 CurvedUI.CurvedUISettings::GetTesslationSize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CurvedUISettings_GetTesslationSize_m244B198E9E96821752B0BB22174639803E8196B2 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___modifiedByQuality0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::TrisToQuads(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_TrisToQuads_m9DD062DD6518593E61FA6964886CDDE4C3A376E4 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___verts0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyQuad(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_ModifyQuad_mEAC08EDC04F5B93091D9A4783F4BDBEF9CD76F0E (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___verts0, int32_t ___vertexIndex1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___requiredSize2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::RemoveRange(System.Int32,System.Int32)
inline void List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229 (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, int32_t ___index0, int32_t ___count1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, int32_t, int32_t, const RuntimeMethod*))List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_gshared)(__this, ___index0, ___count1, method);
}
// UnityEngine.UI.Image/Type UnityEngine.UI.Image::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Image_get_type_m7CE3AA14B38E1C50AC8362176AE842992DA8C639 (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Mathf::Max(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Mathf::CeilToInt(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) ;
// UnityEngine.UIVertex CurvedUI.CurvedUIVertexEffect::TesselateQuad(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 CurvedUIVertexEffect_TesselateQuad_m458D2B5C9B0F0BA5BA28FE1EB6E1803487A94A86 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, float ___x0, float ___y1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<UnityEngine.UIVertex>::AddRange(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*, RuntimeObject*, const RuntimeMethod*))List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A_gshared)(__this, ___collection0, method);
}
// UnityEngine.Vector4 UnityEngine.Vector4::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Multiply(UnityEngine.Vector4,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Vector4::op_Addition(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m5E7015CDA7DD1FCB4E488DE23C5DB959D7406843_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::set_TesselationRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_TesselationRequired_m53B8A90218456051784AD8A136C5CB91A9CDCCD4 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.BaseMeshEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BaseMeshEffect__ctor_mFFF23FD89B32150DAC512C556A1CCF563D062427 (BaseMeshEffect_t87C453D6DAE52C072B2E613F65A5FE45C9B3990D* __this, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::FindTMP()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FindTMP_m6438102AC53D8B20D1E93185009282A180233F3B (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) ;
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
// System.Void TMPro.FastAction`1<UnityEngine.Object>::Remove(System.Action`1<A>)
inline void FastAction_1_Remove_mB29130AC90F5F8967CD89587717469E44E4D186F (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005* __this, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A* ___rhs0, const RuntimeMethod* method)
{
	((  void (*) (FastAction_1_tE50C6A692DF85AB55BE3160B659FA7DF19DFA005*, Action_1_t7F8A08D55E64F30F0E9A4213699C99903459421A*, const RuntimeMethod*))FastAction_1_Remove_m0C649E2173AA0370C08417DCFD89B7304F28BC0C_gshared)(__this, ___rhs0, method);
}
// System.Boolean CurvedUI.CurvedUITMP::ShouldTesselate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUITMP_ShouldTesselate_m689E16AB706109496751DEA326C551CF1214D54B (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, const RuntimeMethod* method) ;
// System.Void TMPro.TMP_Text::set_renderMode(TMPro.TextRenderFlags)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TMP_Text_set_renderMode_m091533DEE7FD20A61249DC52C786ED4FFE5A5C2A (TMP_Text_tE8D677872D43AD4B2AAF0D6101692A17D0B251A9* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::CreateUIVertexList(UnityEngine.Mesh)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_CreateUIVertexList_m57345FC6BDFFB8143D5FA4BC52E652BBE265EBBF (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyTMPMesh(System.Collections.Generic.List`1<UnityEngine.UIVertex>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_ModifyTMPMesh_m1399E60A903D57BEA95FE80DE7CBF42E50C104F2 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** ___vertexList0, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::FillMeshWithUIVertexList(UnityEngine.Mesh,System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_FillMeshWithUIVertexList_mEDA5D96395071B4167976CBAD82678ECC503A350 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___mesh0, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___list1, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_localScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_localScale_m804A002A53A645CDFCD15BB0F37209162720363F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_lossyScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_lossyScale_mFF740DA4BE1489C6882CD2F3A37B7321176E5D07 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
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
// UnityEngine.Vector3[] UnityEngine.Mesh::get_vertices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* Mesh_get_vertices_mA3577F1B08EDDD54E26AEB3F8FFE4EC247D2ABB9 (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
// System.Void CurvedUI.CurvedUITMP::GetUIVertexFromMesh(UnityEngine.UIVertex&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUITMP_GetUIVertexFromMesh_mE3FE10841519A8EAE139A390D725291F002B41E0 (CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* ___vert0, int32_t ___i1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::set_vertices(UnityEngine.Vector3[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_set_vertices_m5BB814D89E9ACA00DBF19F7D8E22CB73AC73FE5C (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Mesh::RecalculateBounds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mesh_RecalculateBounds_mA9B293F57C6CD298AE2D2DB19061FC23B05AB90B (Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* __this, const RuntimeMethod* method) ;
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
// System.Boolean UnityEngine.Vector3::op_Inequality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Inequality_m6A7FB1C9E9DE194708997BFA24C6E238D92D908E_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
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
// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::get_canvasRenderer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* Graphic_get_canvasRenderer_m62AB727277A28728264860232642DA6EC20DEAB1 (Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_m5447BF12C18339431AB8AF02FA463C543D88D463_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___lhs0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rhs1, const RuntimeMethod* method) ;
// System.Int32 System.BitConverter::SingleToInt32Bits(System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline (float ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::Normalize(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Color::op_Equality(UnityEngine.Color,UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector4::op_Equality(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector4::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::op_Equality(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_op_Equality_m15951D1B53E3BE36C9D265E229090020FBD72EBB_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___lhs0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rhs1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Single UnityEngine.Vector3::Magnitude(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Division(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Vector4 UnityEngine.Color::op_Implicit(UnityEngine.Color)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CurvedUI.CurvedUIRaycaster/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m1EBBA9225FD67B4A105FA23B4BF79A183145DC6E (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* L_0 = (U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A*)il2cpp_codegen_object_new(U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8DE73B237768336C8431841D166319FE24A7B69F(L_0, NULL);
		((U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CurvedUI.CurvedUIRaycaster/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8DE73B237768336C8431841D166319FE24A7B69F (U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CurvedUI.CurvedUIRaycaster/<>c::<Update>b__21_0(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CUpdateU3Eb__21_0_m8EA7D44F174424CFED6E76024644D0BDD5EDFC58 (U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t G_B3_0 = 0;
	{
		// obj.GetComponent<Selectable>() == null || obj.GetComponent<Selectable>().interactable == false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___obj0;
		NullCheck(L_0);
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_1;
		L_1 = GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905(L_0, GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_2)
		{
			goto IL_001e;
		}
	}
	{
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = ___obj0;
		NullCheck(L_3);
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_4;
		L_4 = GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905(L_3, GameObject_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m93A8AF2453F19562F2940144280A3640F488F905_RuntimeMethod_var);
		NullCheck(L_4);
		bool L_5;
		L_5 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112(L_4, NULL);
		G_B3_0 = ((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		goto IL_001f;
	}

IL_001e:
	{
		G_B3_0 = 1;
	}

IL_001f:
	{
		return (bool)G_B3_0;
	}
}
// System.Int32 CurvedUI.CurvedUIRaycaster/<>c::<FlatRaycastAndSort>b__32_0(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CFlatRaycastAndSortU3Eb__32_0_m578595B297377972F520753A876BBF5DCDAD74BF (U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___g10, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___g21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// s_SortedGraphics.Sort((g1, g2) => g2.depth.CompareTo(g1.depth));
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___g21;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Graphic_get_depth_m16A82C751AE0497941048A3715D48A1066939460(L_0, NULL);
		V_0 = L_1;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2 = ___g10;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Graphic_get_depth_m16A82C751AE0497941048A3715D48A1066939460(L_2, NULL);
		int32_t L_4;
		L_4 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((&V_0), L_3, NULL);
		return L_4;
	}
}
// System.Int32 CurvedUI.CurvedUIRaycaster/<>c::<GetObjectsHitByRay>b__55_0(UnityEngine.UI.Graphic,UnityEngine.UI.Graphic)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t U3CU3Ec_U3CGetObjectsHitByRayU3Eb__55_0_mDFC3918EE542EF0BC27FEBAA8F403201B2076D8F (U3CU3Ec_tEE9FD566249FF6FE5B481CA4B38186C2666ACC5A* __this, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___g10, Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___g21, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// s_SortedGraphics.Sort((g1, g2) => g2.depth.CompareTo(g1.depth));
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = ___g21;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Graphic_get_depth_m16A82C751AE0497941048A3715D48A1066939460(L_0, NULL);
		V_0 = L_1;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_2 = ___g10;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Graphic_get_depth_m16A82C751AE0497941048A3715D48A1066939460(L_2, NULL);
		int32_t L_4;
		L_4 = Int32_CompareTo_mFA011811D4447442ED442B4A507BD4267621C586((&V_0), L_3, NULL);
		return L_4;
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
// System.Void CurvedUI.CurvedUISettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_Awake_mB21A478184331B55B372CF81CF088A93E11FFB05 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// if (gameObject.layer == 0) this.gameObject.layer = 5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0;
		L_0 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = GameObject_get_layer_m108902B9C89E9F837CE06B9942AA42307450FEAF(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// if (gameObject.layer == 0) this.gameObject.layer = 5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_3);
		GameObject_set_layer_m6E1AF478A2CC86BD222B96317BEB78B7D89B18D0(L_3, 5, NULL);
	}

IL_0020:
	{
		// savedRectSize = RectTransform.rect.size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_4, NULL);
		V_1 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		__this->___savedRectSize_17 = L_6;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUISettings::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_Start_mF48213A421FB02A9D9755E4AECB608442ED15DAF (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m8B08E2AF2F8395AC7D0948D3A03628A2C193C455_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_m102070591A00F3B095E6F4E4F6DA897B2A82AFB6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_m13EBD191CB75608EF8A61D6A7AFA49E51031FE0E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDDD374A7E41DD53902353C5AE7ED852D7D631EF0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* V_1 = NULL;
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* V_2 = NULL;
	BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* V_3 = NULL;
	int32_t V_4 = 0;
	BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* V_5 = NULL;
	bool V_6 = false;
	CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* V_7 = NULL;
	int32_t V_8 = 0;
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* V_9 = NULL;
	bool V_10 = false;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* V_11 = NULL;
	String_t* V_12 = NULL;
	bool V_13 = false;
	bool V_14 = false;
	{
		// if (Application.isPlaying)
		bool L_0;
		L_0 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_010c;
		}
	}
	{
		// BaseRaycaster[] raycasters = GetComponents<BaseRaycaster>();
		BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* L_2;
		L_2 = Component_GetComponents_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_m102070591A00F3B095E6F4E4F6DA897B2A82AFB6(__this, Component_GetComponents_TisBaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832_m102070591A00F3B095E6F4E4F6DA897B2A82AFB6_RuntimeMethod_var);
		V_1 = L_2;
		// foreach(BaseRaycaster caster in raycasters)
		BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* L_3 = V_1;
		V_3 = L_3;
		V_4 = 0;
		goto IL_0047;
	}

IL_001d:
	{
		// foreach(BaseRaycaster caster in raycasters)
		BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* L_4 = V_3;
		int32_t L_5 = V_4;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_5 = L_7;
		// if (!(caster is CurvedUIRaycaster))
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_8 = V_5;
		V_6 = (bool)((((int32_t)((!(((RuntimeObject*)(CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76*)((CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76*)IsInstClass((RuntimeObject*)L_8, CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_6;
		if (!L_9)
		{
			goto IL_0040;
		}
	}
	{
		// caster.enabled = false;
		BaseRaycaster_t7DC8158FD3CA0193455344379DD5FF7CD5F1F832* L_10 = V_5;
		NullCheck(L_10);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_10, (bool)0, NULL);
	}

IL_0040:
	{
		int32_t L_11 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_0047:
	{
		// foreach(BaseRaycaster caster in raycasters)
		int32_t L_12 = V_4;
		BaseRaycasterU5BU5D_tAE62D3FF1A5FF9DE20B2756DA4F4F8981925A799* L_13 = V_3;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))
		{
			goto IL_001d;
		}
	}
	{
		// this.gameObject.AddComponentIfMissing<CurvedUIRaycaster>();
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_14;
		L_14 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_15;
		L_15 = CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_m13EBD191CB75608EF8A61D6A7AFA49E51031FE0E(L_14, CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_m13EBD191CB75608EF8A61D6A7AFA49E51031FE0E_RuntimeMethod_var);
		// Canvas[] canvases = GetComponentsInChildren<Canvas>();
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_16;
		L_16 = Component_GetComponentsInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m8B08E2AF2F8395AC7D0948D3A03628A2C193C455(__this, Component_GetComponentsInChildren_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m8B08E2AF2F8395AC7D0948D3A03628A2C193C455_RuntimeMethod_var);
		V_2 = L_16;
		// foreach(Canvas cnv in canvases)
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_17 = V_2;
		V_7 = L_17;
		V_8 = 0;
		goto IL_0100;
	}

IL_006d:
	{
		// foreach(Canvas cnv in canvases)
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_18 = V_7;
		int32_t L_19 = V_8;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_9 = L_21;
		// if (cnv.gameObject != this.gameObject)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_22 = V_9;
		NullCheck(L_22);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23;
		L_23 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_22, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24;
		L_24 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_25;
		L_25 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_23, L_24, NULL);
		V_10 = L_25;
		bool L_26 = V_10;
		if (!L_26)
		{
			goto IL_00f9;
		}
	}
	{
		// Transform trans = cnv.transform;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_27 = V_9;
		NullCheck(L_27);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28;
		L_28 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_27, NULL);
		V_11 = L_28;
		// string hierarchyName = trans.name;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_29 = V_11;
		NullCheck(L_29);
		String_t* L_30;
		L_30 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_29, NULL);
		V_12 = L_30;
		goto IL_00c7;
	}

IL_00a2:
	{
		// hierarchyName = trans.parent.name + "/" + hierarchyName;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = V_11;
		NullCheck(L_31);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_32;
		L_32 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_31, NULL);
		NullCheck(L_32);
		String_t* L_33;
		L_33 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_32, NULL);
		String_t* L_34 = V_12;
		String_t* L_35;
		L_35 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(L_33, _stringLiteral86BBAACC00198DBB3046818AD3FC2AA10AE48DE1, L_34, NULL);
		V_12 = L_35;
		// trans = trans.parent;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_36 = V_11;
		NullCheck(L_36);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_36, NULL);
		V_11 = L_37;
	}

IL_00c7:
	{
		// while(trans.parent != null)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_38 = V_11;
		NullCheck(L_38);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39;
		L_39 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_38, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_40;
		L_40 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_39, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_13 = L_40;
		bool L_41 = V_13;
		if (L_41)
		{
			goto IL_00a2;
		}
	}
	{
		// Debug.LogWarning("CURVEDUI: Interactions on nested canvases are not supported. You won't be able to interact with any child object of [" + hierarchyName + "]", cnv.gameObject);
		String_t* L_42 = V_12;
		String_t* L_43;
		L_43 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralDDD374A7E41DD53902353C5AE7ED852D7D631EF0, L_42, _stringLiteralE166C9564FBDE461738077E3B1B506525EB6ACCC, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_44 = V_9;
		NullCheck(L_44);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45;
		L_45 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_44, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_43, L_45, NULL);
	}

IL_00f9:
	{
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_0100:
	{
		// foreach(Canvas cnv in canvases)
		int32_t L_47 = V_8;
		CanvasU5BU5D_tE5C544063BDA76B67407EFED5FF893BBCDB74841* L_48 = V_7;
		NullCheck(L_48);
		if ((((int32_t)L_47) < ((int32_t)((int32_t)(((RuntimeArray*)L_48)->max_length)))))
		{
			goto IL_006d;
		}
	}
	{
	}

IL_010c:
	{
		// if (myCanvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_49 = __this->___myCanvas_19;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_50;
		L_50 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_49, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_14 = L_50;
		bool L_51 = V_14;
		if (!L_51)
		{
			goto IL_012a;
		}
	}
	{
		// myCanvas = GetComponent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_52;
		L_52 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(__this, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___myCanvas_19 = L_52;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myCanvas_19), (void*)L_52);
	}

IL_012a:
	{
		// savedRadius = GetCyllinderRadiusInCanvasSpace();
		float L_53;
		L_53 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(__this, NULL);
		__this->___savedRadius_18 = L_53;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUISettings::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_OnEnable_m838A0B2949372AACE01AB8C008A95E82F4E8C9FF (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* V_0 = NULL;
	int32_t V_1 = 0;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_2 = NULL;
	{
		// foreach (UnityEngine.UI.Graphic graph in (this).GetComponentsInChildren<UnityEngine.UI.Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_0;
		L_0 = Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30(__this, Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_001e;
	}

IL_000d:
	{
		// foreach (UnityEngine.UI.Graphic graph in (this).GetComponentsInChildren<UnityEngine.UI.Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// graph.SetAllDirty();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5 = V_2;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// foreach (UnityEngine.UI.Graphic graph in (this).GetComponentsInChildren<UnityEngine.UI.Graphic>())
		int32_t L_7 = V_1;
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUISettings::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_OnDisable_mFF38527168591B26A9EF8172D419FB999623CF4C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* V_0 = NULL;
	int32_t V_1 = 0;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_2 = NULL;
	{
		// foreach (UnityEngine.UI.Graphic graph in (this).GetComponentsInChildren<UnityEngine.UI.Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_0;
		L_0 = Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30(__this, Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_001e;
	}

IL_000d:
	{
		// foreach (UnityEngine.UI.Graphic graph in (this).GetComponentsInChildren<UnityEngine.UI.Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// graph.SetAllDirty();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5 = V_2;
		NullCheck(L_5);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_5);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_001e:
	{
		// foreach (UnityEngine.UI.Graphic graph in (this).GetComponentsInChildren<UnityEngine.UI.Graphic>())
		int32_t L_7 = V_1;
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUISettings::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_Update_mE3A37387DDD9A8FBB6B8DD1CA9D16E56D5FBD701 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF5E18CA9BC348412D57A3E586EF2AFECE4B28139);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t G_B5_0 = 0;
	{
		// if (RectTransform.rect.size != savedRectSize)
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_1 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = __this->___savedRectSize_17;
		bool L_4;
		L_4 = Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline(L_2, L_3, NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_004b;
		}
	}
	{
		// savedRectSize = RectTransform.rect.size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_6;
		L_6 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_6);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_7;
		L_7 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_6, NULL);
		V_1 = L_7;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_8;
		L_8 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		__this->___savedRectSize_17 = L_8;
		// SetUIAngle(angle);
		int32_t L_9 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_9, NULL);
	}

IL_004b:
	{
		// if (savedRectSize.x == 0 || savedRectSize.y == 0)
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_10 = (&__this->___savedRectSize_17);
		float L_11 = L_10->___x_0;
		if ((((float)L_11) == ((float)(0.0f))))
		{
			goto IL_0071;
		}
	}
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = (&__this->___savedRectSize_17);
		float L_13 = L_12->___y_1;
		G_B5_0 = ((((float)L_13) == ((float)(0.0f)))? 1 : 0);
		goto IL_0072;
	}

IL_0071:
	{
		G_B5_0 = 1;
	}

IL_0072:
	{
		V_2 = (bool)G_B5_0;
		bool L_14 = V_2;
		if (!L_14)
		{
			goto IL_0081;
		}
	}
	{
		// Debug.LogError("CurvedUI: Your Canvas size must be bigger than 0!");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_m059825802BB6AF7EA9693FEBEEB0D85F59A3E38E(_stringLiteralF5E18CA9BC348412D57A3E586EF2AFECE4B28139, NULL);
	}

IL_0081:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUISettings::SetUIAngle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___newAngle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* V_2 = NULL;
	int32_t V_3 = 0;
	CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* V_4 = NULL;
	GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* V_5 = NULL;
	int32_t V_6 = 0;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_7 = NULL;
	bool V_8 = false;
	int32_t G_B13_0 = 0;
	{
		// if (myCanvas == null)
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___myCanvas_19;
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
		// myCanvas = GetComponent<Canvas>();
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3;
		L_3 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(__this, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___myCanvas_19 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myCanvas_19), (void*)L_3);
	}

IL_001d:
	{
		// if (newAngle == 0) newAngle = 1;
		int32_t L_4 = ___newAngle0;
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0028;
		}
	}
	{
		// if (newAngle == 0) newAngle = 1;
		___newAngle0 = 1;
	}

IL_0028:
	{
		// angle = newAngle;
		int32_t L_6 = ___newAngle0;
		__this->___angle_10 = L_6;
		// savedRadius = GetCyllinderRadiusInCanvasSpace();
		float L_7;
		L_7 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(__this, NULL);
		__this->___savedRadius_18 = L_7;
		// foreach (CurvedUIVertexEffect ve in GetComponentsInChildren<CurvedUIVertexEffect>())
		CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* L_8;
		L_8 = Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B(__this, Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B_RuntimeMethod_var);
		V_2 = L_8;
		V_3 = 0;
		goto IL_0058;
	}

IL_0047:
	{
		// foreach (CurvedUIVertexEffect ve in GetComponentsInChildren<CurvedUIVertexEffect>())
		CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* L_9 = V_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		V_4 = L_12;
		// ve.SetDirty();
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_13 = V_4;
		NullCheck(L_13);
		CurvedUIVertexEffect_SetDirty_mDE58FDE3D93E15271604480ABE22590757DAA100(L_13, NULL);
		int32_t L_14 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_14, 1));
	}

IL_0058:
	{
		// foreach (CurvedUIVertexEffect ve in GetComponentsInChildren<CurvedUIVertexEffect>())
		int32_t L_15 = V_3;
		CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* L_16 = V_2;
		NullCheck(L_16);
		if ((((int32_t)L_15) < ((int32_t)((int32_t)(((RuntimeArray*)L_16)->max_length)))))
		{
			goto IL_0047;
		}
	}
	{
		// foreach (Graphic graph in GetComponentsInChildren<Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_17;
		L_17 = Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30(__this, Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m7F0E4D97FF9C811D256E7BA05C4F0F261C6BEE30_RuntimeMethod_var);
		V_5 = L_17;
		V_6 = 0;
		goto IL_0081;
	}

IL_006c:
	{
		// foreach (Graphic graph in GetComponentsInChildren<Graphic>())
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_18 = V_5;
		int32_t L_19 = V_6;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		V_7 = L_21;
		// graph.SetAllDirty();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_22 = V_7;
		NullCheck(L_22);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_22);
		int32_t L_23 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add(L_23, 1));
	}

IL_0081:
	{
		// foreach (Graphic graph in GetComponentsInChildren<Graphic>())
		int32_t L_24 = V_6;
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_25 = V_5;
		NullCheck(L_25);
		if ((((int32_t)L_24) < ((int32_t)((int32_t)(((RuntimeArray*)L_25)->max_length)))))
		{
			goto IL_006c;
		}
	}
	{
		// if (Application.isPlaying && GetComponent<CurvedUIRaycaster>() != null)
		bool L_26;
		L_26 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_26)
		{
			goto IL_009e;
		}
	}
	{
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_27;
		L_27 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_27, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B13_0 = ((int32_t)(L_28));
		goto IL_009f;
	}

IL_009e:
	{
		G_B13_0 = 0;
	}

IL_009f:
	{
		V_8 = (bool)G_B13_0;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00b1;
		}
	}
	{
		// GetComponent<CurvedUIRaycaster>().RebuildCollider();
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_30;
		L_30 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		NullCheck(L_30);
		CurvedUIRaycaster_RebuildCollider_m9BCDA92282DCA114A6D7AD52FF7F819BDBAB698F(L_30, NULL);
	}

IL_00b1:
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToCyllinder(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToCyllinder_m12EFB7BA23AA76CDC724FC71957A60EDAD40660E (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float theta = (pos.x / savedRectSize.x) * Angle * Mathf.Deg2Rad;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___savedRectSize_17);
		float L_3 = L_2->___x_0;
		int32_t L_4;
		L_4 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5(__this, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_1/L_3)), ((float)L_4))), (0.0174532924f)));
		// pos.x = Mathf.Sin(theta) * (SavedRadius + pos.z);
		float L_5 = V_0;
		float L_6;
		L_6 = sinf(L_5);
		float L_7;
		L_7 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___pos0;
		float L_9 = L_8.___z_4;
		(&___pos0)->___x_2 = ((float)il2cpp_codegen_multiply(L_6, ((float)il2cpp_codegen_add(L_7, L_9))));
		// pos.z += Mathf.Cos(theta) * (SavedRadius + pos.z) - (SavedRadius + pos.z);
		float* L_10 = (&(&___pos0)->___z_4);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = V_0;
		float L_14;
		L_14 = cosf(L_13);
		float L_15;
		L_15 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___pos0;
		float L_17 = L_16.___z_4;
		float L_18;
		L_18 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___pos0;
		float L_20 = L_19.___z_4;
		*((float*)L_11) = (float)((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_14, ((float)il2cpp_codegen_add(L_15, L_17)))), ((float)il2cpp_codegen_add(L_18, L_20))))));
		// return pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___pos0;
		V_1 = L_21;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		return L_22;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToCyllinderVertical(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToCyllinderVertical_m8C7D1A1B09B76B8077EB7A5998C7F9375571B173 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// float theta = (pos.y / savedRectSize.y) * Angle * Mathf.Deg2Rad;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___savedRectSize_17);
		float L_3 = L_2->___y_1;
		int32_t L_4;
		L_4 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5(__this, NULL);
		V_0 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_1/L_3)), ((float)L_4))), (0.0174532924f)));
		// pos.y = Mathf.Sin(theta) * (SavedRadius + pos.z);
		float L_5 = V_0;
		float L_6;
		L_6 = sinf(L_5);
		float L_7;
		L_7 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___pos0;
		float L_9 = L_8.___z_4;
		(&___pos0)->___y_3 = ((float)il2cpp_codegen_multiply(L_6, ((float)il2cpp_codegen_add(L_7, L_9))));
		// pos.z += Mathf.Cos(theta) * (SavedRadius + pos.z) - (SavedRadius + pos.z);
		float* L_10 = (&(&___pos0)->___z_4);
		float* L_11 = L_10;
		float L_12 = *((float*)L_11);
		float L_13 = V_0;
		float L_14;
		L_14 = cosf(L_13);
		float L_15;
		L_15 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___pos0;
		float L_17 = L_16.___z_4;
		float L_18;
		L_18 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = ___pos0;
		float L_20 = L_19.___z_4;
		*((float*)L_11) = (float)((float)il2cpp_codegen_add(L_12, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_14, ((float)il2cpp_codegen_add(L_15, L_17)))), ((float)il2cpp_codegen_add(L_18, L_20))))));
		// return pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = ___pos0;
		V_1 = L_21;
		goto IL_006e;
	}

IL_006e:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = V_1;
		return L_22;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToRing(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToRing_m303886D7B4A9F6A87EA1913D6AFD5E4FD3B13B1C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	float G_B2_0 = 0.0f;
	float G_B2_1 = 0.0f;
	float G_B1_0 = 0.0f;
	float G_B1_1 = 0.0f;
	int32_t G_B3_0 = 0;
	float G_B3_1 = 0.0f;
	float G_B3_2 = 0.0f;
	float G_B5_0 = 0.0f;
	float G_B5_1 = 0.0f;
	float G_B5_2 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	float G_B4_2 = 0.0f;
	int32_t G_B6_0 = 0;
	float G_B6_1 = 0.0f;
	float G_B6_2 = 0.0f;
	float G_B6_3 = 0.0f;
	{
		// float r = pos.y.Remap(savedRectSize.y * 0.5f * (RingFlipVertical ? 1 : -1), -savedRectSize.y * 0.5f * (RingFlipVertical ? 1 : -1), RingExternalDiameter * (1 - RingFill) * 0.5f, RingExternalDiameter * 0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		float L_1 = L_0.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_2 = (&__this->___savedRectSize_17);
		float L_3 = L_2->___y_1;
		bool L_4;
		L_4 = CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2(__this, NULL);
		G_B1_0 = ((float)il2cpp_codegen_multiply(L_3, (0.5f)));
		G_B1_1 = L_1;
		if (L_4)
		{
			G_B2_0 = ((float)il2cpp_codegen_multiply(L_3, (0.5f)));
			G_B2_1 = L_1;
			goto IL_0023;
		}
	}
	{
		G_B3_0 = (-1);
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_0024;
	}

IL_0023:
	{
		G_B3_0 = 1;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_0024:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___savedRectSize_17);
		float L_6 = L_5->___y_1;
		bool L_7;
		L_7 = CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2(__this, NULL);
		G_B4_0 = ((float)il2cpp_codegen_multiply(((-L_6)), (0.5f)));
		G_B4_1 = ((float)il2cpp_codegen_multiply(G_B3_1, ((float)G_B3_0)));
		G_B4_2 = G_B3_2;
		if (L_7)
		{
			G_B5_0 = ((float)il2cpp_codegen_multiply(((-L_6)), (0.5f)));
			G_B5_1 = ((float)il2cpp_codegen_multiply(G_B3_1, ((float)G_B3_0)));
			G_B5_2 = G_B3_2;
			goto IL_0043;
		}
	}
	{
		G_B6_0 = (-1);
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_0044;
	}

IL_0043:
	{
		G_B6_0 = 1;
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_0044:
	{
		int32_t L_8;
		L_8 = CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9(__this, NULL);
		float L_9;
		L_9 = CurvedUISettings_get_RingFill_mD2847B47EBBC41023A34E40FA2D6583FC5F2F2D1(__this, NULL);
		int32_t L_10;
		L_10 = CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9(__this, NULL);
		float L_11;
		L_11 = CurvedUIExtensionMethods_Remap_m6FE4C83EBA65F6FED4242A28626F9F19BE6E0533(G_B6_3, G_B6_2, ((float)il2cpp_codegen_multiply(G_B6_1, ((float)G_B6_0))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_8), ((float)il2cpp_codegen_subtract((1.0f), L_9)))), (0.5f))), ((float)il2cpp_codegen_multiply(((float)L_10), (0.5f))), NULL);
		V_0 = L_11;
		// float theta = (pos.x / savedRectSize.x).Remap(-0.5f, 0.5f, Mathf.PI / 2.0f, angle * Mathf.Deg2Rad + Mathf.PI / 2.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___pos0;
		float L_13 = L_12.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_14 = (&__this->___savedRectSize_17);
		float L_15 = L_14->___x_0;
		int32_t L_16 = __this->___angle_10;
		float L_17;
		L_17 = CurvedUIExtensionMethods_Remap_m6FE4C83EBA65F6FED4242A28626F9F19BE6E0533(((float)(L_13/L_15)), (-0.5f), (0.5f), (1.57079637f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(((float)L_16), (0.0174532924f))), (1.57079637f))), NULL);
		V_1 = L_17;
		// pos.x = r * Mathf.Cos(theta);
		float L_18 = V_0;
		float L_19 = V_1;
		float L_20;
		L_20 = cosf(L_19);
		(&___pos0)->___x_2 = ((float)il2cpp_codegen_multiply(L_18, L_20));
		// pos.y = r * Mathf.Sin(theta);
		float L_21 = V_0;
		float L_22 = V_1;
		float L_23;
		L_23 = sinf(L_22);
		(&___pos0)->___y_3 = ((float)il2cpp_codegen_multiply(L_21, L_23));
		// return pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24 = ___pos0;
		V_2 = L_24;
		goto IL_00cf;
	}

IL_00cf:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_2;
		return L_25;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToSphere(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToSphere_mC7000D24730E5F03AAD0D21E0E9AB1B781492A8D (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_6;
	memset((&V_6), 0, sizeof(V_6));
	bool V_7 = false;
	float G_B3_0 = 0.0f;
	float G_B2_0 = 0.0f;
	float G_B4_0 = 0.0f;
	float G_B4_1 = 0.0f;
	{
		// float radius = SavedRadius;
		float L_0;
		L_0 = CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F(__this, NULL);
		V_0 = L_0;
		// float vAngle = VerticalAngle;
		int32_t L_1;
		L_1 = CurvedUISettings_get_VerticalAngle_mA8B6369AF4F0EE3DC10FDD87AC000921D90E04A4(__this, NULL);
		V_1 = ((float)L_1);
		// if (PreserveAspect)
		bool L_2;
		L_2 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A(__this, NULL);
		V_4 = L_2;
		bool L_3 = V_4;
		if (!L_3)
		{
			goto IL_005b;
		}
	}
	{
		// vAngle = angle * (savedRectSize.y / savedRectSize.x);
		int32_t L_4 = __this->___angle_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_5 = (&__this->___savedRectSize_17);
		float L_6 = L_5->___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_7 = (&__this->___savedRectSize_17);
		float L_8 = L_7->___x_0;
		V_1 = ((float)il2cpp_codegen_multiply(((float)L_4), ((float)(L_6/L_8))));
		// radius += Angle > 0 ? -pos.z : pos.z;
		float L_9 = V_0;
		int32_t L_10;
		L_10 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5(__this, NULL);
		G_B2_0 = L_9;
		if ((((int32_t)L_10) > ((int32_t)0)))
		{
			G_B3_0 = L_9;
			goto IL_004f;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = ___pos0;
		float L_12 = L_11.___z_4;
		G_B4_0 = L_12;
		G_B4_1 = G_B2_0;
		goto IL_0056;
	}

IL_004f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = ___pos0;
		float L_14 = L_13.___z_4;
		G_B4_0 = ((-L_14));
		G_B4_1 = G_B3_0;
	}

IL_0056:
	{
		V_0 = ((float)il2cpp_codegen_add(G_B4_1, G_B4_0));
		goto IL_0090;
	}

IL_005b:
	{
		// radius = savedRectSize.x / 2.0f + pos.z;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_15 = (&__this->___savedRectSize_17);
		float L_16 = L_15->___x_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ___pos0;
		float L_18 = L_17.___z_4;
		V_0 = ((float)il2cpp_codegen_add(((float)(L_16/(2.0f))), L_18));
		// if (vAngle == 0) return Vector3.zero;
		float L_19 = V_1;
		V_5 = (bool)((((float)L_19) == ((float)(0.0f)))? 1 : 0);
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_008f;
		}
	}
	{
		// if (vAngle == 0) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_6 = L_21;
		goto IL_0195;
	}

IL_008f:
	{
	}

IL_0090:
	{
		// float theta = (pos.x / savedRectSize.x).Remap(-0.5f, 0.5f, (180 - angle) / 2.0f - 90, 180 - (180 - angle) / 2.0f - 90);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22 = ___pos0;
		float L_23 = L_22.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_24 = (&__this->___savedRectSize_17);
		float L_25 = L_24->___x_0;
		int32_t L_26 = __this->___angle_10;
		int32_t L_27 = __this->___angle_10;
		float L_28;
		L_28 = CurvedUIExtensionMethods_Remap_m6FE4C83EBA65F6FED4242A28626F9F19BE6E0533(((float)(L_23/L_25)), (-0.5f), (0.5f), ((float)il2cpp_codegen_subtract(((float)(((float)((int32_t)il2cpp_codegen_subtract(((int32_t)180), L_26)))/(2.0f))), (90.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((180.0f), ((float)(((float)((int32_t)il2cpp_codegen_subtract(((int32_t)180), L_27)))/(2.0f))))), (90.0f))), NULL);
		V_2 = L_28;
		// theta *= Mathf.Deg2Rad;
		float L_29 = V_2;
		V_2 = ((float)il2cpp_codegen_multiply(L_29, (0.0174532924f)));
		// float gamma = (pos.y / savedRectSize.y).Remap(-0.5f, 0.5f, (180 - vAngle) / 2.0f, 180 - (180 - vAngle) / 2.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ___pos0;
		float L_31 = L_30.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_32 = (&__this->___savedRectSize_17);
		float L_33 = L_32->___y_1;
		float L_34 = V_1;
		float L_35 = V_1;
		float L_36;
		L_36 = CurvedUIExtensionMethods_Remap_m6FE4C83EBA65F6FED4242A28626F9F19BE6E0533(((float)(L_31/L_33)), (-0.5f), (0.5f), ((float)(((float)il2cpp_codegen_subtract((180.0f), L_34))/(2.0f))), ((float)il2cpp_codegen_subtract((180.0f), ((float)(((float)il2cpp_codegen_subtract((180.0f), L_35))/(2.0f))))), NULL);
		V_3 = L_36;
		// gamma *= Mathf.Deg2Rad;
		float L_37 = V_3;
		V_3 = ((float)il2cpp_codegen_multiply(L_37, (0.0174532924f)));
		// pos.z = Mathf.Sin(gamma) * Mathf.Cos(theta) * radius;
		float L_38 = V_3;
		float L_39;
		L_39 = sinf(L_38);
		float L_40 = V_2;
		float L_41;
		L_41 = cosf(L_40);
		float L_42 = V_0;
		(&___pos0)->___z_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_39, L_41)), L_42));
		// pos.y = -radius * Mathf.Cos(gamma);
		float L_43 = V_0;
		float L_44 = V_3;
		float L_45;
		L_45 = cosf(L_44);
		(&___pos0)->___y_3 = ((float)il2cpp_codegen_multiply(((-L_43)), L_45));
		// pos.x = Mathf.Sin(gamma) * Mathf.Sin(theta) * radius;
		float L_46 = V_3;
		float L_47;
		L_47 = sinf(L_46);
		float L_48 = V_2;
		float L_49;
		L_49 = sinf(L_48);
		float L_50 = V_0;
		(&___pos0)->___x_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_47, L_49)), L_50));
		// if (PreserveAspect)
		bool L_51;
		L_51 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A(__this, NULL);
		V_7 = L_51;
		bool L_52 = V_7;
		if (!L_52)
		{
			goto IL_0190;
		}
	}
	{
		// pos.z -= radius;
		float* L_53 = (&(&___pos0)->___z_4);
		float* L_54 = L_53;
		float L_55 = *((float*)L_54);
		float L_56 = V_0;
		*((float*)L_54) = (float)((float)il2cpp_codegen_subtract(L_55, L_56));
	}

IL_0190:
	{
		// return pos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = ___pos0;
		V_6 = L_57;
		goto IL_0195;
	}

IL_0195:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = V_6;
		return L_58;
	}
}
// UnityEngine.RectTransform CurvedUI.CurvedUISettings::get_RectTransform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_1 = NULL;
	{
		// if (m_rectTransform == null) m_rectTransform = transform as RectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0 = __this->___m_rectTransform_20;
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
		// if (m_rectTransform == null) m_rectTransform = transform as RectTransform;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		__this->___m_rectTransform_20 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_3, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_rectTransform_20), (void*)((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_3, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
	}

IL_0022:
	{
		// return m_rectTransform;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4 = __this->___m_rectTransform_20;
		V_1 = L_4;
		goto IL_002b;
	}

IL_002b:
	{
		// }
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_5 = V_1;
		return L_5;
	}
}
// System.Void CurvedUI.CurvedUISettings::AddEffectToChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_AddEffectToChildren_m003322A8F0DD39D02925142E1783897C02DAF1EF (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_mC27E0B9D788FD1008307D710E0FC0B9C30BB6828_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_mFA87FBAC47001E257FEA54146E60B9A3885AB565_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB912792459B63AD30A5C70BA8B06EA965B0C0A3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m572F210B8FC74385E1F23007FEBF22F39042217D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m1FF4411D21B902EA7DE5259ED315E420FD4340EC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mE5AE22441D30BBF9D2D3471D492068C3007D20C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m24F09A90E26E64A56618D8CED3E95C064BEBFDF4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8_m69B78304C618436E545F40E2F0F87E6A469B0B6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_m73A0EE72E844324C501B6DCEB597D9792AA8B108_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_m4AF269DEC713DA8FAC72F84578D662013D1295D2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* V_0 = NULL;
	int32_t V_1 = 0;
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* V_2 = NULL;
	bool V_3 = false;
	InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1* V_4 = NULL;
	int32_t V_5 = 0;
	InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* V_6 = NULL;
	bool V_7 = false;
	TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* V_8 = NULL;
	int32_t V_9 = 0;
	TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* V_10 = NULL;
	bool V_11 = false;
	TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8* V_12 = NULL;
	int32_t V_13 = 0;
	TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* V_14 = NULL;
	{
		// foreach (UnityEngine.UI.Graphic graph in GetComponentsInChildren<UnityEngine.UI.Graphic>(true))
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_0;
		L_0 = Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m572F210B8FC74385E1F23007FEBF22F39042217D(__this, (bool)1, Component_GetComponentsInChildren_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_m572F210B8FC74385E1F23007FEBF22F39042217D_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_003d;
	}

IL_000e:
	{
		// foreach (UnityEngine.UI.Graphic graph in GetComponentsInChildren<UnityEngine.UI.Graphic>(true))
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (graph.GetComponent<CurvedUIVertexEffect>() == null)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_5 = V_2;
		NullCheck(L_5);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_6;
		L_6 = Component_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB912792459B63AD30A5C70BA8B06EA965B0C0A3(L_5, Component_GetComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mEB912792459B63AD30A5C70BA8B06EA965B0C0A3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_0038;
		}
	}
	{
		// graph.gameObject.AddComponent<CurvedUIVertexEffect>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_9 = V_2;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10;
		L_10 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_9, NULL);
		NullCheck(L_10);
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_11;
		L_11 = GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783(L_10, GameObject_AddComponent_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_mE7547B08A97AB133A9A5BA44DC41B0DB9949C783_RuntimeMethod_var);
		// graph.SetAllDirty();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_12 = V_2;
		NullCheck(L_12);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_12);
	}

IL_0038:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_003d:
	{
		// foreach (UnityEngine.UI.Graphic graph in GetComponentsInChildren<UnityEngine.UI.Graphic>(true))
		int32_t L_14 = V_1;
		GraphicU5BU5D_t81AB09C67D8A58A146D74F24CFF6EEFDE096830F* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_000e;
		}
	}
	{
		// foreach(UnityEngine.UI.InputField iField in GetComponentsInChildren<UnityEngine.UI.InputField>(true))
		InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1* L_16;
		L_16 = Component_GetComponentsInChildren_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m1FF4411D21B902EA7DE5259ED315E420FD4340EC(__this, (bool)1, Component_GetComponentsInChildren_TisInputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140_m1FF4411D21B902EA7DE5259ED315E420FD4340EC_RuntimeMethod_var);
		V_4 = L_16;
		V_5 = 0;
		goto IL_0083;
	}

IL_0052:
	{
		// foreach(UnityEngine.UI.InputField iField in GetComponentsInChildren<UnityEngine.UI.InputField>(true))
		InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1* L_17 = V_4;
		int32_t L_18 = V_5;
		NullCheck(L_17);
		int32_t L_19 = L_18;
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_20 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		V_6 = L_20;
		// if (iField.GetComponent<CurvedUIInputFieldCaret>() == null)
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_21 = V_6;
		NullCheck(L_21);
		CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA* L_22;
		L_22 = Component_GetComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_mC27E0B9D788FD1008307D710E0FC0B9C30BB6828(L_21, Component_GetComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_mC27E0B9D788FD1008307D710E0FC0B9C30BB6828_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_23;
		L_23 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_22, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_007c;
		}
	}
	{
		// iField.gameObject.AddComponent<CurvedUIInputFieldCaret>();
		InputField_tABEA115F23FBD374EBE80D4FAC1D15BD6E37A140* L_25 = V_6;
		NullCheck(L_25);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26;
		L_26 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_25, NULL);
		NullCheck(L_26);
		CurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA* L_27;
		L_27 = GameObject_AddComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_m73A0EE72E844324C501B6DCEB597D9792AA8B108(L_26, GameObject_AddComponent_TisCurvedUIInputFieldCaret_t6E9621E94B74E97E91B55A65B9341F114A8D50CA_m73A0EE72E844324C501B6DCEB597D9792AA8B108_RuntimeMethod_var);
	}

IL_007c:
	{
		int32_t L_28 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_28, 1));
	}

IL_0083:
	{
		// foreach(UnityEngine.UI.InputField iField in GetComponentsInChildren<UnityEngine.UI.InputField>(true))
		int32_t L_29 = V_5;
		InputFieldU5BU5D_t155A7467738482919B58B1BBCF74FAB250259BF1* L_30 = V_4;
		NullCheck(L_30);
		if ((((int32_t)L_29) < ((int32_t)((int32_t)(((RuntimeArray*)L_30)->max_length)))))
		{
			goto IL_0052;
		}
	}
	{
		// foreach(TextMeshProUGUI tmp in GetComponentsInChildren<TextMeshProUGUI>(true)){
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_31;
		L_31 = Component_GetComponentsInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m24F09A90E26E64A56618D8CED3E95C064BEBFDF4(__this, (bool)1, Component_GetComponentsInChildren_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m24F09A90E26E64A56618D8CED3E95C064BEBFDF4_RuntimeMethod_var);
		V_8 = L_31;
		V_9 = 0;
		goto IL_00d3;
	}

IL_009a:
	{
		// foreach(TextMeshProUGUI tmp in GetComponentsInChildren<TextMeshProUGUI>(true)){
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_32 = V_8;
		int32_t L_33 = V_9;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_35 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		V_10 = L_35;
		// if(tmp.GetComponent<CurvedUITMP>() == null){
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_36 = V_10;
		NullCheck(L_36);
		CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* L_37;
		L_37 = Component_GetComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_mFA87FBAC47001E257FEA54146E60B9A3885AB565(L_36, Component_GetComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_mFA87FBAC47001E257FEA54146E60B9A3885AB565_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_38;
		L_38 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_37, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_11 = L_38;
		bool L_39 = V_11;
		if (!L_39)
		{
			goto IL_00cc;
		}
	}
	{
		// tmp.gameObject.AddComponent<CurvedUITMP>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_40 = V_10;
		NullCheck(L_40);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41;
		L_41 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(L_40, NULL);
		NullCheck(L_41);
		CurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73* L_42;
		L_42 = GameObject_AddComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_m4AF269DEC713DA8FAC72F84578D662013D1295D2(L_41, GameObject_AddComponent_TisCurvedUITMP_tD9C8942C43C85FFD0172FC52C6CD3678B97E0B73_m4AF269DEC713DA8FAC72F84578D662013D1295D2_RuntimeMethod_var);
		// tmp.SetAllDirty();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_43 = V_10;
		NullCheck(L_43);
		VirtualActionInvoker0::Invoke(26 /* System.Void UnityEngine.UI.Graphic::SetAllDirty() */, L_43);
	}

IL_00cc:
	{
		int32_t L_44 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_44, 1));
	}

IL_00d3:
	{
		// foreach(TextMeshProUGUI tmp in GetComponentsInChildren<TextMeshProUGUI>(true)){
		int32_t L_45 = V_9;
		TextMeshProUGUIU5BU5D_tCAB9404D43876DF686DFBB4613543479CC1CC24A* L_46 = V_8;
		NullCheck(L_46);
		if ((((int32_t)L_45) < ((int32_t)((int32_t)(((RuntimeArray*)L_46)->max_length)))))
		{
			goto IL_009a;
		}
	}
	{
		// foreach (TMP_InputField tmp in GetComponentsInChildren<TMP_InputField>(true))
		TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8* L_47;
		L_47 = Component_GetComponentsInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mE5AE22441D30BBF9D2D3471D492068C3007D20C0(__this, (bool)1, Component_GetComponentsInChildren_TisTMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F_mE5AE22441D30BBF9D2D3471D492068C3007D20C0_RuntimeMethod_var);
		V_12 = L_47;
		V_13 = 0;
		goto IL_0101;
	}

IL_00ea:
	{
		// foreach (TMP_InputField tmp in GetComponentsInChildren<TMP_InputField>(true))
		TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8* L_48 = V_12;
		int32_t L_49 = V_13;
		NullCheck(L_48);
		int32_t L_50 = L_49;
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_51 = (L_48)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		V_14 = L_51;
		// tmp.AddComponentIfMissing<CurvedUITMPInputFieldCaret>();
		TMP_InputField_t3488E0EE8C3DF56C6A328EC95D1BEEA2DF4A7D5F* L_52 = V_14;
		CurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8* L_53;
		L_53 = CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8_m69B78304C618436E545F40E2F0F87E6A469B0B6E(L_52, CurvedUIExtensionMethods_AddComponentIfMissing_TisCurvedUITMPInputFieldCaret_tA4C2CE9F82B239D1FDE6055E952B66194E7549E8_m69B78304C618436E545F40E2F0F87E6A469B0B6E_RuntimeMethod_var);
		int32_t L_54 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_54, 1));
	}

IL_0101:
	{
		// foreach (TMP_InputField tmp in GetComponentsInChildren<TMP_InputField>(true))
		int32_t L_55 = V_13;
		TMP_InputFieldU5BU5D_tEFD25A03B28354534FE1D2C25B7629AC33D8E2B8* L_56 = V_12;
		NullCheck(L_56);
		if ((((int32_t)L_55) < ((int32_t)((int32_t)(((RuntimeArray*)L_56)->max_length)))))
		{
			goto IL_00ea;
		}
	}
	{
		// }
		return;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::VertexPositionToCurvedCanvas(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_VertexPositionToCurvedCanvas_m133B14EA06CF870431EC6AC9877B36CFBDB61D65 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// switch (Shape)
		int32_t L_0;
		L_0 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960(__this, NULL);
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0038;
			}
			case 2:
			{
				goto IL_0043;
			}
			case 3:
			{
				goto IL_002d;
			}
		}
	}
	{
		goto IL_004e;
	}

IL_0022:
	{
		// return CanvasToCyllinder(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = CurvedUISettings_CanvasToCyllinder_m12EFB7BA23AA76CDC724FC71957A60EDAD40660E(__this, L_3, NULL);
		V_2 = L_4;
		goto IL_0057;
	}

IL_002d:
	{
		// return CanvasToCyllinderVertical(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = CurvedUISettings_CanvasToCyllinderVertical_m8C7D1A1B09B76B8077EB7A5998C7F9375571B173(__this, L_5, NULL);
		V_2 = L_6;
		goto IL_0057;
	}

IL_0038:
	{
		// return CanvasToRing(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8;
		L_8 = CurvedUISettings_CanvasToRing_m303886D7B4A9F6A87EA1913D6AFD5E4FD3B13B1C(__this, L_7, NULL);
		V_2 = L_8;
		goto IL_0057;
	}

IL_0043:
	{
		// return CanvasToSphere(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = CurvedUISettings_CanvasToSphere_mC7000D24730E5F03AAD0D21E0E9AB1B781492A8D(__this, L_9, NULL);
		V_2 = L_10;
		goto IL_0057;
	}

IL_004e:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_11;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_2;
		return L_12;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToCurvedCanvas(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToCurvedCanvas_mF1533486831BD26EC698AF517B07A80A94870E66 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	int32_t G_B3_0 = 0;
	{
		// pos = VertexPositionToCurvedCanvas(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CurvedUISettings_VertexPositionToCurvedCanvas_m133B14EA06CF870431EC6AC9877B36CFBDB61D65(__this, L_0, NULL);
		___pos0 = L_1;
		// if (float.IsNaN(pos.x) || float.IsInfinity(pos.x)) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___pos0;
		float L_3 = L_2.___x_2;
		bool L_4;
		L_4 = Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline(L_3, NULL);
		if (L_4)
		{
			goto IL_0024;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___pos0;
		float L_6 = L_5.___x_2;
		bool L_7;
		L_7 = Single_IsInfinity_m500DB7A91ADC75BE691663649FCA28485FA720AB_inline(L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0025;
	}

IL_0024:
	{
		G_B3_0 = 1;
	}

IL_0025:
	{
		V_0 = (bool)G_B3_0;
		bool L_8 = V_0;
		if (!L_8)
		{
			goto IL_0031;
		}
	}
	{
		// if (float.IsNaN(pos.x) || float.IsInfinity(pos.x)) return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_1 = L_9;
		goto IL_0048;
	}

IL_0031:
	{
		// else return transform.localToWorldMatrix.MultiplyPoint3x4(pos);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_10, NULL);
		V_2 = L_11;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_2), L_12, NULL);
		V_1 = L_13;
		goto IL_0048;
	}

IL_0048:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		return L_14;
	}
}
// UnityEngine.Vector3 CurvedUI.CurvedUISettings::CanvasToCurvedCanvasNormal(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 CurvedUISettings_CanvasToCurvedCanvasNormal_m951B9703753A27C8AB21B42F1F9FA7ED670602A1 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___pos0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B8_0;
	memset((&G_B8_0), 0, sizeof(G_B8_0));
	{
		// pos = VertexPositionToCurvedCanvas(pos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = CurvedUISettings_VertexPositionToCurvedCanvas_m133B14EA06CF870431EC6AC9877B36CFBDB61D65(__this, L_0, NULL);
		___pos0 = L_1;
		// switch (Shape)
		int32_t L_2;
		L_2 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960(__this, NULL);
		V_1 = L_2;
		int32_t L_3 = V_1;
		V_0 = L_3;
		int32_t L_4 = V_0;
		switch (L_4)
		{
			case 0:
			{
				goto IL_002e;
			}
			case 1:
			{
				goto IL_00bd;
			}
			case 2:
			{
				goto IL_00d2;
			}
			case 3:
			{
				goto IL_0077;
			}
		}
	}
	{
		goto IL_0121;
	}

IL_002e:
	{
		// return transform.localToWorldMatrix.MultiplyVector((pos - new Vector3(0, 0, -GetCyllinderRadiusInCanvasSpace())).ModifyY(0)).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_5);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_5, NULL);
		V_2 = L_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___pos0;
		float L_8;
		L_8 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (0.0f), (0.0f), ((-L_8)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_7, L_9, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11;
		L_11 = CurvedUIExtensionMethods_ModifyY_m4CE14AC5E24894B12061A6D4AEEE4481186D4254(L_10, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_2), L_11, NULL);
		V_3 = L_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_4 = L_13;
		goto IL_012b;
	}

IL_0077:
	{
		// return transform.localToWorldMatrix.MultiplyVector((pos - new Vector3(0, 0, -GetCyllinderRadiusInCanvasSpace())).ModifyX(0)).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_14);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_15;
		L_15 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_14, NULL);
		V_2 = L_15;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16 = ___pos0;
		float L_17;
		L_17 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), (0.0f), (0.0f), ((-L_17)), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19;
		L_19 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_16, L_18, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_20;
		L_20 = CurvedUIExtensionMethods_ModifyX_mB7903680A37D1FEAB2C8DB75A073DF3AF73D304B(L_19, (0.0f), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21;
		L_21 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_2), L_20, NULL);
		V_3 = L_21;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		L_22 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_4 = L_22;
		goto IL_012b;
	}

IL_00bd:
	{
		// return -transform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_24;
		L_24 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_23, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25;
		L_25 = Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline(L_24, NULL);
		V_4 = L_25;
		goto IL_012b;
	}

IL_00d2:
	{
		// Vector3 center = (PreserveAspect ? new Vector3(0, 0, -GetCyllinderRadiusInCanvasSpace()) : Vector3.zero);
		bool L_26;
		L_26 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A(__this, NULL);
		if (L_26)
		{
			goto IL_00e2;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_27;
		L_27 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		G_B8_0 = L_27;
		goto IL_00f8;
	}

IL_00e2:
	{
		float L_28;
		L_28 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(__this, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29;
		memset((&L_29), 0, sizeof(L_29));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_29), (0.0f), (0.0f), ((-L_28)), /*hidden argument*/NULL);
		G_B8_0 = L_29;
	}

IL_00f8:
	{
		V_5 = G_B8_0;
		// return transform.localToWorldMatrix.MultiplyVector((pos - center)).normalized;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_30;
		L_30 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_30);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_31;
		L_31 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_30, NULL);
		V_2 = L_31;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = ___pos0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33 = V_5;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34;
		L_34 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_32, L_33, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35;
		L_35 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_2), L_34, NULL);
		V_3 = L_35;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_3), NULL);
		V_4 = L_36;
		goto IL_012b;
	}

IL_0121:
	{
		// return Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_4 = L_37;
		goto IL_012b;
	}

IL_012b:
	{
		// }
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_4;
		return L_38;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::RaycastToCanvasSpace(UnityEngine.Ray,UnityEngine.Vector2&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_RaycastToCanvasSpace_m082112E373A7F7FF93F30A08CF5D26D3741D3C63 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* ___o_positionOnCanvas1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// CurvedUIRaycaster caster = this.GetComponent<CurvedUIRaycaster>();
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_0;
		L_0 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		V_0 = L_0;
		// o_positionOnCanvas = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_1 = ___o_positionOnCanvas1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)L_1 = L_2;
		// switch (Shape)
		int32_t L_3;
		L_3 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960(__this, NULL);
		V_2 = L_3;
		int32_t L_4 = V_2;
		V_1 = L_4;
		int32_t L_5 = V_1;
		switch (L_5)
		{
			case 0:
			{
				goto IL_0034;
			}
			case 1:
			{
				goto IL_004e;
			}
			case 2:
			{
				goto IL_005b;
			}
			case 3:
			{
				goto IL_0041;
			}
		}
	}
	{
		goto IL_0068;
	}

IL_0034:
	{
		// return caster.RaycastToCyllinderCanvas(ray, out o_positionOnCanvas, true);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_6 = V_0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_7 = ___ray0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_8 = ___o_positionOnCanvas1;
		NullCheck(L_6);
		bool L_9;
		L_9 = VirtualFuncInvoker3< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, bool >::Invoke(23 /* System.Boolean CurvedUI.CurvedUIRaycaster::RaycastToCyllinderCanvas(UnityEngine.Ray,UnityEngine.Vector2&,System.Boolean) */, L_6, L_7, L_8, (bool)1);
		V_3 = L_9;
		goto IL_006d;
	}

IL_0041:
	{
		// return caster.RaycastToCyllinderVerticalCanvas(ray, out o_positionOnCanvas, true);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_10 = V_0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_11 = ___ray0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_12 = ___o_positionOnCanvas1;
		NullCheck(L_10);
		bool L_13;
		L_13 = VirtualFuncInvoker3< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, bool >::Invoke(24 /* System.Boolean CurvedUI.CurvedUIRaycaster::RaycastToCyllinderVerticalCanvas(UnityEngine.Ray,UnityEngine.Vector2&,System.Boolean) */, L_10, L_11, L_12, (bool)1);
		V_3 = L_13;
		goto IL_006d;
	}

IL_004e:
	{
		// return caster.RaycastToRingCanvas(ray, out o_positionOnCanvas, true);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_14 = V_0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_15 = ___ray0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_16 = ___o_positionOnCanvas1;
		NullCheck(L_14);
		bool L_17;
		L_17 = VirtualFuncInvoker3< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, bool >::Invoke(25 /* System.Boolean CurvedUI.CurvedUIRaycaster::RaycastToRingCanvas(UnityEngine.Ray,UnityEngine.Vector2&,System.Boolean) */, L_14, L_15, L_16, (bool)1);
		V_3 = L_17;
		goto IL_006d;
	}

IL_005b:
	{
		// return caster.RaycastToSphereCanvas(ray, out o_positionOnCanvas, true);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_18 = V_0;
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_19 = ___ray0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7* L_20 = ___o_positionOnCanvas1;
		NullCheck(L_18);
		bool L_21;
		L_21 = VirtualFuncInvoker3< bool, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*, bool >::Invoke(26 /* System.Boolean CurvedUI.CurvedUIRaycaster::RaycastToSphereCanvas(UnityEngine.Ray,UnityEngine.Vector2&,System.Boolean) */, L_18, L_19, L_20, (bool)1);
		V_3 = L_21;
		goto IL_006d;
	}

IL_0068:
	{
		// return false;
		V_3 = (bool)0;
		goto IL_006d;
	}

IL_006d:
	{
		// }
		bool L_22 = V_3;
		return L_22;
	}
}
// System.Single CurvedUI.CurvedUISettings::GetCyllinderRadiusInCanvasSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	bool V_2 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	float V_4 = 0.0f;
	float G_B9_0 = 0.0f;
	{
		// if (PreserveAspect)
		bool L_0;
		L_0 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A(__this, NULL);
		V_1 = L_0;
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0078;
		}
	}
	{
		// if(shape == CurvedUIShape.CYLINDER_VERTICAL)
		int32_t L_2 = __this->___shape_5;
		V_2 = (bool)((((int32_t)L_2) == ((int32_t)3))? 1 : 0);
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		// ret = (RectTransform.rect.size.y / ((2 * Mathf.PI) * (angle / 360.0f)));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_4;
		L_4 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_4);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_5;
		L_5 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_4, NULL);
		V_3 = L_5;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		L_6 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_3), NULL);
		float L_7 = L_6.___y_1;
		int32_t L_8 = __this->___angle_10;
		V_0 = ((float)(L_7/((float)il2cpp_codegen_multiply((6.28318548f), ((float)(((float)L_8)/(360.0f)))))));
		goto IL_0075;
	}

IL_0048:
	{
		// ret = (RectTransform.rect.size.x / ((2 * Mathf.PI) * (angle / 360.0f)));
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_9;
		L_9 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_9);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_10;
		L_10 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_9, NULL);
		V_3 = L_10;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_11;
		L_11 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_3), NULL);
		float L_12 = L_11.___x_0;
		int32_t L_13 = __this->___angle_10;
		V_0 = ((float)(L_12/((float)il2cpp_codegen_multiply((6.28318548f), ((float)(((float)L_13)/(360.0f)))))));
	}

IL_0075:
	{
		goto IL_00bf;
	}

IL_0078:
	{
		// ret = (RectTransform.rect.size.x * 0.5f) / Mathf.Sin(Mathf.Clamp(angle, -180.0f, 180.0f) * 0.5f * Mathf.Deg2Rad);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_14;
		L_14 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_14);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_15;
		L_15 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_14, NULL);
		V_3 = L_15;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_16;
		L_16 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_3), NULL);
		float L_17 = L_16.___x_0;
		int32_t L_18 = __this->___angle_10;
		float L_19;
		L_19 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(((float)L_18), (-180.0f), (180.0f), NULL);
		float L_20;
		L_20 = sinf(((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_19, (0.5f))), (0.0174532924f))));
		V_0 = ((float)(((float)il2cpp_codegen_multiply(L_17, (0.5f)))/L_20));
	}

IL_00bf:
	{
		// return angle == 0 ? 0 : ret;
		int32_t L_21 = __this->___angle_10;
		if (!L_21)
		{
			goto IL_00ca;
		}
	}
	{
		float L_22 = V_0;
		G_B9_0 = L_22;
		goto IL_00cf;
	}

IL_00ca:
	{
		G_B9_0 = (0.0f);
	}

IL_00cf:
	{
		V_4 = G_B9_0;
		goto IL_00d3;
	}

IL_00d3:
	{
		// }
		float L_23 = V_4;
		return L_23;
	}
}
// UnityEngine.Vector2 CurvedUI.CurvedUISettings::GetTesslationSize(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 CurvedUISettings_GetTesslationSize_m244B198E9E96821752B0BB22174639803E8196B2 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___modifiedByQuality0, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B4_0 = 0;
	int32_t G_B6_0 = 0;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B19_0;
	memset((&G_B19_0), 0, sizeof(G_B19_0));
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B18_0;
	memset((&G_B18_0), 0, sizeof(G_B18_0));
	float G_B20_0 = 0.0f;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 G_B20_1;
	memset((&G_B20_1), 0, sizeof(G_B20_1));
	{
		// Vector2 ret = RectTransform.rect.size;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_0;
		L_0 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_1;
		L_1 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_0, NULL);
		V_1 = L_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2;
		L_2 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		V_0 = L_2;
		// if (Angle != 0 || (!PreserveAspect && vertAngle != 0))
		int32_t L_3;
		L_3 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5(__this, NULL);
		if (L_3)
		{
			goto IL_0033;
		}
	}
	{
		bool L_4;
		L_4 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A(__this, NULL);
		if (L_4)
		{
			goto IL_0030;
		}
	}
	{
		int32_t L_5 = __this->___vertAngle_12;
		G_B4_0 = ((!(((uint32_t)L_5) <= ((uint32_t)0)))? 1 : 0);
		goto IL_0031;
	}

IL_0030:
	{
		G_B4_0 = 0;
	}

IL_0031:
	{
		G_B6_0 = G_B4_0;
		goto IL_0034;
	}

IL_0033:
	{
		G_B6_0 = 1;
	}

IL_0034:
	{
		V_2 = (bool)G_B6_0;
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_0100;
		}
	}
	{
		// switch (shape)
		int32_t L_7 = __this->___shape_5;
		V_4 = L_7;
		int32_t L_8 = V_4;
		V_3 = L_8;
		int32_t L_9 = V_3;
		switch (L_9)
		{
			case 0:
			{
				goto IL_0062;
			}
			case 1:
			{
				goto IL_007d;
			}
			case 2:
			{
				goto IL_007f;
			}
			case 3:
			{
				goto IL_007b;
			}
		}
	}
	{
		goto IL_00ff;
	}

IL_0062:
	{
		// case CurvedUIShape.CYLINDER: ret /= GetSegmentsByAngle(angle); break;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = V_0;
		int32_t L_11 = __this->___angle_10;
		float L_12;
		L_12 = CurvedUISettings_GetSegmentsByAngle_mB9310D4776001563D73595C6A5026424DEA1D8B9(__this, ((float)L_11), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_13;
		L_13 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(L_10, L_12, NULL);
		V_0 = L_13;
		// case CurvedUIShape.CYLINDER: ret /= GetSegmentsByAngle(angle); break;
		goto IL_00ff;
	}

IL_007b:
	{
		// case CurvedUIShape.CYLINDER_VERTICAL: goto case CurvedUIShape.CYLINDER;
		goto IL_0062;
	}

IL_007d:
	{
		// case CurvedUIShape.RING: goto case CurvedUIShape.CYLINDER;
		goto IL_0062;
	}

IL_007f:
	{
		// ret.x /= GetSegmentsByAngle(angle);
		float* L_14 = (&(&V_0)->___x_0);
		float* L_15 = L_14;
		float L_16 = *((float*)L_15);
		int32_t L_17 = __this->___angle_10;
		float L_18;
		L_18 = CurvedUISettings_GetSegmentsByAngle_mB9310D4776001563D73595C6A5026424DEA1D8B9(__this, ((float)L_17), NULL);
		*((float*)L_15) = (float)((float)(L_16/L_18));
		// if (PreserveAspect)
		bool L_19;
		L_19 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A(__this, NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00e5;
		}
	}
	{
		// ret.y = ret.x * RectTransform.rect.size.y / RectTransform.rect.size.x;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_21 = V_0;
		float L_22 = L_21.___x_0;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_23;
		L_23 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_23);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_24;
		L_24 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_23, NULL);
		V_1 = L_24;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_25;
		L_25 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		float L_26 = L_25.___y_1;
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_27;
		L_27 = CurvedUISettings_get_RectTransform_m25809BBAAE7FF7C82E54B8B0FEB4A5F513E2C633(__this, NULL);
		NullCheck(L_27);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_28;
		L_28 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_27, NULL);
		V_1 = L_28;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_29;
		L_29 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_1), NULL);
		float L_30 = L_29.___x_0;
		(&V_0)->___y_1 = ((float)(((float)il2cpp_codegen_multiply(L_22, L_26))/L_30));
		goto IL_00fd;
	}

IL_00e5:
	{
		// ret.y /= GetSegmentsByAngle(VerticalAngle);
		float* L_31 = (&(&V_0)->___y_1);
		float* L_32 = L_31;
		float L_33 = *((float*)L_32);
		int32_t L_34;
		L_34 = CurvedUISettings_get_VerticalAngle_mA8B6369AF4F0EE3DC10FDD87AC000921D90E04A4(__this, NULL);
		float L_35;
		L_35 = CurvedUISettings_GetSegmentsByAngle_mB9310D4776001563D73595C6A5026424DEA1D8B9(__this, ((float)L_34), NULL);
		*((float*)L_32) = (float)((float)(L_33/L_35));
	}

IL_00fd:
	{
		// break;
		goto IL_00ff;
	}

IL_00ff:
	{
	}

IL_0100:
	{
		// return ret / (modifiedByQuality ? Mathf.Clamp(Quality, 0.01f, 10.0f) : 1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_36 = V_0;
		bool L_37 = ___modifiedByQuality0;
		G_B18_0 = L_36;
		if (L_37)
		{
			G_B19_0 = L_36;
			goto IL_010b;
		}
	}
	{
		G_B20_0 = (1.0f);
		G_B20_1 = G_B18_0;
		goto IL_0120;
	}

IL_010b:
	{
		float L_38;
		L_38 = CurvedUISettings_get_Quality_mD4FAA57D6D6197E3CB9D02D7CB1247AFCCF350F6(__this, NULL);
		float L_39;
		L_39 = Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline(L_38, (0.00999999978f), (10.0f), NULL);
		G_B20_0 = L_39;
		G_B20_1 = G_B19_0;
	}

IL_0120:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_40;
		L_40 = Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline(G_B20_1, G_B20_0, NULL);
		V_6 = L_40;
		goto IL_0129;
	}

IL_0129:
	{
		// }
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_41 = V_6;
		return L_41;
	}
}
// System.Single CurvedUI.CurvedUISettings::GetSegmentsByAngle(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_GetSegmentsByAngle_mB9310D4776001563D73595C6A5026424DEA1D8B9 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, float ___angle0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		// if (angle.Abs() <= 1)
		float L_0 = ___angle0;
		float L_1;
		L_1 = CurvedUIExtensionMethods_Abs_m4B664419261B9586FA9F1D8EFC1AE35F341F4944(L_0, NULL);
		V_0 = (bool)((((int32_t)((!(((float)L_1) <= ((float)(1.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// return 1;
		V_1 = (1.0f);
		goto IL_0082;
	}

IL_001d:
	{
		// else if (angle.Abs() < 90)//proportionaly twice as many segments for small angle canvases
		float L_3 = ___angle0;
		float L_4;
		L_4 = CurvedUIExtensionMethods_Abs_m4B664419261B9586FA9F1D8EFC1AE35F341F4944(L_3, NULL);
		V_2 = (bool)((((float)L_4) < ((float)(90.0f)))? 1 : 0);
		bool L_5 = V_2;
		if (!L_5)
		{
			goto IL_0058;
		}
	}
	{
		// return baseCircleSegments * (Mathf.Abs(angle).Remap(0, 90, 0.01f, 0.5f));
		int32_t L_6 = __this->___baseCircleSegments_16;
		float L_7 = ___angle0;
		float L_8;
		L_8 = fabsf(L_7);
		float L_9;
		L_9 = CurvedUIExtensionMethods_Remap_m6FE4C83EBA65F6FED4242A28626F9F19BE6E0533(L_8, (0.0f), (90.0f), (0.00999999978f), (0.5f), NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)L_6), L_9));
		goto IL_0082;
	}

IL_0058:
	{
		// return baseCircleSegments * (Mathf.Abs(angle).Remap(90, 360.0f, 0.5f, 1));
		int32_t L_10 = __this->___baseCircleSegments_16;
		float L_11 = ___angle0;
		float L_12;
		L_12 = fabsf(L_11);
		float L_13;
		L_13 = CurvedUIExtensionMethods_Remap_m6FE4C83EBA65F6FED4242A28626F9F19BE6E0533(L_12, (90.0f), (360.0f), (0.5f), (1.0f), NULL);
		V_1 = ((float)il2cpp_codegen_multiply(((float)L_10), L_13));
		goto IL_0082;
	}

IL_0082:
	{
		// }
		float L_14 = V_1;
		return L_14;
	}
}
// System.Int32 CurvedUI.CurvedUISettings::get_BaseCircleSegments()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_BaseCircleSegments_m045BCBF2E2520F03C64D70A74500D7FBEF185DD3 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get  {  return baseCircleSegments; }
		int32_t L_0 = __this->___baseCircleSegments_16;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get  {  return baseCircleSegments; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Int32 CurvedUI.CurvedUISettings::get_Angle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return angle; }
		int32_t L_0 = __this->___angle_10;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return angle; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_Angle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_Angle_mD9C1657DDAE253FF1A133223262CBEAD46E7D538 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (angle != value)
		int32_t L_0 = __this->___angle_10;
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// SetUIAngle(value);
		int32_t L_3 = ___value0;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_3, NULL);
	}

IL_0019:
	{
		// }
		return;
	}
}
// System.Single CurvedUI.CurvedUISettings::get_Quality()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_Quality_mD4FAA57D6D6197E3CB9D02D7CB1247AFCCF350F6 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return quality; }
		float L_0 = __this->___quality_6;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return quality; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_Quality(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_Quality_mEFF3E296EAFF96E6E7232328990D25803162264C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (quality != value)
		float L_0 = __this->___quality_6;
		float L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// quality = value;
		float L_3 = ___value0;
		__this->___quality_6 = L_3;
		// SetUIAngle(angle);
		int32_t L_4 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// CurvedUI.CurvedUISettings/CurvedUIShape CurvedUI.CurvedUISettings::get_Shape()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return shape; }
		int32_t L_0 = __this->___shape_5;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return shape; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_Shape(CurvedUI.CurvedUISettings/CurvedUIShape)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_Shape_mCA2CBDFEDDD49C0C2C4D8590AC739598532F8686 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (shape != value)
		int32_t L_0 = __this->___shape_5;
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// shape = value;
		int32_t L_3 = ___value0;
		__this->___shape_5 = L_3;
		// SetUIAngle(angle);
		int32_t L_4 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Int32 CurvedUI.CurvedUISettings::get_VerticalAngle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_VerticalAngle_mA8B6369AF4F0EE3DC10FDD87AC000921D90E04A4 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return vertAngle; }
		int32_t L_0 = __this->___vertAngle_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return vertAngle; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_VerticalAngle(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_VerticalAngle_m9AD2F71C0A6D0254F9CCD3A37F22F4620FC8EC6B (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (vertAngle != value)
		int32_t L_0 = __this->___vertAngle_12;
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// vertAngle = value;
		int32_t L_3 = ___value0;
		__this->___vertAngle_12 = L_3;
		// SetUIAngle(angle);
		int32_t L_4 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Single CurvedUI.CurvedUISettings::get_RingFill()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_RingFill_mD2847B47EBBC41023A34E40FA2D6583FC5F2F2D1 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		// get { return ringFill; }
		float L_0 = __this->___ringFill_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return ringFill; }
		float L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_RingFill(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_RingFill_mD2343C4C71EDD3163FB9467D2F29CA8E0DECD7B5 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, float ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (ringFill != value)
		float L_0 = __this->___ringFill_13;
		float L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((float)L_0) == ((float)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// ringFill = value;
		float L_3 = ___value0;
		__this->___ringFill_13 = L_3;
		// SetUIAngle(angle);
		int32_t L_4 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Single CurvedUI.CurvedUISettings::get_SavedRadius()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_SavedRadius_m9FBB691434FDB695824700CF59C25D9AF75E699F (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	float V_1 = 0.0f;
	{
		// if (savedRadius == 0)
		float L_0 = __this->___savedRadius_18;
		V_0 = (bool)((((float)L_0) == ((float)(0.0f)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// savedRadius = GetCyllinderRadiusInCanvasSpace();
		float L_2;
		L_2 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(__this, NULL);
		__this->___savedRadius_18 = L_2;
	}

IL_001e:
	{
		// return savedRadius;
		float L_3 = __this->___savedRadius_18;
		V_1 = L_3;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		float L_4 = V_1;
		return L_4;
	}
}
// System.Int32 CurvedUI.CurvedUISettings::get_RingExternalDiameter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// get { return ringExternalDiamater; }
		int32_t L_0 = __this->___ringExternalDiamater_14;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return ringExternalDiamater; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_RingExternalDiameter(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_RingExternalDiameter_mCBEF40674FD075AB93AEB259CDDE7DF1AF05C2CD (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (ringExternalDiamater != value)
		int32_t L_0 = __this->___ringExternalDiamater_14;
		int32_t L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// ringExternalDiamater = value;
		int32_t L_3 = ___value0;
		__this->___ringExternalDiamater_14 = L_3;
		// SetUIAngle(angle);
		int32_t L_4 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_RingFlipVertical()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return ringFlipVertical; }
		bool L_0 = __this->___ringFlipVertical_15;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return ringFlipVertical; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_RingFlipVertical(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_RingFlipVertical_m893E2DA9625B88F139A510B8C39352A10941AAAA (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (ringFlipVertical != value)
		bool L_0 = __this->___ringFlipVertical_15;
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// ringFlipVertical = value;
		bool L_3 = ___value0;
		__this->___ringFlipVertical_15 = L_3;
		// SetUIAngle(angle);
		int32_t L_4 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_PreserveAspect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return preserveAspect; }
		bool L_0 = __this->___preserveAspect_11;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return preserveAspect; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_PreserveAspect(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_PreserveAspect_mB798D4FB119CB461050D66273CF936C1B7B3170F (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___value0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (preserveAspect != value)
		bool L_0 = __this->___preserveAspect_11;
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0027;
		}
	}
	{
		// preserveAspect = value;
		bool L_3 = ___value0;
		__this->___preserveAspect_11 = L_3;
		// SetUIAngle(angle);
		int32_t L_4 = __this->___angle_10;
		CurvedUISettings_SetUIAngle_mDB2F13E8DC01800A489F021EEEE5126D65D46D76(__this, L_4, NULL);
	}

IL_0027:
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_Interactable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_Interactable_m6A57BA08D88524E7193019826486886D3062EB79 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return interactable; }
		bool L_0 = __this->___interactable_7;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return interactable; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_Interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_Interactable_mE60D10E3BEE374F383EEAC362B8196DDA26BC5A8 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set  {  interactable = value; }
		bool L_0 = ___value0;
		__this->___interactable_7 = L_0;
		// set  {  interactable = value; }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_ForceUseBoxCollider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_ForceUseBoxCollider_mFE428158D0DE193FADF182F347E403688D909E1C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return forceUseBoxCollider; }
		bool L_0 = __this->___forceUseBoxCollider_9;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return forceUseBoxCollider; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_ForceUseBoxCollider(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_ForceUseBoxCollider_m51ED11DA281B2CB2A1BCFCEE417A35D3B53DA72C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set {  forceUseBoxCollider = value; }
		bool L_0 = ___value0;
		__this->___forceUseBoxCollider_9 = L_0;
		// set {  forceUseBoxCollider = value; }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_BlocksRaycasts()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_BlocksRaycasts_m52BBCB472D24B4D049A9DA54546D8B9E4B1C8B83 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return blocksRaycasts; }
		bool L_0 = __this->___blocksRaycasts_8;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return blocksRaycasts; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_BlocksRaycasts(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_BlocksRaycasts_m14F5CA757DE16FB8084766C135BA2674535B7E61 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// if (blocksRaycasts != value) {
		bool L_0 = __this->___blocksRaycasts_8;
		bool L_1 = ___value0;
		V_0 = (bool)((((int32_t)((((int32_t)L_0) == ((int32_t)L_1))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0040;
		}
	}
	{
		// blocksRaycasts = value;
		bool L_3 = ___value0;
		__this->___blocksRaycasts_8 = L_3;
		// if (Application.isPlaying && GetComponent<CurvedUIRaycaster>() != null)
		bool L_4;
		L_4 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		if (!L_4)
		{
			goto IL_002e;
		}
	}
	{
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_5;
		L_5 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		G_B4_0 = ((int32_t)(L_6));
		goto IL_002f;
	}

IL_002e:
	{
		G_B4_0 = 0;
	}

IL_002f:
	{
		V_1 = (bool)G_B4_0;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_003f;
		}
	}
	{
		// GetComponent<CurvedUIRaycaster>().RebuildCollider();
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_8;
		L_8 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		NullCheck(L_8);
		CurvedUIRaycaster_RebuildCollider_m9BCDA92282DCA114A6D7AD52FF7F819BDBAB698F(L_8, NULL);
	}

IL_003f:
	{
	}

IL_0040:
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_RaycastMyLayerOnly()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_RaycastMyLayerOnly_mBD1C73BC73E7082E75FFB6161AF34C8707C7C466 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return true; }
		V_0 = (bool)1;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return true; }
		bool L_0 = V_0;
		return L_0;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_RaycastMyLayerOnly(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_RaycastMyLayerOnly_m2E2AC3B6D9CEC62FFD7D3E1C3CFDACD06590D90B (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { }
		return;
	}
}
// System.Void CurvedUI.CurvedUISettings::SetAllChildrenDirty(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_SetAllChildrenDirty_m9C0E8DC0098D1AE4C322B12F169D85B8EA9D9D7B (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___recalculateCurveOnly0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* V_0 = NULL;
	int32_t V_1 = 0;
	CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* V_2 = NULL;
	bool V_3 = false;
	{
		// foreach (CurvedUIVertexEffect eff in this.GetComponentsInChildren<CurvedUIVertexEffect>())
		CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* L_0;
		L_0 = Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B(__this, Component_GetComponentsInChildren_TisCurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88_m09068E4381313D23E60C0B831D0B6BCE0461B59B_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_002d;
	}

IL_000d:
	{
		// foreach (CurvedUIVertexEffect eff in this.GetComponentsInChildren<CurvedUIVertexEffect>())
		CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (recalculateCurveOnly)
		bool L_5 = ___recalculateCurveOnly0;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0020;
		}
	}
	{
		// eff.SetDirty();
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_7 = V_2;
		NullCheck(L_7);
		CurvedUIVertexEffect_SetDirty_mDE58FDE3D93E15271604480ABE22590757DAA100(L_7, NULL);
		goto IL_0028;
	}

IL_0020:
	{
		// eff.CurvingRequired = true;
		CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* L_8 = V_2;
		NullCheck(L_8);
		CurvedUIVertexEffect_set_CurvingRequired_m955958BBAD2A29D7606644AA29A073D2FC6C9778(L_8, (bool)1, NULL);
	}

IL_0028:
	{
		int32_t L_9 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_002d:
	{
		// foreach (CurvedUIVertexEffect eff in this.GetComponentsInChildren<CurvedUIVertexEffect>())
		int32_t L_10 = V_1;
		CurvedUIVertexEffectU5BU5D_t96F4FE1B5FFD2AE63AD295D9ED9980E6CE1830F2* L_11 = V_0;
		NullCheck(L_11);
		if ((((int32_t)L_10) < ((int32_t)((int32_t)(((RuntimeArray*)L_11)->max_length)))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_PointingAtCanvas()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_PointingAtCanvas_mE6BF996D4AE980936B66CE8CC7B95AB21A24431E (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral76BC599F35709DDFA80B78ED2DD26FEC406690B7);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (GetComponent<CurvedUIRaycaster>() != null)
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_0;
		L_0 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return GetComponent<CurvedUIRaycaster>().PointingAtCanvas;
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_3;
		L_3 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		NullCheck(L_3);
		bool L_4;
		L_4 = CurvedUIRaycaster_get_PointingAtCanvas_mAB3CF97B0286809A4116DA42464B7E61A20C29CA(L_3, NULL);
		V_1 = L_4;
		goto IL_002f;
	}

IL_001f:
	{
		// Debug.LogWarning("CURVEDUI: Can't check if user is pointing at this canvas - No CurvedUIRaycaster is added to this canvas.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28(_stringLiteral76BC599F35709DDFA80B78ED2DD26FEC406690B7, NULL);
		// return false;
		V_1 = (bool)0;
		goto IL_002f;
	}

IL_002f:
	{
		// }
		bool L_5 = V_1;
		return L_5;
	}
}
// System.Void CurvedUI.CurvedUISettings::Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_Click_m14BC5598AB1394ED9A0BFAD3A345F74E2D5F3D3C (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (GetComponent<CurvedUIRaycaster>() != null)
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_0;
		L_0 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001d;
		}
	}
	{
		// GetComponent<CurvedUIRaycaster>().Click();
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_3;
		L_3 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		NullCheck(L_3);
		CurvedUIRaycaster_Click_mC59574F26CE82DE645643D2C8B6225BD274C47E3(L_3, NULL);
	}

IL_001d:
	{
		// }
		return;
	}
}
// CurvedUIInputModule/CUIControlMethod CurvedUI.CurvedUISettings::get_ControlMethod()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CurvedUISettings_get_ControlMethod_m7D4D0AA4F40F53314965FFD84D0E1F598D5F1AB2 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// get { return CurvedUIInputModule.ControlMethod; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		int32_t L_0;
		L_0 = CurvedUIInputModule_get_ControlMethod_m638A860DAE7C6CD43ADCE3B9606EE40843B8522A(NULL);
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		// get { return CurvedUIInputModule.ControlMethod; }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_ControlMethod(CurvedUIInputModule/CUIControlMethod)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_ControlMethod_m8C1BBCFA5D09CA3ED76A5339B955E0AFC1B0179A (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { CurvedUIInputModule.ControlMethod = value; }
		int32_t L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_set_ControlMethod_mE122CC6C6FE47AB331235BEA053EED0D244870B5(L_0, NULL);
		// set { CurvedUIInputModule.ControlMethod = value; }
		return;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUISettings::GetObjectsUnderPointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CurvedUISettings_GetObjectsUnderPointer_mD3FFF32C7D4951142307C6032F4F27C3D413BBAA (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_1 = NULL;
	{
		// if (GetComponent<CurvedUIRaycaster>() != null)
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_0;
		L_0 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001f;
		}
	}
	{
		// return GetComponent<CurvedUIRaycaster>().GetObjectsUnderPointer();
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_3;
		L_3 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_4;
		L_4 = CurvedUIRaycaster_GetObjectsUnderPointer_m38A63021371980C1EC1A625AB69AC60A3040F950(L_3, NULL);
		V_1 = L_4;
		goto IL_0027;
	}

IL_001f:
	{
		// else return new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_5, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_1 = L_5;
		goto IL_0027;
	}

IL_0027:
	{
		// }
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = V_1;
		return L_6;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUISettings::GetObjectsUnderScreenPos(UnityEngine.Vector2,UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CurvedUISettings_GetObjectsUnderScreenPos_m173D6AC6AC2F591C03AF9D798C255269BD17568B (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___pos0, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___eventCamera1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_2 = NULL;
	{
		// if (eventCamera == null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = ___eventCamera1;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		// eventCamera = myCanvas.worldCamera;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_3 = __this->___myCanvas_19;
		NullCheck(L_3);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4;
		L_4 = Canvas_get_worldCamera_mD2FDE13B61A5213F4E64B40008EB0A8D2D07B853(L_3, NULL);
		___eventCamera1 = L_4;
	}

IL_0019:
	{
		// if (GetComponent<CurvedUIRaycaster>() != null)
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_5;
		L_5 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0039;
		}
	}
	{
		// return GetComponent<CurvedUIRaycaster>().GetObjectsUnderScreenPos(pos, eventCamera);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_8;
		L_8 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9 = ___pos0;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_10 = ___eventCamera1;
		NullCheck(L_8);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_11;
		L_11 = CurvedUIRaycaster_GetObjectsUnderScreenPos_m7F3BB3E9329D6F8180F80173AC25057141176CD0(L_8, L_9, L_10, NULL);
		V_2 = L_11;
		goto IL_0041;
	}

IL_0039:
	{
		// else return new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_12 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_12, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_2 = L_12;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_13 = V_2;
		return L_13;
	}
}
// System.Collections.Generic.List`1<UnityEngine.GameObject> CurvedUI.CurvedUISettings::GetObjectsHitByRay(UnityEngine.Ray)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* CurvedUISettings_GetObjectsHitByRay_m0B0C170AFCCB2917C6804F56608A24176CFFDECA (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 ___ray0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* V_1 = NULL;
	{
		// if (GetComponent<CurvedUIRaycaster>() != null)
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_0;
		L_0 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0020;
		}
	}
	{
		// return GetComponent<CurvedUIRaycaster>().GetObjectsHitByRay(ray);
		CurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76* L_3;
		L_3 = Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44(__this, Component_GetComponent_TisCurvedUIRaycaster_t1C24DD98DC5C7F078249BCF5B92586F573388D76_mFC19E1EED01DC259D8B551E02C49C5D62A28DB44_RuntimeMethod_var);
		Ray_t2B1742D7958DC05BDC3EFC7461D3593E1430DC00 L_4 = ___ray0;
		NullCheck(L_3);
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_5;
		L_5 = CurvedUIRaycaster_GetObjectsHitByRay_m3819C5A0CB923094509F22CDB857231F574310F2(L_3, L_4, NULL);
		V_1 = L_5;
		goto IL_0028;
	}

IL_0020:
	{
		// else return new List<GameObject>();
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_6 = (List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B*)il2cpp_codegen_object_new(List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC(L_6, List_1__ctor_m447372C1EF7141193B93090A77395B786C72C7BC_RuntimeMethod_var);
		V_1 = L_6;
		goto IL_0028;
	}

IL_0028:
	{
		// }
		List_1_tB951CE80B58D1BF9650862451D8DAD8C231F207B* L_7 = V_1;
		return L_7;
	}
}
// System.Boolean CurvedUI.CurvedUISettings::get_GazeUseTimedClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUISettings_get_GazeUseTimedClick_mBBA047875C5EEF68F1BEE44F680E45DB470691F3 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// get { return CurvedUIInputModule.Instance.GazeUseTimedClick; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_m61740C43FEDC099210588F5D73459D222D789ACD(NULL);
		NullCheck(L_0);
		bool L_1;
		L_1 = CurvedUIInputModule_get_GazeUseTimedClick_m5A4D1EF48159BAEAB7442199036ED6071DC0A98C_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// get { return CurvedUIInputModule.Instance.GazeUseTimedClick; }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_GazeUseTimedClick(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_GazeUseTimedClick_m7ADA79F88A8E70E82481629E838291F099233326 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { CurvedUIInputModule.Instance.GazeUseTimedClick = value; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_m61740C43FEDC099210588F5D73459D222D789ACD(NULL);
		bool L_1 = ___value0;
		NullCheck(L_0);
		CurvedUIInputModule_set_GazeUseTimedClick_m5103211575DCD154F3173A9DF228B16E1AE76CF0_inline(L_0, L_1, NULL);
		// set { CurvedUIInputModule.Instance.GazeUseTimedClick = value; }
		return;
	}
}
// System.Single CurvedUI.CurvedUISettings::get_GazeClickTimer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_GazeClickTimer_m50979D8F90CA480DA77CA6F7FE1A92909D4BFED9 (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// get { return CurvedUIInputModule.Instance.GazeClickTimer; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_m61740C43FEDC099210588F5D73459D222D789ACD(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = CurvedUIInputModule_get_GazeClickTimer_mBACA415983885ED0D52C2BA1806BD9D999CCAFC3_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// get { return CurvedUIInputModule.Instance.GazeClickTimer; }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_GazeClickTimer(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_GazeClickTimer_mCC42A475945057BBF2D1E44DA1CFE22ED1F9DABC (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { CurvedUIInputModule.Instance.GazeClickTimer = value; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_m61740C43FEDC099210588F5D73459D222D789ACD(NULL);
		float L_1 = ___value0;
		NullCheck(L_0);
		CurvedUIInputModule_set_GazeClickTimer_m0FF55B26ECDF47724A45355E8738C49E94759B27(L_0, L_1, NULL);
		// set { CurvedUIInputModule.Instance.GazeClickTimer = value; }
		return;
	}
}
// System.Single CurvedUI.CurvedUISettings::get_GazeClickTimerDelay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_GazeClickTimerDelay_m88B37E81B0EF244C7CB643D653334B1EEAA7608E (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// get { return CurvedUIInputModule.Instance.GazeClickTimerDelay; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_m61740C43FEDC099210588F5D73459D222D789ACD(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = CurvedUIInputModule_get_GazeClickTimerDelay_mEE9D705F5B6072FA19FA68794CF59F697124E0B7_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// get { return CurvedUIInputModule.Instance.GazeClickTimerDelay; }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void CurvedUI.CurvedUISettings::set_GazeClickTimerDelay(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings_set_GazeClickTimerDelay_m5AC2DE20AB0FC4A37B6F7F76247AD37B2FA5DAFD (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, float ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// set { CurvedUIInputModule.Instance.GazeClickTimerDelay = value; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_m61740C43FEDC099210588F5D73459D222D789ACD(NULL);
		float L_1 = ___value0;
		NullCheck(L_0);
		CurvedUIInputModule_set_GazeClickTimerDelay_mFE44D70901F6C53ECEE461865BD69E0F0E26F945(L_0, L_1, NULL);
		// set { CurvedUIInputModule.Instance.GazeClickTimerDelay = value; }
		return;
	}
}
// System.Single CurvedUI.CurvedUISettings::get_GazeTimerProgress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float CurvedUISettings_get_GazeTimerProgress_m3F999AE0BDD4882652FF2BFCC5D2F1D3640128ED (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// get { return CurvedUIInputModule.Instance.GazeTimerProgress; }
		il2cpp_codegen_runtime_class_init_inline(CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386_il2cpp_TypeInfo_var);
		CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* L_0;
		L_0 = CurvedUIInputModule_get_Instance_m61740C43FEDC099210588F5D73459D222D789ACD(NULL);
		NullCheck(L_0);
		float L_1;
		L_1 = CurvedUIInputModule_get_GazeTimerProgress_m20F15F571020564B09F34E9E9E85B31B96792B74_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000e;
	}

IL_000e:
	{
		// get { return CurvedUIInputModule.Instance.GazeTimerProgress; }
		float L_2 = V_0;
		return L_2;
	}
}
// System.Void CurvedUI.CurvedUISettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUISettings__ctor_m5E333D2C43F193634A64BB39D7CA509B9F41914F (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* __this, const RuntimeMethod* method) 
{
	{
		// float quality = 1f;
		__this->___quality_6 = (1.0f);
		// bool interactable = true;
		__this->___interactable_7 = (bool)1;
		// bool blocksRaycasts = true;
		__this->___blocksRaycasts_8 = (bool)1;
		// bool forceUseBoxCollider = false;
		__this->___forceUseBoxCollider_9 = (bool)0;
		// int angle = 90;
		__this->___angle_10 = ((int32_t)90);
		// bool preserveAspect = true;
		__this->___preserveAspect_11 = (bool)1;
		// int vertAngle = 90;
		__this->___vertAngle_12 = ((int32_t)90);
		// float ringFill = 0.5f;
		__this->___ringFill_13 = (0.5f);
		// int ringExternalDiamater = 1000;
		__this->___ringExternalDiamater_14 = ((int32_t)1000);
		// bool ringFlipVertical = false;
		__this->___ringFlipVertical_15 = (bool)0;
		// int baseCircleSegments = 16;
		__this->___baseCircleSegments_16 = ((int32_t)16);
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
// System.Boolean CurvedUI.CurvedUIVertexEffect::get_tesselationRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return m_tesselationRequired; }
		bool L_0 = __this->___m_tesselationRequired_12;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return m_tesselationRequired; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::set_tesselationRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { m_tesselationRequired = value;
		bool L_0 = ___value0;
		__this->___m_tesselationRequired_12 = L_0;
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_Awake_m767E6EA1B6D65CB0D994318421935C9CB5C26097 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_m8947457C233E7D195B4D3F6D3458060F45A95A6E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.Awake();
		UIBehaviour_Awake_mDF9D1A4867C8E730C59A7CAE97709CA9B8F3A0F2(__this, NULL);
		// myGraphic = GetComponent<Graphic>();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0;
		L_0 = Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90(__this, Component_GetComponent_TisGraphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_mFE18E20FC92395F90E776DBC4CD214A4F2D97D90_RuntimeMethod_var);
		__this->___myGraphic_8 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myGraphic_8), (void*)L_0);
		// myText = GetComponent<Text>();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1;
		L_1 = Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888(__this, Component_GetComponent_TisText_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_mB85C5C0EEF6535E3FC0DBFC14E39FA5A51B6F888_RuntimeMethod_var);
		__this->___myText_9 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myText_9), (void*)L_1);
		// myTMP = GetComponent<TextMeshProUGUI>();
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_2;
		L_2 = Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA(__this, Component_GetComponent_TisTextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957_m23F8F2F9DD5A54329CEB47D53B4CAA8BC4A562AA_RuntimeMethod_var);
		__this->___myTMP_10 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myTMP_10), (void*)L_2);
		// myTMPSubMesh = GetComponent<CurvedUITMPSubmesh>();
		CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_3;
		L_3 = Component_GetComponent_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_m8947457C233E7D195B4D3F6D3458060F45A95A6E(__this, Component_GetComponent_TisCurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532_m8947457C233E7D195B4D3F6D3458060F45A95A6E_RuntimeMethod_var);
		__this->___myTMPSubMesh_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myTMPSubMesh_11), (void*)L_3);
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::OnEnable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_OnEnable_m5E60FE552A4CB8D2061EAB1E0B7B06A5E68E775B (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIVertexEffect_FontTextureRebuiltCallback_mDD0250B346A05D9A7BF209188032786B4A00B4E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// FindParentSettings();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_0;
		L_0 = CurvedUIVertexEffect_FindParentSettings_m53B1CC1A4E297E5593C3480B7880550DD879728C(__this, (bool)0, NULL);
		// if (myGraphic)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_1 = __this->___myGraphic_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		// myGraphic.RegisterDirtyMaterialCallback(TesselationRequiredCallback);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_4 = __this->___myGraphic_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_5 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_5, __this, (intptr_t)((void*)CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var), NULL);
		NullCheck(L_4);
		Graphic_RegisterDirtyMaterialCallback_m5EDBA1E08656A49997538A1C7DE29201FDE0A013(L_4, L_5, NULL);
		// myGraphic.SetVerticesDirty();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_6 = __this->___myGraphic_8;
		NullCheck(L_6);
		VirtualActionInvoker0::Invoke(28 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_6);
	}

IL_003e:
	{
		// if (myText)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___myText_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_7, NULL);
		V_1 = L_8;
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0079;
		}
	}
	{
		// myText.RegisterDirtyVerticesCallback(TesselationRequiredCallback);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___myText_9;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_11 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_11, __this, (intptr_t)((void*)CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var), NULL);
		NullCheck(L_10);
		Graphic_RegisterDirtyVerticesCallback_m46034B2100B5D28BDBCCB34C1283B1B9B2DB9A9E(L_10, L_11, NULL);
		// Font.textureRebuilt += FontTextureRebuiltCallback;
		Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* L_12 = (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC*)il2cpp_codegen_object_new(Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Action_1__ctor_m970A8DFC8A17354AB74107AC11E2ACE2A3D5200F(L_12, __this, (intptr_t)((void*)CurvedUIVertexEffect_FontTextureRebuiltCallback_mDD0250B346A05D9A7BF209188032786B4A00B4E1_RuntimeMethod_var), NULL);
		Font_add_textureRebuilt_m0C7E9998192691918BC92548EE955380AD63FF0B(L_12, NULL);
	}

IL_0079:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_Start_mEB06E70C40E33DE0315822BBC71CA0627889F975 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CA45F7FE0CD0814F68F08588BD4DA94450116C3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B46302701BEE88904D8B185D12F907471B2D231);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EA4783D72C469D17904F0B941A1607293CE17D8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5BA2AB84F73D215077B6EA830A5ADFEE63A5C5DE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* V_2 = NULL;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_5;
	memset((&V_5), 0, sizeof(V_5));
	bool V_6 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B7_0 = 0;
	{
		// base.Start();
		UIBehaviour_Start_mB12643ED6D859CD3682B4BF5B9CA7F72E8A72B45(__this, NULL);
		// if (myCanvas && GetComponent<Selectable>())
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_0 = __this->___myCanvas_6;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (!L_1)
		{
			goto IL_0022;
		}
	}
	{
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_2;
		L_2 = Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611(__this, Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_0023;
	}

IL_0022:
	{
		G_B3_0 = 0;
	}

IL_0023:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_016a;
		}
	}
	{
		// Vector3 myPosOnCanvas = myCanvas.transform.worldToLocalMatrix.MultiplyPoint3x4(this.transform.position);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_5 = __this->___myCanvas_6;
		NullCheck(L_5);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_5, NULL);
		NullCheck(L_6);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_7;
		L_7 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_6, NULL);
		V_3 = L_7;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_8);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		L_9 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_8, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_3), L_9, NULL);
		V_1 = L_10;
		// RectTransform canvasRect = (myCanvas.transform as RectTransform);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_11 = __this->___myCanvas_6;
		NullCheck(L_11);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_11, NULL);
		V_2 = ((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_12, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var));
		// if (myPosOnCanvas.x.Abs() > canvasRect.rect.width / 2.0f || myPosOnCanvas.y.Abs() > canvasRect.rect.height / 2.0f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_1;
		float L_14 = L_13.___x_2;
		float L_15;
		L_15 = CurvedUIExtensionMethods_Abs_m4B664419261B9586FA9F1D8EFC1AE35F341F4944(L_14, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_16 = V_2;
		NullCheck(L_16);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_17;
		L_17 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_16, NULL);
		V_5 = L_17;
		float L_18;
		L_18 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&V_5), NULL);
		if ((((float)L_15) > ((float)((float)(L_18/(2.0f))))))
		{
			goto IL_00a6;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_19 = V_1;
		float L_20 = L_19.___y_3;
		float L_21;
		L_21 = CurvedUIExtensionMethods_Abs_m4B664419261B9586FA9F1D8EFC1AE35F341F4944(L_20, NULL);
		RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* L_22 = V_2;
		NullCheck(L_22);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_23;
		L_23 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(L_22, NULL);
		V_5 = L_23;
		float L_24;
		L_24 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&V_5), NULL);
		G_B7_0 = ((((float)L_21) > ((float)((float)(L_24/(2.0f)))))? 1 : 0);
		goto IL_00a7;
	}

IL_00a6:
	{
		G_B7_0 = 1;
	}

IL_00a7:
	{
		V_4 = (bool)G_B7_0;
		bool L_25 = V_4;
		if (!L_25)
		{
			goto IL_00ff;
		}
	}
	{
		// Debug.LogWarning("CurvedUI: " + GetComponent<Selectable>().GetType().Name + " \"" + this.gameObject.name + "\" is outside of the canvas. It will not be interactable. Move it inside the canvas rectangle (white border in scene view) for it to work.", this.gameObject);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_26 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral5BA2AB84F73D215077B6EA830A5ADFEE63A5C5DE);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral5BA2AB84F73D215077B6EA830A5ADFEE63A5C5DE);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_29;
		L_29 = Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611(__this, Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611_RuntimeMethod_var);
		NullCheck(L_29);
		Type_t* L_30;
		L_30 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_29, NULL);
		NullCheck(L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_30);
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, L_31);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_31);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_32 = L_28;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralFC0B04B85BA9083810979D1BDF925CA507C4FFB9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_33 = L_32;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34;
		L_34 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_34);
		String_t* L_35;
		L_35 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_34, NULL);
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, L_35);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_35);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_36 = L_33;
		NullCheck(L_36);
		ArrayElementTypeCheck (L_36, _stringLiteral3EA4783D72C469D17904F0B941A1607293CE17D8);
		(L_36)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral3EA4783D72C469D17904F0B941A1607293CE17D8);
		String_t* L_37;
		L_37 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_36, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38;
		L_38 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_37, L_38, NULL);
	}

IL_00ff:
	{
		// if (myPosOnCanvas.z.Abs() > 0.1f)
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_1;
		float L_40 = L_39.___z_4;
		float L_41;
		L_41 = CurvedUIExtensionMethods_Abs_m4B664419261B9586FA9F1D8EFC1AE35F341F4944(L_40, NULL);
		V_6 = (bool)((((float)L_41) > ((float)(0.100000001f)))? 1 : 0);
		bool L_42 = V_6;
		if (!L_42)
		{
			goto IL_0169;
		}
	}
	{
		// Debug.LogWarning("CurvedUI: The Z position of \"" + this.gameObject.name + "\" "  + GetComponent<Selectable>().GetType().Name + ", or one of its parents is not 0 in relation to the canvas. The interactions may not be accurate.", this.gameObject);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)5);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = L_43;
		NullCheck(L_44);
		ArrayElementTypeCheck (L_44, _stringLiteral3B46302701BEE88904D8B185D12F907471B2D231);
		(L_44)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral3B46302701BEE88904D8B185D12F907471B2D231);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46;
		L_46 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		NullCheck(L_46);
		String_t* L_47;
		L_47 = Object_get_name_mAC2F6B897CF1303BA4249B4CB55271AFACBB6392(L_46, NULL);
		NullCheck(L_45);
		ArrayElementTypeCheck (L_45, L_47);
		(L_45)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_47);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_45;
		NullCheck(L_48);
		ArrayElementTypeCheck (L_48, _stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		(L_48)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral77B57D428E28530AC6DF109E9E5436339E1F7152);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
		Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* L_50;
		L_50 = Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611(__this, Component_GetComponent_TisSelectable_t3251808068A17B8E92FB33590A4C2FA66D456712_m8558781FF0305BA60C3EEE5B520BD9B30DC1B611_RuntimeMethod_var);
		NullCheck(L_50);
		Type_t* L_51;
		L_51 = Object_GetType_mE10A8FC1E57F3DF29972CCBC026C2DC3942263B3(L_50, NULL);
		NullCheck(L_51);
		String_t* L_52;
		L_52 = VirtualFuncInvoker0< String_t* >::Invoke(7 /* System.String System.Reflection.MemberInfo::get_Name() */, L_51);
		NullCheck(L_49);
		ArrayElementTypeCheck (L_49, L_52);
		(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_52);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_53 = L_49;
		NullCheck(L_53);
		ArrayElementTypeCheck (L_53, _stringLiteral1CA45F7FE0CD0814F68F08588BD4DA94450116C3);
		(L_53)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral1CA45F7FE0CD0814F68F08588BD4DA94450116C3);
		String_t* L_54;
		L_54 = String_Concat_m6B0734B65813C8EA093D78E5C2D16534EB6FE8C0(L_53, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55;
		L_55 = Component_get_gameObject_m57AEFBB14DB39EC476F740BA000E170355DE691B(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_m5C8299150E64600CBF5C92706AD610C21D0C0DC5(L_54, L_55, NULL);
	}

IL_0169:
	{
	}

IL_016a:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::OnDisable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_OnDisable_m4DC70EC14555E6EF30D929E501EF06992ABE2571 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIVertexEffect_FontTextureRebuiltCallback_mDD0250B346A05D9A7BF209188032786B4A00B4E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (myGraphic)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_0 = __this->___myGraphic_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// myGraphic.UnregisterDirtyMaterialCallback(TesselationRequiredCallback);
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_3 = __this->___myGraphic_8;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_4 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_4, __this, (intptr_t)((void*)CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		Graphic_UnregisterDirtyMaterialCallback_m62B9DB9B9021EC647E1B3D5122FE3693F8FC9BD2(L_3, L_4, NULL);
	}

IL_0028:
	{
		// if (myText)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___myText_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_5, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0063;
		}
	}
	{
		// myText.UnregisterDirtyVerticesCallback(TesselationRequiredCallback);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___myText_9;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_9 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_9, __this, (intptr_t)((void*)CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		Graphic_UnregisterDirtyVerticesCallback_mA36A388BF7DDB2D71596D6F13CEFCA79B4199B5C(L_8, L_9, NULL);
		// Font.textureRebuilt -= FontTextureRebuiltCallback;
		Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC* L_10 = (Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC*)il2cpp_codegen_object_new(Action_1_tD91E4D0ED3C2E385D3BDD4B3EA48B5F99D39F1DC_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		Action_1__ctor_m970A8DFC8A17354AB74107AC11E2ACE2A3D5200F(L_10, __this, (intptr_t)((void*)CurvedUIVertexEffect_FontTextureRebuiltCallback_mDD0250B346A05D9A7BF209188032786B4A00B4E1_RuntimeMethod_var), NULL);
		Font_remove_textureRebuilt_mCCA3614ED92E2BE1EAC5FCE2D7DDFEDB0DCDE127(L_10, NULL);
	}

IL_0063:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::TesselationRequiredCallback()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_TesselationRequiredCallback_mF450DE3F64EA8027731B8C57519C65AB47C631B9 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	{
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::FontTextureRebuiltCallback(UnityEngine.Font)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_FontTextureRebuiltCallback_mDD0250B346A05D9A7BF209188032786B4A00B4E1 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, Font_tC95270EA3198038970422D78B74A7F2E218A96B6* ___fontie0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (myText.font == fontie)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___myText_9;
		NullCheck(L_0);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_1;
		L_1 = Text_get_font_mBF98ED39D5C5081AF14A64170EC3391D206CCAFD(L_0, NULL);
		Font_tC95270EA3198038970422D78B74A7F2E218A96B6* L_2 = ___fontie0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_1, L_2, NULL);
		V_0 = L_3;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_001e;
		}
	}
	{
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135(__this, (bool)1, NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_LateUpdate_m01DB3E1ECDB79517881D7FAA20D540919C105A2B (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_9;
	memset((&V_9), 0, sizeof(V_9));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_10;
	memset((&V_10), 0, sizeof(V_10));
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_11;
	memset((&V_11), 0, sizeof(V_11));
	bool V_12 = false;
	bool V_13 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_14;
	memset((&V_14), 0, sizeof(V_14));
	bool V_15 = false;
	bool V_16 = false;
	bool V_17 = false;
	bool V_18 = false;
	bool V_19 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B20_0 = 0;
	int32_t G_B26_0 = 0;
	int32_t G_B34_0 = 0;
	int32_t G_B36_0 = 0;
	int32_t G_B44_0 = 0;
	int32_t G_B46_0 = 0;
	{
		// if (myTMP || myTMPSubMesh) return;
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_0 = __this->___myTMP_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		if (L_1)
		{
			goto IL_001b;
		}
	}
	{
		CurvedUITMPSubmesh_tF98D4C8CE7F0ED2C79C29E13DCE951A51D9BB532* L_2 = __this->___myTMPSubMesh_11;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_2, NULL);
		G_B3_0 = ((int32_t)(L_3));
		goto IL_001c;
	}

IL_001b:
	{
		G_B3_0 = 1;
	}

IL_001c:
	{
		V_0 = (bool)G_B3_0;
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_0025;
		}
	}
	{
		// if (myTMP || myTMPSubMesh) return;
		goto IL_02f0;
	}

IL_0025:
	{
		// if (!tesselationRequired)
		bool L_5;
		L_5 = CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29(__this, NULL);
		V_1 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0114;
		}
	}
	{
		// if ((transform as RectTransform).rect.size != savedRectSize)
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_7, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_8;
		L_8 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_7, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_8;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_9;
		L_9 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_3), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_10 = __this->___savedRectSize_27;
		bool L_11;
		L_11 = Vector2_op_Inequality_mCF3935E28AC7B30B279F07F9321CC56718E1311A_inline(L_9, L_10, NULL);
		V_2 = L_11;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_006c;
		}
	}
	{
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135(__this, (bool)1, NULL);
		goto IL_0113;
	}

IL_006c:
	{
		// else if (myGraphic != null)//test for color changes if it has a graphic component
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_13 = __this->___myGraphic_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_13, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_4 = L_14;
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0113;
		}
	}
	{
		// if (myGraphic.color != savedColor)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_16 = __this->___myGraphic_8;
		NullCheck(L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		L_17 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_16);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18 = __this->___savedColor_28;
		bool L_19;
		L_19 = Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline(L_17, L_18, NULL);
		V_5 = L_19;
		bool L_20 = V_5;
		if (!L_20)
		{
			goto IL_00bb;
		}
	}
	{
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135(__this, (bool)1, NULL);
		// savedColor = myGraphic.color;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_21 = __this->___myGraphic_8;
		NullCheck(L_21);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		L_22 = VirtualFuncInvoker0< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_21);
		__this->___savedColor_28 = L_22;
		goto IL_0112;
	}

IL_00bb:
	{
		// else if (myGraphic is Image)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_23 = __this->___myGraphic_8;
		V_6 = (bool)((!(((RuntimeObject*)(Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_23, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var))) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_24 = V_6;
		if (!L_24)
		{
			goto IL_0112;
		}
	}
	{
		// if ((myGraphic as Image).fillAmount != savedFill)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_25 = __this->___myGraphic_8;
		NullCheck(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_25, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)));
		float L_26;
		L_26 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_25, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)), NULL);
		float L_27 = __this->___savedFill_30;
		V_7 = (bool)((((int32_t)((((float)L_26) == ((float)L_27))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_28 = V_7;
		if (!L_28)
		{
			goto IL_0111;
		}
	}
	{
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135(__this, (bool)1, NULL);
		// savedFill = (myGraphic as Image).fillAmount;
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_29 = __this->___myGraphic_8;
		NullCheck(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_29, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)));
		float L_30;
		L_30 = Image_get_fillAmount_mDEE52490D07124E21E7CB36718A5E3714D8B9788(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_29, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)), NULL);
		__this->___savedFill_30 = L_30;
	}

IL_0111:
	{
	}

IL_0112:
	{
	}

IL_0113:
	{
	}

IL_0114:
	{
		// if (!tesselationRequired && !curvingRequired) // do not perform a check if we're already tesselating or curving. Tesselation includes curving.
		bool L_31;
		L_31 = CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29(__this, NULL);
		if (L_31)
		{
			goto IL_0127;
		}
	}
	{
		bool L_32 = __this->___curvingRequired_13;
		G_B20_0 = ((((int32_t)L_32) == ((int32_t)0))? 1 : 0);
		goto IL_0128;
	}

IL_0127:
	{
		G_B20_0 = 0;
	}

IL_0128:
	{
		V_8 = (bool)G_B20_0;
		bool L_33 = V_8;
		if (!L_33)
		{
			goto IL_02bd;
		}
	}
	{
		// Vector3 testedPos = mySettings.transform.worldToLocalMatrix.MultiplyPoint3x4(this.transform.position);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_34 = __this->___mySettings_7;
		NullCheck(L_34);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_35;
		L_35 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_34, NULL);
		NullCheck(L_35);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_36;
		L_36 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_35, NULL);
		V_11 = L_36;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37;
		L_37 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_37);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38;
		L_38 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_37, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39;
		L_39 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814((&V_11), L_38, NULL);
		V_9 = L_39;
		// if (!testedPos.AlmostEqual(savedPos))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_9;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = __this->___savedPos_25;
		bool L_42;
		L_42 = CurvedUIExtensionMethods_AlmostEqual_m54CB785F14677C4EAEF1E4CFBAE87592851BE716(L_40, L_41, (0.01), NULL);
		V_12 = (bool)((((int32_t)L_42) == ((int32_t)0))? 1 : 0);
		bool L_43 = V_12;
		if (!L_43)
		{
			goto IL_01f2;
		}
	}
	{
		// if (mySettings.Shape != CurvedUISettings.CurvedUIShape.CYLINDER || Mathf.Pow(testedPos.x - savedPos.x, 2) > 0.00001 || Mathf.Pow(testedPos.z - savedPos.z, 2) > 0.00001)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_44 = __this->___mySettings_7;
		NullCheck(L_44);
		int32_t L_45;
		L_45 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960(L_44, NULL);
		if (L_45)
		{
			goto IL_01d9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46 = V_9;
		float L_47 = L_46.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_48 = (&__this->___savedPos_25);
		float L_49 = L_48->___x_2;
		float L_50;
		L_50 = powf(((float)il2cpp_codegen_subtract(L_47, L_49)), (2.0f));
		if ((((double)((double)L_50)) > ((double)(1.0000000000000001E-05))))
		{
			goto IL_01d9;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = V_9;
		float L_52 = L_51.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* L_53 = (&__this->___savedPos_25);
		float L_54 = L_53->___z_4;
		float L_55;
		L_55 = powf(((float)il2cpp_codegen_subtract(L_52, L_54)), (2.0f));
		G_B26_0 = ((((double)((double)L_55)) > ((double)(1.0000000000000001E-05)))? 1 : 0);
		goto IL_01da;
	}

IL_01d9:
	{
		G_B26_0 = 1;
	}

IL_01da:
	{
		V_13 = (bool)G_B26_0;
		bool L_56 = V_13;
		if (!L_56)
		{
			goto IL_01f1;
		}
	}
	{
		// savedPos = testedPos;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_57 = V_9;
		__this->___savedPos_25 = L_57;
		// curvingRequired = true;
		__this->___curvingRequired_13 = (bool)1;
	}

IL_01f1:
	{
	}

IL_01f2:
	{
		// Vector3 testedUp = mySettings.transform.worldToLocalMatrix.MultiplyVector(this.transform.up).normalized;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_58 = __this->___mySettings_7;
		NullCheck(L_58);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_59;
		L_59 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_58, NULL);
		NullCheck(L_59);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_60;
		L_60 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_59, NULL);
		V_11 = L_60;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_61;
		L_61 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_61);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62;
		L_62 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_61, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_63;
		L_63 = Matrix4x4_MultiplyVector_mFD12F86A473E90BBB0002149ABA3917B2A518937((&V_11), L_62, NULL);
		V_14 = L_63;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_64;
		L_64 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_14), NULL);
		V_10 = L_64;
		// if (!savedUp.AlmostEqual(testedUp, 0.0001))
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_65 = __this->___savedUp_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_66 = V_10;
		bool L_67;
		L_67 = CurvedUIExtensionMethods_AlmostEqual_m54CB785F14677C4EAEF1E4CFBAE87592851BE716(L_65, L_66, (0.0001), NULL);
		V_15 = (bool)((((int32_t)L_67) == ((int32_t)0))? 1 : 0);
		bool L_68 = V_15;
		if (!L_68)
		{
			goto IL_02bc;
		}
	}
	{
		// bool testedEqual = testedUp.AlmostEqual(Vector3.up.normalized);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69 = V_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		V_14 = L_70;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_71;
		L_71 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_14), NULL);
		bool L_72;
		L_72 = CurvedUIExtensionMethods_AlmostEqual_m54CB785F14677C4EAEF1E4CFBAE87592851BE716(L_69, L_71, (0.01), NULL);
		V_16 = L_72;
		// bool savedEqual = savedUp.AlmostEqual(Vector3.up.normalized);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = __this->___savedUp_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_74;
		L_74 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		V_14 = L_74;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_75;
		L_75 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_14), NULL);
		bool L_76;
		L_76 = CurvedUIExtensionMethods_AlmostEqual_m54CB785F14677C4EAEF1E4CFBAE87592851BE716(L_73, L_75, (0.01), NULL);
		V_17 = L_76;
		// if ((!testedEqual && savedEqual) || (testedEqual && !savedEqual))
		bool L_77 = V_16;
		bool L_78 = V_17;
		if (((int32_t)(((((int32_t)L_77) == ((int32_t)0))? 1 : 0)&(int32_t)L_78)))
		{
			goto IL_029d;
		}
	}
	{
		bool L_79 = V_16;
		if (!L_79)
		{
			goto IL_029a;
		}
	}
	{
		bool L_80 = V_17;
		G_B34_0 = ((((int32_t)L_80) == ((int32_t)0))? 1 : 0);
		goto IL_029b;
	}

IL_029a:
	{
		G_B34_0 = 0;
	}

IL_029b:
	{
		G_B36_0 = G_B34_0;
		goto IL_029e;
	}

IL_029d:
	{
		G_B36_0 = 1;
	}

IL_029e:
	{
		V_18 = (bool)G_B36_0;
		bool L_81 = V_18;
		if (!L_81)
		{
			goto IL_02ac;
		}
	}
	{
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135(__this, (bool)1, NULL);
	}

IL_02ac:
	{
		// savedUp = testedUp;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = V_10;
		__this->___savedUp_26 = L_82;
		// curvingRequired = true;
		__this->___curvingRequired_13 = (bool)1;
	}

IL_02bc:
	{
	}

IL_02bd:
	{
		// if (myGraphic && (tesselationRequired || curvingRequired)) myGraphic.SetVerticesDirty();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_83 = __this->___myGraphic_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_84;
		L_84 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_83, NULL);
		if (!L_84)
		{
			goto IL_02dd;
		}
	}
	{
		bool L_85;
		L_85 = CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29(__this, NULL);
		if (L_85)
		{
			goto IL_02da;
		}
	}
	{
		bool L_86 = __this->___curvingRequired_13;
		G_B44_0 = ((int32_t)(L_86));
		goto IL_02db;
	}

IL_02da:
	{
		G_B44_0 = 1;
	}

IL_02db:
	{
		G_B46_0 = G_B44_0;
		goto IL_02de;
	}

IL_02dd:
	{
		G_B46_0 = 0;
	}

IL_02de:
	{
		V_19 = (bool)G_B46_0;
		bool L_87 = V_19;
		if (!L_87)
		{
			goto IL_02f0;
		}
	}
	{
		// if (myGraphic && (tesselationRequired || curvingRequired)) myGraphic.SetVerticesDirty();
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_88 = __this->___myGraphic_8;
		NullCheck(L_88);
		VirtualActionInvoker0::Invoke(28 /* System.Void UnityEngine.UI.Graphic::SetVerticesDirty() */, L_88);
	}

IL_02f0:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyMesh(UnityEngine.UI.VertexHelper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_ModifyMesh_m2FEB862629B87156F545250B890DAFCCD4136300 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___vh0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	int32_t V_7 = 0;
	bool V_8 = false;
	int32_t V_9 = 0;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	bool V_15 = false;
	bool V_16 = false;
	int32_t G_B5_0 = 0;
	{
		// if (!ShouldModify()) return;
		bool L_0;
		L_0 = CurvedUIVertexEffect_ShouldModify_mCC1D27BCDD16442C8896AC7CEBB12D1531BEAFB9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!ShouldModify()) return;
		goto IL_02e2;
	}

IL_0013:
	{
		// CheckTextFontMaterial();
		CurvedUIVertexEffect_CheckTextFontMaterial_m46226586E181FB5CB4AF23FE0CFAB96C60559637(__this, NULL);
		// if (tesselationRequired || !Application.isPlaying)
		bool L_2;
		L_2 = CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29(__this, NULL);
		if (L_2)
		{
			goto IL_002c;
		}
	}
	{
		bool L_3;
		L_3 = Application_get_isPlaying_m0B3B501E1093739F8887A0DAC5F61D9CB49CC337(NULL);
		G_B5_0 = ((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		goto IL_002d;
	}

IL_002c:
	{
		G_B5_0 = 1;
	}

IL_002d:
	{
		V_1 = (bool)G_B5_0;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_00a0;
		}
	}
	{
		// if (m_tesselatedVerts == null)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_5 = __this->___m_tesselatedVerts_19;
		V_2 = (bool)((((RuntimeObject*)(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)L_5) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_6 = V_2;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
		// m_tesselatedVerts = new List<UIVertex>();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_7 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_7, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		__this->___m_tesselatedVerts_19 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_tesselatedVerts_19), (void*)L_7);
		goto IL_0058;
	}

IL_004c:
	{
		// m_tesselatedVerts.Clear();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = __this->___m_tesselatedVerts_19;
		NullCheck(L_8);
		List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_inline(L_8, List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var);
	}

IL_0058:
	{
		// vh.GetUIVertexStream(m_tesselatedVerts);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_9 = ___vh0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_10 = __this->___m_tesselatedVerts_19;
		NullCheck(L_9);
		VertexHelper_GetUIVertexStream_m87D56EB5559CCCA150F68B1DD660FF4154CACBCE(L_9, L_10, NULL);
		// TesselateGeometry(m_tesselatedVerts);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = __this->___m_tesselatedVerts_19;
		CurvedUIVertexEffect_TesselateGeometry_m001143606FBA1736ACA55BBA194527DB340EEE8A(__this, L_11, NULL);
		// savedRectSize = (transform as RectTransform).rect.size;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_12, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_13;
		L_13 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_12, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_13;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14;
		L_14 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_3), NULL);
		__this->___savedRectSize_27 = L_14;
		// tesselationRequired = false;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135(__this, (bool)0, NULL);
		// curvingRequired = true;
		__this->___curvingRequired_13 = (bool)1;
	}

IL_00a0:
	{
		// if (curvingRequired)
		bool L_15 = __this->___curvingRequired_13;
		V_4 = L_15;
		bool L_16 = V_4;
		if (!L_16)
		{
			goto IL_023b;
		}
	}
	{
		// CanvasToWorld = myCanvas.transform.localToWorldMatrix;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_17 = __this->___myCanvas_6;
		NullCheck(L_17);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_18;
		L_18 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_17, NULL);
		NullCheck(L_18);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_19;
		L_19 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_18, NULL);
		__this->___CanvasToWorld_15 = L_19;
		// CanvasToLocal = myCanvas.transform.worldToLocalMatrix;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_20 = __this->___myCanvas_6;
		NullCheck(L_20);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_21;
		L_21 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_20, NULL);
		NullCheck(L_21);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_22;
		L_22 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_21, NULL);
		__this->___CanvasToLocal_16 = L_22;
		// MyToWorld = transform.localToWorldMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_23;
		L_23 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_23);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_24;
		L_24 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_23, NULL);
		__this->___MyToWorld_17 = L_24;
		// MyToLocal = transform.worldToLocalMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_25;
		L_25 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_25);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_26;
		L_26 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_25, NULL);
		__this->___MyToLocal_18 = L_26;
		// if (m_curvedVerts == null)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_27 = __this->___m_curvedVerts_20;
		V_5 = (bool)((((RuntimeObject*)(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)L_27) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_28 = V_5;
		if (!L_28)
		{
			goto IL_0118;
		}
	}
	{
		// m_curvedVerts = new List<UIVertex>();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_29 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_29, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		__this->___m_curvedVerts_20 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_curvedVerts_20), (void*)L_29);
	}

IL_0118:
	{
		// if (m_curvedVerts.Count == m_tesselatedVerts.Count)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_30 = __this->___m_curvedVerts_20;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_30, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_32 = __this->___m_tesselatedVerts_19;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_32, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_6 = (bool)((((int32_t)L_31) == ((int32_t)L_33))? 1 : 0);
		bool L_34 = V_6;
		if (!L_34)
		{
			goto IL_01b2;
		}
	}
	{
		// for (int i = 0; i < m_curvedVerts.Count; i++)
		V_7 = 0;
		goto IL_0197;
	}

IL_013c:
	{
		// m_curvedVerts[i] = CurveVertex(m_tesselatedVerts[i], mySettings.Angle, mySettings.GetCyllinderRadiusInCanvasSpace(), (myCanvas.transform as RectTransform).rect.size);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_35 = __this->___m_curvedVerts_20;
		int32_t L_36 = V_7;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_37 = __this->___m_tesselatedVerts_19;
		int32_t L_38 = V_7;
		NullCheck(L_37);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_39;
		L_39 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_37, L_38, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_40 = __this->___mySettings_7;
		NullCheck(L_40);
		int32_t L_41;
		L_41 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5(L_40, NULL);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_42 = __this->___mySettings_7;
		NullCheck(L_42);
		float L_43;
		L_43 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(L_42, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_44 = __this->___myCanvas_6;
		NullCheck(L_44);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_45;
		L_45 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_44, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_45, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_46;
		L_46 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_45, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_46;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_47;
		L_47 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_3), NULL);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_48;
		L_48 = CurvedUIVertexEffect_CurveVertex_mD01F1EE23791D3FC1A04A1406F0CA8E68267ACDA(__this, L_39, ((float)L_41), L_43, L_47, NULL);
		NullCheck(L_35);
		List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33(L_35, L_36, L_48, List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
		// for (int i = 0; i < m_curvedVerts.Count; i++)
		int32_t L_49 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_49, 1));
	}

IL_0197:
	{
		// for (int i = 0; i < m_curvedVerts.Count; i++)
		int32_t L_50 = V_7;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_51 = __this->___m_curvedVerts_20;
		NullCheck(L_51);
		int32_t L_52;
		L_52 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_51, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_8 = (bool)((((int32_t)L_50) < ((int32_t)L_52))? 1 : 0);
		bool L_53 = V_8;
		if (L_53)
		{
			goto IL_013c;
		}
	}
	{
		goto IL_0233;
	}

IL_01b2:
	{
		// m_curvedVerts.Clear();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_54 = __this->___m_curvedVerts_20;
		NullCheck(L_54);
		List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_inline(L_54, List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var);
		// for (int i = 0; i < m_tesselatedVerts.Count; i++)
		V_9 = 0;
		goto IL_021d;
	}

IL_01c4:
	{
		// m_curvedVerts.Add(CurveVertex(m_tesselatedVerts[i], mySettings.Angle, mySettings.GetCyllinderRadiusInCanvasSpace(), (myCanvas.transform as RectTransform).rect.size));
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_55 = __this->___m_curvedVerts_20;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_56 = __this->___m_tesselatedVerts_19;
		int32_t L_57 = V_9;
		NullCheck(L_56);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_58;
		L_58 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_56, L_57, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_59 = __this->___mySettings_7;
		NullCheck(L_59);
		int32_t L_60;
		L_60 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5(L_59, NULL);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_61 = __this->___mySettings_7;
		NullCheck(L_61);
		float L_62;
		L_62 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(L_61, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_63 = __this->___myCanvas_6;
		NullCheck(L_63);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_64;
		L_64 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_63, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_64, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_65;
		L_65 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_64, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_65;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_66;
		L_66 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_3), NULL);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_67;
		L_67 = CurvedUIVertexEffect_CurveVertex_mD01F1EE23791D3FC1A04A1406F0CA8E68267ACDA(__this, L_58, ((float)L_60), L_62, L_66, NULL);
		NullCheck(L_55);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_55, L_67, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// for (int i = 0; i < m_tesselatedVerts.Count; i++)
		int32_t L_68 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_68, 1));
	}

IL_021d:
	{
		// for (int i = 0; i < m_tesselatedVerts.Count; i++)
		int32_t L_69 = V_9;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_70 = __this->___m_tesselatedVerts_19;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_70, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_10 = (bool)((((int32_t)L_69) < ((int32_t)L_71))? 1 : 0);
		bool L_72 = V_10;
		if (L_72)
		{
			goto IL_01c4;
		}
	}
	{
	}

IL_0233:
	{
		// curvingRequired = false;
		__this->___curvingRequired_13 = (bool)0;
	}

IL_023b:
	{
		// vh.Clear();
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_73 = ___vh0;
		NullCheck(L_73);
		VertexHelper_Clear_mB19E51AD5AF1C04CB2C6E6A272D032D651EC40F5(L_73, NULL);
		// if (m_curvedVerts.Count % 4 == 0)
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_74 = __this->___m_curvedVerts_20;
		NullCheck(L_74);
		int32_t L_75;
		L_75 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_74, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_11 = (bool)((((int32_t)((int32_t)(L_75%4))) == ((int32_t)0))? 1 : 0);
		bool L_76 = V_11;
		if (!L_76)
		{
			goto IL_02d5;
		}
	}
	{
		// for (int i = 0; i < m_curvedVerts.Count; i += 4)
		V_12 = 0;
		goto IL_02bd;
	}

IL_025e:
	{
		// int currentVertCount = vh.currentVertCount;
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_77 = ___vh0;
		NullCheck(L_77);
		int32_t L_78;
		L_78 = VertexHelper_get_currentVertCount_m45BFEBD6FCB7DF3BF9F76946D6002BDC58B173A4(L_77, NULL);
		V_13 = L_78;
		// for (int v = 0; v < 4; v++)//create a quad
		V_14 = 0;
		goto IL_0289;
	}

IL_026c:
	{
		// vh.AddVert( m_curvedVerts[i + v]);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_79 = ___vh0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_80 = __this->___m_curvedVerts_20;
		int32_t L_81 = V_12;
		int32_t L_82 = V_14;
		NullCheck(L_80);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_83;
		L_83 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_80, ((int32_t)il2cpp_codegen_add(L_81, L_82)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		NullCheck(L_79);
		VertexHelper_AddVert_mB65D778E8E3C6916CDFF5382208890882C3031BA(L_79, L_83, NULL);
		// for (int v = 0; v < 4; v++)//create a quad
		int32_t L_84 = V_14;
		V_14 = ((int32_t)il2cpp_codegen_add(L_84, 1));
	}

IL_0289:
	{
		// for (int v = 0; v < 4; v++)//create a quad
		int32_t L_85 = V_14;
		V_15 = (bool)((((int32_t)L_85) < ((int32_t)4))? 1 : 0);
		bool L_86 = V_15;
		if (L_86)
		{
			goto IL_026c;
		}
	}
	{
		// vh.AddTriangle(currentVertCount, currentVertCount + 1, currentVertCount + 2);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_87 = ___vh0;
		int32_t L_88 = V_13;
		int32_t L_89 = V_13;
		int32_t L_90 = V_13;
		NullCheck(L_87);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_87, L_88, ((int32_t)il2cpp_codegen_add(L_89, 1)), ((int32_t)il2cpp_codegen_add(L_90, 2)), NULL);
		// vh.AddTriangle(currentVertCount + 2, currentVertCount + 3, currentVertCount);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_91 = ___vh0;
		int32_t L_92 = V_13;
		int32_t L_93 = V_13;
		int32_t L_94 = V_13;
		NullCheck(L_91);
		VertexHelper_AddTriangle_mBA2504734E550C672A33168BE119D76D92C788A4(L_91, ((int32_t)il2cpp_codegen_add(L_92, 2)), ((int32_t)il2cpp_codegen_add(L_93, 3)), L_94, NULL);
		// for (int i = 0; i < m_curvedVerts.Count; i += 4)
		int32_t L_95 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_95, 4));
	}

IL_02bd:
	{
		// for (int i = 0; i < m_curvedVerts.Count; i += 4)
		int32_t L_96 = V_12;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_97 = __this->___m_curvedVerts_20;
		NullCheck(L_97);
		int32_t L_98;
		L_98 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_97, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_16 = (bool)((((int32_t)L_96) < ((int32_t)L_98))? 1 : 0);
		bool L_99 = V_16;
		if (L_99)
		{
			goto IL_025e;
		}
	}
	{
		goto IL_02e2;
	}

IL_02d5:
	{
		// else vh.AddUIVertexTriangleStream(m_curvedVerts);
		VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* L_100 = ___vh0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_101 = __this->___m_curvedVerts_20;
		NullCheck(L_100);
		VertexHelper_AddUIVertexTriangleStream_m29A217271BF2B3D3D60B7CBDA4114C7BB40C2841(L_100, L_101, NULL);
	}

IL_02e2:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyTMPMesh(System.Collections.Generic.List`1<UnityEngine.UIVertex>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_ModifyTMPMesh_m1399E60A903D57BEA95FE80DE7CBF42E50C104F2 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** ___vertexList0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D V_3;
	memset((&V_3), 0, sizeof(V_3));
	bool V_4 = false;
	{
		// if (!ShouldModify()) return;
		bool L_0;
		L_0 = CurvedUIVertexEffect_ShouldModify_mCC1D27BCDD16442C8896AC7CEBB12D1531BEAFB9(__this, NULL);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0013;
		}
	}
	{
		// if (!ShouldModify()) return;
		goto IL_00f0;
	}

IL_0013:
	{
		// CheckTextFontMaterial();
		CurvedUIVertexEffect_CheckTextFontMaterial_m46226586E181FB5CB4AF23FE0CFAB96C60559637(__this, NULL);
		// tesselationRequired = false;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135(__this, (bool)0, NULL);
		// curvingRequired = true;
		__this->___curvingRequired_13 = (bool)1;
		// if (curvingRequired)
		bool L_2 = __this->___curvingRequired_13;
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00f0;
		}
	}
	{
		// CanvasToWorld = myCanvas.transform.localToWorldMatrix;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_4 = __this->___myCanvas_6;
		NullCheck(L_4);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_4, NULL);
		NullCheck(L_5);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_6;
		L_6 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_5, NULL);
		__this->___CanvasToWorld_15 = L_6;
		// CanvasToLocal = myCanvas.transform.worldToLocalMatrix;
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_7 = __this->___myCanvas_6;
		NullCheck(L_7);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_7, NULL);
		NullCheck(L_8);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_9;
		L_9 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_8, NULL);
		__this->___CanvasToLocal_16 = L_9;
		// MyToWorld = transform.localToWorldMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_10);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_11;
		L_11 = Transform_get_localToWorldMatrix_m5D35188766856338DD21DE756F42277C21719E6D(L_10, NULL);
		__this->___MyToWorld_17 = L_11;
		// MyToLocal = transform.worldToLocalMatrix;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_12;
		L_12 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(__this, NULL);
		NullCheck(L_12);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_13;
		L_13 = Transform_get_worldToLocalMatrix_mB633C122A01BCE8E51B10B8B8CB95F580750B3F1(L_12, NULL);
		__this->___MyToLocal_18 = L_13;
		// for (int i = 0; i < vertexList.Count; i++)
		V_2 = 0;
		goto IL_00d8;
	}

IL_0089:
	{
		// vertexList[i] = CurveVertex(vertexList[i], mySettings.Angle, mySettings.GetCyllinderRadiusInCanvasSpace(), (myCanvas.transform as RectTransform).rect.size);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** L_14 = ___vertexList0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_15 = *((List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A**)L_14);
		int32_t L_16 = V_2;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** L_17 = ___vertexList0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_18 = *((List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A**)L_17);
		int32_t L_19 = V_2;
		NullCheck(L_18);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_20;
		L_20 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_18, L_19, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_21 = __this->___mySettings_7;
		NullCheck(L_21);
		int32_t L_22;
		L_22 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5(L_21, NULL);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_23 = __this->___mySettings_7;
		NullCheck(L_23);
		float L_24;
		L_24 = CurvedUISettings_GetCyllinderRadiusInCanvasSpace_m8573E2FA1476F04AAF893E6BAF89074F2FE4934E(L_23, NULL);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_25 = __this->___myCanvas_6;
		NullCheck(L_25);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_26;
		L_26 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_25, NULL);
		NullCheck(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_26, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)));
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D L_27;
		L_27 = RectTransform_get_rect_mC82A60F8C3805ED9833508CCC233689641207488(((RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5*)IsInstSealed((RuntimeObject*)L_26, RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5_il2cpp_TypeInfo_var)), NULL);
		V_3 = L_27;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_28;
		L_28 = Rect_get_size_mFB990FFC0FE0152179C8C74A59E4AC258CB44267((&V_3), NULL);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_29;
		L_29 = CurvedUIVertexEffect_CurveVertex_mD01F1EE23791D3FC1A04A1406F0CA8E68267ACDA(__this, L_20, ((float)L_22), L_24, L_28, NULL);
		NullCheck(L_15);
		List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33(L_15, L_16, L_29, List_1_set_Item_m0C5B60C5566C63D5E3E979D8EF02D5DF8D92AB33_RuntimeMethod_var);
		// for (int i = 0; i < vertexList.Count; i++)
		int32_t L_30 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_30, 1));
	}

IL_00d8:
	{
		// for (int i = 0; i < vertexList.Count; i++)
		int32_t L_31 = V_2;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A** L_32 = ___vertexList0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_33 = *((List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A**)L_32);
		NullCheck(L_33);
		int32_t L_34;
		L_34 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_33, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_4 = (bool)((((int32_t)L_31) < ((int32_t)L_34))? 1 : 0);
		bool L_35 = V_4;
		if (L_35)
		{
			goto IL_0089;
		}
	}
	{
		// curvingRequired = false;
		__this->___curvingRequired_13 = (bool)0;
	}

IL_00f0:
	{
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUIVertexEffect::ShouldModify()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_ShouldModify_mCC1D27BCDD16442C8896AC7CEBB12D1531BEAFB9 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t G_B8_0 = 0;
	{
		// if (!this.IsActive()) return false;
		bool L_0;
		L_0 = VirtualFuncInvoker0< bool >::Invoke(9 /* System.Boolean UnityEngine.EventSystems.UIBehaviour::IsActive() */, __this);
		V_0 = (bool)((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0012;
		}
	}
	{
		// if (!this.IsActive()) return false;
		V_1 = (bool)0;
		goto IL_0062;
	}

IL_0012:
	{
		// if (mySettings == null) FindParentSettings();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_2 = __this->___mySettings_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_002a;
		}
	}
	{
		// if (mySettings == null) FindParentSettings();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_5;
		L_5 = CurvedUIVertexEffect_FindParentSettings_m53B1CC1A4E297E5593C3480B7880550DD879728C(__this, (bool)0, NULL);
	}

IL_002a:
	{
		// if (mySettings == null || !mySettings.enabled || mySettings.Angle == 1) return false;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_6 = __this->___mySettings_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_7;
		L_7 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_6, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (L_7)
		{
			goto IL_0055;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_8 = __this->___mySettings_7;
		NullCheck(L_8);
		bool L_9;
		L_9 = Behaviour_get_enabled_mAAC9F15E9EBF552217A5AE2681589CC0BFA300C1(L_8, NULL);
		if (!L_9)
		{
			goto IL_0055;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_10 = __this->___mySettings_7;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5(L_10, NULL);
		G_B8_0 = ((((int32_t)L_11) == ((int32_t)1))? 1 : 0);
		goto IL_0056;
	}

IL_0055:
	{
		G_B8_0 = 1;
	}

IL_0056:
	{
		V_3 = (bool)G_B8_0;
		bool L_12 = V_3;
		if (!L_12)
		{
			goto IL_005e;
		}
	}
	{
		// if (mySettings == null || !mySettings.enabled || mySettings.Angle == 1) return false;
		V_1 = (bool)0;
		goto IL_0062;
	}

IL_005e:
	{
		// return true;
		V_1 = (bool)1;
		goto IL_0062;
	}

IL_0062:
	{
		// }
		bool L_13 = V_1;
		return L_13;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::CheckTextFontMaterial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_CheckTextFontMaterial_m46226586E181FB5CB4AF23FE0CFAB96C60559637 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_tA7C96C24DE882DB5FA936CA80F46608A0041A566_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// if (myText)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___myText_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Implicit_m18E1885C296CC868AC918101523697CFE6413C79(L_0, NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0082;
		}
	}
	{
		// if (myText.cachedTextGenerator.verts.Count > 0 && myText.cachedTextGenerator.verts[0].uv0 != savedTextUV0)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___myText_9;
		NullCheck(L_3);
		TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* L_4;
		L_4 = Text_get_cachedTextGenerator_mFC242539F7380F54696D431B126B69DC4EFC821E(L_3, NULL);
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = TextGenerator_get_verts_mA197E8944ABE4831B93275662BB66EC53DE349D8(L_4, NULL);
		NullCheck(L_5);
		int32_t L_6;
		L_6 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<UnityEngine.UIVertex>::get_Count() */, ICollection_1_tA7C96C24DE882DB5FA936CA80F46608A0041A566_il2cpp_TypeInfo_var, L_5);
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0051;
		}
	}
	{
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___myText_9;
		NullCheck(L_7);
		TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* L_8;
		L_8 = Text_get_cachedTextGenerator_mFC242539F7380F54696D431B126B69DC4EFC821E(L_7, NULL);
		NullCheck(L_8);
		RuntimeObject* L_9;
		L_9 = TextGenerator_get_verts_mA197E8944ABE4831B93275662BB66EC53DE349D8(L_8, NULL);
		NullCheck(L_9);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = InterfaceFuncInvoker1< UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D_il2cpp_TypeInfo_var, L_9, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_11 = L_10.___uv0_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = __this->___savedTextUV0_29;
		bool L_13;
		L_13 = Vector4_op_Inequality_m23600308603A706A9DD6057603DEA82E9A6F9FEF_inline(L_11, L_12, NULL);
		G_B4_0 = ((int32_t)(L_13));
		goto IL_0052;
	}

IL_0051:
	{
		G_B4_0 = 0;
	}

IL_0052:
	{
		V_1 = (bool)G_B4_0;
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_0081;
		}
	}
	{
		// savedTextUV0 = myText.cachedTextGenerator.verts[0].uv0;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___myText_9;
		NullCheck(L_15);
		TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* L_16;
		L_16 = Text_get_cachedTextGenerator_mFC242539F7380F54696D431B126B69DC4EFC821E(L_15, NULL);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = TextGenerator_get_verts_mA197E8944ABE4831B93275662BB66EC53DE349D8(L_16, NULL);
		NullCheck(L_17);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_18;
		L_18 = InterfaceFuncInvoker1< UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<UnityEngine.UIVertex>::get_Item(System.Int32) */, IList_1_t1B290ECCB9D2FD52EB25227789136D5C40BD3D5D_il2cpp_TypeInfo_var, L_17, 0);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_19 = L_18.___uv0_4;
		__this->___savedTextUV0_29 = L_19;
		// tesselationRequired = true;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135(__this, (bool)1, NULL);
	}

IL_0081:
	{
	}

IL_0082:
	{
		// }
		return;
	}
}
// CurvedUI.CurvedUISettings CurvedUI.CurvedUIVertexEffect::FindParentSettings(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* CurvedUIVertexEffect_FindParentSettings_m53B1CC1A4E297E5593C3480B7880550DD879728C (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___forceNew0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* V_2 = NULL;
	{
		// if (mySettings == null || forceNew)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_0 = __this->___mySettings_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		bool L_2 = ___forceNew0;
		V_0 = (bool)((int32_t)((int32_t)L_1|(int32_t)L_2));
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0048;
		}
	}
	{
		// mySettings = GetComponentInParent<CurvedUISettings>();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_4;
		L_4 = Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7(__this, Component_GetComponentInParent_TisCurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2_mE3D19811EC1E9A40F868D392007A45793A9FE2E7_RuntimeMethod_var);
		__this->___mySettings_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mySettings_7), (void*)L_4);
		// if (mySettings == null) return null;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_5 = __this->___mySettings_7;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_5, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		V_1 = L_6;
		bool L_7 = V_1;
		if (!L_7)
		{
			goto IL_0034;
		}
	}
	{
		// if (mySettings == null) return null;
		V_2 = (CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2*)NULL;
		goto IL_0051;
	}

IL_0034:
	{
		// myCanvas = mySettings.GetComponent<Canvas>();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_8 = __this->___mySettings_7;
		NullCheck(L_8);
		Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* L_9;
		L_9 = Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2(L_8, Component_GetComponent_TisCanvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26_m209BA4F663AB98A4504995B5BD3EADEDEFB92BF2_RuntimeMethod_var);
		__this->___myCanvas_6 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___myCanvas_6), (void*)L_9);
	}

IL_0048:
	{
		// return mySettings;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_10 = __this->___mySettings_7;
		V_2 = L_10;
		goto IL_0051;
	}

IL_0051:
	{
		// }
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_11 = V_2;
		return L_11;
	}
}
// UnityEngine.UIVertex CurvedUI.CurvedUIVertexEffect::CurveVertex(UnityEngine.UIVertex,System.Single,System.Single,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 CurvedUIVertexEffect_CurveVertex_mD01F1EE23791D3FC1A04A1406F0CA8E68267ACDA (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 ___input0, float ___cylinder_angle1, float ___radius2, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___canvasSize3, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	float V_2 = 0.0f;
	bool V_3 = false;
	float V_4 = 0.0f;
	bool V_5 = false;
	float V_6 = 0.0f;
	float V_7 = 0.0f;
	float V_8 = 0.0f;
	bool V_9 = false;
	float V_10 = 0.0f;
	float V_11 = 0.0f;
	float V_12 = 0.0f;
	float V_13 = 0.0f;
	bool V_14 = false;
	bool V_15 = false;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	int32_t G_B3_0 = 0;
	int32_t G_B8_0 = 0;
	float G_B13_0 = 0.0f;
	float G_B13_1 = 0.0f;
	float G_B12_0 = 0.0f;
	float G_B12_1 = 0.0f;
	int32_t G_B14_0 = 0;
	float G_B14_1 = 0.0f;
	float G_B14_2 = 0.0f;
	float G_B16_0 = 0.0f;
	float G_B16_1 = 0.0f;
	float G_B16_2 = 0.0f;
	float G_B15_0 = 0.0f;
	float G_B15_1 = 0.0f;
	float G_B15_2 = 0.0f;
	int32_t G_B17_0 = 0;
	float G_B17_1 = 0.0f;
	float G_B17_2 = 0.0f;
	float G_B17_3 = 0.0f;
	int32_t G_B21_0 = 0;
	{
		// Vector3 pos = input.position;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_0 = ___input0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = L_0.___position_0;
		V_0 = L_1;
		// pos = CanvasToLocal.MultiplyPoint3x4(MyToWorld.MultiplyPoint3x4(pos));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_2 = (&__this->___CanvasToLocal_16);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_3 = (&__this->___MyToWorld_17);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_3, L_4, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_2, L_5, NULL);
		V_0 = L_6;
		// if (mySettings.Shape == CurvedUISettings.CurvedUIShape.CYLINDER && mySettings.Angle != 0)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_7 = __this->___mySettings_7;
		NullCheck(L_7);
		int32_t L_8;
		L_8 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960(L_7, NULL);
		if (L_8)
		{
			goto IL_003d;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_9 = __this->___mySettings_7;
		NullCheck(L_9);
		int32_t L_10;
		L_10 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5(L_9, NULL);
		G_B3_0 = ((!(((uint32_t)L_10) <= ((uint32_t)0)))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B3_0 = 0;
	}

IL_003e:
	{
		V_1 = (bool)G_B3_0;
		bool L_11 = V_1;
		if (!L_11)
		{
			goto IL_008e;
		}
	}
	{
		// float theta = (pos.x / canvasSize.x) * cylinder_angle * Mathf.Deg2Rad;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = V_0;
		float L_13 = L_12.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_14 = ___canvasSize3;
		float L_15 = L_14.___x_0;
		float L_16 = ___cylinder_angle1;
		V_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_13/L_15)), L_16)), (0.0174532924f)));
		// radius += pos.z; // change the radius depending on how far the element is moved in z direction from canvas plane
		float L_17 = ___radius2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18 = V_0;
		float L_19 = L_18.___z_4;
		___radius2 = ((float)il2cpp_codegen_add(L_17, L_19));
		// pos.x = Mathf.Sin(theta) * radius;
		float L_20 = V_2;
		float L_21;
		L_21 = sinf(L_20);
		float L_22 = ___radius2;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_multiply(L_21, L_22));
		// pos.z += Mathf.Cos(theta) * radius - radius;
		float* L_23 = (&(&V_0)->___z_4);
		float* L_24 = L_23;
		float L_25 = *((float*)L_24);
		float L_26 = V_2;
		float L_27;
		L_27 = cosf(L_26);
		float L_28 = ___radius2;
		float L_29 = ___radius2;
		*((float*)L_24) = (float)((float)il2cpp_codegen_add(L_25, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_27, L_28)), L_29))));
		goto IL_0397;
	}

IL_008e:
	{
		// else if (mySettings.Shape == CurvedUISettings.CurvedUIShape.CYLINDER_VERTICAL && mySettings.Angle != 0)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_30 = __this->___mySettings_7;
		NullCheck(L_30);
		int32_t L_31;
		L_31 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960(L_30, NULL);
		if ((!(((uint32_t)L_31) == ((uint32_t)3))))
		{
			goto IL_00ac;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_32 = __this->___mySettings_7;
		NullCheck(L_32);
		int32_t L_33;
		L_33 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5(L_32, NULL);
		G_B8_0 = ((!(((uint32_t)L_33) <= ((uint32_t)0)))? 1 : 0);
		goto IL_00ad;
	}

IL_00ac:
	{
		G_B8_0 = 0;
	}

IL_00ad:
	{
		V_3 = (bool)G_B8_0;
		bool L_34 = V_3;
		if (!L_34)
		{
			goto IL_0100;
		}
	}
	{
		// float theta = (pos.y / canvasSize.y) * cylinder_angle * Mathf.Deg2Rad;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_0;
		float L_36 = L_35.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_37 = ___canvasSize3;
		float L_38 = L_37.___y_1;
		float L_39 = ___cylinder_angle1;
		V_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)(L_36/L_38)), L_39)), (0.0174532924f)));
		// radius += pos.z; // change the radius depending on how far the element is moved in z direction from canvas plane
		float L_40 = ___radius2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_0;
		float L_42 = L_41.___z_4;
		___radius2 = ((float)il2cpp_codegen_add(L_40, L_42));
		// pos.y = Mathf.Sin(theta) * radius;
		float L_43 = V_4;
		float L_44;
		L_44 = sinf(L_43);
		float L_45 = ___radius2;
		(&V_0)->___y_3 = ((float)il2cpp_codegen_multiply(L_44, L_45));
		// pos.z += Mathf.Cos(theta) * radius - radius;
		float* L_46 = (&(&V_0)->___z_4);
		float* L_47 = L_46;
		float L_48 = *((float*)L_47);
		float L_49 = V_4;
		float L_50;
		L_50 = cosf(L_49);
		float L_51 = ___radius2;
		float L_52 = ___radius2;
		*((float*)L_47) = (float)((float)il2cpp_codegen_add(L_48, ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_50, L_51)), L_52))));
		goto IL_0397;
	}

IL_0100:
	{
		// else if (mySettings.Shape == CurvedUISettings.CurvedUIShape.RING)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_53 = __this->___mySettings_7;
		NullCheck(L_53);
		int32_t L_54;
		L_54 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960(L_53, NULL);
		V_5 = (bool)((((int32_t)L_54) == ((int32_t)1))? 1 : 0);
		bool L_55 = V_5;
		if (!L_55)
		{
			goto IL_01ff;
		}
	}
	{
		// float angleOffset = 0;
		V_6 = (0.0f);
		// float r = pos.y.Remap(canvasSize.y * 0.5f * (mySettings.RingFlipVertical ? 1 : -1), -canvasSize.y * 0.5f * (mySettings.RingFlipVertical ? 1 : -1), mySettings.RingExternalDiameter * (1 - mySettings.RingFill) * 0.5f, mySettings.RingExternalDiameter * 0.5f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_56 = V_0;
		float L_57 = L_56.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_58 = ___canvasSize3;
		float L_59 = L_58.___y_1;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_60 = __this->___mySettings_7;
		NullCheck(L_60);
		bool L_61;
		L_61 = CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2(L_60, NULL);
		G_B12_0 = ((float)il2cpp_codegen_multiply(L_59, (0.5f)));
		G_B12_1 = L_57;
		if (L_61)
		{
			G_B13_0 = ((float)il2cpp_codegen_multiply(L_59, (0.5f)));
			G_B13_1 = L_57;
			goto IL_0142;
		}
	}
	{
		G_B14_0 = (-1);
		G_B14_1 = G_B12_0;
		G_B14_2 = G_B12_1;
		goto IL_0143;
	}

IL_0142:
	{
		G_B14_0 = 1;
		G_B14_1 = G_B13_0;
		G_B14_2 = G_B13_1;
	}

IL_0143:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_62 = ___canvasSize3;
		float L_63 = L_62.___y_1;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_64 = __this->___mySettings_7;
		NullCheck(L_64);
		bool L_65;
		L_65 = CurvedUISettings_get_RingFlipVertical_mB22164394339EFCCEA26F609AC487FE838AD8BD2(L_64, NULL);
		G_B15_0 = ((float)il2cpp_codegen_multiply(((-L_63)), (0.5f)));
		G_B15_1 = ((float)il2cpp_codegen_multiply(G_B14_1, ((float)G_B14_0)));
		G_B15_2 = G_B14_2;
		if (L_65)
		{
			G_B16_0 = ((float)il2cpp_codegen_multiply(((-L_63)), (0.5f)));
			G_B16_1 = ((float)il2cpp_codegen_multiply(G_B14_1, ((float)G_B14_0)));
			G_B16_2 = G_B14_2;
			goto IL_0163;
		}
	}
	{
		G_B17_0 = (-1);
		G_B17_1 = G_B15_0;
		G_B17_2 = G_B15_1;
		G_B17_3 = G_B15_2;
		goto IL_0164;
	}

IL_0163:
	{
		G_B17_0 = 1;
		G_B17_1 = G_B16_0;
		G_B17_2 = G_B16_1;
		G_B17_3 = G_B16_2;
	}

IL_0164:
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_66 = __this->___mySettings_7;
		NullCheck(L_66);
		int32_t L_67;
		L_67 = CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9(L_66, NULL);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_68 = __this->___mySettings_7;
		NullCheck(L_68);
		float L_69;
		L_69 = CurvedUISettings_get_RingFill_mD2847B47EBBC41023A34E40FA2D6583FC5F2F2D1(L_68, NULL);
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_70 = __this->___mySettings_7;
		NullCheck(L_70);
		int32_t L_71;
		L_71 = CurvedUISettings_get_RingExternalDiameter_m7926BDEDD788D3D4B312A359E88D3CDDEDE2FED9(L_70, NULL);
		float L_72;
		L_72 = CurvedUIExtensionMethods_Remap_m6FE4C83EBA65F6FED4242A28626F9F19BE6E0533(G_B17_3, G_B17_2, ((float)il2cpp_codegen_multiply(G_B17_1, ((float)G_B17_0))), ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(((float)L_67), ((float)il2cpp_codegen_subtract((1.0f), L_69)))), (0.5f))), ((float)il2cpp_codegen_multiply(((float)L_71), (0.5f))), NULL);
		V_7 = L_72;
		// float theta = (pos.x / canvasSize.x).Remap(-0.5f, 0.5f, Mathf.PI / 2.0f, cylinder_angle * Mathf.Deg2Rad + Mathf.PI / 2.0f) - angleOffset;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_73 = V_0;
		float L_74 = L_73.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_75 = ___canvasSize3;
		float L_76 = L_75.___x_0;
		float L_77 = ___cylinder_angle1;
		float L_78;
		L_78 = CurvedUIExtensionMethods_Remap_m6FE4C83EBA65F6FED4242A28626F9F19BE6E0533(((float)(L_74/L_76)), (-0.5f), (0.5f), (1.57079637f), ((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_77, (0.0174532924f))), (1.57079637f))), NULL);
		float L_79 = V_6;
		V_8 = ((float)il2cpp_codegen_subtract(L_78, L_79));
		// pos.x = r * Mathf.Cos(theta);
		float L_80 = V_7;
		float L_81 = V_8;
		float L_82;
		L_82 = cosf(L_81);
		(&V_0)->___x_2 = ((float)il2cpp_codegen_multiply(L_80, L_82));
		// pos.y = r * Mathf.Sin(theta);
		float L_83 = V_7;
		float L_84 = V_8;
		float L_85;
		L_85 = sinf(L_84);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_multiply(L_83, L_85));
		goto IL_0397;
	}

IL_01ff:
	{
		// else if (mySettings.Shape == CurvedUISettings.CurvedUIShape.SPHERE && mySettings.Angle != 0)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_86 = __this->___mySettings_7;
		NullCheck(L_86);
		int32_t L_87;
		L_87 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960(L_86, NULL);
		if ((!(((uint32_t)L_87) == ((uint32_t)2))))
		{
			goto IL_021d;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_88 = __this->___mySettings_7;
		NullCheck(L_88);
		int32_t L_89;
		L_89 = CurvedUISettings_get_Angle_m110A97C9F54EB61EC37E075F76CACCD145BEDDB5(L_88, NULL);
		G_B21_0 = ((!(((uint32_t)L_89) <= ((uint32_t)0)))? 1 : 0);
		goto IL_021e;
	}

IL_021d:
	{
		G_B21_0 = 0;
	}

IL_021e:
	{
		V_9 = (bool)G_B21_0;
		bool L_90 = V_9;
		if (!L_90)
		{
			goto IL_0397;
		}
	}
	{
		// float vangle = mySettings.VerticalAngle;
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_91 = __this->___mySettings_7;
		NullCheck(L_91);
		int32_t L_92;
		L_92 = CurvedUISettings_get_VerticalAngle_mA8B6369AF4F0EE3DC10FDD87AC000921D90E04A4(L_91, NULL);
		V_10 = ((float)L_92);
		// float savedZ = -pos.z;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_93 = V_0;
		float L_94 = L_93.___z_4;
		V_11 = ((-L_94));
		// if (mySettings.PreserveAspect)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_95 = __this->___mySettings_7;
		NullCheck(L_95);
		bool L_96;
		L_96 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A(L_95, NULL);
		V_14 = L_96;
		bool L_97 = V_14;
		if (!L_97)
		{
			goto IL_0267;
		}
	}
	{
		// vangle = cylinder_angle * (canvasSize.y / canvasSize.x);
		float L_98 = ___cylinder_angle1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_99 = ___canvasSize3;
		float L_100 = L_99.___y_1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_101 = ___canvasSize3;
		float L_102 = L_101.___x_0;
		V_10 = ((float)il2cpp_codegen_multiply(L_98, ((float)(L_100/L_102))));
		goto IL_028f;
	}

IL_0267:
	{
		// radius = canvasSize.x / 2.0f;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_103 = ___canvasSize3;
		float L_104 = L_103.___x_0;
		___radius2 = ((float)(L_104/(2.0f)));
		// if (vangle == 0) return input;
		float L_105 = V_10;
		V_15 = (bool)((((float)L_105) == ((float)(0.0f)))? 1 : 0);
		bool L_106 = V_15;
		if (!L_106)
		{
			goto IL_028e;
		}
	}
	{
		// if (vangle == 0) return input;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_107 = ___input0;
		V_16 = L_107;
		goto IL_03ba;
	}

IL_028e:
	{
	}

IL_028f:
	{
		// float theta = (pos.x / canvasSize.x).Remap(-0.5f, 0.5f, (180 - cylinder_angle) / 2.0f - 90, 180 - (180 - cylinder_angle) / 2.0f - 90);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_108 = V_0;
		float L_109 = L_108.___x_2;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_110 = ___canvasSize3;
		float L_111 = L_110.___x_0;
		float L_112 = ___cylinder_angle1;
		float L_113 = ___cylinder_angle1;
		float L_114;
		L_114 = CurvedUIExtensionMethods_Remap_m6FE4C83EBA65F6FED4242A28626F9F19BE6E0533(((float)(L_109/L_111)), (-0.5f), (0.5f), ((float)il2cpp_codegen_subtract(((float)(((float)il2cpp_codegen_subtract((180.0f), L_112))/(2.0f))), (90.0f))), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_subtract((180.0f), ((float)(((float)il2cpp_codegen_subtract((180.0f), L_113))/(2.0f))))), (90.0f))), NULL);
		V_12 = L_114;
		// theta *= Mathf.Deg2Rad;
		float L_115 = V_12;
		V_12 = ((float)il2cpp_codegen_multiply(L_115, (0.0174532924f)));
		// float gamma = (pos.y / canvasSize.y).Remap(-0.5f, 0.5f, (180 - vangle) / 2.0f, 180 - (180 - vangle) / 2.0f);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_116 = V_0;
		float L_117 = L_116.___y_3;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_118 = ___canvasSize3;
		float L_119 = L_118.___y_1;
		float L_120 = V_10;
		float L_121 = V_10;
		float L_122;
		L_122 = CurvedUIExtensionMethods_Remap_m6FE4C83EBA65F6FED4242A28626F9F19BE6E0533(((float)(L_117/L_119)), (-0.5f), (0.5f), ((float)(((float)il2cpp_codegen_subtract((180.0f), L_120))/(2.0f))), ((float)il2cpp_codegen_subtract((180.0f), ((float)(((float)il2cpp_codegen_subtract((180.0f), L_121))/(2.0f))))), NULL);
		V_13 = L_122;
		// gamma *= Mathf.Deg2Rad;
		float L_123 = V_13;
		V_13 = ((float)il2cpp_codegen_multiply(L_123, (0.0174532924f)));
		// pos.z = Mathf.Sin(gamma) * Mathf.Cos(theta) * (radius + savedZ);
		float L_124 = V_13;
		float L_125;
		L_125 = sinf(L_124);
		float L_126 = V_12;
		float L_127;
		L_127 = cosf(L_126);
		float L_128 = ___radius2;
		float L_129 = V_11;
		(&V_0)->___z_4 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_125, L_127)), ((float)il2cpp_codegen_add(L_128, L_129))));
		// pos.y = -(radius + savedZ) * Mathf.Cos(gamma);
		float L_130 = ___radius2;
		float L_131 = V_11;
		float L_132 = V_13;
		float L_133;
		L_133 = cosf(L_132);
		(&V_0)->___y_3 = ((float)il2cpp_codegen_multiply(((-((float)il2cpp_codegen_add(L_130, L_131)))), L_133));
		// pos.x = Mathf.Sin(gamma) * Mathf.Sin(theta) * (radius + savedZ);
		float L_134 = V_13;
		float L_135;
		L_135 = sinf(L_134);
		float L_136 = V_12;
		float L_137;
		L_137 = sinf(L_136);
		float L_138 = ___radius2;
		float L_139 = V_11;
		(&V_0)->___x_2 = ((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_multiply(L_135, L_137)), ((float)il2cpp_codegen_add(L_138, L_139))));
		// if (mySettings.PreserveAspect)
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_140 = __this->___mySettings_7;
		NullCheck(L_140);
		bool L_141;
		L_141 = CurvedUISettings_get_PreserveAspect_m487772ACD238112A6721838C2A5DA5B6D96B404A(L_140, NULL);
		V_17 = L_141;
		bool L_142 = V_17;
		if (!L_142)
		{
			goto IL_0396;
		}
	}
	{
		// pos.z -= radius;
		float* L_143 = (&(&V_0)->___z_4);
		float* L_144 = L_143;
		float L_145 = *((float*)L_144);
		float L_146 = ___radius2;
		*((float*)L_144) = (float)((float)il2cpp_codegen_subtract(L_145, L_146));
	}

IL_0396:
	{
	}

IL_0397:
	{
		// input.position = MyToLocal.MultiplyPoint3x4(CanvasToWorld.MultiplyPoint3x4(pos));
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_147 = (&__this->___MyToLocal_18);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_148 = (&__this->___CanvasToWorld_15);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_149 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_150;
		L_150 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_148, L_149, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_151;
		L_151 = Matrix4x4_MultiplyPoint3x4_mACCBD70AFA82C63DA88555780B7B6B01281AB814(L_147, L_150, NULL);
		(&___input0)->___position_0 = L_151;
		// return input;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_152 = ___input0;
		V_16 = L_152;
		goto IL_03ba;
	}

IL_03ba:
	{
		// }
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_153 = V_16;
		return L_153;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::TesselateGeometry(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_TesselateGeometry_m001143606FBA1736ACA55BBA194527DB340EEE8A (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___verts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t G_B4_0 = 0;
	{
		// Vector2 tessellatedSize = mySettings.GetTesslationSize();
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_0 = __this->___mySettings_7;
		NullCheck(L_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1;
		L_1 = CurvedUISettings_GetTesslationSize_m244B198E9E96821752B0BB22174639803E8196B2(L_0, (bool)1, NULL);
		V_0 = L_1;
		// TransformMisaligned = !(savedUp.AlmostEqual(Vector3.up.normalized));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = __this->___savedUp_26;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline(NULL);
		V_1 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline((&V_1), NULL);
		bool L_5;
		L_5 = CurvedUIExtensionMethods_AlmostEqual_m54CB785F14677C4EAEF1E4CFBAE87592851BE716(L_2, L_4, (0.01), NULL);
		__this->___TransformMisaligned_14 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
		// TrisToQuads(verts);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_6 = ___verts0;
		CurvedUIVertexEffect_TrisToQuads_m9DD062DD6518593E61FA6964886CDDE4C3A376E4(__this, L_6, NULL);
		// if (myText == null && myTMP == null && !DoNotTesselate)
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_7 = __this->___myText_9;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_8;
		L_8 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_7, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_8)
		{
			goto IL_0067;
		}
	}
	{
		TextMeshProUGUI_t101091AF4B578BB534C92E9D1EEAF0611636D957* L_9 = __this->___myTMP_10;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mD3DB0D72CE0250C84033DC2A90AEF9D59896E536(L_9, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_10)
		{
			goto IL_0067;
		}
	}
	{
		bool L_11 = __this->___DoNotTesselate_5;
		G_B4_0 = ((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
		goto IL_0068;
	}

IL_0067:
	{
		G_B4_0 = 0;
	}

IL_0068:
	{
		V_2 = (bool)G_B4_0;
		bool L_12 = V_2;
		if (!L_12)
		{
			goto IL_009f;
		}
	}
	{
		// int startingVertexCount = verts.Count;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_13 = ___verts0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_13, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_3 = L_14;
		// for (int i = 0; i < startingVertexCount; i += 4)
		V_4 = 0;
		goto IL_008a;
	}

IL_0079:
	{
		// ModifyQuad(verts, i, tessellatedSize);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_15 = ___verts0;
		int32_t L_16 = V_4;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_17 = V_0;
		CurvedUIVertexEffect_ModifyQuad_mEAC08EDC04F5B93091D9A4783F4BDBEF9CD76F0E(__this, L_15, L_16, L_17, NULL);
		// for (int i = 0; i < startingVertexCount; i += 4)
		int32_t L_18 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add(L_18, 4));
	}

IL_008a:
	{
		// for (int i = 0; i < startingVertexCount; i += 4)
		int32_t L_19 = V_4;
		int32_t L_20 = V_3;
		V_5 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (L_21)
		{
			goto IL_0079;
		}
	}
	{
		// verts.RemoveRange(0, startingVertexCount);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_22 = ___verts0;
		int32_t L_23 = V_3;
		NullCheck(L_22);
		List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229(L_22, 0, L_23, List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::ModifyQuad(System.Collections.Generic.List`1<UnityEngine.UIVertex>,System.Int32,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_ModifyQuad_mEAC08EDC04F5B93091D9A4783F4BDBEF9CD76F0E (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___verts0, int32_t ___vertexIndex1, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___requiredSize2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	float V_6 = 0.0f;
	int32_t V_7 = 0;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	int32_t V_12 = 0;
	float V_13 = 0.0f;
	float V_14 = 0.0f;
	int32_t V_15 = 0;
	float V_16 = 0.0f;
	bool V_17 = false;
	bool V_18 = false;
	int32_t G_B7_0 = 0;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B11_0;
	memset((&G_B11_0), 0, sizeof(G_B11_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 G_B14_0;
	memset((&G_B14_0), 0, sizeof(G_B14_0));
	int32_t G_B19_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B32_0 = 0;
	int32_t G_B37_0 = 0;
	{
		// for (int i = 0; i < 4; i++)
		V_7 = 0;
		goto IL_0023;
	}

IL_0006:
	{
		// m_quad[i] = verts[vertexIndex + i];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_0 = __this->___m_quad_23;
		int32_t L_1 = V_7;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = ___verts0;
		int32_t L_3 = ___vertexIndex1;
		int32_t L_4 = V_7;
		NullCheck(L_2);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_5;
		L_5 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_2, ((int32_t)il2cpp_codegen_add(L_3, L_4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207)L_5);
		// for (int i = 0; i < 4; i++)
		int32_t L_6 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_6, 1));
	}

IL_0023:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_7 = V_7;
		V_8 = (bool)((((int32_t)L_7) < ((int32_t)4))? 1 : 0);
		bool L_8 = V_8;
		if (L_8)
		{
			goto IL_0006;
		}
	}
	{
		// Vector3 horizontalDir = m_quad[2].position - m_quad[1].position;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_9 = __this->___m_quad_23;
		NullCheck(L_9);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___position_0;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_11 = __this->___m_quad_23;
		NullCheck(L_11);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = ((L_11)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13;
		L_13 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_10, L_12, NULL);
		V_0 = L_13;
		// Vector3 verticalDir = m_quad[1].position - m_quad[0].position;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_14 = __this->___m_quad_23;
		NullCheck(L_14);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15 = ((L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(1)))->___position_0;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_16 = __this->___m_quad_23;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = ((L_16)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_15, L_17, NULL);
		V_1 = L_18;
		// if (myGraphic != null && (myGraphic is Image) && (myGraphic as Image).type == Image.Type.Filled)
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_19 = __this->___myGraphic_8;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_20;
		L_20 = Object_op_Inequality_m4D656395C27694A7F33F5AA8DE80A7AAF9E20BA7(L_19, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_20)
		{
			goto IL_00ae;
		}
	}
	{
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_21 = __this->___myGraphic_8;
		if (!((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_21, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)))
		{
			goto IL_00ae;
		}
	}
	{
		Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* L_22 = __this->___myGraphic_8;
		NullCheck(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_22, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)));
		int32_t L_23;
		L_23 = Image_get_type_m7CE3AA14B38E1C50AC8362176AE842992DA8C639(((Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E*)IsInstClass((RuntimeObject*)L_22, Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_il2cpp_TypeInfo_var)), NULL);
		G_B7_0 = ((((int32_t)L_23) == ((int32_t)3))? 1 : 0);
		goto IL_00af;
	}

IL_00ae:
	{
		G_B7_0 = 0;
	}

IL_00af:
	{
		V_9 = (bool)G_B7_0;
		bool L_24 = V_9;
		if (!L_24)
		{
			goto IL_0178;
		}
	}
	{
		// horizontalDir = (horizontalDir).x > (m_quad[3].position - m_quad[0].position).x ? horizontalDir : m_quad[3].position - m_quad[0].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = V_0;
		float L_26 = L_25.___x_2;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_27 = __this->___m_quad_23;
		NullCheck(L_27);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_28 = ((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_29 = __this->___m_quad_23;
		NullCheck(L_29);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30 = ((L_29)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_31;
		L_31 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_28, L_30, NULL);
		float L_32 = L_31.___x_2;
		if ((((float)L_26) > ((float)L_32)))
		{
			goto IL_0116;
		}
	}
	{
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_33 = __this->___m_quad_23;
		NullCheck(L_33);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_34 = ((L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_35 = __this->___m_quad_23;
		NullCheck(L_35);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_34, L_36, NULL);
		G_B11_0 = L_37;
		goto IL_0117;
	}

IL_0116:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_0;
		G_B11_0 = L_38;
	}

IL_0117:
	{
		V_0 = G_B11_0;
		// verticalDir = (verticalDir).y > (m_quad[2].position - m_quad[3].position).y ? verticalDir : m_quad[2].position - m_quad[3].position;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = V_1;
		float L_40 = L_39.___y_3;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_41 = __this->___m_quad_23;
		NullCheck(L_41);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42 = ((L_41)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___position_0;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_43 = __this->___m_quad_23;
		NullCheck(L_43);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_44 = ((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_42, L_44, NULL);
		float L_46 = L_45.___y_3;
		if ((((float)L_40) > ((float)L_46)))
		{
			goto IL_0175;
		}
	}
	{
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_47 = __this->___m_quad_23;
		NullCheck(L_47);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_48 = ((L_47)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)))->___position_0;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_49 = __this->___m_quad_23;
		NullCheck(L_49);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50 = ((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(3)))->___position_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline(L_48, L_50, NULL);
		G_B14_0 = L_51;
		goto IL_0176;
	}

IL_0175:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_52 = V_1;
		G_B14_0 = L_52;
	}

IL_0176:
	{
		V_1 = G_B14_0;
	}

IL_0178:
	{
		// int horizontalQuads = 1;
		V_2 = 1;
		// int verticalQuads = 1;
		V_3 = 1;
		// if (TransformMisaligned || mySettings.Shape == CurvedUISettings.CurvedUIShape.SPHERE || mySettings.Shape == CurvedUISettings.CurvedUIShape.CYLINDER_VERTICAL)
		bool L_53 = __this->___TransformMisaligned_14;
		if (L_53)
		{
			goto IL_01a2;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_54 = __this->___mySettings_7;
		NullCheck(L_54);
		int32_t L_55;
		L_55 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960(L_54, NULL);
		if ((((int32_t)L_55) == ((int32_t)2)))
		{
			goto IL_01a2;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_56 = __this->___mySettings_7;
		NullCheck(L_56);
		int32_t L_57;
		L_57 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960(L_56, NULL);
		G_B19_0 = ((((int32_t)L_57) == ((int32_t)3))? 1 : 0);
		goto IL_01a3;
	}

IL_01a2:
	{
		G_B19_0 = 1;
	}

IL_01a3:
	{
		V_10 = (bool)G_B19_0;
		bool L_58 = V_10;
		if (!L_58)
		{
			goto IL_01cd;
		}
	}
	{
		// verticalQuads = Mathf.CeilToInt(verticalDir.magnitude * (1.0f / Mathf.Max(0.0001f, requiredSize.y)));
		float L_59;
		L_59 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_1), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_60 = ___requiredSize2;
		float L_61 = L_60.___y_1;
		float L_62;
		L_62 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((9.99999975E-05f), L_61, NULL);
		int32_t L_63;
		L_63 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)il2cpp_codegen_multiply(L_59, ((float)((1.0f)/L_62)))), NULL);
		V_3 = L_63;
	}

IL_01cd:
	{
		// if (TransformMisaligned || mySettings.Shape != CurvedUISettings.CurvedUIShape.CYLINDER_VERTICAL)
		bool L_64 = __this->___TransformMisaligned_14;
		if (L_64)
		{
			goto IL_01e8;
		}
	}
	{
		CurvedUISettings_t9372AE4D00C583FDA95980FFFF296E8D97CFDAC2* L_65 = __this->___mySettings_7;
		NullCheck(L_65);
		int32_t L_66;
		L_66 = CurvedUISettings_get_Shape_mF44A3E8DC1B0A3AAA9CCFB967FDC7F82C75AB960(L_65, NULL);
		G_B24_0 = ((((int32_t)((((int32_t)L_66) == ((int32_t)3))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_01e9;
	}

IL_01e8:
	{
		G_B24_0 = 1;
	}

IL_01e9:
	{
		V_11 = (bool)G_B24_0;
		bool L_67 = V_11;
		if (!L_67)
		{
			goto IL_0215;
		}
	}
	{
		// horizontalQuads = Mathf.CeilToInt(horizontalDir.magnitude * (1.0f / Mathf.Max(0.0001f, requiredSize.x)));
		float L_68;
		L_68 = Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline((&V_0), NULL);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_69 = ___requiredSize2;
		float L_70 = L_69.___x_0;
		float L_71;
		L_71 = Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline((9.99999975E-05f), L_70, NULL);
		int32_t L_72;
		L_72 = Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline(((float)il2cpp_codegen_multiply(L_68, ((float)((1.0f)/L_71)))), NULL);
		V_2 = L_72;
	}

IL_0215:
	{
		// bool oneVert = false;
		V_4 = (bool)0;
		// bool oneHori = false;
		V_5 = (bool)0;
		// float yStart = 0.0f;
		V_6 = (0.0f);
		// for (int y = 0; y < verticalQuads || !oneVert; ++y)
		V_12 = 0;
		goto IL_02c7;
	}

IL_022a:
	{
		// oneVert = true;
		V_4 = (bool)1;
		// float yEnd = (y + 1.0f) / verticalQuads;
		int32_t L_73 = V_12;
		int32_t L_74 = V_3;
		V_13 = ((float)(((float)il2cpp_codegen_add(((float)L_73), (1.0f)))/((float)L_74)));
		// float xStart = 0.0f;
		V_14 = (0.0f);
		// for (int x = 0; x < horizontalQuads || !oneHori; ++x)
		V_15 = 0;
		goto IL_02a9;
	}

IL_0248:
	{
		// oneHori = true;
		V_5 = (bool)1;
		// float xEnd = (x + 1.0f) / horizontalQuads;
		int32_t L_75 = V_15;
		int32_t L_76 = V_2;
		V_16 = ((float)(((float)il2cpp_codegen_add(((float)L_75), (1.0f)))/((float)L_76)));
		// verts.Add(TesselateQuad(xStart, yStart));
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_77 = ___verts0;
		float L_78 = V_14;
		float L_79 = V_6;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_80;
		L_80 = CurvedUIVertexEffect_TesselateQuad_m458D2B5C9B0F0BA5BA28FE1EB6E1803487A94A86(__this, L_78, L_79, NULL);
		NullCheck(L_77);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_77, L_80, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// verts.Add(TesselateQuad(xStart, yEnd));
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_81 = ___verts0;
		float L_82 = V_14;
		float L_83 = V_13;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_84;
		L_84 = CurvedUIVertexEffect_TesselateQuad_m458D2B5C9B0F0BA5BA28FE1EB6E1803487A94A86(__this, L_82, L_83, NULL);
		NullCheck(L_81);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_81, L_84, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// verts.Add(TesselateQuad(xEnd, yEnd));
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_85 = ___verts0;
		float L_86 = V_16;
		float L_87 = V_13;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_88;
		L_88 = CurvedUIVertexEffect_TesselateQuad_m458D2B5C9B0F0BA5BA28FE1EB6E1803487A94A86(__this, L_86, L_87, NULL);
		NullCheck(L_85);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_85, L_88, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// verts.Add(TesselateQuad(xEnd, yStart));
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_89 = ___verts0;
		float L_90 = V_16;
		float L_91 = V_6;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_92;
		L_92 = CurvedUIVertexEffect_TesselateQuad_m458D2B5C9B0F0BA5BA28FE1EB6E1803487A94A86(__this, L_90, L_91, NULL);
		NullCheck(L_89);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_89, L_92, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// xStart = xEnd;
		float L_93 = V_16;
		V_14 = L_93;
		// for (int x = 0; x < horizontalQuads || !oneHori; ++x)
		int32_t L_94 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_02a9:
	{
		// for (int x = 0; x < horizontalQuads || !oneHori; ++x)
		int32_t L_95 = V_15;
		int32_t L_96 = V_2;
		if ((((int32_t)L_95) < ((int32_t)L_96)))
		{
			goto IL_02b5;
		}
	}
	{
		bool L_97 = V_5;
		G_B32_0 = ((((int32_t)L_97) == ((int32_t)0))? 1 : 0);
		goto IL_02b6;
	}

IL_02b5:
	{
		G_B32_0 = 1;
	}

IL_02b6:
	{
		V_17 = (bool)G_B32_0;
		bool L_98 = V_17;
		if (L_98)
		{
			goto IL_0248;
		}
	}
	{
		// yStart = yEnd;
		float L_99 = V_13;
		V_6 = L_99;
		// for (int y = 0; y < verticalQuads || !oneVert; ++y)
		int32_t L_100 = V_12;
		V_12 = ((int32_t)il2cpp_codegen_add(L_100, 1));
	}

IL_02c7:
	{
		// for (int y = 0; y < verticalQuads || !oneVert; ++y)
		int32_t L_101 = V_12;
		int32_t L_102 = V_3;
		if ((((int32_t)L_101) < ((int32_t)L_102)))
		{
			goto IL_02d3;
		}
	}
	{
		bool L_103 = V_4;
		G_B37_0 = ((((int32_t)L_103) == ((int32_t)0))? 1 : 0);
		goto IL_02d4;
	}

IL_02d3:
	{
		G_B37_0 = 1;
	}

IL_02d4:
	{
		V_18 = (bool)G_B37_0;
		bool L_104 = V_18;
		if (L_104)
		{
			goto IL_022a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::TrisToQuads(System.Collections.Generic.List`1<UnityEngine.UIVertex>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_TrisToQuads_m9DD062DD6518593E61FA6964886CDDE4C3A376E4 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* ___verts0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	{
		// int vertsInTrisCount = verts.Count;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = ___verts0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_inline(L_0, List_1_get_Count_m289E50C53DE62E6913B2ED1A26A78DC51AD12F39_RuntimeMethod_var);
		V_0 = L_1;
		// m_vertsInQuads.Clear();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = __this->___m_vertsInQuads_21;
		NullCheck(L_2);
		List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_inline(L_2, List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_RuntimeMethod_var);
		// for (int i = 0; i < vertsInTrisCount; i += 6)
		V_1 = 0;
		goto IL_0070;
	}

IL_0018:
	{
		// m_vertsInQuads.Add(verts[i + 0]);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_3 = __this->___m_vertsInQuads_21;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_4 = ___verts0;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_6;
		L_6 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_4, L_5, List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		NullCheck(L_3);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_3, L_6, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// m_vertsInQuads.Add(verts[i + 1]);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_7 = __this->___m_vertsInQuads_21;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_8 = ___verts0;
		int32_t L_9 = V_1;
		NullCheck(L_8);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_10;
		L_10 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_8, ((int32_t)il2cpp_codegen_add(L_9, 1)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		NullCheck(L_7);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_7, L_10, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// m_vertsInQuads.Add(verts[i + 2]);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_11 = __this->___m_vertsInQuads_21;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_12 = ___verts0;
		int32_t L_13 = V_1;
		NullCheck(L_12);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_14;
		L_14 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_12, ((int32_t)il2cpp_codegen_add(L_13, 2)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		NullCheck(L_11);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_11, L_14, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// m_vertsInQuads.Add(verts[i + 4]);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_15 = __this->___m_vertsInQuads_21;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_16 = ___verts0;
		int32_t L_17 = V_1;
		NullCheck(L_16);
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_18;
		L_18 = List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67(L_16, ((int32_t)il2cpp_codegen_add(L_17, 4)), List_1_get_Item_m818C7E5E5F73749A39FB30DDDD55D00EDC565C67_RuntimeMethod_var);
		NullCheck(L_15);
		List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_inline(L_15, L_18, List_1_Add_m21493CD763CBCDBF96B24419D7C72B46F76663EB_RuntimeMethod_var);
		// for (int i = 0; i < vertsInTrisCount; i += 6)
		int32_t L_19 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_19, 6));
	}

IL_0070:
	{
		// for (int i = 0; i < vertsInTrisCount; i += 6)
		int32_t L_20 = V_1;
		int32_t L_21 = V_0;
		V_2 = (bool)((((int32_t)L_20) < ((int32_t)L_21))? 1 : 0);
		bool L_22 = V_2;
		if (L_22)
		{
			goto IL_0018;
		}
	}
	{
		// verts.AddRange(m_vertsInQuads);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_23 = ___verts0;
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_24 = __this->___m_vertsInQuads_21;
		NullCheck(L_23);
		List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A(L_23, L_24, List_1_AddRange_m9D0F00702B2BFB22FB6BF2A41341A2F809FD7F3A_RuntimeMethod_var);
		// verts.RemoveRange(0, vertsInTrisCount);
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_25 = ___verts0;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229(L_25, 0, L_26, List_1_RemoveRange_m4F67EBDAC82EF078695CCE9D3174BD0F88F5A229_RuntimeMethod_var);
		// }
		return;
	}
}
// UnityEngine.UIVertex CurvedUI.CurvedUIVertexEffect::TesselateQuad(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 CurvedUIVertexEffect_TesselateQuad_m458D2B5C9B0F0BA5BA28FE1EB6E1803487A94A86 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, float ___x0, float ___y1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	bool V_2 = false;
	UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		// m_weights[0] = (1 - x) * (1 - y);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_0 = __this->___m_weights_24;
		float L_1 = ___x0;
		float L_2 = ___y1;
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_1)), ((float)il2cpp_codegen_subtract((1.0f), L_2)))));
		// m_weights[1] = (1 - x) * y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_3 = __this->___m_weights_24;
		float L_4 = ___x0;
		float L_5 = ___y1;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)il2cpp_codegen_multiply(((float)il2cpp_codegen_subtract((1.0f), L_4)), L_5)));
		// m_weights[2] = x * y;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_6 = __this->___m_weights_24;
		float L_7 = ___x0;
		float L_8 = ___y1;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)il2cpp_codegen_multiply(L_7, L_8)));
		// m_weights[3] = x * (1 - y);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_9 = __this->___m_weights_24;
		float L_10 = ___x0;
		float L_11 = ___y1;
		NullCheck(L_9);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)((float)il2cpp_codegen_multiply(L_10, ((float)il2cpp_codegen_subtract((1.0f), L_11)))));
		// _uv0 = _uv1 = Vector2.zero;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_12;
		L_12 = Vector2_get_zero_m009B92B5D35AB02BD1610C2E1ACCE7C9CF964A6E_inline(NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13;
		L_13 = Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline(L_12, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = L_13;
		V_0 = L_14;
		__this->____uv1_32 = L_14;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_15 = V_0;
		__this->____uv0_31 = L_15;
		// _pos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		__this->____pos_33 = L_16;
		// for (int i = 0; i < 4; i++)
		V_1 = 0;
		goto IL_0103;
	}

IL_0070:
	{
		// _uv0 += m_quad[i].uv0 * m_weights[i];
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = __this->____uv0_31;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_18 = __this->___m_quad_23;
		int32_t L_19 = V_1;
		NullCheck(L_18);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)))->___uv0_4;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_21 = __this->___m_weights_24;
		int32_t L_22 = V_1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		float L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_25;
		L_25 = Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline(L_20, L_24, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_26;
		L_26 = Vector4_op_Addition_m5E7015CDA7DD1FCB4E488DE23C5DB959D7406843_inline(L_17, L_25, NULL);
		__this->____uv0_31 = L_26;
		// _uv1 += m_quad[i].uv1 * m_weights[i];
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_27 = __this->____uv1_32;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_28 = __this->___m_quad_23;
		int32_t L_29 = V_1;
		NullCheck(L_28);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)))->___uv1_5;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_31 = __this->___m_weights_24;
		int32_t L_32 = V_1;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		float L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_35;
		L_35 = Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline(L_30, L_34, NULL);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_36;
		L_36 = Vector4_op_Addition_m5E7015CDA7DD1FCB4E488DE23C5DB959D7406843_inline(L_27, L_35, NULL);
		__this->____uv1_32 = L_36;
		// _pos += m_quad[i].position * m_weights[i];
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37 = __this->____pos_33;
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_38 = __this->___m_quad_23;
		int32_t L_39 = V_1;
		NullCheck(L_38);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = ((L_38)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_39)))->___position_0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_41 = __this->___m_weights_24;
		int32_t L_42 = V_1;
		NullCheck(L_41);
		int32_t L_43 = L_42;
		float L_44 = (L_41)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_45;
		L_45 = Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline(L_40, L_44, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_46;
		L_46 = Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline(L_37, L_45, NULL);
		__this->____pos_33 = L_46;
		// for (int i = 0; i < 4; i++)
		int32_t L_47 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_47, 1));
	}

IL_0103:
	{
		// for (int i = 0; i < 4; i++)
		int32_t L_48 = V_1;
		V_2 = (bool)((((int32_t)L_48) < ((int32_t)4))? 1 : 0);
		bool L_49 = V_2;
		if (L_49)
		{
			goto IL_0070;
		}
	}
	{
		// m_ret.position = _pos;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_50 = (&__this->___m_ret_22);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51 = __this->____pos_33;
		L_50->___position_0 = L_51;
		// m_ret.color = m_quad[0].color; //used instead to save performance. Color lerps are expensive.
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_52 = (&__this->___m_ret_22);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_53 = __this->___m_quad_23;
		NullCheck(L_53);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_54 = ((L_53)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___color_3;
		L_52->___color_3 = L_54;
		// m_ret.uv0 = _uv0;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_55 = (&__this->___m_ret_22);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_56 = __this->____uv0_31;
		L_55->___uv0_4 = L_56;
		// m_ret.uv1 = _uv1;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_57 = (&__this->___m_ret_22);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_58 = __this->____uv1_32;
		L_57->___uv1_5 = L_58;
		// m_ret.uv2 = m_quad[0].uv2;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_59 = (&__this->___m_ret_22);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_60 = __this->___m_quad_23;
		NullCheck(L_60);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_61 = ((L_60)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___uv2_6;
		L_59->___uv2_6 = L_61;
		// m_ret.uv3 = m_quad[0].uv3;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_62 = (&__this->___m_ret_22);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_63 = __this->___m_quad_23;
		NullCheck(L_63);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_64 = ((L_63)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___uv3_7;
		L_62->___uv3_7 = L_64;
		// m_ret.normal = m_quad[0].normal;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_65 = (&__this->___m_ret_22);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_66 = __this->___m_quad_23;
		NullCheck(L_66);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_67 = ((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___normal_1;
		L_65->___normal_1 = L_67;
		// m_ret.tangent = m_quad[0].tangent;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207* L_68 = (&__this->___m_ret_22);
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_69 = __this->___m_quad_23;
		NullCheck(L_69);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_70 = ((L_69)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___tangent_2;
		L_68->___tangent_2 = L_70;
		// return m_ret;
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_71 = __this->___m_ret_22;
		V_3 = L_71;
		goto IL_01d6;
	}

IL_01d6:
	{
		// }
		UIVertex_tF5C663F4BBC786C9D56C28016FF66E6C6BF85207 L_72 = V_3;
		return L_72;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::SetDirty()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_SetDirty_mDE58FDE3D93E15271604480ABE22590757DAA100 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	{
		// TesselationRequired = true;
		CurvedUIVertexEffect_set_TesselationRequired_m53B8A90218456051784AD8A136C5CB91A9CDCCD4(__this, (bool)1, NULL);
		// }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUIVertexEffect::get_TesselationRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_get_TesselationRequired_m5B187B771E485EA09817FE3E6C4DDD2DD8F7D065 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return tesselationRequired; }
		bool L_0;
		L_0 = CurvedUIVertexEffect_get_tesselationRequired_m22F9012E0EB2BB382E428462BFE5A9B17CB93A29(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return tesselationRequired; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::set_TesselationRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_TesselationRequired_m53B8A90218456051784AD8A136C5CB91A9CDCCD4 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { tesselationRequired = value; }
		bool L_0 = ___value0;
		CurvedUIVertexEffect_set_tesselationRequired_mE402E297659B56F324A4D4BF0D35ACD87C386135(__this, L_0, NULL);
		// set { tesselationRequired = value; }
		return;
	}
}
// System.Boolean CurvedUI.CurvedUIVertexEffect::get_CurvingRequired()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CurvedUIVertexEffect_get_CurvingRequired_m3606039B53A1EACA1E1D44234260AE0032BB4B63 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return curvingRequired; }
		bool L_0 = __this->___curvingRequired_13;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return curvingRequired; }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::set_CurvingRequired(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect_set_CurvingRequired_m955958BBAD2A29D7606644AA29A073D2FC6C9778 (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set { curvingRequired = value; }
		bool L_0 = ___value0;
		__this->___curvingRequired_13 = L_0;
		// set { curvingRequired = value; }
		return;
	}
}
// System.Void CurvedUI.CurvedUIVertexEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CurvedUIVertexEffect__ctor_m5463072C73EB82FFE8C5BE578DEC750CC7FE53FF (CurvedUIVertexEffect_tDE8DC3260DDCD57E14C1F2536D6C3ECD1D99AA88* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool DoNotTesselate = false;
		__this->___DoNotTesselate_5 = (bool)0;
		// bool m_tesselationRequired = true;
		__this->___m_tesselationRequired_12 = (bool)1;
		// bool curvingRequired = true;
		__this->___curvingRequired_13 = (bool)1;
		// bool TransformMisaligned = false;
		__this->___TransformMisaligned_14 = (bool)0;
		// List<UIVertex> m_tesselatedVerts = new List<UIVertex>();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_0 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_0, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		__this->___m_tesselatedVerts_19 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_tesselatedVerts_19), (void*)L_0);
		// List<UIVertex> m_curvedVerts = new List<UIVertex>();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_1 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_1, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		__this->___m_curvedVerts_20 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_curvedVerts_20), (void*)L_1);
		// List<UIVertex> m_vertsInQuads = new List<UIVertex>();
		List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* L_2 = (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A*)il2cpp_codegen_object_new(List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B(L_2, List_1__ctor_mF168C27BCDD77482D72C96433F84274EBCCCE11B_RuntimeMethod_var);
		__this->___m_vertsInQuads_21 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_vertsInQuads_21), (void*)L_2);
		// UIVertex[] m_quad = new UIVertex[4];
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_3 = (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)(UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)SZArrayNew(UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___m_quad_23 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_quad_23), (void*)L_3);
		// float[] m_weights = new float[4];
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C_il2cpp_TypeInfo_var, (uint32_t)4);
		__this->___m_weights_24 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_weights_24), (void*)L_4);
		BaseMeshEffect__ctor_mFFF23FD89B32150DAC512C556A1CCF563D062427(__this, NULL);
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsNaN_m684B090AA2F895FD91821CA8684CBC11D784E4DD_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) > ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Single_IsInfinity_m500DB7A91ADC75BE691663649FCA28485FA720AB_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(BitConverter_t6E99605185963BC12B3D369E13F2B88997E64A27_il2cpp_TypeInfo_var);
		int32_t L_1;
		L_1 = BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline(L_0, NULL);
		return (bool)((((int32_t)((int32_t)(L_1&((int32_t)2147483647LL)))) == ((int32_t)((int32_t)2139095040)))? 1 : 0);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Subtraction_m1690F44F6DC92B770A940B6CF8AE0535625A9824_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_subtract(L_1, L_3)), ((float)il2cpp_codegen_subtract(L_5, L_7)), ((float)il2cpp_codegen_subtract(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_normalized_m736BBF65D5CDA7A18414370D15B4DFCC1E466F07_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)__this);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_UnaryNegation_m3AC523A7BED6E843165BDF598690F0560D8CAA63_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___a0;
		float L_3 = L_2.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_6), ((-L_1)), ((-L_3)), ((-L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_001e;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = V_0;
		return L_7;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Clamp_m154E404AF275A3B2EC99ECAA3879B4CB9F0606DC_inline (float ___value0, float ___min1, float ___max2, const RuntimeMethod* method) 
{
	bool V_0 = false;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		float L_0 = ___value0;
		float L_1 = ___min1;
		V_0 = (bool)((((float)L_0) < ((float)L_1))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_000e;
		}
	}
	{
		float L_3 = ___min1;
		___value0 = L_3;
		goto IL_0019;
	}

IL_000e:
	{
		float L_4 = ___value0;
		float L_5 = ___max2;
		V_1 = (bool)((((float)L_4) > ((float)L_5))? 1 : 0);
		bool L_6 = V_1;
		if (!L_6)
		{
			goto IL_0019;
		}
	}
	{
		float L_7 = ___max2;
		___value0 = L_7;
	}

IL_0019:
	{
		float L_8 = ___value0;
		V_2 = L_8;
		goto IL_001d;
	}

IL_001d:
	{
		float L_9 = V_2;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 Vector2_op_Division_m69F64D545E3C023BE9927397572349A569141EBA_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___a0;
		float L_1 = L_0.___x_0;
		float L_2 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___a0;
		float L_4 = L_3.___y_1;
		float L_5 = ___d1;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9525B79969AFFE3254B303A40997A56DEEB6F548_inline((&L_6), ((float)(L_1/L_2)), ((float)(L_4/L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool CurvedUIInputModule_get_GazeUseTimedClick_m5A4D1EF48159BAEAB7442199036ED6071DC0A98C_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) 
{
	{
		// get => gazeUseTimedClick;
		bool L_0 = __this->___gazeUseTimedClick_34;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void CurvedUIInputModule_set_GazeUseTimedClick_m5103211575DCD154F3173A9DF228B16E1AE76CF0_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// set => gazeUseTimedClick = value;
		bool L_0 = ___value0;
		__this->___gazeUseTimedClick_34 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUIInputModule_get_GazeClickTimer_mBACA415983885ED0D52C2BA1806BD9D999CCAFC3_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) 
{
	{
		// get => gazeClickTimer;
		float L_0 = __this->___gazeClickTimer_35;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUIInputModule_get_GazeClickTimerDelay_mEE9D705F5B6072FA19FA68794CF59F697124E0B7_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) 
{
	{
		// get => gazeClickTimerDelay;
		float L_0 = __this->___gazeClickTimerDelay_36;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float CurvedUIInputModule_get_GazeTimerProgress_m20F15F571020564B09F34E9E9E85B31B96792B74_inline (CurvedUIInputModule_t857965FE7B6D8953D9F543E6B68F9E1D261AE386* __this, const RuntimeMethod* method) 
{
	{
		// public float GazeTimerProgress => gazeTimerProgress;
		float L_0 = __this->___gazeTimerProgress_47;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Inequality_m4A31CEDC6B46367D219D0358AC94F5F66C3849CA_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___rhs1;
		bool L_2;
		L_2 = Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_up_mAB5269BFCBCB1BD241450C9BF2F156303D30E0C3_inline (const RuntimeMethod* method) 
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
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___upVector_7;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Inequality_m23600308603A706A9DD6057603DEA82E9A6F9FEF_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___rhs1;
		bool L_2;
		L_2 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		bool L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mF0D6017E90B345F1F52D1CC564C640F1A847AF2D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		float L_0 = __this->___x_2;
		float L_1 = __this->___x_2;
		float L_2 = __this->___y_3;
		float L_3 = __this->___y_3;
		float L_4 = __this->___z_4;
		float L_5 = __this->___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_6;
		L_6 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_0, L_1)), ((float)il2cpp_codegen_multiply(L_2, L_3)))), ((float)il2cpp_codegen_multiply(L_4, L_5))))));
		V_0 = ((float)L_6);
		goto IL_0034;
	}

IL_0034:
	{
		float L_7 = V_0;
		return L_7;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Mathf_Max_mA9DCA91E87D6D27034F56ABA52606A9090406016_inline (float ___a0, float ___b1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float G_B3_0 = 0.0f;
	{
		float L_0 = ___a0;
		float L_1 = ___b1;
		if ((((float)L_0) > ((float)L_1)))
		{
			goto IL_0008;
		}
	}
	{
		float L_2 = ___b1;
		G_B3_0 = L_2;
		goto IL_0009;
	}

IL_0008:
	{
		float L_3 = ___a0;
		G_B3_0 = L_3;
	}

IL_0009:
	{
		V_0 = G_B3_0;
		goto IL_000c;
	}

IL_000c:
	{
		float L_4 = V_0;
		return L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Mathf_CeilToInt_m04999E3DEB696135EFD620A30F51503D700C1998_inline (float ___f0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		float L_0 = ___f0;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_1;
		L_1 = ceil(((double)L_0));
		V_0 = il2cpp_codegen_cast_double_to_int<int32_t>(L_1);
		goto IL_000c;
	}

IL_000c:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Implicit_m6162D8136CFE97A5A8BD3B764F9074DB96AA5CD0_inline (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___v0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_0 = ___v0;
		float L_1 = L_0.___x_0;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_2 = ___v0;
		float L_3 = L_2.___y_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_4), L_1, L_3, (0.0f), (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001f;
	}

IL_001f:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Multiply_m10DA1FA6A405C8988C46FFD159ED9FF9E5D732F5_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		float L_2 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___a0;
		float L_4 = L_3.___y_2;
		float L_5 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___a0;
		float L_7 = L_6.___z_3;
		float L_8 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___a0;
		float L_10 = L_9.___w_4;
		float L_11 = ___d1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_12), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), ((float)il2cpp_codegen_multiply(L_10, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0029;
	}

IL_0029:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Vector4_op_Addition_m5E7015CDA7DD1FCB4E488DE23C5DB959D7406843_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___a0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___b1, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___a0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___b1;
		float L_3 = L_2.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___a0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___b1;
		float L_7 = L_6.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___a0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___b1;
		float L_11 = L_10.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___a0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___b1;
		float L_15 = L_14.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_16;
		memset((&L_16), 0, sizeof(L_16));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_16), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), ((float)il2cpp_codegen_add(L_13, L_15)), /*hidden argument*/NULL);
		V_0 = L_16;
		goto IL_003d;
	}

IL_003d:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_17 = V_0;
		return L_17;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m516FE285F5342F922C6EB3FCB33197E9017FF484_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m087D6F0EC60843D455F9F83D25FE42B2433AAD1D_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m31CE3E5CA0B9ECA0E9B32A34D4ABE7E29B429448_gshared_inline (List_1_t09F8990ACE8783E311B473B0090859BA9C00FC2A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!false)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* L_3 = (UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m48B57EC27CADC3463CA98A33373D557DA587FF1B((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t BitConverter_SingleToInt32Bits_mA1902D40966CA4C89A8974B10E5680A06E88566B_inline (float ___value0, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = *((int32_t*)((uintptr_t)(&___value0)));
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_Normalize_m6120F119433C5B60BBB28731D3D4A0DA50A84DDD_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___value0;
		float L_1;
		L_1 = Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline(L_0, NULL);
		V_0 = L_1;
		float L_2 = V_0;
		V_1 = (bool)((((float)L_2) > ((float)(9.99999975E-06f)))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___value0;
		float L_5 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6;
		L_6 = Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline(L_4, L_5, NULL);
		V_2 = L_6;
		goto IL_0026;
	}

IL_001e:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7;
		L_7 = Vector3_get_zero_m9D7F7B580B5A276411267E96AA3425736D9BDC83_inline(NULL);
		V_2 = L_7;
		goto IL_0026;
	}

IL_0026:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = V_2;
		return L_8;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Color_op_Equality_m3A255F888F9300ABB36ED2BC0640CFFDAAEFED2F_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___lhs0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___rhs1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___lhs0;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1;
		L_1 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_0, NULL);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___rhs1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3;
		L_3 = Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline(L_2, NULL);
		bool L_4;
		L_4 = Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline(L_1, L_3, NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		bool L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector4_op_Equality_m80E2AA0626A70EF9DCC4F4C215F674A22D6DE937_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___lhs0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___rhs1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	float V_3 = 0.0f;
	float V_4 = 0.0f;
	bool V_5 = false;
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_0 = ___lhs0;
		float L_1 = L_0.___x_1;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_2 = ___rhs1;
		float L_3 = L_2.___x_1;
		V_0 = ((float)il2cpp_codegen_subtract(L_1, L_3));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_4 = ___lhs0;
		float L_5 = L_4.___y_2;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_6 = ___rhs1;
		float L_7 = L_6.___y_2;
		V_1 = ((float)il2cpp_codegen_subtract(L_5, L_7));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8 = ___lhs0;
		float L_9 = L_8.___z_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_10 = ___rhs1;
		float L_11 = L_10.___z_3;
		V_2 = ((float)il2cpp_codegen_subtract(L_9, L_11));
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_12 = ___lhs0;
		float L_13 = L_12.___w_4;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_14 = ___rhs1;
		float L_15 = L_14.___w_4;
		V_3 = ((float)il2cpp_codegen_subtract(L_13, L_15));
		float L_16 = V_0;
		float L_17 = V_0;
		float L_18 = V_1;
		float L_19 = V_1;
		float L_20 = V_2;
		float L_21 = V_2;
		float L_22 = V_3;
		float L_23 = V_3;
		V_4 = ((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_16, L_17)), ((float)il2cpp_codegen_multiply(L_18, L_19)))), ((float)il2cpp_codegen_multiply(L_20, L_21)))), ((float)il2cpp_codegen_multiply(L_22, L_23))));
		float L_24 = V_4;
		V_5 = (bool)((((float)L_24) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_0057;
	}

IL_0057:
	{
		bool L_25 = V_5;
		return L_25;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3* __this, float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_1 = L_0;
		float L_1 = ___y1;
		__this->___y_2 = L_1;
		float L_2 = ___z2;
		__this->___z_3 = L_2;
		float L_3 = ___w3;
		__this->___w_4 = L_3;
		return;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float Vector3_Magnitude_m6AD0BEBF88AAF98188A851E62D7A32CB5B7830EF_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___vector0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___vector0;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___vector0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___vector0;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___vector0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___vector0;
		float L_11 = L_10.___z_4;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		double L_12;
		L_12 = sqrt(((double)((float)il2cpp_codegen_add(((float)il2cpp_codegen_add(((float)il2cpp_codegen_multiply(L_1, L_3)), ((float)il2cpp_codegen_multiply(L_5, L_7)))), ((float)il2cpp_codegen_multiply(L_9, L_11))))));
		V_0 = ((float)L_12);
		goto IL_0034;
	}

IL_0034:
	{
		float L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Division_mD7200D6D432BAFC4135C5B17A0B0A812203B0270_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)(L_1/L_2)), ((float)(L_4/L_5)), ((float)(L_7/L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 Color_op_Implicit_m6D1353534AD23E43DFD104850D55C469CFCEF340_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___c0, const RuntimeMethod* method) 
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_0 = ___c0;
		float L_1 = L_0.___r_0;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_2 = ___c0;
		float L_3 = L_2.___g_1;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4 = ___c0;
		float L_5 = L_4.___b_2;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6 = ___c0;
		float L_7 = L_6.___a_3;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector4__ctor_m96B2CD8B862B271F513AF0BDC2EABD58E4DBC813_inline((&L_8), L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		V_0 = L_8;
		goto IL_0021;
	}

IL_0021:
	{
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = V_0;
		return L_9;
	}
}
