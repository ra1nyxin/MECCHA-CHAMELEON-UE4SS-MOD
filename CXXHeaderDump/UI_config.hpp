#ifndef UE4SS_SDK_UI_config_HPP
#define UE4SS_SDK_UI_config_HPP

class UUI_config_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UUI_configItem_C* UI_configItem_2;                                          // 0x0348 (size: 0x8)
    class UUI_configItem_C* UI_configItem_1;                                          // 0x0350 (size: 0x8)
    class UUI_configItem_C* UI_configItem;                                            // 0x0358 (size: 0x8)

    void Show config();
    void ExecuteUbergraph_UI_config(int32 EntryPoint);
}; // Size: 0x360

#endif
