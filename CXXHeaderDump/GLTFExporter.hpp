#ifndef UE4SS_SDK_GLTFExporter_HPP
#define UE4SS_SDK_GLTFExporter_HPP

#include "GLTFExporter_enums.hpp"

struct FGLTFExportMessages
{
    TArray<FString> Suggestions;                                                      // 0x0000 (size: 0x10)
    TArray<FString> Warnings;                                                         // 0x0010 (size: 0x10)
    TArray<FString> Errors;                                                           // 0x0020 (size: 0x10)

}; // Size: 0x30

struct FGLTFMaterialBakeSize
{
    int32 X;                                                                          // 0x0000 (size: 0x4)
    int32 Y;                                                                          // 0x0004 (size: 0x4)
    bool bAutoDetect;                                                                 // 0x0008 (size: 0x1)

}; // Size: 0xC

struct FGLTFOverrideMaterialBakeSettings
{
    bool bOverrideSize;                                                               // 0x0000 (size: 0x1)
    FGLTFMaterialBakeSize Size;                                                       // 0x0004 (size: 0xC)
    bool bOverrideFilter;                                                             // 0x0010 (size: 0x1)
    TEnumAsByte<TextureFilter> Filter;                                                // 0x0011 (size: 0x1)
    bool bOverrideTiling;                                                             // 0x0012 (size: 0x1)
    TEnumAsByte<TextureAddress> Tiling;                                               // 0x0013 (size: 0x1)

}; // Size: 0x14

class UGLTFAnimSequenceExporter : public UGLTFExporter
{
}; // Size: 0x78

class UGLTFExportOptions : public UObject
{
    float ExportUniformScale;                                                         // 0x0028 (size: 0x4)
    bool bExportPreviewMesh;                                                          // 0x002C (size: 0x1)
    bool bSkipNearDefaultValues;                                                      // 0x002D (size: 0x1)
    bool bIncludeCopyrightNotice;                                                     // 0x002E (size: 0x1)
    bool bExportProxyMaterials;                                                       // 0x002F (size: 0x1)
    bool bUseImporterMaterialMapping;                                                 // 0x0030 (size: 0x1)
    bool bExportUnlitMaterials;                                                       // 0x0031 (size: 0x1)
    bool bExportClearCoatMaterials;                                                   // 0x0032 (size: 0x1)
    bool bExportClothMaterials;                                                       // 0x0033 (size: 0x1)
    bool bExportThinTranslucentMaterials;                                             // 0x0034 (size: 0x1)
    bool bExportSpecularGlossinessMaterials;                                          // 0x0035 (size: 0x1)
    bool bExportEmissiveStrength;                                                     // 0x0036 (size: 0x1)
    EGLTFMaterialBakeMode BakeMaterialInputs;                                         // 0x0037 (size: 0x1)
    FGLTFMaterialBakeSize DefaultMaterialBakeSize;                                    // 0x0038 (size: 0xC)
    TEnumAsByte<TextureFilter> DefaultMaterialBakeFilter;                             // 0x0044 (size: 0x1)
    TEnumAsByte<TextureAddress> DefaultMaterialBakeTiling;                            // 0x0045 (size: 0x1)
    TMap<class EGLTFMaterialPropertyGroup, class FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings; // 0x0048 (size: 0x50)
    int32 DefaultLevelOfDetail;                                                       // 0x0098 (size: 0x4)
    bool bExportSourceModel;                                                          // 0x009C (size: 0x1)
    bool bExportVertexColors;                                                         // 0x009D (size: 0x1)
    bool bExportVertexSkinWeights;                                                    // 0x009E (size: 0x1)
    bool bMakeSkinnedMeshesRoot;                                                      // 0x009F (size: 0x1)
    bool bUseMeshQuantization;                                                        // 0x00A0 (size: 0x1)
    bool bExportLevelSequences;                                                       // 0x00A1 (size: 0x1)
    bool bExportAnimationSequences;                                                   // 0x00A2 (size: 0x1)
    EGLTFTextureImageFormat TextureImageFormat;                                       // 0x00A3 (size: 0x1)
    int32 TextureImageQuality;                                                        // 0x00A4 (size: 0x4)
    bool bExportTextureTransforms;                                                    // 0x00A8 (size: 0x1)
    bool bExportLightmaps;                                                            // 0x00A9 (size: 0x1)
    bool bAdjustNormalmaps;                                                           // 0x00AA (size: 0x1)
    bool bExportHiddenInGame;                                                         // 0x00AB (size: 0x1)
    bool bExportLights;                                                               // 0x00AC (size: 0x1)
    bool bExportCameras;                                                              // 0x00AD (size: 0x1)
    EGLTFMaterialVariantMode ExportMaterialVariants;                                  // 0x00AE (size: 0x1)

    void ResetToDefault();
}; // Size: 0xB0

class UGLTFExporter : public UExporter
{

    bool ExportToGLTF(class UObject* Object, FString FilePath, const class UGLTFExportOptions* Options, const TSet<AActor*>& SelectedActors, FGLTFExportMessages& OutMessages);
}; // Size: 0x78

class UGLTFLevelExporter : public UGLTFExporter
{
}; // Size: 0x78

class UGLTFLevelSequenceExporter : public UGLTFExporter
{
}; // Size: 0x78

class UGLTFLevelVariantSetsExporter : public UGLTFExporter
{
}; // Size: 0x78

class UGLTFMaterialExportOptions : public UAssetUserData
{
    class UMaterialInterface* Proxy;                                                  // 0x0028 (size: 0x8)
    FGLTFOverrideMaterialBakeSettings Default;                                        // 0x0030 (size: 0x14)
    TMap<class EGLTFMaterialPropertyGroup, class FGLTFOverrideMaterialBakeSettings> Inputs; // 0x0048 (size: 0x50)

}; // Size: 0x98

class UGLTFMaterialExporter : public UGLTFExporter
{
}; // Size: 0x78

class UGLTFProxyOptions : public UObject
{
    bool bBakeMaterialInputs;                                                         // 0x0028 (size: 0x1)
    bool bUseThinTranslucentShadingModel;                                             // 0x0029 (size: 0x1)
    FGLTFMaterialBakeSize DefaultMaterialBakeSize;                                    // 0x002C (size: 0xC)
    TEnumAsByte<TextureFilter> DefaultMaterialBakeFilter;                             // 0x0038 (size: 0x1)
    TEnumAsByte<TextureAddress> DefaultMaterialBakeTiling;                            // 0x0039 (size: 0x1)
    TMap<class EGLTFMaterialPropertyGroup, class FGLTFOverrideMaterialBakeSettings> DefaultInputBakeSettings; // 0x0040 (size: 0x50)

    void ResetToDefault();
}; // Size: 0x90

class UGLTFSkeletalMeshExporter : public UGLTFExporter
{
}; // Size: 0x78

class UGLTFStaticMeshExporter : public UGLTFExporter
{
}; // Size: 0x78

#endif
