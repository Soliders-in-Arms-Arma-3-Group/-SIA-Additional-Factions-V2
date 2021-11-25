class sia_group_medu_i_sf2_infantry
{
	name = "Infantry (Commandos)";
	aliveCategory="Infantry";

    // Squads

	class sia_group_medu_i_sf2_infantry_squad
	{
		name = "Rifle Squad";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf2_squadleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf2_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_medu_sf2_specialist_at";
			rank = "CORPORAL";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_medu_sf2_marksman";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "sia_medu_sf2_teamleader";
			rank = "SERGEANT";
			position[] = {-10,-10,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "sia_medu_sf2_autorifleman";
			rank = "CORPORAL";
			position[] = {15,-15,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "sia_medu_sf2_rifleman_lat";
			rank = "PRIVATE";
			position[] = {-15,-15,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "sia_medu_sf2_medic";
			rank = "PRIVATE";
			position[] = {20,-20,0};
		};
	};

    class sia_group_medu_i_sf2_infantry_squad_weap
	{
		name = "Weapon Squad";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf2_squadleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf2_autorifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_medu_sf2_grenadier";
			rank = "CORPORAL";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_medu_sf2_teamleader";
			rank = "SERGEANT";
			position[] = {10,-10,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "sia_medu_sf2_machinegunner";
			rank = "CORPORAL";
			position[] = {-10,-10,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "sia_medu_sf2_marksman";
			rank = "PRIVATE";
			position[] = {15,-15,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "sia_medu_sf2_rifleman_lat";
			rank = "PRIVATE";
			position[] = {-15,-15,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "sia_medu_sf2_medic";
			rank = "PRIVATE";
			position[] = {20,-20,0};
		};
	};

    // Teams

    class sia_group_medu_i_sf2_infantry_team
	{
		name = "Fire Team";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf2_teamleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf2_autorifleman";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_medu_sf2_grenadier";
			rank = "PRIVATE";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_medu_sf2_rifleman_lat";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};

        class sia_group_medu_i_sf2_infantry_team_at
	{
		name = "Team (AT)";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf2_teamleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf2_autorifleman";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_medu_sf2_rifleman";
			rank = "PRIVATE";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_medu_sf2_specialist_at";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};

    class sia_group_medu_i_sf2_infantry_team_mg
	{
		name = "Team (MG)";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf2_teamleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf2_machinegunner";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_medu_sf2_rifleman";
			rank = "PRIVATE";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_medu_sf2_rifleman_lat";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};

    class sia_group_medu_i_sf2_infantry_team_support
	{
		name = "Team (Support)";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf2_teamleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf2_autorifleman";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_medu_sf2_marksman";
			rank = "PRIVATE";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_medu_sf2_medic";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};

    class sia_group_medu_i_sf2_infantry_sentry
	{
		name = "Sentry";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf2_grenadier";
			rank = "CORPORAL";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf2_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
	};

    class sia_group_medu_i_sf2_infantry_sentry_at
	{
		name = "Sentry (AT)";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf2_specialist_at";
			rank = "CORPORAL";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf2_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
	};

    class sia_group_medu_i_sf2_infantry_sentry_ar
	{
		name = "Sentry (AR)";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf2_autorifleman";
			rank = "CORPORAL";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf2_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
	};

    class sia_group_medu_i_sf2_infantry_sentry_mk
	{
		name = "Sentry (MK)";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf2_marksman";
			rank = "CORPORAL";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf2_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
	};

};