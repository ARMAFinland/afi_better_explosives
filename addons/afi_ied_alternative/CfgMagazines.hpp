class CfgMagazines {
	class DemoCharge_Remote_Mag;
	class PressurePlate;

	class IEDUrbanBig_Remote_Mag: DemoCharge_Remote_Mag {
		displayName = "Big urban IED";
		descriptionShort="Explosive device improvised from a 122mm artillery shell.";
		ACE_SetupObject = "ACE_Explosives_Place_IEDUrbanBig";
		class ACE_Triggers {
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone"};
			class Command {
				FuseTime = 0.5;
				ammo = "IEDUrbanBig_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
		};
	};

	class IEDUrbanBig_Pressure_Mag: IEDUrbanBig_Remote_Mag {
		displayName = "Big urban IED (pressure plate)";
		descriptionShort="Explosive device improvised from a 122mm artillery shell.";
		class ACE_Triggers {
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class PressurePlate {
				displayName = "$STR_ace_explosives_PressurePlate";
				ammo = "IEDUrbanBig_Range_Ammo";
				pitch = 0;
			};
		};
	};

	class IEDLandBig_Remote_Mag: IEDUrbanBig_Remote_Mag {
		displayName = "Big dug-in IED";
		descriptionShort="Explosive device improvised from a 122mm artillery shell.";
		ACE_SetupObject = "ACE_Explosives_Place_IEDLandBig";
		class ACE_Triggers: ACE_Triggers {
			class Command: Command {
				digDistance = 0.02;
				ammo = "IEDLandBig_Command_Ammo";
			};
			class DeadmanSwitch: Command {};
			class Cellphone: Command {};
		};
	};

	class IEDLandBig_Pressure_Mag: IEDLandBig_Remote_Mag {
		displayName = "Big dug-in IED (pressure plate)";
		descriptionShort="Explosive device improvised from a 122mm artillery shell.";
		ACE_SetupObject = "ACE_Explosives_Place_IEDLandBig";
		class ACE_Triggers: ACE_Triggers {
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class PressurePlate: PressurePlate {
				digDistance = 0.02;
				ammo = "IEDLandBig_Range_Ammo";
			};
			class DeadmanSwitch: Command {};
			class Cellphone: Command {};
		};
	};

	class IEDUrbanSmall_Remote_Mag: DemoCharge_Remote_Mag {
		displayName = "Small urban IED";
		descriptionShort="Explosive device improvised from a hand grenade.";
		ACE_SetupObject = "ACE_Explosives_Place_IEDUrbanSmall";
		class ACE_Triggers {
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone"};
			class Command {
				FuseTime = 0.5;
				ammo = "IEDUrbanSmall_Command_Ammo";
			};
			class DeadmanSwitch: Command{};
			class Cellphone: Command{};
		};
	};

	class IEDUrbanSmall_Pressure_Mag: IEDUrbanSmall_Remote_Mag {
		displayName = "Small urban IED (pressure plate)";
		descriptionShort="Explosive device improvised from a hand grenade.";
		class ACE_Triggers {
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class PressurePlate {
				displayName = "$STR_ace_explosives_PressurePlate";
				digDistance = 0;
				ammo = "IEDUrbanSmall_Range_Ammo";
				pitch = 0;
			};
		};
	};

	class IEDLandMedium_Remote_Mag: IEDUrbanSmall_Remote_Mag {
		displayName = "Medium dug-in IED";
		descriptionShort="Explosive device improvised from a 81mm mortar shell.";
		ACE_SetupObject = "ACE_Explosives_Place_IEDLandSmall";
		class ACE_Triggers: ACE_Triggers {
			class Command: Command {
				digDistance = 0.02;
				ammo = "IEDLandSmall_Command_Ammo";
			};
			class DeadmanSwitch: Command {};
			class Cellphone: Command {};
		};
	};

	class IEDLandMedium_Pressure_Mag: IEDLandMedium_Remote_Mag {
		displayName = "Medium dug-in IED (pressure plate)";
		descriptionShort="Explosive device improvised from a 81mm mortar shell.";
		class ACE_Triggers: ACE_Triggers {
			SupportedTriggers[] = {"Command","DeadmanSwitch","Cellphone","PressurePlate"};
			class DeadmanSwitch: Command {};
			class Cellphone: Command {};
			class PressurePlate: PressurePlate {
				digDistance = 0.02;
				ammo = "IEDLandSmall_Range_Ammo";
			};
		};
	};

	class IEDLandSmall_Remote_Mag: IEDLandMedium_Remote_Mag {
		displayName = "Medium dug-in IED";
		descriptionShort="Explosive device improvised from a 81mm mortar shell.";
		scope = 1;
	};
};
