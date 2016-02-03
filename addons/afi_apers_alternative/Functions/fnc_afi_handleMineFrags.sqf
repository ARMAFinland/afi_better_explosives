systemchat "DEBUG: AT START OF HANDLE MINE FRAGS SCRIPT"; // This will dump text to the screen
diag_log text "DEBUG: AT START OF HANDLE MINE FRAGS SCRIPT"; // This will dump text to the rpt file

params ["_args", "_pfID"];
_args params ["_explosive", "_ammo"];

if (damage _explosive == 1) then {
    ["", getPosASL _explosive, "", _ammo, ACE_player] call ace_frag_fnc_frago;
    [_pfID] call cba_fnc_removePerFrameHandler;
};

systemchat "DEBUG: AT END O HANDLE MINE FRAGS SCRIPT"; // This will dump text to the screen
diag_log text "DEBUG: AT END OF HANDLE MINE FRAGS SCRIPT"; // This will dump text to the rpt file