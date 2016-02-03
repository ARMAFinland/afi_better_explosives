systemchat "DEBUG: AT START OF INIT SCRIPT"; // This will dump text to the screen
diag_log text "DEBUG: AT START OF INIT SCRIPT"; // This will dump text to the rpt file

fnc_afi_minePlaced = compile preprocessFileLineNumbers "afi_apers_alternative\Functions\fnc_afi_minePlaced.sqf";
fnc_afi_handleMineFrags = compile preprocessFileLineNumbers "afi_apers_alternative\Functions\fnc_afi_handleMineFrags.sqf";
//["afi_fragEvent", {[fnc_afi_handleMineFrags, 0, _this] call CBA_fnc_addPerFrameHandler;}] call ACE_common_fnc_addEventHandler;
fnc_afi_activateTripflare = compile preprocessFileLineNumbers "afi_apers_alternative\Functions\fnc_afi_activateTripflare.sqf";

systemchat "DEBUG: AT END OF INIT SCRIPT"; // This will dump text to the screen
diag_log text "DEBUG: AT END OF INIT SCRIPT"; // This will dump text to the rpt file
