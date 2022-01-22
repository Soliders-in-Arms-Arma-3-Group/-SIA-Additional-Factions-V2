class cfgWeapons {

    class rhs_weap_m4a1_blockII_KAC_bk;
    class rhs_weap_m4a1_blockII_M203_bk;


    // BASE

    class sia_cia_m4a1_ta31rco : rhs_weap_m4a1_blockII_KAC_bk
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_acog_rmr";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side_bk";
            };
        };  
    };

    class sia_cia_m4a1_m203_ta31rco : rhs_weap_m4a1_blockII_M203_bk
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_acog_rmr";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side_bk";
            };
        };
    };


 /*
    class sia_medu_trg20_rx01 : arifle_TRG20_F
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_rx01_nofilter";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "acc_pointer_ir";
            };

            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "rhsusf_acc_nt4_black";
	        };
        };
    };
*/

};

