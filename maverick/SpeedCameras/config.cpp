/*
	Author: Maverick Applications
	Desc: Altis Life SpeedCameras
*/

//Customize your settings, to fit your server setup!
class Maverick_SpeedCameras {

    //Define the possible locations for your speed cameras.
    //position -> Get the position via: diag_log(getPosATL player) -> replace the [] with {}
    //direction -> Get the position via: diag_log((getDir player) - 90)
    //speedlimit -> Choose any value you like. In a zone where people should drive 50, make set it to 55 or 60, to catch those speeders!
	SpeedCameras[] = {
	  //{{<position>}, <direction>, <speedlimit>},
	   
	   //Kavalla
        {{3605.94,13087.6,0}, 283.865, 80}, //Kavalla Martketplace [Altis]
        {{3777.49,13420.8,0}, 146.733, 80},  //Outside kavalla near the construction site [Altis]
		{{3761.257,13425.346,0}, 48, 80}, //Outside kavalla near the construction site [Altis]
		{{6306.636,15150.3,0}, 146, 80},  //Route principale Station service entre agios et kavala
		{{6337.218,15149.363,0}, 329, 80},  //Route principale Station service entre agios et kavala	
		//Aeroport
		{{14243.627,16646.436,0}, 316, 80},  
		{{14266.525,16742.596,0}, 138, 80},  
		// Athira
		{{14234.9,18254.7,0}, 224, 80}, 
		{{14264.3,18202.9,0}, 65, 80},  
		{{13830.4,18658.5,0}, 60, 80},      
		{{14064.3,18756.5,0}, 222, 80}, 
		
		{{15124.3,17547.8,0}, 20, 100}, 
		{{15803.8,17423.7,0}, 220, 100}, 
		{{14538.9,16923,0}, 300, 100}, 
		{{14538.9,16923,0}, 60, 100}
	};

    //Shall the user get its driver licenses revoked? (Truck and Car license)
    RemoveDriverLicense    = 1;   // 0 = No | 1 = yes
    RemoveTruckLicense     = 1;   // 0 = No | 1 = yes

    //Shall the player be added to the wanted list with a speeding entry?
    AddPlayerToWanted      = 1;   // 0 = No | 1 = yes
	WantedCase			   = "4"; //The number/numbers+charaters that describe the crime you want the player to be added for

    //Let the player pay a fine from his bank account
    SpeedingFee            = 80000;// 0 = No fine payed | Any value over 0 $ will be then subtracted from the bank account

    //Define the messages, which will be shown to the player, when he was driving too fast
	InfoMSG                = "You have been flashing for% 80 km / h too fast!";
	RemoveDriverLicenseMSG = "You've been flashing for% 80 km / h too fast!";
	RemoveTruckLicenseMSG  = "Your heavy weight permit has been removed";
	AddPlayerToWantedMSG   = "You are now searching through the police! A file on you has been created";
	SpeedingFeeMSG         = "You have been fined% 80000 $ for driving too fast!";
};