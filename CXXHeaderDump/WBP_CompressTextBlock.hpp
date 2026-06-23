#ifndef UE4SS_SDK_WBP_CompressTextBlock_HPP
#define UE4SS_SDK_WBP_CompressTextBlock_HPP

class UWBP_CompressTextBlock_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0348 (size: 0x8)
    FText Text;                                                                       // 0x0350 (size: 0x10)
    int32 CompressedTextIndex;                                                        // 0x0360 (size: 0x4)
    TArray<FString> PreviewArray;                                                     // 0x0368 (size: 0x10)
    FSlateFontInfo In Font Info;                                                      // 0x0378 (size: 0x60)
    bool In Auto Text Wrap;                                                           // 0x03D8 (size: 0x1)
    ETextWrappingPolicy Wrapping Policy;                                              // 0x03D9 (size: 0x1)
    TEnumAsByte<ETextJustify::Type> Justification;                                    // 0x03DA (size: 0x1)
    FLinearColor In Shadow Color and Opacity;                                         // 0x03DC (size: 0x10)
    FVector2D In Shadow Offset;                                                       // 0x03F0 (size: 0x10)

    void PreConstruct(bool IsDesignTime);
    void SetText(FText Text);
    void UpdateTextIndex(int32 CompressedTextIndex);
    void ExecuteUbergraph_WBP_CompressTextBlock(int32 EntryPoint);
}; // Size: 0x400

#endif
