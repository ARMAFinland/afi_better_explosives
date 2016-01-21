class ACE_Triggers {
    class Command {
        onPlace = "[fnc_afi_handleMineFrags, 0, _this] call CBA_fnc_addPerFrameHandler; _this call ace_explosives_fnc_AddClacker; false";
    };
    class Tripwire {
        onPlace = "[fnc_afi_handleMineFrags, 0, _this] call CBA_fnc_addPerFrameHandler; false";
    };
    class PressurePlate {
        onPlace = "[fnc_afi_handleMineFrags, 0, _this] call CBA_fnc_addPerFrameHandler; false";
    };
};