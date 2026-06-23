#ifndef UE4SS_SDK_WBP_cLeonErrorFix_HPP
#define UE4SS_SDK_WBP_cLeonErrorFix_HPP

class AWBP_cLeonErrorFix_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02B0 (size: 0x8)
    class ABP_GameMode_cLeon_C* As BP Game Mode C Leon;                               // 0x02B8 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__WBP_cLeonErrorFix_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_WBP_cLeonErrorFix(int32 EntryPoint);
}; // Size: 0x2C0

#endif
