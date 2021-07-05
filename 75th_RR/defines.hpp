/// Define Magazine and item Handler Macros///

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

//Standard Ranger IFAK
#define IFAK mag_4(ACE_quikclot), mag_2(ACE_tourniquet),mag_6(ACE_packingBandage),mag_3(ACE_elasticBandage),(ACE_EarPlugs)

//Items common to everyone
#define CommonLinked ItemMap, ItemCompass, ItemWatch
#define CommonItems ACE_MapTools, IFAK, ACE_microDAGR, ItemcTabHCam,ACE_Flashlight_XL50, mag_2(ACE_Cabletie)

//Rifleman Gear
#define RF_Linked CommonLinked,ItemAndroid,FLB_PVS31_Tan_02
#define RF_Items CommonItems
#define RF_WEP Ranger_M4_BLK3, Ranger_Glock19, Throw, Put, ACE_bino_m24
#define RF_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_7(rhs_mag_30Rnd_556x45_Mk318_PMAG), mag_3(flb_Glock_17rnd_mag_JHP)

//Autorifleman Gear
#define AR_Linked CommonLinked,ItemAndroid, FLB_PVS31_Tan_02
#define AR_Items CommonItems
#define AR_WEP Ranger_MK46, Ranger_Glock19, Throw, Put, ACE_bino_m24
#define AR_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_5(rhsusf_100Rnd_556x45_mixed_soft_pouch_coyote), mag_3(flb_Glock_17rnd_mag_JHP)

//Grenadier Gear
#define GR_Linked CommonLinked,ItemAndroid, FLB_PVS31_Tan_02
#define GR_Items CommonItems
#define GR_WEP Ranger_M4_BLK3, rhs_weap_M320, Throw, Put, ACE_bino_m24
#define GR_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_7(rhs_mag_30Rnd_556x45_Mk318_PMAG), mag_3(flb_Glock_17rnd_mag_JHP),mag_8(rhs_mag_M433_HEDP),mag_4(1Rnd_Smoke_Grenade_shell),mag_2(rhs_mag_m713_Red)

//FTL Gear
#define FTL_Linked CommonLinked,ItemAndroid,FLB_PVS31_Tan_02
#define FTL_Items CommonItems,ACE_SpraypaintGreen, ACE_SpraypaintRed
#define FTL_WEP Ranger_DDMK18, Ranger_Glock19, Throw, Put, ACE_Vector
#define FTL_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_7(rhs_mag_30Rnd_556x45_Mk318_PMAG), mag_3(flb_Glock_17rnd_mag_JHP), mag_2(SmokeShellGreen), SmokeShellBlue, mag_2(ACE_Chemlight_HiGreen), mag_2(ACE_Chemlight_HiRed)

//JTAC Gear
#define JT_Linked CommonLinked,ItemcTab,FLB_PVS31_Tan_02
#define JT_Items CommonItems, itc_land_tablet_rover
#define JT_WEP Ranger_DDMK18, Ranger_Glock19, Throw, Put, ACE_bino_m24
#define JT_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_7(rhs_mag_30Rnd_556x45_Mk318_PMAG), mag_3(flb_Glock_17rnd_mag_JHP), mag_3(SmokeShellGreen)

//SL Gear
#define SL_Linked CommonLinked,ItemcTab,FLB_PVS31_Tan_02
#define SL_Items CommonItems
#define SL_WEP Ranger_MK16, Ranger_Glock19, Throw, Put, ACE_Vector
#define SL_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_7(rhs_mag_30Rnd_556x45_Mk318_PMAG), mag_3(flb_Glock_17rnd_mag_JHP), mag_2(SmokeShellGreen), SmokeShellBlue, SmokeShellYellow, SmokeShellPurple

//PL Gear
#define PL_Linked CommonLinked,ItemcTab,FLB_PVS31_Tan_02
#define PL_Items CommonItems
#define PL_WEP Ranger_MK16, Ranger_Glock19, Throw, Put, ACE_Vector
#define PL_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_7(rhs_mag_30Rnd_556x45_Mk318_PMAG), mag_3(flb_Glock_17rnd_mag_JHP), mag_2(SmokeShellGreen), SmokeShellBlue, SmokeShellYellow, SmokeShellPurple

//Platoon Sgt Gear
#define PSG_Linked CommonLinked,ItemcTab,FLB_PVS31_Tan_02
#define PSG_Items CommonItems
#define PSG_WEP Ranger_MK16, Ranger_Glock19, Throw, Put, ACE_Vector
#define PSG_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_7(rhs_mag_30Rnd_556x45_Mk318_PMAG), mag_3(flb_Glock_17rnd_mag_JHP), mag_2(SmokeShellGreen), SmokeShellBlue, SmokeShellYellow, SmokeShellPurple

//Medic Gear
#define MED_Linked CommonLinked,ItemAndroid,FLB_PVS31_Tan_02
#define MED_Items CommonItems
#define MED_WEP Ranger_DDMK18, Ranger_Glock19, Throw, Put, ACE_bino_m24
#define MED_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_7(rhs_mag_30Rnd_556x45_Mk318_PMAG), mag_3(flb_Glock_17rnd_mag_JHP), mag_2(SmokeShellGreen), mag_2(SmokeShellPurple)

//Machinegunner Gear
#define MG_Linked CommonLinked,ItemAndroid, FLB_PVS31_Tan_02
#define MG_Items CommonItems
#define MG_WEP Ranger_MK48, Ranger_Glock19, Throw, Put, ACE_bino_m24
#define MG_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_3(150Rnd_762x51_box_tracer), mag_3(flb_Glock_17rnd_mag_JHP)

//Assistant Machinegunner Gear
#define AMG_Linked CommonLinked,ItemAndroid, FLB_PVS31_Tan_02
#define AMG_Items CommonItems
#define AMG_WEP Ranger_DDMK18, Ranger_Glock19, Throw, Put, ACE_Vector
#define AMG_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_7(rhs_mag_30Rnd_556x45_Mk318_pmag), mag_3(150Rnd_762x51_box_tracer), mag_3(flb_Glock_17rnd_mag_JHP)

//Medium Anti-Tank Gear
#define MAT_Linked CommonLinked,ItemAndroid, FLB_PVS31_Tan_02
#define MAT_Items CommonItems, TF47_Optic_M3MAAWS
#define MAT_WEP Ranger_DDMK18,TF47_M3MAAWS, Ranger_Glock19, Throw, Put, ACE_bino_m24
#define MAT_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_3(150Rnd_762x51_box_tracer), mag_3(flb_Glock_17rnd_mag_JHP)

//Assistant MAT Gear
#define AAT_Linked CommonLinked,ItemAndroid, FLB_PVS31_Tan_02
#define AAT_Items CommonItems
#define AAT_WEP Ranger_DDMK18, Ranger_Glock19, Throw, Put, ACE_Vector
#define AAT_MAG mag_2(ACE_M84),mag_2(rhs_mag_m67),mag_2(SmokeShell), mag_7(rhs_mag_30Rnd_556x45_Mk318_pmag), mag_3(150Rnd_762x51_box_tracer), mag_3(flb_Glock_17rnd_mag_JHP)



#define RANGER_SOLDIER(CLNAME,DN,SUBCAT,UNIF,VEST,HELM,ITMS,LI,WEP,MAG,BP) \
	class ##CLNAME##: ##UNIF## \
	{ \
		author = "Team Valhalla"; \
		scope = 2; \
		side = 1; \
		scopeCurator = 2; \
		displayName = ##DN##; \
		faction = 75th_RR; \
		editorSubcategory = ##SUBCAT##; \
		backpack = ##BP##; \
		items[] = {##ITMS##}; \
		respawnItems[] = {##ITMS##}; \
		linkedItems[] = {##VEST##, ##HELM##, ##LI##}; \
		respawnLinkedItems[] = {##VEST##, ##HELM##, ##LI##}; \
		weapons[] = {##WEP##}; \
		respawnWeapons[] = {##WEP##}; \
		magazines[] = {##MAG##}; \
	};