#ifndef UE4SS_SDK_MovieRenderPipelineSettings_HPP
#define UE4SS_SDK_MovieRenderPipelineSettings_HPP

class UMoviePipelineBurnInSetting : public UMoviePipelineRenderPass
{
    FSoftClassPath BurnInClass;                                                       // 0x0048 (size: 0x20)
    bool bCompositeOntoFinalImage;                                                    // 0x0068 (size: 0x1)
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x0098 (size: 0x8)
    TArray<class UMoviePipelineBurnInWidget*> BurnInWidgetInstances;                  // 0x00A0 (size: 0x10)

}; // Size: 0xB0

class UMoviePipelineBurnInWidget : public UUserWidget
{

    void OnOutputFrameStarted(class UMoviePipeline* ForPipeline);
}; // Size: 0x340

class UMoviePipelineConsoleVariableSetting : public UMoviePipelineSetting
{
    TArray<TScriptInterface<IMovieSceneConsoleVariableTrackInterface>> ConsoleVariablePresets; // 0x0048 (size: 0x10)
    TArray<FString> StartConsoleCommands;                                             // 0x0058 (size: 0x10)
    TArray<FString> EndConsoleCommands;                                               // 0x0068 (size: 0x10)
    TArray<FMoviePipelineConsoleVariableEntry> CVars;                                 // 0x0078 (size: 0x10)

    bool UpdateConsoleVariableEnableState(FString Name, const bool bIsEnabled);
    bool RemoveConsoleVariable(FString Name, const bool bRemoveAllInstances);
    TArray<FMoviePipelineConsoleVariableEntry> GetConsoleVariables();
    bool AddOrUpdateConsoleVariable(FString Name, const float Value);
    bool AddConsoleVariable(FString Name, const float Value);
}; // Size: 0xA8

class UMoviePipelineWidgetRenderer : public UMoviePipelineRenderPass
{
    bool bCompositeOntoFinalImage;                                                    // 0x0048 (size: 0x1)
    class UTextureRenderTarget2D* RenderTarget;                                       // 0x0060 (size: 0x8)

}; // Size: 0x68

#endif
