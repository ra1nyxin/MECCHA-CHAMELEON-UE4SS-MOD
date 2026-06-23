#ifndef UE4SS_SDK_BP_FootStepSoundPreset_HPP
#define UE4SS_SDK_BP_FootStepSoundPreset_HPP

class UBP_FootStepSoundPreset_C : public UPrimaryDataAsset
{
    TMap<TEnumAsByte<EPhysicalSurface>, USoundBase*> FootStepAudios;                  // 0x0030 (size: 0x50)

}; // Size: 0x80

#endif
