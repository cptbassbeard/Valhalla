#include "defines.hpp"
class cfgVehicles
{

	class CUP_B_BAF_Soldier_AT_WDL;
	class 75th_RR_Soldier_base_f: CUP_B_BAF_Soldier_AT_WDL
	{
		author = "Team Valhalla";
		scope = 2;
		side = 1;
		scopeCurator = 2;
		scopeArsenal = 2;
		displayName = "75th RR - Base Soldier";
		modelSides[]={0,1,2,3};
		faction="75th_RR";
		backpack="";
		items[] = {};
		respawnItems[] = {};
		linkedItems[] = {flb_CryeAVS_Assault01_GEAR_A_300_MCM, ItemCompass, ItemMap, ItemWatch, ACE_MapTools};
		respawnlinkedItems[] = {flb_CryeAVS_Assault01_GEAR_A_300_MCM, ItemCompass, ItemMap, ItemWatch, ACE_MapTools};
		weapons[] = {flb_M4A1_URGI_B5_13_FDE, throw, put};
		respawnWeapon[] = {rhs_weap_mk18, throw, put};
	};
};