/// Define Magazine Handler Macros///

#define mag_2(a) a, a
#define mag_3(a) a, a, a
#define mag_4(a) a, a, a, a
#define mag_5(a) a, a, a, a, a
#define mag_6(a) a, a, a, a, a, a
#define mag_7(a) a, a, a, a, a, a, a
#define mag_8(a) a, a, a, a, a, a, a, a
#define mag_9(a) a, a, a, a, a, a, a, a, a
#define mag_10(a) a, a, a, a, a, a, a, a, a, a
#define mag_11(a) a, a, a, a, a, a, a, a, a, a, a
#define mag_12(a) a, a, a, a, a, a, a, a, a, a, a, a
#define mag_xx(a,b) class _xx_##a {magazine = a; count = b;}
#define weap_xx(a,b) class _xx_##a {weapon = a; count = b;}
#define item_xx(a,b) class _xx_##a {name = a; count = b;}
#define IFAK mag_7(ACE_quikclot), mag_2(ACE_tourniquet),mag_5(ACE_packingBandage),mag_3(ACE_elasticBandage),mag_2(ACE_EarPlugs)
#define CommonStuff ItemMap, ItemCompass, ItemWatch, ItemRadio, rhs_1PN138, ACE_MapTools 
#define AK74M rhs_weap_ak74m
#define AK74M_MAG mag_8(rhs_30Rnd_545x39_7N10_AK)
#define AKGP25 rhs_weap_ak74m_gp25
#define AKGP25_MAG mag_8(rhs_30Rnd_545x39_7N10_AK), mag_6(rhs_VOG25), mag_4(rhs_grd40_white)
#define AKS rhs_weap_aks74u
#define AKS_MAG mag_8(rhs_30Rnd_545x39_7N10_plum_AK)
#define nades mag_2(rhs_mag_rdg2_white), mag_2(rhs_mag_rgd5)
#define RPG rhs_weap_rpg7
#define PKP rhs_weap_pkp
#define PKP_MAG mag_3(rhs_100Rnd_762x54mmR)