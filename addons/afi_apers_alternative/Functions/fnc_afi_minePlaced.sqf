params ["_unit", "_explosive", "_magazine", "_vars"];

_ammo = getText(configfile >> "CfgMagazines" >> _magazine >> "ammo");
_frag_enabled = getNumber(configFile >> "CfgAmmo" >> _ammo >> "ace_frag_enabled");
_frag_skip = getNumber(configFile >> "CfgAmmo" >> _ammo >> "ace_frag_skip");

if (_frag_enabled == 1 && _frag_skip == 0) then {
  [[fnc_afi_handleMineFrags, 0, [_explosive, _ammo]], CBA_fnc_addPerFrameHandler] remoteExec ["bis_fnc_call", 0];
};

if (_ammo find "Tripflare_Ammo" != -1) then {
  [_explosive, _ammo] spawn fnc_afi_activateTripflare;
};
