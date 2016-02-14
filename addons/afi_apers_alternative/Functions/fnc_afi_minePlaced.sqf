params ["_unit", "_explosive", "_magazine", "_vars"];

_ammo = getText(configfile >> "CfgMagazines" >> _magazine >> "ammo");
if ((count _ammo) == 0) then {
	_ammo = typeOf _explosive;
};

if (_ammo find "Tripflare_Ammo" != -1) then {
  [_explosive, _ammo] spawn fnc_afi_activateTripflare;
};
