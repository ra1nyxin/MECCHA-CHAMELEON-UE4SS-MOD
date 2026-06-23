#ifndef UE4SS_SDK_BP_RBD_VAT_DataAssets_HPP
#define UE4SS_SDK_BP_RBD_VAT_DataAssets_HPP

class UBP_RBD_VAT_DataAssets_C : public UPrimaryDataAsset
{
    double FrameLate;                                                                 // 0x0030 (size: 0x8)
    double Time;                                                                      // 0x0038 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x0040 (size: 0x8)
    class UTexture2D* Albedo;                                                         // 0x0048 (size: 0x8)
    class UTexture2D* Normal;                                                         // 0x0050 (size: 0x8)
    class UTexture2D* ORM;                                                            // 0x0058 (size: 0x8)
    class UTexture2D* position;                                                       // 0x0060 (size: 0x8)
    class UTexture2D* Rotation;                                                       // 0x0068 (size: 0x8)

    void GetDynamicMaterialInstance(class UObject* WorldContextObject, class UMaterialInstanceDynamic*& DynamicMaterial);
}; // Size: 0x70

#endif
