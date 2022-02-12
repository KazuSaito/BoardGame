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
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04;
// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
// System.Action`1<System.TimeSpan>
struct Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0;
// System.Collections.Generic.IEnumerable`1<System.IObservable`1<UniRx.Unit>>
struct IEnumerable_1_t25C8FA1E41AB4E587F068D3F4EB8B002F780D4E9;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Bounds>
struct IEqualityComparer_1_t06C346ACFCD6FA7B6357E6392FA8842A209C66E7;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.BoundsInt>
struct IEqualityComparer_1_t2EDEDBAF19E8BF7F3EA065CC1D0D3578B4A90052;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color>
struct IEqualityComparer_1_t77537F328C44F595A172667E303D57CCA306F54D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color32>
struct IEqualityComparer_1_tE5166E96F3B07686A8D0875FE3BF15DC56FED779;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Quaternion>
struct IEqualityComparer_1_tC69064DA61A5BCF7B3EA5F0B53979229260D3DCB;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RangeInt>
struct IEqualityComparer_1_t7E98D8AD41D5E0E35D1CFF51C260ABD2A500B2F3;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rect>
struct IEqualityComparer_1_tFC2ABE854EE94E6C4917178A3A4652222F165E32;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RectInt>
struct IEqualityComparer_1_tDC8906B8491813B2FB353E856B89603200C3255B;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2>
struct IEqualityComparer_1_t1FADF29047F4FD7955E0951D880F1D3D8CBDD4B1;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2Int>
struct IEqualityComparer_1_t4275A3D7B86C2D3C66842AB0700881FB24837F2D;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3>
struct IEqualityComparer_1_t9E98CD5E012FAD3C745699045489B5B858B1B8B5;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3Int>
struct IEqualityComparer_1_tC53A6B5E00FD0034DDB9D7A2B505C1E784820A60;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector4>
struct IEqualityComparer_1_t5442E8A434F2EE43566F33724D3E6C43B4737A72;
// System.Collections.Generic.IList`1<System.IObservable`1<UniRx.Unit>>
struct IList_1_t50B47A97ACEE5B91925F179D5DDEAB384C4D805E;
// System.IObservable`1<UniRx.Unit>
struct IObservable_1_t95AC8938B356E94091965C25519C450D0E4D5C1D;
// System.IObserver`1<System.Int64>
struct IObserver_1_t150CBC5D0737F019A8BCF90DAF9977A37A0C0D65;
// System.IObserver`1<UniRx.Unit>
struct IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D;
// System.Collections.Generic.List`1<System.IObservable`1<UniRx.Unit>>
struct List_1_t32940ADDAAB3E75079072445899D64FAF15C7422;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UniRx.Operators.OperatorObservableBase`1<UniRx.Unit>
struct OperatorObservableBase_1_t51CFC516BA0D1E0BDC4B1FDEEDE25AFD7E5BC583;
// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>
struct OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A;
// UniRx.InternalUtil.PriorityQueue`1<System.Object>
struct PriorityQueue_1_tB5C3FDE5387CD918370700FB7E5B6A76F0494FE8;
// UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem>
struct PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B;
// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA;
// System.Collections.Generic.Queue`1<System.Collections.IEnumerator>
struct Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D;
// System.IObservable`1<UniRx.Unit>[]
struct IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92;
// UniRx.InternalUtil.PriorityQueue`1/IndexedItem<UniRx.InternalUtil.ScheduledItem>[]
struct IndexedItemU5BU5D_tB3E230DBD131BD9DBAAF0EFD4164ADE1DD52091D;
// System.Action[]
struct ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
// System.Collections.IEnumerator[]
struct IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// UniRx.InternalUtil.AsyncLock
struct AsyncLock_t278F618332A769D654B1CCDBF498473CA86A0C57;
// UniRx.Operators.BatchFrameObservable
struct BatchFrameObservable_t952DD3274EB407BB0AD38C38F2880C1CEA2541A6;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UniRx.BooleanDisposable
struct BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// System.Exception
struct Exception_t;
// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757;
// UniRx.ICancelable
struct ICancelable_tB1DEE5D3AD44B45D562C30F81A032B6CDF33DCF4;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.IDisposable
struct IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UniRx.IScheduler
struct IScheduler_tD5E41BD235F3D8C9823189F010EAC045234D1472;
// UniRx.ISchedulerPeriodic
struct ISchedulerPeriodic_tDFE7AC96FCDB0031197468F1A907459B6017D351;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UniRx.InternalUtil.MicroCoroutine
struct MicroCoroutine_tE1DECE6357A777B3900C660395C67F07D908CABE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UniRx.InternalUtil.ScheduledItem
struct ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063;
// UniRx.InternalUtil.SchedulerQueue
struct SchedulerQueue_t094B7C6EF6ECE32C389F9D403CA8A46CACFBD5B6;
// UniRx.SerialDisposable
struct SerialDisposable_tFD88EABD9B21586EFDE63B2A991209DD99EA0FED;
// System.String
struct String_t;
// UniRx.InternalUtil.ThreadSafeQueueWorker
struct ThreadSafeQueueWorker_t114D0BEE5703E6CB69A8EB7EEC61694014E63DC8;
// UniRx.Operators.TimerObservable
struct TimerObservable_tFC9F3D09116B8F2C45E6AAB81F24BCAE8E4BC434;
// System.Type
struct Type_t;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UniRx.Operators.WhenAllObservable
struct WhenAllObservable_tCB0F75CDA54E0BEF3F030450490C694F07868A80;
// UniRx.Operators.BatchFrameObservable/BatchFrame
struct BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598;
// UniRx.Operators.TimerObservable/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t10AC0BBB9CA57F24E8B2F3EE42EF463C52737A14;
// UniRx.Operators.TimerObservable/<>c__DisplayClass6_1
struct U3CU3Ec__DisplayClass6_1_tB24396E0A7AC6004734C3333B40F5BC273C52DC0;
// UniRx.Operators.TimerObservable/<>c__DisplayClass6_2
struct U3CU3Ec__DisplayClass6_2_t5D385B077587B9026FC3115CC864501A85D6C312;
// UniRx.Operators.TimerObservable/<>c__DisplayClass6_3
struct U3CU3Ec__DisplayClass6_3_t4AD067CA41967CDF19EA52A1F04E17BAA2DFB506;
// UniRx.Operators.TimerObservable/Timer
struct Timer_tF6B9F547470A20E938BB1C950D018FAB678541F8;
// UniRx.InternalUtil.UnityEqualityComparer/BoundsEqualityComparer
struct BoundsEqualityComparer_tFFCDAF589F6567389D67E168D1432A00EA6063C7;
// UniRx.InternalUtil.UnityEqualityComparer/BoundsIntEqualityComparer
struct BoundsIntEqualityComparer_t4D378351E9CB9D58FD9D33B3A13AD8B3BD885FF5;
// UniRx.InternalUtil.UnityEqualityComparer/Color32EqualityComparer
struct Color32EqualityComparer_tF481F53C6D57185906B56DB32F115E723D9FD17F;
// UniRx.InternalUtil.UnityEqualityComparer/ColorEqualityComparer
struct ColorEqualityComparer_tE7223C3645092370232DDB7844DFF1E71E6DE80C;
// UniRx.InternalUtil.UnityEqualityComparer/QuaternionEqualityComparer
struct QuaternionEqualityComparer_t9276C865A991E56BE7720852A8B9C09A2C99F058;
// UniRx.InternalUtil.UnityEqualityComparer/RangeIntEqualityComparer
struct RangeIntEqualityComparer_t997DC4CA104E5A0C3ED9145833AB95E92FFC6DA2;
// UniRx.InternalUtil.UnityEqualityComparer/RectEqualityComparer
struct RectEqualityComparer_t9331F4C293F191F8C18919C69977D6D7B80117EF;
// UniRx.InternalUtil.UnityEqualityComparer/RectIntEqualityComparer
struct RectIntEqualityComparer_tFEE613741FA8D04BB0465668F1FB8295CB67D6C6;
// UniRx.InternalUtil.UnityEqualityComparer/Vector2EqualityComparer
struct Vector2EqualityComparer_t1EC84190716D16D2D1C05674BDFCE8668A354CCA;
// UniRx.InternalUtil.UnityEqualityComparer/Vector2IntEqualityComparer
struct Vector2IntEqualityComparer_t63BB73598D8CB38DC89F95A4DB44070CF719EEE1;
// UniRx.InternalUtil.UnityEqualityComparer/Vector3EqualityComparer
struct Vector3EqualityComparer_t62745961D07F32BA87D84CE7249B1CD02B741928;
// UniRx.InternalUtil.UnityEqualityComparer/Vector3IntEqualityComparer
struct Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95;
// UniRx.InternalUtil.UnityEqualityComparer/Vector4EqualityComparer
struct Vector4EqualityComparer_tDE47F0BC52A78378EF4AE3751A6E5D388EDEA074;
// UniRx.Operators.WhenAllObservable/WhenAll
struct WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4;
// UniRx.Operators.WhenAllObservable/WhenAll_
struct WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B;
// UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator
struct ReusableEnumerator_tE9E2B18103FC7FCECA3BD546453279E539069EC4;
// UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver
struct WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E;
// UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver
struct WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83;

IL2CPP_EXTERN_C RuntimeClass* Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundsEqualityComparer_tFFCDAF589F6567389D67E168D1432A00EA6063C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* BoundsIntEqualityComparer_t4D378351E9CB9D58FD9D33B3A13AD8B3BD885FF5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Color32EqualityComparer_tF481F53C6D57185906B56DB32F115E723D9FD17F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ColorEqualityComparer_tE7223C3645092370232DDB7844DFF1E71E6DE80C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_1_t220393D5614942F32FEF1457F78C0C1460641172_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_1_t50B47A97ACEE5B91925F179D5DDEAB384C4D805E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObservable_1_t95AC8938B356E94091965C25519C450D0E4D5C1D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISchedulerPeriodic_tDFE7AC96FCDB0031197468F1A907459B6017D351_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t32940ADDAAB3E75079072445899D64FAF15C7422_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuaternionEqualityComparer_t9276C865A991E56BE7720852A8B9C09A2C99F058_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RangeIntEqualityComparer_t997DC4CA104E5A0C3ED9145833AB95E92FFC6DA2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectEqualityComparer_t9331F4C293F191F8C18919C69977D6D7B80117EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RectIntEqualityComparer_tFEE613741FA8D04BB0465668F1FB8295CB67D6C6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ReusableEnumerator_tE9E2B18103FC7FCECA3BD546453279E539069EC4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Scheduler_tCEE0A5C10B3A02C13F0712A251E6E88A5350736D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2EqualityComparer_t1EC84190716D16D2D1C05674BDFCE8668A354CCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector2IntEqualityComparer_t63BB73598D8CB38DC89F95A4DB44070CF719EEE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3EqualityComparer_t62745961D07F32BA87D84CE7249B1CD02B741928_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector4EqualityComparer_tDE47F0BC52A78378EF4AE3751A6E5D388EDEA074_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Resize_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m168FDF87AE7948888578F24BA2E7B1FD0A2A9587_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* AsyncLock_Wait_m57B7012ED80CD3C497DCEAE43AA20C519D62244B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ExceptionExtensions_Throw_mB364F2897D89DE7932628B5FA8429C4591FEF544_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mBCF1B489A5A6741F94C62082229AB684D0AF5863_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicroCoroutine_AddCoroutine_m56D30BC08D307E41E60066DD93232BCE7F242078_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MicroCoroutine_Run_m398649C00025DF88A1BAEDA44BACBF7616E5717F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* OptimizedObservableExtensions_IsRequiredSubscribeOnCurrentThread_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m5986BF2304525FF7B540108090FCE56242677CB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Dequeue_mFB1B40E73026C1283ABA96FFE6072C08848A0D99_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Enqueue_mC32BFF636AEEF3542EFD46F32B95D2D918D8301A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Peek_m7D1628BB82B3D6FAFC256BCA6041DE8FC2C90711_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_Remove_m192F3BACD0D506F06B8BA0E367D72DE1F939BC8A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1__ctor_m06AFE26E845AAD29AD18C8549DF2A26ECE0B4452_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* PriorityQueue_1_get_Count_m3D5B2167CCE7C6050B163B798BCF5531E52D49E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Clear_mF64267E0006F20E5E3029290482ABD8CDF9ADD5F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m0D5593D465771C71DE4D8BE668605D1C9CB23887_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m6316FBF2D6918C5F8CE698B35B7992F72506F58D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mDF0106C71BB6BCAC2C40E9C9885FFFFE66D938B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m5E8F5A35E986F1667C97722F3FB70B4E505AC818_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SchedulerQueue__ctor_m87BF7A69EF09192649F9501174504CE80E803F4C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Timer_OnNext_m414F1266E26E31A86D3617D3B7C9135D5D0BC544_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D;
struct IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92;
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE;
struct IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.List`1<System.IObservable`1<UniRx.Unit>>
struct List_1_t32940ADDAAB3E75079072445899D64FAF15C7422  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t32940ADDAAB3E75079072445899D64FAF15C7422_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* ___s_emptyArray_5;
};

// UniRx.Operators.OperatorObservableBase`1<System.Int64>
struct OperatorObservableBase_1_t0FEC538ABBB26643FEEE460364858773B96607BA  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObservableBase`1<UniRx.Unit>
struct OperatorObservableBase_1_t51CFC516BA0D1E0BDC4B1FDEEDE25AFD7E5BC583  : public RuntimeObject
{
	// System.Boolean UniRx.Operators.OperatorObservableBase`1::isRequiredSubscribeOnCurrentThread
	bool ___isRequiredSubscribeOnCurrentThread_0;
};

// UniRx.Operators.OperatorObserverBase`2<System.Int64,System.Int64>
struct OperatorObserverBase_2_tAC24C94961DAF9DB81AC64DAC13ACE27597B4420  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>
struct OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A  : public RuntimeObject
{
	// System.IObserver`1<TResult> modreq(System.Runtime.CompilerServices.IsVolatile) UniRx.Operators.OperatorObserverBase`2::observer
	RuntimeObject* ___observer_0;
	// System.IDisposable UniRx.Operators.OperatorObserverBase`2::cancel
	RuntimeObject* ___cancel_1;
};

// UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem>
struct PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B  : public RuntimeObject
{
	// UniRx.InternalUtil.PriorityQueue`1/IndexedItem<T>[] UniRx.InternalUtil.PriorityQueue`1::_items
	IndexedItemU5BU5D_tB3E230DBD131BD9DBAAF0EFD4164ADE1DD52091D* ____items_1;
	// System.Int32 UniRx.InternalUtil.PriorityQueue`1::_size
	int32_t ____size_2;
};

struct PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B_StaticFields
{
	// System.Int64 UniRx.InternalUtil.PriorityQueue`1::_count
	int64_t ____count_0;
};

// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ActionU5BU5D_tF6161335A0A12A221AB081D78725C8AB6FE506D2* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Collections.IEnumerator>
struct Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};
struct Il2CppArrayBounds;

// UniRx.InternalUtil.AsyncLock
struct AsyncLock_t278F618332A769D654B1CCDBF498473CA86A0C57  : public RuntimeObject
{
	// System.Collections.Generic.Queue`1<System.Action> UniRx.InternalUtil.AsyncLock::queue
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* ___queue_0;
	// System.Boolean UniRx.InternalUtil.AsyncLock::isAcquired
	bool ___isAcquired_1;
	// System.Boolean UniRx.InternalUtil.AsyncLock::hasFaulted
	bool ___hasFaulted_2;
};

// UniRx.BooleanDisposable
struct BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98  : public RuntimeObject
{
	// System.Boolean UniRx.BooleanDisposable::<IsDisposed>k__BackingField
	bool ___U3CIsDisposedU3Ek__BackingField_0;
};

// UniRx.Disposable
struct Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3  : public RuntimeObject
{
};

struct Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_StaticFields
{
	// System.IDisposable UniRx.Disposable::Empty
	RuntimeObject* ___Empty_0;
};

// System.Runtime.ExceptionServices.ExceptionDispatchInfo
struct ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757  : public RuntimeObject
{
	// System.Exception System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_Exception
	Exception_t* ___m_Exception_0;
	// System.Object System.Runtime.ExceptionServices.ExceptionDispatchInfo::m_stackTrace
	RuntimeObject* ___m_stackTrace_1;
};

// UniRx.InternalUtil.ExceptionExtensions
struct ExceptionExtensions_t46FF8BC640FE05EA4CF9D7EBA56363D13087FBC2  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// UniRx.InternalUtil.MicroCoroutine
struct MicroCoroutine_tE1DECE6357A777B3900C660395C67F07D908CABE  : public RuntimeObject
{
	// System.Object UniRx.InternalUtil.MicroCoroutine::runningAndQueueLock
	RuntimeObject* ___runningAndQueueLock_1;
	// System.Object UniRx.InternalUtil.MicroCoroutine::arrayLock
	RuntimeObject* ___arrayLock_2;
	// System.Action`1<System.Exception> UniRx.InternalUtil.MicroCoroutine::unhandledExceptionCallback
	Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___unhandledExceptionCallback_3;
	// System.Int32 UniRx.InternalUtil.MicroCoroutine::tail
	int32_t ___tail_4;
	// System.Boolean UniRx.InternalUtil.MicroCoroutine::running
	bool ___running_5;
	// System.Collections.IEnumerator[] UniRx.InternalUtil.MicroCoroutine::coroutines
	IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* ___coroutines_6;
	// System.Collections.Generic.Queue`1<System.Collections.IEnumerator> UniRx.InternalUtil.MicroCoroutine::waitQueue
	Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64* ___waitQueue_7;
};

// UniRx.InternalUtil.PromiseHelper
struct PromiseHelper_tEE684ED2FFC5966DCDE67F750A20E1F272F622DF  : public RuntimeObject
{
};

// UniRx.InternalUtil.SchedulerQueue
struct SchedulerQueue_t094B7C6EF6ECE32C389F9D403CA8A46CACFBD5B6  : public RuntimeObject
{
	// UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem> UniRx.InternalUtil.SchedulerQueue::_queue
	PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* ____queue_0;
};

// UniRx.SerialDisposable
struct SerialDisposable_tFD88EABD9B21586EFDE63B2A991209DD99EA0FED  : public RuntimeObject
{
	// System.Object UniRx.SerialDisposable::gate
	RuntimeObject* ___gate_0;
	// System.IDisposable UniRx.SerialDisposable::current
	RuntimeObject* ___current_1;
	// System.Boolean UniRx.SerialDisposable::disposed
	bool ___disposed_2;
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

// UniRx.InternalUtil.ThreadSafeQueueWorker
struct ThreadSafeQueueWorker_t114D0BEE5703E6CB69A8EB7EEC61694014E63DC8  : public RuntimeObject
{
	// System.Object UniRx.InternalUtil.ThreadSafeQueueWorker::gate
	RuntimeObject* ___gate_2;
	// System.Boolean UniRx.InternalUtil.ThreadSafeQueueWorker::dequing
	bool ___dequing_3;
	// System.Int32 UniRx.InternalUtil.ThreadSafeQueueWorker::actionListCount
	int32_t ___actionListCount_4;
	// System.Action`1<System.Object>[] UniRx.InternalUtil.ThreadSafeQueueWorker::actionList
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* ___actionList_5;
	// System.Object[] UniRx.InternalUtil.ThreadSafeQueueWorker::actionStates
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___actionStates_6;
	// System.Int32 UniRx.InternalUtil.ThreadSafeQueueWorker::waitingListCount
	int32_t ___waitingListCount_7;
	// System.Action`1<System.Object>[] UniRx.InternalUtil.ThreadSafeQueueWorker::waitingList
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* ___waitingList_8;
	// System.Object[] UniRx.InternalUtil.ThreadSafeQueueWorker::waitingStates
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___waitingStates_9;
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

// UniRx.Operators.TimerObservable/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_t10AC0BBB9CA57F24E8B2F3EE42EF463C52737A14  : public RuntimeObject
{
	// UniRx.Operators.TimerObservable/Timer UniRx.Operators.TimerObservable/<>c__DisplayClass6_0::timerObserver
	Timer_tF6B9F547470A20E938BB1C950D018FAB678541F8* ___timerObserver_0;
	// UniRx.Operators.TimerObservable UniRx.Operators.TimerObservable/<>c__DisplayClass6_0::<>4__this
	TimerObservable_tFC9F3D09116B8F2C45E6AAB81F24BCAE8E4BC434* ___U3CU3E4__this_1;
};

// UniRx.Operators.TimerObservable/<>c__DisplayClass6_1
struct U3CU3Ec__DisplayClass6_1_tB24396E0A7AC6004734C3333B40F5BC273C52DC0  : public RuntimeObject
{
	// UniRx.ISchedulerPeriodic UniRx.Operators.TimerObservable/<>c__DisplayClass6_1::periodicScheduler
	RuntimeObject* ___periodicScheduler_0;
	// UniRx.Operators.TimerObservable/<>c__DisplayClass6_0 UniRx.Operators.TimerObservable/<>c__DisplayClass6_1::CS$<>8__locals1
	U3CU3Ec__DisplayClass6_0_t10AC0BBB9CA57F24E8B2F3EE42EF463C52737A14* ___CSU24U3CU3E8__locals1_1;
};

// UniRx.Operators.TimerObservable/<>c__DisplayClass6_2
struct U3CU3Ec__DisplayClass6_2_t5D385B077587B9026FC3115CC864501A85D6C312  : public RuntimeObject
{
	// UniRx.SerialDisposable UniRx.Operators.TimerObservable/<>c__DisplayClass6_2::disposable
	SerialDisposable_tFD88EABD9B21586EFDE63B2A991209DD99EA0FED* ___disposable_0;
	// UniRx.Operators.TimerObservable/<>c__DisplayClass6_1 UniRx.Operators.TimerObservable/<>c__DisplayClass6_2::CS$<>8__locals2
	U3CU3Ec__DisplayClass6_1_tB24396E0A7AC6004734C3333B40F5BC273C52DC0* ___CSU24U3CU3E8__locals2_1;
};

// UniRx.InternalUtil.UnityEqualityComparer/BoundsEqualityComparer
struct BoundsEqualityComparer_tFFCDAF589F6567389D67E168D1432A00EA6063C7  : public RuntimeObject
{
};

// UniRx.InternalUtil.UnityEqualityComparer/BoundsIntEqualityComparer
struct BoundsIntEqualityComparer_t4D378351E9CB9D58FD9D33B3A13AD8B3BD885FF5  : public RuntimeObject
{
};

// UniRx.InternalUtil.UnityEqualityComparer/Color32EqualityComparer
struct Color32EqualityComparer_tF481F53C6D57185906B56DB32F115E723D9FD17F  : public RuntimeObject
{
};

// UniRx.InternalUtil.UnityEqualityComparer/ColorEqualityComparer
struct ColorEqualityComparer_tE7223C3645092370232DDB7844DFF1E71E6DE80C  : public RuntimeObject
{
};

// UniRx.InternalUtil.UnityEqualityComparer/QuaternionEqualityComparer
struct QuaternionEqualityComparer_t9276C865A991E56BE7720852A8B9C09A2C99F058  : public RuntimeObject
{
};

// UniRx.InternalUtil.UnityEqualityComparer/RangeIntEqualityComparer
struct RangeIntEqualityComparer_t997DC4CA104E5A0C3ED9145833AB95E92FFC6DA2  : public RuntimeObject
{
};

// UniRx.InternalUtil.UnityEqualityComparer/RectEqualityComparer
struct RectEqualityComparer_t9331F4C293F191F8C18919C69977D6D7B80117EF  : public RuntimeObject
{
};

// UniRx.InternalUtil.UnityEqualityComparer/RectIntEqualityComparer
struct RectIntEqualityComparer_tFEE613741FA8D04BB0465668F1FB8295CB67D6C6  : public RuntimeObject
{
};

// UniRx.InternalUtil.UnityEqualityComparer/Vector2EqualityComparer
struct Vector2EqualityComparer_t1EC84190716D16D2D1C05674BDFCE8668A354CCA  : public RuntimeObject
{
};

// UniRx.InternalUtil.UnityEqualityComparer/Vector2IntEqualityComparer
struct Vector2IntEqualityComparer_t63BB73598D8CB38DC89F95A4DB44070CF719EEE1  : public RuntimeObject
{
};

// UniRx.InternalUtil.UnityEqualityComparer/Vector3EqualityComparer
struct Vector3EqualityComparer_t62745961D07F32BA87D84CE7249B1CD02B741928  : public RuntimeObject
{
};

// UniRx.InternalUtil.UnityEqualityComparer/Vector3IntEqualityComparer
struct Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95  : public RuntimeObject
{
};

struct Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_StaticFields
{
	// UniRx.InternalUtil.UnityEqualityComparer/Vector3IntEqualityComparer UniRx.InternalUtil.UnityEqualityComparer/Vector3IntEqualityComparer::Default
	Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* ___Default_0;
};

// UniRx.InternalUtil.UnityEqualityComparer/Vector4EqualityComparer
struct Vector4EqualityComparer_tDE47F0BC52A78378EF4AE3751A6E5D388EDEA074  : public RuntimeObject
{
};

// UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator
struct ReusableEnumerator_tE9E2B18103FC7FCECA3BD546453279E539069EC4  : public RuntimeObject
{
	// UniRx.Operators.BatchFrameObservable/BatchFrame UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::parent
	BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* ___parent_0;
	// System.Int32 UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::currentFrame
	int32_t ___currentFrame_1;
};

// UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver
struct WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E  : public RuntimeObject
{
	// UniRx.Operators.WhenAllObservable/WhenAll UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::parent
	WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* ___parent_0;
	// System.Boolean UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::isCompleted
	bool ___isCompleted_1;
};

// UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver
struct WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83  : public RuntimeObject
{
	// UniRx.Operators.WhenAllObservable/WhenAll_ UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::parent
	WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* ___parent_0;
	// System.Boolean UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::isCompleted
	bool ___isCompleted_1;
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

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
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

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
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

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// UnityEngine.RangeInt
struct RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 
{
	// System.Int32 UnityEngine.RangeInt::start
	int32_t ___start_0;
	// System.Int32 UnityEngine.RangeInt::length
	int32_t ___length_1;
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

// UnityEngine.RectInt
struct RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 
{
	// System.Int32 UnityEngine.RectInt::m_XMin
	int32_t ___m_XMin_0;
	// System.Int32 UnityEngine.RectInt::m_YMin
	int32_t ___m_YMin_1;
	// System.Int32 UnityEngine.RectInt::m_Width
	int32_t ___m_Width_2;
	// System.Int32 UnityEngine.RectInt::m_Height
	int32_t ___m_Height_3;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// UniRx.Unit
struct Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 
{
	union
	{
		struct
		{
		};
		uint8_t Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662__padding[1];
	};
};

struct Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_StaticFields
{
	// UniRx.Unit UniRx.Unit::default
	Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___default_0;
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

// UnityEngine.Vector3Int
struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 
{
	// System.Int32 UnityEngine.Vector3Int::m_X
	int32_t ___m_X_0;
	// System.Int32 UnityEngine.Vector3Int::m_Y
	int32_t ___m_Y_1;
	// System.Int32 UnityEngine.Vector3Int::m_Z
	int32_t ___m_Z_2;
};

struct Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_StaticFields
{
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Zero
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Zero_3;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_One
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_One_4;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Up
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Up_5;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Down
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Down_6;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Left
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Left_7;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Right
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Right_8;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Forward
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Forward_9;
	// UnityEngine.Vector3Int UnityEngine.Vector3Int::s_Back
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___s_Back_10;
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

// UniRx.Operators.WhenAllObservable
struct WhenAllObservable_tCB0F75CDA54E0BEF3F030450490C694F07868A80  : public OperatorObservableBase_1_t51CFC516BA0D1E0BDC4B1FDEEDE25AFD7E5BC583
{
	// System.IObservable`1<UniRx.Unit>[] UniRx.Operators.WhenAllObservable::sources
	IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* ___sources_1;
	// System.Collections.Generic.IEnumerable`1<System.IObservable`1<UniRx.Unit>> UniRx.Operators.WhenAllObservable::sourcesEnumerable
	RuntimeObject* ___sourcesEnumerable_2;
};

// UniRx.Operators.BatchFrameObservable/BatchFrame
struct BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598  : public OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A
{
	// UniRx.Operators.BatchFrameObservable UniRx.Operators.BatchFrameObservable/BatchFrame::parent
	BatchFrameObservable_t952DD3274EB407BB0AD38C38F2880C1CEA2541A6* ___parent_2;
	// System.Object UniRx.Operators.BatchFrameObservable/BatchFrame::gate
	RuntimeObject* ___gate_3;
	// UniRx.BooleanDisposable UniRx.Operators.BatchFrameObservable/BatchFrame::cancellationToken
	BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98* ___cancellationToken_4;
	// System.Collections.IEnumerator UniRx.Operators.BatchFrameObservable/BatchFrame::timer
	RuntimeObject* ___timer_5;
	// System.Boolean UniRx.Operators.BatchFrameObservable/BatchFrame::isRunning
	bool ___isRunning_6;
	// System.Boolean UniRx.Operators.BatchFrameObservable/BatchFrame::isCompleted
	bool ___isCompleted_7;
};

// UniRx.Operators.TimerObservable/Timer
struct Timer_tF6B9F547470A20E938BB1C950D018FAB678541F8  : public OperatorObserverBase_2_tAC24C94961DAF9DB81AC64DAC13ACE27597B4420
{
	// System.Int64 UniRx.Operators.TimerObservable/Timer::index
	int64_t ___index_2;
};

// UniRx.Operators.WhenAllObservable/WhenAll
struct WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4  : public OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A
{
	// System.IObservable`1<UniRx.Unit>[] UniRx.Operators.WhenAllObservable/WhenAll::sources
	IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* ___sources_2;
	// System.Object UniRx.Operators.WhenAllObservable/WhenAll::gate
	RuntimeObject* ___gate_3;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll::completedCount
	int32_t ___completedCount_4;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll::length
	int32_t ___length_5;
};

// UniRx.Operators.WhenAllObservable/WhenAll_
struct WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B  : public OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A
{
	// System.Collections.Generic.IList`1<System.IObservable`1<UniRx.Unit>> UniRx.Operators.WhenAllObservable/WhenAll_::sources
	RuntimeObject* ___sources_2;
	// System.Object UniRx.Operators.WhenAllObservable/WhenAll_::gate
	RuntimeObject* ___gate_3;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll_::completedCount
	int32_t ___completedCount_4;
	// System.Int32 UniRx.Operators.WhenAllObservable/WhenAll_::length
	int32_t ___length_5;
};

// System.Nullable`1<System.TimeSpan>
struct Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value_1;
};

// System.Reflection.BindingFlags
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;
};

// UnityEngine.Bounds
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Center
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center_0;
	// UnityEngine.Vector3 UnityEngine.Bounds::m_Extents
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents_1;
};

// UnityEngine.BoundsInt
struct BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 
{
	// UnityEngine.Vector3Int UnityEngine.BoundsInt::m_Position
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Position_0;
	// UnityEngine.Vector3Int UnityEngine.BoundsInt::m_Size
	Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___m_Size_1;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
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

// UniRx.FrameCountType
struct FrameCountType_tA7DB723FA5B5EFA552BA26CCB94B224E7F6E76E8 
{
	// System.Int32 UniRx.FrameCountType::value__
	int32_t ___value___2;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// UniRx.InternalUtil.ScheduledItem
struct ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063  : public RuntimeObject
{
	// UniRx.BooleanDisposable UniRx.InternalUtil.ScheduledItem::_disposable
	BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98* ____disposable_0;
	// System.TimeSpan UniRx.InternalUtil.ScheduledItem::_dueTime
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ____dueTime_1;
	// System.Action UniRx.InternalUtil.ScheduledItem::_action
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ____action_2;
};

// UniRx.Operators.TimerObservable/<>c__DisplayClass6_3
struct U3CU3Ec__DisplayClass6_3_t4AD067CA41967CDF19EA52A1F04E17BAA2DFB506  : public RuntimeObject
{
	// System.TimeSpan UniRx.Operators.TimerObservable/<>c__DisplayClass6_3::timeP
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeP_0;
	// UniRx.Operators.TimerObservable/<>c__DisplayClass6_1 UniRx.Operators.TimerObservable/<>c__DisplayClass6_3::CS$<>8__locals3
	U3CU3Ec__DisplayClass6_1_tB24396E0A7AC6004734C3333B40F5BC273C52DC0* ___CSU24U3CU3E8__locals3_1;
};

// System.Nullable`1<System.DateTimeOffset>
struct Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___value_1;
};

// UniRx.Operators.BatchFrameObservable
struct BatchFrameObservable_t952DD3274EB407BB0AD38C38F2880C1CEA2541A6  : public OperatorObservableBase_1_t51CFC516BA0D1E0BDC4B1FDEEDE25AFD7E5BC583
{
	// System.IObservable`1<UniRx.Unit> UniRx.Operators.BatchFrameObservable::source
	RuntimeObject* ___source_1;
	// System.Int32 UniRx.Operators.BatchFrameObservable::frameCount
	int32_t ___frameCount_2;
	// UniRx.FrameCountType UniRx.Operators.BatchFrameObservable::frameCountType
	int32_t ___frameCountType_3;
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

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
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

// UniRx.InternalUtil.UnityEqualityComparer
struct UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351  : public RuntimeObject
{
};

struct UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields
{
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2> UniRx.InternalUtil.UnityEqualityComparer::Vector2
	RuntimeObject* ___Vector2_0;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3> UniRx.InternalUtil.UnityEqualityComparer::Vector3
	RuntimeObject* ___Vector3_1;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector4> UniRx.InternalUtil.UnityEqualityComparer::Vector4
	RuntimeObject* ___Vector4_2;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color> UniRx.InternalUtil.UnityEqualityComparer::Color
	RuntimeObject* ___Color_3;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Color32> UniRx.InternalUtil.UnityEqualityComparer::Color32
	RuntimeObject* ___Color32_4;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Rect> UniRx.InternalUtil.UnityEqualityComparer::Rect
	RuntimeObject* ___Rect_5;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Bounds> UniRx.InternalUtil.UnityEqualityComparer::Bounds
	RuntimeObject* ___Bounds_6;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Quaternion> UniRx.InternalUtil.UnityEqualityComparer::Quaternion
	RuntimeObject* ___Quaternion_7;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::vector2Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector2Type_8;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::vector3Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector3Type_9;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::vector4Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector4Type_10;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::colorType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___colorType_11;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::color32Type
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___color32Type_12;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::rectType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rectType_13;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::boundsType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___boundsType_14;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::quaternionType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___quaternionType_15;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector2Int> UniRx.InternalUtil.UnityEqualityComparer::Vector2Int
	RuntimeObject* ___Vector2Int_16;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Vector3Int> UniRx.InternalUtil.UnityEqualityComparer::Vector3Int
	RuntimeObject* ___Vector3Int_17;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RangeInt> UniRx.InternalUtil.UnityEqualityComparer::RangeInt
	RuntimeObject* ___RangeInt_18;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.RectInt> UniRx.InternalUtil.UnityEqualityComparer::RectInt
	RuntimeObject* ___RectInt_19;
	// System.Collections.Generic.IEqualityComparer`1<UnityEngine.BoundsInt> UniRx.InternalUtil.UnityEqualityComparer::BoundsInt
	RuntimeObject* ___BoundsInt_20;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::vector2IntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector2IntType_21;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::vector3IntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___vector3IntType_22;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::rangeIntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rangeIntType_23;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::rectIntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___rectIntType_24;
	// System.RuntimeTypeHandle UniRx.InternalUtil.UnityEqualityComparer::boundsIntType
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___boundsIntType_25;
};

// System.Action`1<System.Exception>
struct Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04  : public MulticastDelegate_t
{
};

// System.Action`1<System.Object>
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};

// System.Action`1<System.TimeSpan>
struct Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0  : public MulticastDelegate_t
{
};

// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07  : public MulticastDelegate_t
{
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UniRx.Operators.TimerObservable
struct TimerObservable_tFC9F3D09116B8F2C45E6AAB81F24BCAE8E4BC434  : public OperatorObservableBase_1_t0FEC538ABBB26643FEEE460364858773B96607BA
{
	// System.Nullable`1<System.DateTimeOffset> UniRx.Operators.TimerObservable::dueTimeA
	Nullable_1_t5127ABE6809BA32727C69CB2E076B28D676EB15B ___dueTimeA_1;
	// System.Nullable`1<System.TimeSpan> UniRx.Operators.TimerObservable::dueTimeB
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___dueTimeB_2;
	// System.Nullable`1<System.TimeSpan> UniRx.Operators.TimerObservable::period
	Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272 ___period_3;
	// UniRx.IScheduler UniRx.Operators.TimerObservable::scheduler
	RuntimeObject* ___scheduler_4;
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.IObservable`1<UniRx.Unit>[]
struct IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92  : public RuntimeArray
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
// System.IDisposable[]
struct IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE  : public RuntimeArray
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
// System.Collections.IEnumerator[]
struct IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A  : public RuntimeArray
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
// System.Action`1<System.Object>[]
struct Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D  : public RuntimeArray
{
	ALIGN_FIELD (8) Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* m_Items[1];

	inline Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// T System.Nullable`1<System.TimeSpan>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_gshared (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.TimeSpan>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m9D57A362365E6B308CA2F172DE995A7DE5EA5CE7_gshared_inline (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___obj0, const RuntimeMethod* method) ;
// System.Void UniRx.Operators.OperatorObservableBase`1<UniRx.Unit>::.ctor(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94_gshared (OperatorObservableBase_1_t51CFC516BA0D1E0BDC4B1FDEEDE25AFD7E5BC583* __this, bool ___isRequiredSubscribeOnCurrentThread0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::.ctor(System.IObserver`1<TResult>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07_gshared (OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) ;
// System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_gshared (OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A* __this, const RuntimeMethod* method) ;
// System.Boolean UniRx.OptimizedObservableExtensions::IsRequiredSubscribeOnCurrentThread<UniRx.Unit>(System.IObservable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OptimizedObservableExtensions_IsRequiredSubscribeOnCurrentThread_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m5986BF2304525FF7B540108090FCE56242677CB8_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Void System.Array::Resize<System.Object>(T[]&,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___array0, int32_t ___newSize1, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.PriorityQueue`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1__ctor_m94F92EDE0CDAD68EB49192EADF9F92D069F95309_gshared (PriorityQueue_1_tB5C3FDE5387CD918370700FB7E5B6A76F0494FE8* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Int32 UniRx.InternalUtil.PriorityQueue`1<System.Object>::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PriorityQueue_1_get_Count_m8A005E7A936DDD7D3EACBC6AF357854B542707C7_gshared (PriorityQueue_1_tB5C3FDE5387CD918370700FB7E5B6A76F0494FE8* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.PriorityQueue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_1_Enqueue_mDB7266FE445A2464D1C6CDFC2D5D6B16EED1FCAB_gshared (PriorityQueue_1_tB5C3FDE5387CD918370700FB7E5B6A76F0494FE8* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean UniRx.InternalUtil.PriorityQueue`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PriorityQueue_1_Remove_m78B0468B5DE5FB4DC6A11FD0A3CBCE2293CE2A0E_gshared (PriorityQueue_1_tB5C3FDE5387CD918370700FB7E5B6A76F0494FE8* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T UniRx.InternalUtil.PriorityQueue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PriorityQueue_1_Dequeue_mCEF2670A80DF0540A42AFF255C38F1000EC1C229_gshared (PriorityQueue_1_tB5C3FDE5387CD918370700FB7E5B6A76F0494FE8* __this, const RuntimeMethod* method) ;
// T UniRx.InternalUtil.PriorityQueue`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PriorityQueue_1_Peek_m8B35C53C3F1FEC99F9CDC97FDA98E6AC92C27614_gshared (PriorityQueue_1_tB5C3FDE5387CD918370700FB7E5B6A76F0494FE8* __this, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UniRx.Operators.TimerObservable/Timer::OnNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Timer_OnNext_m414F1266E26E31A86D3617D3B7C9135D5D0BC544 (Timer_tF6B9F547470A20E938BB1C950D018FAB678541F8* __this, const RuntimeMethod* method) ;
// T System.Nullable`1<System.TimeSpan>::get_Value()
inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3 (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* __this, const RuntimeMethod* method)
{
	return ((  TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A (*) (Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272*, const RuntimeMethod*))Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_gshared)(__this, method);
}
// System.TimeSpan UniRx.Scheduler::Normalize(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A Scheduler_Normalize_m4BBCD6739A14358098B5CB4560EF3306E6F37818 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___timeSpan0, const RuntimeMethod* method) ;
// System.Void System.Action::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UniRx.SerialDisposable::set_Disposable(System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SerialDisposable_set_Disposable_m7244147E8E8045020F05F456431582884FA10584 (SerialDisposable_tFD88EABD9B21586EFDE63B2A991209DD99EA0FED* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.TimeSpan>::Invoke(T)
inline void Action_1_Invoke_m9D57A362365E6B308CA2F172DE995A7DE5EA5CE7_inline (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))Action_1_Invoke_m9D57A362365E6B308CA2F172DE995A7DE5EA5CE7_gshared_inline)(__this, ___obj0, method);
}
// System.Void UniRx.Operators.OperatorObservableBase`1<UniRx.Unit>::.ctor(System.Boolean)
inline void OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94 (OperatorObservableBase_1_t51CFC516BA0D1E0BDC4B1FDEEDE25AFD7E5BC583* __this, bool ___isRequiredSubscribeOnCurrentThread0, const RuntimeMethod* method)
{
	((  void (*) (OperatorObservableBase_1_t51CFC516BA0D1E0BDC4B1FDEEDE25AFD7E5BC583*, bool, const RuntimeMethod*))OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94_gshared)(__this, ___isRequiredSubscribeOnCurrentThread0, method);
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll::.ctor(System.IObservable`1<UniRx.Unit>[],System.IObserver`1<UniRx.Unit>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll__ctor_mD88A56742B77978D36FBBD93737320FB755FBCF0 (WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* __this, IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* ___sources0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) ;
// System.IDisposable UniRx.Operators.WhenAllObservable/WhenAll::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhenAll_Run_mC5550EDE921F0725C1374892F131633CF4D10245 (WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.IObservable`1<UniRx.Unit>>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_mBCF1B489A5A6741F94C62082229AB684D0AF5863 (List_1_t32940ADDAAB3E75079072445899D64FAF15C7422* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t32940ADDAAB3E75079072445899D64FAF15C7422*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_::.ctor(System.Collections.Generic.IList`1<System.IObservable`1<UniRx.Unit>>,System.IObserver`1<UniRx.Unit>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll___ctor_mB3FEA2E60E523F096F69C73ED732A9CCCF9E9841 (WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* __this, RuntimeObject* ___sources0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) ;
// System.IDisposable UniRx.Operators.WhenAllObservable/WhenAll_::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhenAll__Run_mAFFCBE671282BB4B5454999B982AFBAF0664928E (WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* __this, const RuntimeMethod* method) ;
// System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::.ctor(System.IObserver`1<TResult>,System.IDisposable)
inline void OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07 (OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method)
{
	((  void (*) (OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07_gshared)(__this, ___observer0, ___cancel1, method);
}
// UniRx.Unit UniRx.Unit::get_Default()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 Unit_get_Default_mA240AB8808E2B65EBA1C67697F2EA3C9FC756428 (const RuntimeMethod* method) ;
// System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::Dispose()
inline void OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E (OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A* __this, const RuntimeMethod* method)
{
	((  void (*) (OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*, const RuntimeMethod*))OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_gshared)(__this, method);
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::.ctor(UniRx.Operators.WhenAllObservable/WhenAll)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver__ctor_m6532E68554BC3A824EF35C54CCA9A7534AEB54F1 (WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E* __this, WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* ___parent0, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::CreateUnsafe(System.IDisposable[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_CreateUnsafe_m0C27358516B1BF967D37897C161A881AA84F8BB4 (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* ___disposables0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Exit(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9 (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.Void System.Threading.Monitor::Enter(System.Object,System.Boolean&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4 (RuntimeObject* ___obj0, bool* ___lockTaken1, const RuntimeMethod* method) ;
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::.ctor(UniRx.Operators.WhenAllObservable/WhenAll_)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver__ctor_m5C1263CC258D4B519789013B9C3A7F9E0D058AE2 (WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83* __this, WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* ___parent0, const RuntimeMethod* method) ;
// System.Boolean UniRx.OptimizedObservableExtensions::IsRequiredSubscribeOnCurrentThread<UniRx.Unit>(System.IObservable`1<T>)
inline bool OptimizedObservableExtensions_IsRequiredSubscribeOnCurrentThread_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m5986BF2304525FF7B540108090FCE56242677CB8 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  bool (*) (RuntimeObject*, const RuntimeMethod*))OptimizedObservableExtensions_IsRequiredSubscribeOnCurrentThread_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m5986BF2304525FF7B540108090FCE56242677CB8_gshared)(___source0, method);
}
// System.Void UniRx.Operators.BatchFrameObservable/BatchFrame::.ctor(UniRx.Operators.BatchFrameObservable,System.IObserver`1<UniRx.Unit>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchFrame__ctor_m8CA2794D5935AFD8F5324F29ED9FC8D7733A6D10 (BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* __this, BatchFrameObservable_t952DD3274EB407BB0AD38C38F2880C1CEA2541A6* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) ;
// System.IDisposable UniRx.Operators.BatchFrameObservable/BatchFrame::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BatchFrame_Run_m85E04AC56544B72BA2C7E36043FD988EC8C27FAE (BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* __this, const RuntimeMethod* method) ;
// System.Void UniRx.BooleanDisposable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BooleanDisposable__ctor_mBCC8F004A91D3D2A5E786D676DA9EA1D74353733 (BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98* __this, const RuntimeMethod* method) ;
// System.Void UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::.ctor(UniRx.Operators.BatchFrameObservable/BatchFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableEnumerator__ctor_mB7E5873F9B07BC5EA580AFDDC0F00F6D40840C55 (ReusableEnumerator_tE9E2B18103FC7FCECA3BD546453279E539069EC4* __this, BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* ___parent0, const RuntimeMethod* method) ;
// UniRx.ICancelable UniRx.StableCompositeDisposable::Create(System.IDisposable,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* StableCompositeDisposable_Create_m3F55A19E14044B68AF90EE2EBAEA61F3AE6FA8E6 (RuntimeObject* ___disposable10, RuntimeObject* ___disposable21, const RuntimeMethod* method) ;
// System.Void UniRx.MainThreadDispatcher::StartUpdateMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartUpdateMicroCoroutine_mC7750F3C387CC211EE2850D32017AC483FD44441 (RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UniRx.MainThreadDispatcher::StartFixedUpdateMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartFixedUpdateMicroCoroutine_m719B2EBF6319A46CB7277A6115BFBE42B69CC8F8 (RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Void UniRx.MainThreadDispatcher::StartEndOfFrameMicroCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MainThreadDispatcher_StartEndOfFrameMicroCoroutine_m462829E74EC6D4B34DFD74509927095499ABF4EA (RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean UniRx.BooleanDisposable::get_IsDisposed()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BooleanDisposable_get_IsDisposed_mB2799FBA1D1B1D28293F58C07D8D85EDEA3DD270_inline (BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98* __this, const RuntimeMethod* method) ;
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::Enqueue(T)
inline void Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.Action>::get_Count()
inline int32_t Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<System.Action>::Dequeue()
inline Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	return ((  Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Void System.Action::Invoke()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Action>::Clear()
inline void Queue_1_Clear_mF64267E0006F20E5E3029290482ABD8CDF9ADD5F (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1_Clear_m70861E24CF43ECFF3BC5C2AD4EE55963D54D8711_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Action>::.ctor()
inline void Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272 (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Runtime.ExceptionServices.ExceptionDispatchInfo System.Runtime.ExceptionServices.ExceptionDispatchInfo::Capture(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* ExceptionDispatchInfo_Capture_mD989ED7E69753F2E0A2076B60ACA8819F14DA93E (Exception_t* ___source0, const RuntimeMethod* method) ;
// System.Void System.Runtime.ExceptionServices.ExceptionDispatchInfo::Throw()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330 (ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Collections.IEnumerator>::.ctor()
inline void Queue_1__ctor_mDF0106C71BB6BCAC2C40E9C9885FFFFE66D938B3 (Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<System.Collections.IEnumerator>::Enqueue(T)
inline void Queue_1_Enqueue_m6316FBF2D6918C5F8CE698B35B7992F72506F58D (Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64*, RuntimeObject*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Void System.Array::Resize<System.Collections.IEnumerator>(T[]&,System.Int32)
inline void Array_Resize_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m168FDF87AE7948888578F24BA2E7B1FD0A2A9587 (IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A** ___array0, int32_t ___newSize1, const RuntimeMethod* method)
{
	((  void (*) (IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mF80AB90E5213A9BB02370B560A722D7062CEC846_gshared)(___array0, ___newSize1, method);
}
// System.Void System.Action`1<System.Exception>::Invoke(T)
inline void Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* __this, Exception_t* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04*, Exception_t*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// T System.Collections.Generic.Queue`1<System.Collections.IEnumerator>::Dequeue()
inline RuntimeObject* Queue_1_Dequeue_m0D5593D465771C71DE4D8BE668605D1C9CB23887 (Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<System.Collections.IEnumerator>::get_Count()
inline int32_t Queue_1_get_Count_m5E8F5A35E986F1667C97722F3FB70B4E505AC818_inline (Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// System.TimeSpan UniRx.InternalUtil.ScheduledItem::get_DueTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ScheduledItem_get_DueTime_mD86E9826893EB30066ECC28DA809D4C9EDC89F40 (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* __this, const RuntimeMethod* method) ;
// System.Int32 System.TimeSpan::CompareTo(System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TimeSpan_CompareTo_m85916E1968FD4309A3CFCBCBC0E3DF2E9AEB0FD3 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___value0, const RuntimeMethod* method) ;
// System.Int32 UniRx.InternalUtil.ScheduledItem::CompareTo(UniRx.InternalUtil.ScheduledItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScheduledItem_CompareTo_mFF0AAB25BA949CD9324FB1F94B51A78023876942 (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* __this, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___other0, const RuntimeMethod* method) ;
// System.Boolean UniRx.InternalUtil.ScheduledItem::op_Equality(UniRx.InternalUtil.ScheduledItem,UniRx.InternalUtil.ScheduledItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScheduledItem_op_Equality_m701657489E2CA5476A1B240C50B62E4FFE803BBE (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___left0, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___right1, const RuntimeMethod* method) ;
// System.Int32 System.Object::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.SchedulerQueue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchedulerQueue__ctor_m87BF7A69EF09192649F9501174504CE80E803F4C (SchedulerQueue_t094B7C6EF6ECE32C389F9D403CA8A46CACFBD5B6* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem>::.ctor(System.Int32)
inline void PriorityQueue_1__ctor_m06AFE26E845AAD29AD18C8549DF2A26ECE0B4452 (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B*, int32_t, const RuntimeMethod*))PriorityQueue_1__ctor_m94F92EDE0CDAD68EB49192EADF9F92D069F95309_gshared)(__this, ___capacity0, method);
}
// System.Int32 UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem>::get_Count()
inline int32_t PriorityQueue_1_get_Count_m3D5B2167CCE7C6050B163B798BCF5531E52D49E1 (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B*, const RuntimeMethod*))PriorityQueue_1_get_Count_m8A005E7A936DDD7D3EACBC6AF357854B542707C7_gshared)(__this, method);
}
// System.Void UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem>::Enqueue(T)
inline void PriorityQueue_1_Enqueue_mC32BFF636AEEF3542EFD46F32B95D2D918D8301A (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* __this, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___item0, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B*, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063*, const RuntimeMethod*))PriorityQueue_1_Enqueue_mDB7266FE445A2464D1C6CDFC2D5D6B16EED1FCAB_gshared)(__this, ___item0, method);
}
// System.Boolean UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem>::Remove(T)
inline bool PriorityQueue_1_Remove_m192F3BACD0D506F06B8BA0E367D72DE1F939BC8A (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* __this, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B*, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063*, const RuntimeMethod*))PriorityQueue_1_Remove_m78B0468B5DE5FB4DC6A11FD0A3CBCE2293CE2A0E_gshared)(__this, ___item0, method);
}
// T UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem>::Dequeue()
inline ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* PriorityQueue_1_Dequeue_mFB1B40E73026C1283ABA96FFE6072C08848A0D99 (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* __this, const RuntimeMethod* method)
{
	return ((  ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* (*) (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B*, const RuntimeMethod*))PriorityQueue_1_Dequeue_mCEF2670A80DF0540A42AFF255C38F1000EC1C229_gshared)(__this, method);
}
// T UniRx.InternalUtil.PriorityQueue`1<UniRx.InternalUtil.ScheduledItem>::Peek()
inline ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* PriorityQueue_1_Peek_m7D1628BB82B3D6FAFC256BCA6041DE8FC2C90711 (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* __this, const RuntimeMethod* method)
{
	return ((  ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* (*) (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B*, const RuntimeMethod*))PriorityQueue_1_Peek_m8B35C53C3F1FEC99F9CDC97FDA98E6AC92C27614_gshared)(__this, method);
}
// System.Void System.Array::Copy(System.Array,System.Array,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F (RuntimeArray* ___sourceArray0, RuntimeArray* ___destinationArray1, int32_t ___length2, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.Object>::Invoke(T)
inline void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*, RuntimeObject*, const RuntimeMethod*))Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline)(__this, ___obj0, method);
}
// System.Boolean System.RuntimeTypeHandle::Equals(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B* __this, RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Vector2EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2EqualityComparer__ctor_mFC02E54BBE93B748C84A6775A5650662026EE420 (Vector2EqualityComparer_t1EC84190716D16D2D1C05674BDFCE8668A354CCA* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Vector3EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3EqualityComparer__ctor_m3FB06A8EFB81B71046197227EFEF704138DCC209 (Vector3EqualityComparer_t62745961D07F32BA87D84CE7249B1CD02B741928* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Vector4EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4EqualityComparer__ctor_mFC426F92CC8BEB92C39D1A55723C92828AD4DA1D (Vector4EqualityComparer_tDE47F0BC52A78378EF4AE3751A6E5D388EDEA074* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/ColorEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEqualityComparer__ctor_mF49B0597E833C90A3A6D42EBB699F5B27A570E28 (ColorEqualityComparer_tE7223C3645092370232DDB7844DFF1E71E6DE80C* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Color32EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32EqualityComparer__ctor_mB771E1002984D31870D2489E825C106FBAC5A449 (Color32EqualityComparer_tF481F53C6D57185906B56DB32F115E723D9FD17F* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/RectEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectEqualityComparer__ctor_m5D4563A0333DF00AEFC11A34B61EDBB5238C397A (RectEqualityComparer_t9331F4C293F191F8C18919C69977D6D7B80117EF* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/BoundsEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsEqualityComparer__ctor_mF3CA3431F881FB568722252D40C77AEAF199EE7D (BoundsEqualityComparer_tFFCDAF589F6567389D67E168D1432A00EA6063C7* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/QuaternionEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionEqualityComparer__ctor_m73BA102CC4D46E84031C1920612365BBCC8FF136 (QuaternionEqualityComparer_t9276C865A991E56BE7720852A8B9C09A2C99F058* __this, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Vector2IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntEqualityComparer__ctor_mCCF39E759FEA91B579A6E0B6F7243FDDAC36E60D (Vector2IntEqualityComparer_t63BB73598D8CB38DC89F95A4DB44070CF719EEE1* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Vector3IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntEqualityComparer__ctor_m8BA53B29F062A2F84E8299C29537F3A75DC81E09 (Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/RangeIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeIntEqualityComparer__ctor_m0F950CBCE7D14EC1C3332A396F5EF05D308B95FD (RangeIntEqualityComparer_t997DC4CA104E5A0C3ED9145833AB95E92FFC6DA2* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/RectIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectIntEqualityComparer__ctor_mBABAA633476CA2887E6A2744CD8B468511885CFF (RectIntEqualityComparer_tFEE613741FA8D04BB0465668F1FB8295CB67D6C6* __this, const RuntimeMethod* method) ;
// System.Void UniRx.InternalUtil.UnityEqualityComparer/BoundsIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsIntEqualityComparer__ctor_m34F87FD3305A51AEAAE4C57544A09818261EAFD0 (BoundsIntEqualityComparer_t4D378351E9CB9D58FD9D33B3A13AD8B3BD885FF5* __this, const RuntimeMethod* method) ;
// System.Boolean System.Single::Equals(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9 (float* __this, float ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Single::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2 (float* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8 (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_center()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Vector3::Equals(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Bounds::get_extents()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25 (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3::GetHashCode()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Byte::Equals(System.Byte)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85 (uint8_t* __this, uint8_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 System.Byte::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678 (uint8_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Int32::Equals(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722 (int32_t* __this, int32_t ___obj0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector2Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) ;
// System.Int32 System.Int32::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_x()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_y()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Vector3Int::get_z()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_x()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_width()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_y()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878 (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.RectInt::get_height()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.BoundsInt::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/Vector3IntEqualityComparer::Equals(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3IntEqualityComparer_Equals_mA3889B6FE8F276FDFCBB69AEF45925A2FF4DE42C (Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___self0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___vector1, const RuntimeMethod* method) ;
// UnityEngine.Vector3Int UnityEngine.BoundsInt::get_size()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485* __this, const RuntimeMethod* method) ;
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/Vector3IntEqualityComparer::GetHashCode(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3IntEqualityComparer_GetHashCode_m712BCE0D8B207730496575D7DE49341A604A384D (Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___obj0, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void UniRx.Operators.TimerObservable/<>c__DisplayClass6_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_1__ctor_mBED1BDBCB170C633825C0D6D7C6575B096DB4A38 (U3CU3Ec__DisplayClass6_1_tB24396E0A7AC6004734C3333B40F5BC273C52DC0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UniRx.Operators.TimerObservable/<>c__DisplayClass6_2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_2__ctor_mBD63D081DC860EFBBEC869A27DE6B0983319B59A (U3CU3Ec__DisplayClass6_2_t5D385B077587B9026FC3115CC864501A85D6C312* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UniRx.Operators.TimerObservable/<>c__DisplayClass6_2::<SubscribeCore>b__1()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_2_U3CSubscribeCoreU3Eb__1_m44C57A342D5AEA9CDCA08E79AE569AF1DCF79F95 (U3CU3Ec__DisplayClass6_2_t5D385B077587B9026FC3115CC864501A85D6C312* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISchedulerPeriodic_tDFE7AC96FCDB0031197468F1A907459B6017D351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Scheduler_tCEE0A5C10B3A02C13F0712A251E6E88A5350736D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Timer_OnNext_m414F1266E26E31A86D3617D3B7C9135D5D0BC544_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// timerObserver.OnNext(); // run first
		U3CU3Ec__DisplayClass6_1_tB24396E0A7AC6004734C3333B40F5BC273C52DC0* L_0 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0_t10AC0BBB9CA57F24E8B2F3EE42EF463C52737A14* L_1 = L_0->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_1);
		Timer_tF6B9F547470A20E938BB1C950D018FAB678541F8* L_2 = L_1->___timerObserver_0;
		NullCheck(L_2);
		Timer_OnNext_m414F1266E26E31A86D3617D3B7C9135D5D0BC544(L_2, NULL);
		// var timeP = Scheduler.Normalize(period.Value);
		U3CU3Ec__DisplayClass6_1_tB24396E0A7AC6004734C3333B40F5BC273C52DC0* L_3 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_3);
		U3CU3Ec__DisplayClass6_0_t10AC0BBB9CA57F24E8B2F3EE42EF463C52737A14* L_4 = L_3->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_4);
		TimerObservable_tFC9F3D09116B8F2C45E6AAB81F24BCAE8E4BC434* L_5 = L_4->___U3CU3E4__this_1;
		NullCheck(L_5);
		Nullable_1_tE151CE1F6892804B41C4004C95CB57020ABB3272* L_6 = (&L_5->___period_3);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_7;
		L_7 = Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3(L_6, Nullable_1_get_Value_mC7511CCEBD1BB6FEEA7903DBB81ED7290D00DDD3_RuntimeMethod_var);
		il2cpp_codegen_runtime_class_init_inline(Scheduler_tCEE0A5C10B3A02C13F0712A251E6E88A5350736D_il2cpp_TypeInfo_var);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_8;
		L_8 = Scheduler_Normalize_m4BBCD6739A14358098B5CB4560EF3306E6F37818(L_7, NULL);
		V_0 = L_8;
		// disposable.Disposable = periodicScheduler.SchedulePeriodic(timeP, timerObserver.OnNext); // run periodic
		SerialDisposable_tFD88EABD9B21586EFDE63B2A991209DD99EA0FED* L_9 = __this->___disposable_0;
		U3CU3Ec__DisplayClass6_1_tB24396E0A7AC6004734C3333B40F5BC273C52DC0* L_10 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_10);
		RuntimeObject* L_11 = L_10->___periodicScheduler_0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_12 = V_0;
		U3CU3Ec__DisplayClass6_1_tB24396E0A7AC6004734C3333B40F5BC273C52DC0* L_13 = __this->___CSU24U3CU3E8__locals2_1;
		NullCheck(L_13);
		U3CU3Ec__DisplayClass6_0_t10AC0BBB9CA57F24E8B2F3EE42EF463C52737A14* L_14 = L_13->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_14);
		Timer_tF6B9F547470A20E938BB1C950D018FAB678541F8* L_15 = L_14->___timerObserver_0;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_16 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)il2cpp_codegen_object_new(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		Action__ctor_mBDC7B0B4A3F583B64C2896F01BDED360772F67DC(L_16, L_15, (intptr_t)((void*)Timer_OnNext_m414F1266E26E31A86D3617D3B7C9135D5D0BC544_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker2< RuntimeObject*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* >::Invoke(0 /* System.IDisposable UniRx.ISchedulerPeriodic::SchedulePeriodic(System.TimeSpan,System.Action) */, ISchedulerPeriodic_tDFE7AC96FCDB0031197468F1A907459B6017D351_il2cpp_TypeInfo_var, L_11, L_12, L_16);
		NullCheck(L_9);
		SerialDisposable_set_Disposable_m7244147E8E8045020F05F456431582884FA10584(L_9, L_17, NULL);
		// });
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
// System.Void UniRx.Operators.TimerObservable/<>c__DisplayClass6_3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_3__ctor_m3F3D7B102097923F035B5C0DE59E05BC0D4A35C8 (U3CU3Ec__DisplayClass6_3_t4AD067CA41967CDF19EA52A1F04E17BAA2DFB506* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UniRx.Operators.TimerObservable/<>c__DisplayClass6_3::<SubscribeCore>b__2(System.Action`1<System.TimeSpan>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_3_U3CSubscribeCoreU3Eb__2_m2074A2C338F7137A2920FC10A398F1BDCA19E15B (U3CU3Ec__DisplayClass6_3_t4AD067CA41967CDF19EA52A1F04E17BAA2DFB506* __this, Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* ___self0, const RuntimeMethod* method) 
{
	{
		// timerObserver.OnNext();
		U3CU3Ec__DisplayClass6_1_tB24396E0A7AC6004734C3333B40F5BC273C52DC0* L_0 = __this->___CSU24U3CU3E8__locals3_1;
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0_t10AC0BBB9CA57F24E8B2F3EE42EF463C52737A14* L_1 = L_0->___CSU24U3CU3E8__locals1_1;
		NullCheck(L_1);
		Timer_tF6B9F547470A20E938BB1C950D018FAB678541F8* L_2 = L_1->___timerObserver_0;
		NullCheck(L_2);
		Timer_OnNext_m414F1266E26E31A86D3617D3B7C9135D5D0BC544(L_2, NULL);
		// self(timeP);
		Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* L_3 = ___self0;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4 = __this->___timeP_0;
		NullCheck(L_3);
		Action_1_Invoke_m9D57A362365E6B308CA2F172DE995A7DE5EA5CE7_inline(L_3, L_4, NULL);
		// });
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
// System.Void UniRx.Operators.WhenAllObservable::.ctor(System.IObservable`1<UniRx.Unit>[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllObservable__ctor_m619FD614C4EE511A5BF74DF2DC89FFAE32D6640A (WhenAllObservable_tCB0F75CDA54E0BEF3F030450490C694F07868A80* __this, IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* ___sources0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(false)
		OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94(__this, (bool)0, OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94_RuntimeMethod_var);
		// this.sources = sources;
		IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* L_0 = ___sources0;
		__this->___sources_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_1), (void*)L_0);
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable::.ctor(System.Collections.Generic.IEnumerable`1<System.IObservable`1<UniRx.Unit>>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllObservable__ctor_m0EC7A1AB30023B351608B1DE59D7AF26BDA13ABB (WhenAllObservable_tCB0F75CDA54E0BEF3F030450490C694F07868A80* __this, RuntimeObject* ___sources0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(false)
		OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94(__this, (bool)0, OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94_RuntimeMethod_var);
		// this.sourcesEnumerable = sources;
		RuntimeObject* L_0 = ___sources0;
		__this->___sourcesEnumerable_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sourcesEnumerable_2), (void*)L_0);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WhenAllObservable::SubscribeCore(System.IObserver`1<UniRx.Unit>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhenAllObservable_SubscribeCore_mD631DE9C9EFE5C6B4EB1C945FC858DFA36F17367 (WhenAllObservable_tCB0F75CDA54E0BEF3F030450490C694F07868A80* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t50B47A97ACEE5B91925F179D5DDEAB384C4D805E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mBCF1B489A5A6741F94C62082229AB684D0AF5863_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t32940ADDAAB3E75079072445899D64FAF15C7422_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	{
		// if (sources != null)
		IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* L_0 = __this->___sources_1;
		V_0 = (bool)((!(((RuntimeObject*)(IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92*)L_0) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_0024;
		}
	}
	{
		// return new WhenAll(this.sources, observer, cancel).Run();
		IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* L_2 = __this->___sources_1;
		RuntimeObject* L_3 = ___observer0;
		RuntimeObject* L_4 = ___cancel1;
		WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* L_5 = (WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4*)il2cpp_codegen_object_new(WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		WhenAll__ctor_mD88A56742B77978D36FBBD93737320FB755FBCF0(L_5, L_2, L_3, L_4, NULL);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = WhenAll_Run_mC5550EDE921F0725C1374892F131633CF4D10245(L_5, NULL);
		V_1 = L_6;
		goto IL_0057;
	}

IL_0024:
	{
		// var xs = sourcesEnumerable as IList<IObservable<Unit>>;
		RuntimeObject* L_7 = __this->___sourcesEnumerable_2;
		V_2 = ((RuntimeObject*)IsInst((RuntimeObject*)L_7, IList_1_t50B47A97ACEE5B91925F179D5DDEAB384C4D805E_il2cpp_TypeInfo_var));
		// if (xs == null)
		RuntimeObject* L_8 = V_2;
		V_3 = (bool)((((RuntimeObject*)(RuntimeObject*)L_8) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_0047;
		}
	}
	{
		// xs = new List<IObservable<Unit>>(sourcesEnumerable); // materialize observables
		RuntimeObject* L_10 = __this->___sourcesEnumerable_2;
		List_1_t32940ADDAAB3E75079072445899D64FAF15C7422* L_11 = (List_1_t32940ADDAAB3E75079072445899D64FAF15C7422*)il2cpp_codegen_object_new(List_1_t32940ADDAAB3E75079072445899D64FAF15C7422_il2cpp_TypeInfo_var);
		NullCheck(L_11);
		List_1__ctor_mBCF1B489A5A6741F94C62082229AB684D0AF5863(L_11, L_10, List_1__ctor_mBCF1B489A5A6741F94C62082229AB684D0AF5863_RuntimeMethod_var);
		V_2 = L_11;
	}

IL_0047:
	{
		// return new WhenAll_(xs, observer, cancel).Run();
		RuntimeObject* L_12 = V_2;
		RuntimeObject* L_13 = ___observer0;
		RuntimeObject* L_14 = ___cancel1;
		WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* L_15 = (WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B*)il2cpp_codegen_object_new(WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B_il2cpp_TypeInfo_var);
		NullCheck(L_15);
		WhenAll___ctor_mB3FEA2E60E523F096F69C73ED732A9CCCF9E9841(L_15, L_12, L_13, L_14, NULL);
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = WhenAll__Run_mAFFCBE671282BB4B5454999B982AFBAF0664928E(L_15, NULL);
		V_1 = L_16;
		goto IL_0057;
	}

IL_0057:
	{
		// }
		RuntimeObject* L_17 = V_1;
		return L_17;
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
// System.Void UniRx.Operators.WhenAllObservable/WhenAll::.ctor(System.IObservable`1<UniRx.Unit>[],System.IObserver`1<UniRx.Unit>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll__ctor_mD88A56742B77978D36FBBD93737320FB755FBCF0 (WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* __this, IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* ___sources0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07(__this, L_1, L_2, OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07_RuntimeMethod_var);
		// this.sources = sources;
		IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* L_3 = ___sources0;
		__this->___sources_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_2), (void*)L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WhenAllObservable/WhenAll::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhenAll_Run_mC5550EDE921F0725C1374892F131633CF4D10245 (WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObservable_1_t95AC8938B356E94091965C25519C450D0E4D5C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E* V_5 = NULL;
	bool V_6 = false;
	{
		// length = sources.Length;
		IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* L_0 = __this->___sources_2;
		NullCheck(L_0);
		__this->___length_5 = ((int32_t)(((RuntimeArray*)L_0)->max_length));
		// if (length == 0)
		int32_t L_1 = __this->___length_5;
		V_1 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_1;
		if (!L_2)
		{
			goto IL_004d;
		}
	}
	{
		// OnNext(Unit.Default);
		il2cpp_codegen_runtime_class_init_inline(Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var);
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_3;
		L_3 = Unit_get_Default_mA240AB8808E2B65EBA1C67697F2EA3C9FC756428(NULL);
		VirtualActionInvoker1< Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnNext(TSource) */, __this, L_3);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003b:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E(__this, OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_4 = ((OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_4);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<UniRx.Unit>::OnCompleted() */, IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var, L_4);
			goto IL_0045;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0045:
	{
		// return Disposable.Empty;
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_StaticFields*)il2cpp_codegen_static_fields_for(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var))->___Empty_0;
		V_2 = L_5;
		goto IL_00a2;
	}

IL_004d:
	{
		// completedCount = 0;
		__this->___completedCount_4 = 0;
		// var subscriptions = new IDisposable[length];
		int32_t L_6 = __this->___length_5;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_7 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)L_6);
		V_0 = L_7;
		// for (int index = 0; index < sources.Length; index++)
		V_3 = 0;
		goto IL_0088;
	}

IL_0064:
	{
		// var source = sources[index];
		IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* L_8 = __this->___sources_2;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		int32_t L_10 = L_9;
		RuntimeObject* L_11 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		V_4 = L_11;
		// var observer = new WhenAllCollectionObserver(this);
		WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E* L_12 = (WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E*)il2cpp_codegen_object_new(WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WhenAllCollectionObserver__ctor_m6532E68554BC3A824EF35C54CCA9A7534AEB54F1(L_12, __this, NULL);
		V_5 = L_12;
		// subscriptions[index] = source.Subscribe(observer);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_13 = V_0;
		int32_t L_14 = V_3;
		RuntimeObject* L_15 = V_4;
		WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E* L_16 = V_5;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<UniRx.Unit>::Subscribe(System.IObserver`1<T>) */, IObservable_1_t95AC8938B356E94091965C25519C450D0E4D5C1D_il2cpp_TypeInfo_var, L_15, L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject*)L_17);
		// for (int index = 0; index < sources.Length; index++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_0088:
	{
		// for (int index = 0; index < sources.Length; index++)
		int32_t L_19 = V_3;
		IObservable_1U5BU5D_t3063DC5D7D8117CDE52F92314CE38BB5930B2A92* L_20 = __this->___sources_2;
		NullCheck(L_20);
		V_6 = (bool)((((int32_t)L_19) < ((int32_t)((int32_t)(((RuntimeArray*)L_20)->max_length))))? 1 : 0);
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_0064;
		}
	}
	{
		// return StableCompositeDisposable.CreateUnsafe(subscriptions);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_22 = V_0;
		RuntimeObject* L_23;
		L_23 = StableCompositeDisposable_CreateUnsafe_m0C27358516B1BF967D37897C161A881AA84F8BB4(L_22, NULL);
		V_2 = L_23;
		goto IL_00a2;
	}

IL_00a2:
	{
		// }
		RuntimeObject* L_24 = V_2;
		return L_24;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll::OnNext(UniRx.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll_OnNext_m6E6D80978DD4C73A8D2021420071858B1E4F1793 (WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* __this, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 >::Invoke(0 /* System.Void System.IObserver`1<UniRx.Unit>::OnNext(T) */, IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll_OnError_mCABC115E0C977F203054AA0561E2DB7A0705C998 (WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0014:
			{// begin finally (depth: 1)
				// try { observer.OnError(error); } finally { Dispose(); }
				OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E(__this, OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); } finally { Dispose(); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<UniRx.Unit>::OnError(System.Exception) */, IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var, L_0, L_1);
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll_OnCompleted_m9CB95E11CB27315A59FB95BE3483650D95CC9160 (WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E(__this, OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<UniRx.Unit>::OnCompleted() */, IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var, L_0);
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
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
// System.Void UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::.ctor(UniRx.Operators.WhenAllObservable/WhenAll)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver__ctor_m6532E68554BC3A824EF35C54CCA9A7534AEB54F1 (WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E* __this, WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* ___parent0, const RuntimeMethod* method) 
{
	{
		// bool isCompleted = false;
		__this->___isCompleted_1 = (bool)0;
		// public WhenAllCollectionObserver(WhenAll parent)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.parent = parent;
		WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* L_0 = ___parent0;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::OnNext(UniRx.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver_OnNext_m5EEBB8DA079546D13332ED05E2E9DEB0D8A4EDD1 (WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E* __this, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___value0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver_OnError_m436DA9043F67D679FD5D2888F1901C66D93D2C98 (WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (parent.gate)
		WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* L_0 = __this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0042;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
				// if (!isCompleted)
				bool L_5 = __this->___isCompleted_1;
				V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0035_1;
				}
			}
			{
				// parent.OnError(error);
				WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* L_7 = __this->___parent_0;
				Exception_t* L_8 = ___error0;
				NullCheck(L_7);
				VirtualActionInvoker1< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnError(System.Exception) */, L_7, L_8);
			}

IL_0035_1:
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll/WhenAllCollectionObserver::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver_OnCompleted_m9F3AB9FD08FB10AB186DA3572EE57C8CF348D6B2 (WhenAllCollectionObserver_t48906E13D05D7F98713EC00F7E391D408F49734E* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// lock (parent.gate)
		WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* L_0 = __this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0080:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_008a;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_008a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
				// if (!isCompleted)
				bool L_5 = __this->___isCompleted_1;
				V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_007d_1;
				}
			}
			{
				// isCompleted = true;
				__this->___isCompleted_1 = (bool)1;
				// parent.completedCount++;
				WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* L_7 = __this->___parent_0;
				WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* L_8 = L_7;
				NullCheck(L_8);
				int32_t L_9 = L_8->___completedCount_4;
				NullCheck(L_8);
				L_8->___completedCount_4 = ((int32_t)il2cpp_codegen_add(L_9, 1));
				// if (parent.completedCount == parent.length)
				WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* L_10 = __this->___parent_0;
				NullCheck(L_10);
				int32_t L_11 = L_10->___completedCount_4;
				WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* L_12 = __this->___parent_0;
				NullCheck(L_12);
				int32_t L_13 = L_12->___length_5;
				V_3 = (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
				bool L_14 = V_3;
				if (!L_14)
				{
					goto IL_007c_1;
				}
			}
			{
				// parent.OnNext(Unit.Default);
				WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* L_15 = __this->___parent_0;
				il2cpp_codegen_runtime_class_init_inline(Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var);
				Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_16;
				L_16 = Unit_get_Default_mA240AB8808E2B65EBA1C67697F2EA3C9FC756428(NULL);
				NullCheck(L_15);
				VirtualActionInvoker1< Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnNext(TSource) */, L_15, L_16);
				// parent.OnCompleted();
				WhenAll_t3BD995756C96162CBEAB3BBAB5771ADA3A80B8C4* L_17 = __this->___parent_0;
				NullCheck(L_17);
				VirtualActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnCompleted() */, L_17);
			}

IL_007c_1:
			{
			}

IL_007d_1:
			{
				goto IL_008b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
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
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_::.ctor(System.Collections.Generic.IList`1<System.IObservable`1<UniRx.Unit>>,System.IObserver`1<UniRx.Unit>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll___ctor_mB3FEA2E60E523F096F69C73ED732A9CCCF9E9841 (WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* __this, RuntimeObject* ___sources0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// : base(observer, cancel)
		RuntimeObject* L_1 = ___observer1;
		RuntimeObject* L_2 = ___cancel2;
		OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07(__this, L_1, L_2, OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07_RuntimeMethod_var);
		// this.sources = sources;
		RuntimeObject* L_3 = ___sources0;
		__this->___sources_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___sources_2), (void*)L_3);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.WhenAllObservable/WhenAll_::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* WhenAll__Run_mAFFCBE671282BB4B5454999B982AFBAF0664928E (WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_1_t220393D5614942F32FEF1457F78C0C1460641172_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_1_t50B47A97ACEE5B91925F179D5DDEAB384C4D805E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObservable_1_t95AC8938B356E94091965C25519C450D0E4D5C1D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83* V_5 = NULL;
	bool V_6 = false;
	{
		// length = sources.Count;
		RuntimeObject* L_0 = __this->___sources_2;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.IObservable`1<UniRx.Unit>>::get_Count() */, ICollection_1_t220393D5614942F32FEF1457F78C0C1460641172_il2cpp_TypeInfo_var, L_0);
		__this->___length_5 = L_1;
		// if (length == 0)
		int32_t L_2 = __this->___length_5;
		V_1 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0050;
		}
	}
	{
		// OnNext(Unit.Default);
		il2cpp_codegen_runtime_class_init_inline(Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var);
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_4;
		L_4 = Unit_get_Default_mA240AB8808E2B65EBA1C67697F2EA3C9FC756428(NULL);
		VirtualActionInvoker1< Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnNext(TSource) */, __this, L_4);
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003e:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E(__this, OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_5 = ((OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_5);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<UniRx.Unit>::OnCompleted() */, IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var, L_5);
			goto IL_0048;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0048:
	{
		// return Disposable.Empty;
		il2cpp_codegen_runtime_class_init_inline(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var);
		RuntimeObject* L_6 = ((Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_StaticFields*)il2cpp_codegen_static_fields_for(Disposable_t11429F449A26608E8CCE4F8CCF2DF161AD77B9D3_il2cpp_TypeInfo_var))->___Empty_0;
		V_2 = L_6;
		goto IL_00a7;
	}

IL_0050:
	{
		// completedCount = 0;
		__this->___completedCount_4 = 0;
		// var subscriptions = new IDisposable[length];
		int32_t L_7 = __this->___length_5;
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_8 = (IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE*)SZArrayNew(IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE_il2cpp_TypeInfo_var, (uint32_t)L_7);
		V_0 = L_8;
		// for (int index = 0; index < length; index++)
		V_3 = 0;
		goto IL_008f;
	}

IL_0067:
	{
		// var source = sources[index];
		RuntimeObject* L_9 = __this->___sources_2;
		int32_t L_10 = V_3;
		NullCheck(L_9);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.IObservable`1<UniRx.Unit>>::get_Item(System.Int32) */, IList_1_t50B47A97ACEE5B91925F179D5DDEAB384C4D805E_il2cpp_TypeInfo_var, L_9, L_10);
		V_4 = L_11;
		// var observer = new WhenAllCollectionObserver(this);
		WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83* L_12 = (WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83*)il2cpp_codegen_object_new(WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		WhenAllCollectionObserver__ctor_m5C1263CC258D4B519789013B9C3A7F9E0D058AE2(L_12, __this, NULL);
		V_5 = L_12;
		// subscriptions[index] = source.Subscribe(observer);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_13 = V_0;
		int32_t L_14 = V_3;
		RuntimeObject* L_15 = V_4;
		WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83* L_16 = V_5;
		NullCheck(L_15);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<UniRx.Unit>::Subscribe(System.IObserver`1<T>) */, IObservable_1_t95AC8938B356E94091965C25519C450D0E4D5C1D_il2cpp_TypeInfo_var, L_15, L_16);
		NullCheck(L_13);
		ArrayElementTypeCheck (L_13, L_17);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(L_14), (RuntimeObject*)L_17);
		// for (int index = 0; index < length; index++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_18, 1));
	}

IL_008f:
	{
		// for (int index = 0; index < length; index++)
		int32_t L_19 = V_3;
		int32_t L_20 = __this->___length_5;
		V_6 = (bool)((((int32_t)L_19) < ((int32_t)L_20))? 1 : 0);
		bool L_21 = V_6;
		if (L_21)
		{
			goto IL_0067;
		}
	}
	{
		// return StableCompositeDisposable.CreateUnsafe(subscriptions);
		IDisposableU5BU5D_t7D2E88760CCE6C653A28D1DB1108AFA898478DEE* L_22 = V_0;
		RuntimeObject* L_23;
		L_23 = StableCompositeDisposable_CreateUnsafe_m0C27358516B1BF967D37897C161A881AA84F8BB4(L_22, NULL);
		V_2 = L_23;
		goto IL_00a7;
	}

IL_00a7:
	{
		// }
		RuntimeObject* L_24 = V_2;
		return L_24;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_::OnNext(UniRx.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll__OnNext_m10E969DAFEA0E25D6EDD457221D02ABD570329A7 (WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* __this, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base.observer.OnNext(value);
		RuntimeObject* L_0 = ((OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 >::Invoke(0 /* System.Void System.IObserver`1<UniRx.Unit>::OnNext(T) */, IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll__OnError_m1DD5713A20B1189125FF20C6492D77494D135B94 (WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0014:
			{// begin finally (depth: 1)
				// try { observer.OnError(error); } finally { Dispose(); }
				OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E(__this, OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); } finally { Dispose(); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<UniRx.Unit>::OnError(System.Exception) */, IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var, L_0, L_1);
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAll__OnCompleted_m131B1C5C57A5B2DF9ECBC185151EFB482E1CE47D (WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0013:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E(__this, OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_0);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<UniRx.Unit>::OnCompleted() */, IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var, L_0);
			goto IL_001d;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001d:
	{
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
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::.ctor(UniRx.Operators.WhenAllObservable/WhenAll_)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver__ctor_m5C1263CC258D4B519789013B9C3A7F9E0D058AE2 (WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83* __this, WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* ___parent0, const RuntimeMethod* method) 
{
	{
		// bool isCompleted = false;
		__this->___isCompleted_1 = (bool)0;
		// public WhenAllCollectionObserver(WhenAll_ parent)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.parent = parent;
		WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* L_0 = ___parent0;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::OnNext(UniRx.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver_OnNext_m76FE2291F1B452F56F2B819EBC02FF30F17051E2 (WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83* __this, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___value0, const RuntimeMethod* method) 
{
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver_OnError_m924C783C6EB33AA0AC212D25773BAE8F7DFEFE6F (WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		// lock (parent.gate)
		WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* L_0 = __this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0042;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_0042:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
				// if (!isCompleted)
				bool L_5 = __this->___isCompleted_1;
				V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_0035_1;
				}
			}
			{
				// parent.OnError(error);
				WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* L_7 = __this->___parent_0;
				Exception_t* L_8 = ___error0;
				NullCheck(L_7);
				VirtualActionInvoker1< Exception_t* >::Invoke(9 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnError(System.Exception) */, L_7, L_8);
			}

IL_0035_1:
			{
				goto IL_0043;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0043:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.WhenAllObservable/WhenAll_/WhenAllCollectionObserver::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WhenAllCollectionObserver_OnCompleted_mF4D4806AA49D2B53049B5248141E6B6E3C883E1F (WhenAllCollectionObserver_t3DF189B24B90EC01DFC72026FEAAC505250F5C83* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		// lock (parent.gate)
		WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* L_0 = __this->___parent_0;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___gate_3;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0080:
			{// begin finally (depth: 1)
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_008a;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_3, NULL);
				}

IL_008a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_4, (&V_1), NULL);
				// if (!isCompleted)
				bool L_5 = __this->___isCompleted_1;
				V_2 = (bool)((((int32_t)L_5) == ((int32_t)0))? 1 : 0);
				bool L_6 = V_2;
				if (!L_6)
				{
					goto IL_007d_1;
				}
			}
			{
				// isCompleted = true;
				__this->___isCompleted_1 = (bool)1;
				// parent.completedCount++;
				WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* L_7 = __this->___parent_0;
				WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* L_8 = L_7;
				NullCheck(L_8);
				int32_t L_9 = L_8->___completedCount_4;
				NullCheck(L_8);
				L_8->___completedCount_4 = ((int32_t)il2cpp_codegen_add(L_9, 1));
				// if (parent.completedCount == parent.length)
				WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* L_10 = __this->___parent_0;
				NullCheck(L_10);
				int32_t L_11 = L_10->___completedCount_4;
				WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* L_12 = __this->___parent_0;
				NullCheck(L_12);
				int32_t L_13 = L_12->___length_5;
				V_3 = (bool)((((int32_t)L_11) == ((int32_t)L_13))? 1 : 0);
				bool L_14 = V_3;
				if (!L_14)
				{
					goto IL_007c_1;
				}
			}
			{
				// parent.OnNext(Unit.Default);
				WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* L_15 = __this->___parent_0;
				il2cpp_codegen_runtime_class_init_inline(Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var);
				Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_16;
				L_16 = Unit_get_Default_mA240AB8808E2B65EBA1C67697F2EA3C9FC756428(NULL);
				NullCheck(L_15);
				VirtualActionInvoker1< Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 >::Invoke(8 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnNext(TSource) */, L_15, L_16);
				// parent.OnCompleted();
				WhenAll__t43ABB81E68F806319CCEDF6FFA02B6E58BE3EA1B* L_17 = __this->___parent_0;
				NullCheck(L_17);
				VirtualActionInvoker0::Invoke(10 /* System.Void UniRx.Operators.OperatorObserverBase`2<UniRx.Unit,UniRx.Unit>::OnCompleted() */, L_17);
			}

IL_007c_1:
			{
			}

IL_007d_1:
			{
				goto IL_008b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_008b:
	{
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
// System.Void UniRx.Operators.BatchFrameObservable::.ctor(System.IObservable`1<UniRx.Unit>,System.Int32,UniRx.FrameCountType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchFrameObservable__ctor_m407C44D6740D23A376B5EC3B3748E2B54457C8D2 (BatchFrameObservable_t952DD3274EB407BB0AD38C38F2880C1CEA2541A6* __this, RuntimeObject* ___source0, int32_t ___frameCount1, int32_t ___frameCountType2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OptimizedObservableExtensions_IsRequiredSubscribeOnCurrentThread_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m5986BF2304525FF7B540108090FCE56242677CB8_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// : base(source.IsRequiredSubscribeOnCurrentThread())
		RuntimeObject* L_0 = ___source0;
		bool L_1;
		L_1 = OptimizedObservableExtensions_IsRequiredSubscribeOnCurrentThread_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m5986BF2304525FF7B540108090FCE56242677CB8(L_0, OptimizedObservableExtensions_IsRequiredSubscribeOnCurrentThread_TisUnit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_m5986BF2304525FF7B540108090FCE56242677CB8_RuntimeMethod_var);
		OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94(__this, L_1, OperatorObservableBase_1__ctor_mCE8F3E40876E612C0C091F34251597C6EF886E94_RuntimeMethod_var);
		// this.source = source;
		RuntimeObject* L_2 = ___source0;
		__this->___source_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___source_1), (void*)L_2);
		// this.frameCount = frameCount;
		int32_t L_3 = ___frameCount1;
		__this->___frameCount_2 = L_3;
		// this.frameCountType = frameCountType;
		int32_t L_4 = ___frameCountType2;
		__this->___frameCountType_3 = L_4;
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.BatchFrameObservable::SubscribeCore(System.IObserver`1<UniRx.Unit>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BatchFrameObservable_SubscribeCore_m0F7301977888B604EC2BC685D581C01D06C576CB (BatchFrameObservable_t952DD3274EB407BB0AD38C38F2880C1CEA2541A6* __this, RuntimeObject* ___observer0, RuntimeObject* ___cancel1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// return new BatchFrame(this, observer, cancel).Run();
		RuntimeObject* L_0 = ___observer0;
		RuntimeObject* L_1 = ___cancel1;
		BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* L_2 = (BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598*)il2cpp_codegen_object_new(BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		BatchFrame__ctor_m8CA2794D5935AFD8F5324F29ED9FC8D7733A6D10(L_2, __this, L_0, L_1, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = BatchFrame_Run_m85E04AC56544B72BA2C7E36043FD988EC8C27FAE(L_2, NULL);
		V_0 = L_3;
		goto IL_0011;
	}

IL_0011:
	{
		// }
		RuntimeObject* L_4 = V_0;
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
// System.Void UniRx.Operators.BatchFrameObservable/BatchFrame::.ctor(UniRx.Operators.BatchFrameObservable,System.IObserver`1<UniRx.Unit>,System.IDisposable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchFrame__ctor_m8CA2794D5935AFD8F5324F29ED9FC8D7733A6D10 (BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* __this, BatchFrameObservable_t952DD3274EB407BB0AD38C38F2880C1CEA2541A6* ___parent0, RuntimeObject* ___observer1, RuntimeObject* ___cancel2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ReusableEnumerator_tE9E2B18103FC7FCECA3BD546453279E539069EC4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_3 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_3), (void*)L_0);
		// readonly BooleanDisposable cancellationToken = new BooleanDisposable();
		BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98* L_1 = (BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98*)il2cpp_codegen_object_new(BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		BooleanDisposable__ctor_mBCC8F004A91D3D2A5E786D676DA9EA1D74353733(L_1, NULL);
		__this->___cancellationToken_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___cancellationToken_4), (void*)L_1);
		// public BatchFrame(BatchFrameObservable parent, IObserver<Unit> observer, IDisposable cancel) : base(observer, cancel)
		RuntimeObject* L_2 = ___observer1;
		RuntimeObject* L_3 = ___cancel2;
		OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07(__this, L_2, L_3, OperatorObserverBase_2__ctor_m713FFA62962159031C353C7233A170356C278F07_RuntimeMethod_var);
		// this.parent = parent;
		BatchFrameObservable_t952DD3274EB407BB0AD38C38F2880C1CEA2541A6* L_4 = ___parent0;
		__this->___parent_2 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_2), (void*)L_4);
		// this.timer = new ReusableEnumerator(this);
		ReusableEnumerator_tE9E2B18103FC7FCECA3BD546453279E539069EC4* L_5 = (ReusableEnumerator_tE9E2B18103FC7FCECA3BD546453279E539069EC4*)il2cpp_codegen_object_new(ReusableEnumerator_tE9E2B18103FC7FCECA3BD546453279E539069EC4_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ReusableEnumerator__ctor_mB7E5873F9B07BC5EA580AFDDC0F00F6D40840C55(L_5, __this, NULL);
		__this->___timer_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___timer_5), (void*)L_5);
		// }
		return;
	}
}
// System.IDisposable UniRx.Operators.BatchFrameObservable/BatchFrame::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* BatchFrame_Run_m85E04AC56544B72BA2C7E36043FD988EC8C27FAE (BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObservable_1_t95AC8938B356E94091965C25519C450D0E4D5C1D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var sourceSubscription = parent.source.Subscribe(this);
		BatchFrameObservable_t952DD3274EB407BB0AD38C38F2880C1CEA2541A6* L_0 = __this->___parent_2;
		NullCheck(L_0);
		RuntimeObject* L_1 = L_0->___source_1;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(0 /* System.IDisposable System.IObservable`1<UniRx.Unit>::Subscribe(System.IObserver`1<T>) */, IObservable_1_t95AC8938B356E94091965C25519C450D0E4D5C1D_il2cpp_TypeInfo_var, L_1, __this);
		V_0 = L_2;
		// return StableCompositeDisposable.Create(sourceSubscription, cancellationToken);
		RuntimeObject* L_3 = V_0;
		BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98* L_4 = __this->___cancellationToken_4;
		RuntimeObject* L_5;
		L_5 = StableCompositeDisposable_Create_m3F55A19E14044B68AF90EE2EBAEA61F3AE6FA8E6(L_3, L_4, NULL);
		V_1 = L_5;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		RuntimeObject* L_6 = V_1;
		return L_6;
	}
}
// System.Void UniRx.Operators.BatchFrameObservable/BatchFrame::OnNext(UniRx.Unit)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchFrame_OnNext_mA6A7A5417F0CE4A2A40869840161D6FDF38B3C31 (BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* __this, Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		// lock (gate)
		RuntimeObject* L_0 = __this->___gate_3;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0089:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0093;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0093:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (!isRunning)
				bool L_4 = __this->___isRunning_6;
				V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_0086_1;
				}
			}
			{
				// isRunning = true;
				__this->___isRunning_6 = (bool)1;
				// timer.Reset(); // reuse
				RuntimeObject* L_6 = __this->___timer_5;
				NullCheck(L_6);
				InterfaceActionInvoker0::Invoke(2 /* System.Void System.Collections.IEnumerator::Reset() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_6);
				// switch (parent.frameCountType)
				BatchFrameObservable_t952DD3274EB407BB0AD38C38F2880C1CEA2541A6* L_7 = __this->___parent_2;
				NullCheck(L_7);
				int32_t L_8 = L_7->___frameCountType_3;
				V_4 = L_8;
				int32_t L_9 = V_4;
				V_3 = L_9;
				int32_t L_10 = V_3;
				switch (L_10)
				{
					case 0:
					{
						goto IL_0059_1;
					}
					case 1:
					{
						goto IL_0067_1;
					}
					case 2:
					{
						goto IL_0075_1;
					}
				}
			}
			{
				goto IL_0083_1;
			}

IL_0059_1:
			{
				// MainThreadDispatcher.StartUpdateMicroCoroutine(timer);
				RuntimeObject* L_11 = __this->___timer_5;
				il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
				MainThreadDispatcher_StartUpdateMicroCoroutine_mC7750F3C387CC211EE2850D32017AC483FD44441(L_11, NULL);
				// break;
				goto IL_0085_1;
			}

IL_0067_1:
			{
				// MainThreadDispatcher.StartFixedUpdateMicroCoroutine(timer);
				RuntimeObject* L_12 = __this->___timer_5;
				il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
				MainThreadDispatcher_StartFixedUpdateMicroCoroutine_m719B2EBF6319A46CB7277A6115BFBE42B69CC8F8(L_12, NULL);
				// break;
				goto IL_0085_1;
			}

IL_0075_1:
			{
				// MainThreadDispatcher.StartEndOfFrameMicroCoroutine(timer);
				RuntimeObject* L_13 = __this->___timer_5;
				il2cpp_codegen_runtime_class_init_inline(MainThreadDispatcher_t306E4EF4907C33070CA5548F8CCABEE77B13A928_il2cpp_TypeInfo_var);
				MainThreadDispatcher_StartEndOfFrameMicroCoroutine_m462829E74EC6D4B34DFD74509927095499ABF4EA(L_13, NULL);
				// break;
				goto IL_0085_1;
			}

IL_0083_1:
			{
				// break;
				goto IL_0085_1;
			}

IL_0085_1:
			{
			}

IL_0086_1:
			{
				goto IL_0094;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.BatchFrameObservable/BatchFrame::OnError(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchFrame_OnError_m7C8BCE81C1FD6D30D620056D7A2DB6C38F452085 (BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* __this, Exception_t* ___error0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0014:
			{// begin finally (depth: 1)
				// try { observer.OnError(error); } finally { Dispose(); }
				OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E(__this, OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnError(error); } finally { Dispose(); }
			RuntimeObject* L_0 = ((OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			Exception_t* L_1 = ___error0;
			NullCheck(L_0);
			InterfaceActionInvoker1< Exception_t* >::Invoke(1 /* System.Void System.IObserver`1<UniRx.Unit>::OnError(System.Exception) */, IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var, L_0, L_1);
			goto IL_001e;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void UniRx.Operators.BatchFrameObservable/BatchFrame::OnCompleted()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BatchFrame_OnCompleted_m3E4408665670037A34DF345430B1133426A94075 (BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	RuntimeObject* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = __this->___gate_3;
		V_1 = L_0;
		V_2 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_2;
					if (!L_1)
					{
						goto IL_002f;
					}
				}
				{
					RuntimeObject* L_2 = V_1;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_002f:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_1;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_2), NULL);
			// running = isRunning;
			bool L_4 = __this->___isRunning_6;
			V_0 = L_4;
			// isCompleted = true;
			__this->___isCompleted_7 = (bool)1;
			goto IL_0030;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0030:
	{
		// if (running)
		bool L_5 = V_0;
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_004a;
		}
	}
	{
		// observer.OnNext(Unit.Default);
		RuntimeObject* L_7 = ((OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*)__this)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_runtime_class_init_inline(Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var);
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_8;
		L_8 = Unit_get_Default_mA240AB8808E2B65EBA1C67697F2EA3C9FC756428(NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 >::Invoke(0 /* System.Void System.IObserver`1<UniRx.Unit>::OnNext(T) */, IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var, L_7, L_8);
	}

IL_004a:
	{
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{// begin finally (depth: 1)
				// try { observer.OnCompleted(); } finally { Dispose(); }
				OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E(__this, OperatorObserverBase_2_Dispose_m9FA697C25915A5929172BE44DD96D3E51377723E_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			// try { observer.OnCompleted(); } finally { Dispose(); }
			RuntimeObject* L_9 = ((OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*)__this)->___observer_0;
			il2cpp_codegen_memory_barrier();
			NullCheck(L_9);
			InterfaceActionInvoker0::Invoke(2 /* System.Void System.IObserver`1<UniRx.Unit>::OnCompleted() */, IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var, L_9);
			goto IL_0067;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
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
// System.Void UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::.ctor(UniRx.Operators.BatchFrameObservable/BatchFrame)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableEnumerator__ctor_mB7E5873F9B07BC5EA580AFDDC0F00F6D40840C55 (ReusableEnumerator_tE9E2B18103FC7FCECA3BD546453279E539069EC4* __this, BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* ___parent0, const RuntimeMethod* method) 
{
	{
		// public ReusableEnumerator(BatchFrame parent)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.parent = parent;
		BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* L_0 = ___parent0;
		__this->___parent_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___parent_0), (void*)L_0);
		// }
		return;
	}
}
// System.Object UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ReusableEnumerator_get_Current_m0A4B473706A4F1BC0D681A4AE975433C3126C09C (ReusableEnumerator_tE9E2B18103FC7FCECA3BD546453279E539069EC4* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// get { return null; }
		V_0 = NULL;
		goto IL_0005;
	}

IL_0005:
	{
		// get { return null; }
		RuntimeObject* L_0 = V_0;
		return L_0;
	}
}
// System.Boolean UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ReusableEnumerator_MoveNext_m6F69F52D3EBA8911E159FC213AB5BECA8873D598 (ReusableEnumerator_tE9E2B18103FC7FCECA3BD546453279E539069EC4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	int32_t V_5 = 0;
	bool V_6 = false;
	{
		// if (parent.cancellationToken.IsDisposed) return false;
		BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* L_0 = __this->___parent_0;
		NullCheck(L_0);
		BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98* L_1 = L_0->___cancellationToken_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = BooleanDisposable_get_IsDisposed_mB2799FBA1D1B1D28293F58C07D8D85EDEA3DD270_inline(L_1, NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001c;
		}
	}
	{
		// if (parent.cancellationToken.IsDisposed) return false;
		V_1 = (bool)0;
		goto IL_00b4;
	}

IL_001c:
	{
		// lock (parent.gate)
		BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* L_4 = __this->___parent_0;
		NullCheck(L_4);
		RuntimeObject* L_5 = L_4->___gate_3;
		V_2 = L_5;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_008d:
			{// begin finally (depth: 1)
				{
					bool L_6 = V_3;
					if (!L_6)
					{
						goto IL_0097;
					}
				}
				{
					RuntimeObject* L_7 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_7, NULL);
				}

IL_0097:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_8 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_8, (&V_3), NULL);
				// if (currentFrame++ == parent.parent.frameCount)
				int32_t L_9 = __this->___currentFrame_1;
				V_5 = L_9;
				int32_t L_10 = V_5;
				__this->___currentFrame_1 = ((int32_t)il2cpp_codegen_add(L_10, 1));
				int32_t L_11 = V_5;
				BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* L_12 = __this->___parent_0;
				NullCheck(L_12);
				BatchFrameObservable_t952DD3274EB407BB0AD38C38F2880C1CEA2541A6* L_13 = L_12->___parent_2;
				NullCheck(L_13);
				int32_t L_14 = L_13->___frameCount_2;
				V_4 = (bool)((((int32_t)L_11) == ((int32_t)L_14))? 1 : 0);
				bool L_15 = V_4;
				if (!L_15)
				{
					goto IL_0085_1;
				}
			}
			{
				// if (parent.isCompleted) return false;
				BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* L_16 = __this->___parent_0;
				NullCheck(L_16);
				bool L_17 = L_16->___isCompleted_7;
				V_6 = L_17;
				bool L_18 = V_6;
				if (!L_18)
				{
					goto IL_0076_1;
				}
			}
			{
				// if (parent.isCompleted) return false;
				V_1 = (bool)0;
				goto IL_00b4;
			}

IL_0076_1:
			{
				// parent.isRunning = false;
				BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* L_19 = __this->___parent_0;
				NullCheck(L_19);
				L_19->___isRunning_6 = (bool)0;
				goto IL_008a_1;
			}

IL_0085_1:
			{
				// return true;
				V_1 = (bool)1;
				goto IL_00b4;
			}

IL_008a_1:
			{
				goto IL_0098;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0098:
	{
		// parent.observer.OnNext(Unit.Default);
		BatchFrame_t40125FDEFA1048ACDB33822853D82CF8ACAD3598* L_20 = __this->___parent_0;
		NullCheck(L_20);
		RuntimeObject* L_21 = ((OperatorObserverBase_2_tB21987D8E73716441EF70FA7CBB6C2B9CD396B7A*)L_20)->___observer_0;
		il2cpp_codegen_memory_barrier();
		il2cpp_codegen_runtime_class_init_inline(Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662_il2cpp_TypeInfo_var);
		Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 L_22;
		L_22 = Unit_get_Default_mA240AB8808E2B65EBA1C67697F2EA3C9FC756428(NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< Unit_tA0CF0E853142927AA2C5B12CCD6D3EC4FF006662 >::Invoke(0 /* System.Void System.IObserver`1<UniRx.Unit>::OnNext(T) */, IObserver_1_tBEF4CA9E717E6ACE84B0179E83F1CB1F7C87800D_il2cpp_TypeInfo_var, L_21, L_22);
		// return false;
		V_1 = (bool)0;
		goto IL_00b4;
	}

IL_00b4:
	{
		// }
		bool L_23 = V_1;
		return L_23;
	}
}
// System.Void UniRx.Operators.BatchFrameObservable/BatchFrame/ReusableEnumerator::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReusableEnumerator_Reset_m74A5FC97D8D637931CDFAA050D19F83C93EFA534 (ReusableEnumerator_tE9E2B18103FC7FCECA3BD546453279E539069EC4* __this, const RuntimeMethod* method) 
{
	{
		// currentFrame = 0;
		__this->___currentFrame_1 = 0;
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
// System.Void UniRx.InternalUtil.AsyncLock::Wait(System.Action)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLock_Wait_m57B7012ED80CD3C497DCEAE43AA20C519D62244B (AsyncLock_t278F618332A769D654B1CCDBF498473CA86A0C57* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* V_6 = NULL;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_7 = NULL;
	bool V_8 = false;
	bool V_9 = false;
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// if (action == null)
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_0 = ___action0;
		V_1 = (bool)((((RuntimeObject*)(Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_1;
		if (!L_1)
		{
			goto IL_0014;
		}
	}
	{
		// throw new ArgumentNullException("action");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_2 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncLock_Wait_m57B7012ED80CD3C497DCEAE43AA20C519D62244B_RuntimeMethod_var)));
	}

IL_0014:
	{
		// var isOwner = false;
		V_0 = (bool)0;
		// lock (queue)
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_3 = __this->___queue_0;
		V_2 = L_3;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005b:
			{// begin finally (depth: 1)
				{
					bool L_4 = V_3;
					if (!L_4)
					{
						goto IL_0065;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_5 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_5, NULL);
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
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_6 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_6, (&V_3), NULL);
				// if (!hasFaulted)
				bool L_7 = __this->___hasFaulted_2;
				V_4 = (bool)((((int32_t)L_7) == ((int32_t)0))? 1 : 0);
				bool L_8 = V_4;
				if (!L_8)
				{
					goto IL_0058_1;
				}
			}
			{
				// queue.Enqueue(action);
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_9 = __this->___queue_0;
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_10 = ___action0;
				NullCheck(L_9);
				Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4(L_9, L_10, Queue_1_Enqueue_m9B59C0455EACB768D8D74CA1F57E003C91F6E3D4_RuntimeMethod_var);
				// isOwner = !isAcquired;
				bool L_11 = __this->___isAcquired_1;
				V_0 = (bool)((((int32_t)L_11) == ((int32_t)0))? 1 : 0);
				// isAcquired = true;
				__this->___isAcquired_1 = (bool)1;
			}

IL_0058_1:
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
		// if (isOwner)
		bool L_12 = V_0;
		V_5 = L_12;
		bool L_13 = V_5;
		if (!L_13)
		{
			goto IL_0121;
		}
	}
	{
		goto IL_0118;
	}

IL_0076:
	{
		// var work = default(Action);
		V_6 = (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07*)NULL;
		// lock (queue)
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_14 = __this->___queue_0;
		V_7 = L_14;
		V_8 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00c0:
			{// begin finally (depth: 1)
				{
					bool L_15 = V_8;
					if (!L_15)
					{
						goto IL_00cc;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_16 = V_7;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_16, NULL);
				}

IL_00cc:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_17 = V_7;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_17, (&V_8), NULL);
				// if (queue.Count > 0)
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_18 = __this->___queue_0;
				NullCheck(L_18);
				int32_t L_19;
				L_19 = Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_inline(L_18, Queue_1_get_Count_mB986A63C8D68BD8606522BF24176D36503CFD9C3_RuntimeMethod_var);
				V_9 = (bool)((((int32_t)L_19) > ((int32_t)0))? 1 : 0);
				bool L_20 = V_9;
				if (!L_20)
				{
					goto IL_00b3_1;
				}
			}
			{
				// work = queue.Dequeue();
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_21 = __this->___queue_0;
				NullCheck(L_21);
				Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_22;
				L_22 = Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E(L_21, Queue_1_Dequeue_m67206C56B5CF9749EFAEF48FAA0D82E2AD8D960E_RuntimeMethod_var);
				V_6 = L_22;
				goto IL_00bd_1;
			}

IL_00b3_1:
			{
				// isAcquired = false;
				__this->___isAcquired_1 = (bool)0;
				// break;
				goto IL_0120;
			}

IL_00bd_1:
			{
				goto IL_00cd;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00cd:
	{
	}
	try
	{// begin try (depth: 1)
		// work();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_23 = V_6;
		NullCheck(L_23);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_23, NULL);
		goto IL_0117;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_00da;
		}
		throw e;
	}

CATCH_00da:
	{// begin catch(System.Object)
		{
			// catch
			// lock (queue)
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_24 = __this->___queue_0;
			V_10 = L_24;
			V_11 = (bool)0;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_0108:
				{// begin finally (depth: 2)
					{
						bool L_25 = V_11;
						if (!L_25)
						{
							goto IL_0114;
						}
					}
					{
						Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_26 = V_10;
						Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_26, NULL);
					}

IL_0114:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_27 = V_10;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_27, (&V_11), NULL);
				// queue.Clear();
				Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_28 = __this->___queue_0;
				NullCheck(L_28);
				Queue_1_Clear_mF64267E0006F20E5E3029290482ABD8CDF9ADD5F(L_28, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Queue_1_Clear_mF64267E0006F20E5E3029290482ABD8CDF9ADD5F_RuntimeMethod_var)));
				// hasFaulted = true;
				__this->___hasFaulted_2 = (bool)1;
				goto IL_0115;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0115:
		{
			// throw;
			IL2CPP_RAISE_MANAGED_EXCEPTION(IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*), ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&AsyncLock_Wait_m57B7012ED80CD3C497DCEAE43AA20C519D62244B_RuntimeMethod_var)));
		}
	}// end catch (depth: 1)

IL_0117:
	{
	}

IL_0118:
	{
		// while (true)
		V_12 = (bool)1;
		goto IL_0076;
	}

IL_0120:
	{
	}

IL_0121:
	{
		// }
		return;
	}
}
// System.Void UniRx.InternalUtil.AsyncLock::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLock_Dispose_m99D54524420AAEC913C798FD4D4410B139293EC7 (AsyncLock_t278F618332A769D654B1CCDBF498473CA86A0C57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Clear_mF64267E0006F20E5E3029290482ABD8CDF9ADD5F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* V_0 = NULL;
	bool V_1 = false;
	{
		// lock (queue)
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = __this->___queue_0;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002a:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0034;
					}
				}
				{
					Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0034:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// queue.Clear();
			Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_4 = __this->___queue_0;
			NullCheck(L_4);
			Queue_1_Clear_mF64267E0006F20E5E3029290482ABD8CDF9ADD5F(L_4, Queue_1_Clear_mF64267E0006F20E5E3029290482ABD8CDF9ADD5F_RuntimeMethod_var);
			// hasFaulted = true;
			__this->___hasFaulted_2 = (bool)1;
			goto IL_0035;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0035:
	{
		// }
		return;
	}
}
// System.Void UniRx.InternalUtil.AsyncLock::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AsyncLock__ctor_m670E11CDB95EED1F5D12F5F908DBA57678FDBFE1 (AsyncLock_t278F618332A769D654B1CCDBF498473CA86A0C57* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Queue<Action> queue = new Queue<Action>();
		Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA* L_0 = (Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA*)il2cpp_codegen_object_new(Queue_1_tDCDB1CEF747EF8D38C6708645EC5FD3799C168BA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272(L_0, Queue_1__ctor_mCB1D86FC102A8C3B82A02702CAEDAE815FE04272_RuntimeMethod_var);
		__this->___queue_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___queue_0), (void*)L_0);
		// private bool isAcquired = false;
		__this->___isAcquired_1 = (bool)0;
		// private bool hasFaulted = false;
		__this->___hasFaulted_2 = (bool)0;
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Void UniRx.InternalUtil.ExceptionExtensions::Throw(System.Exception)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExceptionExtensions_Throw_mB364F2897D89DE7932628B5FA8429C4591FEF544 (Exception_t* ___exception0, const RuntimeMethod* method) 
{
	{
		// System.Runtime.ExceptionServices.ExceptionDispatchInfo.Capture(exception).Throw();
		Exception_t* L_0 = ___exception0;
		ExceptionDispatchInfo_tD7AF19E75FEC22F4A8329FD1E9EDF96615CB2757* L_1;
		L_1 = ExceptionDispatchInfo_Capture_mD989ED7E69753F2E0A2076B60ACA8819F14DA93E(L_0, NULL);
		NullCheck(L_1);
		ExceptionDispatchInfo_Throw_m06F398E346AE94C1CCEB636763A8CB26511F6330(L_1, NULL);
		// throw exception;
		Exception_t* L_2 = ___exception0;
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ExceptionExtensions_Throw_mB364F2897D89DE7932628B5FA8429C4591FEF544_RuntimeMethod_var)));
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
// System.Void UniRx.InternalUtil.MicroCoroutine::.ctor(System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicroCoroutine__ctor_m72DFFCA82743B275E992CA1616D2913F3F9A96E7 (MicroCoroutine_tE1DECE6357A777B3900C660395C67F07D908CABE* __this, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___unhandledExceptionCallback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mDF0106C71BB6BCAC2C40E9C9885FFFFE66D938B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// readonly object runningAndQueueLock = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___runningAndQueueLock_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___runningAndQueueLock_1), (void*)L_0);
		// readonly object arrayLock = new object();
		RuntimeObject* L_1 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_1, NULL);
		__this->___arrayLock_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___arrayLock_2), (void*)L_1);
		// int tail = 0;
		__this->___tail_4 = 0;
		// bool running = false;
		__this->___running_5 = (bool)0;
		// IEnumerator[] coroutines = new IEnumerator[InitialSize];
		IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_2 = (IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A*)(IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A*)SZArrayNew(IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___coroutines_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___coroutines_6), (void*)L_2);
		// Queue<IEnumerator> waitQueue = new Queue<IEnumerator>();
		Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64* L_3 = (Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64*)il2cpp_codegen_object_new(Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Queue_1__ctor_mDF0106C71BB6BCAC2C40E9C9885FFFFE66D938B3(L_3, Queue_1__ctor_mDF0106C71BB6BCAC2C40E9C9885FFFFE66D938B3_RuntimeMethod_var);
		__this->___waitQueue_7 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitQueue_7), (void*)L_3);
		// public MicroCoroutine(Action<Exception> unhandledExceptionCallback)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.unhandledExceptionCallback = unhandledExceptionCallback;
		Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_4 = ___unhandledExceptionCallback0;
		__this->___unhandledExceptionCallback_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___unhandledExceptionCallback_3), (void*)L_4);
		// }
		return;
	}
}
// System.Void UniRx.InternalUtil.MicroCoroutine::AddCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicroCoroutine_AddCoroutine_m56D30BC08D307E41E60066DD93232BCE7F242078 (MicroCoroutine_tE1DECE6357A777B3900C660395C67F07D908CABE* __this, RuntimeObject* ___enumerator0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m168FDF87AE7948888578F24BA2E7B1FD0A2A9587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicroCoroutine_AddCoroutine_m56D30BC08D307E41E60066DD93232BCE7F242078_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m6316FBF2D6918C5F8CE698B35B7992F72506F58D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	{
		// lock (runningAndQueueLock)
		RuntimeObject* L_0 = __this->___runningAndQueueLock_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0031:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003b;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_003b:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (running)
				bool L_4 = __this->___running_5;
				V_2 = L_4;
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_002e_1;
				}
			}
			{
				// waitQueue.Enqueue(enumerator);
				Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64* L_6 = __this->___waitQueue_7;
				RuntimeObject* L_7 = ___enumerator0;
				NullCheck(L_6);
				Queue_1_Enqueue_m6316FBF2D6918C5F8CE698B35B7992F72506F58D(L_6, L_7, Queue_1_Enqueue_m6316FBF2D6918C5F8CE698B35B7992F72506F58D_RuntimeMethod_var);
				// return;
				goto IL_00a7;
			}

IL_002e_1:
			{
				goto IL_003c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003c:
	{
		// lock (arrayLock)
		RuntimeObject* L_8 = __this->___arrayLock_2;
		V_3 = L_8;
		V_4 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009b:
			{// begin finally (depth: 1)
				{
					bool L_9 = V_4;
					if (!L_9)
					{
						goto IL_00a6;
					}
				}
				{
					RuntimeObject* L_10 = V_3;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_10, NULL);
				}

IL_00a6:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_11 = V_3;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_11, (&V_4), NULL);
				// if (coroutines.Length == tail)
				IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_12 = __this->___coroutines_6;
				NullCheck(L_12);
				int32_t L_13 = __this->___tail_4;
				V_5 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_12)->max_length))) == ((int32_t)L_13))? 1 : 0);
				bool L_14 = V_5;
				if (!L_14)
				{
					goto IL_007c_1;
				}
			}
			{
				// Array.Resize(ref coroutines, checked(tail * 2));
				IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A** L_15 = (&__this->___coroutines_6);
				int32_t L_16 = __this->___tail_4;
				if (((int64_t)L_16 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_16 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
					IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MicroCoroutine_AddCoroutine_m56D30BC08D307E41E60066DD93232BCE7F242078_RuntimeMethod_var);
				Array_Resize_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m168FDF87AE7948888578F24BA2E7B1FD0A2A9587(L_15, ((int32_t)il2cpp_codegen_multiply(L_16, 2)), Array_Resize_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m168FDF87AE7948888578F24BA2E7B1FD0A2A9587_RuntimeMethod_var);
			}

IL_007c_1:
			{
				// coroutines[tail++] = enumerator;
				IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_17 = __this->___coroutines_6;
				int32_t L_18 = __this->___tail_4;
				V_6 = L_18;
				int32_t L_19 = V_6;
				__this->___tail_4 = ((int32_t)il2cpp_codegen_add(L_19, 1));
				int32_t L_20 = V_6;
				RuntimeObject* L_21 = ___enumerator0;
				NullCheck(L_17);
				ArrayElementTypeCheck (L_17, L_21);
				(L_17)->SetAt(static_cast<il2cpp_array_size_t>(L_20), (RuntimeObject*)L_21);
				goto IL_00a7;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a7:
	{
		// }
		return;
	}
}
// System.Void UniRx.InternalUtil.MicroCoroutine::Run()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MicroCoroutine_Run_m398649C00025DF88A1BAEDA44BACBF7616E5717F (MicroCoroutine_tE1DECE6357A777B3900C660395C67F07D908CABE* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Resize_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m168FDF87AE7948888578F24BA2E7B1FD0A2A9587_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&MicroCoroutine_Run_m398649C00025DF88A1BAEDA44BACBF7616E5717F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_m0D5593D465771C71DE4D8BE668605D1C9CB23887_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m5E8F5A35E986F1667C97722F3FB70B4E505AC818_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	RuntimeObject* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	Exception_t* V_9 = NULL;
	RuntimeObject* V_10 = NULL;
	bool V_11 = false;
	bool V_12 = false;
	Exception_t* V_13 = NULL;
	bool V_14 = false;
	bool V_15 = false;
	RuntimeObject* V_16 = NULL;
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	bool V_20 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 2> __active_exceptions;
	{
		// lock (runningAndQueueLock)
		RuntimeObject* L_0 = __this->___runningAndQueueLock_1;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001e:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0028;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_0028:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
			// running = true;
			__this->___running_5 = (bool)1;
			goto IL_0029;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0029:
	{
		// lock (arrayLock)
		RuntimeObject* L_4 = __this->___arrayLock_2;
		V_2 = L_4;
		V_3 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_021b:
			{// begin finally (depth: 1)
				{
					bool L_5 = V_3;
					if (!L_5)
					{
						goto IL_0225;
					}
				}
				{
					RuntimeObject* L_6 = V_2;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_6, NULL);
				}

IL_0225:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_7 = V_2;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_7, (&V_3), NULL);
				// var j = tail - 1;
				int32_t L_8 = __this->___tail_4;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_8, 1));
				// for (int i = 0; i < coroutines.Length; i++)
				V_5 = 0;
				goto IL_016c_1;
			}

IL_004e_1:
			{
				// var coroutine = coroutines[i];
				IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_9 = __this->___coroutines_6;
				int32_t L_10 = V_5;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				RuntimeObject* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				V_6 = L_12;
				// if (coroutine != null)
				RuntimeObject* L_13 = V_6;
				V_7 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_13) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_14 = V_7;
				if (!L_14)
				{
					goto IL_00b6_1;
				}
			}
			{
			}
			try
			{// begin try (depth: 2)
				{
					// if (!coroutine.MoveNext())
					RuntimeObject* L_15 = V_6;
					NullCheck(L_15);
					bool L_16;
					L_16 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_15);
					V_8 = (bool)((((int32_t)L_16) == ((int32_t)0))? 1 : 0);
					bool L_17 = V_8;
					if (!L_17)
					{
						goto IL_0085_2;
					}
				}
				{
					// coroutines[i] = null;
					IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_18 = __this->___coroutines_6;
					int32_t L_19 = V_5;
					NullCheck(L_18);
					ArrayElementTypeCheck (L_18, NULL);
					(L_18)->SetAt(static_cast<il2cpp_array_size_t>(L_19), (RuntimeObject*)NULL);
					goto IL_008b_2;
				}

IL_0085_2:
				{
					// continue; // next i
					goto IL_0166_1;
				}

IL_008b_2:
				{
					goto IL_00b5_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_008e_1;
				}
				throw e;
			}

CATCH_008e_1:
			{// begin catch(System.Exception)
				{
					// catch (Exception ex)
					V_9 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					// coroutines[i] = null;
					IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_20 = __this->___coroutines_6;
					int32_t L_21 = V_5;
					NullCheck(L_20);
					ArrayElementTypeCheck (L_20, NULL);
					(L_20)->SetAt(static_cast<il2cpp_array_size_t>(L_21), (RuntimeObject*)NULL);
				}
				try
				{// begin try (depth: 3)
					// unhandledExceptionCallback(ex);
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_22 = __this->___unhandledExceptionCallback_3;
					Exception_t* L_23 = V_9;
					NullCheck(L_22);
					Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_22, L_23, NULL);
					goto IL_00b2_1;
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_00ad_1;
					}
					throw e;
				}

CATCH_00ad_1:
				{// begin catch(System.Object)
					// catch { }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00b2_1;
				}// end catch (depth: 3)

IL_00b2_1:
				{
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_00b5_1;
				}
			}// end catch (depth: 2)

IL_00b5_1:
			{
			}

IL_00b6_1:
			{
				goto IL_014a_1;
			}

IL_00bb_1:
			{
				// var fromTail = coroutines[j];
				IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_24 = __this->___coroutines_6;
				int32_t L_25 = V_4;
				NullCheck(L_24);
				int32_t L_26 = L_25;
				RuntimeObject* L_27 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
				V_10 = L_27;
				// if (fromTail != null)
				RuntimeObject* L_28 = V_10;
				V_11 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_28) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
				bool L_29 = V_11;
				if (!L_29)
				{
					goto IL_0141_1;
				}
			}
			{
			}
			try
			{// begin try (depth: 2)
				{
					// if (!fromTail.MoveNext())
					RuntimeObject* L_30 = V_10;
					NullCheck(L_30);
					bool L_31;
					L_31 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_30);
					V_12 = (bool)((((int32_t)L_31) == ((int32_t)0))? 1 : 0);
					bool L_32 = V_12;
					if (!L_32)
					{
						goto IL_00f7_2;
					}
				}
				{
					// coroutines[j] = null;
					IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_33 = __this->___coroutines_6;
					int32_t L_34 = V_4;
					NullCheck(L_33);
					ArrayElementTypeCheck (L_33, NULL);
					(L_33)->SetAt(static_cast<il2cpp_array_size_t>(L_34), (RuntimeObject*)NULL);
					// j--;
					int32_t L_35 = V_4;
					V_4 = ((int32_t)il2cpp_codegen_subtract(L_35, 1));
					// continue; // next j
					goto IL_014a_1;
				}

IL_00f7_2:
				{
					// coroutines[i] = fromTail;
					IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_36 = __this->___coroutines_6;
					int32_t L_37 = V_5;
					RuntimeObject* L_38 = V_10;
					NullCheck(L_36);
					ArrayElementTypeCheck (L_36, L_38);
					(L_36)->SetAt(static_cast<il2cpp_array_size_t>(L_37), (RuntimeObject*)L_38);
					// coroutines[j] = null;
					IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_39 = __this->___coroutines_6;
					int32_t L_40 = V_4;
					NullCheck(L_39);
					ArrayElementTypeCheck (L_39, NULL);
					(L_39)->SetAt(static_cast<il2cpp_array_size_t>(L_40), (RuntimeObject*)NULL);
					// j--;
					int32_t L_41 = V_4;
					V_4 = ((int32_t)il2cpp_codegen_subtract(L_41, 1));
					// goto NEXT_LOOP; // next i
					goto IL_0163_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0115_1;
				}
				throw e;
			}

CATCH_0115_1:
			{// begin catch(System.Exception)
				{
					// catch (Exception ex)
					V_13 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
					// coroutines[j] = null;
					IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_42 = __this->___coroutines_6;
					int32_t L_43 = V_4;
					NullCheck(L_42);
					ArrayElementTypeCheck (L_42, NULL);
					(L_42)->SetAt(static_cast<il2cpp_array_size_t>(L_43), (RuntimeObject*)NULL);
					// j--;
					int32_t L_44 = V_4;
					V_4 = ((int32_t)il2cpp_codegen_subtract(L_44, 1));
				}
				try
				{// begin try (depth: 3)
					// unhandledExceptionCallback(ex);
					Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_45 = __this->___unhandledExceptionCallback_3;
					Exception_t* L_46 = V_13;
					NullCheck(L_45);
					Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_45, L_46, NULL);
					goto IL_013f_1;
				}// end try (depth: 3)
				catch(Il2CppExceptionWrapper& e)
				{
					if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
					{
						IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
						goto CATCH_013a_1;
					}
					throw e;
				}

CATCH_013a_1:
				{// begin catch(System.Object)
					// catch { }
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_013f_1;
				}// end catch (depth: 3)

IL_013f_1:
				{
					// continue; // next j
					IL2CPP_POP_ACTIVE_EXCEPTION();
					goto IL_014a_1;
				}
			}// end catch (depth: 2)

IL_0141_1:
			{
				// j--;
				int32_t L_47 = V_4;
				V_4 = ((int32_t)il2cpp_codegen_subtract(L_47, 1));
			}

IL_014a_1:
			{
				// while (i < j)
				int32_t L_48 = V_5;
				int32_t L_49 = V_4;
				V_14 = (bool)((((int32_t)L_48) < ((int32_t)L_49))? 1 : 0);
				bool L_50 = V_14;
				if (L_50)
				{
					goto IL_00bb_1;
				}
			}
			{
				// tail = i; // loop end
				int32_t L_51 = V_5;
				__this->___tail_4 = L_51;
				// break; // LOOP END
				goto IL_0181_1;
			}

IL_0163_1:
			{
				// continue;
				goto IL_0166_1;
			}

IL_0166_1:
			{
				// for (int i = 0; i < coroutines.Length; i++)
				int32_t L_52 = V_5;
				V_5 = ((int32_t)il2cpp_codegen_add(L_52, 1));
			}

IL_016c_1:
			{
				// for (int i = 0; i < coroutines.Length; i++)
				int32_t L_53 = V_5;
				IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_54 = __this->___coroutines_6;
				NullCheck(L_54);
				V_15 = (bool)((((int32_t)L_53) < ((int32_t)((int32_t)(((RuntimeArray*)L_54)->max_length))))? 1 : 0);
				bool L_55 = V_15;
				if (L_55)
				{
					goto IL_004e_1;
				}
			}

IL_0181_1:
			{
				// lock (runningAndQueueLock)
				RuntimeObject* L_56 = __this->___runningAndQueueLock_1;
				V_16 = L_56;
				V_17 = (bool)0;
			}
			{
				auto __finallyBlock = il2cpp::utils::Finally([&]
				{

FINALLY_020b_1:
					{// begin finally (depth: 2)
						{
							bool L_57 = V_17;
							if (!L_57)
							{
								goto IL_0217_1;
							}
						}
						{
							RuntimeObject* L_58 = V_16;
							Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_58, NULL);
						}

IL_0217_1:
						{
							return;
						}
					}// end finally (depth: 2)
				});
				try
				{// begin try (depth: 2)
					{
						RuntimeObject* L_59 = V_16;
						Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_59, (&V_17), NULL);
						// running = false;
						__this->___running_5 = (bool)0;
						goto IL_01f4_2;
					}

IL_01a0_2:
					{
						// if (coroutines.Length == tail)
						IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_60 = __this->___coroutines_6;
						NullCheck(L_60);
						int32_t L_61 = __this->___tail_4;
						V_18 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_60)->max_length))) == ((int32_t)L_61))? 1 : 0);
						bool L_62 = V_18;
						if (!L_62)
						{
							goto IL_01cd_2;
						}
					}
					{
						// Array.Resize(ref coroutines, checked(tail * 2));
						IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A** L_63 = (&__this->___coroutines_6);
						int32_t L_64 = __this->___tail_4;
						if (((int64_t)L_64 * (int64_t)2 < (int64_t)kIl2CppInt32Min) || ((int64_t)L_64 * (int64_t)2 > (int64_t)kIl2CppInt32Max))
							IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), MicroCoroutine_Run_m398649C00025DF88A1BAEDA44BACBF7616E5717F_RuntimeMethod_var);
						Array_Resize_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m168FDF87AE7948888578F24BA2E7B1FD0A2A9587(L_63, ((int32_t)il2cpp_codegen_multiply(L_64, 2)), Array_Resize_TisIEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_m168FDF87AE7948888578F24BA2E7B1FD0A2A9587_RuntimeMethod_var);
					}

IL_01cd_2:
					{
						// coroutines[tail++] = waitQueue.Dequeue();
						IEnumeratorU5BU5D_tC12A5EDF69B5926D22A47F36F800785CA737530A* L_65 = __this->___coroutines_6;
						int32_t L_66 = __this->___tail_4;
						V_19 = L_66;
						int32_t L_67 = V_19;
						__this->___tail_4 = ((int32_t)il2cpp_codegen_add(L_67, 1));
						int32_t L_68 = V_19;
						Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64* L_69 = __this->___waitQueue_7;
						NullCheck(L_69);
						RuntimeObject* L_70;
						L_70 = Queue_1_Dequeue_m0D5593D465771C71DE4D8BE668605D1C9CB23887(L_69, Queue_1_Dequeue_m0D5593D465771C71DE4D8BE668605D1C9CB23887_RuntimeMethod_var);
						NullCheck(L_65);
						ArrayElementTypeCheck (L_65, L_70);
						(L_65)->SetAt(static_cast<il2cpp_array_size_t>(L_68), (RuntimeObject*)L_70);
					}

IL_01f4_2:
					{
						// while (waitQueue.Count != 0)
						Queue_1_t1F50FCA919F8B90034243240BD100DADAFD2FC64* L_71 = __this->___waitQueue_7;
						NullCheck(L_71);
						int32_t L_72;
						L_72 = Queue_1_get_Count_m5E8F5A35E986F1667C97722F3FB70B4E505AC818_inline(L_71, Queue_1_get_Count_m5E8F5A35E986F1667C97722F3FB70B4E505AC818_RuntimeMethod_var);
						V_20 = (bool)((!(((uint32_t)L_72) <= ((uint32_t)0)))? 1 : 0);
						bool L_73 = V_20;
						if (L_73)
						{
							goto IL_01a0_2;
						}
					}
					{
						goto IL_0218_1;
					}
				}// end try (depth: 2)
				catch(Il2CppExceptionWrapper& e)
				{
					__finallyBlock.StoreException(e.ex);
				}
			}

IL_0218_1:
			{
				goto IL_0226;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0226:
	{
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
// System.Void UniRx.InternalUtil.ScheduledItem::.ctor(System.Action,System.TimeSpan)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduledItem__ctor_m96D0AA2AA70EF1DA3706A7F03FADFB4E06407A4B (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* __this, Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___action0, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___dueTime1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly BooleanDisposable _disposable = new BooleanDisposable();
		BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98* L_0 = (BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98*)il2cpp_codegen_object_new(BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		BooleanDisposable__ctor_mBCC8F004A91D3D2A5E786D676DA9EA1D74353733(L_0, NULL);
		__this->____disposable_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____disposable_0), (void*)L_0);
		// public ScheduledItem(Action action, TimeSpan dueTime)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _dueTime = dueTime;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = ___dueTime1;
		__this->____dueTime_1 = L_1;
		// _action = action;
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_2 = ___action0;
		__this->____action_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____action_2), (void*)L_2);
		// }
		return;
	}
}
// System.TimeSpan UniRx.InternalUtil.ScheduledItem::get_DueTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ScheduledItem_get_DueTime_mD86E9826893EB30066ECC28DA809D4C9EDC89F40 (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* __this, const RuntimeMethod* method) 
{
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// get { return _dueTime; }
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_0 = __this->____dueTime_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// get { return _dueTime; }
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_1 = V_0;
		return L_1;
	}
}
// System.Void UniRx.InternalUtil.ScheduledItem::Invoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScheduledItem_Invoke_m8EEFF0F52EB3D6768E02C1B246FE46687D9B8AAB (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// if (!_disposable.IsDisposed)
		BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98* L_0 = __this->____disposable_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = BooleanDisposable_get_IsDisposed_mB2799FBA1D1B1D28293F58C07D8D85EDEA3DD270_inline(L_0, NULL);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0021;
		}
	}
	{
		// _action();
		Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* L_3 = __this->____action_2;
		NullCheck(L_3);
		Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline(L_3, NULL);
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Int32 UniRx.InternalUtil.ScheduledItem::CompareTo(UniRx.InternalUtil.ScheduledItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScheduledItem_CompareTo_mFF0AAB25BA949CD9324FB1F94B51A78023876942 (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* __this, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t V_1 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (object.ReferenceEquals(other, null))
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_0 = ___other0;
		V_0 = (bool)((((RuntimeObject*)(ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063*)L_0) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_000d;
		}
	}
	{
		// return 1;
		V_1 = 1;
		goto IL_0024;
	}

IL_000d:
	{
		// return DueTime.CompareTo(other.DueTime);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_2;
		L_2 = ScheduledItem_get_DueTime_mD86E9826893EB30066ECC28DA809D4C9EDC89F40(__this, NULL);
		V_2 = L_2;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_3 = ___other0;
		NullCheck(L_3);
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_4;
		L_4 = ScheduledItem_get_DueTime_mD86E9826893EB30066ECC28DA809D4C9EDC89F40(L_3, NULL);
		int32_t L_5;
		L_5 = TimeSpan_CompareTo_m85916E1968FD4309A3CFCBCBC0E3DF2E9AEB0FD3((&V_2), L_4, NULL);
		V_1 = L_5;
		goto IL_0024;
	}

IL_0024:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Boolean UniRx.InternalUtil.ScheduledItem::op_LessThan(UniRx.InternalUtil.ScheduledItem,UniRx.InternalUtil.ScheduledItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScheduledItem_op_LessThan_mB78C059F09ABD9B7BF5EE08C1A4DFB3E13615041 (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___left0, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___right1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return left.CompareTo(right) < 0;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_0 = ___left0;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_1 = ___right1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ScheduledItem_CompareTo_mFF0AAB25BA949CD9324FB1F94B51A78023876942(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UniRx.InternalUtil.ScheduledItem::op_LessThanOrEqual(UniRx.InternalUtil.ScheduledItem,UniRx.InternalUtil.ScheduledItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScheduledItem_op_LessThanOrEqual_m4E7D3AE2A78EAFB745F3115A4B45ACDCB35CF46E (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___left0, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___right1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return left.CompareTo(right) <= 0;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_0 = ___left0;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_1 = ___right1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ScheduledItem_CompareTo_mFF0AAB25BA949CD9324FB1F94B51A78023876942(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_2) > ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UniRx.InternalUtil.ScheduledItem::op_GreaterThan(UniRx.InternalUtil.ScheduledItem,UniRx.InternalUtil.ScheduledItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScheduledItem_op_GreaterThan_m6066D32D8E5ACAA0AB89AAFB4DBC122999D79F8E (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___left0, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___right1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return left.CompareTo(right) > 0;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_0 = ___left0;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_1 = ___right1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ScheduledItem_CompareTo_mFF0AAB25BA949CD9324FB1F94B51A78023876942(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) > ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UniRx.InternalUtil.ScheduledItem::op_GreaterThanOrEqual(UniRx.InternalUtil.ScheduledItem,UniRx.InternalUtil.ScheduledItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScheduledItem_op_GreaterThanOrEqual_mA440FA580A99530F93D647B82D806CADE9A39D82 (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___left0, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___right1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return left.CompareTo(right) >= 0;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_0 = ___left0;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_1 = ___right1;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ScheduledItem_CompareTo_mFF0AAB25BA949CD9324FB1F94B51A78023876942(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)((((int32_t)L_2) < ((int32_t)0))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0011;
	}

IL_0011:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UniRx.InternalUtil.ScheduledItem::op_Equality(UniRx.InternalUtil.ScheduledItem,UniRx.InternalUtil.ScheduledItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScheduledItem_op_Equality_m701657489E2CA5476A1B240C50B62E4FFE803BBE (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___left0, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___right1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return object.ReferenceEquals(left, right);
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_0 = ___left0;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_1 = ___right1;
		V_0 = (bool)((((RuntimeObject*)(ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063*)L_0) == ((RuntimeObject*)(ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063*)L_1))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_2 = V_0;
		return L_2;
	}
}
// System.Boolean UniRx.InternalUtil.ScheduledItem::op_Inequality(UniRx.InternalUtil.ScheduledItem,UniRx.InternalUtil.ScheduledItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScheduledItem_op_Inequality_m58BAE1A6F5BF5481836BCC11DE61729D9C0EAA55 (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___left0, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___right1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return !(left == right);
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_0 = ___left0;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_1 = ___right1;
		bool L_2;
		L_2 = ScheduledItem_op_Equality_m701657489E2CA5476A1B240C50B62E4FFE803BBE(L_0, L_1, NULL);
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		goto IL_000e;
	}

IL_000e:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// System.Boolean UniRx.InternalUtil.ScheduledItem::Equals(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScheduledItem_Equals_mBEC36B10FEEB44CF42463D398D9E7353275019FF (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// return object.ReferenceEquals(this, obj);
		RuntimeObject* L_0 = ___obj0;
		V_0 = (bool)((((RuntimeObject*)(ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063*)__this) == ((RuntimeObject*)(RuntimeObject*)L_0))? 1 : 0);
		goto IL_0008;
	}

IL_0008:
	{
		// }
		bool L_1 = V_0;
		return L_1;
	}
}
// System.Int32 UniRx.InternalUtil.ScheduledItem::GetHashCode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ScheduledItem_GetHashCode_m0C8468EB06E663167633003506A2C482C6D0C31C (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return base.GetHashCode();
		int32_t L_0;
		L_0 = Object_GetHashCode_m372C5A7AB16CAC13307C11C4256D706CE57E090C(__this, NULL);
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		int32_t L_1 = V_0;
		return L_1;
	}
}
// System.IDisposable UniRx.InternalUtil.ScheduledItem::get_Cancellation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ScheduledItem_get_Cancellation_mFCE929867ED408F05FCBB6B42E4D2160E9F8F343 (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		// return _disposable;
		BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98* L_0 = __this->____disposable_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		RuntimeObject* L_1 = V_0;
		return L_1;
	}
}
// System.Boolean UniRx.InternalUtil.ScheduledItem::get_IsCanceled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ScheduledItem_get_IsCanceled_m07A2B34ECFE956945BF83ED05AD3CD3063ADDD9D (ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* __this, const RuntimeMethod* method) 
{
	bool V_0 = false;
	{
		// get { return _disposable.IsDisposed; }
		BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98* L_0 = __this->____disposable_0;
		NullCheck(L_0);
		bool L_1;
		L_1 = BooleanDisposable_get_IsDisposed_mB2799FBA1D1B1D28293F58C07D8D85EDEA3DD270_inline(L_0, NULL);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// get { return _disposable.IsDisposed; }
		bool L_2 = V_0;
		return L_2;
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
// System.Void UniRx.InternalUtil.SchedulerQueue::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchedulerQueue__ctor_m8C62D2225A3BC75442ADF8FAD7414747FC3CCEFA (SchedulerQueue_t094B7C6EF6ECE32C389F9D403CA8A46CACFBD5B6* __this, const RuntimeMethod* method) 
{
	{
		// : this(1024)
		SchedulerQueue__ctor_m87BF7A69EF09192649F9501174504CE80E803F4C(__this, ((int32_t)1024), NULL);
		// }
		return;
	}
}
// System.Void UniRx.InternalUtil.SchedulerQueue::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchedulerQueue__ctor_m87BF7A69EF09192649F9501174504CE80E803F4C (SchedulerQueue_t094B7C6EF6ECE32C389F9D403CA8A46CACFBD5B6* __this, int32_t ___capacity0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1__ctor_m06AFE26E845AAD29AD18C8549DF2A26ECE0B4452_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// public SchedulerQueue(int capacity)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// if (capacity < 0)
		int32_t L_0 = ___capacity0;
		V_0 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// throw new ArgumentOutOfRangeException("capacity");
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_2 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_2);
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_2, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC37D78082ACFC8DEE7B32D9351C6E433A074FEC7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_2, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&SchedulerQueue__ctor_m87BF7A69EF09192649F9501174504CE80E803F4C_RuntimeMethod_var)));
	}

IL_001b:
	{
		// _queue = new PriorityQueue<ScheduledItem>(capacity);
		int32_t L_3 = ___capacity0;
		PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* L_4 = (PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B*)il2cpp_codegen_object_new(PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		PriorityQueue_1__ctor_m06AFE26E845AAD29AD18C8549DF2A26ECE0B4452(L_4, L_3, PriorityQueue_1__ctor_m06AFE26E845AAD29AD18C8549DF2A26ECE0B4452_RuntimeMethod_var);
		__this->____queue_0 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____queue_0), (void*)L_4);
		// }
		return;
	}
}
// System.Int32 UniRx.InternalUtil.SchedulerQueue::get_Count()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SchedulerQueue_get_Count_m1F6ADF5DE4384AB3F74FCA298B55D181ADDC283A (SchedulerQueue_t094B7C6EF6ECE32C389F9D403CA8A46CACFBD5B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_get_Count_m3D5B2167CCE7C6050B163B798BCF5531E52D49E1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return _queue.Count;
		PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* L_0 = __this->____queue_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = PriorityQueue_1_get_Count_m3D5B2167CCE7C6050B163B798BCF5531E52D49E1(L_0, PriorityQueue_1_get_Count_m3D5B2167CCE7C6050B163B798BCF5531E52D49E1_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		int32_t L_2 = V_0;
		return L_2;
	}
}
// System.Void UniRx.InternalUtil.SchedulerQueue::Enqueue(UniRx.InternalUtil.ScheduledItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SchedulerQueue_Enqueue_mCC900B26F47832430C3563C195C13EA7BD09DF0F (SchedulerQueue_t094B7C6EF6ECE32C389F9D403CA8A46CACFBD5B6* __this, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___scheduledItem0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Enqueue_mC32BFF636AEEF3542EFD46F32B95D2D918D8301A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _queue.Enqueue(scheduledItem);
		PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* L_0 = __this->____queue_0;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_1 = ___scheduledItem0;
		NullCheck(L_0);
		PriorityQueue_1_Enqueue_mC32BFF636AEEF3542EFD46F32B95D2D918D8301A(L_0, L_1, PriorityQueue_1_Enqueue_mC32BFF636AEEF3542EFD46F32B95D2D918D8301A_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Boolean UniRx.InternalUtil.SchedulerQueue::Remove(UniRx.InternalUtil.ScheduledItem)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool SchedulerQueue_Remove_m8599653B69AC9AB46DF17C31EEED708215CC5698 (SchedulerQueue_t094B7C6EF6ECE32C389F9D403CA8A46CACFBD5B6* __this, ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* ___scheduledItem0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Remove_m192F3BACD0D506F06B8BA0E367D72DE1F939BC8A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// return _queue.Remove(scheduledItem);
		PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* L_0 = __this->____queue_0;
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_1 = ___scheduledItem0;
		NullCheck(L_0);
		bool L_2;
		L_2 = PriorityQueue_1_Remove_m192F3BACD0D506F06B8BA0E367D72DE1F939BC8A(L_0, L_1, PriorityQueue_1_Remove_m192F3BACD0D506F06B8BA0E367D72DE1F939BC8A_RuntimeMethod_var);
		V_0 = L_2;
		goto IL_0010;
	}

IL_0010:
	{
		// }
		bool L_3 = V_0;
		return L_3;
	}
}
// UniRx.InternalUtil.ScheduledItem UniRx.InternalUtil.SchedulerQueue::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* SchedulerQueue_Dequeue_m7E06340DEF8A531AB19F023811C8ECA9E010BF1A (SchedulerQueue_t094B7C6EF6ECE32C389F9D403CA8A46CACFBD5B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Dequeue_mFB1B40E73026C1283ABA96FFE6072C08848A0D99_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* V_0 = NULL;
	{
		// return _queue.Dequeue();
		PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* L_0 = __this->____queue_0;
		NullCheck(L_0);
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_1;
		L_1 = PriorityQueue_1_Dequeue_mFB1B40E73026C1283ABA96FFE6072C08848A0D99(L_0, PriorityQueue_1_Dequeue_mFB1B40E73026C1283ABA96FFE6072C08848A0D99_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_2 = V_0;
		return L_2;
	}
}
// UniRx.InternalUtil.ScheduledItem UniRx.InternalUtil.SchedulerQueue::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* SchedulerQueue_Peek_m57029F3C0E314F3729D6E58B371C0346C1870F14 (SchedulerQueue_t094B7C6EF6ECE32C389F9D403CA8A46CACFBD5B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PriorityQueue_1_Peek_m7D1628BB82B3D6FAFC256BCA6041DE8FC2C90711_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* V_0 = NULL;
	{
		// return _queue.Peek();
		PriorityQueue_1_tFAA658ADE2EE3C85DBC2046609205F925C87E54B* L_0 = __this->____queue_0;
		NullCheck(L_0);
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_1;
		L_1 = PriorityQueue_1_Peek_m7D1628BB82B3D6FAFC256BCA6041DE8FC2C90711(L_0, PriorityQueue_1_Peek_m7D1628BB82B3D6FAFC256BCA6041DE8FC2C90711_RuntimeMethod_var);
		V_0 = L_1;
		goto IL_000f;
	}

IL_000f:
	{
		// }
		ScheduledItem_tF99138BEBC29B968FE32EA9B0321A929212B9063* L_2 = V_0;
		return L_2;
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
// System.Void UniRx.InternalUtil.ThreadSafeQueueWorker::Enqueue(System.Action`1<System.Object>,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeQueueWorker_Enqueue_mC44A7BC55CB2F547D215F0581A01EE7D65B931DC (ThreadSafeQueueWorker_t114D0BEE5703E6CB69A8EB7EEC61694014E63DC8* __this, Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___action0, RuntimeObject* ___state1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	int32_t V_4 = 0;
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* V_5 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_6 = NULL;
	bool V_7 = false;
	bool V_8 = false;
	int32_t V_9 = 0;
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* V_10 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_11 = NULL;
	bool V_12 = false;
	{
		// lock (gate)
		RuntimeObject* L_0 = __this->___gate_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0183:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_018d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_018d:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (dequing)
				bool L_4 = __this->___dequing_3;
				V_2 = L_4;
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_00d2_1;
				}
			}
			{
				// if (waitingList.Length == waitingListCount)
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_6 = __this->___waitingList_8;
				NullCheck(L_6);
				int32_t L_7 = __this->___waitingListCount_7;
				V_3 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_6)->max_length))) == ((int32_t)L_7))? 1 : 0);
				bool L_8 = V_3;
				if (!L_8)
				{
					goto IL_00a2_1;
				}
			}
			{
				// var newLength = waitingListCount * 2;
				int32_t L_9 = __this->___waitingListCount_7;
				V_4 = ((int32_t)il2cpp_codegen_multiply(L_9, 2));
				// if ((uint)newLength > MaxArrayLength) newLength = MaxArrayLength;
				int32_t L_10 = V_4;
				V_7 = (bool)((!(((uint32_t)L_10) <= ((uint32_t)((int32_t)2146435071))))? 1 : 0);
				bool L_11 = V_7;
				if (!L_11)
				{
					goto IL_0057_1;
				}
			}
			{
				// if ((uint)newLength > MaxArrayLength) newLength = MaxArrayLength;
				V_4 = ((int32_t)2146435071);
			}

IL_0057_1:
			{
				// var newArray = new Action<object>[newLength];
				int32_t L_12 = V_4;
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_13 = (Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D*)(Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D*)SZArrayNew(Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D_il2cpp_TypeInfo_var, (uint32_t)L_12);
				V_5 = L_13;
				// var newArrayState = new object[newLength];
				int32_t L_14 = V_4;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_15 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_14);
				V_6 = L_15;
				// Array.Copy(waitingList, newArray, waitingListCount);
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_16 = __this->___waitingList_8;
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_17 = V_5;
				int32_t L_18 = __this->___waitingListCount_7;
				Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F((RuntimeArray*)L_16, (RuntimeArray*)L_17, L_18, NULL);
				// Array.Copy(waitingStates, newArrayState, waitingListCount);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = __this->___waitingStates_9;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_20 = V_6;
				int32_t L_21 = __this->___waitingListCount_7;
				Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F((RuntimeArray*)L_19, (RuntimeArray*)L_20, L_21, NULL);
				// waitingList = newArray;
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_22 = V_5;
				__this->___waitingList_8 = L_22;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___waitingList_8), (void*)L_22);
				// waitingStates = newArrayState;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_23 = V_6;
				__this->___waitingStates_9 = L_23;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___waitingStates_9), (void*)L_23);
			}

IL_00a2_1:
			{
				// waitingList[waitingListCount] = action;
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_24 = __this->___waitingList_8;
				int32_t L_25 = __this->___waitingListCount_7;
				Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_26 = ___action0;
				NullCheck(L_24);
				ArrayElementTypeCheck (L_24, L_26);
				(L_24)->SetAt(static_cast<il2cpp_array_size_t>(L_25), (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_26);
				// waitingStates[waitingListCount] = state;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_27 = __this->___waitingStates_9;
				int32_t L_28 = __this->___waitingListCount_7;
				RuntimeObject* L_29 = ___state1;
				NullCheck(L_27);
				ArrayElementTypeCheck (L_27, L_29);
				(L_27)->SetAt(static_cast<il2cpp_array_size_t>(L_28), (RuntimeObject*)L_29);
				// waitingListCount++;
				int32_t L_30 = __this->___waitingListCount_7;
				__this->___waitingListCount_7 = ((int32_t)il2cpp_codegen_add(L_30, 1));
				goto IL_0180_1;
			}

IL_00d2_1:
			{
				// if (actionList.Length == actionListCount)
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_31 = __this->___actionList_5;
				NullCheck(L_31);
				int32_t L_32 = __this->___actionListCount_4;
				V_8 = (bool)((((int32_t)((int32_t)(((RuntimeArray*)L_31)->max_length))) == ((int32_t)L_32))? 1 : 0);
				bool L_33 = V_8;
				if (!L_33)
				{
					goto IL_0155_1;
				}
			}
			{
				// var newLength = actionListCount * 2;
				int32_t L_34 = __this->___actionListCount_4;
				V_9 = ((int32_t)il2cpp_codegen_multiply(L_34, 2));
				// if ((uint)newLength > MaxArrayLength) newLength = MaxArrayLength;
				int32_t L_35 = V_9;
				V_12 = (bool)((!(((uint32_t)L_35) <= ((uint32_t)((int32_t)2146435071))))? 1 : 0);
				bool L_36 = V_12;
				if (!L_36)
				{
					goto IL_010a_1;
				}
			}
			{
				// if ((uint)newLength > MaxArrayLength) newLength = MaxArrayLength;
				V_9 = ((int32_t)2146435071);
			}

IL_010a_1:
			{
				// var newArray = new Action<object>[newLength];
				int32_t L_37 = V_9;
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_38 = (Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D*)(Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D*)SZArrayNew(Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D_il2cpp_TypeInfo_var, (uint32_t)L_37);
				V_10 = L_38;
				// var newArrayState = new object[newLength];
				int32_t L_39 = V_9;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_40 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)L_39);
				V_11 = L_40;
				// Array.Copy(actionList, newArray, actionListCount);
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_41 = __this->___actionList_5;
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_42 = V_10;
				int32_t L_43 = __this->___actionListCount_4;
				Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F((RuntimeArray*)L_41, (RuntimeArray*)L_42, L_43, NULL);
				// Array.Copy(actionStates, newArrayState, actionListCount);
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_44 = __this->___actionStates_6;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_45 = V_11;
				int32_t L_46 = __this->___actionListCount_4;
				Array_Copy_m4239F97ECC23A71F4191B8722362A1AA38E2E98F((RuntimeArray*)L_44, (RuntimeArray*)L_45, L_46, NULL);
				// actionList = newArray;
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_47 = V_10;
				__this->___actionList_5 = L_47;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___actionList_5), (void*)L_47);
				// actionStates = newArrayState;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_48 = V_11;
				__this->___actionStates_6 = L_48;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___actionStates_6), (void*)L_48);
			}

IL_0155_1:
			{
				// actionList[actionListCount] = action;
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_49 = __this->___actionList_5;
				int32_t L_50 = __this->___actionListCount_4;
				Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_51 = ___action0;
				NullCheck(L_49);
				ArrayElementTypeCheck (L_49, L_51);
				(L_49)->SetAt(static_cast<il2cpp_array_size_t>(L_50), (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)L_51);
				// actionStates[actionListCount] = state;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_52 = __this->___actionStates_6;
				int32_t L_53 = __this->___actionListCount_4;
				RuntimeObject* L_54 = ___state1;
				NullCheck(L_52);
				ArrayElementTypeCheck (L_52, L_54);
				(L_52)->SetAt(static_cast<il2cpp_array_size_t>(L_53), (RuntimeObject*)L_54);
				// actionListCount++;
				int32_t L_55 = __this->___actionListCount_4;
				__this->___actionListCount_4 = ((int32_t)il2cpp_codegen_add(L_55, 1));
			}

IL_0180_1:
			{
				goto IL_018e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_018e:
	{
		// }
		return;
	}
}
// System.Void UniRx.InternalUtil.ThreadSafeQueueWorker::ExecuteAll(System.Action`1<System.Exception>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeQueueWorker_ExecuteAll_m3F63FC70B326BE10C80D9B5C861671F2352B7031 (ThreadSafeQueueWorker_t114D0BEE5703E6CB69A8EB7EEC61694014E63DC8* __this, Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* ___unhandledExceptionCallback0, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	Exception_t* V_6 = NULL;
	bool V_7 = false;
	RuntimeObject* V_8 = NULL;
	bool V_9 = false;
	Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* V_10 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_11 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		// lock (gate)
		RuntimeObject* L_0 = __this->___gate_2;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_003a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_2, NULL);
				}

IL_003a:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_3, (&V_1), NULL);
				// if (actionListCount == 0) return;
				int32_t L_4 = __this->___actionListCount_4;
				V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
				bool L_5 = V_2;
				if (!L_5)
				{
					goto IL_0026_1;
				}
			}
			{
				// if (actionListCount == 0) return;
				goto IL_0114;
			}

IL_0026_1:
			{
				// dequing = true;
				__this->___dequing_3 = (bool)1;
				goto IL_003b;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003b:
	{
		// for (int i = 0; i < actionListCount; i++)
		V_3 = 0;
		goto IL_008d;
	}

IL_003f:
	{
		// var action = actionList[i];
		Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_6 = __this->___actionList_5;
		int32_t L_7 = V_3;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_4 = L_9;
		// var state = actionStates[i];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_10 = __this->___actionStates_6;
		int32_t L_11 = V_3;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		RuntimeObject* L_13 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		V_5 = L_13;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0073:
			{// begin finally (depth: 1)
				// actionList[i] = null;
				Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_14 = __this->___actionList_5;
				int32_t L_15 = V_3;
				NullCheck(L_14);
				ArrayElementTypeCheck (L_14, NULL);
				(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87*)NULL);
				// actionStates[i] = null;
				ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_16 = __this->___actionStates_6;
				int32_t L_17 = V_3;
				NullCheck(L_16);
				ArrayElementTypeCheck (L_16, NULL);
				(L_16)->SetAt(static_cast<il2cpp_array_size_t>(L_17), (RuntimeObject*)NULL);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			try
			{// begin try (depth: 2)
				// action(state);
				Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_18 = V_4;
				RuntimeObject* L_19 = V_5;
				NullCheck(L_18);
				Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_inline(L_18, L_19, NULL);
				goto IL_0071_1;
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
				{
					IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
					goto CATCH_0062_1;
				}
				throw e;
			}

CATCH_0062_1:
			{// begin catch(System.Exception)
				// catch (Exception ex)
				V_6 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
				// unhandledExceptionCallback(ex);
				Action_1_tAFBD759E01ADE1CCF9C2015D5EFB3E69A9F26F04* L_20 = ___unhandledExceptionCallback0;
				Exception_t* L_21 = V_6;
				NullCheck(L_20);
				Action_1_Invoke_m43B5C4C0F292CE3E07CB03B46D8F960ACF7D6A58_inline(L_20, L_21, NULL);
				IL2CPP_POP_ACTIVE_EXCEPTION();
				goto IL_0071_1;
			}// end catch (depth: 2)

IL_0071_1:
			{
				goto IL_0088;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		// for (int i = 0; i < actionListCount; i++)
		int32_t L_22 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_22, 1));
	}

IL_008d:
	{
		// for (int i = 0; i < actionListCount; i++)
		int32_t L_23 = V_3;
		int32_t L_24 = __this->___actionListCount_4;
		V_7 = (bool)((((int32_t)L_23) < ((int32_t)L_24))? 1 : 0);
		bool L_25 = V_7;
		if (L_25)
		{
			goto IL_003f;
		}
	}
	{
		// lock (gate)
		RuntimeObject* L_26 = __this->___gate_2;
		V_8 = L_26;
		V_9 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0107:
			{// begin finally (depth: 1)
				{
					bool L_27 = V_9;
					if (!L_27)
					{
						goto IL_0113;
					}
				}
				{
					RuntimeObject* L_28 = V_8;
					Monitor_Exit_m25A154960F91391E10E4CDA245ECDF4BA94D56A9(L_28, NULL);
				}

IL_0113:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			RuntimeObject* L_29 = V_8;
			Monitor_Enter_m00506757392936AA62DBE2C5FFBEE69EE920C4D4(L_29, (&V_9), NULL);
			// dequing = false;
			__this->___dequing_3 = (bool)0;
			// var swapTempActionList = actionList;
			Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_30 = __this->___actionList_5;
			V_10 = L_30;
			// var swapTempActionStates = actionStates;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_31 = __this->___actionStates_6;
			V_11 = L_31;
			// actionListCount = waitingListCount;
			int32_t L_32 = __this->___waitingListCount_7;
			__this->___actionListCount_4 = L_32;
			// actionList = waitingList;
			Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_33 = __this->___waitingList_8;
			__this->___actionList_5 = L_33;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___actionList_5), (void*)L_33);
			// actionStates = waitingStates;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_34 = __this->___waitingStates_9;
			__this->___actionStates_6 = L_34;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___actionStates_6), (void*)L_34);
			// waitingListCount = 0;
			__this->___waitingListCount_7 = 0;
			// waitingList = swapTempActionList;
			Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_35 = V_10;
			__this->___waitingList_8 = L_35;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___waitingList_8), (void*)L_35);
			// waitingStates = swapTempActionStates;
			ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_36 = V_11;
			__this->___waitingStates_9 = L_36;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___waitingStates_9), (void*)L_36);
			goto IL_0114;
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0114:
	{
		// }
		return;
	}
}
// System.Void UniRx.InternalUtil.ThreadSafeQueueWorker::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThreadSafeQueueWorker__ctor_m566B50FA7598DE8CF9887FEA1EDE2ED0F0F80D31 (ThreadSafeQueueWorker_t114D0BEE5703E6CB69A8EB7EEC61694014E63DC8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// object gate = new object();
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___gate_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gate_2), (void*)L_0);
		// bool dequing = false;
		__this->___dequing_3 = (bool)0;
		// int actionListCount = 0;
		__this->___actionListCount_4 = 0;
		// Action<object>[] actionList = new Action<object>[InitialSize];
		Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_1 = (Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D*)(Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D*)SZArrayNew(Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___actionList_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actionList_5), (void*)L_1);
		// object[] actionStates = new object[InitialSize];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___actionStates_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___actionStates_6), (void*)L_2);
		// int waitingListCount = 0;
		__this->___waitingListCount_7 = 0;
		// Action<object>[] waitingList = new Action<object>[InitialSize];
		Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D* L_3 = (Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D*)(Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D*)SZArrayNew(Action_1U5BU5D_t9AF7A60AA589F7071315F3DA2F77CD32CB43FB5D_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___waitingList_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitingList_8), (void*)L_3);
		// object[] waitingStates = new object[InitialSize];
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)((int32_t)16));
		__this->___waitingStates_9 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___waitingStates_9), (void*)L_4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Object UniRx.InternalUtil.UnityEqualityComparer::GetDefaultHelper(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UnityEqualityComparer_GetDefaultHelper_mBA9BC0D1D2B7A9340DD97C37BE92FE13A9C8AC9B (Type_t* ___type0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	bool V_13 = false;
	bool V_14 = false;
	{
		// var t = type.TypeHandle;
		Type_t* L_0 = ___type0;
		NullCheck(L_0);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1;
		L_1 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_0);
		V_0 = L_1;
		// if (t.Equals(vector2Type)) return (object)UnityEqualityComparer.Vector2;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___vector2Type_8;
		bool L_3;
		L_3 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_2, NULL);
		V_1 = L_3;
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_0023;
		}
	}
	{
		// if (t.Equals(vector2Type)) return (object)UnityEqualityComparer.Vector2;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_5 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector2_0;
		V_2 = L_5;
		goto IL_0172;
	}

IL_0023:
	{
		// if (t.Equals(vector3Type)) return (object)UnityEqualityComparer.Vector3;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_6 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___vector3Type_9;
		bool L_7;
		L_7 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_6, NULL);
		V_3 = L_7;
		bool L_8 = V_3;
		if (!L_8)
		{
			goto IL_003e;
		}
	}
	{
		// if (t.Equals(vector3Type)) return (object)UnityEqualityComparer.Vector3;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_9 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector3_1;
		V_2 = L_9;
		goto IL_0172;
	}

IL_003e:
	{
		// if (t.Equals(vector4Type)) return (object)UnityEqualityComparer.Vector4;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___vector4Type_10;
		bool L_11;
		L_11 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_10, NULL);
		V_4 = L_11;
		bool L_12 = V_4;
		if (!L_12)
		{
			goto IL_005b;
		}
	}
	{
		// if (t.Equals(vector4Type)) return (object)UnityEqualityComparer.Vector4;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_13 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector4_2;
		V_2 = L_13;
		goto IL_0172;
	}

IL_005b:
	{
		// if (t.Equals(colorType)) return (object)UnityEqualityComparer.Color;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___colorType_11;
		bool L_15;
		L_15 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_14, NULL);
		V_5 = L_15;
		bool L_16 = V_5;
		if (!L_16)
		{
			goto IL_0078;
		}
	}
	{
		// if (t.Equals(colorType)) return (object)UnityEqualityComparer.Color;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_17 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Color_3;
		V_2 = L_17;
		goto IL_0172;
	}

IL_0078:
	{
		// if (t.Equals(color32Type)) return (object)UnityEqualityComparer.Color32;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___color32Type_12;
		bool L_19;
		L_19 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_18, NULL);
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_0095;
		}
	}
	{
		// if (t.Equals(color32Type)) return (object)UnityEqualityComparer.Color32;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_21 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Color32_4;
		V_2 = L_21;
		goto IL_0172;
	}

IL_0095:
	{
		// if (t.Equals(rectType)) return (object)UnityEqualityComparer.Rect;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___rectType_13;
		bool L_23;
		L_23 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_22, NULL);
		V_7 = L_23;
		bool L_24 = V_7;
		if (!L_24)
		{
			goto IL_00b2;
		}
	}
	{
		// if (t.Equals(rectType)) return (object)UnityEqualityComparer.Rect;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_25 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Rect_5;
		V_2 = L_25;
		goto IL_0172;
	}

IL_00b2:
	{
		// if (t.Equals(boundsType)) return (object)UnityEqualityComparer.Bounds;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___boundsType_14;
		bool L_27;
		L_27 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_26, NULL);
		V_8 = L_27;
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_00cf;
		}
	}
	{
		// if (t.Equals(boundsType)) return (object)UnityEqualityComparer.Bounds;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_29 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Bounds_6;
		V_2 = L_29;
		goto IL_0172;
	}

IL_00cf:
	{
		// if (t.Equals(quaternionType)) return (object)UnityEqualityComparer.Quaternion;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___quaternionType_15;
		bool L_31;
		L_31 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_30, NULL);
		V_9 = L_31;
		bool L_32 = V_9;
		if (!L_32)
		{
			goto IL_00ec;
		}
	}
	{
		// if (t.Equals(quaternionType)) return (object)UnityEqualityComparer.Quaternion;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_33 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Quaternion_7;
		V_2 = L_33;
		goto IL_0172;
	}

IL_00ec:
	{
		// if (t.Equals(vector2IntType)) return (object)UnityEqualityComparer.Vector2Int;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_34 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___vector2IntType_21;
		bool L_35;
		L_35 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_34, NULL);
		V_10 = L_35;
		bool L_36 = V_10;
		if (!L_36)
		{
			goto IL_0106;
		}
	}
	{
		// if (t.Equals(vector2IntType)) return (object)UnityEqualityComparer.Vector2Int;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_37 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector2Int_16;
		V_2 = L_37;
		goto IL_0172;
	}

IL_0106:
	{
		// if (t.Equals(vector3IntType)) return (object)UnityEqualityComparer.Vector3Int;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___vector3IntType_22;
		bool L_39;
		L_39 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_38, NULL);
		V_11 = L_39;
		bool L_40 = V_11;
		if (!L_40)
		{
			goto IL_0120;
		}
	}
	{
		// if (t.Equals(vector3IntType)) return (object)UnityEqualityComparer.Vector3Int;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_41 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector3Int_17;
		V_2 = L_41;
		goto IL_0172;
	}

IL_0120:
	{
		// if (t.Equals(rangeIntType)) return (object)UnityEqualityComparer.RangeInt;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___rangeIntType_23;
		bool L_43;
		L_43 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_42, NULL);
		V_12 = L_43;
		bool L_44 = V_12;
		if (!L_44)
		{
			goto IL_013a;
		}
	}
	{
		// if (t.Equals(rangeIntType)) return (object)UnityEqualityComparer.RangeInt;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_45 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___RangeInt_18;
		V_2 = L_45;
		goto IL_0172;
	}

IL_013a:
	{
		// if (t.Equals(rectIntType)) return (object)UnityEqualityComparer.RectInt;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___rectIntType_24;
		bool L_47;
		L_47 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_46, NULL);
		V_13 = L_47;
		bool L_48 = V_13;
		if (!L_48)
		{
			goto IL_0154;
		}
	}
	{
		// if (t.Equals(rectIntType)) return (object)UnityEqualityComparer.RectInt;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_49 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___RectInt_19;
		V_2 = L_49;
		goto IL_0172;
	}

IL_0154:
	{
		// if (t.Equals(boundsIntType)) return (object)UnityEqualityComparer.BoundsInt;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_50 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___boundsIntType_25;
		bool L_51;
		L_51 = RuntimeTypeHandle_Equals_m9F2868810568D9B995EDA78CC28968499417C68D((&V_0), L_50, NULL);
		V_14 = L_51;
		bool L_52 = V_14;
		if (!L_52)
		{
			goto IL_016e;
		}
	}
	{
		// if (t.Equals(boundsIntType)) return (object)UnityEqualityComparer.BoundsInt;
		il2cpp_codegen_runtime_class_init_inline(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		RuntimeObject* L_53 = ((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___BoundsInt_20;
		V_2 = L_53;
		goto IL_0172;
	}

IL_016e:
	{
		// return null;
		V_2 = NULL;
		goto IL_0172;
	}

IL_0172:
	{
		// }
		RuntimeObject* L_54 = V_2;
		return L_54;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEqualityComparer__cctor_m3C401F37C44E2DBAAB420A4B2F6F08DA3AB2E70B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsEqualityComparer_tFFCDAF589F6567389D67E168D1432A00EA6063C7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsIntEqualityComparer_t4D378351E9CB9D58FD9D33B3A13AD8B3BD885FF5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32EqualityComparer_tF481F53C6D57185906B56DB32F115E723D9FD17F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ColorEqualityComparer_tE7223C3645092370232DDB7844DFF1E71E6DE80C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuaternionEqualityComparer_t9276C865A991E56BE7720852A8B9C09A2C99F058_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeIntEqualityComparer_t997DC4CA104E5A0C3ED9145833AB95E92FFC6DA2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectEqualityComparer_t9331F4C293F191F8C18919C69977D6D7B80117EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectIntEqualityComparer_tFEE613741FA8D04BB0465668F1FB8295CB67D6C6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2EqualityComparer_t1EC84190716D16D2D1C05674BDFCE8668A354CCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2IntEqualityComparer_t63BB73598D8CB38DC89F95A4DB44070CF719EEE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3EqualityComparer_t62745961D07F32BA87D84CE7249B1CD02B741928_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4EqualityComparer_tDE47F0BC52A78378EF4AE3751A6E5D388EDEA074_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly IEqualityComparer<Vector2> Vector2 = new Vector2EqualityComparer();
		Vector2EqualityComparer_t1EC84190716D16D2D1C05674BDFCE8668A354CCA* L_0 = (Vector2EqualityComparer_t1EC84190716D16D2D1C05674BDFCE8668A354CCA*)il2cpp_codegen_object_new(Vector2EqualityComparer_t1EC84190716D16D2D1C05674BDFCE8668A354CCA_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector2EqualityComparer__ctor_mFC02E54BBE93B748C84A6775A5650662026EE420(L_0, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector2_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector2_0), (void*)L_0);
		// public static readonly IEqualityComparer<Vector3> Vector3 = new Vector3EqualityComparer();
		Vector3EqualityComparer_t62745961D07F32BA87D84CE7249B1CD02B741928* L_1 = (Vector3EqualityComparer_t62745961D07F32BA87D84CE7249B1CD02B741928*)il2cpp_codegen_object_new(Vector3EqualityComparer_t62745961D07F32BA87D84CE7249B1CD02B741928_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Vector3EqualityComparer__ctor_m3FB06A8EFB81B71046197227EFEF704138DCC209(L_1, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector3_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector3_1), (void*)L_1);
		// public static readonly IEqualityComparer<Vector4> Vector4 = new Vector4EqualityComparer();
		Vector4EqualityComparer_tDE47F0BC52A78378EF4AE3751A6E5D388EDEA074* L_2 = (Vector4EqualityComparer_tDE47F0BC52A78378EF4AE3751A6E5D388EDEA074*)il2cpp_codegen_object_new(Vector4EqualityComparer_tDE47F0BC52A78378EF4AE3751A6E5D388EDEA074_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		Vector4EqualityComparer__ctor_mFC426F92CC8BEB92C39D1A55723C92828AD4DA1D(L_2, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector4_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector4_2), (void*)L_2);
		// public static readonly IEqualityComparer<Color> Color = new ColorEqualityComparer();
		ColorEqualityComparer_tE7223C3645092370232DDB7844DFF1E71E6DE80C* L_3 = (ColorEqualityComparer_tE7223C3645092370232DDB7844DFF1E71E6DE80C*)il2cpp_codegen_object_new(ColorEqualityComparer_tE7223C3645092370232DDB7844DFF1E71E6DE80C_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ColorEqualityComparer__ctor_mF49B0597E833C90A3A6D42EBB699F5B27A570E28(L_3, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Color_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Color_3), (void*)L_3);
		// public static readonly IEqualityComparer<Color32> Color32 = new Color32EqualityComparer();
		Color32EqualityComparer_tF481F53C6D57185906B56DB32F115E723D9FD17F* L_4 = (Color32EqualityComparer_tF481F53C6D57185906B56DB32F115E723D9FD17F*)il2cpp_codegen_object_new(Color32EqualityComparer_tF481F53C6D57185906B56DB32F115E723D9FD17F_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Color32EqualityComparer__ctor_mB771E1002984D31870D2489E825C106FBAC5A449(L_4, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Color32_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Color32_4), (void*)L_4);
		// public static readonly IEqualityComparer<Rect> Rect = new RectEqualityComparer();
		RectEqualityComparer_t9331F4C293F191F8C18919C69977D6D7B80117EF* L_5 = (RectEqualityComparer_t9331F4C293F191F8C18919C69977D6D7B80117EF*)il2cpp_codegen_object_new(RectEqualityComparer_t9331F4C293F191F8C18919C69977D6D7B80117EF_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		RectEqualityComparer__ctor_m5D4563A0333DF00AEFC11A34B61EDBB5238C397A(L_5, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Rect_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Rect_5), (void*)L_5);
		// public static readonly IEqualityComparer<Bounds> Bounds = new BoundsEqualityComparer();
		BoundsEqualityComparer_tFFCDAF589F6567389D67E168D1432A00EA6063C7* L_6 = (BoundsEqualityComparer_tFFCDAF589F6567389D67E168D1432A00EA6063C7*)il2cpp_codegen_object_new(BoundsEqualityComparer_tFFCDAF589F6567389D67E168D1432A00EA6063C7_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		BoundsEqualityComparer__ctor_mF3CA3431F881FB568722252D40C77AEAF199EE7D(L_6, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Bounds_6 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Bounds_6), (void*)L_6);
		// public static readonly IEqualityComparer<Quaternion> Quaternion = new QuaternionEqualityComparer();
		QuaternionEqualityComparer_t9276C865A991E56BE7720852A8B9C09A2C99F058* L_7 = (QuaternionEqualityComparer_t9276C865A991E56BE7720852A8B9C09A2C99F058*)il2cpp_codegen_object_new(QuaternionEqualityComparer_t9276C865A991E56BE7720852A8B9C09A2C99F058_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		QuaternionEqualityComparer__ctor_m73BA102CC4D46E84031C1920612365BBCC8FF136(L_7, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Quaternion_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Quaternion_7), (void*)L_7);
		// static readonly RuntimeTypeHandle vector2Type = typeof(Vector2).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_8, NULL);
		NullCheck(L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10;
		L_10 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_9);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___vector2Type_8 = L_10;
		// static readonly RuntimeTypeHandle vector3Type = typeof(Vector3).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		NullCheck(L_12);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13;
		L_13 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_12);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___vector3Type_9 = L_13;
		// static readonly RuntimeTypeHandle vector4Type = typeof(Vector4).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
		NullCheck(L_15);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_16;
		L_16 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_15);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___vector4Type_10 = L_16;
		// static readonly RuntimeTypeHandle colorType = typeof(Color).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_17 = { reinterpret_cast<intptr_t> (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F_0_0_0_var) };
		Type_t* L_18;
		L_18 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_17, NULL);
		NullCheck(L_18);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19;
		L_19 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_18);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___colorType_11 = L_19;
		// static readonly RuntimeTypeHandle color32Type = typeof(Color32).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_20, NULL);
		NullCheck(L_21);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22;
		L_22 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_21);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___color32Type_12 = L_22;
		// static readonly RuntimeTypeHandle rectType = typeof(Rect).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_0_0_0_var) };
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_23, NULL);
		NullCheck(L_24);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25;
		L_25 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_24);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___rectType_13 = L_25;
		// static readonly RuntimeTypeHandle boundsType = typeof(Bounds).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_26 = { reinterpret_cast<intptr_t> (Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_0_0_0_var) };
		Type_t* L_27;
		L_27 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_26, NULL);
		NullCheck(L_27);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_28;
		L_28 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_27);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___boundsType_14 = L_28;
		// static readonly RuntimeTypeHandle quaternionType = typeof(Quaternion).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_0_0_0_var) };
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_29, NULL);
		NullCheck(L_30);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31;
		L_31 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_30);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___quaternionType_15 = L_31;
		// public static readonly IEqualityComparer<Vector2Int> Vector2Int = new Vector2IntEqualityComparer();
		Vector2IntEqualityComparer_t63BB73598D8CB38DC89F95A4DB44070CF719EEE1* L_32 = (Vector2IntEqualityComparer_t63BB73598D8CB38DC89F95A4DB44070CF719EEE1*)il2cpp_codegen_object_new(Vector2IntEqualityComparer_t63BB73598D8CB38DC89F95A4DB44070CF719EEE1_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		Vector2IntEqualityComparer__ctor_mCCF39E759FEA91B579A6E0B6F7243FDDAC36E60D(L_32, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector2Int_16 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector2Int_16), (void*)L_32);
		// public static readonly IEqualityComparer<Vector3Int> Vector3Int = new Vector3IntEqualityComparer();
		Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* L_33 = (Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95*)il2cpp_codegen_object_new(Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var);
		NullCheck(L_33);
		Vector3IntEqualityComparer__ctor_m8BA53B29F062A2F84E8299C29537F3A75DC81E09(L_33, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector3Int_17 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___Vector3Int_17), (void*)L_33);
		// public static readonly IEqualityComparer<RangeInt> RangeInt = new RangeIntEqualityComparer();
		RangeIntEqualityComparer_t997DC4CA104E5A0C3ED9145833AB95E92FFC6DA2* L_34 = (RangeIntEqualityComparer_t997DC4CA104E5A0C3ED9145833AB95E92FFC6DA2*)il2cpp_codegen_object_new(RangeIntEqualityComparer_t997DC4CA104E5A0C3ED9145833AB95E92FFC6DA2_il2cpp_TypeInfo_var);
		NullCheck(L_34);
		RangeIntEqualityComparer__ctor_m0F950CBCE7D14EC1C3332A396F5EF05D308B95FD(L_34, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___RangeInt_18 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___RangeInt_18), (void*)L_34);
		// public static readonly IEqualityComparer<RectInt> RectInt = new RectIntEqualityComparer();
		RectIntEqualityComparer_tFEE613741FA8D04BB0465668F1FB8295CB67D6C6* L_35 = (RectIntEqualityComparer_tFEE613741FA8D04BB0465668F1FB8295CB67D6C6*)il2cpp_codegen_object_new(RectIntEqualityComparer_tFEE613741FA8D04BB0465668F1FB8295CB67D6C6_il2cpp_TypeInfo_var);
		NullCheck(L_35);
		RectIntEqualityComparer__ctor_mBABAA633476CA2887E6A2744CD8B468511885CFF(L_35, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___RectInt_19 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___RectInt_19), (void*)L_35);
		// public static readonly IEqualityComparer<BoundsInt> BoundsInt = new BoundsIntEqualityComparer();
		BoundsIntEqualityComparer_t4D378351E9CB9D58FD9D33B3A13AD8B3BD885FF5* L_36 = (BoundsIntEqualityComparer_t4D378351E9CB9D58FD9D33B3A13AD8B3BD885FF5*)il2cpp_codegen_object_new(BoundsIntEqualityComparer_t4D378351E9CB9D58FD9D33B3A13AD8B3BD885FF5_il2cpp_TypeInfo_var);
		NullCheck(L_36);
		BoundsIntEqualityComparer__ctor_m34F87FD3305A51AEAAE4C57544A09818261EAFD0(L_36, NULL);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___BoundsInt_20 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___BoundsInt_20), (void*)L_36);
		// static readonly RuntimeTypeHandle vector2IntType = typeof(Vector2Int).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_0_0_0_var) };
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		NullCheck(L_38);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_39;
		L_39 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_38);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___vector2IntType_21 = L_39;
		// static readonly RuntimeTypeHandle vector3IntType = typeof(Vector3Int).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_40 = { reinterpret_cast<intptr_t> (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_0_0_0_var) };
		Type_t* L_41;
		L_41 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_40, NULL);
		NullCheck(L_41);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_42;
		L_42 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_41);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___vector3IntType_22 = L_42;
		// static readonly RuntimeTypeHandle rangeIntType = typeof(RangeInt).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268_0_0_0_var) };
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		NullCheck(L_44);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45;
		L_45 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_44);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___rangeIntType_23 = L_45;
		// static readonly RuntimeTypeHandle rectIntType = typeof(RectInt).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_46, NULL);
		NullCheck(L_47);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_48;
		L_48 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_47);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___rectIntType_24 = L_48;
		// static readonly RuntimeTypeHandle boundsIntType = typeof(BoundsInt).TypeHandle;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_0_0_0_var) };
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		NullCheck(L_50);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_51;
		L_51 = VirtualFuncInvoker0< RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B >::Invoke(106 /* System.RuntimeTypeHandle System.Type::get_TypeHandle() */, L_50);
		((UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_StaticFields*)il2cpp_codegen_static_fields_for(UnityEqualityComparer_t35978F2C27D3F03757D1AAE07DFEF3A0AE59A351_il2cpp_TypeInfo_var))->___boundsIntType_25 = L_51;
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/Vector2EqualityComparer::Equals(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2EqualityComparer_Equals_mC222E61FD420D5B7623F671D54FE4D7507DE6D3D (Vector2EqualityComparer_t1EC84190716D16D2D1C05674BDFCE8668A354CCA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___self0, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___vector1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y);
		float* L_0 = (&(&___self0)->___x_0);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_1 = ___vector1;
		float L_2 = L_1.___x_0;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		float* L_4 = (&(&___self0)->___y_1);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_5 = ___vector1;
		float L_6 = L_5.___y_1;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/Vector2EqualityComparer::GetHashCode(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2EqualityComparer_GetHashCode_m6E0F393D5D837253E0D421F413281230F4F4A2E4 (Vector2EqualityComparer_t1EC84190716D16D2D1C05674BDFCE8668A354CCA* __this, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2;
		float* L_0 = (&(&___obj0)->___x_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&(&___obj0)->___y_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		V_0 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_001f;
	}

IL_001f:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Vector2EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2EqualityComparer__ctor_mFC02E54BBE93B748C84A6775A5650662026EE420 (Vector2EqualityComparer_t1EC84190716D16D2D1C05674BDFCE8668A354CCA* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/Vector3EqualityComparer::Equals(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3EqualityComparer_Equals_m9F6F7C103B0009A9294FCD659E377617C041E139 (Vector3EqualityComparer_t62745961D07F32BA87D84CE7249B1CD02B741928* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___self0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___vector1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y) && self.z.Equals(vector.z);
		float* L_0 = (&(&___self0)->___x_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___vector1;
		float L_2 = L_1.___x_2;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_003d;
		}
	}
	{
		float* L_4 = (&(&___self0)->___y_3);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5 = ___vector1;
		float L_6 = L_5.___y_3;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_003d;
		}
	}
	{
		float* L_8 = (&(&___self0)->___z_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9 = ___vector1;
		float L_10 = L_9.___z_4;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		G_B4_0 = ((int32_t)(L_11));
		goto IL_003e;
	}

IL_003d:
	{
		G_B4_0 = 0;
	}

IL_003e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0041;
	}

IL_0041:
	{
		// }
		bool L_12 = V_0;
		return L_12;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/Vector3EqualityComparer::GetHashCode(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3EqualityComparer_GetHashCode_m3EC4220ADE9138C5C48E5AAA648D8916756086D5 (Vector3EqualityComparer_t62745961D07F32BA87D84CE7249B1CD02B741928* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2 ^ obj.z.GetHashCode() >> 2;
		float* L_0 = (&(&___obj0)->___x_2);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&(&___obj0)->___y_3);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&(&___obj0)->___z_4);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002e;
	}

IL_002e:
	{
		// }
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Vector3EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3EqualityComparer__ctor_m3FB06A8EFB81B71046197227EFEF704138DCC209 (Vector3EqualityComparer_t62745961D07F32BA87D84CE7249B1CD02B741928* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/Vector4EqualityComparer::Equals(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector4EqualityComparer_Equals_mB816A1209F705B05F45AD621B72ABC98670DA63E (Vector4EqualityComparer_tDE47F0BC52A78378EF4AE3751A6E5D388EDEA074* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___self0, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___vector1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y) && self.z.Equals(vector.z) && self.w.Equals(vector.w);
		float* L_0 = (&(&___self0)->___x_1);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_1 = ___vector1;
		float L_2 = L_1.___x_1;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		float* L_4 = (&(&___self0)->___y_2);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_5 = ___vector1;
		float L_6 = L_5.___y_2;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		float* L_8 = (&(&___self0)->___z_3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_9 = ___vector1;
		float L_10 = L_9.___z_3;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		float* L_12 = (&(&___self0)->___w_4);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_13 = ___vector1;
		float L_14 = L_13.___w_4;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/Vector4EqualityComparer::GetHashCode(UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector4EqualityComparer_GetHashCode_mF53542FB3BB21F4653746C62E21E938A46D02967 (Vector4EqualityComparer_tDE47F0BC52A78378EF4AE3751A6E5D388EDEA074* __this, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2 ^ obj.z.GetHashCode() >> 2 ^ obj.w.GetHashCode() >> 1;
		float* L_0 = (&(&___obj0)->___x_1);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&(&___obj0)->___y_2);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&(&___obj0)->___z_3);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (&(&___obj0)->___w_4);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_003d;
	}

IL_003d:
	{
		// }
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Vector4EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector4EqualityComparer__ctor_mFC426F92CC8BEB92C39D1A55723C92828AD4DA1D (Vector4EqualityComparer_tDE47F0BC52A78378EF4AE3751A6E5D388EDEA074* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/ColorEqualityComparer::Equals(UnityEngine.Color,UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ColorEqualityComparer_Equals_mEBE924F99FFA848494C4B94103AFDF636056CCAA (ColorEqualityComparer_tE7223C3645092370232DDB7844DFF1E71E6DE80C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___self0, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___other1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return self.r.Equals(other.r) && self.g.Equals(other.g) && self.b.Equals(other.b) && self.a.Equals(other.a);
		float* L_0 = (&(&___self0)->___r_0);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_1 = ___other1;
		float L_2 = L_1.___r_0;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		float* L_4 = (&(&___self0)->___g_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_5 = ___other1;
		float L_6 = L_5.___g_1;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		float* L_8 = (&(&___self0)->___b_2);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9 = ___other1;
		float L_10 = L_9.___b_2;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		float* L_12 = (&(&___self0)->___a_3);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_13 = ___other1;
		float L_14 = L_13.___a_3;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/ColorEqualityComparer::GetHashCode(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ColorEqualityComparer_GetHashCode_mE0A4DA7525D3E65FCFE67FF6A09787BD75374705 (ColorEqualityComparer_tE7223C3645092370232DDB7844DFF1E71E6DE80C* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.r.GetHashCode() ^ obj.g.GetHashCode() << 2 ^ obj.b.GetHashCode() >> 2 ^ obj.a.GetHashCode() >> 1;
		float* L_0 = (&(&___obj0)->___r_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&(&___obj0)->___g_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&(&___obj0)->___b_2);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (&(&___obj0)->___a_3);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_003d;
	}

IL_003d:
	{
		// }
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/ColorEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ColorEqualityComparer__ctor_mF49B0597E833C90A3A6D42EBB699F5B27A570E28 (ColorEqualityComparer_tE7223C3645092370232DDB7844DFF1E71E6DE80C* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/RectEqualityComparer::Equals(UnityEngine.Rect,UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectEqualityComparer_Equals_m339C190215DD1D38D8AD360BE60315E4E5631C07 (RectEqualityComparer_t9331F4C293F191F8C18919C69977D6D7B80117EF* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___self0, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___other1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// return self.x.Equals(other.x) && self.width.Equals(other.width) && self.y.Equals(other.y) && self.height.Equals(other.height);
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___self0), NULL);
		V_0 = L_0;
		float L_1;
		L_1 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___other1), NULL);
		bool L_2;
		L_2 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		float L_3;
		L_3 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___self0), NULL);
		V_0 = L_3;
		float L_4;
		L_4 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___other1), NULL);
		bool L_5;
		L_5 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		float L_6;
		L_6 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___self0), NULL);
		V_0 = L_6;
		float L_7;
		L_7 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___other1), NULL);
		bool L_8;
		L_8 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		float L_9;
		L_9 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___self0), NULL);
		V_0 = L_9;
		float L_10;
		L_10 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___other1), NULL);
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0062;
	}

IL_0061:
	{
		G_B5_0 = 0;
	}

IL_0062:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0065;
	}

IL_0065:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/RectEqualityComparer::GetHashCode(UnityEngine.Rect)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectEqualityComparer_GetHashCode_mE0878C8E09F217D8D5BABE77889E5143CE2EF9A0 (RectEqualityComparer_t9331F4C293F191F8C18919C69977D6D7B80117EF* __this, Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___obj0, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	int32_t V_1 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.width.GetHashCode() << 2 ^ obj.y.GetHashCode() >> 2 ^ obj.height.GetHashCode() >> 1;
		float L_0;
		L_0 = Rect_get_x_mB267B718E0D067F2BAE31BA477647FBF964916EB((&___obj0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		float L_2;
		L_2 = Rect_get_width_m620D67551372073C9C32C4C4624C2A5713F7F9A9((&___obj0), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		float L_4;
		L_4 = Rect_get_y_mC733E8D49F3CE21B2A3D40A1B72D687F22C97F49((&___obj0), NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		float L_6;
		L_6 = Rect_get_height_mE1AA6C6C725CCD2D317BD2157396D3CF7D47C9D8((&___obj0), NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2((&V_0), NULL);
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0049;
	}

IL_0049:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/RectEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectEqualityComparer__ctor_m5D4563A0333DF00AEFC11A34B61EDBB5238C397A (RectEqualityComparer_t9331F4C293F191F8C18919C69977D6D7B80117EF* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/BoundsEqualityComparer::Equals(UnityEngine.Bounds,UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsEqualityComparer_Equals_m42AB69E8A9A11790B8BDD7E53115CF11FF0F675D (BoundsEqualityComparer_tFFCDAF589F6567389D67E168D1432A00EA6063C7* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___self0, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___vector1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return self.center.Equals(vector.center) && self.extents.Equals(vector.extents);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___self0), NULL);
		V_0 = L_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___vector1), NULL);
		bool L_2;
		L_2 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___self0), NULL);
		V_0 = L_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4;
		L_4 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___vector1), NULL);
		bool L_5;
		L_5 = Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline((&V_0), L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
	}

IL_0032:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/BoundsEqualityComparer::GetHashCode(UnityEngine.Bounds)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundsEqualityComparer_GetHashCode_m70F1010E0B45AB2BCAC755615EEA868C2A9DD466 (BoundsEqualityComparer_tFFCDAF589F6567389D67E168D1432A00EA6063C7* __this, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___obj0, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	int32_t V_1 = 0;
	{
		// return obj.center.GetHashCode() ^ obj.extents.GetHashCode() << 2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Bounds_get_center_m5B05F81CB835EB6DD8628FDA24B638F477984DC3((&___obj0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_0), NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2;
		L_2 = Bounds_get_extents_mFE6DC407FCE2341BE2C750CB554055D211281D25((&___obj0), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline((&V_0), NULL);
		V_1 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_0031;
	}

IL_0031:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/BoundsEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsEqualityComparer__ctor_mF3CA3431F881FB568722252D40C77AEAF199EE7D (BoundsEqualityComparer_tFFCDAF589F6567389D67E168D1432A00EA6063C7* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/QuaternionEqualityComparer::Equals(UnityEngine.Quaternion,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool QuaternionEqualityComparer_Equals_m925E2736C960F7A25884C9F6C42A8290A8533EF4 (QuaternionEqualityComparer_t9276C865A991E56BE7720852A8B9C09A2C99F058* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___self0, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___vector1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y) && self.z.Equals(vector.z) && self.w.Equals(vector.w);
		float* L_0 = (&(&___self0)->___x_0);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_1 = ___vector1;
		float L_2 = L_1.___x_0;
		bool L_3;
		L_3 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		float* L_4 = (&(&___self0)->___y_1);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_5 = ___vector1;
		float L_6 = L_5.___y_1;
		bool L_7;
		L_7 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		float* L_8 = (&(&___self0)->___z_2);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_9 = ___vector1;
		float L_10 = L_9.___z_2;
		bool L_11;
		L_11 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		float* L_12 = (&(&___self0)->___w_3);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_13 = ___vector1;
		float L_14 = L_13.___w_3;
		bool L_15;
		L_15 = Single_Equals_m97C79E2B80F39214DB3F7E714FF2BCA45A0A8BF9(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/QuaternionEqualityComparer::GetHashCode(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuaternionEqualityComparer_GetHashCode_mAD9909FA3729DA1F83120D4D11C11DA0ACDC853E (QuaternionEqualityComparer_t9276C865A991E56BE7720852A8B9C09A2C99F058* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2 ^ obj.z.GetHashCode() >> 2 ^ obj.w.GetHashCode() >> 1;
		float* L_0 = (&(&___obj0)->___x_0);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&(&___obj0)->___y_1);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&(&___obj0)->___z_2);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		float* L_6 = (&(&___obj0)->___w_3);
		int32_t L_7;
		L_7 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_003d;
	}

IL_003d:
	{
		// }
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/QuaternionEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuaternionEqualityComparer__ctor_m73BA102CC4D46E84031C1920612365BBCC8FF136 (QuaternionEqualityComparer_t9276C865A991E56BE7720852A8B9C09A2C99F058* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/Color32EqualityComparer::Equals(UnityEngine.Color32,UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Color32EqualityComparer_Equals_m39384CF70BA16936CC8B48906A0A66BF672C5E83 (Color32EqualityComparer_tF481F53C6D57185906B56DB32F115E723D9FD17F* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___self0, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___vector1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B5_0 = 0;
	{
		// return self.a.Equals(vector.a) && self.r.Equals(vector.r) && self.g.Equals(vector.g) && self.b.Equals(vector.b);
		uint8_t* L_0 = (&(&___self0)->___a_4);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_1 = ___vector1;
		uint8_t L_2 = L_1.___a_4;
		bool L_3;
		L_3 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t* L_4 = (&(&___self0)->___r_1);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_5 = ___vector1;
		uint8_t L_6 = L_5.___r_1;
		bool L_7;
		L_7 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_4, L_6, NULL);
		if (!L_7)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t* L_8 = (&(&___self0)->___g_2);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_9 = ___vector1;
		uint8_t L_10 = L_9.___g_2;
		bool L_11;
		L_11 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_8, L_10, NULL);
		if (!L_11)
		{
			goto IL_0051;
		}
	}
	{
		uint8_t* L_12 = (&(&___self0)->___b_3);
		Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B L_13 = ___vector1;
		uint8_t L_14 = L_13.___b_3;
		bool L_15;
		L_15 = Byte_Equals_m25D9E26BA4A7457D39CC3E870C2B33070D731E85(L_12, L_14, NULL);
		G_B5_0 = ((int32_t)(L_15));
		goto IL_0052;
	}

IL_0051:
	{
		G_B5_0 = 0;
	}

IL_0052:
	{
		V_0 = (bool)G_B5_0;
		goto IL_0055;
	}

IL_0055:
	{
		// }
		bool L_16 = V_0;
		return L_16;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/Color32EqualityComparer::GetHashCode(UnityEngine.Color32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Color32EqualityComparer_GetHashCode_mB7050C8905F63E5F291CB4A05AAFE7772657988E (Color32EqualityComparer_tF481F53C6D57185906B56DB32F115E723D9FD17F* __this, Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.a.GetHashCode() ^ obj.r.GetHashCode() << 2 ^ obj.g.GetHashCode() >> 2 ^ obj.b.GetHashCode() >> 1;
		uint8_t* L_0 = (&(&___obj0)->___a_4);
		int32_t L_1;
		L_1 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_0, NULL);
		uint8_t* L_2 = (&(&___obj0)->___r_1);
		int32_t L_3;
		L_3 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_2, NULL);
		uint8_t* L_4 = (&(&___obj0)->___g_2);
		int32_t L_5;
		L_5 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_4, NULL);
		uint8_t* L_6 = (&(&___obj0)->___b_3);
		int32_t L_7;
		L_7 = Byte_GetHashCode_mB42A844E310593D124CE92EBA90F3755C9B10678(L_6, NULL);
		V_0 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_003d;
	}

IL_003d:
	{
		// }
		int32_t L_8 = V_0;
		return L_8;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Color32EqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color32EqualityComparer__ctor_mB771E1002984D31870D2489E825C106FBAC5A449 (Color32EqualityComparer_tF481F53C6D57185906B56DB32F115E723D9FD17F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/Vector2IntEqualityComparer::Equals(UnityEngine.Vector2Int,UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector2IntEqualityComparer_Equals_m5E57292B349B9E2A0ED412B95339D7CE57EE6219 (Vector2IntEqualityComparer_t63BB73598D8CB38DC89F95A4DB44070CF719EEE1* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___self0, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___vector1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B3_0 = 0;
	{
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y);
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___self0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___vector1), NULL);
		bool L_2;
		L_2 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0031;
		}
	}
	{
		int32_t L_3;
		L_3 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___self0), NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___vector1), NULL);
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_4, NULL);
		G_B3_0 = ((int32_t)(L_5));
		goto IL_0032;
	}

IL_0031:
	{
		G_B3_0 = 0;
	}

IL_0032:
	{
		V_1 = (bool)G_B3_0;
		goto IL_0035;
	}

IL_0035:
	{
		// }
		bool L_6 = V_1;
		return L_6;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/Vector2IntEqualityComparer::GetHashCode(UnityEngine.Vector2Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector2IntEqualityComparer_GetHashCode_m8F33D22E541348D72BB00B72A7BCE2ADB3465C64 (Vector2IntEqualityComparer_t63BB73598D8CB38DC89F95A4DB44070CF719EEE1* __this, Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2;
		int32_t L_0;
		L_0 = Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline((&___obj0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline((&___obj0), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		V_1 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_0025;
	}

IL_0025:
	{
		// }
		int32_t L_4 = V_1;
		return L_4;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Vector2IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector2IntEqualityComparer__ctor_mCCF39E759FEA91B579A6E0B6F7243FDDAC36E60D (Vector2IntEqualityComparer_t63BB73598D8CB38DC89F95A4DB44070CF719EEE1* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/Vector3IntEqualityComparer::Equals(UnityEngine.Vector3Int,UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector3IntEqualityComparer_Equals_mA3889B6FE8F276FDFCBB69AEF45925A2FF4DE42C (Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___self0, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___vector1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B4_0 = 0;
	{
		// return self.x.Equals(vector.x) && self.y.Equals(vector.y) && self.z.Equals(vector.z);
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___self0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___vector1), NULL);
		bool L_2;
		L_2 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_3;
		L_3 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___self0), NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___vector1), NULL);
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0049;
		}
	}
	{
		int32_t L_6;
		L_6 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___self0), NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___vector1), NULL);
		bool L_8;
		L_8 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_7, NULL);
		G_B4_0 = ((int32_t)(L_8));
		goto IL_004a;
	}

IL_0049:
	{
		G_B4_0 = 0;
	}

IL_004a:
	{
		V_1 = (bool)G_B4_0;
		goto IL_004d;
	}

IL_004d:
	{
		// }
		bool L_9 = V_1;
		return L_9;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/Vector3IntEqualityComparer::GetHashCode(UnityEngine.Vector3Int)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Vector3IntEqualityComparer_GetHashCode_m712BCE0D8B207730496575D7DE49341A604A384D (Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* __this, Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.y.GetHashCode() << 2 ^ obj.z.GetHashCode() >> 2;
		int32_t L_0;
		L_0 = Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline((&___obj0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline((&___obj0), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_4;
		L_4 = Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline((&___obj0), NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		V_1 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_0037;
	}

IL_0037:
	{
		// }
		int32_t L_6 = V_1;
		return L_6;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Vector3IntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntEqualityComparer__ctor_m8BA53B29F062A2F84E8299C29537F3A75DC81E09 (Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/Vector3IntEqualityComparer::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector3IntEqualityComparer__cctor_m79C14B9573D66A66264D5FF300258F0AB2878CD3 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static readonly Vector3IntEqualityComparer Default = new Vector3IntEqualityComparer();
		Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* L_0 = (Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95*)il2cpp_codegen_object_new(Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Vector3IntEqualityComparer__ctor_m8BA53B29F062A2F84E8299C29537F3A75DC81E09(L_0, NULL);
		((Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var))->___Default_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var))->___Default_0), (void*)L_0);
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/RangeIntEqualityComparer::Equals(UnityEngine.RangeInt,UnityEngine.RangeInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RangeIntEqualityComparer_Equals_m8A12D5F24843A5FBF81840CF3F729B889BA4A493 (RangeIntEqualityComparer_t997DC4CA104E5A0C3ED9145833AB95E92FFC6DA2* __this, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___self0, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___vector1, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return self.start.Equals(vector.start) && self.length.Equals(vector.length);
		int32_t* L_0 = (&(&___self0)->___start_0);
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_1 = ___vector1;
		int32_t L_2 = L_1.___start_0;
		bool L_3;
		L_3 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_0, L_2, NULL);
		if (!L_3)
		{
			goto IL_0029;
		}
	}
	{
		int32_t* L_4 = (&(&___self0)->___length_1);
		RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 L_5 = ___vector1;
		int32_t L_6 = L_5.___length_1;
		bool L_7;
		L_7 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722(L_4, L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_002a;
	}

IL_0029:
	{
		G_B3_0 = 0;
	}

IL_002a:
	{
		V_0 = (bool)G_B3_0;
		goto IL_002d;
	}

IL_002d:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/RangeIntEqualityComparer::GetHashCode(UnityEngine.RangeInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RangeIntEqualityComparer_GetHashCode_m570A44D186F36BBB83DB5D32F424C472D87CBD02 (RangeIntEqualityComparer_t997DC4CA104E5A0C3ED9145833AB95E92FFC6DA2* __this, RangeInt_tDFBE4FD13857C11F21F7C3DA6B60D05341B67268 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// return obj.start.GetHashCode() ^ obj.length.GetHashCode() << 2;
		int32_t* L_0 = (&(&___obj0)->___start_0);
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_0, NULL);
		int32_t* L_2 = (&(&___obj0)->___length_1);
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295(L_2, NULL);
		V_0 = ((int32_t)(L_1^((int32_t)(L_3<<2))));
		goto IL_001f;
	}

IL_001f:
	{
		// }
		int32_t L_4 = V_0;
		return L_4;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/RangeIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RangeIntEqualityComparer__ctor_m0F950CBCE7D14EC1C3332A396F5EF05D308B95FD (RangeIntEqualityComparer_t997DC4CA104E5A0C3ED9145833AB95E92FFC6DA2* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/RectIntEqualityComparer::Equals(UnityEngine.RectInt,UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool RectIntEqualityComparer_Equals_m8BEE09AD35C5FB94B9D18DCA99DB6A5CA2003165 (RectIntEqualityComparer_tFEE613741FA8D04BB0465668F1FB8295CB67D6C6* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___self0, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___other1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t G_B5_0 = 0;
	{
		// return self.x.Equals(other.x) && self.width.Equals(other.width) && self.y.Equals(other.y) && self.height.Equals(other.height);
		int32_t L_0;
		L_0 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___self0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___other1), NULL);
		bool L_2;
		L_2 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_1, NULL);
		if (!L_2)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_3;
		L_3 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___self0), NULL);
		V_0 = L_3;
		int32_t L_4;
		L_4 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___other1), NULL);
		bool L_5;
		L_5 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_4, NULL);
		if (!L_5)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_6;
		L_6 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___self0), NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___other1), NULL);
		bool L_8;
		L_8 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_7, NULL);
		if (!L_8)
		{
			goto IL_0061;
		}
	}
	{
		int32_t L_9;
		L_9 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___self0), NULL);
		V_0 = L_9;
		int32_t L_10;
		L_10 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___other1), NULL);
		bool L_11;
		L_11 = Int32_Equals_mC819D19A661B95BE253FB1769FD4D91961D20722((&V_0), L_10, NULL);
		G_B5_0 = ((int32_t)(L_11));
		goto IL_0062;
	}

IL_0061:
	{
		G_B5_0 = 0;
	}

IL_0062:
	{
		V_1 = (bool)G_B5_0;
		goto IL_0065;
	}

IL_0065:
	{
		// }
		bool L_12 = V_1;
		return L_12;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/RectIntEqualityComparer::GetHashCode(UnityEngine.RectInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t RectIntEqualityComparer_GetHashCode_m0C995DC473AE6F975ADE1113D182A01968243E10 (RectIntEqualityComparer_tFEE613741FA8D04BB0465668F1FB8295CB67D6C6* __this, RectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8 ___obj0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// return obj.x.GetHashCode() ^ obj.width.GetHashCode() << 2 ^ obj.y.GetHashCode() >> 2 ^ obj.height.GetHashCode() >> 1;
		int32_t L_0;
		L_0 = RectInt_get_x_mA1E7EF6DEAD2E900D7D56B7A3957C05081EBA9CA((&___obj0), NULL);
		V_0 = L_0;
		int32_t L_1;
		L_1 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_2;
		L_2 = RectInt_get_width_m6B7B2FB764EAE83B7F63E7F77FA33973606761A7((&___obj0), NULL);
		V_0 = L_2;
		int32_t L_3;
		L_3 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_4;
		L_4 = RectInt_get_y_m440422264E6FCAA91E01F81486A78037AC29D878((&___obj0), NULL);
		V_0 = L_4;
		int32_t L_5;
		L_5 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		int32_t L_6;
		L_6 = RectInt_get_height_mE25FB938714942D7A3BA0B3C21BC5CB913D5709C((&___obj0), NULL);
		V_0 = L_6;
		int32_t L_7;
		L_7 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_0), NULL);
		V_1 = ((int32_t)(((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))))^((int32_t)(L_7>>1))));
		goto IL_0049;
	}

IL_0049:
	{
		// }
		int32_t L_8 = V_1;
		return L_8;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/RectIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RectIntEqualityComparer__ctor_mBABAA633476CA2887E6A2744CD8B468511885CFF (RectIntEqualityComparer_tFEE613741FA8D04BB0465668F1FB8295CB67D6C6* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
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
// System.Boolean UniRx.InternalUtil.UnityEqualityComparer/BoundsIntEqualityComparer::Equals(UnityEngine.BoundsInt,UnityEngine.BoundsInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BoundsIntEqualityComparer_Equals_m58E998C57AE7607BAC316BBFAEDE9ED507742FC7 (BoundsIntEqualityComparer_t4D378351E9CB9D58FD9D33B3A13AD8B3BD885FF5* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___self0, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___vector1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	int32_t G_B3_0 = 0;
	{
		// return Vector3IntEqualityComparer.Default.Equals(self.position, vector.position)
		//     && Vector3IntEqualityComparer.Default.Equals(self.size, vector.size);
		il2cpp_codegen_runtime_class_init_inline(Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* L_0 = ((Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var))->___Default_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B((&___self0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_2;
		L_2 = BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B((&___vector1), NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = Vector3IntEqualityComparer_Equals_mA3889B6FE8F276FDFCBB69AEF45925A2FF4DE42C(L_0, L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_0035;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* L_4 = ((Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var))->___Default_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_5;
		L_5 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C((&___self0), NULL);
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_6;
		L_6 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C((&___vector1), NULL);
		NullCheck(L_4);
		bool L_7;
		L_7 = Vector3IntEqualityComparer_Equals_mA3889B6FE8F276FDFCBB69AEF45925A2FF4DE42C(L_4, L_5, L_6, NULL);
		G_B3_0 = ((int32_t)(L_7));
		goto IL_0036;
	}

IL_0035:
	{
		G_B3_0 = 0;
	}

IL_0036:
	{
		V_0 = (bool)G_B3_0;
		goto IL_0039;
	}

IL_0039:
	{
		// }
		bool L_8 = V_0;
		return L_8;
	}
}
// System.Int32 UniRx.InternalUtil.UnityEqualityComparer/BoundsIntEqualityComparer::GetHashCode(UnityEngine.BoundsInt)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t BoundsIntEqualityComparer_GetHashCode_mDAAA225A731D8D2DCD58BE351BCF02CE83CDFB73 (BoundsIntEqualityComparer_t4D378351E9CB9D58FD9D33B3A13AD8B3BD885FF5* __this, BoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485 ___obj0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// return Vector3IntEqualityComparer.Default.GetHashCode(obj.position) ^ Vector3IntEqualityComparer.Default.GetHashCode(obj.size) << 2;
		il2cpp_codegen_runtime_class_init_inline(Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var);
		Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* L_0 = ((Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var))->___Default_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_1;
		L_1 = BoundsInt_get_position_m0A58811AA258865B63CCFEDD693E278367411B4B((&___obj0), NULL);
		NullCheck(L_0);
		int32_t L_2;
		L_2 = Vector3IntEqualityComparer_GetHashCode_m712BCE0D8B207730496575D7DE49341A604A384D(L_0, L_1, NULL);
		Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95* L_3 = ((Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_StaticFields*)il2cpp_codegen_static_fields_for(Vector3IntEqualityComparer_tB22AFA3D0BEDA0FB9151F09A2C166F1758001B95_il2cpp_TypeInfo_var))->___Default_0;
		Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376 L_4;
		L_4 = BoundsInt_get_size_mE7C4A0C3BF45CEA7A28ABF98E2C15CB69EF3A32C((&___obj0), NULL);
		NullCheck(L_3);
		int32_t L_5;
		L_5 = Vector3IntEqualityComparer_GetHashCode_m712BCE0D8B207730496575D7DE49341A604A384D(L_3, L_4, NULL);
		V_0 = ((int32_t)(L_2^((int32_t)(L_5<<2))));
		goto IL_0029;
	}

IL_0029:
	{
		// }
		int32_t L_6 = V_0;
		return L_6;
	}
}
// System.Void UniRx.InternalUtil.UnityEqualityComparer/BoundsIntEqualityComparer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BoundsIntEqualityComparer__ctor_m34F87FD3305A51AEAAE4C57544A09818261EAFD0 (BoundsIntEqualityComparer_t4D378351E9CB9D58FD9D33B3A13AD8B3BD885FF5* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool BooleanDisposable_get_IsDisposed_mB2799FBA1D1B1D28293F58C07D8D85EDEA3DD270_inline (BooleanDisposable_tCDC168281D98EE9E86D674E1E008842C9551CE98* __this, const RuntimeMethod* method) 
{
	{
		// public bool IsDisposed { get; private set; }
		bool L_0 = __this->___U3CIsDisposedU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_Invoke_m7126A54DACA72B845424072887B5F3A51FC3808E_inline (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* __this, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector3_Equals_mEDEAF86793D229455BBF9BA5B30DDF438D6CABC1_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___other0, const RuntimeMethod* method) 
{
	bool V_0 = false;
	int32_t G_B4_0 = 0;
	{
		float L_0 = __this->___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = ___other0;
		float L_2 = L_1.___x_2;
		if ((!(((float)L_0) == ((float)L_2))))
		{
			goto IL_002d;
		}
	}
	{
		float L_3 = __this->___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___other0;
		float L_5 = L_4.___y_3;
		if ((!(((float)L_3) == ((float)L_5))))
		{
			goto IL_002d;
		}
	}
	{
		float L_6 = __this->___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_7 = ___other0;
		float L_8 = L_7.___z_4;
		G_B4_0 = ((((float)L_6) == ((float)L_8))? 1 : 0);
		goto IL_002e;
	}

IL_002d:
	{
		G_B4_0 = 0;
	}

IL_002e:
	{
		V_0 = (bool)G_B4_0;
		goto IL_0031;
	}

IL_0031:
	{
		bool L_9 = V_0;
		return L_9;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3_GetHashCode_mB08429DC931A85BD29CE11B9ABC77DE7E0E46327_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		float* L_0 = (&__this->___x_2);
		int32_t L_1;
		L_1 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_0, NULL);
		float* L_2 = (&__this->___y_3);
		int32_t L_3;
		L_3 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_2, NULL);
		float* L_4 = (&__this->___z_4);
		int32_t L_5;
		L_5 = Single_GetHashCode_mC3F1E099D1CF165C2D71FBCC5EF6A6792F9021D2(L_4, NULL);
		V_0 = ((int32_t)(((int32_t)(L_1^((int32_t)(L_3<<2))))^((int32_t)(L_5>>2))));
		goto IL_002b;
	}

IL_002b:
	{
		int32_t L_6 = V_0;
		return L_6;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_x_mA2CACB1B6E6B5AD0CCC32B2CD2EDCE3ECEB50576_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector2Int_get_y_m48454163ECF0B463FB5A16A0C4FC4B14DB0768B3_inline (Vector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_x_m21C268D2AA4C03CE35AA49DF6155347C9748054C_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_X_0;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_y_m42F43000F85D356557CAF03442273E7AA08F7F72_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Y_1;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector3Int_get_z_m96E180F866145E373F42358F2371EFF446F08AED_inline (Vector3Int_t65CB06F557251D18A37BD71F3655BA836A357376* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___m_Z_2;
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		int32_t L_1 = V_0;
		return L_1;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m9D57A362365E6B308CA2F172DE995A7DE5EA5CE7_gshared_inline (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (Action_1_t3CA76D608A67A30E535C626537063BAF8FE972D0* __this, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___obj0, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_mF2422B2DD29F74CE66F791C3F68E288EC7C3DB9E_gshared_inline (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* __this, RuntimeObject* ___obj0, const RuntimeMethod* method);
	((FunctionPointerType)__this->___invoke_impl_1)(__this, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
