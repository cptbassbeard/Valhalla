/* TASK FORCE 121 VALHALLA MOD CLASS DEFINITIONS*/

class CfgPatches
{
	class 121st_MSV
	{
		units[]=
		{
			"121MSV_Soldier_base_f", "121MSV_Platoon_Leader", "121MSV_Platoon_Medic", "121MSV_Section_Commander", "121MSV_Assistant_Grenadier", "121MSV_Machine_Gunner", "121MSV_Assistant_Machine_Gunner", "121MSV_Rifleman", "121MSV_Senior_Rifleman", "121MSV_Grenadier", "121MSV_VehicleCrew", "121MSV_BMP2D"
		};
		weapons[]={
			"blu_CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads"
		};
		requiredVersion=0.1;
		requiredAddons[]={"A3_Characters_F"};
	};
};
class CfgFactionClasses
{
	class 121st_MSV
	{
		displayName="121st Motostrelki Division";
		priority=5;
		side=1;
		icon= "";
	};
};