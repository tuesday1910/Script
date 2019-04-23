waitUntil {!(isNull (findDisplay 46))};
disableSerialization;
/*
	File: fn_statusBar.sqf
	Author: Some French Guy named Osef I presume, given the variable on the status bar
	Edited by: [midgetgrimm]
	Description: Puts a small bar in the bottom right of screen to display in-game information

*/
4 cutRsc ["osefStatusBar","PLAIN"];
systemChat format["One Life Server is Loading info...BY Review", _rscLayer];

[] spawn {
	sleep 5;
	_counter = 180;
	_timeSinceLastUpdate = 0;
	_statusText = "One Life : Arma III AltisLife Thailand";
	_gangName = "";
	while {true} do
	{
		sleep 1;
		if(!isNil {group player getVariable "gang_name"}) then 
		{ 
			_gangName = format["%1",group player getVariable "gang_name"]; 
		}
		else
		{
			_gangName = "Not Gang";
		};
		_counter = _counter - 1;
			((uiNamespace getVariable "osefStatusBar")displayCtrl 1000)ctrlSetStructuredText parseText format["| <t color='#FF00CC'>FPS: %1</t> | <t color='#3366FF'>POLICE : %2</t> | <t color='#6600FF'>CIVILIAN : %3</t> | <t color='#00FF00'>MEDIC : %4</t> | <t color='#FF9900'>PLAYERS: %5</t> | <t color='#FF0000'>%7</t> | <t color='#33FFFF'>GANG : %8</t> ", round diag_fps, west countSide playableUnits, civilian countSide playableUnits, independent countSide playableUnits, count playableUnits,[life_cash] call life_fnc_numberText, _statusText,_gangname];
	};
};