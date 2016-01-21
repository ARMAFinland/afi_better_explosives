class CfgAmmo
{
	class PipeBombCore;
    class PipeBombBase: PipeBombCore
	{
		ACE_DefuseTime = 10;
	};
	class IEDUrbanBig_Remote_Ammo: PipeBombBase
	{
		ace_frag_enabled = 1;
        ace_frag_metal = 140000;
        ace_frag_charge = 87000;
        ace_frag_gurney_c = 2320;
        ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_large","ACE_frag_large","ACE_frag_large_HD","ACE_frag_large","ACE_frag_huge","ACE_frag_huge_HD","ACE_frag_huge"};
		
		triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.05;
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
        ace_frag_metal = 140000;
        ace_frag_charge = 87000;
        ace_frag_gurney_c = 2320;
        ace_frag_gurney_k = 1/2;
		ace_frag_classes[] = {"ACE_frag_large","ACE_frag_large","ACE_frag_large_HD","ACE_frag_large","ACE_frag_huge","ACE_frag_huge_HD","ACE_frag_huge"};
		
		triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.05;
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
		triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.05;
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
		triggerWhenDestroyed = 1;
		ACE_explodeOnDefuse = 0.05;
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