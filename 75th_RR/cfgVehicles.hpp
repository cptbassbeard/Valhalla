#include "defines.hpp"

#define 75th_Soldier(CLNAME,DN,UNIF,ITMS,LI,WEP,BP) \
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
	};

class cfgVehicles
{

	class g3roll_mc;
	class 75thRR_Soldier_base_f: g3roll_mc
	{
		author = "Team Valhalla";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		displayName = "75th_RR_Base_Soldier";
		faction="75th_RR";
		backpack="";
		items[] = {IFAK};
		respawnItems[] = {IFAK};
		linkedItems[] = {flb_CryeAVS_Assault01_GEAR_A_300_MCM, ItemCompass, ItemMap, ItemWatch,FLB_PVS31_Tan_02,flb_opscover_peltor_C_03};
		respawnlinkedItems[] = {flb_CryeAVS_Assault01_GEAR_A_300_MCM, ItemCompass, ItemMap, ItemWatch, FLB_PVS31_Tan_02,flb_opscover_peltor_C_03};
		weapons[] = {Ranger_M2010, Ranger_M17, throw, put};
		respawnWeapon[] = {Ranger_M2010, Ranger_M17, throw, put};
	};

	75th_Soldier(75th_RF_MC,"75th Ranger Rifleman MC",g3roll_mc,RF_Items,RF_Linked,RF_WEP,flb_mappack_Standard_mc);

};