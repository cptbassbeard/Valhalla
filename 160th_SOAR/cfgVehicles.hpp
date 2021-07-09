#include "defines.hpp"

class cfgVehicles
{
	class g3_mc;
	class g3_mct;
	class g3_aor1;

	SOAR_SOLDIER(160th_RWPilot_MC,"160th SOAR Rotary Pilot MC",g3_mc, vest_pilot_combat,rhsusf_hgu56p_visor,RWP_Items,RWP_Linked,RWP_WEP,RWP_MAG);

	SOAR_SOLDIER(160th_RWPilot_AOR1,"160th SOAR Rotary Pilot AOR1",g3_aor1, vest_pilot_combat,rhsusf_hgu56p_visor,RWP_Items,RWP_Linked,RWP_WEP,RWP_MAG);

	SOAR_SOLDIER(160th_RWPilot_GRN,"160th SOAR Rotary Pilot RangerGreen",g3_mct, vest_pilot_combat,rhsusf_hgu56p_visor,RWP_Items,RWP_Linked,RWP_WEP,RWP_MAG);

	SOAR_SOLDIER(160th_Crewchief_MC,"160th SOAR Crewchief MC",g3_mc, vest_pilot_combat,rhsusf_hgu56p_visor_mask,RWP_Items,RWP_Linked,RWP_WEP,RWP_MAG);

	SOAR_SOLDIER(160th_Crewchief_AOR1,"160th SOAR Crewchief AOR1",g3_aor1, vest_pilot_combat,rhsusf_hgu56p_visor_mask,RWP_Items,RWP_Linked,RWP_WEP,RWP_MAG);

	SOAR_SOLDIER(160th_Crewchief_GRN,"160th SOAR Crewchief RangerGreen",g3_mct, vest_pilot_combat,rhsusf_hgu56p_visor_mask,RWP_Items,RWP_Linked,RWP_WEP,RWP_MAG);

};