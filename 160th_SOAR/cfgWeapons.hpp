class cfgWeapons
{
	//base weapon class calls
	class FLB_SigSauerMCX_Rattler_V1_Blk_grip; //MCX Source


	//custom weapon configs

	class 160th_MCX : FLB_SigSauerMCX_Rattler_V1_Blk_grip
	{
		author = "Team Valhalla";
		baseWeapon = "160th_MCX";
		displayName = "160th Custom Sig Sauer MCX Rattler 5.56x45";
		scope = 2;
		scopeArsenal = 2;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "FLB_dbal_top_blk";
			};
			class LinkedItemsBipod
			{
				slot = "UnderBarrelSlot";
				item = "flb_fortis_blk";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "SMA_eotech552_3XDOWN";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "flb_DDWAVE_blk";
			};
		};
	};
};