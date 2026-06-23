#ifndef UE4SS_SDK_MovieRenderPipelineRenderPasses_HPP
#define UE4SS_SDK_MovieRenderPipelineRenderPasses_HPP

#include "MovieRenderPipelineRenderPasses_enums.hpp"

struct FMoviePipelinePostProcessPass
{
    bool bEnabled;                                                                    // 0x0000 (size: 0x1)
    FString Name;                                                                     // 0x0008 (size: 0x10)
    TSoftObjectPtr<UMaterialInterface> Material;                                      // 0x0018 (size: 0x28)
    bool bHighPrecisionOutput;                                                        // 0x0040 (size: 0x1)

}; // Size: 0x48

class UMovieGraphDeferredPanoramicNode : public UMovieGraphImagePassBaseNode
{
    uint8 bOverride_NumHorizontalSteps;                                               // 0x00C8 (size: 0x1)
    uint8 bOverride_NumVerticalSteps;                                                 // 0x00C8 (size: 0x1)
    uint8 bOverride_bFollowCameraOrientation;                                         // 0x00C8 (size: 0x1)
    uint8 bOverride_bAllocateHistoryPerPane;                                          // 0x00C8 (size: 0x1)
    uint8 bOverride_bPageToSystemMemory;                                              // 0x00C8 (size: 0x1)
    uint8 bOverride_SpatialSampleCount;                                               // 0x00C8 (size: 0x1)
    uint8 bOverride_AntiAliasingMethod;                                               // 0x00C8 (size: 0x1)
    uint8 bOverride_Filter;                                                           // 0x00C8 (size: 0x1)
    uint8 bOverride_bDisableToneCurve;                                                // 0x00C9 (size: 0x1)
    uint8 bOverride_bAllowOCIO;                                                       // 0x00C9 (size: 0x1)
    uint8 bOverride_ViewModeIndex;                                                    // 0x00C9 (size: 0x1)
    uint8 bOverride_bWriteAllSamples;                                                 // 0x00C9 (size: 0x1)
    int32 NumHorizontalSteps;                                                         // 0x00CC (size: 0x4)
    int32 NumVerticalSteps;                                                           // 0x00D0 (size: 0x4)
    bool bFollowCameraOrientation;                                                    // 0x00D4 (size: 0x1)
    bool bAllocateHistoryPerPane;                                                     // 0x00D5 (size: 0x1)
    bool bPageToSystemMemory;                                                         // 0x00D6 (size: 0x1)
    int32 SpatialSampleCount;                                                         // 0x00D8 (size: 0x4)
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingMethod;                              // 0x00DC (size: 0x1)
    EMoviePipelinePanoramicFilterType Filter;                                         // 0x00DD (size: 0x1)
    bool bWriteAllSamples;                                                            // 0x00DE (size: 0x1)
    bool bDisableToneCurve;                                                           // 0x00DF (size: 0x1)
    bool bAllowOCIO;                                                                  // 0x00E0 (size: 0x1)
    TEnumAsByte<EViewModeIndex> ViewModeIndex;                                        // 0x00E1 (size: 0x1)

}; // Size: 0xE8

class UMovieGraphDeferredRenderPassNode : public UMovieGraphImagePassBaseNode
{
    uint8 bOverride_SpatialSampleCount;                                               // 0x00C8 (size: 0x1)
    uint8 bOverride_AntiAliasingMethod;                                               // 0x00C8 (size: 0x1)
    uint8 bOverride_bDisableToneCurve;                                                // 0x00C8 (size: 0x1)
    uint8 bOverride_bAllowOCIO;                                                       // 0x00C8 (size: 0x1)
    uint8 bOverride_ViewModeIndex;                                                    // 0x00C8 (size: 0x1)
    uint8 bOverride_bWriteAllSamples;                                                 // 0x00C8 (size: 0x1)
    uint8 bOverride_AdditionalPostProcessMaterials;                                   // 0x00C8 (size: 0x1)
    uint8 bOverride_bEnableHighResolutionTiling;                                      // 0x00C8 (size: 0x1)
    uint8 bOverride_TileCount;                                                        // 0x00C9 (size: 0x1)
    uint8 bOverride_OverlapPercentage;                                                // 0x00C9 (size: 0x1)
    uint8 bOverride_bAllocateHistoryPerTile;                                          // 0x00C9 (size: 0x1)
    uint8 bOverride_bPageToSystemMemory;                                              // 0x00C9 (size: 0x1)
    int32 SpatialSampleCount;                                                         // 0x00CC (size: 0x4)
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingMethod;                              // 0x00D0 (size: 0x1)
    bool bWriteAllSamples;                                                            // 0x00D1 (size: 0x1)
    bool bDisableToneCurve;                                                           // 0x00D2 (size: 0x1)
    bool bAllowOCIO;                                                                  // 0x00D3 (size: 0x1)
    TEnumAsByte<EViewModeIndex> ViewModeIndex;                                        // 0x00D4 (size: 0x1)
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;             // 0x00D8 (size: 0x10)
    bool bEnableHighResolutionTiling;                                                 // 0x00E8 (size: 0x1)
    int32 TileCount;                                                                  // 0x00EC (size: 0x4)
    float OverlapPercentage;                                                          // 0x00F0 (size: 0x4)
    bool bAllocateHistoryPerTile;                                                     // 0x00F4 (size: 0x1)
    bool bPageToSystemMemory;                                                         // 0x00F5 (size: 0x1)

}; // Size: 0xF8

class UMovieGraphImagePassBaseNode : public UMovieGraphRenderPassNode
{
    uint8 bOverride_ShowFlags;                                                        // 0x00A8 (size: 0x1)
    class UMovieGraphShowFlags* ShowFlags;                                            // 0x00B0 (size: 0x8)

}; // Size: 0xC8

class UMovieGraphImageSequenceOutputNode : public UMovieGraphFileOutputNode
{
    uint8 bOverride_OCIOConfiguration;                                                // 0x00C0 (size: 0x1)
    uint8 bOverride_OCIOContext;                                                      // 0x00C0 (size: 0x1)
    FOpenColorIODisplayConfiguration OCIOConfiguration;                               // 0x00C8 (size: 0xA8)
    TMap<class FString, class FString> OCIOContext;                                   // 0x0170 (size: 0x50)

}; // Size: 0x1E0

class UMovieGraphImageSequenceOutputNode_BMP : public UMovieGraphImageSequenceOutputNode
{
}; // Size: 0x1E0

class UMovieGraphImageSequenceOutputNode_EXR : public UMovieGraphImageSequenceOutputNode
{
    uint8 bOverride_Compression;                                                      // 0x01E0 (size: 0x1)
    EEXRCompressionFormat Compression;                                                // 0x01E1 (size: 0x1)

}; // Size: 0x1E8

class UMovieGraphImageSequenceOutputNode_JPG : public UMovieGraphImageSequenceOutputNode
{
}; // Size: 0x1E0

class UMovieGraphImageSequenceOutputNode_MultiLayerEXR : public UMovieGraphImageSequenceOutputNode_EXR
{
    uint8 bOverride_bMultiPart;                                                       // 0x01E8 (size: 0x1)
    bool bMultipart;                                                                  // 0x01E9 (size: 0x1)

}; // Size: 0x1F0

class UMovieGraphImageSequenceOutputNode_PNG : public UMovieGraphImageSequenceOutputNode
{
}; // Size: 0x1E0

class UMovieGraphPathTracerRenderPassNode : public UMovieGraphImagePassBaseNode
{
    uint8 bOverride_SpatialSampleCount;                                               // 0x00C8 (size: 0x1)
    uint8 bOverride_SeedOffset;                                                       // 0x00C8 (size: 0x1)
    uint8 bOverride_bEnableReferenceMotionBlur;                                       // 0x00C8 (size: 0x1)
    uint8 bOverride_bEnableDenoiser;                                                  // 0x00C8 (size: 0x1)
    uint8 bOverride_DenoiserType;                                                     // 0x00C8 (size: 0x1)
    uint8 bOverride_FrameCount;                                                       // 0x00C8 (size: 0x1)
    uint8 bOverride_bDisableToneCurve;                                                // 0x00C8 (size: 0x1)
    uint8 bOverride_bAllowOCIO;                                                       // 0x00C8 (size: 0x1)
    uint8 bOverride_bLightingComponents_IncludeEmissive;                              // 0x00C9 (size: 0x1)
    uint8 bOverride_bLightingComponents_IncludeDiffuse;                               // 0x00C9 (size: 0x1)
    uint8 bOverride_bLightingComponents_IncludeIndirectDiffuse;                       // 0x00C9 (size: 0x1)
    uint8 bOverride_bLightingComponents_IncludeSpecular;                              // 0x00C9 (size: 0x1)
    uint8 bOverride_bLightingComponents_IncludeIndirectSpecular;                      // 0x00C9 (size: 0x1)
    uint8 bOverride_bLightingComponents_IncludeVolume;                                // 0x00C9 (size: 0x1)
    uint8 bOverride_bLightingComponents_IncludeIndirectVolume;                        // 0x00C9 (size: 0x1)
    uint8 bOverride_bWriteAllSamples;                                                 // 0x00C9 (size: 0x1)
    uint8 bOverride_AdditionalPostProcessMaterials;                                   // 0x00CA (size: 0x1)
    uint8 bOverride_bEnableHighResolutionTiling;                                      // 0x00CA (size: 0x1)
    uint8 bOverride_TileCount;                                                        // 0x00CA (size: 0x1)
    uint8 bOverride_OverlapPercentage;                                                // 0x00CA (size: 0x1)
    uint8 bOverride_bAllocateHistoryPerTile;                                          // 0x00CA (size: 0x1)
    uint8 bOverride_bPageToSystemMemory;                                              // 0x00CA (size: 0x1)
    int32 SpatialSampleCount;                                                         // 0x00CC (size: 0x4)
    int32 SeedOffset;                                                                 // 0x00D0 (size: 0x4)
    bool bEnableReferenceMotionBlur;                                                  // 0x00D4 (size: 0x1)
    bool bEnableDenoiser;                                                             // 0x00D5 (size: 0x1)
    EMovieGraphPathTracerDenoiserType DenoiserType;                                   // 0x00D6 (size: 0x1)
    int32 FrameCount;                                                                 // 0x00D8 (size: 0x4)
    bool bWriteAllSamples;                                                            // 0x00DC (size: 0x1)
    bool bDisableToneCurve;                                                           // 0x00DD (size: 0x1)
    bool bAllowOCIO;                                                                  // 0x00DE (size: 0x1)
    bool bLightingComponents_IncludeEmissive;                                         // 0x00DF (size: 0x1)
    bool bLightingComponents_IncludeDiffuse;                                          // 0x00E0 (size: 0x1)
    bool bLightingComponents_IncludeIndirectDiffuse;                                  // 0x00E1 (size: 0x1)
    bool bLightingComponents_IncludeSpecular;                                         // 0x00E2 (size: 0x1)
    bool bLightingComponents_IncludeIndirectSpecular;                                 // 0x00E3 (size: 0x1)
    bool bLightingComponents_IncludeVolume;                                           // 0x00E4 (size: 0x1)
    bool bLightingComponents_IncludeIndirectVolume;                                   // 0x00E5 (size: 0x1)
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;             // 0x00E8 (size: 0x10)
    bool bEnableHighResolutionTiling;                                                 // 0x00F8 (size: 0x1)
    int32 TileCount;                                                                  // 0x00FC (size: 0x4)
    float OverlapPercentage;                                                          // 0x0100 (size: 0x4)
    bool bAllocateHistoryPerTile;                                                     // 0x0104 (size: 0x1)
    bool bPageToSystemMemory;                                                         // 0x0105 (size: 0x1)

}; // Size: 0x110

class UMoviePipelineDeferredPassBase : public UMoviePipelineImagePassBase
{
    bool bAccumulatorIncludesAlpha;                                                   // 0x0178 (size: 0x1)
    bool bDisableMultisampleEffects;                                                  // 0x0179 (size: 0x1)
    TArray<FMoviePipelinePostProcessPass> AdditionalPostProcessMaterials;             // 0x0180 (size: 0x10)
    bool bRenderMainPass;                                                             // 0x0190 (size: 0x1)
    bool bAddDefaultLayer;                                                            // 0x0191 (size: 0x1)
    TArray<FActorLayer> ActorLayers;                                                  // 0x0198 (size: 0x10)
    TArray<FSoftObjectPath> DataLayers;                                               // 0x01A8 (size: 0x10)
    TArray<class UMaterialInterface*> ActivePostProcessMaterials;                     // 0x01B8 (size: 0x10)
    TSet<UMaterialInterface*> ActiveHighPrecisionPostProcessMaterials;                // 0x01C8 (size: 0x50)
    class UMaterialInterface* StencilLayerMaterial;                                   // 0x0218 (size: 0x8)

}; // Size: 0x278

class UMoviePipelineDeferredPass_DetailLighting : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x278

class UMoviePipelineDeferredPass_LightingOnly : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x278

class UMoviePipelineDeferredPass_PathTracer : public UMoviePipelineDeferredPassBase
{
    bool bReferenceMotionBlur;                                                        // 0x0278 (size: 0x1)

}; // Size: 0x280

class UMoviePipelineDeferredPass_ReflectionsOnly : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x278

class UMoviePipelineDeferredPass_Unlit : public UMoviePipelineDeferredPassBase
{
}; // Size: 0x278

class UMoviePipelineImagePassBase : public UMoviePipelineRenderPass
{
}; // Size: 0x178

class UMoviePipelineImageSequenceOutputBase : public UMoviePipelineOutputBase
{
}; // Size: 0x68

class UMoviePipelineImageSequenceOutput_BMP : public UMoviePipelineImageSequenceOutputBase
{
}; // Size: 0x68

class UMoviePipelineImageSequenceOutput_EXR : public UMoviePipelineImageSequenceOutputBase
{
    EEXRCompressionFormat Compression;                                                // 0x0068 (size: 0x1)
    bool bMultilayer;                                                                 // 0x0069 (size: 0x1)
    bool bMultipart;                                                                  // 0x006A (size: 0x1)

}; // Size: 0x70

class UMoviePipelineImageSequenceOutput_JPG : public UMoviePipelineImageSequenceOutputBase
{
}; // Size: 0x68

class UMoviePipelineImageSequenceOutput_PNG : public UMoviePipelineImageSequenceOutputBase
{
    bool bWriteAlpha;                                                                 // 0x0068 (size: 0x1)

}; // Size: 0x70

class UMoviePipelineWaveOutput : public UMoviePipelineOutputBase
{
    FString FileNameFormatOverride;                                                   // 0x0048 (size: 0x10)

}; // Size: 0xB8

#endif
