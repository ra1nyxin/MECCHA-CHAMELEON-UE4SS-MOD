#ifndef UE4SS_SDK_BPC_TextChatControl_HPP
#define UE4SS_SDK_BPC_TextChatControl_HPP

class UBPC_TextChatControl_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B8 (size: 0x8)
    FBPC_TextChatControl_CReciveText ReciveText;                                      // 0x00C0 (size: 0x10)
    void ReciveText(FString MainString, int32 Index);

    void SendToText(Local)(FString MainString, int32 Index);
    void SendToText(Server)(FString MainString, int32 Index);
    void SendToText(Client)(FString MainString, int32 Index);
    void ExecuteUbergraph_BPC_TextChatControl(int32 EntryPoint);
    void ReciveText__DelegateSignature(FString MainString, int32 Index);
}; // Size: 0xD0

#endif
