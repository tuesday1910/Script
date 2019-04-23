/*

	Main configuration for non-persistent market system
	Will need triggers to hook into vanilla pricing methods

*/

	//Schema: SHORTNAME, Default, Min, Max, changes in action, [Sales multiplied by 1, Purchase multiplied by -1]
	//["gold", 1500, 450, 2300, 8, 5],

////////////MAIN CONFIG

life_market_resources = [
	
	// Default İsler
	
	["rice", 5000, 0, 6250, 3, 1, 
		[ 
			["diamond_cut",1], 
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
	
	["oil_processed", 3500, 0, 6250, 3, 1, 
		[ 
			["diamond_cut",1], 
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
	
	["diamond_cut", 9500, 0, 15000, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
    
    ["emerald_Cut", 9200, 0, 15000, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["ruby_Cut",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
    
    ["ruby_Cut", 9800, 0, 15000, 5, 2, 
		[ 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["emerald_Cut",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
    
    ["gold_refined", 16000, 0, 15000, 2, 1, 
		[ 
			["diamond_cut",1], 
			["oil_processed",1],
			["iron_refined",1],
			["emerald_Cut",1],
			["cement",1],
			["glass",1] 
		] 
	],
    
    ["uranium_refined", 8000, 0, 10000, 2, 1, 
		[ 
			["diamond_cut",1], 
            ["emerald_Cut",1],
            ["gold_refined",1],
			["glass",1] 
		] 
	],
	
	["marijuana", 10000, 0, 19000, 10, 7,   
		[ 
			["cocaine_processed",1],
			["heroin_processed",1]
		] 
	],

	["cocaine_processed", 25000, 0, 30000, 15, 10,   
		[ 
			["marijuana",1], 
			["heroin_processed",1]
		] 
	],
		
	["heroin_processed", 20000, 0, 25000, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1]
		] 
	],
    
    ["tobacco_processed", 6500, 0, 70000, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1]
		] 
	],
	
	["whiskey", 6500, 0, 70000, 15, 10,   
		[ 
			["marijuana",1], 
			["cocaine_processed",1]
		] 
	],
	
	["copper_refined", 2495, 0, 4250, 2, 1, 
		[ 
			["diamond_cut",1], 
			["oil_processed",1],
			["iron_refined",1],
			["gold_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
	
	["iron_refined", 1922, 0, 2900, 3, 1,  
		[ 
			["diamond_cut",1], 
			["oil_processed",1],
			["copper_refined",1],
			["gold_refined",1],
			["salt_refined",1],
			["cement",1],
			["glass",1] 
		] 
	],
	
	["salt_refined", 1255, 0, 2900, 2, 1, 
		[ 

			["copper_refined",1],
			["gold_refined",1],
			["glass",1] 
		] 
	],
	
	["glass", 2790, 0, 4550, 2, 1, 
		[ 
			["diamond_cut",1], 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1]
		] 
	],
	
	["cement", 5000, 0, 6500, 2, 1, 
		[ 

			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["glass",1]
		] 
	],
	
	["goldbar", 500000, 0, 550000, 2, 1, 
		[ 
			["diamond_cut",1], 
			["oil_processed",1],
			["iron_refined",1],
			["copper_refined",1],
			["glass",1]
		] 
	],
    
    
    ["rabbit_raw", 600, 0, 1000, 2, 1,   
		[ 
			["salema_raw",1],
			["ornate_raw",1],
            ["mackerel_raw",1],
            ["tuna_raw",1],
            ["mullet_raw",1],
            ["catshark_raw",1],
            ["turtle_raw",1]
		] 
	],
    
    ["salema_raw", 4000, 0, 1000, 2, 1,   
		[ 
			["ornate_raw",1],
            ["mackerel_raw",1],
            ["tuna_raw",1],
            ["mullet_raw",1],
            ["catshark_raw",1],
            ["turtle_raw",1]
		] 
	],
    
    ["ornate_raw", 500, 0, 1000, 2, 1,   
		[ 
			["salema_raw",1],
            ["mackerel_raw",1],
            ["tuna_raw",1],
            ["mullet_raw",1],
            ["catshark_raw",1],
            ["turtle_raw",1]
		] 
	],
    
    ["mackerel_raw", 450, 0, 1000, 2, 1,   
		[ 
			["salema_raw",1],
			["ornate_raw",1],
            ["tuna_raw",1],
            ["mullet_raw",1],
            ["catshark_raw",1],
            ["turtle_raw",1]
		] 
	],
    
    ["tuna_raw", 1000, 0, 2000, 2, 1,   
		[ 
			["salema_raw",1],
			["ornate_raw",1],
            ["mackerel_raw",1],
            ["catshark_raw",1],
            ["turtle_raw",1],
            ["mullet_raw",1]
		] 
	],
    
    ["mullet_raw", 700, 0, 1000, 2, 1,   
		[ 
			["salema_raw",1],
			["ornate_raw",1],
            ["mackerel_raw",1],
            ["tuna_raw",1],
            ["catshark_raw",1],
            ["turtle_raw",1],
            ["tuna_raw",1]
		] 
	],
    
    ["catshark_raw", 900, 0, 1000, 2, 1,   
		[ 
			["salema_raw",1],
			["ornate_raw",1],
            ["mackerel_raw",1],
            ["mullet_raw",1],
            ["turtle_raw",1],
            ["tuna_raw",1]
		] 
	],
    
    ["turtle_raw", 70000, 0, 75000, 2, 1,   
		[ 
			["salema_raw",1],
			["ornate_raw",1],
            ["mackerel_raw",1],
            ["mullet_raw",1],
            ["tuna_raw",1]
		] 
	],
    
    ["hen_raw", 500, 0, 1000, 2, 1,   
		[ 
            ["rabbit_raw",1],
            ["rabbit_raw",1],
            ["rooster_raw",1],
            ["sheep_raw",1],
            ["goat_raw",1]
		] 
	],
    
    ["rooster_raw", 550, 0, 1000, 2, 1,   
		[ 
            ["rabbit_raw",1],
            ["hen_raw",1],
            ["sheep_raw",1],
            ["goat_raw",1]
		] 
	],
    
    ["sheep_raw", 550, 0, 1000, 2, 1,   
		[ 
            ["rabbit_raw",1],
            ["hen_raw",1],
            ["goat_raw",1]
		] 
	],
    
    ["goat_raw", 550, 0, 1000, 2, 1,   
		[ 
            ["mullet_raw",1],
            ["rabbit_raw",1],
            ["hen_raw",1],
            ["goat_raw",1]
		] 
	]
];
publicVariable "life_market_resources";

////////////GENERATED CONFIG
//life_market_changes = []; //[SHORTNAME,SELL,BUY]
life_market_shortnames = []; //shortnames if in market
//life_market_clampprices = []; //[SHORTNAME,MIN,MAX]

{
	life_market_shortnames set [count life_market_shortnames, _x select 0];
	//life_market_clampprices set [count life_market_clampprices, [_x select 0, _x select 2, _x select 3] ];
	//life_market_changes set [count life_market_changes, [_x select 0, _x select 4, _x select 5] ];
}
foreach life_market_resources;

publicVariable "life_market_shortnames";
//publicVariable "life_market_clampprices";

////////////SYNC PRICES WITH SERVER IF EMPTY
//if(isNil("life_market_prices")) then
//{
	life_market_prices = []; //[SHORTNAME,CURRENTPRICE,DIRECTIONGLOBAL,DIRECTIONLOCAL]
	{
	
		life_market_prices set [count life_market_prices, [_x select 0, _x select 1, 0, 0] ];
	}
	foreach life_market_resources;
	
	publicVariable "life_market_prices";
	
	systemChat "Market Prices Generated!";
//};