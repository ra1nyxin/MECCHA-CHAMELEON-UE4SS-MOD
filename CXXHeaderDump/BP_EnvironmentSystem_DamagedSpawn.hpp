#ifndef UE4SS_SDK_BP_EnvironmentSystem_DamagedSpawn_HPP
#define UE4SS_SDK_BP_EnvironmentSystem_DamagedSpawn_HPP

class ABP_EnvironmentSystem_DamagedSpawn_C : public ABP_EnvironmentSystem_Base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02B8 (size: 0x8)
    class UBillboardComponent* SpawnPosition;                                         // 0x02C0 (size: 0x8)
    int32 SpawnEventLimit;                                                            // 0x02C8 (size: 0x4)
    double DefaultHealth;                                                             // 0x02D0 (size: 0x8)
    TMap<FName, double> DamageMultiplyByName;                                         // 0x02D8 (size: 0x50)
    double DefaultDamageMultiply;                                                     // 0x0328 (size: 0x8)
    double CurrentHealth;                                                             // 0x0330 (size: 0x8)
    TArray<class TSubclassOf<AActor>> SpawnClass;                                     // 0x0338 (size: 0x10)
    TArray<class UBillboardComponent*> SpawnPoints;                                   // 0x0348 (size: 0x10)
    bool AutoDestroy;                                                                 // 0x0358 (size: 0x1)
    bool UseBillboardScale;                                                           // 0x0359 (size: 0x1)
    bool UniqueSpawn;                                                                 // 0x035A (size: 0x1)

    void Damage(double DamageValue, int32 TeamIndex, TEnumAsByte<EN_DamageType::Type> DamageType, FTransform SourceAgentPoint, bool UnAvoidable, FName DamageName, class AActor* SourceActor, FFinishFilter& Finish);
    void ReceiveBeginPlay();
    void SpawnMaterial();
    void ReplicateEvent();
    void ExecuteUbergraph_BP_EnvironmentSystem_DamagedSpawn(int32 EntryPoint);
}; // Size: 0x35B

#endif
