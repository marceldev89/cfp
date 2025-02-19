//////////////////////////////////////////////////////////////////////////////////
// Config Automatically Generated by ALiVE ORBAT Creator
// Generated with Arma 3 version 176.143187 on Stable branch
// Generated with ALiVE version 1.5.0.1711091
//////////////////////////////////////////////////////////////////////////////////


class CBA_Extended_EventHandlers_base;

class CfgVehicles {

    class O_Soldier_F;
    class O_Soldier_F_OCimport_01 : O_Soldier_F { scope = 0; class EventHandlers; };
    class O_Soldier_F_OCimport_02 : O_Soldier_F_OCimport_01 { class EventHandlers; };

    class CUP_C_Ikarus_TKC;
    class CUP_C_Ikarus_TKC_OCimport_01 : CUP_C_Ikarus_TKC { scope = 0; class EventHandlers; };
    class CUP_C_Ikarus_TKC_OCimport_02 : CUP_C_Ikarus_TKC_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_LR_Transport_CTK;
    class CUP_C_LR_Transport_CTK_OCimport_01 : CUP_C_LR_Transport_CTK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_LR_Transport_CTK_OCimport_02 : CUP_C_LR_Transport_CTK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class CUP_C_UAZ_Open_TK_CIV;
    class CUP_C_UAZ_Open_TK_CIV_OCimport_01 : CUP_C_UAZ_Open_TK_CIV { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_UAZ_Open_TK_CIV_OCimport_02 : CUP_C_UAZ_Open_TK_CIV_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };

    class CUP_C_SUV_TK;
    class CUP_C_SUV_TK_OCimport_01 : CUP_C_SUV_TK { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_SUV_TK_OCimport_02 : CUP_C_SUV_TK_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
            class CargoTurret_09;
        };
    };

    class CUP_C_SUV_CIV;
    class CUP_C_SUV_CIV_OCimport_01 : CUP_C_SUV_CIV { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_SUV_CIV_OCimport_02 : CUP_C_SUV_CIV_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
            class CargoTurret_06;
            class CargoTurret_07;
            class CargoTurret_08;
            class CargoTurret_09;
        };
    };

    class CUP_C_Datsun_Plain;
    class CUP_C_Datsun_Plain_OCimport_01 : CUP_C_Datsun_Plain { scope = 0; class EventHandlers; class Turrets; };
    class CUP_C_Datsun_Plain_OCimport_02 : CUP_C_Datsun_Plain_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class C_Truck_02_covered_F;
    class C_Truck_02_covered_F_OCimport_01 : C_Truck_02_covered_F { scope = 0; class EventHandlers; class Turrets; };
    class C_Truck_02_covered_F_OCimport_02 : C_Truck_02_covered_F_OCimport_01 {
        class EventHandlers;
        class Turrets : Turrets {
            class CargoTurret_01;
            class CargoTurret_02;
        };
    };

    class C_Van_01_box_F;
    class C_Van_01_box_F_OCimport_01 : C_Van_01_box_F { scope = 0; class EventHandlers; };
    class C_Van_01_box_F_OCimport_02 : C_Van_01_box_F_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_Golf4_random_Civ;
    class CUP_C_Golf4_random_Civ_OCimport_01 : CUP_C_Golf4_random_Civ { scope = 0; class EventHandlers; };
    class CUP_C_Golf4_random_Civ_OCimport_02 : CUP_C_Golf4_random_Civ_OCimport_01 { scope = 0; class EventHandlers; };

    class CUP_C_Octavia_CIV;
    class CUP_C_Octavia_CIV_OCimport_01 : CUP_C_Octavia_CIV { scope = 0; class EventHandlers; };
    class CUP_C_Octavia_CIV_OCimport_02 : CUP_C_Octavia_CIV_OCimport_01 { scope = 0; class EventHandlers; };


    class CFP_C_AFRCHRISTIAN_Civ_1_01 : O_Soldier_F_OCimport_02 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_1_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Civilian";
        side = 3;
    	genericNames = "Afromen";
        faction = "CFP_C_AFRCHRISTIAN";

        identityTypes[] = {"Head_African","LanguageFRE_F"};
        uniformClass = "U_I_C_Soldier_Bandit_4_F";

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_4_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    	randomGearProbability = 100;

    	// African Clothing
		uniformList[] = {
        	"U_C_Poor_1", 0.2,
        	"U_C_Man_casual_1_F", 0.2,
        	"U_C_Man_casual_2_F", 0.2,
        	"U_C_Man_casual_3_F", 0.2,
        	"U_C_Man_casual_4_F", 0.2,
        	"U_C_Man_casual_5_F", 0.2,
        	"U_C_Man_casual_6_F", 0.2,
            "CFP_Polo_RealMadrid", 0.2,
            "CFP_Polo_Liverpool", 0.2,
            "CFP_Polo_Sudan", 0.2,
            "CFP_Bandit_Adidas", 0.2,
            "CFP_Bandit_Chang", 0.2,
            "CFP_Bandit_Africa", 0.2,
        	"CUP_U_O_CHDKZ_Lopotev", 0.2,
        	"CUP_U_I_GUE_Anorak_03", 0.2,
        	"U_I_C_Soldier_Bandit_4_F", 0.2,
        	"CUP_U_C_Citizen_02", 0.2,
        	"U_C_Poloshirt_burgundy", 0.2,
        	"U_C_Poloshirt_redwhite", 0.2,
        	"U_C_Poloshirt_blue", 0.2,
        	"U_C_Poloshirt_salmon", 0.2,
        	"U_C_Poloshirt_stripped", 0.2,
        	"U_C_Poloshirt_tricolour", 0.2,
        	"U_BG_Guerilla2_1", 0.2,
        	"U_BG_Guerilla2_2", 0.2,
        	"U_BG_Guerilla2_3", 0.2,
        	"U_BG_Guerilla3_1", 0.2,
        	"U_C_HunterBody_grn", 0.2,
        	"U_OrestesBody", 0.2,
        	"CUP_I_B_PMC_Unit_1", 0.2,
        	"CUP_I_B_PMC_Unit_2", 0.2,
        	"CUP_I_B_PMC_Unit_3", 0.2,
        	"CUP_I_B_PMC_Unit_4", 0.2,
        	"CUP_U_C_Rocker_02", 0.2
		};

    	// African Headgear
        headgearList[] = {
        	"", 0.8,
        	"H_Bandanna_blu", 0.2,
        	"H_Bandanna_cbr", 0.2,
        	"H_Bandanna_gry", 0.2,
        	"H_Bandanna_khk", 0.2,
        	"H_Bandanna_sgg", 0.2,
        	"H_Booniehat_tan", 0.2,
        	"H_Cap_blu", 0.2,
        	"H_Cap_oli", 0.2,
        	"H_Cap_red", 0.2,
        	"H_Cap_tan", 0.2,
        	"H_Cap_blk", 0.2,
        	"SP_BaseballCap_Yellow", 0.2,
        	"SP_BaseballCap_White", 0.2,
        	"SP_BoonieHat_Black", 0.2
    	};

        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {_this = _this select 0;sleep 0.2; _backpack = gettext(configfile >> 'cfgvehicles' >> (typeof _this) >> 'backpack'); waituntil {sleep 0.2; backpack _this == _backpack}; if !(_this getVariable ['ALiVE_OverrideLoadout',false]) then {_loadout = getArray(configFile >> 'CfgVehicles' >> (typeOf _this) >> 'ALiVE_orbatCreator_loadout'); _this setunitloadout _loadout;[_this] call CFP_main_fnc_randomizeUnit;reload _this};};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRCHRISTIAN_Civ_2_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_2_01.JPG;

        displayName = "Civilian";

        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_2_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Civ_3_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_3_01.JPG;

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_1_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Civ_4_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_4_01.JPG;

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_5_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Civ_5_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_5_01.JPG;

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_I_C_Soldier_Bandit_3_F",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Civ_6_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_6_01.JPG;

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_Poloshirt_salmon",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Civ_7_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_7_01.JPG;

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"H_Bandanna_cbr","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_BG_Guerilla2_3",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Civ_8_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_8_01.JPG;

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_Poloshirt_tricolour",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Civ_9_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_9_01.JPG;

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_OrestesBody",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Civ_10_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_10_01.JPG;

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_C_Poloshirt_burgundy",{{"FirstAidKit",1},{"Chemlight_red",1,1}}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Civ_11_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_11_01.JPG;

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_O_TKI_Khet_Partug_02",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Civ_12_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_12_01.JPG;

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_O_TKI_Khet_Partug_03",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Civ_13_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_13_01.JPG;

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"U_Marshal",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Civ_14_01 : CFP_C_AFRCHRISTIAN_Civ_1_01 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Civ_14_01.JPG;

        displayName = "Civilian";


        weapons[] = {"Throw","Put"};
        respawnWeapons[] = {"Throw","Put"};
        linkedItems[] = {"H_Cap_red","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        respawnLinkedItems[] = {"","ItemMap","","ItemRadio","ItemCompass","ItemWatch",""};
        magazines[] = {};
        respawnMagazines[] = {};
        ALiVE_orbatCreator_loadout[] = {{},{},{},{"CUP_U_C_Worker_01",{}},{},{},"","",{},{"ItemMap","","ItemRadio","ItemCompass","ItemWatch",""}};

    };

    class CFP_C_AFRCHRISTIAN_Ikarus_01 : CUP_C_Ikarus_TKC_OCimport_02 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Ikarus_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Ikarus";
        side = 3;
        faction = "CFP_C_AFRCHRISTIAN";
        crew = "CFP_C_AFRCHRISTIAN_Civ_1_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRCHRISTIAN_Land_Rover_01 : CUP_C_LR_Transport_CTK_OCimport_02 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Land_Rover_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Land Rover";
        side = 3;
        faction = "CFP_C_AFRCHRISTIAN";
        crew = "CFP_C_AFRCHRISTIAN_Civ_2_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = "CFP_C_AFRCHRISTIAN_Civ_3_01"; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = "CFP_C_AFRCHRISTIAN_Civ_4_01"; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRCHRISTIAN_UAZ_Open_01 : CUP_C_UAZ_Open_TK_CIV_OCimport_02 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_UAZ_Open_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "UAZ Open";
        side = 3;
        faction = "CFP_C_AFRCHRISTIAN";
        crew = "CFP_C_AFRCHRISTIAN_Civ_5_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRCHRISTIAN_SUV_01 : CUP_C_SUV_TK_OCimport_02 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_SUV_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SUV";
        side = 3;
        faction = "CFP_C_AFRCHRISTIAN";
        crew = "CFP_C_AFRCHRISTIAN_Civ_7_01";

        class Turrets : Turrets {
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRCHRISTIAN_SUV_2_01 : CUP_C_SUV_CIV_OCimport_02 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_SUV_2_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "SUV 2";
        side = 3;
        faction = "CFP_C_AFRCHRISTIAN";
        crew = "CFP_C_AFRCHRISTIAN_Civ_11_01";

        class Turrets : Turrets {
            class CargoTurret_03 : CargoTurret_03 { gunnerType = ""; };
            class CargoTurret_04 : CargoTurret_04 { gunnerType = ""; };
            class CargoTurret_05 : CargoTurret_05 { gunnerType = ""; };
            class CargoTurret_06 : CargoTurret_06 { gunnerType = ""; };
            class CargoTurret_07 : CargoTurret_07 { gunnerType = ""; };
            class CargoTurret_08 : CargoTurret_08 { gunnerType = ""; };
            class CargoTurret_09 : CargoTurret_09 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRCHRISTIAN_Pickup_Old_01 : CUP_C_Datsun_Plain_OCimport_02 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Pickup_Old_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Pickup Old";
        side = 3;
        faction = "CFP_C_AFRCHRISTIAN";
        crew = "CFP_C_AFRCHRISTIAN_Civ_13_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRCHRISTIAN_Zamak_01 : C_Truck_02_covered_F_OCimport_02 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Zamak_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Zamak";
        side = 3;
        faction = "CFP_C_AFRCHRISTIAN";
        crew = "CFP_C_AFRCHRISTIAN_Civ_12_01";

        class Turrets : Turrets {
            class CargoTurret_01 : CargoTurret_01 { gunnerType = ""; };
            class CargoTurret_02 : CargoTurret_02 { gunnerType = ""; };
        };



        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRCHRISTIAN_Truck_Boxer_01 : C_Van_01_box_F_OCimport_02 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Truck_Boxer_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Truck Boxer";
        side = 3;
        faction = "CFP_C_AFRCHRISTIAN";
        crew = "CFP_C_AFRCHRISTIAN_Civ_9_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRCHRISTIAN_Golf_01 : CUP_C_Golf4_random_Civ_OCimport_02 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Golf_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Golf";
        side = 3;
        faction = "CFP_C_AFRCHRISTIAN";
        crew = "CFP_C_AFRCHRISTIAN_Civ_8_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

    class CFP_C_AFRCHRISTIAN_Skoda_01 : CUP_C_Octavia_CIV_OCimport_02 {
        editorPreview = \x\cfp\addons\c_afrchristian\data\preview\CFP_C_AFRCHRISTIAN_Skoda_01.JPG;
        author = "Drew";
        scope = 2;
        scopeCurator = 2;
        displayName = "Skoda";
        side = 3;
        faction = "CFP_C_AFRCHRISTIAN";
        crew = "CFP_C_AFRCHRISTIAN_Civ_6_01";


        class EventHandlers : EventHandlers {
            class CBA_Extended_EventHandlers : CBA_Extended_EventHandlers_base {};

            class ALiVE_orbatCreator {
                init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
            };

        };

        // custom attributes (do not delete)
        ALiVE_orbatCreator_owned = 1;

    };

};