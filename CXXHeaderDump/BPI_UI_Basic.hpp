#ifndef UE4SS_SDK_BPI_UI_Basic_HPP
#define UE4SS_SDK_BPI_UI_Basic_HPP

class IBPI_UI_Basic_C : public IInterface
{

    void PlayAnimationMessage(bool IsForward, int32 Index);
    void SetColor(FLinearColor Color, int32 Index);
    void SetText(FText Text, int32 Index);
}; // Size: 0x28

#endif
