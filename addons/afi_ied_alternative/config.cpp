#define _ARMA_
#include "\z\ace\addons\explosives\script_component.hpp"
#include "CfgAmmo.hpp"
#include "CfgMagazines.hpp"
#include "ACE_Triggers.hpp"

class CfgPatches {
	class afi_ied_alternative {
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"ace_explosives","ace_interaction","ace_interact_menu","A3_Weapons_F","Extended_EventHandlers"};
	};
};

class Extended_PreInit_EventHandlers {
	class afi_iedPreInit {
		init = "call compile preProcessFileLineNumbers '\afi_ied_alternative\init.sqf'";
	};
};

class Rsc_ACE_HiddenButton;
class Rsc_ACE_PhoneInterface {
    class controls {
        class dial: Rsc_ACE_HiddenButton {
			action = QUOTE([ARR_2(ace_player,ctrlText 1400)] call fnc_afi_dialPhone;);
        };
    };
};

class CfgMineTriggers {
	class RangeTrigger;
	class RangeTriggerIEDSmall: RangeTrigger {
		mineTriggerRange = 1;
		mineTriggerActivation = 3;
		mineDelay = 0.5;
	};
	class RangeTriggerIEDBig: RangeTrigger {
		mineTriggerRange = 1;
		mineTriggerActivation = 3;
		mineDelay = 0.5;
	};
};

class cfgMods {
	author = "Johnson & Anatooli";
	authorUrl = "www.armafinland.fi";
};
