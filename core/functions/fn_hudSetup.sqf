/*
    File: fn_hudSetup.sqf
    Author: Bryan "Tonic" Boardwine

    Edit By Review
*/
private["_display","_alpha","_version","_p","_pg"];
disableSerialization;
_display = findDisplay 46;
_alpha = _display displayCtrl 1001;
_version = _display displayCtrl 1000;
2 cutRsc ["playerHUD","PLAIN"];
//3 cutRsc ["osefStatusBar","PLAIN"];
_version ctrlSetText format["BETA: 0.%1.%2",(productVersion select 2),(productVersion select 3)];
[] call life_fnc_hudUpdate;
[] spawn
{
	private["_dam","_cash"];
	while {true} do
	{
		_dam = damage player;
		_cash  = life_cash;
		waitUntil {((damage player) != _dam) || _cash != life_cash};
		[] call life_fnc_hudUpdate;
	};
};