class CfgVehicles {
    class Tank;
    class Car_F;
    class Tank_F : Tank {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0.2;
        GVAR(hullFireProb) = 0.5;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0.2;
    };
    class Wheeled_APC_F : Car_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0.2;
        GVAR(hullFireProb) = 0.5;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0.2;
    };
    class APC_Tracked_01_base_F : Tank_F {};
    class B_APC_Tracked_01_base_F : APC_Tracked_01_base_F {};
    class B_APC_Tracked_01_AA_F : B_APC_Tracked_01_base_F {
        GVAR(hullDetonationProb) = 0.4;
        GVAR(turretDetonationProb) = 0.4;
        GVAR(engineDetonationProb) = 0.4;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.8;
    };
    class B_APC_Tracked_01_rcws_F : B_APC_Tracked_01_base_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.8;
        GVAR(turretFireProb) = 0.5;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class B_APC_Tracked_01_CRV_F : B_APC_Tracked_01_base_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.8;
        GVAR(turretFireProb) = 0.5;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class APC_Wheeled_01_base_F : Wheeled_APC_F {};
    class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F {};
    class B_APC_Wheeled_01_cannon_F : B_APC_Wheeled_01_base_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.7;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class AFV_Wheeled_01_base_F: Wheeled_APC_F {};
    class B_AFV_Wheeled_01_cannon_F: AFV_Wheeled_01_base_F {
        GVAR(hullDetonationProb) = 0.5;
        GVAR(turretDetonationProb) = 0.5;
        GVAR(engineDetonationProb) = 0.2;
        GVAR(hullFireProb) = 0.2;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class MBT_01_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0;
        GVAR(turretFireProb) = 0;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0;
    };
    class APC_Tracked_02_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.8;
        GVAR(turretFireProb) = 0.5;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class O_APC_Tracked_02_base_F : APC_Tracked_02_base_F {};
    class O_APC_Tracked_02_AA_F : O_APC_Tracked_02_base_F {
        GVAR(hullDetonationProb) = 0.4;
        GVAR(turretDetonationProb) = 0.4;
        GVAR(engineDetonationProb) = 0.4;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.8;
    };
    class MBT_04_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.2;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0;
    };
    class MBT_02_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.2;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0;
    };
    class LT_01_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0.8;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0.3;
        GVAR(hullFireProb) = 0.5;
        GVAR(turretFireProb) = 0;
        GVAR(engineFireProb) = 0.7;
        GVAR(detonationDuringFireProb) = 0.9;
    };
    class LT_01_scout_base_F : LT_01_base_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0;
        GVAR(turretFireProb) = 0;
        GVAR(engineFireProb) = 0;
        GVAR(detonationDuringFireProb) = 0;
    };
    class APC_Tracked_03_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.7;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class APC_Wheeled_03_base_F : Wheeled_APC_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.7;
        GVAR(detonationDuringFireProb) = 0.5;
    };
    class MBT_03_base_F : Tank_F {
        GVAR(hullDetonationProb) = 0.3;
        GVAR(turretDetonationProb) = 0.5;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.3;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0.7;
    };
    class rhsgref_BRDM2_msv : Wheeled_APC_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.7;
        GVAR(detonationDuringFireProb) = 0.5;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.7;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.7;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.7;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.5;
    };
     class rhs_bmp1_msv : APC_Tracked_02_base_F { 
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.8;
        GVAR(turretFireProb) = 0.5;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.8;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.5;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.8;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.5;
        ACEGVAR(vehicle_damage,canHaveFireRing) = 1;
    };
    class rhs_t72ba_tv : Tank_F {
        GVAR(hullDetonationProb) = 0.8;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0.2;
        GVAR(hullFireProb) = 0.8;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0.2;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0.8;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.8;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.2;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.5;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.2;
        ACEGVAR(vehicle_damage,canHaveFireRing) = 1;
    };
    class rhs_zsu234_aa : Tank_F {
        GVAR(turretDetonationProb) = 0;
        GVAR(hullDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0.2;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.8;
        
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.7;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.7;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.8;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.8;
        ACEGVAR(vehicle_damage,canHaveFireRing) = 1;
    }; 
    class rhs_btr60_msv : Wheeled_APC_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.7;
        GVAR(detonationDuringFireProb) = 0.5;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.7;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.7;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.7;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.5;
    };
    class rhs_btr80_vdv: Wheeled_APC_F {
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.7;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.7;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.7;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.5;
    };
    class rhs_btr80a_msv: rhs_btr80_vdv {
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0.3;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0.3;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.7;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.7;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.7;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.8;
    };
    class rhsusf_m113_usarmy_M240 : Tank_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.7;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.2;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.8;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.5;
    };
    class rhsusf_m113d_usarmy : Tank_F {
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.7;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.2;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.8;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.5;
    };
    class rhsusf_m113_usarmy : rhsusf_m113_usarmy_M240 {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0;
        GVAR(turretFireProb) = 0;
        GVAR(engineFireProb) = 0;
        GVAR(detonationDuringFireProb) = 0;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0;
        ACEGVAR(vehicle_damage,turretFireProb) = 0;
        ACEGVAR(vehicle_damage,engineFireProb) = 0;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0;
    };
    class rhsusf_stryker_m1132_m2_np_d : Tank_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.2;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.2;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.2;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.8;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.5;
        ACEGVAR(vehicle_damage,canHaveFireRing) = 1;
    };
    class rhsusf_stryker_m1132_m2_d : Wheeled_APC_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.5;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.7;
        GVAR(detonationDuringFireProb) = 0.5;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.5;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.2;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.7;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.5;
    };
    class rhsusf_m1a2sep2d_usarmy : Tank_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0;
        GVAR(turretFireProb) = 0;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0;
        ACEGVAR(vehicle_damage,turretFireProb) = 0;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.5;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0;
        ACEGVAR(vehicle_damage,canHaveFireRing) = 1;
    };
    class rhsusf_m1a2sep2wd_usarmy : Tank_F {
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0;
        ACEGVAR(vehicle_damage,turretFireProb) = 0;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.5;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0;
        ACEGVAR(vehicle_damage,canHaveFireRing) = 1;
    };
    class rhsusf_m1a2sep1tuskiiwd_usarmy: Tank_F {
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0;
        ACEGVAR(vehicle_damage,turretFireProb) = 0;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.5;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0;
        ACEGVAR(vehicle_damage,canHaveFireRing) = 1;
    };
    class rhs_bmp3_msv : Tank_F {
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.5;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.5;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.2;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.8;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.5;
        ACEGVAR(vehicle_damage,canHaveFireRing) = 1;
    };
    class rhs_tigr_sts_vdv : Wheeled_APC_F { // PKM Vodnik
        GVAR(hullDetonationProb) = 0.2;
        GVAR(turretDetonationProb) = 0.2;
        GVAR(engineDetonationProb) = 0.1;
        GVAR(hullFireProb) = 0.7;
        GVAR(turretFireProb) = 0.7;
        GVAR(engineFireProb) = 0.8;
        GVAR(detonationDuringFireProb) = 0.5;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0.2;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0.1;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.7;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.7;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.8;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0.5;
    };
    class rhs_tigr_sts_3camo_vdv : rhs_tigr_sts_vdv {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0;
        GVAR(turretFireProb) = 0;
        GVAR(engineFireProb) = 0;
        GVAR(detonationDuringFireProb) = 0;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0;
        ACEGVAR(vehicle_damage,turretFireProb) = 0;
        ACEGVAR(vehicle_damage,engineFireProb) = 0;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0;
    };
    class rhs_t90a_tv : Tank_F {
        GVAR(hullDetonationProb) = 0;
        GVAR(turretDetonationProb) = 0;
        GVAR(engineDetonationProb) = 0;
        GVAR(hullFireProb) = 0.2;
        GVAR(turretFireProb) = 0.2;
        GVAR(engineFireProb) = 0.5;
        GVAR(detonationDuringFireProb) = 0;
        
        ACEGVAR(vehicle_damage,hullDetonationProb) = 0;
        ACEGVAR(vehicle_damage,turretDetonationProb) = 0;
        ACEGVAR(vehicle_damage,engineDetonationProb) = 0;
        ACEGVAR(vehicle_damage,hullFireProb) = 0.2;
        ACEGVAR(vehicle_damage,turretFireProb) = 0.2;
        ACEGVAR(vehicle_damage,engineFireProb) = 0.5;
        ACEGVAR(vehicle_damage,detonationDuringFireProb) = 0;
        ACEGVAR(vehicle_damage,canHaveFireRing) = 1;
    };
};

