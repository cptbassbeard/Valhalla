class cfgWeapons
{
	class WeaponSlotInfo;
	class MuzzleSlot;
	class flb_M4A1_URGI_B5_13_MIX;
	class Ranger_M4_BLK3: flb_M4A1_URGI_B5_13_MIX
	{
		author="Team Valhalla";
		baseWeapon="flb_M4A1_URGI_B5_13_MIX";
		displayName= "Ranger M4A1 Block 3";
		class MuzzleSlot: MuzzleSlot {
			compatibleItems[] = {
				"FLB_556_cordurawrap_tan_v2";
			};
		};
		scope = 2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_eotechG33_3XUP";
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
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "FLB_556_cordurawrap_tan_V2";
			};
		};
	};
};