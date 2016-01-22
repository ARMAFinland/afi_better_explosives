class CfgMagazines
{
	class DemoCharge_Remote_Mag;
	class PressurePlate;
	class IEDUrbanBig_Remote_Mag: DemoCharge_Remote_Mag
	{
		displayName = "Big IED (Urban)";
		descriptionShort="122mm artillery shell.";
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
		displayName = "Big IED pressure plate (Urban)";
		descriptionShort="122mm artillery shell";
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
		displayName = "Big IED (Dug-in)";
		descriptionShort="122mm artillery shell";
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
		displayName = "Big IED pressure plate (Dug-in)";
		descriptionShort="122mm artillery shell";
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
		displayName = "Small IED (Urban)";
		descriptionShort="Hand granade";
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
		displayName = "Small IED pressure plate (Urban)";
		descriptionShort="Hand granade";
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
	class IEDLandMedium_Remote_Mag: IEDUrbanSmall_Remote_Mag
	{
		displayName = "Medium IED (Dug-in)";
		descriptionShort="81mm mortar bomb";
		ACE_SetupObject = "ACE_Explosives_Place_IEDLandSmall";
		class ACE_Triggers: ACE_Triggers
		{
			class Command: Command
			{
				ammo = "IEDLandSmall_Command_Ammo";
			};
		};
	};
	class IEDLandMedium_Pressure_Mag: IEDLandMedium_Remote_Mag
	{
		displayName = "Medium IED pressure plate (Dug-in)";
		descriptionShort="81mm mortar bomb";
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