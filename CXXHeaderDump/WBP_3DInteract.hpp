#ifndef UE4SS_SDK_WBP_3DInteract_HPP
#define UE4SS_SDK_WBP_3DInteract_HPP

class UWBP_3DInteract_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_KeyImage_C* WBP_KeyImage;                                              // 0x0348 (size: 0x8)
    class URichTextBlock* RichTextBlock_42;                                           // 0x0350 (size: 0x8)
    class UWidgetAnimation* Begin;                                                    // 0x0358 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0360 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_WBP_3DInteract(int32 EntryPoint);
}; // Size: 0x368

#endif
