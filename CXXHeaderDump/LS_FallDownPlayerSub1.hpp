#ifndef UE4SS_SDK_LS_FallDownPlayerSub1_HPP
#define UE4SS_SDK_LS_FallDownPlayerSub1_HPP

class ULS_FallDownPlayerSub1_DirectorBP_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0048 (size: 0x8)

    void SequenceEvent__ENTRYPOINTLS_FallDownPlayerSub1_DirectorBP_2(class ABP_FirstPersonCharacter_Main_C* BP_FirstPersonCharacter);
    FMovieSceneDynamicBindingResolveResult SequenceEvent__ENTRYPOINTLS_FallDownPlayerSub1_DirectorBP_1();
    FMovieSceneDynamicBindingResolveResult SequenceEvent__ENTRYPOINTLS_FallDownPlayerSub1_DirectorBP_0();
    FMovieSceneDynamicBindingResolveResult SequenceEvent__ENTRYPOINTLS_FallDownPlayerSub1_DirectorBP();
    FMovieSceneDynamicBindingResolveResult CameraActor_DynamicBinding();
    FMovieSceneDynamicBindingResolveResult BP_FirstPersonCharacter_DynamicBinding();
    FMovieSceneDynamicBindingResolveResult RightPos_DynamicBinding_0();
    FMovieSceneDynamicBindingResolveResult RightPos_DynamicBinding();
    FMovieSceneDynamicBindingResolveResult LeftPos_DynamicBinding();
    FMovieSceneDynamicBindingResolveResult HeadPosition_DynamicBinding();
    FMovieSceneDynamicBindingResolveResult BP_FirstPersonCharacter_DynamicBinding_0(int32 PlayerControllerIndex);
    void BP_FirstPersonCharacter_Event(class ABP_FirstPersonCharacter_Main_C* BP_FirstPersonCharacter);
    void ExecuteUbergraph_LS_FallDownPlayerSub1_DirectorBP(int32 EntryPoint);
}; // Size: 0x50

#endif
