#ifndef UE4SS_SDK_RedpointEOSFrameworkExtra_HPP
#define UE4SS_SDK_RedpointEOSFrameworkExtra_HPP

#include "RedpointEOSFrameworkExtra_enums.hpp"

struct FRedpointBackpackLoadoutEntry
{
    TSubclassOf<class ARedpointBackpackItem> Item;                                    // 0x0000 (size: 0x8)

}; // Size: 0x8

class ARedpointAbilityBaseCharacter : public ACharacter
{
    class APlayerState* LastClientPlayerState;                                        // 0x0650 (size: 0x8)
    class UAbilitySystemComponent* VolatileAbilitySystem;                             // 0x0660 (size: 0x8)
    TArray<class TSubclassOf<UGameplayAbility>> VolatileCharacterAbilities;           // 0x0670 (size: 0x10)
    TSubclassOf<class UGameplayEffect> VolatileDefaultAttributes;                     // 0x0680 (size: 0x8)

}; // Size: 0x690

class ARedpointAbilityBasePlayerState : public APlayerState
{
    class UAbilitySystemComponent* AbilitySystem;                                     // 0x0368 (size: 0x8)
    TArray<class TSubclassOf<UGameplayAbility>> CharacterAbilities;                   // 0x0370 (size: 0x10)
    TSubclassOf<class UGameplayEffect> DefaultAttributes;                             // 0x0380 (size: 0x8)

    void ResetGameplayAbilities();
}; // Size: 0x390

class ARedpointAbilityPlayerCharacter : public ARedpointAbilityBaseCharacter
{
}; // Size: 0x6A0

class ARedpointAbilityPlayerState : public ARedpointAbilityBasePlayerState
{
    class URedpointBackpackComponent* Backpack;                                       // 0x03A0 (size: 0x8)
    class URedpointAttributeSetDash* DashAttributeSet;                                // 0x03A8 (size: 0x8)
    class URedpointAttributeSetHealth* HealthAttributeSet;                            // 0x03B0 (size: 0x8)
    class URedpointAttributeSetInteract* InteractAttributeSet;                        // 0x03B8 (size: 0x8)
    class URedpointAttributeSetJetpack* JetpackAttributeSet;                          // 0x03C0 (size: 0x8)
    class URedpointAttributeSetMovement* MovementAttributeSet;                        // 0x03C8 (size: 0x8)
    class URedpointAttributeSetStun* StunAttributeSet;                                // 0x03D0 (size: 0x8)

}; // Size: 0x3D8

class ARedpointBackpackItem : public AActor
{
    FGameplayTag ItemTag;                                                             // 0x02A8 (size: 0x8)
    class UTexture2D* Icon;                                                           // 0x02B0 (size: 0x8)
    class UAbilitySystemComponent* AbilitySystemComponent;                            // 0x02B8 (size: 0x8)
    class UCapsuleComponent* CollisionComp;                                           // 0x02C0 (size: 0x8)
    class USkeletalMeshComponent* ItemMesh1P;                                         // 0x02C8 (size: 0x8)
    class USkeletalMeshComponent* ItemMesh3P;                                         // 0x02D0 (size: 0x8)
    FVector ItemMesh3PickupRelativeLocation;                                          // 0x02D8 (size: 0x18)
    FVector ItemMesh1PEquippedRelativeLocation;                                       // 0x02F0 (size: 0x18)
    FRotator ItemMesh1PEquippedRelativeRotation;                                      // 0x0308 (size: 0x18)
    FVector ItemMesh3PEquippedRelativeLocation;                                       // 0x0320 (size: 0x18)
    FRotator ItemMesh3PEquippedRelativeRotation;                                      // 0x0338 (size: 0x18)
    class AActor* OwningActor;                                                        // 0x0350 (size: 0x8)
    TArray<class TSubclassOf<UGameplayAbility>> Abilities;                            // 0x0358 (size: 0x10)
    TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;                            // 0x0368 (size: 0x10)
    class UAnimMontage* Equip1PMontage;                                               // 0x0378 (size: 0x8)
    class UAnimMontage* Equip3PMontage;                                               // 0x0380 (size: 0x8)
    class USoundCue* PickupSound;                                                     // 0x0388 (size: 0x8)
    bool bIsWeapon;                                                                   // 0x0390 (size: 0x1)
    FGameplayTag WeaponFiringTag;                                                     // 0x0394 (size: 0x8)
    class UTexture2D* WeaponClipIcon;                                                 // 0x03A0 (size: 0x8)
    int32 WeaponCurrentClipAmmo;                                                      // 0x03A8 (size: 0x4)
    int32 WeaponMaximumClipAmmo;                                                      // 0x03AC (size: 0x4)

    void SetWeaponMaximumClipAmmo(int32 MaximumAmmo);
    void SetWeaponCurrentClipAmmo(int32 CurrentAmmo);
    void OnRep_WeaponMaximumClipAmmo(int32 OldValue);
    void OnRep_WeaponCurrentClipAmmo(int32 OldValue);
    int32 GetWeaponMaximumClipAmmo();
    int32 GetWeaponCurrentClipAmmo();
    class USkeletalMeshComponent* GetItemMesh3P();
    class USkeletalMeshComponent* GetItemMesh1P();
}; // Size: 0x3B0

class ARedpointStarterCharacter : public ACharacter
{
    class UStaticMeshComponent* Sphere;                                               // 0x0648 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0650 (size: 0x8)

}; // Size: 0x660

class ARedpointStarterGameMode : public AGameModeBase
{
}; // Size: 0x340

class ARedpointStarterPlayerController : public APlayerController
{
    TSoftObjectPtr<UInputAction> MoveAction;                                          // 0x0738 (size: 0x28)
    TSoftObjectPtr<UInputAction> JumpAction;                                          // 0x0760 (size: 0x28)
    TSoftObjectPtr<UInputMappingContext> InputMappingContext;                         // 0x0788 (size: 0x28)
    bool bSkipInputMappingContext;                                                    // 0x07B0 (size: 0x1)

}; // Size: 0x7B8

class IRedpointAbilityWithInputIdInterface : public IInterface
{

    int32 GetAbilityInputId(class ARedpointBackpackItem* Item);
}; // Size: 0x28

class IRedpointAbilityWithLevelInterface : public IInterface
{

    int32 GetAbilityLevel(class ARedpointBackpackItem* Item);
}; // Size: 0x28

class IRedpointBackpackItemAttachmentInterface : public IInterface
{

    bool IsInFirstPersonPerspective();
    class USkeletalMeshComponent* GetThirdPersonMesh();
    class USkeletalMeshComponent* GetFirstPersonMesh();
    FName GetAttachmentPoint();
}; // Size: 0x28

class IRedpointBackpackItemNotificationInterface : public IInterface
{

    void OnItemChanged(class ARedpointBackpackItem* NewItem, class ARedpointBackpackItem* PreviousItem);
}; // Size: 0x28

class IRedpointDamageNotificationInterface : public IInterface
{

    void OnKilledTargetActor(class UAbilitySystemComponent* SourceAbilitySystem, class AActor* TargetActor, class UAbilitySystemComponent* TargetAbilitySystem);
    void OnDealtDamageToTarget(int32 DamageDealt, class AActor* TargetActor);
}; // Size: 0x28

class IRedpointHasBackpackInterface : public IInterface
{

    class URedpointBackpackComponent* GetBackpack();
}; // Size: 0x28

class IRedpointIsAliveInterface : public IInterface
{

    bool IsAlive();
}; // Size: 0x28

class IRedpointOverridesMaxSpeedInterface : public IInterface
{

    float GetMaxSpeed();
}; // Size: 0x28

class URedpointAbilityBaseGameplayAbility : public UGameplayAbility
{

    bool K2_CheckCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo);
    void K2_ApplyCost(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo& ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo);
}; // Size: 0x3A8

class URedpointAbilityCharacterBlueprintLibrary : public UBlueprintFunctionLibrary
{

    bool IsPrimaryAbilityInstanceActive(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle);
    bool IsAbilitySpecHandleValid(FGameplayAbilitySpecHandle Handle);
    void GiveAbilityFromClass(class ARedpointAbilityBaseCharacter* Character, TSubclassOf<class UGameplayAbility> AbilityClass, int32 Level, int32 InputIndex, FGameplayAbilitySpecHandle& Handle, bool& Success);
    class UGameplayAbility* GetPrimaryAbilityInstanceFromHandle(class UAbilitySystemComponent* AbilitySystemComponent, FGameplayAbilitySpecHandle Handle);
    class UGameplayAbility* GetPrimaryAbilityInstanceFromClass(class UAbilitySystemComponent* AbilitySystemComponent, TSubclassOf<class UGameplayAbility> InAbilityClass);
    FGameplayAbilitySpecHandle FindAbilitySpecHandleForClass(class UAbilitySystemComponent* AbilitySystem, TSubclassOf<class UGameplayAbility> AbilityClass, class UObject* OptionalSourceObject);
    void ClearAllAbilities(class ARedpointAbilityBaseCharacter* Character);
    void ClearAbilityFromClass(class ARedpointAbilityBaseCharacter* Character, const FGameplayAbilitySpecHandle& Handle, bool& Success);
}; // Size: 0x28

class URedpointAbilityCharacterMovementComponent : public UCharacterMovementComponent
{
}; // Size: 0xFD0

class URedpointAbilityTask_WaitLanded : public UAbilityTask
{
    FRedpointAbilityTask_WaitLandedOnLanded OnLanded;                                 // 0x0080 (size: 0x10)
    void LandedSignature(const FHitResult& Hit);

    void HandleOnLanded(const FHitResult& Hit);
    class URedpointAbilityTask_WaitLanded* CreateWaitLanded(class UGameplayAbility* OwningAbility);
}; // Size: 0x98

class URedpointAttributeSetBase : public UAttributeSet
{
}; // Size: 0x30

class URedpointAttributeSetDash : public URedpointAttributeSetBase
{
    FGameplayAttributeData DashLengthTime;                                            // 0x0030 (size: 0x10)
    FGameplayAttributeData DashStrength;                                              // 0x0040 (size: 0x10)

    void OnRep_DashStrength(const FGameplayAttributeData& OldValue);
    void OnRep_DashLengthTime(const FGameplayAttributeData& OldValue);
}; // Size: 0x50

class URedpointAttributeSetDestructablePoints : public URedpointAttributeSetBase
{
    FGameplayAttributeData TotalPointsForDestruction;                                 // 0x0030 (size: 0x10)
    FGameplayAttributeData FinalHitPointsForDestruction;                              // 0x0040 (size: 0x10)
    FGameplayAttributeData TotalPointsDroppedOnDestruction;                           // 0x0050 (size: 0x10)
    FGameplayAttributeData PointsForRecoveryToExitAfterStun;                          // 0x0060 (size: 0x10)

    void OnRep_TotalPointsForDestruction(const FGameplayAttributeData& OldValue);
    void OnRep_TotalPointsDroppedOnDestruction(const FGameplayAttributeData& OldValue);
    void OnRep_PointsForRecoveryToExitAfterStun(const FGameplayAttributeData& OldValue);
    void OnRep_FinalHitPointsForDestruction(const FGameplayAttributeData& OldValue);
}; // Size: 0x70

class URedpointAttributeSetHealth : public URedpointAttributeSetBase
{
    FGameplayAttributeData CurrentHealth;                                             // 0x0030 (size: 0x10)
    FGameplayAttributeData MaximumHealth;                                             // 0x0040 (size: 0x10)
    FGameplayAttributeData HealthRegenDelay;                                          // 0x0050 (size: 0x10)
    FGameplayAttributeData HealthRegenAmount;                                         // 0x0060 (size: 0x10)
    FGameplayAttributeData HealthRegenAmountModifier;                                 // 0x0070 (size: 0x10)
    FGameplayAttributeData Damage;                                                    // 0x0080 (size: 0x10)

    void OnRep_MaximumHealth(const FGameplayAttributeData& OldValue);
    void OnRep_HealthRegenDelay(const FGameplayAttributeData& OldValue);
    void OnRep_HealthRegenAmountModifier(const FGameplayAttributeData& OldValue);
    void OnRep_HealthRegenAmount(const FGameplayAttributeData& OldValue);
    void OnRep_CurrentHealth(const FGameplayAttributeData& OldValue);
}; // Size: 0x90

class URedpointAttributeSetInteract : public URedpointAttributeSetBase
{
    FGameplayAttributeData InteractDistance;                                          // 0x0030 (size: 0x10)

    void OnRep_InteractDistance(const FGameplayAttributeData& OldValue);
}; // Size: 0x40

class URedpointAttributeSetJetpack : public URedpointAttributeSetBase
{
    FGameplayAttributeData JetpackLengthTime;                                         // 0x0030 (size: 0x10)
    FGameplayAttributeData JetpackStrength;                                           // 0x0040 (size: 0x10)

    void OnRep_JetpackStrength(const FGameplayAttributeData& OldValue);
    void OnRep_JetpackLengthTime(const FGameplayAttributeData& OldValue);
}; // Size: 0x50

class URedpointAttributeSetMovement : public URedpointAttributeSetBase
{
    FGameplayAttributeData MovementSpeed;                                             // 0x0030 (size: 0x10)

    void OnRep_MovementSpeed(const FGameplayAttributeData& OldValue);
}; // Size: 0x40

class URedpointAttributeSetReserveAmmo : public URedpointAttributeSetBase
{
    FGameplayAttributeData CurrentReserveAmmo;                                        // 0x0030 (size: 0x10)
    FGameplayAttributeData MaximumReserveAmmo;                                        // 0x0040 (size: 0x10)

    void OnRep_MaximumReserveAmmo(const FGameplayAttributeData& OldValue);
    void OnRep_CurrentReserveAmmo(const FGameplayAttributeData& OldValue);
}; // Size: 0x50

class URedpointAttributeSetStun : public URedpointAttributeSetBase
{
    FGameplayAttributeData StunTime;                                                  // 0x0030 (size: 0x10)
    FGameplayAttributeData StunRecoveryHealthAmount;                                  // 0x0040 (size: 0x10)

    void OnRep_StunTime(const FGameplayAttributeData& OldValue);
    void OnRep_StunRecoveryHealthAmount(const FGameplayAttributeData& OldValue);
}; // Size: 0x50

class URedpointBackpackComponent : public UActorComponent
{
    TArray<FRedpointBackpackLoadoutEntry> Loadout;                                    // 0x00C8 (size: 0x10)
    int32 SlotCount;                                                                  // 0x00D8 (size: 0x4)
    TArray<class ARedpointBackpackItem*> Items;                                       // 0x00E0 (size: 0x10)
    class ARedpointBackpackItem* CurrentItem;                                         // 0x00F0 (size: 0x8)
    FRedpointBackpackComponentOnDropItemRequested OnDropItemRequested;                // 0x00F8 (size: 0x10)
    bool RedpointBackpackOnDropItemRequested(class ARedpointBackpackItem* Item);

    void SyncCurrentItemToServer();
    void SyncCurrentItemToClient(class ARedpointBackpackItem* InItem);
    void SelectPreviousItem();
    void SelectNextItem();
    void RequestItemEquipOnServer(class ARedpointBackpackItem* NewItem);
    bool PickupItem(class ARedpointBackpackItem* Item);
    void OnRep_Items();
    void OnRep_CurrentItem(class ARedpointBackpackItem* PreviousItem);
    int32 GetSlotCount();
    class ARedpointBackpackItem* GetItemInSlot(int32 InSlot);
    int32 GetItemIndex(class ARedpointBackpackItem* Item);
    int32 GetItemCount();
    class ARedpointBackpackItem* GetCurrentItem();
    bool DropItem(class ARedpointBackpackItem* Item);
    void DropAllItems(bool bForce);
}; // Size: 0x120

class URedpointConsoleCommand : public UObject
{
    FString CommandName;                                                              // 0x0028 (size: 0x10)
    FString HelpText;                                                                 // 0x0038 (size: 0x10)

    void OutputString(TEnumAsByte<ERedpointConsoleCommandLogVerbosity> Verbosity, FString Message);
    void HandleCommand(const TArray<FString>& Arguments);
}; // Size: 0x50

class URedpointConsoleGameInstanceSubsystem : public UGameInstanceSubsystem
{
    TMap<class FString, class URedpointConsoleCommand*> CommandsRegistered;           // 0x0030 (size: 0x50)

}; // Size: 0x80

class URedpointFrameworkExtraBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void RestartLevel(class UObject* WorldContextObject);
    void InduceStutter(float Seconds);
    TMap<class FString, class FString> GetAllUserAttributes(class UObject* WorldContextObject, FUniqueNetIdRepl TargetUserId);
}; // Size: 0x28

class URedpointStarterInputMappingContext : public UInputMappingContext
{
}; // Size: 0xA8

class URedpointStarterJumpAction : public UInputAction
{
}; // Size: 0x78

class URedpointStarterMoveAction : public UInputAction
{
}; // Size: 0x78

#endif
