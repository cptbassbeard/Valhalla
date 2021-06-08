class cfgWeapons
{
	class flb_M4A1_URGI_B5_13_MIX;
	class Ranger_M4_BLK3: flb_M4A1_URGI_B5_13_MIX
	{
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		baseWeapon = "flb_M4A1_URGI_B5_13_MIX";
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
				item = "rhsusf_acc_nt4_black";
			};
		};
	};
};