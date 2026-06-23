#ifndef UE4SS_SDK_WBP_PaintCursor_HPP
#define UE4SS_SDK_WBP_PaintCursor_HPP

class UWBP_PaintCursor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock_48;                                                   // 0x0348 (size: 0x8)
    class UImage* Image_20;                                                           // 0x0350 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0358 (size: 0x8)
    class UMaterialInstanceDynamic* BrushMaterial;                                    // 0x0360 (size: 0x8)
    class ABP_FirstPersonCharacter_cLeon_Character_C* As BP First Person Character C Leon; // 0x0368 (size: 0x8)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetPickVisibility(bool Visibility);
    void ExecuteUbergraph_WBP_PaintCursor(int32 EntryPoint);
}; // Size: 0x370

#endif
