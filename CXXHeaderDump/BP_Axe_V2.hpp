#ifndef UE4SS_SDK_BP_Axe_V2_HPP
#define UE4SS_SDK_BP_Axe_V2_HPP

class ABP_Axe_V2_C : public ABP_DamageTool_Base_V2_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F8 (size: 0x8)

    void BndEvt__BP_Axe_V2_BPC_ComboControl_K2Node_ComponentBoundEvent_0_OnUniqueEvent__DelegateSignature(FName EventName);
    void ExecuteUbergraph_BP_Axe_V2(int32 EntryPoint);
}; // Size: 0x500

#endif
