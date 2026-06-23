#ifndef UE4SS_SDK_BP_cLeonMapData_HPP
#define UE4SS_SDK_BP_cLeonMapData_HPP

class UBP_cLeonMapData_C : public UPrimaryDataAsset
{
    class UTexture* MapImage;                                                         // 0x0030 (size: 0x8)
    FText MapName;                                                                    // 0x0038 (size: 0x10)
    FName TeleporterName;                                                             // 0x0048 (size: 0x8)
    class UDataLayerAsset* DataLayer;                                                 // 0x0050 (size: 0x8)

}; // Size: 0x58

#endif
