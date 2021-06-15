class cfgWeapons
{

	class UniformItem;
	class UniformBase;
	class CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads;
	class blu_CUP_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads: UniformBase
	{
		author = "Team Valhalla";
		scope = 0;
		Name = "VKPO_MSV_GLOVES_PADS";
		displayName = "VKPO MSV GLOVES KNEEPADS";
		modelSides[] = {0,1,2,3};

		class ItemInfo: UniformItem 
		{
                        uniformModel = "-";
                        uniformClass = "121MSV_Soldier_base_f";
						displayName = "VKPO MSV Gloves Pads";
						picture = "icon_U_O_RUS_Soldier_VKPO_MSV_EMR_gloves_pads_ca.paa";
						model = "CUP_VKPO_gloves_kneepads.p3d";
                        containerClass = "Supply60";
                        mass = 40;
		};
	};
};