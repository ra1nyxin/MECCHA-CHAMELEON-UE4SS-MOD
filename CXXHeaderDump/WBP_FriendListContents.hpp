#ifndef UE4SS_SDK_WBP_FriendListContents_HPP
#define UE4SS_SDK_WBP_FriendListContents_HPP

class UWBP_FriendListContents_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UTextBlock* UserName;                                                       // 0x0348 (size: 0x8)
    class ULongTapButton_OnAnimation_C* LongTapButton_OnAnimation;                    // 0x0350 (size: 0x8)
    FUniqueNetIdRepl FriendNetId;                                                     // 0x0358 (size: 0x30)
    FWBP_FriendListContents_CPushButton PushButton;                                   // 0x0388 (size: 0x10)
    void PushButton(FUniqueNetIdRepl ID);
    bool SessionState;                                                                // 0x0398 (size: 0x1)
    FString playerName;                                                               // 0x03A0 (size: 0x10)

    void Construct();
    void BndEvt__WBP_FriendListContents_LongTapButton_OnAnimation_K2Node_ComponentBoundEvent_0_PushEnd__DelegateSignature();
    void ExecuteUbergraph_WBP_FriendListContents(int32 EntryPoint);
    void PushButton__DelegateSignature(FUniqueNetIdRepl ID);
}; // Size: 0x3B0

#endif
