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
#define IFAK mag_7(ACE_quikclot), mag_2(ACE_tourniquet),mag_5(ACE_packingBandage),mag_3(ACE_elasticBandage),(ACE_EarPlugs)
#define CommonLinked ItemMap, ItemCompass, ItemWatch
#define CommonItems ACE_MapTools, IFAK, ACE_microDAGR, ItemcTabHCam

#define RF_Linked CommonLinked, flb_CryeAVS_Assault01_GEAR_A_300_MCM,FLB_PVS31_Tan_02,flb_opscover_peltor_C_03
#define RF_Items CommonItems, ItemAndroid
#define RF_WEP Ranger_M4_BLK3, Ranger_M17, Throw, Put, ACE_Vector
#define RF_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_7(rhs_mag_30Rnd_556x45_Mk318_PMAG)

#define RANGER_SOLDIER(CLNAME,DN,UNIF,ITMS,LI,WEP,MAG,BP) \
	class ##UNIF##; \
	class ##CLNAME##: ##UNIF## \
	{ \
		author = "Team Valhalla"; \
		scope = 2; \
		side = 1; \
		scopeCurator = 2; \
		displayName = ##DN##; \
		faction = "75th_RR"; \
		backpack = ##BP##; \
		items[] = {##ITMS##}; \
		respawnItems[] = {##ITMS##}; \
		linkedItems[] = {##LI##}; \
		respawnLinkedItems[] = {##LI##}; \
		weapons[] = {##WEP##}; \
		respawnWeapons[] = {##WEP##}; \
		magazines[] = {##MAG##}; \
	};