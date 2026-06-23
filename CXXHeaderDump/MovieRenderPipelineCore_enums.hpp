    None = 0,
    Ocio = 1,
    ShowFlags = 2,
    ViewMode = 4,
    Visibility = 8,
    EditorOnlyActors = 16,
    EMovieGraphQuickRenderViewportLookFlags_MAX = 32,
};

enum class EMovieGraphAspectRatioAdaptBehavior {
    Disabled = 0,
    Automatic = 1,
    ScaleToWidth = 2,
    ScaleToHeight = 3,
    EMovieGraphAspectRatioAdaptBehavior_MAX = 4,
};

enum class EMovieGraphBranchRestriction {
    Any = 0,
    Globals = 1,
    RenderLayer = 2,
    EMovieGraphBranchRestriction_MAX = 3,
};

enum class EMovieGraphConditionGroupOpType {
    Add = 0,
    Subtract = 1,
    And = 2,
    EMovieGraphConditionGroupOpType_MAX = 3,
};

enum class EMovieGraphConditionGroupQueryOpType {
    Add = 0,
    Subtract = 1,
    And = 2,
    EMovieGraphConditionGroupQueryOpType_MAX = 3,
};

enum class EMovieGraphContainerType {
    None = 0,
    Array = 1,
    Set = 2,
    Count = 3,
    EMovieGraphContainerType_MAX = 4,
};

enum class EMovieGraphFrameRangeNotation {
    HashWithStartEndFrame = 0,
    Hash = 1,
    DollarF = 2,
    StartFrame = 3,
    EMovieGraphFrameRangeNotation_MAX = 4,
};

enum class EMovieGraphImageSequencePlaybackRange {
    FirstFrameOnly = 0,
    FullRange = 1,
    EMovieGraphImageSequencePlaybackRange_MAX = 2,
};

enum class EMovieGraphJobPlaybackRange {
    FirstJobOnly = 0,
    AllJobs = 1,
    EMovieGraphJobPlaybackRange_MAX = 2,
};

enum class EMovieGraphOutputTypePlayback {
    UsePriorityOrder = 0,
    PlayAllOutputTypes = 1,
    EMovieGraphOutputTypePlayback_MAX = 2,
};

enum class EMovieGraphPinQueryRequirement {
    BuiltIn = 0,
    Dynamic = 1,
    BuiltInOrDynamic = 2,
    EMovieGraphPinQueryRequirement_MAX = 3,
};

enum class EMovieGraphPlaybackMethod {
    OperatingSystem = 0,
    CustomViewer = 1,
    EMovieGraphPlaybackMethod_MAX = 2,
};

enum class EMovieGraphQuickRenderButtonMode {
    NormalMovieRenderQueue = 0,
    QuickRender = 1,
    EMovieGraphQuickRenderButtonMode_MAX = 2,
};

enum class EMovieGraphQuickRenderFrameRangeType {
    PlaybackRange = 0,
    SelectionRange = 1,
    Custom = 2,
    EMovieGraphQuickRenderFrameRangeType_MAX = 3,
};

enum class EMovieGraphQuickRenderMode {
    CurrentSequence = 0,
    UseViewportCameraInSequence = 1,
    CurrentViewport = 2,
    SelectedCameras = 3,
    EMovieGraphQuickRenderMode_MAX = 4,
};

enum class EMovieGraphQuickRenderPostRenderActionType {
    DoNothing = 0,
    PlayRenderOutput = 1,
    OpenOutputDirectory = 2,
    EMovieGraphQuickRenderPostRenderActionType_MAX = 3,
};

enum class EMovieGraphRenderLayerPlaybackRange {
    FirstRenderLayerOnly = 0,
    AllRenderLayers = 1,
    EMovieGraphRenderLayerPlaybackRange_MAX = 2,
};

enum class EMovieGraphScalabilityQualityLevel {
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    Cinematic = 4,
    EMovieGraphScalabilityQualityLevel_MAX = 5,
};

enum class EMovieGraphSequenceRangeType {
    SequenceDefault = 0,
    Custom = 1,
    EMovieGraphSequenceRangeType_MAX = 2,
};

enum class EMovieGraphValueType {
    None = 0,
    Bool = 1,
    Byte = 2,
    Int32 = 3,
    Int64 = 4,
    Float = 5,
    Double = 6,
    Name = 7,
    String = 8,
    Text = 9,
    Enum = 10,
    Struct = 11,
    Object = 12,
    SoftObject = 13,
    Class = 14,
    SoftClass = 15,
    UInt32 = 16,
    UInt64 = 17,
    Count = 18,
    EMovieGraphValueType_MAX = 19,
};

enum class EMoviePipelineEncodeQuality {
    Low = 0,
    Medium = 1,
    High = 2,
    Epic = 3,
    EMoviePipelineEncodeQuality_MAX = 4,
};

enum class EMoviePipelinePanoramicFilterType {
    Bilinear = 0,
    Catmull = 1,
    Mitchell = 2,
    EMoviePipelinePanoramicFilterType_MAX = 3,
};

enum class EMoviePipelineShutterTiming {
    FrameOpen = 0,
    FrameCenter = 1,
    FrameClose = 2,
    EMoviePipelineShutterTiming_MAX = 3,
};

enum class EMoviePipelineTextureStreamingMethod {
    None = 0,
    Disabled = 1,
    FullyLoad = 2,
    EMoviePipelineTextureStreamingMethod_MAX = 3,
};

enum class EMovieRenderPipelineState {
    Uninitialized = 0,
    ProducingFrames = 1,
    Finalize = 2,
    Export = 3,
    Finished = 4,
    EMovieRenderPipelineState_MAX = 5,
};

enum class EMovieRenderShotState {
    Uninitialized = 0,
    WarmingUp = 1,
    MotionBlur = 2,
    Rendering = 3,
    CoolingDown = 4,
    Finished = 5,
    EMovieRenderShotState_MAX = 6,
};

enum class FCPXMLExportDataSource {
    OutputMetadata = 0,
    SequenceData = 1,
    FCPXMLExportDataSource_MAX = 2,
};

