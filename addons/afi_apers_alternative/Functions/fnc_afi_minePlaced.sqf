params ["_unit", "_explosive", "_magazine", "_vars"];

_ammo = getText(configfile >> "CfgMagazines" >> _magazine >> "ammo");
if ((count _ammo) == 0) then {
	_ammo = typeOf _explosive;
};

_frag_enabled = getNumber(configFile >> "CfgAmmo" >> _ammo >> "ace_frag_enabled");
_frag_skip = getNumber(configFile >> "CfgAmmo" >> _ammo >> "ace_frag_skip");

if (_frag_enabled == 1 && _frag_skip == 0) then {
    ["afi_fragEvent",  [_explosive, _ammo]] call ACE_common_fnc_globalEvent;
};

if (_ammo find "Tripflare_Ammo" != -1) then {
  [_explosive, _ammo] spawn fnc_afi_activateTripflare;
};
