// Special Forces

// Riflemen

// Rifleman
class sia_medu_sf_rifleman: sia_medu_rifleman
{
    editorSubcategory = "sia_infantry_sf";

	Items[] = {"FirstAidKit","rhsusf_acc_nt4_tan","rhsusf_ANPVS_14"};
	RespawnItems[] = {"FirstAidKit","rhsusf_acc_nt4_tan","rhsusf_ANPVS_14"};
    
    linkedItems[] = {"UK3CB_TKA_B_V_GA_LITE_WDL","rhsusf_ach_bare_des",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_GA_LITE_WDL","rhsusf_ach_bare_des",Standard_Equipment};

    weapons[] = {"sia_medu_weap_g36kv_eotech","rhsusf_weap_m9","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_g36kv_eotech","rhsusf_weap_m9","Throw","Put"};

    magazines[] =
    {
        MAG_7(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(HandGrenade),
        "SmokeShell"
    };
    respawnMagazines[] =
    {
        MAG_7(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(HandGrenade),
        "SmokeShell"
    };
};

// Grenadier
class sia_medu_sf_grenadier: sia_medu_grenadier
{
    editorSubcategory = "sia_infantry_sf";

	Items[] = {"FirstAidKit","rhsusf_ANPVS_14"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14"};

    linkedItems[] = {"UK3CB_TKA_B_V_GA_HEAVY_WDL","rhsusf_ach_bare_des_ess",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_GA_HEAVY_WDL","rhsusf_ach_bare_des_ess",Standard_Equipment};

    weapons[] = {"sia_medu_weap_g36kv_ag36_comp4","rhsusf_weap_m9","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_g36kv_ag36_comp4","rhsusf_weap_m9","Throw","Put"};

    magazines[] =
    {
        MAG_7(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(HandGrenade),
        MAG_2(MiniGrenade),
        "1Rnd_HE_Grenade_shell",
        "SmokeShell"
    };
    respawnMagazines[] =
    {
        MAG_7(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(HandGrenade),
        MAG_2(MiniGrenade),
        "1Rnd_HE_Grenade_shell",
        "SmokeShell"
    };

    backpack = "sia_medu_backpack_gr";
};

// Light Anti-tank
class sia_medu_sf_rifleman_lat : sia_medu_rifleman_lat
{
    editorSubcategory = "sia_infantry_sf";

	Items[] = {"FirstAidKit","rhsusf_acc_nt4_tan","rhsusf_ANPVS_14"};
	RespawnItems[] = {"FirstAidKit","rhsusf_acc_nt4_tan","rhsusf_ANPVS_14"};

    displayName = "Rifleman (M136)"

    linkedItems[] = {"UK3CB_TKA_B_V_GA_LITE_WDL","rhsusf_ach_bare_des",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_GA_LITE_WDL","rhsusf_ach_bare_des",Standard_Equipment};

    weapons[] = {"sia_medu_weap_g36kv_eotech","rhsusf_weap_m9","rhs_weap_M136","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_g36kv_eotech","rhsusf_weap_m9","rhs_weap_M136","Throw","Put"};

    magazines[] =
    {
        MAG_7(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(HandGrenade),
        "SmokeShell",
        "rhs_m136_mag"
    };
    respawnMagazines[] =
    {
        MAG_7(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(HandGrenade),
        "SmokeShell",
        "rhs_m136_mag"
    };

    backpack = "";
};

// AT Specialist
class sia_medu_sf_specialist_at : sia_medu_specialist_at
{
    editorSubcategory = "sia_infantry_sf";

	Items[] = {"FirstAidKit","rhsusf_acc_nt4_tan","rhsusf_ANPVS_14"};
	RespawnItems[] = {"FirstAidKit","rhsusf_acc_nt4_tan","rhsusf_ANPVS_14"};

    linkedItems[] = {"UK3CB_TKA_B_V_GA_HEAVY_WDL","rhsusf_ach_bare_des_headset",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_GA_HEAVY_WDL","rhsusf_ach_bare_des_headset",Standard_Equipment};

    weapons[] = {"sia_medu_weap_g36kv_eotech","rhsusf_weap_m9","rhs_weap_maaws","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_g36kv_eotech","rhsusf_weap_m9","rhs_weap_maaws","Throw","Put"};

    magazines[] =
    {
        MAG_7(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(SmokeShell),
        "HandGrenade",
        "rhs_mag_maaws_HEAT"
    };
    respawnMagazines[] =
    {
        MAG_7(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(SmokeShell),
        "HandGrenade",
        "rhs_mag_maaws_HEAT"
    };

    backpack = "sia_medu_backpack_sf_at"
};

class sia_medu_sf_autorifleman : sia_medu_autorifleman
{
    editorSubcategory = "sia_infantry_sf";

	Items[] = {"FirstAidKit","rhsusf_acc_nt4_black","rhsusf_ANPVS_14"};
	RespawnItems[] = {"FirstAidKit","rhsusf_acc_nt4_black","rhsusf_ANPVS_14"};

    linkedItems[] = {"UK3CB_TKA_B_V_GA_LITE_WDL","rhsusf_ach_bare_des",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_GA_LITE_WDL","rhsusf_ach_bare_des",Standard_Equipment};

    weapons[] = {"sia_medu_weap_minimi_elcan","rhsusf_weap_m9","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_minimi_elcan","rhsusf_weap_m9","Throw","Put"};

    magazines[] =
    {
        MAG_2(rhsusf_200Rnd_556x45_box),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        MAG_2(rhsusf_200Rnd_556x45_box),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(SmokeShell)
    };

    backpack = "sia_medu_backpack_sf_autorifleman";
};

class sia_medu_sf_machinegunner : sia_medu_machinegunner
{
    editorSubcategory = "sia_infantry_sf";

	Items[] = {"FirstAidKit","ace_muzzle_mzls_b","rhsusf_ANPVS_14"};
	RespawnItems[] = {"FirstAidKit","ace_muzzle_mzls_b","rhsusf_ANPVS_14"};

    linkedItems[] = {"UK3CB_TKA_B_V_GA_HEAVY_WDL","rhsusf_ach_bare_des_headset",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_GA_HEAVY_WDL","rhsusf_ach_bare_des_headset",Standard_Equipment};

    weapons[] = {"sia_medu_weap_m240b_elcan_ard","rhsusf_weap_m9","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_m240b_elcan_ard","rhsusf_weap_m9","Throw","Put"};

    magazines[] =
    {
        MAG_2(rhsusf_100Rnd_762x51_m62_tracer),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        MAG_2(rhsusf_100Rnd_762x51_m62_tracer),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(SmokeShell)
    };

    backpack = "sia_medu_backpack_sf_machinegunner";
};

class sia_medu_sf_marksman : sia_medu_marksman
{
    editorSubcategory = "sia_infantry_sf";

	Items[] = {"FirstAidKit","rhsusf_acc_aac_762sdn6_silencer","rhsusf_ANPVS_14"};
	RespawnItems[] = {"FirstAidKit","rhsusf_acc_aac_762sdn6_silencer","rhsusf_ANPVS_14"};

    linkedItems[] = {"UK3CB_TKA_B_V_TacVest_Tan","VSM_Bowman_cap_Tan","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_TacVest_Tan","VSM_Bowman_cap_Tan","rhssaf_zrak_rd7j",Standard_Equipment};

    weapons[] = {"sia_medu_weap_scarh_mrco_grip","rhsusf_weap_m9","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_scarh_mrco_grip","rhsusf_weap_m9","Throw","Put"};

    magazines[] =
    {
        MAG_5(rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
       "SmokeShell"
    };
    respawnMagazines[] =
    {
        MAG_5(rhs_mag_20Rnd_SCAR_762x51_m80_ball_bk),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        "SmokeShell"
    };

    backpack = "";
};

// Leadership

// Officer
class sia_medu_sf_officer : sia_medu_officer
{
    editorSubcategory = "sia_infantry_sf";

	Items[] = {"FirstAidKit","rhsusf_acc_nt4_black","rhsusf_ANPVS_14"};
	RespawnItems[] = {"FirstAidKit","rhsusf_acc_nt4_black","rhsusf_ANPVS_14"};

    linkedItems[] = {"UK3CB_TKA_B_V_GA_LITE_WDL","UK3CB_TKA_B_H_Beret",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_GA_LITE_WDL","UK3CB_TKA_B_H_Beret",Standard_Equipment};

    weapons[] = {"rhs_weap_g36c","rhsusf_weap_m9","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_g36c","rhsusf_weap_m9","Throw","Put"};

    magazines[] =
    {
        MAG_7(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "SmokeShellYellow"
    };
    respawnMagazines[] =
    {
        MAG_7(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "SmokeShellYellow"
    };
};    

// Squad Leader
class sia_medu_sf_squadleader : sia_medu_squadleader
{
    editorSubcategory = "sia_infantry_sf";

	Items[] = {"FirstAidKit","rhsusf_acc_nt4_tan","rhsusf_ANPVS_14"};
	RespawnItems[] = {"FirstAidKit","rhsusf_acc_nt4_tan","rhsusf_ANPVS_14"};

    linkedItems[] = {"UK3CB_TKA_B_V_GA_HEAVY_WDL","rhsusf_ach_bare_des_headset_ess","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_GA_HEAVY_WDL","rhsusf_ach_bare_des_headset_ess","rhssaf_zrak_rd7j",Standard_Equipment};

    weapons[] = {"sia_medu_weap_g36kv_mrco","rhsusf_weap_m9","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_g36kv_mrco","rhsusf_weap_m9","Throw","Put"};

    magazines[] =
    {
        MAG_5(rhssaf_30rnd_556x45_EPR_G36),
        MAG_5(rhssaf_30rnd_556x45_Tracers_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "SmokeShellYellow"
    };
    respawnMagazines[] =
    {
        MAG_5(rhssaf_30rnd_556x45_EPR_G36),
        MAG_5(rhssaf_30rnd_556x45_Tracers_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "SmokeShellYellow"
    };

    backpack ="UK3CB_TKA_B_B_RIF_Radio";
};

// Team Leader
class sia_medu_sf_teamleader : sia_medu_teamleader
{
    editorSubcategory = "sia_infantry_sf";

	Items[] = {"FirstAidKit","rhsusf_ANPVS_14"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_14"};

    linkedItems[] = {"UK3CB_TKA_B_V_GA_HEAVY_WDL","rhsusf_ach_bare_des_headset","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_GA_HEAVY_WDL","rhsusf_ach_bare_des_headset","rhssaf_zrak_rd7j",Standard_Equipment};

    weapons[] = {"sia_medu_weap_g36kv_ag36_mrco","rhsusf_weap_m9","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_g36kv_ag36_mrco","rhsusf_weap_m9","Throw","Put"};

    magazines[] =
    {
        MAG_7(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(HandGrenade),
        MAG_2(SmokeShell),
        "1Rnd_HE_Grenade_shell"
    };
    respawnMagazines[] =
    {
        MAG_7(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(HandGrenade),
        MAG_2(SmokeShell),
        "1Rnd_HE_Grenade_shell"
    };
};

// Specialists

// Medic
class sia_medu_sf_medic : sia_medu_medic
{
    editorSubcategory = "sia_infantry_sf";

	Items[] = {"FirstAidKit","rhsusf_acc_nt4_black","rhsusf_ANPVS_14"};
	RespawnItems[] = {"FirstAidKit","rhsusf_acc_nt4_black","rhsusf_ANPVS_14"};

    linkedItems[] = {"UK3CB_TKA_B_V_GA_HEAVY_WDL","rhsusf_ach_bare_des",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_GA_HEAVY_WDL","rhsusf_ach_bare_des",Standard_Equipment};

    weapons[] = {"sia_medu_weap_g36c_eotech","rhsusf_weap_m9","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_g36c_eotech","rhsusf_weap_m9","Throw","Put"};

    magazines[] =
    {
        MAG_3(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(SmokeShell),
        MAG_2(SmokeShellRed)
    };

    respawnMagazines[] =
    {
        MAG_3(rhssaf_30rnd_556x45_EPR_G36),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(SmokeShell),
        MAG_2(SmokeShellRed)
    };
};

// Engineer
class sia_medu_sf_engineer : sia_medu_engineer
{
    editorSubcategory = "sia_infantry_sf";

	Items[] = {"FirstAidKit","rhsusf_acc_nt4_black","rhsusf_ANPVS_14"};
	RespawnItems[] = {"FirstAidKit","rhsusf_acc_nt4_black","rhsusf_ANPVS_14"};

    linkedItems[] = {"UK3CB_TKA_B_V_GA_LITE_WDL","rhsusf_ach_bare_des_ess",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_GA_LITE_WDL","rhsusf_ach_bare_des_ess",Standard_Equipment};

    weapons[] = {"sia_medu_weap_g36c_compm4","rhsusf_weap_m9","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_g36c_compm4","rhsusf_weap_m9","Throw","Put"};

    magazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_YT),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(SmokeShell),
        MAG_2(SmokeShellRed)
    };

    respawnMagazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_YT),
        MAG_2(rhsusf_mag_15Rnd_9x19_FMJ),
        MAG_2(SmokeShell),
        MAG_2(SmokeShellRed)
    };

    backpack = "sia_medu_backpack_sf_engineer";
};