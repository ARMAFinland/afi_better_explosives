class ACE_Triggers {
    class Command;
    class Cellphone: Command {
        onPlace = "[fnc_afi_handleMineFrags, 0, _this] call CBA_fnc_addPerFrameHandler; _this call ace_explosives_fnc_addCellphoneIED; false";
    };
};