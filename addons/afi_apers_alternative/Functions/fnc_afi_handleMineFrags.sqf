#include "\z\ace\addons\explosives\script_component.hpp"

params ["_args", "_pfID"];
_args params ["_unit", "_explosive", "_magazine", "_vars"];

if (damage _explosive == 1) then {
    _ammo = getText(configfile >> "CfgMagazines" >> _magazine >> "ammo");
    _enabled = getNumber(configFile >> "CfgAmmo" >> _ammo >> "ace_frag_enabled");
    _skip = getNumber(configFile >> "CfgAmmo" >> _ammo >> "ace_frag_skip");

    if (_enabled == 1 && _skip == 0) then {
        ["", getPosASL _explosive, "", _ammo, player] call ace_frag_fnc_frago;
    };

    [_pfID] call cba_fnc_removePerFrameHandler;
};