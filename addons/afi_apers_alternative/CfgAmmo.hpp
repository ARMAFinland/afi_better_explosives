class cfgAmmo {
	class MineCore;
	class BoundingMineCore;
	class DirectionalBombCore;
	class MineBase: MineCore {
		ace_frag_skip = 0;
		ace_frag_force = 1;
		icon = "iconExplosiveAT";
		mapsize = 1;
		explosionType = "mine";
		triggerWhenDestroyed = 1;
		underwaterHitRangeCoef = 2;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",3,1,50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1",0.56234133,1,30};
		soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a",0.56234133,1,30};
		aiAmmoUsageFlags = 16;
	};

	class BoundingMineBase: BoundingMineCore {
		ace_frag_skip = 0;
		ace_frag_force = 1;
		icon = "iconExplosiveAP";
		mapsize = 1;
		explosionType = "mine";
		triggerWhenDestroyed = 1;
		underwaterHitRangeCoef = 0.5;
		soundTrigger[] = {"afi_apers_alternative\Data\Audio\Bounding_trigger",3,1,100};
		soundActivation[] = {"A3\Sounds_F\weapons\Mines\electron_activate_mine_1",0.56234133,1,50};
		soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a",0.56234133,1,50};
	};

	class DirectionalBombBase: DirectionalBombCore {
		ace_frag_skip = 0;
		ace_frag_force = 1;
		explosionPos = "explosionPos";
		explosionDir = "explosionDir";
		minimumSafeZone = 1;
		explosionAngle = 60;
		simulation = "shotDirectionalBomb";
		directionalExplosion = 1;
		icon = "iconExplosiveAPDirectional";
		underwaterHitRangeCoef = 0.1;
		mapsize = 1;
		explosionType = "mine";
		triggerWhenDestroyed = 1;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",3,1,50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1",0.56234133,1,50};
		soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a",0.56234133,1,50};
		craterShape = "\A3\weapons_f\empty.p3d";
	};

	class APERSMine_Range_Ammo: MineBase {
		ace_frag_enabled = 0;
		ace_frag_metal = 100;
		ace_frag_charge = 25;
		ace_frag_gurney_c = 2000;
		ace_frag_gurney_k = 3/5;
		ace_frag_classes[] = {"ACE_frag_medium_HD", "ACE_frag_large_HD"};
		// values balanced for realism/gameplay
		hit = 5;
		indirectHit = 5;
		indirectHitRange = 0.5;
		model = "\A3\Weapons_F\explosives\mine_ap";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_ap_d";
		icon = "iconExplosiveAP";
		defaultMagazine = "APERSMine_Range_Mag";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_01",3.1622777,1,1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_02",3.1622777,1,2000};
		multiSoundHit[] = {"soundHit1",0.5,"soundHit2",0.5};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",0.8,1,50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1",0.56234133,1,50};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 800;
		mineTrigger = "RangeTriggerShort";
	};

	class APERSBoundingMine_Range_Ammo: BoundingMineBase {
		ace_frag_enabled = 0;
		ace_frag_metal = 3499;
		ace_frag_charge = 601;
		ace_frag_gurney_c = 2500;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_large"};
		// values from M16A2 mine
		hit = 10;
		indirectHit = 10;
		indirectHitRange = 10;
		model = "\A3\Weapons_F\explosives\mine_AP_bouncing";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_bouncing_d";
		defaultMagazine = "APERSBoundingMine_Range_Mag";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_01",3.1622777,1,1300};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\Explosion_M6_slam_mine_02",3.1622777,1,2000};
		multiSoundHit[] = {"soundHit1",0.5,"soundHit2",0.5};
		explosionEffects = "BoundingMineExplosion";
		CraterEffects = "BoundingMineCrater";
		mineJumpEffects = "MineJumpEffect";
		whistleDist = 60;
		cost = 300;
		mineBoundingTime = 0.25;
		mineBoundingDist = 1.2;
		mineInconspicuousness = 800;
		mineTrigger = "RangeTriggerBounding";
	};

	class APERSTripMine_Wire_Ammo: DirectionalBombBase {
		ace_frag_enabled = 0;
		ace_frag_metal = 1590;
		ace_frag_charge = 410;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_large"};
		// values from PMR-3 mine
		hit = 5;
		indirectHit = 5;
		indirectHitRange = 5;
		model = "\A3\Weapons_F\explosives\mine_AP_tripwire";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_tripwire_d";
		defaultMagazine = "APERSTripMine_Wire_Mag";
		icon = "iconExplosiveAP";
		soundHit[] = {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine",3.1622777,1,1000};
		minimumSafeZone = 0;
		explosionAngle = 360;
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineTrigger = "WireTrigger";
		mineInconspicuousness = 800;
	};

	class Tripflare_Ammo: APERSTripMine_Wire_Ammo {
		ace_frag_skip = 1;
		hit=0;
		indirectHit=0;
		indirectHitRange=0;
		defaultMagazine="Tripflare_Mag";
		soundTrigger[] = {"A3\Sounds_F\weapons\Flare_Gun\flaregun_1_shoot",3.5,1,1000};
		soundHit[] = {"",0,0,0};
		explosionEffects="Tripflare_Explosion_Effect";
		CraterEffects="";
		mineTrigger="WireTrigger";
	};
	class Tripflare_Ammo_Ground: Tripflare_Ammo {};
	class Tripflare_Ammo_White: Tripflare_Ammo {};
	class Tripflare_Ammo_Green: Tripflare_Ammo {};
	class Tripflare_Ammo_Red: Tripflare_Ammo {};
	class Tripflare_Ammo_Yellow: Tripflare_Ammo {};
	class Tripflare_Ammo_Ground_White: Tripflare_Ammo_Ground {};
	class Tripflare_Ammo_Ground_Green: Tripflare_Ammo_Ground {};
	class Tripflare_Ammo_Ground_Red: Tripflare_Ammo_Ground {};
	class Tripflare_Ammo_Ground_Yellow: Tripflare_Ammo_Ground {};

	class F_40mm_White;
	class Tripflare_Flare_White : F_40mm_White {
		triggerTime = 0;
		intensity = 20000;
        flareSize = 6;
		timeToLive = 30;
	};
	class Tripflare_Flare_Red: Tripflare_Flare_White {
		lightColor[]={0.5,0.25,0.25,0};
	};
	class Tripflare_Flare_Green : Tripflare_Flare_White {
		lightColor[]={0.25,0.5,0.25,0.0};
	};
	class Tripflare_Flare_Yellow : Tripflare_Flare_White {
		lightColor[]={0.5,0.5,0.25,0.0};
	};
};
