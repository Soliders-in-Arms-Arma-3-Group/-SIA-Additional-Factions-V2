class B_Soldier_base_F;
class sia_cia_base : B_Soldier_base_F
{
    scope = 0;
    scopeCurator = 0;

    AUTHOR_MACRO

    side = 1;
    faction = "sia_faction_cia";
    editorSubcategory = "sia_infantry";

	accuracy = 3;

	camouflage = 0.6;
    sensitivity = 3.3;
	detectSkill = 30;

    cost = 100000;
    threat[] = {1,0.1,0.1};

    uniformClass = "VSM_OGA_Crye_SS_grey_pants_Camo";

    linkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","rhsusf_bowman_cap",Standard_Equipment};
    respawnLinkedItems[] = {"VSM_CarrierRig_Operator_OGA_OD","rhsusf_bowman_cap",Standard_Equipment};
    
    Items[] = {"FirstAidKit"};
    RespawnItems[] = {"FirstAidKit"};
}

/* Troop Classes */

// Rifleman
class sia_cia_rifleman: sia_cia_base
{
    displayName = "Operator";

    scope = 2;
    scopeCurator = 2;

	Items[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_acc_nt4_black"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_acc_nt4_black"};

    weapons[] = {"sia_cia_m4a1_ta31rco","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] = {"sia_cia_m4a1_ta31rco","rhsusf_weap_glock17g4","Throw","Put"};

    magazines[] =
    {
        MAG_7(rhs_mag_30Rnd_556x45_Mk318_Stanag),
        MAG_3(rhsusf_mag_17Rnd_9x19_FMJ),
        MAG_2(HandGrenade),
        MAG_2(Chemlight_green),
        "SmokeShell",
        "SmokeShellGreen"
    };
    respawnMagazines[] =
    {
        MAG_7(rhs_mag_30Rnd_556x45_Mk318_Stanag),
        MAG_3(rhsusf_mag_17Rnd_9x19_FMJ),
        MAG_2(HandGrenade),
        MAG_2(Chemlight_green),
        "SmokeShell",
        "SmokeShellGreen"
    };
};

// Grenadier
class sia_cia_grenadier: sia_cia_rifleman
{
    displayName = "Operator (Grenadier)";

    Items[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_acc_nt4_black"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_acc_nt4_black"};

    weapons[] = {"sia_cia_m4a1_m203_ta31rco","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] = {"sia_cia_m4a1_m203_ta31rco","rhsusf_weap_glock17g4","Throw","Put"};

    magazines[] =
    {
        MAG_7(rhs_mag_30Rnd_556x45_Mk318_Stanag),
        MAG_3(rhsusf_mag_17Rnd_9x19_FMJ),
        MAG_2(HandGrenade),
        MAG_2(Chemlight_green),
        "SmokeShell",
        "SmokeShellGreen",
        "1Rnd_HE_Grenade_shell"
    };
    respawnMagazines[] =
    {
        MAG_7(rhs_mag_30Rnd_556x45_Mk318_Stanag),
        MAG_3(rhsusf_mag_17Rnd_9x19_FMJ),
        MAG_2(HandGrenade),
        MAG_2(Chemlight_green),
        "SmokeShell",
        "SmokeShellGreen",
        "1Rnd_HE_Grenade_shell"
    };
    
    backpack = "sia_cia_backpack_gr";
};

// Anti-tank

//Light
class sia_cia_rifleman_lat : sia_cia_rifleman
{
    displayName = "Operator (M72)";

    icon = "iconManAT";

   Items[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_acc_nt4_black"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_acc_nt4_black"};

    weapons[] = {"sia_cia_m4a1_m203_ta31rco","rhsusf_weap_glock17g4","rhs_weap_m72a7","Throw","Put"};
    respawnWeapons[] = {"sia_cia_m4a1_m203_ta31rco","rhsusf_weap_glock17g4","rhs_weap_m72a7","Throw","Put"};
};

/*
//AT Specialist
class sia_cia_specialist_at : sia_cia_rifleman
{
    displayName = "AT Specialist"

    cost		= 180000;
    threat[]	= {1,0.7,0.3};
    icon		= "iconManAT";

    weapons[] = {"UK3CB_G3A3","UK3CB_BHP","sia_cia_weap_rpg7_pgo7v","Throw","Put"};
    respawnWeapons[] = {"UK3CB_G3A3","UK3CB_BHP","sia_cia_weap_rpg7_pgo7v","Throw","Put"};

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

    backpack = "sia_cia_backpack_at";
};
*/

// Autorifleman
class sia_cia_autorifleman: sia_cia_base
{
    displayName = "Autorifleman";

    scope = 2;
    scopeCurator = 2;

    cost = 125000;
    threat[] = { 1,0.1,0.3 };
    icon = "iconManMG";

    Items[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_acc_nt4_black"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_acc_nt4_black"};

    weapons[] = {"rhs_weap_m249_light_L_elcan","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_m249_light_L_elcan","rhsusf_weap_glock17g4","Throw","Put"};

    magazines[] =
    {
        MAG_2(rhsusf_200Rnd_556x45_soft_pouch),
        MAG_2(rhsusf_mag_17Rnd_9x19_FMJ),
        MAG_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        MAG_2(rhsusf_200Rnd_556x45_soft_pouch),
        MAG_2(rhsusf_mag_17Rnd_9x19_FMJ),
        MAG_2(SmokeShell)
    };

    backpack = "sia_cia_backpack_ar";
};

/*
// Machinegunner
class sia_cia_machinegunner: sia_cia_autorifleman
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

    backpack = "sia_cia_backpack_mg";
};
*/

// Marksman
class sia_cia_marksman: sia_cia_rifleman
{
    displayName = "Marksman";

    scope = 2;
    scopeCurator = 2;

	cost = 350000;
	threat[] = {1,0.6,0.6};
	camouflage = 0.6;
	sensitivity = 3.3;

    Items[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_acc_nt4_black"};
	RespawnItems[] = {"FirstAidKit","rhsusf_ANPVS_15","rhsusf_acc_nt4_black"};

    weapons[] = {"rhs_weap_sr25_sup_marsoc","rhsusf_weap_glock17g4","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_sr25_sup_marsoc","rhsusf_weap_glock17g4","Throw","Put"};

    magazines[] =
    {
        MAG_6(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),
        MAG_2(rhsusf_mag_17Rnd_9x19_FMJ),
        MAG_2(Chemlight_green),
        MAG_2(rhs_mag_m67),
        "SmokeShell",
        "SmokeShellGreen"
    };
    respawnMagazines[] =
    {
        MAG_6(rhsusf_20Rnd_762x51_SR25_m118_special_Mag),
        MAG_2(rhsusf_mag_17Rnd_9x19_FMJ),
        MAG_2(Chemlight_green),
        MAG_2(rhs_mag_m67),
        "SmokeShell",
        "SmokeShellGreen"
    };

};

// Leadership
/*
// Officer
class sia_cia_officer : sia_cia_base
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
class sia_cia_officer_combat : sia_cia_officer
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
*/
// Squad Leader
class sia_cia_squadleader: sia_cia_rifleman
{
    displayName = "Squad Leader";

    scope = 2;
    scopeCurator = 2;

    cost = 500000;
    camouflage = 1.4;
    sensitivity = 3.3;
    icon = "iconManLeader";
};

// Team Leader
class sia_cia_teamleader: sia_cia_grenadier
{
    displayName = "Team Leader";

    scope = 2;
    scopeCurator = 2;

    cost = 450000;
    camouflage = 1.4;
    sensitivity = 3.3;
    icon = "iconManLeader";
};

// Specialists

// Medic
class sia_cia_medic: sia_cia_rifleman
{
    displayName = "Medic";

    cost = 290000;
    attendant = 1;
    icon = "iconManMedic";
    picture = "pictureHeal";

    backpack = "sia_cia_backpack_medic";
};

// Engineer
class sia_cia_engineer: sia_cia_rifleman
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

    backpack = "sia_cia_backpack_engineer";
};
/*
// Crewman
class sia_cia_crewman: sia_cia_base
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
    
    backpack = "sia_cia_backpack_crew";
};

// Crew Commander
class sia_cia_crew_commander: sia_cia_crewman
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
class sia_cia_helipilot: sia_cia_base
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
class sia_cia_helicrew: sia_cia_helipilot
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

class sia_cia_sniper : sia_cia_rifleman
{
    displayName = "Sniper";

    uniformClass = "UK3CB_TKA_B_U_CombatUniform_Ghillie_WDL";

    cost = 150000;
	sensitivity = 3.5;

    linkedItems[] = {"UK3CB_TKA_B_V_TacVest_Tan","rhsusf_ANPVS_15","rhssaf_zrak_rd7j",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_TKA_B_V_TacVest_Tan","rhsusf_ANPVS_15","rhssaf_zrak_rd7j",Standard_Equipment};

    weapons[] = {"sia_cia_psg1a1_accupoint","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"sia_cia_psg1a1_accupoint","UK3CB_BHP","Throw","Put"};

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

class sia_cia_spotter : sia_cia_sniper
{
    displayName = "Spotter";

    weapons[] = {"sia_cia_weap_g3sg1_zfsg1","UK3CB_BHP","Throw","Put"};
    respawnWeapons[] = {"sia_cia_weap_g3sg1_zfsg1","UK3CB_BHP","Throw","Put"};

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

*/