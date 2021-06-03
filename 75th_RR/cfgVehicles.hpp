#include "defines.hpp"
class cfgVehicles
{

	class B_SOLDIER_SL_F;
	class 75thRR_Soldier_base_f: B_SOLDIER_SL_F
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
		linkedItems[] = {flb_CryeAVS_Assault01_GEAR_A_300_MCM, ItemCompass, ItemMap, ItemWatch, ACE_MapTools};
		respawnlinkedItems[] = {flb_CryeAVS_Assault01_GEAR_A_300_MCM, ItemCompass, ItemMap, ItemWatch, ACE_MapTools};
		weapons[] = {flb_M4A1_URGI_B5_13_FDE, throw, put};
		respawnWeapon[] = {rhs_weap_mk18, throw, put};
	};
};