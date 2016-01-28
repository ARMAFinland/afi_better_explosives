class CfgVehicles {
	class APERSTripMine;
	class Tripflare_Red: APERSTripMine {
		author="AFI";
		_generalMacro="APERSTripMine";
		scope = 2;
		scopeArsenal = 2;
		ammo="Tripflare_Ammo_Red";
		displayName="Trip flare (Red)";
		icon="iconExplosiveAP";
		picture="\A3\Weapons_F\Data\clear_empty.paa";
		descriptionShort="$STR_A3_cfgMagazines_ClassicMineWireMagazine1";
		class Library {
			libTextDesc="$STR_A3_cfgMagazines_ClassicMineWireMagazine_Library0";
		};
	};

	class Tripflare_Yellow: Tripflare_Red {
		displayName = "Trip flare (Yellow)";
		ammo="Tripflare_Ammo_Yellow";
	};

	class Tripflare_Green: Tripflare_Red {
		displayName = "Trip flare (Green)";
		ammo="Tripflare_Ammo_Green";
	};
	class Tripflare_White: Tripflare_Red {
		displayName = "Trip flare (white)";
		ammo="Tripflare_Ammo_Ground_White";
	};

	// Ground tripflares
	class TripflareGround_Red: Tripflare_Red {
		displayName = "Ground tripflare (red)";
		ammo="Tripflare_Ammo_Ground_Red";
	};
	class TripflareGround_Yellow: Tripflare_Red {
		displayName = "Ground tripflare (yellow)";
		ammo="Tripflare_Ammo_Ground_Yellow";
	};
	class TripflareGround_Green: Tripflare_Red {
		displayName = "Ground tripflare (Green)";
		ammo="Tripflare_Ammo_Ground_Green";
	};
	class TripflareGround_White: Tripflare_Red {
		displayName = "Ground tripflare (White)";
		ammo="Tripflare_Ammo_Ground_White";
	};
};
