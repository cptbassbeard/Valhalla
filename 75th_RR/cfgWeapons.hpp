class cfgWeapons
{
	class WeaponSlotInfo;
	class SMA_Mk16QCB;
	class Ranger_M4_BLK3: SMA_Mk16QCB
	{
		author="Team Valhalla";
		baseWeapon="SMA_Mk16QCB";
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