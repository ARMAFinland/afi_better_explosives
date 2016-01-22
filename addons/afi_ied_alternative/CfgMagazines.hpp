class CfgMagazines
{
	class DemoCharge_Remote_Mag;
	class PressurePlate;
	class IEDUrbanBig_Remote_Mag: DemoCharge_Remote_Mag
	{
		displayName = "Big IED (Urban OF-462)";
		ACE_SetupObject = "ACE_Explosives_Place_IEDUrbanBig";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone"};
			class Command
			{
				FuseTime = 0.5;
				ammo = "IEDUrbanBig_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
		};
	};
	class IEDUrbanBig_Pressure_Mag: IEDUrbanBig_Remote_Mag
	{
		displayName = "Big IED pressure plate (Urban OF-462)";
		ACE_SetupObject = "ACE_Explosives_Place_IEDUrbanBig";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class Command
			{
				FuseTime = 0.5;
				ammo = "IEDUrbanBig_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
			class PressurePlate
			{
				displayName = "$STR_ace_explosives_PressurePlate";
				digDistance = 0;
				ammo = "IEDUrbanBig_Range_Ammo";
				pitch = 0;
			};
		};
	};
	class IEDLandBig_Remote_Mag: IEDUrbanBig_Remote_Mag
	{
		displayName = "Big IED (Dug-in OF-462)";
		ACE_SetupObject = "ACE_Explosives_Place_IEDLandBig";
		class ACE_Triggers: ACE_Triggers
		{
			class Command: Command
			{
				ammo = "IEDLandBig_Command_Ammo";
			};
		};
	};
	class IEDLandBig_Pressure_Mag: IEDLandBig_Remote_Mag
	{
		displayName = "Big IED pressure plate (Dug-in OF-462)";
		ACE_SetupObject = "ACE_Explosives_Place_IEDLandBig";
		class ACE_Triggers: ACE_Triggers
		{
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class Command: Command
			{
				ammo = "IEDLandBig_Command_Ammo";
			};
			class PressurePlate: PressurePlate
			{
				ammo = "IEDLandBig_Range_Ammo";
			};
		};
	};
	class IEDUrbanSmall_Remote_Mag: DemoCharge_Remote_Mag
	{
		displayName = "Small IED (Urban M67)";
		ACE_SetupObject = "ACE_Explosives_Place_IEDUrbanSmall";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone"};
			class Command
			{
				FuseTime = 0.5;
				ammo = "IEDUrbanSmall_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
		};
	};
	class IEDUrbanSmall_Pressure_Mag: IEDUrbanSmall_Remote_Mag
	{
		displayName = "Small IED pressure plate (Urban M67)";
		ACE_SetupObject = "ACE_Explosives_Place_IEDUrbanSmall";
		class ACE_Triggers
		{
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class Command
			{
				FuseTime = 0.5;
				ammo = "IEDUrbanSmall_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
			class PressurePlate
			{
				displayName = "$STR_ace_explosives_PressurePlate";
				digDistance = 0;
				ammo = "IEDUrbanSmall_Range_Ammo";
				pitch = 0;
			};
		};
	};
	class IEDLandSmall_Remote_Mag: IEDUrbanSmall_Remote_Mag
	{
		displayName = "Medium IED (Dug-in M362A1)";
		ACE_SetupObject = "ACE_Explosives_Place_IEDLandSmall";
		class ACE_Triggers: ACE_Triggers
		{
			class Command: Command
			{
				ammo = "IEDLandSmall_Command_Ammo";
			};
		};
	};
	class IEDLandSmall_Pressure_Mag: IEDLandSmall_Remote_Mag
	{
		displayName = "Medium IED pressure plate (Dug-in M362A1)";
		ACE_SetupObject = "ACE_Explosives_Place_IEDLandSmall";
		class ACE_Triggers: ACE_Triggers
		{
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class Command: Command
			{
				ammo = "IEDLandSmall_Command_Ammo";
			};
			class PressurePlate: PressurePlate
			{
				ammo = "IEDLandSmall_Range_Ammo";
			};
		};
	};
};