#ifndef UE4SS_SDK_WBP_KeyImage_HPP
#define UE4SS_SDK_WBP_KeyImage_HPP

class UWBP_KeyImage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UImage* Image_58;                                                           // 0x0348 (size: 0x8)
    class UBorder* Border_153;                                                        // 0x0350 (size: 0x8)
    FName ButtonName;                                                                 // 0x0358 (size: 0x8)
    TMap<class FName, class FST_InputDeviceImage> ButtonDB;                           // 0x0360 (size: 0x50)
    bool UseLoopUpdate;                                                               // 0x03B0 (size: 0x1)
    bool BackGroundVisibility;                                                        // 0x03B1 (size: 0x1)

    void UpdateImage();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_WBP_KeyImage(int32 EntryPoint);
}; // Size: 0x3B2

#endif
