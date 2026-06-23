#ifndef UE4SS_SDK_LongTapButton_OnAnimation_HPP
#define UE4SS_SDK_LongTapButton_OnAnimation_HPP

class ULongTapButton_OnAnimation_C : public UUINavComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0910 (size: 0x8)
    class UTextBlock* MiniText;                                                       // 0x0918 (size: 0x8)
    class UImage* Image_215;                                                          // 0x0920 (size: 0x8)
    class UImage* Image_73;                                                           // 0x0928 (size: 0x8)
    class UBorder* Border_118;                                                        // 0x0930 (size: 0x8)
    class UWidgetAnimation* Input;                                                    // 0x0938 (size: 0x8)
    class UWidgetAnimation* InputEnd;                                                 // 0x0940 (size: 0x8)
    class UWidgetAnimation* Hover;                                                    // 0x0948 (size: 0x8)
    FLongTapButton_OnAnimation_CPushEnd PushEnd;                                      // 0x0950 (size: 0x10)
    void PushEnd();
    FTimerHandle Timer;                                                               // 0x0960 (size: 0x8)
    double NeedTime;                                                                  // 0x0968 (size: 0x8)
    FText TextValue;                                                                  // 0x0970 (size: 0x10)
    TArray<FText> MiniPenguinText;                                                    // 0x0980 (size: 0x10)
    class UAudioComponent* AudioComp;                                                 // 0x0990 (size: 0x8)
    FLongTapButton_OnAnimation_CPushEndWithString PushEndWithString;                  // 0x0998 (size: 0x10)
    void PushEndWithString(FString ReturnValue);
    FString ReturnStringValue;                                                        // 0x09A8 (size: 0x10)
    int32 CompressedTextIndex;                                                        // 0x09B8 (size: 0x4)
    TArray<FString> PreviewArray;                                                     // 0x09C0 (size: 0x10)
    FMargin In Padding;                                                               // 0x09D0 (size: 0x10)
    class UMaterialInterface* ButtonMaterial;                                         // 0x09E0 (size: 0x8)
    bool ActiveState;                                                                 // 0x09E8 (size: 0x1)
    class UMaterialInstanceDynamic* DynamicButtonMaterial;                            // 0x09F0 (size: 0x8)

    void SetRandomMiniPneguinText();
    FText GetText();
    void PushAfter();
    void PreConstruct(bool IsDesignTime);
    void BndEvt__LongTapButton_OnAnimation_UINavButtonBase_87_K2Node_ComponentBoundEvent_2_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__LongTapButton_OnAnimation_UINavButtonBase_87_K2Node_ComponentBoundEvent_3_OnButtonReleasedEvent__DelegateSignature();
    void BndEvt__LongTapButton_OnAnimation_UINavButtonBase_87_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__LongTapButton_OnAnimation_UINavButtonBase_87_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void ToNavigation();
    void FromNavigation();
    void SetActiveState(bool ActiveState);
    void UpdateCompressedTextIndex(int32 CompressedTextIndex);
    void ExecuteUbergraph_LongTapButton_OnAnimation(int32 EntryPoint);
    void PushEndWithString__DelegateSignature(FString ReturnValue);
    void PushEnd__DelegateSignature();
}; // Size: 0x9F8

#endif
