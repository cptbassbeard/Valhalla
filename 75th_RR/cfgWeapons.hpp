class cfgWeapons
{
	//base weapon class calls
	class flb_M4A1_URGI_B5_13_MIX_grip4; //M4 Block III Source
	class rhsusf_weap_glock17g4; // Glock 17 Source
	class SMA_Mk16CQB; // Mk16 Source
	class flb_M4_DDMK18_B5_Paint1_grip2; //MK18 Source
	class rhs_weap_m249_light_S_vfg2; //m249 lMG Source
	class sma_minimi_mk3_762tsb; //MK48 MMG Source
	class rhs_weap_m240B; //M240B MMG Source
	class SMA_Mk17; //MK17 Source
	class FLB_sr25_FDE; //M110 DMR Source
	class flb_mk12_spr_blk; //Mk12 DMR Source

	//custom weapon configs
	class Ranger_M4_BLK3: flb_M4A1_URGI_B5_13_MIX_grip4
	{
		author="Team Valhalla";
		baseWeapon="flb_M4A1_URGI_B5_13_MIX_grip4";
		displayName= "Ranger M4A1 Block 3";
		scope = 2;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "FLB_556_cordurawrap_tan_V2";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "flb_NGAL_M300_Blk_ComboLaser_02";
			};
			class LinkedItemsBipod
			{
				slot = "GripodSlot";
				item = "flb_BCM_KAG_TOB_Blk";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_eotechG33_3XUP";
			};
		};
	};

};