/// Base 121 MSV Units Define ///
#include "defines.hpp"
class cfgVehicles
{
	class CUP_O_RUS_Patrol_bag_summer; //declare backpack for use as inheritance
	class SUMMER_MEDIC_BAG: CUP_O_RUS_Patrol_bag_Summer // defines medical bag
	{
		scope = 1;
		class TransportItems
		{
			item_xx(ACE_elasticBandage, 20);
			item_xx(ACE_packingBandage, 50);
			item_xx(ACE_quikclot, 20);
			item_xx(ACE_epinephrine, 10);
			item_xx(ACE_morphine, 10);
			item_xx(ACE_SalineIV, 1);
			item_xx(ACE_salineIV_500, 6);
			item_xx(ACE_tourniquet, 4);
			item_xx(ACE_surgicalKit, 1);
			item_xx(ACE_Splint, 4);
		};
	};
	class CUP_B_RPGPack_Khaki;
	class SUMMER_RPG_BAG: CUP_B_RPGPack_Khaki //defines Grenadier Bag
	{
		scope = 1;
		class TransportItems
		{
			item_xx(rhs_rpg7_OG7V_mag, 2);
			item_xx(rhs_rpg7_PG7VL_mag, 1);
		};
	};
	class CUP_O_RUS_Patrol_bag_Summer_Shovel;
	class SUMMER_PKPMAG_BAG: CUP_O_RUS_Patrol_bag_Summer_Shovel
	{
		scope = 1;
		class TransportItems
		{
			item_xx(rhs_100Rnd_762x54mmR, 3);
			item_xx(ACE_EntrenchingTool, 1);
		};
	};
	class SUMMER_RIFLEMAN_BAG: CUP_O_RUS_Patrol_bag_Summer // defines medical bag
	{
		scope = 1;
		class TransportItems
		{
			item_xx(ACE_elasticBandage, 20);
			item_xx(ACE_packingBandage, 50);
			item_xx(ACE_quikclot, 20);
			item_xx(ACE_epinephrine, 10);
			item_xx(ACE_morphine, 10);
			item_xx(ACE_SalineIV, 1);
			item_xx(ACE_salineIV_500, 6);
			item_xx(ACE_tourniquet, 4);
			item_xx(ACE_Splint, 4);
		};
	};

	class CUP_O_RU_Soldier_M_EMR_V2;					// For inheritance to work, the base class has to be defined.
	class 121MSV_Soldier_base_f: CUP_O_RU_Soldier_M_EMR_V2	// Define of a new class, which parameters are inherited from CUP_O_RU_Soldier_M_EMR_V2, with exception of those defined below.
	{
		author = "Team Valhalla";			// The name of the author of the asset, which is displayed in the editor.
		scope = 1;							// 2 = class is available in the editor; 1 = class is unavailable in the editor, but can be accessed via a macro; 0 = class is unavailable (and used for inheritance only).
		side = 1;
		scopeCurator = 2;					// 2 = class is available in Zeus; 0 = class is unavailable in Zeus.
		scopeArsenal = 2;					// 2 = class is available in the Virtual Arsenal; 0 = class is unavailable in the Virtual Arsenal.
		displayName = "121MSV_Base";		// The name of the soldier, which is displayed in the editor.
		modelSides[]={0,1,2,3};
		faction="121st_MSV";		// The name of the faction displayed in editor
		uniformClass = "blu_CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads";
		backpack = "";		// Which backpack the character is wearing.
		weapons[] = {AK74M, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AK74M, Throw, Put};		// Which weapons the character respawns with.
		Items[] = {IFAK};				// Which items the character has.
		RespawnItems[] = {IFAK};			// Which items the character respawns with.
		magazines[] = {AK74M_MAG, nades};				// What ammunition the character has.
		respawnMagazines[] = {AK74M_MAG, nades};		// What ammunition the character respawns with.
		linkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff};				// Which items the character has.
		respawnLinkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff};		// Which items the character respawns with.
	};

	class 121MSV_Platoon_Leader: 121MSV_Soldier_base_f
	{
		scope = 2;										//makes unit visible in editor and curator
		displayName = "Platoon Leader";					//name in editor
		backpack = "CUP_O_RUS_Patrol_bag_Summer";		// Which backpack the character is wearing.
		weapons[] = {AK74M, Throw, Put, Rangefinder};				// Which weapons the character has.
		respawnWeapons[] = {AK74M, Throw, Put, Rangefinder};		// Which weapons the character respawns with.
		Items[] = {IFAK,ACE_Flashlight_MX991, ACRE_PRC148,rhs_acc_1p78,ACRE_PRC117F};				// Which items the character has.
		RespawnItems[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p78,ACRE_PRC117F};			// Which items the character respawns with.
		magazines[] = {AK74M_MAG, nades};				// What ammunition the character has.
		respawnMagazines[] = {AK74M_MAG, nades};		// What ammunition the character respawns with.
		linkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff, ItemMicroDAGR};				// Which items the character has.
		respawnLinkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff,ItemMicroDAGR};		// Which items the character respawns with.
	};
	class 121MSV_Platoon_Medic: 121MSV_Soldier_base_f
	{
		scope = 2;
		displayName = "Platoon Medic";
		backpack = "SUMMER_MEDIC_BAG";		// Which backpack the character is wearing.
		weapons[] = {AKS, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AKS, Throw, Put};		// Which weapons the character respawns with.
		Items[] = {IFAK,ACE_Flashlight_MX991};				// Which items the character has.
		RespawnItems[] = {IFAK,ACE_Flashlight_MX991};			// Which items the character respawns with.
		magazines[] = {AKS_MAG, nades, mag_2(rhs_mag_rdg2_white)};				// What ammunition the character has.
		respawnMagazines[] = {AKS_MAG, nades, mag_2(rhs_mag_rdg2_white)};		// What ammunition the character respawns with.
		linkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff};				// Which items the character has.
		respawnLinkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff};		// Which items the character respawns with.
	};
	class 121MSV_Section_Commander: 121MSV_Soldier_base_f
	{
		scope = 2;
		displayName = "Section Commander";
		weapons[] = {AK74M, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AK74M, Throw, Put};		// Which weapons the character respawns with.
		Items[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p78,ACRE_PRC148};				// Which items the character has.
		RespawnItems[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p78,ACRE_PRC148};			// Which items the character respawns with.
		magazines[] = {AK74M_MAG, nades, mag_2(rhs_mag_rdg2_white)};				// What ammunition the character has.
		respawnMagazines[] = {AK74M_MAG, nades, mag_2(rhs_mag_rdg2_white)};		// What ammunition the character respawns with.
		linkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff};				// Which items the character has.
		respawnLinkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff};		// Which items the character respawns with.
	};
	class 121MSV_Grenadier: 121MSV_Soldier_base_f
	{
		scope = 2;
		displayName = "Grenadier";
		backpack = "SUMMER_RPG_BAG";
		weapons[] = {AK74M, RPG, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AK74M, RPG, Throw, Put};		// Which weapons the character respawns with.
		Items[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p63,rhs_acc_pgo7v3};				// Which items the character has.
		RespawnItems[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p63,rhs_acc_pgo7v3};			// Which items the character respawns with.
		magazines[] = {AK74M_MAG, nades};				// What ammunition the character has.
		respawnMagazines[] = {AK74M_MAG, nades)};		// What ammunition the character respawns with.
		linkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff};				// Which items the character has.
		respawnLinkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff};		// Which items the character respawns with.
	};
	class 121MSV_Assistant_Grenadier: 121MSV_Soldier_base_f
	{
		scope = 2;
		displayName = "Assistant Grenadier";
		backpack = "SUMMER_RPG_BAG";
		weapons[] = {AK74M, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AK74M, Throw, Put};		// Which weapons the character respawns with.
		Items[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p63,rhs_acc_pgo7v3};				// Which items the character has.
		RespawnItems[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p63,rhs_acc_pgo7v3};			// Which items the character respawns with.
		magazines[] = {AK74M_MAG, nades};				// What ammunition the character has.
		respawnMagazines[] = {AK74M_MAG, nades)};		// What ammunition the character respawns with.
		linkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff, ACE_EntrenchingTool};				// Which items the character has.
		respawnLinkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff, ACE_EntrenchingTool};		// Which items the character respawns with.
	};
	class 121MSV_Machine_Gunner: 121MSV_Soldier_base_f
	{
		scope = 2;
		displayName = "Machine Gunner";
		weapons[] = {PKP, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {PKP, Throw, Put};		// Which weapons the character respawns with.
		Items[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p78};				// Which items the character has.
		RespawnItems[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p78};			// Which items the character respawns with.
		magazines[] = {PKP_MAG, nades};				// What ammunition the character has.
		respawnMagazines[] = {PKP_MAG, nades)};		// What ammunition the character respawns with.
		linkedItems[] = {CUP_Vest_RUS_6B45_Sh117_PKP, CUP_H_RUS_6B47_v2_Summer, CommonStuff};				// Which items the character has.
		respawnLinkedItems[] = {CUP_Vest_RUS_6B45_Sh117_PKP, CUP_H_RUS_6B47_v2_Summer, CommonStuff};		// Which items the character respawns with.
	};
	class 121MSV_Assistant_Machine_Gunner: 121MSV_Soldier_base_f
	{
		scope = 2;
		displayName = "Assistant Machine Gunner";
		backpack = "SUMMER_PKPMAG_BAG";
		weapons[] = {AK74M, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AK74M, Throw, Put};		// Which weapons the character respawns with.
		Items[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p63};				// Which items the character has.
		RespawnItems[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p63};			// Which items the character respawns with.
		magazines[] = {AK74M_MAG, nades};				// What ammunition the character has.
		respawnMagazines[] = {AK74M_MAG, nades)};		// What ammunition the character respawns with.
		linkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff};				// Which items the character has.
		respawnLinkedItems[] = {CUP_Vest_RUS_6B45_Sh117, CUP_H_RUS_6B47_v2_Summer, CommonStuff};		// Which items the character respawns with.
	};
	class 121MSV_Senior_Rifleman: 121MSV_Soldier_base_f
	{
		scope = 2;
		displayName = "Senior Rifleman";
		weapons[] = {AKGP25, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AKGP25, Throw, Put};		// Which weapons the character respawns with.
		Items[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p78};				// Which items the character has.
		RespawnItems[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p78};			// Which items the character respawns with.
		magazines[] = {AKGP25_MAG, nades};				// What ammunition the character has.
		respawnMagazines[] = {AKGP25_MAG, nades};		// What ammunition the character respawns with.
		linkedItems[] = {CUP_Vest_RUS_6B45_Sh117_VOG, CUP_H_RUS_6B47_v2_Summer, CommonStuff};				// Which items the character has.
		respawnLinkedItems[] = {CUP_Vest_RUS_6B45_Sh117_VOG, CUP_H_RUS_6B47_v2_Summer, CommonStuff};		// Which items the character respawns with.
	};
	class 121MSV_Rifleman: 121MSV_Soldier_base_f
	{
		scope = 2;
		displayName = "Rifleman";
		backpack = "SUMMER_RIFLEMAN_BAG";
		weapons[] = {AKGP25, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AKGP25, Throw, Put};		// Which weapons the character respawns with.
		Items[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p63};				// Which items the character has.
		RespawnItems[] = {IFAK,ACE_Flashlight_MX991,rhs_acc_1p63};			// Which items the character respawns with.
		magazines[] = {AKGP25_MAG, nades};				// What ammunition the character has.
		respawnMagazines[] = {AKGP25_MAG, nades};		// What ammunition the character respawns with.
		linkedItems[] = {CUP_Vest_RUS_6B45_Sh117_VOG, CUP_H_RUS_6B47_v2_Summer, CommonStuff};				// Which items the character has.
		respawnLinkedItems[] = {CUP_Vest_RUS_6B45_Sh117_VOG, CUP_H_RUS_6B47_v2_Summer, CommonStuff};		// Which items the character respawns with.
	};
	class 121MSV_VehicleCrew: 121MSV_Soldier_base_f
	{
		scope = 2;
		displayName = "Vehicle Crewman";
		weapons[] = {AKS, Throw, Put};				// Which weapons the character has.
		respawnWeapons[] = {AKS, Throw, Put};		// Which weapons the character respawns with.
		Items[] = {IFAK,ACE_Flashlight_MX991};				// Which items the character has.
		RespawnItems[] = {IFAK,ACE_Flashlight_MX991};			// Which items the character respawns with.
		magazines[] = {AKS_MAG, nades};				// What ammunition the character has.
		respawnMagazines[] = {AKS_MAG, nades};		// What ammunition the character respawns with.
		linkedItems[] = {CUP_V_RUS_6B45_1, rhs_tsh4, CommonStuff};				// Which items the character has.
		respawnLinkedItems[] = {CUP_V_RUS_6B45_1, rhs_tsh4, CommonStuff};		// Which items the character respawns with.
	};
	class rhs_bmp2d_msv;
	class 121MSV_BMP2D: rhs_bmp2d_msv
	{
		scope = 2;
		displayName = "121st MSV BMP-2D";
		faction = "121st_MSV";
		author = "Team Valhalla";
		vehicleClass = "Ground";
		side = 1;
		crew = "121MSV_VehicleCrew";
		class Library
		{
			libTextDesc = "121st Motostrelki Division BMP-2D";
		};
		class TransportMagazines
		{
			mag_xx(rhs_30Rnd_545x39_7N10_AK, 50);
			mag_xx(rhs_100Rnd_762x54mmR, 10);
			mag_xx(rhs_30Rnd_545x39_7N10_plum_AK, 10);
			mag_xx(rhs_rpg7_OG7V_mag, 6);
			mag_xx(rhs_rpg7_PG7VL_mag, 4);
			mag_xx(rhs_VOG25, 20);
			mag_xx(rhs_mag_rgd5, 10);
			mag_xx(rhs_mag_rdg2_white, 10);
			mag_xx(rhs_grd40_white, 10);
		};
		class TransportItems
		{
			item_xx(ACE_elasticBandage, 40);
			item_xx(ACE_packingBandage, 100);
			item_xx(ACE_quikclot, 40);
			item_xx(ACE_epinephrine, 20);
			item_xx(ACE_morphine, 20);
			item_xx(ACE_SalineIV, 4);
			item_xx(ACE_salineIV_500, 12);
			item_xx(ACE_tourniquet, 8);
			item_xx(ACE_Splint, 8);
			item_xx(Toolkit, 2);
			item_xx(ACE_EntrenchingTool, 2);
			item_xx(ACE_Track, 2);
		};
		class TransportWeapons{};
		class TransportBackpacks{};
	};
};