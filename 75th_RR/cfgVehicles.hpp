#include "defines.hpp"
class cfgVehicles
{

	class g3roll_mc;
	class 75thRR_Soldier_base_f: g3roll_mc
	{
		author = "Team Valhalla";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "75th_RR_Base_Soldier";
		faction="75th_RR";
		backpack="";
		items[] = {IFAK};
		respawnItems[] = {IFAK};
		linkedItems[] = {flb_CryeAVS_Assault01_GEAR_A_300_MCM, ItemCompass, ItemMap, ItemWatch, ACE_MapTools,FLB_PVS31_Tan_02,flb_opscover_peltor_C_03};
		respawnlinkedItems[] = {flb_CryeAVS_Assault01_GEAR_A_300_MCM, ItemCompass, ItemMap, ItemWatch, ACE_MapTools,FLB_PVS31_Tan_02,flb_opscover_peltor_C_03};
		weapons[] = {Ranger_M4_BLK3, Ranger_Glock19, throw, put};
		respawnWeapon[] = {Ranger_M4_BLK3, Ranger_Glock19, throw, put};
	};
};