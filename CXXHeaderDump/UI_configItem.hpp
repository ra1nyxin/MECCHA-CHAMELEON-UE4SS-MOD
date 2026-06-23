#ifndef UE4SS_SDK_UI_configItem_HPP
#define UE4SS_SDK_UI_configItem_HPP

class UUI_configItem_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UButton* Light_BTN;                                                         // 0x0348 (size: 0x8)
    class UButton* Left_BTN;                                                          // 0x0350 (size: 0x8)
    class UTextBlock* ConfigValue_text;                                               // 0x0358 (size: 0x8)
    class UTextBlock* configItem_text;                                                // 0x0360 (size: 0x8)
    class UButton* Background;                                                        // 0x0368 (size: 0x8)
    TEnumAsByte<Enum_configItem_before::Type> configItem;                             // 0x0370 (size: 0x1)
    float FPS limit;                                                                  // 0x0374 (size: 0x4)
    int32 ANTIALIACING limit;                                                         // 0x0378 (size: 0x4)
    int32 TEXTURE limit;                                                              // 0x037C (size: 0x4)
    int32 lumen limit;                                                                // 0x0380 (size: 0x4)
    int32 shadow limit;                                                               // 0x0384 (size: 0x4)
    int32 Reflection;                                                                 // 0x0388 (size: 0x4)
    double look spead limit;                                                          // 0x0390 (size: 0x8)

    void look spead(FText& slook pead);
    void Update Lookspead(int32 Add);
    void Update GRAPHIC(int32 Add);
    void Update flame rate(double Add);
    void Update confg value();
    void update configItem();
    void BndEvt__UI_configItem_Left_BTN_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__UI_configItem_Light_BTN_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_UI_configItem(int32 EntryPoint);
}; // Size: 0x398

#endif
