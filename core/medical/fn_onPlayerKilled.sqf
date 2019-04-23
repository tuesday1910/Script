#include "..\..\script_macros.hpp"
/*
    File: fn_onPlayerKilled.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    When the player dies collect various information about that player
    and pull up the death dialog / camera functionality.
*/
params [
    ["_unit",objNull,[objNull]],
    ["_killer",objNull,[objNull]]
];
disableSerialization;
_Cost = LIFE_SETTINGS(getNumber,"cost_money_diswhenkilled");
if  !((vehicle _unit) isEqualTo _unit) then {
    UnAssignVehicle _unit;
    _unit action ["getOut", vehicle _unit];
    _unit setPosATL [(getPosATL _unit select 0) + 3, (getPosATL _unit select 1) + 1, 0];
};
BANK = BANK - _Cost;
[6] call SOCK_fnc_updatePartial;
//Set some vars
_unit setVariable ["Revive",true,true];
_unit setVariable ["name",profileName,true]; //Set my name so they can say my name.
_unit setVariable ["restrained",false,true];
_unit setVariable ["Escorting",false,true];
_unit setVariable ["transporting",false,true];
_unit setVariable ["playerSurrender",false,true];
_unit setVariable ["steam64id",(getPlayerUID player),true]; //Set the UID.
[_unit] call ziptie_fnc_zip_untieFix;

//Setup our camera view
life_deathCamera  = "CAMERA" camCreate (getPosATL _unit);
showCinemaBorder true;
life_deathCamera cameraEffect ["Internal","Back"];
createDialog "DeathScreen";
life_deathCamera camSetTarget _unit;
life_deathCamera camSetRelPos [0,3.5,4.5];
life_deathCamera camSetFOV .5;
life_deathCamera camSetFocus [50,0];
life_deathCamera camCommit 0;

(findDisplay 7300) displaySetEventHandler ["KeyDown","if ((_this select 1) isEqualTo 1) then {true}"]; //Block the ESC menu

//Create a thread for something?
_unit spawn {
    private ["_maxTime","_RespawnBtn","_Timer"];
    disableSerialization;
    _RespawnBtn = ((findDisplay 7300) displayCtrl 7302);
    _Timer = ((findDisplay 7300) displayCtrl 7301);

        if (LIFE_SETTINGS(getNumber,"respawn_timer") < 5) then {
            _maxTime = time + 5;
        } else {
		_respawntime = LIFE_SETTINGS(getNumber,"respawn_timer");
		
		if(FETCH_CONST(life_donorlevel) == 1) then {
				_timevip = LIFE_SETTINGS(getNumber,"reduce_time_vip1");;
				_timevip_check = (100 - _timevip)/100;
				_respawntime = _respawntime*_timevip_check;
		};
		if(FETCH_CONST(life_donorlevel) == 2) then {
				_timevip = LIFE_SETTINGS(getNumber,"reduce_time_vip2");;
				_timevip_check = (100 - _timevip)/100;
				_respawntime = _respawntime*_timevip_check;
		};
		if(FETCH_CONST(life_donorlevel) == 3) then {
				_timevip = LIFE_SETTINGS(getNumber,"reduce_time_vip3");;
				_timevip_check = (100 - _timevip)/100;
				_respawntime = _respawntime*_timevip_check;
		};
		if(FETCH_CONST(life_donorlevel) == 4) then {
				_timevip = LIFE_SETTINGS(getNumber,"reduce_time_vip4");;
				_timevip_check = (100 - _timevip)/100;
				_respawntime = _respawntime*_timevip_check;
		};
		if(FETCH_CONST(life_donorlevel) == 5) then {
				_timevip = LIFE_SETTINGS(getNumber,"reduce_time_vip5");;
				_timevip_check = (100 - _timevip)/100;
				_respawntime = _respawntime*_timevip_check;
		};
		
		if(FETCH_CONST(life_adminlevel) > 0) then {
				_timevip = 90;
				_timevip_check = (100 - _timevip)/100;
				_respawntime = _respawntime*_timevip_check;
		};
            _maxTime = time + _respawntime;
        };
    _RespawnBtn ctrlEnable false;
    
    waitUntil {_Timer ctrlSetText format [localize "STR_Medic_Respawn",[(_maxTime - time),"MM:SS"] call BIS_fnc_secondsToString];
    round(_maxTime - time) <= 0 || isNull _this || life_request_timer};

    if (life_request_timer) then {
        _maxTime = time + (LIFE_SETTINGS(getNumber,"respawn_timer") * 2);
        waitUntil {_Timer ctrlSetText format [localize "STR_Medic_Respawn",[(_maxTime - time),"MM:SS"] call BIS_fnc_secondsToString];
        round(_maxTime - time) <= 0 || isNull _this};
    };

    life_request_timer = false;
    
    _RespawnBtn ctrlEnable true;
    _Timer ctrlSetText localize "STR_Medic_Respawn_2";
};

_unit spawn {
    private ["_requestBtn","_requestTime"];
    disableSerialization;
    _requestBtn = ((findDisplay 7300) displayCtrl 7303);
    _requestBtn ctrlEnable false;
    _requestTime = time + 5;
    waitUntil {round(_requestTime - time) <= 0 || isNull _this};
    _requestBtn ctrlEnable true;
};

[] spawn life_fnc_deathScreen;

//Create a thread to follow with some what precision view of the corpse.
[_unit] spawn {
    private ["_unit"];
    _unit = _this select 0;
    waitUntil {if (speed _unit isEqualTo 0) exitWith {true}; life_deathCamera camSetTarget _unit; life_deathCamera camSetRelPos [0,3.5,4.5]; life_deathCamera camCommit 0;};
};

//Make the killer wanted
if (!isNull _killer && {!(_killer isEqualTo _unit)} && {!(side _killer isEqualTo west)} && {alive _killer}) then {
    if (vehicle _killer isKindOf "LandVehicle") then {

        if (life_HC_isActive) then {
            [getPlayerUID _killer,_killer getVariable ["realname",name _killer],"187V"] remoteExecCall ["HC_fnc_wantedAdd",HC_Life];
        } else {
            [getPlayerUID _killer,_killer getVariable ["realname",name _killer],"187V"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
        };

        //Get rid of this if you don't want automatic vehicle license removal.
        if (!local _killer) then {
            [2] remoteExecCall ["life_fnc_removeLicenses",_killer];
        };
    } else {

        if (life_HC_isActive) then {
            [getPlayerUID _killer,_killer getVariable ["realname",name _killer],"187"] remoteExecCall ["HC_fnc_wantedAdd",HC_Life];
        } else {
            [getPlayerUID _killer,_killer getVariable ["realname",name _killer],"187"] remoteExecCall ["life_fnc_wantedAdd",RSERV];
        };

        if (!local _killer) then {
            [3] remoteExecCall ["life_fnc_removeLicenses",_killer];
        };
    };
};

life_save_gear = [player] call life_fnc_fetchDeadGear;

if (LIFE_SETTINGS(getNumber,"drop_weapons_onDeath") isEqualTo 0) then {
    _unit removeWeapon (primaryWeapon _unit); 
    _unit removeWeapon (handgunWeapon _unit); 
    _unit removeWeapon (secondaryWeapon _unit); 
};


//Killed by cop stuff...
if (side _killer isEqualTo west && !(playerSide isEqualTo west)) then {
    life_copRecieve = _killer;
    //Did I rob the federal reserve?
    if (!life_use_atm && {CASH > 0}) then {
        [format [localize "STR_Cop_RobberDead",[CASH] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
        CASH = 0;
    };
};

if (!isNull _killer && {!(_killer isEqualTo _unit)}) then {
    life_removeWanted = true;
};

[_unit] call life_fnc_dropItems;

life_hunger = 100;
life_thirst = 100;
life_carryWeight = 0;
CASH = 0;
life_is_alive = false;

[] call life_fnc_hudUpdate; //Get our HUD updated.
[player,life_settings_enableSidechannel,playerSide] remoteExecCall ["TON_fnc_manageSC",RSERV];
[8] call SOCK_fnc_updatePartial;
[6] call SOCK_fnc_updatePartial;
[3] call SOCK_fnc_updatePartial;
if (playerSide isEqualTo civilian) then {
    [4] call SOCK_fnc_updatePartial;
};
