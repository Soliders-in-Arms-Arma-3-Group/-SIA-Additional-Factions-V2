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
    class B_Carryall_khk;
    class B_Kitbag_cbr;
    class VSM_OGA_OD_Backpack_Kitbag;
    class VSM_OGA_OD_carryall;
    class VSM_OGA_OD_Backpack_Compact;

    // Rifleman's backpack config 
    /*
    class sia_cia_backpack_r : B_AssaultPack_rgr
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Rifleman";
        class TransportMagazines
        {
            MAG_XX(UK3CB_G3_20rnd_762x51_Y,4);
        };
    };
    */

    /// Autorifleman's backpack config
    class sia_cia_backpack_ar : VSM_OGA_OD_Backpack_Kitbag
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack AR";
        class TransportMagazines
        {
            MAG_XX(rhsusf_200Rnd_556x45_soft_pouch,4);
        };
    };

    /*
    /// Machinegunner's backpack config
    class sia_cia_backpack_mg : B_FieldPack_khk
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack MG";
        class TransportMagazines
        {
            MAG_XX(UK3CB_MG3_100rnd_762x51_YM,3);
        };
    };
    */

    // Grenadier's backpack
    class sia_cia_backpack_gr : VSM_OGA_OD_Backpack_Compact
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Grenadier";
        class TransportMagazines
        {
            MAG_XX(1Rnd_HE_Grenade_shell,8);
            MAG_XX(1Rnd_Smoke_Grenade_shell,3);
            MAG_XX(ACE_40mm_Flare_ir,3);
            MAG_XX(1Rnd_SmokeRed_Grenade_shell,1);
            MAG_XX(1Rnd_SmokeGreen_Grenade_shell,1);
            MAG_XX(1Rnd_SmokeBlue_Grenade_shell,1);
        };
    };

    // Medic's backpack
    class sia_cia_backpack_medic : VSM_OGA_OD_Backpack_Kitbag
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
    class sia_cia_backpack_engineer : VSM_OGA_OD_Backpack_Kitbag
    {
        MACRO_SCOPE_BACKPACK
        displayName = "Backpack Engineer";
	    class TransportItems
	    {
            ITEM_XX(APERSBoundingMine_Range_Mag,3);
            ITEM_XX(ClaymoreDirectionalMine_Remote_Mag,2);
            ITEM_XX(SLAMDirectionalMine_Wire_Mag,2);
            ITEM_XX(DemoCharge_Remote_Mag,2);
            ITEM_XX(ToolKit,1);
    	};
    };

