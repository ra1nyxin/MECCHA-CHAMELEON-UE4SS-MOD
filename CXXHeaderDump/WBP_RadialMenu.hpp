#ifndef UE4SS_SDK_WBP_RadialMenu_HPP
#define UE4SS_SDK_WBP_RadialMenu_HPP

class UWBP_RadialMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UOverlay* Overlay_28;                                                       // 0x0348 (size: 0x8)
    class UImage* Image_34;                                                           // 0x0350 (size: 0x8)
    int32 MenuCount;                                                                  // 0x0358 (size: 0x4)
    double OverScale;                                                                 // 0x0360 (size: 0x8)
    TArray<class UWBP_RadialMenuParts_C*> MenuParts;                                  // 0x0368 (size: 0x10)
    FVector2D CurrentDiff;                                                            // 0x0378 (size: 0x10)
    int32 CurrentSelectIndex;                                                         // 0x0388 (size: 0x4)
    double AddAngle;                                                                  // 0x0390 (size: 0x8)
    FLinearColor Non Select Color;                                                    // 0x0398 (size: 0x10)
    FLinearColor Select Color;                                                        // 0x03A8 (size: 0x10)

    void GetSlideValue(double InputValue, int32 SplitSize, double SlideValue, int32& Rezult);
    int32 GetRezultIndex(FVector2D InVec);
    void PreConstruct(bool IsDesignTime);
    void CurrentSelectionVelocity(FVector2D MouseVelocity);
    void SetItemDatas(const TArray<FST_ItemCoreDatas>& CoreDatas);
    void SetItemDatasImageOnly(const TArray<FST_ItemCoreDatas>& CoreDatas);
    void ExecuteUbergraph_WBP_RadialMenu(int32 EntryPoint);
}; // Size: 0x3B8

#endif
