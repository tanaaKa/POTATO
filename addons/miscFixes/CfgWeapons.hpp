class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons {
    // Add invisible NVGs for AI purposes
    class NVGoggles;
    class potato_fakeNVG: NVGoggles {
        author = "PabstMirror";
        modelOptics = QPATHTOF(models\plotNVGs);
        model = "\A3\weapons_f\empty";
        displayName = "Fake NVGs (AI Only)";
        descriptionShort = "[Plot Googles] Do not attempt to use as a player, only to allow AI to have better vision";
        class ItemInfo {
            type = 616;
            hmdType = 0;
            uniformModel = "\A3\weapons_f\empty";
            modelOff = "\A3\weapons_f\empty";
            mass = 20;
        };
    };

    // add predator NVGs
    class O_NVGoggles_hex_F;
    class potato_predatorHex: O_NVGoggles_hex_F {
        author = "POTATO";
        displayName = "Predator Vision (Hex)";
        thermalMode[] = {7};
        visionMode[] = {"Normal","NVG","TI"};
    };
    class O_NVGoggles_ghex_F;
    class potato_predatorGHex: O_NVGoggles_ghex_F {
        author = "POTATO";
        displayName = "Predator Vision (Green Hex)";
        thermalMode[] = {7};
        visionMode[] = {"Normal","NVG","TI"};
    };
    class O_NVGoggles_urb_F;
    class potato_predatorUrban: O_NVGoggles_urb_F {
        author = "POTATO";
        displayName = "Predator Vision (Urban)";
        thermalMode[] = {7};
        visionMode[] = {"Normal","NVG","TI"};
    };

    // add zeroing to iron sighted G36es
    class hlc_G36_base;
    class hlc_rifle_G36V : hlc_G36_base {
        discreteDistance[] = {100, 200, 300, 400, 500};
        discreteDistanceInitIndex = 1;
    };

    // Add "plot armor" to some vests /* From V_PlateCarrier2_rgr */

    class ItemCore;
    //class Vest_Camo_Base;
    class Vest_Camo_Base: ItemCore {
        class ItemInfo;
    };
    class rhs_6sh92: Vest_Camo_Base {
        class ItemInfo;
    };
    class plotarmor_6sh92: rhs_6sh92 { 
        displayName = "6Sh92 [Plot Armor]";
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };
    // class Vest_Camo_Base: ItemCore {
    //     class ItemInfo;
    // };
    class rhs_vydra_3m: Vest_Camo_Base {
        class ItemInfo: ItemInfo {};
    };
    class plotarmor_vydra_3m: rhs_vydra_3m {
        displayName = "Vydra-3M [Plot Armor]";
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };
    class rhs_belt_holster: Vest_Camo_Base {
        class ItemInfo: ItemInfo {};
    };
    class plotarmor_belt: rhs_belt_holster {
        displayName = "Belt Equipment (Holster) [Plot Armor]";
        descriptionShort = "Armor Level IV";
        class ItemInfo: ItemInfo {
            class HitpointsProtectionInfo {
                class Chest {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Diaphragm {
                    HitpointName = "HitDiaphragm";
                    armor = 20;
                    PassThrough = 0.2;
                };
                class Abdomen {
                    hitpointName = "HitAbdomen";
                    armor = 20;
                    passThrough = 0.2;
                };
                class Body {
                    hitpointName = "HitBody";
                    passThrough = 0.2;
                };
            };
        };
    };
};
