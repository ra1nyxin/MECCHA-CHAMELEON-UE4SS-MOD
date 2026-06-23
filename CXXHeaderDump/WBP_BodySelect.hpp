#ifndef UE4SS_SDK_WBP_BodySelect_HPP
#define UE4SS_SDK_WBP_BodySelect_HPP

class UWBP_BodySelect_C : public UUINavComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0910 (size: 0x8)
    class UWBP_CompressTextBlock_C* WBP_CompressTextBlock;                            // 0x0918 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0920 (size: 0x8)
    class UBorder* Border_56;                                                         // 0x0928 (size: 0x8)
    FText Text;                                                                       // 0x0930 (size: 0x10)
    TSubclassOf<class ABP_FirstPersonCharacter_cLeon_Character_Survivor_C> TargetClass; // 0x0940 (size: 0x8)
    FWBP_BodySelect_COnClickWithClass OnClickWithClass;                               // 0x0948 (size: 0x10)
    void OnClickWithClass(class UWBP_BodySelect_C* SelfObject, TSubclassOf<class ABP_FirstPersonCharacter_cLeon_Character_Survivor_C> BodyClass);

    void PreConstruct(bool IsDesignTime);
    void SetSelectState(bool State);
    void BndEvt__WBP_BodySelect_NavButton_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_WBP_BodySelect(int32 EntryPoint);
    void OnClickWithClass__DelegateSignature(class UWBP_BodySelect_C* SelfObject, TSubclassOf<class ABP_FirstPersonCharacter_cLeon_Character_Survivor_C> BodyClass);
}; // Size: 0x958

#endif
