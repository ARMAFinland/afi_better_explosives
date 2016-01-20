#define _ARMA_
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"

class CfgPatches
{
	class afi_ied_alternative
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_explosives","ace_interaction","ace_interact_menu","A3_Weapons_F"};
	};
};


class CfgMineTriggers
{
	class RangeTrigger;
	class RangeTriggerIEDSmall: RangeTrigger
	{
		mineTriggerRange = 0.8;
		mineTriggerActivation = 5;
		mineDelay = 1;
	};
	class RangeTriggerIEDBig: RangeTrigger
	{
		mineTriggerRange = 1;
		mineTriggerActivation = 5;
		mineDelay = 1;
	};
};
class cfgMods
{
	author = "Johnson Nummi & Tuntematon & Anatooli";
	authorUrl = "www.armafinland.fi";
};