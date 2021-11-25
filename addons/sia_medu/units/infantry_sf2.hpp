// Commandos

// Base
class sia_medu_sf2_base : sia_medu_base
{
    editorSubcategory = "sia_infantry_sf2";

    uniformClass = "UK3CB_TKA_B_U_CombatUniform_01_WDL";

    accuracy = 2.3;
	sensitivity = 3; 
	threat[] = {1,0.1,0.1};
	camouflage = 1.4;
	minFireTime = 7;

    cost = 100000;

    Items[] = {"FirstAidKit"};
    RespawnItems[] = {"FirstAidKit"};
     
    weapons[] = {"arifle_TRG21_F","hgun_P07_F","Throw","Put"};
	respawnWeapons[] = {"arifle_TRG21_F","hgun_P07_F","Throw","Put"};

    linkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","rhsusf_opscore_fg","rhsusf_ANPVS_15",Standard_Equipment};
    respawnLinkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","rhsusf_opscore_fg","rhsusf_ANPVS_15",Standard_Equipment};

    magazines[] =
	{
        MAG_7(30Rnd_556x45_Stanag),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(HandGrenade),
		"rhs_mag_mk84",
		"SmokeShell"
	};
	respawnMagazines[] =
	{
		MAG_7(30Rnd_556x45_Stanag),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(HandGrenade),
		"rhs_mag_mk84",
		"SmokeShell"
	};
};

// Riflemen

// Rifleman
class sia_medu_sf2_rifleman : sia_medu_sf2_base
{

     displayName = "Rifleman";

        scope = 2;
        scopeCurator = 2;

        weapons[] = {"sia_medu_weap_trg21_rx01","sia_medu_p07_snds","Throw","Put"};
        respawnWeapons[] = {"sia_medu_weap_trg21_rx01","sia_medu_p07_snds","Throw","Put"};
};

// Grenadier
class sia_medu_sf2_grenadier : sia_medu_sf2_rifleman
{

     displayName = "Grenadier";

    weapons[] = {"sia_medu_weap_trg21_gl_rx01","sia_medu_p07_snds","rhsusf_ANPVS_15","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_trg21_gl_rx01","sia_medu_p07_snds","rhsusf_ANPVS_15","Throw","Put"};

    magazines[] =
    {
        MAG_7(30Rnd_556x45_Stanag),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(HandGrenade),
        MAG_2(MiniGrenade),
        "SmokeShell",
        "rhs_mag_mk84",
        "1Rnd_HE_Grenade_shell",
    };

    respawnMagazines[] =
    {
        MAG_7(30Rnd_556x45_Stanag),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(HandGrenade),
        MAG_2(MiniGrenade),
        "SmokeShell",
        "rhs_mag_mk84",
        "1Rnd_HE_Grenade_shell",
    };

    backpack = "sia_medu_backpack_sf2_gr";
};

// Light Anti Tank
class sia_medu_sf2_rifleman_lat : sia_medu_sf2_rifleman
{
    displayName = "Rifleman (M136)";

    cost = 160000;
    threat[] = {1,0.7,0.3};
    icon = "iconManAT";

    linkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","rhsusf_opscore_fg","rhsusf_ANPVS_15",Standard_Equipment};
    respawnLinkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","rhsusf_opscore_fg","rhsusf_ANPVS_15",Standard_Equipment};

    weapons[] = {"sia_medu_weap_trg21_rx01","sia_medu_p07_snds","rhs_weap_M136","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_trg21_rx01","sia_medu_p07_snds","rhs_weap_M136","Throw","Put"};
};

// AT Specialist
class sia_medu_sf2_specialist_at : sia_medu_sf2_rifleman
{
    displayName = "AT Specialist";

    uniformClass = "UK3CB_ADM_B_U_CombatUniform_01_CC_WDL";

    cost		= 180000;
    threat[]	= {1,0.7,0.3};
    icon		= "iconManAT";

    linkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","rhsusf_opscore_fg_pelt","rhsusf_ANPVS_15",Standard_Equipment};
    respawnLinkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","rhsusf_opscore_fg_pelt","rhsusf_ANPVS_15",Standard_Equipment};

    weapons[] = {"sia_medu_weap_trg21_rx01","sia_medu_p07_snds","launch_MRAWS_olive_rail_F","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_trg21_rx01","sia_medu_p07_snds","launch_MRAWS_olive_rail_F","Throw","Put"};

    magazines[] =
    {
        MAG_4(30Rnd_556x45_Stanag),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(HandGrenade),
        "SmokeShell",
        "MRAWS_HEAT_F"
    };
    respawnMagazines[] =
    {
        MAG_4(30Rnd_556x45_Stanag),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(HandGrenade),
        "SmokeShell",
        "MRAWS_HEAT_F"
    };

    backpack = "sia_medu_backpack_sf2_at";
};

class sia_medu_sf2_autorifleman : sia_medu_sf2_rifleman
{
    displayName = "Autorifleman";

    uniformClass = "UK3CB_TKA_B_U_CombatUniform_02_WDL";

    linkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","rhsusf_opscore_fg_pelt","rhsusf_ANPVS_15",Standard_Equipment};
    respawnLinkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","rhsusf_opscore_fg_pelt","rhsusf_ANPVS_15",Standard_Equipment};

    weapons[] = {"sia_medu_weap_minimi_elcan_nt4","sia_medu_p07_snds","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_minimi_elcan_nt4","sia_medu_p07_snds","Throw","Put"};

    cost = 125000;
    threat[] = { 1,0.1,0.3 };
    icon = "iconManMG";

    magazines[] =
    {
        MAG_2(rhsusf_200Rnd_556x45_soft_pouch),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(SmokeShell),
        "rhs_mag_mk84"
    };
    respawnMagazines[] =
    {
        MAG_2(rhsusf_200Rnd_556x45_soft_pouch),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(SmokeShell),
        "rhs_mag_mk84"
    };

    backpack = "sia_medu_backpack_sf2_ar";
};

class sia_medu_sf2_machinegunner : sia_medu_sf2_autorifleman
{
    displayName = "Machinegunner";

    uniformClass = "UK3CB_ADM_B_U_CombatUniform_Shortsleeve_01_CC_WDL";

    Items[] = {"FirstAidKit","muzzle_snds_93mmg_tan"};
    RespawnItems[] = {"FirstAidKit","muzzle_snds_93mmg_tan"};

    linkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","rhsusf_opscore_fg_pelt","rhsusf_ANPVS_15",Standard_Equipment};
    respawnLinkedItems[] = {"VSM_CarrierRig_Gunner_OGA_OD","rhsusf_opscore_fg_pelt","rhsusf_ANPVS_15",Standard_Equipment};

    weapons[] = {"sia_medu_mmg_elcan","sia_medu_p07_snds","Throw","Put"};
    respawnWeapons[] = {"sia_medu_mmg_elcan","sia_medu_p07_snds","Throw","Put"};

    magazines[] =
    {
        MAG_2(rhsusf_200Rnd_556x45_soft_pouch),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        MAG_2(rhsusf_200Rnd_556x45_soft_pouch),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(SmokeShell)
    };

    backpack = "sia_medu_backpack_sf2_mg";
};

class sia_medu_sf2_marksman : sia_medu_sf2_rifleman
{
    displayName = "Marksman";

    cost = 150000;
    sensitivity = 3.3;

    uniformClass= "UK3CB_ADM_B_U_CombatUniform_Shortsleeve_01_WDL_CC";

    linkedItems[] = {"VSM_OGA_OD_Vest_2","VSM_Bowman_cap_Green","rhsusf_ANPVS_15","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"VSM_OGA_OD_Vest_2","VSM_Bowman_cap_Green","rhsusf_ANPVS_15",Standard_Equipment};

    weapons[] = {"sia_medu_dmr_khs","sia_medu_p07_snds","Throw","Put"};
    respawnWeapons[] = {"sia_medu_dmr_khs","sia_medu_p07_snds","Throw","Put"};

    magazines[] =
    {
        MAG_4(10Rnd_93x64_DMR_05_Mag),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(SmokeShell),
        "MiniGrenade",
        "rhs_mag_mk84"
    };
    respawnMagazines[] =
    {
        MAG_4(10Rnd_93x64_DMR_05_Mag),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(SmokeShell),
        "MiniGrenade",
        "rhs_mag_mk84"
    };
};

// Leadership

// Squad Leader
class sia_medu_sf2_squadleader : sia_medu_sf2_rifleman
{
    displayName = "Squad Leader";

    scope = 2;
    scopeCurator = 2;

    cost = 500000;
    camouflage = 1.4;
    sensitivity = 3.3;
    icon = "iconManLeader";

    uniformClass = "UK3CB_TKA_B_U_CombatUniform_Shortsleeve_01_WDL";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","rhsusf_opscore_fg_pelt_cam","rhsusf_ANPVS_15","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","rhsusf_opscore_fg_pelt_cam","rhsusf_ANPVS_15","rhssaf_zrak_rd7j",Standard_Equipment};

    weapons[] = {"sia_medu_weap_trg21_mrco","sia_medu_p07_snds","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_trg21_mrco","sia_medu_p07_snds","Throw","Put"};

    magazines[] =
    {
        MAG_7(30Rnd_556x45_Stanag),
        MAG_2(16Rnd_9x21_Mag),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "rhs_mag_mk84"
    };
    respawnMagazines[] =
    {
        MAG_7(30Rnd_556x45_Stanag),
        MAG_2(16Rnd_9x21_Mag),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "rhs_mag_mk84"
    };
};

// Team Leader
class sia_medu_sf2_teamleader : sia_medu_sf2_rifleman
{
    displayName = "Team Leader";

    cost = 450000;
    camouflage = 1.4;
    sensitivity = 3.3;
    icon = "iconManLeader";  

    uniformClass = "UK3CB_TKA_B_U_CombatUniform_Shortsleeve_02_WDL";

    linkedItems[] = {"VSM_FAPC_Operator_OGA_OD","rhsusf_opscore_fg_pelt_cam","rhsusf_ANPVS_15","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"VSM_FAPC_Operator_OGA_OD","rhsusf_opscore_fg_pelt_cam","rhsusf_ANPVS_15","rhssaf_zrak_rd7j",Standard_Equipment};

    weapons[] = {"sia_medu_weap_trg21_gl_mrco","sia_medu_p07_snds","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_trg21_gl_mrco","sia_medu_p07_snds","Throw","Put"};

    magazines[] =
    {
        MAG_7(30Rnd_556x45_Stanag),
        MAG_2(16Rnd_9x21_Mag),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "1Rnd_HE_Grenade_shell",
        "HandGrenade",
        "rhs_mag_mk84"
    };
    respawnMagazines[] =
    {
        MAG_7(30Rnd_556x45_Stanag),
        MAG_2(16Rnd_9x21_Mag),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "1Rnd_HE_Grenade_shell",
        "HandGrenade",
        "rhs_mag_mk84"
    };

    backpack = "sia_medu_backpack_sf2_gr";
};

// Specialists

// Medic
class sia_medu_sf2_medic : sia_medu_sf2_rifleman
{
    displayName = "Medic";

    attendant = 1;
    icon = "iconManMedic";
    picture = "pictureHeal";

    uniformClass = "UK3CB_ADM_B_U_CombatUniform_01_WDL_CC";

    weapons[] = {"sia_medu_trg20_rx01","sia_medu_p07_snds","Throw","Put"};
    respawnWeapons[] = {"sia_medu_trg20_rx01","sia_medu_p07_snds","Throw","Put"};

    magazines[] =
    {
        MAG_7(30Rnd_556x45_Stanag),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(SmokeShell),
        MAG_2(SmokeShellRed)
    };

    respawnMagazines[] =
    {
        MAG_7(30Rnd_556x45_Stanag),
        MAG_2(16Rnd_9x21_Mag),
        MAG_2(SmokeShell),
        MAG_2(SmokeShellRed)
    };

    backpack = "sia_medu_backpack_medic"; 
};

class sia_medu_sf2_engineer : sia_medu_sf2_rifleman
{
    displayName = "Engineer";

    uniformClass = "UK3CB_TKA_B_U_CombatUniform_02_WDL";

    cost = 220000;
    camouflage = 1.6;
    sensitivity = 2.5;
    canDeactivateMines = 1;
    engineer = 1;
    detectSkill = 60;
    threat[] = {1,0.5,0.1};
    icon = "iconManEngineer";
    picture = "pictureRepair";

    linkedItems[] = {"VSM_FAPC_Breacher_OGA_OD","rhsusf_opscore_fg_pelt","rhsusf_ANPVS_15",Standard_Equipment};
    respawnLinkedItems[] = {"VSM_FAPC_Breacher_OGA_OD","rhsusf_opscore_fg_pelt","rhsusf_ANPVS_15",Standard_Equipment};

    weapons[] = {"sia_medu_trg20_rx01","sia_medu_p07_snds","Throw","Put"};
    respawnWeapons[] = {"sia_medu_trg20_rx01","sia_medu_p07_snds","Throw","Put"};

    backpack = "sia_medu_backpack_sf2_engineer";
};