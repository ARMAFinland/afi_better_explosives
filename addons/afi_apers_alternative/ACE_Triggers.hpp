class ACE_Triggers {
    class Command {
        onPlace = "_this call fnc_afi_minePlaced; _this call ace_explosives_fnc_AddClacker; false";
    };
    class Tripwire {
        onPlace = "_this call fnc_afi_minePlaced; false";
    };
    class PressurePlate {
        onPlace = "_this call fnc_afi_minePlaced; false";
    };
};
