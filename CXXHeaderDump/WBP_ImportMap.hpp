#ifndef UE4SS_SDK_WBP_ImportMap_HPP
#define UE4SS_SDK_WBP_ImportMap_HPP

class UWBP_ImportMap_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UScrollBox* ScrollBox_72;                                                   // 0x0348 (size: 0x8)

    void Construct();
    void ExecuteUbergraph_WBP_ImportMap(int32 EntryPoint);
}; // Size: 0x350

#endif
