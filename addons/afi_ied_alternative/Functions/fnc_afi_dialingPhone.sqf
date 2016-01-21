/*
 * Author: Garth 'L-H' de Wet
 * Modified by Anatooli
 * Performs the dial tones and detonation of explosive.
 *
 * Arguments:
 * 0: Unit to do dialing <OBJECT>
 * 1: Index <NUMBER>
 * 2: Dialing points <ARRAY>
 * 3: IED code <STRING>
 *
 * Return Value:
 * None
 *
 * Example:
 * [FUNC(dialingPhone), 0.25, [_unit,4,_arr,_code]] call CALLSTACK(CBA_fnc_addPerFrameHandler);
 *
 * Public: No
 */
#include "\z\ace\addons\explosives\script_component.hpp"

params ["_args", "_pfID"];
_args params ["_unit", "_i", "_arr", "_code","_ringtone_file", "_ringtone_duration"];

if ((_i mod 4) == 0) then {
    playSound3D ['afi_ied_alternative\Data\Audio\DialTone.wss', objNull, false, (_unit modelToWorldVisual [0,0.2,2]), 15,1,2.5];
};
ctrlSetText [1400,format["Calling%1",_arr select (_i - 4)]];

private "_explosive";
_explosive = [_code] call FUNC(getSpeedDialExplosive);
if (_i >= (count _arr)) then {
    [_pfID] call CALLSTACK(cba_fnc_removePerFrameHandler);
    if ((count _explosive) > 0) then {
        [_unit, -1, [_explosive select 0, _explosive select 2]] call FUNC(detonateExplosive);
    };
    _unit setVariable [QGVAR(Dialing), false, true];
    if (_unit == ace_player) then {
        ctrlSetText [1400,"Call Ended!"];
    };
};
if (_i == (count _arr - round (_ringtone_duration / 0.25) + 3)) then {
    if ((count _explosive) > 0) then {
        playSound3D [_ringtone_file, objNull, false, getPosASL (_explosive select 0),3.16228,1,75];
    };
};
_args set [1, _i + 1];
