class cfgWeapons
{
	class WeaponSlotInfo;
	class flb_M4A1_URGI_B5_13_MIX_grip4;
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
				slot = "bipodSlot";
				item = "flb_RS_Karve_Handstop_TOB_Blk";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_eotechG33_3XDOWN";
			};
		};
	};
};