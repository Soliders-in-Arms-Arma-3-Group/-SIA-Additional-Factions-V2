class I_Soldier_base_F;
class sia_medu_base : I_Soldier_base_F
{
    author = "Solders in Arms";

    scope = 0;
    scopeCurator = 0;

    side = 2;
    faction = "sia_faction_medu";
    editorSubcategory = "sia_infantry";

    cost = 100000;
    threat[] = {1,0.1,0.1};

    identityTypes[]=
    {
        "LanguagePER_F",
        "Head_Euro",
        "UK3CB_G_KLR_Oli",
        "G_CIVIL_male"
    };
    genericNames = "TakistaniMen";

    uniformClass = "UK3CB_ADM_B_U_CombatUniform_01_CC";

    linkedItems[] = {"rhssaf_vest_md98_woodland","rhssaf_helmet_m97_woodland",Standard_Equipment};
    respawnLinkedItems[] = {"rhssaf_vest_md98_woodland","rhssaf_helmet_m97_woodland",Standard_Equipment};
    
    Items[] = {"FirstAidKit"};
    RespawnItems[] = {"FirstAidKit"};
}

/* Troop Classes */

// Rifleman
class sia_medu_rifleman: sia_medu_base
{
    displayName = "Rifleman";

    scope = 2;
    scopeCurator = 2;

    weapons[] = {"UK3CB_G3A3V","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"UK3CB_G3A3V","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_4(UK3CB_G3_20rnd_762x51_Y),
        MAG_2(UK3CB_BHP_9_13Rnd),
        MAG_2(rhs_mag_f1),
        "SmokeShell"
    };
    respawnMagazines[] =
    {
        MAG_4(UK3CB_G3_20rnd_762x51_Y),
        MAG_2(UK3CB_BHP_9_13Rnd),
        MAG_2(rhs_mag_f1),
        "SmokeShell"
    };

    backpack = "sia_medu_backpack_r";
};

// Grenadier
class sia_medu_grenadier: sia_medu_rifleman
{
    displayName = "Grenadier";

    linkedItems[] = {"rhssaf_vest_md98_woodland","rhssaf_helmet_m97_woodland_black_ess",Standard_Equipment};
    respawnLinkedItems[] = {"rhssaf_vest_md98_woodland","rhssaf_helmet_m97_woodland_black_ess",Standard_Equipment};

    weapons[] = {"UK3CB_G3KA4_GL","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"UK3CB_G3KA4_GL","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_YT),
        MAG_2(UK3CB_BHP_9_13Rnd),
        MAG_2(rhs_mag_f1),
        "SmokeShell",
        "1Rnd_HE_Grenade_shell",
    };

    respawnMagazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_YT),
        MAG_2(UK3CB_BHP_9_13Rnd),
        MAG_2(rhs_mag_f1),
        "SmokeShell",
        "1Rnd_HE_Grenade_shell",
    };
    
    backpack = "sia_medu_backpack_gr";
};

// Anti-tank

//Light
class sia_medu_rifleman_lat : sia_medu_rifleman
{
    displayName = "Rifleman (RPG-26)";

    cost = 160000;
    threat[] = {1,0.7,0.3};
    icon = "iconManAT";

    weapons[] = {"UK3CB_G3A3V","UK3CB_BHP","rhs_weap_rpg26","Throw","Put"};
    respawnWeapons[] = {"UK3CB_G3A3V","UK3CB_BHP","rhs_weap_rpg26","Throw","Put"};

    magazines[] =
    {
        MAG_4(UK3CB_G3_20rnd_762x51_Y),
        MAG_2(UK3CB_BHP_9_13Rnd),
        MAG_2(rhs_mag_f1),
        "SmokeShell",
        "rhs_rpg26_mag"
    };
    respawnMagazines[] =
    {
        MAG_4(UK3CB_G3_20rnd_762x51_Y),
        MAG_2(UK3CB_BHP_9_13Rnd),
        MAG_2(rhs_mag_f1),
        "SmokeShell",
        "rhs_rpg26_mag"
    };
};

//AT Specialist
class sia_medu_specialist_at : sia_medu_rifleman
{
    displayName = "AT Specialist"

    cost		= 180000;
    threat[]	= {1,0.7,0.3};
    icon		= "iconManAT";

    weapons[] = {"UK3CB_G3A3","UK3CB_BHP","sia_medu_weap_rpg7_pgo7v","Throw","Put"};
    respawnWeapons[] = {"UK3CB_G3A3","UK3CB_BHP","sia_medu_weap_rpg7_pgo7v","Throw","Put"};

    magazines[] =
    {
        MAG_4(UK3CB_G3_20rnd_762x51_Y),
        MAG_2(UK3CB_BHP_9_13Rnd),
        MAG_2(rhs_mag_f1),
        "SmokeShell",
        "rhs_rpg7_PG7VL_mag"
    };
    respawnMagazines[] =
    {
        MAG_4(UK3CB_G3_20rnd_762x51_Y),
        MAG_2(UK3CB_BHP_9_13Rnd),
        MAG_2(rhs_mag_f1),
        "SmokeShell",
        "rhs_rpg7_PG7VL_mag"
    };

    backpack = "sia_medu_backpack_at";
};

// Autorifleman
class sia_medu_autorifleman: sia_medu_base
{
    displayName = "Autorifleman";

    scope = 2;
    scopeCurator = 2;

    cost = 125000;
    threat[] = { 1,0.1,0.3 };
    icon = "iconManMG";

    linkedItems[] = {"rhssaf_vest_md98_woodland","rhssaf_helmet_m97_woodland_black_ess",Standard_Equipment};
    respawnLinkedItems[] = {"rhssaf_vest_md98_woodland","rhssaf_helmet_m97_woodland_black_ess",Standard_Equipment};

    weapons[] = {"UK3CB_G3SG1","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"UK3CB_G3SG1","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_2(UK3CB_G3_50rnd_762x51_YT),
        MAG_2(UK3CB_BHP_9_13Rnd),
        MAG_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        MAG_2(UK3CB_G3_50rnd_762x51_YT),
        MAG_2(UK3CB_BHP_9_13Rnd),
        MAG_2(SmokeShell)
    };

    backpack = "sia_medu_backpack_ar";
};

// Machinegunner
class sia_medu_machinegunner: sia_medu_autorifleman
{
    displayName = "Machine Gunner";

    uniformClass = "UK3CB_ADM_B_U_CombatUniform_Shortsleeve_01_CC";

    weapons[] = {"UK3CB_MG3","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"UK3CB_MG3","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        "UK3CB_MG3_100rnd_762x51_YM",
        MAG_2(UK3CB_BHP_9_13Rnd),
        MAG_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        "UK3CB_MG3_100rnd_762x51_YM",
        MAG_2(UK3CB_BHP_9_13Rnd),
        MAG_2(SmokeShell)
    };

    backpack = "sia_medu_backpack_mg";
};

// Marksman
class sia_medu_marksman: sia_medu_rifleman
{
    displayName = "Marksman";

    scope = 2;
    scopeCurator = 2;

    cost = 150000;
    sensitivity = 3.3;

    uniformClass= "UK3CB_ADM_B_U_CombatUniform_Shortsleeve_01_CC";

    linkedItems[] = {"rhssaf_vest_md99_woodland","rhssaf_booniehat_woodland","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"rhssaf_vest_md99_woodland","rhssaf_booniehat_woodland","rhssaf_zrak_rd7j",Standard_Equipment};

    weapons[] = {"sia_medu_weap_g3sg1_zfsg1","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_g3sg1_zfsg1","UK3CB_BHP","Throw","Put"};
    
    backpack = "sia_medu_backpack_r";
};

// Leadership

// Officer
class sia_medu_officer : sia_medu_base
{
    displayName = "Officer";

    scope = 2;
    scopeCurator = 2;

    cost = 600000;
    camouflage = 1.4;
    sensitivity = 3.3;
    icon = "iconManOfficer";

    uniformClass = "UK3CB_B_U_Officer_WDL";

    linkedItems[] = {"rhs_belt_holster","UK3CB_TKA_B_H_Beret","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"rhs_belt_holster","UK3CB_TKA_B_H_Beret","rhssaf_zrak_rd7j",Standard_Equipment};

    weapons[] = {"UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_2(UK3CB_BHP_9_13Rnd)
    };
    respawnMagazines[] =
    {
        MAG_2(UK3CB_BHP_9_13Rnd)
    };
};

// Officer (Combat)
class sia_medu_officer_combat : sia_medu_officer
{
    displayName = "Officer (Combat)";

    uniformClass = "UK3CB_ADM_B_U_CombatUniform_Shortsleeve_01_CC";

    linkedItems[] = {"rhssaf_vest_md99_woodland_radio","UK3CB_TKA_B_H_Beret","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"rhssaf_vest_md99_woodland_radio","UK3CB_TKA_B_H_Beret","rhssaf_zrak_rd7j",Standard_Equipment};

    weapons[] = {"UK3CB_G3SG1","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"UK3CB_G3SG1","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_YT),
        MAG_2(UK3CB_BHP_9_13Rnd),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "SmokeShellYellow",
        "rhs_mag_f1"
    };
    respawnMagazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_YT),
        MAG_2(UK3CB_BHP_9_13Rnd),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "SmokeShellYellow",
        "rhs_mag_f1"
    };
};

// Squad Leader
class sia_medu_squadleader: sia_medu_rifleman
{
    displayName = "Squad Leader";

    scope = 2;
    scopeCurator = 2;

    cost = 500000;
    camouflage = 1.4;
    sensitivity = 3.3;
    icon = "iconManLeader";

    uniformClass= "UK3CB_ADM_B_U_CombatUniform_Shortsleeve_01_CC";

    linkedItems[] = {"rhssaf_vest_md99_woodland_radio","UK3CB_TKA_I_H_Patrolcap_OFF_OLI","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"rhssaf_vest_md99_woodland_radio","UK3CB_TKA_I_H_Patrolcap_OFF_OLI","rhssaf_zrak_rd7j",Standard_Equipment};

    weapons[] = {"sia_medu_weap_g3sg1_stanagzf","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_g3sg1_stanagzf","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_YT),
        MAG_2(UK3CB_BHP_9_13Rnd),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "rhs_mag_f1"
    };
    respawnMagazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_YT),
        MAG_2(UK3CB_BHP_9_13Rnd),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "rhs_mag_f1"
    };
    
    backpack = "sia_medu_backpack_r_2";
};

// Team Leader
class sia_medu_teamleader: sia_medu_rifleman
{
    displayName = "Team Leader";

    scope = 2;
    scopeCurator = 2;

    cost = 450000;
    camouflage = 1.4;
    sensitivity = 3.3;
    icon = "iconManLeader";

    uniformClass= "UK3CB_ADM_B_U_CombatUniform_Shortsleeve_01_CC";

    linkedItems[] = {"rhssaf_vest_md98_woodland","rhssaf_helmet_m97_woodland_black_ess_bare","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"rhssaf_vest_md98_woodland","rhssaf_helmet_m97_woodland_black_ess_bare","rhssaf_zrak_rd7j",Standard_Equipment};

    weapons[] = {"sia_medu_weap_g3ka4_stanagzf","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_g3ka4_stanagzf","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_YT),
        MAG_2(UK3CB_BHP_9_13Rnd),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "1Rnd_HE_Grenade_shell",
        "rhs_mag_f1",
    };

    respawnMagazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_YT),
        MAG_2(UK3CB_BHP_9_13Rnd),
        "SmokeShell",
        "SmokeShellRed",
        "SmokeShellGreen",
        "1Rnd_HE_Grenade_shell",
        "rhs_mag_f1",
    };
    
    backpack = "sia_medu_backpack_gr";
};

// Specialists

// Medic
class sia_medu_medic: sia_medu_rifleman
{
    displayName = "Medic";

    attendant = 1;
    icon = "iconManMedic";
    picture = "pictureHeal";

    weapons[] = {"UK3CB_G3A3","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"UK3CB_G3A3","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_4(UK3CB_G3_20rnd_762x51_YT),
        MAG_2(SmokeShell),
        MAG_2(SmokeShellRed),
        "UK3CB_BHP_9_13Rnd"
    };

    respawnMagazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_YT),
        MAG_2(SmokeShell),
        MAG_2(SmokeShellRed),
        "UK3CB_BHP_9_13Rnd"
    };

    backpack = "sia_medu_backpack_medic";
};

// Engineer
class sia_medu_engineer: sia_medu_rifleman
{
    displayName = "Engineer";

    cost = 220000;
    camouflage = 1.6;
    sensitivity = 2.5;
    canDeactivateMines = 1;
    engineer = 1;
    detectSkill = 60;
    threat[] = {1,0.5,0.1};
    icon = "iconManEngineer";
    picture = "pictureRepair";

    linkedItems[] = {"rhssaf_vest_md98_woodland","rhssaf_helmet_m97_woodland_black_ess_bare",Standard_Equipment};
    respawnLinkedItems[] = {"rhssaf_vest_md98_woodland","rhssaf_helmet_m97_woodland_black_ess_bare",Standard_Equipment};

    backpack = "sia_medu_backpack_engineer";
};

// Crewman
class sia_medu_crewman: sia_medu_base
{
    displayName = "Crewman";

    scope = 2;
    scopeCurator = 2;

    cost = 90000;
    camouflage = 1.6;
    sensitivity = 2.5;

    engineer = 1;

    uniformClass = "UK3CB_TKA_I_U_CrewUniform_03_KHK";

    linkedItems[] = {"rhssaf_vest_md99_woodland","rhs_tsh4",Standard_Equipment};
    respawnLinkedItems[] = {"rhssaf_vest_md99_woodland","rhs_tsh4",Standard_Equipment};

    weapons[] = {"UK3CB_MP5A3","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"UK3CB_MP5A3","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_3(UK3CB_MP5_30Rnd_9x19_Magazine_Y),
        MAG_3(UK3CB_BHP_9_13Rnd),
        MAG_2(SmokeShell),
        "rhs_mag_f1"
    };
    respawnMagazines[] =
    {
        MAG_3(UK3CB_MP5_30Rnd_9x19_Magazine_Y),
        MAG_3(UK3CB_BHP_9_13Rnd),
        MAG_2(SmokeShell),
        "rhs_mag_f1"
    };
    
    backpack = "sia_medu_backpack_crew";
};

// Crew Commander
class sia_medu_crew_commander: sia_medu_crewman
{
    displayName = "Crew Commander"

    cost = 450000;
    camouflage = 1.4;
    sensitivity = 3.3;
    icon = "iconManLeader";

    uniformClass = "UK3CB_TKA_I_U_CrewUniform_01_KHK";

    linkedItems[] = {"rhssaf_vest_md99_woodland_radio","rhs_tsh4_ess","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"rhssaf_vest_md99_woodland_radio","rhs_tsh4_ess","rhssaf_zrak_rd7j",Standard_Equipment};
};

// Helipilot
class sia_medu_helipilot: sia_medu_base
{
    displayName = "Helicopter Pilot";

    scope = 2;
    scopeCurator = 2;

    cost = 160000;
    camouflage = 2.0;

    uniformClass = "UK3CB_TKA_I_U_H_Pilot_01_DES";

    linkedItems[] = {"UK3CB_V_Pilot_Vest","UK3CB_H_Pilot_Helmet",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_V_Pilot_Vest","UK3CB_H_Pilot_Helmet",Standard_Equipment};

    weapons[] = {"UK3CB_MP5A3","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"UK3CB_MP5A3","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_3(UK3CB_MP5_30Rnd_9x19_Magazine_Y),
        MAG_3(UK3CB_BHP_9_13Rnd),
        MAG_2(SmokeShell),
        "SmokeShellRed",
        "SmokeShellGreen"
    };
    respawnMagazines[] =
    {
        MAG_3(UK3CB_MP5_30Rnd_9x19_Magazine_Y),
        MAG_3(UK3CB_BHP_9_13Rnd),
        MAG_2(SmokeShell),
        "SmokeShellRed",
        "SmokeShellGreen"
    };
};

// Heli crew
class sia_medu_helicrew: sia_medu_helipilot
{
    displayName = "Helicopter Crew";

    uniformClass = "UK3CB_TKA_I_U_H_Pilot_02_DES";
    
    linkedItems[] = {"UK3CB_V_Pilot_Vest","UK3CB_H_Crew_Helmet",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_V_Pilot_Vest","UK3CB_H_Crew_Helmet",Standard_Equipment};

    weapons[] = {"UK3CB_G3KA4","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"UK3CB_G3KA4","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_Y),
        MAG_3(UK3CB_BHP_9_13Rnd),
        MAG_2(SmokeShell),
    };
    respawnMagazines[] =
    {
        MAG_3(UK3CB_G3_20rnd_762x51_Y),
        MAG_3(UK3CB_BHP_9_13Rnd),
        MAG_2(SmokeShell),
    };
}

class sia_medu_sniper : sia_medu_rifleman
{
    displayName = "Sniper";

    uniformClass = "UK3CB_TKA_B_U_CombatUniform_Ghillie_WDL";

    cost = 150000;
	sensitivity = 3.5;

    linkedItems[] = {"UK3CB_TKA_B_V_TacVest_Tan","rhsusf_ANPVS_15","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_TacVest_Tan","rhsusf_ANPVS_15","rhssaf_zrak_rd7j",Standard_Equipment};

    weapons[] = {"sia_medu_psg1a1_accupoint","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"sia_medu_psg1a1_accupoint","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_6(UK3CB_G3_20rnd_762x51_Y),
        MAG_6(UK3CB_BHP_9_13Rnd),
        "SmokeShell"
    };

    respawnMagazines[] =
    {
        MAG_6(UK3CB_G3_20rnd_762x51_Y),
        MAG_6(UK3CB_BHP_9_13Rnd),
        "SmokeShell"
    };

    backpack = "";
};

class sia_medu_spotter : sia_medu_sniper
{
    displayName = "Spotter";

    weapons[] = {"sia_medu_weap_g3sg1_zfsg1","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"sia_medu_weap_g3sg1_zfsg1","UK3CB_BHP","Throw","Put"};

    magazines[] =
    {
        MAG_6(UK3CB_G3_20rnd_762x51_Y),
        MAG_6(UK3CB_BHP_9_13Rnd),
        "SmokeShell"
    };

    respawnMagazines[] =
    {
        MAG_6(UK3CB_G3_20rnd_762x51_Y),
        MAG_6(UK3CB_BHP_9_13Rnd),
        "SmokeShell"
    };

};