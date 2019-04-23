/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "Binocular", "", 150, -1, "" },
			{ "ItemGPS", "", 150, -1, "" },
			{ "ItemMap", "", 150, -1, "" },
			{ "ItemCompass", "", 150, -1, "" },
			{ "Rangefinder", "", 12000, -1, "" },
			{ "ItemWatch", "", 150, -1, "" },
			{ "FirstAidKit", "", 1000, -1, "" },
			{ "NVGoggles", "", 20000, -1, "" },
			{ "Chemlight_red", "", 150, -1, "" },
			{ "Chemlight_yellow", "", 150, -1, "" },
			{ "Chemlight_green", "", 150, -1, "" },
			{ "Chemlight_blue", "", 150, -1, "" },
			{ "hgun_mas_acp_F", "", 26500, -1, "" },
			{ "hgun_mas_bhp_F", "", 25500, -1, "" },
			{ "RH_python", "", 30500, -1, "" },
			{ "RH_Deagleg", "", 80000, -1, "" },
			{ "RH_fnp45", "", 30000, -1, "" },
			{ "Glock18_Fade", "", 40000, -1, "" },
			{ "RH_tec9", "", 50000, -1, "" },
			{ "hgun_mas_uzi_F", "", 49000, -1, "" },
			{ "RH_ttracker_g", "", 45000, -1, "" },
			{ "RH_vz61", "", 42000, -1, "" },
			{ "SMG_02_F", "", 65000, -1, "" },
			{ "SMG_05_F", "", 90000, -1, "" },
			{ "Skyline_Mosin9130_Bayonette_01_F", "", 20000, -1, "" },
			{ "Skyline_Arbalette_01_F", "", 90000, -1, "" },
			{ "A3L_BergenMurica", "", 50000, -1, "" },
			{ "RH_muzi", "", 120000, -1, "" },
			{ "hgun_Pistol_heavy_01_F", "", 26500, -1, "" },
			{ "hgun_ACPC2_F", "", 26500, -1, "" },
			{ "RH_m9", "", 26500, -1, "" },
			{ "RH_m9c", "", 26500, -1, "" },
			{ "RH_cz75", "", 26500, -1, "" },
			{ "RH_deagle", "", 26500, -1, "" },
			{ "RH_Deaglem", "", 26500, -1, "" },
			{ "RH_fn57", "", 26500, -1, "" },
			{ "RH_fn57_t", "", 26500, -1, "" },
			{ "RH_fnp45t", "", 26500, -1, "" },
			{ "RH_g17", "", 26500, -1, "" },
			{ "RH_g19", "", 26500, -1, "" },
			{ "RH_g19t", "", 26500, -1, "" },
			{ "RH_gsh18", "", 26500, -1, "" },
			{ "RH_kimber", "", 26500, -1, "" },
			{ "RH_kimber_nw", "", 26500, -1, "" },
			{ "RH_m1911", "", 26500, -1, "" },
			{ "RH_mak", "", 26500, -1, "" },
			{ "RH_mateba", "", 26500, -1, "" },
			{ "RH_mp412", "", 26500, -1, "" },
			{ "Skyline_MR96_01_F", "", 26500, -1, "" },
			{ "hgun_P07_khk_F", "", 26500, -1, "" },
			{ "hgun_P07_F", "", 26500, -1, "" },
			// VIP Level 5
			{ "AWP_Lightning_strike", "", 600000, 200000, "call life_donorlevel >= 5"},
			{ "AWP_Boom", "", 600000, 200000, "call life_donorlevel >= 5"},
			{ "AWP_Asiimov", "", 600000, 200000, "call life_donorlevel >= 5"},
			{ "AWP_SRG_Desert", "", 900000, 200000, "call life_donorlevel >= 5"},
			{ "srifle_DMR_03_woodland_F", "", 150000, 7500, "call life_donorlevel >= 5" },				//Mk-| EMR 7.62mm(Woodland)
			{ "srifle_DMR_06_camo_F", "", 150000, 7500, "call life_donorlevel >= 5" },					//Mk14 7.62mm(Camo)
			{ "srifle_DMR_06_olive_F", "", 150000, 7500, "call life_donorlevel >= 5" },					//Mk14 7.62mm(Olive)
			{ "srifle_EBR_F", "", 150000, 7500, "call life_donorlevel >= 5" },							//Mk18 ABR 7.62mm
			{ "arifle_Mk20_plain_F", "", 150000, 7500, "call life_donorlevel >= 5" },					//Mk20 5.56mm
			{ "arifle_Mk20_F", "", 150000, 7500, "call life_donorlevel >= 5" },							//Mk20 5.56mm(Camo)
			{ "arifle_Mk20_GL_plain_F", "", 150000, 7500, "call life_donorlevel >= 5" },				//Mk20 EGLM 5.56mm
			{ "arifle_Mk20_GL_F", "", 200000, 7500, "call life_donorlevel >= 5" },						//Mk20 EGLM 5.56mm(Camo)
			{ "arifle_Mk20C_plain_F", "", 200000, 7500, "call life_donorlevel >= 5" },					//Mk20C 5.56mm
			{ "arifle_Mk20C_F", "", 200000, 7500, "call life_donorlevel >= 5" },						//Mk20C 5.56mm(Camo)
			{ "Skyline_Mosin9130_01_F", "", 160000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130
			{ "Skyline_Mosin9130_03_F", "", 160000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130(Camo)
			{ "Skyline_Mosin9130_02_F", "", 160000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130(Noir)
			{ "Skyline_Mosin9130_04_F", "", 140000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130(Vert)
			{ "Skyline_Mosin9130_Bayonette_01_F", "", 140000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130(Bayonette)
			{ "Skyline_Mosin9130_Bayonette_03_F", "", 140000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Camo)
			{ "Skyline_Mosin9130_Bayonette_02_F", "", 130000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Noir)
			{ "Skyline_Mosin9130_Bayonette_04_F", "", 130000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Vert)
			{ "arifle_mas_mp5sd_ds", "", 130000, 7500, "call life_donorlevel >= 5" },					//MP5SD6 UW Scuba
			{ "arifle_MX_GL_Black_F", "", 100000, 7500, "call life_donorlevel >= 5" },					//MX 3GL 6.5mm(Black)
			{ "arifle_MX_GL_khk_F", "", 100000, 7500, "call life_donorlevel >= 5" },					//MX 3GL 6.5mm(Khaki)
			{ "arifle_MX_GL_F", "", 100000, 7500, "call life_donorlevel >= 5" },						//MX 3GL 6.5mm
			{ "arifle_MX_Black_F", "", 100000, 7500, "call life_donorlevel >= 5" },						//MX 6.5mm(Black)
			{ "arifle_MX_khk_F", "", 110000, 7500, "call life_donorlevel >= 5" },						//MX 6.5mm(Khaki)
			{ "arifle_MX_SW_Black_F", "", 110000, 7500, "call life_donorlevel >= 5" },					//MX SW 6.5mm(Black)
			{ "arifle_MX_SW_khk_F", "", 110000, 7500, "call life_donorlevel >= 5" },					//MX SW 6.5mm(Khaki)
			{ "srifle_mas_sr25", "", 100000, 100, "call life_donorlevel >= 4" },
            { "arifle_MXC_F", "", 30000, 5000, "call life_donorlevel >= 4" },
			{ "LMG_mas_M249_F_d", "", 190000, 7500, "call life_donorlevel >= 4" },						//M249 Para Des
			{ "LMG_mas_M249_F_v", "", 190000, 7500, "call life_donorlevel >= 4" },						//M249 Para Wood
			{ "m249Tan_EPOCH", "", 200000, 7500, "call life_donorlevel >= 4" },							//M249 Tan
			{ "arifle_mas_m27", "", 200000, 7500, "call life_donorlevel >= 4" },						//M27 IAR
			{ "arifle_mas_m27_d", "", 200000, 7500, "call life_donorlevel >= 4" },						//M27 IAR Des				
			{ "arifle_mas_m27m", "", 250000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG
			{ "arifle_mas_m27m_d", "", 250000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG Des
			{ "arifle_mas_m27m_v", "", 100000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG Wood
			{ "arifle_mas_m27_v", "", 100000, 7500, "call life_donorlevel >= 4" },						//M27 IAR Wood
			{ "srifle_LRR_tna_F", "", 450000, 7500, "call life_donorlevel >= 4" },						//M320 LRR .408(Tropic)
			{ "srifle_DMR_02_F", "", 150000, 7500, "call life_donorlevel >= 4" },						//MAR-10 .338(Black)
			{ "srifle_DMR_02_camo_F", "", 150000, 7500, "call life_donorlevel >= 4" },					//MAR-10 .338(Camo)
			{ "srifle_DMR_03_multicam_F", "", 170000, 7500, "call life_donorlevel >= 4" },				//Mk-| EMR 7.62mm(Camo)
			{ "srifle_DMR_03_khaki_F", "", 180000, 7500, "call life_donorlevel >= 4" },					//Mk-| EMR 7.62mm(Khaki)
			{ "srifle_DMR_03_tan_F", "", 170000, 7500, "call life_donorlevel >= 4" },					//Mk-| EMR 7.62mm(Sand)
			// Muzzle
			{ "muzzle_snds_B", "", 5000, 500, "call life_donorlevel >= 2" },
			{ "muzzle_snds_B_khk_F", "", 5000, 500, "call life_donorlevel >= 2" },
			{ "muzzle_mas_snds_SH", "", 5000, 500, "call life_donorlevel >= 2" },
			{ "muzzle_mas_snds_SHc", "", 5000, 500, "call life_donorlevel >= 2" },
			{ "muzzle_snds_58_blk_F", "", 5000, 500, "call life_donorlevel >= 2" },
			{ "muzzle_snds_65_TI_hex_F", "", 5000, 500, "call life_donorlevel >= 2" },
			{ "muzzle_snds_H_snd_F", "", 5000, 500, "call life_donorlevel >= 2" },
			{ "muzzle_snds_93mmg_tan", "", 5000, 500, "call life_donorlevel >= 2" },
			{ "muzzle_mas_snds_KSVK", "", 5000, 500, "call life_donorlevel >= 2" },
			{ "muzzle_mas_snds_SVc", "", 5000, 500, "call life_donorlevel >= 2" },
			{ "muzzle_snds_L", "", 5000, 100, "call life_donorlevel >= 2" },
			{ "muzzle_snds_H", "", 5000, 100, "call life_donorlevel >= 2" },
			{ "muzzle_snds_338_sand", "", 5000, 500, "call life_donorlevel >= 2" },
			// ป้ายประท้วง
			{ "Skyline_tl122_blanche", "", 300, -1, "" },
			{ "Skyline_tl122_bleu", "", 300, -1, "" },
			{ "Skyline_tl122_jaune", "", 300, -1, "" },
			{ "Skyline_tl122_orange", "", 300, -1, "" },
			{ "Skyline_tl122_rose", "", 300, -1, "" },
			{ "Skyline_tl122_rouge", "", 300, -1, "" },
			{ "Skyline_tl122_verte", "", 300, -1, "" },
			{ "Skyline_Pancarte_clochard", "", 10000, -1, "" },
			{ "Skyline_Pancarte_malieu", "", 10000, -1, "" },
			{ "Skyline_Pancarte_01_F", "", 10000, -1, "" },
			{ "Skyline_Pancarte_pnt", "", 10000, -1, "" },
			{ "Skyline_Pancarte_marijuana", "", 10000, -1, "" },
			{ "Skyline_Pancarte_communisme", "", 10000, -1, "" },
			{ "Skyline_Pancarte_tabor", "", 10000, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
			{ "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
			{ "9Rnd_45ACP_Mag", "", 45, 100, "" },
			{ "30Rnd_9x21_Mag", "", 75, 100, "" },
			{ "12Rnd_mas_45acp_Mag", "", 300, -1, "" },
			{ "15Rnd_mas_9x21_Mag", "", 300, -1, "" },
			{ "RH_6Rnd_357_Mag", "", 300, -1, "" },
			{ "RH_7Rnd_50_AE", "", 800, -1, "" },
			{ "RH_15Rnd_45cal_fnp", "", 300, -1, "" },
			{ "17Rnd_mas_9x21_Mag", "", 300, -1, "" },
			{ "RH_32Rnd_9x19_tec", "", 300, -1, "" },
			{ "Glock18_Radiation", "", 300, -1, "" },
			{ "25Rnd_mas_9x19_Mag", "", 5000, -1, "" },
			{ "RH_6Rnd_45ACP_Mag", "", 5000, -1, "" },
			{ "RH_20Rnd_32cal_vz61", "", 5000, -1, "" },
			{ "30Rnd_9x21_Mag_SMG_02", "", 5000, -1, "" },
			{ "5Rnd_762x54_Mosin", "", 5000, -1, "" },
			{ "5Rnd_Fleche", "", 5000, -1, "" },
			{ "2Rnd_B95_Mag", "", 5000, -1, "" },
			{ "RH_30Rnd_9x19_UZI", "", 5000, -1, "" },
			{ "11Rnd_45ACP_Mag", "", 5000, -1, "" },
			{ "RH_15Rnd_9x19_M9", "", 5000, -1, "" },
			{ "RH_16Rnd_9x19_CZ", "", 5000, -1, "" },
			{ "RH_20Rnd_57x28_FN", "", 5000, -1, "" },
			{ "RH_17Rnd_9x19_g17", "", 5000, -1, "" },
			{ "RH_7Rnd_45cal_m1911", "", 5000, -1, "" },
			{ "RH_8Rnd_9x18_Mak", "", 5000, -1, "" },
			{ "RH_6Rnd_44_Mag", "", 5000, -1, "" },
			{ "30Rnd_556x45_Stanag", "", 5000, 100, "" },
            { "30Rnd_65x39_caseless_green", "", 5000, 100, "" },
            { "10Rnd_762x54_Mag", "", 5000, 100, "" },
			{ "30Rnd_762x39_Mag_F", "", 5000, 200, "" },
			{ "30Rnd_mas_762x39_mag", "", 5000, 50, "" },
			{ "10Rnd_mas_338_Stanag", "", 7500, 500, "" },
			{ "64Rnd_mas_9x18_mag", "", 5000, 200, "" },
			{ "100Rnd_580x42_Mag_F", "", 5000, 200, "" },
			{ "30Rnd_580x42_Mag_F", "", 5000, 50, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 5000, 500, "" },
			{ "20Rnd_mas_762x51_Stanag", "", 5000, 50, "" },
			{ "5Rnd_mas_127x108_mag", "", 5000, 500, "" },
			{ "5Rnd_127x108_Mag", "", 5000, 500, "" },
			{ "200Rnd_556x45_Box_F", "", 5000, 500, "" },
			{ "5Rnd_mas_762x51_Stanag", "", 5000, 50, "" },
			{ "100Rnd_mas_762x51_Stanag", "", 5000, 500, "" },
			{ "7Rnd_408_Mag", "", 5000, 500, "" },
			{ "200Rnd_65x39_cased_Box", "", 5000, 500, "" },
			{ "30Rnd_mas_545x39_mag", "", 5000, 500, "" },
			{ "30Rnd_762x51_Fal", "", 5000, 7500, "" },
			{ "41630mk262_mag", "", 5000, 7500, "" },
            { "20Rnd_556x45_UW_mag", "", 5000, 50, "" },
			{ "10Rnd_127x54_Mag", "", 5000, 50, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 5000, 50, "" },
			{ "10Rnd_338_Mag", "", 5000, 50, "" },
			{ "30Rnd_762x39_Mag", "", 5000, 7500, "" },
			{ "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 5000, 100, "" },
            { "30Rnd_9x21_Mag", "", 5000, 100, "" },
            { "9Rnd_45ACP_Mag", "", 5000, 100, "" },
			{ "5Rnd_mas_127x99_Stanag", "", 5000, -1, "" },
			{ "200Rnd_mas_556x45_Stanag", "", 5000, -1, "" },
			{ "30Rnd_mas_9x21sd_Stanag", "", 5000, -1, "" },
			{ "25Rnd_45ACP_Mag", "", 5000, 100, "" },
			{ "30Rnd_mas_556x45_Stanag", "", 5000, 100, "" },
			{ "20Rnd_762x51_Mag", "", 5000, 100, "" },
			{ "71Rnd_mas_762x25_mag", "", 5000, 100, "" },
			{ "30Rnd_mas_9x21_Stanag", "", 5000, 100, "" },
			{ "10Rnd_mas_338sd_Stanag", "", 5000, 100, "" },
			{ "200Rnd_556x45_M249", "", 5000, 100, "" },
			{ "10Rnd_mas_762x54_mag", "", 5000, 100, "" },
			{ "20Rnd_mas_12Gauge_Slug", "", 5000, 100, "" },
			{ "7Rnd_mas_12Gauge_Slug", "", 5000, 100, "" },
			{ "7Rnd_mas_12Gauge_Pellets", "", 5000, 100, "" },
			{ "150Rnd_762x51_Box", "", 5000, 100, "" },
			{ "100Rnd_mas_762x54_mag", "", 5000, 100, "" },
			{ "130Rnd_338_Mag", "", 5000, 100, "" },
			{ "150Rnd_mas_556x45_Stanag", "", 5000, 100, "" },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 5000, -1, "" },	
			{ "Fett_20Rnd_556x45_UW_mag", "", 5000, -1, "" },
			{ "150Rnd_762x54_Box", "", 5000, 50, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 100, "" },
			{ "optic_MRD", "", 5000, -1, "" },
			{ "optic_Yorris", "", 5000, -1, "" },
			{ "optic_ERCO_blk_F", "", 10000, -1, "" },
			{ "optic_Holosight", "", 3000, 100, "" },
            { "optic_Arco", "", 3000, 100, "" },
			{ "optic_mas_PSO_nv_c", "", 3000, -1, "" },
			{ "optic_mas_PSO_nv", "", 3000, -1, "" },
			{ "optic_Hamr", "", 2000, 75, "" },
			{ "optic_ACO_grn", "", 2000, 50, "" },
			{ "optic_AMS", "", 2000, 50, "" },
			{ "optic_DMS", "", 2000, 50, "" },
			{ "optic_LRPS", "", 2000, 50, "" },
			{ "optic_KHS_blk", "", 2000, 50, "" },
			{ "optic_KHS_old", "", 2000, 50, "" },
			{ "optic_LRPS_ghex_F", "", 2000, 50, "" },
			{ "optic_Holosight_smg_blk_F", "", 2000, 50, "" },
			{ "optic_SOS", "", 2000, 50, "" },
			{ "optic_MRCO", "", 2000, 50, "" },
			{ "optic_Hamr_khk_F", "", 2000, 50, "" },
			{ "bipod_03_F_blk", "", 2000, 50, "" },
			{ "bipod_02_F_blk", "", 2000, 50, "" },
			{ "bipod_01_F_blk", "", 2000, 50, "" },
			{ "bipod_02_F_hex", "", 2000, 50, "" },
			{ "acc_pointer_IR", "", 2000, 50, "" },
			{ "optic_NVS", "", 7000, -1, "" },
			{ "acc_flashlight", "", 2000, 50, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
			{ "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 1200, 580, "" },
			{ "TAC_K6VSR2", "", 1200, 580, "" },
			{ "TAC_K6VSR", "", 1200, 580, "" },
			{ "TAC_SG", "", 1200, 580, "" },
			{ "TAC_SG_SK", "", 1200, 580, "" },
			{ "TAC_SGS", "", 1200, 580, "" },
			{ "TAC_SGS_SK", "", 1200, 580, "" },
			{ "TRYK_SPgearG_NV", "", 1200, 580, "" },
			{ "TRYK_HRPIGEAR_NV", "", 1200, 580, "" },
			{ "TRYK_SPgear_PHC2_NV", "", 1200, 580, "" },
			{ "Rangefinder", "", 5000, 580, "" },
            { "arifle_TRG20_F", "", 280000, 2500, "" },													//TRG-20 5.56mm
            { "arifle_Katiba_F", "", 100000, 5000, "" },												//Katida 6.5mm
            { "srifle_DMR_01_F", "", 150000, -1, "" },													//Rahim 7.62mm
            { "arifle_SDAR_F", "", 45000, 7500, "" },													//SDAR 5.56mm
			{ "arifle_AK12_F", "", 250000, 7500, "" },													//AK-12 7.62mm
			{ "arifle_mas_akms_c", "", 250000, 7500, "" },
			{ "AWP_SRG_Desert", "", 300000, 7500, "" },
			{ "arifle_mas_bizon", "", 200000, 7500, "" },
			{ "arifle_CTARS_hex_F", "", 200000, 7500, "" },												//CAR-95-1 5.8mm(Hex)
			{ "arifle_CTAR_hex_F", "", 200000, 7500, "" },												//CAR-95 5.8mm(Hex)
			{ "srifle_DMR_07_hex_F", "", 250000, 7500, "" },											//CAR-76 6.5mm(Hex)
			{ "arifle_mas_g3", "", 200000, 7500, "" },
			{ "srifle_GM6_camo_F", "", 800000, 7500, "" },												//GM6 Lynx 12.7mm(Camo)
			{ "srifle_mas_ksvk_c", "", 900000, 7500, "" },												//KSVK camo
			{ "LMG_03_F", "", 600000, 7500, "" },														//LIM-85 5.56mm
			{ "srifle_mas_m110", "", 400000, 7500, "" },
			{ "srifle_mas_ebr", "", 350000, 7500, "" },
			{ "srifle_mas_m24_d", "", 500000, 7500, "" },
			{ "LMG_mas_M249a_F", "", 700000, 7500, "" },												//M249
			{ "srifle_LRR_camo_F", "", 1000000, 7500, "" },												//M320 LRR .408(Camo)
			{ "LMG_Mk200_F", "", 600000, 7500, "" },													//Mk200 6.5mm
			{ "m4a1_Kesha", "", 200000, 500, "" },
			{ "arifle_mas_ak12_sf", "", 200000, 500, "" },
			{ "arifle_mas_mk16_l", "", 190000, 10, "" },
			{ "arifle_mas_arx", "", 200000, 10, "" },
			{ "arifle_mas_g36c", "", 200000, 10, "" },
			{ "arifle_ARX_hex_F", "", 150000, 10, "" },
			{ "arifle_mas_m4vlt", "", 150000, 10, "" },
			{ "arifle_SPAR_01_khk_F", "", 100000, 10, "" },
			{ "arifle_CTARS_ghex_F", "", 150000, 7500, "" },											//CAR-95-1 5.8mm(Green Hex)
			{ "arifle_CTAR_ghex_F", "", 150000, 7500, "" },												//CAR-95 5.8mm(Green Hex)
			{ "srifle_DMR_07_ghex_F", "", 200000, 7500, "" },											//CAR-76 6.5mm(Green Hex)
			{ "Skyline_Fal_02_F", "", 250000, 7500, "" },												//FN Fal
			{ "Skyline_Fal_03_F", "", 90000, 7500, "" },												//FN Fal(Camo Ghillie)
			{ "ej_hk41610_160th", "", 80000, 7500, "" },												//HK416 160th
			{ "arifle_Katiba_F", "", 85000, 7500, "" },
			{ "Skyline_M4A1_01_F", "", 150000, 7500, "" },				    							//M4A1
			{ "Skyline_M4A1_02_F", "", 150000, 7500, "" },												//M4A1 Compact
			{ "AWP_Lightning_strike", "", 600000, 7500, ""},
			{ "AWP_Boom", "", 600000, 7500, ""},
			{ "AWP_Asiimov", "", 600000, 7500, ""},
			{ "AWP_SRG_Desert", "", 600000, 7500, ""},
			// VIP Level 1
			{ "srifle_DMR_04_Tan_F", "", 200000, 7500, "call life_donorlevel >= 1" },					//ASP-1 Kir 12.7mm(Tan)
			{ "srifle_DMR_05_tan_f", "", 300000, 7500, "call life_donorlevel >= 1" },					//Cyrus 9.3mm(Tan)
			{ "srifle_DMR_02_sniper_F", "", 450000, 7500, "call life_donorlevel >= 1" },
			{ "LMG_mas_Mk200_F", "", 200000, 7500, "call life_donorlevel >= 1" },
			{ "arifle_AK12_GL_F", "", 250000, 30, "call life_donorlevel >= 1" },						//AK-12 GL 7.62mm
			{ "arifle_CTARS_blk_F", "", 280000, 30, "call life_donorlevel >= 1" },						//CAR-95-1 5.8mm(Black)
			{ "akm_aqua", "", 198000, 30, "call life_donorlevel >= 1" },								//AK47|Aqua
			// VIP Level 2
			{ "akm_black_laminate", "", 190000, 30, "call life_donorlevel >= 2" },						//AK47|Black Laminate
			{ "akm_case_hardened", "", 230000, 30, "call life_donorlevel >= 2" },						//AK47|Case Hardened
			{ "akm_desert", "", 190000, 30, "call life_donorlevel >= 2" },								//AK47|Desert Storm
			{ "akm_nuclear", "", 250000, 30, "call life_donorlevel >= 2" },								//AK47|Nuclear Thread
			{ "akm_radiation", "", 250000, 30, "call life_donorlevel >= 2" },							//AK47|Radiation Hazard
			{ "arifle_CTAR_blk_F", "", 150000, 30, "call life_donorlevel >= 2" },						//CAR-95 5.8mm(Black)
			{ "arifle_CTAR_GL_blk_F", "", 150000, 30, "call life_donorlevel >= 2" },					//CAR-95 GL 5.8mm(Black)
			{ "srifle_DMR_07_blk_F", "", 154000, 30, "call life_donorlevel >= 2" },						//CAR-76 6.5mm(Black)
			{ "srifle_DMR_07_ghex_F", "", 254000, 30, "call life_donorlevel >= 2" },
			{ "m4a3_EPOCH", "", 150000, 7500, "call life_donorlevel >= 2" },							//M4A3
			{ "akm_red_laminate", "", 150000, 7500, "call life_donorlevel >= 2" },
			{ "AKM_EPOCH", "", 150000, 7500, "call life_donorlevel >= 2" },								//AKM
			{ "Skyline_AKM_01_F", "", 150000, 7500, "call life_donorlevel >= 2" },						//AKM
			{ "arifle_AKM_F", "", 150000, 7500, "call life_donorlevel >= 2" },							//AKM 7.62mm
			// VIP Level 3
			{ "Skyline_AKM_Compact_01_F", "", 150000, 7500, "call life_donorlevel >= 3" },				//AKM Compact
			{ "arifle_AKS_F", "", 150000, 7500, "call life_donorlevel >= 3" },							//AKS-74U 5.45mm
			{ "arifle_mas_asval", "", 150000, 7500, "call life_donorlevel >= 3" },						//AS VAL
			{ "arifle_mas_asval_ds", "", 150000, 7500, "call life_donorlevel >= 3" },					//AS VAL UW Scuda
			{ "Skyline_B95_01_F", "", 160000, 7500, "call life_donorlevel >= 3" },						//Blaser B95
			{ "Skyline_B95_03_F", "", 160000, 7500, "call life_donorlevel >= 3" },						//Blaser B95(Noir)
			{ "Skyline_B95_02_F", "", 160000, 7500, "call life_donorlevel >= 3" },						//Blaser B95(Vert)
			{ "arifle_CTAR_GL_ghex_F", "", 170000, 7500, "call life_donorlevel >= 3" },					//CAR-95 GL 5.8mm(Green Hex)
			{ "arifle_CTAR_GL_hex_F", "", 170000, 7500, "call life_donorlevel >= 3" },					//CAR-95 GL 5.8mm(Hex)
			{ "srifle_DMR_05_blk_F", "", 200000, 7500, "call life_donorlevel >= 3" },					//Cyrus 9.3mm(Black)
			{ "srifle_DMR_05_hex_F", "", 200000, 7500, "call life_donorlevel >= 3" },					//Cyrus 9.3mm(Hex)
			{ "Skyline_Fal_01_F", "", 200000, 7500, "call life_donorlevel >= 3" },						//FN Fal(Compact)
			{ "srifle_GM6_ghex_F", "", 350000, 7500, "call life_donorlevel >= 3" },						//GM6 Lynx 12.7mm(Green Hex)
			{ "srifle_GM6_F", "", 350000, 7500, "call life_donorlevel >= 3" },							//GM6 Lynx 12.7mm
			{ "arifle_Katiba_C_F", "", 180000, 7500, "call life_donorlevel >= 3" },						//Katida Carbine 6.5mm
			{ "arifle_Katiba_GL_F", "", 180000, 7500, "call life_donorlevel >= 3" },					//Katida GL 6.5mm
			{ "M14_EPOCH", "", 140000, 7500, "call life_donorlevel >= 3" },								//M14
			{ "M14Grn_EPOCH", "", 140000, 7500, "call life_donorlevel >= 3" },							//M14(Green)
			{ "m16_EPOCH", "", 140000, 7500, "call life_donorlevel >= 3" },								//M16
			{ "m16Red_EPOCH", "", 140000, 7500, "call life_donorlevel >= 3" },							//M16(Red)
			// VIP Level 4
			{ "m249_EPOCH", "", 190000, 7500, "call life_donorlevel >= 4" },							//M249
			{ "LMG_mas_M249_F", "", 190000, 7500, "call life_donorlevel >= 4" },						//M249 Para
			{ "LMG_mas_M249_F_d", "", 190000, 7500, "call life_donorlevel >= 4" },						//M249 Para Des
			{ "LMG_mas_M249_F_v", "", 190000, 7500, "call life_donorlevel >= 4" },						//M249 Para Wood
			{ "m249Tan_EPOCH", "", 200000, 7500, "call life_donorlevel >= 4" },							//M249 Tan
			{ "arifle_mas_m27", "", 200000, 7500, "call life_donorlevel >= 4" },						//M27 IAR
			{ "arifle_mas_m27_d", "", 200000, 7500, "call life_donorlevel >= 4" },						//M27 IAR Des				
			{ "arifle_mas_m27m", "", 250000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG
			{ "arifle_mas_m27m_d", "", 250000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG Des
			{ "arifle_mas_m27m_v", "", 100000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG Wood
			{ "arifle_mas_m27_v", "", 100000, 7500, "call life_donorlevel >= 4" },						//M27 IAR Wood
			{ "srifle_LRR_F", "", 450000, 7500, "call life_donorlevel >= 4" },							//M320 LRR .408
			{ "srifle_LRR_tna_F", "", 450000, 7500, "call life_donorlevel >= 4" },						//M320 LRR .408(Tropic)
			{ "srifle_DMR_02_F", "", 150000, 7500, "call life_donorlevel >= 4" },						//MAR-10 .338(Black)
			{ "srifle_DMR_02_camo_F", "", 150000, 7500, "call life_donorlevel >= 4" },					//MAR-10 .338(Camo)
			{ "srifle_DMR_03_F", "", 150000, 7500, "call life_donorlevel >= 4" },						//Mk-| EMR 7.62mm(Black)
			{ "srifle_DMR_03_multicam_F", "", 170000, 7500, "call life_donorlevel >= 4" },				//Mk-| EMR 7.62mm(Camo)
			{ "srifle_DMR_03_khaki_F", "", 180000, 7500, "call life_donorlevel >= 4" },					//Mk-| EMR 7.62mm(Khaki)
			{ "srifle_DMR_03_tan_F", "", 170000, 7500, "call life_donorlevel >= 4" },					//Mk-| EMR 7.62mm(Sand)
			// VIP Level 5
			{ "srifle_DMR_03_woodland_F", "", 150000, 7500, "call life_donorlevel >= 5" },				//Mk-| EMR 7.62mm(Woodland)
			{ "srifle_DMR_06_camo_F", "", 150000, 7500, "call life_donorlevel >= 5" },					//Mk14 7.62mm(Camo)
			{ "srifle_DMR_06_olive_F", "", 150000, 7500, "call life_donorlevel >= 5" },					//Mk14 7.62mm(Olive)
			{ "srifle_EBR_F", "", 150000, 7500, "call life_donorlevel >= 5" },							//Mk18 ABR 7.62mm
			{ "arifle_Mk20_plain_F", "", 150000, 7500, "call life_donorlevel >= 5" },					//Mk20 5.56mm
			{ "arifle_Mk20_F", "", 150000, 7500, "call life_donorlevel >= 5" },							//Mk20 5.56mm(Camo)
			{ "arifle_Mk20_GL_plain_F", "", 150000, 7500, "call life_donorlevel >= 5" },				//Mk20 EGLM 5.56mm
			{ "arifle_Mk20_GL_F", "", 200000, 7500, "call life_donorlevel >= 5" },						//Mk20 EGLM 5.56mm(Camo)
			{ "arifle_Mk20C_plain_F", "", 200000, 7500, "call life_donorlevel >= 5" },					//Mk20C 5.56mm
			{ "arifle_Mk20C_F", "", 200000, 7500, "call life_donorlevel >= 5" },						//Mk20C 5.56mm(Camo)
			{ "Skyline_Mosin9130_01_F", "", 160000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130
			{ "Skyline_Mosin9130_03_F", "", 160000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130(Camo)
			{ "Skyline_Mosin9130_02_F", "", 160000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130(Noir)
			{ "Skyline_Mosin9130_04_F", "", 140000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130(Vert)
			{ "Skyline_Mosin9130_Bayonette_01_F", "", 140000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130(Bayonette)
			{ "Skyline_Mosin9130_Bayonette_03_F", "", 140000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Camo)
			{ "Skyline_Mosin9130_Bayonette_02_F", "", 130000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Noir)
			{ "Skyline_Mosin9130_Bayonette_04_F", "", 130000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Vert)
			{ "arifle_mas_mp5sd", "", 130000, 7500, "call life_donorlevel >= 5" },						//MP5SD6
			{ "arifle_mas_mp5sd_ds", "", 130000, 7500, "call life_donorlevel >= 5" },					//MP5SD6 UW Scuba
			{ "arifle_MX_GL_Black_F", "", 100000, 7500, "call life_donorlevel >= 5" },					//MX 3GL 6.5mm(Black)
			{ "arifle_MX_GL_khk_F", "", 100000, 7500, "call life_donorlevel >= 5" },					//MX 3GL 6.5mm(Khaki)
			{ "arifle_MX_GL_F", "", 100000, 7500, "call life_donorlevel >= 5" },						//MX 3GL 6.5mm
			{ "arifle_MX_Black_F", "", 100000, 7500, "call life_donorlevel >= 5" },						//MX 6.5mm(Black)
			{ "arifle_MX_khk_F", "", 110000, 7500, "call life_donorlevel >= 5" },						//MX 6.5mm(Khaki)
			{ "arifle_MX_F", "", 110000, 7500, "call life_donorlevel >= 5" },							//MX 6.5mm
			{ "arifle_MX_SW_Black_F", "", 110000, 7500, "call life_donorlevel >= 5" },					//MX SW 6.5mm(Black)
			{ "arifle_MX_SW_khk_F", "", 110000, 7500, "call life_donorlevel >= 5" },					//MX SW 6.5mm(Khaki)
			// Muzzle
			{ "muzzle_snds_B", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_B_khk_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SH", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SHc", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_58_blk_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_65_TI_hex_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_H_snd_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_93mmg_tan", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_KSVK", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SVc", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_L", "", 5000, 100, "call life_donorlevel >= 5" },
			{ "muzzle_snds_H", "", 5000, 100, "call life_donorlevel >= 5" },
			{ "muzzle_snds_338_sand", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_B_snd_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_asval", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_65_TI_blk_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_65_TI_ghex_F", "", 5000, 500, "call life_donorlevel >= 5" }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 5000, 100, "" },
            { "30Rnd_65x39_caseless_green", "", 5000, 100, "" },
            { "10Rnd_762x54_Mag", "", 5000, 100, "" },
			{ "30Rnd_762x39_Mag_F", "", 5000, 200, "" },
			{ "30Rnd_mas_762x39_mag", "", 5000, 50, "" },
			{ "10Rnd_mas_338_Stanag", "", 7500, 500, "" },
			{ "64Rnd_mas_9x18_mag", "", 5000, 200, "" },
			{ "100Rnd_580x42_Mag_F", "", 5000, 200, "" },
			{ "30Rnd_580x42_Mag_F", "", 5000, 50, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 5000, 500, "" },
			{ "20Rnd_mas_762x51_Stanag", "", 5000, 50, "" },
			{ "5Rnd_mas_127x108_mag", "", 5000, 500, "" },
			{ "5Rnd_127x108_Mag", "", 5000, 500, "" },
			{ "200Rnd_556x45_Box_F", "", 5000, 500, "" },
			{ "5Rnd_mas_762x51_Stanag", "", 5000, 50, "" },
			{ "100Rnd_mas_762x51_Stanag", "", 5000, 500, "" },
			{ "7Rnd_408_Mag", "", 5000, 500, "" },
			{ "200Rnd_65x39_cased_Box", "", 5000, 500, "" },
			{ "30Rnd_mas_545x39_mag", "", 5000, 500, "" },
			{ "30Rnd_762x51_Fal", "", 5000, 7500, "" },
			{ "41630mk262_mag", "", 5000, 7500, "" },
            { "20Rnd_556x45_UW_mag", "", 5000, 50, "" },
			{ "10Rnd_127x54_Mag", "", 5000, 50, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 5000, 50, "" },
			{ "10Rnd_338_Mag", "", 5000, 50, "" },
			{ "30Rnd_762x39_Mag", "", 5000, 7500, "" },
			{ "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 5000, 100, "" },
            { "30Rnd_9x21_Mag", "", 5000, 100, "" },
            { "9Rnd_45ACP_Mag", "", 5000, 100, "" },
			{ "5Rnd_mas_127x99_Stanag", "", 5000, -1, "" },
			{ "200Rnd_mas_556x45_Stanag", "", 5000, -1, "" },
			{ "30Rnd_mas_9x21sd_Stanag", "", 5000, -1, "" },
			{ "25Rnd_45ACP_Mag", "", 5000, 100, "" },
			{ "30Rnd_mas_556x45_Stanag", "", 5000, 100, "" },
			{ "20Rnd_762x51_Mag", "", 5000, 100, "" },
			{ "71Rnd_mas_762x25_mag", "", 5000, 100, "" },
			{ "30Rnd_mas_9x21_Stanag", "", 5000, 100, "" },
			{ "10Rnd_mas_338sd_Stanag", "", 5000, 100, "" },
			{ "200Rnd_556x45_M249", "", 5000, 100, "" },
			{ "10Rnd_mas_762x54_mag", "", 5000, 100, "" },
			{ "20Rnd_mas_12Gauge_Slug", "", 5000, 100, "" },
			{ "7Rnd_mas_12Gauge_Slug", "", 5000, 100, "" },
			{ "7Rnd_mas_12Gauge_Pellets", "", 5000, 100, "" },
			{ "150Rnd_762x51_Box", "", 5000, 100, "" },
			{ "100Rnd_mas_762x54_mag", "", 5000, 100, "" },
			{ "130Rnd_338_Mag", "", 5000, 100, "" },
			{ "150Rnd_mas_556x45_Stanag", "", 5000, 100, "" },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 5000, -1, "" },	
			{ "Fett_20Rnd_556x45_UW_mag", "", 5000, -1, "" },
			{ "150Rnd_762x54_Box", "", 5000, 50, "" }
        };
        accs[] = {
            { "optic_Holosight", "", 3000, 100, "" },
            { "optic_Arco", "", 3000, 100, "" },
            { "optic_MRD", "", 3000, 100, "" },
			{ "optic_mas_PSO_nv_c", "", 3000, -1, "" },
			{ "optic_mas_PSO_nv", "", 3000, -1, "" },
			{ "optic_Hamr", "", 2000, 75, "" },
			{ "optic_ACO_grn", "", 2000, 50, "" },
			{ "optic_AMS", "", 2000, 50, "" },
			{ "optic_DMS", "", 2000, 50, "" },
			{ "optic_ERCO_blk_F", "", 2000, 50, "" },
			{ "optic_LRPS", "", 2000, 50, "" },
			{ "optic_KHS_blk", "", 2000, 50, "" },
			{ "optic_KHS_old", "", 2000, 50, "" },
			{ "optic_LRPS_ghex_F", "", 2000, 50, "" },
			{ "optic_Holosight_smg_blk_F", "", 2000, 50, "" },
			{ "optic_SOS", "", 2000, 50, "" },
			{ "optic_MRCO", "", 2000, 50, "" },
			{ "optic_Hamr_khk_F", "", 2000, 50, "" },
			{ "bipod_03_F_blk", "", 2000, 50, "" },
			{ "bipod_02_F_blk", "", 2000, 50, "" },
			{ "bipod_01_F_blk", "", 2000, 50, "" },
			{ "bipod_02_F_hex", "", 2000, 50, "" },
			{ "acc_pointer_IR", "", 2000, 50, "" },
			{ "optic_NVS", "", 7000, -1, "" },
			{ "acc_flashlight", "", 2000, 50, "" }
        };
    };
	
		class VIP_REBEL {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "call life_donorlevel >= 1";
        items[] = {
			{ "srifle_DMR_04_Tan_F", "", 200000, 7500, "call life_donorlevel >= 1" },					//ASP-1 Kir 12.7mm(Tan)
			{ "srifle_DMR_05_tan_f", "", 300000, 7500, "call life_donorlevel >= 1" },					//Cyrus 9.3mm(Tan)
			{ "srifle_DMR_02_sniper_F", "", 450000, 7500, "call life_donorlevel >= 1" },
			{ "LMG_mas_Mk200_F", "", 200000, 7500, "call life_donorlevel >= 1" },
			{ "arifle_AK12_GL_F", "", 250000, 30, "call life_donorlevel >= 1" },						//AK-12 GL 7.62mm
			{ "arifle_CTARS_blk_F", "", 280000, 30, "call life_donorlevel >= 1" },						//CAR-95-1 5.8mm(Black)
			{ "akm_aqua", "", 198000, 30, "call life_donorlevel >= 1" },								//AK47|Aqua
			// VIP Level 2
			{ "akm_black_laminate", "", 190000, 30, "call life_donorlevel >= 2" },						//AK47|Black Laminate
			{ "akm_case_hardened", "", 230000, 30, "call life_donorlevel >= 2" },						//AK47|Case Hardened
			{ "akm_desert", "", 190000, 30, "call life_donorlevel >= 2" },								//AK47|Desert Storm
			{ "akm_nuclear", "", 250000, 30, "call life_donorlevel >= 2" },								//AK47|Nuclear Thread
			{ "akm_radiation", "", 250000, 30, "call life_donorlevel >= 2" },							//AK47|Radiation Hazard
			{ "arifle_CTAR_blk_F", "", 150000, 30, "call life_donorlevel >= 2" },						//CAR-95 5.8mm(Black)
			{ "arifle_CTAR_GL_blk_F", "", 150000, 30, "call life_donorlevel >= 2" },					//CAR-95 GL 5.8mm(Black)
			{ "srifle_DMR_07_blk_F", "", 154000, 30, "call life_donorlevel >= 2" },						//CAR-76 6.5mm(Black)
			{ "srifle_DMR_07_ghex_F", "", 254000, 30, "call life_donorlevel >= 2" },
			{ "m4a3_EPOCH", "", 150000, 7500, "call life_donorlevel >= 2" },							//M4A3
			{ "akm_red_laminate", "", 150000, 7500, "call life_donorlevel >= 2" },
			{ "AKM_EPOCH", "", 150000, 7500, "call life_donorlevel >= 2" },								//AKM
			{ "Skyline_AKM_01_F", "", 150000, 7500, "call life_donorlevel >= 2" },						//AKM
			{ "arifle_AKM_F", "", 150000, 7500, "call life_donorlevel >= 2" },							//AKM 7.62mm
			// VIP Level 3
			{ "Skyline_AKM_Compact_01_F", "", 150000, 7500, "call life_donorlevel >= 3" },				//AKM Compact
			{ "arifle_AKS_F", "", 150000, 7500, "call life_donorlevel >= 3" },							//AKS-74U 5.45mm
			{ "arifle_mas_asval", "", 150000, 7500, "call life_donorlevel >= 3" },						//AS VAL
			{ "arifle_mas_asval_ds", "", 150000, 7500, "call life_donorlevel >= 3" },					//AS VAL UW Scuda
			{ "Skyline_B95_01_F", "", 160000, 7500, "call life_donorlevel >= 3" },						//Blaser B95
			{ "Skyline_B95_03_F", "", 160000, 7500, "call life_donorlevel >= 3" },						//Blaser B95(Noir)
			{ "Skyline_B95_02_F", "", 160000, 7500, "call life_donorlevel >= 3" },						//Blaser B95(Vert)
			{ "arifle_CTAR_GL_ghex_F", "", 170000, 7500, "call life_donorlevel >= 3" },					//CAR-95 GL 5.8mm(Green Hex)
			{ "arifle_CTAR_GL_hex_F", "", 170000, 7500, "call life_donorlevel >= 3" },					//CAR-95 GL 5.8mm(Hex)
			{ "srifle_DMR_05_blk_F", "", 200000, 7500, "call life_donorlevel >= 3" },					//Cyrus 9.3mm(Black)
			{ "srifle_DMR_05_hex_F", "", 200000, 7500, "call life_donorlevel >= 3" },					//Cyrus 9.3mm(Hex)
			{ "Skyline_Fal_01_F", "", 200000, 7500, "call life_donorlevel >= 3" },						//FN Fal(Compact)
			{ "srifle_GM6_ghex_F", "", 350000, 7500, "call life_donorlevel >= 3" },						//GM6 Lynx 12.7mm(Green Hex)
			{ "srifle_GM6_F", "", 350000, 7500, "call life_donorlevel >= 3" },							//GM6 Lynx 12.7mm
			{ "arifle_Katiba_C_F", "", 180000, 7500, "call life_donorlevel >= 3" },						//Katida Carbine 6.5mm
			{ "arifle_Katiba_GL_F", "", 180000, 7500, "call life_donorlevel >= 3" },					//Katida GL 6.5mm
			{ "M14_EPOCH", "", 140000, 7500, "call life_donorlevel >= 3" },								//M14
			{ "M14Grn_EPOCH", "", 140000, 7500, "call life_donorlevel >= 3" },							//M14(Green)
			{ "m16_EPOCH", "", 140000, 7500, "call life_donorlevel >= 3" },								//M16
			{ "m16Red_EPOCH", "", 140000, 7500, "call life_donorlevel >= 3" },							//M16(Red)
			// VIP Level 4
			{ "m249_EPOCH", "", 190000, 7500, "call life_donorlevel >= 4" },							//M249
			{ "LMG_mas_M249_F", "", 190000, 7500, "call life_donorlevel >= 4" },						//M249 Para
			{ "LMG_mas_M249_F_d", "", 190000, 7500, "call life_donorlevel >= 4" },						//M249 Para Des
			{ "LMG_mas_M249_F_v", "", 190000, 7500, "call life_donorlevel >= 4" },						//M249 Para Wood
			{ "m249Tan_EPOCH", "", 200000, 7500, "call life_donorlevel >= 4" },							//M249 Tan
			{ "arifle_mas_m27", "", 200000, 7500, "call life_donorlevel >= 4" },						//M27 IAR
			{ "arifle_mas_m27_d", "", 200000, 7500, "call life_donorlevel >= 4" },						//M27 IAR Des				
			{ "arifle_mas_m27m", "", 250000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG
			{ "arifle_mas_m27m_d", "", 250000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG Des
			{ "arifle_mas_m27m_v", "", 100000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG Wood
			{ "arifle_mas_m27_v", "", 100000, 7500, "call life_donorlevel >= 4" },						//M27 IAR Wood
			{ "srifle_LRR_F", "", 450000, 7500, "call life_donorlevel >= 4" },							//M320 LRR .408
			{ "srifle_LRR_tna_F", "", 450000, 7500, "call life_donorlevel >= 4" },						//M320 LRR .408(Tropic)
			{ "srifle_DMR_02_F", "", 150000, 7500, "call life_donorlevel >= 4" },						//MAR-10 .338(Black)
			{ "srifle_DMR_02_camo_F", "", 150000, 7500, "call life_donorlevel >= 4" },					//MAR-10 .338(Camo)
			{ "srifle_DMR_03_F", "", 150000, 7500, "call life_donorlevel >= 4" },						//Mk-| EMR 7.62mm(Black)
			{ "srifle_DMR_03_multicam_F", "", 170000, 7500, "call life_donorlevel >= 4" },				//Mk-| EMR 7.62mm(Camo)
			{ "srifle_DMR_03_khaki_F", "", 180000, 7500, "call life_donorlevel >= 4" },					//Mk-| EMR 7.62mm(Khaki)
			{ "srifle_DMR_03_tan_F", "", 170000, 7500, "call life_donorlevel >= 4" },					//Mk-| EMR 7.62mm(Sand)
			// VIP Level 5
			{ "srifle_DMR_03_woodland_F", "", 150000, 7500, "call life_donorlevel >= 5" },				//Mk-| EMR 7.62mm(Woodland)
			{ "srifle_DMR_06_camo_F", "", 150000, 7500, "call life_donorlevel >= 5" },					//Mk14 7.62mm(Camo)
			{ "srifle_DMR_06_olive_F", "", 150000, 7500, "call life_donorlevel >= 5" },					//Mk14 7.62mm(Olive)
			{ "srifle_EBR_F", "", 150000, 7500, "call life_donorlevel >= 5" },							//Mk18 ABR 7.62mm
			{ "arifle_Mk20_plain_F", "", 150000, 7500, "call life_donorlevel >= 5" },					//Mk20 5.56mm
			{ "arifle_Mk20_F", "", 150000, 7500, "call life_donorlevel >= 5" },							//Mk20 5.56mm(Camo)
			{ "arifle_Mk20_GL_plain_F", "", 150000, 7500, "call life_donorlevel >= 5" },				//Mk20 EGLM 5.56mm
			{ "arifle_Mk20_GL_F", "", 200000, 7500, "call life_donorlevel >= 5" },						//Mk20 EGLM 5.56mm(Camo)
			{ "arifle_Mk20C_plain_F", "", 200000, 7500, "call life_donorlevel >= 5" },					//Mk20C 5.56mm
			{ "arifle_Mk20C_F", "", 200000, 7500, "call life_donorlevel >= 5" },						//Mk20C 5.56mm(Camo)
			{ "Skyline_Mosin9130_01_F", "", 160000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130
			{ "Skyline_Mosin9130_03_F", "", 160000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130(Camo)
			{ "Skyline_Mosin9130_02_F", "", 160000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130(Noir)
			{ "Skyline_Mosin9130_04_F", "", 140000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130(Vert)
			{ "Skyline_Mosin9130_Bayonette_01_F", "", 140000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130(Bayonette)
			{ "Skyline_Mosin9130_Bayonette_03_F", "", 140000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Camo)
			{ "Skyline_Mosin9130_Bayonette_02_F", "", 130000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Noir)
			{ "Skyline_Mosin9130_Bayonette_04_F", "", 130000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Vert)
			{ "arifle_mas_mp5sd", "", 130000, 7500, "call life_donorlevel >= 5" },						//MP5SD6
			{ "arifle_mas_mp5sd_ds", "", 130000, 7500, "call life_donorlevel >= 5" },					//MP5SD6 UW Scuba
			{ "arifle_MX_GL_Black_F", "", 100000, 7500, "call life_donorlevel >= 5" },					//MX 3GL 6.5mm(Black)
			{ "arifle_MX_GL_khk_F", "", 100000, 7500, "call life_donorlevel >= 5" },					//MX 3GL 6.5mm(Khaki)
			{ "arifle_MX_GL_F", "", 100000, 7500, "call life_donorlevel >= 5" },						//MX 3GL 6.5mm
			{ "arifle_MX_Black_F", "", 100000, 7500, "call life_donorlevel >= 5" },						//MX 6.5mm(Black)
			{ "arifle_MX_khk_F", "", 110000, 7500, "call life_donorlevel >= 5" },						//MX 6.5mm(Khaki)
			{ "arifle_MX_F", "", 110000, 7500, "call life_donorlevel >= 5" },							//MX 6.5mm
			{ "arifle_MX_SW_Black_F", "", 110000, 7500, "call life_donorlevel >= 5" },					//MX SW 6.5mm(Black)
			{ "arifle_MX_SW_khk_F", "", 110000, 7500, "call life_donorlevel >= 5" },					//MX SW 6.5mm(Khaki)
			// Muzzle
			{ "muzzle_snds_B", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_B_khk_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SH", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SHc", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_58_blk_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_65_TI_hex_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_H_snd_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_93mmg_tan", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_KSVK", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SVc", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_L", "", 5000, 100, "call life_donorlevel >= 5" },
			{ "muzzle_snds_H", "", 5000, 100, "call life_donorlevel >= 5" },
			{ "muzzle_snds_338_sand", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_B_snd_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_asval", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_65_TI_blk_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_65_TI_ghex_F", "", 5000, 500, "call life_donorlevel >= 5" }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 5000, 100, "" },
            { "30Rnd_65x39_caseless_green", "", 5000, 100, "" },
            { "10Rnd_762x54_Mag", "", 5000, 100, "" },
			{ "30Rnd_762x39_Mag_F", "", 5000, 200, "" },
			{ "30Rnd_mas_762x39_mag", "", 5000, 50, "" },
			{ "10Rnd_mas_338_Stanag", "", 7500, 500, "" },
			{ "64Rnd_mas_9x18_mag", "", 5000, 200, "" },
			{ "100Rnd_580x42_Mag_F", "", 5000, 200, "" },
			{ "30Rnd_580x42_Mag_F", "", 5000, 50, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 5000, 500, "" },
			{ "20Rnd_mas_762x51_Stanag", "", 5000, 50, "" },
			{ "5Rnd_mas_127x108_mag", "", 5000, 500, "" },
			{ "5Rnd_127x108_Mag", "", 5000, 500, "" },
			{ "200Rnd_556x45_Box_F", "", 5000, 500, "" },
			{ "5Rnd_mas_762x51_Stanag", "", 5000, 50, "" },
			{ "100Rnd_mas_762x51_Stanag", "", 5000, 500, "" },
			{ "7Rnd_408_Mag", "", 5000, 500, "" },
			{ "200Rnd_65x39_cased_Box", "", 5000, 500, "" },
			{ "30Rnd_mas_545x39_mag", "", 5000, 500, "" },
			{ "30Rnd_762x51_Fal", "", 5000, 7500, "" },
			{ "41630mk262_mag", "", 5000, 7500, "" },
            { "20Rnd_556x45_UW_mag", "", 5000, 50, "" },
			{ "10Rnd_127x54_Mag", "", 5000, 50, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 5000, 50, "" },
			{ "10Rnd_338_Mag", "", 5000, 50, "" },
			{ "30Rnd_762x39_Mag", "", 5000, 7500, "" },
			{ "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 5000, 100, "" },
            { "30Rnd_9x21_Mag", "", 5000, 100, "" },
            { "9Rnd_45ACP_Mag", "", 5000, 100, "" },
			{ "5Rnd_mas_127x99_Stanag", "", 5000, -1, "" },
			{ "200Rnd_mas_556x45_Stanag", "", 5000, -1, "" },
			{ "30Rnd_mas_9x21sd_Stanag", "", 5000, -1, "" },
			{ "25Rnd_45ACP_Mag", "", 5000, 100, "" },
			{ "30Rnd_mas_556x45_Stanag", "", 5000, 100, "" },
			{ "20Rnd_762x51_Mag", "", 5000, 100, "" },
			{ "71Rnd_mas_762x25_mag", "", 5000, 100, "" },
			{ "30Rnd_mas_9x21_Stanag", "", 5000, 100, "" },
			{ "10Rnd_mas_338sd_Stanag", "", 5000, 100, "" },
			{ "200Rnd_556x45_M249", "", 5000, 100, "" },
			{ "10Rnd_mas_762x54_mag", "", 5000, 100, "" },
			{ "20Rnd_mas_12Gauge_Slug", "", 5000, 100, "" },
			{ "7Rnd_mas_12Gauge_Slug", "", 5000, 100, "" },
			{ "7Rnd_mas_12Gauge_Pellets", "", 5000, 100, "" },
			{ "150Rnd_762x51_Box", "", 5000, 100, "" },
			{ "100Rnd_mas_762x54_mag", "", 5000, 100, "" },
			{ "130Rnd_338_Mag", "", 5000, 100, "" },
			{ "150Rnd_mas_556x45_Stanag", "", 5000, 100, "" },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 5000, -1, "" },	
			{ "Fett_20Rnd_556x45_UW_mag", "", 5000, -1, "" },
			{ "150Rnd_762x54_Box", "", 5000, 50, "" }
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 100, "" },
            { "optic_Holosight", "", 3600, 100, "" },
            { "optic_Hamr", "", 7500, 100, "" },
			{ "optic_AMS", "", 200, 50, "" },
			{ "optic_Arco", "", 200, 50, "" },
			{ "optic_DMS", "", 200, 50, "" },
			{ "optic_ERCO_blk_F", "", 200, 50, "" },
			{ "optic_LRPS", "", 200, 50, "" },
			{ "optic_KHS_blk", "", 200, 50, "" },
			{ "optic_KHS_old", "", 200, 50, "" },
			{ "optic_LRPS_ghex_F", "", 200, 50, "" },
			{ "optic_Holosight_smg_blk_F", "", 200, 50, "" },
			{ "optic_SOS", "", 200, 50, "" },
			{ "optic_MRCO", "", 200, 50, "" },
			{ "optic_Hamr_khk_F", "", 200, 50, "" },
			{ "bipod_03_F_blk", "", 200, 50, "" },
			{ "bipod_02_F_blk", "", 200, 50, "" },
			{ "bipod_01_F_blk", "", 200, 50, "" },
			{ "bipod_02_F_hex", "", 200, 50, "" },
			{ "acc_pointer_IR", "", 200, 50, "" },
			{ "optic_NVS", "", 7000, -1, "" },
            { "acc_flashlight", "", 1000, 100, "" },
			{ "muzzle_snds_B", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_snds_B_khk_F", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_mas_snds_SH", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_mas_snds_SHc", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_snds_58_blk_F", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_snds_65_TI_hex_F", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_snds_H_snd_F", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_snds_93mmg_tan", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_mas_snds_KSVK", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_mas_snds_SVc", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_snds_L", "", 5000, 100, "call life_donorlevel >= 3" },
			{ "muzzle_snds_H", "", 5000, 100, "call life_donorlevel >= 3" },
			{ "muzzle_snds_338_sand", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_snds_B_snd_F", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_mas_snds_asval", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_snds_65_TI_blk_F", "", 5000, 500, "call life_donorlevel >= 3" },
			{ "muzzle_snds_65_TI_ghex_F", "", 5000, 500, "call life_donorlevel >= 3" }
        };
    };
	
	class merc {
        name = "MercenaryShop";
        side = "civ";
        conditions = "license_civ_merc";
        items[] = {
			{ "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 1200, 580, "" },
			{ "Rangefinder", "", 1000, 580, "" },
            { "arifle_TRG20_F", "", 25000, 2500, "" },
			{ "30Rnd_556x45_Stanag", "", 300, 100, "" },
            { "arifle_Katiba_F", "", 30000, 5000, "" },
			{ "30Rnd_65x39_caseless_green", "", 275, 10, "" },
			{ "arifle_mas_ak_74m_sf", "", 120000, 1000, "" },
			{ "30Rnd_mas_545x39_mag", "", 500, 10, "" },
			{ "arifle_CTARS_blk_F", "", 160000, 1000, "" },
			{ "100Rnd_580x42_Mag_F", "", 1500, 10, "" },
			{ "arifle_mas_fal", "", 200000, 1000, "" },
			{ "20Rnd_mas_762x51_Stanag", "", 1000, 10, "" },
			{ "arifle_mas_g3s", "", 200000, 1000, "" },
			{ "20Rnd_mas_762x51_Stanag", "", 1000, 10, "" },
			{ "ej_hk41610_160th", "", 120000, 1000, "" },
			{ "srifle_mas_hk417", "", 22000, 1000, "" },
			{ "20Rnd_mas_762x51_Stanag", "", 1000, 10, "" },
			{ "arifle_mas_l119c", "", 120000, 10, "" },
			{ "30Rnd_mas_556x45_Stanag", "", 1000, 10, "" },
			{ "arifle_mas_m4", "", 120000, 10, "" },
			{ "30Rnd_mas_556x45_Stanag", "", 1000, 10, "" },
			{ "LMG_mas_M249_F", "", 220000, 10, "" },
			{ "200Rnd_mas_556x45_Stanag", "", 1000, 10, "" },
			{ "100Rnd_mas_762x51_Stanag", "", 1000, 10, "" },
			{ "srifle_LRR_F", "", 1500000, 10, "" },
			{ "7Rnd_408_Mag", "", 3000, 10, "" },
			{ "srifle_GM6_F", "", 2500000, 10, "" },
			{ "5Rnd_mas_127x99_Stanag", "", 8500, 10, "" },
			{ "5Rnd_127x108_Mag", "", 1000, 10, "" },
			{ "RH_kimber_nw", "", 50000, 10, "" },
			{ "RH_7Rnd_45cal_m1911", "", 5000, 10, "" },
			{ "arifle_mas_mp5sd", "", 200000, 10, "" },
			{ "30Rnd_mas_9x21_Stanag", "", 5000, 10, "" },
			{ "arifle_mas_mk16_l", "", 280000, 10, "" },
			{ "30Rnd_mas_556x45_Stanag", "", 5000, 10, "" },
			{ "arifle_mas_arx", "", 250000, 10, "" },
			{ "30Rnd_mas_556x45_Stanag", "", 5000, 10, "" },
		    { "arifle_mas_mk17", "", 50000, 10, "" },
		    { "20Rnd_mas_762x51_Stanag", "", 5000, 10, "" },
			{ "arifle_mas_m4vlt", "", 150000, 10, "" }, 
			{ "30Rnd_mas_556x45_Stanag", "", 5000, 10, "" },
			{ "srifle_DMR_02_camo_F", "", 700000, 10, "" },
			{ "10Rnd_338_Mag", "", 7500, 10, "" },
			{ "arifle_SPAR_01_snd_F", "", 180000, 10, "" },
			{ "30Rnd_556x45_Stanag", "", 5000, 10, "" },
			{ "optic_ACO_grn", "", 200, 50, "" },
			{ "optic_AMS", "", 200, 50, "" },
			{ "optic_Arco", "", 200, 50, "" },
			{ "optic_DMS", "", 200, 50, "" },
			{ "optic_ERCO_blk_F", "", 200, 50, "" },
			{ "optic_LRPS", "", 200, 50, "" },
			{ "optic_KHS_blk", "", 200, 50, "" },
			{ "optic_KHS_old", "", 200, 50, "" },
			{ "optic_LRPS_ghex_F", "", 200, 50, "" },
			{ "optic_Holosight_smg_blk_F", "", 200, 50, "" },
			{ "optic_SOS", "", 200, 50, "" },
			{ "optic_MRCO", "", 200, 50, "" },
			{ "optic_Hamr", "", 200, 50, "" },
			{ "optic_Hamr_khk_F", "", 200, 50, "" },
			{ "bipod_03_F_blk", "", 200, 50, "" },
			{ "bipod_02_F_blk", "", 200, 50, "" },
			{ "bipod_01_F_blk", "", 200, 50, "" },
			{ "bipod_02_F_hex", "", 200, 50, "" },
			{ "acc_pointer_IR", "", 200, 50, "" },
			{ "acc_flashlight", "", 200, 50, "" },																				
			// VIP
			{ "srifle_DMR_04_Tan_F", "", 200000, 7500, "call life_donorlevel >= 2" },
			{ "10Rnd_127x54_Mag", "", 200, 50, "call life_donorlevel >= 2" },
			{ "srifle_DMR_05_tan_f", "", 300000, 7500, "call life_donorlevel >= 2" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 200, 50, "call life_donorlevel >= 2" },
			{ "srifle_DMR_02_sniper_F", "", 450000, 7500, "call life_donorlevel >= 2" },
			{ "10Rnd_338_Mag", "", 200, 50, "call life_donorlevel >= 2" },
			{ "100Rnd_mas_762x51_Stanag", "", 200, 50, "call life_donorlevel >= 2" },
			{ "100Rnd_mas_762x51_Stanag", "", 200, 50, "call life_donorlevel >= 2" },
			{ "LMG_mas_Mk200_F", "", 200000, 7500, "call life_donorlevel >= 2" },
			{ "200Rnd_mas_556x45_Stanag", "", 200, 50, "call life_donorlevel >= 2" },
			{ "150Rnd_762x54_Box", "", 200, 50, "call life_donorlevel >= 2" },
			{ "muzzle_mas_snds_SH", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SHc", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_B", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_B_khk_F", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_B", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_58_blk_F", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_H", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_65_TI_hex_F", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_H_snd_F", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_93mmg_tan", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_KSVK", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SVc", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_338_sand", "", 2000, 500, "call life_donorlevel >= 5" },
			{ "arifle_TRG20_F", "", 25000, 2500, "call life_donorlevel >= 2" },
			{ "30Rnd_556x45_Stanag", "", 300, 100, "call life_donorlevel >= 2" },
            { "arifle_Katiba_F", "", 30000, 5000, "call life_donorlevel >= 2" },
			{ "30Rnd_65x39_caseless_green", "", 275, 100, "call life_donorlevel >= 2" },
            { "srifle_DMR_01_F", "", 50000, -1, "call life_donorlevel >= 2" },
			{ "10Rnd_762x54_Mag", "", 500, 100, "call life_donorlevel >= 2" },
            { "arifle_SDAR_F", "", 20000, 7500, "call life_donorlevel >= 2" },
			{ "20Rnd_556x45_UW_mag", "", 125, 100, "call life_donorlevel >= 2" },
			{ "arifle_AK12_F", "", 350000, 7500, "call life_donorlevel >= 2" },
			{ "30Rnd_762x39_Mag_F", "", 500, 300, "call life_donorlevel >= 2" },
			{ "arifle_mas_akms_c", "", 300000, 7500, "call life_donorlevel >= 2" },
			{ "30Rnd_mas_762x39_mag", "", 200, 150, "call life_donorlevel >= 2" },
			{ "AWP_SRG_Desert", "", 500000, 7500, "call life_donorlevel >= 2" },
			{ "10Rnd_mas_338_Stanag", "", 2000, 500, "call life_donorlevel >= 2" },
			{ "arifle_mas_bizon", "", 200000, 7500, "call life_donorlevel >= 2" },
			{ "64Rnd_mas_9x18_mag", "", 1000, 200, "call life_donorlevel >= 2" },
			{ "arifle_CTARS_hex_F", "", 20000, 7500, "call life_donorlevel >= 2" },
			{ "100Rnd_580x42_Mag_F", "", 5000, 500, "call life_donorlevel >= 2" },
			{ "arifle_CTAR_hex_F", "", 150000, 7500, "call life_donorlevel >= 2" },
			{ "30Rnd_580x42_Mag_F", "", 200, 50, "call life_donorlevel >= 2" },
			{ "srifle_DMR_07_hex_F", "", 150000, 7500, "call life_donorlevel >= 2" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 2000, 500, "call life_donorlevel >= 2" },
			{ "arifle_mas_g3", "", 170000, 7500, "call life_donorlevel >= 2" },
			{ "20Rnd_mas_762x51_Stanag", "", 200, 50, "call life_donorlevel >= 2" },
			{ "srifle_GM6_camo_F", "", 1800000, 7500, "call life_donorlevel >= 2" },
			{ "5Rnd_127x108_Mag", "", 2000, 500, "call life_donorlevel >= 2" },
			{ "srifle_mas_ksvk_c", "", 2000000, 7500, "call life_donorlevel >= 2" },
			{ "5Rnd_mas_127x108_mag", "", 2000, 500, "call life_donorlevel >= 2" },
			{ "LMG_03_F", "", 700000, 7500, "call life_donorlevel >= 2" },
			{ "200Rnd_556x45_Box_F", "", 2000, 500, "call life_donorlevel >= 2" },
			{ "5Rnd_127x108_Mag", "", 2000, 500, "call life_donorlevel >= 2" },
			{ "srifle_mas_m110", "", 480000, 7500, "call life_donorlevel >= 2" },
			{ "20Rnd_mas_762x51_Stanag", "", 200, 50, "call life_donorlevel >= 2" },
			{ "srifle_mas_ebr", "", 460000, 7500, "call life_donorlevel >= 2" },
			{ "20Rnd_mas_762x51_Stanag", "", 20000, 500, "call life_donorlevel >= 2" },
			{ "srifle_mas_m24_d", "", 700000, 7500, "call life_donorlevel >= 2" },
			{ "5Rnd_mas_762x51_Stanag", "", 200, 50, "call life_donorlevel >= 2" },
			{ "100Rnd_mas_762x51_Stanag", "", 2000, 500, "call life_donorlevel >= 2" },
			{ "LMG_mas_M249a_F", "", 800000, 7500, "call life_donorlevel >= 2" },
			{ "200Rnd_mas_556x45_Stanag", "", 2000, 500, "call life_donorlevel >= 2" },
			{ "srifle_LRR_camo_F", "", 2100000, 7500, "call life_donorlevel >= 2" },
			{ "7Rnd_408_Mag", "", 2000, 500, "call life_donorlevel >= 2" },
			{ "LMG_Mk200_F", "", 760000, 7500, "call life_donorlevel >= 2" },
			{ "200Rnd_65x39_cased_Box", "", 2000, 500, "call life_donorlevel >= 2" },
			{ "optic_ACO_grn", "", 200, 50, "call life_donorlevel >= 2" },
			{ "optic_AMS", "", 200, 50, "call life_donorlevel >= 2" },
			{ "optic_Arco", "", 200, 50, "call life_donorlevel >= 2" },
			{ "optic_DMS", "", 200, 50, "call life_donorlevel >= 2" },
			{ "optic_ERCO_blk_F", "", 200, 50, "call life_donorlevel >= 2" },
			{ "optic_LRPS", "", 200, 50, "call life_donorlevel >= 2" },
			{ "optic_KHS_blk", "", 200, 50, "call life_donorlevel >= 2" },
			{ "optic_KHS_old", "", 200, 50, "call life_donorlevel >= 2" },
			{ "optic_LRPS_ghex_F", "", 200, 50, "call life_donorlevel >= 2" },
			{ "optic_Holosight_smg_blk_F", "", 200, 50, "call life_donorlevel >= 2" },
			{ "optic_SOS", "", 200, 50, "call life_donorlevel >= 2" },
			{ "optic_MRCO", "", 200, 50, "call life_donorlevel >= 2" },
			{ "optic_Hamr_khk_F", "", 200, 50, "call life_donorlevel >= 2" },
			{ "bipod_03_F_blk", "", 200, 50, "call life_donorlevel >= 2" },
			{ "bipod_02_F_blk", "", 200, 50, "call life_donorlevel >= 2" },
			{ "bipod_01_F_blk", "", 200, 50, "call life_donorlevel >= 2" },
			{ "bipod_02_F_hex", "", 200, 50, "call life_donorlevel >= 2" },
			{ "acc_pointer_IR", "", 200, 50, "call life_donorlevel >= 2" },
			{ "acc_flashlight", "", 200, 50, "call life_donorlevel >= 2" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1, "" },
            { "hgun_ACPC2_F", "", 4500, -1, "" },
            { "hgun_PDW2000_F", "", 9500, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "6Rnd_45ACP_Cylinder", "", 50, 100, "" },
            { "9Rnd_45ACP_Mag", "", 45, 100, "" },
            { "30Rnd_9x21_Mag", "", 75, 100, "" }
        };
        accs[] = {
			{ "optic_ACO_grn", "", 3500, 100, "" },
            { "optic_Holosight", "", 3600, 100, "" },
            { "optic_Hamr", "", 7500, 100, "" },
			{ "optic_AMS", "", 200, 50, "" },
			{ "optic_Arco", "", 200, 50, "" },
			{ "optic_DMS", "", 200, 50, "" },
			{ "optic_ERCO_blk_F", "", 200, 50, "" },
			{ "optic_LRPS", "", 200, 50, "" },
			{ "optic_KHS_blk", "", 200, 50, "" },
			{ "optic_KHS_old", "", 200, 50, "" },
			{ "optic_LRPS_ghex_F", "", 200, 50, "" },
			{ "optic_Holosight_smg_blk_F", "", 200, 50, "" },
			{ "optic_SOS", "", 200, 50, "" },
			{ "optic_MRCO", "", 200, 50, "" },
			{ "optic_Hamr_khk_F", "", 200, 50, "" },
			{ "bipod_03_F_blk", "", 200, 50, "" },
			{ "bipod_02_F_blk", "", 200, 50, "" },
			{ "bipod_01_F_blk", "", 200, 50, "" },
			{ "bipod_02_F_hex", "", 200, 50, "" },
			{ "acc_pointer_IR", "", 200, 50, "" },
            { "acc_flashlight", "", 1000, 100, "" },
			{ "optic_NVS", "", 7000, -1, "" },
            { "optic_ACO_grn_smg", "", 950, 100, "" }
        };
    };    
	class mercenary {
        name = "Weapon Shop";
        side = "adac";
        conditions = "";
        items[] = {
			{ "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 1200, 580, "" },
			{ "Rangefinder", "", 1000, 580, "" },
			{ "Skyline_Fal_03_F", "", 60000, -1, "" },			// FN Fal(Camo Ghillie)
			{ "arifle_Katiba_F", "", 50000, -1, "" },			// Katiba 6.5 mm
			{ "arifle_AKM_F", "", 85000, -1, "" },				// AKM 7.62 mm
			{ "srifle_DMR_06_olive_F", "", 45000, -1, "" },		// Mk14 7.62 mm (Olive)
			{ "srifle_LRR_tna_F", "", 550000, -1, "" },			// M320 LRR .408 (Tropic)
			{ "srifle_GM6_F", "", 550000, -1, "" },				// GM 6 Lynx 12.7 mm
            { "hgun_Rook40_F", "", 1500, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, -1, "" },
            { "hgun_ACPC2_F", "", 4500, -1, "" },
            { "hgun_PDW2000_F", "", 9500, -1, "" },
			{ "AWP_Lightning_strike", "", 600000, 7500, ""},
			{ "AWP_Boom", "", 600000, 7500, ""},
			{ "AWP_Asiimov", "", 600000, 7500, ""},
			{ "AWP_SRG_Desert", "", 900000, 7500, ""},
			// VIP Level 1
			{ "srifle_DMR_04_Tan_F", "", 200000, 7500, "call life_donorlevel >= 1" },					//ASP-1 Kir 12.7mm(Tan)
			{ "srifle_DMR_05_tan_f", "", 300000, 7500, "call life_donorlevel >= 1" },					//Cyrus 9.3mm(Tan)
			{ "srifle_DMR_02_sniper_F", "", 450000, 7500, "call life_donorlevel >= 1" },
			{ "LMG_mas_Mk200_F", "", 200000, 7500, "call life_donorlevel >= 1" },
			{ "arifle_AK12_GL_F", "", 250000, 30, "call life_donorlevel >= 1" },						//AK-12 GL 7.62mm
			{ "arifle_CTARS_blk_F", "", 280000, 30, "call life_donorlevel >= 1" },						//CAR-95-1 5.8mm(Black)
			{ "akm_aqua", "", 198000, 30, "call life_donorlevel >= 1" },								//AK47|Aqua
			// VIP Level 2
			{ "akm_black_laminate", "", 190000, 30, "call life_donorlevel >= 2" },						//AK47|Black Laminate
			{ "akm_case_hardened", "", 230000, 30, "call life_donorlevel >= 2" },						//AK47|Case Hardened
			{ "akm_desert", "", 190000, 30, "call life_donorlevel >= 2" },								//AK47|Desert Storm
			{ "akm_nuclear", "", 250000, 30, "call life_donorlevel >= 2" },								//AK47|Nuclear Thread
			{ "akm_radiation", "", 250000, 30, "call life_donorlevel >= 2" },							//AK47|Radiation Hazard
			{ "arifle_CTAR_blk_F", "", 150000, 30, "call life_donorlevel >= 2" },						//CAR-95 5.8mm(Black)
			{ "arifle_CTAR_GL_blk_F", "", 150000, 30, "call life_donorlevel >= 2" },					//CAR-95 GL 5.8mm(Black)
			{ "srifle_DMR_07_blk_F", "", 154000, 30, "call life_donorlevel >= 2" },						//CAR-76 6.5mm(Black)
			{ "srifle_DMR_07_ghex_F", "", 254000, 30, "call life_donorlevel >= 2" },
			{ "m4a3_EPOCH", "", 150000, 7500, "call life_donorlevel >= 2" },							//M4A3
			{ "akm_red_laminate", "", 150000, 7500, "call life_donorlevel >= 2" },
			{ "AKM_EPOCH", "", 150000, 7500, "call life_donorlevel >= 2" },								//AKM
			{ "Skyline_AKM_01_F", "", 150000, 7500, "call life_donorlevel >= 2" },						//AKM
			{ "arifle_AKM_F", "", 150000, 7500, "call life_donorlevel >= 2" },							//AKM 7.62mm
			// VIP Level 3
			{ "Skyline_AKM_Compact_01_F", "", 150000, 7500, "call life_donorlevel >= 3" },				//AKM Compact
			{ "arifle_AKS_F", "", 150000, 7500, "call life_donorlevel >= 3" },							//AKS-74U 5.45mm
			{ "arifle_mas_asval", "", 150000, 7500, "call life_donorlevel >= 3" },						//AS VAL
			{ "arifle_mas_asval_ds", "", 150000, 7500, "call life_donorlevel >= 3" },					//AS VAL UW Scuda
			{ "Skyline_B95_01_F", "", 160000, 7500, "call life_donorlevel >= 3" },						//Blaser B95
			{ "Skyline_B95_03_F", "", 160000, 7500, "call life_donorlevel >= 3" },						//Blaser B95(Noir)
			{ "Skyline_B95_02_F", "", 160000, 7500, "call life_donorlevel >= 3" },						//Blaser B95(Vert)
			{ "arifle_CTAR_GL_ghex_F", "", 170000, 7500, "call life_donorlevel >= 3" },					//CAR-95 GL 5.8mm(Green Hex)
			{ "arifle_CTAR_GL_hex_F", "", 170000, 7500, "call life_donorlevel >= 3" },					//CAR-95 GL 5.8mm(Hex)
			{ "srifle_DMR_05_blk_F", "", 200000, 7500, "call life_donorlevel >= 3" },					//Cyrus 9.3mm(Black)
			{ "srifle_DMR_05_hex_F", "", 200000, 7500, "call life_donorlevel >= 3" },					//Cyrus 9.3mm(Hex)
			{ "Skyline_Fal_01_F", "", 200000, 7500, "call life_donorlevel >= 3" },						//FN Fal(Compact)
			{ "srifle_GM6_ghex_F", "", 350000, 7500, "call life_donorlevel >= 3" },						//GM6 Lynx 12.7mm(Green Hex)
			{ "srifle_GM6_F", "", 350000, 7500, "call life_donorlevel >= 3" },							//GM6 Lynx 12.7mm
			{ "arifle_Katiba_C_F", "", 180000, 7500, "call life_donorlevel >= 3" },						//Katida Carbine 6.5mm
			{ "arifle_Katiba_GL_F", "", 180000, 7500, "call life_donorlevel >= 3" },					//Katida GL 6.5mm
			{ "M14_EPOCH", "", 140000, 7500, "call life_donorlevel >= 3" },								//M14
			{ "M14Grn_EPOCH", "", 140000, 7500, "call life_donorlevel >= 3" },							//M14(Green)
			{ "m16_EPOCH", "", 140000, 7500, "call life_donorlevel >= 3" },								//M16
			{ "m16Red_EPOCH", "", 140000, 7500, "call life_donorlevel >= 3" },							//M16(Red)
			// VIP Level 4
			{ "m249_EPOCH", "", 190000, 7500, "call life_donorlevel >= 4" },							//M249
			{ "LMG_mas_M249_F", "", 190000, 7500, "call life_donorlevel >= 4" },						//M249 Para
			{ "LMG_mas_M249_F_d", "", 190000, 7500, "call life_donorlevel >= 4" },						//M249 Para Des
			{ "LMG_mas_M249_F_v", "", 190000, 7500, "call life_donorlevel >= 4" },						//M249 Para Wood
			{ "m249Tan_EPOCH", "", 200000, 7500, "call life_donorlevel >= 4" },							//M249 Tan
			{ "arifle_mas_m27", "", 200000, 7500, "call life_donorlevel >= 4" },						//M27 IAR
			{ "arifle_mas_m27_d", "", 200000, 7500, "call life_donorlevel >= 4" },						//M27 IAR Des				
			{ "arifle_mas_m27m", "", 250000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG
			{ "arifle_mas_m27m_d", "", 250000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG Des
			{ "arifle_mas_m27m_v", "", 100000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG Wood
			{ "arifle_mas_m27_v", "", 100000, 7500, "call life_donorlevel >= 4" },						//M27 IAR Wood
			{ "srifle_LRR_F", "", 450000, 7500, "call life_donorlevel >= 4" },							//M320 LRR .408
			{ "srifle_LRR_tna_F", "", 450000, 7500, "call life_donorlevel >= 4" },						//M320 LRR .408(Tropic)
			{ "srifle_DMR_02_F", "", 150000, 7500, "call life_donorlevel >= 4" },						//MAR-10 .338(Black)
			{ "srifle_DMR_02_camo_F", "", 150000, 7500, "call life_donorlevel >= 4" },					//MAR-10 .338(Camo)
			{ "srifle_DMR_03_F", "", 150000, 7500, "call life_donorlevel >= 4" },						//Mk-| EMR 7.62mm(Black)
			{ "srifle_DMR_03_multicam_F", "", 170000, 7500, "call life_donorlevel >= 4" },				//Mk-| EMR 7.62mm(Camo)
			{ "srifle_DMR_03_khaki_F", "", 180000, 7500, "call life_donorlevel >= 4" },					//Mk-| EMR 7.62mm(Khaki)
			{ "srifle_DMR_03_tan_F", "", 170000, 7500, "call life_donorlevel >= 4" },					//Mk-| EMR 7.62mm(Sand)
			// VIP Level 5
			{ "srifle_DMR_03_woodland_F", "", 150000, 7500, "call life_donorlevel >= 5" },				//Mk-| EMR 7.62mm(Woodland)
			{ "srifle_DMR_06_camo_F", "", 150000, 7500, "call life_donorlevel >= 5" },					//Mk14 7.62mm(Camo)
			{ "srifle_DMR_06_olive_F", "", 150000, 7500, "call life_donorlevel >= 5" },					//Mk14 7.62mm(Olive)
			{ "srifle_EBR_F", "", 150000, 7500, "call life_donorlevel >= 5" },							//Mk18 ABR 7.62mm
			{ "arifle_Mk20_plain_F", "", 150000, 7500, "call life_donorlevel >= 5" },					//Mk20 5.56mm
			{ "arifle_Mk20_F", "", 150000, 7500, "call life_donorlevel >= 5" },							//Mk20 5.56mm(Camo)
			{ "arifle_Mk20_GL_plain_F", "", 150000, 7500, "call life_donorlevel >= 5" },				//Mk20 EGLM 5.56mm
			{ "arifle_Mk20_GL_F", "", 200000, 7500, "call life_donorlevel >= 5" },						//Mk20 EGLM 5.56mm(Camo)
			{ "arifle_Mk20C_plain_F", "", 200000, 7500, "call life_donorlevel >= 5" },					//Mk20C 5.56mm
			{ "arifle_Mk20C_F", "", 200000, 7500, "call life_donorlevel >= 5" },						//Mk20C 5.56mm(Camo)
			{ "Skyline_Mosin9130_01_F", "", 160000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130
			{ "Skyline_Mosin9130_03_F", "", 160000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130(Camo)
			{ "Skyline_Mosin9130_02_F", "", 160000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130(Noir)
			{ "Skyline_Mosin9130_04_F", "", 140000, 7500, "call life_donorlevel >= 5" },				//Mosin 9130(Vert)
			{ "Skyline_Mosin9130_Bayonette_01_F", "", 140000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130(Bayonette)
			{ "Skyline_Mosin9130_Bayonette_03_F", "", 140000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Camo)
			{ "Skyline_Mosin9130_Bayonette_02_F", "", 130000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Noir)
			{ "Skyline_Mosin9130_Bayonette_04_F", "", 130000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Vert)
			{ "arifle_mas_mp5sd", "", 130000, 7500, "call life_donorlevel >= 5" },						//MP5SD6
			{ "arifle_mas_mp5sd_ds", "", 130000, 7500, "call life_donorlevel >= 5" },					//MP5SD6 UW Scuba
			{ "arifle_MX_GL_Black_F", "", 100000, 7500, "call life_donorlevel >= 5" },					//MX 3GL 6.5mm(Black)
			{ "arifle_MX_GL_khk_F", "", 100000, 7500, "call life_donorlevel >= 5" },					//MX 3GL 6.5mm(Khaki)
			{ "arifle_MX_GL_F", "", 100000, 7500, "call life_donorlevel >= 5" },						//MX 3GL 6.5mm
			{ "arifle_MX_Black_F", "", 100000, 7500, "call life_donorlevel >= 5" },						//MX 6.5mm(Black)
			{ "arifle_MX_khk_F", "", 110000, 7500, "call life_donorlevel >= 5" },						//MX 6.5mm(Khaki)
			{ "arifle_MX_F", "", 110000, 7500, "call life_donorlevel >= 5" },							//MX 6.5mm
			{ "arifle_MX_SW_Black_F", "", 110000, 7500, "call life_donorlevel >= 5" },					//MX SW 6.5mm(Black)
			{ "arifle_MX_SW_khk_F", "", 110000, 7500, "call life_donorlevel >= 5" },					//MX SW 6.5mm(Khaki)
			// Muzzle
			{ "muzzle_snds_B", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_B_khk_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SH", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SHc", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_58_blk_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_65_TI_hex_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_H_snd_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_93mmg_tan", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_KSVK", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SVc", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_L", "", 5000, 100, "call life_donorlevel >= 5" },
			{ "muzzle_snds_H", "", 5000, 100, "call life_donorlevel >= 5" },
			{ "muzzle_snds_338_sand", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_B_snd_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_asval", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_65_TI_blk_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_65_TI_ghex_F", "", 5000, 500, "call life_donorlevel >= 5" }
        };
        mags[] = {
             { "30Rnd_556x45_Stanag", "", 5000, 100, "" },
            { "30Rnd_65x39_caseless_green", "", 5000, 100, "" },
            { "10Rnd_762x54_Mag", "", 5000, 100, "" },
			{ "30Rnd_762x39_Mag_F", "", 5000, 200, "" },
			{ "30Rnd_mas_762x39_mag", "", 5000, 50, "" },
			{ "10Rnd_mas_338_Stanag", "", 7500, 500, "" },
			{ "64Rnd_mas_9x18_mag", "", 5000, 200, "" },
			{ "100Rnd_580x42_Mag_F", "", 5000, 200, "" },
			{ "30Rnd_580x42_Mag_F", "", 5000, 50, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 5000, 500, "" },
			{ "20Rnd_mas_762x51_Stanag", "", 5000, 50, "" },
			{ "5Rnd_mas_127x108_mag", "", 5000, 500, "" },
			{ "5Rnd_127x108_Mag", "", 5000, 500, "" },
			{ "200Rnd_556x45_Box_F", "", 5000, 500, "" },
			{ "5Rnd_mas_762x51_Stanag", "", 5000, 50, "" },
			{ "100Rnd_mas_762x51_Stanag", "", 5000, 500, "" },
			{ "7Rnd_408_Mag", "", 5000, 500, "" },
			{ "200Rnd_65x39_cased_Box", "", 5000, 500, "" },
			{ "30Rnd_mas_545x39_mag", "", 5000, 500, "" },
			{ "30Rnd_762x51_Fal", "", 5000, 7500, "" },
			{ "41630mk262_mag", "", 5000, 7500, "" },
            { "20Rnd_556x45_UW_mag", "", 5000, 50, "" },
			{ "10Rnd_127x54_Mag", "", 5000, 50, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 5000, 50, "" },
			{ "10Rnd_338_Mag", "", 5000, 50, "" },
			{ "30Rnd_762x39_Mag", "", 5000, 7500, "" },
			{ "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 5000, 100, "" },
            { "30Rnd_9x21_Mag", "", 5000, 100, "" },
            { "9Rnd_45ACP_Mag", "", 5000, 100, "" },
			{ "5Rnd_mas_127x99_Stanag", "", 5000, -1, "" },
			{ "200Rnd_mas_556x45_Stanag", "", 5000, -1, "" },
			{ "30Rnd_mas_9x21sd_Stanag", "", 5000, -1, "" },
			{ "25Rnd_45ACP_Mag", "", 5000, 100, "" },
			{ "30Rnd_mas_556x45_Stanag", "", 5000, 100, "" },
			{ "20Rnd_762x51_Mag", "", 5000, 100, "" },
			{ "71Rnd_mas_762x25_mag", "", 5000, 100, "" },
			{ "30Rnd_mas_9x21_Stanag", "", 5000, 100, "" },
			{ "10Rnd_mas_338sd_Stanag", "", 5000, 100, "" },
			{ "200Rnd_556x45_M249", "", 5000, 100, "" },
			{ "10Rnd_mas_762x54_mag", "", 5000, 100, "" },
			{ "20Rnd_mas_12Gauge_Slug", "", 5000, 100, "" },
			{ "7Rnd_mas_12Gauge_Slug", "", 5000, 100, "" },
			{ "7Rnd_mas_12Gauge_Pellets", "", 5000, 100, "" },
			{ "150Rnd_762x51_Box", "", 5000, 100, "" },
			{ "100Rnd_mas_762x54_mag", "", 5000, 100, "" },
			{ "130Rnd_338_Mag", "", 5000, 100, "" },
			{ "150Rnd_mas_556x45_Stanag", "", 5000, 100, "" },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 5000, -1, "" },	
			{ "Fett_20Rnd_556x45_UW_mag", "", 5000, -1, "" },
			{ "150Rnd_762x54_Box", "", 5000, 50, "" },
			{ "150Rnd_93x64_Mag", "", 5000, 50, "" }
        };
        accs[] = {
			{ "optic_ACO_grn", "", 3500, 100, "" },
            { "optic_Holosight", "", 3600, 100, "" },
            { "optic_Hamr", "", 7500, 100, "" },
			{ "optic_AMS", "", 200, 50, "" },
			{ "optic_Arco", "", 200, 50, "" },
			{ "optic_DMS", "", 200, 50, "" },
			{ "optic_ERCO_blk_F", "", 200, 50, "" },
			{ "optic_LRPS", "", 200, 50, "" },
			{ "optic_KHS_blk", "", 200, 50, "" },
			{ "optic_KHS_old", "", 200, 50, "" },
			{ "optic_LRPS_ghex_F", "", 200, 50, "" },
			{ "optic_Holosight_smg_blk_F", "", 200, 50, "" },
			{ "optic_SOS", "", 200, 50, "" },
			{ "optic_MRCO", "", 200, 50, "" },
			{ "optic_Hamr_khk_F", "", 200, 50, "" },
			{ "bipod_03_F_blk", "", 200, 50, "" },
			{ "bipod_02_F_blk", "", 200, 50, "" },
			{ "bipod_01_F_blk", "", 200, 50, "" },
			{ "bipod_02_F_hex", "", 200, 50, "" },
			{ "acc_pointer_IR", "", 200, 50, "" },
            { "acc_flashlight", "", 1000, 100, "" },
			{ "optic_NVS", "", 7000, -1, "" },
            { "optic_ACO_grn_smg", "", 950, 100, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 100, 45, "" },
            { "ItemMap", "", 50, 35, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 2000, 980, "" },
            { "Chemlight_red", "", 300, -1, "" },
            { "Chemlight_yellow", "", 300, 50, "" },
            { "Chemlight_green", "", 300, 50, "" },
            { "Chemlight_blue", "", 300, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, -1, "" },
            { "ItemGPS", "", 500, 45, "" },
            { "ItemMap", "", 250, 35, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, -1, "" },
            { "FirstAidKit", "", 750, 65, "" },
            { "NVGoggles", "", 10000, 980, "" },
            { "Chemlight_red", "", 1500, -1, "" },
            { "Chemlight_yellow", "", 1500, 50, "" },
            { "Chemlight_green", "", 1500, 50, "" },
            { "Chemlight_blue", "", 1500, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
			{ "DemoCharge_Remote_Mag", "", 3000, 75, "" },
            { "ItemGPS", "", 100, 45, "" },
			{ "Rangefinder", "", 1000, 580, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 1200, 980, "" },
			{ "NVGogglesB_blk_F", "", 3000, -1, "call life_coplevel >= 3" },
			{ "TAC_SGS", "", 3000, -1, "call life_coplevel >= 3" },
			{ "TRYK_balaclava_EAR_NV", "", 3000, -1, "call life_coplevel >= 3" },
			{ "TRYK_G_Shades_Black_NV", "", 3000, -1, "call life_coplevel >= 3" },
			{ "TRYK_HRPIGEAR_NV", "", 3000, -1, "call life_coplevel >= 3" },
            { "HandGrenade_Stone", "Flashbang", 1700, -1, "" },
            { "hgun_P07_snds_F", "Stun Pistol", 2000, 650, "" },
            { "arifle_sdar_F", "Taser Rifle", 40000, 7500, "" },
            { "arifle_MX_F", "", 55000, 7500, "call life_coplevel >= 2" },
            { "hgun_ACPC2_F", "", 17500, -1, "call life_coplevel >= 1" },
			{ "arifle_mas_bizon", "", 30000, -1, "call life_coplevel >= 1" },
			{ "arifle_CTARS_blk_F", "", 150000, -1, "call life_coplevel >= 3" },
			{ "srifle_GM6_F", "", 400000, -1, "call life_coplevel >= 4" },
			{ "srifle_LRR_camo_F", "", 400000, -1, "call life_coplevel >= 5" },
			{ "m16_EPOCH", "", 150000, -1, "call life_coplevel >= 1" },
			{ "srifle_mas_m24", "", 30000, -1, "call life_coplevel >= 4" },
			{ "LMG_mas_M249a_F", "", 100000, -1, "call life_coplevel >= 5" },	
			{ "srifle_LRR_F", "", 100000, -1, "call life_coplevel >= 6" },
			{ "arifle_mas_mp5sd", "", 3000, -1, "call life_coplevel >= 7" },
			{ "Fett_SDAR", "", 50000, -1, "call life_coplevel >= 1" },
			{ "AWP_Lightning_strike", "", 600000, 7500, "call life_coplevel >= 1"},
			{ "AWP_Boom", "", 600000, 7500, "call life_coplevel >= 1"},
			{ "AWP_Asiimov", "", 600000, 7500, "call life_coplevel >= 1"},
			{ "AWP_SRG_Desert", "", 900000, 7500, "call life_coplevel >= 1"},
			{ "Skyline_UMP45_01_F", "", 10000, -1, "call life_coplevel >= 7" },
			{ "arifle_mas_mp5", "", 10000, -1, "call life_coplevel >= 7" },
			{ "arifle_mas_m4", "", 30000, -1, "call life_coplevel >= 1" },
			{ "srifle_DMR_03_F", "", 50000, -1, "call life_coplevel >= 8" },
			{ "arifle_AK12_F", "", 50000, -1, "call life_coplevel >= 8" },
			{ "Skyline_Fal_02_F", "", 50000, -1, "call life_coplevel >= 2" },
			{ "LMG_mas_M249_F", "", 50000, -1, "call life_coplevel >= 9" },
			{ "arifle_mas_ppsh", "", 50000, -1, "call life_coplevel >= 9" },
			{ "ej_hk41610_160th", "", 50000, -1, "call life_coplevel >= 10" },
			{ "arifle_mas_mp40", "", 50000, -1, "call life_coplevel >= 10" },
			{ "arifle_mas_hk417c", "", 50000, -1, "call life_coplevel >= 10" },
			{ "arifle_mas_mk17", "", 50000, -1, "call life_coplevel >= 10" },
			{ "srifle_mas_lrr", "", 50000, -1, "call life_coplevel >= 11" },
			{ "m249_EPOCH", "", 50000, -1, "call life_coplevel >= 11" },
			{ "srifle_mas_m91", "", 50000, -1, "call life_coplevel >= 11" },
			{ "arifle_mas_aa12", "", 50000, -1, "call life_coplevel >= 12" },
			{ "arifle_mas_m1014", "", 50000, -1, "call life_coplevel >= 12" },
			{ "srifle_DMR_04_F", "", 50000, -1, "call life_coplevel >= 12" },
			{ "LMG_mas_pech_F", "", 50000, -1, "call life_coplevel >= 13" },
			{ "srifle_mas_ksvk", "", 30000, -1, "call life_coplevel >= 13" },
			{ "arifle_mas_akms_c", "", 300000, 7500, "call life_coplevel >= 13" },
			{ "AWP_SRG_Desert", "", 500000, 7500, "call life_coplevel >= 14" },
			{ "arifle_mas_bizon", "", 200000, 7500, "call life_coplevel >= 14" },
			{ "arifle_CTARS_hex_F", "", 90000, 7500, "call life_coplevel >= 14" },									//CAR-95-1 5.8mm(Hex)
			{ "arifle_TRG20_F", "", 280000, 2500, "call life_coplevel >= 15" },										//TRG-20 5.56mm
			{ "arifle_Katiba_F", "", 30000, 5000, "call life_coplevel >= 15" },										//Katida 6.5mm
			{ "srifle_DMR_01_F", "", 50000, -1, "call life_coplevel >= 15" },										//Rahim 7.62mm
			{ "arifle_SDAR_F", "", 20000, 7500, "call life_coplevel >= 16" },										//SDAR 5.56mm
			{ "arifle_AK12_F", "", 350000, 7500, "call life_coplevel >= 16" },										//AK-12 7.62mm
			{ "arifle_CTAR_hex_F", "", 150000, 7500, "call life_coplevel >= 16" },									//CAR-95 5.8mm(Hex)
			{ "arifle_mas_g3", "", 170000, 7500, "call life_coplevel >= 16" },
			{ "srifle_GM6_camo_F", "", 1800000, 7500, "call life_coplevel >= 14" },									//GM6 Lynx 12.7mm(Camo)
			{ "srifle_mas_ksvk_c", "", 2000000, 7500, "call life_coplevel >= 14" },									//KSVK camo
			{ "LMG_03_F", "", 700000, 7500, "call life_coplevel >= 14" },											//LIM-85 5.56mm
			{ "srifle_mas_ebr", "", 460000, 7500, "call life_coplevel >= 14" },
			{ "srifle_DMR_05_blk_F", "", 460000, 7500, "call life_coplevel >= 8" },
			// VIP Level 1
			{ "srifle_DMR_04_Tan_F", "", 60000, 7500, "call life_donorlevel >= 1" },								//ASP-1 Kir 12.7mm(Tan)
			{ "srifle_DMR_05_tan_f", "", 60000, 7500, "call life_donorlevel >= 1" },								//Cyrus 9.3mm(Tan)
			{ "srifle_DMR_02_sniper_F", "", 60000, 7500, "call life_donorlevel >= 1" },
			{ "LMG_mas_Mk200_F", "", 60000, 7500, "call life_donorlevel >= 1" },
			{ "arifle_AK12_GL_F", "", 60000, 30, "call life_donorlevel >= 1" },									//AK-12 GL 7.62mm
			{ "arifle_CTARS_blk_F", "", 60000, 30, "call life_donorlevel >= 1" },									//CAR-95-1 5.8mm(Black)
			{ "akm_aqua", "", 60000, 30, "call life_donorlevel >= 1" },											//AK47|Aqua
			// VIP Level 2
			{ "srifle_DMR_07_hex_F", "", 50000, 7500, "call life_donorlevel >= 2" },
			{ "akm_black_laminate", "", 50000, 30, "call life_donorlevel >= 2" },									//AK47|Black Laminate
			{ "akm_case_hardened", "", 50000, 30, "call life_donorlevel >= 2" },									//AK47|Case Hardened
			{ "akm_desert", "", 50000, 30, "call life_donorlevel >= 2" },											//AK47|Desert Storm
			{ "akm_nuclear", "", 50000, 30, "call life_donorlevel >= 2" },											//AK47|Nuclear Thread
			{ "akm_radiation", "", 50000, 30, "call life_donorlevel >= 2" },										//AK47|Radiation Hazard
			{ "arifle_CTAR_blk_F", "", 50000, 30, "call life_donorlevel >= 2" },									//CAR-95 5.8mm(Black)
			{ "arifle_CTAR_GL_blk_F", "", 50000, 30, "call life_donorlevel >= 2" },								//CAR-95 GL 5.8mm(Black)
			{ "srifle_DMR_07_blk_F", "", 50000, 30, "call life_donorlevel >= 2" },									//CAR-76 6.5mm(Black)
			{ "m4a3_EPOCH", "", 50000, 7500, "call life_donorlevel >= 2" },										//M4A3
			{ "akm_red_laminate", "", 50000, 7500, "call life_donorlevel >= 2" },
			{ "AKM_EPOCH", "", 50000, 7500, "call life_donorlevel >= 2" },											//AKM
			{ "Skyline_AKM_01_F", "", 50000, 7500, "call life_donorlevel >= 2" },									//AKM
			{ "arifle_AKM_F", "", 50000, 7500, "call life_donorlevel >= 2" },										//AKM 7.62mm
			// VIP Level 3
			{ "LMG_mas_pkm_F", "", 50000, -1, "ccall life_donorlevel >= 3" },
			{ "MMG_02_black_F", "", 50000, -1, "call life_donorlevel >= 3" },
			{ "arifle_mas_m14", "", 50000, -1, "call life_donorlevel >= 3" },
		    { "arifle_ARX_blk_F", "", 50000, -1, "call life_donorlevel >= 3" },
		    { "arifle_mas_arx_l", "", 50000, -1, "call life_donorlevel >= 3" },
			{ "SMG_01_F", "", 50000, -1, "call life_donorlevel >= 3" },
			{ "arifle_SPAR_01_blk_F", "", 50000, -1, "call life_donorlevel >= 3" },
			{ "arifle_mas_l119", "", 50000, -1, "call life_donorlevel >= 3" },
			{ "Skyline_AKM_Compact_01_F", "", 50000, 7500, "call life_donorlevel >= 3" },				//AKM Compact
			{ "arifle_AKS_F", "", 50000, 7500, "call life_donorlevel >= 3" },							//AKS-74U 5.45mm
			{ "arifle_mas_asval", "", 50000, 7500, "call life_donorlevel >= 3" },						//AS VAL
			{ "arifle_mas_asval_ds", "", 50000, 7500, "call life_donorlevel >= 3" },					//AS VAL UW Scuda
			{ "Skyline_B95_01_F", "", 50000, 7500, "call life_donorlevel >= 3" },						//Blaser B95
			{ "Skyline_B95_03_F", "", 50000, 7500, "call life_donorlevel >= 3" },						//Blaser B95(Noir)
			{ "Skyline_B95_02_F", "", 50000, 7500, "call life_donorlevel >= 3" },						//Blaser B95(Vert)
			{ "arifle_CTAR_GL_ghex_F", "", 50000, 7500, "call life_donorlevel >= 3" },					//CAR-95 GL 5.8mm(Green Hex)
			{ "arifle_CTAR_GL_hex_F", "", 50000, 7500, "call life_donorlevel >= 3" },					//CAR-95 GL 5.8mm(Hex)
			{ "srifle_DMR_05_blk_F", "", 50000, 7500, "call life_donorlevel >= 3" },					//Cyrus 9.3mm(Black)
			{ "srifle_DMR_05_hex_F", "", 50000, 7500, "call life_donorlevel >= 3" },					//Cyrus 9.3mm(Hex)
			{ "Skyline_Fal_01_F", "", 50000, 7500, "call life_donorlevel >= 3" },						//FN Fal(Compact)
			{ "srifle_GM6_ghex_F", "", 50000, 7500, "call life_donorlevel >= 3" },						//GM6 Lynx 12.7mm(Green Hex)
			{ "arifle_Katiba_C_F", "", 50000, 7500, "call life_donorlevel >= 3" },						//Katida Carbine 6.5mm
			{ "arifle_Katiba_GL_F", "", 50000, 7500, "call life_donorlevel >= 3" },					//Katida GL 6.5mm
			{ "M14_EPOCH", "", 50000, 7500, "call life_donorlevel >= 3" },								//M14
			{ "M14Grn_EPOCH", "", 50000, 7500, "call life_donorlevel >= 3" },							//M14(Green)
			{ "m16Red_EPOCH", "", 50000, 7500, "call life_donorlevel >= 3" },							//M16(Red)
			// VIP Level 4
			{ "srifle_mas_sr25", "", 50000, 100, "call life_donorlevel >= 4" },
            { "arifle_MXC_F", "", 50000, 5000, "call life_donorlevel >= 4" },
			{ "LMG_mas_M249_F_d", "", 50000, 7500, "call life_donorlevel >= 4" },						//M249 Para Des
			{ "LMG_mas_M249_F_v", "", 50000, 7500, "call life_donorlevel >= 4" },						//M249 Para Wood
			{ "m249Tan_EPOCH", "", 50000, 7500, "call life_donorlevel >= 4" },							//M249 Tan
			{ "arifle_mas_m27", "", 50000, 7500, "call life_donorlevel >= 4" },						//M27 IAR
			{ "arifle_mas_m27_d", "", 50000, 7500, "call life_donorlevel >= 4" },						//M27 IAR Des				
			{ "arifle_mas_m27m", "", 50000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG
			{ "arifle_mas_m27m_d", "", 50000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG Des
			{ "arifle_mas_m27m_v", "", 50000, 7500, "call life_donorlevel >= 4" },						//M27 IAR MAG Wood
			{ "arifle_mas_m27_v", "", 50000, 7500, "call life_donorlevel >= 4" },						//M27 IAR Wood
			{ "srifle_LRR_tna_F", "", 50000, 7500, "call life_donorlevel >= 4" },						//M320 LRR .408(Tropic)
			{ "srifle_DMR_02_F", "", 50000, 7500, "call life_donorlevel >= 4" },						//MAR-10 .338(Black)
			{ "srifle_DMR_02_camo_F", "", 50000, 7500, "call life_donorlevel >= 4" },					//MAR-10 .338(Camo)
			{ "srifle_DMR_03_multicam_F", "", 50000, 7500, "call life_donorlevel >= 4" },				//Mk-| EMR 7.62mm(Camo)
			{ "srifle_DMR_03_khaki_F", "", 50000, 7500, "call life_donorlevel >= 4" },					//Mk-| EMR 7.62mm(Khaki)
			{ "srifle_DMR_03_tan_F", "", 50000, 7500, "call life_donorlevel >= 4" },					//Mk-| EMR 7.62mm(Sand)
			// VIP Level 5
			{ "srifle_DMR_03_woodland_F", "", 30000, 7500, "call life_donorlevel >= 5" },				//Mk-| EMR 7.62mm(Woodland)
			{ "srifle_DMR_06_camo_F", "", 30000, 7500, "call life_donorlevel >= 5" },					//Mk14 7.62mm(Camo)
			{ "srifle_DMR_06_olive_F", "", 30000, 7500, "call life_donorlevel >= 5" },					//Mk14 7.62mm(Olive)
			{ "srifle_EBR_F", "", 30000, 7500, "call life_donorlevel >= 5" },							//Mk18 ABR 7.62mm
			{ "arifle_Mk20_plain_F", "", 30000, 7500, "call life_donorlevel >= 5" },					//Mk20 5.56mm
			{ "arifle_Mk20_F", "", 30000, 7500, "call life_donorlevel >= 5" },							//Mk20 5.56mm(Camo)
			{ "arifle_Mk20_GL_plain_F", "", 30000, 7500, "call life_donorlevel >= 5" },				    //Mk20 EGLM 5.56mm
			{ "arifle_Mk20_GL_F", "", 30000, 7500, "call life_donorlevel >= 5" },						//Mk20 EGLM 5.56mm(Camo)
			{ "arifle_Mk20C_plain_F", "", 30000, 7500, "call life_donorlevel >= 5" },					//Mk20C 5.56mm
			{ "arifle_Mk20C_F", "", 30000, 7500, "call life_donorlevel >= 5" },						    //Mk20C 5.56mm(Camo)
			{ "Skyline_Mosin9130_01_F", "", 30000, 7500, "call life_donorlevel >= 5" },				    //Mosin 9130
			{ "Skyline_Mosin9130_03_F", "", 30000, 7500, "call life_donorlevel >= 5" },				    //Mosin 9130(Camo)
			{ "Skyline_Mosin9130_02_F", "", 30000, 7500, "call life_donorlevel >= 5" },				    //Mosin 9130(Noir)
			{ "Skyline_Mosin9130_04_F", "", 30000, 7500, "call life_donorlevel >= 5" },			    	//Mosin 9130(Vert)
			{ "Skyline_Mosin9130_Bayonette_01_F", "", 30000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130(Bayonette)
			{ "Skyline_Mosin9130_Bayonette_03_F", "", 30000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Camo)
			{ "Skyline_Mosin9130_Bayonette_02_F", "", 30000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Noir)
			{ "Skyline_Mosin9130_Bayonette_04_F", "", 30000, 7500, "call life_donorlevel >= 5" },		//Mosin 9130 Bayonette(Vert)
			{ "arifle_mas_mp5sd_ds", "", 30000, 7500, "call life_donorlevel >= 5" },					//MP5SD6 UW Scuba
			{ "arifle_MX_GL_Black_F", "", 30000, 7500, "call life_donorlevel >= 5" },					//MX 3GL 6.5mm(Black)
			{ "arifle_MX_GL_khk_F", "", 30000, 7500, "call life_donorlevel >= 5" },				    	//MX 3GL 6.5mm(Khaki)
			{ "arifle_MX_GL_F", "", 30000, 7500, "call life_donorlevel >= 5" },					    	//MX 3GL 6.5mm
			{ "arifle_MX_Black_F", "", 30000, 7500, "call life_donorlevel >= 5" },						//MX 6.5mm(Black)
			{ "arifle_MX_khk_F", "", 30000, 7500, "call life_donorlevel >= 5" },						//MX 6.5mm(Khaki)
			{ "arifle_MX_SW_Black_F", "", 30000, 7500, "call life_donorlevel >= 5" },					//MX SW 6.5mm(Black)
			{ "arifle_MX_SW_khk_F", "", 30000, 7500, "call life_donorlevel >= 5" },		     			//MX SW 6.5mm(Khaki)
			// Muzzle
			{ "muzzle_snds_B", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_B_khk_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SH", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SHc", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_58_blk_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_65_TI_hex_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_H_snd_F", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_93mmg_tan", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_KSVK", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_mas_snds_SVc", "", 5000, 500, "call life_donorlevel >= 5" },
			{ "muzzle_snds_L", "", 5000, 100, "call life_donorlevel >= 5" },
			{ "muzzle_snds_H", "", 5000, 100, "call life_donorlevel >= 5" },
			{ "muzzle_snds_338_sand", "", 5000, 500, "call life_donorlevel >= 5" }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 5000, 100, "" },
            { "30Rnd_65x39_caseless_green", "", 5000, 100, "" },
            { "10Rnd_762x54_Mag", "", 5000, 100, "" },
			{ "30Rnd_762x39_Mag_F", "", 5000, 200, "" },
			{ "30Rnd_mas_762x39_mag", "", 5000, 50, "" },
			{ "10Rnd_mas_338_Stanag", "", 7500, 500, "" },
			{ "64Rnd_mas_9x18_mag", "", 5000, 200, "" },
			{ "100Rnd_580x42_Mag_F", "", 5000, 200, "" },
			{ "30Rnd_580x42_Mag_F", "", 5000, 50, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 5000, 500, "" },
			{ "20Rnd_mas_762x51_Stanag", "", 5000, 50, "" },
			{ "5Rnd_mas_127x108_mag", "", 5000, 500, "" },
			{ "5Rnd_127x108_Mag", "", 5000, 500, "" },
			{ "200Rnd_556x45_Box_F", "", 5000, 500, "" },
			{ "5Rnd_mas_762x51_Stanag", "", 5000, 50, "" },
			{ "100Rnd_mas_762x51_Stanag", "", 5000, 500, "" },
			{ "7Rnd_408_Mag", "", 5000, 500, "" },
			{ "200Rnd_65x39_cased_Box", "", 5000, 500, "" },
			{ "30Rnd_mas_545x39_mag", "", 5000, 500, "" },
			{ "30Rnd_762x51_Fal", "", 5000, 7500, "" },
			{ "41630mk262_mag", "", 5000, 7500, "" },
            { "20Rnd_556x45_UW_mag", "", 5000, 50, "" },
			{ "10Rnd_127x54_Mag", "", 5000, 50, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 5000, 50, "" },
			{ "10Rnd_338_Mag", "", 5000, 50, "" },
			{ "30Rnd_762x39_Mag", "", 5000, 7500, "" },
			{ "16Rnd_9x21_Mag", "", 25, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 5000, 100, "" },
            { "30Rnd_9x21_Mag", "", 5000, 100, "" },
            { "9Rnd_45ACP_Mag", "", 5000, 100, "" },
			{ "5Rnd_mas_127x99_Stanag", "", 5000, -1, "" },
			{ "200Rnd_mas_556x45_Stanag", "", 5000, -1, "" },
			{ "30Rnd_mas_9x21sd_Stanag", "", 5000, -1, "" },
			{ "25Rnd_45ACP_Mag", "", 5000, 100, "" },
			{ "30Rnd_mas_556x45_Stanag", "", 5000, 100, "" },
			{ "20Rnd_762x51_Mag", "", 5000, 100, "" },
			{ "71Rnd_mas_762x25_mag", "", 5000, 100, "" },
			{ "30Rnd_mas_9x21_Stanag", "", 5000, 100, "" },
			{ "10Rnd_mas_338sd_Stanag", "", 5000, 100, "" },
			{ "200Rnd_556x45_M249", "", 5000, 100, "" },
			{ "10Rnd_mas_762x54_mag", "", 5000, 100, "" },
			{ "20Rnd_mas_12Gauge_Slug", "", 5000, 100, "" },
			{ "7Rnd_mas_12Gauge_Slug", "", 5000, 100, "" },
			{ "7Rnd_mas_12Gauge_Pellets", "", 5000, 100, "" },
			{ "150Rnd_762x51_Box", "", 5000, 100, "" },
			{ "100Rnd_mas_762x54_mag", "", 5000, 100, "" },
			{ "130Rnd_338_Mag", "", 5000, 100, "" },
			{ "150Rnd_mas_556x45_Stanag", "", 5000, 100, "" },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 5000, -1, "" },	
			{ "Fett_20Rnd_556x45_UW_mag", "", 5000, -1, "" },
			{ "150Rnd_762x54_Box", "", 5000, 50, "" }
        };
        accs[] = {
            { "optic_Holosight", "", 3000, 100, "" },
            { "optic_Arco", "", 3000, 100, "" },
            { "optic_MRD", "", 3000, 100, "" },
			{ "optic_mas_PSO_nv_c", "", 3000, -1, "" },
			{ "optic_mas_PSO_nv", "", 3000, -1, "" },
			{ "optic_Hamr", "", 2000, 75, "" },
			{ "optic_ACO_grn", "", 2000, 50, "" },
			{ "optic_AMS", "", 2000, 50, "" },
			{ "optic_DMS", "", 2000, 50, "" },
			{ "optic_ERCO_blk_F", "", 2000, 50, "" },
			{ "optic_LRPS", "", 2000, 50, "" },
			{ "optic_KHS_blk", "", 2000, 50, "" },
			{ "optic_KHS_old", "", 2000, 50, "" },
			{ "optic_LRPS_ghex_F", "", 2000, 50, "" },
			{ "optic_Holosight_smg_blk_F", "", 2000, 50, "" },
			{ "optic_SOS", "", 2000, 50, "" },
			{ "optic_MRCO", "", 2000, 50, "" },
			{ "optic_Hamr_khk_F", "", 2000, 50, "" },
			{ "bipod_03_F_blk", "", 2000, 50, "" },
			{ "bipod_02_F_blk", "", 2000, 50, "" },
			{ "bipod_01_F_blk", "", 2000, 50, "" },
			{ "bipod_02_F_hex", "", 2000, 50, "" },
			{ "acc_pointer_IR", "", 2000, 50, "" },
			{ "optic_NVS", "", 7000, -1, "" },
			{ "acc_flashlight", "", 2000, 50, "" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 45, "" },
            { "Binocular", "", 150, -1, "" },
            { "FirstAidKit", "", 150, 65, "" },
            { "NVGoggles", "", 1200, 980, "" },
			{ "TAC_SGS", "", 1200, 980, "" },													//TAC MK141 MOD0 Flash Bang
			{ "TRYK_G_bala_wh_NV", "", 1200, 980, "" },											//TRYK Balaclava wh(NV)
			{ "TRYK_SPgear_PHC1_NV", "", 1200, 980, "" },										//TRYK SP gear PHC-1 (NV)
			{ "C_UavTerminal", "", 1200, 980, "" },												//UAV Terminal [Civilians]
			{ "TRYK_TAC_EARMUFF", "", 1200, 980, "" },
			{ "TRYK_headset2", "", 1200, 980, "" },
			{ "Paintball_Gun_Green_F", "", 15000, 65, "" },
			{ "Paintball_Gun_Red_F", "", 15000, 65, "" },
			{ "Weapon_angel_F", "", 15000, 65, "" },
			{ "Weapon_angel_rasta_F", "", 15000, 65, "" },
			{ "Weapon_egosl_F", "", 15000, 65, "" },
			{ "Weapon_angel_kitty_F", "", 15000, 65, "" },
			{ "Weapon_invert_mini_dye_F", "", 15000, 65, "" },
			{ "mas_launch_TitanS_F", "", 15000, 65, "" },
			{ "mas_launch_LAW_F", "", 15000, 65, "" },
			{ "launch_RPG32_ghex_F", "", 15000, 65, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
