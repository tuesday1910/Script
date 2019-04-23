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
			{ "GeK_GTR_09", "" },
			{ "RDS_Zetor6945_Base", "" },
			//vip
			{ "bv_e60_m5_2tone1", "call life_donorlevel >= 1" },//500000
			{ "bv_e60_m5_2tone2", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_2tone3", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_2tone4", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_2tone5", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_aqua", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_baby_blue", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_baby_pink", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_black2", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_burgundy", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_cardinal", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_dark_green", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_gold", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_green", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_grey", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_lavender", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_light_blue", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_light_yellow", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_lime", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_marina_blue", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_navy_blue", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_orange", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_pink", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_purple", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_red", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_sand", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_silver", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_skin_blue", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_skin_camo", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_skin_camo_urban", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_skin_darkgreen", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_skin_white", "call life_donorlevel >= 1" },
			{ "bv_e60_m5_skin_yellow", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_2tone1", "call life_donorlevel >= 1" }, ///   1000000
			{ "bv_gtr_spec_v_2tone2", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_2tone3", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_2tone4", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_2tone5", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_aqua", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_baby_blue", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_baby_pink", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_black2", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_burgundy", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_cardinal", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_dark_green", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_gold", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_green", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_grey", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_lavender", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_light_yellow", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_lime", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_marina_blue", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_navy_blue", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_orange", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_pink", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_purple", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_red", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_sand", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_silver", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_skin_blue", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_skin_camo", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_skin_camo_urban", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_skin_darkgreen", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_skin_white", "call life_donorlevel >= 1" },
			{ "bv_gtr_spec_v_skin_yellow", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_2tone1", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_2tone2", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_2tone3", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_2tone4", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_2tone5", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_cardinal", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_dark_green", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_gold", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_green", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_grey", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_lavender", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_light_blue", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_light_yellow", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_lime", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_marina_blue", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_navy_blue", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_orange", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_pink", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_purple", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_red", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_sand", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_silver", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_skin_blue", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_skin_camo", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_skin_camo_urban", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_skin_darkgreen", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_skin_white", "call life_donorlevel >= 1" },
			{ "bv_caressa_gt_skin_yellow", "call life_donorlevel >= 1" },
			{ "bv_458_2tone1", "call life_donorlevel >= 1" },
			{ "bv_458_2tone2", "call life_donorlevel >= 1" },
			{ "bv_458_2tone3", "call life_donorlevel >= 1" },
			{ "bv_458_2tone4", "call life_donorlevel >= 1" },
			{ "bv_458_2tone5", "call life_donorlevel >= 1" },
			{ "bv_458_baby_blue", "call life_donorlevel >= 1" },
			{ "bv_458_baby_pink", "call life_donorlevel >= 1" },
			{ "bv_458_black2", "call life_donorlevel >= 1" },
			{ "bv_458_burgundy", "call life_donorlevel >= 1" },
			{ "bv_458_cardinal", "call life_donorlevel >= 1" },
			{ "bv_458_dark_green", "call life_donorlevel >= 1" },
			{ "bv_458_gold", "call life_donorlevel >= 1" },
			{ "bv_458_green", "call life_donorlevel >= 1" },
			{ "bv_458_grey", "call life_donorlevel >= 1" },
			{ "bv_458_lavender", "call life_donorlevel >= 1" },
			{ "bv_458_light_blue", "call life_donorlevel >= 1" },
			{ "bv_458_light_yellow", "call life_donorlevel >= 1" },
			{ "bv_458_lime", "call life_donorlevel >= 1" },
			{ "bv_458_marina_blue", "call life_donorlevel >= 1" },
			{ "bv_458_navy_blue", "call life_donorlevel >= 1" },
			{ "bv_458_orange", "call life_donorlevel >= 1" },
			{ "bv_458_pink", "call life_donorlevel >= 1" },
			{ "bv_458_purple", "call life_donorlevel >= 1" },
			{ "bv_458_red", "call life_donorlevel >= 1" },
			{ "bv_458_sand", "call life_donorlevel >= 1" },
			{ "bv_458_silver", "call life_donorlevel >= 1" },
			{ "bv_458_skin_blue", "call life_donorlevel >= 1" },
			{ "bv_458_skin_camo", "call life_donorlevel >= 1" },
			{ "bv_458_skin_camo_urban", "call life_donorlevel >= 1" },
			{ "bv_458_skin_darkgreen", "call life_donorlevel >= 1" },
			{ "bv_458_skin_white", "call life_donorlevel >= 1" },
			{ "bv_458_skin_yellow", "call life_donorlevel >= 1" },
			{ "Quiet_v2_r8plus_blanche_f", "call life_donorlevel >= 1" },
			{ "Quiet_v2_r8plus_bleu_f", "call life_donorlevel >= 1" },
			{ "Quiet_v2_r8plus_chrome_f", "call life_donorlevel >= 1" },
			{ "Quiet_v2_r8plus_noir_f", "call life_donorlevel >= 1" },
			{ "Quiet_v2_r8plus_rouge_f", "call life_donorlevel >= 1" },
			{ "bv_shelly_bf_skin", "call life_donorlevel >= 1" },
			{ "bv_shelly_bw_skin", "call life_donorlevel >= 1" },
			{ "bv_shelly_rw_skin", "call life_donorlevel >= 1" },
			{ "bv_shelly_wb_skin", "call life_donorlevel >= 1" },
			{ "bv_shelly_wbl_skin", "call life_donorlevel >= 1" },
			{ "bv_shelly_wf_skin", "call life_donorlevel >= 1" },
			{ "bv_shelly_bf_skin", "call life_donorlevel >= 1" },
			{ "Mrshounka_a3_dodge15_civ_noir", "call life_donorlevel >= 1" },
			{ "Mrshounka_a3_dodge15_civ_bleufonce", "call life_donorlevel >= 1" },
			{ "Mrshounka_a3_dodge15_civ_rouge", "call life_donorlevel >= 1" },
			{ "Mrshounka_a3_dodge15_civ_jaune", "call life_donorlevel >= 1" },
			{ "Mrshounka_a3_dodge15_civ_rose", "call life_donorlevel >= 1" },
			{ "Mrshounka_a3_dodge15_civ_grise", "call life_donorlevel >= 1" },
			{ "Mrshounka_a3_dodge15_civ_violet", "call life_donorlevel >= 1" },
			{ "Mrshounka_a3_dodge15_civ_orange", "call life_donorlevel >= 1" },
			{ "Mrshounka_a3_dodge15_civ_du", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_noir", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_bleufonce", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_rouge", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_jaune", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_orange", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_grise", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_violet", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_Do", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_white", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_rose", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_vf", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_rf", "call life_donorlevel >= 1" },
			{ "Mrshounka_hummer_civ_yg", "call life_donorlevel >= 1" },
			{ "Mrshounka_veneno_c", "call life_donorlevel >= 1" },
			{ "Mrshounka_veneno_c_noir", "call life_donorlevel >= 1" },
			{ "Mrshounka_veneno_c_bleu", "call life_donorlevel >= 1" },
			{ "Mrshounka_veneno_c_jaune", "call life_donorlevel >= 1" },
			{ "Mrshounka_veneno_c_dg", "call life_donorlevel >= 1" },
			{ "Mrshounka_veneno_c_lm", "call life_donorlevel >= 1" },
			{ "Mrshounka_veneno_c_rf", "call life_donorlevel >= 1" },
			{ "Mrshounka_veneno_c_do", "call life_donorlevel >= 1" },
			{ "Mrshounka_veneno_c_dn", "call life_donorlevel >= 1" },
			{ "Mrshounka_lykan_c_noir", "call life_donorlevel >= 1" },
			{ "Mrshounka_lykan_c_bleufonce", "call life_donorlevel >= 1" },
			{ "Mrshounka_lykan_c_rouge", "call life_donorlevel >= 1" },
			{ "Mrshounka_lykan_c_jaune", "call life_donorlevel >= 1" },
			{ "Mrshounka_lykan_c_rose", "call life_donorlevel >= 1" },
			{ "Mrshounka_lykan_c_grise", "call life_donorlevel >= 1" },
			{ "Mrshounka_lykan_c_violet", "call life_donorlevel >= 1" },
			{ "Mrshounka_lykan_c_orange", "call life_donorlevel >= 1" },
			{ "Mrshounka_lykan_c_do", "call life_donorlevel >= 1" },
			{ "Mrshounka_lykan_c_yg", "call life_donorlevel >= 1" },
			{ "Mrshounka_lykan_c_Bl", "call life_donorlevel >= 1" },
			{ "Mrshounka_lykan_c_um", "call life_donorlevel >= 1" },
			{ "Mrshounka_pagani_c", "call life_donorlevel >= 1" },
			{ "Mrshounka_pagani_c_noir", "call life_donorlevel >= 1" },
			{ "Mrshounka_pagani_c_bleufonce", "call life_donorlevel >= 1" },
			{ "Mrshounka_pagani_c_rouge", "call life_donorlevel >= 1" },
			{ "Mrshounka_pagani_c_jaune", "call life_donorlevel >= 1" },
			{ "Mrshounka_pagani_c_rose", "call life_donorlevel >= 1" },
			{ "Mrshounka_pagani_c_grise", "call life_donorlevel >= 1" },
			{ "Mrshounka_pagani_c_violet", "call life_donorlevel >= 1" },
			{ "Mrshounka_pagani_c_orange", "call life_donorlevel >= 1" },
			{ "shounka_harley_a3", "call life_donorlevel >= 1" },
			{ "shounka_harley_a3_noir", "call life_donorlevel >= 1" },
			{ "shounka_harley_a3_bleu", "call life_donorlevel >= 1" },
			{ "shounka_harley_a3_rouge", "call life_donorlevel >= 1" },
			{ "shounka_harley_a3_lolz", "call life_donorlevel >= 1" }
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
			{ "Touareg_AET", "" }
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
			{ "Maels_magnum_AET", "" },
			{ "GeK_Renault_Magnum", "" },
			{ "GeK_Renault_Magnum_02", "" },
			{ "GeK_Renault_Magnum_03", "" },
			{ "GeK_Renault_Magnum_04", "" },
			{ "GeK_Renault_Magnum_05", "" },
			{ "GeK_Renault_Magnum_06", "" },
			{ "GeK_Renault_Magnum_10", "" },
			{ "GeK_Renault_Magnum_11", "" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_01_F", "" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_01_F", "" },
			{ "Skyline_Ford_Transit_11_F", "" },
			{ "B_Truck_01_ammo_F", "" },
			{ "B_Truck_01_covered_F", "" },
			{ "GeK_Iveco_Stralis", "" },
			{ "GeK_Iveco_Stralis_02", "" },
			{ "GeK_Iveco_Stralis_10", "" },
			{ "GeK_Iveco_Stralis_05", "" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_02_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_03_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_04_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_05_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_06_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_07_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_08_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_09_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_10_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_11_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Box_Truck_12_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_02_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_03_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_04_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_05_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_06_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_07_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_08_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_09_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_10_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_11_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Shounka_Renault_Magnum_12_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Tanker_Truck_01_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Tanker_Truck_02_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Tanker_Truck_03_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Tanker_Truck_04_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Tanker_Truck_05_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Tanker_Truck_06_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Tanker_Truck_07_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Tanker_Truck_08_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Tanker_Truck_09_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Tanker_Truck_11_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_Jonzie_Tanker_Truck_12_F", "call life_donorlevel >= 1" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "" },
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "I_Heli_Transport_02_F", "" },
			{ "pook_H13_amphib", "" },
			{ "sab_parachute", "" },    //
			{ "sab_paratrike", "" },   //
		    { "GR_Bell412_2", ""},        //
			{ "Skyline_Vehicule_A3_MH9_Unarmed_02_F", ""},  //
			{ "Skyline_Vehicule_A3_Orca_04_F", ""},  //
			{ "GR_UH1N_1", ""},          //
			{ "Heli_Transport_CDN888", ""},   //
            { "B_Heli_Transport_03_unarmed_F", ""},
			{ "sab_SU34_CIV", "call life_donorlevel >= 1"}  //
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
			{ "B_Truck_01_box_F", "" },
			{ "GeK_Raptor", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_APEX_Prowler_03_F", "call life_donorlevel >= 1" },
			{ "Skyline_Vehicule_APEX_Qilin_01_F", "call life_donorlevel >= 1" },
			{ "chums_buggy_1", "call life_donorlevel >= 1" },                           //
			{ "GeK_VAB", "call life_donorlevel >= 5" },
			{ "Gurkha_f5", "call life_donorlevel >= 1" },
			{ "interceptor_1", "call life_donorlevel >= 5" },
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
			{ "gek_s60_medic", "" }, 
			{ "GeK_Renault_Trafic_Ambulance", "" }, 
			{ "GeK_Renault_Trafic_medic", "" }, 
			{ "I_MRAP_03_F", "" }, 
			{ "VPC", "" }, 
			{ "RDS_S1203_Civ_02", "" }, 
			{ "GeK_TLC100_Medic", "" }, 
			{ "VSAV_Boxer", "" }, 
			{ "VSAV_Master", "" }, 
			{ "shounka_nemo_pompier", "" }, 
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
			//Air
			{ "O_Heli_Transport_04_medevac_F", "" },  //new 27-02-17
            { "B_Heli_Light_01_F", "" },
			{ "ej_S94R", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "O_Heli_Transport_04_F", "" },
			{ "ej_UH92_MEV", "" },
			{ "GeK_C63_AMG_05", "" },
			{ "GR_Bell412_1", "" },
			{ "ARMSCor_A109_Civ", "" },
			{ "ej_UH60M_MEV", "" },																				//UH-60M (Medevac)
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "" },
			{ "I_MRAP_03_F", "" }, 
            { "C_SUV_01_F", "" },
			{ "O_MRAP_02_F", "call life_coplevel >= 2" },
			{ "ivory_m3_marked", "" }, 
			{ "bv_shelly_cop_patrol", "" },
			{ "bv_458_cop_patrol", "" },
			{ "bv_caressa_gt_cop_patrol", "" },
			{ "bv_gtr_spec_v_cop_patrol", "" },
			{ "Mrshounka_agera_gend_p", "" },
			{ "Maels_ducati_AET", "" }, 
			{ "GeK_GMC_SWAT", "" }, 
			{ "Gurkha_f5", "" },
			{ "madsa_hummer_h2_black_F", "" }, 
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
			{ "interceptor_1", "call life_coplevel >= 8" },
			{ "GeK_VAB", "call life_donorlevel >= 5" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "call life_coplevel >= 3";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 4" },
			{ "EC635_Unarmed", "" },
			{ "I_Heli_light_03_unarmed_F", "" }
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
            { "GeK_GTR_10", "" },
			{ "DAR_ChallengerCivWhite", "" },	
			{ "Mrshounka_bmwm1_civ", "" },
			{ "shounka_monsteur", "" },
			{ "GeK_Camaro", "" },
			{ "Mrshounka_ducati_p", "" },
			{ "Maels_ducati_AET", "" },
			{ "ADM_Ford_F100_green", "" },
			{ "Skyline_Vehicule_Jonzie_Raptor_08_F", "" },	
			{ "Gurkha_f5", "" },
			{ "B_MRAP_01_F", "" },
			{ "Skyline_Jeep_Wrangler_12_F", "" },
			{ "Skyline_Jeep_Wrangler_11_F", "" },
			{ "GeK_Agera", "" },
			{ "GeK_Gallardo_11", "" },
			{ "GeK_M6_02", "" },
			{ "GeK_M6_03", "" },
			{ "GeK_M6_04", "" },
			{ "GeK_CTSV", "" },
			{ "GeK_CTSV_03", "" },
			{ "GeK_CTSV_04", "" },
			{ "Skyline_Vehicule_Jonzie_Escalade_01_F", "" },
			{ "Skyline_Vehicule_Jonzie_Escalade_04_F", "" },
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
	
	class mer_air {
        side = "adac";
        conditions = "";
        vehicles[] = {
			{ "GR_UH1H_3", "" },
            { "GR_AW101_1", "" },
            { "Skyline_Vehicule_A3_Mohawk_01_F", "" },
			{ "Skyline_Vehicule_A3_Orca_05_F", "" }
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
        vItemSpace = 500;
        conditions = "";
        price = 10000000;
        textures[] = {};
    };
	
	class pook_H13_amphib {
        vItemSpace = 300;
        conditions = "";
        price = 10000000;
        textures[] = {};
    };
	
	class sab_parachute {
        vItemSpace = 90;
        conditions ="";
        price = 30000;
        textures[] = {};
    };
	
	class sab_paratrike {
        vItemSpace = 90;
        conditions ="";
        price = 30000;
        textures[] = {};
    };
	
	class GR_Bell412_2 {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 550000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_A3_MH9_Unarmed_02_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_A3_Orca_04_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = {};
    };
	
	class GR_UH1N_1 {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = {};
    };
	
	class Heli_Transport_CDN888 {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {};
    };
	
	class sab_SU34_CIV {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 1000000;
        textures[] = { };
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
	
	class Tractor {
        vItemSpace = 60;
        conditions = "";
        price = 300000;
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
        price = 50000;
        textures[] = {
            { "Planet", "med", {
                "textures\car\medic\strider\STRIDERMINELIFE.paa"
            }, "" },
			{ "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
        };
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
        vItemSpace = 50;
        conditions = "";
        price = 6000000;
        textures[] = {
			{ "Black", "cop", {
                "#(argb,8,8,3)color(0.05,0.05,0.05,1)"
            }, "" },
			{ "med", "med", {
                "#(argb,255,8,3)color(0.05,0.05,0.05,1)"
            }, "" }
		};
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
        vItemSpace = 350;
        conditions = "license_civ_trucking";
        price = 2000000;
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
        price = 6000000;
        textures[] = { 
			{ "Minelife", "civ", {
                "textures\car\ifrit\ifrit_tiger_front.paa",
                "textures\car\ifrit\ifrit_tiger_back.paa"
            }, "" },
		    { "Black", "cop", {
                "textures\car\ifrit\purple_ifrit_1.paa",
                "textures\car\ifrit\purple_ifrit_2.paa"
            }, "" }
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
	
	class Skyline_Vehicule_Jonzie_Box_Truck_08_F {
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
        conditions = "";
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
	//////////////////////////////////////////////////////////////////////////adac Car////////////////////////////////////////////////////////////////////////////////////	16/11/60
	class DAR_ChallengerCivWhite {
        vItemSpace = 40;
        conditions = "";
        price = 300000;
        textures[] = { };
    };
	
	class ADM_Ford_F100_green {
        vItemSpace = 40;
        conditions = "";
        price = 7500000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Jonzie_Raptor_08_F {
        vItemSpace = 40;
        conditions = "";
        price = 300000;
        textures[] = { };
    };
	
	class Skyline_Jeep_Wrangler_12_F {
        vItemSpace = 40;
        conditions = "";
        price = 1100000;
        textures[] = { };
    };
	
	class Skyline_Jeep_Wrangler_11_F {
        vItemSpace = 40;
        conditions = "";
        price = 1100000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Jonzie_Escalade_01_F {
        vItemSpace = 40;
        conditions = "";
        price = 50000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_Jonzie_Escalade_04_F {
        vItemSpace = 40;
        conditions = "";
        price = 50000;
        textures[] = { };
    };
	
	class DAR_MK23 {
        vItemSpace = 40;
        conditions = "";
        price = 50000;
        textures[] = { };
    };
	
	class DAR_MK27T {
        vItemSpace = 40;
        conditions = "";
        price = 50000;
        textures[] = { };
    };
	
	class Alysia_Opelblitz_EAST_Uncovered {
        vItemSpace = 40;
        conditions = "";
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
        conditions = "";
        price = 50000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_A3_Offroad_Armed_04_F {
        vItemSpace = 40;
        conditions = "";
        price = 50000;
        textures[] = { };
    };
	///
	
	class Fox_ChallengerO {
        vItemSpace = 65;
        conditions = "";
        price = 5500000;
        textures[] = {
            { "2Tone1", "reb", {
                "\bv_wheels\data\skins\2tone1_co.paa"
            }, "" },
			{ "2Tone2", "reb", {
                "\bv_wheels\data\skins\2tone2_co.paa"
            }, "" },
			{ "2Tone3", "reb", {
                "\bv_wheels\data\skins\2tone3_co.paa"
            }, "" },
			{ "2Tone4", "reb", {
                "\bv_wheels\data\skins\2tone4_co.paa"
            }, "" },
			{ "2Tone5", "reb", {
                "\bv_wheels\data\skins\2tone5_co.paa"
            }, "" },
			{ "aqua", "reb", {
                "\bv_wheels\data\skins\aqua_co.paa"
            }, "" },
			{ "babyblue", "reb", {
                "\bv_wheels\data\skins\baby_blue_co.paa"
            }, "" },
			{ "babypink", "reb", {
                "\bv_wheels\data\skins\baby_pink_co.paa"
            }, "" },
			{ "Red", "reb", {
                "\bv_wheels\data\skins\red_co.paa"
            }, "" },
			{ "sand", "reb", {
                "\bv_wheels\data\skins\sand_co.paa"
            }, "" },
			{ "silver", "reb", {
                "\bv_wheels\data\skins\silver_co.paa"
            }, "" },
			{ "CamoUrban", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
			{ "Camo", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
            { "COP", "cop", {
                "\bv_wheels\data\skins\skin_patrol_co.paa"
            }, "" }
		};
    };
	
	class Fox_Interceptor {
        vItemSpace = 65;
        conditions = "";
        price = 5500000;
         textures[] = {
             { "2Tone1", "reb", {
                "\bv_wheels\data\skins\2tone1_co.paa"
            }, "" },
			{ "2Tone2", "reb", {
                "\bv_wheels\data\skins\2tone2_co.paa"
            }, "" },
			{ "2Tone3", "reb", {
                "\bv_wheels\data\skins\2tone3_co.paa"
            }, "" },
			{ "2Tone4", "reb", {
                "\bv_wheels\data\skins\2tone4_co.paa"
            }, "" },
			{ "2Tone5", "reb", {
                "\bv_wheels\data\skins\2tone5_co.paa"
            }, "" },
			{ "aqua", "reb", {
                "\bv_wheels\data\skins\aqua_co.paa"
            }, "" },
			{ "babyblue", "reb", {
                "\bv_wheels\data\skins\baby_blue_co.paa"
            }, "" },
			{ "babypink", "reb", {
                "\bv_wheels\data\skins\baby_pink_co.paa"
            }, "" },
			{ "Red", "reb", {
                "\bv_wheels\data\skins\red_co.paa"
            }, "" },
			{ "sand", "reb", {
                "\bv_wheels\data\skins\sand_co.paa"
            }, "" },
			{ "silver", "reb", {
                "\bv_wheels\data\skins\silver_co.paa"
            }, "" },
			{ "CamoUrban", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
			{ "Camo", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
            { "COP", "cop", {
                "\bv_wheels\data\skins\skin_patrol_co.paa"
            }, "" }
		};
    };
	
	class Fox_F40 {
        vItemSpace = 65;
        conditions = "";
        price = 5500000;
         textures[] = {
             { "2Tone1", "reb", {
                "\bv_wheels\data\skins\2tone1_co.paa"
            }, "" },
			{ "2Tone2", "reb", {
                "\bv_wheels\data\skins\2tone2_co.paa"
            }, "" },
			{ "2Tone3", "reb", {
                "\bv_wheels\data\skins\2tone3_co.paa"
            }, "" },
			{ "2Tone4", "reb", {
                "\bv_wheels\data\skins\2tone4_co.paa"
            }, "" },
			{ "2Tone5", "reb", {
                "\bv_wheels\data\skins\2tone5_co.paa"
            }, "" },
			{ "aqua", "reb", {
                "\bv_wheels\data\skins\aqua_co.paa"
            }, "" },
			{ "babyblue", "reb", {
                "\bv_wheels\data\skins\baby_blue_co.paa"
            }, "" },
			{ "babypink", "reb", {
                "\bv_wheels\data\skins\baby_pink_co.paa"
            }, "" },
			{ "Red", "reb", {
                "\bv_wheels\data\skins\red_co.paa"
            }, "" },
			{ "sand", "reb", {
                "\bv_wheels\data\skins\sand_co.paa"
            }, "" },
			{ "silver", "reb", {
                "\bv_wheels\data\skins\silver_co.paa"
            }, "" },
			{ "CamoUrban", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
			{ "Camo", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
            { "COP", "cop", {
                "\bv_wheels\data\skins\skin_patrol_co.paa"
            }, "" }
		};
    };
	
	class Fox_Tahoe_Apocalypse {
        vItemSpace = 65;
        conditions = "";
        price = 5500000;
         textures[] = {
             { "2Tone1", "reb", {
                "\bv_wheels\data\skins\2tone1_co.paa"
            }, "" },
			{ "2Tone2", "reb", {
                "\bv_wheels\data\skins\2tone2_co.paa"
            }, "" },
			{ "2Tone3", "reb", {
                "\bv_wheels\data\skins\2tone3_co.paa"
            }, "" },
			{ "2Tone4", "reb", {
                "\bv_wheels\data\skins\2tone4_co.paa"
            }, "" },
			{ "2Tone5", "reb", {
                "\bv_wheels\data\skins\2tone5_co.paa"
            }, "" },
			{ "aqua", "reb", {
                "\bv_wheels\data\skins\aqua_co.paa"
            }, "" },
			{ "babyblue", "reb", {
                "\bv_wheels\data\skins\baby_blue_co.paa"
            }, "" },
			{ "babypink", "reb", {
                "\bv_wheels\data\skins\baby_pink_co.paa"
            }, "" },
			{ "Red", "reb", {
                "\bv_wheels\data\skins\red_co.paa"
            }, "" },
			{ "sand", "reb", {
                "\bv_wheels\data\skins\sand_co.paa"
            }, "" },
			{ "silver", "reb", {
                "\bv_wheels\data\skins\silver_co.paa"
            }, "" },
			{ "CamoUrban", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
			{ "Camo", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
            { "COP", "cop", {
                "\bv_wheels\data\skins\skin_patrol_co.paa"
            }, "" }
		};
    };
	
	class Fox_Charger_Apocalypse {
        vItemSpace = 65;
        conditions = "";
        price = 5500000;
         textures[] = {
             { "2Tone1", "reb", {
                "\bv_wheels\data\skins\2tone1_co.paa"
            }, "" },
			{ "2Tone2", "reb", {
                "\bv_wheels\data\skins\2tone2_co.paa"
            }, "" },
			{ "2Tone3", "reb", {
                "\bv_wheels\data\skins\2tone3_co.paa"
            }, "" },
			{ "2Tone4", "reb", {
                "\bv_wheels\data\skins\2tone4_co.paa"
            }, "" },
			{ "2Tone5", "reb", {
                "\bv_wheels\data\skins\2tone5_co.paa"
            }, "" },
			{ "aqua", "reb", {
                "\bv_wheels\data\skins\aqua_co.paa"
            }, "" },
			{ "babyblue", "reb", {
                "\bv_wheels\data\skins\baby_blue_co.paa"
            }, "" },
			{ "babypink", "reb", {
                "\bv_wheels\data\skins\baby_pink_co.paa"
            }, "" },
			{ "Red", "reb", {
                "\bv_wheels\data\skins\red_co.paa"
            }, "" },
			{ "sand", "reb", {
                "\bv_wheels\data\skins\sand_co.paa"
            }, "" },
			{ "silver", "reb", {
                "\bv_wheels\data\skins\silver_co.paa"
            }, "" },
			{ "CamoUrban", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
			{ "Camo", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
            { "COP", "cop", {
                "\bv_wheels\data\skins\skin_patrol_co.paa"
            }, "" }
		};
    };
	
	class fox_R34_Fox {
        vItemSpace = 65;
        conditions = "";
        price = 5500000;
         textures[] = {
             { "2Tone1", "reb", {
                "\bv_wheels\data\skins\2tone1_co.paa"
            }, "" },
			{ "2Tone2", "reb", {
                "\bv_wheels\data\skins\2tone2_co.paa"
            }, "" },
			{ "2Tone3", "reb", {
                "\bv_wheels\data\skins\2tone3_co.paa"
            }, "" },
			{ "2Tone4", "reb", {
                "\bv_wheels\data\skins\2tone4_co.paa"
            }, "" },
			{ "2Tone5", "reb", {
                "\bv_wheels\data\skins\2tone5_co.paa"
            }, "" },
			{ "aqua", "reb", {
                "\bv_wheels\data\skins\aqua_co.paa"
            }, "" },
			{ "babyblue", "reb", {
                "\bv_wheels\data\skins\baby_blue_co.paa"
            }, "" },
			{ "babypink", "reb", {
                "\bv_wheels\data\skins\baby_pink_co.paa"
            }, "" },
			{ "Red", "reb", {
                "\bv_wheels\data\skins\red_co.paa"
            }, "" },
			{ "sand", "reb", {
                "\bv_wheels\data\skins\sand_co.paa"
            }, "" },
			{ "silver", "reb", {
                "\bv_wheels\data\skins\silver_co.paa"
            }, "" },
			{ "CamoUrban", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
			{ "Camo", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
            { "COP", "cop", {
                "\bv_wheels\data\skins\skin_patrol_co.paa"
            }, "" }
		};
    };
	
	class Fox_DaytonaGeneral {
        vItemSpace = 65;
        conditions = "";
        price = 5500000;
         textures[] = {
             { "2Tone1", "reb", {
                "\bv_wheels\data\skins\2tone1_co.paa"
            }, "" },
			{ "2Tone2", "reb", {
                "\bv_wheels\data\skins\2tone2_co.paa"
            }, "" },
			{ "2Tone3", "reb", {
                "\bv_wheels\data\skins\2tone3_co.paa"
            }, "" },
			{ "2Tone4", "reb", {
                "\bv_wheels\data\skins\2tone4_co.paa"
            }, "" },
			{ "2Tone5", "reb", {
                "\bv_wheels\data\skins\2tone5_co.paa"
            }, "" },
			{ "aqua", "reb", {
                "\bv_wheels\data\skins\aqua_co.paa"
            }, "" },
			{ "babyblue", "reb", {
                "\bv_wheels\data\skins\baby_blue_co.paa"
            }, "" },
			{ "babypink", "reb", {
                "\bv_wheels\data\skins\baby_pink_co.paa"
            }, "" },
			{ "Red", "reb", {
                "\bv_wheels\data\skins\red_co.paa"
            }, "" },
			{ "sand", "reb", {
                "\bv_wheels\data\skins\sand_co.paa"
            }, "" },
			{ "silver", "reb", {
                "\bv_wheels\data\skins\silver_co.paa"
            }, "" },
			{ "CamoUrban", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
			{ "Camo", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
            { "COP", "cop", {
                "\bv_wheels\data\skins\skin_patrol_co.paa"
            }, "" }
		};
    };
	
	class Fox_Daytona {
        vItemSpace = 65;
        conditions = "";
        price = 5500000;
         textures[] = {
             { "2Tone1", "reb", {
                "\bv_wheels\data\skins\2tone1_co.paa"
            }, "" },
			{ "2Tone2", "reb", {
                "\bv_wheels\data\skins\2tone2_co.paa"
            }, "" },
			{ "2Tone3", "reb", {
                "\bv_wheels\data\skins\2tone3_co.paa"
            }, "" },
			{ "2Tone4", "reb", {
                "\bv_wheels\data\skins\2tone4_co.paa"
            }, "" },
			{ "2Tone5", "reb", {
                "\bv_wheels\data\skins\2tone5_co.paa"
            }, "" },
			{ "aqua", "reb", {
                "\bv_wheels\data\skins\aqua_co.paa"
            }, "" },
			{ "babyblue", "reb", {
                "\bv_wheels\data\skins\baby_blue_co.paa"
            }, "" },
			{ "babypink", "reb", {
                "\bv_wheels\data\skins\baby_pink_co.paa"
            }, "" },
			{ "Red", "reb", {
                "\bv_wheels\data\skins\red_co.paa"
            }, "" },
			{ "sand", "reb", {
                "\bv_wheels\data\skins\sand_co.paa"
            }, "" },
			{ "silver", "reb", {
                "\bv_wheels\data\skins\silver_co.paa"
            }, "" },
			{ "CamoUrban", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
			{ "Camo", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
            { "COP", "cop", {
                "\bv_wheels\data\skins\skin_patrol_co.paa"
            }, "" }
		};
    };
	
	class interceptor_1 {
        vItemSpace = 65;
        conditions = "";
        price = 5500000;
         textures[] = {
            { "2Tone1", "reb", {
                "\bv_wheels\data\skins\2tone1_co.paa"
            }, "" },
			{ "2Tone2", "reb", {
                "\bv_wheels\data\skins\2tone2_co.paa"
            }, "" },
			{ "2Tone3", "reb", {
                "\bv_wheels\data\skins\2tone3_co.paa"
            }, "" },
			{ "2Tone4", "reb", {
                "\bv_wheels\data\skins\2tone4_co.paa"
            }, "" },
			{ "2Tone5", "reb", {
                "\bv_wheels\data\skins\2tone5_co.paa"
            }, "" },
			{ "aqua", "reb", {
                "\bv_wheels\data\skins\aqua_co.paa"
            }, "" },
			{ "babyblue", "reb", {
                "\bv_wheels\data\skins\baby_blue_co.paa"
            }, "" },
			{ "babypink", "reb", {
                "\bv_wheels\data\skins\baby_pink_co.paa"
            }, "" },
			{ "Red", "reb", {
                "\bv_wheels\data\skins\red_co.paa"
            }, "" },
			{ "sand", "reb", {
                "\bv_wheels\data\skins\sand_co.paa"
            }, "" },
			{ "silver", "reb", {
                "\bv_wheels\data\skins\silver_co.paa"
            }, "" },
			{ "CamoUrban", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
			{ "Camo", "reb", {
                "\bv_wheels\data\skins\skin_camo_co.paa"
            }, "" },
            { "COP", "cop", {
                "\bv_wheels\data\skins\skin_patrol_co.paa"
            }, "" }
		};
    };
	
	//////////////////////////////////////////MERC AIR
	class GR_UH1H_3 {
        vItemSpace = 90;
        conditions = "";
        price = 1000000;
        textures[] = {};
    };
	
	class Skyline_Vehicule_A3_Mohawk_01_F {
        vItemSpace = 85;
        conditions = "";
        price = 200000;
        textures[] = { };
    };
	////////////////////////////////////////car VIP
	
	class bv_e60_m5_2tone1 {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_2tone2 {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_2tone3 {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_2tone4 {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_2tone5 {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_aqua {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	class bv_e60_m5_baby_blue {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_baby_pink {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_black2 {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_burgundy {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_cardinal {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_dark_green {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_gold {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_green {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_grey {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_lavender {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	class bv_e60_m5_light_blue {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_light_yellow {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_lime {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_marina_blue {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_navy_blue {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_orange {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_pink {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_purple {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_red {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_sand {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_silver {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_skin_blue {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_skin_camo {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_skin_camo_urban {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_skin_darkgreen {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_skin_white {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class bv_e60_m5_skin_yellow {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	////////////////////////////////////gtr
	class bv_gtr_spec_v_2tone1 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_2tone2 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_2tone3 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_2tone4 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_2tone5 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_aqua {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_baby_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_baby_pink {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_black2 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_burgundy {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_cardinal {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_dark_green {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_gold {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_green {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_grey {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_lavender {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_light_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_light_yellow {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_lime {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_marina_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_navy_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_orange {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_pink {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_purple {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_red {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_sand {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_silver {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_skin_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_skin_camo {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_skin_camo_urban {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_skin_darkgreen {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_skin_white {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_skin_yellow {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };	
	
	class bv_caressa_gt_2tone1 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_2tone2 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_2tone3 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_2tone4 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_2tone5 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_cardinal {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	class bv_caressa_gt_dark_green {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_gold {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	class bv_caressa_gt_green {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_grey {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	class bv_caressa_gt_lavender {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_light_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_light_yellow {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_lime {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_marina_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_navy_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_orange {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_pink {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_purple {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_red {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_sand {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_silver {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	class bv_caressa_gt_skin_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_skin_camo {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	class bv_caressa_gt_skin_camo_urban {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_skin_darkgreen {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_skin_white {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_caressa_gt_skin_yellow {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_2tone1 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_2tone2 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	class bv_458_2tone3 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_2tone4 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };class bv_458_2tone5 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_aqua {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_baby_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_baby_pink {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	class bv_458_black2 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_burgundy {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	class bv_458_cardinal {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_dark_green {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_gold {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_green {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_grey {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_lavender {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	class bv_458_light_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_light_yellow {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	class bv_458_lime {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_marina_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	class bv_458_navy_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_orange {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_pink {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_purple {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_red {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_sand {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_silver {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_skin_blue {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_skin_camo {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_skin_camo_urban {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_skin_darkgreen {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_skin_white {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_458_skin_yellow {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	///////////////////////////////AUDI RS8 plus
	
	class Quiet_v2_r8plus_blanche_f {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Quiet_v2_r8plus_bleu_f {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Quiet_v2_r8plus_chrome_f {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Quiet_v2_r8plus_noir_f {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Quiet_v2_r8plus_rouge_f {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class bv_shelly_bf_skin {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class bv_shelly_bw_skin {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class bv_shelly_rw_skin {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class bv_shelly_wb_skin {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class bv_shelly_wbl_skin {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class bv_shelly_wf_skin {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_noir {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_bleufonce {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_rouge {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_jaune {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_orange {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_grise {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_violet {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_Do {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_white {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_rose {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_vf {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_rf {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_yg {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	
	class Mrshounka_hummer_civ_black {
        vItemSpace = 85;
        conditions = "";
        price = 850000;
        textures[] = { };
    };
	class Mrshounka_veneno_c {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_veneno_c_noir {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	class Mrshounka_veneno_c_bleu {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_veneno_c_jaune {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_veneno_c_dg {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_veneno_c_lm {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	class Mrshounka_veneno_c_rf {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_veneno_c_do {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_veneno_c_dn {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };

	/////////////////////////////LyKan Hyper Sport  
	class Mrshounka_lykan_c_noir {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_lykan_c_bleufonce {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	class Mrshounka_lykan_c_rouge {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_lykan_c_jaune {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_lykan_c_rose {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_lykan_c_grise {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_lykan_c_violet {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_lykan_c_orange {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_lykan_c_do {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_lykan_c_yg {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_lykan_c_Bl {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	
	class Mrshounka_lykan_c_um {
        vItemSpace = 85;
        conditions = "";
        price = 4500000;
        textures[] = { };
    };
	////////////////////////////////////Pagani Huayra    
	class Mrshounka_pagani_c {
        vItemSpace = 85;
        conditions = "";
        price = 3500000;
        textures[] = { };
    };
	
	class Mrshounka_pagani_c_noir {
        vItemSpace = 85;
        conditions = "";
        price = 3500000;
        textures[] = { };
    };
	
	class Mrshounka_pagani_c_bleufonce {
        vItemSpace = 85;
        conditions = "";
        price = 3500000;
        textures[] = { };
    };
	
	class Mrshounka_pagani_c_rouge {
        vItemSpace = 85;
        conditions = "";
        price = 3500000;
        textures[] = { };
    };
	
	class Mrshounka_pagani_c_jaune {
        vItemSpace = 85;
        conditions = "";
        price = 3500000;
        textures[] = { };
    };
	
	class Mrshounka_pagani_c_rose {
        vItemSpace = 85;
        conditions = "";
        price = 3500000;
        textures[] = { };
    };
	
	class Mrshounka_pagani_c_grise {
        vItemSpace = 85;
        conditions = "";
        price = 3500000;
        textures[] = { };
    };
	
	class Mrshounka_pagani_c_violet {
        vItemSpace = 85;
        conditions = "";
        price = 3500000;
        textures[] = { };
    };
	
	class Mrshounka_pagani_c_orange {
        vItemSpace = 85;
        conditions = "";
        price = 3500000;
        textures[] = { };
    };
	
	class shounka_harley_a3 {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class shounka_harley_a3_noir {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class shounka_harley_a3_bleu {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class shounka_harley_a3_rouge {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	
	class shounka_harley_a3_lolz {
        vItemSpace = 85;
        conditions = "";
        price = 500000;
        textures[] = { };
    };
	/////////////////////////////////////// Dodg Charger 2015
	class Mrshounka_a3_dodge15_civ_noir {
        vItemSpace = 85;
        conditions = "";
        price = 800000;
        textures[] = { };
    };
	
	class Mrshounka_a3_dodge15_civ_bleufonce {
        vItemSpace = 85;
        conditions = "";
        price = 800000;
        textures[] = { };
    };
	
	class Mrshounka_a3_dodge15_civ_rouge {
        vItemSpace = 85;
        conditions = "";
        price = 800000;
        textures[] = { };
    };
	
	class Mrshounka_a3_dodge15_civ_jaune {
        vItemSpace = 85;
        conditions = "";
        price = 800000;
        textures[] = { };
    };
	
	class Mrshounka_a3_dodge15_civ_rose {
        vItemSpace = 85;
        conditions = "";
        price = 800000;
        textures[] = { };
    };
	
	class Mrshounka_a3_dodge15_civ_grise {
        vItemSpace = 85;
        conditions = "";
        price = 800000;
        textures[] = { };
    };
	
	class Mrshounka_a3_dodge15_civ_violet {
        vItemSpace = 85;
        conditions = "";
        price = 800000;
        textures[] = { };
    };
	
	class Mrshounka_a3_dodge15_civ_orange {
        vItemSpace = 85;
        conditions = "";
        price = 800000;
        textures[] = { };
    };
	
	class Mrshounka_a3_dodge15_civ_du {
        vItemSpace = 85;
        conditions = "";
        price = 800000;
        textures[] = { };
    };
	
	class RDS_Zetor6945_Base {
        vItemSpace = 85;
        conditions = "";
        price = 50000;
        textures[] = { };
    };
	
	////////////////////////////////////////////////////////////////////////////////
	
	class GeK_Raptor {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_APEX_Prowler_03_F {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class Skyline_Vehicule_APEX_Qilin_01_F {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
	
	class bv_shelly_cop_patrol {
        vItemSpace = 85;
        conditions = "";
        price = 300000;
        textures[] = { };
    };
	
	class bv_458_cop_patrol {
        vItemSpace = 85;
        conditions = "";
        price = 150000;
        textures[] = { };
    };
	
	class bv_caressa_gt_cop_patrol {
        vItemSpace = 85;
        conditions = "";
        price = 55000;
        textures[] = { };
    };
	
	class bv_gtr_spec_v_cop_patrol {
        vItemSpace = 85;
        conditions = "";
        price = 45000;
        textures[] = { };
    };
	
	class Mrshounka_agera_gend_p {
        vItemSpace = 85;
        conditions = "";
        price = 60000;
        textures[] = { };
    };
	
	class gek_s60_medic {
        vItemSpace = 85;
        conditions = "";
        price = 15000;
        textures[] = { };
    };
	
	class GR_Bell412_1 {
        vItemSpace = 85;
        conditions = "";
        price = 150000;
        textures[] = { };
    };
	
	class ARMSCor_A109_Civ {
        vItemSpace = 85;
        conditions = "";
        price = 100000;
        textures[] = { };
    };
	
	class VPC {
        vItemSpace = 85;
        conditions = "";
        price = 100000;
        textures[] = { };
    };
	
	class RDS_S1203_Civ_02 {
        vItemSpace = 85;
        conditions = "";
        price = 100000;
        textures[] = { };
    };
	
	class GeK_TLC100_Medic {
        vItemSpace = 85;
        conditions = "";
        price = 100000;
        textures[] = { };
    };
	
	class VSAV_Boxer {
        vItemSpace = 85;
        conditions = "";
        price = 100000;
        textures[] = { };
    };
	
	class VSAV_Master {
        vItemSpace = 85;
        conditions = "";
        price = 100000;
        textures[] = { };
    };
	
	class shounka_nemo_pompier {
        vItemSpace = 85;
        conditions = "";
        price = 100000;
        textures[] = { };
    };
	
	class chums_buggy_1 {
        vItemSpace = 85;
        conditions = "";
        price = 1500000;
        textures[] = { };
    };
};