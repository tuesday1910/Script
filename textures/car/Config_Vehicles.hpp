class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "" },
			{ "Gek_audi_a4_avant", "" }, // 600000
			{ "GeK_audi_a4_avant_02", "" },
			{ "GeK_audi_a4_avant_10", "" },
			{ "GeK_audi_a4_avant_11", "" },
			{ "GeK_audi_a4_avant_03", "" },
			{ "GeK_audi_a4_avant_05", "" },
			{ "GeK_audi_a4_avant_04", "" },
			{ "GeK_audi_a4_avant_07", "" },
			{ "GeK_audi_a4_avant_06", "" },
			{ "GeK_audi_a4_avant_09", "" },
			{ "GeK_audi_a4_avant_08", "" },
			{ "SAL_AudiCiv", "" }, // 650000
			{ "SAL_AudiCivRed", "" },
			{ "SAL_AudiCivSilver", "" },
			{ "SAL_AudiCivBlack", "" },
			{ "Skyline_Audi_RS4_01_F", "" }, // 650000
			{ "Skyline_Audi_RS4_11_F", "" },
			{ "Skyline_Audi_RS4_12_F", "" },
			{ "Skyline_Audi_RS4_02_F", "" },
			{ "Skyline_Audi_RS4_05_F", "" },
			{ "Skyline_Audi_RS4_04_F", "" },
			{ "Skyline_Audi_RS4_03_F", "" },
			{ "Skyline_Audi_RS4_08_F", "" },
			{ "Skyline_Audi_RS4_07_F", "" },
			{ "Skyline_Audi_RS4_13_F", "" },
			{ "Skyline_Audi_RS4_10_F", "" },
			{ "Skyline_Audi_RS4_09_F", "" },
			{ "ivory_c", "" }, //1200000
			{ "Mrshounka_bmwm1_civ_noir", "" }, //2500000
			{ "Mrshounka_bmwm1_civ_bleufonce", "" },
			{ "Mrshounka_bmwm1_civ_rouge", "" },
			{ "Mrshounka_bmwm1_civ_jaune", "" },
			{ "Mrshounka_bmwm1_civ_rose", "" },
			{ "Mrshounka_bmwm1_civ_grise", "" },
			{ "Mrshounka_bmwm1_civ_violet", "" },
			{ "Mrshounka_bmwm1_civ_orange", "" },
			{ "GeK_M6_02", "" }, //1000000
			{ "GeK_M6_10", "" },
			{ "GeK_M6_11", "" },
			{ "GeK_M6_03", "" },
			{ "GeK_M6_05", "" },
			{ "GeK_M6_04", "" },
			{ "GeK_M6_07", "" },
			{ "GeK_M6_09", "" },
			{ "GeK_M6_08", "" },
			{ "ivory_e36", "" },
			{ "GeK_CTSV_10", "" }, // 980000
			{ "GeK_CTSV_11", "" },
			{ "GeK_CTSV_03", "" },
			{ "GeK_CTSV_05", "" },
			{ "GeK_CTSV_04", "" },
			{ "GeK_CTSV_07", "" },
			{ "GeK_CTSV_06", "" },
			{ "GeK_CTSV_09", "" },
			{ "GeK_CTSV_08", "" },
			{ "GeK_Cadillac_Fleetwood_Brougham_85", "" }, //700000
			{ "GeK_Camaro", "" }, //1500000
			{ "shounka_avalanche", "" }, //90000
			{ "shounka_avalanche_noir", "" },
			{ "shounka_avalanche_bleufonce", "" },
			{ "shounka_avalanche_rouge", "" },
			{ "shounka_avalanche_jaune", "" },
			{ "shounka_avalanche_rose", "" },
			{ "shounka_avalanche_grise", "" },
			{ "shounka_avalanche_violet", "" },
			{ "shounka_avalanche_orange", "" },
			{ "GeK_ElCamino", "" }, //70000
			{ "GeK_ElCamino_02", "" },
			{ "GeK_ElCamino_10", "" },
			{ "GeK_ElCamino_11", "" },
			{ "GeK_ElCamino_03", "" },
			{ "GeK_ElCamino_05", "" },
			{ "GeK_ElCamino_04", "" },
			{ "GeK_ElCamino_07", "" },
			{ "GeK_ElCamino_06", "" },
			{ "GeK_ElCamino_01", "" },
			{ "GeK_ElCamino_09", "" },
			{ "GeK_ElCamino_08", "" },
			{ "GeK_DS3", "" }, //20000
			{ "GeK_DS3_02", "" },
			{ "GeK_DS3_10", "" },
			{ "GeK_DS3_11", "" },
			{ "GeK_DS3_03", "" },
			{ "GeK_DS3_05", "" },
			{ "GeK_DS3_04", "" },
			{ "GeK_DS3_07", "" },
			{ "GeK_DS3_06", "" },
			{ "GeK_DS3_01", "" },
			{ "GeK_DS3_09", "" },
			{ "GeK_DS3_08", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_01_F", "" }, //250000
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_11_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_12_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_02_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_05_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_04_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_08_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_07_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_10_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_09_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_01_F", "" }, //3000000
			{ "Skyline_Vehicule_Jonzie_Viper_11_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_12_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_02_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_05_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_04_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_03_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_08_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_07_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_10_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_09_F", "" },
			{ "Mrshounka_ducati_p_noir", "" }, //1200000
			{ "Mrshounka_ducati_p_bf", "" },
			{ "Mrshounka_ducati_p_r", "" },
			{ "Mrshounka_ducati_p_j", "" },
			{ "Mrshounka_ducati_p_rose", "" },
			{ "Mrshounka_ducati_p_g", "" },
			{ "Mrshounka_ducati_p_v", "" },
			{ "Mrshounka_ducati_p_o", "" },
			{ "GeK_250GT", "" }, //90000
			{ "GeK_250GT_02", "" },
			{ "GeK_250GT_10", "" },
			{ "GeK_250GT_11", "" },
			{ "GeK_250GT_03", "" },
			{ "GeK_250GT_04", "" },
			{ "GeK_250GT_07", "" },
			{ "GeK_250GT_06", "" },
			{ "GeK_250GT_01", "" },
			{ "GeK_250GT_09", "" },
			{ "GeK_250GT_08", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_01_F", "" }, //5600000
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_11_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_12_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_02_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_05_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_04_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_03_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_08_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_10_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_09_F", "" },
			{ "shounka_f430_spider", "" },
			{ "GeK_Mustang_02", "" }, //2500000
			{ "GeK_Mustang_10", "" },
			{ "GeK_Mustang_11", "" },
			{ "GeK_Mustang_03", "" },
			{ "GeK_Mustang_05", "" },
			{ "GeK_Mustang_04", "" },
			{ "GeK_Mustang_07", "" },
			{ "GeK_Mustang_06", "" },
			{ "GeK_Mustang_09", "" },
			{ "GeK_Mustang_08", "" },
			{ "GeK_Apollo", "" }, // 6000000
			{ "GeK_Apollo_02", "" },
			{ "GeK_Apollo_10", "" },
			{ "GeK_Apollo_11", "" },
			{ "GeK_Apollo_03", "" },
			{ "GeK_Apollo_05", "" },
			{ "GeK_Apollo_04", "" },
			{ "GeK_Apollo_07", "" },
			{ "GeK_Apollo_06", "" },
			{ "GeK_Apollo_09", "" },
			{ "GeK_Apollo_08", "" },
			{ "GeK_Agera", "" }, // 9000000
			{ "GeK_Gallardo", "" }, // 5900000
			{ "GeK_Gallardo_02", "" },
			{ "GeK_Gallardo_10", "" },
			{ "GeK_Gallardo_11", "" },
			{ "GeK_Gallardo_03", "" },
			{ "GeK_Gallardo_05", "" },
			{ "GeK_Gallardo_04", "" },
			{ "GeK_Gallardo_07", "" },
			{ "GeK_Gallardo_06", "" },
			{ "GeK_Gallardo_09", "" },
			{ "GeK_Gallardo_08", "" },
			{ "ivory_lfa", "" }, //8000000
			{ "ivory_elise", "" }, //3000000
			{ "Skyline_Lotus_Esprit_01_F", "" }, //2500000
			{ "Skyline_Lotus_Esprit_11_F", "" },
			{ "Skyline_Lotus_Esprit_12_F", "" },
			{ "Skyline_Lotus_Esprit_02_F", "" },
			{ "Skyline_Lotus_Esprit_05_F", "" },
			{ "Skyline_Lotus_Esprit_04_F", "" },
			{ "Skyline_Lotus_Esprit_03_F", "" },
			{ "Skyline_Lotus_Esprit_08_F", "" },
			{ "Skyline_Lotus_Esprit_07_F", "" },
			{ "Skyline_Lotus_Esprit_13_F", "" },
			{ "Skyline_Lotus_Esprit_10_F", "" },
			{ "Skyline_Lotus_Esprit_09_F", "" },
			{ "madsa_zl1_F", "" }, // 1500000
			{ "C_Offroad_02_unarmed_F", "" }, //90000
			{ "Skyline_Vehicule_APEX_MB_4WD_08_F", "" },
			{ "Skyline_Vehicule_APEX_MB_4WD_02_F", "" },
			{ "Skyline_Vehicule_APEX_MB_4WD_03_F", "" },
			{ "shounka_mp4", "" }, //4000000
			{ "shounka_mp4_noir", "" },
			{ "shounka_mp4_bleufonce", "" },
			{ "shounka_mp4_rouge", "" },
			{ "shounka_mp4_jaune", "" },
			{ "shounka_mp4_rose", "" },
			{ "shounka_mp4_grise", "" },
			{ "shounka_mp4_violet", "" },
			{ "shounka_mp4_orange", "" },
			{ "GeK_GTR", "" },//3000
			{ "GeK_GTR_02", "" },
			{ "GeK_GTR_10", "" },
			{ "GeK_GTR_11", "" },
			{ "GeK_GTR_03", "" },
			{ "GeK_GTR_05", "" },
			{ "GeK_GTR_07", "" },
			{ "GeK_GTR_06", "" },
			{ "GeK_GTR_09", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };
	
	class civ_taxi { ////taxi 27-02-17
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "GeK_CTSV_Taxi", "" },
            { "ivory_190e_taxi", "" },
			{ "ivory_rs4_taxi", "" },
			{ "Skyline_Audi_RS4_05_F", "" },
			{ "Maels_Ikarus_fete", "" },
			{ "Maels_Ikarus_propagande", "" },
			{ "Maels_Ikarus_propagande2", "" },
			{ "Maels_Ikarus_TanoaLine", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_510_05_F", "" },
			{ "GeK_Fiorino_05", "" },
			{ "ADM_Ford_F100_yellow", "" },
			{ "Skyline_Vehicule_Jonzie_Raptor_05_F", "" },
			{ "Skyline_Vehicule_Jonzie_XB_05_F", "" },
			{ "GeK_Mustang_05", "" } 
        };
    };
	
	class civ_merc {
        side = "civ";
        conditions = "license_civ_merc";
        vehicles[] = {
            { "GeK_M6_02", "" },
			{ "GeK_M6_03", "" },
			{ "GeK_M6_04", "" },
			{ "GeK_CTSV", "" },
			{ "GeK_CTSV_03", "" },
			{ "GeK_CTSV_04", "" },
			{ "Skyline_Vehicule_Jonzie_Escalade_01_F", "" },
			{ "Skyline_Vehicule_Jonzie_Escalade_04_F", "" },
			{ "shounka_monsteur", "" },
			{ "DAR_MK23", "" },
			{ "DAR_MK27T", "" },
			{ "Alysia_Opelblitz_EAST_Uncovered", "" },
			{ "Alysia_Opelblitz_EAST_Box", "" },
			{ "Alysia_Opelblitz_EAST_Covered", "" },
			{ "shounka_limo_civ_bleufonce", "" },
			{ "Touareg_AET", "" },
			{ "Skyline_Vehicule_A3_Offroad_Armed_04_F", "" }
		};
    };
	
	class civ_guard { ////guard 27-02-17
        side = "civ";
        conditions = "license_civ_merc";
        vehicles[] = {
            { "shounka_limo_civ_bleufonce", "" },
            { "Mrshounka_lykan_c", "" },
            { "Gurkha_f5", "" },
            { "Gurkha_M60", "" },
			{ "Touareg_AET", "" },
			{ "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Van_01_transport_F", "" },
			{ "C_Van_01_box_F", "" },
            { "O_Truck_03_device_F", "" },
			{ "shounka_a3_renaultmagnum_f", "" },
			{ "O_Truck_03_fuel_F", "" },
			{ "GeK_Renault_Magnum_10", "" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_12_F", "" },
			{ "GeK_Renault_Magnum_06", "" },
			{ "Maels_magnum_AET", "" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_09_F", "" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_05_F", "" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_08_F", "" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_09_F", "" },
			{ "Skyline_Ford_Transit_11_F", "" },
			{ "B_Truck_01_ammo_F", "" },
			{ "B_Truck_01_covered_F", "" },
			{ "GeK_Iveco_Stralis", "" },
			{ "GeK_Iveco_Stralis_02", "" },
			{ "GeK_Iveco_Stralis_10", "" },
			{ "GeK_Iveco_Stralis_05", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "B_Heli_Transport_03_unarmed_F", "" },
			{ "I_Heli_Transport_02_F", "" },
			{ "pook_H13_amphib", "" }
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" },
			{ "Burnes_MK10_1", "" }
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "" },
            { "B_G_Offroad_01_F", "" },
            { "O_MRAP_02_F", "" },
            { "B_Heli_Light_01_stripped_F", "" },
            { "B_G_Offroad_01_armed_F", "" },
			{ "O_Truck_03_transport_F", "" },
			{ "B_Truck_01_box_F", "" }
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "" },
			{ "C_SUV_01_F", "" },
			{ "Jonzie_Ambulance", "" }, 
			{ "Skyline_Mercedes_Sprinter_Samu_01_F", "" }, 
			{ "GeK_Renault_Trafic_Ambulance", "" }, 
			{ "GeK_Renault_Trafic_medic", "" }, 
			{ "I_MRAP_03_F", "" }, 
			{ "GeK_TLC100_Medic", "" }, 
			{ "GeK_TLC100_Paramedic", "" }, 
			{ "gek_s60_medic", "" }, 
			{ "Skyline_VW_TouaregR50_Samu_01_F", "" }, 
			{ "Mrshounka_yamaha_p", "" }, 
			{ "GeK_audi_a4_avant_01", "" }, 
			{ "Skyline_Audi_RS4_06_F", "" }, 
			{ "shounka_a3_rs5_civ", "" }, 
			{ "shounka_rs6", "" }, 
			{ "GeK_M6", "" }, 
			{ "Mrshounka_bmwm1_civ", "" }, 
			{ "GeK_M6_01", "" }, 
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_06_F", "" }, 
			{ "Mrshounka_a3_dodge15_civ", "" }, 
			{ "Skyline_Vehicule_Jonzie_Viper_06_F", "" }, 
			{ "Mrshounka_ducati_p", "" }, 
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_06_F", "" }, 
			{ "GeK_Mustang_01", "" }, 
			{ "GeK_Apollo_01", "" }, 
			{ "GeK_Gallardo_01", "" }, 
			{ "GeK_IS_01", "" }, 
			{ "shounka_limo_civ", "" }, 
			{ "Skyline_Lotus_Esprit_06_F", "" },  
			{ "Mrshounka_lykan_c", "" }, 
			{ "GeK_C63_AMG_01", "" }, 
			{ "GeK_GTR_01", "" }, 
			{ "shounka_porsche911", "" }, 
			{ "GeK_911_1972_01", "" }, 
			{ "GeK_Impreza_01", "" },
			{ "GeK_gt86_01", "" },  
			{ "GeK_Supra_01", "" }, 
			{ "Gek_Agera_01", "" }, 
            { "I_Truck_02_medical_F", "" },
            { "O_Truck_03_medical_F", "" },
            { "B_Truck_01_medical_F", "" },
			{ "shounka_avalanche", "" },
			{ "shounka_monsteur", "" },
			{ "Skyline_Vehicule_Jonzie_Raptor_01_F", "" },
			{ "Skyline_Ford_Transit_01_F", "" },
			{ "Skyline_Brinks_01_F", "" },
			{ "Skyline_GMC_Vandura_01_F", "" },
			{ "Mrshounka_hummer_civ", "" },
			{ "Guillaume9545_Lit", "" },
			{ "C_Van_02_medevac_F", "" },																		//Van (Ambulance)
			{ "GeK_VAB", "" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
			{ "O_Heli_Transport_04_medevac_F", "" },  //new 27-02-17
            { "B_Heli_Light_01_F", "" },
			{ "ej_S94R", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "O_Heli_Transport_04_F", "" },
			{ "ej_UH92_MEV", "" },
			{ "GeK_C63_AMG_05", "" },
			{ "ej_UH60M_MEV", "" },																				//UH-60M (Medevac)
			{ "Skyline_Mercedes_Sprinter_Depannage_02_F", "" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
			{ "O_MRAP_02_F", "call life_coplevel >= 2" },
			{ "ivory_m3_marked", "" }, 
			{ "Maels_ducati_AET", "" }, 
			{ "GeK_GMC_SWAT", "" }, 
			{ "Gurkha_f5", "" }, 
			{ "Gurkha_M60", "call life_coplevel >= 5" }, 
			{ "ivory_isf_marked", "" }, 
			{ "ivory_evox_marked", "" }, 
			{ "O_T_LSV_02_armed_F", "call life_coplevel >= 5" }, 
			{ "ivory_wrx_marked", "" }, 
			{ "Alysia_Touareg_West_01", "" }, 
			{ "Mrshounka_yamaha_p", "" }, 								
            { "C_Hatchback_01_sport_F", "call life_coplevel >= 1" },
            { "B_MRAP_01_F", "call life_coplevel >= 5" },
            { "B_MRAP_01_hmg_F", "call life_coplevel >= 6" },
			{ "Alysia_EC635_East_01", "" }, 
			{ "MH6_Heli_Light_01_F", "" }, 
			{ "Alysia_heli_light_East_01", "" }, 
			{ "B_Heli_Light_01_F", "" },
			{ "B_Heli_Transport_01_F", "call life_coplevel >= 4" },
			{ "Skyline_Vehicule_Jonzie_Escalade_04_F", "call life_coplevel >= 2" },
			{ "Skyline_Vehicule_A3_Orca_05_F", "" },
			{ "Skyline_Vehicule_Jonzie_Escalade_03_F", "call life_coplevel >= 2" },
			{ "Touareg_AET", "call life_coplevel >= 2" },
			{ "Alysia_Opelblitz_EAST_Box", "call life_coplevel >= 2" },
			{ "EC635_Unarmed", "" },
			{ "I_Heli_light_03_unarmed_F", "" },
			{ "Gek_audi_a4_avant", "" }, // 600000
			{ "GeK_audi_a4_avant_02", "" },
			{ "GeK_audi_a4_avant_10", "" },
			{ "GeK_audi_a4_avant_11", "" },
			{ "GeK_audi_a4_avant_03", "" },
			{ "GeK_audi_a4_avant_05", "" },
			{ "GeK_audi_a4_avant_04", "" },
			{ "GeK_audi_a4_avant_07", "" },
			{ "GeK_audi_a4_avant_06", "" },
			{ "GeK_audi_a4_avant_09", "" },
			{ "GeK_audi_a4_avant_08", "" },
			{ "SAL_AudiCiv", "" }, // 650000
			{ "SAL_AudiCivRed", "" },
			{ "SAL_AudiCivSilver", "" },
			{ "SAL_AudiCivBlack", "" },
			{ "Skyline_Audi_RS4_01_F", "" }, // 650000
			{ "Skyline_Audi_RS4_11_F", "" },
			{ "Skyline_Audi_RS4_12_F", "" },
			{ "Skyline_Audi_RS4_02_F", "" },
			{ "Skyline_Audi_RS4_05_F", "" },
			{ "Skyline_Audi_RS4_04_F", "" },
			{ "Skyline_Audi_RS4_03_F", "" },
			{ "Skyline_Audi_RS4_08_F", "" },
			{ "Skyline_Audi_RS4_07_F", "" },
			{ "Skyline_Audi_RS4_13_F", "" },
			{ "Skyline_Audi_RS4_10_F", "" },
			{ "Skyline_Audi_RS4_09_F", "" },
			{ "ivory_c", "" }, //1200000
			{ "Mrshounka_bmwm1_civ_noir", "" }, //2500000
			{ "Mrshounka_bmwm1_civ_bleufonce", "" },
			{ "Mrshounka_bmwm1_civ_rouge", "" },
			{ "Mrshounka_bmwm1_civ_jaune", "" },
			{ "Mrshounka_bmwm1_civ_rose", "" },
			{ "Mrshounka_bmwm1_civ_grise", "" },
			{ "Mrshounka_bmwm1_civ_violet", "" },
			{ "Mrshounka_bmwm1_civ_orange", "" },
			{ "GeK_M6_02", "" }, //1000000
			{ "GeK_M6_10", "" },
			{ "GeK_M6_11", "" },
			{ "GeK_M6_03", "" },
			{ "GeK_M6_05", "" },
			{ "GeK_M6_04", "" },
			{ "GeK_M6_07", "" },
			{ "GeK_M6_09", "" },
			{ "GeK_M6_08", "" },
			{ "ivory_e36", "" },
			{ "GeK_CTSV_10", "" }, // 980000
			{ "GeK_CTSV_11", "" },
			{ "GeK_CTSV_03", "" },
			{ "GeK_CTSV_05", "" },
			{ "GeK_CTSV_04", "" },
			{ "GeK_CTSV_07", "" },
			{ "GeK_CTSV_06", "" },
			{ "GeK_CTSV_09", "" },
			{ "GeK_CTSV_08", "" },
			{ "GeK_Cadillac_Fleetwood_Brougham_85", "" }, //700000
			{ "GeK_Camaro", "" }, //1500000
			{ "shounka_avalanche", "" }, //90000
			{ "shounka_avalanche_noir", "" },
			{ "shounka_avalanche_bleufonce", "" },
			{ "shounka_avalanche_rouge", "" },
			{ "shounka_avalanche_jaune", "" },
			{ "shounka_avalanche_rose", "" },
			{ "shounka_avalanche_grise", "" },
			{ "shounka_avalanche_violet", "" },
			{ "shounka_avalanche_orange", "" },
			{ "GeK_ElCamino", "" }, //70000
			{ "GeK_ElCamino_02", "" },
			{ "GeK_ElCamino_10", "" },
			{ "GeK_ElCamino_11", "" },
			{ "GeK_ElCamino_03", "" },
			{ "GeK_ElCamino_05", "" },
			{ "GeK_ElCamino_04", "" },
			{ "GeK_ElCamino_07", "" },
			{ "GeK_ElCamino_06", "" },
			{ "GeK_ElCamino_01", "" },
			{ "GeK_ElCamino_09", "" },
			{ "GeK_ElCamino_08", "" },
			{ "GeK_DS3", "" }, //20000
			{ "GeK_DS3_02", "" },
			{ "GeK_DS3_10", "" },
			{ "GeK_DS3_11", "" },
			{ "GeK_DS3_03", "" },
			{ "GeK_DS3_05", "" },
			{ "GeK_DS3_04", "" },
			{ "GeK_DS3_07", "" },
			{ "GeK_DS3_06", "" },
			{ "GeK_DS3_01", "" },
			{ "GeK_DS3_09", "" },
			{ "GeK_DS3_08", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_01_F", "" }, //250000
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_11_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_12_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_02_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_05_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_04_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_08_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_07_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_10_F", "" },
			{ "Skyline_Vehicule_Jonzie_Datsun_Z432_09_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_01_F", "" }, //3000000
			{ "Skyline_Vehicule_Jonzie_Viper_11_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_12_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_02_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_05_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_04_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_03_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_08_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_07_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_10_F", "" },
			{ "Skyline_Vehicule_Jonzie_Viper_09_F", "" },
			{ "Mrshounka_ducati_p_noir", "" }, //1200000
			{ "Mrshounka_ducati_p_bf", "" },
			{ "Mrshounka_ducati_p_r", "" },
			{ "Mrshounka_ducati_p_j", "" },
			{ "Mrshounka_ducati_p_rose", "" },
			{ "Mrshounka_ducati_p_g", "" },
			{ "Mrshounka_ducati_p_v", "" },
			{ "Mrshounka_ducati_p_o", "" },
			{ "GeK_250GT", "" }, //90000
			{ "GeK_250GT_02", "" },
			{ "GeK_250GT_10", "" },
			{ "GeK_250GT_11", "" },
			{ "GeK_250GT_03", "" },
			{ "GeK_250GT_04", "" },
			{ "GeK_250GT_07", "" },
			{ "GeK_250GT_06", "" },
			{ "GeK_250GT_01", "" },
			{ "GeK_250GT_09", "" },
			{ "GeK_250GT_08", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_01_F", "" }, //5600000
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_11_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_12_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_02_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_05_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_04_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_03_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_08_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_10_F", "" },
			{ "Skyline_Vehicule_Shounka_F430_Scuderia_09_F", "" },
			{ "shounka_f430_spider", "" },
			{ "GeK_Mustang_02", "" }, //2500000
			{ "GeK_Mustang_10", "" },
			{ "GeK_Mustang_11", "" },
			{ "GeK_Mustang_03", "" },
			{ "GeK_Mustang_05", "" },
			{ "GeK_Mustang_04", "" },
			{ "GeK_Mustang_07", "" },
			{ "GeK_Mustang_06", "" },
			{ "GeK_Mustang_09", "" },
			{ "GeK_Mustang_08", "" },
			{ "GeK_Apollo", "" }, // 6000000
			{ "GeK_Apollo_02", "" },
			{ "GeK_Apollo_10", "" },
			{ "GeK_Apollo_11", "" },
			{ "GeK_Apollo_03", "" },
			{ "GeK_Apollo_05", "" },
			{ "GeK_Apollo_04", "" },
			{ "GeK_Apollo_07", "" },
			{ "GeK_Apollo_06", "" },
			{ "GeK_Apollo_09", "" },
			{ "GeK_Apollo_08", "" },
			{ "GeK_Agera", "" }, // 9000000
			{ "GeK_Gallardo", "" }, // 5900000
			{ "GeK_Gallardo_02", "" },
			{ "GeK_Gallardo_10", "" },
			{ "GeK_Gallardo_11", "" },
			{ "GeK_Gallardo_03", "" },
			{ "GeK_Gallardo_05", "" },
			{ "GeK_Gallardo_04", "" },
			{ "GeK_Gallardo_07", "" },
			{ "GeK_Gallardo_06", "" },
			{ "GeK_Gallardo_09", "" },
			{ "GeK_Gallardo_08", "" },
			{ "ivory_lfa", "" }, //8000000
			{ "ivory_elise", "" }, //3000000
			{ "Skyline_Lotus_Esprit_01_F", "" }, //2500000
			{ "Skyline_Lotus_Esprit_11_F", "" },
			{ "Skyline_Lotus_Esprit_12_F", "" },
			{ "Skyline_Lotus_Esprit_02_F", "" },
			{ "Skyline_Lotus_Esprit_05_F", "" },
			{ "Skyline_Lotus_Esprit_04_F", "" },
			{ "Skyline_Lotus_Esprit_03_F", "" },
			{ "Skyline_Lotus_Esprit_08_F", "" },
			{ "Skyline_Lotus_Esprit_07_F", "" },
			{ "Skyline_Lotus_Esprit_13_F", "" },
			{ "Skyline_Lotus_Esprit_10_F", "" },
			{ "Skyline_Lotus_Esprit_09_F", "" },
			{ "madsa_zl1_F", "" }, // 1500000
			{ "C_Offroad_02_unarmed_F", "" }, //90000
			{ "Skyline_Vehicule_APEX_MB_4WD_08_F", "" },
			{ "Skyline_Vehicule_APEX_MB_4WD_02_F", "" },
			{ "Skyline_Vehicule_APEX_MB_4WD_03_F", "" },
			{ "shounka_mp4", "" }, //4000000
			{ "shounka_mp4_noir", "" },
			{ "shounka_mp4_bleufonce", "" },
			{ "shounka_mp4_rouge", "" },
			{ "shounka_mp4_jaune", "" },
			{ "shounka_mp4_rose", "" },
			{ "shounka_mp4_grise", "" },
			{ "shounka_mp4_violet", "" },
			{ "shounka_mp4_orange", "" },
			{ "GeK_GTR", "" },//3000
			{ "GeK_GTR_02", "" },
			{ "GeK_GTR_10", "" },
			{ "GeK_GTR_11", "" },
			{ "GeK_GTR_03", "" },
			{ "GeK_GTR_05", "" },
			{ "GeK_GTR_07", "" },
			{ "GeK_GTR_06", "" },
			{ "GeK_GTR_09", "" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 4" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "" },
            { "C_Boat_Civil_01_police_F", "" },
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 3" },
            { "B_SDV_01_F", "" }
        };
    };    
	

	class mer_Car {
        side = "adac";
        conditions = "";
        vehicles[] = {
            { "GeK_GTR_10", "" }
    };
	};
	
	class mer_air {
        side = "adac";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };
	
	//civ air///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 350;
        conditions = "";
        price = 30000000;
        textures[] = {};
    };
	
	class pook_H13_amphib {
        vItemSpace = 300;
        conditions = "";
        price = 30000000;
        textures[] = {};
    };
	
	////////////////////////////////////////civ air///////////////////////////////////////////////////
	//red car
	
	class O_MRAP_02_hmg_F {
        vItemSpace = -1;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	////////////////////////////////////////red car//////////////////////////////////////////////////
	
	//civ_car
	
	class Gek_audi_a4_avant {
        vItemSpace = 60;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class GeK_audi_a4_avant_02 {
        vItemSpace = 60;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class GeK_audi_a4_avant_10 {
        vItemSpace = 60;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class GeK_audi_a4_avant_11 {
        vItemSpace = 60;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class GeK_audi_a4_avant_03 {
        vItemSpace = 60;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class GeK_audi_a4_avant_05 {
        vItemSpace = 60;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class GeK_audi_a4_avant_04 {
        vItemSpace = 60;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class GeK_audi_a4_avant_07 {
        vItemSpace = 60;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class GeK_audi_a4_avant_06 {
        vItemSpace = 60;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class GeK_audi_a4_avant_09 {
        vItemSpace = 60;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class GeK_audi_a4_avant_08 {
        vItemSpace = 60;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class SAL_AudiCiv {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class SAL_AudiCivRed {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class SAL_AudiCivSilver {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class SAL_AudiCivBlack {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class Skyline_Audi_RS4_01_F {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class Skyline_Audi_RS4_11_F {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class Skyline_Audi_RS4_12_F {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class Skyline_Audi_RS4_02_F {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class Skyline_Audi_RS4_05_F {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class Skyline_Audi_RS4_04_F {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class Skyline_Audi_RS4_03_F {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class Skyline_Audi_RS4_08_F {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class Skyline_Audi_RS4_07_F {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class Skyline_Audi_RS4_13_F {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class Skyline_Audi_RS4_10_F {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class Skyline_Audi_RS4_09_F {
        vItemSpace = 60;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ivory_c {
        vItemSpace = 60;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class Mrshounka_bmwm1_civ_noir {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_bleufonce {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_jaune {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_rose {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_grise {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_violet {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ_orange {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class GeK_M6_02 {
        vItemSpace = 60;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class GeK_M6_10 {
        vItemSpace = 60;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class GeK_M6_11 {
        vItemSpace = 60;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class GeK_M6_03 {
        vItemSpace = 60;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class GeK_M6_05 {
        vItemSpace = 60;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class GeK_M6_04 {
        vItemSpace = 60;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class GeK_M6_07 {
        vItemSpace = 60;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class GeK_M6_09 {
        vItemSpace = 60;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class GeK_M6_08 {
        vItemSpace = 60;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class ivory_e36 {
        vItemSpace = 60;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class GeK_CTSV_10 {
        vItemSpace = 60;
        conditions = "";
        price = 980000;
        textures[] = {};
    };
	
	class GeK_CTSV_11 {
        vItemSpace = 60;
        conditions = "";
        price = 980000;
        textures[] = {};
    };
	
	class GeK_CTSV_03 {
        vItemSpace = 60;
        conditions = "";
        price = 980000;
        textures[] = {};
    };
	
	class GeK_CTSV_05 {
        vItemSpace = 60;
        conditions = "";
        price = 980000;
        textures[] = {};
    };
	
	class GeK_CTSV_04 {
        vItemSpace = 60;
        conditions = "";
        price = 980000;
        textures[] = {};
    };
	
	class GeK_CTSV_07 {
        vItemSpace = 60;
        conditions = "";
        price = 980000;
        textures[] = {};
    };
	
	class GeK_CTSV_06 {
        vItemSpace = 60;
        conditions = "";
        price = 980000;
        textures[] = {};
    };
	
	class GeK_CTSV_09 {
        vItemSpace = 60;
        conditions = "";
        price = 980000;
        textures[] = {};
    };
	
	class GeK_CTSV_08 {
        vItemSpace = 60;
        conditions = "";
        price = 980000;
        textures[] = {};
    };
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class GeK_Cadillac_Fleetwood_Brougham_85 {
        vItemSpace = 60;
        conditions = "";
        price = 700000;
        textures[] = {};
    };
	
	class GeK_Camaro {
        vItemSpace = 60;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class shounka_avalanche {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class shounka_avalanche_noir {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class shounka_avalanche_bleufonce {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class shounka_avalanche_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class shounka_avalanche_jaune {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class shounka_avalanche_rose {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class shounka_avalanche_grise {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class shounka_avalanche_violet {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class shounka_avalanche_orange {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class GeK_ElCamino {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class GeK_ElCamino_02 {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class GeK_ElCamino_10 {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class GeK_ElCamino_11 {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class GeK_ElCamino_03 {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class GeK_ElCamino_05 {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class GeK_ElCamino_04 {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class GeK_ElCamino_07 {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class GeK_ElCamino_06 {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class GeK_ElCamino_01 {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class GeK_ElCamino_09 {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	class GeK_ElCamino_08 {
        vItemSpace = 60;
        conditions = "";
        price = 70000;
        textures[] = {};
    };
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class GeK_DS3 {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	class GeK_DS3_02 {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	class GeK_DS3_10 {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	class GeK_DS3_11 {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	class GeK_DS3_03 {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	class GeK_DS3_05 {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	class GeK_DS3_04 {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	class GeK_DS3_07 {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	class GeK_DS3_06 {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	class GeK_DS3_01 {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	class GeK_DS3_09 {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	class GeK_DS3_08 {
        vItemSpace = 60;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class Skyline_Vehicule_Jonzie_Datsun_Z432_01_F {
        vItemSpace = 60;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Datsun_Z432_11_F {
        vItemSpace = 60;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Datsun_Z432_12_F {
        vItemSpace = 60;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Datsun_Z432_02_F {
        vItemSpace = 60;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Datsun_Z432_05_F {
        vItemSpace = 60;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Datsun_Z432_04_F {
        vItemSpace = 60;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Datsun_Z432_08_F {
        vItemSpace = 60;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Datsun_Z432_07_F {
        vItemSpace = 60;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Datsun_Z432_10_F {
        vItemSpace = 60;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Datsun_Z432_09_F {
        vItemSpace = 60;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class Skyline_Vehicule_Jonzie_Viper_01_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Viper_11_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Viper_12_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Viper_02_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Viper_05_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Viper_04_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Viper_03_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Viper_08_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Viper_07_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Viper_10_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Viper_09_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class Mrshounka_ducati_p_noir {
        vItemSpace = 60;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_bf {
        vItemSpace = 60;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_r {
        vItemSpace = 60;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_j {
        vItemSpace = 60;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_rose {
        vItemSpace = 60;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_g {
        vItemSpace = 60;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_v {
        vItemSpace = 60;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p_o {
        vItemSpace = 60;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class GeK_250GT {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class GeK_250GT_02 {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class GeK_250GT_10 {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class GeK_250GT_11 {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class GeK_250GT_03 {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class GeK_250GT_04 {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class GeK_250GT_07 {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class GeK_250GT_06 {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class GeK_250GT_01 {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class GeK_250GT_09 {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class GeK_250GT_08 {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class Skyline_Vehicule_Shounka_F430_Scuderia_01_F {
        vItemSpace = 60;
        conditions = "";
        price = 5600000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_F430_Scuderia_11_F {
        vItemSpace = 60;
        conditions = "";
        price = 5600000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_F430_Scuderia_12_F {
        vItemSpace = 60;
        conditions = "";
        price = 5600000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_F430_Scuderia_02_F {
        vItemSpace = 60;
        conditions = "";
        price = 5600000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_F430_Scuderia_05_F {
        vItemSpace = 60;
        conditions = "";
        price = 5600000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_F430_Scuderia_04_F {
        vItemSpace = 60;
        conditions = "";
        price = 5600000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_F430_Scuderia_03_F {
        vItemSpace = 60;
        conditions = "";
        price = 5600000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_F430_Scuderia_08_F {
        vItemSpace = 60;
        conditions = "";
        price = 5600000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_F430_Scuderia_10_F {
        vItemSpace = 60;
        conditions = "";
        price = 5600000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_F430_Scuderia_09_F {
        vItemSpace = 60;
        conditions = "";
        price = 5600000;
        textures[] = {};
    };
	
	class shounka_f430_spider {
        vItemSpace = 60;
        conditions = "";
        price = 5600000;
        textures[] = {};
    };
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class GeK_Mustang_02 {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class GeK_Mustang_10 {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class GeK_Mustang_11 {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class GeK_Mustang_03 {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	
	class GeK_Mustang_05 {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class GeK_Mustang_04 {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class GeK_Mustang_07 {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class GeK_Mustang_06 {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class GeK_Mustang_09 {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class GeK_Mustang_08 {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class GeK_Apollo {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };
	
	class GeK_Apollo_02 {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };
	
	class GeK_Apollo_10 {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };
	
	class GeK_Apollo_11 {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };
	
	class GeK_Apollo_03 {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };
	
	class GeK_Apollo_05 {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };
	
	class GeK_Apollo_04 {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };
	
	class GeK_Apollo_07 {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };
	
	class GeK_Apollo_06 {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };
	
	class GeK_Apollo_09 {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };
	
	class GeK_Apollo_08 {
        vItemSpace = 60;
        conditions = "";
        price = 6000000;
        textures[] = {};
    };
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class GeK_Agera {
        vItemSpace = 60;
        conditions = "";
        price = 9000000;
        textures[] = {};
    };
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class GeK_Gallardo {
        vItemSpace = 60;
        conditions = "";
        price = 5900000;
        textures[] = {};
    };
	
	class GeK_Gallardo_02 {
        vItemSpace = 60;
        conditions = "";
        price = 5900000;
        textures[] = {};
    };
	
	class GeK_Gallardo_10 {
        vItemSpace = 60;
        conditions = "";
        price = 5900000;
        textures[] = {};
    };
	
	class GeK_Gallardo_11 {
        vItemSpace = 60;
        conditions = "";
        price = 5900000;
        textures[] = {};
    };
	
	class GeK_Gallardo_03 {
        vItemSpace = 60;
        conditions = "";
        price = 5900000;
        textures[] = {};
    };
	
	class GeK_Gallardo_05 {
        vItemSpace = 60;
        conditions = "";
        price = 5900000;
        textures[] = {};
    };
	
	class GeK_Gallardo_04 {
        vItemSpace = 60;
        conditions = "";
        price = 5900000;
        textures[] = {};
    };
	
	class GeK_Gallardo_07 {
        vItemSpace = 60;
        conditions = "";
        price = 5900000;
        textures[] = {};
    };
	
	class GeK_Gallardo_06 {
        vItemSpace = 60;
        conditions = "";
        price = 5900000;
        textures[] = {};
    };
	
	class GeK_Gallardo_09 {
        vItemSpace = 60;
        conditions = "";
        price = 5900000;
        textures[] = {};
    };
	
	class GeK_Gallardo_08 {
        vItemSpace = 60;
        conditions = "";
        price = 5900000;
        textures[] = {};
    };
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class ivory_lfa {
        vItemSpace = 60;
        conditions = "";
        price = 8000000;
        textures[] = {};
    };
	
	class ivory_elise {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class Skyline_Lotus_Esprit_01_F {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Skyline_Lotus_Esprit_11_F {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Skyline_Lotus_Esprit_12_F {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Skyline_Lotus_Esprit_02_F {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Skyline_Lotus_Esprit_05_F {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Skyline_Lotus_Esprit_04_F {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Skyline_Lotus_Esprit_03_F {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Skyline_Lotus_Esprit_08_F {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Skyline_Lotus_Esprit_07_F {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Skyline_Lotus_Esprit_13_F {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Skyline_Lotus_Esprit_10_F {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Skyline_Lotus_Esprit_09_F {
        vItemSpace = 60;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class madsa_zl1_F {
        vItemSpace = 60;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
	
	////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class C_Offroad_02_unarmed_F {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_APEX_MB_4WD_08_F {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_APEX_MB_4WD_02_F {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_APEX_MB_4WD_03_F {
        vItemSpace = 60;
        conditions = "";
        price = 90000;
        textures[] = {};
    };
	
	///////////////////////////////////////////////////////////////////////////////////////////////////
	
	class shounka_mp4 {
        vItemSpace = 60;
        conditions = "";
        price = 4000000;
        textures[] = {};
    };
	
	class shounka_mp4_noir {
        vItemSpace = 60;
        conditions = "";
        price = 4000000;
        textures[] = {};
    };
	
	class shounka_mp4_bleufonce {
        vItemSpace = 60;
        conditions = "";
        price = 4000000;
        textures[] = {};
    };
	
	class shounka_mp4_rouge {
        vItemSpace = 60;
        conditions = "";
        price = 4000000;
        textures[] = {};
    };
	
	class shounka_mp4_jaune {
        vItemSpace = 60;
        conditions = "";
        price = 4000000;
        textures[] = {};
    };
	
	class shounka_mp4_rose {
        vItemSpace = 60;
        conditions = "";
        price = 4000000;
        textures[] = {};
    };
	class shounka_mp4_grise {
        vItemSpace = 60;
        conditions = "";
        price = 4000000;
        textures[] = {};
    };
	
	class shounka_mp4_violet {
        vItemSpace = 60;
        conditions = "";
        price = 4000000;
        textures[] = {};
    };
	
	class shounka_mp4_orange {
        vItemSpace = 60;
        conditions = "";
        price = 4000000;
        textures[] = {};
    };
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class GeK_GTR {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_GTR_02 {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_GTR_10 {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_GTR_11 {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_GTR_03 {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_GTR_05 {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_GTR_07 {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_GTR_06 {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_GTR_09 {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	/////////////////////////////////////////////////////civ_car///////////////////////////////////////////////////////////
	
	//civ_truck
	
	class Skyline_Vehicule_Jonzie_Box_Truck_01_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_11_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_12_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_02_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_05_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_04_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_03_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_08_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_07_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_06_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_10_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_09_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Ford_Transit_11_F {
        vItemSpace = 300;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
	
	class B_Truck_01_ammo_F {
        vItemSpace = 250;
        conditions = "";
        price = 750000;
        textures[] = {};
    };
	
	class B_Truck_01_covered_F {
        vItemSpace = 300;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class GeK_Iveco_Stralis {
        vItemSpace = 450;
        conditions = "";
        price = 500000;
        textures[] = {};
    };
	
	class GeK_Iveco_Stralis_02 {
        vItemSpace = 450;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class GeK_Iveco_Stralis_10 {
        vItemSpace = 150;
        conditions = "";
        price = 80000;
        textures[] = {};
    };
	
	class GeK_Iveco_Stralis_05 {
        vItemSpace = 100;
        conditions = "";
        price = 25000;
        textures[] = {};
    };
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class Skyline_Vehicule_Jonzie_Tanker_Truck_01_F {
        vItemSpace = 300;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Tanker_Truck_11_F {
        vItemSpace = 300;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Tanker_Truck_12_F {
        vItemSpace = 400;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Tanker_Truck_02_F {
        vItemSpace = 300;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Tanker_Truck_05_F {
        vItemSpace = 300;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Tanker_Truck_04_F {
        vItemSpace = 300;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Tanker_Truck_03_F {
        vItemSpace = 300;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Tanker_Truck_08_F {
        vItemSpace = 300;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Tanker_Truck_07_F {
        vItemSpace = 300;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Tanker_Truck_06_F {
        vItemSpace = 300;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Tanker_Truck_10_F {
        vItemSpace = 300;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Tanker_Truck_09_F {
        vItemSpace = 300;
        conditions = "";
        price = 3500000;
        textures[] = {};
    };
	
	///////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class shounka_a3_renaultmagnum_f {
        vItemSpace = 400;
        conditions = "";
        price = 8000000;
        textures[] = {};
    };
	
	class GeK_Renault_Magnum {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_Renault_Magnum_02 {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_Renault_Magnum_01_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_Renault_Magnum_11_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_Renault_Magnum_10 {
        vItemSpace = 300;
        conditions = "";
        price = 2000000;
        textures[] = {};
    };
	
	class GeK_Renault_Magnum_11 {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_Renault_Magnum_12_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_Renault_Magnum_02_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_Renault_Magnum_03 {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_Renault_Magnum_05_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_Renault_Magnum_05 {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_Renault_Magnum_04_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_Renault_Magnum_03_F {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class GeK_Renault_Magnum_04 {
        vItemSpace = 300;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Maels_magnum_AET { //donate car
        vItemSpace = 800;
        conditions = "";
        price = 9999999999;
        textures[] = {};
    };
	
	/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	
	class Skyline_Scania_G420_Depanneuse_14_F {
        vItemSpace = 123;
        conditions = "";
        price = 100000000;
        textures[] = {};
    };
	
	/////////////////////////////////////////////////civ_truck///////////////////////////////////////////////////////
	
	
	//cop CAR & AIR
	
	class ivory_m3_marked {
        vItemSpace = 120;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class Maels_ducati_AET {
        vItemSpace = 120;
        conditions = "";
        price = 100000;
        textures[] = {};
    };
	
	class GeK_GMC_SWAT {
        vItemSpace = 120;
        conditions = "";
        price = 200000;
        textures[] = {};
    };
	
	class Gurkha_f5 {
        vItemSpace = 120;
        conditions = "";
        price = 300000;
        textures[] = {};
    };
	
	class Gurkha_M60 {
        vItemSpace = 120;
        conditions = "";
        price = 450000;
        textures[] = {};
    };
	
	class ivory_isf_marked {
        vItemSpace = 120;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class ivory_evox_marked {
        vItemSpace = 120;
        conditions = "";
        price = 100000;
        textures[] = {};
    };
	
	class O_T_LSV_02_armed_F {
        vItemSpace = 120;
        conditions = "";
        price = 450000;
        textures[] = {};
    };
	
	class ivory_wrx_marked {
        vItemSpace = 120;
        conditions = "";
        price = 120000;
        textures[] = {};
    };
	
	class Alysia_Touareg_West_01 {
        vItemSpace = 120;
        conditions = "";
        price = 320000;
        textures[] = {};
    };
	
	class Mrshounka_yamaha_p {
        vItemSpace = 120;
        conditions = "";
        price = 300000;
        textures[] = {};
    };
	
	class Alysia_EC635_East_01 {
        vItemSpace = 120;
        conditions = "";
        price = 200000;
        textures[] = {};
    };
	
	class MH6_Heli_Light_01_F {
        vItemSpace = 120;
        conditions = "";
        price = 200000;
        textures[] = {};
    };
	
	class Alysia_heli_light_East_01 {
        vItemSpace = 120;
        conditions = "";
        price = 200000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_A3_Orca_05_F {
        vItemSpace = 120;
        conditions = "";
        price = 400000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Escalade_03_F {
        vItemSpace = 20;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class GeK_Avalanche {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class GeK_Avalanche_04 {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Raptor_04_F {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_XB_04_F {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class GeK_Yukon {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class Skyline_Jeep_Wrangler_03_F {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class Skyline_Jeep_Wrangler_Rubicon_03_F {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class Maels_Lexus_is_AET {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class madsa_hummer_h2_black_F {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_McLaren_MP4_03_F {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_APEX_Prowler_01_F {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_APEX_Qilin_02_F {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class Skyline_Renault_Alpine_04_F {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class EC635_Unarmed {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class I_Heli_light_03_unarmed_F {
        vItemSpace = 120;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	//////////////////////////////////////////////////////////cop/////////////////////////////////////////////////////////////

	//MEDIC CAR & AIR
	
	class Jonzie_Ambulance {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_F {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class ej_UH92_MEV {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class Skyline_Mercedes_Sprinter_Samu_01_F {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class GeK_Renault_Trafic_Ambulance {
        vItemSpace = 30;
        conditions = "";
        price = 20000;
        textures[] = {};
    };
	
	class GeK_Renault_Trafic_medic {
        vItemSpace = 30;
        conditions = "";
        price = 30000;
        textures[] = {};
    };
	
	class I_MRAP_03_F {
        vItemSpace = 30;
        conditions = "";
        price = 100000;
        textures[] = {};
    };
	
	class GeK_TLC100_Medic {
        vItemSpace = 30;
        conditions = "";
        price = 50000;
        textures[] = {};
    };
	
	class GeK_TLC100_Paramedic {
        vItemSpace = 30;
        conditions = "";
        price = 60000;
        textures[] = {};
    };
	
	class gek_s60_medic {
        vItemSpace = 30;
        conditions = "";
        price = 30000;
        textures[] = {};
    };
	
	class Skyline_VW_TouaregR50_Samu_01_F {
        vItemSpace = 30;
        conditions = "";
        price = 35000;
        textures[] = {};
    };
	
	class GeK_audi_a4_avant_01 {
        vItemSpace = 30;
        conditions = "";
        price = 250000;
        textures[] = {};
    };
	
	class Skyline_Audi_RS4_06_F {
        vItemSpace = 30;
        conditions = "";
        price = 300000;
        textures[] = {};
    };
	
	class GeK_C63_AMG_05 {
        vItemSpace = 350;
        conditions = "";
        price = 300000;
        textures[] = { };
    };
	
	class ej_UH60M_MEV {																		//UH-60M (Medevac)
        vItemSpace = 350;
        conditions = "";
        price = 300000;
        textures[] = { };
    };
	
	class Skyline_Mercedes_Sprinter_Depannage_02_F {
        vItemSpace = 350;
        conditions = "";
        price = 6000000;
        textures[] = { };
    };
	
	class shounka_a3_rs5_civ {
        vItemSpace = 30;
        conditions = "";
        price = 600000;
        textures[] = {};
    };
	
	class shounka_rs6 {
        vItemSpace = 30;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class GeK_M6 {
        vItemSpace = 30;
        conditions = "";
        price = 450000;
        textures[] = {};
    };
	
	class Mrshounka_bmwm1_civ {
        vItemSpace = 30;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class GeK_M6_01 {
        vItemSpace = 30;
        conditions = "";
        price = 960000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Datsun_Z432_06_F {
        vItemSpace = 30;
        conditions = "";
        price = 550000;
        textures[] = {};
    };
	
	class Mrshounka_a3_dodge15_civ {
        vItemSpace = 120;
        conditions = "";
        price = 650000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Viper_06_F {
        vItemSpace = 30;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class Mrshounka_ducati_p {
        vItemSpace = 30;
        conditions = "";
        price = 550000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Shounka_F430_Scuderia_06_F {
        vItemSpace = 30;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
	
	class GeK_Mustang_01 {
        vItemSpace = 30;
        conditions = "";
        price = 1100000;
        textures[] = {};
    };
	
	class GeK_Apollo_01 {
        vItemSpace = 30;
        conditions = "";
        price = 2000000;
        textures[] = {};
    };
	
	class GeK_Gallardo_01 {
        vItemSpace = 30;
        conditions = "";
        price = 1800000;
        textures[] = {};
    };
	
	class GeK_IS_01 {
        vItemSpace = 30;
        conditions = "";
        price = 900000;
        textures[] = {};
    };
	
	class shounka_limo_civ {
        vItemSpace = 30;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class Skyline_Lotus_Esprit_06_F {
        vItemSpace = 30;
        conditions = "";
        price = 1200000;
        textures[] = {};
    };
	
	class Mrshounka_lykan_c {
        vItemSpace = 30;
        conditions = "";
        price = 4500000;
        textures[] = {};
    };
	
	class GeK_C63_AMG_01 {
        vItemSpace = 30;
        conditions = "";
        price = 800000;
        textures[] = {};
    };
	
	class GeK_GTR_01 {
        vItemSpace = 30;
        conditions = "";
        price = 1500000;
        textures[] = {};
    };
	
	class shounka_porsche911 {
        vItemSpace = 30;
        conditions = "";
        price = 1300000;
        textures[] = {};
    };
	
	class GeK_911_1972_01 {
        vItemSpace = 30;
        conditions = "";
        price = 800000;
        textures[] = {};
    };
	
	class GeK_Impreza_01 {
        vItemSpace = 30;
        conditions = "";
        price = 500000;
        textures[] = {};
    };
	
	class GeK_gt86_01 {
        vItemSpace = 30;
        conditions = "";
        price = 1600000;
        textures[] = {};
    };
	
	class GeK_Supra_01 {
        vItemSpace = 30;
        conditions = "";
        price = 1300000;
        textures[] = {};
    };
	
	class Gek_Agera_01 {
        vItemSpace = 30;
        conditions = "";
        price = 2500000;
        textures[] = {};
    };
	
	class ej_S94R {
        vItemSpace = 350;
        conditions = "";
        price = 200000;
        textures[] = {};
    };
	
	/////////////////////////////////////////////////////////MEDIC////////////////////////////////////////////////////////////
    
	class I_Truck_02_medical_F {
        vItemSpace = 150;
        conditions = "";
        price = 25000;
        textures[] = {};
    };
	
	class shounka_avalanche {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };
	
	class shounka_monsteur {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_Jonzie_Raptor_01_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };
	
	class Skyline_Ford_Transit_01_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };
	
	class Skyline_Brinks_01_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };
	
	class Skyline_GMC_Vandura_01_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };
	
	class Mrshounka_hummer_civ {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };
	
	class Guillaume9545_Lit {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };
	
	class C_Van_02_medevac_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };
	
	class GeK_VAB {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class O_Truck_03_medical_F {
        vItemSpace = 200;
        conditions = "";
        price = 45000;
        textures[] = {};
    };

    class B_Truck_01_medical_F {
        vItemSpace = 250;
        conditions = "";
        price = 60000;
        textures[] = {};
    };

    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat";
        price = 5000;
        textures[] = { };
    };

    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir";
        price = 200000;
        textures[] = {};
    };

    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg";
        price = 75000;
        textures[] = { };
    };

    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg";
        price = 3000;
        textures[] = { };
    };

    class O_Truck_03_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking";
        price = 5000000;
        textures[] = { };
    };

    class O_Truck_03_device_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking";
        price = 800000;
        textures[] = { };
    };

    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };

    class B_G_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = { };
    };

    class B_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel";
        price = 2000000;
        textures[] = { };
    };

    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat";
        price = 22000;
        textures[] = { };
    };
	
	class Burnes_MK10_1 {
        vItemSpace = 450;
        conditions = "license_civ_boat";
        price = 35000000;
        textures[] = { };
    };

    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg";
        price = 20000;
        textures[] = { };
    };

    class B_Truck_01_box_F {
        vItemSpace = 400;
        conditions = "license_civ_trucking";
        price = 7000000;
        textures[] = { };
    };

    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking";
        price = 375000;
        textures[] = { };
    };

    class O_MRAP_02_F {
        vItemSpace = 60;
        conditions = "";
        price = 3000000;
        textures[] = { 
			{"Police infrit", "cop", {
			"textures\car\ifrit_tiger_back",
			"textures\car\ifrit_tiger_back"
			}, "" },
			{"Police infrit", "reb", {
			"textures\car\ifrit_tiger_front.paa",
			"textures\car\ifrit_tiger_front.paa"
			}, "" },
			{"infrit", "reb", {
			}, "textures\car\ifrit_tiger_back.paa" }
		};	
    };

    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 12500;
        textures[] = {
            { "medic_offroad", "med", {
                "textures\car\medic\offroad\medic_offroad.paa",
                "textures\car\medic\offroad\medic_offroad.paa"
            }, "" },
            { "Medic_Offroad2", "med", {
                "textures\car\medic\offroad\Medic_Offroad2.paa",
                "textures\car\medic\offroad\Medic_Offroad2.paa"
            }, "" },
			{ "surf_offroad", "med", {
                "textures\car\medic\offroad\surf_offroad.paa",
                "textures\car\medic\offroad\surf_offroad.paa"
            }, "" },
            { "ttpompier", "med", {
                "textures\car\medic\offroad\ttpompier.jpg",
                "textures\car\medic\offroad\ttpompier.jpg"
            }, "" },
            { "GTA_Paramedic_Offroad", "med", {
                "textures\car\civ\offroad\offroad_01_ext_BASE01_CO.paa",
                "textures\car\civ\offroad\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "titan_offroad2_1", "civ", {
                "textures\car\civ\offroad\titan_offroad2_1.paa",
                "textures\car\civ\offroad\titan_offroad2_1.paa"
            }, "" },
			{ "titan_offroad2", "civ", {
                "textures\car\civ\offroad\titan_offroad2.paa",
                "textures\car\civ\offroad\titan_offroad2.paa"
            }, "" },
            { "titan_offroad", "civ", {
                "textures\car\civ\offroad\titan_offroad.paa",
                "textures\car\civ\offroad\titan_offroad.paa"
            }, "" },
			{ "offroadbluewash", "civ", {
                "textures\car\civ\offroad\offroadbluewash.jpg",
                "\textures\car\civ\offroad\offroadbluewash.jpg"
            }, "" },
			{ "offroadredflower", "civ", {
                "textures\car\civ\offroad\offroadredflower.jpg",
                "textures\car\civ\offroad\offroadredflower.jpg"
            }, "" },
			{ "offroadtan", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroadtan.jpg",
                "\A3\soft_F\Offroad_01\Data\offroadtan.jpg"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};

    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Police", "cop", {
                "#(ai,64,64,1)Fresnel(1.3,7)"
            }, "" }
        };
    };

    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver";
        price = 2500;
        textures[] = {
            { "Brown", "cop", {
                "\A3\Soft_F\Quadbike_01\Data\Quadbike_01_co.paa"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking";
        price = 100000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
    };

    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking";
        price = 250000;
        textures[] = {};
    };

    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" }
        };
    };

    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "";
        price = 30000;
        textures[] = {
            { "aidan_alrs_suv", "civ", {
                "textures\car\civ\SUV\aidan_alrs_suv.jpg"
            }, "" },
			{ "hatchback_sport_ken_block", "civ", {
                "textures\car\civ\SUV\hatchback_sport_ken_block.jpg"
            }, "" },
			{ "suvblueredpaint", "civ", {
                "textures\car\civ\SUV\suvblueredpaint.jpg"
            }, "" },
			{ "STICKER", "civ", {
                "textures\car\civ\SUV\suvSTICKER.paa"
            }, "" },
			{ "nyancat suv", "civ", {
                "textures\car\civ\SUV\nyancat_suv.paa"
            }, "" },
			{ "medic_suv", "med", {
                "textures\car\medic\SUV\medic_suv.paa"
            }, "" },
			{ "Medic_Suv2", "med", {
                "textures\car\medic\SUV\Medic_Suv2.paa"
            }, "" },
			{ "surf_suv_aidan", "med", {
                "textures\car\medic\SUV\surf_suv_aidan.paa"
            }, "" },
			{ "suvpompier", "med", {
                "textures\car\medic\SUV\suvpompier.jpg"
            }, "" },
			{ "SUV_B", "cop", {
                "textures\car\Polis_SUV.paa"
            }, "" },
            { "Police", "cop", {
                "textures\car\medic\SUV\Medic_Suv2.paa"
            }, "" }
        };
    };

    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "";
        price = 250000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class C_Van_01_box_F {
        vItemSpace = 130;
        conditions = "license_civ_trucking";
        price = 350000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
        };
    };

    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 2500000;
        textures[] = {
            { "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)",
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" },
        };
    };

     class B_Heli_Light_01_stripped_F {
        vItemSpace = 90;
        conditions = "";
        price = 275000;
        textures[] = {
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" }
        };
    };

    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
        textures[] = {
            { "Police", "cop", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_ion_co.paa"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
			{ "Paramedic_M900", "med", {
                "textures\car\Paramedic_M900.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        price = 245000;
    };

    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 100;
        conditions = "license_civ_pilot || {license_med_mAir}";
        price = 750000;
        textures[] = {
            { "Black", "cop", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_co.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Desert Digi", "reb", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_opfor_co.paa"
            }, "" },
            { "EMS White", "med", {
                "#(argb,8,8,3)color(1,1,1,0.8)"
            }, "" }
        };
    };

    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg}";
        price = 150000;
        textures[] = {};
    };

        class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking";
        price = 120000;
        textures[] = {
            { "White", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\soft_f_gamma\Van_01\data\van_01_ext_red_co.paa",
                "\A3\soft_f_gamma\Van_01\data\van_01_tank_red_co.paa"
            }, "" }
        };
    };

    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking";
        price = 200000;
        textures[] = {
            { "White", "civ", {
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_kab_co.paa",
                "\A3\Soft_F_Beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" }
        };
    };

    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking";
        price = 250000;
        textures[] = {};
    };
	
	class GeK_Renault_Magnum_10 {
        vItemSpace = 350;
        conditions = "license_civ_truck";
        price = 6000000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Shounka_Renault_Magnum_12_F {
        vItemSpace = 350;
        conditions = "license_civ_truck";
        price = 6000000;
        textures[] = { };
    };
	
	class GeK_Renault_Magnum_06 {
        vItemSpace = 350;
        conditions = "license_civ_truck";
        price = 6500000;
        textures[] = { };
    };
	
	class Maels_magnum_AET {
        vItemSpace = 350;
        conditions = "license_civ_truck";
        price = 6000000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Shounka_Renault_Magnum_09_F {
        vItemSpace = 350;
        conditions = "license_civ_truck";
        price = 6000000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_05_F {
        vItemSpace = 350;
        conditions = "license_civ_truck";
        price = 6000000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_08_F {
        vItemSpace = 350;
        conditions = "license_civ_truck";
        price = 6000000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Jonzie_Box_Truck_09_F {
        vItemSpace = 350;
        conditions = "license_civ_truck";
        price = 6000000;
        textures[] = { };
    };
	
	class GeK_CTSV_Taxi {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_taxi";
        price = 1000000;
        textures[] = {};
    };
	
	class shounka_limo_civ_bleufonce {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_merc";
        price = 100000;
        textures[] = {};
    };
	
	class Touareg_AET {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "";
        price = 100000;
        textures[] = {};
    };
	
	class O_Heli_Transport_04_medevac_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "";
        price = 100000;
        textures[] = {};
    };
	
	class I_Heli_Transport_02_F {
        vItemSpace = 400;
        conditions = "";
        price = 15000000;
        textures[] = {};
    };
	
	class O_Truck_03_fuel_F {
        vItemSpace = 200;
        conditions = "";
        price = 3000000;
        textures[] = {};
    };
	
	class Burnes_MK10_1 {
        vItemSpace = 400;
        conditions = "";
        price = 60000000;
        textures[] = {};
    };
	/////////////////////////////////////////////////////////////////taxi////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	class ivory_190e_taxi {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	
	class ivory_rs4_taxi {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	
	class Skyline_Audi_RS4_05_F {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	
	class Maels_Ikarus_fete {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	
	class Maels_Ikarus_propagande {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	
	class Maels_Ikarus_propagande2 {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	
	class Maels_Ikarus_TanoaLine {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Jonzie_Datsun_510_05_F {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	
	class GeK_Fiorino_05 {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	
	class ADM_Ford_F100_yellow {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Jonzie_Raptor_05_F {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Jonzie_XB_05_F {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	
	class GeK_Mustang_05 {
        vItemSpace = 100;
        conditions = "license_civ_taxi";  
        price = 500000;
        textures[] = { };
    };
	//////////////////////////////////////////////////////////////////////////merc////////////////////////////////////////////////////////////////////////////////////	
	class Skyline_Audi_RS4_13_F {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class GeK_M6_02 {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class GeK_M6_03 {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class GeK_M6_04 {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class GeK_CTSV {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class GeK_CTSV_03 {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class GeK_CTSV_04 {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Jonzie_Escalade_01_F {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Jonzie_Escalade_04_F {
        vItemSpace = 40;
        conditions = "";
        price = 50000;
        textures[] = { };
    };
	
	class shounka_monsteur {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class DAR_MK23 {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class DAR_MK27T {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class Alysia_Opelblitz_EAST_Uncovered {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class Alysia_Opelblitz_EAST_Box {
        vItemSpace = 40;
        conditions = "";
        price = 50000;
        textures[] = { };
    };
	
	class Alysia_Opelblitz_EAST_Covered {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_A3_Offroad_Armed_04_F {
        vItemSpace = 40;
        conditions = "license_civ_merc";
        price = 50000;
        textures[] = { };
    };
};
