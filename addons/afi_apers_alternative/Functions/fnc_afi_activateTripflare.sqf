params ["_explosive", "_ammo"];

_altitude = 70;
_velocity = [wind select 0,wind select 1,30];
_sound = "SN_Flare_Fired_4";
_soundSourceClass = "SoundFlareLoop_F";

_pos = getPos _explosive;
_pos set [2,_altitude];

_flare = switch(_ammo) do {
  case "Tripflare_Ammo_Red": { "F_40mm_Red" };
  case "Tripflare_Ammo_Yellow": { "F_40mm_Yellow" };
  case "Tripflare_Ammo_Green": { "F_40mm_Green" };
  case "Tripflare_Ammo_White": { "F_40mm_White" };
	case "Tripflare_Ammo";
	default { "F_40mm_Red" };
};

waitUntil {sleep 0.1; !alive _explosive};

_projectile = createvehicle [_flare,_pos,[],0,"none"];
_projectile setpos _pos;
_projectile setvelocity _velocity;

[[_projectile,_sound,"say3D"],"bis_fnc_sayMessage"] call bis_fnc_mp;
_soundSource = createSoundSource [_soundSourceClass,_pos,[],0];

waituntil {
  _soundSource setposatl getposatl _projectile;
  sleep 0.1;
  isnull _projectile
};
deletevehicle _projectile;
deletevehicle _soundSource;
