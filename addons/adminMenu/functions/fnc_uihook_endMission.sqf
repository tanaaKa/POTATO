#include "script_component.hpp"

params ["_side"];
TRACE_1("params",_side);

if (!GVAR(openEndMission)) exitWith {TRACE_1("locked", GVAR(openEndMission));};

private _debugMsg = format ["Ending mission in ten seconds for winning side %1", _side];
["potato_adminMsg", [_debugMsg, profileName, "#ALL"]] call CBA_fnc_globalEvent;

//Ocap
tnk_saveOcap =
{
	params ["_side"];
	
	_playableSideArray = [];
	{
		if ((playersNumber _x) > 0) then {
			_playableSideArray pushBack _x;
		};
	} forEach [WEST, EAST, RESISTANCE];
	if ((count _playableSideArray) > 1) then {
		_gameMode = "TvT";
	} else {
		_gameMode = "COOP";
	};
	
	[_side, "Mission ended", _gameMode] call ocap_fnc_exportData;
};
[_side] remoteExecCall ["tnk_saveOcap", 2];
remoteExecCall ["CMF_fnc_webhookEnd", 2];

// Call stats
[] remoteExec ["CMF_fnc_handleMissionEnd",2];
GVAR(openEndMission) = false; // Lock it to make sure stats is only called once

uiSleep 10;
[_side] remoteExecCall [QFUNC(endMission), 0];
