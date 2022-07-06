class I_Soldier_base_F;
class sia_merc_base : I_Soldier_base_F
{
    scope = 0;
    scopeCurator = 0;

    AUTHOR_MACRO

    side = 2;
    faction = "sia_faction_merc";
    editorSubcategory = "sia_infantry";

	identityTypes[] =
	{
		"LanguageFRE_F",
		"Head_Tanoan"
	};
	genericNames = "TanoanMen";

	portrait = "";
	picture = "";
	icon = "iconMan";

	accuracy = 2.3;
	camouflage = 1.0;
    sensitivity = 3.3;
	detectSkill = 30;

    cost = 100000;
	threat[] = {1,0.1,0.1};
    canCarryBackPack = 1;

    uniformClass = "UK3CB_ADM_B_U_Shirt_Pants_01_BLU_WDL_ALT";

    linkedItems[] = {"UK3CB_V_Chestrig_WDL_01","UK3CB_TKP_O_H_Patrolcap_Blk",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_V_Chestrig_WDL_01","UK3CB_TKP_O_H_Patrolcap_Blk",Standard_Equipment};
    
    Items[] = {"FirstAidKit"};
    RespawnItems[] = {"FirstAidKit"};
};

/* Troop Classes */

// Rifleman
class sia_merc_rifleman: sia_merc_base
{
    displayName = "Rifleman";

    scope = 2;
    scopeCurator = 2;

    uniformClass = "UK3CB_ADM_B_U_Shirt_Pants_01_BLU_WDL_ALT";

    linkedItems[] = {"UK3CB_MDF_B_V_TacVest_LIZ","UK3CB_TKP_O_H_Patrolcap_Blk",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_MDF_B_V_TacVest_LIZ","UK3CB_TKP_O_H_Patrolcap_Blk",Standard_Equipment};

    weapons[] = {"UK3CB_FAMAS_F1","rhs_weap_tt33","Throw","Put"};
    respawnWeapons[] = {"UK3CB_FAMAS_F1","rhs_weap_tt33","Throw","Put"};

    magazines[] =
    {
        MAG_7(UK3CB_FAMAS_25rnd_556x45_Y),
        MAG_3(rhs_mag_762x25_8),
        MAG_2(rhs_mag_f1),
        MAG_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        MAG_7(UK3CB_FAMAS_25rnd_556x45_Y),
        MAG_3(rhs_mag_762x25_8),
        MAG_2(rhs_mag_f1),
        MAG_2(SmokeShell)
    };

};

// Rifleman (Light)
class sia_merc_rifleman_light: sia_merc_rifleman
{
    displayName = "Rifleman (Light)";

    uniformClass = "UK3CB_ADM_B_U_Shirt_Pants_01_BLU_WDL";

    linkedItems[] = {"UK3CB_V_Chestrig_WDL_01","UK3CB_TKP_O_H_Patrolcap_Blk",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_V_Chestrig_WDL_01","UK3CB_TKP_O_H_Patrolcap_Blk",Standard_Equipment};

    backpack = "rhs_rd54_flora1";
};

// Driver
class sia_merc_driver: sia_merc_rifleman
{
    displayName = "Driver";

    uniformClass = "UK3CB_ADM_B_U_CombatUniform_Shortsleeve_01_WDL_ALT";

    linkedItems[] = {"UK3CB_ADA_B_V_TacVest_BLK","UK3CB_TKP_O_H_Patrolcap_Blk",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_ADA_B_V_TacVest_BLK","UK3CB_TKP_O_H_Patrolcap_Blk",Standard_Equipment};

    weapons[] = {"UK3CB_Sten","rhs_weap_tt33","Throw","Put"};
    respawnWeapons[] = {"UK3CB_Sten","rhs_weap_tt33","Throw","Put"};

    magazines[] =
    {
        MAG_7(UK3CB_Sten_34Rnd_Magazine_YT),
        MAG_3(rhs_mag_762x25_8),
        MAG_2(rhs_mag_f1),
        MAG_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        MAG_7(UK3CB_Sten_34Rnd_Magazine_YT),
        MAG_3(rhs_mag_762x25_8),
        MAG_2(rhs_mag_f1),
        MAG_2(SmokeShell)
    };
};

// Grenadier
class sia_merc_grenadier: sia_merc_rifleman
{
    displayName = "Grenadier";

    uniformClass = "UK3CB_MEE_O_U_06_C";

    Items[] = {"FirstAidKit"};
	RespawnItems[] = {"FirstAidKit"};

    weapons[] = {"UK3CB_FAMAS_F1_GLM203","rhs_weap_tt33","Throw","Put"};
    respawnWeapons[] = {"UK3CB_FAMAS_F1_GLM203","rhs_weap_tt33","Throw","Put"};

    magazines[] =
    {
        MAG_7(UK3CB_FAMAS_25rnd_556x45_Y),
        MAG_3(rhs_mag_762x25_8),
        MAG_2(rhs_mag_f1),
        MAG_2(Chemlight_green),
        "SmokeShell",
        "SmokeShellGreen",
        "1Rnd_HE_Grenade_shell"
    };
    respawnMagazines[] =
    {
        MAG_7(UK3CB_FAMAS_25rnd_556x45_Y),
        MAG_3(rhs_mag_762x25_8),
        MAG_2(rhs_mag_f1),
        MAG_2(Chemlight_green),
        "SmokeShell",
        "SmokeShellGreen",
        "1Rnd_HE_Grenade_shell"
    };
    
    backpack = "sia_merc_backpack_gr";
};

// Anti-tank

//Light
class sia_merc_rifleman_lat : sia_merc_rifleman
{
    displayName = "Rifleman (RPG-18)";

    icon = "iconManAT";

    uniformClass = "UK3CB_ADM_B_U_CombatUniform_01_MAR_WDL_ALT";

    Items[] = {"FirstAidKit"};
	RespawnItems[] = {"FirstAidKit"};

    weapons[] = {"UK3CB_FAMAS_F1","rhs_weap_tt33","rhs_weap_rpg18","Throw","Put"};
    respawnWeapons[] = {"UK3CB_FAMAS_F1","rhs_weap_tt33","rhs_weap_rpg18","Throw","Put"};

    backpack = "UK3CB_B_Fieldpack";
};

class sia_merc_rifleman_lat_2 : sia_merc_rifleman_lat
{
    displayName = "Rifleman (RPG-75)";

    uniformClass = "UK3CB_ADM_B_U_CombatUniform_Shortsleeve_01_MAR_WDL_ALT";

    Items[] = {"FirstAidKit"};
	RespawnItems[] = {"FirstAidKit"};

    weapons[] = {"UK3CB_FAMAS_F1","rhs_weap_tt33","rhs_weap_rpg75","Throw","Put"};
    respawnWeapons[] = {"UK3CB_FAMAS_F1","rhs_weap_tt33","rhs_weap_rpg75","Throw","Put"};

    backpack = "B_TacticalPack_blk";
};

//AT Specialist
class sia_merc_specialist_at : sia_merc_rifleman
{
    displayName = "AT Specialist"

    cost		= 180000;
    threat[]	= {1,0.7,0.3};
    icon		= "iconManAT";

    weapons[] = {"UK3CB_FAMAS_F1","rhs_weap_tt33","launch_RPG32_green_F","Throw","Put"};
    respawnWeapons[] = {"UK3CB_FAMAS_F1","rhs_weap_tt33","launch_RPG32_green_F","Throw","Put"};

    magazines[] =
    {
        MAG_4(UK3CB_FAMAS_25rnd_556x45_Y),
        MAG_2(rhs_mag_762x25_8),
        MAG_2(rhs_mag_f1),
        "SmokeShell",
        "RPG32_F"
    };
    respawnMagazines[] =
    {
        MAG_4(UK3CB_FAMAS_25rnd_556x45_Y),
        MAG_2(rhs_mag_762x25_8),
        MAG_2(rhs_mag_f1),
        "SmokeShell",
        "RPG32_F"
    };

    backpack = "sia_merc_backpack_at";
};

// Autorifleman
class sia_merc_autorifleman: sia_merc_base
{
    displayName = "Autorifleman";

    scope = 2;
    scopeCurator = 2;

    cost = 125000;
    threat[] = { 1,0.1,0.3 };
    icon = "iconManMG";

    uniformClass = "UK3CB_ADM_B_U_Shirt_Pants_01_GRN_WDL_ALT";

    linkedItems[] = {"UK3CB_V_Chestrig_WDL_01","UK3CB_TKP_O_H_Patrolcap_Blk",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_V_Chestrig_WDL_01","UK3CB_TKP_O_H_Patrolcap_Blk",Standard_Equipment};

    Items[] = {"FirstAidKit"};
	RespawnItems[] = {"FirstAidKit"};

    weapons[] = {"LMG_03_F","rhs_weap_tt33","Throw","Put"};
    respawnWeapons[] = {"LMG_03_F","rhs_weap_tt33","Throw","Put"};

    magazines[] =
    {
        MAG_2(200Rnd_556x45_Box_Tracer_F),
        MAG_2(rhs_mag_762x25_8),
        MAG_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        MAG_2(200Rnd_556x45_Box_Tracer_F),
        MAG_2(rhs_mag_762x25_8),
        MAG_2(SmokeShell)
    };

    backpack = "sia_merc_backpack_ar";
};


// Machinegunner
class sia_merc_machinegunner: sia_merc_autorifleman
{
    displayName = "Machine Gunner";

    uniformClass = "UK3CB_ADM_B_U_Shirt_Pants_01_GRN_WDL";

    weapons[] = {"rhs_weap_fnmag","rhs_weap_tt33","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_fnmag","rhs_weap_tt33","Throw","Put"};

    magazines[] =
    {
        "rhsusf_100Rnd_762x51",
        MAG_2(rhs_mag_762x25_8),
        MAG_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        "rhsusf_100Rnd_762x51",
        MAG_2(rhs_mag_762x25_8),
        MAG_2(SmokeShell)
    };

    backpack = "sia_merc_backpack_mg";
};


// Marksman
class sia_merc_marksman: sia_merc_rifleman
{
    displayName = "Marksman";

    scope = 2;
    scopeCurator = 2;

	cost = 350000;
	threat[] = {1,0.6,0.6};
	camouflage = 0.6;
	sensitivity = 3.3;

    uniformClass = "UK3CB_ADM_B_U_CombatUniform_Shortsleeve_01_WDL_ALT_MAR";

    linkedItems[] = {"UK3CB_V_Chestrig_Tan","UK3CB_TKP_O_H_Patrolcap_Blk",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_V_Chestrig_Tan","UK3CB_TKP_O_H_Patrolcap_Blk",Standard_Equipment};

    Items[] = {"FirstAidKit"};
	RespawnItems[] = {"FirstAidKit"};

    weapons[] = {"sia_merc_l1a1_l2a2","rhs_weap_tt33","Throw","Put"};
    respawnWeapons[] = {"sia_merc_l1a1_l2a2","rhs_weap_tt33","Throw","Put"};

    magazines[] =
    {
        MAG_6(UK3CB_FNFAL_20rnd_762x51_YT),
        MAG_2(rhs_mag_762x25_8),
        MAG_2(Chemlight_green),
        MAG_2(rhs_mag_f1),
        "SmokeShell",
        "SmokeShellGreen"
    };
    respawnMagazines[] =
    {
        MAG_6(UK3CB_FNFAL_20rnd_762x51_YT),
        MAG_2(rhs_mag_762x25_8),
        MAG_2(Chemlight_green),
        MAG_2(rhs_mag_f1),
        "SmokeShell",
        "SmokeShellGreen"
    };

};

// Leadership

// Officer
class sia_merc_officer : sia_merc_base
{
    displayName = "Officer";

    scope = 2;
    scopeCurator = 2;

    cost = 600000;
    camouflage = 1.4;
    sensitivity = 3.3;
    icon = "iconManOfficer";

    uniformClass = "UK3CB_ADM_B_U_Shirt_Pants_01_BLU_WDL_ALT";

    linkedItems[] = {"rhssaf_beret_green",Standard_Equipment};
    respawnLinkedItems[] = {"rhssaf_beret_green",Standard_Equipment};

    weapons[] = {"rhs_weap_tt33","Throw","Put"};
    respawnWeapons[] = {"rhs_weap_tt33","Throw","Put"};

    magazines[] =
    {
        MAG_2(rhs_mag_762x25_8)
    };
    respawnMagazines[] =
    {
        MAG_2(rhs_mag_762x25_8)
    };
};

// Squad Leader
class sia_merc_squadleader: sia_merc_rifleman
{
    displayName = "Squad Leader";

    scope = 2;
    scopeCurator = 2;

    cost = 500000;
    camouflage = 1.4;
    sensitivity = 3.3;
    icon = "iconManLeader";

    uniformClass = "UK3CB_ADM_B_U_Shirt_Pants_01_GRN_WDL_ALT";

    linkedItems[] = {"UK3CB_MDF_B_V_TacVest_LIZ","rhssaf_beret_green",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_MDF_B_V_TacVest_LIZ","rhssaf_beret_green",Standard_Equipment};

    backpack = "UK3CB_B_Largepack";
};

// Team Leader

class sia_merc_teamleader: sia_merc_grenadier
{
    displayName = "Team Leader";

    uniformClass = "UK3CB_ADM_B_U_Shirt_Pants_01_BRN_WDL_ALT";

    cost = 450000;
    camouflage = 1.4;
    sensitivity = 3.3;
    icon = "iconManLeader";

    linkedItems[] = {"UK3CB_MDF_B_V_TacVest_LIZ","H_MilCap_gry",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_MDF_B_V_TacVest_LIZ","H_MilCap_gry",Standard_Equipment};
};

// Specialists

// Medic
class sia_merc_medic: sia_merc_rifleman
{
    displayName = "Medic";

    cost = 290000;
    attendant = 1;
    icon = "iconManMedic";
    picture = "pictureHeal";

    linkedItems[] = {"V_TacVestIR_blk","H_MilCap_gry",Standard_Equipment};
    respawnLinkedItems[] = {"V_TacVestIR_blk","H_MilCap_gry",Standard_Equipment};

    weapons[] = {"UK3CB_Sten","rhs_weap_tt33","Throw","Put"};
    respawnWeapons[] = {"UK3CB_Sten","rhs_weap_tt33","Throw","Put"};

    magazines[] =
    {
        MAG_7(UK3CB_Sten_34Rnd_Magazine_YT),
        MAG_3(rhs_mag_762x25_8),
        MAG_2(SmokeShellRed),
        MAG_2(SmokeShell)
    };
    respawnMagazines[] =
    {
        MAG_7(UK3CB_Sten_34Rnd_Magazine_YT),
        MAG_3(rhs_mag_762x25_8),
        MAG_2(SmokeShellRed),
        MAG_2(SmokeShell)
    };

    backpack = "sia_merc_backpack_medic";
};

// Engineer
class sia_merc_engineer: sia_merc_rifleman
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

    backpack = "sia_merc_backpack_engineer";
};

// Helipilot
class sia_merc_helipilot: sia_merc_base
{
    displayName = "Helicopter Pilot";

    scope = 2;
    scopeCurator = 2;

    cost = 160000;
    camouflage = 2.0;

    uniformClass = "UK3CB_B_U_CombatUniform_01_WDL";

    linkedItems[] = {"UK3CB_V_Pilot_Vest_Black","UK3CB_H_Pilot_Helmet",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_V_Pilot_Vest_Black","UK3CB_H_Pilot_Helmet",Standard_Equipment};

    weapons[] = {"UK3CB_Sten","rhs_weap_tt33","Throw","Put"};
    respawnWeapons[] = {"UK3CB_Sten","rhs_weap_tt33","Throw","Put"};

    magazines[] =
    {
        MAG_3(UK3CB_MP5_30Rnd_9x19_Magazine_Y),
        MAG_3(rhs_mag_762x25_8),
        MAG_2(SmokeShell),
        "SmokeShellRed",
        "SmokeShellGreen"
    };
    respawnMagazines[] =
    {
        MAG_3(UK3CB_MP5_30Rnd_9x19_Magazine_Y),
        MAG_3(rhs_mag_762x25_8),
        MAG_2(SmokeShell),
        "SmokeShellRed",
        "SmokeShellGreen"
    };
};

// Heli crew
class sia_merc_helicrew: sia_merc_helipilot
{
    displayName = "Helicopter Crew";
    
    linkedItems[] = {"UK3CB_V_Pilot_Vest_Black","UK3CB_H_Crew_Helmet",Standard_Equipment};
    respawnLinkedItems[] = {"UK3CB_V_Pilot_Vest_Black","UK3CB_H_Crew_Helmet",Standard_Equipment};

    weapons[] = {"UK3CB_FAMAS_F1","rhs_weap_tt33","Throw","Put"};
    respawnWeapons[] = {"UK3CB_FAMAS_F1","rhs_weap_tt33","Throw","Put"};

    magazines[] =
    {
        MAG_3(UK3CB_FAMAS_25rnd_556x45_Y),
        MAG_3(rhs_mag_762x25_8),
        MAG_2(SmokeShell),
    };
    respawnMagazines[] =
    {
        MAG_3(UK3CB_FAMAS_25rnd_556x45_Y),
        MAG_3(rhs_mag_762x25_8),
        MAG_2(SmokeShell),
    };
};