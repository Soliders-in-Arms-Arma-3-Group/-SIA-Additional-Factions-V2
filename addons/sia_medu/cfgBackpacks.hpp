    /* Backpack Classes */
    #define MAG_XX(a,b) class _xx_##a {magazine = a; count = b;}
    #define WEAP_XX(a,b) class _xx_##a {weapon = a; count = b;}
    #define ITEM_XX(a,b) class _xx_##a {name = a; count = b;}

    #define MACRO_SCOPE_BACKPACK scope = 1;\
					scopeCurator = 0;\
					scopeArsenal = 0;

    // Backpack definitons
    class B_Kitbag_rgr;
    class B_AssaultPack_rgr;
    class B_FieldPack_khk;
    class UK3CB_B_Largepack;
    class rhs_rpg_2;
    class UK3CB_B_Largepack_Med;
    class UK3CB_TKA_B_B_RIF;
    class B_Carryall_khk;
    class B_Kitbag_cbr;
    class VSM_OGA_OD_Backpack_Kitbag;
    class VSM_OGA_OD_carryall;
    class VSM_OGA_OD_Backpack_Compact;

    // Rifleman's backpack config 
    class sia_medu_backpack_r : B_AssaultPack_rgr
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Rifleman";
        class TransportMagazines
        {
            MAG_XX(UK3CB_G3_20rnd_762x51_Y,4);
        };
    };

    class sia_medu_backpack_r_2 : UK3CB_B_Largepack
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Rifleman";
        class TransportMagazines
        {
            MAG_XX(UK3CB_G3_50rnd_762x51_YT,5);
        };
    };

    // AT Specialist's backpack config
    class sia_medu_backpack_at : rhs_rpg_2
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack AT";
        class TransportMagazines
        {
            MAG_XX(rhs_rpg7_PG7VL_mag,2);
            MAG_XX(rhs_rpg7_OG7V_mag,1);
        };
    };

    /// Autorifleman's backpack config
    class sia_medu_backpack_ar : B_Kitbag_rgr
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack AR";
        class TransportMagazines
        {
            MAG_XX(UK3CB_G3_50rnd_762x51_YT,4);
        };
    };

    /// Machinegunner's backpack config
    class sia_medu_backpack_mg : B_FieldPack_khk
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack MG";
        class TransportMagazines
        {
            MAG_XX(UK3CB_MG3_100rnd_762x51_YM,3);
        };
    };

    // Grenadier's backpack
    class sia_medu_backpack_gr : B_AssaultPack_rgr
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Grenadier";
        class TransportMagazines
        {
            MAG_XX(1Rnd_HE_Grenade_shell,8);
            MAG_XX(1Rnd_Smoke_Grenade_shell,3);
            MAG_XX(UGL_FlareWhite_F,3);
            MAG_XX(1Rnd_SmokeRed_Grenade_shell,1);
            MAG_XX(1Rnd_SmokeGreen_Grenade_shell,1);
            MAG_XX(1Rnd_SmokeBlue_Grenade_shell,1);
        };
    };

    // Medics' backpack
    class sia_medu_backpack_medic : UK3CB_B_Largepack_Med
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Medic";
	    class TransportItems
	    {
            ITEM_XX(MediKit,1);
            ITEM_XX(FirstAidKit,10);
    	};
    };

    // Engineer's backpack

     class sia_medu_backpack_engineer : B_Kitbag_rgr
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Engineer";
	    class TransportItems
		{
			ITEM_XX(ToolKit,1);
            ITEM_XX(rhs_ec400_mag,2);
            ITEM_XX(rhs_mine_tm62m_mag,1);
		};
    };

    /// Crewmans's backpack config
    class sia_medu_backpack_crew : B_FieldPack_khk
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Crew";
        class TransportItems
		{
			ITEM_XX(ToolKit,1);
		};
    };

    // SF

    class sia_medu_backpack_sf_at : B_Kitbag_cbr
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack AT";
        class TransportItems
		{
			ITEM_XX(rhs_mag_maaws_HEAT,1);
            ITEM_XX(rhs_mag_maaws_HE,1);
		};
    };

    // SF Autorifleman's backpack
    class sia_medu_backpack_sf_autorifleman : UK3CB_TKA_B_B_RIF
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack AR";
        class TransportItems
		{
			ITEM_XX(rhsusf_200Rnd_556x45_box,2);
		};
    };

    // SF Machinegunner's backpack
    class sia_medu_backpack_sf_machinegunner : UK3CB_TKA_B_B_RIF
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack MG";
        class TransportItems
		{
			ITEM_XX(rhsusf_100Rnd_762x51_m62_tracer,2);
		};
    };

    // SF Engineer's backpack
    class sia_medu_backpack_sf_engineer : B_Carryall_khk
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Engineer";
        class TransportItems
		{
			ITEM_XX(ToolKit,1);
            ITEM_XX(DemoCharge_Remote_Mag,2);
            ITEM_XX(SatchelCharge_Remote_Mag,1);
		};
    };

    // Commandos

    class sia_medu_backpack_sf2_at : VSM_OGA_OD_carryall
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack AT";
        class TransportItems
		{
			ITEM_XX(MRAWS_HEAT_F,1);
            ITEM_XX(MRAWS_HE_F,1);
		};
    };

    class sia_medu_backpack_sf2_ar : UK3CB_B_Largepack
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack AR";
        class TransportItems
		{
			ITEM_XX(rhsusf_200Rnd_556x45_soft_pouch,2);
		};
    };

    class sia_medu_backpack_sf2_mg : VSM_OGA_OD_Backpack_Kitbag
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack AR";
        class TransportItems
		{
			ITEM_XX(150Rnd_93x64_Mag,2);
		};
    };

    class sia_medu_backpack_sf2_gr : VSM_OGA_OD_Backpack_Compact
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Grenadier";
        class TransportMagazines
        {
            MAG_XX(1Rnd_HE_Grenade_shell,8);
            MAG_XX(1Rnd_Smoke_Grenade_shell,3);
            MAG_XX(UGL_FlareWhite_F,3);
            MAG_XX(1Rnd_SmokeRed_Grenade_shell,1);
            MAG_XX(1Rnd_SmokeGreen_Grenade_shell,1);
            MAG_XX(1Rnd_SmokeBlue_Grenade_shell,1);
        };
    };   

    class sia_medu_backpack_sf2_engineer : VSM_OGA_OD_carryall
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Engineer";
        class TransportItems
		{
			ITEM_XX(ToolKit,1);
            ITEM_XX(DemoCharge_Remote_Mag,2);
            ITEM_XX(SatchelCharge_Remote_Mag,1);
		};
    };

    