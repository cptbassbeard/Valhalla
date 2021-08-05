#include "defines.hpp"

class cfgVehicles
{
	//Init Call for backpacks
	class flb_mappack_Medical01_mc;
	class flb_mappack_Medical01_blk;
	class flb_mappack_Medical01_OD;
	class flb_mappack_Medical01_Tan;
	class flb_511standard01_SL_MCM;
	class flb_511standard01_SL_TAN;
	class flb_511standard01_SL_RGR;
	class flb_511alpine01_SL_BLK;
	//Custom Backpacks

	//Assistant MG Bag
	class Ranger_AMG_BAG_MC: flb_511standard01_SL_MCM
	{
		scope = 2;
		DisplayName = "Ranger Assistant MG Bag (MC)";
		class TransportItems
		{
			item_xx(ACE_EntrenchingTool, 1);
			item_xx(150Rnd_762x51_box_tracer, 3);
			item_xx(ACE_Sandbag_Empty, 20);
		};
	};

	class Ranger_AMG_BAG_AOR1: flb_511standard01_SL_TAN
	{
		scope = 2;
		DisplayName = "Ranger Assistant MG Bag (AOR1)";
		class TransportItems
		{
			item_xx(ACE_EntrenchingTool, 1);
			item_xx(150Rnd_762x51_box_tracer, 3);
			item_xx(ACE_Sandbag_Empty, 20);
		};
	};

	class Ranger_AMG_BAG_RGR: flb_511standard01_SL_RGR
	{
		scope = 2;
		DisplayName = "Ranger Assistant MG Bag (RangerGreen)";
		class TransportItems
		{
			item_xx(ACE_EntrenchingTool, 1);
			item_xx(150Rnd_762x51_box_tracer, 3);
			item_xx(ACE_Sandbag_Empty, 20);
		};
	};

	class Ranger_AMG_BAG_BLK: flb_511Alpine01_SL_BLK
	{
		scope = 2;
		DisplayName = "Ranger Assistant MG Bag (Arctic)";
		class TransportItems
		{
			item_xx(ACE_EntrenchingTool, 1);
			item_xx(150Rnd_762x51_box_tracer, 3);
			item_xx(ACE_Sandbag_Empty, 20);
		};
	};

		//Medium Anti-Tank Bag
	class Ranger_MAT_BAG_MC: flb_511standard01_SL_MCM
	{
		scope = 2;
		DisplayName = "Ranger Medium AT Bag (MC)";
		class TransportItems
		{
			item_xx(ACE_EntrenchingTool, 1);
			item_xx(tf47_m3maaws_HEAT, 2);
			item_xx(tf47_m3maaws_HEDP, 1);
			item_xx(ACE_Sandbag_Empty, 20);
		};
	};

	class Ranger_MAT_BAG_AOR1: flb_511standard01_SL_TAN
	{
		scope = 2;
		DisplayName = "Ranger Medium AT Bag (AOR1)";
		class TransportItems
		{
			item_xx(ACE_EntrenchingTool, 1);
			item_xx(tf47_m3maaws_HEAT, 2);
			item_xx(tf47_m3maaws_HEDP, 1);
			item_xx(ACE_Sandbag_Empty, 20);
		};
	};

	class Ranger_MAT_BAG_RGR: flb_511standard01_SL_RGR
	{
		scope = 2;
		DisplayName = "Ranger Medium AT Bag (RangerGreen)";
		class TransportItems
		{
			item_xx(ACE_EntrenchingTool, 1);
			item_xx(tf47_m3maaws_HEAT, 2);
			item_xx(tf47_m3maaws_HEDP, 1);
			item_xx(ACE_Sandbag_Empty, 20);
		};
	};

	class Ranger_MAT_BAG_BLK: flb_511Alpine01_SL_BLK
	{
		scope = 2;
		DisplayName = "Ranger Medium AT Bag (Arctic)";
		class TransportItems
		{
			item_xx(ACE_EntrenchingTool, 1);
			item_xx(tf47_m3maaws_HEAT, 2);
			item_xx(tf47_m3maaws_HEDP, 1);
			item_xx(ACE_Sandbag_Empty, 20);
		};
	};

	//Medic Bag
	class Ranger_Medbag_MC:flb_mappack_Medical01_mc
	{
		scope = 2;
		DisplayName = "Ranger Medical Go-Bag (MC)";
		class TransportItems
		{
			item_xx(ACE_elasticBandage, 10);
			item_xx(ACE_packingBandage, 30);
			item_xx(ACE_quikclot, 25);
			item_xx(ACE_epinephrine, 15);
			item_xx(ACE_morphine, 15);
			item_xx(ACE_SalineIV, 3);
			item_xx(ACE_salineIV_500, 6);
			item_xx(ACE_tourniquet, 12);
			item_xx(ACE_surgicalKit, 1);
			item_xx(ACE_Splint, 10);
		};
	};

	class Ranger_Medbag_blk:flb_mappack_Medical01_blk
	{
		scope = 2;
		DisplayName = "Ranger Medical Go-Bag (Black)";
		class TransportItems
		{
			item_xx(ACE_elasticBandage, 10);
			item_xx(ACE_packingBandage, 30);
			item_xx(ACE_quikclot, 25);
			item_xx(ACE_epinephrine, 15);
			item_xx(ACE_morphine, 15);
			item_xx(ACE_SalineIV, 3);
			item_xx(ACE_salineIV_500, 6);
			item_xx(ACE_tourniquet, 12);
			item_xx(ACE_surgicalKit, 1);
			item_xx(ACE_Splint, 10);
		};
	};

	class Ranger_Medbag_RGR:flb_mappack_Medical01_od
	{
		scope = 2;
		DisplayName = "Ranger Medical Go-Bag (RangerGreen)";
		class TransportItems
		{
			item_xx(ACE_elasticBandage, 10);
			item_xx(ACE_packingBandage, 30);
			item_xx(ACE_quikclot, 25);
			item_xx(ACE_epinephrine, 15);
			item_xx(ACE_morphine, 15);
			item_xx(ACE_SalineIV, 3);
			item_xx(ACE_salineIV_500, 6);
			item_xx(ACE_tourniquet, 12);
			item_xx(ACE_surgicalKit, 1);
			item_xx(ACE_Splint, 10);
		};
	};

	class Ranger_Medbag_AOR1:flb_mappack_Medical01_tan
	{
		scope = 2;
		DisplayName = "Ranger Medical Go-Bag (AOR1)";
		class TransportItems
		{
			item_xx(ACE_elasticBandage, 10);
			item_xx(ACE_packingBandage, 30);
			item_xx(ACE_quikclot, 25);
			item_xx(ACE_epinephrine, 15);
			item_xx(ACE_morphine, 15);
			item_xx(ACE_SalineIV, 3);
			item_xx(ACE_salineIV_500, 6);
			item_xx(ACE_tourniquet, 12);
			item_xx(ACE_surgicalKit, 1);
			item_xx(ACE_Splint, 10);
		};
	};

	//init calls for uniform classes
	class g3roll_mc;
	class g3roll_mct;
	class CUP_I_PMC_WINTER_SNIPER;
	class g3groll_aor1_tan;

	//Rifleman Units
	RANGER_SOLDIER(75th_RF_MC,"75th Ranger Rifleman MC","MC",g3roll_mc, flb_CryeAVS_Assault01_GEAR_A_300_MCM,flb_opscover_peltor_C_03,RF_Items,RF_Linked,RF_WEP,RF_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_RF_ARCTIC,"75th Ranger Rifleman Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER, flb_CryeAVS_Assault02_GEAR_A_556_Blk,FLB_OPSCOREXP_Bravo01_Blk,RF_Items,RF_Linked,RF_WEP,RF_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_RF_AOR1,"75th Ranger Rifleman AOR1","Desert",g3groll_aor1_tan, flb_CryeAVS_Assault01_GEAR_B_300_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,RF_Items,RF_Linked,RF_WEP,RF_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_RF_GRN,"75th Ranger Rifleman RangerGreen","RangerGreen",g3roll_mct, flb_CryeAVS_Assault01_GEAR_A_300_RngrGrn,FLB_OPSCOREXP_Charlie01_Paint_03,RF_Items,RF_Linked,RF_WEP,RF_MAG,flb_mappack_Standard_od);
	
	//Autorifleman Units
	RANGER_SOLDIER(75th_AR_MC,"75th Ranger Autorifleman MC","MC",g3roll_mc,flb_CryeAVS_LMG_GEAR_A_MCM,flb_opscover_peltor_C_03,AR_Items,AR_Linked,AR_WEP,AR_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_AR_ARCTIC,"75th Ranger Autorifleman Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER,flb_CryeAVS_LMG_GEAR_A_MCM,FLB_OPSCOREXP_Bravo01_Blk,AR_Items,AR_Linked,AR_WEP,AR_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_AR_AOR1,"75th Ranger Autorifleman AOR1","Desert",g3groll_aor1_tan,flb_CryeAVS_LMG_GEAR_A_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,AR_Items,AR_Linked,AR_WEP,AR_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_AR_GRN,"75th Ranger Autorifleman RangerGreen","RangerGreen",g3roll_mct,flb_CryeAVS_LMG_GEAR_A_MCM,FLB_OPSCOREXP_Charlie01_Paint_03,AR_Items,AR_Linked,AR_WEP,AR_MAG,flb_mappack_Standard_od);

	//Grenadier Units
	RANGER_SOLDIER(75th_GR_MC,"75th Ranger Grenadier MC","MC",g3roll_mc, flb_CryeAVS_Assault01_GEAR_A_300_MCM,flb_opscover_peltor_C_03,GR_Items,GR_Linked,GR_WEP,GR_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_GR_ARCTIC,"75th Ranger Grenadier Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER, flb_CryeAVS_Assault02_GEAR_A_556_Blk,FLB_OPSCOREXP_Bravo01_Blk,GR_Items,GR_Linked,GR_WEP,GR_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_GR_AOR1,"75th Ranger Grenadier AOR1","Desert",g3groll_aor1_tan, flb_CryeAVS_Assault01_GEAR_B_300_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,GR_Items,GR_Linked,GR_WEP,GR_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_GR_GRN,"75th Ranger Grenadier RangerGreen","RangerGreen",g3roll_mct, flb_CryeAVS_Assault01_GEAR_A_300_RngrGrn,FLB_OPSCOREXP_Charlie01_Paint_03,GR_Items,GR_Linked,GR_WEP,GR_MAG,flb_mappack_Standard_od);

		//FTL Units
	RANGER_SOLDIER(75th_FTL_MC,"75th Ranger FTL","MC",g3roll_mc, flb_CryeAVS_Assault01_GEAR_A_300_MCM,flb_opscover_peltor_C_03,FTL_Items,FTL_Linked,FTL_WEP,FTL_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_FTL_ARCTIC,"75th Ranger FTL Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER, flb_CryeAVS_Assault02_GEAR_A_556_Blk,FLB_OPSCOREXP_Bravo01_Blk,FTL_Items,FTL_Linked,FTL_WEP,FTL_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_FTL_AOR1,"75th Ranger FTL AOR1","Desert",g3groll_aor1_tan, flb_CryeAVS_Assault01_GEAR_B_300_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,FTL_Items,FTL_Linked,FTL_WEP,FTL_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_FTL_GRN,"75th Ranger FTL RangerGreen","RangerGreen",g3roll_mct, flb_CryeAVS_Assault01_GEAR_A_300_RngrGrn,FLB_OPSCOREXP_Charlie01_Paint_03,FTL_Items,FTL_Linked,FTL_WEP,FTL_MAG,flb_mappack_Standard_od);

		//JTAC Units
	RANGER_SOLDIER(75th_JT_MC,"75th Ranger JTAC MC","MC",g3roll_mc, flb_CryeAVS_JTAC01_GEAR_C_556_MCM,flb_opscover_peltor_C_03,JT_Items,JT_Linked,JT_WEP,JT_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_JT_ARCTIC,"75th Ranger JTAC Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER, flb_CryeAVS_JTAC01_GEAR_C_556_blk,FLB_OPSCOREXP_Bravo01_Blk,JT_Items,JT_Linked,JT_WEP,JT_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_JT_AOR1,"75th Ranger JTAC AOR1","Desert",g3groll_aor1_tan, flb_CryeAVS_JTAC01_GEAR_C_556_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,JT_Items,JT_Linked,JT_WEP,JT_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_JT_GRN,"75th Ranger JTAC RangerGreen","RangerGreen",g3roll_mct, flb_CryeAVS_JTAC01_GEAR_C_556_RngGrn,FLB_OPSCOREXP_Charlie01_Paint_03,JT_Items,JT_Linked,JT_WEP,JT_MAG,flb_mappack_Standard_od);

		//Squad lead Units
	RANGER_SOLDIER(75th_SL_MC,"75th Ranger SL MC","MC",g3roll_mc, flb_CryeAVS_JTAC01_GEAR_C_556_MCM,flb_opscover_peltor_C_03,SL_Items,SL_Linked,SL_WEP,SL_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_SL_ARCTIC,"75th Ranger SL Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER, flb_CryeAVS_JTAC01_GEAR_C_556_blk,FLB_OPSCOREXP_Bravo01_Blk,SL_Items,SL_Linked,SL_WEP,SL_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_SL_AOR1,"75th Ranger SL AOR1","Desert",g3groll_aor1_tan, flb_CryeAVS_JTAC01_GEAR_C_556_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,SL_Items,SL_Linked,SL_WEP,SL_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_SL_GRN,"75th Ranger SL RangerGreen","RangerGreen",g3roll_mct, flb_CryeAVS_JTAC01_GEAR_C_556_RngGrn,FLB_OPSCOREXP_Charlie01_Paint_03,SL_Items,SL_Linked,SL_WEP,SL_MAG,flb_mappack_Standard_od);

		//Platoon Lead Units
	RANGER_SOLDIER(75th_PL_MC,"75th Ranger PL MC","MC",g3roll_mc, flb_CryeAVS_JTAC01_GEAR_C_556_MCM,flb_opscover_peltor_C_03,PL_Items,PL_Linked,PL_WEP,PL_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_PL_ARCTIC,"75th Ranger PL Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER, flb_CryeAVS_JTAC01_GEAR_C_556_blk,FLB_OPSCOREXP_Bravo01_Blk,PL_Items,PL_Linked,PL_WEP,PL_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_PL_AOR1,"75th Ranger PL AOR1","Desert",g3groll_aor1_tan, flb_CryeAVS_JTAC01_GEAR_C_556_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,PL_Items,PL_Linked,PL_WEP,PL_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_PL_GRN,"75th Ranger PL RangerGreen","RangerGreen",g3roll_mct, flb_CryeAVS_JTAC01_GEAR_C_556_RngGrn,FLB_OPSCOREXP_Charlie01_Paint_03,PL_Items,PL_Linked,PL_WEP,PL_MAG,flb_mappack_Standard_od);
	
		//Platoon Sgt Units
	RANGER_SOLDIER(75th_PSG_MC,"75th Ranger PLT SGT MC","MC",g3roll_mc, flb_CryeAVS_JTAC01_GEAR_C_556_MCM,flb_opscover_peltor_C_03,PSG_Items,PSG_Linked,PSG_WEP,PSG_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_PSG_ARCTIC,"75th Ranger PLT SGT Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER, flb_CryeAVS_JTAC01_GEAR_C_556_blk,FLB_OPSCOREXP_Bravo01_Blk,PSG_Items,PSG_Linked,PSG_WEP,PSG_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_PSG_AOR1,"75th Ranger PLT SGT AOR1","Desert",g3groll_aor1_tan, flb_CryeAVS_JTAC01_GEAR_C_556_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,PSG_Items,PSG_Linked,PSG_WEP,PSG_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_PSG_GRN,"75th Ranger PLT SGT RangerGreen","RangerGreen",g3roll_mct, flb_CryeAVS_JTAC01_GEAR_C_556_RngGrn,FLB_OPSCOREXP_Charlie01_Paint_03,PSG_Items,PSG_Linked,PSG_WEP,PSG_MAG,flb_mappack_Standard_od);

		//Medic Units
	RANGER_SOLDIER(75th_MED_MC,"75th Ranger Medic MC","MC",g3roll_mc, flb_CryeAVS_JTAC01_GEAR_C_556_MCM,flb_opscover_peltor_C_03,MED_Items,MED_Linked,MED_WEP,MED_MAG,Ranger_Medbag_MC);

	RANGER_SOLDIER(75th_MED_ARCTIC,"75th Ranger Medic Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER, flb_CryeAVS_JTAC01_GEAR_C_556_blk,FLB_OPSCOREXP_Bravo01_Blk,MED_Items,MED_Linked,MED_WEP,MED_MAG,Ranger_Medbag_BLK);

	RANGER_SOLDIER(75th_MED_AOR1,"75th Ranger Medic AOR1","Desert",g3groll_aor1_tan, flb_CryeAVS_JTAC01_GEAR_C_556_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,MED_Items,MED_Linked,MED_WEP,MED_MAG,Ranger_Medbag_Tan);

	RANGER_SOLDIER(75th_MED_GRN,"75th Ranger Medic RangerGreen","RangerGreen",g3roll_mct, flb_CryeAVS_JTAC01_GEAR_C_556_RngGrn,FLB_OPSCOREXP_Charlie01_Paint_03,MED_Items,MED_Linked,MED_WEP,MED_MAG,Ranger_Medbag_OD);

	//Machinegunner Units
	RANGER_SOLDIER(75th_MG_MC,"75th Ranger Machinegunner MC","MC",g3roll_mc,flb_CryeAVS_LMG_GEAR_A_MCM,flb_opscover_peltor_C_03,MG_Items,MG_Linked,MG_WEP,MG_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_MG_ARCTIC,"75th Ranger Machinegunner Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER,flb_CryeAVS_LMG_GEAR_A_MCM,FLB_OPSCOREXP_Bravo01_Blk,MG_Items,MG_Linked,MG_WEP,MG_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_MG_AOR1,"75th Ranger Machinegunner AOR1","Desert",g3groll_aor1_tan,flb_CryeAVS_LMG_GEAR_A_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,MG_Items,MG_Linked,MG_WEP,MG_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_MG_GRN,"75th Ranger Machinegunner RangerGreen","RangerGreen",g3roll_mct,flb_CryeAVS_LMG_GEAR_A_MCM,FLB_OPSCOREXP_Charlie01_Paint_03,MG_Items,MG_Linked,MG_WEP,MG_MAG,flb_mappack_Standard_od);

	//Assistant Machinegunner Units
	RANGER_SOLDIER(75th_AMG_MC,"75th Ranger Assistant MG MC","MC",g3roll_mc,flb_CryeAVS_LMG_GEAR_A_MCM,flb_opscover_peltor_C_03,AMG_Items,AMG_Linked,AMG_WEP,AMG_MAG,Ranger_AMG_BAG_MC);

	RANGER_SOLDIER(75th_AMG_ARCTIC,"75th Ranger Assistant MG Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER,flb_CryeAVS_LMG_GEAR_A_MCM,FLB_OPSCOREXP_Bravo01_Blk,AMG_Items,AMG_Linked,AMG_WEP,AMG_MAG,Ranger_AMG_BAG_BLK);

	RANGER_SOLDIER(75th_AMG_AOR1,"75th Ranger Assistant MG AOR1","Desert",g3groll_aor1_tan,flb_CryeAVS_LMG_GEAR_A_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,MG_Items,AMG_Linked,AMG_WEP,AMG_MAG,Ranger_AMG_BAG_AOR1);

	RANGER_SOLDIER(75th_AMG_GRN,"75th Ranger Assistant MG RangerGreen","RangerGreen",g3roll_mct,flb_CryeAVS_LMG_GEAR_A_MCM,FLB_OPSCOREXP_Charlie01_Paint_03,AMG_Items,AMG_Linked,AMG_WEP,AMG_MAG,Ranger_AMG_BAG_RGR);

	//Medium Anti-Tank Units
	RANGER_SOLDIER(75th_MAT_MC,"75th Ranger Medium AT MC","MC",g3roll_mc,flb_CryeAVS_LMG_GEAR_A_MCM,flb_opscover_peltor_C_03,MAT_Items,MAT_Linked,MAT_WEP,MAT_MAG,Ranger_MAT_BAG_MC);

	RANGER_SOLDIER(75th_MAT_ARCTIC,"75th Ranger Medium AT Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER,flb_CryeAVS_LMG_GEAR_A_MCM,FLB_OPSCOREXP_Bravo01_Blk,MAT_Items,MAT_Linked,MAT_WEP,MAT_MAG,Ranger_MAT_BAG_BLK);

	RANGER_SOLDIER(75th_MAT_AOR1,"75th Ranger Medium AT AOR1","Desert",g3groll_aor1_tan,flb_CryeAVS_LMG_GEAR_A_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,MAT_Items,MAT_Linked,MAT_WEP,MAT_MAG,Ranger_MAT_BAG_AOR1);

	RANGER_SOLDIER(75th_MAT_GRN,"75th Ranger Medium AT RangerGreen","RangerGreen",g3roll_mct,flb_CryeAVS_LMG_GEAR_A_MCM,FLB_OPSCOREXP_Charlie01_Paint_03,MAT_Items,MAT_Linked,MAT_WEP,MAT_MAG,Ranger_MAT_BAG_RGR);

		//Assistant MAT Units
	RANGER_SOLDIER(75th_AAT_MC,"75th Ranger Assistant MAT MC","MC",g3roll_mc,flb_CryeAVS_LMG_GEAR_A_MCM,flb_opscover_peltor_C_03,AAT_Items,AAT_Linked,AAT_WEP,AAT_MAG,Ranger_MAT_BAG_MC);

	RANGER_SOLDIER(75th_AAT_ARCTIC,"75th Ranger Assistant MAT Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER,flb_CryeAVS_LMG_GEAR_A_MCM,FLB_OPSCOREXP_Bravo01_Blk,AAT_Items,AAT_Linked,AAT_WEP,AAT_MAG,Ranger_MAT_BAG_BLK);

	RANGER_SOLDIER(75th_AAT_AOR1,"75th Ranger Assistant MAT AOR1","Desert",g3groll_aor1_tan,flb_CryeAVS_LMG_GEAR_A_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,AAT_Items,AAT_Linked,AAT_WEP,AAT_MAG,Ranger_MAT_BAG_AOR1);

	RANGER_SOLDIER(75th_AAT_GRN,"75th Ranger Assistant MAT RangerGreen","RangerGreen",g3roll_mct,flb_CryeAVS_LMG_GEAR_A_MCM,FLB_OPSCOREXP_Charlie01_Paint_03,AAT_Items,AAT_Linked,AAT_WEP,AAT_MAG,Ranger_MAT_BAG_RGR);

	//CUSTOM GROUND VEHICLES

	class rhsusf_stryker_m1132_m2_np_wd; //base class call
	class RANGER_STRYKER_PLT_WD: rhsusf_stryker_m1132_m2_np_wd
	{
		scope = 2;
		displayName = "75th Stryker - Plt Element - WD";
		faction = "75th_RR";
		author = "Team Valhalla";
		vehicleClass = "Ground";
		side = 1;
		crew = "75th_RF_MC";
		class library
		{
			libTextDesc = "75th Stryker Platoon Vehicle (Woodland)";
		};
	};
};