params ["_explosive", "_ammo"];
_velocity = [wind select 0,wind select 1,15];
_sound = "Flare_whistle";
_soundSourceClass = "SoundFlareLoop_F";

switch(_ammo) do {
  case "Tripflare_Ammo_Red": { ["Tripflare_Flare_Red", 100] };
  case "Tripflare_Ammo_Yellow": { ["Tripflare_Flare_Yellow", 100] };
  case "Tripflare_Ammo_Green": { ["Tripflare_Flare_Green", 100] };
  case "Tripflare_Ammo_White": { ["Tripflare_Flare_White", 100] };

  case "Tripflare_Ammo_Ground_Red": { ["Tripflare_Flare_Red", 0.1] };
  case "Tripflare_Ammo_Ground_Yellow": { ["Tripflare_Flare_Yellow", 0.1] };
  case "Tripflare_Ammo_Ground_Green": { ["Tripflare_Flare_Green", 0.1] };
  case "Tripflare_Ammo_Ground_White": { ["Tripflare_Flare_White", 0.1] };

	default { ["Tripflare_Flare_Red", 100] };
} params ["_flare", "_altitude"];

_pos = getPos _explosive;
_pos set [2,_altitude];

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
