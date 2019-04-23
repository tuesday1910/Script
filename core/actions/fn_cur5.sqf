private ["_pos"];
_pos = [_this select 0, _this select 1, _this select 2];

deleteMarker "curfew";

_gangname2 = formatText["Curfew Level 5"];
	_markername = createMarker ["curfew", [_pos select 0,_pos select 1]];
	"Curfew" setMarkerShape "ICON";
	"Curfew" setMarkerType "hd_warning";
	"Curfew" setMarkerColor "ColorRed";
	"Curfew" setMarkerText str(_gangname2);
deleteMarker "marker_2000";
	_marker = createMarker ["marker_2000", [_pos select 0,_pos select 1]];

"marker_2000" setMarkerColor "ColorRed";

"marker_2000" setMarkerType "Empty";

"marker_2000" setMarkerShape "ELLIPSE";

"marker_2000" setMarkerSize [453,405];
[] call TON_fnc_cell_curfew;
onMapSingleClick "";
openMap [false, false];