#include "..\..\script_macros.hpp"
/*
    File: fn_requestReceived.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Called by the server saying that we have a response so let's
    sort through the information, validate it and if all valid
    set the client up.
*/
private ["_array"];
life_session_tries = life_session_tries + 1;
if (life_session_completed) exitWith {}; //Why did this get executed when the client already initialized? Fucking arma...
if (life_session_tries > 3) exitWith {cutText[localize "STR_Session_Error","BLACK FADED"]; 0 cutFadeOut 999999999;};

0 cutText [localize "STR_Session_Received","BLACK FADED"];
0 cutFadeOut 9999999;

//Error handling and junk..
if (isNil "_this") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if (_this isEqualType "") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if (count _this isEqualTo 0) exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if ((_this select 0) isEqualTo "Error") exitWith {[] call SOCK_fnc_insertPlayerInfo;};
if (!(getPlayerUID player isEqualTo (_this select 0))) exitWith {[] call SOCK_fnc_dataQuery;};

//Lets make sure some vars are not set before hand.. If they are get rid of them, hopefully the engine purges past variables but meh who cares.
if (!isServer && (!isNil "life_adminlevel" || !isNil "life_coplevel" || !isNil "life_donorlevel")) exitWith {
    [profileName,getPlayerUID player,"VariablesAlreadySet"] remoteExecCall ["SPY_fnc_cookieJar",RSERV];
    [profileName,format ["Variables set before client initialization...\nlife_adminlevel: %1\nlife_coplevel: %2\nlife_donorlevel: %3",life_adminlevel,life_coplevel,life_donorlevel]] remoteExecCall ["SPY_fnc_notifyAdmins",RCLIENT];
    sleep 0.9;
    failMission "SpyGlass";
};

if(profileName != _this select 1) exitWith {
hint format["Your old nickname %1",_this select 1];
[format["For your key is fixed another nickname, enter your old nickname in the profile of the game!<br/><br/>Your old nickname <t color='#b20303'>%1</t><br/><br/>If you have any problems with the change nickname - refer to the forum <t color='#00FF33'>TS3 planetstudio.ts3thai.net</t>",
_this select 1],
"Registered nickname change",
"adopt"
] call BIS_fnc_guiMessage;
["NameExists",false,false] call BIS_fnc_endMission;
};

//Parse basic player information.
CASH = parseNumber (_this select 2);
BANK = parseNumber (_this select 3);
CONST(life_adminlevel,parseNumber (_this select 4));
if (LIFE_SETTINGS(getNumber,"donor_level") isEqualTo 1) then {
    CONST(life_donorlevel,parseNumber (_this select 5));
} else {
    CONST(life_donorlevel,0);
};

//Loop through licenses
if (count (_this select 6) > 0) then {
    {missionNamespace setVariable [(_x select 0),(_x select 1)];} forEach (_this select 6);
};
if(license_civ_merc) then { player setVariable["mercenary",true,true];};
if(license_civ_taxi) then { player setVariable["taxi",true,true];};
if(license_civ_dime) then { player setVariable["dime",true,true];};

switch(FETCH_CONST(life_donorlevel)) do{	
case 1: { player setVariable["VIP1",true,true];};
case 2: { player setVariable["VIP2",true,true];};	
case 3: { player setVariable["VIP3",true,true];};	
case 4: { player setVariable["VIP4",true,true];};	
case 5: { player setVariable["VIP5",true,true];};	
};
life_gear = _this select 8;
[true] call life_fnc_loadGear;

//Parse side specific information.
switch (playerSide) do {
    case west: {
        CONST(life_coplevel, parseNumber(_this select 7));
        CONST(life_medicLevel,0);
        life_blacklisted = _this select 9;
        if (LIFE_SETTINGS(getNumber,"save_playerStats") isEqualTo 1) then {
            life_hunger = ((_this select 10) select 0);
            life_thirst = ((_this select 10) select 1);
            player setDamage ((_this select 10) select 2);
        };
    };

    case civilian: {
        life_is_arrested = _this select 7;
        CONST(life_coplevel, 0);
        CONST(life_medicLevel, 0);
        life_houses = _this select 14;
		life_wanted = parseNumber (_this select 13);
        if (LIFE_SETTINGS(getNumber,"save_playerStats") isEqualTo 1) then {
            life_hunger = ((_this select 9) select 0);
            life_thirst = ((_this select 9) select 1);
            player setDamage ((_this select 9) select 2);
        };

        //Position
        if (LIFE_SETTINGS(getNumber,"save_civilian_position") isEqualTo 1) then {
            life_is_alive = _this select 10;
            life_civ_position = _this select 11;
            if (life_is_alive) then {
                if !(count life_civ_position isEqualTo 3) then {diag_log format ["[requestReceived] Bad position received. Data: %1",life_civ_position];life_is_alive =false;};
                if (life_civ_position distance (getMarkerPos "respawn_civilian") < 300) then {life_is_alive = false;};
            };
        };

        {
            _house = nearestObject [(call compile format ["%1",(_x select 0)]), "House"];
            life_vehicles pushBack _house;
        } forEach life_houses;

        life_gangData = _this select 15;
        if (!(count life_gangData isEqualTo 0)) then {
            [] spawn life_fnc_initGang;
			Clan_Rebel = ((_this select 15) select 2);
        };
        [] spawn life_fnc_initHouses;
    };

    case independent: {
        CONST(life_medicLevel, parseNumber(_this select 7));
        CONST(life_coplevel,0);
        if (LIFE_SETTINGS(getNumber,"save_playerStats") isEqualTo 1) then {
            life_hunger = ((_this select 9) select 0);
            life_thirst = ((_this select 9) select 1);
            player setDamage ((_this select 9) select 2);
        };
    };
	
	case east: {  
		CONST(life_adaclevel, parseNumber(_this select 7));
		CONST(life_coplevel,0);  
		CONST(life_medicLevel,0);
        if (LIFE_SETTINGS(getNumber,"save_playerStats") isEqualTo 1) then {
            life_hunger = ((_this select 9) select 0);
            life_thirst = ((_this select 9) select 1);
            player setDamage ((_this select 9) select 2);
		};  
	};
};

if (count (_this select 16) > 0) then {
    {life_vehicles pushBack _x;} forEach (_this select 16);
};

life_session_completed = true;
