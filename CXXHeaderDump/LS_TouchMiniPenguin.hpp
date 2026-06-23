#ifndef UE4SS_SDK_LS_TouchMiniPenguin_HPP
#define UE4SS_SDK_LS_TouchMiniPenguin_HPP

class ULS_TouchMiniPenguin_DirectorBP_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0048 (size: 0x8)

    FMovieSceneDynamicBindingResolveResult SequenceEvent__ENTRYPOINTLS_TouchMiniPenguin_DirectorBP_3();
    FMovieSceneDynamicBindingResolveResult SequenceEvent__ENTRYPOINTLS_TouchMiniPenguin_DirectorBP_2();
    FMovieSceneDynamicBindingResolveResult SequenceEvent__ENTRYPOINTLS_TouchMiniPenguin_DirectorBP_1();
    void SequenceEvent__ENTRYPOINTLS_TouchMiniPenguin_DirectorBP_0(class ABP_FirstPersonCharacter_Main_C* BP_FirstPersonCharacter);
    void SequenceEvent__ENTRYPOINTLS_TouchMiniPenguin_DirectorBP(class ABP_AI_Base_C* BP_AI_Base);
    FMovieSceneDynamicBindingResolveResult RightItemPositon_DynamicBinding();
    FMovieSceneDynamicBindingResolveResult LeftItemPositon_DynamicBinding();
    FMovieSceneDynamicBindingResolveResult HeadPosition_DynamicBinding();
    void BP_AI_Base_Event(class ABP_AI_Base_C* BP_AI_Base);
    void BP_FirstPersonCharacter_Event(class ABP_FirstPersonCharacter_Main_C* BP_FirstPersonCharacter);
    void ExecuteUbergraph_LS_TouchMiniPenguin_DirectorBP(int32 EntryPoint);
}; // Size: 0x50

#endif
