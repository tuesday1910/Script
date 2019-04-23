private ["_level"];
params [
 ["_level",0,[0]]
];
closeDialog 0;

if(_level == 1 ) then {
openMap [true, false];
onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] call life_fnc_cur1";
};
if(_level == 2 ) then {
openMap [true, false];
onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] call life_fnc_cur2";
};
if(_level == 3 ) then {
openMap [true, false];
onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] call life_fnc_cur3";
};
if(_level == 4 ) then {
openMap [true, false];
onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] call life_fnc_cur4";
};
if(_level == 5 ) then {
openMap [true, false];
onMapSingleClick "[_pos select 0, _pos select 1, _pos select 2] call life_fnc_cur5";
};
if(_level == 0 ) then {
[] call life_fnc_curdis";
};