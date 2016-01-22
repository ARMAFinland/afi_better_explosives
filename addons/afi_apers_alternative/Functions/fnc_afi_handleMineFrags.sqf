params ["_args", "_pfID"];
_args params ["_explosive", "_ammo"];

if (damage _explosive == 1) then {
    ["", getPosASL _explosive, "", _ammo, player] call ace_frag_fnc_frago;
    [_pfID] call cba_fnc_removePerFrameHandler;
};
