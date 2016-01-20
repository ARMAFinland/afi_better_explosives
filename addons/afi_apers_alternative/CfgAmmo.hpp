class cfgAmmo
{
	class MineCore;
	class BoundingMineCore;
	class DirectionalBombCore;
	class MineBase: MineCore
	{
		icon = "iconExplosiveAT";
		mapsize = 1;
		explosionType = "mine";
		triggerWhenDestroyed = 1;
		underwaterHitRangeCoef = 2;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",3.1622777,1,50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1",0.56234133,1,30};
		soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a",0.56234133,1,30};
		aiAmmoUsageFlags = 16;
	};
	class BoundingMineBase: BoundingMineCore
	{
		mineBoundingTime = 5;
		mineBoundingDist = 3;
		icon = "iconExplosiveAP";
		mapsize = 1;
		explosionType = "mine";
		triggerWhenDestroyed = 1;
		underwaterHitRangeCoef = 0.5;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_activate_mine_1",0.56234133,1,50};
		soundActivation[] = {"A3\Sounds_F\weapons\Mines\electron_activate_mine_1",0.56234133,1,50};
		soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a",0.56234133,1,50};
	};
	class DirectionalBombBase: DirectionalBombCore
	{
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
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",0.56234133,1,50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1",0.56234133,1,50};
		soundDeactivation[] = {"A3\Sounds_F\weapons\mines\deactivate_mine_3a",0.56234133,1,50};
		craterShape = "\A3\weapons_f\empty.p3d";
	};
	class APERSMine_Range_Ammo: MineBase
	{
		hit = 3;
		indirectHit = 3;
		indirectHitRange = 5;
		model = "\A3\Weapons_F\explosives\mine_ap";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_ap_d";
		icon = "iconExplosiveAP";
		defaultMagazine = "APERSMine_Range_Mag";
		soundHit1[] = {"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_01",3.1622777,1,1500};
		soundHit2[] = {"A3\Sounds_F\arsenal\explosives\mines\AP_mines_explosion_02",3.1622777,1,2000};
		multiSoundHit[] = {"soundHit1",0.5,"soundHit2",0.5};
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",0.56234133,1,50};
		soundActivation[] = {"A3\Sounds_F\weapons\mines\electron_activate_mine_1",0.56234133,1,50};
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineInconspicuousness = 30;
		mineTrigger = "RangeTriggerShort";
	};
	class APERSBoundingMine_Range_Ammo: BoundingMineBase
	{
		hit = 20;
		indirectHit = 20;
		indirectHitRange = 20;
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
		mineBoundingDist = 1;
		mineInconspicuousness = 40;
		mineTrigger = "RangeTriggerBounding";
	};
	class APERSTripMine_Wire_Ammo: DirectionalBombBase
	{
		hit = 5;
		indirectHit = 5;
		indirectHitRange = 10;
		model = "\A3\Weapons_F\explosives\mine_AP_tripwire";
		mineModelDisabled = "\A3\Weapons_F\explosives\mine_AP_tripwire_d";
		defaultMagazine = "APERSTripMine_Wire_Mag";
		icon = "iconExplosiveAP";
		soundHit[] = {"\A3\Sounds_F\arsenal\explosives\mines\Explosion_tripwire_landmine",3.1622777,1,1500};
		minimumSafeZone = 0;
		explosionAngle = 360;
		explosionEffects = "MineExplosion";
		CraterEffects = "MineCrater";
		whistleDist = 8;
		cost = 200;
		mineTrigger = "WireTrigger";
		mineInconspicuousness = 50;
	};
};