//Groups Define
class cfgGroups
{
	class West
	{
		Name = "BLUFOR";
		Side = 1;
		class 75th_RR
		{
			name = "75th Ranger Regiment"
			class MC
				{
					Name = "Rangers (Multicam)";
					class 75th_RR_PLTHQ_MC
					{
						Name = "75th Ranger Platoon HQ";
						faction = "75th_RR";
						class Unit0
						{
							vehicle = "75th_PL_MC";
							rank = "LIEUTENANT";
							position[] = {0,0,0};
						};
						class Unit1
						{
							vehicle = "75th_PSG_MC";
							rank = "SERGEANT";
							position[] = {-3,-3,0};
						};
						class Unit2
						{
							vehicle = "75th_MED_MC";
							rank = "SERGEANT";
							position[] = {3,-3,0};
						};
						class Unit3
						{
							vehicle = "75th_JT_MC";
							rank = "SERGEANT";
							position[] = {0,-5,0};
						};
					};
					class 75th_RR_RIFLESQUAD
					{
						Name = "75th Ranger Rifle Squad";
						faction = "75th_RR";
						class Unit0
						{
							vehicle = "75th_SL_MC";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1
						{
							vehicle = "75th_FTL_MC";
							rank = "PRIVATE";
							position[] = {-3,3,0};
						};
						class Unit2
						{
							vehicle = "75th_AR_MC";
							rank = "PRIVATE";
							position[] = {-3,5,0};
						};
						class Unit3
						{
							vehicle = "75th_GR_MC";
							rank = "PRIVATE";
							position[] = {-3,7,0};
						};
						class Unit4
						{
							vehicle = "75th_RF_MC";
							rank = "PRIVATE";
							position[] = {-3,9,0};
						};
						class Unit5
						{
							vehicle = "75th_FTL_MC";
							rank = "PRIVATE";
							position[] = {3,3,0};
						};
						class Unit6
						{
							vehicle = "75th_AR_MC";
							rank = "PRIVATE";
							position[] = {3,5,0};
						};
						class Unit7
						{
							vehicle = "75th_GR_MC";
							rank = "PRIVATE";
							position[] = {3,7,0};
						};
						class Unit8
						{
							vehicle = "75th_RF_MC";
							rank = "PRIVATE";
							position[] = {3,9,0};
						};
						class Unit9
						{
							vehicle = "75th_MED_MC";
							rank = "SERGEANT";
							position[] = {2,2,0};
						};
					};
					class 75th_RR_MG_Section
					{
						Name = "75th Ranger MG Section";
						faction = "75th_RR";
						class Unit0
						{
							vehicle = "75th_MG_MC";
							rank = "PRIVATE";
							position[] = {0,0,0};
						};
						class Unit1
						{
							vehicle = "75th_AMG_MC";
							rank = "PRIVATE";
							position[] = {2,0,0};
						};
					};
					class 75th_RR_MAT_Section
					{
						Name = "75th Ranger MAT Section";
						faction = "75th_RR";
						class Unit0
						{
							vehicle = "75th_MAT_MC";
							rank = "PRIVATE";
							position[] = {0,0,0};
						};
						class Unit1
						{
							vehicle = "75th_AAT_MC";
							rank = "PRIVATE";
							position[] = {2,0,0};
						};
					};
				};
			class Desert
			{
				Name = "Rangers (Desert)";
				class 75th_RR_PLTHQ_AOR1
				{
					Name = "75th Ranger Platoon HQ (Desert)";
					faction = "75th_RR";
					class Unit0
					{
						vehicle = "75th_PL_AOR1"
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_PSG_AOR1"
						rank = "SERGEANT";
						position[] = {-3,-3,0};
					};
					class Unit2
					{
						vehicle = "75th_MED_AOR1"
						rank = "SERGEANT";
						position[] = {3,-3,0};
					};
					class Unit3
					{
						vehicle = "75th_JT_AOR1";
						rank = "SERGEANT";
						position[] = {0,-5,0};
					};
				};
				class 75th_RR_RIFLESQUAD
				{
					Name = "75th Ranger Rifle Squad";
					faction = "75th_RR";
					class Unit0
					{
						vehicle = "75th_SL_AOR1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_FTL_AOR1";
						rank = "PRIVATE";
						position[] = {-3,3,0};
					};
					class Unit2
					{
						vehicle = "75th_AR_AOR1";
						rank = "PRIVATE";
						position[] = {-3,5,0};
					};
					class Unit3
					{
						vehicle = "75th_GR_AOR1";
						rank = "PRIVATE";
						position[] = {-3,7,0};
					};
					class Unit4
					{
						vehicle = "75th_RF_AOR1";
						rank = "PRIVATE";
						position[] = {-3,9,0};
					};
					class Unit5
					{
						vehicle = "75th_FTL_AOR1";
						rank = "PRIVATE";
						position[] = {3,3,0};
					};
					class Unit6
					{
						vehicle = "75th_AR_AOR1";
						rank = "PRIVATE";
						position[] = {3,5,0};
					};
					class Unit7
					{
						vehicle = "75th_GR_AOR1";
						rank = "PRIVATE";
						position[] = {3,7,0};
					};
					class Unit8
					{
						vehicle = "75th_RF_AOR1";
						rank = "PRIVATE";
						position[] = {3,9,0};
					};
					class Unit9
					{
						vehicle = "75th_MED_AOR1";
						rank = "SERGEANT";
						position[] = {2,2,0};
					};
				};
				class 75th_RR_MG_Section
				{
					Name = "75th Ranger MG Section";
					faction = "75th_RR";
					class Unit0
					{
						vehicle = "75th_MG_AOR1";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_AMG_AOR1";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
				};
				class 75th_RR_MAT_Section
				{
					Name = "75th Ranger MAT Section";
					faction = "75th_RR";
					class Unit0
					{
						vehicle = "75th_MAT_AOR1";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_AAT_AOR1";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
				};
			};
			class RangerGreen
			{
				Name = "Rangers (RangerGreen)";
				class 75th_RR_PLTHQ_RGR
				{
					Name = "75th Ranger Platoon HQ (RangerGreen)";
					editorSubcategory = "RangerGreen";
					faction = "75th_RR";
					class Unit0
					{
						vehicle = "75th_PL_GRN";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_PSG_GRN";
						rank = "SERGEANT";
						position[] = {-3,-3,0};
					};
					class Unit2
					{
						vehicle = "75th_MED_GRN";
						rank = "SERGEANT";
						position[] = {3,-3,0};
					};
					class Unit3
					{
						vehicle = "75th_JT_GRN";
						rank = "SERGEANT";
						position[] = {0,-5,0};
					};
				};
				class 75th_RR_RIFLESQUAD
				{
					Name = "75th Ranger Rifle Squad";
					faction = "75th_RR";
					class Unit0
					{
						vehicle = "75th_SL_GRN";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_FTL_GRN";
						rank = "PRIVATE";
						position[] = {-3,3,0};
					};
					class Unit2
					{
						vehicle = "75th_AR_GRN";
						rank = "PRIVATE";
						position[] = {-3,5,0};
					};
					class Unit3
					{
						vehicle = "75th_GR_GRN";
						rank = "PRIVATE";
						position[] = {-3,7,0};
					};
					class Unit4
					{
						vehicle = "75th_RF_GRN";
						rank = "PRIVATE";
						position[] = {-3,9,0};
					};
					class Unit5
					{
						vehicle = "75th_FTL_GRN";
						rank = "PRIVATE";
						position[] = {3,3,0};
					};
					class Unit6
					{
						vehicle = "75th_AR_GRN";
						rank = "PRIVATE";
						position[] = {3,5,0};
					};
					class Unit7
					{
						vehicle = "75th_GR_GRN";
						rank = "PRIVATE";
						position[] = {3,7,0};
					};
					class Unit8
					{
						vehicle = "75th_RF_GRN";
						rank = "PRIVATE";
						position[] = {3,9,0};
					};
					class Unit9
					{
						vehicle = "75th_MED_GRN";
						rank = "SERGEANT";
						position[] = {2,2,0};
					};
				};
				class 75th_RR_MG_Section
				{
					Name = "75th Ranger MG Section";
					faction = "75th_RR";
					class Unit0
					{
						vehicle = "75th_MG_GRN";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_AMG_GRN";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
				};
				class 75th_RR_MAT_Section
				{
					Name = "75th Ranger MAT Section";
					faction = "75th_RR";
					class Unit0
					{
						vehicle = "75th_MAT_GRN";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_AAT_GRN";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
				};
			};
			class Arctic
			{
				Name = "Rangers (Arctic)";
				class 75th_RR_PLTHQ_ARCTIC
				{
					Name = "75th Ranger Platoon HQ (Arctic)";
					editorSubcategory = "ARCTIC";
					faction = "75th_RR";
					class Unit0
					{
						vehicle = "75th_PL_ARCTIC";
						rank = "LIEUTENANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_PSG_ARCTIC";
						rank = "SERGEANT";
						position[] = {-3,-3,0};
					};
					class Unit2
					{
						vehicle = "75th_MED_ARCTIC";
						rank = "SERGEANT";
						position[] = {3,-3,0};
					};
					class Unit3
					{
						vehicle = "75th_JT_ARCTIC";
						rank = "SERGEANT";
						position[] = {0,-5,0};
					};
				};
				class 75th_RR_RIFLESQUAD
				{
					Name = "75th Ranger Rifle Squad";
					faction = "75th_RR";
					class Unit0
					{
						vehicle = "75th_SL_ARCTIC";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_FTL_ARCTIC";
						rank = "PRIVATE";
						position[] = {-3,3,0};
					};
					class Unit2
					{
						vehicle = "75th_AR_ARCTIC";
						rank = "PRIVATE";
						position[] = {-3,5,0};
					};
					class Unit3
					{
						vehicle = "75th_GR_ARCTIC";
						rank = "PRIVATE";
						position[] = {-3,7,0};
					};
					class Unit4
					{
						vehicle = "75th_RF_ARCTIC";
						rank = "PRIVATE";
						position[] = {-3,9,0};
					};
					class Unit5
					{
						vehicle = "75th_FTL_ARCTIC";
						rank = "PRIVATE";
						position[] = {3,3,0};
					};
					class Unit6
					{
						vehicle = "75th_AR_ARCTIC";
						rank = "PRIVATE";
						position[] = {3,5,0};
					};
					class Unit7
					{
						vehicle = "75th_GR_ARCTIC";
						rank = "PRIVATE";
						position[] = {3,7,0};
					};
					class Unit8
					{
						vehicle = "75th_RF_ARCTIC";
						rank = "PRIVATE";
						position[] = {3,9,0};
					};
					class Unit9
					{
						vehicle = "75th_MED_ARCTIC";
						rank = "SERGEANT";
						position[] = {2,2,0};
					};
				};
				class 75th_RR_MG_Section
				{
					Name = "75th Ranger MG Section";
					faction = "75th_RR";
					class Unit0
					{
						vehicle = "75th_MG_ARCTIC";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_AMG_ARCTIC";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
				};
				class 75th_RR_MAT_Section
				{
					Name = "75th Ranger MAT Section";
					faction = "75th_RR";
					class Unit0
					{
						vehicle = "75th_MAT_ARCTIC";
						rank = "PRIVATE";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_AAT_ARCTIC";
						rank = "PRIVATE";
						position[] = {2,0,0};
					};
				};
			};
			class Stryker_APC_WD
			{
				Name = "75th Ranger StrykerAPC WD";
				class 75th_Stryker_Plt_WD
				{
					name = "75th Ranger Plt Stryker WD";
					faction = "75th_RR";
					class unit0
						{
							vehicle = "RANGER_STRYKER_PLT_WD";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
					class Unit1
						{
							vehicle = "75th_PL_MC";
							rank = "LIEUTENANT";
							position[] = {-5,-6,0};
						};
					class Unit2
						{
							vehicle = "75th_PSG_MC";
							rank = "SERGEANT";
							position[] = {-6,-6,0};
						};
					class Unit3
						{
							vehicle = "75th_MED_MC";
							rank = "SERGEANT";
							position[] = {6,-6,0};
						};
					class Unit4
						{
							vehicle = "75th_JT_MC";
							rank = "SERGEANT";
							position[] = {0,-10,0};
						};
				};
				class 75th_Stryker_Squad_M2_WD
				{
					name = "75th Stryker RifleSquad WD";
					faction = "75th_RR";

					class Unit0
					{
						vehicle = "75th_SL_MC";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_FTL_MC";
						rank = "PRIVATE";
						position[] = {-3,3,0};
					};
					class Unit2
					{
						vehicle = "75th_AR_MC";
						rank = "PRIVATE";
						position[] = {-3,5,0};
					};
					class Unit3
					{
						vehicle = "75th_GR_MC";
						rank = "PRIVATE";
						position[] = {-3,7,0};
					};
					class Unit4
					{
						vehicle = "75th_RF_MC";
						rank = "PRIVATE";
						position[] = {-3,9,0};
					};
					class Unit5
					{
						vehicle = "75th_FTL_MC";
						rank = "PRIVATE";
						position[] = {3,3,0};
					};
					class Unit6
					{
						vehicle = "75th_AR_MC";
						rank = "PRIVATE";
						position[] = {3,5,0};
					};
					class Unit7
					{
						vehicle = "75th_GR_MC";
						rank = "PRIVATE";
						position[] = {3,7,0};
					};
					class Unit8
					{
						vehicle = "75th_RF_MC";
						rank = "PRIVATE";
						position[] = {3,9,0};
					};
					class unit9
					{
						vehicle = "RANGER_STRYKER_PLT_WD";
						rank = "SERGEANT";
						position[] = {0,11,0};
					};
				};
			};

			class Stryker_APC_D
			{
				Name = "75th Ranger StrykerAPC D";
				class 75th_Stryker_Plt_D
				{
					name = "75th Ranger Plt Stryker D";
					faction = "75th_RR";
					class unit0
						{
							vehicle = "RANGER_STRYKER_PLT_D";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
					class Unit1
						{
							vehicle = "75th_PL_AOR1";
							rank = "LIEUTENANT";
							position[] = {-5,-6,0};
						};
					class Unit2
						{
							vehicle = "75th_PSG_AOR1";
							rank = "SERGEANT";
							position[] = {-6,-6,0};
						};
					class Unit3
						{
							vehicle = "75th_MED_AOR1";
							rank = "SERGEANT";
							position[] = {6,-6,0};
						};
					class Unit4
						{
							vehicle = "75th_JT_AOR1";
							rank = "SERGEANT";
							position[] = {0,-10,0};
						};
				};
				class 75th_Stryker_Squad_M2_D
				{
					name = "75th Stryker RifleSquad D";
					faction = "75th_RR";

					class Unit0
					{
						vehicle = "75th_SL_AOR1";
						rank = "SERGEANT";
						position[] = {0,0,0};
					};
					class Unit1
					{
						vehicle = "75th_FTL_AOR1";
						rank = "PRIVATE";
						position[] = {-3,3,0};
					};
					class Unit2
					{
						vehicle = "75th_AR_AOR1";
						rank = "PRIVATE";
						position[] = {-3,5,0};
					};
					class Unit3
					{
						vehicle = "75th_GR_AOR1";
						rank = "PRIVATE";
						position[] = {-3,7,0};
					};
					class Unit4
					{
						vehicle = "75th_RF_AOR1";
						rank = "PRIVATE";
						position[] = {-3,9,0};
					};
					class Unit5
					{
						vehicle = "75th_FTL_AOR1";
						rank = "PRIVATE";
						position[] = {3,3,0};
					};
					class Unit6
					{
						vehicle = "75th_AR_AOR1";
						rank = "PRIVATE";
						position[] = {3,5,0};
					};
					class Unit7
					{
						vehicle = "75th_GR_AOR1";
						rank = "PRIVATE";
						position[] = {3,7,0};
					};
					class Unit8
					{
						vehicle = "75th_RF_AOR1";
						rank = "PRIVATE";
						position[] = {3,9,0};
					};
					class unit9
					{
						vehicle = "RANGER_STRYKER_PLT_D";
						rank = "SERGEANT";
						position[] = {0,11,0};
					};
				};
			};
		};	
	};
};