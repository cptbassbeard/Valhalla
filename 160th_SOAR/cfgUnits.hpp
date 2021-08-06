//Groups Define
class cfgGroups
{
	class West
	{
		Name = "BLUFOR";
		Side = 1;
		class 160th_SOAR
		{
			name = "160th Special Operations Aviation Regiment"
			class MC
			{
				Name = "160th SOAR (Multicam)";
				class 160th_SOAR_CREW_MC
				{
					Name = "160th Rotary Crew (Multicam)";
					faction = "160th_SOAR";
					class Unit0
					{
						vehicle = "160th_RWPilot_MC";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "160th_Crewchief_MC";
						rank = "SERGEANT";
						position[] = {-3,-3,0};
					};
				};
			};
			class Desert
			{
				Name = "160th SOAR (Desert)";
				class 160th_SOAR_CREW_AOR1
				{
					Name = "160th Rotary Crew (Desert)";
					faction = "160th_SOAR";
					class Unit0
					{
						vehicle = "160th_RWPilot_AOR1";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "160th_Crewchief_AOR1";
						rank = "SERGEANT";
						position[] = {-3,-3,0};
					};
				};
			};
			class RangerGreen
			{
				Name = "160th SOAR (RangerGreen)";
				class 160th_SOAR_CREW_GRN
				{
					Name = "160th Rotary Crew (RangerGreen)";
					faction = "160th_SOAR";
					class Unit0
					{
						vehicle = "160th_RWPilot_GRN";
						rank = "CAPTAIN";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "160th_Crewchief_GRN";
						rank = "SERGEANT";
						position[] = {-3,-3,0};
					};
				};
			};
		};	
	};
};