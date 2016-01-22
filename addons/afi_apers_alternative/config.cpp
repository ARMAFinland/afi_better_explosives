#define _ARMA_
#include "CfgAmmo.hpp"
#include "ACE_Triggers.hpp"

class CfgPatches
{
	class afi_apers_alternative
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_explosives","ace_interaction","ace_interact_menu","A3_Weapons_F"};
	};
};

class Extended_PreInit_EventHandlers {
	afi_ied_alternative_PreInit = "[] execVM 'afi_apers_alternative\init.sqf'";
};

class CfgMineTriggers
{
	class RangeTrigger;
	class WireTrigger;
	class RangeTriggerShort: RangeTrigger
	{
		mineTriggerRange = 1;
		mineTriggerActivation = 5;
		mineDelay = 0.2;
	};
	class RangeTriggerBounding: RangeTrigger
	{
		mineTriggerRange = 1;
		mineTriggerActivationRange = 5;
		mineDelay = 2;
	};
};
class cfgMods
{
	author = "Johnson & Tuntematon & Anatooli";
	authorUrl = "www.armafinland.fi";
};