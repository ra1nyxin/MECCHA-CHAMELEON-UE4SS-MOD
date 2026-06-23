#ifndef UE4SS_SDK_BP_Luggage_Base_HPP
#define UE4SS_SDK_BP_Luggage_Base_HPP

class ABP_Luggage_Base_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UCPP_AC_CustomPhysicsForce* CPP_AC_CustomPhysicsForce;                      // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)
    TSoftObjectPtr<UStaticMesh> TargetMesh;                                           // 0x02C0 (size: 0x28)
    FGuid UniqueID;                                                                   // 0x02E8 (size: 0x10)

    void GetLuggageId(FGuid& ID);
    void OnLoaded_061DDAA94BACAE0F7A327A8B0F5F6D91(class UObject* Loaded);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_BP_Luggage_Base(int32 EntryPoint);
}; // Size: 0x2F8

#endif
