#define _ARMA_

class CfgPatches
{
	class tlrRecipesTest_items
	{
		units[] = {};
    	weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"tlrRecipesTest"};
	};
};
class CfgVehicles
{
	class Flag_Base;
	
	class tlr_Fabric_Colorbase : Flag_Base
	{
		scope=2;
		displayName="Fabric";
		descriptionShort="Tailor Fabric_Base";
		hiddenSelections[]=
		{"camo"};
		hiddenSelectionsTextures[]=
		{"dz\gear\camping\data\flag_chern_co.paa"}
		color = "base";
	};

	class tlr_PJTop_Colorbase : Flag_Base
	{
		scope=2;
		displayName="Pajama Top";
		hiddenSelections[]=
		{"camo"};
		hiddenSelectionsTextures[]=
		{"\dz\gear\camping\Data\Flag_NAPA_co.paa"}
		color = "base";
	};

	class tlr_Fabric_greycotton : tlr_Fabric_Colorbase
	{
		scope=2;
		displayName="Grey Cotton Fabric";
		hiddenSelectionsTextures[]=
		{"\dz\gear\camping\Data\Flag_Ched_co.paa"}
		color = "greycotton";
	};

	class tlr_PJTop_greycotton: tlr_PJTop_Colorbase
	{
		scope=2;
		displayName="Grey Cotton Pajama Top";
		hiddenSelectionsTextures[]=
		{"\dz\gear\camping\Data\Flag_CDF_co.paa"}
		color = "greycotton";
	};
};



/*
tlr_Fabric_greycotton
tlr_Fabric_purplecotton
tlr_Fabric_yellowcotton 
tlr_Fabric_aquaflannel
tlr_Fabric_peachflannel
tlr_Fabric_tartanflannel
tlr_Fabric_blacksilk
tlr_Fabric_pinksilk
tlr_Fabric_redsilk


tlr_PJTop_greycotton
tlr_PJTop_purplecotton
tlr_PJTop_yellowcotton
tlr_PJTop_aquaflannel
tlr_PJTop_peachflannel
tlr_PJTop_tartanflannel
tlr_PJTop_blacksilk
tlr_PJTop_pinksilk
tlr_PJTop_redsilk
*/
