class cfgWeapons
{
	//base weapon class calls
	class flb_M4A1_URGI_B5_13_MIX_grip4; //M4 Block III Source
	class flb_Glock19_WAR_blktan; // Glock 19 Source
	class SMA_Mk16QCB; // Mk16 Source
	class rhs_weap_m249_light_S_vfg2; //m249 lMG Source
	class sma_minimi_mk3_762tsb; //MK48 MMG Source
	class rhs_weap_m240B; //M240B MMG Source
	class SMA_Mk17; //MK17 Source
	class FLB_sr25_FDE; //M110 DMR Source
	class flb_Mk12_SPR_blk; //Mk12 DMR Source
	class rhs_weap_M320; // M320 Source
	class CUP_hgun_M17_Black; //M17 Source
	class rhs_weap_M107_d; //M107 Source
	class flb_M4_DDMK18_B5_Paint1_grip2; //MK18 Source
	class flb_mk48_lmt_camo1; //mk48 source

	//custom weapon configs

	class Ranger_MK48 : flb_mk48_lmt_camo1
	{
		author = "Team Valhalla";
		baseWeapon = "Ranger_MK48";
		displayName = "Ranger Mk48 MMG";
		scope = 2;
		scopeArsenal = 2;
		recoil = "rhs_recoil_m240";
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15side";
			};
			class LinkedItemsBipod
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_grip1";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_ACOG_MDO";
			};
		};

	};
	class Ranger_MK17 : SMA_Mk17
	{
		author = "Team Valhalla";
		baseWeapon = "Ranger_MK17";
		displayName = "Ranger MK17 DMR";
		scope = 2;
		scopeArsenal = 2;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "FLB_dba1_top_blk";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "rhsusf_acc_su230a_mrds";
			};
			class LinkedItemsBipod
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "SMA_supp_762";
			};
		};
	};
	class Ranger_M4_BLK3: flb_M4A1_URGI_B5_13_MIX_grip4
	{
		author="Team Valhalla";
		baseWeapon="Ranger_M4_BLK3";
		displayName= "Ranger M4A1 Block 3";
		scope = 2;
		scopeArsenal = 2;
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
	class Ranger_Glock19: flb_Glock19_WAR_blktan
	{
		author="Team Valhalla";
		baseWeapon="Ranger_Glock19";
		displayName= "Ranger Spec Glock 19";
		scope = 2;
		scopeArsenal = 2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "flb_Docter_RDS_blk";
			};
			class LinkedItemAcc
			{
				slot = "PointerSlot";
				item = "flb_acc_X300u_blk";
			};
		};
	};
	class Ranger_M17: CUP_hgun_M17_Black
	{
		author="Team Valhalla";
		baseWeapon="Ranger_M17";
		displayName= "Ranger Spec M17";
		scope = 2;
		scopeArsenal = 2;
		class LinkedItems
		{
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "flb_acc_X300u_blk";
			};
		};
	};
	class Ranger_MK16: SMA_Mk16QCB
	{
		author="Team Valhalla";
		baseWeapon="Ranger_MK16";
		displayName= "Ranger MK16 CQB";
		scope = 2;
		scopeArsenal = 2;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "SMA_supp1TB_556";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "FLB_peq_m600_LOK_ComboLaser_blk";
			};
			class LinkedItemsOptic
			{
				slot = "asdg_OpticRail_SMAAssault";
				item = "SMA_eotech552_3XDOWN";
			};
			class LinkedItemsBipod
			{
				slot = "GripodSlot";
				item = "flb_BCM_KAG_TOB_Blk";
			};
		};
	};
	class Ranger_M107 : rhs_weap_M107_d
	{
		author = "Team Valhalla";
		baseWeapon = "Ranger_M107";
		displayName = "Ranger M107 Light .50BMG";
		scope = 2;
		scopeArsenal = 2;
		class LinkedItems
		{
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="rhsusf_acc_premier_anpvs27";
			};
		};
	};
	class Ranger_DDMK18 : flb_M4_DDMK18_B5_Paint1_grip2
	{
		author = "Team Valhalla";
		baseWeapon = "Ranger_DDMK18";
		displayName = "Ranger DDMK18";
		scope = 2;
		scopeArsenal = 2;
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
				item = "flb_NGAL_M300tt_Blk_ComboLaser";
			};
			class LinkedItemsBipod
			{
				slot = "GripodSlot";
				item = "flb_FSG2_blk";
			};
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "FLB_556_cordurawrap_tan_V2";
			};
		};
	};
	class Ranger_Mk12 : flb_Mk12_SPR_blk
	{
		author = "Team Valhalla";
		baseWeapon = "Ranger_Mk12";
		displayName = "Ranger MK12 DPR";
		scope = 2;
		scopeArsenal = 2;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot="MuzzleSlot";
				item="FLB_SPR_cordurawrap_blk2";
			};
			class LinkedItemsOptic
			{
				slot="CowsSlot";
				item="FLB_VUDU_GeisseleM_RMR45t_1_6_BLK";
			};
			class LinkedItemBipod
			{
				slot="GripodSlot";
				item="rhsusf_acc_harris_bipod";
			};
			class LinkedItemsAcc
			{
				slot="PointerSlot";
				item="FLB_peq600_GEIS_B_ComboLaser_blk";
			};
		};
	};
	class Ranger_M110 : FLB_SR25_fde
	{
		author = "Team Valhalla";
		baseWeapon = "Ranger_M110";
		displayName = "Ranger M110 DMR";
		scope = 2;
		scopeArsenal = 2;
		class LinkedItems
		{
			class LinkedItemsMuzzle
			{
				slot = "MuzzleSlot";
				item = "FLB_762_cordurawrap_fde2";
			};
			class LinkedItemsOptic
			{
				slot = "CowsSlot";
				item = "FLB_VUDU_GeisseleM_RMR45t_1_6_BLK";
			};
			class LinkedItemsAcc
			{
				slot = "PointerSlot";
				item = "rhsusf_acc_anpeq15side";
			};
			class LinkedItemsBipod
			{
				slot = "UnderBarrelSlot";
				item = "rhsusf_acc_harris_bipod";
			};
		};
	};
};