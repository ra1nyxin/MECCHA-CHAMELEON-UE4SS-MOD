#ifndef UE4SS_SDK_BPI_Scan_Key_HPP
#define UE4SS_SDK_BPI_Scan_Key_HPP

class IBPI_Scan_Key_C : public IInterface
{

    void Get Scan Info(bool& IsActive, FName& ID, FVector& RayPosition);
}; // Size: 0x28

#endif
