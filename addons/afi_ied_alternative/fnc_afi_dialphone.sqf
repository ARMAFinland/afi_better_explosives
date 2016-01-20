/*
 * Author: Garth 'L-H' de Wet
 * Dials the number passed and detonates the explosive.
 *
 * Arguments:
 * 0: Unit to do dialing <OBJECT>
 * 1: Code to dial <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [ace_player,"2131"] call ACE_explosives_fnc_dialPhone;
 *
 * Public: Yes
 */
#include "\z\ace\addons\explosives\script_component.hpp"

params ["_unit", "_code"];
TRACE_2("params",_unit,_code);

private ["_arr", "_ran", "_i"];

_ringtones = [
  ["ringtone_1.wss", 3.5], ["ringtone_2.wss", 3.7], ["ringtone_3.wss", 1.7],
  ["ringtone_4.wss", 2.1], ["ringtone_5.wss", 3.8], ["ringtone_6.wss", 3.0]
];
_ringtones call BIS_fnc_selectRandom params ["_ringtone_filename", "_ringtone_duration"];
_ringtone_file = format ["afi_ied_alternative\Data\Audio\%1", _ringtone_filename];

if (_unit getVariable [QGVAR(Dialing),false]) exitWith {};
if !(alive _unit) exitWith {};
_unit setVariable [QGVAR(Dialing), true, true];

_ran =  ceil (_ringtone_duration) + 1 + ceil random 4;
_arr = [];
for [{_i=0}, {_i<_ran}, {_i=_i+1}] do {
    _arr = _arr + ['.','..','...',''];
};
if (_unit == ace_player) then {
    ctrlSetText [1400,"Calling"];
    [fnc_afi_dialingPhone, 0.25, [_unit,4,_arr,_code,_ringtone_file,_ringtone_duration]] call CALLSTACK(CBA_fnc_addPerFrameHandler);
} else {
    private ["_explosive"];
    _explosive = [_code] call FUNC(getSpeedDialExplosive);
    if ((count _explosive) > 0) then {
        [{
            playSound3D ['afi_ied_alternative\Data\Audio\Cellphone_Ring.wss',objNull, false, getPosASL (_this select 1),3.16228,1,75];
            (_this select 0) setVariable [QGVAR(Dialing), false, true];
        }, [_unit,_explosive select 0], 0.25 * (count _arr - 4)] call EFUNC(common,waitAndExecute);
        [_explosive select 0,(0.25 * (count _arr - 1)) + (_explosive select 2)] call FUNC(startTimer);
    };
};
