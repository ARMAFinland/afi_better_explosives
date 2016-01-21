class CfgAmmo
{
	class PipeBombCore;
    class PipeBombBase: PipeBombCore
	{
		ACE_DefuseTime = 20;
		ace_frag_skip = 0;
		ace_frag_force = 1;
	};
	class IEDUrbanBig_Remote_Ammo: PipeBombBase
	{
		ace_frag_enabled = 1;
		ace_frag_metal = 37260;
		ace_frag_charge = 6620;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_large"};
		// values from M107 projectile
		indirectHit = 1;
		indirectHitRange = 1;	
		triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.25;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",0.8,1,40};
	};
	class IEDUrbanBig_Command_Ammo: IEDUrbanBig_Remote_Ammo
	{
		mineTrigger = "RemoteTrigger";
	};
	class IEDUrbanBig_Range_Ammo: IEDUrbanBig_Remote_Ammo
	{
		mineTrigger = "RangeTriggerIEDBig";
	};
	class IEDUrbanSmall_Remote_Ammo: PipeBombBase
	{
		ace_frag_enabled = 1;
		ace_frag_metal = 7470;
		ace_frag_charge = 3640;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_medium"};
		// values from HE M3 Shell
		indirectHit = 1;
		indirectHitRange = 1;
		triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.25;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",0.8,1,40};
	};
	class IEDUrbanSmall_Command_Ammo: IEDUrbanSmall_Remote_Ammo
	{
		mineTrigger = "RemoteTrigger";
	};
	class IEDUrbanSmall_Range_Ammo: IEDUrbanSmall_Remote_Ammo
	{
		mineTrigger = "RangeTriggerIEDSmall";
	};
	class IEDLandBig_Remote_Ammo: PipeBombBase
	{
		ace_frag_enabled = 1;
		ace_frag_metal = 37260;
		ace_frag_charge = 6620;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_large"};
		// values from M107 projectile
		indirectHit = 1;
		indirectHitRange = 1;	
		triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.25;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",0.8,1,40};
	};
	class IEDLandBig_Command_Ammo: IEDLandBig_Remote_Ammo
	{
		mineTrigger = "RemoteTrigger";
	};
	class IEDLandBig_Range_Ammo: IEDLandBig_Remote_Ammo
	{
		mineTrigger = "RangeTriggerIEDSmall";
	};
	class IEDLandSmall_Remote_Ammo: PipeBombBase
	{
		ace_frag_enabled = 1;
		ace_frag_metal = 7470;
		ace_frag_charge = 3640;
		ace_frag_gurney_c = 2440;
		ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_medium"};
		// values from HE M3 Shell
		indirectHit = 1;
		indirectHitRange = 1;
		triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.25;
		soundTrigger[] = {"A3\Sounds_F\weapons\mines\mech_trigger_2",0.8,1,40};
	};
	class IEDLandSmall_Command_Ammo: IEDLandSmall_Remote_Ammo
	{
		mineTrigger = "RemoteTrigger";
	};
	class IEDLandSmall_Range_Ammo: IEDLandSmall_Remote_Ammo
	{
		mineTrigger = "RangeTriggerIEDSmall";
	};
};