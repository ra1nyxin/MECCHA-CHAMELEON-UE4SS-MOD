#ifndef UE4SS_SDK_CR_NewPenguin_HPP
#define UE4SS_SDK_CR_NewPenguin_HPP

class UCR_NewPenguin_C : public UControlRig
{
    bool Use IK;                                                                      // 0x0B70 (size: 0x1)
    double Foot_L_Origine;                                                            // 0x0B78 (size: 0x8)
    double Foot_R_Origine;                                                            // 0x0B80 (size: 0x8)
    double Foot_L_Offset;                                                             // 0x0B88 (size: 0x8)
    double Foot_R_Offset;                                                             // 0x0B90 (size: 0x8)
    double Peivis_Offset;                                                             // 0x0B98 (size: 0x8)

}; // Size: 0xBA0

#endif
