#ifndef UE4SS_SDK_WBP_FriendList_HPP
#define UE4SS_SDK_WBP_FriendList_HPP

class UWBP_FriendList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0340 (size: 0x8)
    class UWBP_FriendListContents_C* WBP_FriendListContents_7;                        // 0x0348 (size: 0x8)
    class UWBP_FriendListContents_C* WBP_FriendListContents_6;                        // 0x0350 (size: 0x8)
    class UWBP_FriendListContents_C* WBP_FriendListContents_5;                        // 0x0358 (size: 0x8)
    class UWBP_FriendListContents_C* WBP_FriendListContents_4;                        // 0x0360 (size: 0x8)
    class UWBP_FriendListContents_C* WBP_FriendListContents_3;                        // 0x0368 (size: 0x8)
    class UWBP_FriendListContents_C* WBP_FriendListContents_2;                        // 0x0370 (size: 0x8)
    class UWBP_FriendListContents_C* WBP_FriendListContents_1;                        // 0x0378 (size: 0x8)
    class UWBP_FriendListContents_C* WBP_FriendListContents;                          // 0x0380 (size: 0x8)
    class UScrollBox* ScrollBox_44;                                                   // 0x0388 (size: 0x8)

    void OnReadFriendsListComplete_FBCD2806418BE785B5E6FEA7A395A2A7(int32 LocalUserNum, bool bWasSuccessful, FString ListName, FString ErrorStr);
    void OnCallFailed_FBCD2806418BE785B5E6FEA7A395A2A7(int32 LocalUserNum, bool bWasSuccessful, FString ListName, FString ErrorStr);
    void Construct();
    void PushButton(FUniqueNetIdRepl ID);
    void UpdateEvent();
    void ExecuteUbergraph_WBP_FriendList(int32 EntryPoint);
}; // Size: 0x390

#endif
