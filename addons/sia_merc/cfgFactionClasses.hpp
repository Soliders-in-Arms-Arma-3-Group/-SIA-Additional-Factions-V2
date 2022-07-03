class CfgFactionClasses {
    class sia_faction_merc {
        displayName = "Tanoan Mercenaries";
        side = 2;
        /*
        flag = "\sia_merc\addons\sia_merc\cia_flag_co.paa";
        icon = "\sia_merc\addons\sia_merc\cia_icon_co.paa";
        */
        icon = "\rhsusf\addons\rhsusf_main\data\armylogo.paa"; // temp until logi is fixed
        priority = 0;
    };

    class sia_faction_merc_east : sia_faction_merc
    {
        side = 0;
    };
};