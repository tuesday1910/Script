if(hasInterface)then{
[] spawn {
		
		_playerPos = createMarkerLocal ["PlayerPOS", position player];//create marker
		"PlayerPOS" setMarkerTextLocal "You";
		"PlayerPOS" setMarkerTypeLocal "mil_end";
		"PlayerPOS" setMarkerColorLocal "ColorRed";
		while{true}do{
			waitUntil {uiSleep 0.2;visibleMap};//update marker only while map is open
			"PlayerPOS" setMarkerPosLocal position player;
		};
	};
};