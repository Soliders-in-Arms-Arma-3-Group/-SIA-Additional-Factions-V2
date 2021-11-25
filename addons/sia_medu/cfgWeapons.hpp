class cfgWeapons {

    class UK3CB_G3SG1;
    class UK3CB_G3KA4_GL;
    class rhs_weap_rpg7;
    class rhs_weap_g36k;
    class rhs_weap_g36kv;
    class rhs_weap_g36kv_ag36;
    class rhs_weap_minimi_para_railed; 
    class rhs_weap_m240B;
    class rhs_weap_SCARH_STD;
    class rhs_weap_g36c;
    class arifle_TRG21_F;
    class arifle_TRG21_GL_F;
    class hgun_P07_F;
    class MMG_01_tan_F;
    class srifle_DMR_05_blk_F;
    class arifle_TRG20_F;
    class UK3CB_PSG1A1;

    // Army
    class sia_medu_weap_g3sg1_zfsg1 : UK3CB_G3SG1 
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "uk3cb_optic_zfsg1"; 
            };
        };
    };

    class sia_medu_weap_g3sg1_stanagzf : UK3CB_G3SG1 
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "uk3cb_optic_stanagzf_g3";
            };
        };
    };

    class sia_medu_weap_g3ka4_stanagzf : UK3CB_G3KA4_GL 
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "uk3cb_optic_stanagzf_g3";
            };
        };
    };

    class sia_medu_weap_rpg7_pgo7v : rhs_weap_rpg7 
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhs_acc_pgo7v";
            };
        };
    };

    // SF

    class sia_medu_weap_g36c_eotech : rhs_weap_g36c
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side_bk";
		    };

            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "rhssaf_acc_g36_rotex";
	        };

            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "rhsusf_acc_rvg_blk";
            };
        };
    };

    class sia_medu_weap_g36c_compm4 : rhs_weap_g36c
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_compm4";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side_bk";
		    };

            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "rhssaf_acc_g36_rotex";
	        };

            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "rhsusf_acc_rvg_blk";
            };
        };
    };

    class sia_medu_weap_g36kv_compm4: rhs_weap_g36kv 
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_compm4";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side_bk";
		    };

            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "rhssaf_acc_g36_rotex";
	        };
        };
    };

    class sia_medu_weap_g36kv_eotech: rhs_weap_g36kv 
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_eotech_552";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side_bk";
		    };

            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "rhssaf_acc_g36_rotex";
	        };
        };
    };

    class sia_medu_weap_g36kv_mrco: rhs_weap_g36kv 
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_mrco";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side_bk";
		    };

            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "rhssaf_acc_g36_rotex";
	        };
        };
    };

    class sia_medu_weap_g36kv_ag36_comp4: rhs_weap_g36kv_ag36 
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_compm4";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side_bk";
		    };
        };
    };

    class sia_medu_weap_g36kv_ag36_mrco: rhs_weap_g36kv_ag36 
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_mrco";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side_bk";
		    };
        };
    };

    class sia_medu_weap_minimi_elcan: rhs_weap_minimi_para_railed
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_elcan";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side_bk";
		    };
        };
    };

    class sia_medu_weap_minimi_elcan_nt4: rhs_weap_minimi_para_railed
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_elcan";
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

    class sia_medu_weap_m240b_elcan_ard: rhs_weap_m240B
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_elcan_ard";
            };
        };
    };

    class sia_medu_weap_scarh_mrco_grip : rhs_weap_SCARH_STD
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_mrco";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "rhsusf_acc_anpeq15side_bk";
            };

            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "rhsusf_acc_grip1";
            };
        };
    };

    // Commandos

    class sia_medu_weap_trg21_rx01 : arifle_TRG21_F
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

    class sia_medu_weap_trg21_gl_rx01 : arifle_TRG21_GL_F
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

    class sia_medu_weap_trg21_gl_mrco : arifle_TRG21_GL_F
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_mrco";
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

    class sia_medu_weap_trg21_mrco : arifle_TRG21_F
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_mrco";
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

    class sia_medu_p07_snds : hgun_P07_F
    {
         scope = 1;
        class LinkedItems {

            class LinkedItemsMuzzle {
                slot = "MuzzleSlot";
                item = "muzzle_snds_l";
	        };
        };
    };

    class sia_medu_mmg_elcan : MMG_01_tan_F
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "rhsusf_acc_elcan_ard";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "acc_pointer_ir";
            };

            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "bipod_01_f_blk";
            };
        };
    };

    class sia_medu_dmr_khs : srifle_DMR_05_blk_F
    {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "optic_khs_blk";
            };

            class LinkedItemsAcc {
                slot = "PointerSlot";
                item = "acc_pointer_ir";
            };

            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "bipod_02_f_blk";
            };
        };  
    };

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

    class sia_medu_psg1a1_accupoint : UK3CB_PSG1A1
        {
        scope = 1;
        class LinkedItems {

            class LinkedItemsOptic {
                slot = "CowsSlot";
                item = "uk3cb_optic_accupoint_g3";
            };

            class LinkedItemsUnder {
                slot = "UnderBarrelSlot";
                item = "rhs_acc_harris_swivel";
            };
        };
    };
};

