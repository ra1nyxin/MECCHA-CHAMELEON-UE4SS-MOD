#ifndef UE4SS_SDK_BP_Spear_HPP
#define UE4SS_SDK_BP_Spear_HPP

class ABP_Spear_C : public ABP_DamageTool_Base_V2_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F8 (size: 0x8)
    class UBPC_DampingControl_C* BPC_DampingControl;                                  // 0x0500 (size: 0x8)

    void BndEvt__BP_Spear_BPC_LongInputControl_K2Node_ComponentBoundEvent_0_InputEnd__DelegateSignature(double PushTime);
    void Shot(bool PressState, double PushTime, class ABP_FirstPersonCharacter_Main_C* SourcePlayer);
    void ExecuteUbergraph_BP_Spear(int32 EntryPoint);
}; // Size: 0x508

#endif
