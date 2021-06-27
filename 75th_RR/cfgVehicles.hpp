#include "defines.hpp"

class cfgVehicles
{
	//init calls for uniform classes
	class g3roll_mc;
	class g3roll_mct;
	class CUP_I_PMC_WINTER_SNIPER;
	class g3groll_aor1_tan;

	//Rifleman Units
	RANGER_SOLDIER(75th_RF_MC,"75th Ranger Rifleman MC","MC",g3roll_mc, flb_CryeAVS_Assault01_GEAR_A_300_MCM,flb_opscover_peltor_C_03,RF_Items,RF_Linked,RF_WEP,RF_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_RF_ARCTIC,"75th Ranger Rifleman Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER, flb_CryeAVS_Assault02_GEAR_A_556_Blk,FLB_OPSCOREXP_Bravo01_Blk,RF_Items,RF_Linked,RF_WEP,RF_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_RF_AOR1,"75th Ranger Rifleman AOR1","Desert",g3groll_aor1_tan, flb_CryeAVS_Assault01_GEAR_B_300_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,RF_Items,RF_Linked,RF_WEP,RF_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_RF_MCT,"75th Ranger Rifleman MCT","RangerGreen",g3roll_mct, flb_CryeAVS_Assault01_GEAR_A_300_RngrGrn,FLB_OPSCOREXP_Charlie01_Paint_03,RF_Items,RF_Linked,RF_WEP,RF_MAG,flb_mappack_Standard_od);
	
	//Autorifleman Units
	RANGER_SOLDIER(75th_AR_MC,"75th Ranger Autorifleman MC","MC",g3roll_mc,flb_CryeAVS_LMG_GEAR_A_MCM,flb_opscover_peltor_C_03,AR_Items,AR_Linked,AR_WEP,AR_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_AR_ARCTIC,"75th Ranger Autorifleman Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER,flb_CryeAVS_LMG_GEAR_A_MCM,FLB_OPSCOREXP_Bravo01_Blk,AR_Items,AR_Linked,AR_WEP,AR_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_AR_AOR1,"75th Ranger Autorifleman AOR1","Desert",g3groll_aor1_tan,flb_CryeAVS_LMG_GEAR_A_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,AR_Items,AR_Linked,AR_WEP,AR_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_AR_MCT,"75th Ranger Autorifleman MCT","RangerGreen",g3roll_mct,flb_CryeAVS_LMG_GEAR_A_MCM,FLB_OPSCOREXP_Charlie01_Paint_03,AR_Items,AR_Linked,AR_WEP,AR_MAG,flb_mappack_Standard_od);

	//Grenadier Units
	RANGER_SOLDIER(75th_GR_MC,"75th Ranger Grenadier MC","MC",g3roll_mc, flb_CryeAVS_Assault01_GEAR_A_300_MCM,flb_opscover_peltor_C_03,GR_Items,GR_Linked,GR_WEP,GR_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_GR_ARCTIC,"75th Ranger Grenadier Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER, flb_CryeAVS_Assault02_GEAR_A_556_Blk,FLB_OPSCOREXP_Bravo01_Blk,GR_Items,GR_Linked,GR_WEP,GR_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_GR_AOR1,"75th Ranger Grenadier AOR1","Desert",g3groll_aor1_tan, flb_CryeAVS_Assault01_GEAR_B_300_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,GR_Items,GR_Linked,GR_WEP,GR_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_GR_MCT,"75th Ranger Grenadier MCT","RangerGreen",g3roll_mct, flb_CryeAVS_Assault01_GEAR_A_300_RngrGrn,FLB_OPSCOREXP_Charlie01_Paint_03,GR_Items,GR_Linked,GR_WEP,GR_MAG,flb_mappack_Standard_od);

		//JTAC Units
	RANGER_SOLDIER(75th_JT_MC,"75th Ranger JTAC MC","MC",g3roll_mc, flb_CryeAVS_JTAC01_GEAR_C_556_MCM,flb_opscover_peltor_C_03,JT_Items,JT_Linked,JT_WEP,JT_MAG,flb_mappack_Standard_mc);

	RANGER_SOLDIER(75th_JT_ARCTIC,"75th Ranger JTAC Arctic","Arctic",CUP_I_PMC_WINTER_SNIPER, flb_CryeAVS_JTAC01_GEAR_C_556_blk,FLB_OPSCOREXP_Bravo01_Blk,JT_Items,JT_Linked,JT_WEP,JT_MAG,flb_mappack_Alpine02_BLK);

	RANGER_SOLDIER(75th_JT_AOR1,"75th Ranger JTAC AOR1","Desert",g3groll_aor1_tan, flb_CryeAVS_JTAC01_GEAR_C_556_AOR1,FLB_OPSCOREXP_Charlie01_TAN_02,JT_Items,JT_Linked,JT_WEP,JT_MAG,flb_mappack_Standard_tan);

	RANGER_SOLDIER(75th_JT_MCT,"75th Ranger JTAC MCT","RangerGreen",g3roll_mct, flb_CryeAVS_JTAC01_GEAR_C_556_RngGrn,FLB_OPSCOREXP_Charlie01_Paint_03,JT_Items,JT_Linked,JT_WEP,JT_MAG,flb_mappack_Standard_od);
};