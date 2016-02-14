#define _ARMA_
#include "CfgVehicles.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "ACE_Triggers.hpp"

class CfgPatches {
	class afi_apers_alternative {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_explosives","ace_interaction","ace_interact_menu","A3_Weapons_F","Extended_EventHandlers"};
	};
};

class Extended_PreInit_EventHandlers {
	class afi_apersPreInit {
		init = "call compile preProcessFileLineNumbers '\afi_apers_alternative\init.sqf'";
	};
};

class CfgMineTriggers {
	class RangeTrigger;
	class WireTrigger;
	class RangeTriggerShort: RangeTrigger {
		mineTriggerRange = 1;
		mineTriggerActivation = 3;
		mineDelay = 0.2;
	};
	class RangeTriggerBounding: RangeTrigger {
		mineTriggerRange = 1;
		mineTriggerActivationRange = 3;
		mineDelay = 2;
	};
};

class Tripflare_Explosion_Effect {
	class Light_Effect {
		intensity = 0.005;
		interval = 1;
		lifetime = 0.8;
		position[] = {0, 1, 0};
		simulation = "light";
		type = "ExploLight";
	};
	class Fire_Effect {
		intensity = 1;
		interval = 1;
		lifetime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "FireSparksSmall1";
	};
	class Smoke_Effect {
		intensity = 1;
		interval = 1;
		lifetime = 1;
		position[] = {0, 0, 0};
		simulation = "particles";
		type = "CloudSmallLight1";
	};
};

class CfgSounds {
	sounds[] = {};
	class Flare_whistle {
		name = "Flare_whistle";
		sound[] = {"afi_apers_alternative\Data\Audio\Flare_whistle.wss",3.5,1,1000};
		titles[] = {};
	};
};

class cfgMods {
	author = "Johnson & Anatooli";
	authorUrl = "www.armafinland.fi";
};
