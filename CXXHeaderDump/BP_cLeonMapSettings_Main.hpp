#ifndef UE4SS_SDK_BP_cLeonMapSettings_Main_HPP
#define UE4SS_SDK_BP_cLeonMapSettings_Main_HPP

class ABP_cLeonMapSettings_Main_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02B8 (size: 0x8)
    class ABP_GameMode_cLeon_C* As BP Game Mode C Leon;                               // 0x02C0 (size: 0x8)

    void IsChangeImage(bool& IsInteract, FText& OverrideText);
    void BPI_InteractEnd();
    void BPI_InteractStart(Local)(class ABP_FirstPersonCharacter_Main_C* First Person);
    void ReceiveBeginPlay();
    void BPI_InteractStart(Server)(class ABP_FirstPersonCharacter_Main_C* First Person);
    void ExecuteUbergraph_BP_cLeonMapSettings_Main(int32 EntryPoint);
}; // Size: 0x2C8

#endif
