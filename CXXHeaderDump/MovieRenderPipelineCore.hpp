#ifndef UE4SS_SDK_MovieRenderPipelineCore_HPP
#define UE4SS_SDK_MovieRenderPipelineCore_HPP

#include "MovieRenderPipelineCore_enums.hpp"

struct FMovieGraphActorQueryEntry
{
    TSoftObjectPtr<AActor> ActorToMatch;                                              // 0x0000 (size: 0x28)
    TArray<TSoftObjectPtr<UActorComponent>> ComponentsToMatch;                        // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FMovieGraphBranch
{
    FName BranchName;                                                                 // 0x0000 (size: 0x8)

}; // Size: 0x8

struct FMovieGraphEvaluatedBranchConfig
{
    TMap<class FString, class FMovieGraphEvaluatedSettingsStack> NamedNodes;          // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FMovieGraphEvaluatedSettingsStack
{
    TArray<class UMovieGraphNode*> NodeInstances;                                     // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieGraphEvaluationContext
{
    FMovieGraphTraversalContext UserContext;                                          // 0x0000 (size: 0xE8)
    TMap<class UMovieGraphConfig*, class FMovieGraphEvaluationContext_VisitedNodeInfo> VisitedNodesByOwningGraph; // 0x00E8 (size: 0x50)
    class UMovieGraphPin* PinBeingFollowed;                                           // 0x0138 (size: 0x8)
    TArray<class UMovieGraphSubgraphNode*> SubgraphStack;                             // 0x0140 (size: 0x10)
    bool bCircularGraphReferenceFound;                                                // 0x0150 (size: 0x1)
    FText TraversalError;                                                             // 0x0158 (size: 0x10)

}; // Size: 0x178

struct FMovieGraphEvaluationContext_VisitedNodeInfo
{
    TSet<UMovieGraphNode*> VisitedNodes;                                              // 0x0000 (size: 0x50)

}; // Size: 0x50

struct FMovieGraphEvaluationResult
{
    TSet<AActor*> MatchingActors;                                                     // 0x0000 (size: 0x50)
    TSet<UActorComponent*> MatchingComponents;                                        // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FMovieGraphFilenameResolveParams
{
    FMovieGraphRenderDataIdentifier RenderDataIdentifier;                             // 0x0000 (size: 0x48)
    int32 RootFrameNumber;                                                            // 0x0048 (size: 0x4)
    int32 ShotFrameNumber;                                                            // 0x004C (size: 0x4)
    int32 RootFrameNumberRel;                                                         // 0x0050 (size: 0x4)
    int32 ShotFrameNumberRel;                                                         // 0x0054 (size: 0x4)
    TMap<class FString, class FString> FileMetadata;                                  // 0x0058 (size: 0x50)
    int32 Version;                                                                    // 0x00A8 (size: 0x4)
    bool bForceRelativeFrameNumbers;                                                  // 0x00AC (size: 0x1)
    FString FileNameOverride;                                                         // 0x00B0 (size: 0x10)
    bool bEnsureAbsolutePath;                                                         // 0x00C0 (size: 0x1)
    FDateTime InitializationTime;                                                     // 0x00C8 (size: 0x8)
    FTimespan InitializationTimeOffset;                                               // 0x00D0 (size: 0x8)
    int32 ZeroPadFrameNumberCount;                                                    // 0x00D8 (size: 0x4)
    TMap<class FString, class FString> FileNameFormatOverrides;                       // 0x00E0 (size: 0x50)
    class UMoviePipelineExecutorJob* Job;                                             // 0x0130 (size: 0x8)
    class UMoviePipelineExecutorShot* Shot;                                           // 0x0138 (size: 0x8)
    class UMovieGraphEvaluatedConfig* EvaluatedConfig;                                // 0x0140 (size: 0x8)
    int32 FrameNumberOffset;                                                          // 0x0148 (size: 0x4)
    FFrameRate DefaultFrameRate;                                                      // 0x014C (size: 0x8)

}; // Size: 0x158

struct FMovieGraphImagePreviewData
{
    class UTexture* Texture;                                                          // 0x0000 (size: 0x8)
    FMovieGraphRenderDataIdentifier Identifier;                                       // 0x0008 (size: 0x48)
    bool bMultipleCameraNames;                                                        // 0x0050 (size: 0x1)

}; // Size: 0x58

struct FMovieGraphInitConfig
{
    TSubclassOf<class UMovieGraphRendererBase> RendererClass;                         // 0x0000 (size: 0x8)
    TSubclassOf<class UMovieGraphDataSourceBase> DataSourceClass;                     // 0x0008 (size: 0x8)
    TSubclassOf<class UMovieGraphAudioRendererBase> AudioRendererClass;               // 0x0010 (size: 0x8)
    bool bRenderViewport;                                                             // 0x0018 (size: 0x1)

}; // Size: 0x20

struct FMovieGraphMetadataAttribute
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString Value;                                                                    // 0x0010 (size: 0x10)
    bool bIsEnabled;                                                                  // 0x0020 (size: 0x1)

}; // Size: 0x28

struct FMovieGraphNamedResolution
{
    FName ProfileName;                                                                // 0x0000 (size: 0x8)
    FIntPoint Resolution;                                                             // 0x0008 (size: 0x8)
    FString Description;                                                              // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMovieGraphPinProperties
{
    FName Label;                                                                      // 0x0000 (size: 0x8)
    EMovieGraphValueType Type;                                                        // 0x0008 (size: 0x1)
    class UObject* TypeObject;                                                        // 0x0010 (size: 0x8)
    bool bAllowMultipleConnections;                                                   // 0x0018 (size: 0x1)
    bool bIsBranch;                                                                   // 0x0019 (size: 0x1)
    bool bIsWildcard;                                                                 // 0x001A (size: 0x1)
    bool bIsBuiltIn;                                                                  // 0x001B (size: 0x1)

}; // Size: 0x20

struct FMovieGraphPostRenderImageSequencePlayOptions : public FMovieGraphPostRenderVideoPlayOptions
{
    EMovieGraphFrameRangeNotation FrameRangeNotation;                                 // 0x0030 (size: 0x1)
    EMovieGraphImageSequencePlaybackRange PlaybackRange;                              // 0x0031 (size: 0x1)

}; // Size: 0x38

struct FMovieGraphPostRenderSettings
{
    TArray<FString> OutputTypePriorityOrder;                                          // 0x0000 (size: 0x10)
    EMovieGraphOutputTypePlayback OutputTypePlayback;                                 // 0x0010 (size: 0x1)
    FMovieGraphPostRenderImageSequencePlayOptions PostRenderImageSequencePlayOptions; // 0x0018 (size: 0x38)
    FMovieGraphPostRenderVideoPlayOptions PostRenderAppleProResPlayOptions;           // 0x0050 (size: 0x30)
    FMovieGraphPostRenderVideoPlayOptions PostRenderAvidDNxHRPlayOptions;             // 0x0080 (size: 0x30)
    FMovieGraphPostRenderVideoPlayOptions PostRenderMP4PlayOptions;                   // 0x00B0 (size: 0x30)

}; // Size: 0xE0

struct FMovieGraphPostRenderVideoPlayOptions
{
    EMovieGraphPlaybackMethod PlaybackMethod;                                         // 0x0000 (size: 0x1)
    FFilePath PlayerExecutable;                                                       // 0x0008 (size: 0x10)
    FString AdditionalCommandLineArguments;                                           // 0x0018 (size: 0x10)
    EMovieGraphJobPlaybackRange JobPlayback;                                          // 0x0028 (size: 0x1)
    EMovieGraphRenderLayerPlaybackRange RenderLayerPlayback;                          // 0x0029 (size: 0x1)

}; // Size: 0x30

struct FMovieGraphPropertyInfo
{
    FName Name;                                                                       // 0x0000 (size: 0x8)
    FText ContextMenuName;                                                            // 0x0008 (size: 0x10)
    FName PromotionName;                                                              // 0x0018 (size: 0x8)
    bool bIsDynamicProperty;                                                          // 0x0020 (size: 0x1)
    EMovieGraphValueType ValueType;                                                   // 0x0021 (size: 0x1)
    class UObject* ValueTypeObject;                                                   // 0x0028 (size: 0x8)
    bool bIsPermanentlyExposed;                                                       // 0x0030 (size: 0x1)

}; // Size: 0x38

struct FMovieGraphRenderDataIdentifier
{
    FName RootBranchName;                                                             // 0x0000 (size: 0x8)
    FString LayerName;                                                                // 0x0008 (size: 0x10)
    FString RendererName;                                                             // 0x0018 (size: 0x10)
    FString SubResourceName;                                                          // 0x0028 (size: 0x10)
    FString CameraName;                                                               // 0x0038 (size: 0x10)

}; // Size: 0x48

struct FMovieGraphRenderLayerOutputData
{
    TArray<FString> FilePaths;                                                        // 0x0000 (size: 0x10)
    TArray<FString> FrameTemplatedFilePaths;                                          // 0x0010 (size: 0x10)
    TMap<class FSoftClassPath, class FMovieGraphStringArray> NodeTypeToFilePaths;     // 0x0020 (size: 0x50)
    int32 RenderLayerIndex;                                                           // 0x0070 (size: 0x4)

}; // Size: 0x78

struct FMovieGraphRenderOutputData
{
    TWeakObjectPtr<class UMoviePipelineExecutorShot> Shot;                            // 0x0000 (size: 0x8)
    TMap<class FMovieGraphRenderDataIdentifier, class FMovieGraphRenderLayerOutputData> RenderLayerData; // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FMovieGraphResolveArgs
{
    TMap<class FString, class FString> FilenameArguments;                             // 0x0000 (size: 0x50)
    TMap<class FString, class FString> FileMetadata;                                  // 0x0050 (size: 0x50)

}; // Size: 0xA0

struct FMovieGraphSequencePlaybackRangeBound
{
    EMovieGraphSequenceRangeType Type;                                                // 0x0000 (size: 0x1)
    int32 Value;                                                                      // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMovieGraphStringArray
{
    TArray<FString> Array;                                                            // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMovieGraphTimeStepData
{
    int32 OutputFrameNumber;                                                          // 0x0000 (size: 0x4)
    int32 ShotOutputFrameNumber;                                                      // 0x0004 (size: 0x4)
    int32 RenderedFrameNumber;                                                        // 0x0008 (size: 0x4)
    float FrameDeltaTime;                                                             // 0x000C (size: 0x4)
    float WorldTimeDilation;                                                          // 0x0010 (size: 0x4)
    bool bHasRelativeTimeBeenUsed;                                                    // 0x0014 (size: 0x1)
    float WorldSeconds;                                                               // 0x0018 (size: 0x4)
    float MotionBlurFraction;                                                         // 0x001C (size: 0x4)
    FFrameRate FrameRate;                                                             // 0x0020 (size: 0x8)
    int32 TemporalSampleIndex;                                                        // 0x0028 (size: 0x4)
    int32 TemporalSampleCount;                                                        // 0x002C (size: 0x4)
    int32 SpatialSampleIndex;                                                         // 0x0030 (size: 0x4)
    int32 SpatialSampleCount;                                                         // 0x0034 (size: 0x4)
    bool bIsFirstTemporalSampleForFrame;                                              // 0x0038 (size: 0x1)
    bool bIsLastTemporalSampleForFrame;                                               // 0x0039 (size: 0x1)
    bool bDiscardOutput;                                                              // 0x003A (size: 0x1)
    bool bRequiresAccumulator;                                                        // 0x003B (size: 0x1)
    class UMovieGraphEvaluatedConfig* EvaluatedConfig;                                // 0x0040 (size: 0x8)
    FTimecode RootTimeCode;                                                           // 0x0048 (size: 0x18)
    FFrameNumber RootFrameNumber;                                                     // 0x0060 (size: 0x4)
    FTimecode ShotTimeCode;                                                           // 0x0064 (size: 0x18)
    FFrameNumber ShotFrameNumber;                                                     // 0x007C (size: 0x4)

}; // Size: 0x80

struct FMovieGraphTraversalContext
{
    int32 ShotIndex;                                                                  // 0x0000 (size: 0x4)
    int32 ShotCount;                                                                  // 0x0004 (size: 0x4)
    class UMoviePipelineExecutorJob* Job;                                             // 0x0008 (size: 0x8)
    class UMoviePipelineExecutorShot* Shot;                                           // 0x0010 (size: 0x8)
    class UMovieGraphConfig* RootGraph;                                               // 0x0018 (size: 0x8)
    FMovieGraphRenderDataIdentifier RenderDataIdentifier;                             // 0x0020 (size: 0x48)
    FMovieGraphTimeStepData Time;                                                     // 0x0068 (size: 0x80)

}; // Size: 0xE8

struct FMovieGraphVersioningSettings
{
    bool bAutoVersioning;                                                             // 0x0000 (size: 0x1)
    int32 VersionNumber;                                                              // 0x0004 (size: 0x4)

}; // Size: 0x8

struct FMoviePipelineCameraCutInfo
{
}; // Size: 0xD8

struct FMoviePipelineConsoleVariableEntry
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    float Value;                                                                      // 0x0010 (size: 0x4)
    bool bIsEnabled;                                                                  // 0x0014 (size: 0x1)

}; // Size: 0x18

struct FMoviePipelineFilenameResolveParams
{
    int32 FrameNumber;                                                                // 0x0000 (size: 0x4)
    int32 FrameNumberShot;                                                            // 0x0004 (size: 0x4)
    int32 FrameNumberRel;                                                             // 0x0008 (size: 0x4)
    int32 FrameNumberShotRel;                                                         // 0x000C (size: 0x4)
    FString CameraNameOverride;                                                       // 0x0010 (size: 0x10)
    FString ShotNameOverride;                                                         // 0x0020 (size: 0x10)
    int32 ZeroPadFrameNumberCount;                                                    // 0x0030 (size: 0x4)
    bool bForceRelativeFrameNumbers;                                                  // 0x0034 (size: 0x1)
    FString FileNameOverride;                                                         // 0x0038 (size: 0x10)
    TMap<class FString, class FString> FileNameFormatOverrides;                       // 0x0048 (size: 0x50)
    TMap<class FString, class FString> FileMetadata;                                  // 0x0098 (size: 0x50)
    FDateTime InitializationTime;                                                     // 0x00E8 (size: 0x8)
    FTimespan InitializationTimeOffset;                                               // 0x00F0 (size: 0x8)
    int32 InitializationVersion;                                                      // 0x00F8 (size: 0x4)
    class UMoviePipelineExecutorJob* Job;                                             // 0x0100 (size: 0x8)
    class UMoviePipelineExecutorShot* ShotOverride;                                   // 0x0110 (size: 0x8)
    int32 AdditionalFrameNumberOffset;                                                // 0x0118 (size: 0x4)

}; // Size: 0x120

struct FMoviePipelineFormatArgs
{
    TMap<class FString, class FString> FilenameArguments;                             // 0x0000 (size: 0x50)
    TMap<class FString, class FString> FileMetadata;                                  // 0x0050 (size: 0x50)
    class UMoviePipelineExecutorJob* InJob;                                           // 0x00A0 (size: 0x8)

}; // Size: 0xA8

struct FMoviePipelineOutputData
{
    class UMoviePipelineBase* Pipeline;                                               // 0x0000 (size: 0x8)
    class UMoviePipelineExecutorJob* Job;                                             // 0x0008 (size: 0x8)
    bool bSuccess;                                                                    // 0x0010 (size: 0x1)
    TArray<FMoviePipelineShotOutputData> ShotData;                                    // 0x0018 (size: 0x10)
    TArray<FMovieGraphRenderOutputData> GraphData;                                    // 0x0028 (size: 0x10)

}; // Size: 0x38

struct FMoviePipelinePassIdentifier
{
    FString Name;                                                                     // 0x0000 (size: 0x10)
    FString CameraName;                                                               // 0x0010 (size: 0x10)

}; // Size: 0x20

struct FMoviePipelineRenderPassOutputData
{
    TArray<FString> FilePaths;                                                        // 0x0000 (size: 0x10)

}; // Size: 0x10

struct FMoviePipelineSegmentWorkMetrics
{
    FString SegmentName;                                                              // 0x0000 (size: 0x10)
    int32 OutputFrameIndex;                                                           // 0x0010 (size: 0x4)
    int32 TotalOutputFrameCount;                                                      // 0x0014 (size: 0x4)
    int32 OutputSubSampleIndex;                                                       // 0x0018 (size: 0x4)
    int32 TotalSubSampleCount;                                                        // 0x001C (size: 0x4)
    int32 EngineWarmUpFrameIndex;                                                     // 0x0020 (size: 0x4)
    int32 TotalEngineWarmUpFrameCount;                                                // 0x0024 (size: 0x4)

}; // Size: 0x28

struct FMoviePipelineShotOutputData
{
    TWeakObjectPtr<class UMoviePipelineExecutorShot> Shot;                            // 0x0000 (size: 0x8)
    TMap<class FMoviePipelinePassIdentifier, class FMoviePipelineRenderPassOutputData> RenderPassData; // 0x0008 (size: 0x50)

}; // Size: 0x58

struct FMoviePipelineSidecarCamera
{
    FGuid BindingID;                                                                  // 0x0000 (size: 0x10)
    FString Name;                                                                     // 0x0018 (size: 0x10)

}; // Size: 0x28

class AMoviePipelineGameMode : public AGameModeBase
{
}; // Size: 0x340

class IMovieGraphPostRenderNode : public IInterface
{
}; // Size: 0x28

class IMovieGraphTraversableObject : public IInterface
{
}; // Size: 0x28

class UMovieGraphApplyCVarPresetNode : public UMovieGraphSettingNode
{
    uint8 bOverride_ConsoleVariablePreset;                                            // 0x00A8 (size: 0x1)
    TScriptInterface<class IMovieSceneConsoleVariableTrackInterface> ConsoleVariablePreset; // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UMovieGraphApplyViewportLookNode : public UMovieGraphSettingNode
{
    uint8 bOverride_bOcio;                                                            // 0x00A8 (size: 0x1)
    uint8 bOverride_bShowFlags;                                                       // 0x00A8 (size: 0x1)
    uint8 bOverride_bViewMode;                                                        // 0x00A8 (size: 0x1)
    uint8 bOverride_bVisibility;                                                      // 0x00A8 (size: 0x1)
    bool bOcio;                                                                       // 0x00A9 (size: 0x1)
    bool bShowFlags;                                                                  // 0x00AA (size: 0x1)
    bool bViewMode;                                                                   // 0x00AB (size: 0x1)
    bool bVisibility;                                                                 // 0x00AC (size: 0x1)

}; // Size: 0xB0

class UMovieGraphAudioOutputNode : public UMovieGraphFileOutputNode
{
}; // Size: 0xD0

class UMovieGraphAudioRendererBase : public UObject
{
}; // Size: 0x58

class UMovieGraphBlueprintLibrary : public UBlueprintFunctionLibrary
{

    int32 ResolveVersionNumber(FMovieGraphFilenameResolveParams InParams, const bool bGetNextVersion);
    FString ResolveFilenameFormatArguments(FString InFormatString, const FMovieGraphFilenameResolveParams& InParams, FMovieGraphResolveArgs& OutMergedFormatArgs);
    FMovieGraphNamedResolution NamedResolutionFromSize(const int32 InResX, const int32 InResY);
    FMovieGraphNamedResolution NamedResolutionFromProfile(const FName& InResolutionProfileName);
    bool IsNamedResolutionValid(const FName& InResolutionProfileName);
    FTimecode GetRootTimecode(const class UMovieGraphPipeline* InMovieGraphPipeline);
    FFrameNumber GetRootFrameNumber(const class UMovieGraphPipeline* InMovieGraphPipeline);
    EMovieRenderPipelineState GetPipelineState(const class UMovieGraphPipeline* InMovieGraphPipeline);
    FIntPoint GetOverscannedResolution(class UMovieGraphEvaluatedConfig* InEvaluatedGraph, float DefaultOverscan, float CameraAspectRatio);
    FIntRect GetOverscanCropRectangle(class UMovieGraphEvaluatedConfig* InEvaluatedGraph, float DefaultOverscan, float CameraAspectRatio);
    void GetOverallSegmentCounts(const class UMovieGraphPipeline* InMovieGraphPipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    void GetOverallOutputFrames(const class UMovieGraphPipeline* InMovieGraphPipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    FText GetJobName(const class UMovieGraphPipeline* InMovieGraphPipeline);
    FDateTime GetJobInitializationTime(const class UMovieGraphPipeline* InMovieGraphPipeline);
    FText GetJobAuthor(const class UMovieGraphPipeline* InMovieGraphPipeline);
    bool GetEstimatedTimeRemaining(const class UMovieGraphPipeline* InMovieGraphPipeline, FTimespan& OutEstimate);
    FIntPoint GetEffectiveOutputResolution(class UMovieGraphEvaluatedConfig* InEvaluatedGraph, float DefaultOverscan);
    FFrameRate GetEffectiveFrameRate(class UMovieGraphGlobalOutputSettingNode* InNode, const FFrameRate& InDefaultRate);
    FIntPoint GetDesiredOutputResolution(class UMovieGraphEvaluatedConfig* InEvaluatedGraph, float CameraAspectRatio);
    int32 GetCurrentVersionNumber(const class UMovieGraphPipeline* InMovieGraphPipeline);
    FTimecode GetCurrentShotTimecode(const class UMovieGraphPipeline* InMovieGraphPipeline);
    FFrameNumber GetCurrentShotFrameNumber(const class UMovieGraphPipeline* InMovieGraphPipeline);
    FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(const class UMovieGraphPipeline* InMovieGraphPipeline);
    EMovieRenderShotState GetCurrentSegmentState(const class UMovieGraphPipeline* InMovieGraphPipeline);
    void GetCurrentSegmentName(const class UMovieGraphPipeline* InMovieGraphPipeline, FText& OutOuterName, FText& OutInnerName);
    float GetCurrentFocusDistance(const class UMovieGraphPipeline* InMovieGraphPipeline, int32 InCameraIndex);
    float GetCurrentFocalLength(const class UMovieGraphPipeline* InMovieGraphPipeline, int32 InCameraIndex);
    class UMoviePipelineExecutorShot* GetCurrentExecutorShot(const class UMovieGraphPipeline* InMoviePipeline);
    class UCineCameraComponent* GetCurrentCineCamera(const class UMovieGraphPipeline* InMovieGraphPipeline, int32 InCameraIndex);
    float GetCurrentAperture(const class UMovieGraphPipeline* InMovieGraphPipeline, int32 InCameraIndex);
    float GetCompletionPercentage(const class UMovieGraphPipeline* InPipeline);
    FIntPoint GetBackbufferResolution(class UMovieGraphEvaluatedConfig* InEvaluatedGraph, float DefaultOverscan, float CameraAspectRatio);
}; // Size: 0x28

class UMovieGraphBranchNode : public UMovieGraphNode
{
}; // Size: 0xA8

class UMovieGraphBurnInNode : public UMovieGraphWidgetRendererBaseNode
{
    uint8 bOverride_BurnInClass;                                                      // 0x0120 (size: 0x1)
    FSoftClassPath BurnInClass;                                                       // 0x0128 (size: 0x20)
    TMap<class UClass*, class UMovieGraphBurnInWidget*> BurnInWidgetInstances;        // 0x0148 (size: 0x50)

}; // Size: 0x198

class UMovieGraphBurnInWidget : public UUserWidget
{

    void UpdateForGraph(class UMovieGraphPipeline* InGraphPipeline, class UMovieGraphEvaluatedConfig* InEvaluatedConfig, int32 InCameraIndex, FString CameraName);
}; // Size: 0x340

class UMovieGraphCameraSettingNode : public UMovieGraphSettingNode
{
    uint8 bOverride_ShutterTiming;                                                    // 0x00A8 (size: 0x1)
    uint8 bOverride_OverscanPercentage;                                               // 0x00A8 (size: 0x1)
    uint8 bOverride_bRenderAllCameras;                                                // 0x00A8 (size: 0x1)
    EMoviePipelineShutterTiming ShutterTiming;                                        // 0x00A9 (size: 0x1)
    float OverscanPercentage;                                                         // 0x00AC (size: 0x4)
    bool bRenderAllCameras;                                                           // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class UMovieGraphCollection : public UObject
{
    FString CollectionName;                                                           // 0x0028 (size: 0x10)
    TArray<class UMovieGraphConditionGroup*> ConditionGroups;                         // 0x0038 (size: 0x10)

    void SetCollectionName(FString InName);
    bool RemoveConditionGroup(class UMovieGraphConditionGroup* InConditionGroup);
    bool MoveConditionGroupToIndex(class UMovieGraphConditionGroup* InConditionGroup, const int32 NewIndex);
    TArray<class UMovieGraphConditionGroup*> GetConditionGroups();
    FString GetCollectionName();
    FMovieGraphEvaluationResult EvaluateActorsAndComponents(const class UWorld* InWorld);
    TSet<AActor*> Evaluate(const class UWorld* InWorld);
    class UMovieGraphConditionGroup* AddConditionGroup();
}; // Size: 0x48

class UMovieGraphCollectionModifier : public UObject
{
    TArray<class UMovieGraphCollection*> Collections;                                 // 0x0028 (size: 0x10)

    void SetCollections(const TArray<class UMovieGraphCollection*> InCollections);
    TArray<class UMovieGraphCollection*> GetCollections();
    void AddCollection(class UMovieGraphCollection* Collection);
}; // Size: 0x38

class UMovieGraphCollectionNode : public UMovieGraphSettingNode
{
    uint8 bOverride_Collection;                                                       // 0x00A8 (size: 0x1)
    class UMovieGraphCollection* Collection;                                          // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UMovieGraphCommandLineEncoderNode : public UMovieGraphSettingNode
{
    uint8 bOverride_FileNameFormat;                                                   // 0x00B0 (size: 0x1)
    uint8 bOverride_bDeleteSourceFiles;                                               // 0x00B0 (size: 0x1)
    uint8 bOverride_bSkipEncodeOnRenderCanceled;                                      // 0x00B0 (size: 0x1)
    uint8 bOverride_VideoCodec;                                                       // 0x00B0 (size: 0x1)
    uint8 bOverride_AudioCodec;                                                       // 0x00B0 (size: 0x1)
    uint8 bOverride_OutputFileExtension;                                              // 0x00B0 (size: 0x1)
    uint8 bOverride_CommandLineFormat;                                                // 0x00B0 (size: 0x1)
    uint8 bOverride_VideoInputStringFormat;                                           // 0x00B0 (size: 0x1)
    uint8 bOverride_AudioInputStringFormat;                                           // 0x00B1 (size: 0x1)
    uint8 bOverride_EncodeSettings;                                                   // 0x00B1 (size: 0x1)
    uint8 bOverride_bRetainInputTextFiles;                                            // 0x00B1 (size: 0x1)
    FString FileNameFormat;                                                           // 0x00B8 (size: 0x10)
    bool bDeleteSourceFiles;                                                          // 0x00C8 (size: 0x1)
    bool bSkipEncodeOnRenderCanceled;                                                 // 0x00C9 (size: 0x1)
    FString VideoCodec;                                                               // 0x00D0 (size: 0x10)
    FString AudioCodec;                                                               // 0x00E0 (size: 0x10)
    FString OutputFileExtension;                                                      // 0x00F0 (size: 0x10)
    FString CommandLineFormat;                                                        // 0x0100 (size: 0x10)
    FString VideoInputStringFormat;                                                   // 0x0110 (size: 0x10)
    FString AudioInputStringFormat;                                                   // 0x0120 (size: 0x10)
    FString EncodeSettings;                                                           // 0x0130 (size: 0x10)
    bool bRetainInputTextFiles;                                                       // 0x0140 (size: 0x1)

}; // Size: 0x148

class UMovieGraphConditionGroup : public UObject
{
    FGuid ID;                                                                         // 0x0028 (size: 0x10)
    EMovieGraphConditionGroupOpType OpType;                                           // 0x0038 (size: 0x1)
    TArray<class UMovieGraphConditionGroupQueryBase*> Queries;                        // 0x0040 (size: 0x10)
    FMovieGraphEvaluationResult QueryResult;                                          // 0x0050 (size: 0xA0)
    FMovieGraphEvaluationResult EvaluationResult;                                     // 0x00F0 (size: 0xA0)

    void SetOperationType(const EMovieGraphConditionGroupOpType OperationType);
    bool RemoveQuery(class UMovieGraphConditionGroupQueryBase* InQuery);
    bool MoveQueryToIndex(class UMovieGraphConditionGroupQueryBase* InQuery, const int32 NewIndex);
    bool IsFirstConditionGroup();
    TArray<class UMovieGraphConditionGroupQueryBase*> GetQueries();
    EMovieGraphConditionGroupOpType GetOperationType();
    FMovieGraphEvaluationResult EvaluateActorsAndComponents(const class UWorld* InWorld);
    TSet<AActor*> Evaluate(const class UWorld* InWorld);
    class UMovieGraphConditionGroupQueryBase* DuplicateQuery(const int32 QueryIndex);
    class UMovieGraphConditionGroupQueryBase* AddQuery(const TSubclassOf<class UMovieGraphConditionGroupQueryBase>& InQueryType, const int32 InsertIndex);
}; // Size: 0x190

class UMovieGraphConditionGroupQueryBase : public UObject
{
    EMovieGraphConditionGroupQueryOpType OpType;                                      // 0x0028 (size: 0x1)
    bool bIsEnabled;                                                                  // 0x0029 (size: 0x1)

    bool ShouldHidePropertyNames();
    bool ShouldEvaluateComponents();
    void SetOperationType(const EMovieGraphConditionGroupQueryOpType OperationType);
    void SetEnabled(const bool bEnabled);
    bool IsFirstConditionGroupQuery();
    bool IsEnabled();
    bool IsEditorOnlyQuery();
    EMovieGraphConditionGroupQueryOpType GetOperationType();
    void EvaluateActorsAndComponents(const TArray<class AActor*>& InActorsToQuery, const class UWorld* InWorld, TSet<AActor*>& OutMatchingActors, TSet<UActorComponent*>& OutMatchingComponents);
    void Evaluate(const TArray<class AActor*>& InActorsToQuery, const class UWorld* InWorld, TSet<AActor*>& OutMatchingActors);
}; // Size: 0x30

class UMovieGraphConditionGroupQuery_Actor : public UMovieGraphConditionGroupQueryBase
{
    TArray<TSoftObjectPtr<AActor>> ActorsToMatch;                                     // 0x0030 (size: 0x10)
    TArray<FMovieGraphActorQueryEntry> ActorsAndComponentsToMatch;                    // 0x0040 (size: 0x10)

}; // Size: 0x50

class UMovieGraphConditionGroupQuery_ActorLayer : public UMovieGraphConditionGroupQueryBase
{
    TArray<FName> LayerNames;                                                         // 0x0030 (size: 0x10)

}; // Size: 0x40

class UMovieGraphConditionGroupQuery_ActorName : public UMovieGraphConditionGroupQueryBase
{
    FString WildcardSearch;                                                           // 0x0030 (size: 0x10)

}; // Size: 0x40

class UMovieGraphConditionGroupQuery_ActorTagName : public UMovieGraphConditionGroupQueryBase
{
    FString TagsToMatch;                                                              // 0x0030 (size: 0x10)

}; // Size: 0x40

class UMovieGraphConditionGroupQuery_ActorType : public UMovieGraphConditionGroupQueryBase
{
    TArray<class UClass*> ActorTypes;                                                 // 0x0030 (size: 0x10)

}; // Size: 0x50

class UMovieGraphConditionGroupQuery_ComponentTagName : public UMovieGraphConditionGroupQueryBase
{
    FString TagsToMatch;                                                              // 0x0030 (size: 0x10)
    bool bOnlyMatchComponents;                                                        // 0x0040 (size: 0x1)

}; // Size: 0x48

class UMovieGraphConditionGroupQuery_ComponentType : public UMovieGraphConditionGroupQueryBase
{
    TArray<class UClass*> ComponentTypes;                                             // 0x0040 (size: 0x10)
    bool bOnlyMatchComponents;                                                        // 0x0050 (size: 0x1)

}; // Size: 0x58

class UMovieGraphConditionGroupQuery_DataLayer : public UMovieGraphConditionGroupQueryBase
{
    TArray<TSoftObjectPtr<UDataLayerAsset>> DataLayers;                               // 0x0030 (size: 0x10)

}; // Size: 0x40

class UMovieGraphConditionGroupQuery_EditorFolder : public UMovieGraphConditionGroupQueryBase
{
    TArray<FName> FolderPaths;                                                        // 0x0030 (size: 0x10)

}; // Size: 0x40

class UMovieGraphConditionGroupQuery_IsSpawnable : public UMovieGraphConditionGroupQueryBase
{
    bool bIsSpawnable;                                                                // 0x0030 (size: 0x1)

}; // Size: 0x38

class UMovieGraphConditionGroupQuery_Sublevel : public UMovieGraphConditionGroupQueryBase
{
    TArray<TSoftObjectPtr<UWorld>> Sublevels;                                         // 0x0030 (size: 0x10)

}; // Size: 0x40

class UMovieGraphConfig : public UObject
{
    TArray<class UMovieGraphNode*> AllNodes;                                          // 0x0028 (size: 0x10)
    class UMovieGraphNode* InputNode;                                                 // 0x0038 (size: 0x8)
    class UMovieGraphNode* OutputNode;                                                // 0x0040 (size: 0x8)
    TArray<class UMovieGraphVariable*> Variables;                                     // 0x0048 (size: 0x10)
    TArray<class UMovieGraphGlobalVariable*> GlobalVariables;                         // 0x0058 (size: 0x10)
    TArray<class UMovieGraphInput*> Inputs;                                           // 0x0068 (size: 0x10)
    TArray<class UMovieGraphOutput*> Outputs;                                         // 0x0078 (size: 0x10)

    void UpdateGlobalVariableValues(const class UMovieGraphPipeline* InPipeline);
    bool RemoveOutboundEdges(class UMovieGraphNode* InNode, const FName& InPinName);
    bool RemoveNodes(TArray<class UMovieGraphNode*> InNodes);
    bool RemoveNode(class UMovieGraphNode* InNode);
    bool RemoveLabeledEdge(class UMovieGraphNode* FromNode, const FName& FromPinName, class UMovieGraphNode* ToNode, const FName& ToPinName);
    bool RemoveInboundEdges(class UMovieGraphNode* InNode, const FName& InPinName);
    bool RemoveAllOutboundEdges(class UMovieGraphNode* InNode);
    bool RemoveAllInboundEdges(class UMovieGraphNode* InNode);
    void MoveVariableToIndex(class UMovieGraphVariable* InTargetVariable, int32 NewIndex);
    void MoveVariableBefore(class UMovieGraphVariable* InTargetVariable, class UMovieGraphVariable* InBeforeVariable);
    void MoveCategoryBefore(FString InCategoryToMove, FString InCategoryBefore);
    TArray<class UMovieGraphVariable*> GetVariables(const bool bIncludeGlobal);
    class UMovieGraphVariable* GetVariableByName(FString InVariableName);
    class UMovieGraphVariable* GetVariableByGuid(const FGuid& InGuid);
    TArray<FString> GetUpstreamBranchNames(class UMovieGraphNode* FromNode, const class UMovieGraphPin* FromPin, const bool bStopAtSubgraph);
    TArray<class UMovieGraphOutput*> GetOutputs();
    class UMovieGraphNode* GetOutputNode();
    void GetOutputDirectory(FString& OutOutputDirectory);
    TArray<class UMovieGraphNode*> GetNodesForTag(FString ScriptTag, UClass* OptionalClassFilter, const FName OptionalBranchFilter, bool bExactMatch);
    TArray<class UMovieGraphNode*> GetNodesForBranch(UClass* InClass, const FName& InBranchName, bool bExactMatch);
    class UMovieGraphNode* GetNodeForTag(FString ScriptTag, UClass* OptionalClassFilter, const FName OptionalBranchFilter, bool bExactMatch);
    class UMovieGraphNode* GetNodeForBranch(UClass* InClass, const FName& InBranchName, bool bExactMatch);
    TArray<class UMovieGraphInput*> GetInputs();
    class UMovieGraphNode* GetInputNode();
    TArray<FString> GetDownstreamBranchNames(class UMovieGraphNode* FromNode, const class UMovieGraphPin* FromPin, const bool bStopAtSubgraph);
    TArray<FName> GetBranchNames();
    void GetAllContainedSubgraphs(TSet<UMovieGraphConfig*>& OutSubgraphs);
    class UMovieGraphVariable* DuplicateVariable(class UMovieGraphVariable* InVariableToDuplicate);
    bool DeleteMember(class UMovieGraphMember* MemberToDelete);
    class UMovieGraphNode* CreateNodeByClass(const TSubclassOf<class UMovieGraphNode> InClass);
    class UMovieGraphEvaluatedConfig* CreateFlattenedGraph(const FMovieGraphTraversalContext& InContext, FString& OutError);
    class UMovieGraphVariable* AddVariable(const FName InCustomBaseName);
    class UMovieGraphOutput* AddOutput(const FText& InBaseName);
    bool AddLabeledEdge(class UMovieGraphNode* FromNode, const FName& FromPinLabel, class UMovieGraphNode* ToNode, const FName& ToPinLabel);
    class UMovieGraphInput* AddInput(const FText& InBaseName);
}; // Size: 0x88

class UMovieGraphCoreTimeStep : public UMovieGraphTimeStepBase
{
    FMovieGraphTimeStepData CurrentTimeStepData;                                      // 0x0028 (size: 0x80)

}; // Size: 0x190

class UMovieGraphDataSourceBase : public UObject
{
}; // Size: 0x28

class UMovieGraphDebugSettingNode : public UMovieGraphSettingNode
{
    uint8 bOverride_bCaptureFramesWithRenderDoc;                                      // 0x00A8 (size: 0x1)
    uint8 bOverride_RenderDocCaptureFrame;                                            // 0x00A8 (size: 0x1)
    uint8 bOverride_bCaptureUnrealInsightsTrace;                                      // 0x00A8 (size: 0x1)
    uint8 bOverride_UnrealInsightsTraceFileNameFormat;                                // 0x00A8 (size: 0x1)
    bool bCaptureFramesWithRenderDoc;                                                 // 0x00A9 (size: 0x1)
    int32 RenderDocCaptureFrame;                                                      // 0x00AC (size: 0x4)
    bool bCaptureUnrealInsightsTrace;                                                 // 0x00B0 (size: 0x1)
    FString UnrealInsightsTraceFileNameFormat;                                        // 0x00B8 (size: 0x10)

}; // Size: 0xC8

class UMovieGraphDefaultAudioRenderer : public UMovieGraphAudioRendererBase
{
}; // Size: 0x58

class UMovieGraphDefaultRenderer : public UMovieGraphRendererBase
{
    TArray<class UMovieGraphRenderPassNode*> RenderPassesInUse;                       // 0x0028 (size: 0x10)

}; // Size: 0x260

class UMovieGraphEdge : public UObject
{
    class UMovieGraphPin* InputPin;                                                   // 0x0028 (size: 0x8)
    class UMovieGraphPin* OutputPin;                                                  // 0x0030 (size: 0x8)

}; // Size: 0x38

class UMovieGraphEngineTimeStep : public UEngineCustomTimeStep
{
}; // Size: 0x48

class UMovieGraphEvaluatedConfig : public UObject
{
    TMap<class FName, class FMovieGraphEvaluatedBranchConfig> BranchConfigMapping;    // 0x0028 (size: 0x50)

    TArray<class UMovieGraphSettingNode*> GetSettingsForBranch(UClass* InClass, const FName InBranchName, bool bIncludeCDOs, bool bExactMatch);
    class UMovieGraphSettingNode* GetSettingForBranch(UClass* InClass, const FName InBranchName, bool bIncludeCDOs, bool bExactMatch);
    TArray<FName> GetBranchNames();
}; // Size: 0x78

class UMovieGraphExecuteScriptNode : public UMovieGraphSettingNode
{
    uint8 bOverride_Script;                                                           // 0x00A8 (size: 0x1)
    FSoftClassPath Script;                                                            // 0x00B0 (size: 0x20)

}; // Size: 0xD0

class UMovieGraphFileOutputNode : public UMovieGraphSettingNode
{
    uint8 bOverride_FileNameFormat;                                                   // 0x00A8 (size: 0x1)
    FString FileNameFormat;                                                           // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UMovieGraphGlobalGameOverridesNode : public UMovieGraphSettingNode
{
    uint8 bOverride_GameModeOverride;                                                 // 0x00A8 (size: 0x1)
    uint8 bOverride_SoftGameModeOverride;                                             // 0x00A8 (size: 0x1)
    uint8 bOverride_ScalabilityQualityLevel;                                          // 0x00A8 (size: 0x1)
    uint8 bOverride_bDisableTextureStreaming;                                         // 0x00A8 (size: 0x1)
    uint8 bOverride_bDisableLODs;                                                     // 0x00A8 (size: 0x1)
    uint8 bOverride_bDisableHLODs;                                                    // 0x00A8 (size: 0x1)
    uint8 bOverride_bFlushLevelStreaming;                                             // 0x00A8 (size: 0x1)
    uint8 bOverride_bFlushAssetCompiler;                                              // 0x00A8 (size: 0x1)
    uint8 bOverride_bFlushShaderCompiler;                                             // 0x00A9 (size: 0x1)
    uint8 bOverride_bFlushGrassStreaming;                                             // 0x00A9 (size: 0x1)
    uint8 bOverride_bFlushStreamingManagers;                                          // 0x00A9 (size: 0x1)
    uint8 bOverride_VirtualTextureFeedbackFactor;                                     // 0x00A9 (size: 0x1)
    uint8 bOverride_bRebuildLumenSceneBetweenRenderLayers;                            // 0x00A9 (size: 0x1)
    TSubclassOf<class AGameModeBase> GameModeOverride;                                // 0x00B0 (size: 0x8)
    TSoftClassPtr<AGameModeBase> SoftGameModeOverride;                                // 0x00B8 (size: 0x28)
    EMovieGraphScalabilityQualityLevel ScalabilityQualityLevel;                       // 0x00E0 (size: 0x1)
    bool bDisableTextureStreaming;                                                    // 0x00E1 (size: 0x1)
    bool bDisableLODs;                                                                // 0x00E2 (size: 0x1)
    bool bDisableHLODs;                                                               // 0x00E3 (size: 0x1)
    bool bFlushLevelStreaming;                                                        // 0x00E4 (size: 0x1)
    bool bFlushAssetCompiler;                                                         // 0x00E5 (size: 0x1)
    bool bFlushShaderCompiler;                                                        // 0x00E6 (size: 0x1)
    bool bFlushGrassStreaming;                                                        // 0x00E7 (size: 0x1)
    bool bFlushStreamingManagers;                                                     // 0x00E8 (size: 0x1)
    int32 VirtualTextureFeedbackFactor;                                               // 0x00EC (size: 0x4)
    bool bRebuildLumenSceneBetweenRenderLayers;                                       // 0x00F0 (size: 0x1)

}; // Size: 0x1A8

class UMovieGraphGlobalOutputSettingNode : public UMovieGraphSettingNode
{
    uint8 bOverride_OutputDirectory;                                                  // 0x00A8 (size: 0x1)
    uint8 bOverride_OutputResolution;                                                 // 0x00A8 (size: 0x1)
    uint8 bOverride_AdaptResolution;                                                  // 0x00A8 (size: 0x1)
    uint8 bOverride_OutputFrameRate;                                                  // 0x00A8 (size: 0x1)
    uint8 bOverride_bOverwriteExistingOutput;                                         // 0x00A8 (size: 0x1)
    uint8 bOverride_ZeroPadFrameNumbers;                                              // 0x00A8 (size: 0x1)
    uint8 bOverride_FrameNumberOffset;                                                // 0x00A8 (size: 0x1)
    uint8 bOverride_HandleFrameCount;                                                 // 0x00A8 (size: 0x1)
    uint8 bOverride_CustomPlaybackRangeStartFrame;                                    // 0x00A9 (size: 0x1)
    uint8 bOverride_CustomPlaybackRangeEndFrame;                                      // 0x00A9 (size: 0x1)
    uint8 bOverride_CustomPlaybackRangeStart;                                         // 0x00A9 (size: 0x1)
    uint8 bOverride_CustomPlaybackRangeEnd;                                           // 0x00A9 (size: 0x1)
    uint8 bOverride_CustomTimecodeStart;                                              // 0x00A9 (size: 0x1)
    uint8 bOverride_bDropFrameTimecode;                                               // 0x00A9 (size: 0x1)
    uint8 bOverride_VersioningSettings;                                               // 0x00A9 (size: 0x1)
    uint8 bOverride_bFlushDiskWritesPerShot;                                          // 0x00A9 (size: 0x1)
    FDirectoryPath OutputDirectory;                                                   // 0x00B0 (size: 0x10)
    FMovieGraphNamedResolution OutputResolution;                                      // 0x00C0 (size: 0x20)
    EMovieGraphAspectRatioAdaptBehavior AdaptResolution;                              // 0x00E0 (size: 0x1)
    FFrameRate OutputFrameRate;                                                       // 0x00E4 (size: 0x8)
    bool bOverwriteExistingOutput;                                                    // 0x00EC (size: 0x1)
    int32 ZeroPadFrameNumbers;                                                        // 0x00F0 (size: 0x4)
    int32 FrameNumberOffset;                                                          // 0x00F4 (size: 0x4)
    int32 HandleFrameCount;                                                           // 0x00F8 (size: 0x4)
    FMovieGraphSequencePlaybackRangeBound CustomPlaybackRangeStart;                   // 0x00FC (size: 0x8)
    FMovieGraphSequencePlaybackRangeBound CustomPlaybackRangeEnd;                     // 0x0104 (size: 0x8)
    FTimecode CustomTimecodeStart;                                                    // 0x010C (size: 0x18)
    bool bDropFrameTimecode;                                                          // 0x0124 (size: 0x1)
    FMovieGraphVersioningSettings VersioningSettings;                                 // 0x0128 (size: 0x8)
    bool bFlushDiskWritesPerShot;                                                     // 0x0130 (size: 0x1)
    int32 CustomPlaybackRangeStartFrame;                                              // 0x0134 (size: 0x4)
    int32 CustomPlaybackRangeEndFrame;                                                // 0x0138 (size: 0x4)

}; // Size: 0x140

class UMovieGraphGlobalVariable : public UMovieGraphVariable
{
}; // Size: 0x88

class UMovieGraphGlobalVariable_CameraName : public UMovieGraphGlobalVariable
{
}; // Size: 0x88

class UMovieGraphGlobalVariable_FrameNumber : public UMovieGraphGlobalVariable
{
}; // Size: 0x88

class UMovieGraphGlobalVariable_SequenceName : public UMovieGraphGlobalVariable
{
}; // Size: 0x88

class UMovieGraphGlobalVariable_ShotName : public UMovieGraphGlobalVariable
{
}; // Size: 0x88

class UMovieGraphInput : public UMovieGraphInterfaceBase
{
}; // Size: 0x80

class UMovieGraphInputNode : public UMovieGraphNode
{
}; // Size: 0xA8

class UMovieGraphInterfaceBase : public UMovieGraphMember
{
    bool bIsBranch;                                                                   // 0x0078 (size: 0x1)

}; // Size: 0x80

class UMovieGraphLinearTimeStep : public UMovieGraphCoreTimeStep
{
}; // Size: 0x190

class UMovieGraphMaterialModifier : public UMovieGraphCollectionModifier
{
    uint8 bOverride_Material;                                                         // 0x0088 (size: 0x1)
    TSoftObjectPtr<UMaterialInterface> Material;                                      // 0x0090 (size: 0x28)

    void UndoModifier();
    void SetMaterial(TSoftObjectPtr<UMaterialInterface> InMaterial);
    void ApplyModifier(const class UWorld* World);
}; // Size: 0xB8

class UMovieGraphMember : public UMovieGraphValueContainer
{
    FString Description;                                                              // 0x0040 (size: 0x10)
    FString Name;                                                                     // 0x0050 (size: 0x10)
    FGuid Guid;                                                                       // 0x0060 (size: 0x10)
    bool bIsEditable;                                                                 // 0x0070 (size: 0x1)

    bool SetMemberName(FString InNewName);
    bool IsEditable();
    bool IsDeletable();
    FString GetMemberName();
    FGuid GetGuid();
    bool CanRename(const FText& InNewName, FText& OutError);
}; // Size: 0x78

class UMovieGraphMergeableModifierContainer : public UObject
{
    TArray<class UMovieGraphCollectionModifier*> Modifiers;                           // 0x0030 (size: 0x10)

}; // Size: 0x40

class UMovieGraphMetadataAttributeCollection : public UObject
{
    TArray<FMovieGraphMetadataAttribute> MetadataAttributes;                          // 0x0030 (size: 0x10)

}; // Size: 0x40

class UMovieGraphModifierNode : public UMovieGraphSettingNode
{
    uint8 bOverride_ModifierName;                                                     // 0x00A8 (size: 0x1)
    FString ModifierName;                                                             // 0x00B0 (size: 0x10)
    uint8 bOverride_Collections;                                                      // 0x00C0 (size: 0x1)
    uint8 bOverride_ModifiersContainer;                                               // 0x00C0 (size: 0x1)
    uint8 bOverride_DisabledCollections;                                              // 0x00C0 (size: 0x1)
    TArray<FName> Collections;                                                        // 0x00C8 (size: 0x10)
    class UMovieGraphMergeableModifierContainer* ModifiersContainer;                  // 0x00D8 (size: 0x8)
    TSet<FName> DisabledCollections;                                                  // 0x00E0 (size: 0x50)

    void SetCollectionEnabled(const FName& InCollectionName, const bool bIsCollectionEnabled);
    bool RemoveModifier(TSubclassOf<class UMovieGraphCollectionModifier> ModifierType);
    bool RemoveCollection(const FName& InCollectionName);
    bool IsCollectionEnabled(const FName& InCollectionName);
    TArray<class UMovieGraphCollectionModifier*> GetModifiers();
    class UMovieGraphCollectionModifier* GetModifier(TSubclassOf<class UMovieGraphCollectionModifier> ModifierType);
    TArray<FName> GetCollections();
    class UMovieGraphCollectionModifier* AddModifier(TSubclassOf<class UMovieGraphCollectionModifier> ModifierType);
    void AddCollection(const FName& InCollectionName);
}; // Size: 0x130

class UMovieGraphNode : public UObject
{
    TArray<FString> ScriptTags;                                                       // 0x0040 (size: 0x10)
    TArray<class UMovieGraphPin*> InputPins;                                          // 0x0050 (size: 0x10)
    TArray<class UMovieGraphPin*> OutputPins;                                         // 0x0060 (size: 0x10)
    FInstancedPropertyBag DynamicProperties;                                          // 0x0070 (size: 0x10)
    TArray<FMovieGraphPropertyInfo> ExposedPropertyInfo;                              // 0x0080 (size: 0x10)
    uint8 bIsDisabled;                                                                // 0x0090 (size: 0x1)
    FGuid Guid;                                                                       // 0x0094 (size: 0x10)

    void UnpromotePropertyFromPin(const FName& PropertyName);
    void TogglePromotePropertyToPin(const FName& PropertyName);
    void SetDisabled(const bool bNewDisableState);
    void PromotePropertyToPin(const FName& PropertyName);
    bool IsDisabled();
    TArray<FMovieGraphPropertyInfo> GetOverrideablePropertyInfo();
    TArray<class UMovieGraphPin*> GetOutputPins();
    TArray<FMovieGraphPinProperties> GetOutputPinProperties();
    class UMovieGraphPin* GetOutputPin(const FName& InPinLabel);
    TArray<class UMovieGraphPin*> GetInputPins();
    TArray<FMovieGraphPinProperties> GetInputPinProperties();
    class UMovieGraphPin* GetInputPin(const FName& InPinLabel, const EMovieGraphPinQueryRequirement PinRequirement);
    class UMovieGraphPin* GetFirstConnectedOutputPin();
    class UMovieGraphPin* GetFirstConnectedInputPin();
    TArray<FMovieGraphPropertyInfo> GetExposedProperties();
    EMovieGraphBranchRestriction GetBranchRestriction();
    bool CanBeDisabled();
    bool CanBeAddedByUser();
}; // Size: 0xA8

class UMovieGraphOutput : public UMovieGraphInterfaceBase
{
}; // Size: 0x80

class UMovieGraphOutputNode : public UMovieGraphNode
{
}; // Size: 0xA8

class UMovieGraphPin : public UObject
{
    class UMovieGraphNode* Node;                                                      // 0x0028 (size: 0x8)
    FMovieGraphPinProperties Properties;                                              // 0x0030 (size: 0x20)
    TArray<class UMovieGraphEdge*> Edges;                                             // 0x0050 (size: 0x10)

    bool IsTypeCompatibleWith(const class UMovieGraphPin* InOtherPin);
    bool IsPinDirectionCompatibleWith(const class UMovieGraphPin* OtherPin);
    bool IsOutputPin();
    bool IsInputPin();
    bool IsConnectionToBranchAllowed(const class UMovieGraphPin* OtherPin, FText& OutError);
    bool IsConnected();
    class UMovieGraphPin* GetFirstConnectedPin(const bool bFollowRerouteConnections);
    TArray<class UMovieGraphNode*> GetConnectedNodes();
    TArray<class UMovieGraphPin*> GetAllConnectedPins();
    int32 EdgeCount();
    bool CanCreateConnection(const class UMovieGraphPin* InOtherPin);
    bool AllowsMultipleConnections();
}; // Size: 0x68

class UMovieGraphPipeline : public UMoviePipelineBase
{
    TArray<class UMovieGraphTimeStepBase*> GraphTimeStepInstances;                    // 0x0078 (size: 0x10)
    class UMovieGraphTimeStepBase* PendingTimeStepInstance;                           // 0x0088 (size: 0x8)
    class UMovieGraphTimeStepBase* GraphTimeStepInstance;                             // 0x0090 (size: 0x8)
    class UMovieGraphRendererBase* GraphRendererInstance;                             // 0x0098 (size: 0x8)
    class UMovieGraphDataSourceBase* GraphDataSourceInstance;                         // 0x00A0 (size: 0x8)
    class UMovieGraphAudioRendererBase* GraphAudioRendererInstance;                   // 0x00A8 (size: 0x8)
    class UMovieGraphEvaluatedConfig* PostRenderEvaluatedGraph;                       // 0x00B0 (size: 0x8)
    class UMoviePipelineExecutorJob* CurrentJob;                                      // 0x00B8 (size: 0x8)
    class UMoviePipelineExecutorJob* CurrentJobDuplicate;                             // 0x00C0 (size: 0x8)
    TMap<class UMovieGraphConfig*, class UMovieGraphConfig*> DuplicatedGraphs;        // 0x00C8 (size: 0x50)
    TArray<class UMoviePipelineExecutorShot*> ActiveShotList;                         // 0x0118 (size: 0x10)
    TSubclassOf<class UMovieGraphRenderPreviewWidget> PreviewWidgetClassToUse;        // 0x0128 (size: 0x8)
    class UMovieGraphRenderPreviewWidget* PreviewWidget;                              // 0x0130 (size: 0x8)
    TArray<class UMovieGraphScriptBase*> CurrentScriptInstances;                      // 0x0138 (size: 0x10)
    TSet<UMovieGraphFileOutputNode*> OutputNodesDataSentTo;                           // 0x0148 (size: 0x50)
    class UMovieGraphEngineTimeStep* CustomEngineTimeStep;                            // 0x0200 (size: 0x8)
    class UEngineCustomTimeStep* PrevCustomEngineTimeStep;                            // 0x0208 (size: 0x8)

    void SetInitializationTime(const FDateTime& InDateTime);
    void OnMoviePipelineFinishedImpl();
    void Initialize(class UMoviePipelineExecutorJob* InJob, const FMovieGraphInitConfig& InitConfig);
    class UMovieGraphTimeStepBase* GetTimeStepInstance();
    class UMovieGraphRendererBase* GetRendererInstance();
    FTimespan GetInitializationTimeOffset();
    FDateTime GetInitializationTime();
    FMovieGraphTraversalContext GetCurrentTraversalContext(const bool bForShot);
    class UMoviePipelineExecutorJob* GetCurrentJob();
}; // Size: 0x268

class UMovieGraphProjectSettings : public UDeveloperSettings
{
    TArray<FMovieGraphNamedResolution> DefaultNamedResolutions;                       // 0x0038 (size: 0x10)

}; // Size: 0x48

class UMovieGraphQuickRenderModeSettings : public UObject
{
    TSoftObjectPtr<UMovieGraphConfig> GraphPreset;                                    // 0x0028 (size: 0x28)
    TSoftObjectPtr<ULevelSequence> LevelSequenceOverride;                             // 0x0050 (size: 0x28)
    EMovieGraphQuickRenderPostRenderActionType PostRenderBehavior;                    // 0x0078 (size: 0x1)
    bool bOverride_ViewportLookFlags;                                                 // 0x0079 (size: 0x1)
    int32 ViewportLookFlags;                                                          // 0x007C (size: 0x4)
    EMovieGraphQuickRenderFrameRangeType FrameRangeType;                              // 0x0080 (size: 0x1)
    int32 CustomStartFrame;                                                           // 0x0084 (size: 0x4)
    int32 CustomEndFrame;                                                             // 0x0088 (size: 0x4)
    TArray<class UMovieJobVariableAssignmentContainer*> GraphVariableAssignments;     // 0x0090 (size: 0x10)

    void RefreshVariableAssignments(class UMovieGraphQuickRenderModeSettings* InSettings);
    class UMovieJobVariableAssignmentContainer* GetVariableAssignmentsForGraph(const TSoftObjectPtr<UMovieGraphConfig>& InGraphConfigPath);
}; // Size: 0xA0

class UMovieGraphQuickRenderSettings : public UObject
{
    TMap<class FName, class UMovieGraphQuickRenderModeSettings*> ModeSettings;        // 0x0028 (size: 0x50)

    class UMovieGraphQuickRenderModeSettings* GetSavedQuickRenderModeSettings(EMovieGraphQuickRenderMode SettingsMode);
}; // Size: 0x78

class UMovieGraphRemoveRenderSettingNode : public UMovieGraphNode
{
    TSubclassOf<class UMovieGraphSettingNode> NodeType;                               // 0x00A8 (size: 0x8)

}; // Size: 0xB0

class UMovieGraphRenderLayer : public UObject
{
    FName RenderLayerName;                                                            // 0x0028 (size: 0x8)
    TArray<class UMovieGraphCollectionModifier*> Modifiers;                           // 0x0030 (size: 0x10)

    void SetRenderLayerName(const FName& NewName);
    void Revert();
    void RemoveModifier(class UMovieGraphCollectionModifier* Modifier);
    FName GetRenderLayerName();
    TArray<class UMovieGraphCollectionModifier*> GetModifiers();
    class UMovieGraphCollection* GetCollectionByName(FString Name);
    void Apply(const class UWorld* World);
    void AddModifier(class UMovieGraphCollectionModifier* Modifier);
}; // Size: 0x40

class UMovieGraphRenderLayerNode : public UMovieGraphSettingNode
{
    uint8 bOverride_LayerName;                                                        // 0x00A8 (size: 0x1)
    FString LayerName;                                                                // 0x00B0 (size: 0x10)

}; // Size: 0xC0

class UMovieGraphRenderLayerSubsystem : public UWorldSubsystem
{
    TArray<class UMovieGraphRenderLayer*> RenderLayers;                               // 0x0030 (size: 0x10)
    class UMovieGraphRenderLayer* ActiveRenderLayer;                                  // 0x0040 (size: 0x8)

    void SetActiveRenderLayerByObj(class UMovieGraphRenderLayer* RenderLayer);
    void SetActiveRenderLayerByName(const FName& RenderLayerName);
    void Reset();
    void RemoveRenderLayer(FString RenderLayerName);
    TArray<class UMovieGraphRenderLayer*> GetRenderLayers();
    class UMovieGraphRenderLayerSubsystem* GetFromWorld(const class UWorld* World);
    class UMovieGraphRenderLayer* GetActiveRenderLayer();
    void ClearActiveRenderLayer();
    bool AddRenderLayer(class UMovieGraphRenderLayer* RenderLayer);
}; // Size: 0x48

class UMovieGraphRenderPassNode : public UMovieGraphSettingNode
{
}; // Size: 0xA8

class UMovieGraphRenderPreviewWidget : public UUserWidget
{

    void OnInitializedForPipeline(class UMovieGraphPipeline* InPipeline);
}; // Size: 0x340

class UMovieGraphRenderPropertyModifier : public UMovieGraphCollectionModifier
{
    uint8 bOverride_bIsHidden;                                                        // 0x0058 (size: 0x1)
    uint8 bOverride_bCastsShadows;                                                    // 0x0058 (size: 0x1)
    uint8 bOverride_bCastShadowWhileHidden;                                           // 0x0058 (size: 0x1)
    uint8 bOverride_bAffectIndirectLightingWhileHidden;                               // 0x0058 (size: 0x1)
    uint8 bOverride_bHoldout;                                                         // 0x0058 (size: 0x1)
    uint8 bOverride_bProcessEditorOnlyActors;                                         // 0x0058 (size: 0x1)
    uint8 bIsHidden;                                                                  // 0x0058 (size: 0x1)
    uint8 bCastsShadows;                                                              // 0x0058 (size: 0x1)
    uint8 bCastShadowWhileHidden;                                                     // 0x0059 (size: 0x1)
    uint8 bAffectIndirectLightingWhileHidden;                                         // 0x0059 (size: 0x1)
    uint8 bHoldout;                                                                   // 0x0059 (size: 0x1)
    uint8 bProcessEditorOnlyActors;                                                   // 0x0059 (size: 0x1)

    void UndoModifier();
    void SetHidden(const bool bInIsHidden);
    bool IsHidden();
    void ApplyModifier(const class UWorld* World);
}; // Size: 0x60

class UMovieGraphRendererBase : public UObject
{

    TArray<FMovieGraphImagePreviewData> GetPreviewData();
}; // Size: 0x28

class UMovieGraphRerouteNode : public UMovieGraphSettingNode
{
    FMovieGraphPinProperties InputOutputProperties;                                   // 0x00A8 (size: 0x20)

    void SetPinProperties(const FMovieGraphPinProperties& InPinProperties);
    FMovieGraphPinProperties GetPinProperties();
}; // Size: 0xC8

class UMovieGraphSamplingMethodNode : public UMovieGraphSettingNode
{
    uint8 bOverride_SamplingMethodClass;                                              // 0x00A8 (size: 0x1)
    uint8 bOverride_TemporalSampleCount;                                              // 0x00A8 (size: 0x1)
    FSoftClassPath SamplingMethodClass;                                               // 0x00B0 (size: 0x20)
    int32 TemporalSampleCount;                                                        // 0x00D0 (size: 0x4)

}; // Size: 0xD8

class UMovieGraphScriptBase : public UObject
{

    void OnShotStart(class UMoviePipelineExecutorJob* InJobCopy, class UMoviePipelineExecutorShot* InShotCopy);
    void OnShotFinished(class UMoviePipelineExecutorJob* InJobCopy, class UMoviePipelineExecutorShot* InShotCopy, const FMoviePipelineOutputData& OutputData);
    void OnJobStart(class UMoviePipelineExecutorJob* InJobCopy);
    void OnJobFinished(class UMoviePipelineExecutorJob* InJobCopy, const FMoviePipelineOutputData& InOutputData);
    bool IsPerShotCallbackNeeded();
}; // Size: 0x28

class UMovieGraphSelectNode : public UMovieGraphNode
{
    class UMovieGraphValueContainer* SelectOptions;                                   // 0x00A8 (size: 0x8)
    class UMovieGraphValueContainer* SelectedOption;                                  // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UMovieGraphSequenceDataSource : public UMovieGraphDataSourceBase
{
    class ALevelSequenceActor* LevelSequenceActor;                                    // 0x0028 (size: 0x8)

}; // Size: 0x50

class UMovieGraphSetCVarValueNode : public UMovieGraphSettingNode
{
    uint8 bOverride_Name;                                                             // 0x00A8 (size: 0x1)
    uint8 bOverride_Value;                                                            // 0x00A8 (size: 0x1)
    FString Name;                                                                     // 0x00B0 (size: 0x10)
    float Value;                                                                      // 0x00C0 (size: 0x4)

}; // Size: 0xC8

class UMovieGraphSetMetadataAttributesNode : public UMovieGraphSettingNode
{
    uint8 bOverride_MetadataAttributeCollection;                                      // 0x00A8 (size: 0x1)
    class UMovieGraphMetadataAttributeCollection* MetadataAttributeCollection;        // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UMovieGraphSetStartEndConsoleCommandsNode : public UMovieGraphSettingNode
{
    uint8 bOverride_ConsoleCommands;                                                  // 0x00A8 (size: 0x1)
    class UMovieGraphStartEndConsoleCommands* ConsoleCommands;                        // 0x00B0 (size: 0x8)

}; // Size: 0xB8

class UMovieGraphSettingNode : public UMovieGraphNode
{
}; // Size: 0xA8

class UMovieGraphShowFlags : public UObject
{
    TSet<uint32> OverriddenShowFlags;                                                 // 0x0030 (size: 0x50)
    TMap<uint32, bool> ShowFlagEnableState;                                           // 0x0080 (size: 0x50)

}; // Size: 0x110

class UMovieGraphStartEndConsoleCommands : public UObject
{
    TArray<FString> AddStartCommands;                                                 // 0x0030 (size: 0x10)
    TArray<FString> AddEndCommands;                                                   // 0x0040 (size: 0x10)
    TArray<FString> RemoveStartCommands;                                              // 0x0050 (size: 0x10)
    TArray<FString> RemoveEndCommands;                                                // 0x0060 (size: 0x10)

}; // Size: 0x70

class UMovieGraphSubgraphNode : public UMovieGraphNode
{
    TSoftObjectPtr<UMovieGraphConfig> SubgraphAsset;                                  // 0x00A8 (size: 0x28)

    void SetSubGraphAsset(const TSoftObjectPtr<UMovieGraphConfig>& InSubgraphAsset);
    class UMovieGraphConfig* GetSubgraphAsset();
}; // Size: 0xD0

class UMovieGraphTimeStepBase : public UObject
{

    FMovieGraphTimeStepData GetCalculatedTimeData();
}; // Size: 0x28

class UMovieGraphUIRendererNode : public UMovieGraphWidgetRendererBaseNode
{
}; // Size: 0x120

class UMovieGraphValueContainer : public UObject
{
    FName PropertyName;                                                               // 0x0028 (size: 0x8)
    FInstancedPropertyBag Value;                                                      // 0x0030 (size: 0x10)

    void SetValueTypeObject(const class UObject* ValueTypeObject);
    void SetValueType(EMovieGraphValueType ValueType, class UObject* InValueTypeObject);
    bool SetValueText(const FText& InValue);
    bool SetValueString(FString InValue);
    bool SetValueSerializedString(FString NewValue);
    bool SetValueObject(class UObject* InValue);
    bool SetValueName(const FName InValue);
    bool SetValueInt64(const int64 InValue);
    bool SetValueInt32(const int32 InValue);
    bool SetValueFloat(const float InValue);
    bool SetValueEnum(const uint8 InValue, const class UEnum* Enum);
    bool SetValueDouble(const double InValue);
    void SetValueContainerType(EMovieGraphContainerType ContainerType);
    bool SetValueClass(UClass* InValue);
    bool SetValueByte(const uint8 InValue);
    bool SetValueBool(const bool bInValue);
    class UObject* GetValueTypeObject();
    EMovieGraphValueType GetValueType();
    bool GetValueText(FText& OutValue);
    bool GetValueString(FString& OutValue);
    FString GetValueSerializedString();
    bool GetValueObject(class UObject* OutValue, const UClass* RequestedClass);
    bool GetValueName(FName& OutValue);
    bool GetValueInt64(int64& OutValue);
    bool GetValueInt32(int32& OutValue);
    bool GetValueFloat(float& OutValue);
    bool GetValueEnum(uint8& OutValue, const class UEnum* RequestedEnum);
    bool GetValueDouble(double& OutValue);
    EMovieGraphContainerType GetValueContainerType();
    bool GetValueClass(UClass*& OutValue);
    bool GetValueByte(uint8& OutValue);
    bool GetValueBool(bool& bOutValue);
}; // Size: 0x40

class UMovieGraphVariable : public UMovieGraphMember
{
    FString Category;                                                                 // 0x0078 (size: 0x10)

    void SetCategory(FString InNewCategory);
    bool IsGlobal();
    FString GetCategory();
}; // Size: 0x88

class UMovieGraphVariableNode : public UMovieGraphNode
{
    class UMovieGraphVariable* GraphVariable;                                         // 0x00A8 (size: 0x8)
    FMovieGraphPinProperties OutputPin;                                               // 0x00B0 (size: 0x20)

    void SetVariable(class UMovieGraphVariable* InVariable);
    class UMovieGraphVariable* GetVariable();
}; // Size: 0xD0

class UMovieGraphVideoOutputNode : public UMovieGraphFileOutputNode
{
}; // Size: 0xC8

class UMovieGraphWarmUpSettingNode : public UMovieGraphSettingNode
{
    uint8 bOverride_NumWarmUpFrames;                                                  // 0x00A8 (size: 0x1)
    uint8 bOverride_bEmulateMotionBlur;                                               // 0x00A8 (size: 0x1)
    int32 NumWarmUpFrames;                                                            // 0x00AC (size: 0x4)
    bool bEmulateMotionBlur;                                                          // 0x00B0 (size: 0x1)

}; // Size: 0xB8

class UMovieGraphWidgetRendererBaseNode : public UMovieGraphRenderPassNode
{
    uint8 bOverride_bCompositeOntoFinalImage;                                         // 0x00A8 (size: 0x1)
    bool bCompositeOntoFinalImage;                                                    // 0x00A9 (size: 0x1)

}; // Size: 0x120

class UMovieJobVariableAssignmentContainer : public UObject
{
    FInstancedPropertyBag Value;                                                      // 0x0028 (size: 0x10)
    TSoftObjectPtr<UMovieGraphConfig> GraphPreset;                                    // 0x0038 (size: 0x28)

    bool SetVariableAssignmentEnableState(const class UMovieGraphVariable* InGraphVariable, bool bIsEnabled);
    bool SetValueText(const class UMovieGraphVariable* InGraphVariable, const FText& InValue);
    bool SetValueString(const class UMovieGraphVariable* InGraphVariable, FString InValue);
    bool SetValueSerializedString(const class UMovieGraphVariable* InGraphVariable, FString NewValue);
    bool SetValueObject(const class UMovieGraphVariable* InGraphVariable, class UObject* InValue);
    bool SetValueName(const class UMovieGraphVariable* InGraphVariable, const FName InValue);
    bool SetValueInt64(const class UMovieGraphVariable* InGraphVariable, const int64 InValue);
    bool SetValueInt32(const class UMovieGraphVariable* InGraphVariable, const int32 InValue);
    bool SetValueFloat(const class UMovieGraphVariable* InGraphVariable, const float InValue);
    bool SetValueEnum(const class UMovieGraphVariable* InGraphVariable, const uint8 InValue, const class UEnum* Enum);
    bool SetValueDouble(const class UMovieGraphVariable* InGraphVariable, const double InValue);
    bool SetValueClass(const class UMovieGraphVariable* InGraphVariable, UClass* InValue);
    bool SetValueByte(const class UMovieGraphVariable* InGraphVariable, const uint8 InValue);
    bool SetValueBool(const class UMovieGraphVariable* InGraphVariable, const bool bInValue);
    void SetGraphConfig(const TSoftObjectPtr<UMovieGraphConfig>& InGraphConfig);
    bool GetVariableAssignmentEnableState(const class UMovieGraphVariable* InGraphVariable, bool& bOutIsEnabled);
    class UObject* GetValueTypeObject(const class UMovieGraphVariable* InGraphVariable);
    EMovieGraphValueType GetValueType(const class UMovieGraphVariable* InGraphVariable);
    bool GetValueText(const class UMovieGraphVariable* InGraphVariable, FText& OutValue);
    bool GetValueString(const class UMovieGraphVariable* InGraphVariable, FString& OutValue);
    FString GetValueSerializedString(const class UMovieGraphVariable* InGraphVariable);
    bool GetValueObject(const class UMovieGraphVariable* InGraphVariable, class UObject* OutValue, const UClass* RequestedClass);
    bool GetValueName(const class UMovieGraphVariable* InGraphVariable, FName& OutValue);
    bool GetValueInt64(const class UMovieGraphVariable* InGraphVariable, int64& OutValue);
    bool GetValueInt32(const class UMovieGraphVariable* InGraphVariable, int32& OutValue);
    bool GetValueFloat(const class UMovieGraphVariable* InGraphVariable, float& OutValue);
    bool GetValueEnum(const class UMovieGraphVariable* InGraphVariable, uint8& OutValue, const class UEnum* RequestedEnum);
    bool GetValueDouble(const class UMovieGraphVariable* InGraphVariable, double& OutValue);
    EMovieGraphContainerType GetValueContainerType(const class UMovieGraphVariable* InGraphVariable);
    bool GetValueClass(const class UMovieGraphVariable* InGraphVariable, UClass*& OutValue);
    bool GetValueByte(const class UMovieGraphVariable* InGraphVariable, uint8& OutValue);
    bool GetValueBool(const class UMovieGraphVariable* InGraphVariable, bool& bOutValue);
    TSoftObjectPtr<UMovieGraphConfig> GetGraphConfig();
}; // Size: 0x60

class UMoviePipeline : public UMoviePipelineBase
{
    class UMoviePipelineCustomTimeStep* CustomTimeStep;                               // 0x0078 (size: 0x8)
    class UEngineCustomTimeStep* CachedPrevCustomTimeStep;                            // 0x0090 (size: 0x8)
    class ULevelSequence* TargetSequence;                                             // 0x0098 (size: 0x8)
    class ALevelSequenceActor* LevelSequenceActor;                                    // 0x00A0 (size: 0x8)
    class UMovieRenderDebugWidget* DebugWidget;                                       // 0x00A8 (size: 0x8)
    class UTexture* PreviewTexture;                                                   // 0x00B0 (size: 0x8)
    class UMoviePipelineExecutorJob* CurrentJob;                                      // 0x0310 (size: 0x8)

    void SetInitializationTime(const FDateTime& InDateTime);
    void OnMoviePipelineFinishedImpl();
    void Initialize(class UMoviePipelineExecutorJob* InJob);
    class UTexture* GetPreviewTexture();
    class UMoviePipelinePrimaryConfig* GetPipelinePrimaryConfig();
    FTimespan GetInitializationTimeOffset();
    FDateTime GetInitializationTime();
    class UMoviePipelineExecutorJob* GetCurrentJob();
}; // Size: 0x450

class UMoviePipelineAntiAliasingSetting : public UMoviePipelineSetting
{
    int32 SpatialSampleCount;                                                         // 0x0048 (size: 0x4)
    int32 TemporalSampleCount;                                                        // 0x004C (size: 0x4)
    bool bOverrideAntiAliasing;                                                       // 0x0050 (size: 0x1)
    TEnumAsByte<EAntiAliasingMethod> AntiAliasingMethod;                              // 0x0051 (size: 0x1)
    int32 RenderWarmUpCount;                                                          // 0x0054 (size: 0x4)
    bool bUseCameraCutForWarmUp;                                                      // 0x0058 (size: 0x1)
    int32 EngineWarmUpCount;                                                          // 0x005C (size: 0x4)
    bool bRenderWarmUpFrames;                                                         // 0x0060 (size: 0x1)

}; // Size: 0x68

class UMoviePipelineBase : public UObject
{
    FMoviePipelineBaseOnMoviePipelineWorkFinishedDelegate OnMoviePipelineWorkFinishedDelegate; // 0x0028 (size: 0x10)
    void MoviePipelineWorkFinished(FMoviePipelineOutputData Results);
    FMoviePipelineBaseOnMoviePipelineShotWorkFinishedDelegate OnMoviePipelineShotWorkFinishedDelegate; // 0x0038 (size: 0x10)
    void MoviePipelineWorkFinished(FMoviePipelineOutputData Results);

    void Shutdown(bool bIsError);
    void RequestShutdown(bool bIsError);
    bool IsShutdownRequested();
    EMovieRenderPipelineState GetPipelineState();
}; // Size: 0x78

class UMoviePipelineBlueprintLibrary : public UBlueprintFunctionLibrary
{

    void UpdateJobShotListFromSequence(class ULevelSequence* InSequence, class UMoviePipelineExecutorJob* InJob, bool& bShotsChanged);
    int32 ResolveVersionNumber(FMoviePipelineFilenameResolveParams InParams, bool bGetNextVersion);
    void ResolveFilenameFormatArguments(FString InFormatString, const FMoviePipelineFilenameResolveParams& InParams, FString& OutFinalPath, FMoviePipelineFormatArgs& OutMergedFormatArgs);
    class UMoviePipelineQueue* LoadManifestFileFromString(FString InManifestFilePath);
    FTimecode GetRootTimecode(const class UMoviePipeline* InMoviePipeline);
    FFrameNumber GetRootFrameNumber(const class UMoviePipeline* InMoviePipeline);
    EMovieRenderPipelineState GetPipelineState(const class UMoviePipeline* InPipeline);
    FIntPoint GetOverscannedResolution(const class UMoviePipelinePrimaryConfig* InPrimaryConfig, const class UMoviePipelineExecutorShot* InPipelineExecutorShot, float InDefaultOverscan);
    FIntRect GetOverscanCropRectangle(const class UMoviePipelinePrimaryConfig* InPrimaryConfig, const class UMoviePipelineExecutorShot* InPipelineExecutorShot, float DefaultOverscan);
    void GetOverallSegmentCounts(const class UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    void GetOverallOutputFrames(const class UMoviePipeline* InMoviePipeline, int32& OutCurrentIndex, int32& OutTotalCount);
    FText GetMoviePipelineEngineChangelistLabel(const class UMoviePipeline* InMoviePipeline);
    FString GetMapPackageName(class UMoviePipelineExecutorJob* InJob);
    FText GetJobName(class UMoviePipeline* InMoviePipeline);
    FDateTime GetJobInitializationTime(const class UMoviePipeline* InMoviePipeline);
    FText GetJobAuthor(class UMoviePipeline* InMoviePipeline);
    bool GetEstimatedTimeRemaining(const class UMoviePipeline* InPipeline, FTimespan& OutEstimate);
    FIntPoint GetEffectiveOutputResolution(class UMoviePipelinePrimaryConfig* InPrimaryConfig, class UMoviePipelineExecutorShot* InPipelineExecutorShot, float DefaultOverscan);
    FIntPoint GetDesiredOutputResolution(const class UMoviePipelinePrimaryConfig* InPrimaryConfig);
    int32 GetCurrentVersionNumber(const class UMoviePipeline* InMoviePipeline);
    FTimecode GetCurrentShotTimecode(const class UMoviePipeline* InMoviePipeline);
    FFrameNumber GetCurrentShotFrameNumber(const class UMoviePipeline* InMoviePipeline);
    class ULevelSequence* GetCurrentSequence(const class UMoviePipeline* InMoviePipeline);
    FMoviePipelineSegmentWorkMetrics GetCurrentSegmentWorkMetrics(const class UMoviePipeline* InMoviePipeline);
    EMovieRenderShotState GetCurrentSegmentState(class UMoviePipeline* InMoviePipeline);
    void GetCurrentSegmentName(class UMoviePipeline* InMoviePipeline, FText& OutOuterName, FText& OutInnerName);
    float GetCurrentFocusDistance(const class UMoviePipeline* InMoviePipeline);
    float GetCurrentFocalLength(const class UMoviePipeline* InMoviePipeline);
    class UMoviePipelineExecutorShot* GetCurrentExecutorShot(const class UMoviePipeline* InMoviePipeline);
    float GetCurrentAperture(const class UMoviePipeline* InMoviePipeline);
    float GetCompletionPercentage(const class UMoviePipeline* InPipeline);
    FIntPoint GetBackbufferResolution(const class UMoviePipelinePrimaryConfig* InPrimaryConfig, const class UMoviePipelineExecutorShot* InPipelineExecutorShot, float InDefaultOverscan);
    class UMoviePipelineSetting* FindOrGetDefaultSettingForShot(TSubclassOf<class UMoviePipelineSetting> InSettingType, const class UMoviePipelinePrimaryConfig* InPrimaryConfig, const class UMoviePipelineExecutorShot* InShot);
    class UMovieSceneSequence* DuplicateSequence(class UObject* Outer, class UMovieSceneSequence* InSequence);
}; // Size: 0x28

class UMoviePipelineCameraSetting : public UMoviePipelineSetting
{
    EMoviePipelineShutterTiming ShutterTiming;                                        // 0x0048 (size: 0x1)
    bool bOverrideCameraOverscan;                                                     // 0x0049 (size: 0x1)
    float OverscanPercentage;                                                         // 0x004C (size: 0x4)
    bool bRenderAllCameras;                                                           // 0x0050 (size: 0x1)

}; // Size: 0x58

class UMoviePipelineColorSetting : public UMoviePipelineSetting
{
    FOpenColorIODisplayConfiguration OCIOConfiguration;                               // 0x0048 (size: 0xA8)
    bool bDisableToneCurve;                                                           // 0x00F0 (size: 0x1)

}; // Size: 0xF8

class UMoviePipelineCommandLineEncoder : public UMoviePipelineSetting
{
    FString FileNameFormatOverride;                                                   // 0x0048 (size: 0x10)
    EMoviePipelineEncodeQuality Quality;                                              // 0x0058 (size: 0x1)
    FString AdditionalCommandLineArgs;                                                // 0x0060 (size: 0x10)
    bool bDeleteSourceFiles;                                                          // 0x0070 (size: 0x1)
    bool bSkipEncodeOnRenderCanceled;                                                 // 0x0071 (size: 0x1)
    bool bWriteEachFrameDuration;                                                     // 0x0072 (size: 0x1)

}; // Size: 0x88

class UMoviePipelineCommandLineEncoderSettings : public UDeveloperSettings
{
    FString ExecutablePath;                                                           // 0x0038 (size: 0x10)
    FText CodecHelpText;                                                              // 0x0048 (size: 0x10)
    FString VideoCodec;                                                               // 0x0058 (size: 0x10)
    FString AudioCodec;                                                               // 0x0068 (size: 0x10)
    FString OutputFileExtension;                                                      // 0x0078 (size: 0x10)
    FString CommandLineFormat;                                                        // 0x0088 (size: 0x10)
    FString VideoInputStringFormat;                                                   // 0x0098 (size: 0x10)
    FString AudioInputStringFormat;                                                   // 0x00A8 (size: 0x10)
    FString EncodeSettings_Low;                                                       // 0x00B8 (size: 0x10)
    FString EncodeSettings_Med;                                                       // 0x00C8 (size: 0x10)
    FString EncodeSettings_High;                                                      // 0x00D8 (size: 0x10)
    FString EncodeSettings_Epic;                                                      // 0x00E8 (size: 0x10)

}; // Size: 0xF8

class UMoviePipelineConfigBase : public UObject
{
    FString DisplayName;                                                              // 0x0028 (size: 0x10)
    TArray<class UMoviePipelineSetting*> Settings;                                    // 0x0038 (size: 0x10)
    TSoftObjectPtr<UMoviePipelineConfigBase> ConfigOrigin;                            // 0x0048 (size: 0x28)

    void SetConfigOrigin(class UMoviePipelineConfigBase* InConfig);
    void RemoveSetting(class UMoviePipelineSetting* InSetting);
    TArray<class UMoviePipelineSetting*> GetUserSettings();
    class UMoviePipelineConfigBase* GetConfigOrigin();
    TArray<class UMoviePipelineSetting*> FindSettingsByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings, const bool bExactMatch);
    class UMoviePipelineSetting* FindSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings, const bool bExactMatch);
    class UMoviePipelineSetting* FindOrAddSettingByClass(TSubclassOf<class UMoviePipelineSetting> InClass, const bool bIncludeDisabledSettings, const bool bExactMatch);
    void CopyFrom(class UMoviePipelineConfigBase* InConfig);
}; // Size: 0x78

class UMoviePipelineCustomTimeStep : public UEngineCustomTimeStep
{
}; // Size: 0x38

class UMoviePipelineDebugSettings : public UMoviePipelineSetting
{
    bool bWriteAllSamples;                                                            // 0x0048 (size: 0x1)
    bool bCaptureFramesWithRenderDoc;                                                 // 0x0049 (size: 0x1)
    int32 CaptureFrame;                                                               // 0x004C (size: 0x4)
    bool bCaptureUnrealInsightsTrace;                                                 // 0x0050 (size: 0x1)

}; // Size: 0x58

class UMoviePipelineExecutorBase : public UObject
{
    FMoviePipelineExecutorBaseOnExecutorFinishedDelegate OnExecutorFinishedDelegate;  // 0x0028 (size: 0x10)
    void OnMoviePipelineExecutorFinished(class UMoviePipelineExecutorBase* PipelineExecutor, bool bSuccess);
    FMoviePipelineExecutorBaseOnExecutorErroredDelegate OnExecutorErroredDelegate;    // 0x0050 (size: 0x10)
    void OnMoviePipelineExecutorErrored(class UMoviePipelineExecutorBase* PipelineExecutor, class UMoviePipeline* PipelineWithError, bool bIsFatal, FText ErrorText);
    FMoviePipelineExecutorBaseSocketMessageRecievedDelegate SocketMessageRecievedDelegate; // 0x0080 (size: 0x10)
    void MoviePipelineSocketMessageRecieved(FString Message);
    FMoviePipelineExecutorBaseHTTPResponseRecievedDelegate HTTPResponseRecievedDelegate; // 0x0090 (size: 0x10)
    void MoviePipelineHttpResponseRecieved(int32 RequestIndex, int32 ResponseCode, FString Message);
    TSubclassOf<class UMovieRenderDebugWidget> DebugWidgetClass;                      // 0x00A0 (size: 0x8)
    FString UserData;                                                                 // 0x00B8 (size: 0x10)
    TSubclassOf<class UMoviePipeline> TargetPipelineClass;                            // 0x00C8 (size: 0x8)

    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetMoviePipelineClass(UClass* InPipelineClass);
    bool SendSocketMessage(FString InMessage);
    int32 SendHTTPRequest(FString InURL, FString InVerb, FString InMessage, const TMap<class FString, class FString>& InHeaders);
    void OnExecutorFinishedImpl();
    void OnExecutorErroredImpl(class UMoviePipeline* ErroredPipeline, bool bFatal, FText ErrorReason);
    void OnBeginFrame();
    bool IsSocketConnected();
    bool IsRendering();
    float GetStatusProgress();
    FString GetStatusMessage();
    void Execute(class UMoviePipelineQueue* InPipelineQueue);
    void DisconnectSocket();
    bool ConnectSocket(FString InHostName, const int32 InPort);
    void CancelCurrentJob();
    void CancelAllJobs();
}; // Size: 0x118

class UMoviePipelineExecutorJob : public UObject
{
    FString JobName;                                                                  // 0x0028 (size: 0x10)
    FSoftObjectPath Sequence;                                                         // 0x0038 (size: 0x20)
    FSoftObjectPath Map;                                                              // 0x0058 (size: 0x20)
    FString Author;                                                                   // 0x0078 (size: 0x10)
    FString Comment;                                                                  // 0x0088 (size: 0x10)
    TArray<class UMoviePipelineExecutorShot*> ShotInfo;                               // 0x0098 (size: 0x10)
    FString UserData;                                                                 // 0x00A8 (size: 0x10)
    TArray<FMoviePipelineConsoleVariableEntry> ConsoleVariableOverrides;              // 0x00D0 (size: 0x10)
    FString StatusMessage;                                                            // 0x00E0 (size: 0x10)
    float StatusProgress;                                                             // 0x00F0 (size: 0x4)
    bool bIsConsumed;                                                                 // 0x00F4 (size: 0x1)
    class UMoviePipelinePrimaryConfig* Configuration;                                 // 0x00F8 (size: 0x8)
    TSoftObjectPtr<UMoviePipelinePrimaryConfig> PresetOrigin;                         // 0x0100 (size: 0x28)
    bool bEnabled;                                                                    // 0x0128 (size: 0x1)
    TSoftObjectPtr<UMovieGraphConfig> GraphPreset;                                    // 0x0130 (size: 0x28)
    TArray<class UMovieJobVariableAssignmentContainer*> GraphVariableAssignments;     // 0x0158 (size: 0x10)

    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetSequence(FSoftObjectPath InSequence);
    void SetPresetOrigin(class UMoviePipelinePrimaryConfig* InPreset);
    void SetIsEnabled(const bool bInEnabled);
    void SetGraphPreset(const class UMovieGraphConfig* InGraphPreset, const bool bUpdateVariableAssignments);
    void SetConsumed(const bool bInConsumed);
    void SetConfiguration(class UMoviePipelinePrimaryConfig* InPreset);
    void OnDuplicated();
    bool IsUsingGraphConfiguration();
    bool IsEnabled();
    bool IsConsumed();
    float GetStatusProgress();
    FString GetStatusMessage();
    class UMoviePipelinePrimaryConfig* GetPresetOrigin();
    class UMovieJobVariableAssignmentContainer* GetOrCreateJobVariableAssignmentsForGraph(const class UMovieGraphConfig* InGraph);
    class UMovieGraphConfig* GetGraphPreset();
    class UMoviePipelinePrimaryConfig* GetConfiguration();
}; // Size: 0x168

class UMoviePipelineExecutorShot : public UObject
{
    bool bEnabled;                                                                    // 0x0028 (size: 0x1)
    FString OuterName;                                                                // 0x0030 (size: 0x10)
    FString InnerName;                                                                // 0x0040 (size: 0x10)
    TArray<FMoviePipelineSidecarCamera> SidecarCameras;                               // 0x0050 (size: 0x10)
    TArray<FMoviePipelineConsoleVariableEntry> ConsoleVariableOverrides;              // 0x0078 (size: 0x10)
    float Progress;                                                                   // 0x0160 (size: 0x4)
    FString StatusMessage;                                                            // 0x0168 (size: 0x10)
    class UMoviePipelineShotConfig* ShotOverrideConfig;                               // 0x0178 (size: 0x8)
    TSoftObjectPtr<UMoviePipelineShotConfig> ShotOverridePresetOrigin;                // 0x0180 (size: 0x28)
    TSoftObjectPtr<UMovieGraphConfig> GraphPreset;                                    // 0x01A8 (size: 0x28)
    TArray<class UMovieJobVariableAssignmentContainer*> GraphVariableAssignments;     // 0x01D0 (size: 0x10)
    TArray<class UMovieJobVariableAssignmentContainer*> PrimaryGraphVariableAssignments; // 0x01E0 (size: 0x10)

    bool ShouldRender();
    void SetStatusProgress(const float InProgress);
    void SetStatusMessage(FString InStatus);
    void SetShotOverridePresetOrigin(class UMoviePipelineShotConfig* InPreset);
    void SetShotOverrideConfiguration(class UMoviePipelineShotConfig* InPreset);
    void SetGraphPreset(const class UMovieGraphConfig* InGraphPreset, const bool bUpdateVariableAssignments);
    bool IsUsingGraphConfiguration();
    float GetStatusProgress();
    FString GetStatusMessage();
    class UMoviePipelineShotConfig* GetShotOverridePresetOrigin();
    class UMoviePipelineShotConfig* GetShotOverrideConfiguration();
    class UMovieJobVariableAssignmentContainer* GetOrCreateJobVariableAssignmentsForGraph(const class UMovieGraphConfig* InGraph, const bool bIsForPrimaryOverrides);
    class UMovieGraphConfig* GetGraphPreset();
    FString GetCameraName(int32 InCameraIndex);
    class UMoviePipelineShotConfig* AllocateNewShotOverrideConfig(TSubclassOf<class UMoviePipelineShotConfig> InConfigType);
}; // Size: 0x1F0

class UMoviePipelineFCPXMLExporter : public UMoviePipelineOutputBase
{
    FString FileNameFormatOverride;                                                   // 0x0050 (size: 0x10)
    FCPXMLExportDataSource DataSource;                                                // 0x0060 (size: 0x1)

}; // Size: 0x80

class UMoviePipelineGameOverrideSetting : public UMoviePipelineSetting
{
    TSubclassOf<class AGameModeBase> GameModeOverride;                                // 0x0048 (size: 0x8)
    TSoftClassPtr<AGameModeBase> SoftGameModeOverride;                                // 0x0050 (size: 0x28)
    bool bCinematicQualitySettings;                                                   // 0x0078 (size: 0x1)
    EMoviePipelineTextureStreamingMethod TextureStreaming;                            // 0x0079 (size: 0x1)
    bool bUseLODZero;                                                                 // 0x007A (size: 0x1)
    bool bDisableHLODs;                                                               // 0x007B (size: 0x1)
    bool bUseHighQualityShadows;                                                      // 0x007C (size: 0x1)
    int32 ShadowDistanceScale;                                                        // 0x0080 (size: 0x4)
    float ShadowRadiusThreshold;                                                      // 0x0084 (size: 0x4)
    bool bOverrideViewDistanceScale;                                                  // 0x0088 (size: 0x1)
    int32 ViewDistanceScale;                                                          // 0x008C (size: 0x4)
    bool bFlushGrassStreaming;                                                        // 0x0090 (size: 0x1)
    bool bFlushStreamingManagers;                                                     // 0x0091 (size: 0x1)
    bool bOverrideVirtualTextureFeedbackFactor;                                       // 0x0092 (size: 0x1)
    int32 VirtualTextureFeedbackFactor;                                               // 0x0094 (size: 0x4)

}; // Size: 0x160

class UMoviePipelineHighResSetting : public UMoviePipelineSetting
{
    int32 TileCount;                                                                  // 0x0048 (size: 0x4)
    float TextureSharpnessBias;                                                       // 0x004C (size: 0x4)
    float OverlapRatio;                                                               // 0x0050 (size: 0x4)
    bool bOverrideSubSurfaceScattering;                                               // 0x0054 (size: 0x1)
    int32 BurleySampleCount;                                                          // 0x0058 (size: 0x4)
    bool bAllocateHistoryPerTile;                                                     // 0x005C (size: 0x1)
    bool bPageToSystemMemory;                                                         // 0x005D (size: 0x1)

}; // Size: 0x68

class UMoviePipelineInProcessExecutor : public UMoviePipelineLinearExecutorBase
{
    bool bUseCurrentLevel;                                                            // 0x0140 (size: 0x1)

}; // Size: 0x180

class UMoviePipelineInProcessExecutorSettings : public UDeveloperSettings
{
    bool bCloseEditor;                                                                // 0x0038 (size: 0x1)
    FString AdditionalCommandLineArguments;                                           // 0x0040 (size: 0x10)
    FString InheritedCommandLineArguments;                                            // 0x0050 (size: 0x10)
    int32 InitialDelayFrameCount;                                                     // 0x0060 (size: 0x4)

}; // Size: 0x68

class UMoviePipelineLinearExecutorBase : public UMoviePipelineExecutorBase
{
    class UMoviePipelineQueue* Queue;                                                 // 0x0118 (size: 0x8)
    class UMoviePipelineBase* ActiveMoviePipeline;                                    // 0x0120 (size: 0x8)

}; // Size: 0x140

class UMoviePipelineOutputBase : public UMoviePipelineSetting
{
}; // Size: 0x48

class UMoviePipelineOutputSetting : public UMoviePipelineSetting
{
    FDirectoryPath OutputDirectory;                                                   // 0x0048 (size: 0x10)
    FString FileNameFormat;                                                           // 0x0058 (size: 0x10)
    FIntPoint OutputResolution;                                                       // 0x0068 (size: 0x8)
    bool bUseCustomFrameRate;                                                         // 0x0070 (size: 0x1)
    FFrameRate OutputFrameRate;                                                       // 0x0074 (size: 0x8)
    bool bOverrideExistingOutput;                                                     // 0x0080 (size: 0x1)
    int32 HandleFrameCount;                                                           // 0x0084 (size: 0x4)
    int32 OutputFrameStep;                                                            // 0x0088 (size: 0x4)
    bool bUseCustomPlaybackRange;                                                     // 0x008C (size: 0x1)
    int32 CustomStartFrame;                                                           // 0x0090 (size: 0x4)
    int32 CustomEndFrame;                                                             // 0x0094 (size: 0x4)
    int32 VersionNumber;                                                              // 0x0098 (size: 0x4)
    bool bAutoVersion;                                                                // 0x009C (size: 0x1)
    int32 ZeroPadFrameNumbers;                                                        // 0x00A0 (size: 0x4)
    int32 FrameNumberOffset;                                                          // 0x00A4 (size: 0x4)
    bool bFlushDiskWritesPerShot;                                                     // 0x00A8 (size: 0x1)

}; // Size: 0xB0

class UMoviePipelinePrimaryConfig : public UMoviePipelineConfigBase
{
    TMap<class FString, class UMoviePipelineShotConfig*> PerShotConfigMapping;        // 0x0078 (size: 0x50)
    class UMoviePipelineOutputSetting* OutputSetting;                                 // 0x00C8 (size: 0x8)
    TArray<class UMoviePipelineSetting*> TransientSettings;                           // 0x00D0 (size: 0x10)

    void InitializeTransientSettings();
    TArray<class UMoviePipelineSetting*> GetTransientSettings();
    FFrameRate GetEffectiveFrameRate(const class ULevelSequence* InSequence);
    TArray<class UMoviePipelineSetting*> GetAllSettings(const bool bIncludeDisabledSettings, const bool bIncludeTransientSettings);
}; // Size: 0xE0

class UMoviePipelinePythonHostExecutor : public UMoviePipelineExecutorBase
{
    TSubclassOf<class UMoviePipelinePythonHostExecutor> ExecutorClass;                // 0x0118 (size: 0x8)
    class UMoviePipelineQueue* PipelineQueue;                                         // 0x0120 (size: 0x8)
    class UWorld* LastLoadedWorld;                                                    // 0x0128 (size: 0x8)

    void OnMapLoad(class UWorld* InWorld);
    class UWorld* GetLastLoadedWorld();
    void ExecuteDelayed(class UMoviePipelineQueue* InPipelineQueue);
}; // Size: 0x130

class UMoviePipelineQueue : public UObject
{
    TArray<class UMoviePipelineExecutorJob*> Jobs;                                    // 0x0028 (size: 0x10)
    TSoftObjectPtr<UMoviePipelineQueue> QueueOrigin;                                  // 0x0038 (size: 0x28)

    void SetQueueOrigin(class UMoviePipelineQueue* InConfig);
    void SetJobIndex(class UMoviePipelineExecutorJob* InJob, int32 Index);
    class UMoviePipelineQueue* GetQueueOrigin();
    TArray<class UMoviePipelineExecutorJob*> GetJobs();
    class UMoviePipelineExecutorJob* DuplicateJob(class UMoviePipelineExecutorJob* InJob);
    void DeleteJob(class UMoviePipelineExecutorJob* InJob);
    void DeleteAllJobs();
    class UMoviePipelineQueue* CopyFrom(class UMoviePipelineQueue* InQueue);
    class UMoviePipelineExecutorJob* AllocateNewJob(TSubclassOf<class UMoviePipelineExecutorJob> InJobType);
}; // Size: 0x68

class UMoviePipelineQueueEngineSubsystem : public UEngineSubsystem
{
    FMoviePipelineQueueEngineSubsystemOnRenderFinished OnRenderFinished;              // 0x0030 (size: 0x10)
    void MoviePipelineWorkFinished(FMoviePipelineOutputData Results);
    class UMoviePipelineExecutorBase* ActiveExecutor;                                 // 0x0040 (size: 0x8)
    class UMoviePipelineQueue* CurrentQueue;                                          // 0x0048 (size: 0x8)

    void SetConfiguration(TSubclassOf<class UMovieRenderDebugWidget> InProgressWidgetClass, const bool bRenderPlayerViewport);
    void RenderQueueWithExecutorInstance(class UMoviePipelineExecutorBase* InExecutor);
    class UMoviePipelineExecutorBase* RenderQueueWithExecutor(TSubclassOf<class UMoviePipelineExecutorBase> InExecutorType);
    void RenderJob(class UMoviePipelineExecutorJob* InJob);
    bool IsRendering();
    class UMoviePipelineQueue* GetQueue();
    class UMoviePipelineExecutorBase* GetActiveExecutor();
    class UMoviePipelineExecutorJob* AllocateJob(class ULevelSequence* InSequence);
}; // Size: 0xA0

class UMoviePipelineRenderPass : public UMoviePipelineSetting
{
}; // Size: 0x48

class UMoviePipelineSetting : public UObject
{
    TWeakObjectPtr<class UMoviePipeline> CachedPipeline;                              // 0x0028 (size: 0x8)
    bool bEnabled;                                                                    // 0x0030 (size: 0x1)

    void SetIsEnabled(bool bInEnabled);
    bool IsEnabled();
    void BuildNewProcessCommandLineArgs(TArray<FString>& InOutUnrealURLParams, TArray<FString>& InOutCommandLineArgs, TArray<FString>& InOutDeviceProfileCvars, TArray<FString>& InOutExecCmds);
}; // Size: 0x48

class UMoviePipelineSetting_BlueprintBase : public UMoviePipelineSetting
{
    FText CategoryText;                                                               // 0x0048 (size: 0x10)
    bool bIsValidOnPrimary;                                                           // 0x0058 (size: 0x1)
    bool bIsValidOnShots;                                                             // 0x0059 (size: 0x1)
    bool bCanBeDisabled;                                                              // 0x005A (size: 0x1)

    void ReceiveTeardownForPipelineImpl(class UMoviePipeline* InPipeline);
    void ReceiveSetupForPipelineImpl(class UMoviePipeline* InPipeline);
    FMoviePipelineFormatArgs ReceiveGetFormatArguments(FMoviePipelineFormatArgs& InOutFormatArgs);
    void OnEngineTickBeginFrame();
}; // Size: 0x60

class UMoviePipelineShotConfig : public UMoviePipelineConfigBase
{
}; // Size: 0x78

class UMoviePipelineVideoOutputBase : public UMoviePipelineOutputBase
{
}; // Size: 0x90

class UMoviePipelineViewFamilySetting : public UMoviePipelineSetting
{
}; // Size: 0x48

class UMovieRenderDebugWidget : public UUserWidget
{

    void OnInitializedForPipeline(class UMoviePipeline* ForPipeline);
}; // Size: 0x340

class UMovieRenderGraphEditorSettings : public UDeveloperSettings
{
    FMovieGraphPostRenderSettings PostRenderSettings;                                 // 0x0038 (size: 0xE0)

}; // Size: 0x118

#endif
