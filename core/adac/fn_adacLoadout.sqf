#include "..\..\script_macros.hpp"
/*
File: fn_adacLoadout.sqf
Author: -  
*/
private ["_handle"];
_handle = [] spawn life_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player addUniform "Skyline_Uniforme_Securite_01_F";

/* ITEMS */
player linkItem "ItemMap";



[] call life_fnc_playerSkins;
[] call life_fnc_saveGear;
