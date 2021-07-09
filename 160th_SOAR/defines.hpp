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

//Standard IFAK
#define IFAK mag_4(ACE_quikclot), mag_2(ACE_tourniquet),mag_6(ACE_packingBandage),mag_3(ACE_elasticBandage),(ACE_EarPlugs)

//Items common to everyone
#define CommonLinked ItemMap, ItemCompass, ItemWatch
#define CommonItems ACE_MapTools, IFAK, ACE_microDAGR, ItemcTabHCam,ACE_Flashlight_XL50, mag_2(ACE_Cabletie)

//Rotary Pilot Gear
#define RWP_Linked CommonLinked,ItemcTab,FLB_GPNVG18_Blk_01
#define RWP_Items CommonItems
#define RWP_WEP Ranger_DDMK18, Ranger_Glock19, Throw, Put, ACE_bino_m24
#define RWP_MAG mag_2(SmokeShellGreen),mag_2(SmokeShell), mag_7(rhs_mag_30Rnd_556x45_Mk318_PMAG), mag_3(flb_Glock_17rnd_mag_JHP)



//Macro for 160th Personnel
#define SOAR_SOLDIER(CLNAME,DN,UNIF,VEST,HELM,ITMS,LI,WEP,MAG) \
	class ##CLNAME##: ##UNIF## \
	{ \
		author = "Team Valhalla"; \
		scope = 2; \
		side = 1; \
		scopeCurator = 2; \
		displayName = ##DN##; \
		faction = 160th_SOAR; \
		items[] = {##ITMS##}; \
		respawnItems[] = {##ITMS##}; \
		linkedItems[] = {##VEST##, ##HELM##, ##LI##}; \
		respawnLinkedItems[] = {##VEST##, ##HELM##, ##LI##}; \
		weapons[] = {##WEP##}; \
		respawnWeapons[] = {##WEP##}; \
		magazines[] = {##MAG##}; \
	};