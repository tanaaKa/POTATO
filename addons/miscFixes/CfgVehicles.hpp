class CBA_Extended_EventHandlers;

class CfgVehicles {
    // Handle fortify moving to acex
    class acex_fortify_setupModule; // these still use acex_
    class EGVAR(fortify,setupModule): acex_fortify_setupModule {
        scope = 1;
        displayName = "delete me and use acex_fortify_setupModule";
    };
    class acex_fortify_buildLocationModule;
    class EGVAR(fortify,buildLocationModule): acex_fortify_buildLocationModule {
        scope = 1;
        displayName = "delete me and use acex_fortify_buildLocationModule";
    };

    // Make vanilla Chinook and EH302 (IDAP/FIA transport heli) float on water. Matches CUP Chinook/CH-53e and other heavy lift helos. Should be extended to all helicopters from mods that could feasibly float. Direction on BIS method from Steam Workshop user "crub"
    class Helicopter_Base_H;
	class Heli_Transport_03_base_F: Helicopter_Base_H {waterLeakiness=0.1;};
    class Heli_Transport_02_base_F: Helicopter_Base_H {waterLeakiness=0.1;};

    // Integrate invisibile backpack from SagJangi
    // https://forums.bohemia.net/forums/topic/222097-battle-belt/
    class Bag_Base;
    class B_Battle_Belt_F: Bag_Base {
        picture = "\A3\Characters_F\data\ui\icon_V_Belt_CA.paa";
        displayName = "Battle Belt";
        model = "\A3\weapons_f\empty";
        author = "SagJangi";
        maximumLoad = 80;
        mass = 8;
        mapSize = 0.47;
        scope = 2;
    };
    class B_Battle_Belt_XL_F: B_Battle_Belt_F {
        displayName = "Battle Belt XL";
        author = "Alablm";
        maximumLoad = 320;
        mass = 60;
    };

    // Add SMAW box
    class Box_NATO_Support_F;
    class GVAR(smawBox): Box_NATO_Support_F {
        scope = 1;
        displayName = "Fucks given";
        transportMaxWeapons = 9001;
        transportMaxMagazines = 9001;
        transportMaxItems = 9001;
        maximumload = 1000;

        class TransportWeapons {};
        class TransportMagazines {};
        class TransportItems {};
        class TransportBackpacks {};
    };

    class Car_F;
    class Wheeled_APC_F: Car_F {
        class EventHandlers;
    };
    class rhsusf_stryker_base: Wheeled_APC_F {
        class EventHandlers: EventHandlers {
            class RHSUSF_EventHandlers {
                init = "diag_log '[POTATO] Disabled Stryrker Lag Screen'; params ['_vehicle']; private _sections = getArray (configFile >> 'CfgVehicles' >> typeOf _vehicle >> 'hiddenSelections'); _vehicle setObjectTexture [_sections find 'BFT_screen', 'z\POTATO\addons\miscFixes\models\plotNvgView.paa'];";
            };
        };
    };
};
