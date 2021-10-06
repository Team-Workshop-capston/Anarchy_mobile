#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,Decision/Actions>
struct Dictionary_2_tEA17B30D6C6C5B772D7C46DB5928B1ED829CA398;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange>
struct List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange>
struct List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6;
// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy>
struct List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.Queue`1<System.Single>
struct Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC;
// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange>
struct Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D;
// MyBuilding[]
struct MyBuildingU5BU5D_tE23BD49697738D3D3AC3179C862AA4D3BA905EBC;
// MyUnit[]
struct MyUnitU5BU5D_tC57E2E8C7193C6CCCE4E0D0E218E56F92234D33B;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Photon.Realtime.Player[]
struct PlayerU5BU5D_t092E5B6C62AD4995428A64FD546C5B79741E6DA3;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
// Tile[]
struct TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707;
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// AudioManager
struct AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// CameraManager
struct CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// CentralProcessor
struct CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B;
// Cloud
struct Cloud_tF7F58C93A5DC1F1378D97ACFF462C47C831114B3;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// CreateBuilding
struct CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4;
// Decision
struct Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34;
// EffectSoundManager
struct EffectSoundManager_t0456F1F7EA24784E9644572B3F2F4FAC299DE6B8;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// ExitGames.Client.Photon.Hashtable
struct Hashtable_t43276794A006CD84952AFAB156E51DD9D331596D;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223;
// MoveUnit
struct MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530;
// MyBuilding
struct MyBuilding_t318D6BE4382A497673BF3A81D34AA1D178F0C324;
// MyUnit
struct MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43;
// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214;
// PlayerData
struct PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5;
// System.Collections.Queue
struct Queue_t66723C58C7422102C36F8570BE048BD0CC489E52;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// Photon.Realtime.Room
struct Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// Tile
struct Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2;
// TitleChar
struct TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TutorialMain
struct TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8;
// Tutorial_Btn
struct Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D;
// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// VariableManager
struct VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// CentralProcessor/<Timer>d__61
struct U3CTimerU3Ed__61_t956D6F909FCA5605E6E77FE0146C2CEA82746FF4;
// CentralProcessor/<Waiting>d__60
struct U3CWaitingU3Ed__60_tB89CF651F56ED6EA7E1A82654E2D65E6949282C9;
// Decision/Actions
struct Actions_tE39A59E3DE75D3E86935E7B826A2A3CFD578F2A0;
// Decision/DecisionSituation
struct DecisionSituation_t243F55B25AA62817C27D52752DD1206CA89A502C;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// TitleChar/<MafiaCharFadeIn>d__12
struct U3CMafiaCharFadeInU3Ed__12_t6329ACF7DCB628858FB44E7EBF075D16E28579B0;
// TitleChar/<MafiaCharFadeOut>d__13
struct U3CMafiaCharFadeOutU3Ed__13_t0571555C512697ADD15117FC2E2A5F2D93CAE983;
// TitleChar/<NewWaveCharFadeIn>d__14
struct U3CNewWaveCharFadeInU3Ed__14_t2D645AB933674261822B2E6BD98BEADAA89B13C2;
// TitleChar/<NewWaveCharFadeOut>d__15
struct U3CNewWaveCharFadeOutU3Ed__15_t3647E3256D9D52DD2B2219E4D8CDC201B0D0B499;
// TitleChar/<SocietyCharFadeIn>d__16
struct U3CSocietyCharFadeInU3Ed__16_tBDAC4CB22E85AB2D76DCABEFF43BBEBC6B995085;
// TitleChar/<SocietyCharFadeOut>d__17
struct U3CSocietyCharFadeOutU3Ed__17_t5EDC9B4588CE2BD132A977E22798F2B2AF458563;
// UIManager/<fadeoutErrorMessage>d__87
struct U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318;
// VariableManager/Mafia_Variable
struct Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32;
// VariableManager/New_Wave_Variable
struct New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80;
// VariableManager/Society_Variable
struct Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C;

IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07E30BE1F099BB38FC9131DB2445273437FD6DA0;
IL2CPP_EXTERN_C String_t* _stringLiteral0A6F36C5623823FBE7C0B284E87946BFC57A02C9;
IL2CPP_EXTERN_C String_t* _stringLiteral0B51BAE039244842E3065F8154A01FBC21068CAE;
IL2CPP_EXTERN_C String_t* _stringLiteral1CC624AE4B5D092B52D4D47624F10425C889A134;
IL2CPP_EXTERN_C String_t* _stringLiteral1DABCEB84DD850410BB8C8AAEA6ABB492FB56097;
IL2CPP_EXTERN_C String_t* _stringLiteral1E3C43A23EDB02C1CEBEC4480328D6E1ADD60F8B;
IL2CPP_EXTERN_C String_t* _stringLiteral20C207F1DCF8EDBCA675E3ED9D460D3068E013F8;
IL2CPP_EXTERN_C String_t* _stringLiteral215298C9C7E31A7D9C8C7F84090BE6A6177B776B;
IL2CPP_EXTERN_C String_t* _stringLiteral27309E85B9D111AF41686C4CC4BCE1C95F3800DC;
IL2CPP_EXTERN_C String_t* _stringLiteral2C4D3CA2E0FE3CE9DBA5EA4730156FADEE31C1C2;
IL2CPP_EXTERN_C String_t* _stringLiteral3014CCD1355B451A5EFD2F95C52FDE097DB4EACA;
IL2CPP_EXTERN_C String_t* _stringLiteral47B98D201F3C30E30D9082C15A0E7E64267B917F;
IL2CPP_EXTERN_C String_t* _stringLiteral50F4A089AD1D3A0BDC74C012C4618FA9243666D2;
IL2CPP_EXTERN_C String_t* _stringLiteral5AD6EF83C2BED140DF4A338DFA93FE8DC8FCC883;
IL2CPP_EXTERN_C String_t* _stringLiteral668D1F38B8DF1A134841D97B018F1F64BAAC5BDE;
IL2CPP_EXTERN_C String_t* _stringLiteral7C011263D462D1A33419CF3191B76FA1580F9465;
IL2CPP_EXTERN_C String_t* _stringLiteral851890D2FD8637FD1D936A3FA7421C6E58F6C638;
IL2CPP_EXTERN_C String_t* _stringLiteral85C3589B16E1820C20A474B2787E79663E4A17A2;
IL2CPP_EXTERN_C String_t* _stringLiteral8D2F151AA4A2233EB9D191780B1A709597FB75F5;
IL2CPP_EXTERN_C String_t* _stringLiteral95BAF84F68FDD94F61BD0184732913D9CDAADC25;
IL2CPP_EXTERN_C String_t* _stringLiteralA85BC61BDF41A2A8C1BC22040FAACEA386A4ABED;
IL2CPP_EXTERN_C String_t* _stringLiteralA8BA3418CA754926A5FE70823DB66A3EBDEB7250;
IL2CPP_EXTERN_C String_t* _stringLiteralABAAEA0B579DAF5DC5CF3CE98CBB4FE2FBBD06CE;
IL2CPP_EXTERN_C String_t* _stringLiteralB46B822F32DC9E073738D391D116934B7A559AFF;
IL2CPP_EXTERN_C String_t* _stringLiteralBDF40E87C0E368DB5E07BD396E30AE871FCF32C1;
IL2CPP_EXTERN_C String_t* _stringLiteralC5CF427C4211EC600C4C03E0C219A6B8FF766187;
IL2CPP_EXTERN_C String_t* _stringLiteralCB41E595576DDE3B0131E00FA2A479CD21C45D2A;
IL2CPP_EXTERN_C String_t* _stringLiteralCDA6215D16E3C5E0DF78D635AAA0006AC903E687;
IL2CPP_EXTERN_C String_t* _stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA;
IL2CPP_EXTERN_C String_t* _stringLiteralD72A83245AB41818B2DF713B72BB5E8EC7238CA1;
IL2CPP_EXTERN_C String_t* _stringLiteralDC6E10020534D2DA9C2B8282DF59D5B17D09A6CD;
IL2CPP_EXTERN_C String_t* _stringLiteralE35537EB2FA1778807CB10E1F27D6797DD9C200C;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectOfType_TisVariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_mDFA0F2936D9223924B33F7352DE4E9781483F8C5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mC08B6BECDD19BF12162E08CE4496604CC29C5849_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m5A3929183CBF24FC945AE80DE33DAFB0350720F3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMafiaCharFadeInU3Ed__12_System_Collections_IEnumerator_Reset_m35C0025A874AC0EFF3BE3354CED4798236342662_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CMafiaCharFadeOutU3Ed__13_System_Collections_IEnumerator_Reset_mB5A0A9C960157AF71AE122234D5886B387DA3BDC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CNewWaveCharFadeInU3Ed__14_System_Collections_IEnumerator_Reset_m0C518863E744FBF2EC181917D81DE834D2426968_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CNewWaveCharFadeOutU3Ed__15_System_Collections_IEnumerator_Reset_m7A6C8EF8CD31526D80345847606CDA9A73FAA9FC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSocietyCharFadeInU3Ed__16_System_Collections_IEnumerator_Reset_m83A5E44A1C28E1F7C46C3DBF3C311F1AA30EFBEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CSocietyCharFadeOutU3Ed__17_System_Collections_IEnumerator_Reset_m19CE75EB0E66808107671E9F8A1AC913A93D7297_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTimerU3Ed__61_System_Collections_IEnumerator_Reset_mD59534AA4CB3683E486D439D25B0A616341A1DAF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CWaitingU3Ed__60_System_Collections_IEnumerator_Reset_m79DF4FD32D379D2B593178321107AF952787FA20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CfadeoutErrorMessageU3Ed__87_System_Collections_IEnumerator_Reset_mAA352A0215C489B9380B42B934CCD529C69C4016_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct PlayerU5BU5D_t092E5B6C62AD4995428A64FD546C5B79741E6DA3;
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F;
struct TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707;
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.Collections.Generic.Queue`1<System.Single>
struct Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Queue`1::_array
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject * ____syncRoot_5;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC, ____array_0)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get__array_0() const { return ____array_0; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__head_1() { return static_cast<int32_t>(offsetof(Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC, ____head_1)); }
	inline int32_t get__head_1() const { return ____head_1; }
	inline int32_t* get_address_of__head_1() { return &____head_1; }
	inline void set__head_1(int32_t value)
	{
		____head_1 = value;
	}

	inline static int32_t get_offset_of__tail_2() { return static_cast<int32_t>(offsetof(Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC, ____tail_2)); }
	inline int32_t get__tail_2() const { return ____tail_2; }
	inline int32_t* get_address_of__tail_2() { return &____tail_2; }
	inline void set__tail_2(int32_t value)
	{
		____tail_2 = value;
	}

	inline static int32_t get_offset_of__size_3() { return static_cast<int32_t>(offsetof(Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC, ____size_3)); }
	inline int32_t get__size_3() const { return ____size_3; }
	inline int32_t* get_address_of__size_3() { return &____size_3; }
	inline void set__size_3(int32_t value)
	{
		____size_3 = value;
	}

	inline static int32_t get_offset_of__version_4() { return static_cast<int32_t>(offsetof(Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC, ____version_4)); }
	inline int32_t get__version_4() const { return ____version_4; }
	inline int32_t* get_address_of__version_4() { return &____version_4; }
	inline void set__version_4(int32_t value)
	{
		____version_4 = value;
	}

	inline static int32_t get_offset_of__syncRoot_5() { return static_cast<int32_t>(offsetof(Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC, ____syncRoot_5)); }
	inline RuntimeObject * get__syncRoot_5() const { return ____syncRoot_5; }
	inline RuntimeObject ** get_address_of__syncRoot_5() { return &____syncRoot_5; }
	inline void set__syncRoot_5(RuntimeObject * value)
	{
		____syncRoot_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_5), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// Photon.Realtime.Player
struct Player_tC6DFC22DFF5978489C4CFA025695FEC556610214  : public RuntimeObject
{
public:
	// Photon.Realtime.Room Photon.Realtime.Player::<RoomReference>k__BackingField
	Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * ___U3CRoomReferenceU3Ek__BackingField_0;
	// System.Int32 Photon.Realtime.Player::actorNumber
	int32_t ___actorNumber_1;
	// System.Boolean Photon.Realtime.Player::IsLocal
	bool ___IsLocal_2;
	// System.Boolean Photon.Realtime.Player::<HasRejoined>k__BackingField
	bool ___U3CHasRejoinedU3Ek__BackingField_3;
	// System.String Photon.Realtime.Player::nickName
	String_t* ___nickName_4;
	// System.String Photon.Realtime.Player::<UserId>k__BackingField
	String_t* ___U3CUserIdU3Ek__BackingField_5;
	// System.Boolean Photon.Realtime.Player::<IsInactive>k__BackingField
	bool ___U3CIsInactiveU3Ek__BackingField_6;
	// ExitGames.Client.Photon.Hashtable Photon.Realtime.Player::<CustomProperties>k__BackingField
	Hashtable_t43276794A006CD84952AFAB156E51DD9D331596D * ___U3CCustomPropertiesU3Ek__BackingField_7;
	// System.Object Photon.Realtime.Player::TagObject
	RuntimeObject * ___TagObject_8;

public:
	inline static int32_t get_offset_of_U3CRoomReferenceU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CRoomReferenceU3Ek__BackingField_0)); }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * get_U3CRoomReferenceU3Ek__BackingField_0() const { return ___U3CRoomReferenceU3Ek__BackingField_0; }
	inline Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D ** get_address_of_U3CRoomReferenceU3Ek__BackingField_0() { return &___U3CRoomReferenceU3Ek__BackingField_0; }
	inline void set_U3CRoomReferenceU3Ek__BackingField_0(Room_t786C725602FC0D4154E70C16DBFF7F2A1AC24A8D * value)
	{
		___U3CRoomReferenceU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CRoomReferenceU3Ek__BackingField_0), (void*)value);
	}

	inline static int32_t get_offset_of_actorNumber_1() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___actorNumber_1)); }
	inline int32_t get_actorNumber_1() const { return ___actorNumber_1; }
	inline int32_t* get_address_of_actorNumber_1() { return &___actorNumber_1; }
	inline void set_actorNumber_1(int32_t value)
	{
		___actorNumber_1 = value;
	}

	inline static int32_t get_offset_of_IsLocal_2() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___IsLocal_2)); }
	inline bool get_IsLocal_2() const { return ___IsLocal_2; }
	inline bool* get_address_of_IsLocal_2() { return &___IsLocal_2; }
	inline void set_IsLocal_2(bool value)
	{
		___IsLocal_2 = value;
	}

	inline static int32_t get_offset_of_U3CHasRejoinedU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CHasRejoinedU3Ek__BackingField_3)); }
	inline bool get_U3CHasRejoinedU3Ek__BackingField_3() const { return ___U3CHasRejoinedU3Ek__BackingField_3; }
	inline bool* get_address_of_U3CHasRejoinedU3Ek__BackingField_3() { return &___U3CHasRejoinedU3Ek__BackingField_3; }
	inline void set_U3CHasRejoinedU3Ek__BackingField_3(bool value)
	{
		___U3CHasRejoinedU3Ek__BackingField_3 = value;
	}

	inline static int32_t get_offset_of_nickName_4() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___nickName_4)); }
	inline String_t* get_nickName_4() const { return ___nickName_4; }
	inline String_t** get_address_of_nickName_4() { return &___nickName_4; }
	inline void set_nickName_4(String_t* value)
	{
		___nickName_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nickName_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CUserIdU3Ek__BackingField_5() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CUserIdU3Ek__BackingField_5)); }
	inline String_t* get_U3CUserIdU3Ek__BackingField_5() const { return ___U3CUserIdU3Ek__BackingField_5; }
	inline String_t** get_address_of_U3CUserIdU3Ek__BackingField_5() { return &___U3CUserIdU3Ek__BackingField_5; }
	inline void set_U3CUserIdU3Ek__BackingField_5(String_t* value)
	{
		___U3CUserIdU3Ek__BackingField_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CUserIdU3Ek__BackingField_5), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsInactiveU3Ek__BackingField_6() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CIsInactiveU3Ek__BackingField_6)); }
	inline bool get_U3CIsInactiveU3Ek__BackingField_6() const { return ___U3CIsInactiveU3Ek__BackingField_6; }
	inline bool* get_address_of_U3CIsInactiveU3Ek__BackingField_6() { return &___U3CIsInactiveU3Ek__BackingField_6; }
	inline void set_U3CIsInactiveU3Ek__BackingField_6(bool value)
	{
		___U3CIsInactiveU3Ek__BackingField_6 = value;
	}

	inline static int32_t get_offset_of_U3CCustomPropertiesU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___U3CCustomPropertiesU3Ek__BackingField_7)); }
	inline Hashtable_t43276794A006CD84952AFAB156E51DD9D331596D * get_U3CCustomPropertiesU3Ek__BackingField_7() const { return ___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline Hashtable_t43276794A006CD84952AFAB156E51DD9D331596D ** get_address_of_U3CCustomPropertiesU3Ek__BackingField_7() { return &___U3CCustomPropertiesU3Ek__BackingField_7; }
	inline void set_U3CCustomPropertiesU3Ek__BackingField_7(Hashtable_t43276794A006CD84952AFAB156E51DD9D331596D * value)
	{
		___U3CCustomPropertiesU3Ek__BackingField_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CCustomPropertiesU3Ek__BackingField_7), (void*)value);
	}

	inline static int32_t get_offset_of_TagObject_8() { return static_cast<int32_t>(offsetof(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214, ___TagObject_8)); }
	inline RuntimeObject * get_TagObject_8() const { return ___TagObject_8; }
	inline RuntimeObject ** get_address_of_TagObject_8() { return &___TagObject_8; }
	inline void set_TagObject_8(RuntimeObject * value)
	{
		___TagObject_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TagObject_8), (void*)value);
	}
};


// PlayerData
struct PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5  : public RuntimeObject
{
public:
	// System.Int32 PlayerData::forceNumber
	int32_t ___forceNumber_0;
	// System.Int32 PlayerData::mapNumber
	int32_t ___mapNumber_1;

public:
	inline static int32_t get_offset_of_forceNumber_0() { return static_cast<int32_t>(offsetof(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5, ___forceNumber_0)); }
	inline int32_t get_forceNumber_0() const { return ___forceNumber_0; }
	inline int32_t* get_address_of_forceNumber_0() { return &___forceNumber_0; }
	inline void set_forceNumber_0(int32_t value)
	{
		___forceNumber_0 = value;
	}

	inline static int32_t get_offset_of_mapNumber_1() { return static_cast<int32_t>(offsetof(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5, ___mapNumber_1)); }
	inline int32_t get_mapNumber_1() const { return ___mapNumber_1; }
	inline int32_t* get_address_of_mapNumber_1() { return &___mapNumber_1; }
	inline void set_mapNumber_1(int32_t value)
	{
		___mapNumber_1 = value;
	}
};


// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// CentralProcessor/<Timer>d__61
struct U3CTimerU3Ed__61_t956D6F909FCA5605E6E77FE0146C2CEA82746FF4  : public RuntimeObject
{
public:
	// System.Int32 CentralProcessor/<Timer>d__61::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CentralProcessor/<Timer>d__61::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// CentralProcessor CentralProcessor/<Timer>d__61::<>4__this
	CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CTimerU3Ed__61_t956D6F909FCA5605E6E77FE0146C2CEA82746FF4, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CTimerU3Ed__61_t956D6F909FCA5605E6E77FE0146C2CEA82746FF4, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CTimerU3Ed__61_t956D6F909FCA5605E6E77FE0146C2CEA82746FF4, ___U3CU3E4__this_2)); }
	inline CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// CentralProcessor/<Waiting>d__60
struct U3CWaitingU3Ed__60_tB89CF651F56ED6EA7E1A82654E2D65E6949282C9  : public RuntimeObject
{
public:
	// System.Int32 CentralProcessor/<Waiting>d__60::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object CentralProcessor/<Waiting>d__60::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// CentralProcessor CentralProcessor/<Waiting>d__60::<>4__this
	CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CWaitingU3Ed__60_tB89CF651F56ED6EA7E1A82654E2D65E6949282C9, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CWaitingU3Ed__60_tB89CF651F56ED6EA7E1A82654E2D65E6949282C9, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CWaitingU3Ed__60_tB89CF651F56ED6EA7E1A82654E2D65E6949282C9, ___U3CU3E4__this_2)); }
	inline CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Decision/Actions
struct Actions_tE39A59E3DE75D3E86935E7B826A2A3CFD578F2A0  : public RuntimeObject
{
public:
	// System.String Decision/Actions::desc
	String_t* ___desc_0;
	// System.String Decision/Actions::effect
	String_t* ___effect_1;
	// System.Int32 Decision/Actions::buffNum
	int32_t ___buffNum_2;

public:
	inline static int32_t get_offset_of_desc_0() { return static_cast<int32_t>(offsetof(Actions_tE39A59E3DE75D3E86935E7B826A2A3CFD578F2A0, ___desc_0)); }
	inline String_t* get_desc_0() const { return ___desc_0; }
	inline String_t** get_address_of_desc_0() { return &___desc_0; }
	inline void set_desc_0(String_t* value)
	{
		___desc_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___desc_0), (void*)value);
	}

	inline static int32_t get_offset_of_effect_1() { return static_cast<int32_t>(offsetof(Actions_tE39A59E3DE75D3E86935E7B826A2A3CFD578F2A0, ___effect_1)); }
	inline String_t* get_effect_1() const { return ___effect_1; }
	inline String_t** get_address_of_effect_1() { return &___effect_1; }
	inline void set_effect_1(String_t* value)
	{
		___effect_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___effect_1), (void*)value);
	}

	inline static int32_t get_offset_of_buffNum_2() { return static_cast<int32_t>(offsetof(Actions_tE39A59E3DE75D3E86935E7B826A2A3CFD578F2A0, ___buffNum_2)); }
	inline int32_t get_buffNum_2() const { return ___buffNum_2; }
	inline int32_t* get_address_of_buffNum_2() { return &___buffNum_2; }
	inline void set_buffNum_2(int32_t value)
	{
		___buffNum_2 = value;
	}
};


// Decision/DecisionSituation
struct DecisionSituation_t243F55B25AA62817C27D52752DD1206CA89A502C  : public RuntimeObject
{
public:
	// System.String[] Decision/DecisionSituation::name
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___name_0;

public:
	inline static int32_t get_offset_of_name_0() { return static_cast<int32_t>(offsetof(DecisionSituation_t243F55B25AA62817C27D52752DD1206CA89A502C, ___name_0)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_name_0() const { return ___name_0; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_name_0() { return &___name_0; }
	inline void set_name_0(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___name_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___name_0), (void*)value);
	}
};


// TitleChar/<MafiaCharFadeIn>d__12
struct U3CMafiaCharFadeInU3Ed__12_t6329ACF7DCB628858FB44E7EBF075D16E28579B0  : public RuntimeObject
{
public:
	// System.Int32 TitleChar/<MafiaCharFadeIn>d__12::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TitleChar/<MafiaCharFadeIn>d__12::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TitleChar TitleChar/<MafiaCharFadeIn>d__12::<>4__this
	TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMafiaCharFadeInU3Ed__12_t6329ACF7DCB628858FB44E7EBF075D16E28579B0, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMafiaCharFadeInU3Ed__12_t6329ACF7DCB628858FB44E7EBF075D16E28579B0, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMafiaCharFadeInU3Ed__12_t6329ACF7DCB628858FB44E7EBF075D16E28579B0, ___U3CU3E4__this_2)); }
	inline TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TitleChar/<MafiaCharFadeOut>d__13
struct U3CMafiaCharFadeOutU3Ed__13_t0571555C512697ADD15117FC2E2A5F2D93CAE983  : public RuntimeObject
{
public:
	// System.Int32 TitleChar/<MafiaCharFadeOut>d__13::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TitleChar/<MafiaCharFadeOut>d__13::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TitleChar TitleChar/<MafiaCharFadeOut>d__13::<>4__this
	TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CMafiaCharFadeOutU3Ed__13_t0571555C512697ADD15117FC2E2A5F2D93CAE983, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CMafiaCharFadeOutU3Ed__13_t0571555C512697ADD15117FC2E2A5F2D93CAE983, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CMafiaCharFadeOutU3Ed__13_t0571555C512697ADD15117FC2E2A5F2D93CAE983, ___U3CU3E4__this_2)); }
	inline TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TitleChar/<NewWaveCharFadeIn>d__14
struct U3CNewWaveCharFadeInU3Ed__14_t2D645AB933674261822B2E6BD98BEADAA89B13C2  : public RuntimeObject
{
public:
	// System.Int32 TitleChar/<NewWaveCharFadeIn>d__14::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TitleChar/<NewWaveCharFadeIn>d__14::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TitleChar TitleChar/<NewWaveCharFadeIn>d__14::<>4__this
	TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CNewWaveCharFadeInU3Ed__14_t2D645AB933674261822B2E6BD98BEADAA89B13C2, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CNewWaveCharFadeInU3Ed__14_t2D645AB933674261822B2E6BD98BEADAA89B13C2, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CNewWaveCharFadeInU3Ed__14_t2D645AB933674261822B2E6BD98BEADAA89B13C2, ___U3CU3E4__this_2)); }
	inline TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TitleChar/<NewWaveCharFadeOut>d__15
struct U3CNewWaveCharFadeOutU3Ed__15_t3647E3256D9D52DD2B2219E4D8CDC201B0D0B499  : public RuntimeObject
{
public:
	// System.Int32 TitleChar/<NewWaveCharFadeOut>d__15::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TitleChar/<NewWaveCharFadeOut>d__15::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TitleChar TitleChar/<NewWaveCharFadeOut>d__15::<>4__this
	TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CNewWaveCharFadeOutU3Ed__15_t3647E3256D9D52DD2B2219E4D8CDC201B0D0B499, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CNewWaveCharFadeOutU3Ed__15_t3647E3256D9D52DD2B2219E4D8CDC201B0D0B499, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CNewWaveCharFadeOutU3Ed__15_t3647E3256D9D52DD2B2219E4D8CDC201B0D0B499, ___U3CU3E4__this_2)); }
	inline TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TitleChar/<SocietyCharFadeIn>d__16
struct U3CSocietyCharFadeInU3Ed__16_tBDAC4CB22E85AB2D76DCABEFF43BBEBC6B995085  : public RuntimeObject
{
public:
	// System.Int32 TitleChar/<SocietyCharFadeIn>d__16::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TitleChar/<SocietyCharFadeIn>d__16::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TitleChar TitleChar/<SocietyCharFadeIn>d__16::<>4__this
	TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSocietyCharFadeInU3Ed__16_tBDAC4CB22E85AB2D76DCABEFF43BBEBC6B995085, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSocietyCharFadeInU3Ed__16_tBDAC4CB22E85AB2D76DCABEFF43BBEBC6B995085, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSocietyCharFadeInU3Ed__16_tBDAC4CB22E85AB2D76DCABEFF43BBEBC6B995085, ___U3CU3E4__this_2)); }
	inline TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// TitleChar/<SocietyCharFadeOut>d__17
struct U3CSocietyCharFadeOutU3Ed__17_t5EDC9B4588CE2BD132A977E22798F2B2AF458563  : public RuntimeObject
{
public:
	// System.Int32 TitleChar/<SocietyCharFadeOut>d__17::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object TitleChar/<SocietyCharFadeOut>d__17::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// TitleChar TitleChar/<SocietyCharFadeOut>d__17::<>4__this
	TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CSocietyCharFadeOutU3Ed__17_t5EDC9B4588CE2BD132A977E22798F2B2AF458563, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CSocietyCharFadeOutU3Ed__17_t5EDC9B4588CE2BD132A977E22798F2B2AF458563, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CSocietyCharFadeOutU3Ed__17_t5EDC9B4588CE2BD132A977E22798F2B2AF458563, ___U3CU3E4__this_2)); }
	inline TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// VariableManager/Mafia_Variable
struct Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32  : public RuntimeObject
{
public:
	// System.Int32 VariableManager/Mafia_Variable::war_hp
	int32_t ___war_hp_0;
	// System.Int32 VariableManager/Mafia_Variable::war_off
	int32_t ___war_off_1;
	// System.Int32 VariableManager/Mafia_Variable::war_def
	int32_t ___war_def_2;
	// System.Int32 VariableManager/Mafia_Variable::war_act
	int32_t ___war_act_3;
	// System.Int32 VariableManager/Mafia_Variable::war_cost
	int32_t ___war_cost_4;
	// System.Int32 VariableManager/Mafia_Variable::arc_hp
	int32_t ___arc_hp_5;
	// System.Int32 VariableManager/Mafia_Variable::arc_off
	int32_t ___arc_off_6;
	// System.Int32 VariableManager/Mafia_Variable::arc_def
	int32_t ___arc_def_7;
	// System.Int32 VariableManager/Mafia_Variable::arc_act
	int32_t ___arc_act_8;
	// System.Int32 VariableManager/Mafia_Variable::arc_cost
	int32_t ___arc_cost_9;
	// System.Int32 VariableManager/Mafia_Variable::mag_hp
	int32_t ___mag_hp_10;
	// System.Int32 VariableManager/Mafia_Variable::mag_off
	int32_t ___mag_off_11;
	// System.Int32 VariableManager/Mafia_Variable::mag_def
	int32_t ___mag_def_12;
	// System.Int32 VariableManager/Mafia_Variable::mag_act
	int32_t ___mag_act_13;
	// System.Int32 VariableManager/Mafia_Variable::mag_cost
	int32_t ___mag_cost_14;

public:
	inline static int32_t get_offset_of_war_hp_0() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___war_hp_0)); }
	inline int32_t get_war_hp_0() const { return ___war_hp_0; }
	inline int32_t* get_address_of_war_hp_0() { return &___war_hp_0; }
	inline void set_war_hp_0(int32_t value)
	{
		___war_hp_0 = value;
	}

	inline static int32_t get_offset_of_war_off_1() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___war_off_1)); }
	inline int32_t get_war_off_1() const { return ___war_off_1; }
	inline int32_t* get_address_of_war_off_1() { return &___war_off_1; }
	inline void set_war_off_1(int32_t value)
	{
		___war_off_1 = value;
	}

	inline static int32_t get_offset_of_war_def_2() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___war_def_2)); }
	inline int32_t get_war_def_2() const { return ___war_def_2; }
	inline int32_t* get_address_of_war_def_2() { return &___war_def_2; }
	inline void set_war_def_2(int32_t value)
	{
		___war_def_2 = value;
	}

	inline static int32_t get_offset_of_war_act_3() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___war_act_3)); }
	inline int32_t get_war_act_3() const { return ___war_act_3; }
	inline int32_t* get_address_of_war_act_3() { return &___war_act_3; }
	inline void set_war_act_3(int32_t value)
	{
		___war_act_3 = value;
	}

	inline static int32_t get_offset_of_war_cost_4() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___war_cost_4)); }
	inline int32_t get_war_cost_4() const { return ___war_cost_4; }
	inline int32_t* get_address_of_war_cost_4() { return &___war_cost_4; }
	inline void set_war_cost_4(int32_t value)
	{
		___war_cost_4 = value;
	}

	inline static int32_t get_offset_of_arc_hp_5() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___arc_hp_5)); }
	inline int32_t get_arc_hp_5() const { return ___arc_hp_5; }
	inline int32_t* get_address_of_arc_hp_5() { return &___arc_hp_5; }
	inline void set_arc_hp_5(int32_t value)
	{
		___arc_hp_5 = value;
	}

	inline static int32_t get_offset_of_arc_off_6() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___arc_off_6)); }
	inline int32_t get_arc_off_6() const { return ___arc_off_6; }
	inline int32_t* get_address_of_arc_off_6() { return &___arc_off_6; }
	inline void set_arc_off_6(int32_t value)
	{
		___arc_off_6 = value;
	}

	inline static int32_t get_offset_of_arc_def_7() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___arc_def_7)); }
	inline int32_t get_arc_def_7() const { return ___arc_def_7; }
	inline int32_t* get_address_of_arc_def_7() { return &___arc_def_7; }
	inline void set_arc_def_7(int32_t value)
	{
		___arc_def_7 = value;
	}

	inline static int32_t get_offset_of_arc_act_8() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___arc_act_8)); }
	inline int32_t get_arc_act_8() const { return ___arc_act_8; }
	inline int32_t* get_address_of_arc_act_8() { return &___arc_act_8; }
	inline void set_arc_act_8(int32_t value)
	{
		___arc_act_8 = value;
	}

	inline static int32_t get_offset_of_arc_cost_9() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___arc_cost_9)); }
	inline int32_t get_arc_cost_9() const { return ___arc_cost_9; }
	inline int32_t* get_address_of_arc_cost_9() { return &___arc_cost_9; }
	inline void set_arc_cost_9(int32_t value)
	{
		___arc_cost_9 = value;
	}

	inline static int32_t get_offset_of_mag_hp_10() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___mag_hp_10)); }
	inline int32_t get_mag_hp_10() const { return ___mag_hp_10; }
	inline int32_t* get_address_of_mag_hp_10() { return &___mag_hp_10; }
	inline void set_mag_hp_10(int32_t value)
	{
		___mag_hp_10 = value;
	}

	inline static int32_t get_offset_of_mag_off_11() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___mag_off_11)); }
	inline int32_t get_mag_off_11() const { return ___mag_off_11; }
	inline int32_t* get_address_of_mag_off_11() { return &___mag_off_11; }
	inline void set_mag_off_11(int32_t value)
	{
		___mag_off_11 = value;
	}

	inline static int32_t get_offset_of_mag_def_12() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___mag_def_12)); }
	inline int32_t get_mag_def_12() const { return ___mag_def_12; }
	inline int32_t* get_address_of_mag_def_12() { return &___mag_def_12; }
	inline void set_mag_def_12(int32_t value)
	{
		___mag_def_12 = value;
	}

	inline static int32_t get_offset_of_mag_act_13() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___mag_act_13)); }
	inline int32_t get_mag_act_13() const { return ___mag_act_13; }
	inline int32_t* get_address_of_mag_act_13() { return &___mag_act_13; }
	inline void set_mag_act_13(int32_t value)
	{
		___mag_act_13 = value;
	}

	inline static int32_t get_offset_of_mag_cost_14() { return static_cast<int32_t>(offsetof(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32, ___mag_cost_14)); }
	inline int32_t get_mag_cost_14() const { return ___mag_cost_14; }
	inline int32_t* get_address_of_mag_cost_14() { return &___mag_cost_14; }
	inline void set_mag_cost_14(int32_t value)
	{
		___mag_cost_14 = value;
	}
};


// VariableManager/New_Wave_Variable
struct New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80  : public RuntimeObject
{
public:
	// System.Int32 VariableManager/New_Wave_Variable::war_hp
	int32_t ___war_hp_0;
	// System.Int32 VariableManager/New_Wave_Variable::war_off
	int32_t ___war_off_1;
	// System.Int32 VariableManager/New_Wave_Variable::war_def
	int32_t ___war_def_2;
	// System.Int32 VariableManager/New_Wave_Variable::war_act
	int32_t ___war_act_3;
	// System.Int32 VariableManager/New_Wave_Variable::war_cost
	int32_t ___war_cost_4;
	// System.Int32 VariableManager/New_Wave_Variable::arc_hp
	int32_t ___arc_hp_5;
	// System.Int32 VariableManager/New_Wave_Variable::arc_off
	int32_t ___arc_off_6;
	// System.Int32 VariableManager/New_Wave_Variable::arc_def
	int32_t ___arc_def_7;
	// System.Int32 VariableManager/New_Wave_Variable::arc_act
	int32_t ___arc_act_8;
	// System.Int32 VariableManager/New_Wave_Variable::arc_cost
	int32_t ___arc_cost_9;
	// System.Int32 VariableManager/New_Wave_Variable::mag_hp
	int32_t ___mag_hp_10;
	// System.Int32 VariableManager/New_Wave_Variable::mag_off
	int32_t ___mag_off_11;
	// System.Int32 VariableManager/New_Wave_Variable::mag_def
	int32_t ___mag_def_12;
	// System.Int32 VariableManager/New_Wave_Variable::mag_act
	int32_t ___mag_act_13;
	// System.Int32 VariableManager/New_Wave_Variable::mag_cost
	int32_t ___mag_cost_14;

public:
	inline static int32_t get_offset_of_war_hp_0() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___war_hp_0)); }
	inline int32_t get_war_hp_0() const { return ___war_hp_0; }
	inline int32_t* get_address_of_war_hp_0() { return &___war_hp_0; }
	inline void set_war_hp_0(int32_t value)
	{
		___war_hp_0 = value;
	}

	inline static int32_t get_offset_of_war_off_1() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___war_off_1)); }
	inline int32_t get_war_off_1() const { return ___war_off_1; }
	inline int32_t* get_address_of_war_off_1() { return &___war_off_1; }
	inline void set_war_off_1(int32_t value)
	{
		___war_off_1 = value;
	}

	inline static int32_t get_offset_of_war_def_2() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___war_def_2)); }
	inline int32_t get_war_def_2() const { return ___war_def_2; }
	inline int32_t* get_address_of_war_def_2() { return &___war_def_2; }
	inline void set_war_def_2(int32_t value)
	{
		___war_def_2 = value;
	}

	inline static int32_t get_offset_of_war_act_3() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___war_act_3)); }
	inline int32_t get_war_act_3() const { return ___war_act_3; }
	inline int32_t* get_address_of_war_act_3() { return &___war_act_3; }
	inline void set_war_act_3(int32_t value)
	{
		___war_act_3 = value;
	}

	inline static int32_t get_offset_of_war_cost_4() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___war_cost_4)); }
	inline int32_t get_war_cost_4() const { return ___war_cost_4; }
	inline int32_t* get_address_of_war_cost_4() { return &___war_cost_4; }
	inline void set_war_cost_4(int32_t value)
	{
		___war_cost_4 = value;
	}

	inline static int32_t get_offset_of_arc_hp_5() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___arc_hp_5)); }
	inline int32_t get_arc_hp_5() const { return ___arc_hp_5; }
	inline int32_t* get_address_of_arc_hp_5() { return &___arc_hp_5; }
	inline void set_arc_hp_5(int32_t value)
	{
		___arc_hp_5 = value;
	}

	inline static int32_t get_offset_of_arc_off_6() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___arc_off_6)); }
	inline int32_t get_arc_off_6() const { return ___arc_off_6; }
	inline int32_t* get_address_of_arc_off_6() { return &___arc_off_6; }
	inline void set_arc_off_6(int32_t value)
	{
		___arc_off_6 = value;
	}

	inline static int32_t get_offset_of_arc_def_7() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___arc_def_7)); }
	inline int32_t get_arc_def_7() const { return ___arc_def_7; }
	inline int32_t* get_address_of_arc_def_7() { return &___arc_def_7; }
	inline void set_arc_def_7(int32_t value)
	{
		___arc_def_7 = value;
	}

	inline static int32_t get_offset_of_arc_act_8() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___arc_act_8)); }
	inline int32_t get_arc_act_8() const { return ___arc_act_8; }
	inline int32_t* get_address_of_arc_act_8() { return &___arc_act_8; }
	inline void set_arc_act_8(int32_t value)
	{
		___arc_act_8 = value;
	}

	inline static int32_t get_offset_of_arc_cost_9() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___arc_cost_9)); }
	inline int32_t get_arc_cost_9() const { return ___arc_cost_9; }
	inline int32_t* get_address_of_arc_cost_9() { return &___arc_cost_9; }
	inline void set_arc_cost_9(int32_t value)
	{
		___arc_cost_9 = value;
	}

	inline static int32_t get_offset_of_mag_hp_10() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___mag_hp_10)); }
	inline int32_t get_mag_hp_10() const { return ___mag_hp_10; }
	inline int32_t* get_address_of_mag_hp_10() { return &___mag_hp_10; }
	inline void set_mag_hp_10(int32_t value)
	{
		___mag_hp_10 = value;
	}

	inline static int32_t get_offset_of_mag_off_11() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___mag_off_11)); }
	inline int32_t get_mag_off_11() const { return ___mag_off_11; }
	inline int32_t* get_address_of_mag_off_11() { return &___mag_off_11; }
	inline void set_mag_off_11(int32_t value)
	{
		___mag_off_11 = value;
	}

	inline static int32_t get_offset_of_mag_def_12() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___mag_def_12)); }
	inline int32_t get_mag_def_12() const { return ___mag_def_12; }
	inline int32_t* get_address_of_mag_def_12() { return &___mag_def_12; }
	inline void set_mag_def_12(int32_t value)
	{
		___mag_def_12 = value;
	}

	inline static int32_t get_offset_of_mag_act_13() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___mag_act_13)); }
	inline int32_t get_mag_act_13() const { return ___mag_act_13; }
	inline int32_t* get_address_of_mag_act_13() { return &___mag_act_13; }
	inline void set_mag_act_13(int32_t value)
	{
		___mag_act_13 = value;
	}

	inline static int32_t get_offset_of_mag_cost_14() { return static_cast<int32_t>(offsetof(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80, ___mag_cost_14)); }
	inline int32_t get_mag_cost_14() const { return ___mag_cost_14; }
	inline int32_t* get_address_of_mag_cost_14() { return &___mag_cost_14; }
	inline void set_mag_cost_14(int32_t value)
	{
		___mag_cost_14 = value;
	}
};


// VariableManager/Society_Variable
struct Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C  : public RuntimeObject
{
public:
	// System.Int32 VariableManager/Society_Variable::war_hp
	int32_t ___war_hp_0;
	// System.Int32 VariableManager/Society_Variable::war_off
	int32_t ___war_off_1;
	// System.Int32 VariableManager/Society_Variable::war_def
	int32_t ___war_def_2;
	// System.Int32 VariableManager/Society_Variable::war_act
	int32_t ___war_act_3;
	// System.Int32 VariableManager/Society_Variable::war_cost
	int32_t ___war_cost_4;
	// System.Int32 VariableManager/Society_Variable::arc_hp
	int32_t ___arc_hp_5;
	// System.Int32 VariableManager/Society_Variable::arc_off
	int32_t ___arc_off_6;
	// System.Int32 VariableManager/Society_Variable::arc_def
	int32_t ___arc_def_7;
	// System.Int32 VariableManager/Society_Variable::arc_act
	int32_t ___arc_act_8;
	// System.Int32 VariableManager/Society_Variable::arc_cost
	int32_t ___arc_cost_9;
	// System.Int32 VariableManager/Society_Variable::mag_hp
	int32_t ___mag_hp_10;
	// System.Int32 VariableManager/Society_Variable::mag_off
	int32_t ___mag_off_11;
	// System.Int32 VariableManager/Society_Variable::mag_def
	int32_t ___mag_def_12;
	// System.Int32 VariableManager/Society_Variable::mag_act
	int32_t ___mag_act_13;
	// System.Int32 VariableManager/Society_Variable::mag_cost
	int32_t ___mag_cost_14;

public:
	inline static int32_t get_offset_of_war_hp_0() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___war_hp_0)); }
	inline int32_t get_war_hp_0() const { return ___war_hp_0; }
	inline int32_t* get_address_of_war_hp_0() { return &___war_hp_0; }
	inline void set_war_hp_0(int32_t value)
	{
		___war_hp_0 = value;
	}

	inline static int32_t get_offset_of_war_off_1() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___war_off_1)); }
	inline int32_t get_war_off_1() const { return ___war_off_1; }
	inline int32_t* get_address_of_war_off_1() { return &___war_off_1; }
	inline void set_war_off_1(int32_t value)
	{
		___war_off_1 = value;
	}

	inline static int32_t get_offset_of_war_def_2() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___war_def_2)); }
	inline int32_t get_war_def_2() const { return ___war_def_2; }
	inline int32_t* get_address_of_war_def_2() { return &___war_def_2; }
	inline void set_war_def_2(int32_t value)
	{
		___war_def_2 = value;
	}

	inline static int32_t get_offset_of_war_act_3() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___war_act_3)); }
	inline int32_t get_war_act_3() const { return ___war_act_3; }
	inline int32_t* get_address_of_war_act_3() { return &___war_act_3; }
	inline void set_war_act_3(int32_t value)
	{
		___war_act_3 = value;
	}

	inline static int32_t get_offset_of_war_cost_4() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___war_cost_4)); }
	inline int32_t get_war_cost_4() const { return ___war_cost_4; }
	inline int32_t* get_address_of_war_cost_4() { return &___war_cost_4; }
	inline void set_war_cost_4(int32_t value)
	{
		___war_cost_4 = value;
	}

	inline static int32_t get_offset_of_arc_hp_5() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___arc_hp_5)); }
	inline int32_t get_arc_hp_5() const { return ___arc_hp_5; }
	inline int32_t* get_address_of_arc_hp_5() { return &___arc_hp_5; }
	inline void set_arc_hp_5(int32_t value)
	{
		___arc_hp_5 = value;
	}

	inline static int32_t get_offset_of_arc_off_6() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___arc_off_6)); }
	inline int32_t get_arc_off_6() const { return ___arc_off_6; }
	inline int32_t* get_address_of_arc_off_6() { return &___arc_off_6; }
	inline void set_arc_off_6(int32_t value)
	{
		___arc_off_6 = value;
	}

	inline static int32_t get_offset_of_arc_def_7() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___arc_def_7)); }
	inline int32_t get_arc_def_7() const { return ___arc_def_7; }
	inline int32_t* get_address_of_arc_def_7() { return &___arc_def_7; }
	inline void set_arc_def_7(int32_t value)
	{
		___arc_def_7 = value;
	}

	inline static int32_t get_offset_of_arc_act_8() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___arc_act_8)); }
	inline int32_t get_arc_act_8() const { return ___arc_act_8; }
	inline int32_t* get_address_of_arc_act_8() { return &___arc_act_8; }
	inline void set_arc_act_8(int32_t value)
	{
		___arc_act_8 = value;
	}

	inline static int32_t get_offset_of_arc_cost_9() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___arc_cost_9)); }
	inline int32_t get_arc_cost_9() const { return ___arc_cost_9; }
	inline int32_t* get_address_of_arc_cost_9() { return &___arc_cost_9; }
	inline void set_arc_cost_9(int32_t value)
	{
		___arc_cost_9 = value;
	}

	inline static int32_t get_offset_of_mag_hp_10() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___mag_hp_10)); }
	inline int32_t get_mag_hp_10() const { return ___mag_hp_10; }
	inline int32_t* get_address_of_mag_hp_10() { return &___mag_hp_10; }
	inline void set_mag_hp_10(int32_t value)
	{
		___mag_hp_10 = value;
	}

	inline static int32_t get_offset_of_mag_off_11() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___mag_off_11)); }
	inline int32_t get_mag_off_11() const { return ___mag_off_11; }
	inline int32_t* get_address_of_mag_off_11() { return &___mag_off_11; }
	inline void set_mag_off_11(int32_t value)
	{
		___mag_off_11 = value;
	}

	inline static int32_t get_offset_of_mag_def_12() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___mag_def_12)); }
	inline int32_t get_mag_def_12() const { return ___mag_def_12; }
	inline int32_t* get_address_of_mag_def_12() { return &___mag_def_12; }
	inline void set_mag_def_12(int32_t value)
	{
		___mag_def_12 = value;
	}

	inline static int32_t get_offset_of_mag_act_13() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___mag_act_13)); }
	inline int32_t get_mag_act_13() const { return ___mag_act_13; }
	inline int32_t* get_address_of_mag_act_13() { return &___mag_act_13; }
	inline void set_mag_act_13(int32_t value)
	{
		___mag_act_13 = value;
	}

	inline static int32_t get_offset_of_mag_cost_14() { return static_cast<int32_t>(offsetof(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C, ___mag_cost_14)); }
	inline int32_t get_mag_cost_14() const { return ___mag_cost_14; }
	inline int32_t* get_address_of_mag_cost_14() { return &___mag_cost_14; }
	inline void set_mag_cost_14(int32_t value)
	{
		___mag_cost_14 = value;
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.SceneManagement.Scene
struct Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE 
{
public:
	// System.Int32 UnityEngine.SceneManagement.Scene::m_Handle
	int32_t ___m_Handle_0;

public:
	inline static int32_t get_offset_of_m_Handle_0() { return static_cast<int32_t>(offsetof(Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE, ___m_Handle_0)); }
	inline int32_t get_m_Handle_0() const { return ___m_Handle_0; }
	inline int32_t* get_address_of_m_Handle_0() { return &___m_Handle_0; }
	inline void set_m_Handle_0(int32_t value)
	{
		___m_Handle_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector3
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.KeyCode
struct KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4 
{
public:
	// System.Int32 UnityEngine.KeyCode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(KeyCode_t1D303F7D061BF4429872E9F109ADDBCB431671F4, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// Photon.Pun.OwnershipOption
struct OwnershipOption_tA73B63AF021F3A834648A00C392B4BDB197E9771 
{
public:
	// System.Int32 Photon.Pun.OwnershipOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OwnershipOption_tA73B63AF021F3A834648A00C392B4BDB197E9771, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.ViewSynchronization
struct ViewSynchronization_t9F4F7159BEC18584EC739EB1EA837517AF3BF1CD 
{
public:
	// System.Int32 Photon.Pun.ViewSynchronization::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ViewSynchronization_t9F4F7159BEC18584EC739EB1EA837517AF3BF1CD, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Photon.Pun.PhotonView/ObservableSearch
struct ObservableSearch_t45D1FEF0FC92346CB3A3AEC86E2B9E8B59AE6C47 
{
public:
	// System.Int32 Photon.Pun.PhotonView/ObservableSearch::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ObservableSearch_t45D1FEF0FC92346CB3A3AEC86E2B9E8B59AE6C47, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UIManager/<fadeoutErrorMessage>d__87
struct U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318  : public RuntimeObject
{
public:
	// System.Int32 UIManager/<fadeoutErrorMessage>d__87::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object UIManager/<fadeoutErrorMessage>d__87::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// UIManager UIManager/<fadeoutErrorMessage>d__87::<>4__this
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___U3CU3E4__this_2;
	// UnityEngine.Color UIManager/<fadeoutErrorMessage>d__87::<fadecolor>5__1
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___U3CfadecolorU3E5__1_3;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318, ___U3CU3E4__this_2)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CfadecolorU3E5__1_3() { return static_cast<int32_t>(offsetof(U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318, ___U3CfadecolorU3E5__1_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_U3CfadecolorU3E5__1_3() const { return ___U3CfadecolorU3E5__1_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_U3CfadecolorU3E5__1_3() { return &___U3CfadecolorU3E5__1_3; }
	inline void set_U3CfadecolorU3E5__1_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___U3CfadecolorU3E5__1_3 = value;
	}
};


// UIManager/State
struct State_t4B16E25381089DC11217532A0B16D1D8AC9FF0A8 
{
public:
	// System.Int32 UIManager/State::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(State_t4B16E25381089DC11217532A0B16D1D8AC9FF0A8, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// AudioManager
struct AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject AudioManager::BackgroundMusic
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___BackgroundMusic_5;
	// UnityEngine.AudioSource AudioManager::backmusic
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___backmusic_6;
	// UnityEngine.AudioSource AudioManager::buttonSound
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___buttonSound_7;
	// UnityEngine.AudioSource AudioManager::title
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___title_8;
	// UnityEngine.AudioSource AudioManager::lobby
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___lobby_9;
	// UnityEngine.AudioSource AudioManager::game
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___game_10;
	// UnityEngine.AudioSource AudioManager::gameover
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___gameover_11;
	// UnityEngine.AudioSource AudioManager::button
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___button_12;

public:
	inline static int32_t get_offset_of_BackgroundMusic_5() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___BackgroundMusic_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_BackgroundMusic_5() const { return ___BackgroundMusic_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_BackgroundMusic_5() { return &___BackgroundMusic_5; }
	inline void set_BackgroundMusic_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___BackgroundMusic_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BackgroundMusic_5), (void*)value);
	}

	inline static int32_t get_offset_of_backmusic_6() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___backmusic_6)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_backmusic_6() const { return ___backmusic_6; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_backmusic_6() { return &___backmusic_6; }
	inline void set_backmusic_6(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___backmusic_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___backmusic_6), (void*)value);
	}

	inline static int32_t get_offset_of_buttonSound_7() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___buttonSound_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_buttonSound_7() const { return ___buttonSound_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_buttonSound_7() { return &___buttonSound_7; }
	inline void set_buttonSound_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___buttonSound_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buttonSound_7), (void*)value);
	}

	inline static int32_t get_offset_of_title_8() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___title_8)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_title_8() const { return ___title_8; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_title_8() { return &___title_8; }
	inline void set_title_8(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___title_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_8), (void*)value);
	}

	inline static int32_t get_offset_of_lobby_9() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___lobby_9)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_lobby_9() const { return ___lobby_9; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_lobby_9() { return &___lobby_9; }
	inline void set_lobby_9(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___lobby_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lobby_9), (void*)value);
	}

	inline static int32_t get_offset_of_game_10() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___game_10)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_game_10() const { return ___game_10; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_game_10() { return &___game_10; }
	inline void set_game_10(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___game_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___game_10), (void*)value);
	}

	inline static int32_t get_offset_of_gameover_11() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___gameover_11)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_gameover_11() const { return ___gameover_11; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_gameover_11() { return &___gameover_11; }
	inline void set_gameover_11(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___gameover_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameover_11), (void*)value);
	}

	inline static int32_t get_offset_of_button_12() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148, ___button_12)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_button_12() const { return ___button_12; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_button_12() { return &___button_12; }
	inline void set_button_12(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___button_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___button_12), (void*)value);
	}
};

struct AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_StaticFields
{
public:
	// AudioManager AudioManager::instance
	AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148_StaticFields, ___instance_4)); }
	inline AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * get_instance_4() const { return ___instance_4; }
	inline AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// Cloud
struct Cloud_tF7F58C93A5DC1F1378D97ACFF462C47C831114B3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Animator Cloud::animator
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___animator_4;

public:
	inline static int32_t get_offset_of_animator_4() { return static_cast<int32_t>(offsetof(Cloud_tF7F58C93A5DC1F1378D97ACFF462C47C831114B3, ___animator_4)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_animator_4() const { return ___animator_4; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_animator_4() { return &___animator_4; }
	inline void set_animator_4(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___animator_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___animator_4), (void*)value);
	}
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// PlayerData GameManager::playerData
	PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * ___playerData_5;
	// AudioManager GameManager::audioManager
	AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * ___audioManager_6;
	// System.Int32 GameManager::turn_Number
	int32_t ___turn_Number_7;

public:
	inline static int32_t get_offset_of_playerData_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___playerData_5)); }
	inline PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * get_playerData_5() const { return ___playerData_5; }
	inline PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 ** get_address_of_playerData_5() { return &___playerData_5; }
	inline void set_playerData_5(PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * value)
	{
		___playerData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___playerData_5), (void*)value);
	}

	inline static int32_t get_offset_of_audioManager_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___audioManager_6)); }
	inline AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * get_audioManager_6() const { return ___audioManager_6; }
	inline AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 ** get_address_of_audioManager_6() { return &___audioManager_6; }
	inline void set_audioManager_6(AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * value)
	{
		___audioManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_turn_Number_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___turn_Number_7)); }
	inline int32_t get_turn_Number_7() const { return ___turn_Number_7; }
	inline int32_t* get_address_of_turn_Number_7() { return &___turn_Number_7; }
	inline void set_turn_Number_7(int32_t value)
	{
		___turn_Number_7 = value;
	}
};

struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields
{
public:
	// GameManager GameManager::main
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___main_4;

public:
	inline static int32_t get_offset_of_main_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1_StaticFields, ___main_4)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_main_4() const { return ___main_4; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_main_4() { return &___main_4; }
	inline void set_main_4(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___main_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___main_4), (void*)value);
	}
};


// Photon.Pun.MonoBehaviourPun
struct MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Photon.Pun.PhotonView Photon.Pun.MonoBehaviourPun::pvCache
	PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * ___pvCache_4;

public:
	inline static int32_t get_offset_of_pvCache_4() { return static_cast<int32_t>(offsetof(MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223, ___pvCache_4)); }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * get_pvCache_4() const { return ___pvCache_4; }
	inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 ** get_address_of_pvCache_4() { return &___pvCache_4; }
	inline void set_pvCache_4(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * value)
	{
		___pvCache_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pvCache_4), (void*)value);
	}
};


// MoveUnit
struct MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// Tile MoveUnit::pairTile
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___pairTile_4;
	// System.Int32 MoveUnit::cost
	int32_t ___cost_5;
	// System.Boolean MoveUnit::isMaster
	bool ___isMaster_6;
	// System.Boolean MoveUnit::isChecked
	bool ___isChecked_7;
	// UnityEngine.UI.Image MoveUnit::checkPoint
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___checkPoint_8;
	// System.Boolean MoveUnit::isMove
	bool ___isMove_9;
	// UnityEngine.UI.Image[] MoveUnit::p1unit
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___p1unit_10;
	// UnityEngine.UI.Image[] MoveUnit::p2unit
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___p2unit_11;

public:
	inline static int32_t get_offset_of_pairTile_4() { return static_cast<int32_t>(offsetof(MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530, ___pairTile_4)); }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * get_pairTile_4() const { return ___pairTile_4; }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 ** get_address_of_pairTile_4() { return &___pairTile_4; }
	inline void set_pairTile_4(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * value)
	{
		___pairTile_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pairTile_4), (void*)value);
	}

	inline static int32_t get_offset_of_cost_5() { return static_cast<int32_t>(offsetof(MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530, ___cost_5)); }
	inline int32_t get_cost_5() const { return ___cost_5; }
	inline int32_t* get_address_of_cost_5() { return &___cost_5; }
	inline void set_cost_5(int32_t value)
	{
		___cost_5 = value;
	}

	inline static int32_t get_offset_of_isMaster_6() { return static_cast<int32_t>(offsetof(MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530, ___isMaster_6)); }
	inline bool get_isMaster_6() const { return ___isMaster_6; }
	inline bool* get_address_of_isMaster_6() { return &___isMaster_6; }
	inline void set_isMaster_6(bool value)
	{
		___isMaster_6 = value;
	}

	inline static int32_t get_offset_of_isChecked_7() { return static_cast<int32_t>(offsetof(MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530, ___isChecked_7)); }
	inline bool get_isChecked_7() const { return ___isChecked_7; }
	inline bool* get_address_of_isChecked_7() { return &___isChecked_7; }
	inline void set_isChecked_7(bool value)
	{
		___isChecked_7 = value;
	}

	inline static int32_t get_offset_of_checkPoint_8() { return static_cast<int32_t>(offsetof(MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530, ___checkPoint_8)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_checkPoint_8() const { return ___checkPoint_8; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_checkPoint_8() { return &___checkPoint_8; }
	inline void set_checkPoint_8(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___checkPoint_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkPoint_8), (void*)value);
	}

	inline static int32_t get_offset_of_isMove_9() { return static_cast<int32_t>(offsetof(MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530, ___isMove_9)); }
	inline bool get_isMove_9() const { return ___isMove_9; }
	inline bool* get_address_of_isMove_9() { return &___isMove_9; }
	inline void set_isMove_9(bool value)
	{
		___isMove_9 = value;
	}

	inline static int32_t get_offset_of_p1unit_10() { return static_cast<int32_t>(offsetof(MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530, ___p1unit_10)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_p1unit_10() const { return ___p1unit_10; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_p1unit_10() { return &___p1unit_10; }
	inline void set_p1unit_10(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___p1unit_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p1unit_10), (void*)value);
	}

	inline static int32_t get_offset_of_p2unit_11() { return static_cast<int32_t>(offsetof(MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530, ___p2unit_11)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_p2unit_11() const { return ___p2unit_11; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_p2unit_11() { return &___p2unit_11; }
	inline void set_p2unit_11(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___p2unit_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p2unit_11), (void*)value);
	}
};


// Photon.Pun.PhotonView
struct PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Byte Photon.Pun.PhotonView::Group
	uint8_t ___Group_4;
	// System.Int32 Photon.Pun.PhotonView::prefixField
	int32_t ___prefixField_5;
	// System.Object[] Photon.Pun.PhotonView::instantiationDataField
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___instantiationDataField_6;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::lastOnSerializeDataSent
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___lastOnSerializeDataSent_7;
	// System.Collections.Generic.List`1<System.Object> Photon.Pun.PhotonView::syncValues
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___syncValues_8;
	// System.Object[] Photon.Pun.PhotonView::lastOnSerializeDataReceived
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___lastOnSerializeDataReceived_9;
	// Photon.Pun.ViewSynchronization Photon.Pun.PhotonView::Synchronization
	int32_t ___Synchronization_10;
	// System.Boolean Photon.Pun.PhotonView::mixedModeIsReliable
	bool ___mixedModeIsReliable_11;
	// Photon.Pun.OwnershipOption Photon.Pun.PhotonView::OwnershipTransfer
	int32_t ___OwnershipTransfer_12;
	// Photon.Pun.PhotonView/ObservableSearch Photon.Pun.PhotonView::observableSearch
	int32_t ___observableSearch_13;
	// System.Collections.Generic.List`1<UnityEngine.Component> Photon.Pun.PhotonView::ObservedComponents
	List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * ___ObservedComponents_14;
	// UnityEngine.MonoBehaviour[] Photon.Pun.PhotonView::RpcMonoBehaviours
	MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* ___RpcMonoBehaviours_15;
	// System.Boolean Photon.Pun.PhotonView::<IsMine>k__BackingField
	bool ___U3CIsMineU3Ek__BackingField_16;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Controller>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3CControllerU3Ek__BackingField_17;
	// System.Int32 Photon.Pun.PhotonView::<CreatorActorNr>k__BackingField
	int32_t ___U3CCreatorActorNrU3Ek__BackingField_18;
	// System.Boolean Photon.Pun.PhotonView::<AmOwner>k__BackingField
	bool ___U3CAmOwnerU3Ek__BackingField_19;
	// Photon.Realtime.Player Photon.Pun.PhotonView::<Owner>k__BackingField
	Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * ___U3COwnerU3Ek__BackingField_20;
	// System.Int32 Photon.Pun.PhotonView::ownerActorNr
	int32_t ___ownerActorNr_21;
	// System.Int32 Photon.Pun.PhotonView::controllerActorNr
	int32_t ___controllerActorNr_22;
	// System.Int32 Photon.Pun.PhotonView::sceneViewId
	int32_t ___sceneViewId_23;
	// System.Int32 Photon.Pun.PhotonView::viewIdField
	int32_t ___viewIdField_24;
	// System.Int32 Photon.Pun.PhotonView::InstantiationId
	int32_t ___InstantiationId_25;
	// System.Boolean Photon.Pun.PhotonView::isRuntimeInstantiated
	bool ___isRuntimeInstantiated_26;
	// System.Boolean Photon.Pun.PhotonView::removedFromLocalViewList
	bool ___removedFromLocalViewList_27;
	// System.Collections.Generic.Queue`1<Photon.Pun.PhotonView/CallbackTargetChange> Photon.Pun.PhotonView::CallbackChangeQueue
	Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * ___CallbackChangeQueue_28;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewPreNetDestroy> Photon.Pun.PhotonView::OnPreNetDestroyCallbacks
	List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * ___OnPreNetDestroyCallbacks_29;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewOwnerChange> Photon.Pun.PhotonView::OnOwnerChangeCallbacks
	List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * ___OnOwnerChangeCallbacks_30;
	// System.Collections.Generic.List`1<Photon.Pun.IOnPhotonViewControllerChange> Photon.Pun.PhotonView::OnControllerChangeCallbacks
	List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * ___OnControllerChangeCallbacks_31;

public:
	inline static int32_t get_offset_of_Group_4() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___Group_4)); }
	inline uint8_t get_Group_4() const { return ___Group_4; }
	inline uint8_t* get_address_of_Group_4() { return &___Group_4; }
	inline void set_Group_4(uint8_t value)
	{
		___Group_4 = value;
	}

	inline static int32_t get_offset_of_prefixField_5() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___prefixField_5)); }
	inline int32_t get_prefixField_5() const { return ___prefixField_5; }
	inline int32_t* get_address_of_prefixField_5() { return &___prefixField_5; }
	inline void set_prefixField_5(int32_t value)
	{
		___prefixField_5 = value;
	}

	inline static int32_t get_offset_of_instantiationDataField_6() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___instantiationDataField_6)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_instantiationDataField_6() const { return ___instantiationDataField_6; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_instantiationDataField_6() { return &___instantiationDataField_6; }
	inline void set_instantiationDataField_6(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___instantiationDataField_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instantiationDataField_6), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataSent_7() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___lastOnSerializeDataSent_7)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_lastOnSerializeDataSent_7() const { return ___lastOnSerializeDataSent_7; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_lastOnSerializeDataSent_7() { return &___lastOnSerializeDataSent_7; }
	inline void set_lastOnSerializeDataSent_7(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___lastOnSerializeDataSent_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataSent_7), (void*)value);
	}

	inline static int32_t get_offset_of_syncValues_8() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___syncValues_8)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_syncValues_8() const { return ___syncValues_8; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_syncValues_8() { return &___syncValues_8; }
	inline void set_syncValues_8(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___syncValues_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___syncValues_8), (void*)value);
	}

	inline static int32_t get_offset_of_lastOnSerializeDataReceived_9() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___lastOnSerializeDataReceived_9)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_lastOnSerializeDataReceived_9() const { return ___lastOnSerializeDataReceived_9; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_lastOnSerializeDataReceived_9() { return &___lastOnSerializeDataReceived_9; }
	inline void set_lastOnSerializeDataReceived_9(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___lastOnSerializeDataReceived_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___lastOnSerializeDataReceived_9), (void*)value);
	}

	inline static int32_t get_offset_of_Synchronization_10() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___Synchronization_10)); }
	inline int32_t get_Synchronization_10() const { return ___Synchronization_10; }
	inline int32_t* get_address_of_Synchronization_10() { return &___Synchronization_10; }
	inline void set_Synchronization_10(int32_t value)
	{
		___Synchronization_10 = value;
	}

	inline static int32_t get_offset_of_mixedModeIsReliable_11() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___mixedModeIsReliable_11)); }
	inline bool get_mixedModeIsReliable_11() const { return ___mixedModeIsReliable_11; }
	inline bool* get_address_of_mixedModeIsReliable_11() { return &___mixedModeIsReliable_11; }
	inline void set_mixedModeIsReliable_11(bool value)
	{
		___mixedModeIsReliable_11 = value;
	}

	inline static int32_t get_offset_of_OwnershipTransfer_12() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OwnershipTransfer_12)); }
	inline int32_t get_OwnershipTransfer_12() const { return ___OwnershipTransfer_12; }
	inline int32_t* get_address_of_OwnershipTransfer_12() { return &___OwnershipTransfer_12; }
	inline void set_OwnershipTransfer_12(int32_t value)
	{
		___OwnershipTransfer_12 = value;
	}

	inline static int32_t get_offset_of_observableSearch_13() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___observableSearch_13)); }
	inline int32_t get_observableSearch_13() const { return ___observableSearch_13; }
	inline int32_t* get_address_of_observableSearch_13() { return &___observableSearch_13; }
	inline void set_observableSearch_13(int32_t value)
	{
		___observableSearch_13 = value;
	}

	inline static int32_t get_offset_of_ObservedComponents_14() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ObservedComponents_14)); }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * get_ObservedComponents_14() const { return ___ObservedComponents_14; }
	inline List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F ** get_address_of_ObservedComponents_14() { return &___ObservedComponents_14; }
	inline void set_ObservedComponents_14(List_1_tA3929E98F6AC5A6E95EF799D2E3294F214358C0F * value)
	{
		___ObservedComponents_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ObservedComponents_14), (void*)value);
	}

	inline static int32_t get_offset_of_RpcMonoBehaviours_15() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___RpcMonoBehaviours_15)); }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* get_RpcMonoBehaviours_15() const { return ___RpcMonoBehaviours_15; }
	inline MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D** get_address_of_RpcMonoBehaviours_15() { return &___RpcMonoBehaviours_15; }
	inline void set_RpcMonoBehaviours_15(MonoBehaviourU5BU5D_t4F792E4F07CDD1638166A5F25EA3670210A8192D* value)
	{
		___RpcMonoBehaviours_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___RpcMonoBehaviours_15), (void*)value);
	}

	inline static int32_t get_offset_of_U3CIsMineU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CIsMineU3Ek__BackingField_16)); }
	inline bool get_U3CIsMineU3Ek__BackingField_16() const { return ___U3CIsMineU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CIsMineU3Ek__BackingField_16() { return &___U3CIsMineU3Ek__BackingField_16; }
	inline void set_U3CIsMineU3Ek__BackingField_16(bool value)
	{
		___U3CIsMineU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CControllerU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CControllerU3Ek__BackingField_17)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3CControllerU3Ek__BackingField_17() const { return ___U3CControllerU3Ek__BackingField_17; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3CControllerU3Ek__BackingField_17() { return &___U3CControllerU3Ek__BackingField_17; }
	inline void set_U3CControllerU3Ek__BackingField_17(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3CControllerU3Ek__BackingField_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CControllerU3Ek__BackingField_17), (void*)value);
	}

	inline static int32_t get_offset_of_U3CCreatorActorNrU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CCreatorActorNrU3Ek__BackingField_18)); }
	inline int32_t get_U3CCreatorActorNrU3Ek__BackingField_18() const { return ___U3CCreatorActorNrU3Ek__BackingField_18; }
	inline int32_t* get_address_of_U3CCreatorActorNrU3Ek__BackingField_18() { return &___U3CCreatorActorNrU3Ek__BackingField_18; }
	inline void set_U3CCreatorActorNrU3Ek__BackingField_18(int32_t value)
	{
		___U3CCreatorActorNrU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CAmOwnerU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3CAmOwnerU3Ek__BackingField_19)); }
	inline bool get_U3CAmOwnerU3Ek__BackingField_19() const { return ___U3CAmOwnerU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CAmOwnerU3Ek__BackingField_19() { return &___U3CAmOwnerU3Ek__BackingField_19; }
	inline void set_U3CAmOwnerU3Ek__BackingField_19(bool value)
	{
		___U3CAmOwnerU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3COwnerU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___U3COwnerU3Ek__BackingField_20)); }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * get_U3COwnerU3Ek__BackingField_20() const { return ___U3COwnerU3Ek__BackingField_20; }
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** get_address_of_U3COwnerU3Ek__BackingField_20() { return &___U3COwnerU3Ek__BackingField_20; }
	inline void set_U3COwnerU3Ek__BackingField_20(Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		___U3COwnerU3Ek__BackingField_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3COwnerU3Ek__BackingField_20), (void*)value);
	}

	inline static int32_t get_offset_of_ownerActorNr_21() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___ownerActorNr_21)); }
	inline int32_t get_ownerActorNr_21() const { return ___ownerActorNr_21; }
	inline int32_t* get_address_of_ownerActorNr_21() { return &___ownerActorNr_21; }
	inline void set_ownerActorNr_21(int32_t value)
	{
		___ownerActorNr_21 = value;
	}

	inline static int32_t get_offset_of_controllerActorNr_22() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___controllerActorNr_22)); }
	inline int32_t get_controllerActorNr_22() const { return ___controllerActorNr_22; }
	inline int32_t* get_address_of_controllerActorNr_22() { return &___controllerActorNr_22; }
	inline void set_controllerActorNr_22(int32_t value)
	{
		___controllerActorNr_22 = value;
	}

	inline static int32_t get_offset_of_sceneViewId_23() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___sceneViewId_23)); }
	inline int32_t get_sceneViewId_23() const { return ___sceneViewId_23; }
	inline int32_t* get_address_of_sceneViewId_23() { return &___sceneViewId_23; }
	inline void set_sceneViewId_23(int32_t value)
	{
		___sceneViewId_23 = value;
	}

	inline static int32_t get_offset_of_viewIdField_24() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___viewIdField_24)); }
	inline int32_t get_viewIdField_24() const { return ___viewIdField_24; }
	inline int32_t* get_address_of_viewIdField_24() { return &___viewIdField_24; }
	inline void set_viewIdField_24(int32_t value)
	{
		___viewIdField_24 = value;
	}

	inline static int32_t get_offset_of_InstantiationId_25() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___InstantiationId_25)); }
	inline int32_t get_InstantiationId_25() const { return ___InstantiationId_25; }
	inline int32_t* get_address_of_InstantiationId_25() { return &___InstantiationId_25; }
	inline void set_InstantiationId_25(int32_t value)
	{
		___InstantiationId_25 = value;
	}

	inline static int32_t get_offset_of_isRuntimeInstantiated_26() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___isRuntimeInstantiated_26)); }
	inline bool get_isRuntimeInstantiated_26() const { return ___isRuntimeInstantiated_26; }
	inline bool* get_address_of_isRuntimeInstantiated_26() { return &___isRuntimeInstantiated_26; }
	inline void set_isRuntimeInstantiated_26(bool value)
	{
		___isRuntimeInstantiated_26 = value;
	}

	inline static int32_t get_offset_of_removedFromLocalViewList_27() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___removedFromLocalViewList_27)); }
	inline bool get_removedFromLocalViewList_27() const { return ___removedFromLocalViewList_27; }
	inline bool* get_address_of_removedFromLocalViewList_27() { return &___removedFromLocalViewList_27; }
	inline void set_removedFromLocalViewList_27(bool value)
	{
		___removedFromLocalViewList_27 = value;
	}

	inline static int32_t get_offset_of_CallbackChangeQueue_28() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___CallbackChangeQueue_28)); }
	inline Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * get_CallbackChangeQueue_28() const { return ___CallbackChangeQueue_28; }
	inline Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA ** get_address_of_CallbackChangeQueue_28() { return &___CallbackChangeQueue_28; }
	inline void set_CallbackChangeQueue_28(Queue_1_tFEA541538EDABF264541600D59670F3BF7A1CBBA * value)
	{
		___CallbackChangeQueue_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CallbackChangeQueue_28), (void*)value);
	}

	inline static int32_t get_offset_of_OnPreNetDestroyCallbacks_29() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnPreNetDestroyCallbacks_29)); }
	inline List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * get_OnPreNetDestroyCallbacks_29() const { return ___OnPreNetDestroyCallbacks_29; }
	inline List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 ** get_address_of_OnPreNetDestroyCallbacks_29() { return &___OnPreNetDestroyCallbacks_29; }
	inline void set_OnPreNetDestroyCallbacks_29(List_1_t4DB7B0336D64406C171CF66BAA4D34AD5C4535F4 * value)
	{
		___OnPreNetDestroyCallbacks_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnPreNetDestroyCallbacks_29), (void*)value);
	}

	inline static int32_t get_offset_of_OnOwnerChangeCallbacks_30() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnOwnerChangeCallbacks_30)); }
	inline List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * get_OnOwnerChangeCallbacks_30() const { return ___OnOwnerChangeCallbacks_30; }
	inline List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 ** get_address_of_OnOwnerChangeCallbacks_30() { return &___OnOwnerChangeCallbacks_30; }
	inline void set_OnOwnerChangeCallbacks_30(List_1_t06AABC4B81CF443D1A9CB0AB4D0071D2C06D29D6 * value)
	{
		___OnOwnerChangeCallbacks_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnOwnerChangeCallbacks_30), (void*)value);
	}

	inline static int32_t get_offset_of_OnControllerChangeCallbacks_31() { return static_cast<int32_t>(offsetof(PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43, ___OnControllerChangeCallbacks_31)); }
	inline List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * get_OnControllerChangeCallbacks_31() const { return ___OnControllerChangeCallbacks_31; }
	inline List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 ** get_address_of_OnControllerChangeCallbacks_31() { return &___OnControllerChangeCallbacks_31; }
	inline void set_OnControllerChangeCallbacks_31(List_1_tA0B13FF5B5A6E4331AA1B6B2916C42D83F1DA340 * value)
	{
		___OnControllerChangeCallbacks_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___OnControllerChangeCallbacks_31), (void*)value);
	}
};


// TitleChar
struct TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image TitleChar::mafia
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___mafia_4;
	// UnityEngine.UI.Image TitleChar::new_wave
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___new_wave_5;
	// UnityEngine.UI.Image TitleChar::society
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___society_6;
	// UnityEngine.Color TitleChar::m_fadecolor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_fadecolor_7;
	// UnityEngine.Color TitleChar::n_fadecolor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___n_fadecolor_8;
	// UnityEngine.Color TitleChar::s_fadecolor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___s_fadecolor_9;
	// System.Single TitleChar::start
	float ___start_10;
	// System.Single TitleChar::end
	float ___end_11;
	// System.Single TitleChar::time
	float ___time_12;
	// System.Single TitleChar::FadeTime
	float ___FadeTime_13;
	// System.Boolean TitleChar::fade
	bool ___fade_14;

public:
	inline static int32_t get_offset_of_mafia_4() { return static_cast<int32_t>(offsetof(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461, ___mafia_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_mafia_4() const { return ___mafia_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_mafia_4() { return &___mafia_4; }
	inline void set_mafia_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___mafia_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mafia_4), (void*)value);
	}

	inline static int32_t get_offset_of_new_wave_5() { return static_cast<int32_t>(offsetof(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461, ___new_wave_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_new_wave_5() const { return ___new_wave_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_new_wave_5() { return &___new_wave_5; }
	inline void set_new_wave_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___new_wave_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___new_wave_5), (void*)value);
	}

	inline static int32_t get_offset_of_society_6() { return static_cast<int32_t>(offsetof(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461, ___society_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_society_6() const { return ___society_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_society_6() { return &___society_6; }
	inline void set_society_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___society_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___society_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_fadecolor_7() { return static_cast<int32_t>(offsetof(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461, ___m_fadecolor_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_fadecolor_7() const { return ___m_fadecolor_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_fadecolor_7() { return &___m_fadecolor_7; }
	inline void set_m_fadecolor_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_fadecolor_7 = value;
	}

	inline static int32_t get_offset_of_n_fadecolor_8() { return static_cast<int32_t>(offsetof(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461, ___n_fadecolor_8)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_n_fadecolor_8() const { return ___n_fadecolor_8; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_n_fadecolor_8() { return &___n_fadecolor_8; }
	inline void set_n_fadecolor_8(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___n_fadecolor_8 = value;
	}

	inline static int32_t get_offset_of_s_fadecolor_9() { return static_cast<int32_t>(offsetof(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461, ___s_fadecolor_9)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_s_fadecolor_9() const { return ___s_fadecolor_9; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_s_fadecolor_9() { return &___s_fadecolor_9; }
	inline void set_s_fadecolor_9(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___s_fadecolor_9 = value;
	}

	inline static int32_t get_offset_of_start_10() { return static_cast<int32_t>(offsetof(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461, ___start_10)); }
	inline float get_start_10() const { return ___start_10; }
	inline float* get_address_of_start_10() { return &___start_10; }
	inline void set_start_10(float value)
	{
		___start_10 = value;
	}

	inline static int32_t get_offset_of_end_11() { return static_cast<int32_t>(offsetof(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461, ___end_11)); }
	inline float get_end_11() const { return ___end_11; }
	inline float* get_address_of_end_11() { return &___end_11; }
	inline void set_end_11(float value)
	{
		___end_11 = value;
	}

	inline static int32_t get_offset_of_time_12() { return static_cast<int32_t>(offsetof(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461, ___time_12)); }
	inline float get_time_12() const { return ___time_12; }
	inline float* get_address_of_time_12() { return &___time_12; }
	inline void set_time_12(float value)
	{
		___time_12 = value;
	}

	inline static int32_t get_offset_of_FadeTime_13() { return static_cast<int32_t>(offsetof(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461, ___FadeTime_13)); }
	inline float get_FadeTime_13() const { return ___FadeTime_13; }
	inline float* get_address_of_FadeTime_13() { return &___FadeTime_13; }
	inline void set_FadeTime_13(float value)
	{
		___FadeTime_13 = value;
	}

	inline static int32_t get_offset_of_fade_14() { return static_cast<int32_t>(offsetof(TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461, ___fade_14)); }
	inline bool get_fade_14() const { return ___fade_14; }
	inline bool* get_address_of_fade_14() { return &___fade_14; }
	inline void set_fade_14(bool value)
	{
		___fade_14 = value;
	}
};


// TutorialMain
struct TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text TutorialMain::TutorialText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___TutorialText_4;
	// UnityEngine.UI.Text TutorialMain::Money
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Money_5;
	// System.Int32 TutorialMain::ClickNum
	int32_t ___ClickNum_6;
	// UnityEngine.GameObject[] TutorialMain::Units
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___Units_7;
	// UnityEngine.GameObject[] TutorialMain::UIs
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___UIs_8;
	// UnityEngine.GameObject TutorialMain::Building
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Building_9;
	// UnityEngine.Transform TutorialMain::CameraView
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___CameraView_10;
	// System.String TutorialMain::BtnName
	String_t* ___BtnName_11;
	// System.Boolean TutorialMain::UnitBtn
	bool ___UnitBtn_12;
	// System.Boolean TutorialMain::Unit2Btn
	bool ___Unit2Btn_13;
	// System.Boolean TutorialMain::Unit3Btn
	bool ___Unit3Btn_14;
	// System.Boolean TutorialMain::BuildBtn
	bool ___BuildBtn_15;
	// System.Boolean TutorialMain::Build1Btn
	bool ___Build1Btn_16;
	// System.Boolean TutorialMain::MinimapBtn
	bool ___MinimapBtn_17;
	// System.Boolean TutorialMain::Minimap2Btn
	bool ___Minimap2Btn_18;
	// System.Boolean TutorialMain::Minimap3Btn
	bool ___Minimap3Btn_19;
	// System.Boolean TutorialMain::TurnNextBtn
	bool ___TurnNextBtn_20;
	// System.Boolean TutorialMain::SettingBtn
	bool ___SettingBtn_21;
	// System.Boolean TutorialMain::Unit3DBtn
	bool ___Unit3DBtn_22;
	// System.Boolean TutorialMain::MvBtn
	bool ___MvBtn_23;
	// System.Boolean TutorialMain::AtkBtn
	bool ___AtkBtn_24;
	// System.Boolean TutorialMain::MvokBtn
	bool ___MvokBtn_25;
	// System.Boolean TutorialMain::LocateBtn
	bool ___LocateBtn_26;
	// System.Boolean TutorialMain::Eunit3DBtn
	bool ___Eunit3DBtn_27;
	// System.Boolean TutorialMain::ButtonLimit
	bool ___ButtonLimit_28;
	// System.Boolean TutorialMain::UButtonLimit
	bool ___UButtonLimit_29;
	// System.Boolean TutorialMain::BButtonLimit
	bool ___BButtonLimit_30;
	// UnityEngine.Color TutorialMain::panelColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___panelColor_31;
	// System.Boolean TutorialMain::Unit2nd
	bool ___Unit2nd_32;
	// System.Boolean TutorialMain::UnitLimit
	bool ___UnitLimit_33;
	// System.Boolean TutorialMain::BtnClicked
	bool ___BtnClicked_34;
	// System.Boolean TutorialMain::UnitSecond
	bool ___UnitSecond_35;
	// System.Boolean TutorialMain::TurnNext
	bool ___TurnNext_36;
	// System.Boolean TutorialMain::Dicision
	bool ___Dicision_37;
	// UnityEngine.UI.Button TutorialMain::goMain
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___goMain_38;

public:
	inline static int32_t get_offset_of_TutorialText_4() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___TutorialText_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_TutorialText_4() const { return ___TutorialText_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_TutorialText_4() { return &___TutorialText_4; }
	inline void set_TutorialText_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___TutorialText_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TutorialText_4), (void*)value);
	}

	inline static int32_t get_offset_of_Money_5() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___Money_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Money_5() const { return ___Money_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Money_5() { return &___Money_5; }
	inline void set_Money_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Money_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Money_5), (void*)value);
	}

	inline static int32_t get_offset_of_ClickNum_6() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___ClickNum_6)); }
	inline int32_t get_ClickNum_6() const { return ___ClickNum_6; }
	inline int32_t* get_address_of_ClickNum_6() { return &___ClickNum_6; }
	inline void set_ClickNum_6(int32_t value)
	{
		___ClickNum_6 = value;
	}

	inline static int32_t get_offset_of_Units_7() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___Units_7)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_Units_7() const { return ___Units_7; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_Units_7() { return &___Units_7; }
	inline void set_Units_7(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___Units_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Units_7), (void*)value);
	}

	inline static int32_t get_offset_of_UIs_8() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___UIs_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_UIs_8() const { return ___UIs_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_UIs_8() { return &___UIs_8; }
	inline void set_UIs_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___UIs_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UIs_8), (void*)value);
	}

	inline static int32_t get_offset_of_Building_9() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___Building_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Building_9() const { return ___Building_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Building_9() { return &___Building_9; }
	inline void set_Building_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Building_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Building_9), (void*)value);
	}

	inline static int32_t get_offset_of_CameraView_10() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___CameraView_10)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_CameraView_10() const { return ___CameraView_10; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_CameraView_10() { return &___CameraView_10; }
	inline void set_CameraView_10(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___CameraView_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___CameraView_10), (void*)value);
	}

	inline static int32_t get_offset_of_BtnName_11() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___BtnName_11)); }
	inline String_t* get_BtnName_11() const { return ___BtnName_11; }
	inline String_t** get_address_of_BtnName_11() { return &___BtnName_11; }
	inline void set_BtnName_11(String_t* value)
	{
		___BtnName_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___BtnName_11), (void*)value);
	}

	inline static int32_t get_offset_of_UnitBtn_12() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___UnitBtn_12)); }
	inline bool get_UnitBtn_12() const { return ___UnitBtn_12; }
	inline bool* get_address_of_UnitBtn_12() { return &___UnitBtn_12; }
	inline void set_UnitBtn_12(bool value)
	{
		___UnitBtn_12 = value;
	}

	inline static int32_t get_offset_of_Unit2Btn_13() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___Unit2Btn_13)); }
	inline bool get_Unit2Btn_13() const { return ___Unit2Btn_13; }
	inline bool* get_address_of_Unit2Btn_13() { return &___Unit2Btn_13; }
	inline void set_Unit2Btn_13(bool value)
	{
		___Unit2Btn_13 = value;
	}

	inline static int32_t get_offset_of_Unit3Btn_14() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___Unit3Btn_14)); }
	inline bool get_Unit3Btn_14() const { return ___Unit3Btn_14; }
	inline bool* get_address_of_Unit3Btn_14() { return &___Unit3Btn_14; }
	inline void set_Unit3Btn_14(bool value)
	{
		___Unit3Btn_14 = value;
	}

	inline static int32_t get_offset_of_BuildBtn_15() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___BuildBtn_15)); }
	inline bool get_BuildBtn_15() const { return ___BuildBtn_15; }
	inline bool* get_address_of_BuildBtn_15() { return &___BuildBtn_15; }
	inline void set_BuildBtn_15(bool value)
	{
		___BuildBtn_15 = value;
	}

	inline static int32_t get_offset_of_Build1Btn_16() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___Build1Btn_16)); }
	inline bool get_Build1Btn_16() const { return ___Build1Btn_16; }
	inline bool* get_address_of_Build1Btn_16() { return &___Build1Btn_16; }
	inline void set_Build1Btn_16(bool value)
	{
		___Build1Btn_16 = value;
	}

	inline static int32_t get_offset_of_MinimapBtn_17() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___MinimapBtn_17)); }
	inline bool get_MinimapBtn_17() const { return ___MinimapBtn_17; }
	inline bool* get_address_of_MinimapBtn_17() { return &___MinimapBtn_17; }
	inline void set_MinimapBtn_17(bool value)
	{
		___MinimapBtn_17 = value;
	}

	inline static int32_t get_offset_of_Minimap2Btn_18() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___Minimap2Btn_18)); }
	inline bool get_Minimap2Btn_18() const { return ___Minimap2Btn_18; }
	inline bool* get_address_of_Minimap2Btn_18() { return &___Minimap2Btn_18; }
	inline void set_Minimap2Btn_18(bool value)
	{
		___Minimap2Btn_18 = value;
	}

	inline static int32_t get_offset_of_Minimap3Btn_19() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___Minimap3Btn_19)); }
	inline bool get_Minimap3Btn_19() const { return ___Minimap3Btn_19; }
	inline bool* get_address_of_Minimap3Btn_19() { return &___Minimap3Btn_19; }
	inline void set_Minimap3Btn_19(bool value)
	{
		___Minimap3Btn_19 = value;
	}

	inline static int32_t get_offset_of_TurnNextBtn_20() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___TurnNextBtn_20)); }
	inline bool get_TurnNextBtn_20() const { return ___TurnNextBtn_20; }
	inline bool* get_address_of_TurnNextBtn_20() { return &___TurnNextBtn_20; }
	inline void set_TurnNextBtn_20(bool value)
	{
		___TurnNextBtn_20 = value;
	}

	inline static int32_t get_offset_of_SettingBtn_21() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___SettingBtn_21)); }
	inline bool get_SettingBtn_21() const { return ___SettingBtn_21; }
	inline bool* get_address_of_SettingBtn_21() { return &___SettingBtn_21; }
	inline void set_SettingBtn_21(bool value)
	{
		___SettingBtn_21 = value;
	}

	inline static int32_t get_offset_of_Unit3DBtn_22() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___Unit3DBtn_22)); }
	inline bool get_Unit3DBtn_22() const { return ___Unit3DBtn_22; }
	inline bool* get_address_of_Unit3DBtn_22() { return &___Unit3DBtn_22; }
	inline void set_Unit3DBtn_22(bool value)
	{
		___Unit3DBtn_22 = value;
	}

	inline static int32_t get_offset_of_MvBtn_23() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___MvBtn_23)); }
	inline bool get_MvBtn_23() const { return ___MvBtn_23; }
	inline bool* get_address_of_MvBtn_23() { return &___MvBtn_23; }
	inline void set_MvBtn_23(bool value)
	{
		___MvBtn_23 = value;
	}

	inline static int32_t get_offset_of_AtkBtn_24() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___AtkBtn_24)); }
	inline bool get_AtkBtn_24() const { return ___AtkBtn_24; }
	inline bool* get_address_of_AtkBtn_24() { return &___AtkBtn_24; }
	inline void set_AtkBtn_24(bool value)
	{
		___AtkBtn_24 = value;
	}

	inline static int32_t get_offset_of_MvokBtn_25() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___MvokBtn_25)); }
	inline bool get_MvokBtn_25() const { return ___MvokBtn_25; }
	inline bool* get_address_of_MvokBtn_25() { return &___MvokBtn_25; }
	inline void set_MvokBtn_25(bool value)
	{
		___MvokBtn_25 = value;
	}

	inline static int32_t get_offset_of_LocateBtn_26() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___LocateBtn_26)); }
	inline bool get_LocateBtn_26() const { return ___LocateBtn_26; }
	inline bool* get_address_of_LocateBtn_26() { return &___LocateBtn_26; }
	inline void set_LocateBtn_26(bool value)
	{
		___LocateBtn_26 = value;
	}

	inline static int32_t get_offset_of_Eunit3DBtn_27() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___Eunit3DBtn_27)); }
	inline bool get_Eunit3DBtn_27() const { return ___Eunit3DBtn_27; }
	inline bool* get_address_of_Eunit3DBtn_27() { return &___Eunit3DBtn_27; }
	inline void set_Eunit3DBtn_27(bool value)
	{
		___Eunit3DBtn_27 = value;
	}

	inline static int32_t get_offset_of_ButtonLimit_28() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___ButtonLimit_28)); }
	inline bool get_ButtonLimit_28() const { return ___ButtonLimit_28; }
	inline bool* get_address_of_ButtonLimit_28() { return &___ButtonLimit_28; }
	inline void set_ButtonLimit_28(bool value)
	{
		___ButtonLimit_28 = value;
	}

	inline static int32_t get_offset_of_UButtonLimit_29() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___UButtonLimit_29)); }
	inline bool get_UButtonLimit_29() const { return ___UButtonLimit_29; }
	inline bool* get_address_of_UButtonLimit_29() { return &___UButtonLimit_29; }
	inline void set_UButtonLimit_29(bool value)
	{
		___UButtonLimit_29 = value;
	}

	inline static int32_t get_offset_of_BButtonLimit_30() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___BButtonLimit_30)); }
	inline bool get_BButtonLimit_30() const { return ___BButtonLimit_30; }
	inline bool* get_address_of_BButtonLimit_30() { return &___BButtonLimit_30; }
	inline void set_BButtonLimit_30(bool value)
	{
		___BButtonLimit_30 = value;
	}

	inline static int32_t get_offset_of_panelColor_31() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___panelColor_31)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_panelColor_31() const { return ___panelColor_31; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_panelColor_31() { return &___panelColor_31; }
	inline void set_panelColor_31(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___panelColor_31 = value;
	}

	inline static int32_t get_offset_of_Unit2nd_32() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___Unit2nd_32)); }
	inline bool get_Unit2nd_32() const { return ___Unit2nd_32; }
	inline bool* get_address_of_Unit2nd_32() { return &___Unit2nd_32; }
	inline void set_Unit2nd_32(bool value)
	{
		___Unit2nd_32 = value;
	}

	inline static int32_t get_offset_of_UnitLimit_33() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___UnitLimit_33)); }
	inline bool get_UnitLimit_33() const { return ___UnitLimit_33; }
	inline bool* get_address_of_UnitLimit_33() { return &___UnitLimit_33; }
	inline void set_UnitLimit_33(bool value)
	{
		___UnitLimit_33 = value;
	}

	inline static int32_t get_offset_of_BtnClicked_34() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___BtnClicked_34)); }
	inline bool get_BtnClicked_34() const { return ___BtnClicked_34; }
	inline bool* get_address_of_BtnClicked_34() { return &___BtnClicked_34; }
	inline void set_BtnClicked_34(bool value)
	{
		___BtnClicked_34 = value;
	}

	inline static int32_t get_offset_of_UnitSecond_35() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___UnitSecond_35)); }
	inline bool get_UnitSecond_35() const { return ___UnitSecond_35; }
	inline bool* get_address_of_UnitSecond_35() { return &___UnitSecond_35; }
	inline void set_UnitSecond_35(bool value)
	{
		___UnitSecond_35 = value;
	}

	inline static int32_t get_offset_of_TurnNext_36() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___TurnNext_36)); }
	inline bool get_TurnNext_36() const { return ___TurnNext_36; }
	inline bool* get_address_of_TurnNext_36() { return &___TurnNext_36; }
	inline void set_TurnNext_36(bool value)
	{
		___TurnNext_36 = value;
	}

	inline static int32_t get_offset_of_Dicision_37() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___Dicision_37)); }
	inline bool get_Dicision_37() const { return ___Dicision_37; }
	inline bool* get_address_of_Dicision_37() { return &___Dicision_37; }
	inline void set_Dicision_37(bool value)
	{
		___Dicision_37 = value;
	}

	inline static int32_t get_offset_of_goMain_38() { return static_cast<int32_t>(offsetof(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8, ___goMain_38)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_goMain_38() const { return ___goMain_38; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_goMain_38() { return &___goMain_38; }
	inline void set_goMain_38(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___goMain_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goMain_38), (void*)value);
	}
};


// Tutorial_Btn
struct Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TutorialMain Tutorial_Btn::tutorialMain
	TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * ___tutorialMain_4;
	// UnityEngine.Color Tutorial_Btn::panelColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___panelColor_5;
	// System.Int32 Tutorial_Btn::turnnum
	int32_t ___turnnum_6;

public:
	inline static int32_t get_offset_of_tutorialMain_4() { return static_cast<int32_t>(offsetof(Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D, ___tutorialMain_4)); }
	inline TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * get_tutorialMain_4() const { return ___tutorialMain_4; }
	inline TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 ** get_address_of_tutorialMain_4() { return &___tutorialMain_4; }
	inline void set_tutorialMain_4(TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * value)
	{
		___tutorialMain_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tutorialMain_4), (void*)value);
	}

	inline static int32_t get_offset_of_panelColor_5() { return static_cast<int32_t>(offsetof(Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D, ___panelColor_5)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_panelColor_5() const { return ___panelColor_5; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_panelColor_5() { return &___panelColor_5; }
	inline void set_panelColor_5(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___panelColor_5 = value;
	}

	inline static int32_t get_offset_of_turnnum_6() { return static_cast<int32_t>(offsetof(Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D, ___turnnum_6)); }
	inline int32_t get_turnnum_6() const { return ___turnnum_6; }
	inline int32_t* get_address_of_turnnum_6() { return &___turnnum_6; }
	inline void set_turnnum_6(int32_t value)
	{
		___turnnum_6 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// VariableManager
struct VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// VariableManager/Society_Variable VariableManager::society_Variable
	Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * ___society_Variable_5;
	// VariableManager/New_Wave_Variable VariableManager::new_Wave_Variable
	New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * ___new_Wave_Variable_6;
	// VariableManager/Mafia_Variable VariableManager::mafia_Variable
	Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * ___mafia_Variable_7;
	// System.Int32 VariableManager::war_hp
	int32_t ___war_hp_8;
	// System.Int32 VariableManager::war_off
	int32_t ___war_off_9;
	// System.Int32 VariableManager::war_def
	int32_t ___war_def_10;
	// System.Int32 VariableManager::war_act
	int32_t ___war_act_11;
	// System.Int32 VariableManager::war_cost
	int32_t ___war_cost_12;
	// System.Int32 VariableManager::arc_hp
	int32_t ___arc_hp_13;
	// System.Int32 VariableManager::arc_off
	int32_t ___arc_off_14;
	// System.Int32 VariableManager::arc_def
	int32_t ___arc_def_15;
	// System.Int32 VariableManager::arc_act
	int32_t ___arc_act_16;
	// System.Int32 VariableManager::arc_cost
	int32_t ___arc_cost_17;
	// System.Int32 VariableManager::mag_hp
	int32_t ___mag_hp_18;
	// System.Int32 VariableManager::mag_off
	int32_t ___mag_off_19;
	// System.Int32 VariableManager::mag_def
	int32_t ___mag_def_20;
	// System.Int32 VariableManager::mag_act
	int32_t ___mag_act_21;
	// System.Int32 VariableManager::mag_cost
	int32_t ___mag_cost_22;
	// System.Int32[] VariableManager::result_UnitOffence
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___result_UnitOffence_23;
	// System.Int32[] VariableManager::result_UnitDefence
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___result_UnitDefence_24;
	// System.Single VariableManager::UnitCostBuffPrc
	float ___UnitCostBuffPrc_25;
	// System.Single VariableManager::BuildingCostBuffPrc
	float ___BuildingCostBuffPrc_26;
	// System.Single VariableManager::UnitOffenceBuffPrc
	float ___UnitOffenceBuffPrc_27;
	// System.Single VariableManager::UnitDefenceBuffPrc
	float ___UnitDefenceBuffPrc_28;
	// System.Int32[] VariableManager::unit_resultCost
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___unit_resultCost_29;
	// UnityEngine.UI.Text VariableManager::Unit1
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Unit1_30;
	// UnityEngine.UI.Text VariableManager::Unit2
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Unit2_31;
	// UnityEngine.UI.Text VariableManager::Unit3
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Unit3_32;
	// System.Collections.Generic.Queue`1<System.Single> VariableManager::UnitEffects
	Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * ___UnitEffects_33;
	// System.Boolean VariableManager::isUnitCostEffect
	bool ___isUnitCostEffect_34;
	// System.Single VariableManager::currentUnitBuff
	float ___currentUnitBuff_35;
	// System.Int32 VariableManager::War_offBuffPrc
	int32_t ___War_offBuffPrc_36;
	// System.Int32 VariableManager::Arc_offBuffPrc
	int32_t ___Arc_offBuffPrc_37;
	// System.Int32 VariableManager::Mag_offBuffPrc
	int32_t ___Mag_offBuffPrc_38;
	// System.Int32 VariableManager::War_DefBuffPrc
	int32_t ___War_DefBuffPrc_39;
	// System.Int32 VariableManager::Arc_DefBuffPrc
	int32_t ___Arc_DefBuffPrc_40;
	// System.Int32 VariableManager::Mag_DefBuffPrc
	int32_t ___Mag_DefBuffPrc_41;
	// System.Int32[] VariableManager::building_costs
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___building_costs_42;
	// System.String[] VariableManager::building_names
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___building_names_43;
	// System.Int32[] VariableManager::building_resultCost
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___building_resultCost_44;
	// UnityEngine.UI.Button VariableManager::building1
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___building1_45;
	// UnityEngine.UI.Button VariableManager::building2
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___building2_46;
	// UnityEngine.UI.Button VariableManager::building3
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___building3_47;
	// UnityEngine.UI.Text VariableManager::building1_name
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___building1_name_48;
	// UnityEngine.UI.Text VariableManager::building2_name
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___building2_name_49;
	// UnityEngine.UI.Text VariableManager::building3_name
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___building3_name_50;
	// UnityEngine.UI.Text VariableManager::building1_cost
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___building1_cost_51;
	// UnityEngine.UI.Text VariableManager::building2_cost
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___building2_cost_52;
	// UnityEngine.UI.Text VariableManager::building3_cost
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___building3_cost_53;
	// System.Boolean VariableManager::isBuildCostEffect
	bool ___isBuildCostEffect_54;
	// System.Collections.Generic.Queue`1<System.Single> VariableManager::buildEffects
	Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * ___buildEffects_55;
	// System.Single VariableManager::currentBuff
	float ___currentBuff_56;
	// System.Single VariableManager::MoneyBuffPrc
	float ___MoneyBuffPrc_57;
	// System.Int32 VariableManager::occupationCost
	int32_t ___occupationCost_58;
	// System.Single VariableManager::result_Occupation
	float ___result_Occupation_59;
	// System.Single VariableManager::OccupationCostBuffPrc
	float ___OccupationCostBuffPrc_60;
	// System.Boolean VariableManager::isMaster
	bool ___isMaster_61;

public:
	inline static int32_t get_offset_of_society_Variable_5() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___society_Variable_5)); }
	inline Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * get_society_Variable_5() const { return ___society_Variable_5; }
	inline Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C ** get_address_of_society_Variable_5() { return &___society_Variable_5; }
	inline void set_society_Variable_5(Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * value)
	{
		___society_Variable_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___society_Variable_5), (void*)value);
	}

	inline static int32_t get_offset_of_new_Wave_Variable_6() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___new_Wave_Variable_6)); }
	inline New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * get_new_Wave_Variable_6() const { return ___new_Wave_Variable_6; }
	inline New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 ** get_address_of_new_Wave_Variable_6() { return &___new_Wave_Variable_6; }
	inline void set_new_Wave_Variable_6(New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * value)
	{
		___new_Wave_Variable_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___new_Wave_Variable_6), (void*)value);
	}

	inline static int32_t get_offset_of_mafia_Variable_7() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___mafia_Variable_7)); }
	inline Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * get_mafia_Variable_7() const { return ___mafia_Variable_7; }
	inline Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 ** get_address_of_mafia_Variable_7() { return &___mafia_Variable_7; }
	inline void set_mafia_Variable_7(Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * value)
	{
		___mafia_Variable_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mafia_Variable_7), (void*)value);
	}

	inline static int32_t get_offset_of_war_hp_8() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___war_hp_8)); }
	inline int32_t get_war_hp_8() const { return ___war_hp_8; }
	inline int32_t* get_address_of_war_hp_8() { return &___war_hp_8; }
	inline void set_war_hp_8(int32_t value)
	{
		___war_hp_8 = value;
	}

	inline static int32_t get_offset_of_war_off_9() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___war_off_9)); }
	inline int32_t get_war_off_9() const { return ___war_off_9; }
	inline int32_t* get_address_of_war_off_9() { return &___war_off_9; }
	inline void set_war_off_9(int32_t value)
	{
		___war_off_9 = value;
	}

	inline static int32_t get_offset_of_war_def_10() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___war_def_10)); }
	inline int32_t get_war_def_10() const { return ___war_def_10; }
	inline int32_t* get_address_of_war_def_10() { return &___war_def_10; }
	inline void set_war_def_10(int32_t value)
	{
		___war_def_10 = value;
	}

	inline static int32_t get_offset_of_war_act_11() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___war_act_11)); }
	inline int32_t get_war_act_11() const { return ___war_act_11; }
	inline int32_t* get_address_of_war_act_11() { return &___war_act_11; }
	inline void set_war_act_11(int32_t value)
	{
		___war_act_11 = value;
	}

	inline static int32_t get_offset_of_war_cost_12() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___war_cost_12)); }
	inline int32_t get_war_cost_12() const { return ___war_cost_12; }
	inline int32_t* get_address_of_war_cost_12() { return &___war_cost_12; }
	inline void set_war_cost_12(int32_t value)
	{
		___war_cost_12 = value;
	}

	inline static int32_t get_offset_of_arc_hp_13() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___arc_hp_13)); }
	inline int32_t get_arc_hp_13() const { return ___arc_hp_13; }
	inline int32_t* get_address_of_arc_hp_13() { return &___arc_hp_13; }
	inline void set_arc_hp_13(int32_t value)
	{
		___arc_hp_13 = value;
	}

	inline static int32_t get_offset_of_arc_off_14() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___arc_off_14)); }
	inline int32_t get_arc_off_14() const { return ___arc_off_14; }
	inline int32_t* get_address_of_arc_off_14() { return &___arc_off_14; }
	inline void set_arc_off_14(int32_t value)
	{
		___arc_off_14 = value;
	}

	inline static int32_t get_offset_of_arc_def_15() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___arc_def_15)); }
	inline int32_t get_arc_def_15() const { return ___arc_def_15; }
	inline int32_t* get_address_of_arc_def_15() { return &___arc_def_15; }
	inline void set_arc_def_15(int32_t value)
	{
		___arc_def_15 = value;
	}

	inline static int32_t get_offset_of_arc_act_16() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___arc_act_16)); }
	inline int32_t get_arc_act_16() const { return ___arc_act_16; }
	inline int32_t* get_address_of_arc_act_16() { return &___arc_act_16; }
	inline void set_arc_act_16(int32_t value)
	{
		___arc_act_16 = value;
	}

	inline static int32_t get_offset_of_arc_cost_17() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___arc_cost_17)); }
	inline int32_t get_arc_cost_17() const { return ___arc_cost_17; }
	inline int32_t* get_address_of_arc_cost_17() { return &___arc_cost_17; }
	inline void set_arc_cost_17(int32_t value)
	{
		___arc_cost_17 = value;
	}

	inline static int32_t get_offset_of_mag_hp_18() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___mag_hp_18)); }
	inline int32_t get_mag_hp_18() const { return ___mag_hp_18; }
	inline int32_t* get_address_of_mag_hp_18() { return &___mag_hp_18; }
	inline void set_mag_hp_18(int32_t value)
	{
		___mag_hp_18 = value;
	}

	inline static int32_t get_offset_of_mag_off_19() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___mag_off_19)); }
	inline int32_t get_mag_off_19() const { return ___mag_off_19; }
	inline int32_t* get_address_of_mag_off_19() { return &___mag_off_19; }
	inline void set_mag_off_19(int32_t value)
	{
		___mag_off_19 = value;
	}

	inline static int32_t get_offset_of_mag_def_20() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___mag_def_20)); }
	inline int32_t get_mag_def_20() const { return ___mag_def_20; }
	inline int32_t* get_address_of_mag_def_20() { return &___mag_def_20; }
	inline void set_mag_def_20(int32_t value)
	{
		___mag_def_20 = value;
	}

	inline static int32_t get_offset_of_mag_act_21() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___mag_act_21)); }
	inline int32_t get_mag_act_21() const { return ___mag_act_21; }
	inline int32_t* get_address_of_mag_act_21() { return &___mag_act_21; }
	inline void set_mag_act_21(int32_t value)
	{
		___mag_act_21 = value;
	}

	inline static int32_t get_offset_of_mag_cost_22() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___mag_cost_22)); }
	inline int32_t get_mag_cost_22() const { return ___mag_cost_22; }
	inline int32_t* get_address_of_mag_cost_22() { return &___mag_cost_22; }
	inline void set_mag_cost_22(int32_t value)
	{
		___mag_cost_22 = value;
	}

	inline static int32_t get_offset_of_result_UnitOffence_23() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___result_UnitOffence_23)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_result_UnitOffence_23() const { return ___result_UnitOffence_23; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_result_UnitOffence_23() { return &___result_UnitOffence_23; }
	inline void set_result_UnitOffence_23(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___result_UnitOffence_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_UnitOffence_23), (void*)value);
	}

	inline static int32_t get_offset_of_result_UnitDefence_24() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___result_UnitDefence_24)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_result_UnitDefence_24() const { return ___result_UnitDefence_24; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_result_UnitDefence_24() { return &___result_UnitDefence_24; }
	inline void set_result_UnitDefence_24(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___result_UnitDefence_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___result_UnitDefence_24), (void*)value);
	}

	inline static int32_t get_offset_of_UnitCostBuffPrc_25() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___UnitCostBuffPrc_25)); }
	inline float get_UnitCostBuffPrc_25() const { return ___UnitCostBuffPrc_25; }
	inline float* get_address_of_UnitCostBuffPrc_25() { return &___UnitCostBuffPrc_25; }
	inline void set_UnitCostBuffPrc_25(float value)
	{
		___UnitCostBuffPrc_25 = value;
	}

	inline static int32_t get_offset_of_BuildingCostBuffPrc_26() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___BuildingCostBuffPrc_26)); }
	inline float get_BuildingCostBuffPrc_26() const { return ___BuildingCostBuffPrc_26; }
	inline float* get_address_of_BuildingCostBuffPrc_26() { return &___BuildingCostBuffPrc_26; }
	inline void set_BuildingCostBuffPrc_26(float value)
	{
		___BuildingCostBuffPrc_26 = value;
	}

	inline static int32_t get_offset_of_UnitOffenceBuffPrc_27() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___UnitOffenceBuffPrc_27)); }
	inline float get_UnitOffenceBuffPrc_27() const { return ___UnitOffenceBuffPrc_27; }
	inline float* get_address_of_UnitOffenceBuffPrc_27() { return &___UnitOffenceBuffPrc_27; }
	inline void set_UnitOffenceBuffPrc_27(float value)
	{
		___UnitOffenceBuffPrc_27 = value;
	}

	inline static int32_t get_offset_of_UnitDefenceBuffPrc_28() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___UnitDefenceBuffPrc_28)); }
	inline float get_UnitDefenceBuffPrc_28() const { return ___UnitDefenceBuffPrc_28; }
	inline float* get_address_of_UnitDefenceBuffPrc_28() { return &___UnitDefenceBuffPrc_28; }
	inline void set_UnitDefenceBuffPrc_28(float value)
	{
		___UnitDefenceBuffPrc_28 = value;
	}

	inline static int32_t get_offset_of_unit_resultCost_29() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___unit_resultCost_29)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_unit_resultCost_29() const { return ___unit_resultCost_29; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_unit_resultCost_29() { return &___unit_resultCost_29; }
	inline void set_unit_resultCost_29(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___unit_resultCost_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unit_resultCost_29), (void*)value);
	}

	inline static int32_t get_offset_of_Unit1_30() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___Unit1_30)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Unit1_30() const { return ___Unit1_30; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Unit1_30() { return &___Unit1_30; }
	inline void set_Unit1_30(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Unit1_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Unit1_30), (void*)value);
	}

	inline static int32_t get_offset_of_Unit2_31() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___Unit2_31)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Unit2_31() const { return ___Unit2_31; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Unit2_31() { return &___Unit2_31; }
	inline void set_Unit2_31(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Unit2_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Unit2_31), (void*)value);
	}

	inline static int32_t get_offset_of_Unit3_32() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___Unit3_32)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Unit3_32() const { return ___Unit3_32; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Unit3_32() { return &___Unit3_32; }
	inline void set_Unit3_32(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Unit3_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Unit3_32), (void*)value);
	}

	inline static int32_t get_offset_of_UnitEffects_33() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___UnitEffects_33)); }
	inline Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * get_UnitEffects_33() const { return ___UnitEffects_33; }
	inline Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC ** get_address_of_UnitEffects_33() { return &___UnitEffects_33; }
	inline void set_UnitEffects_33(Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * value)
	{
		___UnitEffects_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___UnitEffects_33), (void*)value);
	}

	inline static int32_t get_offset_of_isUnitCostEffect_34() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___isUnitCostEffect_34)); }
	inline bool get_isUnitCostEffect_34() const { return ___isUnitCostEffect_34; }
	inline bool* get_address_of_isUnitCostEffect_34() { return &___isUnitCostEffect_34; }
	inline void set_isUnitCostEffect_34(bool value)
	{
		___isUnitCostEffect_34 = value;
	}

	inline static int32_t get_offset_of_currentUnitBuff_35() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___currentUnitBuff_35)); }
	inline float get_currentUnitBuff_35() const { return ___currentUnitBuff_35; }
	inline float* get_address_of_currentUnitBuff_35() { return &___currentUnitBuff_35; }
	inline void set_currentUnitBuff_35(float value)
	{
		___currentUnitBuff_35 = value;
	}

	inline static int32_t get_offset_of_War_offBuffPrc_36() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___War_offBuffPrc_36)); }
	inline int32_t get_War_offBuffPrc_36() const { return ___War_offBuffPrc_36; }
	inline int32_t* get_address_of_War_offBuffPrc_36() { return &___War_offBuffPrc_36; }
	inline void set_War_offBuffPrc_36(int32_t value)
	{
		___War_offBuffPrc_36 = value;
	}

	inline static int32_t get_offset_of_Arc_offBuffPrc_37() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___Arc_offBuffPrc_37)); }
	inline int32_t get_Arc_offBuffPrc_37() const { return ___Arc_offBuffPrc_37; }
	inline int32_t* get_address_of_Arc_offBuffPrc_37() { return &___Arc_offBuffPrc_37; }
	inline void set_Arc_offBuffPrc_37(int32_t value)
	{
		___Arc_offBuffPrc_37 = value;
	}

	inline static int32_t get_offset_of_Mag_offBuffPrc_38() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___Mag_offBuffPrc_38)); }
	inline int32_t get_Mag_offBuffPrc_38() const { return ___Mag_offBuffPrc_38; }
	inline int32_t* get_address_of_Mag_offBuffPrc_38() { return &___Mag_offBuffPrc_38; }
	inline void set_Mag_offBuffPrc_38(int32_t value)
	{
		___Mag_offBuffPrc_38 = value;
	}

	inline static int32_t get_offset_of_War_DefBuffPrc_39() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___War_DefBuffPrc_39)); }
	inline int32_t get_War_DefBuffPrc_39() const { return ___War_DefBuffPrc_39; }
	inline int32_t* get_address_of_War_DefBuffPrc_39() { return &___War_DefBuffPrc_39; }
	inline void set_War_DefBuffPrc_39(int32_t value)
	{
		___War_DefBuffPrc_39 = value;
	}

	inline static int32_t get_offset_of_Arc_DefBuffPrc_40() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___Arc_DefBuffPrc_40)); }
	inline int32_t get_Arc_DefBuffPrc_40() const { return ___Arc_DefBuffPrc_40; }
	inline int32_t* get_address_of_Arc_DefBuffPrc_40() { return &___Arc_DefBuffPrc_40; }
	inline void set_Arc_DefBuffPrc_40(int32_t value)
	{
		___Arc_DefBuffPrc_40 = value;
	}

	inline static int32_t get_offset_of_Mag_DefBuffPrc_41() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___Mag_DefBuffPrc_41)); }
	inline int32_t get_Mag_DefBuffPrc_41() const { return ___Mag_DefBuffPrc_41; }
	inline int32_t* get_address_of_Mag_DefBuffPrc_41() { return &___Mag_DefBuffPrc_41; }
	inline void set_Mag_DefBuffPrc_41(int32_t value)
	{
		___Mag_DefBuffPrc_41 = value;
	}

	inline static int32_t get_offset_of_building_costs_42() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___building_costs_42)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_building_costs_42() const { return ___building_costs_42; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_building_costs_42() { return &___building_costs_42; }
	inline void set_building_costs_42(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___building_costs_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building_costs_42), (void*)value);
	}

	inline static int32_t get_offset_of_building_names_43() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___building_names_43)); }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* get_building_names_43() const { return ___building_names_43; }
	inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A** get_address_of_building_names_43() { return &___building_names_43; }
	inline void set_building_names_43(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* value)
	{
		___building_names_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building_names_43), (void*)value);
	}

	inline static int32_t get_offset_of_building_resultCost_44() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___building_resultCost_44)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_building_resultCost_44() const { return ___building_resultCost_44; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_building_resultCost_44() { return &___building_resultCost_44; }
	inline void set_building_resultCost_44(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___building_resultCost_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building_resultCost_44), (void*)value);
	}

	inline static int32_t get_offset_of_building1_45() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___building1_45)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_building1_45() const { return ___building1_45; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_building1_45() { return &___building1_45; }
	inline void set_building1_45(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___building1_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building1_45), (void*)value);
	}

	inline static int32_t get_offset_of_building2_46() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___building2_46)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_building2_46() const { return ___building2_46; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_building2_46() { return &___building2_46; }
	inline void set_building2_46(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___building2_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building2_46), (void*)value);
	}

	inline static int32_t get_offset_of_building3_47() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___building3_47)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_building3_47() const { return ___building3_47; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_building3_47() { return &___building3_47; }
	inline void set_building3_47(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___building3_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building3_47), (void*)value);
	}

	inline static int32_t get_offset_of_building1_name_48() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___building1_name_48)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_building1_name_48() const { return ___building1_name_48; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_building1_name_48() { return &___building1_name_48; }
	inline void set_building1_name_48(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___building1_name_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building1_name_48), (void*)value);
	}

	inline static int32_t get_offset_of_building2_name_49() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___building2_name_49)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_building2_name_49() const { return ___building2_name_49; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_building2_name_49() { return &___building2_name_49; }
	inline void set_building2_name_49(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___building2_name_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building2_name_49), (void*)value);
	}

	inline static int32_t get_offset_of_building3_name_50() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___building3_name_50)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_building3_name_50() const { return ___building3_name_50; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_building3_name_50() { return &___building3_name_50; }
	inline void set_building3_name_50(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___building3_name_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building3_name_50), (void*)value);
	}

	inline static int32_t get_offset_of_building1_cost_51() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___building1_cost_51)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_building1_cost_51() const { return ___building1_cost_51; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_building1_cost_51() { return &___building1_cost_51; }
	inline void set_building1_cost_51(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___building1_cost_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building1_cost_51), (void*)value);
	}

	inline static int32_t get_offset_of_building2_cost_52() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___building2_cost_52)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_building2_cost_52() const { return ___building2_cost_52; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_building2_cost_52() { return &___building2_cost_52; }
	inline void set_building2_cost_52(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___building2_cost_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building2_cost_52), (void*)value);
	}

	inline static int32_t get_offset_of_building3_cost_53() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___building3_cost_53)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_building3_cost_53() const { return ___building3_cost_53; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_building3_cost_53() { return &___building3_cost_53; }
	inline void set_building3_cost_53(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___building3_cost_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building3_cost_53), (void*)value);
	}

	inline static int32_t get_offset_of_isBuildCostEffect_54() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___isBuildCostEffect_54)); }
	inline bool get_isBuildCostEffect_54() const { return ___isBuildCostEffect_54; }
	inline bool* get_address_of_isBuildCostEffect_54() { return &___isBuildCostEffect_54; }
	inline void set_isBuildCostEffect_54(bool value)
	{
		___isBuildCostEffect_54 = value;
	}

	inline static int32_t get_offset_of_buildEffects_55() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___buildEffects_55)); }
	inline Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * get_buildEffects_55() const { return ___buildEffects_55; }
	inline Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC ** get_address_of_buildEffects_55() { return &___buildEffects_55; }
	inline void set_buildEffects_55(Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * value)
	{
		___buildEffects_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildEffects_55), (void*)value);
	}

	inline static int32_t get_offset_of_currentBuff_56() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___currentBuff_56)); }
	inline float get_currentBuff_56() const { return ___currentBuff_56; }
	inline float* get_address_of_currentBuff_56() { return &___currentBuff_56; }
	inline void set_currentBuff_56(float value)
	{
		___currentBuff_56 = value;
	}

	inline static int32_t get_offset_of_MoneyBuffPrc_57() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___MoneyBuffPrc_57)); }
	inline float get_MoneyBuffPrc_57() const { return ___MoneyBuffPrc_57; }
	inline float* get_address_of_MoneyBuffPrc_57() { return &___MoneyBuffPrc_57; }
	inline void set_MoneyBuffPrc_57(float value)
	{
		___MoneyBuffPrc_57 = value;
	}

	inline static int32_t get_offset_of_occupationCost_58() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___occupationCost_58)); }
	inline int32_t get_occupationCost_58() const { return ___occupationCost_58; }
	inline int32_t* get_address_of_occupationCost_58() { return &___occupationCost_58; }
	inline void set_occupationCost_58(int32_t value)
	{
		___occupationCost_58 = value;
	}

	inline static int32_t get_offset_of_result_Occupation_59() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___result_Occupation_59)); }
	inline float get_result_Occupation_59() const { return ___result_Occupation_59; }
	inline float* get_address_of_result_Occupation_59() { return &___result_Occupation_59; }
	inline void set_result_Occupation_59(float value)
	{
		___result_Occupation_59 = value;
	}

	inline static int32_t get_offset_of_OccupationCostBuffPrc_60() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___OccupationCostBuffPrc_60)); }
	inline float get_OccupationCostBuffPrc_60() const { return ___OccupationCostBuffPrc_60; }
	inline float* get_address_of_OccupationCostBuffPrc_60() { return &___OccupationCostBuffPrc_60; }
	inline void set_OccupationCostBuffPrc_60(float value)
	{
		___OccupationCostBuffPrc_60 = value;
	}

	inline static int32_t get_offset_of_isMaster_61() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5, ___isMaster_61)); }
	inline bool get_isMaster_61() const { return ___isMaster_61; }
	inline bool* get_address_of_isMaster_61() { return &___isMaster_61; }
	inline void set_isMaster_61(bool value)
	{
		___isMaster_61 = value;
	}
};

struct VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_StaticFields
{
public:
	// VariableManager VariableManager::instance
	VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * ___instance_4;

public:
	inline static int32_t get_offset_of_instance_4() { return static_cast<int32_t>(offsetof(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_StaticFields, ___instance_4)); }
	inline VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * get_instance_4() const { return ___instance_4; }
	inline VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 ** get_address_of_instance_4() { return &___instance_4; }
	inline void set_instance_4(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * value)
	{
		___instance_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_4), (void*)value);
	}
};


// CreateBuilding
struct CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// UnityEngine.GameObject CreateBuilding::building
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___building_5;
	// System.Int32 CreateBuilding::type
	int32_t ___type_6;
	// System.Int32 CreateBuilding::level
	int32_t ___level_7;
	// UnityEngine.GameObject[] CreateBuilding::buildings
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___buildings_8;
	// UnityEngine.Transform[] CreateBuilding::P1_buildingArea
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___P1_buildingArea_9;
	// UnityEngine.Transform[] CreateBuilding::P2_buildingArea
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___P2_buildingArea_10;
	// System.Boolean CreateBuilding::isMaster
	bool ___isMaster_11;
	// System.String CreateBuilding::s
	String_t* ___s_12;
	// UnityEngine.UI.Image CreateBuilding::maxImg
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___maxImg_13;

public:
	inline static int32_t get_offset_of_building_5() { return static_cast<int32_t>(offsetof(CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4, ___building_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_building_5() const { return ___building_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_building_5() { return &___building_5; }
	inline void set_building_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___building_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___building_5), (void*)value);
	}

	inline static int32_t get_offset_of_type_6() { return static_cast<int32_t>(offsetof(CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4, ___type_6)); }
	inline int32_t get_type_6() const { return ___type_6; }
	inline int32_t* get_address_of_type_6() { return &___type_6; }
	inline void set_type_6(int32_t value)
	{
		___type_6 = value;
	}

	inline static int32_t get_offset_of_level_7() { return static_cast<int32_t>(offsetof(CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4, ___level_7)); }
	inline int32_t get_level_7() const { return ___level_7; }
	inline int32_t* get_address_of_level_7() { return &___level_7; }
	inline void set_level_7(int32_t value)
	{
		___level_7 = value;
	}

	inline static int32_t get_offset_of_buildings_8() { return static_cast<int32_t>(offsetof(CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4, ___buildings_8)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_buildings_8() const { return ___buildings_8; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_buildings_8() { return &___buildings_8; }
	inline void set_buildings_8(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___buildings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildings_8), (void*)value);
	}

	inline static int32_t get_offset_of_P1_buildingArea_9() { return static_cast<int32_t>(offsetof(CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4, ___P1_buildingArea_9)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_P1_buildingArea_9() const { return ___P1_buildingArea_9; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_P1_buildingArea_9() { return &___P1_buildingArea_9; }
	inline void set_P1_buildingArea_9(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___P1_buildingArea_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P1_buildingArea_9), (void*)value);
	}

	inline static int32_t get_offset_of_P2_buildingArea_10() { return static_cast<int32_t>(offsetof(CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4, ___P2_buildingArea_10)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_P2_buildingArea_10() const { return ___P2_buildingArea_10; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_P2_buildingArea_10() { return &___P2_buildingArea_10; }
	inline void set_P2_buildingArea_10(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___P2_buildingArea_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P2_buildingArea_10), (void*)value);
	}

	inline static int32_t get_offset_of_isMaster_11() { return static_cast<int32_t>(offsetof(CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4, ___isMaster_11)); }
	inline bool get_isMaster_11() const { return ___isMaster_11; }
	inline bool* get_address_of_isMaster_11() { return &___isMaster_11; }
	inline void set_isMaster_11(bool value)
	{
		___isMaster_11 = value;
	}

	inline static int32_t get_offset_of_s_12() { return static_cast<int32_t>(offsetof(CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4, ___s_12)); }
	inline String_t* get_s_12() const { return ___s_12; }
	inline String_t** get_address_of_s_12() { return &___s_12; }
	inline void set_s_12(String_t* value)
	{
		___s_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_12), (void*)value);
	}

	inline static int32_t get_offset_of_maxImg_13() { return static_cast<int32_t>(offsetof(CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4, ___maxImg_13)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_maxImg_13() const { return ___maxImg_13; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_maxImg_13() { return &___maxImg_13; }
	inline void set_maxImg_13(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___maxImg_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___maxImg_13), (void*)value);
	}
};


// Decision
struct Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,Decision/Actions> Decision::actionMap
	Dictionary_2_tEA17B30D6C6C5B772D7C46DB5928B1ED829CA398 * ___actionMap_5;
	// Decision/DecisionSituation Decision::decisionSituation
	DecisionSituation_t243F55B25AA62817C27D52752DD1206CA89A502C * ___decisionSituation_6;
	// UnityEngine.UI.Image Decision::DecisionPanel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___DecisionPanel_7;
	// UnityEngine.UI.Text Decision::DecisionName
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DecisionName_8;
	// UnityEngine.UI.Image Decision::SituationImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___SituationImage_9;
	// UnityEngine.UI.Text Decision::DecisionDesc
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___DecisionDesc_10;
	// UnityEngine.UI.Text Decision::decisionBtn_1
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___decisionBtn_1_11;
	// UnityEngine.UI.Text Decision::decisionBtn_2
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___decisionBtn_2_12;
	// UnityEngine.UI.Text Decision::decisionBtn_3
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___decisionBtn_3_13;
	// System.Int32[] Decision::num
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___num_14;
	// System.Int32 Decision::situationNum
	int32_t ___situationNum_15;
	// System.String Decision::buff_desc
	String_t* ___buff_desc_16;
	// UnityEngine.Sprite[] Decision::decision_IllustSprite
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___decision_IllustSprite_17;
	// UnityEngine.GameObject Decision::decision_list
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___decision_list_18;
	// UnityEngine.GameObject Decision::decision_Illust
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___decision_Illust_19;

public:
	inline static int32_t get_offset_of_actionMap_5() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___actionMap_5)); }
	inline Dictionary_2_tEA17B30D6C6C5B772D7C46DB5928B1ED829CA398 * get_actionMap_5() const { return ___actionMap_5; }
	inline Dictionary_2_tEA17B30D6C6C5B772D7C46DB5928B1ED829CA398 ** get_address_of_actionMap_5() { return &___actionMap_5; }
	inline void set_actionMap_5(Dictionary_2_tEA17B30D6C6C5B772D7C46DB5928B1ED829CA398 * value)
	{
		___actionMap_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___actionMap_5), (void*)value);
	}

	inline static int32_t get_offset_of_decisionSituation_6() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___decisionSituation_6)); }
	inline DecisionSituation_t243F55B25AA62817C27D52752DD1206CA89A502C * get_decisionSituation_6() const { return ___decisionSituation_6; }
	inline DecisionSituation_t243F55B25AA62817C27D52752DD1206CA89A502C ** get_address_of_decisionSituation_6() { return &___decisionSituation_6; }
	inline void set_decisionSituation_6(DecisionSituation_t243F55B25AA62817C27D52752DD1206CA89A502C * value)
	{
		___decisionSituation_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decisionSituation_6), (void*)value);
	}

	inline static int32_t get_offset_of_DecisionPanel_7() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___DecisionPanel_7)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_DecisionPanel_7() const { return ___DecisionPanel_7; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_DecisionPanel_7() { return &___DecisionPanel_7; }
	inline void set_DecisionPanel_7(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___DecisionPanel_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DecisionPanel_7), (void*)value);
	}

	inline static int32_t get_offset_of_DecisionName_8() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___DecisionName_8)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DecisionName_8() const { return ___DecisionName_8; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DecisionName_8() { return &___DecisionName_8; }
	inline void set_DecisionName_8(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DecisionName_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DecisionName_8), (void*)value);
	}

	inline static int32_t get_offset_of_SituationImage_9() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___SituationImage_9)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_SituationImage_9() const { return ___SituationImage_9; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_SituationImage_9() { return &___SituationImage_9; }
	inline void set_SituationImage_9(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___SituationImage_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___SituationImage_9), (void*)value);
	}

	inline static int32_t get_offset_of_DecisionDesc_10() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___DecisionDesc_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_DecisionDesc_10() const { return ___DecisionDesc_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_DecisionDesc_10() { return &___DecisionDesc_10; }
	inline void set_DecisionDesc_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___DecisionDesc_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___DecisionDesc_10), (void*)value);
	}

	inline static int32_t get_offset_of_decisionBtn_1_11() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___decisionBtn_1_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_decisionBtn_1_11() const { return ___decisionBtn_1_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_decisionBtn_1_11() { return &___decisionBtn_1_11; }
	inline void set_decisionBtn_1_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___decisionBtn_1_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decisionBtn_1_11), (void*)value);
	}

	inline static int32_t get_offset_of_decisionBtn_2_12() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___decisionBtn_2_12)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_decisionBtn_2_12() const { return ___decisionBtn_2_12; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_decisionBtn_2_12() { return &___decisionBtn_2_12; }
	inline void set_decisionBtn_2_12(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___decisionBtn_2_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decisionBtn_2_12), (void*)value);
	}

	inline static int32_t get_offset_of_decisionBtn_3_13() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___decisionBtn_3_13)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_decisionBtn_3_13() const { return ___decisionBtn_3_13; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_decisionBtn_3_13() { return &___decisionBtn_3_13; }
	inline void set_decisionBtn_3_13(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___decisionBtn_3_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decisionBtn_3_13), (void*)value);
	}

	inline static int32_t get_offset_of_num_14() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___num_14)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_num_14() const { return ___num_14; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_num_14() { return &___num_14; }
	inline void set_num_14(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___num_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___num_14), (void*)value);
	}

	inline static int32_t get_offset_of_situationNum_15() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___situationNum_15)); }
	inline int32_t get_situationNum_15() const { return ___situationNum_15; }
	inline int32_t* get_address_of_situationNum_15() { return &___situationNum_15; }
	inline void set_situationNum_15(int32_t value)
	{
		___situationNum_15 = value;
	}

	inline static int32_t get_offset_of_buff_desc_16() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___buff_desc_16)); }
	inline String_t* get_buff_desc_16() const { return ___buff_desc_16; }
	inline String_t** get_address_of_buff_desc_16() { return &___buff_desc_16; }
	inline void set_buff_desc_16(String_t* value)
	{
		___buff_desc_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buff_desc_16), (void*)value);
	}

	inline static int32_t get_offset_of_decision_IllustSprite_17() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___decision_IllustSprite_17)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_decision_IllustSprite_17() const { return ___decision_IllustSprite_17; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_decision_IllustSprite_17() { return &___decision_IllustSprite_17; }
	inline void set_decision_IllustSprite_17(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___decision_IllustSprite_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decision_IllustSprite_17), (void*)value);
	}

	inline static int32_t get_offset_of_decision_list_18() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___decision_list_18)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_decision_list_18() const { return ___decision_list_18; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_decision_list_18() { return &___decision_list_18; }
	inline void set_decision_list_18(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___decision_list_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decision_list_18), (void*)value);
	}

	inline static int32_t get_offset_of_decision_Illust_19() { return static_cast<int32_t>(offsetof(Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34, ___decision_Illust_19)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_decision_Illust_19() const { return ___decision_Illust_19; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_decision_Illust_19() { return &___decision_Illust_19; }
	inline void set_decision_Illust_19(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___decision_Illust_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decision_Illust_19), (void*)value);
	}
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// Photon.Pun.MonoBehaviourPunCallbacks
struct MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:

public:
};


// MyUnit
struct MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// System.Int32 MyUnit::type
	int32_t ___type_5;
	// System.Int32 MyUnit::cost
	int32_t ___cost_6;
	// System.Single MyUnit::current_hp
	float ___current_hp_7;
	// System.Single MyUnit::max_hp
	float ___max_hp_8;
	// UnityEngine.Sprite MyUnit::illust
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___illust_9;
	// System.Int32 MyUnit::activeCost
	int32_t ___activeCost_10;
	// System.String MyUnit::unit_name
	String_t* ___unit_name_11;
	// System.Int32 MyUnit::myNum
	int32_t ___myNum_12;
	// System.Int32 MyUnit::defensive
	int32_t ___defensive_13;
	// System.Int32 MyUnit::offensive
	int32_t ___offensive_14;
	// Tile MyUnit::currentTile
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___currentTile_15;
	// System.Boolean MyUnit::isAttackready
	bool ___isAttackready_16;
	// System.Boolean MyUnit::isMaster
	bool ___isMaster_17;

public:
	inline static int32_t get_offset_of_type_5() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___type_5)); }
	inline int32_t get_type_5() const { return ___type_5; }
	inline int32_t* get_address_of_type_5() { return &___type_5; }
	inline void set_type_5(int32_t value)
	{
		___type_5 = value;
	}

	inline static int32_t get_offset_of_cost_6() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___cost_6)); }
	inline int32_t get_cost_6() const { return ___cost_6; }
	inline int32_t* get_address_of_cost_6() { return &___cost_6; }
	inline void set_cost_6(int32_t value)
	{
		___cost_6 = value;
	}

	inline static int32_t get_offset_of_current_hp_7() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___current_hp_7)); }
	inline float get_current_hp_7() const { return ___current_hp_7; }
	inline float* get_address_of_current_hp_7() { return &___current_hp_7; }
	inline void set_current_hp_7(float value)
	{
		___current_hp_7 = value;
	}

	inline static int32_t get_offset_of_max_hp_8() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___max_hp_8)); }
	inline float get_max_hp_8() const { return ___max_hp_8; }
	inline float* get_address_of_max_hp_8() { return &___max_hp_8; }
	inline void set_max_hp_8(float value)
	{
		___max_hp_8 = value;
	}

	inline static int32_t get_offset_of_illust_9() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___illust_9)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_illust_9() const { return ___illust_9; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_illust_9() { return &___illust_9; }
	inline void set_illust_9(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___illust_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___illust_9), (void*)value);
	}

	inline static int32_t get_offset_of_activeCost_10() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___activeCost_10)); }
	inline int32_t get_activeCost_10() const { return ___activeCost_10; }
	inline int32_t* get_address_of_activeCost_10() { return &___activeCost_10; }
	inline void set_activeCost_10(int32_t value)
	{
		___activeCost_10 = value;
	}

	inline static int32_t get_offset_of_unit_name_11() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___unit_name_11)); }
	inline String_t* get_unit_name_11() const { return ___unit_name_11; }
	inline String_t** get_address_of_unit_name_11() { return &___unit_name_11; }
	inline void set_unit_name_11(String_t* value)
	{
		___unit_name_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unit_name_11), (void*)value);
	}

	inline static int32_t get_offset_of_myNum_12() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___myNum_12)); }
	inline int32_t get_myNum_12() const { return ___myNum_12; }
	inline int32_t* get_address_of_myNum_12() { return &___myNum_12; }
	inline void set_myNum_12(int32_t value)
	{
		___myNum_12 = value;
	}

	inline static int32_t get_offset_of_defensive_13() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___defensive_13)); }
	inline int32_t get_defensive_13() const { return ___defensive_13; }
	inline int32_t* get_address_of_defensive_13() { return &___defensive_13; }
	inline void set_defensive_13(int32_t value)
	{
		___defensive_13 = value;
	}

	inline static int32_t get_offset_of_offensive_14() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___offensive_14)); }
	inline int32_t get_offensive_14() const { return ___offensive_14; }
	inline int32_t* get_address_of_offensive_14() { return &___offensive_14; }
	inline void set_offensive_14(int32_t value)
	{
		___offensive_14 = value;
	}

	inline static int32_t get_offset_of_currentTile_15() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___currentTile_15)); }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * get_currentTile_15() const { return ___currentTile_15; }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 ** get_address_of_currentTile_15() { return &___currentTile_15; }
	inline void set_currentTile_15(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * value)
	{
		___currentTile_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTile_15), (void*)value);
	}

	inline static int32_t get_offset_of_isAttackready_16() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___isAttackready_16)); }
	inline bool get_isAttackready_16() const { return ___isAttackready_16; }
	inline bool* get_address_of_isAttackready_16() { return &___isAttackready_16; }
	inline void set_isAttackready_16(bool value)
	{
		___isAttackready_16 = value;
	}

	inline static int32_t get_offset_of_isMaster_17() { return static_cast<int32_t>(offsetof(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357, ___isMaster_17)); }
	inline bool get_isMaster_17() const { return ___isMaster_17; }
	inline bool* get_address_of_isMaster_17() { return &___isMaster_17; }
	inline void set_isMaster_17(bool value)
	{
		___isMaster_17 = value;
	}
};


// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// Tile
struct Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// System.Boolean Tile::isP1Tile
	bool ___isP1Tile_5;
	// System.Boolean Tile::isP2Tile
	bool ___isP2Tile_6;
	// System.Boolean Tile::isP1CoreTile
	bool ___isP1CoreTile_7;
	// System.Boolean Tile::isP2CoreTile
	bool ___isP2CoreTile_8;
	// System.Single Tile::occupationCost
	float ___occupationCost_9;
	// System.Int32 Tile::row
	int32_t ___row_10;
	// System.Int32 Tile::col
	int32_t ___col_11;
	// System.Boolean[] Tile::isP1_unitArea
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isP1_unitArea_12;
	// System.Boolean[] Tile::isP2_unitArea
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* ___isP2_unitArea_13;
	// UnityEngine.Transform[] Tile::P1_unitArea
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___P1_unitArea_14;
	// UnityEngine.Transform[] Tile::P2_unitArea
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* ___P2_unitArea_15;
	// MyUnit[] Tile::P1_units
	MyUnitU5BU5D_tC57E2E8C7193C6CCCE4E0D0E218E56F92234D33B* ___P1_units_16;
	// MyUnit[] Tile::P2_units
	MyUnitU5BU5D_tC57E2E8C7193C6CCCE4E0D0E218E56F92234D33B* ___P2_units_17;
	// System.Boolean Tile::isMaster
	bool ___isMaster_18;
	// UnityEngine.Transform Tile::cameraPoint
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___cameraPoint_19;
	// System.Boolean Tile::isDecision
	bool ___isDecision_20;
	// UnityEngine.UI.Image Tile::minimap_Tile
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___minimap_Tile_21;
	// UnityEngine.GameObject Tile::decisionIcon
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___decisionIcon_22;
	// System.Int32 Tile::money
	int32_t ___money_23;
	// System.Int32 Tile::result_money
	int32_t ___result_money_24;
	// UnityEngine.UI.Button Tile::MoveMapButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___MoveMapButton_25;

public:
	inline static int32_t get_offset_of_isP1Tile_5() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___isP1Tile_5)); }
	inline bool get_isP1Tile_5() const { return ___isP1Tile_5; }
	inline bool* get_address_of_isP1Tile_5() { return &___isP1Tile_5; }
	inline void set_isP1Tile_5(bool value)
	{
		___isP1Tile_5 = value;
	}

	inline static int32_t get_offset_of_isP2Tile_6() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___isP2Tile_6)); }
	inline bool get_isP2Tile_6() const { return ___isP2Tile_6; }
	inline bool* get_address_of_isP2Tile_6() { return &___isP2Tile_6; }
	inline void set_isP2Tile_6(bool value)
	{
		___isP2Tile_6 = value;
	}

	inline static int32_t get_offset_of_isP1CoreTile_7() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___isP1CoreTile_7)); }
	inline bool get_isP1CoreTile_7() const { return ___isP1CoreTile_7; }
	inline bool* get_address_of_isP1CoreTile_7() { return &___isP1CoreTile_7; }
	inline void set_isP1CoreTile_7(bool value)
	{
		___isP1CoreTile_7 = value;
	}

	inline static int32_t get_offset_of_isP2CoreTile_8() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___isP2CoreTile_8)); }
	inline bool get_isP2CoreTile_8() const { return ___isP2CoreTile_8; }
	inline bool* get_address_of_isP2CoreTile_8() { return &___isP2CoreTile_8; }
	inline void set_isP2CoreTile_8(bool value)
	{
		___isP2CoreTile_8 = value;
	}

	inline static int32_t get_offset_of_occupationCost_9() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___occupationCost_9)); }
	inline float get_occupationCost_9() const { return ___occupationCost_9; }
	inline float* get_address_of_occupationCost_9() { return &___occupationCost_9; }
	inline void set_occupationCost_9(float value)
	{
		___occupationCost_9 = value;
	}

	inline static int32_t get_offset_of_row_10() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___row_10)); }
	inline int32_t get_row_10() const { return ___row_10; }
	inline int32_t* get_address_of_row_10() { return &___row_10; }
	inline void set_row_10(int32_t value)
	{
		___row_10 = value;
	}

	inline static int32_t get_offset_of_col_11() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___col_11)); }
	inline int32_t get_col_11() const { return ___col_11; }
	inline int32_t* get_address_of_col_11() { return &___col_11; }
	inline void set_col_11(int32_t value)
	{
		___col_11 = value;
	}

	inline static int32_t get_offset_of_isP1_unitArea_12() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___isP1_unitArea_12)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isP1_unitArea_12() const { return ___isP1_unitArea_12; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isP1_unitArea_12() { return &___isP1_unitArea_12; }
	inline void set_isP1_unitArea_12(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isP1_unitArea_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isP1_unitArea_12), (void*)value);
	}

	inline static int32_t get_offset_of_isP2_unitArea_13() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___isP2_unitArea_13)); }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* get_isP2_unitArea_13() const { return ___isP2_unitArea_13; }
	inline BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C** get_address_of_isP2_unitArea_13() { return &___isP2_unitArea_13; }
	inline void set_isP2_unitArea_13(BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* value)
	{
		___isP2_unitArea_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___isP2_unitArea_13), (void*)value);
	}

	inline static int32_t get_offset_of_P1_unitArea_14() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___P1_unitArea_14)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_P1_unitArea_14() const { return ___P1_unitArea_14; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_P1_unitArea_14() { return &___P1_unitArea_14; }
	inline void set_P1_unitArea_14(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___P1_unitArea_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P1_unitArea_14), (void*)value);
	}

	inline static int32_t get_offset_of_P2_unitArea_15() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___P2_unitArea_15)); }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* get_P2_unitArea_15() const { return ___P2_unitArea_15; }
	inline TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D** get_address_of_P2_unitArea_15() { return &___P2_unitArea_15; }
	inline void set_P2_unitArea_15(TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* value)
	{
		___P2_unitArea_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P2_unitArea_15), (void*)value);
	}

	inline static int32_t get_offset_of_P1_units_16() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___P1_units_16)); }
	inline MyUnitU5BU5D_tC57E2E8C7193C6CCCE4E0D0E218E56F92234D33B* get_P1_units_16() const { return ___P1_units_16; }
	inline MyUnitU5BU5D_tC57E2E8C7193C6CCCE4E0D0E218E56F92234D33B** get_address_of_P1_units_16() { return &___P1_units_16; }
	inline void set_P1_units_16(MyUnitU5BU5D_tC57E2E8C7193C6CCCE4E0D0E218E56F92234D33B* value)
	{
		___P1_units_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P1_units_16), (void*)value);
	}

	inline static int32_t get_offset_of_P2_units_17() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___P2_units_17)); }
	inline MyUnitU5BU5D_tC57E2E8C7193C6CCCE4E0D0E218E56F92234D33B* get_P2_units_17() const { return ___P2_units_17; }
	inline MyUnitU5BU5D_tC57E2E8C7193C6CCCE4E0D0E218E56F92234D33B** get_address_of_P2_units_17() { return &___P2_units_17; }
	inline void set_P2_units_17(MyUnitU5BU5D_tC57E2E8C7193C6CCCE4E0D0E218E56F92234D33B* value)
	{
		___P2_units_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P2_units_17), (void*)value);
	}

	inline static int32_t get_offset_of_isMaster_18() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___isMaster_18)); }
	inline bool get_isMaster_18() const { return ___isMaster_18; }
	inline bool* get_address_of_isMaster_18() { return &___isMaster_18; }
	inline void set_isMaster_18(bool value)
	{
		___isMaster_18 = value;
	}

	inline static int32_t get_offset_of_cameraPoint_19() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___cameraPoint_19)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_cameraPoint_19() const { return ___cameraPoint_19; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_cameraPoint_19() { return &___cameraPoint_19; }
	inline void set_cameraPoint_19(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___cameraPoint_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraPoint_19), (void*)value);
	}

	inline static int32_t get_offset_of_isDecision_20() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___isDecision_20)); }
	inline bool get_isDecision_20() const { return ___isDecision_20; }
	inline bool* get_address_of_isDecision_20() { return &___isDecision_20; }
	inline void set_isDecision_20(bool value)
	{
		___isDecision_20 = value;
	}

	inline static int32_t get_offset_of_minimap_Tile_21() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___minimap_Tile_21)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_minimap_Tile_21() const { return ___minimap_Tile_21; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_minimap_Tile_21() { return &___minimap_Tile_21; }
	inline void set_minimap_Tile_21(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___minimap_Tile_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___minimap_Tile_21), (void*)value);
	}

	inline static int32_t get_offset_of_decisionIcon_22() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___decisionIcon_22)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_decisionIcon_22() const { return ___decisionIcon_22; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_decisionIcon_22() { return &___decisionIcon_22; }
	inline void set_decisionIcon_22(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___decisionIcon_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decisionIcon_22), (void*)value);
	}

	inline static int32_t get_offset_of_money_23() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___money_23)); }
	inline int32_t get_money_23() const { return ___money_23; }
	inline int32_t* get_address_of_money_23() { return &___money_23; }
	inline void set_money_23(int32_t value)
	{
		___money_23 = value;
	}

	inline static int32_t get_offset_of_result_money_24() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___result_money_24)); }
	inline int32_t get_result_money_24() const { return ___result_money_24; }
	inline int32_t* get_address_of_result_money_24() { return &___result_money_24; }
	inline void set_result_money_24(int32_t value)
	{
		___result_money_24 = value;
	}

	inline static int32_t get_offset_of_MoveMapButton_25() { return static_cast<int32_t>(offsetof(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2, ___MoveMapButton_25)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_MoveMapButton_25() const { return ___MoveMapButton_25; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_MoveMapButton_25() { return &___MoveMapButton_25; }
	inline void set_MoveMapButton_25(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___MoveMapButton_25 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___MoveMapButton_25), (void*)value);
	}
};


// UIManager
struct UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858  : public MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223
{
public:
	// UnityEngine.UI.Image UIManager::ChooseforcePanel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___ChooseforcePanel_5;
	// UnityEngine.UI.Image UIManager::ChoosemapPanel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___ChoosemapPanel_6;
	// UnityEngine.UI.Button UIManager::nextButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___nextButton_7;
	// UnityEngine.UI.Button UIManager::close_window
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___close_window_8;
	// UnityEngine.GameObject UIManager::build_window
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___build_window_9;
	// UnityEngine.GameObject UIManager::exit_window
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___exit_window_10;
	// UnityEngine.GameObject UIManager::setting_window
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___setting_window_11;
	// UnityEngine.GameObject UIManager::movemap_window
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___movemap_window_12;
	// UnityEngine.GameObject UIManager::movecameramp_window
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___movecameramp_window_13;
	// UnityEngine.GameObject UIManager::unit_window
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___unit_window_14;
	// UnityEngine.GameObject UIManager::decision_window
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___decision_window_15;
	// UnityEngine.GameObject UIManager::gameover
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___gameover_16;
	// UnityEngine.GameObject[] UIManager::ui
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___ui_17;
	// UnityEngine.UI.Image UIManager::s_map
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___s_map_18;
	// UnityEngine.UI.Image UIManager::b_map
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___b_map_19;
	// UnityEngine.UI.Text UIManager::money
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___money_20;
	// UnityEngine.UI.Text UIManager::errorMessage
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___errorMessage_21;
	// System.Single UIManager::time
	float ___time_22;
	// System.Single UIManager::start
	float ___start_23;
	// System.Single UIManager::end
	float ___end_24;
	// System.Single UIManager::FadeTime
	float ___FadeTime_25;
	// UnityEngine.GameObject[] UIManager::window
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___window_26;
	// UnityEngine.UI.Image UIManager::unitInfo_panel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___unitInfo_panel_27;
	// UnityEngine.UI.Image UIManager::unit_illust
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___unit_illust_28;
	// UnityEngine.UI.Image UIManager::unit_hp
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___unit_hp_29;
	// UnityEngine.UI.Text UIManager::unit_activeCost
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___unit_activeCost_30;
	// UnityEngine.UI.Text UIManager::unit_name
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___unit_name_31;
	// UnityEngine.UI.Text UIManager::HP
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___HP_32;
	// UnityEngine.UI.Text UIManager::unit_ATK
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___unit_ATK_33;
	// UnityEngine.UI.Text UIManager::unit_DEF
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___unit_DEF_34;
	// UnityEngine.UI.Image UIManager::unitButtonPanel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___unitButtonPanel_35;
	// UnityEngine.UI.Image UIManager::buildingInfo_panel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___buildingInfo_panel_36;
	// UnityEngine.UI.Text UIManager::buildingName
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___buildingName_37;
	// UnityEngine.UI.Image UIManager::buildingIllust
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___buildingIllust_38;
	// UnityEngine.UI.Image[] UIManager::buildingLevels
	ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* ___buildingLevels_39;
	// UnityEngine.UI.Text[] UIManager::buildingEffects
	TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* ___buildingEffects_40;
	// UnityEngine.UI.Button[] UIManager::mapButtons
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* ___mapButtons_41;
	// UnityEngine.UI.Button UIManager::move_nextButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___move_nextButton_42;
	// UnityEngine.UI.Image UIManager::tile_unitPanel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___tile_unitPanel_43;
	// UnityEngine.UI.Button UIManager::offAttackButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___offAttackButton_44;
	// UnityEngine.UI.Image UIManager::decision_img
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___decision_img_45;
	// UnityEngine.UI.Text UIManager::decision_story
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___decision_story_46;
	// UnityEngine.UI.Text UIManager::decision_effect
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___decision_effect_47;
	// UnityEngine.UI.Button UIManager::exitButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___exitButton_48;
	// UnityEngine.UI.Button UIManager::settingButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___settingButton_49;
	// UnityEngine.UI.Image UIManager::checkWindow
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___checkWindow_50;
	// UnityEngine.UI.Text UIManager::checkWindowtext
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___checkWindowtext_51;
	// UIManager/State UIManager::state
	int32_t ___state_52;

public:
	inline static int32_t get_offset_of_ChooseforcePanel_5() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___ChooseforcePanel_5)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_ChooseforcePanel_5() const { return ___ChooseforcePanel_5; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_ChooseforcePanel_5() { return &___ChooseforcePanel_5; }
	inline void set_ChooseforcePanel_5(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___ChooseforcePanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChooseforcePanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_ChoosemapPanel_6() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___ChoosemapPanel_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_ChoosemapPanel_6() const { return ___ChoosemapPanel_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_ChoosemapPanel_6() { return &___ChoosemapPanel_6; }
	inline void set_ChoosemapPanel_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___ChoosemapPanel_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ChoosemapPanel_6), (void*)value);
	}

	inline static int32_t get_offset_of_nextButton_7() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___nextButton_7)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_nextButton_7() const { return ___nextButton_7; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_nextButton_7() { return &___nextButton_7; }
	inline void set_nextButton_7(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___nextButton_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nextButton_7), (void*)value);
	}

	inline static int32_t get_offset_of_close_window_8() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___close_window_8)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_close_window_8() const { return ___close_window_8; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_close_window_8() { return &___close_window_8; }
	inline void set_close_window_8(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___close_window_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___close_window_8), (void*)value);
	}

	inline static int32_t get_offset_of_build_window_9() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___build_window_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_build_window_9() const { return ___build_window_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_build_window_9() { return &___build_window_9; }
	inline void set_build_window_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___build_window_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___build_window_9), (void*)value);
	}

	inline static int32_t get_offset_of_exit_window_10() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___exit_window_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_exit_window_10() const { return ___exit_window_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_exit_window_10() { return &___exit_window_10; }
	inline void set_exit_window_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___exit_window_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exit_window_10), (void*)value);
	}

	inline static int32_t get_offset_of_setting_window_11() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___setting_window_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_setting_window_11() const { return ___setting_window_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_setting_window_11() { return &___setting_window_11; }
	inline void set_setting_window_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___setting_window_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___setting_window_11), (void*)value);
	}

	inline static int32_t get_offset_of_movemap_window_12() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___movemap_window_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_movemap_window_12() const { return ___movemap_window_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_movemap_window_12() { return &___movemap_window_12; }
	inline void set_movemap_window_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___movemap_window_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movemap_window_12), (void*)value);
	}

	inline static int32_t get_offset_of_movecameramp_window_13() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___movecameramp_window_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_movecameramp_window_13() const { return ___movecameramp_window_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_movecameramp_window_13() { return &___movecameramp_window_13; }
	inline void set_movecameramp_window_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___movecameramp_window_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___movecameramp_window_13), (void*)value);
	}

	inline static int32_t get_offset_of_unit_window_14() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___unit_window_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_unit_window_14() const { return ___unit_window_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_unit_window_14() { return &___unit_window_14; }
	inline void set_unit_window_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___unit_window_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unit_window_14), (void*)value);
	}

	inline static int32_t get_offset_of_decision_window_15() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___decision_window_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_decision_window_15() const { return ___decision_window_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_decision_window_15() { return &___decision_window_15; }
	inline void set_decision_window_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___decision_window_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decision_window_15), (void*)value);
	}

	inline static int32_t get_offset_of_gameover_16() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___gameover_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_gameover_16() const { return ___gameover_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_gameover_16() { return &___gameover_16; }
	inline void set_gameover_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___gameover_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameover_16), (void*)value);
	}

	inline static int32_t get_offset_of_ui_17() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___ui_17)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_ui_17() const { return ___ui_17; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_ui_17() { return &___ui_17; }
	inline void set_ui_17(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___ui_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ui_17), (void*)value);
	}

	inline static int32_t get_offset_of_s_map_18() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___s_map_18)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_s_map_18() const { return ___s_map_18; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_s_map_18() { return &___s_map_18; }
	inline void set_s_map_18(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___s_map_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_map_18), (void*)value);
	}

	inline static int32_t get_offset_of_b_map_19() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___b_map_19)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_b_map_19() const { return ___b_map_19; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_b_map_19() { return &___b_map_19; }
	inline void set_b_map_19(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___b_map_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___b_map_19), (void*)value);
	}

	inline static int32_t get_offset_of_money_20() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___money_20)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_money_20() const { return ___money_20; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_money_20() { return &___money_20; }
	inline void set_money_20(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___money_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___money_20), (void*)value);
	}

	inline static int32_t get_offset_of_errorMessage_21() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___errorMessage_21)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_errorMessage_21() const { return ___errorMessage_21; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_errorMessage_21() { return &___errorMessage_21; }
	inline void set_errorMessage_21(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___errorMessage_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___errorMessage_21), (void*)value);
	}

	inline static int32_t get_offset_of_time_22() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___time_22)); }
	inline float get_time_22() const { return ___time_22; }
	inline float* get_address_of_time_22() { return &___time_22; }
	inline void set_time_22(float value)
	{
		___time_22 = value;
	}

	inline static int32_t get_offset_of_start_23() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___start_23)); }
	inline float get_start_23() const { return ___start_23; }
	inline float* get_address_of_start_23() { return &___start_23; }
	inline void set_start_23(float value)
	{
		___start_23 = value;
	}

	inline static int32_t get_offset_of_end_24() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___end_24)); }
	inline float get_end_24() const { return ___end_24; }
	inline float* get_address_of_end_24() { return &___end_24; }
	inline void set_end_24(float value)
	{
		___end_24 = value;
	}

	inline static int32_t get_offset_of_FadeTime_25() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___FadeTime_25)); }
	inline float get_FadeTime_25() const { return ___FadeTime_25; }
	inline float* get_address_of_FadeTime_25() { return &___FadeTime_25; }
	inline void set_FadeTime_25(float value)
	{
		___FadeTime_25 = value;
	}

	inline static int32_t get_offset_of_window_26() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___window_26)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_window_26() const { return ___window_26; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_window_26() { return &___window_26; }
	inline void set_window_26(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___window_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___window_26), (void*)value);
	}

	inline static int32_t get_offset_of_unitInfo_panel_27() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___unitInfo_panel_27)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_unitInfo_panel_27() const { return ___unitInfo_panel_27; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_unitInfo_panel_27() { return &___unitInfo_panel_27; }
	inline void set_unitInfo_panel_27(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___unitInfo_panel_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitInfo_panel_27), (void*)value);
	}

	inline static int32_t get_offset_of_unit_illust_28() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___unit_illust_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_unit_illust_28() const { return ___unit_illust_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_unit_illust_28() { return &___unit_illust_28; }
	inline void set_unit_illust_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___unit_illust_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unit_illust_28), (void*)value);
	}

	inline static int32_t get_offset_of_unit_hp_29() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___unit_hp_29)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_unit_hp_29() const { return ___unit_hp_29; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_unit_hp_29() { return &___unit_hp_29; }
	inline void set_unit_hp_29(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___unit_hp_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unit_hp_29), (void*)value);
	}

	inline static int32_t get_offset_of_unit_activeCost_30() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___unit_activeCost_30)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_unit_activeCost_30() const { return ___unit_activeCost_30; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_unit_activeCost_30() { return &___unit_activeCost_30; }
	inline void set_unit_activeCost_30(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___unit_activeCost_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unit_activeCost_30), (void*)value);
	}

	inline static int32_t get_offset_of_unit_name_31() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___unit_name_31)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_unit_name_31() const { return ___unit_name_31; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_unit_name_31() { return &___unit_name_31; }
	inline void set_unit_name_31(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___unit_name_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unit_name_31), (void*)value);
	}

	inline static int32_t get_offset_of_HP_32() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___HP_32)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_HP_32() const { return ___HP_32; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_HP_32() { return &___HP_32; }
	inline void set_HP_32(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___HP_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___HP_32), (void*)value);
	}

	inline static int32_t get_offset_of_unit_ATK_33() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___unit_ATK_33)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_unit_ATK_33() const { return ___unit_ATK_33; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_unit_ATK_33() { return &___unit_ATK_33; }
	inline void set_unit_ATK_33(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___unit_ATK_33 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unit_ATK_33), (void*)value);
	}

	inline static int32_t get_offset_of_unit_DEF_34() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___unit_DEF_34)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_unit_DEF_34() const { return ___unit_DEF_34; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_unit_DEF_34() { return &___unit_DEF_34; }
	inline void set_unit_DEF_34(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___unit_DEF_34 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unit_DEF_34), (void*)value);
	}

	inline static int32_t get_offset_of_unitButtonPanel_35() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___unitButtonPanel_35)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_unitButtonPanel_35() const { return ___unitButtonPanel_35; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_unitButtonPanel_35() { return &___unitButtonPanel_35; }
	inline void set_unitButtonPanel_35(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___unitButtonPanel_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unitButtonPanel_35), (void*)value);
	}

	inline static int32_t get_offset_of_buildingInfo_panel_36() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___buildingInfo_panel_36)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_buildingInfo_panel_36() const { return ___buildingInfo_panel_36; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_buildingInfo_panel_36() { return &___buildingInfo_panel_36; }
	inline void set_buildingInfo_panel_36(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___buildingInfo_panel_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildingInfo_panel_36), (void*)value);
	}

	inline static int32_t get_offset_of_buildingName_37() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___buildingName_37)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_buildingName_37() const { return ___buildingName_37; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_buildingName_37() { return &___buildingName_37; }
	inline void set_buildingName_37(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___buildingName_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildingName_37), (void*)value);
	}

	inline static int32_t get_offset_of_buildingIllust_38() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___buildingIllust_38)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_buildingIllust_38() const { return ___buildingIllust_38; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_buildingIllust_38() { return &___buildingIllust_38; }
	inline void set_buildingIllust_38(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___buildingIllust_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildingIllust_38), (void*)value);
	}

	inline static int32_t get_offset_of_buildingLevels_39() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___buildingLevels_39)); }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* get_buildingLevels_39() const { return ___buildingLevels_39; }
	inline ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224** get_address_of_buildingLevels_39() { return &___buildingLevels_39; }
	inline void set_buildingLevels_39(ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* value)
	{
		___buildingLevels_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildingLevels_39), (void*)value);
	}

	inline static int32_t get_offset_of_buildingEffects_40() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___buildingEffects_40)); }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* get_buildingEffects_40() const { return ___buildingEffects_40; }
	inline TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F** get_address_of_buildingEffects_40() { return &___buildingEffects_40; }
	inline void set_buildingEffects_40(TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* value)
	{
		___buildingEffects_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buildingEffects_40), (void*)value);
	}

	inline static int32_t get_offset_of_mapButtons_41() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___mapButtons_41)); }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* get_mapButtons_41() const { return ___mapButtons_41; }
	inline ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B** get_address_of_mapButtons_41() { return &___mapButtons_41; }
	inline void set_mapButtons_41(ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* value)
	{
		___mapButtons_41 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___mapButtons_41), (void*)value);
	}

	inline static int32_t get_offset_of_move_nextButton_42() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___move_nextButton_42)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_move_nextButton_42() const { return ___move_nextButton_42; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_move_nextButton_42() { return &___move_nextButton_42; }
	inline void set_move_nextButton_42(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___move_nextButton_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___move_nextButton_42), (void*)value);
	}

	inline static int32_t get_offset_of_tile_unitPanel_43() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___tile_unitPanel_43)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_tile_unitPanel_43() const { return ___tile_unitPanel_43; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_tile_unitPanel_43() { return &___tile_unitPanel_43; }
	inline void set_tile_unitPanel_43(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___tile_unitPanel_43 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tile_unitPanel_43), (void*)value);
	}

	inline static int32_t get_offset_of_offAttackButton_44() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___offAttackButton_44)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_offAttackButton_44() const { return ___offAttackButton_44; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_offAttackButton_44() { return &___offAttackButton_44; }
	inline void set_offAttackButton_44(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___offAttackButton_44 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___offAttackButton_44), (void*)value);
	}

	inline static int32_t get_offset_of_decision_img_45() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___decision_img_45)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_decision_img_45() const { return ___decision_img_45; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_decision_img_45() { return &___decision_img_45; }
	inline void set_decision_img_45(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___decision_img_45 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decision_img_45), (void*)value);
	}

	inline static int32_t get_offset_of_decision_story_46() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___decision_story_46)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_decision_story_46() const { return ___decision_story_46; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_decision_story_46() { return &___decision_story_46; }
	inline void set_decision_story_46(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___decision_story_46 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decision_story_46), (void*)value);
	}

	inline static int32_t get_offset_of_decision_effect_47() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___decision_effect_47)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_decision_effect_47() const { return ___decision_effect_47; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_decision_effect_47() { return &___decision_effect_47; }
	inline void set_decision_effect_47(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___decision_effect_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decision_effect_47), (void*)value);
	}

	inline static int32_t get_offset_of_exitButton_48() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___exitButton_48)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_exitButton_48() const { return ___exitButton_48; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_exitButton_48() { return &___exitButton_48; }
	inline void set_exitButton_48(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___exitButton_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___exitButton_48), (void*)value);
	}

	inline static int32_t get_offset_of_settingButton_49() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___settingButton_49)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_settingButton_49() const { return ___settingButton_49; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_settingButton_49() { return &___settingButton_49; }
	inline void set_settingButton_49(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___settingButton_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___settingButton_49), (void*)value);
	}

	inline static int32_t get_offset_of_checkWindow_50() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___checkWindow_50)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_checkWindow_50() const { return ___checkWindow_50; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_checkWindow_50() { return &___checkWindow_50; }
	inline void set_checkWindow_50(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___checkWindow_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkWindow_50), (void*)value);
	}

	inline static int32_t get_offset_of_checkWindowtext_51() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___checkWindowtext_51)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_checkWindowtext_51() const { return ___checkWindowtext_51; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_checkWindowtext_51() { return &___checkWindowtext_51; }
	inline void set_checkWindowtext_51(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___checkWindowtext_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___checkWindowtext_51), (void*)value);
	}

	inline static int32_t get_offset_of_state_52() { return static_cast<int32_t>(offsetof(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858, ___state_52)); }
	inline int32_t get_state_52() const { return ___state_52; }
	inline int32_t* get_address_of_state_52() { return &___state_52; }
	inline void set_state_52(int32_t value)
	{
		___state_52 = value;
	}
};


// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// CentralProcessor
struct CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B  : public MonoBehaviourPunCallbacks_tCA6BC48EAA44CF0A1F198DC7E79CD9E8B069E26C
{
public:
	// CameraManager CentralProcessor::cameraManager
	CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * ___cameraManager_6;
	// UIManager CentralProcessor::uIManager
	UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * ___uIManager_7;
	// EffectSoundManager CentralProcessor::effectSoundManager
	EffectSoundManager_t0456F1F7EA24784E9644572B3F2F4FAC299DE6B8 * ___effectSoundManager_8;
	// UnityEngine.UI.Text CentralProcessor::whoseTurn
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___whoseTurn_9;
	// UnityEngine.UI.Text CentralProcessor::currentTurn
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___currentTurn_10;
	// System.Boolean CentralProcessor::isMaster
	bool ___isMaster_11;
	// System.Int32 CentralProcessor::turn_Number
	int32_t ___turn_Number_12;
	// Tile CentralProcessor::currentTile
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___currentTile_13;
	// MyUnit CentralProcessor::currentUnit
	MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * ___currentUnit_14;
	// MyUnit CentralProcessor::currentEnemy
	MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * ___currentEnemy_15;
	// MyBuilding CentralProcessor::currentBuilding
	MyBuilding_t318D6BE4382A497673BF3A81D34AA1D178F0C324 * ___currentBuilding_16;
	// Tile CentralProcessor::P1_core_Tile
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___P1_core_Tile_17;
	// Tile CentralProcessor::P2_core_Tile
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___P2_core_Tile_18;
	// UnityEngine.UI.Text CentralProcessor::currentMoney
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___currentMoney_19;
	// UnityEngine.Color CentralProcessor::color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___color_20;
	// UnityEngine.UI.Button CentralProcessor::current_moveButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___current_moveButton_21;
	// Tile[] CentralProcessor::tiles
	TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* ___tiles_22;
	// MyBuilding[] CentralProcessor::currentBuildings
	MyBuildingU5BU5D_tE23BD49697738D3D3AC3179C862AA4D3BA905EBC* ___currentBuildings_23;
	// System.Int32 CentralProcessor::createUnitNumber
	int32_t ___createUnitNumber_24;
	// System.Int32 CentralProcessor::createBuildingNumber
	int32_t ___createBuildingNumber_25;
	// UnityEngine.UI.Image CentralProcessor::waitingPanel
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___waitingPanel_26;
	// UnityEngine.UI.Text CentralProcessor::waitingText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___waitingText_27;
	// System.Collections.Queue CentralProcessor::que
	Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * ___que_28;
	// Cloud CentralProcessor::cloud
	Cloud_tF7F58C93A5DC1F1378D97ACFF462C47C831114B3 * ___cloud_29;
	// UnityEngine.UI.Button CentralProcessor::decisionButton
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * ___decisionButton_30;
	// System.Boolean CentralProcessor::firstDecision
	bool ___firstDecision_31;
	// UnityEngine.UI.Text CentralProcessor::timer
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___timer_32;
	// System.Single CentralProcessor::time
	float ___time_33;
	// System.Single CentralProcessor::selectCount
	float ___selectCount_34;
	// System.Collections.IEnumerator CentralProcessor::t
	RuntimeObject* ___t_35;
	// System.Boolean CentralProcessor::isIgnoreCheck
	bool ___isIgnoreCheck_36;
	// System.Int32 CentralProcessor::P1_score
	int32_t ___P1_score_37;
	// System.Int32 CentralProcessor::P2_score
	int32_t ___P2_score_38;
	// System.Int32 CentralProcessor::P1_totalUnit
	int32_t ___P1_totalUnit_39;
	// System.Int32 CentralProcessor::P2_totalUnit
	int32_t ___P2_totalUnit_40;
	// System.Int32 CentralProcessor::P1_totalKill
	int32_t ___P1_totalKill_41;
	// System.Int32 CentralProcessor::P2_totalKill
	int32_t ___P2_totalKill_42;
	// System.Int32 CentralProcessor::P1_totalMoney
	int32_t ___P1_totalMoney_43;
	// System.Int32 CentralProcessor::P2_totalMoney
	int32_t ___P2_totalMoney_44;
	// System.Int32 CentralProcessor::P1_totalOccupation
	int32_t ___P1_totalOccupation_45;
	// System.Int32 CentralProcessor::P2_totalOccupation
	int32_t ___P2_totalOccupation_46;
	// UnityEngine.UI.Text CentralProcessor::p1_score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___p1_score_47;
	// UnityEngine.UI.Text CentralProcessor::p2_score
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___p2_score_48;
	// UnityEngine.UI.Text CentralProcessor::p1_unit
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___p1_unit_49;
	// UnityEngine.UI.Text CentralProcessor::p2_unit
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___p2_unit_50;
	// UnityEngine.UI.Text CentralProcessor::p1_kill
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___p1_kill_51;
	// UnityEngine.UI.Text CentralProcessor::p2_kill
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___p2_kill_52;
	// UnityEngine.UI.Text CentralProcessor::p1_money
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___p1_money_53;
	// UnityEngine.UI.Text CentralProcessor::p2_money
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___p2_money_54;
	// UnityEngine.UI.Text CentralProcessor::p1_occupation
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___p1_occupation_55;
	// UnityEngine.UI.Text CentralProcessor::p2_occupation
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___p2_occupation_56;

public:
	inline static int32_t get_offset_of_cameraManager_6() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___cameraManager_6)); }
	inline CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * get_cameraManager_6() const { return ___cameraManager_6; }
	inline CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A ** get_address_of_cameraManager_6() { return &___cameraManager_6; }
	inline void set_cameraManager_6(CameraManager_t8E36175FB066C9E1F863A5D7B3A300EAC805D01A * value)
	{
		___cameraManager_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cameraManager_6), (void*)value);
	}

	inline static int32_t get_offset_of_uIManager_7() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___uIManager_7)); }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * get_uIManager_7() const { return ___uIManager_7; }
	inline UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 ** get_address_of_uIManager_7() { return &___uIManager_7; }
	inline void set_uIManager_7(UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * value)
	{
		___uIManager_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___uIManager_7), (void*)value);
	}

	inline static int32_t get_offset_of_effectSoundManager_8() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___effectSoundManager_8)); }
	inline EffectSoundManager_t0456F1F7EA24784E9644572B3F2F4FAC299DE6B8 * get_effectSoundManager_8() const { return ___effectSoundManager_8; }
	inline EffectSoundManager_t0456F1F7EA24784E9644572B3F2F4FAC299DE6B8 ** get_address_of_effectSoundManager_8() { return &___effectSoundManager_8; }
	inline void set_effectSoundManager_8(EffectSoundManager_t0456F1F7EA24784E9644572B3F2F4FAC299DE6B8 * value)
	{
		___effectSoundManager_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___effectSoundManager_8), (void*)value);
	}

	inline static int32_t get_offset_of_whoseTurn_9() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___whoseTurn_9)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_whoseTurn_9() const { return ___whoseTurn_9; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_whoseTurn_9() { return &___whoseTurn_9; }
	inline void set_whoseTurn_9(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___whoseTurn_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___whoseTurn_9), (void*)value);
	}

	inline static int32_t get_offset_of_currentTurn_10() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___currentTurn_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_currentTurn_10() const { return ___currentTurn_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_currentTurn_10() { return &___currentTurn_10; }
	inline void set_currentTurn_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___currentTurn_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTurn_10), (void*)value);
	}

	inline static int32_t get_offset_of_isMaster_11() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___isMaster_11)); }
	inline bool get_isMaster_11() const { return ___isMaster_11; }
	inline bool* get_address_of_isMaster_11() { return &___isMaster_11; }
	inline void set_isMaster_11(bool value)
	{
		___isMaster_11 = value;
	}

	inline static int32_t get_offset_of_turn_Number_12() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___turn_Number_12)); }
	inline int32_t get_turn_Number_12() const { return ___turn_Number_12; }
	inline int32_t* get_address_of_turn_Number_12() { return &___turn_Number_12; }
	inline void set_turn_Number_12(int32_t value)
	{
		___turn_Number_12 = value;
	}

	inline static int32_t get_offset_of_currentTile_13() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___currentTile_13)); }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * get_currentTile_13() const { return ___currentTile_13; }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 ** get_address_of_currentTile_13() { return &___currentTile_13; }
	inline void set_currentTile_13(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * value)
	{
		___currentTile_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentTile_13), (void*)value);
	}

	inline static int32_t get_offset_of_currentUnit_14() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___currentUnit_14)); }
	inline MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * get_currentUnit_14() const { return ___currentUnit_14; }
	inline MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 ** get_address_of_currentUnit_14() { return &___currentUnit_14; }
	inline void set_currentUnit_14(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * value)
	{
		___currentUnit_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentUnit_14), (void*)value);
	}

	inline static int32_t get_offset_of_currentEnemy_15() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___currentEnemy_15)); }
	inline MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * get_currentEnemy_15() const { return ___currentEnemy_15; }
	inline MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 ** get_address_of_currentEnemy_15() { return &___currentEnemy_15; }
	inline void set_currentEnemy_15(MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * value)
	{
		___currentEnemy_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentEnemy_15), (void*)value);
	}

	inline static int32_t get_offset_of_currentBuilding_16() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___currentBuilding_16)); }
	inline MyBuilding_t318D6BE4382A497673BF3A81D34AA1D178F0C324 * get_currentBuilding_16() const { return ___currentBuilding_16; }
	inline MyBuilding_t318D6BE4382A497673BF3A81D34AA1D178F0C324 ** get_address_of_currentBuilding_16() { return &___currentBuilding_16; }
	inline void set_currentBuilding_16(MyBuilding_t318D6BE4382A497673BF3A81D34AA1D178F0C324 * value)
	{
		___currentBuilding_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentBuilding_16), (void*)value);
	}

	inline static int32_t get_offset_of_P1_core_Tile_17() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___P1_core_Tile_17)); }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * get_P1_core_Tile_17() const { return ___P1_core_Tile_17; }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 ** get_address_of_P1_core_Tile_17() { return &___P1_core_Tile_17; }
	inline void set_P1_core_Tile_17(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * value)
	{
		___P1_core_Tile_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P1_core_Tile_17), (void*)value);
	}

	inline static int32_t get_offset_of_P2_core_Tile_18() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___P2_core_Tile_18)); }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * get_P2_core_Tile_18() const { return ___P2_core_Tile_18; }
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 ** get_address_of_P2_core_Tile_18() { return &___P2_core_Tile_18; }
	inline void set_P2_core_Tile_18(Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * value)
	{
		___P2_core_Tile_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___P2_core_Tile_18), (void*)value);
	}

	inline static int32_t get_offset_of_currentMoney_19() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___currentMoney_19)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_currentMoney_19() const { return ___currentMoney_19; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_currentMoney_19() { return &___currentMoney_19; }
	inline void set_currentMoney_19(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___currentMoney_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentMoney_19), (void*)value);
	}

	inline static int32_t get_offset_of_color_20() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___color_20)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_color_20() const { return ___color_20; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_color_20() { return &___color_20; }
	inline void set_color_20(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___color_20 = value;
	}

	inline static int32_t get_offset_of_current_moveButton_21() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___current_moveButton_21)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_current_moveButton_21() const { return ___current_moveButton_21; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_current_moveButton_21() { return &___current_moveButton_21; }
	inline void set_current_moveButton_21(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___current_moveButton_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_moveButton_21), (void*)value);
	}

	inline static int32_t get_offset_of_tiles_22() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___tiles_22)); }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* get_tiles_22() const { return ___tiles_22; }
	inline TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707** get_address_of_tiles_22() { return &___tiles_22; }
	inline void set_tiles_22(TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* value)
	{
		___tiles_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___tiles_22), (void*)value);
	}

	inline static int32_t get_offset_of_currentBuildings_23() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___currentBuildings_23)); }
	inline MyBuildingU5BU5D_tE23BD49697738D3D3AC3179C862AA4D3BA905EBC* get_currentBuildings_23() const { return ___currentBuildings_23; }
	inline MyBuildingU5BU5D_tE23BD49697738D3D3AC3179C862AA4D3BA905EBC** get_address_of_currentBuildings_23() { return &___currentBuildings_23; }
	inline void set_currentBuildings_23(MyBuildingU5BU5D_tE23BD49697738D3D3AC3179C862AA4D3BA905EBC* value)
	{
		___currentBuildings_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___currentBuildings_23), (void*)value);
	}

	inline static int32_t get_offset_of_createUnitNumber_24() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___createUnitNumber_24)); }
	inline int32_t get_createUnitNumber_24() const { return ___createUnitNumber_24; }
	inline int32_t* get_address_of_createUnitNumber_24() { return &___createUnitNumber_24; }
	inline void set_createUnitNumber_24(int32_t value)
	{
		___createUnitNumber_24 = value;
	}

	inline static int32_t get_offset_of_createBuildingNumber_25() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___createBuildingNumber_25)); }
	inline int32_t get_createBuildingNumber_25() const { return ___createBuildingNumber_25; }
	inline int32_t* get_address_of_createBuildingNumber_25() { return &___createBuildingNumber_25; }
	inline void set_createBuildingNumber_25(int32_t value)
	{
		___createBuildingNumber_25 = value;
	}

	inline static int32_t get_offset_of_waitingPanel_26() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___waitingPanel_26)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_waitingPanel_26() const { return ___waitingPanel_26; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_waitingPanel_26() { return &___waitingPanel_26; }
	inline void set_waitingPanel_26(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___waitingPanel_26 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitingPanel_26), (void*)value);
	}

	inline static int32_t get_offset_of_waitingText_27() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___waitingText_27)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_waitingText_27() const { return ___waitingText_27; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_waitingText_27() { return &___waitingText_27; }
	inline void set_waitingText_27(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___waitingText_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___waitingText_27), (void*)value);
	}

	inline static int32_t get_offset_of_que_28() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___que_28)); }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * get_que_28() const { return ___que_28; }
	inline Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 ** get_address_of_que_28() { return &___que_28; }
	inline void set_que_28(Queue_t66723C58C7422102C36F8570BE048BD0CC489E52 * value)
	{
		___que_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___que_28), (void*)value);
	}

	inline static int32_t get_offset_of_cloud_29() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___cloud_29)); }
	inline Cloud_tF7F58C93A5DC1F1378D97ACFF462C47C831114B3 * get_cloud_29() const { return ___cloud_29; }
	inline Cloud_tF7F58C93A5DC1F1378D97ACFF462C47C831114B3 ** get_address_of_cloud_29() { return &___cloud_29; }
	inline void set_cloud_29(Cloud_tF7F58C93A5DC1F1378D97ACFF462C47C831114B3 * value)
	{
		___cloud_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cloud_29), (void*)value);
	}

	inline static int32_t get_offset_of_decisionButton_30() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___decisionButton_30)); }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * get_decisionButton_30() const { return ___decisionButton_30; }
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** get_address_of_decisionButton_30() { return &___decisionButton_30; }
	inline void set_decisionButton_30(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		___decisionButton_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decisionButton_30), (void*)value);
	}

	inline static int32_t get_offset_of_firstDecision_31() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___firstDecision_31)); }
	inline bool get_firstDecision_31() const { return ___firstDecision_31; }
	inline bool* get_address_of_firstDecision_31() { return &___firstDecision_31; }
	inline void set_firstDecision_31(bool value)
	{
		___firstDecision_31 = value;
	}

	inline static int32_t get_offset_of_timer_32() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___timer_32)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_timer_32() const { return ___timer_32; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_timer_32() { return &___timer_32; }
	inline void set_timer_32(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___timer_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___timer_32), (void*)value);
	}

	inline static int32_t get_offset_of_time_33() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___time_33)); }
	inline float get_time_33() const { return ___time_33; }
	inline float* get_address_of_time_33() { return &___time_33; }
	inline void set_time_33(float value)
	{
		___time_33 = value;
	}

	inline static int32_t get_offset_of_selectCount_34() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___selectCount_34)); }
	inline float get_selectCount_34() const { return ___selectCount_34; }
	inline float* get_address_of_selectCount_34() { return &___selectCount_34; }
	inline void set_selectCount_34(float value)
	{
		___selectCount_34 = value;
	}

	inline static int32_t get_offset_of_t_35() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___t_35)); }
	inline RuntimeObject* get_t_35() const { return ___t_35; }
	inline RuntimeObject** get_address_of_t_35() { return &___t_35; }
	inline void set_t_35(RuntimeObject* value)
	{
		___t_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___t_35), (void*)value);
	}

	inline static int32_t get_offset_of_isIgnoreCheck_36() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___isIgnoreCheck_36)); }
	inline bool get_isIgnoreCheck_36() const { return ___isIgnoreCheck_36; }
	inline bool* get_address_of_isIgnoreCheck_36() { return &___isIgnoreCheck_36; }
	inline void set_isIgnoreCheck_36(bool value)
	{
		___isIgnoreCheck_36 = value;
	}

	inline static int32_t get_offset_of_P1_score_37() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___P1_score_37)); }
	inline int32_t get_P1_score_37() const { return ___P1_score_37; }
	inline int32_t* get_address_of_P1_score_37() { return &___P1_score_37; }
	inline void set_P1_score_37(int32_t value)
	{
		___P1_score_37 = value;
	}

	inline static int32_t get_offset_of_P2_score_38() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___P2_score_38)); }
	inline int32_t get_P2_score_38() const { return ___P2_score_38; }
	inline int32_t* get_address_of_P2_score_38() { return &___P2_score_38; }
	inline void set_P2_score_38(int32_t value)
	{
		___P2_score_38 = value;
	}

	inline static int32_t get_offset_of_P1_totalUnit_39() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___P1_totalUnit_39)); }
	inline int32_t get_P1_totalUnit_39() const { return ___P1_totalUnit_39; }
	inline int32_t* get_address_of_P1_totalUnit_39() { return &___P1_totalUnit_39; }
	inline void set_P1_totalUnit_39(int32_t value)
	{
		___P1_totalUnit_39 = value;
	}

	inline static int32_t get_offset_of_P2_totalUnit_40() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___P2_totalUnit_40)); }
	inline int32_t get_P2_totalUnit_40() const { return ___P2_totalUnit_40; }
	inline int32_t* get_address_of_P2_totalUnit_40() { return &___P2_totalUnit_40; }
	inline void set_P2_totalUnit_40(int32_t value)
	{
		___P2_totalUnit_40 = value;
	}

	inline static int32_t get_offset_of_P1_totalKill_41() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___P1_totalKill_41)); }
	inline int32_t get_P1_totalKill_41() const { return ___P1_totalKill_41; }
	inline int32_t* get_address_of_P1_totalKill_41() { return &___P1_totalKill_41; }
	inline void set_P1_totalKill_41(int32_t value)
	{
		___P1_totalKill_41 = value;
	}

	inline static int32_t get_offset_of_P2_totalKill_42() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___P2_totalKill_42)); }
	inline int32_t get_P2_totalKill_42() const { return ___P2_totalKill_42; }
	inline int32_t* get_address_of_P2_totalKill_42() { return &___P2_totalKill_42; }
	inline void set_P2_totalKill_42(int32_t value)
	{
		___P2_totalKill_42 = value;
	}

	inline static int32_t get_offset_of_P1_totalMoney_43() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___P1_totalMoney_43)); }
	inline int32_t get_P1_totalMoney_43() const { return ___P1_totalMoney_43; }
	inline int32_t* get_address_of_P1_totalMoney_43() { return &___P1_totalMoney_43; }
	inline void set_P1_totalMoney_43(int32_t value)
	{
		___P1_totalMoney_43 = value;
	}

	inline static int32_t get_offset_of_P2_totalMoney_44() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___P2_totalMoney_44)); }
	inline int32_t get_P2_totalMoney_44() const { return ___P2_totalMoney_44; }
	inline int32_t* get_address_of_P2_totalMoney_44() { return &___P2_totalMoney_44; }
	inline void set_P2_totalMoney_44(int32_t value)
	{
		___P2_totalMoney_44 = value;
	}

	inline static int32_t get_offset_of_P1_totalOccupation_45() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___P1_totalOccupation_45)); }
	inline int32_t get_P1_totalOccupation_45() const { return ___P1_totalOccupation_45; }
	inline int32_t* get_address_of_P1_totalOccupation_45() { return &___P1_totalOccupation_45; }
	inline void set_P1_totalOccupation_45(int32_t value)
	{
		___P1_totalOccupation_45 = value;
	}

	inline static int32_t get_offset_of_P2_totalOccupation_46() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___P2_totalOccupation_46)); }
	inline int32_t get_P2_totalOccupation_46() const { return ___P2_totalOccupation_46; }
	inline int32_t* get_address_of_P2_totalOccupation_46() { return &___P2_totalOccupation_46; }
	inline void set_P2_totalOccupation_46(int32_t value)
	{
		___P2_totalOccupation_46 = value;
	}

	inline static int32_t get_offset_of_p1_score_47() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___p1_score_47)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_p1_score_47() const { return ___p1_score_47; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_p1_score_47() { return &___p1_score_47; }
	inline void set_p1_score_47(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___p1_score_47 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p1_score_47), (void*)value);
	}

	inline static int32_t get_offset_of_p2_score_48() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___p2_score_48)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_p2_score_48() const { return ___p2_score_48; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_p2_score_48() { return &___p2_score_48; }
	inline void set_p2_score_48(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___p2_score_48 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p2_score_48), (void*)value);
	}

	inline static int32_t get_offset_of_p1_unit_49() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___p1_unit_49)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_p1_unit_49() const { return ___p1_unit_49; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_p1_unit_49() { return &___p1_unit_49; }
	inline void set_p1_unit_49(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___p1_unit_49 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p1_unit_49), (void*)value);
	}

	inline static int32_t get_offset_of_p2_unit_50() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___p2_unit_50)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_p2_unit_50() const { return ___p2_unit_50; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_p2_unit_50() { return &___p2_unit_50; }
	inline void set_p2_unit_50(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___p2_unit_50 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p2_unit_50), (void*)value);
	}

	inline static int32_t get_offset_of_p1_kill_51() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___p1_kill_51)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_p1_kill_51() const { return ___p1_kill_51; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_p1_kill_51() { return &___p1_kill_51; }
	inline void set_p1_kill_51(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___p1_kill_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p1_kill_51), (void*)value);
	}

	inline static int32_t get_offset_of_p2_kill_52() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___p2_kill_52)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_p2_kill_52() const { return ___p2_kill_52; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_p2_kill_52() { return &___p2_kill_52; }
	inline void set_p2_kill_52(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___p2_kill_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p2_kill_52), (void*)value);
	}

	inline static int32_t get_offset_of_p1_money_53() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___p1_money_53)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_p1_money_53() const { return ___p1_money_53; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_p1_money_53() { return &___p1_money_53; }
	inline void set_p1_money_53(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___p1_money_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p1_money_53), (void*)value);
	}

	inline static int32_t get_offset_of_p2_money_54() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___p2_money_54)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_p2_money_54() const { return ___p2_money_54; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_p2_money_54() { return &___p2_money_54; }
	inline void set_p2_money_54(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___p2_money_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p2_money_54), (void*)value);
	}

	inline static int32_t get_offset_of_p1_occupation_55() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___p1_occupation_55)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_p1_occupation_55() const { return ___p1_occupation_55; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_p1_occupation_55() { return &___p1_occupation_55; }
	inline void set_p1_occupation_55(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___p1_occupation_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p1_occupation_55), (void*)value);
	}

	inline static int32_t get_offset_of_p2_occupation_56() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B, ___p2_occupation_56)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_p2_occupation_56() const { return ___p2_occupation_56; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_p2_occupation_56() { return &___p2_occupation_56; }
	inline void set_p2_occupation_56(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___p2_occupation_56 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___p2_occupation_56), (void*)value);
	}
};

struct CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B_StaticFields
{
public:
	// CentralProcessor CentralProcessor::instance
	CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * ___instance_5;

public:
	inline static int32_t get_offset_of_instance_5() { return static_cast<int32_t>(offsetof(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B_StaticFields, ___instance_5)); }
	inline CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * get_instance_5() const { return ___instance_5; }
	inline CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B ** get_address_of_instance_5() { return &___instance_5; }
	inline void set_instance_5(CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * value)
	{
		___instance_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___instance_5), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
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

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Button[]
struct ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * m_Items[1];

public:
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * m_Items[1];

public:
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * m_Items[1];

public:
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Transform[]
struct TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * m_Items[1];

public:
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// Tile[]
struct TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * m_Items[1];

public:
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Photon.Realtime.Player[]
struct PlayerU5BU5D_t092E5B6C62AD4995428A64FD546C5B79741E6DA3  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * m_Items[1];

public:
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Player_tC6DFC22DFF5978489C4CFA025695FEC556610214 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared (const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Single>::Enqueue(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mC08B6BECDD19BF12162E08CE4496604CC29C5849_gshared (Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * __this, float ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m5A3929183CBF24FC945AE80DE33DAFB0350720F3_gshared (Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * __this, const RuntimeMethod* method);

// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::SetAsLastSibling()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// UnityEngine.SceneManagement.Scene UnityEngine.SceneManagement.SceneManager::GetActiveScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4 (const RuntimeMethod* method);
// System.String UnityEngine.SceneManagement.Scene::get_name()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8 (Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40 (Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UIManager::SetReadyState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetReadyState_mA2F457C07AB4172AD5FFCDC85A70C7C5AAD67335 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetKey(UnityEngine.KeyCode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429 (int32_t ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method);
// System.Void UIManager::ExitButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ExitButtonClick_mAA7E13AE42872DBE34B6CB99855FD1B08BDCE0E1 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::SetIdleState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetIdleState_m6EEB1DAF0CFC273B743C4E33A0C7607D8099E3D9 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::OffReadyAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OffReadyAttack_m815A58A3D73239FDF2B3BAD855790A1321E71581 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// GameManager GameManager::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B (const RuntimeMethod* method);
// System.Void AudioManager::ButtonClickSound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_ButtonClickSound_m5CE6ACD5BC54EDABA5314ACA5C85479FFA976D52 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method);
// UnityEngine.AudioClip UnityEngine.AudioSource::get_clip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void AudioManager::StartTitleBGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioManager_StartTitleBGM_m30C37DBE842B5F30B15328EC940D94A0A5E28397 (AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * __this, const RuntimeMethod* method);
// System.Void UIManager::SetActiveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetActiveState_mDCB7BD75D22965F29A83ACE9B02619113E1CA855 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UIManager::UISetActiveFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UISetActiveFalse_m2FB90DF2D505792C528F133270CE27A5D4D3C9B3 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::SearchWay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SearchWay_mA4FC7A45F9018A697D1BB7145F9E1212DC0D74BA (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::SetActiveFalseWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetActiveFalseWindow_mF2DF3F78683C8A1D252FDDC8A0022629F862C82E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::UISetActiveTrue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UISetActiveTrue_mC291193171C6E700B6D9CB24165750E40EE0D0E7 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UIManager::InfoWindowReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_InfoWindowReset_m50C6C71BE44EA7444B26460FF0789444FC237C74 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186 (String_t* ___tag0, const RuntimeMethod* method);
// CentralProcessor CentralProcessor::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD (const RuntimeMethod* method);
// System.Void CentralProcessor::UnitReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CentralProcessor_UnitReset_mF1ABF614F26D7D6512DACF5451E52508C8986683 (CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * __this, const RuntimeMethod* method);
// System.Void CentralProcessor::BuildingReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CentralProcessor_BuildingReset_m8D679BD6BDA545F3CB7F9DB0285092329AF987AF (CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * __this, const RuntimeMethod* method);
// VariableManager VariableManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * VariableManager_get_Instance_mB6DE420D15154CBD02B61F88F9A7F4B6752E384D (const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Decision>()
inline Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34 * Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<MoveUnit>()
inline MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void MoveUnit::OffCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveUnit_OffCheck_m6B676BC42C8790B68D96E4CDF619616B23A11921 (MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * __this, const RuntimeMethod* method);
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::RoundToInt(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD (float ___f0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<MoveUnit>()
inline MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 UIManager::CalculateDistance(Tile,Tile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIManager_CalculateDistance_m356759958D658B9D0C34E79BB2CB76F131714BC8 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___current0, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___obj1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Mathf::Abs(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0 (int32_t ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<Photon.Pun.PhotonView>()
inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Int32 Photon.Pun.PhotonView::get_ViewID()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C (PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * __this, const RuntimeMethod* method);
// System.Void CentralProcessor::CheckUnitArea(System.Int32,System.Int32,System.Boolean,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CentralProcessor_CheckUnitArea_m03EFB07D02CDBF179B625DE659F2A8A685B7835E (CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * __this, int32_t ___layer0, int32_t ___id1, bool ___check2, int32_t ___num3, const RuntimeMethod* method);
// System.Void CentralProcessor::CheckTileUnits(System.Int32,System.Int32,System.Int32,System.Boolean,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CentralProcessor_CheckTileUnits_mE7FFCF1E97E4A2E4B6E06D386E9E9FA17F361EBA (CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * __this, int32_t ___tileId0, int32_t ___unitId1, int32_t ___num2, bool ___isMaster3, bool ___check4, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<Photon.Pun.PhotonView>()
inline PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void CentralProcessor::ApplyUnitCurrentTile(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CentralProcessor_ApplyUnitCurrentTile_mC74C3EE7EF41406D22A5E49DF930ADADAC51D8E1 (CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * __this, int32_t ___unitId0, int32_t ___tileId1, const RuntimeMethod* method);
// System.Void CentralProcessor::ApplyUnitActiveCost(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CentralProcessor_ApplyUnitActiveCost_mF8BE5D6AFCEA6E2DAFC9D6AF55F46EEC49A4FDAC (CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * __this, int32_t ___id0, int32_t ___cost1, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::get_white()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E (const RuntimeMethod* method);
// System.Void MoveUnit::ChangeColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MoveUnit_ChangeColor_mD4382488E55CDE34605B192DCD1959E904667224 (MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___c0, const RuntimeMethod* method);
// System.Void UIManager::SetAttackState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetAttackState_m731CE6AE89C1876FF9D93566D0795FF3945D0CBF (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void UIManager/<fadeoutErrorMessage>d__87::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfadeoutErrorMessageU3Ed__87__ctor_m95C2E453AF1126A2A1559A3C880975EA81CD03AE (U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void Photon.Pun.MonoBehaviourPun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviourPun__ctor_mCE5059964AC90D4EBEB442C9A3B67F92A966E617 (MonoBehaviourPun_t6246A9CAF07BE92C2F3C71ED9AF8FA2BE6322223 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::FindObjectOfType<VariableManager>()
inline VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * Object_FindObjectOfType_TisVariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_mDFA0F2936D9223924B33F7352DE4E9781483F8C5 (const RuntimeMethod* method)
{
	return ((  VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * (*) (const RuntimeMethod*))Object_FindObjectOfType_TisRuntimeObject_m25AA6DB6AABFD5D66AFA1A8C0E91A7AF61429C37_gshared)(method);
}
// System.Void VariableManager::BuffSelect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_BuffSelect_mF423144387425B77488CD1E5DF20492B8A7BCE3A (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, int32_t ___num0, const RuntimeMethod* method);
// System.Void VariableManager::UnitOffenceEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_UnitOffenceEffect_mBEA08B1173F633FF38684541AA43B5A7060D80D5 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method);
// System.Void VariableManager::UnitCostEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_UnitCostEffect_mE71CA15373C432829224937F5CDFA210A8132936 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method);
// System.Void VariableManager::BuildingCostEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_BuildingCostEffect_m33B440011C79FAAC3B2202B35BCD6DD5709C6C6D (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method);
// System.Void VariableManager::UnitActiveCostEffect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_UnitActiveCostEffect_mEE27D0ECE331C033E0DEC15F1B82E6C59CBF351A (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, int32_t ___number0, const RuntimeMethod* method);
// System.Void VariableManager::GoodsProductionEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_GoodsProductionEffect_mC00788F50C1C058D362D0D6BEC3CB1B49131F66D (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method);
// System.Void VariableManager::OccupationCostEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_OccupationCostEffect_mADC4F09F6D8310DFB282ECDE1CE63C2201CA8ECA (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method);
// System.Void VariableManager::UnitDefensiveEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_UnitDefensiveEffect_mB1D61B87D25249334D1A6B67F307E230EBE9253E (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method);
// System.Void VariableManager::GoodsProductionSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_GoodsProductionSetting_mB6067A2A38648F91B7C26F34F3C6BFF757546925 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, const RuntimeMethod* method);
// System.Void VariableManager::WarUnit_OffenceBuff(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_WarUnit_OffenceBuff_mDA309FAE5CFC90695A43058A42AB7AD8E65D9A00 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method);
// System.Void VariableManager::ArcUnit_OffenceBuff(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_ArcUnit_OffenceBuff_m515F9386729C69FB28B9E7976791B114F76567B8 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method);
// System.Void VariableManager::MagUnit_OffenceBuff(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_MagUnit_OffenceBuff_m64B0D6832A749EDF14C68FEE1BC23B86C9E76DFC (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method);
// System.Void VariableManager::BuildingBuff_unitCost(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_BuildingBuff_unitCost_m3688F2996A954668D2315844EA5BB35BEC1B7DF6 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method);
// System.Void VariableManager::BuildingBuff_buildingCost(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_BuildingBuff_buildingCost_m42D36D06CF00AD3CE07F15528FF739CDFF4FA682 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method);
// System.Void CentralProcessor::ApplyUnitOffenceEffect(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CentralProcessor_ApplyUnitOffenceEffect_m43CF28C63B4A6334F214C5377DD4417D756DF7FE (CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * __this, int32_t ___layer0, int32_t ___war_off1, int32_t ___arc_off2, int32_t ___mag_off3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Single>::Enqueue(!0)
inline void Queue_1_Enqueue_mC08B6BECDD19BF12162E08CE4496604CC29C5849 (Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * __this, float ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC *, float, const RuntimeMethod*))Queue_1_Enqueue_mC08B6BECDD19BF12162E08CE4496604CC29C5849_gshared)(__this, ___item0, method);
}
// System.Void VariableManager::UnitCostSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_UnitCostSetting_mD3C619FD17092F3DD6289FAE97EB4F72595151FD (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, const RuntimeMethod* method);
// System.Void VariableManager::BuildingCostSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_BuildingCostSetting_m52C7744D47AE670E4E5C32CA2F35BCC31BD2E4CC (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<CreateBuilding>()
inline CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4 * Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void CentralProcessor::ApplyUnitDefenceEffect(System.Int32,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CentralProcessor_ApplyUnitDefenceEffect_m272DAA5BAD58E9868BFC2F2293C3A86D8F5AB647 (CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * __this, int32_t ___layer0, int32_t ___war_def1, int32_t ___arc_def2, int32_t ___mag_def3, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Queue`1<System.Single>::.ctor()
inline void Queue_1__ctor_m5A3929183CBF24FC945AE80DE33DAFB0350720F3 (Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC *, const RuntimeMethod*))Queue_1__ctor_m5A3929183CBF24FC945AE80DE33DAFB0350720F3_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010 (float* __this, const RuntimeMethod* method);
// System.Void CentralProcessor::AddTurnNumber()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CentralProcessor_AddTurnNumber_m175887DCFDAECCE9E9677AEDFF9774AC038B7694 (CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * __this, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// Photon.Realtime.Player[] Photon.Pun.PhotonNetwork::get_PlayerList()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PlayerU5BU5D_t092E5B6C62AD4995428A64FD546C5B79741E6DA3* PhotonNetwork_get_PlayerList_m58666A21470BC619A3B134B9C0E303070A9BCCBB (const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Lerp(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616 (float ___a0, float ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Collections.IEnumerator UIManager::fadeoutErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIManager_fadeoutErrorMessage_m3E48F7DAD44462B65B04DC3A46185B3D21E40CE4 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::StopCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Tutorial_Btn::UnitBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_UnitBtn_m2AEADB0EBB8C48F01A3ABE4E05CBA1F8FBD1BCEC (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral851890D2FD8637FD1D936A3FA7421C6E58F6C638);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA85BC61BDF41A2A8C1BC22040FAACEA386A4ABED);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (tutorialMain.UButtonLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_UButtonLimit_29();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_01aa;
		}
	}
	{
		// if (tutorialMain.Unit2nd)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		bool L_4 = L_3->get_Unit2nd_32();
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_00e4;
		}
	}
	{
		// tutorialMain.TutorialText.text = "�̹����� ����° ��ư�� Ŭ���غ�����.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_6 = __this->get_tutorialMain_4();
		NullCheck(L_6);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = L_6->get_TutorialText_4();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral851890D2FD8637FD1D936A3FA7421C6E58F6C638);
		// tutorialMain.UIs[9].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_8 = __this->get_tutorialMain_4();
		NullCheck(L_8);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = L_8->get_UIs_8();
		NullCheck(L_9);
		int32_t L_10 = ((int32_t)9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12;
		L_12 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_12, /*hidden argument*/NULL);
		// tutorialMain.UIs[11].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_13 = __this->get_tutorialMain_4();
		NullCheck(L_13);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = L_13->get_UIs_8();
		NullCheck(L_14);
		int32_t L_15 = ((int32_t)11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_17, /*hidden argument*/NULL);
		// tutorialMain.UIs[11].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_18 = __this->get_tutorialMain_4();
		NullCheck(L_18);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = L_18->get_UIs_8();
		NullCheck(L_19);
		int32_t L_20 = ((int32_t)11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_21, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[12].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_22 = __this->get_tutorialMain_4();
		NullCheck(L_22);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_23 = L_22->get_UIs_8();
		NullCheck(L_23);
		int32_t L_24 = ((int32_t)12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = (L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_24));
		NullCheck(L_25);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_25, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[12].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_26 = __this->get_tutorialMain_4();
		NullCheck(L_26);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_27 = L_26->get_UIs_8();
		NullCheck(L_27);
		int32_t L_28 = ((int32_t)12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_29 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		NullCheck(L_29);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_30, /*hidden argument*/NULL);
		// tutorialMain.UIs[10].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_31 = __this->get_tutorialMain_4();
		NullCheck(L_31);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_32 = L_31->get_UIs_8();
		NullCheck(L_32);
		int32_t L_33 = ((int32_t)10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34 = (L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		NullCheck(L_34);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_35;
		L_35 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_35, /*hidden argument*/NULL);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_36 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_37 = L_36;
		NullCheck(L_37);
		int32_t L_38 = L_37->get_ClickNum_6();
		NullCheck(L_37);
		L_37->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1)));
		goto IL_01a9;
	}

IL_00e4:
	{
		// tutorialMain.TutorialText.text = "���� ����â�Դϴ�. �ι�° ��ư�� Ŭ���غ�����.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_39 = __this->get_tutorialMain_4();
		NullCheck(L_39);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_40 = L_39->get_TutorialText_4();
		NullCheck(L_40);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, _stringLiteralA85BC61BDF41A2A8C1BC22040FAACEA386A4ABED);
		// tutorialMain.UIs[9].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_41 = __this->get_tutorialMain_4();
		NullCheck(L_41);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_42 = L_41->get_UIs_8();
		NullCheck(L_42);
		int32_t L_43 = ((int32_t)9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		NullCheck(L_44);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_45;
		L_45 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_44, /*hidden argument*/NULL);
		NullCheck(L_45);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_45, /*hidden argument*/NULL);
		// tutorialMain.UIs[11].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_46 = __this->get_tutorialMain_4();
		NullCheck(L_46);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_47 = L_46->get_UIs_8();
		NullCheck(L_47);
		int32_t L_48 = ((int32_t)11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49 = (L_47)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		NullCheck(L_49);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_50;
		L_50 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_49, /*hidden argument*/NULL);
		NullCheck(L_50);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_50, /*hidden argument*/NULL);
		// tutorialMain.UIs[11].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_51 = __this->get_tutorialMain_4();
		NullCheck(L_51);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_52 = L_51->get_UIs_8();
		NullCheck(L_52);
		int32_t L_53 = ((int32_t)11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		NullCheck(L_54);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_54, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[12].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_55 = __this->get_tutorialMain_4();
		NullCheck(L_55);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_56 = L_55->get_UIs_8();
		NullCheck(L_56);
		int32_t L_57 = ((int32_t)12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_58 = (L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_58, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[12].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_59 = __this->get_tutorialMain_4();
		NullCheck(L_59);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_60 = L_59->get_UIs_8();
		NullCheck(L_60);
		int32_t L_61 = ((int32_t)12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_62 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		NullCheck(L_62);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_63;
		L_63 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_62, /*hidden argument*/NULL);
		NullCheck(L_63);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_63, /*hidden argument*/NULL);
		// tutorialMain.UIs[10].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_64 = __this->get_tutorialMain_4();
		NullCheck(L_64);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_65 = L_64->get_UIs_8();
		NullCheck(L_65);
		int32_t L_66 = ((int32_t)10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_67);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_68;
		L_68 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_67, /*hidden argument*/NULL);
		NullCheck(L_68);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_68, /*hidden argument*/NULL);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_69 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_70 = L_69;
		NullCheck(L_70);
		int32_t L_71 = L_70->get_ClickNum_6();
		NullCheck(L_70);
		L_70->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_71, (int32_t)1)));
		// tutorialMain.UButtonLimit = false;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_72 = __this->get_tutorialMain_4();
		NullCheck(L_72);
		L_72->set_UButtonLimit_29((bool)0);
	}

IL_01a9:
	{
	}

IL_01aa:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::Unit2Btn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_Unit2Btn_m03B731914F34A72C5AB9D0BFB99C80E91C3B46A8 (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral215298C9C7E31A7D9C8C7F84090BE6A6177B776B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8D2F151AA4A2233EB9D191780B1A709597FB75F5);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (tutorialMain.ButtonLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_ButtonLimit_28();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_008f;
		}
	}
	{
		// tutorialMain.UIs[11].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = L_3->get_UIs_8();
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.UIs[12].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_7 = __this->get_tutorialMain_4();
		NullCheck(L_7);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = L_7->get_UIs_8();
		NullCheck(L_8);
		int32_t L_9 = ((int32_t)12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.Units[1].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_11 = __this->get_tutorialMain_4();
		NullCheck(L_11);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = L_11->get_Units_7();
		NullCheck(L_12);
		int32_t L_13 = 1;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_15 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_16 = L_15;
		NullCheck(L_16);
		int32_t L_17 = L_16->get_ClickNum_6();
		NullCheck(L_16);
		L_16->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		// tutorialMain.Money.text = "800";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_18 = __this->get_tutorialMain_4();
		NullCheck(L_18);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = L_18->get_Money_5();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteral8D2F151AA4A2233EB9D191780B1A709597FB75F5);
		// tutorialMain.TutorialText.text = "�� ������ ���Ÿ� �����Դϴ�. ���ݿ� Ưȭ�� �������� ���ݷ��� �����ϴ�.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_20 = __this->get_tutorialMain_4();
		NullCheck(L_20);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = L_20->get_TutorialText_4();
		NullCheck(L_21);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, _stringLiteral215298C9C7E31A7D9C8C7F84090BE6A6177B776B);
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::Unit3Btn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_Unit3Btn_m28454EAE1BF30D7CC767B0A1EB0F8BD8CFE2AF8E (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E3C43A23EDB02C1CEBEC4480328D6E1ADD60F8B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA8BA3418CA754926A5FE70823DB66A3EBDEB7250);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (tutorialMain.ButtonLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_ButtonLimit_28();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_008f;
		}
	}
	{
		// tutorialMain.UIs[11].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = L_3->get_UIs_8();
		NullCheck(L_4);
		int32_t L_5 = ((int32_t)11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.UIs[12].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_7 = __this->get_tutorialMain_4();
		NullCheck(L_7);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = L_7->get_UIs_8();
		NullCheck(L_8);
		int32_t L_9 = ((int32_t)12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.Units[2].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_11 = __this->get_tutorialMain_4();
		NullCheck(L_11);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = L_11->get_Units_7();
		NullCheck(L_12);
		int32_t L_13 = 2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.Money.text = "550";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_15 = __this->get_tutorialMain_4();
		NullCheck(L_15);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = L_15->get_Money_5();
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteral1E3C43A23EDB02C1CEBEC4480328D6E1ADD60F8B);
		// tutorialMain.TutorialText.text = "�� ������ ���� �����Դϴ�. ����ɷ��� ��� ���� �������� ���� ������ �����Դϴ�.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_17 = __this->get_tutorialMain_4();
		NullCheck(L_17);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = L_17->get_TutorialText_4();
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteralA8BA3418CA754926A5FE70823DB66A3EBDEB7250);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_19 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_ClickNum_6();
		NullCheck(L_20);
		L_20->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
	}

IL_008f:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::BuildBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_BuildBtn_m4518EEDB44BB03A749A9506A0D42C4FD9E1D2434 (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C4D3CA2E0FE3CE9DBA5EA4730156FADEE31C1C2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (tutorialMain.BButtonLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_BButtonLimit_30();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00d8;
		}
	}
	{
		// tutorialMain.TutorialText.text = "�ǹ� ����â�Դϴ�. ù��° ��ư�� Ŭ���غ�����.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = L_3->get_TutorialText_4();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral2C4D3CA2E0FE3CE9DBA5EA4730156FADEE31C1C2);
		// tutorialMain.UIs[9].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_5 = __this->get_tutorialMain_4();
		NullCheck(L_5);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = L_5->get_UIs_8();
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_9;
		L_9 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_9, /*hidden argument*/NULL);
		// tutorialMain.UIs[11].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_10 = __this->get_tutorialMain_4();
		NullCheck(L_10);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = L_10->get_UIs_8();
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_14, /*hidden argument*/NULL);
		// tutorialMain.UIs[11].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_15 = __this->get_tutorialMain_4();
		NullCheck(L_15);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_16 = L_15->get_UIs_8();
		NullCheck(L_16);
		int32_t L_17 = ((int32_t)11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = (L_16)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
		NullCheck(L_18);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_18, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[13].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_19 = __this->get_tutorialMain_4();
		NullCheck(L_19);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = L_19->get_UIs_8();
		NullCheck(L_20);
		int32_t L_21 = ((int32_t)13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[13].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_23 = __this->get_tutorialMain_4();
		NullCheck(L_23);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = L_23->get_UIs_8();
		NullCheck(L_24);
		int32_t L_25 = ((int32_t)13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_27, /*hidden argument*/NULL);
		// tutorialMain.UIs[10].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_28 = __this->get_tutorialMain_4();
		NullCheck(L_28);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_29 = L_28->get_UIs_8();
		NullCheck(L_29);
		int32_t L_30 = ((int32_t)10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31 = (L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_30));
		NullCheck(L_31);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_31, /*hidden argument*/NULL);
		NullCheck(L_32);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_32, /*hidden argument*/NULL);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_33 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_34 = L_33;
		NullCheck(L_34);
		int32_t L_35 = L_34->get_ClickNum_6();
		NullCheck(L_34);
		L_34->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_35, (int32_t)1)));
		// tutorialMain.BButtonLimit = false;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_36 = __this->get_tutorialMain_4();
		NullCheck(L_36);
		L_36->set_BButtonLimit_30((bool)0);
	}

IL_00d8:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::Build1Btn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_Build1Btn_m12A544BAFE84826023FAA375CCF463BCE2119EFA (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC5CF427C4211EC600C4C03E0C219A6B8FF766187);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE35537EB2FA1778807CB10E1F27D6797DD9C200C);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (tutorialMain.ButtonLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_ButtonLimit_28();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_008d;
		}
	}
	{
		// tutorialMain.TutorialText.text = "�̷��� �ǹ��� �Ǽ��� �� �ֽ��ϴ�.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = L_3->get_TutorialText_4();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralC5CF427C4211EC600C4C03E0C219A6B8FF766187);
		// tutorialMain.Money.text = "250";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_5 = __this->get_tutorialMain_4();
		NullCheck(L_5);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = L_5->get_Money_5();
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, _stringLiteralE35537EB2FA1778807CB10E1F27D6797DD9C200C);
		// tutorialMain.Building.SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_7 = __this->get_tutorialMain_4();
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_Building_9();
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[11].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_9 = __this->get_tutorialMain_4();
		NullCheck(L_9);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = L_9->get_UIs_8();
		NullCheck(L_10);
		int32_t L_11 = ((int32_t)11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.UIs[13].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_13 = __this->get_tutorialMain_4();
		NullCheck(L_13);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = L_13->get_UIs_8();
		NullCheck(L_14);
		int32_t L_15 = ((int32_t)13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_17 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_18 = L_17;
		NullCheck(L_18);
		int32_t L_19 = L_18->get_ClickNum_6();
		NullCheck(L_18);
		L_18->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
	}

IL_008d:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::Unit3DBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_Unit3DBtn_mC20F5ACCE7DC75E0F91D13840341E9DCF9434DB3 (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27309E85B9D111AF41686C4CC4BCE1C95F3800DC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCB41E595576DDE3B0131E00FA2A479CD21C45D2A);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	{
		// if (tutorialMain.ButtonLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_ButtonLimit_28();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00c9;
		}
	}
	{
		// if (tutorialMain.UnitSecond)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		bool L_4 = L_3->get_UnitSecond_35();
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0073;
		}
	}
	{
		// tutorialMain.TutorialText.text = "���� ��ư�� Ŭ���غ�����.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_6 = __this->get_tutorialMain_4();
		NullCheck(L_6);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_7 = L_6->get_TutorialText_4();
		NullCheck(L_7);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_7, _stringLiteral27309E85B9D111AF41686C4CC4BCE1C95F3800DC);
		// tutorialMain.UIs[14].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_8 = __this->get_tutorialMain_4();
		NullCheck(L_8);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = L_8->get_UIs_8();
		NullCheck(L_9);
		int32_t L_10 = ((int32_t)14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[15].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_12 = __this->get_tutorialMain_4();
		NullCheck(L_12);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = L_12->get_UIs_8();
		NullCheck(L_13);
		int32_t L_14 = ((int32_t)15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UnitLimit = false;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_16 = __this->get_tutorialMain_4();
		NullCheck(L_16);
		L_16->set_UnitLimit_33((bool)0);
		goto IL_00c8;
	}

IL_0073:
	{
		// tutorialMain.TutorialText.text = "���� ����â�Դϴ�. ������ ���ɰ� ���� ���¸� �� �� �ְ�, ���ֿ��� �̵�, ���� ������ ���� �� �ֽ��ϴ�.\n�ǹ��� ���������� Ŭ���ϸ� ����â�� ��Ÿ���ϴ�.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_17 = __this->get_tutorialMain_4();
		NullCheck(L_17);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_18 = L_17->get_TutorialText_4();
		NullCheck(L_18);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, _stringLiteralCB41E595576DDE3B0131E00FA2A479CD21C45D2A);
		// tutorialMain.UIs[14].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_19 = __this->get_tutorialMain_4();
		NullCheck(L_19);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_20 = L_19->get_UIs_8();
		NullCheck(L_20);
		int32_t L_21 = ((int32_t)14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_21));
		NullCheck(L_22);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[15].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_23 = __this->get_tutorialMain_4();
		NullCheck(L_23);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = L_23->get_UIs_8();
		NullCheck(L_24);
		int32_t L_25 = ((int32_t)15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_26, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_27 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_28 = L_27;
		NullCheck(L_28);
		int32_t L_29 = L_28->get_ClickNum_6();
		NullCheck(L_28);
		L_28->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_29, (int32_t)1)));
	}

IL_00c8:
	{
	}

IL_00c9:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::MvBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_MvBtn_mF319353C67DEE0CA78A2350269F550EA1C53B6E6 (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral668D1F38B8DF1A134841D97B018F1F64BAAC5BDE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (tutorialMain.UnitLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_UnitLimit_33();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0088;
		}
	}
	{
		// tutorialMain.TutorialText.text = "���� �̵� �̴ϸ��Դϴ�. ������ �̵��� ���� ���� �� �ֽ��ϴ�. ǥ�õ� �κ��� Ŭ���غ�����.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = L_3->get_TutorialText_4();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral668D1F38B8DF1A134841D97B018F1F64BAAC5BDE);
		// tutorialMain.UIs[14].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_5 = __this->get_tutorialMain_4();
		NullCheck(L_5);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = L_5->get_UIs_8();
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.UIs[15].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_9 = __this->get_tutorialMain_4();
		NullCheck(L_9);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = L_9->get_UIs_8();
		NullCheck(L_10);
		int32_t L_11 = ((int32_t)15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.UIs[11].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_13 = __this->get_tutorialMain_4();
		NullCheck(L_13);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = L_13->get_UIs_8();
		NullCheck(L_14);
		int32_t L_15 = ((int32_t)11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[16].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_17 = __this->get_tutorialMain_4();
		NullCheck(L_17);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_18 = L_17->get_UIs_8();
		NullCheck(L_18);
		int32_t L_19 = ((int32_t)16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UnitLimit = false;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_21 = __this->get_tutorialMain_4();
		NullCheck(L_21);
		L_21->set_UnitLimit_33((bool)0);
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::LocateBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_LocateBtn_mE438E081A1921FA522A529B14924A4E3DC7B741E (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A6F36C5623823FBE7C0B284E87946BFC57A02C9);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tutorialMain.TutorialText.text = "�̵��� ���� ���õǾ����ϴ�. ���� �ϴ��� ���� ��ư�� �����ּ���.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = L_0->get_TutorialText_4();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral0A6F36C5623823FBE7C0B284E87946BFC57A02C9);
		// panelColor = tutorialMain.UIs[17].GetComponent<Image>().color;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_2 = __this->get_tutorialMain_4();
		NullCheck(L_2);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = L_2->get_UIs_8();
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6;
		L_6 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_5, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		NullCheck(L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = VirtFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_6);
		__this->set_panelColor_5(L_7);
		// tutorialMain.UIs[17].GetComponent<Image>().color = new Color(0, 0, 255, 255f);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_8 = __this->get_tutorialMain_4();
		NullCheck(L_8);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = L_8->get_UIs_8();
		NullCheck(L_9);
		int32_t L_10 = ((int32_t)17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_12;
		L_12 = GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710(L_11, /*hidden argument*/GameObject_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m16ABC1D7B4E804984517841F8D26E9C769FAE710_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_13;
		memset((&L_13), 0, sizeof(L_13));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_13), (0.0f), (0.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_12, L_13);
		// tutorialMain.BtnClicked = true;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_14 = __this->get_tutorialMain_4();
		NullCheck(L_14);
		L_14->set_BtnClicked_34((bool)1);
		// tutorialMain.UnitLimit = true;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_15 = __this->get_tutorialMain_4();
		NullCheck(L_15);
		L_15->set_UnitLimit_33((bool)1);
		// }
		return;
	}
}
// System.Void Tutorial_Btn::MvokBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_MvokBtn_mDD2173F26229B3809E31902FD331F780BBFCB7A6 (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralABAAEA0B579DAF5DC5CF3CE98CBB4FE2FBBD06CE);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (tutorialMain.UnitLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_UnitLimit_33();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_00c1;
		}
	}
	{
		// tutorialMain.TutorialText.text = "������ �̵��Ǿ����ϴ�.\nƩ�丮�� �߿��� ȭ���� �ڵ����� �̵��ϳ� ���� ���ӿ����� ������ Ŭ���Ͽ� �̵��Ͽ��� �մϴ�.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = L_3->get_TutorialText_4();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralABAAEA0B579DAF5DC5CF3CE98CBB4FE2FBBD06CE);
		// tutorialMain.CameraView.position = new Vector3(-3, 6, -12);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_5 = __this->get_tutorialMain_4();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6 = L_5->get_CameraView_10();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		memset((&L_7), 0, sizeof(L_7));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_7), (-3.0f), (6.0f), (-12.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_7, /*hidden argument*/NULL);
		// tutorialMain.UIs[11].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_8 = __this->get_tutorialMain_4();
		NullCheck(L_8);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = L_8->get_UIs_8();
		NullCheck(L_9);
		int32_t L_10 = ((int32_t)11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.UIs[16].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_12 = __this->get_tutorialMain_4();
		NullCheck(L_12);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_13 = L_12->get_UIs_8();
		NullCheck(L_13);
		int32_t L_14 = ((int32_t)16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.Units[0].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_16 = __this->get_tutorialMain_4();
		NullCheck(L_16);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_17 = L_16->get_Units_7();
		NullCheck(L_17);
		int32_t L_18 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.Units[3].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_20 = __this->get_tutorialMain_4();
		NullCheck(L_20);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = L_20->get_Units_7();
		NullCheck(L_21);
		int32_t L_22 = 3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.ButtonLimit = false;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_24 = __this->get_tutorialMain_4();
		NullCheck(L_24);
		L_24->set_ButtonLimit_28((bool)0);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_25 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_26 = L_25;
		NullCheck(L_26);
		int32_t L_27 = L_26->get_ClickNum_6();
		NullCheck(L_26);
		L_26->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_27, (int32_t)1)));
	}

IL_00c1:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::MinimapBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_MinimapBtn_m80E2DE73C1086648AA1327BEF4DB40951737DD38 (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (tutorialMain.ButtonLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_ButtonLimit_28();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// tutorialMain.MinimapBtn = true;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		L_3->set_MinimapBtn_17((bool)1);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::Minimap2Btn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_Minimap2Btn_mF561B99AD19DC1C2635C848585710DA22D6F4284 (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (tutorialMain.ButtonLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_ButtonLimit_28();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// tutorialMain.Minimap2Btn = true;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		L_3->set_Minimap2Btn_18((bool)1);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::Minimap3Btn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_Minimap3Btn_mE4BE2B718863006459A323803EACA0809EE47084 (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (tutorialMain.ButtonLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_ButtonLimit_28();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// tutorialMain.Minimap3Btn = true;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		L_3->set_Minimap3Btn_19((bool)1);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::TurnNextBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_TurnNextBtn_m70378A80A776EC6F91B23D89E68F354C87DBDB7B (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CC624AE4B5D092B52D4D47624F10425C889A134);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7C011263D462D1A33419CF3191B76FA1580F9465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral95BAF84F68FDD94F61BD0184732913D9CDAADC25);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (tutorialMain.ButtonLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_ButtonLimit_28();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_010c;
		}
	}
	{
		// if (tutorialMain.TurnNext)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		bool L_4 = L_3->get_TurnNext_36();
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_010b;
		}
	}
	{
		// switch(turnnum)
		int32_t L_6 = __this->get_turnnum_6();
		V_3 = L_6;
		int32_t L_7 = V_3;
		V_2 = L_7;
		int32_t L_8 = V_2;
		switch (L_8)
		{
			case 0:
			{
				goto IL_0047;
			}
			case 1:
			{
				goto IL_0083;
			}
			case 2:
			{
				goto IL_00a9;
			}
		}
	}
	{
		goto IL_010a;
	}

IL_0047:
	{
		// tutorialMain.TutorialText.text = "1�� Ŭ���ϼ̽��ϴ�. �ѹ� �� Ŭ���ϼ���.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_9 = __this->get_tutorialMain_4();
		NullCheck(L_9);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_10 = L_9->get_TutorialText_4();
		NullCheck(L_10);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteral7C011263D462D1A33419CF3191B76FA1580F9465);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_11 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_12 = L_11;
		NullCheck(L_12);
		int32_t L_13 = L_12->get_ClickNum_6();
		NullCheck(L_12);
		L_12->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// turnnum++;
		int32_t L_14 = __this->get_turnnum_6();
		__this->set_turnnum_6(((int32_t)il2cpp_codegen_add((int32_t)L_14, (int32_t)1)));
		// break;
		goto IL_010a;
	}

IL_0083:
	{
		// tutorialMain.TutorialText.text = "2�� Ŭ���ϼ̽��ϴ�. �ѹ� �� Ŭ���ϼ���.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_15 = __this->get_tutorialMain_4();
		NullCheck(L_15);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_16 = L_15->get_TutorialText_4();
		NullCheck(L_16);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, _stringLiteral1CC624AE4B5D092B52D4D47624F10425C889A134);
		// turnnum++;
		int32_t L_17 = __this->get_turnnum_6();
		__this->set_turnnum_6(((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1)));
		// break;
		goto IL_010a;
	}

IL_00a9:
	{
		// tutorialMain.TutorialText.text = "3�� Ŭ���ϼ̽��ϴ�. ���� �� ������ ���ɵǾ����ϴ�.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_18 = __this->get_tutorialMain_4();
		NullCheck(L_18);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_19 = L_18->get_TutorialText_4();
		NullCheck(L_19);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_19, _stringLiteral95BAF84F68FDD94F61BD0184732913D9CDAADC25);
		// tutorialMain.UIs[18].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_20 = __this->get_tutorialMain_4();
		NullCheck(L_20);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_21 = L_20->get_UIs_8();
		NullCheck(L_21);
		int32_t L_22 = ((int32_t)18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_23, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[19].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_24 = __this->get_tutorialMain_4();
		NullCheck(L_24);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_25 = L_24->get_UIs_8();
		NullCheck(L_25);
		int32_t L_26 = ((int32_t)19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27 = (L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_26));
		NullCheck(L_27);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_27, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.TurnNext = false;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_28 = __this->get_tutorialMain_4();
		NullCheck(L_28);
		L_28->set_TurnNext_36((bool)0);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_29 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_30 = L_29;
		NullCheck(L_30);
		int32_t L_31 = L_30->get_ClickNum_6();
		NullCheck(L_30);
		L_30->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_31, (int32_t)1)));
		// break;
		goto IL_010a;
	}

IL_010a:
	{
	}

IL_010b:
	{
	}

IL_010c:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::SettingBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_SettingBtn_mE6CC33FC54D3720C07F8AC5C6F888ADB06B312AD (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if (tutorialMain.ButtonLimit)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_ButtonLimit_28();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001c;
		}
	}
	{
		// tutorialMain.SettingBtn = true;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		L_3->set_SettingBtn_21((bool)1);
	}

IL_001c:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::Eunit3DBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_Eunit3DBtn_m9FAB4DBDDECF83F23A7F20622B72B2AD0A6FDF68 (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20C207F1DCF8EDBCA675E3ED9D460D3068E013F8);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (tutorialMain.UnitSecond)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_UnitSecond_35();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0094;
		}
	}
	{
		// tutorialMain.TutorialText.text = "�̷��� ������ ������ �� �ֽ��ϴ�.\n���� ���ӿ����� ü���� ��� �����Ǹ� ������ ������ϴ�.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = L_3->get_TutorialText_4();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteral20C207F1DCF8EDBCA675E3ED9D460D3068E013F8);
		// tutorialMain.Units[4].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_5 = __this->get_tutorialMain_4();
		NullCheck(L_5);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = L_5->get_Units_7();
		NullCheck(L_6);
		int32_t L_7 = 4;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.UIs[14].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_9 = __this->get_tutorialMain_4();
		NullCheck(L_9);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = L_9->get_UIs_8();
		NullCheck(L_10);
		int32_t L_11 = ((int32_t)14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = (L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.UIs[15].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_13 = __this->get_tutorialMain_4();
		NullCheck(L_13);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_14 = L_13->get_UIs_8();
		NullCheck(L_14);
		int32_t L_15 = ((int32_t)15);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_16);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_16, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.ButtonLimit = false;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_17 = __this->get_tutorialMain_4();
		NullCheck(L_17);
		L_17->set_ButtonLimit_28((bool)0);
		// tutorialMain.UnitSecond = false;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_18 = __this->get_tutorialMain_4();
		NullCheck(L_18);
		L_18->set_UnitSecond_35((bool)0);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_19 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_20 = L_19;
		NullCheck(L_20);
		int32_t L_21 = L_20->get_ClickNum_6();
		NullCheck(L_20);
		L_20->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1)));
	}

IL_0094:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::AtkBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_AtkBtn_m156A414358297DB88A55F75C2622FA4EE667CF03 (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB46B822F32DC9E073738D391D116934B7A559AFF);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if (tutorialMain.UnitSecond)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_UnitSecond_35();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0028;
		}
	}
	{
		// tutorialMain.TutorialText.text = "�� ������ Ŭ���غ�����.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = L_3->get_TutorialText_4();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralB46B822F32DC9E073738D391D116934B7A559AFF);
	}

IL_0028:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::DisicionBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_DisicionBtn_mD185E4D01F46DB08AF8C4EC61CD0BB2760C1B4D0 (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC6E10020534D2DA9C2B8282DF59D5B17D09A6CD);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(tutorialMain.Dicision)
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		bool L_1 = L_0->get_Dicision_37();
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0050;
		}
	}
	{
		// tutorialMain.TutorialText.text = "����� ȭ���Դϴ�.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_3 = __this->get_tutorialMain_4();
		NullCheck(L_3);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = L_3->get_TutorialText_4();
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, _stringLiteralDC6E10020534D2DA9C2B8282DF59D5B17D09A6CD);
		// tutorialMain.UIs[21].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_5 = __this->get_tutorialMain_4();
		NullCheck(L_5);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_6 = L_5->get_UIs_8();
		NullCheck(L_6);
		int32_t L_7 = ((int32_t)21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_8);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_8, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_9 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_10 = L_9;
		NullCheck(L_10);
		int32_t L_11 = L_10->get_ClickNum_6();
		NullCheck(L_10);
		L_10->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
	}

IL_0050:
	{
		// }
		return;
	}
}
// System.Void Tutorial_Btn::DisicionSltBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn_DisicionSltBtn_m322B728E0B9C67B0B25B98FD6AC1511B0E7B781C (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1DABCEB84DD850410BB8C8AAEA6ABB492FB56097);
		s_Il2CppMethodInitialized = true;
	}
	{
		// tutorialMain.TutorialText.text = "������� �����ϼ̽��ϴ�. �� ȭ���� ������ ������� ȿ���� �˷��ִ� ȭ���Դϴ�.\n\nŬ���ؼ� ����ϼ���.";
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_0 = __this->get_tutorialMain_4();
		NullCheck(L_0);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = L_0->get_TutorialText_4();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral1DABCEB84DD850410BB8C8AAEA6ABB492FB56097);
		// tutorialMain.UIs[21].SetActive(false);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_2 = __this->get_tutorialMain_4();
		NullCheck(L_2);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_3 = L_2->get_UIs_8();
		NullCheck(L_3);
		int32_t L_4 = ((int32_t)21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// tutorialMain.UIs[11].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_6 = __this->get_tutorialMain_4();
		NullCheck(L_6);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_7 = L_6->get_UIs_8();
		NullCheck(L_7);
		int32_t L_8 = ((int32_t)11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[22].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_10 = __this->get_tutorialMain_4();
		NullCheck(L_10);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_11 = L_10->get_UIs_8();
		NullCheck(L_11);
		int32_t L_12 = ((int32_t)22);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[9].SetActive(true);
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_14 = __this->get_tutorialMain_4();
		NullCheck(L_14);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_15 = L_14->get_UIs_8();
		NullCheck(L_15);
		int32_t L_16 = ((int32_t)9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)1, /*hidden argument*/NULL);
		// tutorialMain.UIs[9].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_18 = __this->get_tutorialMain_4();
		NullCheck(L_18);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_19 = L_18->get_UIs_8();
		NullCheck(L_19);
		int32_t L_20 = ((int32_t)9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = (L_19)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_22;
		L_22 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_22, /*hidden argument*/NULL);
		// tutorialMain.UIs[10].transform.SetAsLastSibling();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_23 = __this->get_tutorialMain_4();
		NullCheck(L_23);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_24 = L_23->get_UIs_8();
		NullCheck(L_24);
		int32_t L_25 = ((int32_t)10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_26);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_26, /*hidden argument*/NULL);
		NullCheck(L_27);
		Transform_SetAsLastSibling_m2AF5610CFC845BB1121152BAB38A1251D210A187(L_27, /*hidden argument*/NULL);
		// tutorialMain.ClickNum++;
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_28 = __this->get_tutorialMain_4();
		TutorialMain_tF65A97FF467A10F3B67B498AE2DFA8D80D5255B8 * L_29 = L_28;
		NullCheck(L_29);
		int32_t L_30 = L_29->get_ClickNum_6();
		NullCheck(L_29);
		L_29->set_ClickNum_6(((int32_t)il2cpp_codegen_add((int32_t)L_30, (int32_t)1)));
		// }
		return;
	}
}
// System.Void Tutorial_Btn::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tutorial_Btn__ctor_m7427BFB7BBBFEAC4F13FE9AA1429949620067A1E (Tutorial_Btn_t8E2985CF61E25B795ECC4509146DFF148169B75D * __this, const RuntimeMethod* method)
{
	{
		// int turnnum = 0;
		__this->set_turnnum_6(0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void UIManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Start_mAA4B371DC406146E84A9D8803B9C861939B2E04E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B51BAE039244842E3065F8154A01FBC21068CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3014CCD1355B451A5EFD2F95C52FDE097DB4EACA);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_1;
	memset((&V_1), 0, sizeof(V_1));
	bool V_2 = false;
	{
		// if(SceneManager.GetActiveScene().name == "1_Select")
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_0;
		L_0 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_1 = L_0;
		String_t* L_1;
		L_1 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral0B51BAE039244842E3065F8154A01FBC21068CAE, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0030;
		}
	}
	{
		// nextButton.GetComponent<Button>().interactable = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = __this->get_nextButton_7();
		NullCheck(L_4);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5;
		L_5 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6(L_4, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_m23CBF33EAAEEC18E7B5AA90422BB1E4781B774A6_RuntimeMethod_var);
		NullCheck(L_5);
		Selectable_set_interactable_mE6F57D33A9E0484377174D0F490C4372BF7F0D40(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0030:
	{
		// if(SceneManager.GetActiveScene().name == "3_Play")
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_6;
		L_6 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_1 = L_6;
		String_t* L_7;
		L_7 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_1), /*hidden argument*/NULL);
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral3014CCD1355B451A5EFD2F95C52FDE097DB4EACA, /*hidden argument*/NULL);
		V_2 = L_8;
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0078;
		}
	}
	{
		// SetReadyState();
		UIManager_SetReadyState_mA2F457C07AB4172AD5FFCDC85A70C7C5AAD67335(__this, /*hidden argument*/NULL);
		// settingButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = __this->get_settingButton_49();
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// exitButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_12 = __this->get_exitButton_48();
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)0, /*hidden argument*/NULL);
	}

IL_0078:
	{
		// }
		return;
	}
}
// System.Void UIManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Update_m8A7C5DF1B797CFD6937FD6961AB9CC7B1A90D385 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0B51BAE039244842E3065F8154A01FBC21068CAE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3014CCD1355B451A5EFD2F95C52FDE097DB4EACA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral50F4A089AD1D3A0BDC74C012C4618FA9243666D2);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  V_2;
	memset((&V_2), 0, sizeof(V_2));
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	{
		// if(Input.GetKey(KeyCode.Escape))
		bool L_0;
		L_0 = Input_GetKey_mFDD450A4C61F2930928B12287FFBD1ACCB71E429(((int32_t)27), /*hidden argument*/NULL);
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_010a;
		}
	}
	{
		// if(SceneManager.GetActiveScene().name == "0_Title")
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_2;
		L_2 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_2 = L_2;
		String_t* L_3;
		L_3 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteral50F4A089AD1D3A0BDC74C012C4618FA9243666D2, /*hidden argument*/NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0038;
		}
	}
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		goto IL_0109;
	}

IL_0038:
	{
		// else if(SceneManager.GetActiveScene().name == "1_Select")
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_6;
		L_6 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_2 = L_6;
		String_t* L_7;
		L_7 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral0B51BAE039244842E3065F8154A01FBC21068CAE, /*hidden argument*/NULL);
		V_3 = L_8;
		bool L_9 = V_3;
		if (!L_9)
		{
			goto IL_009e;
		}
	}
	{
		// if(ChooseforcePanel.gameObject.activeSelf)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = __this->get_ChooseforcePanel_5();
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		bool L_12;
		L_12 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_11, /*hidden argument*/NULL);
		V_4 = L_12;
		bool L_13 = V_4;
		if (!L_13)
		{
			goto IL_0075;
		}
	}
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		goto IL_009b;
	}

IL_0075:
	{
		// ChooseforcePanel.gameObject.SetActive(true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_14 = __this->get_ChooseforcePanel_5();
		NullCheck(L_14);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_15;
		L_15 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_14, /*hidden argument*/NULL);
		NullCheck(L_15);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_15, (bool)1, /*hidden argument*/NULL);
		// ChoosemapPanel.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_16 = __this->get_ChoosemapPanel_6();
		NullCheck(L_16);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17;
		L_17 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_16, /*hidden argument*/NULL);
		NullCheck(L_17);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_17, (bool)0, /*hidden argument*/NULL);
	}

IL_009b:
	{
		goto IL_0109;
	}

IL_009e:
	{
		// else if(SceneManager.GetActiveScene().name == "3_Play")
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE  L_18;
		L_18 = SceneManager_GetActiveScene_mB9A5037FFB576B2432D0BFEF6A161B7C4C1921A4(/*hidden argument*/NULL);
		V_2 = L_18;
		String_t* L_19;
		L_19 = Scene_get_name_m38F195D7CA6417FED310C23E4D8E86150C7835B8((Scene_t5495AD2FDC587DB2E94D9BDE2B85868BFB9A92EE *)(&V_2), /*hidden argument*/NULL);
		bool L_20;
		L_20 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_19, _stringLiteral3014CCD1355B451A5EFD2F95C52FDE097DB4EACA, /*hidden argument*/NULL);
		V_5 = L_20;
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0109;
		}
	}
	{
		// if(state == State.Idle)
		int32_t L_22 = __this->get_state_52();
		V_6 = (bool)((((int32_t)L_22) == ((int32_t)2))? 1 : 0);
		bool L_23 = V_6;
		if (!L_23)
		{
			goto IL_00d6;
		}
	}
	{
		// ExitButtonClick();
		UIManager_ExitButtonClick_mAA7E13AE42872DBE34B6CB99855FD1B08BDCE0E1(__this, /*hidden argument*/NULL);
		goto IL_0108;
	}

IL_00d6:
	{
		// else if(state == State.Active)
		int32_t L_24 = __this->get_state_52();
		V_7 = (bool)((((int32_t)L_24) == ((int32_t)3))? 1 : 0);
		bool L_25 = V_7;
		if (!L_25)
		{
			goto IL_00f0;
		}
	}
	{
		// SetIdleState();
		UIManager_SetIdleState_m6EEB1DAF0CFC273B743C4E33A0C7607D8099E3D9(__this, /*hidden argument*/NULL);
		goto IL_0108;
	}

IL_00f0:
	{
		// else if(state == State.Attack)
		int32_t L_26 = __this->get_state_52();
		V_8 = (bool)((((int32_t)L_26) == ((int32_t)4))? 1 : 0);
		bool L_27 = V_8;
		if (!L_27)
		{
			goto IL_0108;
		}
	}
	{
		// OffReadyAttack();
		UIManager_OffReadyAttack_m815A58A3D73239FDF2B3BAD855790A1321E71581(__this, /*hidden argument*/NULL);
	}

IL_0108:
	{
	}

IL_0109:
	{
	}

IL_010a:
	{
		// }
		return;
	}
}
// System.Void UIManager::NewgameBtnClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_NewgameBtnClick_m419FA94F4A864F97DA380E0558DC1D7760360AA3 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.audioManager.ButtonClickSound();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_0);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_1 = L_0->get_audioManager_6();
		NullCheck(L_1);
		AudioManager_ButtonClickSound_m5CE6ACD5BC54EDABA5314ACA5C85479FFA976D52(L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(1);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::ExitGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ExitGame_m6A05502237B93338110FB1CF19B094D57B1CCDB8 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// GameManager.instance.audioManager.ButtonClickSound();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_0);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_1 = L_0->get_audioManager_6();
		NullCheck(L_1);
		AudioManager_ButtonClickSound_m5CE6ACD5BC54EDABA5314ACA5C85479FFA976D52(L_1, /*hidden argument*/NULL);
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::Tutorial()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_Tutorial_m57D480C7F3DE8F0EE6E890D471482CBDF65E1F5F (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameManager.instance.audioManager.ButtonClickSound();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_0);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_1 = L_0->get_audioManager_6();
		NullCheck(L_1);
		AudioManager_ButtonClickSound_m5CE6ACD5BC54EDABA5314ACA5C85479FFA976D52(L_1, /*hidden argument*/NULL);
		// SceneManager.LoadScene(4);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(4, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::GoTitle()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_GoTitle_m1BBE043D6C07CEA64AA05E0FE3BD33A944BB235F (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// GameManager.instance.audioManager.ButtonClickSound();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_0);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_1 = L_0->get_audioManager_6();
		NullCheck(L_1);
		AudioManager_ButtonClickSound_m5CE6ACD5BC54EDABA5314ACA5C85479FFA976D52(L_1, /*hidden argument*/NULL);
		// if(GameManager.instance.audioManager.backmusic.clip == GameManager.instance.audioManager.title.clip)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2;
		L_2 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_2);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_3 = L_2->get_audioManager_6();
		NullCheck(L_3);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_4 = L_3->get_backmusic_6();
		NullCheck(L_4);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_5;
		L_5 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_4, /*hidden argument*/NULL);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_6;
		L_6 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_6);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_7 = L_6->get_audioManager_6();
		NullCheck(L_7);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_8 = L_7->get_title_8();
		NullCheck(L_8);
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_9;
		L_9 = AudioSource_get_clip_mE4454E38D2C0A4C8CC780A435FC1DBD4D47D16DC(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_10;
		L_10 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_5, L_9, /*hidden argument*/NULL);
		V_0 = L_10;
		bool L_11 = V_0;
		if (!L_11)
		{
			goto IL_0054;
		}
	}
	{
		// GameManager.instance.audioManager.StartTitleBGM();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_12;
		L_12 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_12);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_13 = L_12->get_audioManager_6();
		NullCheck(L_13);
		AudioManager_StartTitleBGM_m30C37DBE842B5F30B15328EC940D94A0A5E28397(L_13, /*hidden argument*/NULL);
	}

IL_0054:
	{
		// SceneManager.LoadScene(0);
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m5550E6368A6D0E37DACEDA3C5E4BA331836BC3C5(0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::ShowForcePage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowForcePage_mFA00411DABA38BA61B238245294001E61F446BAF (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// GameManager.instance.audioManager.ButtonClickSound();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_0);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_1 = L_0->get_audioManager_6();
		NullCheck(L_1);
		AudioManager_ButtonClickSound_m5CE6ACD5BC54EDABA5314ACA5C85479FFA976D52(L_1, /*hidden argument*/NULL);
		// ChooseforcePanel.gameObject.SetActive(true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_ChooseforcePanel_5();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// ChoosemapPanel.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_ChoosemapPanel_6();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::SelectForce()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SelectForce_mCA1DEBB92A7F0637BB2D0AB9067D36BE35820689 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// GameManager.instance.audioManager.ButtonClickSound();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_0);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_1 = L_0->get_audioManager_6();
		NullCheck(L_1);
		AudioManager_ButtonClickSound_m5CE6ACD5BC54EDABA5314ACA5C85479FFA976D52(L_1, /*hidden argument*/NULL);
		// ChooseforcePanel.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2 = __this->get_ChooseforcePanel_5();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)0, /*hidden argument*/NULL);
		// ChoosemapPanel.gameObject.SetActive(true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_ChoosemapPanel_6();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::SettingButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SettingButtonClick_mE12C6624C844BEF22538D555D9F555C518FE227E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// SetActiveState();
		UIManager_SetActiveState_mDCB7BD75D22965F29A83ACE9B02619113E1CA855(__this, /*hidden argument*/NULL);
		// close_window.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_close_window_8();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// setting_window.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_setting_window_11();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::ExitButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ExitButtonClick_mAA7E13AE42872DBE34B6CB99855FD1B08BDCE0E1 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// SetActiveState();
		UIManager_SetActiveState_mDCB7BD75D22965F29A83ACE9B02619113E1CA855(__this, /*hidden argument*/NULL);
		// close_window.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_close_window_8();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// exit_window.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_exit_window_10();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::UnitButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UnitButtonClick_m2DB2B574662373240807E4F32975131051905D3B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// SetActiveState();
		UIManager_SetActiveState_mDCB7BD75D22965F29A83ACE9B02619113E1CA855(__this, /*hidden argument*/NULL);
		// close_window.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_close_window_8();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// unit_window.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_unit_window_14();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::BuildButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_BuildButtonClick_mE77E0F4DAB4F32302404E40F09E731499B607877 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// SetActiveState();
		UIManager_SetActiveState_mDCB7BD75D22965F29A83ACE9B02619113E1CA855(__this, /*hidden argument*/NULL);
		// close_window.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_close_window_8();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// build_window.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_build_window_9();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::MinimapButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_MinimapButtonClick_m8F0DE98B0A37CBC702D5E3DF20E218678AA68555 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// SetActiveState();
		UIManager_SetActiveState_mDCB7BD75D22965F29A83ACE9B02619113E1CA855(__this, /*hidden argument*/NULL);
		// close_window.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_close_window_8();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// movecameramp_window.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_movecameramp_window_13();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::ShowDecisionEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowDecisionEffect_m2E923593077EE73BC88A613AD0C61934D6ECA867 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// close_window.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_close_window_8();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// decision_window.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_decision_window_15();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::MoveButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_MoveButtonClick_mE4C8EA3E201748020498B08878A01C6345F7D4BC (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// state = State.Active;
		__this->set_state_52(3);
		// close_window.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_close_window_8();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// movemap_window.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_movemap_window_12();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// unitInfo_panel.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_unitInfo_panel_27();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// unitButtonPanel.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_unitButtonPanel_35();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// UISetActiveFalse();
		UIManager_UISetActiveFalse_m2FB90DF2D505792C528F133270CE27A5D4D3C9B3(__this, /*hidden argument*/NULL);
		// SearchWay();
		UIManager_SearchWay_mA4FC7A45F9018A697D1BB7145F9E1212DC0D74BA(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::SetReadyState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetReadyState_mA2F457C07AB4172AD5FFCDC85A70C7C5AAD67335 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// state = State.Ready;
		__this->set_state_52(0);
		// UISetActiveFalse();
		UIManager_UISetActiveFalse_m2FB90DF2D505792C528F133270CE27A5D4D3C9B3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::SetIdleState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetIdleState_m6EEB1DAF0CFC273B743C4E33A0C7607D8099E3D9 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// state = State.Idle;
		__this->set_state_52(2);
		// SetActiveFalseWindow();
		UIManager_SetActiveFalseWindow_mF2DF3F78683C8A1D252FDDC8A0022629F862C82E(__this, /*hidden argument*/NULL);
		// UISetActiveTrue();
		UIManager_UISetActiveTrue_mC291193171C6E700B6D9CB24165750E40EE0D0E7(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::SetActiveState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetActiveState_mDCB7BD75D22965F29A83ACE9B02619113E1CA855 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// state = State.Active;
		__this->set_state_52(3);
		// UISetActiveFalse();
		UIManager_UISetActiveFalse_m2FB90DF2D505792C528F133270CE27A5D4D3C9B3(__this, /*hidden argument*/NULL);
		// InfoWindowReset();
		UIManager_InfoWindowReset_m50C6C71BE44EA7444B26460FF0789444FC237C74(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::SetAttackState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetAttackState_m731CE6AE89C1876FF9D93566D0795FF3945D0CBF (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// state = State.Attack;
		__this->set_state_52(4);
		// UISetActiveFalse();
		UIManager_UISetActiveFalse_m2FB90DF2D505792C528F133270CE27A5D4D3C9B3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::SetEndState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetEndState_mD5754CF93D940F983A119DF0851B383EBADBA83F (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// state = State.End;
		__this->set_state_52(5);
		// UISetActiveFalse();
		UIManager_UISetActiveFalse_m2FB90DF2D505792C528F133270CE27A5D4D3C9B3(__this, /*hidden argument*/NULL);
		// gameover.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_gameover_16();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::SetNextState()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetNextState_m46D355B0C784AAF76A082F5504BA7425E72E8555 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// state = State.Next;
		__this->set_state_52(1);
		// UISetActiveFalse();
		UIManager_UISetActiveFalse_m2FB90DF2D505792C528F133270CE27A5D4D3C9B3(__this, /*hidden argument*/NULL);
		// InfoWindowReset();
		UIManager_InfoWindowReset_m50C6C71BE44EA7444B26460FF0789444FC237C74(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::SetActiveFalseWindow()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SetActiveFalseWindow_mF2DF3F78683C8A1D252FDDC8A0022629F862C82E (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA);
		s_Il2CppMethodInitialized = true;
	}
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// window = GameObject.FindGameObjectsWithTag("window");
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0;
		L_0 = GameObject_FindGameObjectsWithTag_m0948320611DC82590D59A36D1C57155B1B6CE186(_stringLiteralCEA0ED0066879A12EF7428466404FD5A318EEDDA, /*hidden argument*/NULL);
		__this->set_window_26(L_0);
		// foreach(GameObject w in window)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = __this->get_window_26();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0034;
	}

IL_001d:
	{
		// foreach(GameObject w in window)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// w.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = V_2;
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0034:
	{
		// foreach(GameObject w in window)
		int32_t L_9 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_001d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UIManager::UISetActiveFalse()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UISetActiveFalse_m2FB90DF2D505792C528F133270CE27A5D4D3C9B3 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// foreach(GameObject u in ui)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_ui_17();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0024;
	}

IL_000d:
	{
		// foreach(GameObject u in ui)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// u.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_2;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)0, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0024:
	{
		// foreach(GameObject u in ui)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UIManager::UISetActiveTrue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_UISetActiveTrue_mC291193171C6E700B6D9CB24165750E40EE0D0E7 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* V_0 = NULL;
	int32_t V_1 = 0;
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * V_2 = NULL;
	{
		// foreach(GameObject u in ui)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_0 = __this->get_ui_17();
		V_0 = L_0;
		V_1 = 0;
		goto IL_0024;
	}

IL_000d:
	{
		// foreach(GameObject u in ui)
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// u.gameObject.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = V_2;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		int32_t L_7 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1));
	}

IL_0024:
	{
		// foreach(GameObject u in ui)
		int32_t L_8 = V_1;
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_9 = V_0;
		NullCheck(L_9);
		if ((((int32_t)L_8) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_9)->max_length))))))
		{
			goto IL_000d;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UIManager::InfoWindowReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_InfoWindowReset_m50C6C71BE44EA7444B26460FF0789444FC237C74 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if(unitInfo_panel.gameObject.activeSelf)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_unitInfo_panel_27();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		// CentralProcessor.Instance.UnitReset();
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_4;
		L_4 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_4);
		CentralProcessor_UnitReset_mF1ABF614F26D7D6512DACF5451E52508C8986683(L_4, /*hidden argument*/NULL);
	}

IL_0022:
	{
		// if(buildingInfo_panel.gameObject.activeSelf)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_5 = __this->get_buildingInfo_panel_36();
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		bool L_7;
		L_7 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_6, /*hidden argument*/NULL);
		V_1 = L_7;
		bool L_8 = V_1;
		if (!L_8)
		{
			goto IL_0043;
		}
	}
	{
		// CentralProcessor.Instance.BuildingReset();
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_9;
		L_9 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_9);
		CentralProcessor_BuildingReset_m8D679BD6BDA545F3CB7F9DB0285092329AF987AF(L_9, /*hidden argument*/NULL);
	}

IL_0043:
	{
		// if(VariableManager.Instance.GetComponent<Decision>().decision_list.gameObject.activeSelf)
		VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * L_10;
		L_10 = VariableManager_get_Instance_mB6DE420D15154CBD02B61F88F9A7F4B6752E384D(/*hidden argument*/NULL);
		NullCheck(L_10);
		Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34 * L_11;
		L_11 = Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21(L_10, /*hidden argument*/Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21_RuntimeMethod_var);
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_11->get_decision_list_18();
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		bool L_14;
		L_14 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_13, /*hidden argument*/NULL);
		V_2 = L_14;
		bool L_15 = V_2;
		if (!L_15)
		{
			goto IL_007d;
		}
	}
	{
		// VariableManager.Instance.GetComponent<Decision>().decision_list.gameObject.SetActive(false);
		VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * L_16;
		L_16 = VariableManager_get_Instance_mB6DE420D15154CBD02B61F88F9A7F4B6752E384D(/*hidden argument*/NULL);
		NullCheck(L_16);
		Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34 * L_17;
		L_17 = Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21(L_16, /*hidden argument*/Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21_RuntimeMethod_var);
		NullCheck(L_17);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = L_17->get_decision_list_18();
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_19, (bool)0, /*hidden argument*/NULL);
	}

IL_007d:
	{
		// }
		return;
	}
}
// System.Void UIManager::OffMapButtonsCheck()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OffMapButtonsCheck_m1326DBD0AA765E945E4542BD8F3F86FD77B06EC0 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* V_0 = NULL;
	int32_t V_1 = 0;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_2 = NULL;
	{
		// CentralProcessor.Instance.currentUnit = null;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_0;
		L_0 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_0);
		L_0->set_currentUnit_14((MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 *)NULL);
		// foreach(Button b in mapButtons)
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_1 = __this->get_mapButtons_41();
		V_0 = L_1;
		V_1 = 0;
		goto IL_002e;
	}

IL_0018:
	{
		// foreach(Button b in mapButtons)
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// b.GetComponent<MoveUnit>().OffCheck();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = V_2;
		NullCheck(L_6);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_7;
		L_7 = Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A(L_6, /*hidden argument*/Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		NullCheck(L_7);
		MoveUnit_OffCheck_m6B676BC42C8790B68D96E4CDF619616B23A11921(L_7, /*hidden argument*/NULL);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_002e:
	{
		// foreach(Button b in mapButtons)
		int32_t L_9 = V_1;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_0018;
		}
	}
	{
		// }
		return;
	}
}
// System.Void UIManager::PrintErrorMessage(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_PrintErrorMessage_mC1BD306F9C8C3B2E224079BCFB6448249F00B479 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	{
		// errorMessage.gameObject.SetActive(true);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_errorMessage_21();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// errorMessage.text = s;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_errorMessage_21();
		String_t* L_3 = ___s0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// }
		return;
	}
}
// System.Void UIManager::ShowUnitInfo(System.Single,System.Single,UnityEngine.Sprite,System.String,System.Int32,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowUnitInfo_m1CBC6A33EF4739DEBB31914B2B88AFDBCF0EB2A7 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, float ___m_hp0, float ___c_hp1, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___illust2, String_t* ___name3, int32_t ___cost4, int32_t ___offence5, int32_t ___defence6, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// unitInfo_panel.gameObject.SetActive(true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_unitInfo_panel_27();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// unit_name.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_unit_name_31();
		String_t* L_3 = ___name3;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// unit_activeCost.text = cost.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_unit_activeCost_30();
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___cost4), /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_5);
		// unit_illust.sprite = illust;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_unit_illust_28();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_7 = ___illust2;
		NullCheck(L_6);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_6, L_7, /*hidden argument*/NULL);
		// unit_hp.fillAmount = c_hp / m_hp;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_8 = __this->get_unit_hp_29();
		float L_9 = ___c_hp1;
		float L_10 = ___m_hp0;
		NullCheck(L_8);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_8, ((float)((float)L_9/(float)L_10)), /*hidden argument*/NULL);
		// HP.text = Mathf.RoundToInt(c_hp).ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_11 = __this->get_HP_32();
		float L_12 = ___c_hp1;
		int32_t L_13;
		L_13 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(L_12, /*hidden argument*/NULL);
		V_0 = L_13;
		String_t* L_14;
		L_14 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		// unit_ATK.text = offence.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = __this->get_unit_ATK_33();
		String_t* L_16;
		L_16 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___offence5), /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_16);
		// unit_DEF.text = defence.ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_17 = __this->get_unit_DEF_34();
		String_t* L_18;
		L_18 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&___defence6), /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_18);
		// }
		return;
	}
}
// System.Void UIManager::ShowBuildingInfo(System.String,UnityEngine.Sprite,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowBuildingInfo_m59B7B1FD4D8DF1444BAFD7972F29B3C1C5D00609 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, String_t* ___name0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___illust1, int32_t ___level2, int32_t ___type3, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	int32_t V_8 = 0;
	bool V_9 = false;
	{
		// buildingInfo_panel.gameObject.SetActive(true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_buildingInfo_panel_36();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)1, /*hidden argument*/NULL);
		// buildingName.text = name;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_2 = __this->get_buildingName_37();
		String_t* L_3 = ___name0;
		NullCheck(L_2);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_2, L_3);
		// buildingIllust.sprite = illust;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_buildingIllust_38();
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_5 = ___illust1;
		NullCheck(L_4);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_4, L_5, /*hidden argument*/NULL);
		// for(int i = 0; i < level; i++)
		V_0 = 0;
		goto IL_004b;
	}

IL_0031:
	{
		// buildingLevels[i].gameObject.SetActive(true);
		ImageU5BU5D_t173C9D1F1D57DABC8260713678F7094C9E7FD224* L_6 = __this->get_buildingLevels_39();
		int32_t L_7 = V_0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_9, /*hidden argument*/NULL);
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		// for(int i = 0; i < level; i++)
		int32_t L_11 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_004b:
	{
		// for(int i = 0; i < level; i++)
		int32_t L_12 = V_0;
		int32_t L_13 = ___level2;
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)L_13))? 1 : 0);
		bool L_14 = V_1;
		if (L_14)
		{
			goto IL_0031;
		}
	}
	{
		// switch(type)
		int32_t L_15 = ___type3;
		V_3 = L_15;
		int32_t L_16 = V_3;
		V_2 = L_16;
		int32_t L_17 = V_2;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0071;
			}
			case 1:
			{
				goto IL_00a0;
			}
			case 2:
			{
				goto IL_00d1;
			}
		}
	}
	{
		goto IL_0102;
	}

IL_0071:
	{
		// for(int i = 0; i < level; i++)
		V_4 = 0;
		goto IL_0093;
	}

IL_0076:
	{
		// buildingEffects[i].gameObject.SetActive(true);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_18 = __this->get_buildingEffects_40();
		int32_t L_19 = V_4;
		NullCheck(L_18);
		int32_t L_20 = L_19;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_21 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_20));
		NullCheck(L_21);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22;
		L_22 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_22, (bool)1, /*hidden argument*/NULL);
		// for(int i = 0; i < level; i++)
		int32_t L_23 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_23, (int32_t)1));
	}

IL_0093:
	{
		// for(int i = 0; i < level; i++)
		int32_t L_24 = V_4;
		int32_t L_25 = ___level2;
		V_5 = (bool)((((int32_t)L_24) < ((int32_t)L_25))? 1 : 0);
		bool L_26 = V_5;
		if (L_26)
		{
			goto IL_0076;
		}
	}
	{
		// break;
		goto IL_0102;
	}

IL_00a0:
	{
		// for(int i = 3; i < (level + 3); i++)
		V_6 = 3;
		goto IL_00c2;
	}

IL_00a5:
	{
		// buildingEffects[i].gameObject.SetActive(true);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_27 = __this->get_buildingEffects_40();
		int32_t L_28 = V_6;
		NullCheck(L_27);
		int32_t L_29 = L_28;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_30 = (L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		NullCheck(L_30);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_31, (bool)1, /*hidden argument*/NULL);
		// for(int i = 3; i < (level + 3); i++)
		int32_t L_32 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_32, (int32_t)1));
	}

IL_00c2:
	{
		// for(int i = 3; i < (level + 3); i++)
		int32_t L_33 = V_6;
		int32_t L_34 = ___level2;
		V_7 = (bool)((((int32_t)L_33) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_34, (int32_t)3))))? 1 : 0);
		bool L_35 = V_7;
		if (L_35)
		{
			goto IL_00a5;
		}
	}
	{
		// break;
		goto IL_0102;
	}

IL_00d1:
	{
		// for(int i = 6; i < (level + 6); i++)
		V_8 = 6;
		goto IL_00f3;
	}

IL_00d6:
	{
		// buildingEffects[i].gameObject.SetActive(true);
		TextU5BU5D_t16DD1967B137EC602803C77DBB246B05B3D0275F* L_36 = __this->get_buildingEffects_40();
		int32_t L_37 = V_8;
		NullCheck(L_36);
		int32_t L_38 = L_37;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_39 = (L_36)->GetAt(static_cast<il2cpp_array_size_t>(L_38));
		NullCheck(L_39);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_40;
		L_40 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_39, /*hidden argument*/NULL);
		NullCheck(L_40);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_40, (bool)1, /*hidden argument*/NULL);
		// for(int i = 6; i < (level + 6); i++)
		int32_t L_41 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00f3:
	{
		// for(int i = 6; i < (level + 6); i++)
		int32_t L_42 = V_8;
		int32_t L_43 = ___level2;
		V_9 = (bool)((((int32_t)L_42) < ((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_43, (int32_t)6))))? 1 : 0);
		bool L_44 = V_9;
		if (L_44)
		{
			goto IL_00d6;
		}
	}
	{
		// break;
		goto IL_0102;
	}

IL_0102:
	{
		// }
		return;
	}
}
// System.Void UIManager::SearchWay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_SearchWay_mA4FC7A45F9018A697D1BB7145F9E1212DC0D74BA (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* V_0 = NULL;
	int32_t V_1 = 0;
	Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * V_2 = NULL;
	int32_t V_3 = 0;
	bool V_4 = false;
	int32_t G_B4_0 = 0;
	{
		// foreach(Button b in mapButtons)
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_0 = __this->get_mapButtons_41();
		V_0 = L_0;
		V_1 = 0;
		goto IL_00d7;
	}

IL_0010:
	{
		// foreach(Button b in mapButtons)
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// b.gameObject.GetComponent<MoveUnit>().isChecked = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_5 = V_2;
		NullCheck(L_5);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_5, /*hidden argument*/NULL);
		NullCheck(L_6);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_7;
		L_7 = GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955(L_6, /*hidden argument*/GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955_RuntimeMethod_var);
		NullCheck(L_7);
		L_7->set_isChecked_7((bool)0);
		// b.gameObject.GetComponent<MoveUnit>().checkPoint.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = V_2;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_10;
		L_10 = GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955(L_9, /*hidden argument*/GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955_RuntimeMethod_var);
		NullCheck(L_10);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_11 = L_10->get_checkPoint_8();
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12;
		L_12 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_11, /*hidden argument*/NULL);
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// b.gameObject.GetComponent<MoveUnit>().isMove = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = V_2;
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_15;
		L_15 = GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955(L_14, /*hidden argument*/GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955_RuntimeMethod_var);
		NullCheck(L_15);
		L_15->set_isMove_9((bool)1);
		// int dis = CalculateDistance(CentralProcessor.Instance.currentTile, b.gameObject.GetComponent<MoveUnit>().pairTile);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_16;
		L_16 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_16);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_17 = L_16->get_currentTile_13();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_18 = V_2;
		NullCheck(L_18);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_18, /*hidden argument*/NULL);
		NullCheck(L_19);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_20;
		L_20 = GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955(L_19, /*hidden argument*/GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955_RuntimeMethod_var);
		NullCheck(L_20);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_21 = L_20->get_pairTile_4();
		int32_t L_22;
		L_22 = UIManager_CalculateDistance_m356759958D658B9D0C34E79BB2CB76F131714BC8(__this, L_17, L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		// b.gameObject.GetComponent<MoveUnit>().cost = dis;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_23 = V_2;
		NullCheck(L_23);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_23, /*hidden argument*/NULL);
		NullCheck(L_24);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_25;
		L_25 = GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955(L_24, /*hidden argument*/GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955_RuntimeMethod_var);
		int32_t L_26 = V_3;
		NullCheck(L_25);
		L_25->set_cost_5(L_26);
		// if(dis == 0 || dis > CentralProcessor.Instance.currentUnit.activeCost)
		int32_t L_27 = V_3;
		if (!L_27)
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_28 = V_3;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_29;
		L_29 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_29);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_30 = L_29->get_currentUnit_14();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_activeCost_10();
		G_B4_0 = ((((int32_t)L_28) > ((int32_t)L_31))? 1 : 0);
		goto IL_009d;
	}

IL_009c:
	{
		G_B4_0 = 1;
	}

IL_009d:
	{
		V_4 = (bool)G_B4_0;
		bool L_32 = V_4;
		if (!L_32)
		{
			goto IL_00d2;
		}
	}
	{
		// b.gameObject.GetComponent<MoveUnit>().checkPoint.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_33 = V_2;
		NullCheck(L_33);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_33, /*hidden argument*/NULL);
		NullCheck(L_34);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_35;
		L_35 = GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955(L_34, /*hidden argument*/GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955_RuntimeMethod_var);
		NullCheck(L_35);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_36 = L_35->get_checkPoint_8();
		NullCheck(L_36);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_37;
		L_37 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_36, /*hidden argument*/NULL);
		NullCheck(L_37);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_37, (bool)0, /*hidden argument*/NULL);
		// b.gameObject.GetComponent<MoveUnit>().isMove = false;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_38 = V_2;
		NullCheck(L_38);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_39;
		L_39 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_38, /*hidden argument*/NULL);
		NullCheck(L_39);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_40;
		L_40 = GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955(L_39, /*hidden argument*/GameObject_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m3CD9CAA90015FA6EBA3D0FBD1F9459A98F38A955_RuntimeMethod_var);
		NullCheck(L_40);
		L_40->set_isMove_9((bool)0);
	}

IL_00d2:
	{
		int32_t L_41 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_41, (int32_t)1));
	}

IL_00d7:
	{
		// foreach(Button b in mapButtons)
		int32_t L_42 = V_1;
		ButtonU5BU5D_t2D8C7329F91F78C37FD1A3807DCD4366F7D7EC7B* L_43 = V_0;
		NullCheck(L_43);
		if ((((int32_t)L_42) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_43)->max_length))))))
		{
			goto IL_0010;
		}
	}
	{
		// }
		return;
	}
}
// System.Int32 UIManager::CalculateDistance(Tile,Tile)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UIManager_CalculateDistance_m356759958D658B9D0C34E79BB2CB76F131714BC8 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___current0, Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * ___obj1, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// int dis = 0;
		V_0 = 0;
		// int x = Mathf.Abs(current.row - obj.row);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_0 = ___current0;
		NullCheck(L_0);
		int32_t L_1 = L_0->get_row_10();
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_2 = ___obj1;
		NullCheck(L_2);
		int32_t L_3 = L_2->get_row_10();
		int32_t L_4;
		L_4 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(((int32_t)il2cpp_codegen_subtract((int32_t)L_1, (int32_t)L_3)), /*hidden argument*/NULL);
		V_1 = L_4;
		// int y = Mathf.Abs(current.col - obj.col);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_5 = ___current0;
		NullCheck(L_5);
		int32_t L_6 = L_5->get_col_11();
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_7 = ___obj1;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_col_11();
		int32_t L_9;
		L_9 = Mathf_Abs_mE46B08A540F26741910760E84ACB6AACD996C3C0(((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)L_8)), /*hidden argument*/NULL);
		V_2 = L_9;
		// dis = x + y;
		int32_t L_10 = V_1;
		int32_t L_11 = V_2;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)L_11));
		// return dis;
		int32_t L_12 = V_0;
		V_3 = L_12;
		goto IL_0031;
	}

IL_0031:
	{
		// }
		int32_t L_13 = V_3;
		return L_13;
	}
}
// System.Void UIManager::CloseUnitInfo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_CloseUnitInfo_mCCDD163E370325E6DC0BA1D33E9D147D903C3CAC (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// unitInfo_panel.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_unitInfo_panel_27();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::MoveUnit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_MoveUnit_m954A5D0EE11F0533C59C0C2A99FE3BB8B79DF22A (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* V_0 = NULL;
	BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* V_1 = NULL;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	int32_t V_6 = 0;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	int32_t G_B9_0 = 0;
	{
		// if(CentralProcessor.Instance.current_moveButton == null)
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_0;
		L_0 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_0);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_1 = L_0->get_current_moveButton_21();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_1, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_2 = L_2;
		bool L_3 = V_2;
		if (!L_3)
		{
			goto IL_001b;
		}
	}
	{
		// return;
		goto IL_036e;
	}

IL_001b:
	{
		// if(CentralProcessor.Instance.isMaster)
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_4;
		L_4 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_4);
		bool L_5 = L_4->get_isMaster_11();
		V_3 = L_5;
		bool L_6 = V_3;
		if (!L_6)
		{
			goto IL_0061;
		}
	}
	{
		// area = CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.P1_unitArea;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_7;
		L_7 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_7);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8 = L_7->get_current_moveButton_21();
		NullCheck(L_8);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_9;
		L_9 = Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A(L_8, /*hidden argument*/Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		NullCheck(L_9);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_10 = L_9->get_pairTile_4();
		NullCheck(L_10);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_11 = L_10->get_P1_unitArea_14();
		V_0 = L_11;
		// isEmpty = CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.isP1_unitArea;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_12;
		L_12 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_12);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_13 = L_12->get_current_moveButton_21();
		NullCheck(L_13);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_14;
		L_14 = Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A(L_13, /*hidden argument*/Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		NullCheck(L_14);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_15 = L_14->get_pairTile_4();
		NullCheck(L_15);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_16 = L_15->get_isP1_unitArea_12();
		V_1 = L_16;
		goto IL_0097;
	}

IL_0061:
	{
		// area = CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.P2_unitArea;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_17;
		L_17 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_17);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_18 = L_17->get_current_moveButton_21();
		NullCheck(L_18);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_19;
		L_19 = Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A(L_18, /*hidden argument*/Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		NullCheck(L_19);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_20 = L_19->get_pairTile_4();
		NullCheck(L_20);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_21 = L_20->get_P2_unitArea_15();
		V_0 = L_21;
		// isEmpty = CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.isP2_unitArea;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_22;
		L_22 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_22);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_23 = L_22->get_current_moveButton_21();
		NullCheck(L_23);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_24;
		L_24 = Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A(L_23, /*hidden argument*/Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		NullCheck(L_24);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_25 = L_24->get_pairTile_4();
		NullCheck(L_25);
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_26 = L_25->get_isP2_unitArea_13();
		V_1 = L_26;
	}

IL_0097:
	{
		// if(isEmpty[0] && isEmpty[1] && isEmpty[2])
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_27 = V_1;
		NullCheck(L_27);
		int32_t L_28 = 0;
		uint8_t L_29 = (uint8_t)(L_27)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		if (!L_29)
		{
			goto IL_00a6;
		}
	}
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_30 = V_1;
		NullCheck(L_30);
		int32_t L_31 = 1;
		uint8_t L_32 = (uint8_t)(L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		if (!L_32)
		{
			goto IL_00a6;
		}
	}
	{
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_33 = V_1;
		NullCheck(L_33);
		int32_t L_34 = 2;
		uint8_t L_35 = (uint8_t)(L_33)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		G_B9_0 = ((int32_t)(L_35));
		goto IL_00a7;
	}

IL_00a6:
	{
		G_B9_0 = 0;
	}

IL_00a7:
	{
		V_4 = (bool)G_B9_0;
		bool L_36 = V_4;
		if (!L_36)
		{
			goto IL_00b3;
		}
	}
	{
		// return;
		goto IL_036e;
	}

IL_00b3:
	{
		// if(CentralProcessor.Instance.isMaster)
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_37;
		L_37 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_37);
		bool L_38 = L_37->get_isMaster_11();
		V_5 = L_38;
		bool L_39 = V_5;
		if (!L_39)
		{
			goto IL_00fc;
		}
	}
	{
		// CentralProcessor.Instance.CheckUnitArea(7, CentralProcessor.Instance.currentTile.gameObject.GetComponent<PhotonView>().ViewID,false,CentralProcessor.Instance.currentUnit.myNum);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_40;
		L_40 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_41;
		L_41 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_41);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_42 = L_41->get_currentTile_13();
		NullCheck(L_42);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_43;
		L_43 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_42, /*hidden argument*/NULL);
		NullCheck(L_43);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_44;
		L_44 = GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10(L_43, /*hidden argument*/GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10_RuntimeMethod_var);
		NullCheck(L_44);
		int32_t L_45;
		L_45 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_44, /*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_46;
		L_46 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_46);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_47 = L_46->get_currentUnit_14();
		NullCheck(L_47);
		int32_t L_48 = L_47->get_myNum_12();
		NullCheck(L_40);
		CentralProcessor_CheckUnitArea_m03EFB07D02CDBF179B625DE659F2A8A685B7835E(L_40, 7, L_45, (bool)0, L_48, /*hidden argument*/NULL);
		goto IL_0133;
	}

IL_00fc:
	{
		// CentralProcessor.Instance.CheckUnitArea(8, CentralProcessor.Instance.currentTile.gameObject.GetComponent<PhotonView>().ViewID,false,CentralProcessor.Instance.currentUnit.myNum);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_49;
		L_49 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_50;
		L_50 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_50);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_51 = L_50->get_currentTile_13();
		NullCheck(L_51);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_52;
		L_52 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_51, /*hidden argument*/NULL);
		NullCheck(L_52);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_53;
		L_53 = GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10(L_52, /*hidden argument*/GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10_RuntimeMethod_var);
		NullCheck(L_53);
		int32_t L_54;
		L_54 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_53, /*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_55;
		L_55 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_55);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_56 = L_55->get_currentUnit_14();
		NullCheck(L_56);
		int32_t L_57 = L_56->get_myNum_12();
		NullCheck(L_49);
		CentralProcessor_CheckUnitArea_m03EFB07D02CDBF179B625DE659F2A8A685B7835E(L_49, 8, L_54, (bool)0, L_57, /*hidden argument*/NULL);
	}

IL_0133:
	{
		// CentralProcessor.Instance.CheckTileUnits(CentralProcessor.Instance.currentTile.gameObject.GetComponent<PhotonView>().ViewID, CentralProcessor.Instance.currentUnit.gameObject.GetComponent<PhotonView>().ViewID, CentralProcessor.Instance.currentUnit.myNum, CentralProcessor.Instance.isMaster, false);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_58;
		L_58 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_59;
		L_59 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_59);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_60 = L_59->get_currentTile_13();
		NullCheck(L_60);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61;
		L_61 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_60, /*hidden argument*/NULL);
		NullCheck(L_61);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_62;
		L_62 = GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10(L_61, /*hidden argument*/GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10_RuntimeMethod_var);
		NullCheck(L_62);
		int32_t L_63;
		L_63 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_62, /*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_64;
		L_64 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_64);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_65 = L_64->get_currentUnit_14();
		NullCheck(L_65);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_66;
		L_66 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_65, /*hidden argument*/NULL);
		NullCheck(L_66);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_67;
		L_67 = GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10(L_66, /*hidden argument*/GameObject_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_m8AFB09D4E2DA6EEC9D38BF980D379E4E0808EF10_RuntimeMethod_var);
		NullCheck(L_67);
		int32_t L_68;
		L_68 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_67, /*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_69;
		L_69 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_69);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_70 = L_69->get_currentUnit_14();
		NullCheck(L_70);
		int32_t L_71 = L_70->get_myNum_12();
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_72;
		L_72 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_72);
		bool L_73 = L_72->get_isMaster_11();
		NullCheck(L_58);
		CentralProcessor_CheckTileUnits_mE7FFCF1E97E4A2E4B6E06D386E9E9FA17F361EBA(L_58, L_63, L_68, L_71, L_73, (bool)0, /*hidden argument*/NULL);
		// for(int i = 0; i < 3; i++)
		V_6 = 0;
		goto IL_0360;
	}

IL_0192:
	{
		// if(isEmpty[i] == false)
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_74 = V_1;
		int32_t L_75 = V_6;
		NullCheck(L_74);
		int32_t L_76 = L_75;
		uint8_t L_77 = (uint8_t)(L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		V_7 = (bool)((((int32_t)L_77) == ((int32_t)0))? 1 : 0);
		bool L_78 = V_7;
		if (!L_78)
		{
			goto IL_0359;
		}
	}
	{
		// if(CentralProcessor.Instance.isMaster)
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_79;
		L_79 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_79);
		bool L_80 = L_79->get_isMaster_11();
		V_8 = L_80;
		bool L_81 = V_8;
		if (!L_81)
		{
			goto IL_01f2;
		}
	}
	{
		// CentralProcessor.Instance.CheckUnitArea(7, CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.GetComponent<PhotonView>().ViewID,true,CentralProcessor.Instance.currentUnit.myNum);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_82;
		L_82 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_83;
		L_83 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_83);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_84 = L_83->get_current_moveButton_21();
		NullCheck(L_84);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_85;
		L_85 = Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A(L_84, /*hidden argument*/Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		NullCheck(L_85);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_86 = L_85->get_pairTile_4();
		NullCheck(L_86);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_87;
		L_87 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(L_86, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		NullCheck(L_87);
		int32_t L_88;
		L_88 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_87, /*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_89;
		L_89 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_89);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_90 = L_89->get_currentUnit_14();
		NullCheck(L_90);
		int32_t L_91 = L_90->get_myNum_12();
		NullCheck(L_82);
		CentralProcessor_CheckUnitArea_m03EFB07D02CDBF179B625DE659F2A8A685B7835E(L_82, 7, L_88, (bool)1, L_91, /*hidden argument*/NULL);
		goto IL_022e;
	}

IL_01f2:
	{
		// CentralProcessor.Instance.CheckUnitArea(8, CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.GetComponent<PhotonView>().ViewID,true,CentralProcessor.Instance.currentUnit.myNum);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_92;
		L_92 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_93;
		L_93 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_93);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_94 = L_93->get_current_moveButton_21();
		NullCheck(L_94);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_95;
		L_95 = Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A(L_94, /*hidden argument*/Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		NullCheck(L_95);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_96 = L_95->get_pairTile_4();
		NullCheck(L_96);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_97;
		L_97 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(L_96, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		NullCheck(L_97);
		int32_t L_98;
		L_98 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_97, /*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_99;
		L_99 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_99);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_100 = L_99->get_currentUnit_14();
		NullCheck(L_100);
		int32_t L_101 = L_100->get_myNum_12();
		NullCheck(L_92);
		CentralProcessor_CheckUnitArea_m03EFB07D02CDBF179B625DE659F2A8A685B7835E(L_92, 8, L_98, (bool)1, L_101, /*hidden argument*/NULL);
	}

IL_022e:
	{
		// CentralProcessor.Instance.CheckTileUnits(CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.GetComponent<PhotonView>().ViewID, CentralProcessor.Instance.currentUnit.GetComponent<PhotonView>().ViewID, i, CentralProcessor.Instance.isMaster, true);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_102;
		L_102 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_103;
		L_103 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_103);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_104 = L_103->get_current_moveButton_21();
		NullCheck(L_104);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_105;
		L_105 = Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A(L_104, /*hidden argument*/Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		NullCheck(L_105);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_106 = L_105->get_pairTile_4();
		NullCheck(L_106);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_107;
		L_107 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(L_106, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		NullCheck(L_107);
		int32_t L_108;
		L_108 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_107, /*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_109;
		L_109 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_109);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_110 = L_109->get_currentUnit_14();
		NullCheck(L_110);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_111;
		L_111 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(L_110, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		NullCheck(L_111);
		int32_t L_112;
		L_112 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_111, /*hidden argument*/NULL);
		int32_t L_113 = V_6;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_114;
		L_114 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_114);
		bool L_115 = L_114->get_isMaster_11();
		NullCheck(L_102);
		CentralProcessor_CheckTileUnits_mE7FFCF1E97E4A2E4B6E06D386E9E9FA17F361EBA(L_102, L_108, L_112, L_113, L_115, (bool)1, /*hidden argument*/NULL);
		// CentralProcessor.Instance.currentUnit.transform.position = area[i].position;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_116;
		L_116 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_116);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_117 = L_116->get_currentUnit_14();
		NullCheck(L_117);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_118;
		L_118 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(L_117, /*hidden argument*/NULL);
		TransformU5BU5D_t7821C0520CC567C0A069329C01AE9C058C7E3F1D* L_119 = V_0;
		int32_t L_120 = V_6;
		NullCheck(L_119);
		int32_t L_121 = L_120;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_122 = (L_119)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		NullCheck(L_122);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_123;
		L_123 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_122, /*hidden argument*/NULL);
		NullCheck(L_118);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_118, L_123, /*hidden argument*/NULL);
		// CentralProcessor.Instance.ApplyUnitCurrentTile(CentralProcessor.Instance.currentUnit.GetComponent<PhotonView>().ViewID, CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().pairTile.GetComponent<PhotonView>().ViewID);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_124;
		L_124 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_125;
		L_125 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_125);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_126 = L_125->get_currentUnit_14();
		NullCheck(L_126);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_127;
		L_127 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(L_126, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		NullCheck(L_127);
		int32_t L_128;
		L_128 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_127, /*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_129;
		L_129 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_129);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_130 = L_129->get_current_moveButton_21();
		NullCheck(L_130);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_131;
		L_131 = Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A(L_130, /*hidden argument*/Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		NullCheck(L_131);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_132 = L_131->get_pairTile_4();
		NullCheck(L_132);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_133;
		L_133 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(L_132, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		NullCheck(L_133);
		int32_t L_134;
		L_134 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_133, /*hidden argument*/NULL);
		NullCheck(L_124);
		CentralProcessor_ApplyUnitCurrentTile_mC74C3EE7EF41406D22A5E49DF930ADADAC51D8E1(L_124, L_128, L_134, /*hidden argument*/NULL);
		// CentralProcessor.Instance.ApplyUnitActiveCost(CentralProcessor.Instance.currentUnit.GetComponent<PhotonView>().ViewID, -CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().cost);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_135;
		L_135 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_136;
		L_136 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_136);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_137 = L_136->get_currentUnit_14();
		NullCheck(L_137);
		PhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43 * L_138;
		L_138 = Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6(L_137, /*hidden argument*/Component_GetComponent_TisPhotonView_t946AFEDA09B2C5BE655DAA7574D432B3545FCB43_mB49C83D0A19254B75FDC3803E12466436487B8F6_RuntimeMethod_var);
		NullCheck(L_138);
		int32_t L_139;
		L_139 = PhotonView_get_ViewID_m024548C7B40DF767DF5F3BAF548B25618FAC8D5C(L_138, /*hidden argument*/NULL);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_140;
		L_140 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_140);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_141 = L_140->get_current_moveButton_21();
		NullCheck(L_141);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_142;
		L_142 = Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A(L_141, /*hidden argument*/Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		NullCheck(L_142);
		int32_t L_143 = L_142->get_cost_5();
		NullCheck(L_135);
		CentralProcessor_ApplyUnitActiveCost_mF8BE5D6AFCEA6E2DAFC9D6AF55F46EEC49A4FDAC(L_135, L_139, ((-L_143)), /*hidden argument*/NULL);
		// CentralProcessor.Instance.currentUnit = null;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_144;
		L_144 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_144);
		L_144->set_currentUnit_14((MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 *)NULL);
		// CentralProcessor.Instance.current_moveButton.GetComponent<MoveUnit>().ChangeColor(Color.white);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_145;
		L_145 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_145);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_146 = L_145->get_current_moveButton_21();
		NullCheck(L_146);
		MoveUnit_t85BE60643941C603AB42820186325C9E96BF5530 * L_147;
		L_147 = Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A(L_146, /*hidden argument*/Component_GetComponent_TisMoveUnit_t85BE60643941C603AB42820186325C9E96BF5530_m2DAC50F863F97089344845AE0866720006E4409A_RuntimeMethod_var);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_148;
		L_148 = Color_get_white_mB21E47D20959C3AEC41AF8BA04F63AC89FAF319E(/*hidden argument*/NULL);
		NullCheck(L_147);
		MoveUnit_ChangeColor_mD4382488E55CDE34605B192DCD1959E904667224(L_147, L_148, /*hidden argument*/NULL);
		// CentralProcessor.Instance.current_moveButton = null;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_149;
		L_149 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_149);
		L_149->set_current_moveButton_21((Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D *)NULL);
		// CentralProcessor.Instance.uIManager.SetIdleState();
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_150;
		L_150 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_150);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_151 = L_150->get_uIManager_7();
		NullCheck(L_151);
		UIManager_SetIdleState_m6EEB1DAF0CFC273B743C4E33A0C7607D8099E3D9(L_151, /*hidden argument*/NULL);
		// CentralProcessor.Instance.uIManager.UISetActiveTrue();
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_152;
		L_152 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_152);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_153 = L_152->get_uIManager_7();
		NullCheck(L_153);
		UIManager_UISetActiveTrue_mC291193171C6E700B6D9CB24165750E40EE0D0E7(L_153, /*hidden argument*/NULL);
		// return;
		goto IL_036e;
	}

IL_0359:
	{
		// for(int i = 0; i < 3; i++)
		int32_t L_154 = V_6;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)L_154, (int32_t)1));
	}

IL_0360:
	{
		// for(int i = 0; i < 3; i++)
		int32_t L_155 = V_6;
		V_9 = (bool)((((int32_t)L_155) < ((int32_t)3))? 1 : 0);
		bool L_156 = V_9;
		if (L_156)
		{
			goto IL_0192;
		}
	}

IL_036e:
	{
		// }
		return;
	}
}
// System.Void UIManager::ReadyAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ReadyAttack_m60F83C62DC3DD0A62AFE8AE228A7222926E12C52 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if(CentralProcessor.Instance.currentUnit.activeCost  == 0)
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_0;
		L_0 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_0);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_1 = L_0->get_currentUnit_14();
		NullCheck(L_1);
		int32_t L_2 = L_1->get_activeCost_10();
		V_0 = (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_001a;
		}
	}
	{
		// return;
		goto IL_0067;
	}

IL_001a:
	{
		// SetAttackState();
		UIManager_SetAttackState_m731CE6AE89C1876FF9D93566D0795FF3945D0CBF(__this, /*hidden argument*/NULL);
		// unitInfo_panel.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_unitInfo_panel_27();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		// unitButtonPanel.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_unitButtonPanel_35();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)0, /*hidden argument*/NULL);
		// CentralProcessor.Instance.currentUnit.isAttackready = true;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_8;
		L_8 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_8);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_9 = L_8->get_currentUnit_14();
		NullCheck(L_9);
		L_9->set_isAttackready_16((bool)1);
		// offAttackButton.gameObject.SetActive(true);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = __this->get_offAttackButton_44();
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)1, /*hidden argument*/NULL);
	}

IL_0067:
	{
		// }
		return;
	}
}
// System.Void UIManager::OffReadyAttack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_OffReadyAttack_m815A58A3D73239FDF2B3BAD855790A1321E71581 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// SetIdleState();
		UIManager_SetIdleState_m6EEB1DAF0CFC273B743C4E33A0C7607D8099E3D9(__this, /*hidden argument*/NULL);
		// CentralProcessor.Instance.currentUnit.isAttackready = false;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_0;
		L_0 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_0);
		MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 * L_1 = L_0->get_currentUnit_14();
		NullCheck(L_1);
		L_1->set_isAttackready_16((bool)0);
		// CentralProcessor.Instance.currentUnit = null;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_2;
		L_2 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_2);
		L_2->set_currentUnit_14((MyUnit_t38DEEE87A7C074D26665FE51614D560897E5E357 *)NULL);
		// offAttackButton.gameObject.SetActive(false);
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_3 = __this->get_offAttackButton_44();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)0, /*hidden argument*/NULL);
		// InfoWindowReset();
		UIManager_InfoWindowReset_m50C6C71BE44EA7444B26460FF0789444FC237C74(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void UIManager::DecisionButtonClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_DecisionButtonClick_m1AE5EFF86B074AC6B9CC9F160089BE1A29B321FE (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(VariableManager.Instance.GetComponent<Decision>().decision_list.gameObject.activeSelf == true)
		VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * L_0;
		L_0 = VariableManager_get_Instance_mB6DE420D15154CBD02B61F88F9A7F4B6752E384D(/*hidden argument*/NULL);
		NullCheck(L_0);
		Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34 * L_1;
		L_1 = Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21(L_0, /*hidden argument*/Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21_RuntimeMethod_var);
		NullCheck(L_1);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = L_1->get_decision_list_18();
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_003d;
		}
	}
	{
		// VariableManager.Instance.GetComponent<Decision>().decision_list.gameObject.SetActive(false);
		VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * L_6;
		L_6 = VariableManager_get_Instance_mB6DE420D15154CBD02B61F88F9A7F4B6752E384D(/*hidden argument*/NULL);
		NullCheck(L_6);
		Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34 * L_7;
		L_7 = Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21(L_6, /*hidden argument*/Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21_RuntimeMethod_var);
		NullCheck(L_7);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_8 = L_7->get_decision_list_18();
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_9, (bool)0, /*hidden argument*/NULL);
		goto IL_005a;
	}

IL_003d:
	{
		// VariableManager.Instance.GetComponent<Decision>().decision_list.gameObject.SetActive(true);
		VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * L_10;
		L_10 = VariableManager_get_Instance_mB6DE420D15154CBD02B61F88F9A7F4B6752E384D(/*hidden argument*/NULL);
		NullCheck(L_10);
		Decision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34 * L_11;
		L_11 = Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21(L_10, /*hidden argument*/Component_GetComponent_TisDecision_tEB9C68DC728A5E624B948BCE3EE6BE779A75AF34_mB1FFB57B1D97FD1B8DE9ECFD9CB822873FAE2B21_RuntimeMethod_var);
		NullCheck(L_11);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = L_11->get_decision_list_18();
		NullCheck(L_12);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = GameObject_get_gameObject_mD5FFECF7C3AC5039E847DF7A8842478539B701D6(L_12, /*hidden argument*/NULL);
		NullCheck(L_13);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_13, (bool)1, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void UIManager::BGMOnOff()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_BGMOnOff_m074B46622E7A90E01C7D830421278F8E6282C737 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(GameManager.instance.audioManager.GetComponent<AudioSource>().volume == 1)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0;
		L_0 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_0);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_1 = L_0->get_audioManager_6();
		NullCheck(L_1);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2;
		L_2 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_1, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_2);
		float L_3;
		L_3 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_2, /*hidden argument*/NULL);
		V_0 = (bool)((((float)L_3) == ((float)(1.0f)))? 1 : 0);
		bool L_4 = V_0;
		if (!L_4)
		{
			goto IL_003e;
		}
	}
	{
		// GameManager.instance.audioManager.GetComponent<AudioSource>().volume = 0;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5;
		L_5 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_5);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_6 = L_5->get_audioManager_6();
		NullCheck(L_6);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_7;
		L_7 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_6, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_7);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_7, (0.0f), /*hidden argument*/NULL);
		goto IL_005a;
	}

IL_003e:
	{
		// GameManager.instance.audioManager.GetComponent<AudioSource>().volume = 1;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_8;
		L_8 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_8);
		AudioManager_tD91555488B83E322DEC589BDB624FC46E66CB148 * L_9 = L_8->get_audioManager_6();
		NullCheck(L_9);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_10;
		L_10 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(L_9, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		NullCheck(L_10);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_10, (1.0f), /*hidden argument*/NULL);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Void UIManager::ShowCheckWindow(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager_ShowCheckWindow_mB7E81D791995B49E3332F1E1795F99EA88A83635 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, String_t* ___s0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// if(checkWindow.gameObject.activeSelf)
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_checkWindow_50();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_1, /*hidden argument*/NULL);
		V_0 = L_2;
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0032;
		}
	}
	{
		// SetIdleState();
		UIManager_SetIdleState_m6EEB1DAF0CFC273B743C4E33A0C7607D8099E3D9(__this, /*hidden argument*/NULL);
		// checkWindow.gameObject.SetActive(false);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_4 = __this->get_checkWindow_50();
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
		goto IL_005a;
	}

IL_0032:
	{
		// SetActiveState();
		UIManager_SetActiveState_mDCB7BD75D22965F29A83ACE9B02619113E1CA855(__this, /*hidden argument*/NULL);
		// checkWindow.gameObject.SetActive(true);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_6 = __this->get_checkWindow_50();
		NullCheck(L_6);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7;
		L_7 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_6, /*hidden argument*/NULL);
		NullCheck(L_7);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_7, (bool)1, /*hidden argument*/NULL);
		// checkWindowtext.text = s;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_8 = __this->get_checkWindowtext_51();
		String_t* L_9 = ___s0;
		NullCheck(L_8);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_9);
	}

IL_005a:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator UIManager::fadeoutErrorMessage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UIManager_fadeoutErrorMessage_m3E48F7DAD44462B65B04DC3A46185B3D21E40CE4 (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318 * L_0 = (U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318 *)il2cpp_codegen_object_new(U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318_il2cpp_TypeInfo_var);
		U3CfadeoutErrorMessageU3Ed__87__ctor_m95C2E453AF1126A2A1559A3C880975EA81CD03AE(L_0, 0, /*hidden argument*/NULL);
		U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void UIManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UIManager__ctor_mDADE1D724D40AF63AE78D51FC1CF1FE4784B4D4B (UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * __this, const RuntimeMethod* method)
{
	{
		// float           start = 1f;
		__this->set_start_23((1.0f));
		// float           end = 0f;
		__this->set_end_24((0.0f));
		// public float    FadeTime = 1f;
		__this->set_FadeTime_25((1.0f));
		// public State state = State.Idle;
		__this->set_state_52(2);
		MonoBehaviourPun__ctor_mCE5059964AC90D4EBEB442C9A3B67F92A966E617(__this, /*hidden argument*/NULL);
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
// VariableManager VariableManager::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * VariableManager_get_Instance_mB6DE420D15154CBD02B61F88F9A7F4B6752E384D (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectOfType_TisVariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_mDFA0F2936D9223924B33F7352DE4E9781483F8C5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * V_1 = NULL;
	{
		// if(instance == null) instance = FindObjectOfType<VariableManager>();
		VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * L_0 = ((VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_il2cpp_TypeInfo_var))->get_instance_4();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		V_0 = L_1;
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_001a;
		}
	}
	{
		// if(instance == null) instance = FindObjectOfType<VariableManager>();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * L_3;
		L_3 = Object_FindObjectOfType_TisVariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_mDFA0F2936D9223924B33F7352DE4E9781483F8C5(/*hidden argument*/Object_FindObjectOfType_TisVariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_mDFA0F2936D9223924B33F7352DE4E9781483F8C5_RuntimeMethod_var);
		((VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_il2cpp_TypeInfo_var))->set_instance_4(L_3);
	}

IL_001a:
	{
		// return instance;
		VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * L_4 = ((VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_StaticFields*)il2cpp_codegen_static_fields_for(VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5_il2cpp_TypeInfo_var))->get_instance_4();
		V_1 = L_4;
		goto IL_0022;
	}

IL_0022:
	{
		// }
		VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * L_5 = V_1;
		return L_5;
	}
}
// System.Void VariableManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_Start_mAC56F1DBDDD02498D3D33E4B84A6E0DA06230E14 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, const RuntimeMethod* method)
{
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// isMaster = CentralProcessor.Instance.isMaster;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_0;
		L_0 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_0);
		bool L_1 = L_0->get_isMaster_11();
		__this->set_isMaster_61(L_1);
		// if(GameManager.instance.playerData.forceNumber == 1)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_2;
		L_2 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_2);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_3 = L_2->get_playerData_5();
		NullCheck(L_3);
		int32_t L_4 = L_3->get_forceNumber_0();
		V_0 = (bool)((((int32_t)L_4) == ((int32_t)1))? 1 : 0);
		bool L_5 = V_0;
		if (!L_5)
		{
			goto IL_016f;
		}
	}
	{
		// war_hp = society_Variable.war_hp;
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_6 = __this->get_society_Variable_5();
		NullCheck(L_6);
		int32_t L_7 = L_6->get_war_hp_0();
		__this->set_war_hp_8(L_7);
		// war_off = society_Variable.war_off;
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_8 = __this->get_society_Variable_5();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_war_off_1();
		__this->set_war_off_9(L_9);
		// result_UnitOffence[0] = society_Variable.war_off;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = __this->get_result_UnitOffence_23();
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_11 = __this->get_society_Variable_5();
		NullCheck(L_11);
		int32_t L_12 = L_11->get_war_off_1();
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_12);
		// result_UnitDefence[0] = society_Variable.war_def;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = __this->get_result_UnitDefence_24();
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_14 = __this->get_society_Variable_5();
		NullCheck(L_14);
		int32_t L_15 = L_14->get_war_def_2();
		NullCheck(L_13);
		(L_13)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_15);
		// war_act = society_Variable.war_act;
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_16 = __this->get_society_Variable_5();
		NullCheck(L_16);
		int32_t L_17 = L_16->get_war_act_3();
		__this->set_war_act_11(L_17);
		// war_cost = society_Variable.war_cost;
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_18 = __this->get_society_Variable_5();
		NullCheck(L_18);
		int32_t L_19 = L_18->get_war_cost_4();
		__this->set_war_cost_12(L_19);
		// arc_hp = society_Variable.arc_hp;
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_20 = __this->get_society_Variable_5();
		NullCheck(L_20);
		int32_t L_21 = L_20->get_arc_hp_5();
		__this->set_arc_hp_13(L_21);
		// arc_off = society_Variable.arc_off;
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_22 = __this->get_society_Variable_5();
		NullCheck(L_22);
		int32_t L_23 = L_22->get_arc_off_6();
		__this->set_arc_off_14(L_23);
		// result_UnitOffence[1] = society_Variable.arc_off;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_result_UnitOffence_23();
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_25 = __this->get_society_Variable_5();
		NullCheck(L_25);
		int32_t L_26 = L_25->get_arc_off_6();
		NullCheck(L_24);
		(L_24)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_26);
		// result_UnitDefence[1] = society_Variable.arc_def;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_27 = __this->get_result_UnitDefence_24();
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_28 = __this->get_society_Variable_5();
		NullCheck(L_28);
		int32_t L_29 = L_28->get_arc_def_7();
		NullCheck(L_27);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_29);
		// arc_act = society_Variable.arc_act;
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_30 = __this->get_society_Variable_5();
		NullCheck(L_30);
		int32_t L_31 = L_30->get_arc_act_8();
		__this->set_arc_act_16(L_31);
		// arc_cost = society_Variable.arc_cost;
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_32 = __this->get_society_Variable_5();
		NullCheck(L_32);
		int32_t L_33 = L_32->get_arc_cost_9();
		__this->set_arc_cost_17(L_33);
		// mag_hp = society_Variable.mag_hp;
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_34 = __this->get_society_Variable_5();
		NullCheck(L_34);
		int32_t L_35 = L_34->get_mag_hp_10();
		__this->set_mag_hp_18(L_35);
		// mag_off = society_Variable.mag_off;
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_36 = __this->get_society_Variable_5();
		NullCheck(L_36);
		int32_t L_37 = L_36->get_mag_off_11();
		__this->set_mag_off_19(L_37);
		// result_UnitOffence[2] = society_Variable.mag_off;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_38 = __this->get_result_UnitOffence_23();
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_39 = __this->get_society_Variable_5();
		NullCheck(L_39);
		int32_t L_40 = L_39->get_mag_off_11();
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_40);
		// result_UnitDefence[2] = society_Variable.mag_def;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_41 = __this->get_result_UnitDefence_24();
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_42 = __this->get_society_Variable_5();
		NullCheck(L_42);
		int32_t L_43 = L_42->get_mag_def_12();
		NullCheck(L_41);
		(L_41)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_43);
		// mag_act = society_Variable.mag_act;
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_44 = __this->get_society_Variable_5();
		NullCheck(L_44);
		int32_t L_45 = L_44->get_mag_act_13();
		__this->set_mag_act_21(L_45);
		// mag_cost = society_Variable.mag_cost;
		Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * L_46 = __this->get_society_Variable_5();
		NullCheck(L_46);
		int32_t L_47 = L_46->get_mag_cost_14();
		__this->set_mag_cost_22(L_47);
		goto IL_0426;
	}

IL_016f:
	{
		// else if(GameManager.instance.playerData.forceNumber == 2)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_48;
		L_48 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_48);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_49 = L_48->get_playerData_5();
		NullCheck(L_49);
		int32_t L_50 = L_49->get_forceNumber_0();
		V_1 = (bool)((((int32_t)L_50) == ((int32_t)2))? 1 : 0);
		bool L_51 = V_1;
		if (!L_51)
		{
			goto IL_02cd;
		}
	}
	{
		// war_hp = new_Wave_Variable.war_hp;
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_52 = __this->get_new_Wave_Variable_6();
		NullCheck(L_52);
		int32_t L_53 = L_52->get_war_hp_0();
		__this->set_war_hp_8(L_53);
		// war_off = new_Wave_Variable.war_off;
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_54 = __this->get_new_Wave_Variable_6();
		NullCheck(L_54);
		int32_t L_55 = L_54->get_war_off_1();
		__this->set_war_off_9(L_55);
		// result_UnitOffence[0] = new_Wave_Variable.war_off;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_56 = __this->get_result_UnitOffence_23();
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_57 = __this->get_new_Wave_Variable_6();
		NullCheck(L_57);
		int32_t L_58 = L_57->get_war_off_1();
		NullCheck(L_56);
		(L_56)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_58);
		// result_UnitDefence[0] = new_Wave_Variable.war_def;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_59 = __this->get_result_UnitDefence_24();
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_60 = __this->get_new_Wave_Variable_6();
		NullCheck(L_60);
		int32_t L_61 = L_60->get_war_def_2();
		NullCheck(L_59);
		(L_59)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_61);
		// war_act = new_Wave_Variable.war_act;
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_62 = __this->get_new_Wave_Variable_6();
		NullCheck(L_62);
		int32_t L_63 = L_62->get_war_act_3();
		__this->set_war_act_11(L_63);
		// war_cost = new_Wave_Variable.war_cost;
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_64 = __this->get_new_Wave_Variable_6();
		NullCheck(L_64);
		int32_t L_65 = L_64->get_war_cost_4();
		__this->set_war_cost_12(L_65);
		// arc_hp = new_Wave_Variable.arc_hp;
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_66 = __this->get_new_Wave_Variable_6();
		NullCheck(L_66);
		int32_t L_67 = L_66->get_arc_hp_5();
		__this->set_arc_hp_13(L_67);
		// arc_off = new_Wave_Variable.arc_off;
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_68 = __this->get_new_Wave_Variable_6();
		NullCheck(L_68);
		int32_t L_69 = L_68->get_arc_off_6();
		__this->set_arc_off_14(L_69);
		// result_UnitOffence[1] = new_Wave_Variable.arc_off;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_70 = __this->get_result_UnitOffence_23();
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_71 = __this->get_new_Wave_Variable_6();
		NullCheck(L_71);
		int32_t L_72 = L_71->get_arc_off_6();
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_72);
		// result_UnitDefence[1] = new_Wave_Variable.arc_def;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_73 = __this->get_result_UnitDefence_24();
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_74 = __this->get_new_Wave_Variable_6();
		NullCheck(L_74);
		int32_t L_75 = L_74->get_arc_def_7();
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_75);
		// arc_act = new_Wave_Variable.arc_act;
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_76 = __this->get_new_Wave_Variable_6();
		NullCheck(L_76);
		int32_t L_77 = L_76->get_arc_act_8();
		__this->set_arc_act_16(L_77);
		// arc_cost = new_Wave_Variable.arc_cost;
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_78 = __this->get_new_Wave_Variable_6();
		NullCheck(L_78);
		int32_t L_79 = L_78->get_arc_cost_9();
		__this->set_arc_cost_17(L_79);
		// mag_hp = new_Wave_Variable.mag_hp;
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_80 = __this->get_new_Wave_Variable_6();
		NullCheck(L_80);
		int32_t L_81 = L_80->get_mag_hp_10();
		__this->set_mag_hp_18(L_81);
		// mag_off = new_Wave_Variable.mag_off;
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_82 = __this->get_new_Wave_Variable_6();
		NullCheck(L_82);
		int32_t L_83 = L_82->get_mag_off_11();
		__this->set_mag_off_19(L_83);
		// result_UnitOffence[2] = new_Wave_Variable.mag_off;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_84 = __this->get_result_UnitOffence_23();
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_85 = __this->get_new_Wave_Variable_6();
		NullCheck(L_85);
		int32_t L_86 = L_85->get_mag_off_11();
		NullCheck(L_84);
		(L_84)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_86);
		// result_UnitDefence[2] = new_Wave_Variable.mag_def;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_87 = __this->get_result_UnitDefence_24();
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_88 = __this->get_new_Wave_Variable_6();
		NullCheck(L_88);
		int32_t L_89 = L_88->get_mag_def_12();
		NullCheck(L_87);
		(L_87)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_89);
		// mag_act = new_Wave_Variable.mag_act;
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_90 = __this->get_new_Wave_Variable_6();
		NullCheck(L_90);
		int32_t L_91 = L_90->get_mag_act_13();
		__this->set_mag_act_21(L_91);
		// mag_cost = new_Wave_Variable.mag_cost;
		New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * L_92 = __this->get_new_Wave_Variable_6();
		NullCheck(L_92);
		int32_t L_93 = L_92->get_mag_cost_14();
		__this->set_mag_cost_22(L_93);
		goto IL_0426;
	}

IL_02cd:
	{
		// else if(GameManager.instance.playerData.forceNumber == 3)
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_94;
		L_94 = GameManager_get_instance_m01A2DC805F24ED39DAFB4BE28A43CFD69AE0D00B(/*hidden argument*/NULL);
		NullCheck(L_94);
		PlayerData_t8CF0E5D9EE572FFF7E0B41DA391376CF0AB8EBB5 * L_95 = L_94->get_playerData_5();
		NullCheck(L_95);
		int32_t L_96 = L_95->get_forceNumber_0();
		V_2 = (bool)((((int32_t)L_96) == ((int32_t)3))? 1 : 0);
		bool L_97 = V_2;
		if (!L_97)
		{
			goto IL_0426;
		}
	}
	{
		// war_hp = mafia_Variable.war_hp;
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_98 = __this->get_mafia_Variable_7();
		NullCheck(L_98);
		int32_t L_99 = L_98->get_war_hp_0();
		__this->set_war_hp_8(L_99);
		// war_off = mafia_Variable.war_off;
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_100 = __this->get_mafia_Variable_7();
		NullCheck(L_100);
		int32_t L_101 = L_100->get_war_off_1();
		__this->set_war_off_9(L_101);
		// result_UnitOffence[0] = mafia_Variable.war_off;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_102 = __this->get_result_UnitOffence_23();
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_103 = __this->get_mafia_Variable_7();
		NullCheck(L_103);
		int32_t L_104 = L_103->get_war_off_1();
		NullCheck(L_102);
		(L_102)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_104);
		// result_UnitDefence[0] = mafia_Variable.war_def;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_105 = __this->get_result_UnitDefence_24();
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_106 = __this->get_mafia_Variable_7();
		NullCheck(L_106);
		int32_t L_107 = L_106->get_war_def_2();
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_107);
		// war_act = mafia_Variable.war_act;
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_108 = __this->get_mafia_Variable_7();
		NullCheck(L_108);
		int32_t L_109 = L_108->get_war_act_3();
		__this->set_war_act_11(L_109);
		// war_cost = mafia_Variable.war_cost;
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_110 = __this->get_mafia_Variable_7();
		NullCheck(L_110);
		int32_t L_111 = L_110->get_war_cost_4();
		__this->set_war_cost_12(L_111);
		// arc_hp = mafia_Variable.arc_hp;
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_112 = __this->get_mafia_Variable_7();
		NullCheck(L_112);
		int32_t L_113 = L_112->get_arc_hp_5();
		__this->set_arc_hp_13(L_113);
		// arc_off = mafia_Variable.arc_off;
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_114 = __this->get_mafia_Variable_7();
		NullCheck(L_114);
		int32_t L_115 = L_114->get_arc_off_6();
		__this->set_arc_off_14(L_115);
		// result_UnitOffence[1] = mafia_Variable.arc_off;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_116 = __this->get_result_UnitOffence_23();
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_117 = __this->get_mafia_Variable_7();
		NullCheck(L_117);
		int32_t L_118 = L_117->get_arc_off_6();
		NullCheck(L_116);
		(L_116)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_118);
		// result_UnitDefence[1] = mafia_Variable.arc_def;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_119 = __this->get_result_UnitDefence_24();
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_120 = __this->get_mafia_Variable_7();
		NullCheck(L_120);
		int32_t L_121 = L_120->get_arc_def_7();
		NullCheck(L_119);
		(L_119)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_121);
		// arc_act = mafia_Variable.arc_act;
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_122 = __this->get_mafia_Variable_7();
		NullCheck(L_122);
		int32_t L_123 = L_122->get_arc_act_8();
		__this->set_arc_act_16(L_123);
		// arc_cost = mafia_Variable.arc_cost;
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_124 = __this->get_mafia_Variable_7();
		NullCheck(L_124);
		int32_t L_125 = L_124->get_arc_cost_9();
		__this->set_arc_cost_17(L_125);
		// mag_hp = mafia_Variable.mag_hp;
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_126 = __this->get_mafia_Variable_7();
		NullCheck(L_126);
		int32_t L_127 = L_126->get_mag_hp_10();
		__this->set_mag_hp_18(L_127);
		// mag_off = mafia_Variable.mag_off;
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_128 = __this->get_mafia_Variable_7();
		NullCheck(L_128);
		int32_t L_129 = L_128->get_mag_off_11();
		__this->set_mag_off_19(L_129);
		// result_UnitOffence[2] = mafia_Variable.mag_off;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_130 = __this->get_result_UnitOffence_23();
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_131 = __this->get_mafia_Variable_7();
		NullCheck(L_131);
		int32_t L_132 = L_131->get_mag_off_11();
		NullCheck(L_130);
		(L_130)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_132);
		// result_UnitDefence[2] = mafia_Variable.mag_def;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_133 = __this->get_result_UnitDefence_24();
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_134 = __this->get_mafia_Variable_7();
		NullCheck(L_134);
		int32_t L_135 = L_134->get_mag_def_12();
		NullCheck(L_133);
		(L_133)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_135);
		// mag_act = mafia_Variable.mag_act;
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_136 = __this->get_mafia_Variable_7();
		NullCheck(L_136);
		int32_t L_137 = L_136->get_mag_act_13();
		__this->set_mag_act_21(L_137);
		// mag_cost = mafia_Variable.mag_cost;
		Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * L_138 = __this->get_mafia_Variable_7();
		NullCheck(L_138);
		int32_t L_139 = L_138->get_mag_cost_14();
		__this->set_mag_cost_22(L_139);
	}

IL_0426:
	{
		// }
		return;
	}
}
// System.Void VariableManager::Test()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_Test_m5F9C1F3DBBE6239999C56B562ACEC91685EDC1FB (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, const RuntimeMethod* method)
{
	{
		// BuffSelect(3);
		VariableManager_BuffSelect_mF423144387425B77488CD1E5DF20492B8A7BCE3A(__this, 3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableManager::BuffSelect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_BuffSelect_mF423144387425B77488CD1E5DF20492B8A7BCE3A (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch(num)
		int32_t L_0 = ___num0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_004e;
			}
			case 1:
			{
				goto IL_005f;
			}
			case 2:
			{
				goto IL_0070;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_0092;
			}
			case 5:
			{
				goto IL_00a0;
			}
			case 6:
			{
				goto IL_00ae;
			}
			case 7:
			{
				goto IL_00b8;
			}
			case 8:
			{
				goto IL_00c2;
			}
			case 9:
			{
				goto IL_00d0;
			}
			case 10:
			{
				goto IL_00de;
			}
			case 11:
			{
				goto IL_00ec;
			}
			case 12:
			{
				goto IL_00fa;
			}
			case 13:
			{
				goto IL_0108;
			}
			case 14:
			{
				goto IL_0116;
			}
		}
	}
	{
		goto IL_0118;
	}

IL_004e:
	{
		// UnitOffenceEffect(0.4f);
		VariableManager_UnitOffenceEffect_mBEA08B1173F633FF38684541AA43B5A7060D80D5(__this, (0.400000006f), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_005f:
	{
		// UnitOffenceEffect(-0.2f);
		VariableManager_UnitOffenceEffect_mBEA08B1173F633FF38684541AA43B5A7060D80D5(__this, (-0.200000003f), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_0070:
	{
		// UnitCostEffect(-0.5f);
		VariableManager_UnitCostEffect_mE71CA15373C432829224937F5CDFA210A8132936(__this, (-0.5f), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_0081:
	{
		// UnitCostEffect(0.5f);
		VariableManager_UnitCostEffect_mE71CA15373C432829224937F5CDFA210A8132936(__this, (0.5f), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_0092:
	{
		// BuildingCostEffect(-0.5f);
		VariableManager_BuildingCostEffect_m33B440011C79FAAC3B2202B35BCD6DD5709C6C6D(__this, (-0.5f), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_00a0:
	{
		// BuildingCostEffect(0.5f);
		VariableManager_BuildingCostEffect_m33B440011C79FAAC3B2202B35BCD6DD5709C6C6D(__this, (0.5f), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_00ae:
	{
		// UnitActiveCostEffect(1);
		VariableManager_UnitActiveCostEffect_mEE27D0ECE331C033E0DEC15F1B82E6C59CBF351A(__this, 1, /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_00b8:
	{
		// UnitActiveCostEffect(-1);
		VariableManager_UnitActiveCostEffect_mEE27D0ECE331C033E0DEC15F1B82E6C59CBF351A(__this, (-1), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_00c2:
	{
		// GoodsProductionEffect(0.4f);
		VariableManager_GoodsProductionEffect_mC00788F50C1C058D362D0D6BEC3CB1B49131F66D(__this, (0.400000006f), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_00d0:
	{
		// GoodsProductionEffect(-0.2f);
		VariableManager_GoodsProductionEffect_mC00788F50C1C058D362D0D6BEC3CB1B49131F66D(__this, (-0.200000003f), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_00de:
	{
		// OccupationCostEffect(0.5f);
		VariableManager_OccupationCostEffect_mADC4F09F6D8310DFB282ECDE1CE63C2201CA8ECA(__this, (0.5f), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_00ec:
	{
		// OccupationCostEffect(-0.4f);
		VariableManager_OccupationCostEffect_mADC4F09F6D8310DFB282ECDE1CE63C2201CA8ECA(__this, (-0.400000006f), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_00fa:
	{
		// UnitDefensiveEffect(0.4f);
		VariableManager_UnitDefensiveEffect_mB1D61B87D25249334D1A6B67F307E230EBE9253E(__this, (0.400000006f), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_0108:
	{
		// UnitDefensiveEffect(-0.2f);
		VariableManager_UnitDefensiveEffect_mB1D61B87D25249334D1A6B67F307E230EBE9253E(__this, (-0.200000003f), /*hidden argument*/NULL);
		// break;
		goto IL_0118;
	}

IL_0116:
	{
		// break;
		goto IL_0118;
	}

IL_0118:
	{
		// }
		return;
	}
}
// System.Void VariableManager::BuildingBuffSelect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_BuildingBuffSelect_m537B7DB52DC1CAE2720B122CAC27333D42890883 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, int32_t ___num0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	bool V_2 = false;
	TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* V_3 = NULL;
	int32_t V_4 = 0;
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * V_5 = NULL;
	bool V_6 = false;
	{
		// switch(num)
		int32_t L_0 = ___num0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_0036;
			}
			case 1:
			{
				goto IL_0074;
			}
			case 2:
			{
				goto IL_00e0;
			}
			case 3:
			{
				goto IL_00ee;
			}
			case 4:
			{
				goto IL_00fc;
			}
			case 5:
			{
				goto IL_0116;
			}
			case 6:
			{
				goto IL_0124;
			}
			case 7:
			{
				goto IL_013e;
			}
			case 8:
			{
				goto IL_014c;
			}
		}
	}
	{
		goto IL_015a;
	}

IL_0036:
	{
		// if(isMaster)
		bool L_3 = __this->get_isMaster_61();
		V_2 = L_3;
		bool L_4 = V_2;
		if (!L_4)
		{
			goto IL_0055;
		}
	}
	{
		// CentralProcessor.Instance.P1_core_Tile.money = 70;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_5;
		L_5 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_5);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_6 = L_5->get_P1_core_Tile_17();
		NullCheck(L_6);
		L_6->set_money_23(((int32_t)70));
		goto IL_0068;
	}

IL_0055:
	{
		// CentralProcessor.Instance.P2_core_Tile.money = 70;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_7;
		L_7 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_7);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_8 = L_7->get_P2_core_Tile_18();
		NullCheck(L_8);
		L_8->set_money_23(((int32_t)70));
	}

IL_0068:
	{
		// GoodsProductionSetting();
		VariableManager_GoodsProductionSetting_mB6067A2A38648F91B7C26F34F3C6BFF757546925(__this, /*hidden argument*/NULL);
		// break;
		goto IL_015a;
	}

IL_0074:
	{
		// foreach(Tile t in CentralProcessor.Instance.tiles)
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_9;
		L_9 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_9);
		TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* L_10 = L_9->get_tiles_22();
		V_3 = L_10;
		V_4 = 0;
		goto IL_009c;
	}

IL_0085:
	{
		// foreach(Tile t in CentralProcessor.Instance.tiles)
		TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* L_11 = V_3;
		int32_t L_12 = V_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_14 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_5 = L_14;
		// t.money = 10;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_15 = V_5;
		NullCheck(L_15);
		L_15->set_money_23(((int32_t)10));
		int32_t L_16 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_009c:
	{
		// foreach(Tile t in CentralProcessor.Instance.tiles)
		int32_t L_17 = V_4;
		TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* L_18 = V_3;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length))))))
		{
			goto IL_0085;
		}
	}
	{
		// if(isMaster)
		bool L_19 = __this->get_isMaster_61();
		V_6 = L_19;
		bool L_20 = V_6;
		if (!L_20)
		{
			goto IL_00c4;
		}
	}
	{
		// CentralProcessor.Instance.P1_core_Tile.money = 70;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_21;
		L_21 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_21);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_22 = L_21->get_P1_core_Tile_17();
		NullCheck(L_22);
		L_22->set_money_23(((int32_t)70));
		goto IL_00d7;
	}

IL_00c4:
	{
		// CentralProcessor.Instance.P2_core_Tile.money = 70;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_23;
		L_23 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_23);
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_24 = L_23->get_P2_core_Tile_18();
		NullCheck(L_24);
		L_24->set_money_23(((int32_t)70));
	}

IL_00d7:
	{
		// GoodsProductionSetting();
		VariableManager_GoodsProductionSetting_mB6067A2A38648F91B7C26F34F3C6BFF757546925(__this, /*hidden argument*/NULL);
		// break;
		goto IL_015a;
	}

IL_00e0:
	{
		// GoodsProductionEffect(0.2f);
		VariableManager_GoodsProductionEffect_mC00788F50C1C058D362D0D6BEC3CB1B49131F66D(__this, (0.200000003f), /*hidden argument*/NULL);
		// break;
		goto IL_015a;
	}

IL_00ee:
	{
		// WarUnit_OffenceBuff(0.5f);
		VariableManager_WarUnit_OffenceBuff_mDA309FAE5CFC90695A43058A42AB7AD8E65D9A00(__this, (0.5f), /*hidden argument*/NULL);
		// break;
		goto IL_015a;
	}

IL_00fc:
	{
		// ArcUnit_OffenceBuff(0.5f);
		VariableManager_ArcUnit_OffenceBuff_m515F9386729C69FB28B9E7976791B114F76567B8(__this, (0.5f), /*hidden argument*/NULL);
		// MagUnit_OffenceBuff(0.5f);
		VariableManager_MagUnit_OffenceBuff_m64B0D6832A749EDF14C68FEE1BC23B86C9E76DFC(__this, (0.5f), /*hidden argument*/NULL);
		// break;
		goto IL_015a;
	}

IL_0116:
	{
		// UnitOffenceEffect(0.5f);
		VariableManager_UnitOffenceEffect_mBEA08B1173F633FF38684541AA43B5A7060D80D5(__this, (0.5f), /*hidden argument*/NULL);
		// break;
		goto IL_015a;
	}

IL_0124:
	{
		// BuildingBuff_unitCost(-0.1f);
		VariableManager_BuildingBuff_unitCost_m3688F2996A954668D2315844EA5BB35BEC1B7DF6(__this, (-0.100000001f), /*hidden argument*/NULL);
		// BuildingBuff_buildingCost(-0.1f);
		VariableManager_BuildingBuff_buildingCost_m42D36D06CF00AD3CE07F15528FF739CDFF4FA682(__this, (-0.100000001f), /*hidden argument*/NULL);
		// break;
		goto IL_015a;
	}

IL_013e:
	{
		// BuildingBuff_unitCost(-0.2f);
		VariableManager_BuildingBuff_unitCost_m3688F2996A954668D2315844EA5BB35BEC1B7DF6(__this, (-0.200000003f), /*hidden argument*/NULL);
		// break;
		goto IL_015a;
	}

IL_014c:
	{
		// BuildingBuff_buildingCost(-0.2f);
		VariableManager_BuildingBuff_buildingCost_m42D36D06CF00AD3CE07F15528FF739CDFF4FA682(__this, (-0.200000003f), /*hidden argument*/NULL);
		// break;
		goto IL_015a;
	}

IL_015a:
	{
		// }
		return;
	}
}
// System.Void VariableManager::UnitOffenceEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_UnitOffenceEffect_mBEA08B1173F633FF38684541AA43B5A7060D80D5 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// result_UnitOffence[0] = Mathf.RoundToInt(war_off * (1 + (UnitOffenceBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_result_UnitOffence_23();
		int32_t L_1 = __this->get_war_off_9();
		float L_2 = __this->get_UnitOffenceBuffPrc_27();
		float L_3 = ___prc0;
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_1)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_2, (float)L_3)))))), /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_4);
		// result_UnitOffence[1] = Mathf.RoundToInt(arc_off * (1 + (UnitOffenceBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_result_UnitOffence_23();
		int32_t L_6 = __this->get_arc_off_14();
		float L_7 = __this->get_UnitOffenceBuffPrc_27();
		float L_8 = ___prc0;
		int32_t L_9;
		L_9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_6)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_7, (float)L_8)))))), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_9);
		// result_UnitOffence[2] = Mathf.RoundToInt(mag_off * (1 + (UnitOffenceBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = __this->get_result_UnitOffence_23();
		int32_t L_11 = __this->get_mag_off_19();
		float L_12 = __this->get_UnitOffenceBuffPrc_27();
		float L_13 = ___prc0;
		int32_t L_14;
		L_14 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_11)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_12, (float)L_13)))))), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_14);
		// if(isMaster)
		bool L_15 = __this->get_isMaster_61();
		V_0 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		// CentralProcessor.Instance.ApplyUnitOffenceEffect(7, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_17;
		L_17 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = __this->get_result_UnitOffence_23();
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_result_UnitOffence_23();
		NullCheck(L_21);
		int32_t L_22 = 1;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_result_UnitOffence_23();
		NullCheck(L_24);
		int32_t L_25 = 2;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_17);
		CentralProcessor_ApplyUnitOffenceEffect_m43CF28C63B4A6334F214C5377DD4417D756DF7FE(L_17, 7, L_20, L_23, L_26, /*hidden argument*/NULL);
		goto IL_00c2;
	}

IL_009c:
	{
		// CentralProcessor.Instance.ApplyUnitOffenceEffect(8, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_27;
		L_27 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = __this->get_result_UnitOffence_23();
		NullCheck(L_28);
		int32_t L_29 = 0;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = __this->get_result_UnitOffence_23();
		NullCheck(L_31);
		int32_t L_32 = 1;
		int32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = __this->get_result_UnitOffence_23();
		NullCheck(L_34);
		int32_t L_35 = 2;
		int32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_27);
		CentralProcessor_ApplyUnitOffenceEffect_m43CF28C63B4A6334F214C5377DD4417D756DF7FE(L_27, 8, L_30, L_33, L_36, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		// UnitOffenceBuffPrc += prc;
		float L_37 = __this->get_UnitOffenceBuffPrc_27();
		float L_38 = ___prc0;
		__this->set_UnitOffenceBuffPrc_27(((float)il2cpp_codegen_add((float)L_37, (float)L_38)));
		// }
		return;
	}
}
// System.Void VariableManager::UnitCostEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_UnitCostEffect_mE71CA15373C432829224937F5CDFA210A8132936 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mC08B6BECDD19BF12162E08CE4496604CC29C5849_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	{
		// if(isUnitCostEffect)
		bool L_0 = __this->get_isUnitCostEffect_34();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001e;
		}
	}
	{
		// UnitEffects.Enqueue(prc);
		Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * L_2 = __this->get_UnitEffects_33();
		float L_3 = ___prc0;
		NullCheck(L_2);
		Queue_1_Enqueue_mC08B6BECDD19BF12162E08CE4496604CC29C5849(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_mC08B6BECDD19BF12162E08CE4496604CC29C5849_RuntimeMethod_var);
		// return;
		goto IL_00ac;
	}

IL_001e:
	{
		// currentUnitBuff = prc;
		float L_4 = ___prc0;
		__this->set_currentUnitBuff_35(L_4);
		// isUnitCostEffect = true;
		__this->set_isUnitCostEffect_34((bool)1);
		// unit_resultCost[0] = Mathf.RoundToInt(war_cost * (1 + (UnitCostBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_unit_resultCost_29();
		int32_t L_6 = __this->get_war_cost_12();
		float L_7 = __this->get_UnitCostBuffPrc_25();
		float L_8 = ___prc0;
		int32_t L_9;
		L_9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_6)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_7, (float)L_8)))))), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_9);
		// unit_resultCost[1] = Mathf.RoundToInt(arc_cost * (1 + (UnitCostBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = __this->get_unit_resultCost_29();
		int32_t L_11 = __this->get_arc_cost_17();
		float L_12 = __this->get_UnitCostBuffPrc_25();
		float L_13 = ___prc0;
		int32_t L_14;
		L_14 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_11)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_12, (float)L_13)))))), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_14);
		// unit_resultCost[2] = Mathf.RoundToInt(mag_cost * (1 + (UnitCostBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = __this->get_unit_resultCost_29();
		int32_t L_16 = __this->get_mag_cost_22();
		float L_17 = __this->get_UnitCostBuffPrc_25();
		float L_18 = ___prc0;
		int32_t L_19;
		L_19 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_16)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_17, (float)L_18)))))), /*hidden argument*/NULL);
		NullCheck(L_15);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_19);
		// UnitCostBuffPrc += prc;
		float L_20 = __this->get_UnitCostBuffPrc_25();
		float L_21 = ___prc0;
		__this->set_UnitCostBuffPrc_25(((float)il2cpp_codegen_add((float)L_20, (float)L_21)));
		// UnitCostSetting();
		VariableManager_UnitCostSetting_mD3C619FD17092F3DD6289FAE97EB4F72595151FD(__this, /*hidden argument*/NULL);
	}

IL_00ac:
	{
		// }
		return;
	}
}
// System.Void VariableManager::UnitCostSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_UnitCostSetting_mD3C619FD17092F3DD6289FAE97EB4F72595151FD (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, const RuntimeMethod* method)
{
	{
		// Unit1.text = unit_resultCost[0].ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_Unit1_30();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = __this->get_unit_resultCost_29();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)((L_1)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// Unit2.text = unit_resultCost[1].ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_Unit2_31();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = __this->get_unit_resultCost_29();
		NullCheck(L_4);
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_5);
		// Unit3.text = unit_resultCost[2].ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_6 = __this->get_Unit3_32();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = __this->get_unit_resultCost_29();
		NullCheck(L_7);
		String_t* L_8;
		L_8 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(2))), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_8);
		// }
		return;
	}
}
// System.Void VariableManager::BuildingCostEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_BuildingCostEffect_m33B440011C79FAAC3B2202B35BCD6DD5709C6C6D (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mC08B6BECDD19BF12162E08CE4496604CC29C5849_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		// if(isBuildCostEffect)
		bool L_0 = __this->get_isBuildCostEffect_54();
		V_0 = L_0;
		bool L_1 = V_0;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		// buildEffects.Enqueue(prc);
		Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * L_2 = __this->get_buildEffects_55();
		float L_3 = ___prc0;
		NullCheck(L_2);
		Queue_1_Enqueue_mC08B6BECDD19BF12162E08CE4496604CC29C5849(L_2, L_3, /*hidden argument*/Queue_1_Enqueue_mC08B6BECDD19BF12162E08CE4496604CC29C5849_RuntimeMethod_var);
		// return;
		goto IL_0084;
	}

IL_001b:
	{
		// else if(!isBuildCostEffect)
		bool L_4 = __this->get_isBuildCostEffect_54();
		V_1 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_007d;
		}
	}
	{
		// currentBuff = prc;
		float L_6 = ___prc0;
		__this->set_currentBuff_56(L_6);
		// isBuildCostEffect = true;
		__this->set_isBuildCostEffect_54((bool)1);
		// for(int i = 0; i < 3; i++)
		V_2 = 0;
		goto IL_0066;
	}

IL_003b:
	{
		// building_resultCost[i] = Mathf.RoundToInt(building_costs[i] * (1 + (BuildingCostBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = __this->get_building_resultCost_44();
		int32_t L_8 = V_2;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_9 = __this->get_building_costs_42();
		int32_t L_10 = V_2;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		int32_t L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		float L_13 = __this->get_BuildingCostBuffPrc_26();
		float L_14 = ___prc0;
		int32_t L_15;
		L_15 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_12)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_13, (float)L_14)))))), /*hidden argument*/NULL);
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (int32_t)L_15);
		// for(int i = 0; i < 3; i++)
		int32_t L_16 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1));
	}

IL_0066:
	{
		// for(int i = 0; i < 3; i++)
		int32_t L_17 = V_2;
		V_3 = (bool)((((int32_t)L_17) < ((int32_t)3))? 1 : 0);
		bool L_18 = V_3;
		if (L_18)
		{
			goto IL_003b;
		}
	}
	{
		// BuildingCostBuffPrc += prc;
		float L_19 = __this->get_BuildingCostBuffPrc_26();
		float L_20 = ___prc0;
		__this->set_BuildingCostBuffPrc_26(((float)il2cpp_codegen_add((float)L_19, (float)L_20)));
	}

IL_007d:
	{
		// BuildingCostSetting();
		VariableManager_BuildingCostSetting_m52C7744D47AE670E4E5C32CA2F35BCC31BD2E4CC(__this, /*hidden argument*/NULL);
	}

IL_0084:
	{
		// }
		return;
	}
}
// System.Void VariableManager::BuildingCostSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_BuildingCostSetting_m52C7744D47AE670E4E5C32CA2F35BCC31BD2E4CC (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	{
		// if(building1.GetComponent<CreateBuilding>().level < 3)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_0 = __this->get_building1_45();
		NullCheck(L_0);
		CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4 * L_1;
		L_1 = Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B(L_0, /*hidden argument*/Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2 = L_1->get_level_7();
		V_0 = (bool)((((int32_t)L_2) < ((int32_t)3))? 1 : 0);
		bool L_3 = V_0;
		if (!L_3)
		{
			goto IL_0046;
		}
	}
	{
		// building1_cost.text = building_resultCost[building1.GetComponent<CreateBuilding>().level].ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_building1_cost_51();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_building_resultCost_44();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_6 = __this->get_building1_45();
		NullCheck(L_6);
		CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4 * L_7;
		L_7 = Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B(L_6, /*hidden argument*/Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = L_7->get_level_7();
		NullCheck(L_5);
		String_t* L_9;
		L_9 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_9);
	}

IL_0046:
	{
		// if(building2.GetComponent<CreateBuilding>().level < 3)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_10 = __this->get_building2_46();
		NullCheck(L_10);
		CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4 * L_11;
		L_11 = Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B(L_10, /*hidden argument*/Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B_RuntimeMethod_var);
		NullCheck(L_11);
		int32_t L_12 = L_11->get_level_7();
		V_1 = (bool)((((int32_t)L_12) < ((int32_t)3))? 1 : 0);
		bool L_13 = V_1;
		if (!L_13)
		{
			goto IL_008b;
		}
	}
	{
		// building2_cost.text = building_resultCost[building2.GetComponent<CreateBuilding>().level].ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_14 = __this->get_building2_cost_52();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_15 = __this->get_building_resultCost_44();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_16 = __this->get_building2_46();
		NullCheck(L_16);
		CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4 * L_17;
		L_17 = Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B(L_16, /*hidden argument*/Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B_RuntimeMethod_var);
		NullCheck(L_17);
		int32_t L_18 = L_17->get_level_7();
		NullCheck(L_15);
		String_t* L_19;
		L_19 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), /*hidden argument*/NULL);
		NullCheck(L_14);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_19);
	}

IL_008b:
	{
		// if(building3.GetComponent<CreateBuilding>().level < 3)
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_20 = __this->get_building3_47();
		NullCheck(L_20);
		CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4 * L_21;
		L_21 = Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B(L_20, /*hidden argument*/Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B_RuntimeMethod_var);
		NullCheck(L_21);
		int32_t L_22 = L_21->get_level_7();
		V_2 = (bool)((((int32_t)L_22) < ((int32_t)3))? 1 : 0);
		bool L_23 = V_2;
		if (!L_23)
		{
			goto IL_00d0;
		}
	}
	{
		// building3_cost.text = building_resultCost[building3.GetComponent<CreateBuilding>().level].ToString();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_24 = __this->get_building3_cost_53();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_25 = __this->get_building_resultCost_44();
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_26 = __this->get_building3_47();
		NullCheck(L_26);
		CreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4 * L_27;
		L_27 = Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B(L_26, /*hidden argument*/Component_GetComponent_TisCreateBuilding_tEDA18753F0006E082BA297AE7A5E8E01A76A41D4_mF4F36915A3498B5B7B645F972C4304602408654B_RuntimeMethod_var);
		NullCheck(L_27);
		int32_t L_28 = L_27->get_level_7();
		NullCheck(L_25);
		String_t* L_29;
		L_29 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)((L_25)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_28))), /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_24, L_29);
	}

IL_00d0:
	{
		// }
		return;
	}
}
// System.Void VariableManager::UnitActiveCostEffect(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_UnitActiveCostEffect_mEE27D0ECE331C033E0DEC15F1B82E6C59CBF351A (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, int32_t ___number0, const RuntimeMethod* method)
{
	{
		// war_act += number;
		int32_t L_0 = __this->get_war_act_11();
		int32_t L_1 = ___number0;
		__this->set_war_act_11(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1)));
		// arc_act += number;
		int32_t L_2 = __this->get_arc_act_16();
		int32_t L_3 = ___number0;
		__this->set_arc_act_16(((int32_t)il2cpp_codegen_add((int32_t)L_2, (int32_t)L_3)));
		// mag_act += number;
		int32_t L_4 = __this->get_mag_act_21();
		int32_t L_5 = ___number0;
		__this->set_mag_act_21(((int32_t)il2cpp_codegen_add((int32_t)L_4, (int32_t)L_5)));
		// }
		return;
	}
}
// System.Void VariableManager::GoodsProductionEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_GoodsProductionEffect_mC00788F50C1C058D362D0D6BEC3CB1B49131F66D (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method)
{
	TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* V_0 = NULL;
	int32_t V_1 = 0;
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * V_2 = NULL;
	{
		// foreach(Tile t in CentralProcessor.Instance.tiles)
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_0;
		L_0 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_0);
		TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* L_1 = L_0->get_tiles_22();
		V_0 = L_1;
		V_1 = 0;
		goto IL_003c;
	}

IL_0011:
	{
		// foreach(Tile t in CentralProcessor.Instance.tiles)
		TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// t.result_money = Mathf.RoundToInt(t.money * (1 + (MoneyBuffPrc + prc)));
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_6 = V_2;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_money_23();
		float L_9 = __this->get_MoneyBuffPrc_57();
		float L_10 = ___prc0;
		int32_t L_11;
		L_11 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_8)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_9, (float)L_10)))))), /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_result_money_24(L_11);
		int32_t L_12 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003c:
	{
		// foreach(Tile t in CentralProcessor.Instance.tiles)
		int32_t L_13 = V_1;
		TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* L_14 = V_0;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// MoneyBuffPrc += prc;
		float L_15 = __this->get_MoneyBuffPrc_57();
		float L_16 = ___prc0;
		__this->set_MoneyBuffPrc_57(((float)il2cpp_codegen_add((float)L_15, (float)L_16)));
		// }
		return;
	}
}
// System.Void VariableManager::GoodsProductionSetting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_GoodsProductionSetting_mB6067A2A38648F91B7C26F34F3C6BFF757546925 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, const RuntimeMethod* method)
{
	TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* V_0 = NULL;
	int32_t V_1 = 0;
	Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * V_2 = NULL;
	{
		// foreach(Tile t in CentralProcessor.Instance.tiles)
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_0;
		L_0 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_0);
		TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* L_1 = L_0->get_tiles_22();
		V_0 = L_1;
		V_1 = 0;
		goto IL_003a;
	}

IL_0011:
	{
		// foreach(Tile t in CentralProcessor.Instance.tiles)
		TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		V_2 = L_5;
		// t.result_money = Mathf.RoundToInt(t.money * (1 + MoneyBuffPrc));
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_6 = V_2;
		Tile_t3D2E5A7ADB4BFF3EFDB822F1382A7FCA384F07A2 * L_7 = V_2;
		NullCheck(L_7);
		int32_t L_8 = L_7->get_money_23();
		float L_9 = __this->get_MoneyBuffPrc_57();
		int32_t L_10;
		L_10 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_8)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)L_9)))), /*hidden argument*/NULL);
		NullCheck(L_6);
		L_6->set_result_money_24(L_10);
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1));
	}

IL_003a:
	{
		// foreach(Tile t in CentralProcessor.Instance.tiles)
		int32_t L_12 = V_1;
		TileU5BU5D_tE21E3527F7A406A2700E4462B254F023CB4EA707* L_13 = V_0;
		NullCheck(L_13);
		if ((((int32_t)L_12) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length))))))
		{
			goto IL_0011;
		}
	}
	{
		// }
		return;
	}
}
// System.Void VariableManager::OccupationCostEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_OccupationCostEffect_mADC4F09F6D8310DFB282ECDE1CE63C2201CA8ECA (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method)
{
	{
		// result_Occupation = occupationCost * (1 + (OccupationCostBuffPrc + prc));
		int32_t L_0 = __this->get_occupationCost_58();
		float L_1 = __this->get_OccupationCostBuffPrc_60();
		float L_2 = ___prc0;
		__this->set_result_Occupation_59(((float)il2cpp_codegen_multiply((float)((float)((float)L_0)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_1, (float)L_2)))))));
		// OccupationCostBuffPrc += prc;
		float L_3 = __this->get_OccupationCostBuffPrc_60();
		float L_4 = ___prc0;
		__this->set_OccupationCostBuffPrc_60(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// }
		return;
	}
}
// System.Void VariableManager::UnitDefensiveEffect(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_UnitDefensiveEffect_mB1D61B87D25249334D1A6B67F307E230EBE9253E (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// result_UnitDefence[0] = Mathf.RoundToInt(war_def * (1 + (UnitDefenceBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_result_UnitDefence_24();
		int32_t L_1 = __this->get_war_def_10();
		float L_2 = __this->get_UnitDefenceBuffPrc_28();
		float L_3 = ___prc0;
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_1)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_2, (float)L_3)))))), /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_4);
		// result_UnitDefence[1] = Mathf.RoundToInt(arc_def * (1 + (UnitDefenceBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_result_UnitDefence_24();
		int32_t L_6 = __this->get_arc_def_15();
		float L_7 = __this->get_UnitDefenceBuffPrc_28();
		float L_8 = ___prc0;
		int32_t L_9;
		L_9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_6)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_7, (float)L_8)))))), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_9);
		// result_UnitDefence[2] = Mathf.RoundToInt(mag_def * (1 + (UnitDefenceBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = __this->get_result_UnitDefence_24();
		int32_t L_11 = __this->get_mag_def_20();
		float L_12 = __this->get_UnitDefenceBuffPrc_28();
		float L_13 = ___prc0;
		int32_t L_14;
		L_14 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_11)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_12, (float)L_13)))))), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_14);
		// if(isMaster)
		bool L_15 = __this->get_isMaster_61();
		V_0 = L_15;
		bool L_16 = V_0;
		if (!L_16)
		{
			goto IL_009c;
		}
	}
	{
		// CentralProcessor.Instance.ApplyUnitDefenceEffect(7, result_UnitDefence[0], result_UnitDefence[1], result_UnitDefence[2]);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_17;
		L_17 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = __this->get_result_UnitDefence_24();
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_result_UnitDefence_24();
		NullCheck(L_21);
		int32_t L_22 = 1;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_result_UnitDefence_24();
		NullCheck(L_24);
		int32_t L_25 = 2;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_17);
		CentralProcessor_ApplyUnitDefenceEffect_m272DAA5BAD58E9868BFC2F2293C3A86D8F5AB647(L_17, 7, L_20, L_23, L_26, /*hidden argument*/NULL);
		goto IL_00c2;
	}

IL_009c:
	{
		// CentralProcessor.Instance.ApplyUnitDefenceEffect(8, result_UnitDefence[0], result_UnitDefence[1], result_UnitDefence[2]);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_27;
		L_27 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_28 = __this->get_result_UnitDefence_24();
		NullCheck(L_28);
		int32_t L_29 = 0;
		int32_t L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_31 = __this->get_result_UnitDefence_24();
		NullCheck(L_31);
		int32_t L_32 = 1;
		int32_t L_33 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_32));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_34 = __this->get_result_UnitDefence_24();
		NullCheck(L_34);
		int32_t L_35 = 2;
		int32_t L_36 = (L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_35));
		NullCheck(L_27);
		CentralProcessor_ApplyUnitDefenceEffect_m272DAA5BAD58E9868BFC2F2293C3A86D8F5AB647(L_27, 8, L_30, L_33, L_36, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		// UnitDefenceBuffPrc += prc;
		float L_37 = __this->get_UnitDefenceBuffPrc_28();
		float L_38 = ___prc0;
		__this->set_UnitDefenceBuffPrc_28(((float)il2cpp_codegen_add((float)L_37, (float)L_38)));
		// }
		return;
	}
}
// System.Void VariableManager::WarUnit_OffenceBuff(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_WarUnit_OffenceBuff_mDA309FAE5CFC90695A43058A42AB7AD8E65D9A00 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// result_UnitOffence[0] = Mathf.RoundToInt(war_off * (1 + (UnitOffenceBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_result_UnitOffence_23();
		int32_t L_1 = __this->get_war_off_9();
		float L_2 = __this->get_UnitOffenceBuffPrc_27();
		float L_3 = ___prc0;
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_1)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_2, (float)L_3)))))), /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_4);
		// if(isMaster)
		bool L_5 = __this->get_isMaster_61();
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// CentralProcessor.Instance.ApplyUnitOffenceEffect(7, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_7;
		L_7 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_result_UnitOffence_23();
		NullCheck(L_8);
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = __this->get_result_UnitOffence_23();
		NullCheck(L_11);
		int32_t L_12 = 1;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = __this->get_result_UnitOffence_23();
		NullCheck(L_14);
		int32_t L_15 = 2;
		int32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_7);
		CentralProcessor_ApplyUnitOffenceEffect_m43CF28C63B4A6334F214C5377DD4417D756DF7FE(L_7, 7, L_10, L_13, L_16, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_0056:
	{
		// CentralProcessor.Instance.ApplyUnitOffenceEffect(8, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_17;
		L_17 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = __this->get_result_UnitOffence_23();
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_result_UnitOffence_23();
		NullCheck(L_21);
		int32_t L_22 = 1;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_result_UnitOffence_23();
		NullCheck(L_24);
		int32_t L_25 = 2;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_17);
		CentralProcessor_ApplyUnitOffenceEffect_m43CF28C63B4A6334F214C5377DD4417D756DF7FE(L_17, 8, L_20, L_23, L_26, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// UnitOffenceBuffPrc += prc;
		float L_27 = __this->get_UnitOffenceBuffPrc_27();
		float L_28 = ___prc0;
		__this->set_UnitOffenceBuffPrc_27(((float)il2cpp_codegen_add((float)L_27, (float)L_28)));
		// }
		return;
	}
}
// System.Void VariableManager::ArcUnit_OffenceBuff(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_ArcUnit_OffenceBuff_m515F9386729C69FB28B9E7976791B114F76567B8 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// result_UnitOffence[1] = Mathf.RoundToInt(war_off * (1 + (UnitOffenceBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_result_UnitOffence_23();
		int32_t L_1 = __this->get_war_off_9();
		float L_2 = __this->get_UnitOffenceBuffPrc_27();
		float L_3 = ___prc0;
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_1)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_2, (float)L_3)))))), /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_4);
		// if(isMaster)
		bool L_5 = __this->get_isMaster_61();
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// CentralProcessor.Instance.ApplyUnitOffenceEffect(7, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_7;
		L_7 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_result_UnitOffence_23();
		NullCheck(L_8);
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = __this->get_result_UnitOffence_23();
		NullCheck(L_11);
		int32_t L_12 = 1;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = __this->get_result_UnitOffence_23();
		NullCheck(L_14);
		int32_t L_15 = 2;
		int32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_7);
		CentralProcessor_ApplyUnitOffenceEffect_m43CF28C63B4A6334F214C5377DD4417D756DF7FE(L_7, 7, L_10, L_13, L_16, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_0056:
	{
		// CentralProcessor.Instance.ApplyUnitOffenceEffect(8, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_17;
		L_17 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = __this->get_result_UnitOffence_23();
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_result_UnitOffence_23();
		NullCheck(L_21);
		int32_t L_22 = 1;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_result_UnitOffence_23();
		NullCheck(L_24);
		int32_t L_25 = 2;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_17);
		CentralProcessor_ApplyUnitOffenceEffect_m43CF28C63B4A6334F214C5377DD4417D756DF7FE(L_17, 8, L_20, L_23, L_26, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// UnitOffenceBuffPrc += prc;
		float L_27 = __this->get_UnitOffenceBuffPrc_27();
		float L_28 = ___prc0;
		__this->set_UnitOffenceBuffPrc_27(((float)il2cpp_codegen_add((float)L_27, (float)L_28)));
		// }
		return;
	}
}
// System.Void VariableManager::MagUnit_OffenceBuff(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_MagUnit_OffenceBuff_m64B0D6832A749EDF14C68FEE1BC23B86C9E76DFC (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method)
{
	bool V_0 = false;
	{
		// result_UnitOffence[2] = Mathf.RoundToInt(war_off * (1 + (UnitOffenceBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_result_UnitOffence_23();
		int32_t L_1 = __this->get_war_off_9();
		float L_2 = __this->get_UnitOffenceBuffPrc_27();
		float L_3 = ___prc0;
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_1)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_2, (float)L_3)))))), /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_4);
		// if(isMaster)
		bool L_5 = __this->get_isMaster_61();
		V_0 = L_5;
		bool L_6 = V_0;
		if (!L_6)
		{
			goto IL_0056;
		}
	}
	{
		// CentralProcessor.Instance.ApplyUnitOffenceEffect(7, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_7;
		L_7 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = __this->get_result_UnitOffence_23();
		NullCheck(L_8);
		int32_t L_9 = 0;
		int32_t L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = __this->get_result_UnitOffence_23();
		NullCheck(L_11);
		int32_t L_12 = 1;
		int32_t L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_14 = __this->get_result_UnitOffence_23();
		NullCheck(L_14);
		int32_t L_15 = 2;
		int32_t L_16 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
		NullCheck(L_7);
		CentralProcessor_ApplyUnitOffenceEffect_m43CF28C63B4A6334F214C5377DD4417D756DF7FE(L_7, 7, L_10, L_13, L_16, /*hidden argument*/NULL);
		goto IL_007c;
	}

IL_0056:
	{
		// CentralProcessor.Instance.ApplyUnitOffenceEffect(8, result_UnitOffence[0], result_UnitOffence[1], result_UnitOffence[2]);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_17;
		L_17 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_18 = __this->get_result_UnitOffence_23();
		NullCheck(L_18);
		int32_t L_19 = 0;
		int32_t L_20 = (L_18)->GetAt(static_cast<il2cpp_array_size_t>(L_19));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_21 = __this->get_result_UnitOffence_23();
		NullCheck(L_21);
		int32_t L_22 = 1;
		int32_t L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_24 = __this->get_result_UnitOffence_23();
		NullCheck(L_24);
		int32_t L_25 = 2;
		int32_t L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		NullCheck(L_17);
		CentralProcessor_ApplyUnitOffenceEffect_m43CF28C63B4A6334F214C5377DD4417D756DF7FE(L_17, 8, L_20, L_23, L_26, /*hidden argument*/NULL);
	}

IL_007c:
	{
		// UnitOffenceBuffPrc += prc;
		float L_27 = __this->get_UnitOffenceBuffPrc_27();
		float L_28 = ___prc0;
		__this->set_UnitOffenceBuffPrc_27(((float)il2cpp_codegen_add((float)L_27, (float)L_28)));
		// }
		return;
	}
}
// System.Void VariableManager::BuildingBuff_unitCost(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_BuildingBuff_unitCost_m3688F2996A954668D2315844EA5BB35BEC1B7DF6 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method)
{
	{
		// unit_resultCost[0] = Mathf.RoundToInt(war_cost * (1 + (UnitCostBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_unit_resultCost_29();
		int32_t L_1 = __this->get_war_cost_12();
		float L_2 = __this->get_UnitCostBuffPrc_25();
		float L_3 = ___prc0;
		int32_t L_4;
		L_4 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_1)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_2, (float)L_3)))))), /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)L_4);
		// unit_resultCost[1] = Mathf.RoundToInt(arc_cost * (1 + (UnitCostBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_5 = __this->get_unit_resultCost_29();
		int32_t L_6 = __this->get_arc_cost_17();
		float L_7 = __this->get_UnitCostBuffPrc_25();
		float L_8 = ___prc0;
		int32_t L_9;
		L_9 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_6)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_7, (float)L_8)))))), /*hidden argument*/NULL);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)L_9);
		// unit_resultCost[2] = Mathf.RoundToInt(mag_cost * (1 + (UnitCostBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_10 = __this->get_unit_resultCost_29();
		int32_t L_11 = __this->get_mag_cost_22();
		float L_12 = __this->get_UnitCostBuffPrc_25();
		float L_13 = ___prc0;
		int32_t L_14;
		L_14 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_11)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_12, (float)L_13)))))), /*hidden argument*/NULL);
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(2), (int32_t)L_14);
		// UnitCostBuffPrc += prc;
		float L_15 = __this->get_UnitCostBuffPrc_25();
		float L_16 = ___prc0;
		__this->set_UnitCostBuffPrc_25(((float)il2cpp_codegen_add((float)L_15, (float)L_16)));
		// UnitCostSetting();
		VariableManager_UnitCostSetting_mD3C619FD17092F3DD6289FAE97EB4F72595151FD(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableManager::BuildingBuff_buildingCost(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_BuildingBuff_buildingCost_m42D36D06CF00AD3CE07F15528FF739CDFF4FA682 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, float ___prc0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		// for(int i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0030;
	}

IL_0005:
	{
		// building_resultCost[i] = Mathf.RoundToInt(building_costs[i] * (1 + (BuildingCostBuffPrc + prc)));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = __this->get_building_resultCost_44();
		int32_t L_1 = V_0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = __this->get_building_costs_42();
		int32_t L_3 = V_0;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		int32_t L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		float L_6 = __this->get_BuildingCostBuffPrc_26();
		float L_7 = ___prc0;
		int32_t L_8;
		L_8 = Mathf_RoundToInt_m56850BDF60FF9E3441CE57E5EFEFEF36EDCDE6DD(((float)il2cpp_codegen_multiply((float)((float)((float)L_5)), (float)((float)il2cpp_codegen_add((float)(1.0f), (float)((float)il2cpp_codegen_add((float)L_6, (float)L_7)))))), /*hidden argument*/NULL);
		NullCheck(L_0);
		(L_0)->SetAt(static_cast<il2cpp_array_size_t>(L_1), (int32_t)L_8);
		// for(int i = 0; i < 3; i++)
		int32_t L_9 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1));
	}

IL_0030:
	{
		// for(int i = 0; i < 3; i++)
		int32_t L_10 = V_0;
		V_1 = (bool)((((int32_t)L_10) < ((int32_t)3))? 1 : 0);
		bool L_11 = V_1;
		if (L_11)
		{
			goto IL_0005;
		}
	}
	{
		// BuildingCostBuffPrc += prc;
		float L_12 = __this->get_BuildingCostBuffPrc_26();
		float L_13 = ___prc0;
		__this->set_BuildingCostBuffPrc_26(((float)il2cpp_codegen_add((float)L_12, (float)L_13)));
		// BuildingCostSetting();
		VariableManager_BuildingCostSetting_m52C7744D47AE670E4E5C32CA2F35BCC31BD2E4CC(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void VariableManager::UnitStatisticsInit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager_UnitStatisticsInit_m99E8C358ED28C25E39D41FB20ABCD10A670289D4 (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, int32_t ___type0, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// switch(type)
		int32_t L_0 = ___type0;
		V_1 = L_0;
		int32_t L_1 = V_1;
		V_0 = L_1;
		int32_t L_2 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract((int32_t)L_2, (int32_t)1)))
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0021;
	}

IL_001b:
	{
		// break;
		goto IL_0021;
	}

IL_001d:
	{
		// break;
		goto IL_0021;
	}

IL_001f:
	{
		// break;
		goto IL_0021;
	}

IL_0021:
	{
		// }
		return;
	}
}
// System.Void VariableManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VariableManager__ctor_mF270F9EEEA182BC2805632FEF2612198041BD02C (VariableManager_t1990AAA89B327278B8B288EE60BE304BA6BFCAB5 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m5A3929183CBF24FC945AE80DE33DAFB0350720F3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public int[] result_UnitOffence = new int[3];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_0 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_result_UnitOffence_23(L_0);
		// public int[] result_UnitDefence = new int[3];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_result_UnitDefence_24(L_1);
		// public float UnitCostBuffPrc = 0;
		__this->set_UnitCostBuffPrc_25((0.0f));
		// public float BuildingCostBuffPrc = 0;
		__this->set_BuildingCostBuffPrc_26((0.0f));
		// public float UnitOffenceBuffPrc = 0;
		__this->set_UnitOffenceBuffPrc_27((0.0f));
		// public float UnitDefenceBuffPrc = 0;
		__this->set_UnitDefenceBuffPrc_28((0.0f));
		// public int[] unit_resultCost = new int[3];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_unit_resultCost_29(L_2);
		// public Queue<float> UnitEffects = new Queue<float>();
		Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * L_3 = (Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC *)il2cpp_codegen_object_new(Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC_il2cpp_TypeInfo_var);
		Queue_1__ctor_m5A3929183CBF24FC945AE80DE33DAFB0350720F3(L_3, /*hidden argument*/Queue_1__ctor_m5A3929183CBF24FC945AE80DE33DAFB0350720F3_RuntimeMethod_var);
		__this->set_UnitEffects_33(L_3);
		// public bool isUnitCostEffect = false;
		__this->set_isUnitCostEffect_34((bool)0);
		// public int War_offBuffPrc = 0;
		__this->set_War_offBuffPrc_36(0);
		// public int Arc_offBuffPrc = 0;
		__this->set_Arc_offBuffPrc_37(0);
		// public int Mag_offBuffPrc = 0;
		__this->set_Mag_offBuffPrc_38(0);
		// public int War_DefBuffPrc = 0;
		__this->set_War_DefBuffPrc_39(0);
		// public int Arc_DefBuffPrc = 0;
		__this->set_Arc_DefBuffPrc_40(0);
		// public int Mag_DefBuffPrc = 0;
		__this->set_Mag_DefBuffPrc_41(0);
		// public int[] building_resultCost = new int[3];
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_building_resultCost_44(L_4);
		// public bool isBuildCostEffect = false;
		__this->set_isBuildCostEffect_54((bool)0);
		// public Queue<float> buildEffects = new Queue<float>();
		Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC * L_5 = (Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC *)il2cpp_codegen_object_new(Queue_1_tCF059C59C522B3CD0D51EDC9C0E3758B371568AC_il2cpp_TypeInfo_var);
		Queue_1__ctor_m5A3929183CBF24FC945AE80DE33DAFB0350720F3(L_5, /*hidden argument*/Queue_1__ctor_m5A3929183CBF24FC945AE80DE33DAFB0350720F3_RuntimeMethod_var);
		__this->set_buildEffects_55(L_5);
		// public float MoneyBuffPrc = 0;
		__this->set_MoneyBuffPrc_57((0.0f));
		// public int occupationCost = 1;
		__this->set_occupationCost_58(1);
		// public float result_Occupation = 1;
		__this->set_result_Occupation_59((1.0f));
		// public float OccupationCostBuffPrc = 0;
		__this->set_OccupationCostBuffPrc_60((0.0f));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CentralProcessor/<Timer>d__61::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__61__ctor_mE57558A8EFCF7CE3E9DA6D061154820296B7E43A (U3CTimerU3Ed__61_t956D6F909FCA5605E6E77FE0146C2CEA82746FF4 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void CentralProcessor/<Timer>d__61::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__61_System_IDisposable_Dispose_mF8866B967BBD1DCE43016D1DF466943F414F3EC6 (U3CTimerU3Ed__61_t956D6F909FCA5605E6E77FE0146C2CEA82746FF4 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean CentralProcessor/<Timer>d__61::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTimerU3Ed__61_MoveNext_mC760EC4ABFB77B8CA445E77CA549DA004E523445 (U3CTimerU3Ed__61_t956D6F909FCA5605E6E77FE0146C2CEA82746FF4 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	float V_2 = 0.0f;
	bool V_3 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00b7;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// selectCount = time;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_3 = __this->get_U3CU3E4__this_2();
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		float L_5 = L_4->get_time_33();
		NullCheck(L_3);
		L_3->set_selectCount_34(L_5);
		goto IL_00bf;
	}

IL_003e:
	{
		// if(Mathf.Floor(selectCount) <= 0)
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		float L_7 = L_6->get_selectCount_34();
		float L_8;
		L_8 = floorf(L_7);
		V_1 = (bool)((((int32_t)((!(((float)L_8) <= ((float)(0.0f))))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		bool L_9 = V_1;
		if (!L_9)
		{
			goto IL_0060;
		}
	}
	{
		// break;
		goto IL_00c6;
	}

IL_0060:
	{
		// selectCount -= Time.deltaTime;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_10 = __this->get_U3CU3E4__this_2();
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_11 = __this->get_U3CU3E4__this_2();
		NullCheck(L_11);
		float L_12 = L_11->get_selectCount_34();
		float L_13;
		L_13 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		NullCheck(L_10);
		L_10->set_selectCount_34(((float)il2cpp_codegen_subtract((float)L_12, (float)L_13)));
		// timer.text = Mathf.Floor(selectCount).ToString();
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_14 = __this->get_U3CU3E4__this_2();
		NullCheck(L_14);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_15 = L_14->get_timer_32();
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_16 = __this->get_U3CU3E4__this_2();
		NullCheck(L_16);
		float L_17 = L_16->get_selectCount_34();
		float L_18;
		L_18 = floorf(L_17);
		V_2 = L_18;
		String_t* L_19;
		L_19 = Single_ToString_m80E7ABED4F4D73F2BE19DDB80D3D92FCD8DFA010((float*)(&V_2), /*hidden argument*/NULL);
		NullCheck(L_15);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_19);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00b7:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00bf:
	{
		// while(true)
		V_3 = (bool)1;
		goto IL_003e;
	}

IL_00c6:
	{
		// AddTurnNumber();
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_20 = __this->get_U3CU3E4__this_2();
		NullCheck(L_20);
		CentralProcessor_AddTurnNumber_m175887DCFDAECCE9E9677AEDFF9774AC038B7694(L_20, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object CentralProcessor/<Timer>d__61::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTimerU3Ed__61_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mD34837B5206EE36984A21D46DB10E59192A66A16 (U3CTimerU3Ed__61_t956D6F909FCA5605E6E77FE0146C2CEA82746FF4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void CentralProcessor/<Timer>d__61::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTimerU3Ed__61_System_Collections_IEnumerator_Reset_mD59534AA4CB3683E486D439D25B0A616341A1DAF (U3CTimerU3Ed__61_t956D6F909FCA5605E6E77FE0146C2CEA82746FF4 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTimerU3Ed__61_System_Collections_IEnumerator_Reset_mD59534AA4CB3683E486D439D25B0A616341A1DAF_RuntimeMethod_var)));
	}
}
// System.Object CentralProcessor/<Timer>d__61::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CTimerU3Ed__61_System_Collections_IEnumerator_get_Current_m6BE74BE8EA7460373105DA084794007372552FAE (U3CTimerU3Ed__61_t956D6F909FCA5605E6E77FE0146C2CEA82746FF4 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void CentralProcessor/<Waiting>d__60::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitingU3Ed__60__ctor_mDCF875C45FDDCA0A015C27499E0429D6BF5E8156 (U3CWaitingU3Ed__60_tB89CF651F56ED6EA7E1A82654E2D65E6949282C9 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void CentralProcessor/<Waiting>d__60::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitingU3Ed__60_System_IDisposable_Dispose_mE930712C2C69B4194BD62DB29A26637D2A86B38A (U3CWaitingU3Ed__60_tB89CF651F56ED6EA7E1A82654E2D65E6949282C9 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean CentralProcessor/<Waiting>d__60::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CWaitingU3Ed__60_MoveNext_mEB1FE30902378E3211996FAB0B5160CA94FEE9F3 (U3CWaitingU3Ed__60_tB89CF651F56ED6EA7E1A82654E2D65E6949282C9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47B98D201F3C30E30D9082C15A0E7E64267B917F);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_0072;
	}

IL_001f:
	{
		goto IL_00ca;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		goto IL_00d2;
	}

IL_0033:
	{
		// if(PhotonNetwork.PlayerList.Length > 1)
		IL2CPP_RUNTIME_CLASS_INIT(PhotonNetwork_tA2C1B90471C5934B55DF1921941466208D3054EC_il2cpp_TypeInfo_var);
		PlayerU5BU5D_t092E5B6C62AD4995428A64FD546C5B79741E6DA3* L_2;
		L_2 = PhotonNetwork_get_PlayerList_m58666A21470BC619A3B134B9C0E303070A9BCCBB(/*hidden argument*/NULL);
		NullCheck(L_2);
		V_1 = (bool)((((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_2)->max_length)))) > ((int32_t)1))? 1 : 0);
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_00ba;
		}
	}
	{
		// waitingText.text = "매칭완료";
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_4 = __this->get_U3CU3E4__this_2();
		NullCheck(L_4);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4->get_waitingText_27();
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, _stringLiteral47B98D201F3C30E30D9082C15A0E7E64267B917F);
		// yield return new WaitForSeconds(2);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_6 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_6, (2.0f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_6);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0072:
	{
		__this->set_U3CU3E1__state_0((-1));
		// uIManager.state = UIManager.State.Idle;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_8 = L_7->get_uIManager_7();
		NullCheck(L_8);
		L_8->set_state_52(2);
		// waitingPanel.gameObject.SetActive(false);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = L_9->get_waitingPanel_26();
		NullCheck(L_10);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_10, /*hidden argument*/NULL);
		NullCheck(L_11);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_11, (bool)0, /*hidden argument*/NULL);
		// cloud.gameObject.SetActive(true);
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_12 = __this->get_U3CU3E4__this_2();
		NullCheck(L_12);
		Cloud_tF7F58C93A5DC1F1378D97ACFF462C47C831114B3 * L_13 = L_12->get_cloud_29();
		NullCheck(L_13);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14;
		L_14 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_13, /*hidden argument*/NULL);
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)1, /*hidden argument*/NULL);
		// break;
		goto IL_00d9;
	}

IL_00ba:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_00ca:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_00d2:
	{
		// while(true)
		V_2 = (bool)1;
		goto IL_0033;
	}

IL_00d9:
	{
		// }
		return (bool)0;
	}
}
// System.Object CentralProcessor/<Waiting>d__60::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitingU3Ed__60_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6ADB381084625D7901BDA236CBEC16010B687F27 (U3CWaitingU3Ed__60_tB89CF651F56ED6EA7E1A82654E2D65E6949282C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void CentralProcessor/<Waiting>d__60::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CWaitingU3Ed__60_System_Collections_IEnumerator_Reset_m79DF4FD32D379D2B593178321107AF952787FA20 (U3CWaitingU3Ed__60_tB89CF651F56ED6EA7E1A82654E2D65E6949282C9 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CWaitingU3Ed__60_System_Collections_IEnumerator_Reset_m79DF4FD32D379D2B593178321107AF952787FA20_RuntimeMethod_var)));
	}
}
// System.Object CentralProcessor/<Waiting>d__60::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CWaitingU3Ed__60_System_Collections_IEnumerator_get_Current_mCA671278DD2BE1063D01C476B3145031EE56CA28 (U3CWaitingU3Ed__60_tB89CF651F56ED6EA7E1A82654E2D65E6949282C9 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Decision/Actions::.ctor(System.String,System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Actions__ctor_mBF54086ADEE00BD64652203D87CCF1DEF7FFFE9A (Actions_tE39A59E3DE75D3E86935E7B826A2A3CFD578F2A0 * __this, String_t* ____desc0, String_t* ____effect1, int32_t ____buffNum2, const RuntimeMethod* method)
{
	{
		// public Actions(string _desc, string _effect, int _buffNum)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// this.desc = _desc;
		String_t* L_0 = ____desc0;
		__this->set_desc_0(L_0);
		// this.effect = _effect;
		String_t* L_1 = ____effect1;
		__this->set_effect_1(L_1);
		// this.buffNum = _buffNum;
		int32_t L_2 = ____buffNum2;
		__this->set_buffNum_2(L_2);
		// }
		return;
	}
}
// System.String Decision/Actions::ReturnDesc()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Actions_ReturnDesc_m624294B3D42E0C2844E9D4920958FE682FFA2DA4 (Actions_tE39A59E3DE75D3E86935E7B826A2A3CFD578F2A0 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return this.desc;
		String_t* L_0 = __this->get_desc_0();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.String Decision/Actions::ReturnEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Actions_ReturnEffect_mEB73D7D626F68C26EE3B4DE1572B6CD17E04C29C (Actions_tE39A59E3DE75D3E86935E7B826A2A3CFD578F2A0 * __this, const RuntimeMethod* method)
{
	String_t* V_0 = NULL;
	{
		// return this.effect;
		String_t* L_0 = __this->get_effect_1();
		V_0 = L_0;
		goto IL_000a;
	}

IL_000a:
	{
		// }
		String_t* L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Decision/Actions::ReturnBuffNum()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Actions_ReturnBuffNum_m5C79C2FF631BB2B14C87312B4F43988F9BA9C26D (Actions_tE39A59E3DE75D3E86935E7B826A2A3CFD578F2A0 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// return this.buffNum;
		int32_t L_0 = __this->get_buffNum_2();
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
// System.Void Decision/Actions::Show()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Actions_Show_m692319E3AEFD38C97C723104F5C809471C2E7FD9 (Actions_tE39A59E3DE75D3E86935E7B826A2A3CFD578F2A0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log(desc);
		String_t* L_0 = __this->get_desc_0();
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_0, /*hidden argument*/NULL);
		// Debug.Log(effect);
		String_t* L_1 = __this->get_effect_1();
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_1, /*hidden argument*/NULL);
		// Debug.Log(buffNum);
		int32_t L_2 = __this->get_buffNum_2();
		int32_t L_3 = L_2;
		RuntimeObject * L_4 = Box(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var, &L_3);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_4, /*hidden argument*/NULL);
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
// System.Void Decision/DecisionSituation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DecisionSituation__ctor_m2CA20E3A07E63D601E41C1283F8D5A2D47821925 (DecisionSituation_t243F55B25AA62817C27D52752DD1206CA89A502C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void TitleChar/<MafiaCharFadeIn>d__12::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMafiaCharFadeInU3Ed__12__ctor_m95F599D01D1042A33A5C657575367B0079EBE31D (U3CMafiaCharFadeInU3Ed__12_t6329ACF7DCB628858FB44E7EBF075D16E28579B0 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TitleChar/<MafiaCharFadeIn>d__12::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMafiaCharFadeInU3Ed__12_System_IDisposable_Dispose_m76190B8F91292AB5D40EC5451602935F4BD3053E (U3CMafiaCharFadeInU3Ed__12_t6329ACF7DCB628858FB44E7EBF075D16E28579B0 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TitleChar/<MafiaCharFadeIn>d__12::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMafiaCharFadeInU3Ed__12_MoveNext_mB19967F60F9F2F3DC1C8C54AC4B265F899EF5BA8 (U3CMafiaCharFadeInU3Ed__12_t6329ACF7DCB628858FB44E7EBF075D16E28579B0 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AD6EF83C2BED140DF4A338DFA93FE8DC8FCC883);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDF40E87C0E368DB5E07BD396E30AE871FCF32C1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00a4;
	}

IL_0022:
	{
		goto IL_01b6;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
		// mafia.gameObject.SetActive(true);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = L_2->get_mafia_4();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// time = 0f;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		L_5->set_time_12((0.0f));
		// m_fadecolor.a = Mathf.Lerp(start, end, time);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_7 = L_6->get_address_of_m_fadecolor_7();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		float L_9 = L_8->get_start_10();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_10 = __this->get_U3CU3E4__this_2();
		NullCheck(L_10);
		float L_11 = L_10->get_end_11();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_12 = __this->get_U3CU3E4__this_2();
		NullCheck(L_12);
		float L_13 = L_12->get_time_12();
		float L_14;
		L_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_9, L_11, L_13, /*hidden argument*/NULL);
		L_7->set_a_3(L_14);
		goto IL_01bf;
	}

IL_0093:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(fade)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_15 = __this->get_U3CU3E4__this_2();
		NullCheck(L_15);
		bool L_16 = L_15->get_fade_14();
		V_1 = L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_00de;
		}
	}
	{
		// StartCoroutine("MafiaCharFadeOut");
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_18 = __this->get_U3CU3E4__this_2();
		NullCheck(L_18);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_19;
		L_19 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(L_18, _stringLiteral5AD6EF83C2BED140DF4A338DFA93FE8DC8FCC883, /*hidden argument*/NULL);
		// StopCoroutine("MafiaCharFadeIn");
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_20 = __this->get_U3CU3E4__this_2();
		NullCheck(L_20);
		MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B(L_20, _stringLiteralBDF40E87C0E368DB5E07BD396E30AE871FCF32C1, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// if(m_fadecolor.a < 1f)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_21 = __this->get_U3CU3E4__this_2();
		NullCheck(L_21);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_22 = L_21->get_address_of_m_fadecolor_7();
		float L_23 = L_22->get_a_3();
		V_2 = (bool)((((float)L_23) < ((float)(1.0f)))? 1 : 0);
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_0175;
		}
	}
	{
		// time += Time.deltaTime / FadeTime;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_25 = __this->get_U3CU3E4__this_2();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_26 = __this->get_U3CU3E4__this_2();
		NullCheck(L_26);
		float L_27 = L_26->get_time_12();
		float L_28;
		L_28 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_29 = __this->get_U3CU3E4__this_2();
		NullCheck(L_29);
		float L_30 = L_29->get_FadeTime_13();
		NullCheck(L_25);
		L_25->set_time_12(((float)il2cpp_codegen_add((float)L_27, (float)((float)((float)L_28/(float)L_30)))));
		// m_fadecolor.a = Mathf.Lerp(start, end, time);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_31 = __this->get_U3CU3E4__this_2();
		NullCheck(L_31);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_32 = L_31->get_address_of_m_fadecolor_7();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_33 = __this->get_U3CU3E4__this_2();
		NullCheck(L_33);
		float L_34 = L_33->get_start_10();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_35 = __this->get_U3CU3E4__this_2();
		NullCheck(L_35);
		float L_36 = L_35->get_end_11();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_37 = __this->get_U3CU3E4__this_2();
		NullCheck(L_37);
		float L_38 = L_37->get_time_12();
		float L_39;
		L_39 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_34, L_36, L_38, /*hidden argument*/NULL);
		L_32->set_a_3(L_39);
		// mafia.color = m_fadecolor;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_40 = __this->get_U3CU3E4__this_2();
		NullCheck(L_40);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41 = L_40->get_mafia_4();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_42 = __this->get_U3CU3E4__this_2();
		NullCheck(L_42);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = L_42->get_m_fadecolor_7();
		NullCheck(L_41);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_43);
	}

IL_0175:
	{
		// if(m_fadecolor.a == 1f)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_44 = __this->get_U3CU3E4__this_2();
		NullCheck(L_44);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_45 = L_44->get_address_of_m_fadecolor_7();
		float L_46 = L_45->get_a_3();
		V_3 = (bool)((((float)L_46) == ((float)(1.0f)))? 1 : 0);
		bool L_47 = V_3;
		if (!L_47)
		{
			goto IL_01be;
		}
	}
	{
		// fade = true;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_48 = __this->get_U3CU3E4__this_2();
		NullCheck(L_48);
		L_48->set_fade_14((bool)1);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_49 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_49, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_49);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01b6:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01be:
	{
	}

IL_01bf:
	{
		// while(true)
		V_4 = (bool)1;
		goto IL_0093;
	}
}
// System.Object TitleChar/<MafiaCharFadeIn>d__12::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMafiaCharFadeInU3Ed__12_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m830D4E0B927D1F38029CDD3E233C14A0A8690CF5 (U3CMafiaCharFadeInU3Ed__12_t6329ACF7DCB628858FB44E7EBF075D16E28579B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TitleChar/<MafiaCharFadeIn>d__12::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMafiaCharFadeInU3Ed__12_System_Collections_IEnumerator_Reset_m35C0025A874AC0EFF3BE3354CED4798236342662 (U3CMafiaCharFadeInU3Ed__12_t6329ACF7DCB628858FB44E7EBF075D16E28579B0 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMafiaCharFadeInU3Ed__12_System_Collections_IEnumerator_Reset_m35C0025A874AC0EFF3BE3354CED4798236342662_RuntimeMethod_var)));
	}
}
// System.Object TitleChar/<MafiaCharFadeIn>d__12::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMafiaCharFadeInU3Ed__12_System_Collections_IEnumerator_get_Current_m6B991D5E3FC43B47106702E9704DA869FECD62C5 (U3CMafiaCharFadeInU3Ed__12_t6329ACF7DCB628858FB44E7EBF075D16E28579B0 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TitleChar/<MafiaCharFadeOut>d__13::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMafiaCharFadeOutU3Ed__13__ctor_m45F4D1CDA3CD33CB10D758C3B90142D7D75D4CBB (U3CMafiaCharFadeOutU3Ed__13_t0571555C512697ADD15117FC2E2A5F2D93CAE983 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TitleChar/<MafiaCharFadeOut>d__13::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMafiaCharFadeOutU3Ed__13_System_IDisposable_Dispose_mA49CC612AB53B73401E35771979BD153E0665FC5 (U3CMafiaCharFadeOutU3Ed__13_t0571555C512697ADD15117FC2E2A5F2D93CAE983 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TitleChar/<MafiaCharFadeOut>d__13::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CMafiaCharFadeOutU3Ed__13_MoveNext_m3346F73D17DD1B10CD9BB75124F11A7B8C419768 (U3CMafiaCharFadeOutU3Ed__13_t0571555C512697ADD15117FC2E2A5F2D93CAE983 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5AD6EF83C2BED140DF4A338DFA93FE8DC8FCC883);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C3589B16E1820C20A474B2787E79663E4A17A2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_008a;
	}

IL_001f:
	{
		goto IL_01d2;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// time = 0f;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		L_2->set_time_12((0.0f));
		// m_fadecolor.a = Mathf.Lerp(end, start, time);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_4 = L_3->get_address_of_m_fadecolor_7();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		float L_6 = L_5->get_end_11();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		float L_8 = L_7->get_start_10();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		float L_10 = L_9->get_time_12();
		float L_11;
		L_11 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_6, L_8, L_10, /*hidden argument*/NULL);
		L_4->set_a_3(L_11);
		goto IL_01db;
	}

IL_0079:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(!fade)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_12 = __this->get_U3CU3E4__this_2();
		NullCheck(L_12);
		bool L_13 = L_12->get_fade_14();
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_00de;
		}
	}
	{
		// StartCoroutine("NewWaveCharFadeIn");
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_15 = __this->get_U3CU3E4__this_2();
		NullCheck(L_15);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_16;
		L_16 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(L_15, _stringLiteral85C3589B16E1820C20A474B2787E79663E4A17A2, /*hidden argument*/NULL);
		// StopCoroutine("MafiaCharFadeOut");
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_17 = __this->get_U3CU3E4__this_2();
		NullCheck(L_17);
		MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B(L_17, _stringLiteral5AD6EF83C2BED140DF4A338DFA93FE8DC8FCC883, /*hidden argument*/NULL);
		// mafia.gameObject.SetActive(false);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_18 = __this->get_U3CU3E4__this_2();
		NullCheck(L_18);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = L_18->get_mafia_4();
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)0, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// if(m_fadecolor.a > 0f)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_21 = __this->get_U3CU3E4__this_2();
		NullCheck(L_21);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_22 = L_21->get_address_of_m_fadecolor_7();
		float L_23 = L_22->get_a_3();
		V_2 = (bool)((((float)L_23) > ((float)(0.0f)))? 1 : 0);
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_0175;
		}
	}
	{
		// time += Time.deltaTime / FadeTime;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_25 = __this->get_U3CU3E4__this_2();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_26 = __this->get_U3CU3E4__this_2();
		NullCheck(L_26);
		float L_27 = L_26->get_time_12();
		float L_28;
		L_28 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_29 = __this->get_U3CU3E4__this_2();
		NullCheck(L_29);
		float L_30 = L_29->get_FadeTime_13();
		NullCheck(L_25);
		L_25->set_time_12(((float)il2cpp_codegen_add((float)L_27, (float)((float)((float)L_28/(float)L_30)))));
		// m_fadecolor.a = Mathf.Lerp(end, start, time);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_31 = __this->get_U3CU3E4__this_2();
		NullCheck(L_31);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_32 = L_31->get_address_of_m_fadecolor_7();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_33 = __this->get_U3CU3E4__this_2();
		NullCheck(L_33);
		float L_34 = L_33->get_end_11();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_35 = __this->get_U3CU3E4__this_2();
		NullCheck(L_35);
		float L_36 = L_35->get_start_10();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_37 = __this->get_U3CU3E4__this_2();
		NullCheck(L_37);
		float L_38 = L_37->get_time_12();
		float L_39;
		L_39 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_34, L_36, L_38, /*hidden argument*/NULL);
		L_32->set_a_3(L_39);
		// mafia.color = m_fadecolor;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_40 = __this->get_U3CU3E4__this_2();
		NullCheck(L_40);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41 = L_40->get_mafia_4();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_42 = __this->get_U3CU3E4__this_2();
		NullCheck(L_42);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = L_42->get_m_fadecolor_7();
		NullCheck(L_41);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_43);
	}

IL_0175:
	{
		// if(m_fadecolor.a == 0f)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_44 = __this->get_U3CU3E4__this_2();
		NullCheck(L_44);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_45 = L_44->get_address_of_m_fadecolor_7();
		float L_46 = L_45->get_a_3();
		V_3 = (bool)((((float)L_46) == ((float)(0.0f)))? 1 : 0);
		bool L_47 = V_3;
		if (!L_47)
		{
			goto IL_01da;
		}
	}
	{
		// fade = false;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_48 = __this->get_U3CU3E4__this_2();
		NullCheck(L_48);
		L_48->set_fade_14((bool)0);
		// mafia.color = m_fadecolor;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_49 = __this->get_U3CU3E4__this_2();
		NullCheck(L_49);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_50 = L_49->get_mafia_4();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_51 = __this->get_U3CU3E4__this_2();
		NullCheck(L_51);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52 = L_51->get_m_fadecolor_7();
		NullCheck(L_50);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_50, L_52);
		// yield return new WaitForSeconds(0.4f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_53 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_53, (0.400000006f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_53);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01d2:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01da:
	{
	}

IL_01db:
	{
		// while(true)
		V_4 = (bool)1;
		goto IL_0079;
	}
}
// System.Object TitleChar/<MafiaCharFadeOut>d__13::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMafiaCharFadeOutU3Ed__13_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m0AFC5C3EF953B887557AC5B4D62C6A321A81AEB6 (U3CMafiaCharFadeOutU3Ed__13_t0571555C512697ADD15117FC2E2A5F2D93CAE983 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TitleChar/<MafiaCharFadeOut>d__13::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CMafiaCharFadeOutU3Ed__13_System_Collections_IEnumerator_Reset_mB5A0A9C960157AF71AE122234D5886B387DA3BDC (U3CMafiaCharFadeOutU3Ed__13_t0571555C512697ADD15117FC2E2A5F2D93CAE983 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CMafiaCharFadeOutU3Ed__13_System_Collections_IEnumerator_Reset_mB5A0A9C960157AF71AE122234D5886B387DA3BDC_RuntimeMethod_var)));
	}
}
// System.Object TitleChar/<MafiaCharFadeOut>d__13::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CMafiaCharFadeOutU3Ed__13_System_Collections_IEnumerator_get_Current_mED02131D1A9AAA26196484DC1F8B65AEF2945ECA (U3CMafiaCharFadeOutU3Ed__13_t0571555C512697ADD15117FC2E2A5F2D93CAE983 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TitleChar/<NewWaveCharFadeIn>d__14::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNewWaveCharFadeInU3Ed__14__ctor_m319057EACC7D351F641A2863E6737C2AF46A4048 (U3CNewWaveCharFadeInU3Ed__14_t2D645AB933674261822B2E6BD98BEADAA89B13C2 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TitleChar/<NewWaveCharFadeIn>d__14::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNewWaveCharFadeInU3Ed__14_System_IDisposable_Dispose_mD7C5661C5D980BF3184684F2F15CE89CB27E9B86 (U3CNewWaveCharFadeInU3Ed__14_t2D645AB933674261822B2E6BD98BEADAA89B13C2 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TitleChar/<NewWaveCharFadeIn>d__14::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CNewWaveCharFadeInU3Ed__14_MoveNext_m44AA8CEFB102C3D7E2F87F9190CCB31A11630A15 (U3CNewWaveCharFadeInU3Ed__14_t2D645AB933674261822B2E6BD98BEADAA89B13C2 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E30BE1F099BB38FC9131DB2445273437FD6DA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C3589B16E1820C20A474B2787E79663E4A17A2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00a4;
	}

IL_0022:
	{
		goto IL_01b6;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
		// new_wave.gameObject.SetActive(true);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = L_2->get_new_wave_5();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// time = 0f;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		L_5->set_time_12((0.0f));
		// n_fadecolor.a = Mathf.Lerp(start, end, time);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_7 = L_6->get_address_of_n_fadecolor_8();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		float L_9 = L_8->get_start_10();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_10 = __this->get_U3CU3E4__this_2();
		NullCheck(L_10);
		float L_11 = L_10->get_end_11();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_12 = __this->get_U3CU3E4__this_2();
		NullCheck(L_12);
		float L_13 = L_12->get_time_12();
		float L_14;
		L_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_9, L_11, L_13, /*hidden argument*/NULL);
		L_7->set_a_3(L_14);
		goto IL_01bf;
	}

IL_0093:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(fade)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_15 = __this->get_U3CU3E4__this_2();
		NullCheck(L_15);
		bool L_16 = L_15->get_fade_14();
		V_1 = L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_00de;
		}
	}
	{
		// StartCoroutine("NewWaveCharFadeOut");
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_18 = __this->get_U3CU3E4__this_2();
		NullCheck(L_18);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_19;
		L_19 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(L_18, _stringLiteral07E30BE1F099BB38FC9131DB2445273437FD6DA0, /*hidden argument*/NULL);
		// StopCoroutine("NewWaveCharFadeIn");
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_20 = __this->get_U3CU3E4__this_2();
		NullCheck(L_20);
		MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B(L_20, _stringLiteral85C3589B16E1820C20A474B2787E79663E4A17A2, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// if(n_fadecolor.a < 1f)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_21 = __this->get_U3CU3E4__this_2();
		NullCheck(L_21);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_22 = L_21->get_address_of_n_fadecolor_8();
		float L_23 = L_22->get_a_3();
		V_2 = (bool)((((float)L_23) < ((float)(1.0f)))? 1 : 0);
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_0175;
		}
	}
	{
		// time += Time.deltaTime / FadeTime;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_25 = __this->get_U3CU3E4__this_2();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_26 = __this->get_U3CU3E4__this_2();
		NullCheck(L_26);
		float L_27 = L_26->get_time_12();
		float L_28;
		L_28 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_29 = __this->get_U3CU3E4__this_2();
		NullCheck(L_29);
		float L_30 = L_29->get_FadeTime_13();
		NullCheck(L_25);
		L_25->set_time_12(((float)il2cpp_codegen_add((float)L_27, (float)((float)((float)L_28/(float)L_30)))));
		// n_fadecolor.a = Mathf.Lerp(start, end, time);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_31 = __this->get_U3CU3E4__this_2();
		NullCheck(L_31);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_32 = L_31->get_address_of_n_fadecolor_8();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_33 = __this->get_U3CU3E4__this_2();
		NullCheck(L_33);
		float L_34 = L_33->get_start_10();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_35 = __this->get_U3CU3E4__this_2();
		NullCheck(L_35);
		float L_36 = L_35->get_end_11();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_37 = __this->get_U3CU3E4__this_2();
		NullCheck(L_37);
		float L_38 = L_37->get_time_12();
		float L_39;
		L_39 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_34, L_36, L_38, /*hidden argument*/NULL);
		L_32->set_a_3(L_39);
		// new_wave.color = n_fadecolor;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_40 = __this->get_U3CU3E4__this_2();
		NullCheck(L_40);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41 = L_40->get_new_wave_5();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_42 = __this->get_U3CU3E4__this_2();
		NullCheck(L_42);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = L_42->get_n_fadecolor_8();
		NullCheck(L_41);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_43);
	}

IL_0175:
	{
		// if(n_fadecolor.a == 1f)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_44 = __this->get_U3CU3E4__this_2();
		NullCheck(L_44);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_45 = L_44->get_address_of_n_fadecolor_8();
		float L_46 = L_45->get_a_3();
		V_3 = (bool)((((float)L_46) == ((float)(1.0f)))? 1 : 0);
		bool L_47 = V_3;
		if (!L_47)
		{
			goto IL_01be;
		}
	}
	{
		// fade = true;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_48 = __this->get_U3CU3E4__this_2();
		NullCheck(L_48);
		L_48->set_fade_14((bool)1);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_49 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_49, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_49);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01b6:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01be:
	{
	}

IL_01bf:
	{
		// while(true)
		V_4 = (bool)1;
		goto IL_0093;
	}
}
// System.Object TitleChar/<NewWaveCharFadeIn>d__14::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CNewWaveCharFadeInU3Ed__14_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mB33FDE2AF4ABF47A8EEC6CB9E43CB168A82E3A57 (U3CNewWaveCharFadeInU3Ed__14_t2D645AB933674261822B2E6BD98BEADAA89B13C2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TitleChar/<NewWaveCharFadeIn>d__14::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNewWaveCharFadeInU3Ed__14_System_Collections_IEnumerator_Reset_m0C518863E744FBF2EC181917D81DE834D2426968 (U3CNewWaveCharFadeInU3Ed__14_t2D645AB933674261822B2E6BD98BEADAA89B13C2 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CNewWaveCharFadeInU3Ed__14_System_Collections_IEnumerator_Reset_m0C518863E744FBF2EC181917D81DE834D2426968_RuntimeMethod_var)));
	}
}
// System.Object TitleChar/<NewWaveCharFadeIn>d__14::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CNewWaveCharFadeInU3Ed__14_System_Collections_IEnumerator_get_Current_mF81DDB1DD6041983199346BF1ABE1FBE0ED2ADC2 (U3CNewWaveCharFadeInU3Ed__14_t2D645AB933674261822B2E6BD98BEADAA89B13C2 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TitleChar/<NewWaveCharFadeOut>d__15::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNewWaveCharFadeOutU3Ed__15__ctor_m2A78893FDAD5FCDF1BD65C3623FD67CB2A841C89 (U3CNewWaveCharFadeOutU3Ed__15_t3647E3256D9D52DD2B2219E4D8CDC201B0D0B499 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TitleChar/<NewWaveCharFadeOut>d__15::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNewWaveCharFadeOutU3Ed__15_System_IDisposable_Dispose_m9793CDCE1FB15D82E9035B00D43203DA90DAD2AE (U3CNewWaveCharFadeOutU3Ed__15_t3647E3256D9D52DD2B2219E4D8CDC201B0D0B499 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TitleChar/<NewWaveCharFadeOut>d__15::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CNewWaveCharFadeOutU3Ed__15_MoveNext_m75B429E84EFCA9E60B294ABECB4A2F9A897190A7 (U3CNewWaveCharFadeOutU3Ed__15_t3647E3256D9D52DD2B2219E4D8CDC201B0D0B499 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07E30BE1F099BB38FC9131DB2445273437FD6DA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD72A83245AB41818B2DF713B72BB5E8EC7238CA1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_008a;
	}

IL_001f:
	{
		goto IL_01d2;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// time = 0f;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		L_2->set_time_12((0.0f));
		// n_fadecolor.a = Mathf.Lerp(end, start, time);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_4 = L_3->get_address_of_n_fadecolor_8();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		float L_6 = L_5->get_end_11();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		float L_8 = L_7->get_start_10();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		float L_10 = L_9->get_time_12();
		float L_11;
		L_11 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_6, L_8, L_10, /*hidden argument*/NULL);
		L_4->set_a_3(L_11);
		goto IL_01db;
	}

IL_0079:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(!fade)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_12 = __this->get_U3CU3E4__this_2();
		NullCheck(L_12);
		bool L_13 = L_12->get_fade_14();
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_00de;
		}
	}
	{
		// StartCoroutine("SocietyCharFadeIn");
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_15 = __this->get_U3CU3E4__this_2();
		NullCheck(L_15);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_16;
		L_16 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(L_15, _stringLiteralD72A83245AB41818B2DF713B72BB5E8EC7238CA1, /*hidden argument*/NULL);
		// StopCoroutine("NewWaveCharFadeOut");
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_17 = __this->get_U3CU3E4__this_2();
		NullCheck(L_17);
		MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B(L_17, _stringLiteral07E30BE1F099BB38FC9131DB2445273437FD6DA0, /*hidden argument*/NULL);
		// new_wave.gameObject.SetActive(false);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_18 = __this->get_U3CU3E4__this_2();
		NullCheck(L_18);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = L_18->get_new_wave_5();
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)0, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// if(n_fadecolor.a > 0f)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_21 = __this->get_U3CU3E4__this_2();
		NullCheck(L_21);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_22 = L_21->get_address_of_n_fadecolor_8();
		float L_23 = L_22->get_a_3();
		V_2 = (bool)((((float)L_23) > ((float)(0.0f)))? 1 : 0);
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_0175;
		}
	}
	{
		// time += Time.deltaTime / FadeTime;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_25 = __this->get_U3CU3E4__this_2();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_26 = __this->get_U3CU3E4__this_2();
		NullCheck(L_26);
		float L_27 = L_26->get_time_12();
		float L_28;
		L_28 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_29 = __this->get_U3CU3E4__this_2();
		NullCheck(L_29);
		float L_30 = L_29->get_FadeTime_13();
		NullCheck(L_25);
		L_25->set_time_12(((float)il2cpp_codegen_add((float)L_27, (float)((float)((float)L_28/(float)L_30)))));
		// n_fadecolor.a = Mathf.Lerp(end, start, time);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_31 = __this->get_U3CU3E4__this_2();
		NullCheck(L_31);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_32 = L_31->get_address_of_n_fadecolor_8();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_33 = __this->get_U3CU3E4__this_2();
		NullCheck(L_33);
		float L_34 = L_33->get_end_11();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_35 = __this->get_U3CU3E4__this_2();
		NullCheck(L_35);
		float L_36 = L_35->get_start_10();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_37 = __this->get_U3CU3E4__this_2();
		NullCheck(L_37);
		float L_38 = L_37->get_time_12();
		float L_39;
		L_39 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_34, L_36, L_38, /*hidden argument*/NULL);
		L_32->set_a_3(L_39);
		// new_wave.color = n_fadecolor;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_40 = __this->get_U3CU3E4__this_2();
		NullCheck(L_40);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41 = L_40->get_new_wave_5();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_42 = __this->get_U3CU3E4__this_2();
		NullCheck(L_42);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = L_42->get_n_fadecolor_8();
		NullCheck(L_41);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_43);
	}

IL_0175:
	{
		// if(n_fadecolor.a == 0f)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_44 = __this->get_U3CU3E4__this_2();
		NullCheck(L_44);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_45 = L_44->get_address_of_n_fadecolor_8();
		float L_46 = L_45->get_a_3();
		V_3 = (bool)((((float)L_46) == ((float)(0.0f)))? 1 : 0);
		bool L_47 = V_3;
		if (!L_47)
		{
			goto IL_01da;
		}
	}
	{
		// fade = false;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_48 = __this->get_U3CU3E4__this_2();
		NullCheck(L_48);
		L_48->set_fade_14((bool)0);
		// new_wave.color = n_fadecolor;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_49 = __this->get_U3CU3E4__this_2();
		NullCheck(L_49);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_50 = L_49->get_new_wave_5();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_51 = __this->get_U3CU3E4__this_2();
		NullCheck(L_51);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52 = L_51->get_n_fadecolor_8();
		NullCheck(L_50);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_50, L_52);
		// yield return new WaitForSeconds(0.4f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_53 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_53, (0.400000006f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_53);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01d2:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01da:
	{
	}

IL_01db:
	{
		// while(true)
		V_4 = (bool)1;
		goto IL_0079;
	}
}
// System.Object TitleChar/<NewWaveCharFadeOut>d__15::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CNewWaveCharFadeOutU3Ed__15_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m3156DD61E298C6808AB181B3B63803BDBDD563CE (U3CNewWaveCharFadeOutU3Ed__15_t3647E3256D9D52DD2B2219E4D8CDC201B0D0B499 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TitleChar/<NewWaveCharFadeOut>d__15::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CNewWaveCharFadeOutU3Ed__15_System_Collections_IEnumerator_Reset_m7A6C8EF8CD31526D80345847606CDA9A73FAA9FC (U3CNewWaveCharFadeOutU3Ed__15_t3647E3256D9D52DD2B2219E4D8CDC201B0D0B499 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CNewWaveCharFadeOutU3Ed__15_System_Collections_IEnumerator_Reset_m7A6C8EF8CD31526D80345847606CDA9A73FAA9FC_RuntimeMethod_var)));
	}
}
// System.Object TitleChar/<NewWaveCharFadeOut>d__15::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CNewWaveCharFadeOutU3Ed__15_System_Collections_IEnumerator_get_Current_m53C2449DDF53EC3EEBDFD6FE623B24D061F4A747 (U3CNewWaveCharFadeOutU3Ed__15_t3647E3256D9D52DD2B2219E4D8CDC201B0D0B499 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TitleChar/<SocietyCharFadeIn>d__16::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSocietyCharFadeInU3Ed__16__ctor_m005CAAABDF8BD864AC1DF09996C74BA17470C60F (U3CSocietyCharFadeInU3Ed__16_tBDAC4CB22E85AB2D76DCABEFF43BBEBC6B995085 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TitleChar/<SocietyCharFadeIn>d__16::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSocietyCharFadeInU3Ed__16_System_IDisposable_Dispose_mFFAEAE834A450C7F8C4EBE3E7029FE259D57EBC8 (U3CSocietyCharFadeInU3Ed__16_tBDAC4CB22E85AB2D76DCABEFF43BBEBC6B995085 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TitleChar/<SocietyCharFadeIn>d__16::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSocietyCharFadeInU3Ed__16_MoveNext_mB00224A93FAAB97774938F34F46B5393B6F9D5BD (U3CSocietyCharFadeInU3Ed__16_tBDAC4CB22E85AB2D76DCABEFF43BBEBC6B995085 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDA6215D16E3C5E0DF78D635AAA0006AC903E687);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD72A83245AB41818B2DF713B72BB5E8EC7238CA1);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_0022;
			}
		}
	}
	{
		goto IL_0027;
	}

IL_001b:
	{
		goto IL_0029;
	}

IL_001d:
	{
		goto IL_00a4;
	}

IL_0022:
	{
		goto IL_01b6;
	}

IL_0027:
	{
		return (bool)0;
	}

IL_0029:
	{
		__this->set_U3CU3E1__state_0((-1));
		// society.gameObject.SetActive(true);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_3 = L_2->get_society_6();
		NullCheck(L_3);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_4, (bool)1, /*hidden argument*/NULL);
		// time = 0f;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		L_5->set_time_12((0.0f));
		// s_fadecolor.a = Mathf.Lerp(start, end, time);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_6 = __this->get_U3CU3E4__this_2();
		NullCheck(L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_7 = L_6->get_address_of_s_fadecolor_9();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_8 = __this->get_U3CU3E4__this_2();
		NullCheck(L_8);
		float L_9 = L_8->get_start_10();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_10 = __this->get_U3CU3E4__this_2();
		NullCheck(L_10);
		float L_11 = L_10->get_end_11();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_12 = __this->get_U3CU3E4__this_2();
		NullCheck(L_12);
		float L_13 = L_12->get_time_12();
		float L_14;
		L_14 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_9, L_11, L_13, /*hidden argument*/NULL);
		L_7->set_a_3(L_14);
		goto IL_01bf;
	}

IL_0093:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00a4:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(fade)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_15 = __this->get_U3CU3E4__this_2();
		NullCheck(L_15);
		bool L_16 = L_15->get_fade_14();
		V_1 = L_16;
		bool L_17 = V_1;
		if (!L_17)
		{
			goto IL_00de;
		}
	}
	{
		// StartCoroutine("SocietyCharFadeOut");
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_18 = __this->get_U3CU3E4__this_2();
		NullCheck(L_18);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_19;
		L_19 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(L_18, _stringLiteralCDA6215D16E3C5E0DF78D635AAA0006AC903E687, /*hidden argument*/NULL);
		// StopCoroutine("SocietyCharFadeIn");
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_20 = __this->get_U3CU3E4__this_2();
		NullCheck(L_20);
		MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B(L_20, _stringLiteralD72A83245AB41818B2DF713B72BB5E8EC7238CA1, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// if(s_fadecolor.a < 1f)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_21 = __this->get_U3CU3E4__this_2();
		NullCheck(L_21);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_22 = L_21->get_address_of_s_fadecolor_9();
		float L_23 = L_22->get_a_3();
		V_2 = (bool)((((float)L_23) < ((float)(1.0f)))? 1 : 0);
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_0175;
		}
	}
	{
		// time += Time.deltaTime / FadeTime;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_25 = __this->get_U3CU3E4__this_2();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_26 = __this->get_U3CU3E4__this_2();
		NullCheck(L_26);
		float L_27 = L_26->get_time_12();
		float L_28;
		L_28 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_29 = __this->get_U3CU3E4__this_2();
		NullCheck(L_29);
		float L_30 = L_29->get_FadeTime_13();
		NullCheck(L_25);
		L_25->set_time_12(((float)il2cpp_codegen_add((float)L_27, (float)((float)((float)L_28/(float)L_30)))));
		// s_fadecolor.a = Mathf.Lerp(start, end, time);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_31 = __this->get_U3CU3E4__this_2();
		NullCheck(L_31);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_32 = L_31->get_address_of_s_fadecolor_9();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_33 = __this->get_U3CU3E4__this_2();
		NullCheck(L_33);
		float L_34 = L_33->get_start_10();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_35 = __this->get_U3CU3E4__this_2();
		NullCheck(L_35);
		float L_36 = L_35->get_end_11();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_37 = __this->get_U3CU3E4__this_2();
		NullCheck(L_37);
		float L_38 = L_37->get_time_12();
		float L_39;
		L_39 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_34, L_36, L_38, /*hidden argument*/NULL);
		L_32->set_a_3(L_39);
		// society.color = s_fadecolor;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_40 = __this->get_U3CU3E4__this_2();
		NullCheck(L_40);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41 = L_40->get_society_6();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_42 = __this->get_U3CU3E4__this_2();
		NullCheck(L_42);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = L_42->get_s_fadecolor_9();
		NullCheck(L_41);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_43);
	}

IL_0175:
	{
		// if(s_fadecolor.a == 1f)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_44 = __this->get_U3CU3E4__this_2();
		NullCheck(L_44);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_45 = L_44->get_address_of_s_fadecolor_9();
		float L_46 = L_45->get_a_3();
		V_3 = (bool)((((float)L_46) == ((float)(1.0f)))? 1 : 0);
		bool L_47 = V_3;
		if (!L_47)
		{
			goto IL_01be;
		}
	}
	{
		// fade = true;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_48 = __this->get_U3CU3E4__this_2();
		NullCheck(L_48);
		L_48->set_fade_14((bool)1);
		// yield return new WaitForSeconds(1.5f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_49 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_49, (1.5f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_49);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01b6:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01be:
	{
	}

IL_01bf:
	{
		// while(true)
		V_4 = (bool)1;
		goto IL_0093;
	}
}
// System.Object TitleChar/<SocietyCharFadeIn>d__16::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSocietyCharFadeInU3Ed__16_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mC10CE13AC5CB0D5DB4D46C8541BAA87CB0842061 (U3CSocietyCharFadeInU3Ed__16_tBDAC4CB22E85AB2D76DCABEFF43BBEBC6B995085 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TitleChar/<SocietyCharFadeIn>d__16::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSocietyCharFadeInU3Ed__16_System_Collections_IEnumerator_Reset_m83A5E44A1C28E1F7C46C3DBF3C311F1AA30EFBEB (U3CSocietyCharFadeInU3Ed__16_tBDAC4CB22E85AB2D76DCABEFF43BBEBC6B995085 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSocietyCharFadeInU3Ed__16_System_Collections_IEnumerator_Reset_m83A5E44A1C28E1F7C46C3DBF3C311F1AA30EFBEB_RuntimeMethod_var)));
	}
}
// System.Object TitleChar/<SocietyCharFadeIn>d__16::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSocietyCharFadeInU3Ed__16_System_Collections_IEnumerator_get_Current_m06DBDBB5A1BA743327EEA1DD4AD8AB79B032E142 (U3CSocietyCharFadeInU3Ed__16_tBDAC4CB22E85AB2D76DCABEFF43BBEBC6B995085 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void TitleChar/<SocietyCharFadeOut>d__17::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSocietyCharFadeOutU3Ed__17__ctor_mF4BA7674620A9D77C1E567DC38537B85C068C322 (U3CSocietyCharFadeOutU3Ed__17_t5EDC9B4588CE2BD132A977E22798F2B2AF458563 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void TitleChar/<SocietyCharFadeOut>d__17::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSocietyCharFadeOutU3Ed__17_System_IDisposable_Dispose_m4EA0ABF171092DCBC41CB574171000CDDFB9DD7A (U3CSocietyCharFadeOutU3Ed__17_t5EDC9B4588CE2BD132A977E22798F2B2AF458563 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean TitleChar/<SocietyCharFadeOut>d__17::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CSocietyCharFadeOutU3Ed__17_MoveNext_m73D4C1B63DCA2A77457D9990EF1FA08D5E2CFD75 (U3CSocietyCharFadeOutU3Ed__17_t5EDC9B4588CE2BD132A977E22798F2B2AF458563 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDF40E87C0E368DB5E07BD396E30AE871FCF32C1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCDA6215D16E3C5E0DF78D635AAA0006AC903E687);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		int32_t L_1 = V_0;
		switch (L_1)
		{
			case 0:
			{
				goto IL_001b;
			}
			case 1:
			{
				goto IL_001d;
			}
			case 2:
			{
				goto IL_001f;
			}
		}
	}
	{
		goto IL_0024;
	}

IL_001b:
	{
		goto IL_0026;
	}

IL_001d:
	{
		goto IL_008a;
	}

IL_001f:
	{
		goto IL_01d2;
	}

IL_0024:
	{
		return (bool)0;
	}

IL_0026:
	{
		__this->set_U3CU3E1__state_0((-1));
		// time = 0f;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_2 = __this->get_U3CU3E4__this_2();
		NullCheck(L_2);
		L_2->set_time_12((0.0f));
		// s_fadecolor.a = Mathf.Lerp(end, start, time);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_3 = __this->get_U3CU3E4__this_2();
		NullCheck(L_3);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_4 = L_3->get_address_of_s_fadecolor_9();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		float L_6 = L_5->get_end_11();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		float L_8 = L_7->get_start_10();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		float L_10 = L_9->get_time_12();
		float L_11;
		L_11 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_6, L_8, L_10, /*hidden argument*/NULL);
		L_4->set_a_3(L_11);
		goto IL_01db;
	}

IL_0079:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// if(!fade)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_12 = __this->get_U3CU3E4__this_2();
		NullCheck(L_12);
		bool L_13 = L_12->get_fade_14();
		V_1 = (bool)((((int32_t)L_13) == ((int32_t)0))? 1 : 0);
		bool L_14 = V_1;
		if (!L_14)
		{
			goto IL_00de;
		}
	}
	{
		// StartCoroutine("MafiaCharFadeIn");
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_15 = __this->get_U3CU3E4__this_2();
		NullCheck(L_15);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_16;
		L_16 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(L_15, _stringLiteralBDF40E87C0E368DB5E07BD396E30AE871FCF32C1, /*hidden argument*/NULL);
		// StopCoroutine("SocietyCharFadeOut");
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_17 = __this->get_U3CU3E4__this_2();
		NullCheck(L_17);
		MonoBehaviour_StopCoroutine_m4DB2A899F9BDF8CA3264DD8C4130E767702B626B(L_17, _stringLiteralCDA6215D16E3C5E0DF78D635AAA0006AC903E687, /*hidden argument*/NULL);
		// society.gameObject.SetActive(false);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_18 = __this->get_U3CU3E4__this_2();
		NullCheck(L_18);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_19 = L_18->get_society_6();
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		NullCheck(L_20);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_20, (bool)0, /*hidden argument*/NULL);
	}

IL_00de:
	{
		// if(s_fadecolor.a > 0f)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_21 = __this->get_U3CU3E4__this_2();
		NullCheck(L_21);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_22 = L_21->get_address_of_s_fadecolor_9();
		float L_23 = L_22->get_a_3();
		V_2 = (bool)((((float)L_23) > ((float)(0.0f)))? 1 : 0);
		bool L_24 = V_2;
		if (!L_24)
		{
			goto IL_0175;
		}
	}
	{
		// time += Time.deltaTime / FadeTime;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_25 = __this->get_U3CU3E4__this_2();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_26 = __this->get_U3CU3E4__this_2();
		NullCheck(L_26);
		float L_27 = L_26->get_time_12();
		float L_28;
		L_28 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_29 = __this->get_U3CU3E4__this_2();
		NullCheck(L_29);
		float L_30 = L_29->get_FadeTime_13();
		NullCheck(L_25);
		L_25->set_time_12(((float)il2cpp_codegen_add((float)L_27, (float)((float)((float)L_28/(float)L_30)))));
		// s_fadecolor.a = Mathf.Lerp(end, start, time);
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_31 = __this->get_U3CU3E4__this_2();
		NullCheck(L_31);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_32 = L_31->get_address_of_s_fadecolor_9();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_33 = __this->get_U3CU3E4__this_2();
		NullCheck(L_33);
		float L_34 = L_33->get_end_11();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_35 = __this->get_U3CU3E4__this_2();
		NullCheck(L_35);
		float L_36 = L_35->get_start_10();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_37 = __this->get_U3CU3E4__this_2();
		NullCheck(L_37);
		float L_38 = L_37->get_time_12();
		float L_39;
		L_39 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_34, L_36, L_38, /*hidden argument*/NULL);
		L_32->set_a_3(L_39);
		// society.color = s_fadecolor;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_40 = __this->get_U3CU3E4__this_2();
		NullCheck(L_40);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_41 = L_40->get_society_6();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_42 = __this->get_U3CU3E4__this_2();
		NullCheck(L_42);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_43 = L_42->get_s_fadecolor_9();
		NullCheck(L_41);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_41, L_43);
	}

IL_0175:
	{
		// if(s_fadecolor.a == 0f)
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_44 = __this->get_U3CU3E4__this_2();
		NullCheck(L_44);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_45 = L_44->get_address_of_s_fadecolor_9();
		float L_46 = L_45->get_a_3();
		V_3 = (bool)((((float)L_46) == ((float)(0.0f)))? 1 : 0);
		bool L_47 = V_3;
		if (!L_47)
		{
			goto IL_01da;
		}
	}
	{
		// fade = false;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_48 = __this->get_U3CU3E4__this_2();
		NullCheck(L_48);
		L_48->set_fade_14((bool)0);
		// society.color = s_fadecolor;
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_49 = __this->get_U3CU3E4__this_2();
		NullCheck(L_49);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_50 = L_49->get_society_6();
		TitleChar_tE7F539F814636111F9AF39F7D0E0A33685DBA461 * L_51 = __this->get_U3CU3E4__this_2();
		NullCheck(L_51);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52 = L_51->get_s_fadecolor_9();
		NullCheck(L_50);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_50, L_52);
		// yield return new WaitForSeconds(0.4f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_53 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_53, (0.400000006f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_53);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_01d2:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_01da:
	{
	}

IL_01db:
	{
		// while(true)
		V_4 = (bool)1;
		goto IL_0079;
	}
}
// System.Object TitleChar/<SocietyCharFadeOut>d__17::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSocietyCharFadeOutU3Ed__17_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mAA11BB1C058A410B34F2DFA8AA06A0DF32B8295D (U3CSocietyCharFadeOutU3Ed__17_t5EDC9B4588CE2BD132A977E22798F2B2AF458563 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void TitleChar/<SocietyCharFadeOut>d__17::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CSocietyCharFadeOutU3Ed__17_System_Collections_IEnumerator_Reset_m19CE75EB0E66808107671E9F8A1AC913A93D7297 (U3CSocietyCharFadeOutU3Ed__17_t5EDC9B4588CE2BD132A977E22798F2B2AF458563 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CSocietyCharFadeOutU3Ed__17_System_Collections_IEnumerator_Reset_m19CE75EB0E66808107671E9F8A1AC913A93D7297_RuntimeMethod_var)));
	}
}
// System.Object TitleChar/<SocietyCharFadeOut>d__17::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CSocietyCharFadeOutU3Ed__17_System_Collections_IEnumerator_get_Current_m688FBD3938F75EB05EB09321ADAC5CFC83760B39 (U3CSocietyCharFadeOutU3Ed__17_t5EDC9B4588CE2BD132A977E22798F2B2AF458563 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void UIManager/<fadeoutErrorMessage>d__87::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfadeoutErrorMessageU3Ed__87__ctor_m95C2E453AF1126A2A1559A3C880975EA81CD03AE (U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void UIManager/<fadeoutErrorMessage>d__87::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfadeoutErrorMessageU3Ed__87_System_IDisposable_Dispose_m9C42E4DB5CB24F28F49854E4DD3DBD2116A562ED (U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean UIManager/<fadeoutErrorMessage>d__87::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CfadeoutErrorMessageU3Ed__87_MoveNext_m10B239BFD6BF95812D59DE42FBA1049BB31797B6 (U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	bool V_1 = false;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
		goto IL_0019;
	}

IL_0012:
	{
		goto IL_001b;
	}

IL_0014:
	{
		goto IL_00fa;
	}

IL_0019:
	{
		return (bool)0;
	}

IL_001b:
	{
		__this->set_U3CU3E1__state_0((-1));
		// Color fadecolor = CentralProcessor.Instance.color;
		CentralProcessor_t37866546180D95302E7C0445CDFB0DD3A30DBC7B * L_3;
		L_3 = CentralProcessor_get_Instance_m1DD2CC89BAB7C14B32D257F0A9BDC532EFEBB6CD(/*hidden argument*/NULL);
		NullCheck(L_3);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = L_3->get_color_20();
		__this->set_U3CfadecolorU3E5__1_3(L_4);
		// time = 0f;
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_5 = __this->get_U3CU3E4__this_2();
		NullCheck(L_5);
		L_5->set_time_22((0.0f));
		// fadecolor.a = Mathf.Lerp(start, end, time);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_6 = __this->get_address_of_U3CfadecolorU3E5__1_3();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_7 = __this->get_U3CU3E4__this_2();
		NullCheck(L_7);
		float L_8 = L_7->get_start_23();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_9 = __this->get_U3CU3E4__this_2();
		NullCheck(L_9);
		float L_10 = L_9->get_end_24();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_11 = __this->get_U3CU3E4__this_2();
		NullCheck(L_11);
		float L_12 = L_11->get_time_22();
		float L_13;
		L_13 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_8, L_10, L_12, /*hidden argument*/NULL);
		L_6->set_a_3(L_13);
		goto IL_0102;
	}

IL_0079:
	{
		// time += Time.deltaTime / FadeTime;
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_14 = __this->get_U3CU3E4__this_2();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_15 = __this->get_U3CU3E4__this_2();
		NullCheck(L_15);
		float L_16 = L_15->get_time_22();
		float L_17;
		L_17 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_18 = __this->get_U3CU3E4__this_2();
		NullCheck(L_18);
		float L_19 = L_18->get_FadeTime_25();
		NullCheck(L_14);
		L_14->set_time_22(((float)il2cpp_codegen_add((float)L_16, (float)((float)((float)L_17/(float)L_19)))));
		// fadecolor.a = Mathf.Lerp(start, end, time);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_20 = __this->get_address_of_U3CfadecolorU3E5__1_3();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_21 = __this->get_U3CU3E4__this_2();
		NullCheck(L_21);
		float L_22 = L_21->get_start_23();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_23 = __this->get_U3CU3E4__this_2();
		NullCheck(L_23);
		float L_24 = L_23->get_end_24();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_25 = __this->get_U3CU3E4__this_2();
		NullCheck(L_25);
		float L_26 = L_25->get_time_22();
		float L_27;
		L_27 = Mathf_Lerp_m8A2A50B945F42D579EDF44D5EE79E85A4DA59616(L_22, L_24, L_26, /*hidden argument*/NULL);
		L_20->set_a_3(L_27);
		// errorMessage.color = fadecolor;
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_28 = __this->get_U3CU3E4__this_2();
		NullCheck(L_28);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_29 = L_28->get_errorMessage_21();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_30 = __this->get_U3CfadecolorU3E5__1_3();
		NullCheck(L_29);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_29, L_30);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_00fa:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0102:
	{
		// while (fadecolor.a > 0f)
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * L_31 = __this->get_address_of_U3CfadecolorU3E5__1_3();
		float L_32 = L_31->get_a_3();
		V_1 = (bool)((((float)L_32) > ((float)(0.0f)))? 1 : 0);
		bool L_33 = V_1;
		if (L_33)
		{
			goto IL_0079;
		}
	}
	{
		// errorMessage.gameObject.SetActive(false);
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_34 = __this->get_U3CU3E4__this_2();
		NullCheck(L_34);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_35 = L_34->get_errorMessage_21();
		NullCheck(L_35);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_35, /*hidden argument*/NULL);
		NullCheck(L_36);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_36, (bool)0, /*hidden argument*/NULL);
		// StopCoroutine(fadeoutErrorMessage());
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_37 = __this->get_U3CU3E4__this_2();
		UIManager_t77C2B965B55C450F7226A05FE391FF12B5CE7858 * L_38 = __this->get_U3CU3E4__this_2();
		NullCheck(L_38);
		RuntimeObject* L_39;
		L_39 = UIManager_fadeoutErrorMessage_m3E48F7DAD44462B65B04DC3A46185B3D21E40CE4(L_38, /*hidden argument*/NULL);
		NullCheck(L_37);
		MonoBehaviour_StopCoroutine_m3AB89AE7770E06BDB33BF39104BE5C57DF90616B(L_37, L_39, /*hidden argument*/NULL);
		// }
		return (bool)0;
	}
}
// System.Object UIManager/<fadeoutErrorMessage>d__87::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CfadeoutErrorMessageU3Ed__87_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mA42812917C0988A31EC8F06F925EEF32A168B7A6 (U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void UIManager/<fadeoutErrorMessage>d__87::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CfadeoutErrorMessageU3Ed__87_System_Collections_IEnumerator_Reset_mAA352A0215C489B9380B42B934CCD529C69C4016 (U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CfadeoutErrorMessageU3Ed__87_System_Collections_IEnumerator_Reset_mAA352A0215C489B9380B42B934CCD529C69C4016_RuntimeMethod_var)));
	}
}
// System.Object UIManager/<fadeoutErrorMessage>d__87::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CfadeoutErrorMessageU3Ed__87_System_Collections_IEnumerator_get_Current_mE03573613BFBBB9C0A4AEDD097D42D9293F28E5F (U3CfadeoutErrorMessageU3Ed__87_t9FE6805A0D122C59A8363B7D9C12606B9077A318 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void VariableManager/Mafia_Variable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Mafia_Variable__ctor_mF15BC9B210DD144736738D0C89E31E7EF717AA15 (Mafia_Variable_tEFFABC6A02250B09FB1EBD591A3E1110A4D89A32 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void VariableManager/New_Wave_Variable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void New_Wave_Variable__ctor_m1AE5CD6E5643D673D9977AC484E18332FB56E3E9 (New_Wave_Variable_tFE4A789D5F2A417343ACF2F4A23E7341E9A10E80 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void VariableManager/Society_Variable::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Society_Variable__ctor_m933750B1793232E1FF619B974915F448F2C46F90 (Society_Variable_t7B2F209814A15A94AB1A61FA381F7066BE0A6E2C * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
