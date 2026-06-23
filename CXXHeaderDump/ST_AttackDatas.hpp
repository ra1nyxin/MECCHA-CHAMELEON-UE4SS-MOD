#ifndef UE4SS_SDK_ST_AttackDatas_HPP
#define UE4SS_SDK_ST_AttackDatas_HPP

struct FST_AttackDatas
{
    TEnumAsByte<AttackType::Type> AttackType_16_315E7D10400F9069F7E78D83FDD11257;     // 0x0000 (size: 0x1)
    double Weight_9_4546B1EE4A549DAE8A3B15A9F322FDD5;                                 // 0x0008 (size: 0x8)
    TArray<class UAnimMontage*> Montages_5_89881CC04A3289C5961113A75D75D718;          // 0x0010 (size: 0x10)
    double AcceptRadiusMultiply_11_17A911614128932D45B3D4BDD8FFE687;                  // 0x0020 (size: 0x8)
    double GiveUpTime_13_D5086FDE4632A1215486C19E61C68B59;                            // 0x0028 (size: 0x8)
    class UAnimMontage* PreMontage_19_58929AF543DDB84F052D13AE4A562D52;               // 0x0030 (size: 0x8)
    double PreMontagePBB_22_77ED1FE94BD7444BBD5EC7B0BFA72839;                         // 0x0038 (size: 0x8)
    class UAnimMontage* AfterMontage_25_552019E14F43430F821B249A266B51DB;             // 0x0040 (size: 0x8)
    double AfterMontagePBB_28_752B06914A4254DDCA319CB80E93D092;                       // 0x0048 (size: 0x8)

}; // Size: 0x50

#endif
