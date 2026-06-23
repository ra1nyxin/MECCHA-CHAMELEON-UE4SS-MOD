#ifndef UE4SS_SDK_Touch_bigpen_HPP
#define UE4SS_SDK_Touch_bigpen_HPP

class UTouch_bigpen_DirectorBP_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0048 (size: 0x8)

    void SequenceEvent__ENTRYPOINTTouch_bigpen_DirectorBP_2(class ABP_FirstPersonCharacter_Main_C* BP_FirstPersonCharacter);
    FMovieSceneDynamicBindingResolveResult SequenceEvent__ENTRYPOINTTouch_bigpen_DirectorBP_1();
    FMovieSceneDynamicBindingResolveResult SequenceEvent__ENTRYPOINTTouch_bigpen_DirectorBP_0();
    FMovieSceneDynamicBindingResolveResult SequenceEvent__ENTRYPOINTTouch_bigpen_DirectorBP();
    FMovieSceneDynamicBindingResolveResult RightPos_DynamicBinding();
    FMovieSceneDynamicBindingResolveResult LeftPos_DynamicBinding();
    FMovieSceneDynamicBindingResolveResult HeadPosition_DynamicBinding();
    void BP_FirstPersonCharacter_Event(class ABP_FirstPersonCharacter_Main_C* BP_FirstPersonCharacter);
    void ExecuteUbergraph_Touch_bigpen_DirectorBP(int32 EntryPoint);
}; // Size: 0x50

#endif
