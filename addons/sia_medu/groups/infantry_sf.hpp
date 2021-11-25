class sia_group_medu_i_sf_infantry
{
	name = "Infantry (Special Forces)";
	aliveCategory="Infantry";

    // Squads

	class sia_group_medu_i_sf_infantry_squad
	{
		name = "Rifle Squad";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf_squadleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_medu_sf_specialist_at";
			rank = "CORPORAL";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_medu_sf_marksman";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "sia_medu_sf_teamleader";
			rank = "SERGEANT";
			position[] = {-10,-10,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "sia_medu_sf_autorifleman";
			rank = "CORPORAL";
			position[] = {15,-15,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "sia_medu_sf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {-15,-15,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "sia_medu_sf_medic";
			rank = "PRIVATE";
			position[] = {20,-20,0};
		};
	};

    class sia_group_medu_i_sf_infantry_squad_weap
	{
		name = "Weapon Squad";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf_squadleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf_autorifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_medu_sf_grenadier";
			rank = "CORPORAL";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_medu_sf_teamleader";
			rank = "SERGEANT";
			position[] = {10,-10,0};
		};
		class Unit4
		{
			side = 2;
			vehicle = "sia_medu_sf_machinegunner";
			rank = "CORPORAL";
			position[] = {-10,-10,0};
		};
		class Unit5
		{
			side = 2;
			vehicle = "sia_medu_sf_marksman";
			rank = "PRIVATE";
			position[] = {15,-15,0};
		};
		class Unit6
		{
			side = 2;
			vehicle = "sia_medu_sf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {-15,-15,0};
		};
		class Unit7
		{
			side = 2;
			vehicle = "sia_medu_sf_medic";
			rank = "PRIVATE";
			position[] = {20,-20,0};
		};
	};

    // Teams

    class sia_group_medu_i_sf_infantry_team
	{
		name = "Fire Team";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf_teamleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf_autorifleman";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_medu_sf_grenadier";
			rank = "PRIVATE";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_medu_sf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};

        class sia_group_medu_i_sf_infantry_team_at
	{
		name = "Team (AT)";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf_teamleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf_autorifleman";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_medu_sf_rifleman";
			rank = "PRIVATE";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_medu_sf_specialist_at";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};

    class sia_group_medu_i_sf_infantry_team_mg
	{
		name = "Team (MG)";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf_teamleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf_machinegunner";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_medu_sf_rifleman";
			rank = "PRIVATE";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_medu_sf_rifleman_lat";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};

    class sia_group_medu_i_sf_infantry_team_support
	{
		name = "Team (Support)";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf_teamleader";
			rank = "SERGEANT";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf_autorifleman";
			rank = "CORPORAL";
			position[] = {5,-5,0};
		};
		class Unit2
		{
			side = 2;
			vehicle = "sia_medu_sf_marksman";
			rank = "PRIVATE";
			position[] = {-5,-5,0};
		};
		class Unit3
		{
			side = 2;
			vehicle = "sia_medu_sf_medic";
			rank = "PRIVATE";
			position[] = {10,-10,0};
		};
	};

    class sia_group_medu_i_sf_infantry_sentry
	{
		name = "Sentry";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf_grenadier";
			rank = "CORPORAL";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
	};

    class sia_group_medu_i_sf_infantry_sentry_at
	{
		name = "Sentry (AT)";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf_specialist_at";
			rank = "CORPORAL";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
	};

    class sia_group_medu_i_sf_infantry_sentry_ar
	{
		name = "Sentry (AR)";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf_autorifleman";
			rank = "CORPORAL";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
	};

    class sia_group_medu_i_sf_infantry_sentry_mk
	{
		name = "Sentry (MK)";
		faction = "sia_faction_medu";
		side = 2;

		icon = "\A3\ui_f\data\map\markers\nato\n_inf.paa";

		class Unit0
		{
			side = 2;
			vehicle = "sia_medu_sf_marksman";
			rank = "CORPORAL";
			position[] = {0,0,0};
		};
		class Unit1
		{
			side = 2;
			vehicle = "sia_medu_sf_rifleman";
			rank = "PRIVATE";
			position[] = {5,-5,0};
		};
	};
};