/*--------------------------------------------------------------------------
    Author:		Maverick Applications
    Website:	https://maverick-applications,com

    You're not allowed to use this file without permission from the author!
---------------------------------------------------------------------------*/

// Configuration file for the weaponshop

class maverick_weaponshop_cfg {

	cashVar = "life_cash";								//--- Cash Variable
	cashSymbol = "$"; 									//--- Currency Symbol
	rotationSpeed = 2; 									//--- Rotation speed for item in preview (1 - 10)
	saveFunction = "[] call SOCK_fnc_updateRequest"; 	//--- Function to save gear etc, once items are purchased

	class localization {
		//--- localization for hints etc,
		msgParamEmpty =						"Shop Parameter is empty!";
		msgInVehicle =						"You cannot be in a Vehicle!";
		msgShopExists =						"Shop doesn't Exist!";
		msgCondition =						"Not permitted to access this Shop!";
		msgCashOnHand =						"Cash on Hand - %1%2";
		msgCartTotal =						"Your Cart - %1%2";
		msgInfoTooltip =					"--> HOLD YOUR LEFT MOUSE BUTTON DOWN WHILE MOVING MOUSE TO ROTATE WEAPON,\n--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT,\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS,";
		msgInfoTooltip2 = 					"--> DOUBLE CLICK ON AN ITEM IN THE CART TO REMOVE IT,\n--> USE THE 'OVERRIDE GEAR' CHECKBOX TO REPLACE WEAPONS ON HAND WITH PURCHASED WEAPONS,";
		msgEmptyShop = 						"Nothing Found,,,";
		msgInfoText	=						"<t color='#FFFFFF'>Price:</t> <t color='%1'>%3%2</t>";
		msgCartFull	=						"Cart is Full";
		msgCartEmpty =						"Cart is Empty";
		msgNotEnoughCash =					"Not enough Cash for this Transaction";
		msgOverrideAlert =					"Use the override feature to override gear!";
		msgTransactionComplete =			"Purchase completed for %1%2";
		msgNotEnoughSpace =				 	"You didn't have enough space for all the items, You however only paid for those you had space for!";
		msgClear =							"Clear";
		msgSearch =							"Search";

		//--- localization for dialogs
		#define dialogTabWeapon				"Weapon"
		#define dialogTabMagazines			"Magazines"
		#define dialogTabAttachments		"Attachments"
		#define dialogTabOther				"Other"
		#define dialogAddBtn				"Add"
		#define dialogOverrideTooltip		"Override Gear"
		#define dialogCompleteBtn			"Complete"
		#define dialogCloseBtn 				"Close"
	};

	class shops {
		class example_shop {
			title = "Billy Joe's Firearms"; //--- Title of Shop
			condition = "license_civ_gun"; 	//--- Condition to meet to access shop
			simple = 0; 			//--- Type of GUI 0-Weapon View 1-No Weapon View
			maxCart = 100; 			//--- Max Amount of Items in Shopping Cart

			weapons[] = {
				//--- item classname, price, condition, custom display name
			{ "hgun_mas_acp_F", 26500, "license_civ_gun", "" },
			{ "hgun_mas_bhp_F",  25500, "license_civ_gun", "" },
			{ "RH_python",  30500, "license_civ_gun", "" },
			{ "RH_Deagleg",  80000, "license_civ_gun", "" },
			{ "RH_fnp45",  30000, "license_civ_gun", "" },
			{ "Glock18_Fade",  40000, "license_civ_gun", "" },
			{ "RH_tec9", 50000, "license_civ_gun", "" },
			{ "hgun_mas_uzi_F",  49000, "license_civ_gun", "" },
			{ "RH_ttracker_g",  45000, "license_civ_gun", "" },
			{ "RH_vz61", 42000, "license_civ_gun", "" },
			{ "SMG_02_F", 65000, "license_civ_gun", "" },
			{ "SMG_05_F", 90000, "license_civ_gun", "" },
			{ "Skyline_Mosin9130_Bayonette_01_F", 20000, "license_civ_gun", "" },
			{ "Skyline_Arbalette_01_F", 90000, "license_civ_gun", "" },
			{ "A3L_BergenMurica", 50000, "license_civ_gun", "" },
			{ "RH_muzi", 120000, "license_civ_gun", "" },
			{ "hgun_Pistol_heavy_01_F",  26500, "license_civ_gun", "" },
			{ "hgun_ACPC2_F",  26500, "license_civ_gun", "" },
			{ "RH_m9",  26500, "license_civ_gun", "" },
			{ "RH_m9c",  26500, "license_civ_gun", "" },
			{ "RH_cz75", 26500, "license_civ_gun", "" },
			{ "RH_deagle", 26500, "license_civ_gun", "" },
			{ "RH_Deaglem", 26500, "license_civ_gun", "" },
			{ "RH_fn57", 26500, "license_civ_gun", "" },
			{ "RH_fn57_t", 26500, "license_civ_gun", "" },
			{ "RH_fnp45t", 26500, "license_civ_gun", "" },
			{ "RH_g17", 26500, "license_civ_gun", "" },
			{ "RH_g19",26500, "license_civ_gun", "" },
			{ "RH_g19t", 26500, "license_civ_gun", "" },
			{ "RH_gsh18", 26500, "license_civ_gun", "" },
			{ "RH_kimber", 26500, "license_civ_gun", "" },
			{ "RH_kimber_nw",  26500, "license_civ_gun", "" },
			{ "RH_m1911",  26500, "license_civ_gun", "" },
			{ "RH_mak",  26500, "license_civ_gun", "" },
			{ "RH_mateba", 26500, "license_civ_gun", "" },
			{ "RH_mp412", "", 26500, "license_civ_gun", "" },
			{ "Skyline_MR96_01_F", 26500, "license_civ_gun", "" },
			{ "hgun_P07_khk_F", 26500, "license_civ_gun", "" },
			{ "hgun_P07_F", 26500, "license_civ_gun", "" },
			// VIP Level 5
			{ "srifle_DMR_03_woodland_F", 150000, "call life_donorlevel >= 5","" },						//Mk-| EMR 7,62mm(Woodland)
			{ "srifle_DMR_06_camo_F", 150000, "call life_donorlevel >= 5","" },							//Mk14 7,62mm(Camo)
			{ "srifle_DMR_06_olive_F", "", 150000, "call life_donorlevel >= 5","" },							//Mk14 7,62mm(Olive)
			{ "srifle_EBR_F",  150000, "call life_donorlevel >= 5","" },									//Mk18 ABR 7,62mm
			{ "arifle_Mk20_plain_F",  150000, "call life_donorlevel >= 5","" },							//Mk20 5,56mm
			{ "arifle_Mk20_F",  150000, "call life_donorlevel >= 5","" },									//Mk20 5,56mm(Camo)
			{ "arifle_Mk20_GL_plain_F",  150000, "call life_donorlevel >= 5","" },						//Mk20 EGLM 5,56mm
			{ "arifle_Mk20_GL_F",  200000, "call life_donorlevel >= 5","" },								//Mk20 EGLM 5,56mm(Camo)
			{ "arifle_Mk20C_plain_F",  200000, "call life_donorlevel >= 5","" },							//Mk20C 5,56mm
			{ "arifle_Mk20C_F",  200000, "call life_donorlevel >= 5","" },								//Mk20C 5,56mm(Camo)
			{ "LMG_mas_mk48_F",  160000, "call life_donorlevel >= 5","" },								//Mk48
			{ "LMG_mas_mk48_F_v",  160000, "call life_donorlevel >= 5","" },								//Mk48 Wood
			{ "Skyline_Mosin9130_01_F",  160000, "call life_donorlevel >= 5","" },						//Mosin 9130
			{ "Skyline_Mosin9130_03_F",  160000, "call life_donorlevel >= 5","" },						//Mosin 9130(Camo)
			{ "Skyline_Mosin9130_02_F",  160000, "call life_donorlevel >= 5","" },						//Mosin 9130(Noir)
			{ "Skyline_Mosin9130_04_F",  140000, "call life_donorlevel >= 5","" },						//Mosin 9130(Vert)
			{ "Skyline_Mosin9130_Bayonette_01_F",  140000, "call life_donorlevel >= 5","" },				//Mosin 9130(Bayonette)
			{ "Skyline_Mosin9130_Bayonette_03_F",  140000, "call life_donorlevel >= 5","" },				//Mosin 9130 Bayonette(Camo)
			{ "Skyline_Mosin9130_Bayonette_02_F",  130000, "call life_donorlevel >= 5","" },				//Mosin 9130 Bayonette(Noir)
			{ "Skyline_Mosin9130_Bayonette_04_F",  130000, "call life_donorlevel >= 5","" },				//Mosin 9130 Bayonette(Vert)
			{ "arifle_mas_mp5sd_ds",  130000, "call life_donorlevel >= 5","" },							//MP5SD6 UW Scuba
			{ "arifle_MX_GL_Black_F",  100000, "call life_donorlevel >= 5","" },							//MX 3GL 6,5mm(Black)
			{ "arifle_MX_GL_khk_F",  100000, "call life_donorlevel >= 5","" },							//MX 3GL 6,5mm(Khaki)
			{ "arifle_MX_GL_F",  100000, "call life_donorlevel >= 5","" },								//MX 3GL 6,5mm
			{ "arifle_MX_Black_F",  100000, "call life_donorlevel >= 5","" },								//MX 6,5mm(Black)
			{ "arifle_MX_khk_F",  110000, "call life_donorlevel >= 5","" },								//MX 6,5mm(Khaki)
			{ "arifle_MX_SW_Black_F",  110000, "call life_donorlevel >= 5","" },							//MX SW 6,5mm(Black)
			{ "arifle_MX_SW_khk_F",  110000, "call life_donorlevel >= 5","" },							//MX SW 6,5mm(Khaki)
			{ "srifle_mas_sr25",  100000, 100, "call life_donorlevel >= 4" },
            { "arifle_MXC_F",  30000, 5000, "call life_donorlevel >= 4" },
			{ "LMG_mas_M249_F_d",  190000, "call life_donorlevel >= 4","" },								//M249 Para Des
			{ "LMG_mas_M249_F_v",  190000, "call life_donorlevel >= 4","" },								//M249 Para Wood
			{ "m249Tan_EPOCH",  200000, "call life_donorlevel >= 4","" },									//M249 Tan
			{ "arifle_mas_m27",  200000, "call life_donorlevel >= 4","" },								//M27 IAR
			{ "arifle_mas_m27_d",  200000, "call life_donorlevel >= 4","" },								//M27 IAR Des				
			{ "arifle_mas_m27m",  250000, "call life_donorlevel >= 4","" },								//M27 IAR MAG
			{ "arifle_mas_m27m_d",  250000, "call life_donorlevel >= 4","" },								//M27 IAR MAG Des
			{ "arifle_mas_m27m_v",  100000, "call life_donorlevel >= 4","" },								//M27 IAR MAG Wood
			{ "arifle_mas_m27_v",  100000, "call life_donorlevel >= 4","" },								//M27 IAR Wood
			{ "srifle_LRR_tna_F",  450000, "call life_donorlevel >= 4","" },								//M320 LRR ,408(Tropic)
			{ "srifle_DMR_02_F",  150000, "call life_donorlevel >= 4","" },								//MAR-10 ,338(Black)
			{ "srifle_DMR_02_camo_F",  150000, "call life_donorlevel >= 4","" },							//MAR-10 ,338(Camo)
			{ "srifle_DMR_03_multicam_F",  170000, "call life_donorlevel >= 4","" },						//Mk-| EMR 7,62mm(Camo)
			{ "srifle_DMR_03_khaki_F",  180000, "call life_donorlevel >= 4","" },							//Mk-| EMR 7,62mm(Khaki)
			{ "srifle_DMR_03_tan_F",  170000, "call life_donorlevel >= 4","" }							//Mk-| EMR 7,62mm(Sand)
			};

			magazines[] = {
		    { "16Rnd_9x21_Mag",  25, "license_civ_gun", "" },
			{ "6Rnd_45ACP_Cylinder",  50, "license_civ_gun", "" },
			{ "9Rnd_45ACP_Mag",  45, "license_civ_gun", "" },
			{ "30Rnd_9x21_Mag",  75, "license_civ_gun", "" },
			{ "12Rnd_mas_45acp_Mag",  300, "license_civ_gun", "" },
			{ "15Rnd_mas_9x21_Mag",  300, "license_civ_gun", "" },
			{ "RH_6Rnd_357_Mag",  300, "license_civ_gun", "" },
			{ "RH_7Rnd_50_AE",  800, "license_civ_gun", "" },
			{ "RH_15Rnd_45cal_fnp",  300, "license_civ_gun", "" },
			{ "17Rnd_mas_9x21_Mag",  300, "license_civ_gun", "" },
			{ "RH_32Rnd_9x19_tec",  300, "license_civ_gun", "" },
			{ "Glock18_Radiation",  300, "license_civ_gun", "" },
			{ "25Rnd_mas_9x19_Mag",  5000, "license_civ_gun", "" },
			{ "RH_6Rnd_45ACP_Mag",  5000, "license_civ_gun", "" },
			{ "RH_20Rnd_32cal_vz61",  5000, "license_civ_gun", "" },
			{ "30Rnd_9x21_Mag_SMG_02",  5000, "license_civ_gun", "" },
			{ "5Rnd_762x54_Mosin",  5000, "license_civ_gun", "" },
			{ "5Rnd_Fleche",  5000, "license_civ_gun", "" },
			{ "2Rnd_B95_Mag",  5000, "license_civ_gun", "" },
			{ "RH_30Rnd_9x19_UZI",  5000, "license_civ_gun", "" },
			{ "11Rnd_45ACP_Mag",  5000, "license_civ_gun", "" },
			{ "RH_15Rnd_9x19_M9",  5000, "license_civ_gun", "" },
			{ "RH_16Rnd_9x19_CZ",  5000, "license_civ_gun", "" },
			{ "RH_20Rnd_57x28_FN",  5000, "license_civ_gun", "" },
			{ "RH_17Rnd_9x19_g17",  5000, "license_civ_gun", "" },
			{ "RH_7Rnd_45cal_m1911",  5000, "license_civ_gun", "" },
			{ "RH_8Rnd_9x18_Mak",  5000, "license_civ_gun", "" },
			{ "RH_6Rnd_44_Mag",  5000, "license_civ_gun", "" },
			{ "30Rnd_556x45_Stanag",  5000, "license_civ_gun", "" },
            { "30Rnd_65x39_caseless_green",  5000, "license_civ_gun", "" },
            { "10Rnd_762x54_Mag",  5000, "license_civ_gun", "" },
			{ "30Rnd_762x39_Mag_F",  5000, "license_civ_gun", "" },
			{ "30Rnd_mas_762x39_mag",  5000, "license_civ_gun", "" },
			{ "10Rnd_mas_338_Stanag",  7500, "license_civ_gun", "" },
			{ "64Rnd_mas_9x18_mag",  5000, "license_civ_gun", "" },
			{ "100Rnd_580x42_Mag_F",  5000, "license_civ_gun", "" },
			{ "30Rnd_580x42_Mag_F",  5000, "license_civ_gun", "" },
			{ "20Rnd_650x39_Cased_Mag_F",  5000, "license_civ_gun", "" },
			{ "20Rnd_mas_762x51_Stanag",  5000, "license_civ_gun", "" },
			{ "5Rnd_mas_127x108_mag",  5000, "license_civ_gun", "" },
			{ "5Rnd_127x108_Mag",  5000, "license_civ_gun", "" },
			{ "200Rnd_556x45_Box_F",  5000, "license_civ_gun", "" },
			{ "5Rnd_mas_762x51_Stanag",  5000, "license_civ_gun", "" },
			{ "100Rnd_mas_762x51_Stanag",  5000, "license_civ_gun", "" },
			{ "7Rnd_408_Mag",  5000, "license_civ_gun", "" },
			{ "200Rnd_65x39_cased_Box",  5000, "license_civ_gun", "" },
			{ "30Rnd_mas_545x39_mag",  5000, "license_civ_gun", "" },
			{ "30Rnd_762x51_Fal",  5000, "", "" },
			{ "41630mk262_mag",  5000, "", "" },
            { "20Rnd_556x45_UW_mag",  5000, "", "" },
			{ "10Rnd_127x54_Mag",  5000, "", "" },
			{ "10Rnd_93x64_DMR_05_Mag",  5000, "", "" },
			{ "10Rnd_338_Mag",  5000, "", "" },
			{ "30Rnd_762x39_Mag",  5000, 7"", "" },
			{ "16Rnd_9x21_Mag",  25, "", "" },
            { "30Rnd_65x39_caseless_mag",  5000, "", "" },
            { "30Rnd_9x21_Mag",  5000, "", "" },
            { "9Rnd_45ACP_Mag",  5000, "", "" },
			{ "5Rnd_mas_127x99_Stanag",  5000, "", "" },
			{ "200Rnd_mas_556x45_Stanag",  5000, "", "" },
			{ "30Rnd_mas_9x21sd_Stanag",  5000, "", "" },
			{ "25Rnd_45ACP_Mag",  5000, "", "" },
			{ "30Rnd_mas_556x45_Stanag",  5000, "", "" },
			{ "20Rnd_762x51_Mag",  5000, "", "" },
			{ "71Rnd_mas_762x25_mag",  5000, "", "" },
			{ "30Rnd_mas_9x21_Stanag",  5000, "", "" },
			{ "10Rnd_mas_338sd_Stanag",  5000, "", "" },
			{ "200Rnd_556x45_M249",  5000, "", "" },
			{ "10Rnd_mas_762x54_mag",  5000, "", "" },
			{ "20Rnd_mas_12Gauge_Slug",  5000, "", "" },
			{ "7Rnd_mas_12Gauge_Slug",  5000, "", "" },
			{ "7Rnd_mas_12Gauge_Pellets",  5000, "", "" },
			{ "150Rnd_762x51_Box",  5000, "", "" },
			{ "100Rnd_mas_762x54_mag",  5000, "", "" },
			{ "130Rnd_338_Mag",  5000, "", "" },
			{ "150Rnd_mas_556x45_Stanag",  5000, "", "" },
			{ "30Rnd_45ACP_Mag_SMG_01",  5000, "", "" },	
			{ "Fett_20Rnd_556x45_UW_mag",  5000, "", "" },
			{ "150Rnd_762x54_Box",  5000, "", "" }
			
			};

			attachments[] = {
			{ "optic_ACO_grn_smg",  2500, "license_civ_gun", "" },
			{ "optic_MRD",  5000, "license_civ_gun", "" },
			{ "optic_Yorris",  5000, "license_civ_gun", "" },
			{ "optic_ERCO_blk_F",  10000, "license_civ_gun", "" },
			{ "optic_Holosight",  3000, "license_civ_gun", "" },
            { "optic_Arco",  3000, "license_civ_gun", "" },
			{ "optic_mas_PSO_nv_c",  3000, "license_civ_gun", "" },
			{ "optic_mas_PSO_nv",  3000, "license_civ_gun", "" },
			{ "optic_Hamr",  2000, 75, "license_civ_gun" },
			{ "optic_ACO_grn",  2000, "license_civ_gun", "" },
			{ "optic_AMS",  2000, "license_civ_gun", "" },
			{ "optic_DMS",  2000, "license_civ_gun", "" },
			{ "optic_LRPS",  2000, "license_civ_gun", "" },
			{ "optic_KHS_blk",  2000, "license_civ_gun", "" },
			{ "optic_KHS_old",  2000, "license_civ_gun", "" },
			{ "optic_LRPS_ghex_F",  2000, "license_civ_gun", "" },
			{ "optic_Holosight_smg_blk_F",  2000, "license_civ_gun", "" },
			{ "optic_SOS",  2000, "license_civ_gun", "" },
			{ "optic_MRCO",  2000, "license_civ_gun", "" },
			{ "optic_Hamr_khk_F",  2000, "license_civ_gun", "" },
			{ "bipod_03_F_blk",  2000, "license_civ_gun", "" },
			{ "bipod_02_F_blk",  2000, "license_civ_gun", "" },
			{ "bipod_01_F_blk",  2000, "license_civ_gun", "" },
			{ "bipod_02_F_hex",  2000, "license_civ_gun", "" },
			{ "acc_pointer_IR",  2000, "license_civ_gun", "" },
			{ "optic_NVS",  7000, "license_civ_gun", "" },
			{ "acc_flashlight",2000, "license_civ_gun", "" },
		   // Muzzle
			{ "muzzle_snds_B",  5000, "call life_donorlevel >= 2" ,""},
			{ "muzzle_snds_B_khk_F",  5000, "call life_donorlevel >= 2" ,""},
			{ "muzzle_mas_snds_SH",  5000, "call life_donorlevel >= 2" ,""},
			{ "muzzle_mas_snds_SHc",  5000, "call life_donorlevel >= 2" ,""},
			{ "muzzle_snds_58_blk_F",  5000, "call life_donorlevel >= 2" ,""},
			{ "muzzle_snds_65_TI_hex_F",  5000, "call life_donorlevel >= 2" ,""},
			{ "muzzle_snds_H_snd_F",  5000, "call life_donorlevel >= 2" ,""},
			{ "muzzle_snds_93mmg_tan",  5000, "call life_donorlevel >= 2" ,""},
			{ "muzzle_mas_snds_KSVK", 5000, "call life_donorlevel >= 2" ,""},
			{ "muzzle_mas_snds_SVc", 5000, "call life_donorlevel >= 2" ,""},
			{ "muzzle_snds_L",  5000, "call life_donorlevel >= 2" ,""},
			{ "muzzle_snds_H",  5000, "call life_donorlevel >= 2" ,""},
			{ "muzzle_snds_338_sand", 5000, "call life_donorlevel >= 2" ,""}
			
			};
			
			items[] = {
		    { "Binocular",  150, "", "" },
			{ "ItemGPS",  150, "", "" },
			{ "ItemMap",  150, "", "" },
			{ "ItemCompass",  150, "", "" },
			{ "Rangefinder",  12000, "", "" },
			{ "ItemWatch",  150, "", "" },
			{ "FirstAidKit",  1000, "", "" },
			{ "NVGoggles",  20000, "", "" },
			{ "Chemlight_red",  150, "", "" },
			{ "Chemlight_yellow",  150, "", "" },
			{ "Chemlight_green",  150, "", "" },
			{ "Chemlight_blue",  150, "", "" },
			{ "hgun_mas_acp_F",  26500, "", "" },
			{ "hgun_mas_bhp_F",  25500, "", "" }

			};
		};
	};
};

#include "gui\weapon_gui_master.cpp"
