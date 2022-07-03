    #define MAG_XX(a,b) class _xx_##a {magazine = a; count = b;}
    #define WEAP_XX(a,b) class _xx_##a {weapon = a; count = b;}
    #define ITEM_XX(a,b) class _xx_##a {name = a; count = b;}

    #define MACRO_SCOPE_BACKPACK scope = 1;\
					scopeCurator = 0;\
					scopeArsenal = 0;

  /* Backpack Classes */
    class UK3CB_CHD_B_B_ENG_WDL_ALT;
    class UK3CB_CHD_B_B_MD_WDL;
    class UK3CB_CW_US_B_LATE_B_RIF_03;
    class UK3CB_LNM_B_B_CARRYALL_WDL_03;
    class UK3CB_B_Largepack;
    class UK3CB_LSM_B_B_CARRYALL_OLI;

    // Backpack definitons

    // Rifleman's backpack config 
    /*
    class sia_merc_backpack_r : B_AssaultPack_rgr
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Rifleman";
        class TransportMagazines
        {
            MAG_XX(UK3CB_G3_20rnd_762x51_Y,4);
        };
    };
    */

    // Autorifleman's backpack config
    class sia_merc_backpack_ar : UK3CB_CW_US_B_LATE_B_RIF_03
    {
        MACRO_SCOPE_BACKPACK
        
        class TransportMagazines
        {
            MAG_XX(200Rnd_556x45_Box_Tracer_F,3);
        };
    };

    // Machinegunner's backpack config
    class sia_merc_backpack_mg : UK3CB_LSM_B_B_CARRYALL_OLI
    {
        MACRO_SCOPE_BACKPACK
        
        class TransportMagazines
        {
            MAG_XX(rhsusf_100Rnd_762x51,3);
        };
    };

    // Grenadier's backpack
    class sia_merc_backpack_gr : UK3CB_B_Largepack
    {
        MACRO_SCOPE_BACKPACK
        
        class TransportMagazines
        {
            MAG_XX(1Rnd_HE_Grenade_shell,8);
            MAG_XX(1Rnd_Smoke_Grenade_shell,3);
            MAG_XX(1Rnd_SmokeRed_Grenade_shell,1);
            MAG_XX(1Rnd_SmokeGreen_Grenade_shell,1);
            MAG_XX(1Rnd_SmokeBlue_Grenade_shell,1);
        };
    };

    // AT's backpack
    class sia_merc_backpack_at : UK3CB_LNM_B_B_CARRYALL_WDL_03
    {
        MACRO_SCOPE_BACKPACK
        
        class TransportMagazines
        {
            MAG_XX(MRAWS_HEAT55_F,1);
            MAG_XX(MRAWS_HE_F,1);
        };
    };

    // Medic's backpack
    class sia_merc_backpack_medic : UK3CB_CHD_B_B_MD_WDL
    {
        MACRO_SCOPE_BACKPACK
        
	    class TransportItems
	    {
            ITEM_XX(MediKit,1);
            ITEM_XX(FirstAidKit,10);
    	};
    };

    // Engineer's backpack
    class sia_merc_backpack_engineer : UK3CB_CHD_B_B_ENG_WDL_ALT
    {
        MACRO_SCOPE_BACKPACK
        
	    class TransportItems
	    {
            ITEM_XX(APERSBoundingMine_Range_Mag,3);
            ITEM_XX(ClaymoreDirectionalMine_Remote_Mag,2);
            ITEM_XX(DemoCharge_Remote_Mag,2);
            ITEM_XX(ToolKit,1);
    	};
    };

