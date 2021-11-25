class cfgvehicles {
    class I_Soldier_base_F;
    class sia_aja_base : I_Soldier_base_F
    {
        author = "Solders in Arms";
        scope = 0;
        scopeCurator = 0;
        side = 0;
        faction = "sia_faction_aja";

        uniformClass = "rhsgref_uniform_dpm";
        
        Items[] = {"FirstAidKit"};
	    RespawnItems[] = {"FirstAidKit"};

        weapons[] = {"rhs_weap_l1a1","rhs_weap_type94_new"};
        respawnWeapons[] = {"rhs_weap_l1a1","rhs_weap_type94_new"};
    }

    /* Troop Classes */
    
    // Rifleman
    class sia_aja_rifleman: sia_aja_base
    {
        displayName = "Rifleman";

        scope = 2;
        scopeCurator = 2;

        linkedItems[] = {"UK3CB_V_Chestrig_OLI","UK3CB_ANA_B_H_Beret_GRN"};
        respawnLinkedItems[] = {"UK3CB_V_Chestrig_OLI","UK3CB_ANA_B_H_Beret_GRN"};
    }
}