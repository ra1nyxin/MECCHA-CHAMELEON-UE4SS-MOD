#ifndef UE4SS_SDK_WBP_Debug_HPP
#define UE4SS_SDK_WBP_Debug_HPP

class UWBP_Debug_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* SaveIndex;                                                      // 0x0348 (size: 0x8)
    class UTextBlock* NetworkInfo;                                                    // 0x0350 (size: 0x8)
    class UTextBlock* FPS;                                                            // 0x0358 (size: 0x8)
    double FPSValue;                                                                  // 0x0360 (size: 0x8)
    TArray<double> FPSArray;                                                          // 0x0368 (size: 0x10)
    double AddAll;                                                                    // 0x0378 (size: 0x8)

    void OnFinished_8D1D7EE049CBA34DF01468BA7D7B3EE1(const FBandwidthProbeResult& Result);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void Update();
    void UpdateEvent();
    void ExecuteUbergraph_WBP_Debug(int32 EntryPoint);
}; // Size: 0x380

#endif
