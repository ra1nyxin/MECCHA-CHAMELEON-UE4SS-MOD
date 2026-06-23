#ifndef UE4SS_SDK_LS_TeleportMovie_HPP
#define UE4SS_SDK_LS_TeleportMovie_HPP

class ULS_TeleportMovie_DirectorBP_C : public ULevelSequenceDirector
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0048 (size: 0x8)

    void SequenceEvent__ENTRYPOINTLS_TeleportMovie_DirectorBP_0(class ABP_FirstPersonCharacter_cLeon_Character_C* BP_FirstPersonCharacter_cLeon_Character);
    FMovieSceneDynamicBindingResolveResult SequenceEvent__ENTRYPOINTLS_TeleportMovie_DirectorBP();
    FMovieSceneDynamicBindingResolveResult BP_FirstPersonCharacter_cLeon_Character_DynamicBinding(int32 PlayerControllerIndex);
    FMovieSceneDynamicBindingResolveResult BP_FirstPersonCharacter_cLeon_Character_DynamicBinding_0(int32 PlayerControllerIndex);
    void BP_FirstPersonCharacter_cLeon_Character_Event(class ABP_FirstPersonCharacter_cLeon_Character_C* BP_FirstPersonCharacter_cLeon_Character);
    void ExecuteUbergraph_LS_TeleportMovie_DirectorBP(int32 EntryPoint);
}; // Size: 0x50

#endif
