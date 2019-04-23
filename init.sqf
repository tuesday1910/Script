/*
    File: init.sqf
    Author: Benjamin 11-12-18 Facebook : https://www.facebook.com/chaiwatkpop
    
    Description:
    
*/
StartProgress = false;

if (hasInterface) then {
[] execVM "briefing.sqf"; //Load Briefing
};


[] execVM "KRON_Strings.sqf";
[] execVM "scripts\safezone.sqf";
[] execVM "scripts\removesnakes.sqf";
[] execVM "scripts\zlt_fastrope.sqf";
[] execVM "scripts\Status_Bar\init_statusBar.sqf"; // Statusbar
[] execVM "PlayerMarker.sqf";
[
	15*60, // seconds to delete dead bodies (0 means don't delete) 
	10*60, // seconds to delete dead vehicles (0 means don't delete)
	1*60, // seconds to delete immobile vehicles (0 means don't delete)
	15*60, // seconds to delete dropped weapons (0 means don't delete)
	1*60, // seconds to deleted planted explosives (0 means don't delete)
	3*60 // seconds to delete dropped smokes/chemlights (0 means don't delete)
] execVM "scripts\fn_cleanup.sqf";



[] spawn {
	while{true} do {
		uiSleep 10;
		0 setFog 0;
		10 setRain 0;
		uiSleep 590;
		
	};
};

StartProgress = true;

if(isDedicated && isNil("life_market_prices")) then
{
[] call life_fnc_marketconfiguration;
diag_log "Market prices generated!";
 
"life_market_prices" addPublicVariableEventHandler
{
diag_log format["Market prices updated! %1", _this select 1];
};

//Start server fsm
[] execFSM "core\fsm\server.fsm";
diag_log "Server FSM executed";
};
CHVD_allowNoGrass = true;
//CHVD_maxView = 7500;
//CHVD_maxObj = 5000;








///////////////////////// DEBUGING STUFF //////////////////////////
/*
CHVD_fnc_drawDebug = {
	hintSilent format ["
		VD: %1
		OVD: %2
		TG: %3
	", viewDistance, getObjectViewDistance select 0, getTerrainGrid];
};

[] spawn {
	for "_i" from 0 to 1 step 0 do {
		_currentVD = viewDistance;			
		waitUntil {_currentVD != viewDistance};
		call CHVD_fnc_drawDebug;
	};
};

[] spawn {
	for "_i" from 0 to 1 step 0 do {
		_currentVD = getObjectViewDistance select 0;			
		waitUntil {_currentVD != getObjectViewDistance select 0};
		call CHVD_fnc_drawDebug;
	};
};

[] spawn {
	for "_i" from 0 to 1 step 0 do {
		_currentVD = getTerrainGrid;			
		waitUntil {_currentVD != getTerrainGrid};
		call CHVD_fnc_drawDebug;
	};
};


