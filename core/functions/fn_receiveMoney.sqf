#include "..\..\script_macros.hpp"
/*
    File: fn_receiveMoney.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Receives money
*/

params [
    ["_unit",objNull,[objNull]],
    ["_val","",[""]],
    ["_from",objNull,[objNull]]
];

if (isNull _unit || isNull _from || _val isEqualTo "") exitWith {};
if !(player isEqualTo _unit) exitWith {};
if (!([_val] call TON_fnc_isnumber)) exitWith {};
if (_unit == _from) exitWith {}; //Bad boy, trying to exploit his way to riches.

hint format [localize "STR_NOTF_GivenMoney",_from getVariable ["realname",name _from],[(parseNumber (_val))] call life_fnc_numberText];
CASH = CASH + parseNumber(_val);
[0] call SOCK_fnc_updatePartial;

if (LIFE_SETTINGS(getNumber,"player_moneyLog") isEqualTo 1) then {
    if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
        money_log = format [localize "STR_DL_ML_recivemoney_BEF",_val,_unit getVariable ["realname",name _unit],[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    } else {
        money_log = format [localize "STR_DL_ML_recivemoney_BEF",profileName,(getPlayerUID player),_val,_from getVariable ["realname",name _from],[BANK] call life_fnc_numberText,[CASH] call life_fnc_numberText];
    };
    publicVariableServer "money_log";
};