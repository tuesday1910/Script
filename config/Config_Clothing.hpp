/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Poloshirt_stripped", "Poloshirt stripped", 125, "civ_neon.jpg" },
            { "U_C_Poloshirt_redwhite", "Poloshirt Red/White", 150, "" },
            { "U_C_Poloshirt_salmon", "Poloshirt Salmon", 175, "" },
            { "U_C_Poloshirt_blue", "Poloshirt Blue", 250, "" },
            { "U_C_Poor_2", "Rag tagged clothes", 250, "" },
            { "U_C_Poloshirt_burgundy", "Poloshirt Burgundy", 275, "" },
            { "U_C_Poloshirt_tricolour", "Poloshirt Tricolor", 350, "" },
            { "U_IG_Guerilla2_2", "Green stripped shirt & Pants", 650, "" },
            { "U_IG_Guerilla3_1", "Brown Jacket & Pants", 735, "" },
            { "U_OrestesBody", "Surfing On Land", 1100, "" },
			{ "rds_uniform_priest", 1000, "" },
            { "U_IG_Guerilla2_3", "The Outback Rangler", 1200, "" },
            { "U_C_HunterBody_grn", "The Hunters Look", 1500, "" },
            { "U_C_WorkerCoveralls", "Mechanic Coveralls", 2500, "" },
            { "U_NikosAgedBody", "Casual Wears", 5000, "" },
			{ "A3L_CivShirtAdidasMake", "Casual Wears", 5000, "" },
			{ "A3L_Bikini_Girl", "Casual Wears", 5000, "" },
			{ "A3L_CivShirtBillabong", "Casual Wears", 5000, "" },
			{ "A3L_CivShirtAnotherCat", "Casual Wears", 5000, "" },
			{ "A3L_CivShirtBillabong", "Casual Wears", 5000, "" },
			{ "A3L_CivShirtBillabong2", "Casual Wears", 5000, "" },
			{ "A3LCokeShirt", "Casual Wears", 5000, "" },
			{ "A3LShirt", "Casual Wears", 5000, "" },
			{ "A3LHandShirt", "Casual Wears", 5000, "" },
			{ "A3L_CivShirtKeepCalm", "Casual Wears", 5000, "" },
			{ "A3L_CivShirtOhBoy", "Casual Wears", 5000, "" },
			{ "A3L_SECRET", "Casual Wears", 5000, "" },
			{ "A3L_SpookyMummy", "Casual Wears", 5000, "" },
			{ "A3L_CivShirtVans2", "Casual Wears", 5000, "" },
			{ "U_I_C_Soldier_Bandit_4_F", "Casual Wears", 5000, "" },
			{ "combi_plonge_civ4", "Casual Wears", 5000, "" },
			{ "combi_plonge_civ3", "Casual Wears", 5000, "" },
			{ "combi_plonge_civ1", "Casual Wears", 5000, "" },
			{ "U_C_Driver_1_black", "Casual Wears", 5000, "" },
			{ "U_C_Driver_2", "Casual Wears", 5000, "" },
			{ "U_C_Driver_3", "Casual Wears", 5000, "" },
			{ "dutch", "Casual Wears", 5000, "" },
			{ "EF_HM_LPBL", "Casual Wears", 5000, "" },
			{ "EF_MX1", "Casual Wears", 5000, "" },
			{ "EF_suit_6", "Casual Wears", 5000, "" },
			{ "RastaCiv", "Casual Wears", 5000, "" },
			{ "TRYK_shirts_DENIM_WH_Sleeve", "Casual Wears", 5000, "" },
			{ "U_I_Protagonist_VR", "Casual Wears", 5000, "" },
			{ "U_O_Protagonist_VR", "Casual Wears", 5000, "" },
			{ "U_B_Protagonist_VR", "Casual Wears", 5000, "" },
			{ "A3L_CivShirtDJ", "Casual Wears", 5000, "" },
			{ "A3L_FuckCaidenPants", "Casual Wears", 5000, "" },
			{ "A3L_CivShirtGetHigh", "Casual Wears", 5000, "" },
			{ "A3L_CivShirtHollister", "Casual Wears", 5000, "" },
			{ "A3L_IllumPants", "Casual Wears", 5000, "" },
			{ "RFShirt", "Casual Wears", 7500, "" },
			{ "jamie_prison", "Casual Wears", 7500, "" },
			{ "cg_burgerking1", "Casual Wears", 7500, "" },
			{ "cg_loading1", "Casual Wears", 7500, "" },
			{ "cg_ea1", "Casual Wears", 7500, "" },
			{ "cg_evolution1", "Casual Wears", 7500, "" },
			{ "cg_fightclub1", "Casual Wears", 7500, "" },
			{ "cg_lsd1", "Casual Wears", 7500, "" },
			{ "cg_gamerepeat1", "Casual Wears", 7500, "" },
			{ "cg_deeznuts1", "Casual Wears", 7500, "" },
			{ "cg_awesome1", "Casual Wears", 7500, "" },
			{ "cg_homer1", "Casual Wears", 7500, "" },
			{ "cg_hearts1", "Casual Wears", 7500, "" },
			{ "cg_mario1", "Casual Wears", 7500, "" },
			{ "cg_kfc1", "Casual Wears", 7500, "" },
			{ "cg_pika1", "Casual Wears", 7500, "" },
			{ "cg_dad1", "Casual Wears", 7500, "" },
			{ "cg_mayan1", "Casual Wears", 7500, "" },
			{ "cg_pepsi1", "Casual Wears", 7500, "" },
			{ "cg_lambo1", "Casual Wears", 7500, "" },
			{ "cg_strippers1", "Casual Wears", 7500, "" },
			{ "cg_gameover1", "Casual Wears", 7500, "" },
			{ "cg_masterrace1", "Casual Wears", 7500, "" },
			{ "cg_ferrari1", "Casual Wears", 7500, "" },
			{ "cg_turtles1", "Casual Wears", 7500, "" },
			{ "cg_lego1", "Casual Wears", 7500, "" },
			{ "cg_beats1", "Casual Wears", 7500, "" },
			{ "A3L_SkidRow", "Casual Wears", 7500, "" },
			{ "A3L_SkullBlack", "Casual Wears", 7500, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_camo", "Camo Bandanna", 120, "" },
            { "H_Bandanna_surfer", "Surfer Bandanna", 130, "" },
            { "H_Bandanna_khk", "Khaki Bandanna", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Bandanna_gry", "Grey Bandanna", 150, "" },
            { "H_Bandanna_sgg", "Sage Bandanna", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "Straw Fedora", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", "Hat & Bandanna", 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
			{ "Kio_Afro_Hat", "", 2000, "" },
			{ "Kio_Capital_Hat", "", 2000, "" },
			{ "Casque_Moto", "", 2000, "" },
			{ "Masque_Alien1", "", 2000, "" },
			{ "Masque_Anonymous", "", 2000, "" },
			{ "Masque_archNemesis", "", 2000, "" },
			{ "Masque_Arnold", "", 2000, "" },
			{ "Masque_Aubrey", "", 2000, "" },
			{ "Masque_Dallas", "", 2000, "" },
			{ "Paintball_Mask_02", "", 2000, "" },
			{ "H_RacingHelmet_1_black_F", "", 2000, "" },
			{ "H_RacingHelmet_1_red_F", "", 2000, "" },
			{ "EF_FPKL_BK", "", 150, "" },
			{ "EF_FPKL_BL", "", 150, "" },
			{ "EF_FPKL_CY", "", 150, "" },
			{ "EF_FPKL_RD", "", 150, "" },
			{ "EF_FPKL_W", "", 150, "" },
			{ "EF_Long_wig_B", "", 150, "" },
			{ "EF_Punk_wig_B", "", 150, "" },
			{ "EF_wig_SB", "", 150, "" },
			{ "EF_wig_VSB", "", 150, "" },
			{ "EF_Punk_wig_SB3", "", 150, "" },
			{ "EF_Punk_wig_SB", "", 150, "" },
			{ "EF_Long_wig_BLE", "", 150, "" },
			{ "EF_Punk_wig_BLE", "", 150, "" },
			{ "EF_wig_SBLE", "", 150, "" },
			{ "EF_wig_VSBLE", "", 150, "" },
			{ "EF_Punk_wig_SBLE3", "", 150, "" },
			{ "EF_Punk_wig_SBLE", "", 150, "" },
			{ "EF_Long_wig_BL", "", 150, "" },
			{ "EF_Punk_wig_BL", "", 150, "" },
			{ "EF_wig_SBL", "", 150, "" },
			{ "EF_wig_VSBL", "", 150, "" },
			{ "EF_Punk_wig_SBL3", "", 150, "" },
			{ "EF_Punk_wig_SBL", "", 150, "" },
			{ "EF_Long_wig_BW", "", 150, "" },
			{ "EF_Punk_wig_BW", "", 150, "" },
			{ "Masque_Bonnie", "", 150, "" },
			{ "Masque_Bush", "", 150, "" },
			{ "Masque_Chains", "", 150, "" },
			{ "Masque_Chuck", "", 150, "" },
			{ "Masque_Clinton", "", 150, "" },
			{ "Masque_Clover", "", 150, "" },
			{ "Masque_Fish", "", 150, "" },
			{ "Masque_Gombo", "", 150, "" },
			{ "Masque_GdG", "", 150, "" },
			{ "Masque_Hockey", "", 150, "" },
			{ "Masque_Hoxton", "", 150, "" },
			{ "Masque_Incendiaire", "", 150, "" },
			{ "Masque_Lincoln", "", 150, "" },
			{ "Masque_Lion", "", 150, "" },
			{ "Masque_Macrilleuse", "", 150, "" },
			{ "Masque_Mark", "", 150, "" },
			{ "Masque_Metalhead", "", 150, "" },
			{ "Masque_Momie", "", 150, "" },
			{ "Masque_Optimiste", "", 150, "" },
			{ "Masque_speedRunner", "", 150, "" },
			{ "H_RacingHelmet_1_white_F", "", 2000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
			{ "Skyline_Backpack_Montagne_04_F", "", 9500, "" },
			{ "Skyline_Backpack_Ecole_02_F", "", 7500, "" },
			{ "Skyline_Backpack_Ecole_01_F", "", 7500, "" },
			{ "Skyline_Backpack_Ecole_03_F", "", 7500, "" },
			{ "Skyline_Backpack_Sac_a_dos_01_F", "", 7500, "" },
			{ "Skyline_Backpack_Sac_a_dos_02_F", "", 7500, "" },
			{ "Skyline_Backpack_Sac_a_dos_03_F", "", 7500, "" },
			{ "Skyline_Backpack_Sac_a_dos_04_F", "", 7500, "" },
			{ "Alysia_Backpack_FastRepair", "", 7500, "" },
			{ "Skyline_Backpack_Montagne_01_F", "", 7500, "" },
			{ "Skyline_Backpack_Montagne_02_F", "", 7500, "" },
			{ "Skyline_Backpack_Montagne_03_F", "", 7500, "" },
			{ "koilbp_19", "Casual Wears", 7000, "" },
			{ "koilbp_2", "Casual Wears", 7000, "" },
			{ "koilaiden", "Casual Wears", 7000, "" },
			{ "koilbatman_1", "Casual Wears", 7000, "" },
			{ "koilbender_1", "Casual Wears", 7000, "" },
			{ "koilbender_2", "Casual Wears", 7000, "" },
			{ "koilbp_10", "Casual Wears", 7000, "" },
			{ "koilbp_11", "Casual Wears", 7000, "" },
			{ "koilbp_6", "Casual Wears", 7000, "" },
			{ "koilbp_5", "Casual Wears", 7000, "" },
			{ "koilbp_12", "Casual Wears", 7000, "" },
			{ "koilbp_3", "Casual Wears", 7000, "" },
			{ "koilclint_1", "Casual Wears", 7000, "" },
			{ "koileagle", "Casual Wears", 7000, "" },
			{ "koileminem_1", "Casual Wears", 7000, "" },
			{ "koilbp_8", "Casual Wears", 7000, "" },
			{ "koilbp_4", "Casual Wears", 7000, "" },
			{ "koilkatie", "Casual Wears", 7000, "" },
			{ "koilgoonsquad", "Casual Wears", 7000, "" },
			{ "koilgraf_1", "Casual Wears", 7000, "" },
			{ "koilgraf_2", "Casual Wears", 7000, "" },
			{ "koilgraf_3", "Casual Wears", 7000, "" },
			{ "koilgucci", "Casual Wears", 7000, "" },
			{ "koilhulk_1", "Casual Wears", 7000, "" },
			{ "koilbp_9", "Casual Wears", 7000, "" },
			{ "koiljoker_1", "Casual Wears", 7000, "" },
			{ "kaelmario", "Casual Wears", 7000, "" },
			{ "koilmedicred", "Casual Wears", 7000, "" },
			{ "kaelmonty", "Casual Wears", 7000, "" },
			{ "kaelmonty2", "Casual Wears", 7000, "" },
			{ "koilbp_1", "Casual Wears", 7000, "" },
			{ "koilbp_13", "Casual Wears", 7000, "" },
			{ "koilbp_14", "Casual Wears", 7000, "" },
			{ "koilpanda", "Casual Wears", 7000, "" },
			{ "koilbp_15", "Casual Wears", 7000, "" },
			{ "koilpumpkin_1", "Casual Wears", 7000, "" },
			{ "koilbp_16", "Casual Wears", 7000, "" },
			{ "koilcat", "Casual Wears", 7000, "" },
			{ "koilsheriff", "Casual Wears", 7000, "" },
			{ "koilsmashing", "Casual Wears", 7000, "" },
			{ "koilsparta_1", "Casual Wears", 7000, "" },
			{ "koilspecktators", "Casual Wears", 7000, "" },
			{ "koilsponge_1", "Casual Wears", 7000, "" },
			{ "koildarth", "Casual Wears", 7000, "" },
			{ "koilturtles_1", "Casual Wears", 7000, "" },
			{ "koilbp_7", "Casual Wears", 7000, "" },
			{ "koilbp_17", "Casual Wears", 7000, "" },
			{ "koilbp_18", "Casual Wears", 7000, "" },
			{ "B_mas_m_Bergen_acr_w", "", 7500, "" },
			{ "B_mas_m_Bergen_acr_c", "", 7500, "" },
			{ "B_mas_m_Bergen_us_m", "", 7500, "" },
			{ "B_mas_m_Bergen_us_g", "", 7500, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "kenny_doc", "Cop Uniform", 25, "" },
            { "jamie_police4_1", "", 350, "call life_coplevel >= 1" },
			{ "Anime_Soldier_BRS_Uniform", "", 350, "call life_coplevel >= 1" },
			{ "EF_FEM_4_2", "", 350, "call life_coplevel >= 1" },
			{ "U_O_FullGhillie_ard", "", 350, "call life_coplevel >= 1" },
            { "U_O_GhillieSuit", "", 550, "call life_coplevel >= 1" },
			{ "U_O_Wetsuit", "", 550, "call life_coplevel >= 1" },
			{ "kenny_police4", "", 550, "call life_coplevel >= 1" },
			{ "jamie_police1", "", 550, "call life_coplevel >= 2" },
			{ "jamie_tou", "", 550, "call life_coplevel >= 2" },
			{ "demian2435_police_man_uniform", "", 550, "call life_coplevel >= 2" },
			{ "demian2435_swat_leader_uniform", "", 1250, "call life_coplevel >= 2" },
			{ "demian2435_swat_sniper_uniform", "", 1250, "call life_coplevel >= 2" },
			{ "demian2435_swat_man_uniform", "", 1250, "call life_coplevel >= 2" },
			{ "Alysia_Uniform_East_capitaine_Parade_blk_pnt", "", 1250, "call life_coplevel >= 2" },
			{ "TRYK_U_B_BLK", "", 1250, "call life_coplevel >= 2" },
			{ "U_Soldat_ai", "", 1250, "call life_coplevel >= 2" },
			{ "Anime_Soldier_HelloKitty_Uniform_Spec", "", 1250, "call life_coplevel >= 2" },
			{ "Anime_Regular_HelloKitty_Uniform", "", 1250, "call life_coplevel >= 2" },
			{ "TRYK_U_B_BLKBLK_CombatUniform", "", 1250, "call life_coplevel >= 2" },
			{ "U_B_survival_uniform", "", 1250, "call life_coplevel >= 2" },
			{ "TRYK_U_B_BLKBLK_CombatUniform", "", 1250, "call life_coplevel >= 2" }, 
			{ "Lectra_textile_uniform", "", 5000, "call life_coplevel >= 3" },
			{ "U_officier_ai", "", 5000, "call life_coplevel >= 5" },
			{ "A3LJumperCIDBlack", "", 5000, "call life_coplevel >= 3" },
			{ "A3LJumperCIDDigi", "", 5000, "call life_coplevel >= 3" },
			{ "Anime_Soldier_BRS_Uniform_Pilot", "", 5000, "call life_coplevel >= 5" }			
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
			{ "H_Beret_02", "", 15000, "call life_coplevel >= 6" },
			{ "H_CrewHelmetHeli_B", "", 75, "call life_coplevel >= 1" },
			{ "Alysia_Beret_East", "", 15000, "call life_coplevel >= 3" },
            { "jamie_blackhelmet", "", 25, "" },
            { "H_HelmetSpecB", "", 50, "call life_coplevel >= 1" },
            { "RM_SWAT_Helmet_01", "", 75, "call life_coplevel >= 1" },
			{ "EF_FPKL_BK", "", 75, "call life_coplevel >= 1" },
			{ "EF_FPKL_BL", "", 75, "call life_coplevel >= 1" },
			{ "EF_FPKL_CY", "", 75, "call life_coplevel >= 1" },
			{ "EF_FPKL_RD", "", 75, "call life_coplevel >= 1" },
			{ "EF_FPKL_W", "", 75, "call life_coplevel >= 1" },
			{ "EF_Long_wig_B", "", 75, "call life_coplevel >= 1" },
			{ "EF_Punk_wig_B", "", 75, "call life_coplevel >= 1" },
			{ "EF_wig_SB", "", 75, "call life_coplevel >= 1" },
			{ "EF_wig_VSB", "", 75, "call life_coplevel >= 1" },
			{ "EF_Punk_wig_SB3", "", 75, "call life_coplevel >= 1" },
			{ "EF_Punk_wig_SB", "", 75, "call life_coplevel >= 1" },
			{ "EF_Long_wig_BLE", "", 75, "call life_coplevel >= 1" },
			{ "EF_Punk_wig_BLE", "", 75, "call life_coplevel >= 1" },
			{ "EF_wig_SBLE", "", 75, "call life_coplevel >= 1" },
			{ "EF_wig_VSBLE", "", 75, "call life_coplevel >= 1" },
			{ "EF_Punk_wig_SBLE3", "", 75, "call life_coplevel >= 1" },
			{ "EF_Punk_wig_SBLE", "", 75, "call life_coplevel >= 1" },
			{ "EF_Long_wig_BL", "", 75, "call life_coplevel >= 1" },
			{ "EF_Punk_wig_BL", "", 75, "call life_coplevel >= 1" },
			{ "EF_wig_SBL", "", 75, "call life_coplevel >= 1" },
			{ "EF_wig_VSBL", "", 75, "call life_coplevel >= 1" },
			{ "EF_Punk_wig_SBL3", "", 75, "call life_coplevel >= 1" },
			{ "EF_Punk_wig_SBL", "", 75, "call life_coplevel >= 1" },
			{ "EF_Long_wig_BW", "", 75, "call life_coplevel >= 1" },
			{ "EF_Punk_wig_BW", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Bonnie", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Bush", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Chains", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Chuck", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Clinton", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Clover", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Fish", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Gombo", "", 75, "call life_coplevel >= 1" },
			{ "Masque_GdG", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Hockey", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Hoxton", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Incendiaire", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Lincoln", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Lion", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Macrilleuse", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Mark", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Metalhead", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Momie", "", 75, "call life_coplevel >= 1" },
			{ "Masque_Optimiste", "", 75, "call life_coplevel >= 1" },
			{ "Masque_speedRunner", "", 75, "call life_coplevel >= 1" },
			{ "H_Beret_Colonel", "", 3000, -1, "call life_coplevel >= 3" },
            { "H_HelmetO_ViperSP_ghex_F", "", 3000, "call life_coplevel >= 1" },
			{ "H_Beret_blk", "", 3000, "call life_coplevel >= 17" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
			{ "G_I_Diving", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
			{ "TRYK_US_ESS_Glasses_BLK", "", 100, "" },
            { "G_Spectacles_Tinted", "", 150, "" },
            { "TRYK_headset_Glasses", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" },
			{ "G_mas_wpn_bala_gog_b", "", 3000, -1, "call life_coplevel >= 3" },
			{ "G_mas_wpn_gasmask_comp", "", 3000, -1, "call life_coplevel >= 3" },
			{ "G_Balaclava_TI_G_blk_F", "", 3000, -1, "call life_coplevel >= 3" },
			{ "G_Balaclava_TI_blk_F", "", 3000, -1, "call life_coplevel >= 3" },
			{ "TRYK_kio_balaclava_ear", "", 3000, -1, "call life_coplevel >= 3" },
			{ "TRYK_kio_balaclava_ESS", "", 3000, -1, "call life_coplevel >= 3" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
			{ "V_PlateCarrierGL_blk", "", 25000, "call life_coplevel >= 1" },										//Carrier GL Rig(Black)
			{ "V_PlateCarrier1_blk", "", 25000, "call life_coplevel >= 1" },										//Carrier Lite(Black)
			{ "V_PlateCarrierSpec_blk", "", 25000, "call life_coplevel >= 1" },										//Carrier Special Rig(Black)
			{ "V_RebreatherB", "", 25000, "call life_coplevel >= 1" },												//Rebreather[NATO]
			{ "TAC_V_CTBA", "", 25000, "call life_coplevel >= 1" },
			{ "V_RebreatherIA", "", 25000, "call life_coplevel >= 1" },
			{ "BHD_TACV1D2", "", 25000, "call life_coplevel >= 1" },
			{ "TAC_V_Sheriff_BA_TB", "", 25000, "call life_coplevel >= 1" },										//TAC PMC vest(BK)
			{ "TAC_V_Sheriff_BA_TB2", "", 25000, "call life_coplevel >= 1" },										//TAC PMC vest assault(BK)
			{ "TAC_V_Sheriff_BA_TBL7", "", 25000, "call life_coplevel >= 1" },										//TAC PMC vest Grenader L(BK)
			{ "TAC_V_Sheriff_BA_TBL3_BK", "", 25000, "call life_coplevel >= 1" },									//TAC PMC vest L3 Heavy(BK)
			{ "TAC_V_Sheriff_BA_TBL4", "", 25000, "call life_coplevel >= 1" },										//TAC PMC vest L4(BK)
			{ "TAC_V_Sheriff_BA_TB6", "", 25000, "call life_coplevel >= 1" },										//TAC PMC vest Pointman(BK)
			{ "TAC_V_Sheriff_BA_TB5", "", 25000, "call life_coplevel >= 1" },										//TAC PMC vest SAW(BK)
			{ "TAC_V_tacv1LC_P", "", 25000, "call life_coplevel >= 1" },
			{ "TAC_V_tacv1EP_BK", "", 33000, -1, "call life_coplevel >= 3" },										//TAC V-1 with Holster(BK)
			{ "TAC_V_Sheriff_BA_TB4", "", 33000, -1, "call life_coplevel >= 3" },									//TAC PMC vest Medic(BK)
			{ "TAC_V_CTBA2", "", 33000, -1, "call life_coplevel >= 3" },
			{ "jamie_belt", "", 33000, -1, "call life_coplevel >= 3" },												//Police Belt
			{ "EF_SH_BK", "", 33000, -1, "call life_coplevel >= 3" },												//EF Shoulder Holstrr(Black)
			{ "EF_BLT_M1BSF", "", 33000, -1, "call life_coplevel >= 3" },											//EF Sheriff badge(Male)
			{ "EF_SHF_BK", "", 33000, -1, "call life_coplevel >= 3" },
			{ "TRYK_BAPLSK", "", 25000, "call life_coplevel >= 1" },
			{ "EF_PBDF_M1", "", 33000, "call life_coplevel >= 5" },
			{ "EF_GSG9_1GD", "", 33000, "call life_coplevel >= 5" },
			{ "EF_GSG9_2GD", "", 100000, "call life_coplevel >= 8" },	
			{ "EF_GSG9_2P", "", 100000, "call life_coplevel >= 8" },	
			{ "RTA_Carrier_Raven", "", 100000, "call life_coplevel >= 8" },	
			{ "RTN_Carrier_Rig", "", 100000, "call life_coplevel >= 8" },	
			{ "EF_CTV2", "", 100000, "call life_coplevel >= 8" },	
			{ "TAC_PBDFG2_B_1", "", 100000, "call life_coplevel >= 8" },	
			{ "TAC_PBDFG2CPFBI_B_1", "", 100000, "call life_coplevel >= 8" },	
			{ "RTMC_Carrier_Rig", "", 100000, "call life_coplevel >= 8" },	
			{ "TAC_PBDFG2CPP_BK_1", "", 100000, "call life_coplevel >= 8" },	
			{ "TAC_PBDFG2SACMSL_B_1", "", 100000, "call life_coplevel >= 8" },	
			{ "TAC_FS_FO_mL_B", "", 100000, "call life_coplevel >= 8" },	
			{ "TAC_V_CTBA", "", 100000, "call life_coplevel >= 8" },	
			{ "TAC_V_CTBA2", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_EI_RRVCVH_B", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_EI_RRV28_B", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_EI_RRV25L_B", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_EI_RRV25_B", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_EI_RRV27L_B", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_EI_RRV23_B", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_V_tacv1_FBI2", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_V_tacv1LC_MSL", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_V_tacv10LC_BK", "", 100000, "call life_coplevel >= 8" },
			{ "TRYK_BAPLSK", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_V_tacv10LC_BK", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_V_tacv10LC_BK", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_V_tacv10LC_BK", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_V_tacv10LC_BK", "", 100000, "call life_coplevel >= 8" },
			{ "TAC_V_tacv10LC_BK", "", 100000, "call life_coplevel >= 8" },
			{ "jamie_blacky2", "", 200000, "call life_coplevel >= 8" },					    				        //Black Police Vest
			// VIP Level 1
			{ "jamie_black", "", 25000, "call life_donorlevel >= 1" },												//Black Police Vest
			{ "jamie_black2", "", 25000, "call life_donorlevel >= 1" },												//Black Police Vest
			{ "jamie_blue2", "", 25000, "call life_donorlevel >= 1" },												//Blue Police Vest
			{ "jamie_blue", "", 25000, "call life_donorlevel >= 1" },												//Blue Police Vest
			// VIP Level 2
			{ "jamie_corrections_vest", "", 25000, "call life_donorlevel >= 2" },									//Corrections Vest
			{ "EF_BSF", "", 25000, "call life_donorlevel >= 2" },													//EF Sheriff badge(Suit)
			{ "EF_BLT_F1BSF", "", 25000, "call life_donorlevel >= 2" },												//EF Sheriff badge(Female)
			{ "EF_SH_BW", "", 25000, "call life_donorlevel >= 2" },													//EF Shoulder Holstrr(Brown)
			// VIP Level 3
			{ "Alysia_Vest_East_01", "", 25000, "call life_donorlevel >= 3" },										//Gilet ANT(1)
			{ "Alysia_Vest_East_02", "", 25000, "call life_donorlevel >= 3" },										//Gilet ANT(2)
			{ "Alysia_Vest_East_03", "", 25000, "call life_donorlevel >= 3" },										//Gilet ANT(3)
			{ "demian2435_police_belt", "", 25000, "call life_donorlevel >= 3" },									//Police Belt
			{ "demian2435_police_vest", "", 25000, "call life_donorlevel >= 3" },									//Police Vest
			{ "demian2435_swat_leader_vest", "", 25000, "call life_donorlevel >= 3" },								//Swat Leader Vest
			// VIP Level 4
			{ "demian2435_sniper_vest", "", 25000, "call life_donorlevel >= 4" },									//Swat Leader Vest
			{ "demian2435_swat_vest", "", 25000, "call life_donorlevel >= 4" },										//Swat Vest
			{ "TAC_V_Sheriff_BA_TB3", "", 25000, "call life_donorlevel >= 4" },										//TAC PMC vest CQB(BK)
			{ "TAC_V_Sheriff_BA_TB7", "", 25000, "call life_donorlevel >= 4" },										//TAC PMC vest Grenader(BK)
			{ "TAC_V_Sheriff_BA_TBL", "", 25000, "call life_donorlevel >= 4" },										//TAC PMC vest L(BK)
			{ "TAC_V_tacSVD_BK", "", 25000, "call life_donorlevel >= 4" },											//TAC SVD(BLK)
			// VIP Level 5
			{ "TAC_V_tacSVDL_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC SVD L(BLK)
			{ "TAC_V_tacv1M_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1(BK Mesh)
			{ "TAC_V_tacv1_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1(BK)
			{ "TAC_V_tacv1LC_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1 CQB(BLK)
			{ "TAC_V_tacv1L_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1 ep(BK)
			{ "TAC_V_tacv1EP_M", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1 with Holster(Mesh)
			{ "V_TacVest_blk_POLICE", "", 25000, "call life_donorlevel >= 5" },										//Tactical Vest(Police)
			{ "TRYK_V_IOTV_BLK", "", 25000, "call life_donorlevel >= 5" },											//TRYK IOTV light Vest(BLK)
			{ "Anime_Soldier_BRS_Vest", "", 25000, "call life_donorlevel >= 5" },									//Vest[Black Rock Shooter]
			{ "Anime_Soldier_HelloKitty_Vest", "", 25000, "call life_donorlevel >= 5" },							//Vest[Hello Kitty]
		    { "jamie_blacky2", "", 100000, "call life_donorlevel >= 5" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_AssaultPack_blk", "", 500, "" },
            { "Anime_Backpack_Grey_Medic", "", 700, "" },
            { "EF_FBAG_BK", "", 800, "" },
            { "EF_FBAG_HB_BK", "", 2500, "" },
			{ "B_mas_m_Bergen_rpg_b", "", 2500, "" },
            { "TAC_MTAP_BK", "", 3500, "" },
			{ "TRYK_B_Medbag_BK", "", 3500, "" },
			{ "TRYK_B_tube_blk", "", 3500, "" },
			{ "B_ViperHarness_blk_F", "", 3500, "" },
			{ "Anime_Parachute_Dark", "", 3500, "" },
			{ "koilbp_15", "Casual Wears", 7000, "" },
			{ "koilpumpkin_1", "Casual Wears", 7000, "" },
			{ "koilbp_16", "Casual Wears", 7000, "" },
			{ "koilcat", "Casual Wears", 7000, "" },
			{ "koilsheriff", "Casual Wears", 7000, "" },
			{ "TAC_BP_HSG_AB_B", "Casual Wears", 7000, "" },
			{ "koilsmashing", "Casual Wears", 7000, "" },
			{ "koilsparta_1", "Casual Wears", 7000, "" },
			{ "koilspecktators", "Casual Wears", 7000, "" },
			{ "koilsponge_1", "Casual Wears", 7000, "" },
			{ "koildarth", "Casual Wears", 7000, "" },
			{ "koilturtles_1", "Casual Wears", 7000, "" },
			{ "koilbp_7", "Casual Wears", 7000, "" },
			{ "koilbp_17", "Casual Wears", 7000, "" },
			{ "koilbp_18", "Casual Wears", 7000, "" }
        };
    };
	
	class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
			{ "U_C_Driver_3", "Casual Wears", 5000, "" },
			{ "dutch", "Casual Wears", 5000, "" },
			{ "EF_HM_LPBL", "Casual Wears", 5000, "" },
			{ "EF_MX1", "Casual Wears", 5000, "" },
			{ "EF_suit_6", "Casual Wears", 5000, "" },
			{ "RastaCiv", "Casual Wears", 5000, "" },
			{ "TRYK_shirts_DENIM_WH_Sleeve", "Casual Wears", 5000, "" },
			{ "U_I_Protagonist_VR", "Casual Wears", 5000, "" },
			{ "U_O_Protagonist_VR", "Casual Wears", 5000, "" },
			{ "U_B_Protagonist_VR", "Casual Wears", 5000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
			 { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
			{ "Skyline_Backpack_Montagne_04_F", "", 9500, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };    
	
	class mercenary {
        title = "Mercenary";
        conditions = "";
        side = "adac";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
			{ "Skyline_Uniforme_Securite_01_F", "", 500, "" },
			{ "Skyline_Uniforme_Securite_02_F", "", 500, "" },
			{ "Skyline_Uniforme_Securite_03_F", "", 500, "" },
			{ "Skyline_Uniforme_Lectra_Textile_01_F", "", 500, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_HelmetSpecO_ocamo", "", 1650, "" },
            { "H_Booniehat_khk", "", 1800, "" },
            { "H_Booniehat_tna_F", "", 1850, "" },
            { "H_HelmetB_desert", "", 1850, "" },
            { "H_HelmetLeaderO_ocamo", "", 1800, "" },
            { "H_HelmetSpecB", "", 2500, "" },
			{ "H_HelmetB_light", "", 2500, "" },
			{ "Masque_Dallas", "", 2500, "" },
			{ "mgsr_headbag	", "", 2500, "" },
			{ "H_HelmetIA", "", 2500, "" },
			{ "H_MilCap_ocamo", "", 2500, "" },
			{ "H_Shemag_olive", "", 2500, "" },
			{ "H_ShemagOpen_tan", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
			{ "V_PlateCarrierGL_rgr", "", 125000, "" },																//Carrier GL Rig(Green)
			{ "V_PlateCarrierSpec_mtp", "", 125000, "" },															//Carrier Special Rig(MTP)
            { "V_Chestrig_khk", "", 125000, "" },																	//Chest Rig(Khaki)
            { "V_PlateCarrierL_CTRG", "", 125000, "" },																//CTRG Plate Carrier Rig Mk.1(Light)
            { "V_TacVest_gen_F", "", 25000, "" },																	//V_TacVest_gen_F
			{ "V_PlateCarrierIA2_dgtl", "", 125000, "" },															//GA Carrier Rig(Digi)
			{ "V_HarnessOGL_brn", "", 125000, "" },																	//LBV Grenadier Harness
			{ "TRYK_LOC_AK_chestrig_OD", "", 125000, "" },															//LOC AK chestrig(OD)
			{ "V_BandollierB_cbr", "", 125000, "" },																//Slash Bandolier(Coyote)
			{ "TAC_V_Sheriff_BA_TC", "", 125000, "" },																//TAC PMC vest(CY)
			{ "TAC_V_Sheriff_BA_TC2", "", 125000, "" },																//TAC PMC vest assault(CY)
			{ "TAC_V_Sheriff_BA_TCL7", "", 125000, "" },															//TAC PMC vest Grenader L(CY)
			{ "V_TacVest_khk", "", 125000, "" },																	//Tactical Vest(Khaki)
			{ "TRYK_V_ArmorVest_AOR2", "", 125000, "" },															//TRYK Carrier Rig Lite(AOR2)
			{ "TRYK_V_ArmorVest_Brown", "", 125000, "" },															//TRYK Carrier Rig Lite(Brown)
			{ "TRYK_V_PlateCarrier_wood_L", "", 125000, "" },														//TRYK GA Career Rig Light(Wood)
			{ "TRYK_V_ChestRig", "", 125000, "" },																	//TRYK Chestrig light
			{ "V_TacVestIR_blk", "", 125000, "" },																	//Raven Vest
			{ "V_PlateCarrierGL_blk", "", 25000, "" },																//Carrier GL Rig(Black)
			{ "V_PlateCarrierGL_mtp", "", 125000, "" },																//Carrier GL Rig(MTP)
			{ "V_PlateCarrierGL_tna_F", "", 125000, "" },															//Carrier GL Rig(Tropic)
			{ "V_PlateCarrier1_blk", "", 25000, "" },																//Carrier Lite(Black)
			{ "TAC_ArmorVest_Winter", "", 125000, "" },																//TAC Plate Carrier Rig(Winter)
			{ "TAC_V_CTBA", "", 125000, "" },																	
			{ "TAC_V_CTBA2", "", 125000, "" },																	
			{ "TRYK_V_ArmorVest_AOR2_2", "", 125000, "" },															//TRYK Carrier Rig(AOR2)
			{ "TRYK_V_ArmorVest_Brown2", "", 125000, "" },															//TRYK Carrier Rig(Brown)
			{ "TRYK_V_ArmorVest_cbr2", "", 125000, "" },															//TRYK Carrier Rig(CBR)
			{ "TRYK_V_ArmorVest_khk2", "", 125000, "" },															//TRYK Carrier Rig(khk)
			{ "TRYK_V_ArmorVest_rgr2", "", 125000, "" },         													//TRYK Carrier Rig(rgr)
			// VIP Level 1
			{ "jamie_black", "", 25000, "call life_donorlevel >= 1" },												//Black Police Vest
			{ "jamie_black2", "", 25000, "call life_donorlevel >= 1" },												//Black Police Vest
			{ "jamie_blue2", "", 25000, "call life_donorlevel >= 1" },												//Blue Police Vest
			{ "jamie_blue", "", 25000, "call life_donorlevel >= 1" },												//Blue Police Vest
			// VIP Level 2
			{ "jamie_corrections_vest", "", 25000, "call life_donorlevel >= 2" },									//Corrections Vest
			{ "EF_BSF", "", 25000, "call life_donorlevel >= 2" },													//EF Sheriff badge(Suit)
			{ "EF_BLT_F1BSF", "", 25000, "call life_donorlevel >= 2" },												//EF Sheriff badge(Female)
			{ "EF_SH_BW", "", 25000, "call life_donorlevel >= 2" },													//EF Shoulder Holstrr(Brown)
			// VIP Level 3
			{ "Alysia_Vest_East_01", "", 25000, "call life_donorlevel >= 3" },										//Gilet ANT(1)
			{ "Alysia_Vest_East_02", "", 25000, "call life_donorlevel >= 3" },										//Gilet ANT(2)
			{ "Alysia_Vest_East_03", "", 25000, "call life_donorlevel >= 3" },										//Gilet ANT(3)
			{ "demian2435_police_belt", "", 25000, "call life_donorlevel >= 3" },									//Police Belt
			{ "demian2435_police_vest", "", 25000, "call life_donorlevel >= 3" },									//Police Vest
			{ "demian2435_swat_leader_vest", "", 25000, "call life_donorlevel >= 3" },								//Swat Leader Vest
			// VIP Level 4
			{ "demian2435_sniper_vest", "", 25000, "call life_donorlevel >= 4" },									//Swat Leader Vest
			{ "demian2435_swat_vest", "", 25000, "call life_donorlevel >= 4" },										//Swat Vest
			{ "TAC_V_Sheriff_BA_TB3", "", 25000, "call life_donorlevel >= 4" },										//TAC PMC vest CQB(BK)
			{ "TAC_V_Sheriff_BA_TB7", "", 25000, "call life_donorlevel >= 4" },										//TAC PMC vest Grenader(BK)
			{ "TAC_V_Sheriff_BA_TBL", "", 25000, "call life_donorlevel >= 4" },										//TAC PMC vest L(BK)
			{ "TAC_V_tacSVD_BK", "", 25000, "call life_donorlevel >= 4" },											//TAC SVD(BLK)
			// VIP Level 5
			{ "TAC_V_tacSVDL_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC SVD L(BLK)
			{ "TAC_V_tacv1M_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1(BK Mesh)
			{ "TAC_V_tacv1_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1(BK)
			{ "TAC_V_tacv1LC_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1 CQB(BLK)
			{ "TAC_V_tacv1L_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1 ep(BK)
			{ "TAC_V_tacv1EP_M", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1 with Holster(Mesh)
			{ "V_TacVest_blk_POLICE", "", 25000, "call life_donorlevel >= 5" },										//Tactical Vest(Police)
			{ "TRYK_V_IOTV_BLK", "", 25000, "call life_donorlevel >= 5" },											//TRYK IOTV light Vest(BLK)
			{ "Anime_Soldier_BRS_Vest", "", 25000, "call life_donorlevel >= 5" },									//Vest[Black Rock Shooter]
			{ "Anime_Soldier_HelloKitty_Vest", "", 25000, "call life_donorlevel >= 5" },							//Vest[Hello Kitty]
			{ "jamie_blacky2", "", 200000, "call life_donorlevel >= 5" }									        //Black Police Vest
			
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_mas_m_Bergen_al", "", 500, "" },
			{ "B_AssaultPack_ocamo", "", 500, "" },
			{ "B_Bergen_hex_F", "", 500, "" },
			{ "B_mas_m_Bergen_acr_c", "", 500, "" },
			{ "B_mas_Bergen_black", "", 500, "" },
			{ "B_mas_Bergen_mul", "", 500, "" },
			{ "B_Respawn_TentA_F", "", 500, "" },
			{ "B_Respawn_TentDome_F", "", 500, "" },
			{ "B_Carryall_ghex_F", "", 500, "" },
			{ "B_Carryall_ocamo", "", 500, "" },
			{ "B_FieldPack_ocamo", "", 500, "" },
			{ "B_Kitbag_cbr", "", 500, "" },
			{ "B_Kitbag_mcamo", "", 500, "" },
			{ "Skyline_Backpack_Chasse_Radio_01_F", "", 500, "" },
			{ "TAC_MTAP_MTP2", "", 500, "" },
			{ "TRYK_B_tube_cyt", "", 500, "" },
			{ "B_ViperHarness_hex_F", "", 500, "" },
			{ "TRYK_B_Medbag_ucp", "", 500, "" }
        };
    };
	

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },												
			{ "TRYK_U_B_PCUHsW4", "EMS Uniform", 5000, "" },										//TRYK Winter JACKET
			{ "TRYK_U_B_PCUHsW", "EMS Uniform", 5000, "" },											//TRYK Winter JACKET HOOD
			{ "TRYK_U_B_PCUHsW2", "EMS Uniform", 5000, "" },										//TRYK Winter JACKET HOOD (BK boot)
			{ "TRYK_U_B_PCUHsW6", "EMS Uniform", 5000, "" },										//TRYK Winter JACKET No Kneepad
			{ "TRYK_U_B_PCUHsW5", "EMS Uniform", 5000, "" },										//TRYK Winter JACKET hood No Kneepad
			{ "Skyline_Uniforme_Secouriste_01_F", "EMS Uniform", 5000, "" },						//Uniform de Secouriste 1
			{ "Skyline_Uniforme_Secouriste_02_F", "EMS Uniform", 5000, "" },						//Uniform de Secouriste 2
			{ "rds_uniform_doctor", "EMS Uniform", 5000, "" },
			{ "pook_MedicJumpsuit", "EMS Uniform", 5000, "" },										//Medic Jumpsuit
			{ "Skyline_Uniforme_Pilote_Secouriste_01_F", "EMS Uniform", 5000, "" },					//Tenue de pilote secouriste
			{ "U_fast_repair", "EMS Uniform", 5000, "" },											//Tenue Fast repair
			{ "combi_plonge_samu", "EMS Uniform", 5000, "" },
			{ "U_C_Scientist", "EMS Uniform", 5000, "" },											//Scientist Clothes
			{ "dukdik_medic", "EMS Uniform", 5000, "" },											//Medic Uniform
			{ "U_C_ConstructionCoverall_Vrana_F", "EMS Uniform", 5000, "" },						//Construction Coverall(Vrana)
			{ "U_C_ConstructionCoverall_Red_F", "EMS Uniform", 5000, "" },							//Construction Coverall(Red)
			{ "U_C_ConstructionCoverall_Blue_F", "EMS Uniform", 5000, "" },							//Construction Coverall(Blue)
			{ "U_C_ConstructionCoverall_Black_F", "EMS Uniform", 5000, "" },						//Construction Coverall(Black)
			{ "TRYK_U_B_Snow_CombatUniform", "EMS Uniform", 5000, "" },								//TRYK Snow Unifrom Type1
			{ "U_C_Paramedic_01_F", "EMS Uniform", 5000, "" }										//Paramedic Outfit
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "SAMU_helmet", "", 10, "" },
			{ "Skyline_Casque_Pilote_Secouriste_01_F", "", 100, "" },
			{ "Masque_Optimiste", "", 10, "" },
			{ "Kio_No1_Hat", "", 10, "" },
			{ "Kio_Santa_Hat", "", 10, "" },
			{ "H_PilotHelmetFighter_B", "", 5000, "" },
			{ "TAC_SF10H", "", 10, "" },
			{ "H_EarProtectors_white_F", "", 1000, "" },											//Ear Protectors (White)
			{ "Anime_Regular_HelloKitty_Headgear", "", 1000, "" },									//Headgear - Regular [Hello Kitty]
			{ "H_HelmetCrew_I", "", 1000, "" },														//Crew Helmet [AAF]
			{ "H_PASGT_neckprot_blue_press_F", "", 1000, "" },										//Press Helmet (Neck Protection)
			{ "H_Beret_Colonel", "", 1000, "" }														//Beret [NATO] (Colonel)
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
			{ "G_mas_wpn_gasmask_comp", "EMS Uniform", 5000, "" },
            { "G_Shades_Blue", "", 100, "" },
			{ "Mask_M40", "", 100, "" },															//M40 Gas Mask - BLK
			{ "TAC_PMC_ID_W2", "", 100, "" },														//TAC PMC ID Card [White]
			{ "G_B_Diving", "", 100, "" }															//Diving Goggles [NATO]
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
			{ "jamie_reflective", "", 5000, "" },
			{ "TAC_ArmorVest_Winter", "", 5000, "" },
			{ "TRYK_V_Bulletproof", "", 5000, "" },
			{ "EF_FemBA_F2", "", 5000, "" },
			{ "EF_PBDF_M1", "", 5000, "" },
			{ "AET_vest", "", 5000, "" },
			{ "V_EOD_blue_F", "", 5000, "" },														//EOD Vest (BLUE)
			{ "Respirateur_samu", "", 5000, "" },
			{ "Anime_Regular_HelloKitty_Vest", "", 5000, "" },										//Vest - Regular [Hello Kitty]
			{ "EF_GSG9_1PC", "", 5000, "" }															//EF POLICE Vest (G36)
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "Anime_Backpack_Pink_Expl", "EMS Backpack", 3000, "" },
			{ "Anime_Backpack_Pink_Medic", "EMS Backpack", 3000, "" },
			{ "Skyline_Backpack_Ecole_01_F", "EMS Backpack", 3000, "" },
			{ "TRYK_B_Coyotebackpack_WH", "EMS Backpack", 3000, "" },
			{ "Skyline_Sac_Secouriste_01_2_F", "EMS Backpack", 3000, "" },
			{ "koilmedicblue", "Casual Wears", 7000, "" },
			{ "koilmedicdarkred", "Casual Wears", 7000, "" },
			{ "koilmedicwhite", "Casual Wears", 7000, "" },
			{ "koilmedicyellow2", "Casual Wears", 7000, "" },
			{ "koilmedicyellow", "Casual Wears", 7000, "" },
			{ "koilbp_19", "Casual Wears", 7000, "" },
			{ "koilbp_2", "Casual Wears", 7000, "" },
			{ "koilaiden", "Casual Wears", 7000, "" },
			{ "koilbatman_1", "Casual Wears", 7000, "" },
			{ "koilbender_1", "Casual Wears", 7000, "" },
			{ "koilbender_2", "Casual Wears", 7000, "" },
			{ "koilbp_10", "Casual Wears", 7000, "" },
			{ "koilbp_11", "Casual Wears", 7000, "" },
			{ "koilbp_6", "Casual Wears", 7000, "" },
			{ "koilbp_5", "Casual Wears", 7000, "" },
			{ "koilbp_12", "Casual Wears", 7000, "" },
			{ "koilbp_3", "Casual Wears", 7000, "" },
			{ "koilclint_1", "Casual Wears", 7000, "" },
			{ "koileagle", "Casual Wears", 7000, "" },
			{ "koileminem_1", "Casual Wears", 7000, "" },
			{ "koilbp_8", "Casual Wears", 7000, "" },
			{ "koilbp_4", "Casual Wears", 7000, "" },
			{ "koilkatie", "Casual Wears", 7000, "" },
			{ "koilgoonsquad", "Casual Wears", 7000, "" },
			{ "koilgraf_1", "Casual Wears", 7000, "" },
			{ "koilgraf_2", "Casual Wears", 7000, "" },
			{ "koilgraf_3", "Casual Wears", 7000, "" },
			{ "koilgucci", "Casual Wears", 7000, "" },
			{ "koilhulk_1", "Casual Wears", 7000, "" },
			{ "koilbp_9", "Casual Wears", 7000, "" },
			{ "koiljoker_1", "Casual Wears", 7000, "" },
			{ "kaelmario", "Casual Wears", 7000, "" },
			{ "koilmedicred", "Casual Wears", 7000, "" },
			{ "kaelmonty", "Casual Wears", 7000, "" },
			{ "kaelmonty2", "Casual Wears", 7000, "" },
			{ "koilbp_1", "Casual Wears", 7000, "" },
			{ "koilbp_13", "Casual Wears", 7000, "" },
			{ "koilbp_14", "Casual Wears", 7000, "" },
			{ "koilpanda", "Casual Wears", 7000, "" },
			{ "koilbp_15", "Casual Wears", 7000, "" },
			{ "koilpumpkin_1", "Casual Wears", 7000, "" },
			{ "koilbp_16", "Casual Wears", 7000, "" },
			{ "koilcat", "Casual Wears", 7000, "" },
			{ "koilsheriff", "Casual Wears", 7000, "" },
			{ "koilsmashing", "Casual Wears", 7000, "" },
			{ "koilsparta_1", "Casual Wears", 7000, "" },
			{ "koilspecktators", "Casual Wears", 7000, "" },
			{ "koilsponge_1", "Casual Wears", 7000, "" },
			{ "koildarth", "Casual Wears", 7000, "" },
			{ "koilturtles_1", "Casual Wears", 7000, "" },
			{ "koilbp_7", "Casual Wears", 7000, "" },
			{ "koilbp_17", "Casual Wears", 7000, "" },
			{ "koilbp_18", "Casual Wears", 7000, "" },
			{ "B_Messenger_IDAP_F", "Casual Wears", 7000, "" },												//Messenger Bag [IDAP]
			{ "B_Parachute", "Casual Wears", 7000, "" },													//ParaChute [Dark]
			{ "C_IDAP_UAV_06_medical_backpack_F", "Casual Wears", 7000, "" }								//UAV Bag (AL-6,Medical) [IDAP]
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_CombatUniform_mcam_worn", "", 45000, "" },												//Combat Fatigues(MTP)
            { "U_I_G_Story_Protagonist_F", "", 45000, "" },
			{ "TRYK_U_B_WOOD_MARPAT_CombatUniformTshirt", "", 45000, "" },
			{ "TRYK_U_B_WOOD_MARPAT_CombatUniform", "", 45000, "" },
			{ "TRYK_U_B_woodR_CombatUniformTshirt", "", 45000, "" },
			{ "TRYK_U_B_wood_CombatUniform", "", 45000, "" },
			{ "TRYK_B_TRYK_UCP_T", "", 45000, "" },
			{ "TRYK_U_B_JSDF_CombatUniformTshirt", "", 45000, "" },
			{ "TRYK_U_B_JSDF_CombatUniform", "", 45000, "" },
			{ "TRYK_ZARATAKI", "", 45000, "" },
			{ "TRYK_ZARATAKI2", "", 45000, "" },
			{ "TRYK_ZARATAKI3", "", 45000, "" },
			{ "TRYK_U_taki_BLK", "", 45000, "" },
			{ "U_B_T_Soldier_F", "", 45000, "" },															//Combat Fatigues(Tropic)
			{ "U_O_CombatUniform_ocamo", "", 45000, "" },													//Fatigues(Hex)[CSAT]
			{ "U_I_FullGhillie_ard", "", 45000, "" },														//Full Ghillie(Arid)[AAF]
			{ "U_O_GhillieSuit", "", 45000, "" },															//Ghillie Suit[CSAT]
			{ "U_BG_Guerilla1_1", "", 45000, "" },															//Guerilla Garment
			{ "Skyline_Uniforme_Hello_Kitty_01_F", "", 45000, "" },
			{ "U_O_PilotCoveralls", "", 45000, "" },
			{ "B_RTA_Rifleman", "", 45000, "" },
			{ "B_RTA_Rifleman_Light", "", 45000, "" },
			{ "B_RTMC_Rifleman", "", 45000, "" },
			{ "B_RTN_Rifleman", "", 45000, "" },
			{ "B_RTN_Rifleman_Light", "", 45000, "" },
			// VIP Level 1
			{ "U_B_CombatUniform_mcam_tshirt", "", 45000, "call life_donorlevel >= 1" },					//Combat Fatigues(MTP)(Tee)
			{ "U_I_G_resistanceLeader_F", "", 45000, "call life_donorlevel >= 1" },							//Combat Fatigues(Stavrou)
			{ "U_B_T_Soldier_AR_F", "", 45000, "call life_donorlevel >= 1" },								//Combat Fatigues(Tropic,Tee)
			{ "U_I_CombatUniform", "", 45000, "call life_donorlevel >= 1" },								//Combat Fatigues(AAF)
			{ "U_I_CombatUniform_shortsleeve", "", 45000, "call life_donorlevel >= 1" },					//Combat Fatigues[AAF](Rolled-up)
			{ "U_Multicam_ej", "", 45000, "call life_donorlevel >= 1" },									//Cry Multicam
			{ "U_B_CTRG_1", "", 45000, "call life_donorlevel >= 1" },										//CTRG Combat Uniform
			{ "U_B_CTRG_3", "", 45000, "call life_donorlevel >= 1" },										//CTRG Combat Uniform(Rolled-up)
			{ "U_B_CTRG_2", "", 45000, "call life_donorlevel >= 1" },										//CTRG Combat Uniform(Tee)
			{ "U_B_CTRG_Soldier_F", "", 50000, "call life_donorlevel >= 1" },								//CTRG Stealth Uniform
			// VIP Level 2
			{ "U_B_CTRG_Soldier_3_F", "", 50000, "call life_donorlevel >= 2" },								//CTRG Stealth Uniform(Rolled-up)
			{ "U_B_CTRG_Soldier_2_F", "", 30000, "call life_donorlevel >= 2" },								//CTRG Stealth Uniform(Tee)
			{ "U_B_CTRG_Soldier_urb_1_F", "", 45000, "call life_donorlevel >= 2" },							//CTRG Urban Uniform
			{ "U_B_CTRG_Soldier_urb_3_F", "", 45000, "call life_donorlevel >= 2" },							//CTRG Urban Uniform(Rolled-up)
			{ "U_B_CTRG_Soldier_urb_2_F", "", 45000, "call life_donorlevel >= 2" },							//CTRG Urban Uniform(Tee)
			{ "U_O_T_Soldier_F", "", 45000, "call life_donorlevel >= 2" },									//Fatigues(Green Hex)[CSAT]
			{ "U_O_CombatUniform_oucamo", "", 45000, "call life_donorlevel >= 2" },							//Fatigues(Urban)[CSAT]
			{ "U_O_FullGhillie_ard", "", 80000, "call life_donorlevel >= 2" },								//Full Ghillie(Arid)[CSAT]
			{ "U_B_FullGhillie_ard", "", 80000, "call life_donorlevel >= 2" },								//Full Ghillie(Arid)[NATO]
			{ "U_O_T_FullGhillie_tna_F", "", 80000, "call life_donorlevel >= 2" },							//Full Ghillie(Jungie)[CSAT]
			// VIP Level 3
			{ "U_B_T_FullGhillie_tna_F", "", 80000, "call life_donorlevel >= 3" },							//Full Ghillie(Jungie)[NATO]
			{ "U_I_FullGhillie_lsh", "", 80000, "call life_donorlevel >= 3" },								//Full Ghillie(Lush)[AAF]
			{ "U_O_FullGhillie_lsh", "", 80000, "call life_donorlevel >= 3" },								//Full Ghillie(Lush)[CSAT]
			{ "U_B_FullGhillie_lsh", "", 80000, "call life_donorlevel >= 3" },								//Full Ghillie(Lush)[NATO]
			{ "U_I_FullGhillie_sard", "", 80000, "call life_donorlevel >= 3" },								//Full Ghillie(Semi-Arid)[AAF]
			{ "U_O_FullGhillie_sard", "", 80000, "call life_donorlevel >= 3" },								//Full Ghillie(Semi-Arid)[CSAT]
			{ "U_B_FullGhillie_sard", "", 80000, "call life_donorlevel >= 3" },								//Full Ghillie(Semi-Arid)[NATO]
			{ "U_O_T_Sniper_F", "", 65000, "call life_donorlevel >= 3" },									//Ghillie Suit(Green Hex)[CSAT]
			{ "U_B_T_Sniper_F", "", 65000, "call life_donorlevel >= 3" },									//Ghillie Suit(Tropic)[NATO]
			{ "U_I_GhillieSuit", "", 65000, "call life_donorlevel >= 3" },									//Ghillie Suit[AAF]
			{ "U_B_GhillieSuit", "", 65000, "call life_donorlevel >= 3" },									//Ghillie Suit[NATO]
			{ "U_BG_Guerrilla_6_1", "", 45000, "call life_donorlevel >= 3" },								//Guerilla Apparel
			{ "U_BG_Guerilla1_2_F", "", 45000, "call life_donorlevel >= 3" },								//Guerilla Garment(Olive)
			{ "U_BG_Guerilla3_1", "", 45000, "call life_donorlevel >= 3" },									//Guerilla Smocks
			{ "U_BG_leader", "", 45000, "call life_donorlevel >= 3" },										//Guerilla Uniform
			// VIP Level 4
			{ "U_O_T_Officer_F", "", 75000, "call life_donorlevel >= 4" },									//Officer Fatigues(Green Hex)[CSAT]
			{ "Paintball_Uniform_blue_01_O", "", 85000, "call life_donorlevel >= 4" },						//Paintball(blue01)				
			{ "Paintball_Uniform_desert_01_O", "", 85000, "call life_donorlevel >= 4" },					//Paintball(Desert01)	
			{ "Paintball_Uniform_desert_02_I", "", 85000, "call life_donorlevel >= 4" },					//Paintball(Desert02)
			{ "Paintball_Uniform_desert_03_B", "", 85000, "call life_donorlevel >= 4" },					//Paintball(Desert03)
			{ "Paintball_Uniform_Digital_Urban_01_O", "", 85000, "call life_donorlevel >= 4" },				//Paintball(Digital Urban01)
			{ "Paintball_Uniform_Fun_Camo_01_B", "", 85000, "call life_donorlevel >= 4" },					//Paintball(Fun Camo01)
			{ "Paintball_Uniform_Hex_Camo_01_O", "", 45000, "call life_donorlevel >= 4" },					//Paintball(Hex Camo01)
			{ "U_I_C_Soldier_Para_2_F", "", 45000, "call life_donorlevel >= 4" },							//Paramilitary Garb(Jacket)
			{ "U_I_C_Soldier_Para_3_F", "", 45000, "call life_donorlevel >= 4" },							//Paramilitary Garb(Shirt)
			{ "U_I_C_Soldier_Para_5_F", "", 45000, "call life_donorlevel >= 4" },							//Paramilitary Garb(Shorts)
			{ "U_I_C_Soldier_Para_4_F", "", 10000, "call life_donorlevel >= 4" },							//Paramilitary Garb(Tank Top)
			{ "U_I_C_Soldier_Para_1_F", "", 45000, "call life_donorlevel >= 4" },							//Paramilitary Garb(Tee)
			{ "U_O_SpecopsUniform_ocamo", "", 45000, "call life_donorlevel >= 4" },							//Recon Fatigues(Hex)
			{ "U_B_CombatUniform_mcam_vest", "", 45000, "call life_donorlevel >= 4" },						//Recon Fatigues(MTP)
			// VIP Level 5
			{ "U_B_T_Soldier_SL_F", "", 45000, "call life_donorlevel >= 5" },								//Recon Fatigues(Tropic)
			{ "TRYK_B_TRYK_3C_T", "", 45000, "call life_donorlevel >= 5" },									//TRYK 3CD Tshirt
			{ "TRYK_U_B_ACU", "", 45000, "call life_donorlevel >= 5" },										//TRYK ACU (UCP)
			{ "TRYK_U_B_ACUTshirt", "", 45000, "call life_donorlevel >= 5" },								//TRYK ACU (UCP)ROLL
			{ "TRYK_U_B_ARO1_CombatUniform", "", 45000, "call life_donorlevel >= 5" },						//TRYK AOR-1 BDU
			{ "TRYK_U_B_ARO1R_CombatUniform", "", 45000, "call life_donorlevel >= 5" },						//TRYK AOR-1 BDU Roll
			{ "TRYK_U_B_ARO1_BLK_CombatUniform", "", 45000, "call life_donorlevel >= 5" },					//TRYK AOR-1 +BLK BUD
			{ "TRYK_U_B_ARO1_BLK_R_CombatUniform", "", 45000, "call life_donorlevel >= 5" },				//TRYK AOR-1 +BLK BUD ROLL
			{ "TRYK_U_B_ARO2_CombatUniform", "", 45000, "call life_donorlevel >= 5" },						//TRYK AOR-2 BDU
			{ "TRYK_U_B_ARO2R_CombatUniform", "", 45000, "call life_donorlevel >= 5" },						//TRYK AOR-2 BDU Roll
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_HelmetSpecO_ocamo", "", 1650, "" },
            { "H_Booniehat_khk", "", 1800, "" },
            { "H_Booniehat_tna_F", "", 1850, "" },
            { "H_HelmetB_desert", "", 1850, "" },
            { "H_HelmetLeaderO_ocamo", "", 1800, "" },
            { "H_HelmetSpecB", "", 2500, "" },
			{ "H_HelmetB_light", "", 2500, "" },
			{ "Masque_Dallas", "", 2500, "" },
			{ "mgsr_headbag	", "", 2500, "" },
			{ "H_HelmetIA", "", 2500, "" },
			{ "H_MilCap_ocamo", "", 2500, "" },
			{ "H_Shemag_olive", "", 2500, "" },
			{ "H_ShemagOpen_tan", "", 2500, "" },
			{ "RTA_Boonie_Hat", "", 2500, "" },
			{ "RTA_Infantry_Beret", "", 2500, "" },
			{ "RTA_PASGT_Helmet", "", 2500, "" },
			{ "RTMC_Boonie_Hat", "", 2500, "" },
			{ "RTMC_Infantry_Beret", "", 2500, "" },
			{ "RTMC_PASGT_Helmet", "", 2500, "" },
			{ "RTN_Boonie_Hat", "", 2500, "" },
			{ "RTN_Infantry_Beret", "", 2500, "" },
			{ "RTN_PASGT_Helmet", "", 2500, "" },
			{ "H_HelmetB_TI_tna_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
			{ "V_PlateCarrierGL_rgr", "", 125000, "" },																//Carrier GL Rig(Green)
			{ "V_PlateCarrierSpec_mtp", "", 125000, "" },															//Carrier Special Rig(MTP)
            { "V_Chestrig_khk", "", 125000, "" },																	//Chest Rig(Khaki)
            { "V_PlateCarrierL_CTRG", "", 125000, "" },																//CTRG Plate Carrier Rig Mk.1(Light)
            { "V_TacVest_gen_F", "", 25000, "" },																	//V_TacVest_gen_F
			{ "V_PlateCarrierIA2_dgtl", "", 125000, "" },															//GA Carrier Rig(Digi)
			{ "V_HarnessOGL_brn", "", 125000, "" },																	//LBV Grenadier Harness
			{ "TRYK_LOC_AK_chestrig_OD", "", 125000, "" },															//LOC AK chestrig(OD)
			{ "V_BandollierB_cbr", "", 125000, "" },																//Slash Bandolier(Coyote)
			{ "TAC_V_Sheriff_BA_TC", "", 125000, "" },																//TAC PMC vest(CY)
			{ "TAC_V_Sheriff_BA_TC2", "", 125000, "" },																//TAC PMC vest assault(CY)
			{ "TAC_V_Sheriff_BA_TCL7", "", 125000, "" },															//TAC PMC vest Grenader L(CY)
			{ "V_TacVest_khk", "", 125000, "" },																	//Tactical Vest(Khaki)
			{ "TRYK_V_ArmorVest_AOR2", "", 125000, "" },															//TRYK Carrier Rig Lite(AOR2)
			{ "TRYK_V_ArmorVest_Brown", "", 125000, "" },															//TRYK Carrier Rig Lite(Brown)
			{ "TRYK_V_PlateCarrier_wood_L", "", 125000, "" },														//TRYK GA Career Rig Light(Wood)
			{ "TRYK_V_ChestRig", "", 125000, "" },																	//TRYK Chestrig light
			{ "V_TacVestIR_blk", "", 125000, "" },																	//Raven Vest
			{ "V_PlateCarrierGL_blk", "", 25000, "" },																//Carrier GL Rig(Black)
			{ "V_PlateCarrierGL_mtp", "", 125000, "" },																//Carrier GL Rig(MTP)
			{ "V_PlateCarrierGL_tna_F", "", 125000, "" },															//Carrier GL Rig(Tropic)
			{ "V_PlateCarrier1_blk", "", 25000, "" },																//Carrier Lite(Black)
			{ "TAC_ArmorVest_Winter", "", 125000, "" },																//TAC Plate Carrier Rig(Winter)
			{ "TAC_V_CTBA", "", 125000, "" },																	
			{ "TAC_V_CTBA2", "", 125000, "" },																	
			{ "TRYK_V_ArmorVest_AOR2_2", "", 125000, "" },															//TRYK Carrier Rig(AOR2)
			{ "TRYK_V_ArmorVest_Brown2", "", 125000, "" },															//TRYK Carrier Rig(Brown)
			{ "TRYK_V_ArmorVest_cbr2", "", 125000, "" },															//TRYK Carrier Rig(CBR)
			{ "TRYK_V_ArmorVest_khk2", "", 125000, "" },															//TRYK Carrier Rig(khk)
			{ "TRYK_V_ArmorVest_rgr2", "", 125000, "" },															//TRYK Carrier Rig(rgr)
			// VIP Level 1
			{ "jamie_black", "", 25000, "call life_donorlevel >= 1" },												//Black Police Vest
			{ "jamie_black2", "", 25000, "call life_donorlevel >= 1" },												//Black Police Vest
			{ "jamie_blue2", "", 25000, "call life_donorlevel >= 1" },												//Blue Police Vest
			{ "jamie_blue", "", 25000, "call life_donorlevel >= 1" },												//Blue Police Vest
			// VIP Level 2
			{ "jamie_corrections_vest", "", 25000, "call life_donorlevel >= 2" },									//Corrections Vest
			{ "EF_BSF", "", 25000, "call life_donorlevel >= 2" },													//EF Sheriff badge(Suit)
			{ "EF_BLT_F1BSF", "", 25000, "call life_donorlevel >= 2" },												//EF Sheriff badge(Female)
			{ "EF_SH_BW", "", 25000, "call life_donorlevel >= 2" },													//EF Shoulder Holstrr(Brown)
			// VIP Level 3
			{ "Alysia_Vest_East_01", "", 25000, "call life_donorlevel >= 3" },										//Gilet ANT(1)
			{ "Alysia_Vest_East_02", "", 25000, "call life_donorlevel >= 3" },										//Gilet ANT(2)
			{ "Alysia_Vest_East_03", "", 25000, "call life_donorlevel >= 3" },										//Gilet ANT(3)
			{ "demian2435_police_belt", "", 25000, "call life_donorlevel >= 3" },									//Police Belt
			{ "demian2435_police_vest", "", 25000, "call life_donorlevel >= 3" },									//Police Vest
			{ "demian2435_swat_leader_vest", "", 25000, "call life_donorlevel >= 3" },								//Swat Leader Vest
			// VIP Level 4
			{ "demian2435_sniper_vest", "", 25000, "call life_donorlevel >= 4" },									//Swat Leader Vest
			{ "demian2435_swat_vest", "", 25000, "call life_donorlevel >= 4" },										//Swat Vest
			{ "TAC_V_Sheriff_BA_TB3", "", 25000, "call life_donorlevel >= 4" },										//TAC PMC vest CQB(BK)
			{ "TAC_V_Sheriff_BA_TB7", "", 25000, "call life_donorlevel >= 4" },										//TAC PMC vest Grenader(BK)
			{ "TAC_V_Sheriff_BA_TBL", "", 25000, "call life_donorlevel >= 4" },										//TAC PMC vest L(BK)
			{ "TAC_V_tacSVD_BK", "", 25000, "call life_donorlevel >= 4" },											//TAC SVD(BLK)
			// VIP Level 5
			{ "TAC_V_tacSVDL_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC SVD L(BLK)
			{ "TAC_V_tacv1M_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1(BK Mesh)
			{ "TAC_V_tacv1_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1(BK)
			{ "TAC_V_tacv1LC_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1 CQB(BLK)
			{ "TAC_V_tacv1L_BK", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1 ep(BK)
			{ "TAC_V_tacv1EP_M", "", 25000, "call life_donorlevel >= 5" },											//TAC V-1 with Holster(Mesh)
			{ "V_TacVest_blk_POLICE", "", 25000, "call life_donorlevel >= 5" },										//Tactical Vest(Police)
			{ "TRYK_V_IOTV_BLK", "", 25000, "call life_donorlevel >= 5" },											//TRYK IOTV light Vest(BLK)
			{ "Anime_Soldier_BRS_Vest", "", 25000, "call life_donorlevel >= 5" },									//Vest[Black Rock Shooter]
			{ "Anime_Soldier_HelloKitty_Vest", "", 25000, "call life_donorlevel >= 5" },							//Vest[Hello Kitty]
		    { "jamie_blacky2", "", 200000, "call life_donorlevel >= 5" }							         		//Black Police Vest
			
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_mas_m_Bergen_al", "", 500, "" },
			{ "B_AssaultPack_ocamo", "", 500, "" },
			{ "B_Bergen_hex_F", "", 500, "" },
			{ "B_mas_m_Bergen_acr_c", "", 500, "" },
			{ "B_mas_Bergen_black", "", 500, "" },
			{ "B_mas_Bergen_mul", "", 500, "" },
			{ "B_Respawn_TentA_F", "", 500, "" },
			{ "B_Respawn_TentDome_F", "", 500, "" },
			{ "B_Carryall_ghex_F", "", 500, "" },
			{ "B_Carryall_ocamo", "", 500, "" },
			{ "B_FieldPack_ocamo", "", 500, "" },
			{ "B_Kitbag_cbr", "", 500, "" },
			{ "B_Kitbag_mcamo", "", 500, "" },
			{ "Skyline_Backpack_Chasse_Radio_01_F", "", 500, "" },
			{ "TAC_MTAP_MTP2", "", 500, "" },
			{ "TRYK_B_tube_cyt", "", 500, "" },
			{ "B_ViperHarness_hex_F", "", 500, "" },
			{ "TRYK_B_Medbag_ucp", "", 500, "" },
			{ "B_mas_m_Bergen_us_m", "", 7500, "" },
			{ "B_mas_m_Bergen_us_g", "", 7500, "" }
        };
    };
	
	class merc {
        title = "STR_Shops_C_merc";
        conditions = "license_civ_merc";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "TRYK_U_pad_hood_Cl", "", 2000, "" },
			{ "TRYK_shirts_PAD_YEL", "", 2000, "" },
			{ "TRYK_shirts_TAN_PAD_RED2", "", 2000, "" },
			{ "TRYK_U_B_BLK_OD_Rollup_CombatUniform", "", 2000, "" },
			{ "TRYK_U_B_wh_tan_Rollup_CombatUniform", "", 2000, "" },
			{ "TRYK_shirts_DENIM_BK", "", 2000, "" },
			{ "TRYK_shirts_DENIM_WHB", "", 2000, "" },
			{ "TRYK_T_camo_tan", "", 2000, "" },
			{ "TRYK_B_TRYK_3C_T", "", 100000, "" },
			{ "TRYK_U_B_wh_blk_Rollup_CombatUniform", "", 50000, "" },
			{ "TRYK_U_B_wh_OD_Rollup_CombatUniform", "", 50000, "" },
			{ "TRYK_U_B_wh_tan_Rollup_CombatUniform", "", 50000, "" },
			{ "TRYK_U_B_Snow_CombatUniform", "", 50000, "" },
			{ "TRYK_U_B_PCUHsW3nh", "", 50000, "" },
			{ "TRYK_U_B_PCUHsW3", "", 50000, "" },
			{ "A3L_CivShirtNikeCamo", "", 50000, "" },
			{ "U_B_GEN_Soldier_F", "", 50000, "" },
			{ "TRYK_SUITS_BLK_F", "", 50000, "" },
			{ "TRYK_U_B_Wood_T", "", 50000, "" },
			{ "TRYK_U_B_MARPAT_Desert_Tshirt", "", 50000, "" },
			{ "TRYK_U_B_BLTAN_T", "", 50000, "" },
			{ "TRYK_U_B_GRY_PCUs_R", "", 50000, "" },
			{ "TRYK_U_taki_G_BLK", "", 50000, "" },
			{ "U_BG_Guerrilla_6_1", "", 50000, "" },
			{ "U_B_T_Soldier_SL_F", "", 50000, "" },
			{ "Alysia_Uniform_East_adjudant_Parade", "", 50000, "" },
			{ "Alysia_Uniform_East_colonel_Parade", "", 50000, "" },
			{ "TRYK_U_B_AOR2_OD_CombatUniform", "", 50000, "" },
			{ "U_B_CTRG_Soldier_2_F", "", 50000, "" },
		    { "TRYK_U_B_TANOCP_R_CombatUniformTshirt", "", 50000, "" },
			{ "EF_HMARMY_2", "", 5000, "" }, 
			{ "TRYK_U_B_ACU", "", 45000, "" }, 
			{ "TRYK_U_B_ARO1_CombatUniform", "", 45000, "" },
			{ "Skyline_Uniforme_Depanneur_01_F", "", 45000, "" },
			{ "TRYK_U_denim_hood_mc", "", 5000, "" },
			{ "A3LJumperCIDGreen", "", 45000, "" }
			};
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_khk_hs", "", 6500, "" },
			{ "H_Watchcap_camo", "", 6500, "" },
			{ "H_Booniehat_oli", "", 6500, "" },
			{ "H_Cap_oli_hs", "", 6500, "" },
			{ "H_Cap_headphones", "", 6500, "" },
			{ "TRYK_H_headsetcap_od_Glasses", "", 6500, "" },
			{ "TRYK_r_cap_od_Glasses", "", 6500, "" },
			{ "mgsr_beret", "", 6500, "" },
			{ "mgsr_beret_rouge", "", 6500, "" },
			{ "TRYK_ESS_CAP", "", 6500, "" },
			{ "TRYK_ESS_CAP_tan", "", 6500, "" },
			{ "H_Beret_gen_F", "", 6500, "" },
			{ "H_HelmetB_Enh_tna_F", "", 12000, "" },
			{ "H_HelmetB_tna_F", "", 12000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 2000, "" },
            { "G_Shades_Blue", "", 2000, "" },
            { "G_Sport_Blackred", "", 2500, "" },
            { "G_Sport_Checkered", "", 2500, "" },
            { "G_Sport_Blackyellow", "", 2500, "" },
            { "G_Sport_BlackWhite", "", 2500, "" },
            { "G_Lowprofile", "", 3000, "" },
            { "G_Squares", "", 5000, "" },
            { "G_Combat", "", 1250, "" },
            { "TRYK_Shemagh_G", "", 1500, "" },
			{ "TRYK_Shemagh", "", 1500, "" },
			{ "TRYK_Shemagh_WH", "", 1500, "" },
			{ "EWK_Cig2", "", 1500, "" },
			{ "G_mas_wpn_shemag_mask", "", 5000, "" },
			{ "TRYK_US_ESS_Glasses_TAN_BLK", "", 5000, "" },
			{ "G_mas_wpn_bala", "", 5000, "" },
			{ "G_mas_wpn_bala_mask", "", 5000, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
			{ "TAC_V_Sheriff_BA_TC", "", 20000, "" },
			{ "TAC_V_Sheriff_BA_TB", "", 20000, "" },
			{ "TAC_V_Sheriff_BA_T", "", 20000, "" },
			{ "TAC_V_Sheriff_BA_TCL", "", 20000, "" },
			{ "TAC_V_Sheriff_BA_TL", "", 20000, "" },
			{ "TAC_V_Sheriff_BA_TC6", "", 20000, "" },
			{ "TAC_V_Sheriff_BA_T6", "", 20000, "" },
			{ "Anime_Soldier_HelloKitty_Vest", "", 20000, "" },
			{ "Anime_Soldier_BRS_Vest", "", 20000, "" },
			{ "TAC_V_Sheriff_BA_TCL4", "", 20000, "" },
			{ "TRYK_V_Bulletproof_BLK", "", 20000, "" },
			{ "demian2435_police_belt", "", 20000, "" },  
			{ "TRYK_V_ArmorVest_AOR1_2", "", 20000, "" }, 
			{ "jamie_black2", "", 20000, "" },
			{ "jamie_black", "", 20000, "" },
			{ "EF_GSG9_2", "", 20000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_AssaultPack_cbr", "", 5000, "" },
			{ "B_AssaultPack_tna_F", "", 5000, "" },
			{ "B_mas_Kitbag_des", "", 5000, "" },
			{ "B_Kitbag_rgr", "", 5000, "" },
			{ "B_FieldPack_oli", "", 5000, "" },
			{ "B_FieldPack_cbr", "", 5000, "" },
			{ "B_Carryall_oli", "", 5000, "" },
			{ "B_Carryall_khk", "", 5000, "" },
			{ "TRYK_B_Carryall_wood", "", 5000, "" },
			{ "B_mas_m_Bergen_acr_w", "", 5000, "" },
			{ "TRYK_B_Coyotebackpack_BLK", "", 5000, "" },
			{ "koilbp_19", "Casual Wears", 7000, "" },
			{ "koilbp_2", "Casual Wears", 7000, "" },
			{ "koilaiden", "Casual Wears", 7000, "" },
			{ "koilbatman_1", "Casual Wears", 7000, "" },
			{ "koilbender_1", "Casual Wears", 7000, "" },
			{ "koilbender_2", "Casual Wears", 7000, "" },
			{ "koilbp_10", "Casual Wears", 7000, "" },
			{ "koilbp_11", "Casual Wears", 7000, "" },
			{ "koilbp_6", "Casual Wears", 7000, "" },
			{ "koilbp_5", "Casual Wears", 7000, "" },
			{ "koilbp_12", "Casual Wears", 7000, "" },
			{ "koilbp_3", "Casual Wears", 7000, "" },
			{ "koilclint_1", "Casual Wears", 7000, "" },
			{ "koileagle", "Casual Wears", 7000, "" },
			{ "koileminem_1", "Casual Wears", 7000, "" },
			{ "koilbp_8", "Casual Wears", 7000, "" },
			{ "koilbp_4", "Casual Wears", 7000, "" },
			{ "koilkatie", "Casual Wears", 7000, "" },
			{ "koilgoonsquad", "Casual Wears", 7000, "" },
			{ "koilgraf_1", "Casual Wears", 7000, "" },
			{ "koilgraf_2", "Casual Wears", 7000, "" },
			{ "koilgraf_3", "Casual Wears", 7000, "" },
			{ "koilgucci", "Casual Wears", 7000, "" },
			{ "koilhulk_1", "Casual Wears", 7000, "" },
			{ "koilbp_9", "Casual Wears", 7000, "" },
			{ "koiljoker_1", "Casual Wears", 7000, "" },
			{ "kaelmario", "Casual Wears", 7000, "" },
			{ "koilmedicred", "Casual Wears", 7000, "" },
			{ "kaelmonty", "Casual Wears", 7000, "" },
			{ "kaelmonty2", "Casual Wears", 7000, "" },
			{ "koilbp_1", "Casual Wears", 7000, "" },
			{ "koilbp_13", "Casual Wears", 7000, "" },
			{ "koilbp_14", "Casual Wears", 7000, "" },
			{ "koilpanda", "Casual Wears", 7000, "" },
			{ "koilbp_15", "Casual Wears", 7000, "" },
			{ "koilpumpkin_1", "Casual Wears", 7000, "" },
			{ "koilbp_16", "Casual Wears", 7000, "" },
			{ "koilcat", "Casual Wears", 7000, "" },
			{ "koilsheriff", "Casual Wears", 7000, "" },
			{ "koilsmashing", "Casual Wears", 7000, "" },
			{ "koilsparta_1", "Casual Wears", 7000, "" },
			{ "koilspecktators", "Casual Wears", 7000, "" },
			{ "koilsponge_1", "Casual Wears", 7000, "" },
			{ "koildarth", "Casual Wears", 7000, "" },
			{ "koilturtles_1", "Casual Wears", 7000, "" },
			{ "koilbp_7", "Casual Wears", 7000, "" },
			{ "koilbp_17", "Casual Wears", 7000, "" },
			{ "koilbp_18", "Casual Wears", 7000, "" },
			{ "B_mas_m_Bergen_acr_w", "", 7500, "" },
			{ "B_mas_m_Bergen_acr_c", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };
	
	class taxi {
        title = "STR_Shops_C_Bruce";
        license = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "EF_suit_1", "", 5000, "" },
            { "EF_suit_2", "", 5000, "" },
            { "EF_suit_3", "", 5000, "" },
            { "EF_suit_4", "", 5000, "" },
            { "EF_suit_5", "", 5000, "" },
            { "EF_suit_6", "", 5000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "Payday_GeneralO", "", 425, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
			{ "Skyline_Skyrim", "", 125, "" },
			{ "EWK_Cigar1", "", 125, "" },
			{ "EWK_Cig2", "", 125, "" },
			{ "Bear_RoundGlasses", "", 125, "" },
			{ "Bear_RoundGlasses_blk", "", 125, "" },
			{ "G_Spectacles", "", 125, "" },
			{ "G_Spectacles_Tinted", "", 125, "" },
			{ "G_Combat", "", 125, "" },
			{ "G_Combat", "", 125, "" },
			{ "G_Combat", "", 125, "" },
			{ "G_Combat", "", 125, "" },
			{ "G_Combat", "", 125, "" },
			{ "G_Combat", "", 125, "" },
			{ "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" },
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
			{ "B_Bergen_tna_F", "", 7500, "" },
			{ "B_mas_m_Bergen_acr_w", "", 7500, "" },
			{ "B_mas_m_Bergen_acr_c", "", 7500, "" }
        };
    };
};
