// #define DEBUG_MODE_FULL
#include "script_component.hpp"

// turn off RHS engine startup script
RHS_ENGINE_STARTUP_OFF = 1; // any non-nil value turns this off

// Disable faction based nametag icons (because we just use the base factions for everything)
ace_nametags_useFactionIcons = false;

if (isServer) then {
    private _tvtSettings = [];
    private _coopSettings = [];
    #include "CMF_COOPSettings.sqf"
    #include "CMF_TVTSettings.sqf"

    // COOPs
    // "Easier" settings with more health
    if (potato_miscMedical_isTvt) then {
		INFO_1("Setting server values to TVT for [%1] settings", count _tvtSettings);
        {
            _x params ["_settingName", "_settingValue", ["_force", false]];
            if (isNil _settingName) then { WARNING_1("Setting not init: %1",_settingName); };
            private _ret = [_settingName, _settingValue, [0, 2] select _force, "server"] call CBA_settings_fnc_set;
            TRACE_4("Setting",_settingName,_settingValue, _force, _ret);
        } forEach _tvtSettings;

        // Settings Test:
        [{
            params ["_tvtSettings"];
            INFO_1("Checking [%1] settings", count _tvtSettings);

            {
                _x params ["_settingName", "_settingValue", "", ["_skipWarning", false]];
                TRACE_2("",_settingName,_settingValue);
                if (!((missionNamespace getVariable [_settingName, -999]) isEqualTo _settingValue)) then {
                    if (_skipWarning) exitWith {};
                    private _log = format ["Warning: TVT Setting [%1] not expected [%2] current [%3]", _settingName, _settingValue, missionNamespace getVariable _settingName];
                    ["potato_adminMsg", [_log, "Mission"]] call CBA_fnc_globalEvent;
                };
            } forEach _tvtSettings;
        }, [_tvtSettings], 4] call CBA_fnc_waitAndExecute;
	} else { // TVT Settings - "harder" - less health
		INFO_1("Setting server values to COOP for [%1] settings", count _coopSettings);
        {
            _x params ["_settingName", "_settingValue", ["_force", false]];
            if (isNil _settingName) then { WARNING_1("Setting not init: %1",_settingName); };
            private _ret = [_settingName, _settingValue, [0, 2] select _force, "server"] call CBA_settings_fnc_set;
            TRACE_4("Setting",_settingName,_settingValue, _force, _ret);
        } forEach _coopSettings;

        // Settings Test:
        [{
            params ["_coopSettings"];
            INFO_1("Checking [%1] settings", count _coopSettings);

            {
                _x params ["_settingName", "_settingValue", "", ["_skipWarning", false]];
                TRACE_2("",_settingName,_settingValue);
                if (!((missionNamespace getVariable [_settingName, -999]) isEqualTo _settingValue)) then {
                    if (_skipWarning) exitWith {};
                    private _log = format ["Warning: COOP Setting [%1] not expected [%2] current [%3]", _settingName, _settingValue, missionNamespace getVariable _settingName];
                    ["potato_adminMsg", [_log, "Mission"]] call CBA_fnc_globalEvent;
                };
            } forEach _coopSettings;
        }, [_coopSettings], 4] call CBA_fnc_waitAndExecute;
	};
};
