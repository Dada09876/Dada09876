#define _ARMA_

class CfgPatches
{
	class tlrRecipesTest
	{
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
		units[] = {};
		weapons[] = {};
	};
};
class CfgMods
{
	class tlrRecipesTest
	{
		dir = "Source_Files\tlrRecipesTest";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "tlrRecipesTest";
		credits = "";
		author = "Dada";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World"};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"Source_Files\DadaFoods\scripts\4_World"};
			};
		};
	};
};