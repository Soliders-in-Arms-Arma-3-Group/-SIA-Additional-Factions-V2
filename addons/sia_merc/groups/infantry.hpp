
class sia_group_merc_i_infantry
{
	name = "Infantry";
	aliveCategory="Infantry";

    // Squads

	class sia_group_merc_i_infantry_squad
	{
		name = "Rifle Squad";
		faction = "sia_faction_merc";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_merc_squadleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_merc_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_merc_specialist_at";
			rank = "CORPORAL";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_merc_marksman";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "sia_merc_teamleader";
			rank = "SERGEANT";
			position[] = {-10,-10,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "sia_merc_autorifleman";
			rank = "CORPORAL";
			position[] = {15,-15,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "sia_merc_rifleman_lat";
			rank = "PRIVATE";
			position[] = {-15,-15,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "sia_merc_medic";
			rank = "PRIVATE";
			position[] = {20,-20,0};
		};
	};

    class sia_group_merc_i_infantry_squad_weap
	{
		name = "Weapon Squad";
		faction = "sia_faction_merc";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_merc_squadleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_merc_autorifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_merc_grenadier";
			rank = "CORPORAL";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_merc_teamleader";
			rank = "SERGEANT";
			position[] = {10,-10,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "sia_merc_machinegunner";
			rank = "CORPORAL";
			position[] = {-10,-10,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "sia_merc_marksman";
			rank = "PRIVATE";
			position[] = {15,-15,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "sia_merc_rifleman_lat";
			rank = "PRIVATE";
			position[] = {-15,-15,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "sia_merc_medic";
			rank = "PRIVATE";
			position[] = {20,-20,0};
		};
	};

    // Teams

    class sia_group_merc_i_infantry_team
	{
		name = "Fire Team";
		faction = "sia_faction_merc";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_merc_teamleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_merc_autorifleman";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_merc_grenadier";
			rank = "PRIVATE";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_merc_rifleman_lat";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};

        class sia_group_merc_i_infantry_team_at
	{
		name = "Team (AT)";
		faction = "sia_faction_merc";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_merc_teamleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_merc_autorifleman";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_merc_rifleman";
			rank = "PRIVATE";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_merc_specialist_at";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};

    class sia_group_merc_i_infantry_team_mg
	{
		name = "Team (MG)";
		faction = "sia_faction_merc";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_merc_teamleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_merc_machinegunner";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_merc_rifleman";
			rank = "PRIVATE";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_merc_rifleman_lat";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};

    class sia_group_merc_i_infantry_team_support
	{
		name = "Team (Support)";
		faction = "sia_faction_merc";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_merc_teamleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_merc_autorifleman";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_merc_marksman";
			rank = "PRIVATE";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_merc_medic";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};

    class sia_group_merc_i_infantry_sentry
	{
		name = "Sentry";
		faction = "sia_faction_merc";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_merc_grenadier";
			rank = "CORPORAL";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_merc_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
	};

    class sia_group_merc_i_infantry_sentry_at
	{
		name = "Sentry (AT)";
		faction = "sia_faction_merc";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_merc_specialist_at";
			rank = "CORPORAL";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_merc_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
	};

    class sia_group_merc_i_infantry_sentry_ar
	{
		name = "Sentry (AR)";
		faction = "sia_faction_merc";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_merc_autorifleman";
			rank = "CORPORAL";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_merc_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
	};

    class sia_group_merc_i_infantry_sentry_mk
	{
		name = "Sentry (MK)";
		faction = "sia_faction_merc";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_merc_marksman";
			rank = "CORPORAL";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_merc_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
	};
	/*
    class sia_group_merc_i_infantry_sniper
	{
		name = "Sniper Team";
		faction = "sia_faction_merc";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_recon.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_merc_sniper";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_merc_spotter";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
	};
	*/
};
