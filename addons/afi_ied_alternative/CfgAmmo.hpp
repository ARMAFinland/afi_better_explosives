class CfgAmmo
{
	class PipeBombBase;
	class IEDUrbanBig_Remote_Ammo: PipeBombBase
	{
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