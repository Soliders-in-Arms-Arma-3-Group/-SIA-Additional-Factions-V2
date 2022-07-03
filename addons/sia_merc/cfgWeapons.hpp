/* MACROS DEFINITION */

#define Macro_scope scope = 2;\
					scopeCurator = 2;\

#define AUTHOR_MACRO author="Solders in Arms";

class cfgWeapons {

    class rhs_weap_l1a1;
    // BASE

    class sia_merc_l1a1_l2a2 : rhs_weap_l1a1
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsgref_acc_l1a1_l2a2";
            };
        };  
    };
};

