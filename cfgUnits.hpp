//Groups Define
class cfgGroups
{
	class West
	{
		Name = "BLUFOR";
		Side = 1;
		class 121st_MSV
		{
			name = "121st Motostrelki Division"
			class Infantry
				{
					Name = "Infantry";
					class MSV_Infantry_PLTHQ
						{
						Name = "MSV Infantry Platoon HQ";
						side = 1;
						faction = "121st_MSV";
						class Unit0
						{
							side = 1;
							vehicle = "121MSV_Platoon_Leader";
							rank = "LIEUTENANT";
							position[] = {0,0,0};
						};
						class Unit1
						{
							side = 1;
							vehicle = "121MSV_VehicleCrew"
							rank = "LIEUTENANT";
							position[] = {-3,-3,0};
						};
						class Unit2
						{
							side = 1;
							vehicle = "121MSV_Platoon_Medic";
							rank = "SERGEANT";
							position[] = {3, -3, 0};
						};
					};
					class MSV_Infantry_Section
					{
						Name = "MSV Infantry Section";
						side = 1;
						faction = "121st_MSV";
						class Unit0
						{
							side = 1;
							vehicle = "121MSV_Section_Commander";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
						class Unit1
						{
							side = 1;
							vehicle = "121MSV_Senior_Rifleman";
							rank = "CORPORAL";
							position[] = {-2,-2,0};
						};
						class Unit2
						{
							side = 1;
							vehicle = "121MSV_Machine_Gunner";
							rank = "PRIVATE";
							position[] = {0,-2,0};
						};
						class Unit3
						{
							side = 1;
							vehicle = "121MSV_Assistant_Machine_Gunner";
							rank = "PRIVATE";
							position[] = {2,-2,0};
						};
						class Unit4
						{
							side = 1;
							vehicle = "121MSV_Grenadier";
							rank = "PRIVATE";
							position[] = {-2,-4,0};
						};
						class Unit5
						{
							side = 1;
							vehicle = "121MSV_Assistant_Grenadier";
							rank = "PRIVATE";
							position[] = {0,-4,0};
						};
						class Unit6
						{
							side = 1;
							vehicle = "121MSV_Rifleman";
							rank = "PRIVATE";
							position[] = {2,-4,0};
						};
					};
			
			};
			class Mechanized
			{
				name = "Mechanized Elements";
				class Mech_BMP_Section
				{
					name = "Mechanized BMP2D Section";
					side = 1;
					faction = "121st_MSV";
					class Unit0
						{
							side = 1;
							vehicle = "121MSV_Section_Commander";
							rank = "SERGEANT";
							position[] = {0,0,0};
						};
					class Unit1
						{
							side = 1;
							vehicle = "121MSV_Senior_Rifleman";
							rank = "CORPORAL";
							position[] = {-2,-2,0};
						};
					class Unit2
						{
							side = 1;
							vehicle = "121MSV_Machine_Gunner";
							rank = "PRIVATE";
							position[] = {0,-2,0};
						};
					class Unit3
						{
							side = 1;
							vehicle = "121MSV_Assistant_Machine_Gunner";
							rank = "PRIVATE";
							position[] = {2,-2,0};
						};
					class Unit4
						{
							side = 1;
							vehicle = "121MSV_Grenadier";
							rank = "PRIVATE";
							position[] = {-2,-4,0};
						};
					class Unit5
						{
							side = 1;
							vehicle = "121MSV_Assistant_Grenadier";
							rank = "PRIVATE";
							position[] = {0,-4,0};
						};
					class Unit6
						{
							side = 1;
							vehicle = "121MSV_Rifleman";
							rank = "PRIVATE";
							position[] = {2,-4,0};
						};
					class Unit7
					{
						side = 1;
						vehicle = "121MSV_BMP2D";
						rank = "PRIVATE";
						position[] = {8,-2,0};
					};
				};
			};
		};
	};
};