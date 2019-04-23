#include "..\..\script_macros.hpp"
/*
    File: fn_playerTags.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Adds the tags above other players heads when close and have visible range.
*/
if (!life_settings_tagson) exitWith {};
private ["_ui","_units","_masks"];
#define iconID 78000
#define scale 0.8

if (visibleMap || {!alive player} || {dialog}) exitWith {
    500 cutText["","PLAIN"];
};

_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
if (isNull _ui) then {
    500 cutRsc["Life_HUD_nameTags","PLAIN"];
    _ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
};

_units = nearestObjects[(visiblePosition player),["Man","Land_Pallet_MilBoxes_F","Land_Sink_F"],50];
_units = _units - [player];

_masks = LIFE_SETTINGS(getArray,"clothing_masks");

private _index = -1;
{
    private "_text";
    _idc = _ui displayCtrl (iconID + _forEachIndex);
    if (!(lineIntersects [eyePos player, eyePos _x, player, _x]) && alive _x && {!isNil {_x getVariable "realname"}}) then {
        _pos = switch (typeOf _x) do {
            case "Land_Pallet_MilBoxes_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 1.5]};
            case "Land_Sink_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 2]};
            default {[visiblePosition _x select 0, visiblePosition _x select 1, ((_x modelToWorld (_x selectionPosition "head")) select 2)+.5]};
        };
        _sPos = worldToScreen _pos;
        _distance = _pos distance player;
        if (!((headgear _x) in _masks || (goggles _x) in _masks || (uniform _x) in _masks)) then {
            if (count _sPos > 1 && {_distance < 15}) then {
                _text = switch (true) do {
					case (side _x isEqualTo civilian && {!isNil {(group _x) getVariable "gang_name"}} && {!isNil {_x getVariable "mercenary"}}): {format["<img image='icons\merc.paa' size='1.5'></img><t color='#FF6600'> %1</t><br/><t size='0.8' color='#FF0000'>%2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]]};
					case (side _x isEqualTo civilian && {!isNil {_x getVariable "mercenary"}}): {format["<img image='icons\merc.paa' size='1.5'></img><t color='> %1</t>",_x getVariable ["realname",name _x]]};
					case (side _x isEqualTo civilian && {!isNil {(group _x) getVariable "gang_name"}} && {!isNil {_x getVariable "taxi"}}): {format["<img image='icons\taxi.paa' size='1.5'></img><t color='#FF6600'> %1</t><br/><t size='0.8' color='#FF0000'>%2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]]};
					case (side _x isEqualTo civilian && {!isNil {_x getVariable "taxi"}}): {format["<img image='icons\taxi.paa' size='1.5'></img><t color='#FF6600'> %1</t>",_x getVariable ["realname",name _x]]};
					case (side _x isEqualTo civilian && {!isNil {(group _x) getVariable "gang_name"}} && {!isNil {_x getVariable "dime"}}): {format["<img image='images\dime.paa' size='1.5'></img><t color='#FF6600'> %1</t><br/><t size='0.8' color='#FF0000'>%2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]]};
					case (side _x isEqualTo civilian && {!isNil {_x getVariable "dime"}}): {format["<img image='images\taxi.paa' size='1.5'></img><t color='#FF6600'> %1</t>",_x getVariable ["realname",name _x]]};
                    case (_x in (units group player) && playerSide isEqualTo civilian): {format ["<t color='#0066FF'>%1</t>",(_x getVariable ["realname",name _x])];};
                    case (side _x isEqualTo west && {!isNil {_x getVariable "rank"}}): {format ["<img image='%1' size='1.5'></img> %2",switch ((_x getVariable "rank")) do {
						 case 2: {"icons\Cop_Rank\2.paa"}; 
					     case 3: {"icons\Cop_Rank\3.paa"}; 
					     case 4: {"icons\Cop_Rank\4.paa"}; 
					     case 5: {"icons\Cop_Rank\5.paa"}; 
					     case 6: {"icons\Cop_Rank\6.paa"}; 
					     case 7: {"icons\Cop_Rank\7.paa"};
						 case 8: {"icons\Cop_Rank\8.paa"}; 
						 case 9: {"icons\Cop_Rank\9.paa"}; 
						 case 10: {"icons\Cop_Rank\10.paa"}; 
						 case 11: {"icons\Cop_Rank\11.paa"}; 
						 case 12: {"icons\Cop_Rank\12.paa"}; 
						 case 13: {"icons\Cop_Rank\13.paa"}; 
						 case 14: {"icons\Cop_Rank\14.paa"}; 
						 case 15: {"icons\Cop_Rank\15.paa"}; 
						 case 16: {"icons\Cop_Rank\16.paa"}; 
						 case 17: {"icons\Cop_Rank\17.paa"}; 
						 case 18: {"icons\Cop_Rank\18.paa"}; 
						 case 19: {"icons\Cop_Rank\19.paa"}; 
						 case 20: {"icons\Cop_Rank\20.paa"}; 
						 case 21: {"icons\Cop_Rank\21.paa"};
					     default {"icons\Cop_Rank\1.paa"};
                        },_x getVariable ["realname",name _x]]};
					case (side _x isEqualTo east && {!isNil {_x getVariable "arank"}}): {format ["<img image='%1' size='1.5'></img> %2",switch ((_x getVariable "arank")) do {
						 case 2: {"icons\Adac_Rank\2.paa"}; 
					     case 3: {"icons\Adac_Rank\3.paa"}; 
					     case 4: {"icons\Adac_Rank\4.paa"}; 
					     case 5: {"icons\Adac_Rank\5.paa"}; 
					     case 6: {"icons\Adac_Rank\6.paa"}; 
					     case 7: {"icons\Adac_Rank\7.paa"};
						 case 8: {"icons\Adac_Rank\8.paa"}; 
						 case 9: {"icons\Adac_Rank\9.paa"}; 
						 case 10: {"icons\Adac_Rank\10.paa"}; 
						 case 11: {"icons\Adac_Rank\11.paa"}; 
						 case 12: {"icons\Adac_Rank\12.paa"}; 
						 case 13: {"icons\Adac_Rank\13.paa"}; 
						 case 14: {"icons\Adac_Rank\14.paa"}; 
						 case 15: {"icons\Adac_Rank\15.paa"}; 
						 case 16: {"icons\Adac_Rank\16.paa"}; 
						 case 17: {"icons\Adac_Rank\17.paa"}; 
						 case 18: {"icons\Adac_Rank\18.paa"}; 
						 case 19: {"icons\Adac_Rank\19.paa"}; 
						 case 20: {"icons\Adac_Rank\20.paa"}; 
						 case 21: {"icons\Adac_Rank\21.paa"};
					     default {"icons\Adac_Rank\1.paa"};
                        },_x getVariable ["realname",name _x]]};
                    case (side _x isEqualTo independent && {!isNil {_x getVariable "mrank"}}): {format ["<img image='%1' size='1.5'></img> %2",switch ((_x getVariable "mrank")) do {
						 case 2: {"icons\Medic_Rank\2.paa"}; 
					     case 3: {"icons\Medic_Rank\3.paa"}; 
					     case 4: {"icons\Medic_Rank\4.paa"}; 
					     case 5: {"icons\Medic_Rank\5.paa"}; 
					     case 6: {"icons\Medic_Rank\6.paa"}; 
						 case 7: {"icons\Medic_Rank\7.paa"}; 
					     default {"icons\Medic_Rank\1.paa"};
                        },_x getVariable ["realname",name _x]]};		
                    //Gang  Icon						
                    default {
                        if (!isNil {(group _x) getVariable "gang_name"}) then {
							switch (((group _x) getVariable "gang_name")) do {
							case "SuZuRun": { format["%1<br/><img image='textures\Gangs\SUZURUN.paa' size='1.5'></img><t size='1' color='#FFD700'> %2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]]; };
							case "Mozilla": { format["%1<br/><img image='textures\Gangs\Mozilla.paa' size='1.5'></img><t size='1' color='#FFD700'> %2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]]; };
							case "AJNOMOTO": { format["%1<br/><img image='textures\Gangs\AYNMT.paa' size='2'></img><t size='1' color='#FFD700'> %2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]]; };
							case "LATI HUARUNRAENG Family": { format["%1<br/><img image='textures\Gangs\LATI.paa' size='1.5'></img><t size='1' color='#FFD700'> %2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]]; };
                            default { format["%1<br/><img image='icons\standard.paa' size='1.5'></img><t size='1' color='#FFC125'> %2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]]; };
						};							
                        } else {
                            if (alive _x) then {
                                _x getVariable ["realname",name _x];
                            } else {
                                if (!isPlayer _x) then {
                                    _x getVariable ["realname","ERROR"];
                                };
                            };
                        };
                    };
                };

			if(_x getVariable ["VIP1",false]) then {
				if(_x getVariable ["DirectVON",false]) then 
				{
					if(side _x isEqualTo west) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP1.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo independent) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP1.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo civilian) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP1.paa' size='1.5'></img></t><br/>"] + _text;
					};
				}
				else
				{
					if(side _x isEqualTo west) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_1.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo independent) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_1.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo civilian) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_1.paa' size='1.5'></img></t><br/>"] + _text;
					};
				};
			};
			
			if(_x getVariable ["VIP2",false]) then {
				if(_x getVariable ["DirectVON",false]) then 
				{
					if(side _x isEqualTo west) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_2.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo independent) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_2.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo civilian) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_2.paa' size='1.5'></img></t><br/>"] + _text;
					};
				}
				else
				{
					if(side _x isEqualTo west) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_2.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo independent) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_2.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo civilian) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_2.paa' size='1.5'></img></t><br/>"] + _text;
					};
				};
			};
			
			if(_x getVariable ["VIP3",false]) then {
				if(_x getVariable ["DirectVON",false]) then 
				{
					if(side _x isEqualTo west) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_3.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo independent) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_3.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo civilian) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_3.paa' size='1.5'></img></t><br/>"] + _text;
					};
				}
				else
				{
					if(side _x isEqualTo west) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_3.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo independent) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_3.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo civilian) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_3.paa' size='1.5'></img></t><br/>"] + _text;
					};
				};
			};
			
			if(_x getVariable ["VIP4",false]) then {
				if(_x getVariable ["DirectVON",false]) then 
				{
					if(side _x isEqualTo west) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_4.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo independent) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_4.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo civilian) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_4.paa' size='1.5'></img></t><br/>"] + _text;
					};
				}
				else
				{
					if(side _x isEqualTo west) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_4.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo independent) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_4.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo civilian) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_4.paa' size='1.5'></img></t><br/>"] + _text;
					};
				};
			};
			
			if(_x getVariable ["VIP5",false]) then {
				if(_x getVariable ["DirectVON",false]) then 
				{
					if(side _x isEqualTo west) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_5.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo independent) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_5.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo civilian) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_5.paa' size='1.5'></img></t><br/>"] + _text;
					};
				}
				else
				{
					if(side _x isEqualTo west) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_5.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo independent) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_5.paa' size='1.5'></img></t><br/>"] + _text;
					};
					if(side _x isEqualTo civilian) then {
						_text = format ["<t color='#FFCC33'><img image='textures\VIP\VIP_5.paa' size='1.5'></img></t><br/>"] + _text;
					};
				};
			};
			//Microphone
				if(_x getVariable ["speaking",false]) then {_text = "<t color=''><img image='icons\talk.paa' size='1.5'></img></t>" + _text};
                _idc ctrlSetStructuredText parseText _text;
                _idc ctrlSetPosition [_sPos select 0, _sPos select 1, 0.4, 0.65];
                _idc ctrlSetScale scale;
                _idc ctrlSetFade 0;
                _idc ctrlCommit 0;
                _idc ctrlShow true;
            } else {
                _idc ctrlShow false;
            };
        } else {
            _idc ctrlShow false;
        };
    } else {
        _idc ctrlShow false;
    };
    _index = _forEachIndex;
} forEach _units;
(_ui displayCtrl (iconID + _index + 1)) ctrlSetStructuredText parseText "";