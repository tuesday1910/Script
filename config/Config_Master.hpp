#define true 1
#define false 0

/*
    Master settings for various features and functionality
*/
class Life_Settings {
/* Logging and Security Settings*/
    /* Security Settings */
	cost_money_diswhenkilled = 1000000;
	reduce_time_vip1 = 10;  // percent for reduce time respawn when player have a vip level 1
	reduce_time_vip2 = 20; // percent for reduce time respawn when player have a vip level 2 
	reduce_time_vip3 = 30; // percent for reduce time respawn when player have a vip level 3
	reduce_time_vip4 = 40;// percent for reduce time respawn when player have a vip level 4
	reduce_time_vip5 = 50; // percent for reduce time respawn when player have a vip level 5
	

	
    spyGlass_toggle = false; //Spyglass On/Off Toggle --> True = On & False = Off
	
    /* Data Logging Settings */
    battlEye_friendlyLogging = false; //False [default] - Read the logs from the server.rpt. True - Read the logs from the publicVariable.log. NOTE: Due to how diag_log works it will log to both files either way and the setting is merely for beautification purposes.
    player_advancedLog = true; //False [default] - No advanced logging. True - Logs house purchase and sale, vehicle purchase, sale, and chop shopping, police arrests, and gang creations. Search for: advanced_log
    player_moneyLog = true; //False [default] - No money logging. True - Logs player bank deposits, withdraws, and transfers, gang bank deposits and withdraws, money picked up off of the ground, and player robbery. Search for: money_log
    player_deathLog = true; //False [default] - No death logging. True - Logs victim and killer, and vehicle or weapon if used, when a player dies. Search for: death_log

/* Database Related Settings */
    /* Player Data Saving */
    save_virtualItems = true; //Save Virtual items (all sides)?
    saved_virtualItems[] = { "zipties","blindfold","pickaxe","fuelEmpty","fuelFull", "spikeStrip", "lockpick", "defuseKit","storageSmall","storageBig","redgull","coffee","waterBottle","apple","peach","tbacon","donuts","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","defibrillator","toolkit" }; //Array of virtual items that can be saved on your player.
    save_playerStats = true; //Save food, water and damage (all sides)?
    save_civilian_weapons = true; //Allow civilians to save weapons on them?
    save_civilian_position = false; //Save civilian location?
    save_civilian_position_restart = false; //Save civilian location only between restarts. After a server restart you'll have to spawn again.
    /* !!!TO SAVE POSITION BETWEEN RESTARTS save_civilian_position MUST BE TRUE!!! */
    save_civilian_positionStrict = false; //Strip the player if possible combat-log?  WARNING: Server crashes and lack of reliable syncing can trigger this.
	
    /* Vehicle Data Saving */
    save_vehicle_virtualItems = false; //Save virtual items inside the vehicle (all sides)(-- See defined items on next line --)
    save_vehicle_items[] = { "pickaxe","fuelEmpty","fuelFull", "spikeStrip", "lockpick", "defuseKit","storageSmall","storageBig","redgull","coffee","waterBottle","apple","peach","tbacon","donuts","rabbit","salema","ornate","mackerel","tuna","mullet","catshark","turtle_soup","hen","rooster","sheep","goat","defibrillator","toolkit" };
    save_vehicle_inventory = false; //Save Arma inventory of vehicle to the database
    save_vehicle_fuel = true; //Save vehicle fuel level to the database (Impounded/Garaged).
    save_vehicle_damage = false; //Save vehicle damage to the database.
    save_vehicle_illegal = false; //This will allow cops to be advised when a vehicle, with illegal items in it, is impounded. This will also save illegal items as proof of crime, and needs "save_vehicle_virtualItems" set as true. Illegal items don't need to be set in save_vehicle_items[] for being saved, if it's enabled.


/* System Settings */
    /* ATM & Federal Reserve System Configurations */
    global_ATM = true; //Allow users to access any ATM on the map (Marked & Unmarked).
    noatm_timer = 10; //Time in minutes that players cannot deposit money after selling stolen gold.
    minimum_cops = 5; //Minimum cops required online to rob the Federal Reserve

    /*Death settings*/
    drop_weapons_onDeath = false; //Set true to enable weapon dropping on death. False (default) will delete player weapons on death, allowing them to be revived with them instead

    /* Basic System Configurations */
    donor_level = true; //Enable the donor level set in database (var = life_donorlevel; levels = 0,1,2,3,4,5). ATTENTION! Before enabling, read: https://www.bistudio.com/community/game-content-usage-rules & https://www.bistudio.com/monetization
    enable_fatigue = false; //Set to false to disable the ARMA 3 fatigue system.
    total_maxWeight = 24; //Static variable for the maximum weight allowed without having a backpack
    respawn_timer = 120; //How many seconds a player should wait, before being able to respawn. Minimum 5 seconds.

    /* Channel 7 News Station Configurations */
    news_broadcast_cost = 150000; //Cost for a player to send a news station broadcast.
    news_broadcast_cooldown = 20; //Time in minutes that is required between news station broadcasts. (Default = 20 minutes)
    news_broadcast_header_length = 60; //Number of characters that a header can consist of. Anything over this may clip. This depends on the font size and various other factors. Adjust with caution.

    /* Clothing System Configurations */
    civ_skins = true; //Enable or disable civilian skins. Before enabling, you must add all the SEVEN files to textures folder. (It must be named as: civilian_uniform_1.jpg, civilian_uniform_2.jpg...civilian_uniform_6.jpg, civilian_uniform_7.jpg)
    cop_extendedSkins = true; //Enable or disable cop skins by level. Before enabling, you must add all the EIGHT files to textures folder. (It must be named as: cop_uniform.jpg + cop_uniform_1.jpg, cop_uniform_2.jpg...cop_uniform_6.jpg, cop_uniform_7.jpg; meaning cop_uniform = life_coplevel=0, cop_uniform_1 = life_coplevel=1, cop_uniform_2 = life_coplevel=2, etc...)
    clothing_noTP = true;  //Disable clothing preview teleport? (true = no teleport. false = teleport)
    clothing_box = true; //true = teleport to a black box. false = teleport to somewhere on map. (It only affects the game if clothing_noTP is set as false)
    clothing_masks[] = { "H_Shemag_olive", "H_Shemag_khk", "H_Shemag_tan", "H_Shemag_olive_hs", "H_ShemagOpen_khk", "H_ShemagOpen_tan", "G_Balaclava_blk", "G_Balaclava_combat", "G_Balaclava_lowprofile", "G_Balaclava_oli", "G_Bandanna_aviator", "G_Bandanna_beast", "G_Bandanna_blk", "G_Bandanna_khk", "G_Bandanna_oli", "G_Bandanna_shades", "G_Bandanna_sport", "G_Bandanna_tan", "U_O_GhillieSuit", "U_I_GhillieSuit", "U_B_GhillieSuit", "H_RacingHelmet_1_black_F", "H_RacingHelmet_1_red_F", "H_RacingHelmet_1_white_F", "H_RacingHelmet_1_blue_F", "H_RacingHelmet_1_yellow_F", "H_RacingHelmet_1_green_F", "H_RacingHelmet_1_F", "H_RacingHelmet_2_F", "H_RacingHelmet_3_F", "H_RacingHelmet_4_F" };

    /* Escape Menu Configuration */
    escapeMenu_timer = 10; //Time required to pass before you can click the abort button in the escape menu.
    escapeMenu_displayExtras = false; //Display the players UID & serverName specified below in the escape menu.
    escapeMenu_displayText = "Thanks for playing!"; //Text displayed in the escape menu. Make it short.. around 20 characters.

    /* Fuel System Configurations */
    pump_service = true; //Allow users to use pump service on the map. Default = false
    fuel_cost = 25.7; //Cost of fuel per liter at fuel stations (if not defined for the vehicle already).
    service_chopper = 1000; //Cost to service chopper at chopper service station(Repair/Refuel).
    fuelCan_refuel = 25000; //Cost to refuel an empty fuel canister at the fuel station pumps. (Be wary of your buy/sell prices on fuel cans to prevent exploits...)

    /* Gang System Configurations */
    gang_price = 350000; //Gang creation price. --Remember they are persistent so keep it reasonable to avoid millions of gangs.
    gang_upgradeBase = 100000; //The base cost for purchasing additional slots in a gang
    gang_upgradeMultiplier = 2.5; //CURRENTLY NOT IN USE

    /* Housing System Configurations */
    house_limit = 3; //Maximum number of houses a player can own.
    houseGarage_buyPrice = 1000000;
    houseGarage_sellPrice = 0;

    /* Hunting & Fishing System Configurations */
    animaltypes_fish[] = { "Salema_F", "Ornate_random_F", "Mackerel_F", "Tuna_F", "Mullet_F", "CatShark_F", "Turtle_F" }; //Classnames of fish you can catch
    animaltypes_hunting[] = { "Sheep_random_F", "Goat_random_F", "Hen_random_F", "Cock_random_F", "Rabbit_F" }; //Classnames of aniamls you can hunt/gut

    /* Item-related Restrictions */
    restrict_medic_weapons = false; //Set to false to allow medics to use any weapon --true will remove ANY weapon they attempt to use (primary,secondary,launcher)
    restrict_clothingPickup = true; //Set to false to allow civilians to pickup/take any uniform (ground/crates/vehicles)
    restrict_weaponPickup = true; //Set to false to allow civilians to pickup/take any weapon (ground/crates/vehicles)
    restricted_uniforms[] = { "U_Rangemaster", "U_B_CombatUniform_mcam_tshirt", "U_B_CombatUniform_mcam_worn", "U_B_survival_uniform" };
    restricted_weapons[] = { "hgun_P07_snds_F", "arifle_MX_F", "arifle_MXC_F" };

    /* Jail System Configurations */
    jail_seize_vItems[] = { "spikeStrip","lockpick","goldbar","blastingcharge","boltcutter","defusekit","heroin_unprocessed","heroin_processed","cannabis","marijuana","cocaine_unprocessed","cocaine_processed","turtle_raw" }; //Define VIRTUAL items you want to be removed from players upon jailing here. Use "jail_seize_inventory" for Arma inventory items.
    jail_seize_inventory = true; //Set to true to run the cop seize script on inmates. False will remove only weapons and magazines otherwise. (Basically used in case cops forget to seize items). [See Lines 106-111 below]
    sendtoJail_locations[] = { "police_hq_1", "police_hq_2", "cop_spawn_3", "cop_spawn_5", "Correctional_Facility" }; //Enter the variableName from the mission.sqm here to allow cops to send a person to jail at these locations.
    jail_forceWalk = true;

    /* Medical System Configurations */
    revive_cops = false; //true to enable cops the ability to revive everyone or false for only medics/ems.
    revive_civ = false; //true to enable civs the ability to revive everyone or false for only medics/ems or medic/ems/cops.
    revive_east = false; //true to enable opfor the ability to revive everyone or false for only medics/ems or medic/ems/cops.
    revive_fee = 50000; //Revive fee that players have to pay and medics only EMS(independent) are rewarded with this amount.
    hospital_heal_fee = 100; //Fee to heal at a hospital NPC

    /* Paycheck & Bank System Configurations */
    bank_cop = 4000000; //Amount of cash in bank for new cops
    bank_civ = 4000000; //Amount of cash in bank for new civillians
    bank_med = 4000000; //Amount of cash in bank for new medics
	bank_adac = 4000000; //Amount of cash in bank for new adac
	
    paycheck_cop = 10000; //Payment for cops
    paycheck_civ = 3000; //Payment for civillians
    paycheck_med = 10000; //Payment for medics
	paycheck_adac = 10000; //Payment for adac
	
	
    paycheck_period = 10; //Scaled in minutes
    bank_transferTax = .06; //Tax that player pays when transferring money from ATM. Tax = Amount * multiplier

    /* Player Job System Configurations */
    delivery_points[] = { "dp_1", "dp_2", "dp_3", "dp_4", "dp_5", "dp_6", "dp_7", "dp_8", "dp_9", "dp_10", "dp_11", "dp_12", "dp_13", "dp_14", "dp_15", "dp_15", "dp_16", "dp_17", "dp_18", "dp_19", "dp_20", "dp_21", "dp_22", "dp_23", "dp_24", "dp_25" };
    fuelTank_winMultiplier = 1; //Win Multiplier in FuelTank Missions. Increase for greater payout. Default = 1

    /* Search & Seizure System Configurations */
    seize_exempt[] = { "Binocular", "ItemWatch", "ItemCompass", "ItemGPS", "ItemMap", "NVGoggles", "FirstAidKit", "ToolKit", "Chemlight_red", "Chemlight_yellow", "Chemlight_green", "Chemlight_blue", "optic_ACO_grn_smg" }; //Arma items that will not get seized from player inventories
    seize_uniform[] = { "U_Rangemaster" }; //Any specific uniforms you want to be seized from players
    seize_vest[] = { "V_TacVest_blk_POLICE" }; //Any specific vests you want to be seized from players
    seize_headgear[] = { "H_Cap_police" }; //Any hats or helmets you want seized from players
    seize_minimum_rank = 2; //Required minimum CopLevel to be able to seize items from players

    /* Vehicle System Configurations */
    chopShop_vehicles[] = { "Car", "Air", "Truck" }; //Vehicles that can be chopped. (Can add: "Ship" and possibly more -> look at the BI wiki...)
    vehicle_infiniteRepair[] = {false, false, true, false}; //Set to true for unlimited repairs with 1 toolkit. False will remove toolkit upon use. civilian, west, independent, east
    vehicleShop_rentalOnly[] = { "B_MRAP_01_hmg_F", "B_G_Offroad_01_armed_F", "B_Boat_Armed_01_minigun_F" }; //Vehicles that can only be rented and not purchased. (Last only for the session)
    vehicleShop_3D = true; //Add preview 3D inside Shop vehicle.       Default : False

    /* Vehicle Purchase Prices */
    vehicle_purchase_multiplier_CIVILIAN = 1; //Civilian Vehicle Buy Price = Config_Vehicle price * multiplier
    vehicle_purchase_multiplier_COP = .1; //Cop Vehicle Buy Price = Config_Vehicle price * multiplier
    vehicle_purchase_multiplier_MEDIC = .75; //Medic Vehicle Buy Price = Config_Vehicle price * multiplier
    vehicle_purchase_multiplier_OPFOR = .5; // -- NOT IN USE -- Simply left in for east support.

    /* Vehicle Rental Prices */
    vehicle_rental_multiplier_CIVILIAN = .80; //Civilian Vehicle Rental Price = Config_Vehicle price * multiplier
    vehicle_rental_multiplier_COP = .01; //Cop Vehicle Rental Price = Config_Vehicle price * multiplier
    vehicle_rental_multiplier_MEDIC = .55; //Medic Vehicle Rental Price = Config_Vehicle price * multiplier
    vehicle_rental_multiplier_OPFOR = .3; // -- NOT IN USE -- Simply left in for east support.

    /* Vehicle Sell Prices */
    vehicle_sell_multiplier_CIVILIAN = .5; //Civilian Vehicle Garage Sell Price = Vehicle Buy Price * multiplier
    vehicle_sell_multiplier_COP = .75; //Cop Vehicle Garage Sell Price = Vehicle Buy Price * multiplier
    vehicle_sell_multiplier_MEDIC = .75; //Medic Vehicle Garage Sell Price = Vehicle Buy Price * multiplier
    vehicle_sell_multiplier_OPFOR = .75; // -- NOT IN USE -- Simply left in for east support.

    /* "Other" Vehicle Prices */
    vehicle_chopShop_multiplier = .2; //Chop Shop price for vehicles. TO AVOID EXPLOITS NEVER SET HIGHER THAN A PURCHASE/RENTAL multipler!   Payout = Config_vehicle Price * multiplier
    vehicle_storage_fee_multiplier = .01; //Pull from garage cost --> Cost takes the playersides Buy Price * multiplier
    vehicle_cop_impound_multiplier = .01; //TO AVOID EXPLOITS NEVER SET HIGHER THAN A PURCHASE/RENTAL multipler!   Payout = Config_vehicle Price * multiplier

    disableCommanderView = true; //false - Group leaders can access the commander view. true [default] - Group leaders cannot access the commander view.
                                 //Commander/tactical view is accessed via pressing . [NUM] by default. It raises the camera significantly higher and steeper above the player in order to give a boarder tactical view of the surrounding area.

	ziptie_need_rebel = false;		
	
    /* Wanted System Settings *
    /* crimes[] = {String, Bounty, Code} */
    crimes[] = {
        {"STR_Crime_187V","100000","187V"},       //Vehicular Manslaughter
        {"STR_Crime_187","200000","187"},         //Manslaughter
        {"STR_Crime_901","100000","901"},         //Escaping Jail
        {"STR_Crime_215","25000","215"},          //Attempted Auto Theft
        {"STR_Crime_213","50000","213"},          //Use of illegal explosives
        {"STR_Crime_211","100000","211"},         //Robbery
        {"STR_Crime_207","50000","207"},          //Kidnapping
        {"STR_Crime_207A","25000","207A"},        //Attempted Kidnapping
        {"STR_Crime_487","100000","487"},         //Public Intoxication
        {"STR_Crime_488","20000","488"},          //Grand Theft
        {"STR_Crime_480","25000","480"},          //Petty Theft
        {"STR_Crime_481","50000","481"},          //Hit and run
        {"STR_Crime_483","100000","483"},         //Drug Possession
        {"STR_Crime_459","10000","459"},          //Intent to distribute
        {"STR_Crime_667","10000","667"},          //Drug Trafficking
        {"STR_Crime_668","1500","668"},           //Burglary
        {"STR_Crime_1","20000","1"},              //Driving without license
        {"STR_Crime_2","10000","2"},              //Driving on the wrong side of the road
        {"STR_Crime_3","10000","3"},              //Not respecting the signalizations
        {"STR_Crime_4","5000","4"},               //Speeding
        {"STR_Crime_5","5000","5"},               //No headlight in the night
        {"STR_Crime_6","5000","6"},               //Driving Motorcycle without helmet
        {"STR_Crime_7","10000","7"},              //Badly parked vehicle
        {"STR_Crime_8","100000","8"},             //Rebel vehicle (Not armed)
        {"STR_Crime_9","50000","9"},              //Grand Theft (Civilian Vehicle)
        {"STR_Crime_12","50000","12"},            //Flying over the city without authorization
        {"STR_Crime_13","15000","13"},            //Closing the street without authorization
        {"STR_Crime_14","10000","14"},            //Open carry in city (Legal Weapon)
        {"STR_Crime_15","100000","15"},           //Rebel weapo
        {"STR_Crime_16","50000","16"},            //Illegal clothing
        {"STR_Crime_18","5000","18"},             //Refuses to cooperate
        {"STR_Crime_19","50000","19"},            //Hit and run
        {"STR_Crime_20","50000","20"},            //Insulting a civilian
        {"STR_Crime_22","50000","22"},            //Insulting a soldier
        {"STR_Crime_23","200000","23"}            //Drug dealing
    };
};

#include "Config_Clothing.hpp"
#include "Config_Licenses.hpp"
#include "Config_Vehicles.hpp"
#include "Config_vItems.hpp"
#include "Config_Weapons.hpp"
#include "Config_Gather.hpp"
#include "Config_SpawnPoints.hpp"
#include "Config_Process.hpp"
#include "Config_Housing.hpp"
#include "Config_Garages.hpp"
