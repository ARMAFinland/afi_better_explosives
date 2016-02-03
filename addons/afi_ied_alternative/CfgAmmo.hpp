class CfgAmmo {
	class PipeBombCore;
	class PipeBombBase: PipeBombCore {
		ACE_DefuseTime = 20;
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};

	class IEDUrbanBig_Remote_Ammo: PipeBombBase {
		ace_frag_enabled = 1;
		ace_frag_metal = 17605;
		ace_frag_charge = 3675;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_medium", "ACE_frag_medium_HD", "ACE_frag_small"};
		ace_frag_force = 0;
		// values from 122 mm howitzer OF-462 shell
		hit = 500;
		indirectHit = 500;
		indirectHitRange = 5;
		triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.25;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",0.8,1,40};
	};
	class IEDUrbanBig_Command_Ammo: IEDUrbanBig_Remote_Ammo {
		mineTrigger = "RemoteTrigger";
	};
	class IEDUrbanBig_Range_Ammo: IEDUrbanBig_Remote_Ammo {
		mineTrigger = "RangeTriggerIEDBig";
	};

	class IEDUrbanSmall_Remote_Ammo: PipeBombBase {
		ace_frag_enabled = 1;
		ace_frag_metal = 220;
		ace_frag_charge = 180;
		ace_frag_gurney_c = 2700;
		ace_frag_gurney_k = 3/5;
		ace_frag_classes[] = {"ACE_frag_tiny_HD"};
		// values from M67 grenade
		hit = 3;
		indirectHit = 3;
		indirectHitRange = 5;
		triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.25;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",0.8,1,40};
	};
	class IEDUrbanSmall_Command_Ammo: IEDUrbanSmall_Remote_Ammo {
		mineTrigger = "RemoteTrigger";
	};
	class IEDUrbanSmall_Range_Ammo: IEDUrbanSmall_Remote_Ammo {
		mineTrigger = "RangeTriggerIEDSmall";
	};

	class IEDLandBig_Remote_Ammo: PipeBombBase {
		ace_frag_enabled = 1;
		ace_frag_metal = 17605;
		ace_frag_charge = 3675;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_medium", "ACE_frag_medium_HD", "ACE_frag_small"};
		// values from 122 mm howitzer OF-462 shell
		hit = 500;
		indirectHit = 500;
		indirectHitRange = 5;
		triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.25;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",0.8,1,40};
	};
	class IEDLandBig_Command_Ammo: IEDLandBig_Remote_Ammo {
		mineTrigger = "RemoteTrigger";
	};
	class IEDLandBig_Range_Ammo: IEDLandBig_Remote_Ammo {
		mineTrigger = "RangeTriggerIEDSmall";
	};

	class IEDLandSmall_Remote_Ammo: PipeBombBase {
		ace_frag_enabled = 1;
		ace_frag_metal = 3320;
		ace_frag_charge = 950;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_medium_HD", "ACE_frag_small", "ACE_frag_small_HD"};
		// values from M362A1 81mm shell
		hit = 25;
		indirectHit = 25;
		indirectHitRange = 5;
		triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.25;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",0.8,1,40};
	};
	class IEDLandSmall_Command_Ammo: IEDLandSmall_Remote_Ammo {
		mineTrigger = "RemoteTrigger";
	};
	class IEDLandSmall_Range_Ammo: IEDLandSmall_Remote_Ammo {
		mineTrigger = "RangeTriggerIEDSmall";
	};
};
