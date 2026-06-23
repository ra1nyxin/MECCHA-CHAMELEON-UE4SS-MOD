#ifndef UE4SS_SDK_WBP_CentorInteract_HPP
#define UE4SS_SDK_WBP_CentorInteract_HPP

class UWBP_CentorInteract_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class URichTextBlock* RichTextBlock_0;                                            // 0x0348 (size: 0x8)
    class UImage* CentorImage;                                                        // 0x0350 (size: 0x8)
    class UWidgetAnimation* ScaleChangeAnimation;                                     // 0x0358 (size: 0x8)
    class UWidgetAnimation* TextShow;                                                 // 0x0360 (size: 0x8)
    FText DefaultText;                                                                // 0x0368 (size: 0x10)
    bool NowVisibleState;                                                             // 0x0378 (size: 0x1)
    class UBPGI_Main_C* As BPGI Main;                                                 // 0x0380 (size: 0x8)
    TSoftObjectPtr<UTexture2D> BeforeSoftTexture;                                     // 0x0388 (size: 0x28)
    FString BeforeText;                                                               // 0x03B0 (size: 0x10)

    void CentorTextState(bool State, FString InputDevice);
    void SetTextAndImage(TSoftObjectPtr<UTexture2D> SoftTexture, FString InputText, bool State, FVector2D OverrideImageSize);
    void Construct();
    void ExecuteUbergraph_WBP_CentorInteract(int32 EntryPoint);
}; // Size: 0x3C0

#endif
