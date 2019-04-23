    private ["_eh1","_inArea","_zone1","_zone2","_zone3","_dis"];
     
    _zone0 = getMarkerPos "marker_222";                   // Atira
    _zone1 = getMarkerPos "marker_223";                   // Kavara
    _zone2 = getMarkerPos "marker_224";                   //Sofia
    _zone3 = getMarkerPos "marker_225";                   //Air
    _zone4 = getMarkerPos "marker_227";                   //Cop Air
	_zone5 = getMarkerPos "marker_228";                   //Rebel N
	_zone6 = getMarkerPos "marker_229";                   
	_zone7 = getMarkerPos "marker_231";                   
	_zone8 = getMarkerPos "marker_233";
	_zone9 = getMarkerPos "marker_238";                   //Rebel S
	_zone10 = getMarkerPos "marker_239";                  //Avenger
	_zone11 = getMarkerPos "marker_249";                  //ALLstar
	_zone12 = getMarkerPos "marker_250";                  //SUZURUN
	_zone13 = getMarkerPos "marker_253";                  //Merc
	
	

    _dis0 = 500;
	_dis1 = 1000;
	_dis2 = 400;
	_dis3 = 500;
	_dis4 = 100;
	_dis5 = 100;
	_dis6 = 100;
	_dis7 = 500;
	_dis8 = 400;
	_dis9 = 230;
	_dis10 = 200;
	_dis11 = 200;
	_dis12 = 200;
	_dis13 = 200;
	
	
	 
    _inArea = false;
    //#define SAFETY_ZONES    [["marker_222", 500], ["marker_223", 1000], ["marker_224", 400], ["marker_225", 500], ["marker_227", 100], ["marker_228", 100], ["marker_229", 100], ["marker_231", 500], ["marker_233", 400], ["marker_238", 230], ["marker_239", 200], ["marker_249", 200], ["marker_250", 200], ["marker_253", 200]] // Syntax: [["marker1", radius1], ["marker2", radius2], ...]
      if (isDedicated) exitWith {};
         waitUntil {!isNull player};
     
	  _enterText = "Welcome To SafeZone Altislife";
      _leaveText = "Good Luck";
     
    switch (playerSide) do
    {
			case west:
			{
				while {true} do
                    {
						if (alive player) then
						{	
							
                                    if (((_zone0 distance player < _dis0) || (_zone1 distance player < _dis1) || (_zone2 distance player < _dis2) || (_zone3 distance player < _dis3) || (_zone4 distance player < _dis4) || (_zone5 distance player < _dis5) || (_zone6 distance player < _dis6) || (_zone7 distance player < _dis7) || (_zone8 distance player < _dis8) || (_zone9 distance player < _dis9) || (_zone10 distance player < _dis10) || (_zone11 distance player < _dis11) || (_zone12 distance player < _dis12) || (_zone13 distance player < _dis13)) && (!_inArea)) then
                                    {    
                                            _inArea = true;
                                            hint "You are Enter in Safe Zone";
                                            player allowDamage false;
                                           
                                    };
     
                                    if (((_zone0 distance player > _dis0) && (_zone1 distance player > _dis1) && (_zone2 distance player > _dis2) && (_zone3 distance player > _dis3) && (_zone4 distance player > _dis4) && (_zone5 distance player > _dis5) && (_zone6 distance player > _dis6) && (_zone7 distance player > _dis7) && (_zone8 distance player > _dis8) && (_zone9 distance player > _dis9) && (_zone10 distance player > _dis10) && (_zone11 distance player > _dis11) && (_zone12 distance player > _dis12) && (_zone13 distance player > _dis13)) && (_inArea)) then
                                    {    
                                            //player removeEventHandler ["fired", _eh1];
                                            _inArea = false;
                                            hint "You are now Out of Safe Zone";
                                            player allowDamage true;
                                    };
						};
                    };
			};
            case independent:
			{
				while {true} do
                    {
						if (alive player) then
						{	
							
                                    if (((_zone0 distance player < _dis0) || (_zone1 distance player < _dis1) || (_zone2 distance player < _dis2) || (_zone3 distance player < _dis3) || (_zone4 distance player < _dis4) || (_zone5 distance player < _dis5) || (_zone6 distance player < _dis6) || (_zone7 distance player < _dis7) || (_zone8 distance player < _dis8) || (_zone9 distance player < _dis9) || (_zone10 distance player < _dis10) || (_zone11 distance player < _dis11) || (_zone12 distance player < _dis12 || (_zone13 distance player < _dis13))) && (!_inArea)) then
                                    {    
                                            _inArea = true;
                                            hint "You are Enter in Safe Zone";
                                            player allowDamage false;
                                           
                                    };
     
                                    if (((_zone0 distance player > _dis0) && (_zone1 distance player > _dis1) && (_zone2 distance player > _dis2) && (_zone3 distance player > _dis3) && (_zone4 distance player > _dis4) && (_zone5 distance player > _dis5) && (_zone6 distance player > _dis6) && (_zone7 distance player > _dis7) && (_zone8 distance player > _dis8) && (_zone9 distance player > _dis9) && (_zone10 distance player > _dis10) && (_zone11 distance player > _dis11) && (_zone12 distance player > _dis12) && (_zone13 distance player > _dis13)) && (_inArea)) then
                                    {    
                                            //player removeEventHandler ["fired", _eh1];
                                            _inArea = false;
                                            hint "You are now Out of Safe Zone";
                                            player allowDamage true;
                                    };
						};
                    };
			};
			
            case civilian:
            {
                    while {true} do
                    {
						if (alive player) then
						{	

                                    if (((_zone0 distance player < _dis0) || (_zone1 distance player < _dis1) || (_zone2 distance player < _dis2) || (_zone3 distance player < _dis3) || (_zone4 distance player < _dis4) || (_zone5 distance player < _dis5) || (_zone6 distance player < _dis6) || (_zone7 distance player < _dis7) || (_zone8 distance player < _dis8) || (_zone9 distance player < _dis9) || (_zone10 distance player < _dis10) || (_zone11 distance player < _dis11) || (_zone12 distance player < _dis12) || (_zone13 distance player < _dis13)) && (!_inArea)) then
                                    {    
           
					player removeEventHandler ["fired", _eh1];
					_inArea = true;
					hint parseText format["<t color='#FFCC00'><t size='2'><t align='center'>Safezone In<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_enterText];
					player allowDamage false;
					safezone = true;
                             
                                    };
     
                                    if (((_zone0 distance player > _dis0) && (_zone1 distance player > _dis1) && (_zone2 distance player > _dis2) && (_zone3 distance player > _dis3) && (_zone4 distance player > _dis4) && (_zone5 distance player > _dis5) && (_zone6 distance player > _dis6) && (_zone7 distance player > _dis7) && (_zone8 distance player > _dis8) && (_zone9 distance player > _dis9) && (_zone10 distance player > _dis10) && (_zone11 distance player > _dis11) && (_zone12 distance player > _dis12) && (_zone13 distance player > _dis13)) && (_inArea)) then
                                    {    
                     player removeEventHandler ["fired", _eh1];
					_inArea = false;
					hint parseText format["<t color='#FFCC00'><t size='2'><t align='center'>Safezone Out<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_leaveText];
					player allowDamage true;
					safezone = false;
	
                                    };
						};
                    };
           
            };
			
			
			
			case east:
            {
                    while {true} do
                    {
						if (alive player) then
						{	

                                    if (((_zone0 distance player < _dis0) || (_zone1 distance player < _dis1) || (_zone2 distance player < _dis2) || (_zone3 distance player < _dis3) || (_zone4 distance player < _dis4) || (_zone5 distance player < _dis5) || (_zone6 distance player < _dis6) || (_zone7 distance player < _dis7) || (_zone8 distance player < _dis8) || (_zone9 distance player < _dis9) || (_zone10 distance player < _dis10) || (_zone11 distance player < _dis11) || (_zone12 distance player < _dis12) || (_zone13 distance player < _dis13)) && (!_inArea)) then
                                    {    
           
					player removeEventHandler ["fired", _eh1];
					_inArea = true;
					hint parseText format["<t color='#FFCC00'><t size='2'><t align='center'>Safezone In<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_enterText];
					player allowDamage false;
					safezone = true;
                             
                                    };
     
                                    if (((_zone0 distance player > _dis0) && (_zone1 distance player > _dis1) && (_zone2 distance player > _dis2) && (_zone3 distance player > _dis3) && (_zone4 distance player > _dis4) && (_zone5 distance player > _dis5) && (_zone6 distance player > _dis6) && (_zone7 distance player > _dis7) && (_zone8 distance player > _dis8) && (_zone9 distance player > _dis9) && (_zone10 distance player > _dis10) && (_zone11 distance player > _dis11) && (_zone12 distance player > _dis12) && (_zone13 distance player > _dis13)) && (_inArea)) then
                                    {    
                     player removeEventHandler ["fired", _eh1];
					_inArea = false;
					hint parseText format["<t color='#FFCC00'><t size='2'><t align='center'>Safezone Out<br/><br/><t align='center'><t size='1'><t color='#ffffff'>%1",_leaveText];
					player allowDamage true;
					safezone = false;
	
                                    };
						};
                    };
           
            };
            sleep 3;
    };

