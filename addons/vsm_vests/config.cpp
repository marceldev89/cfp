////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 5.24
//Produced on Sun Feb 25 21:14:40 2018 : Created on Sun Feb 25 21:14:40 2018
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class P:\x\cfp\addons\vsm_vests\config.bin{
class CfgPatches
{
	class CFP_Vests_Config
	{
		units[] = {};
		weapons[] = {"CFP_RAV_operator_MulticamTropic","CFP_RAV_MG_MulticamTropic","CFP_RAV_Breacher_MulticamTropic","CFP_RAV_operator_ProjectHonor","CFP_RAV_MG_ProjectHonor","CFP_RAV_Breacher_ProjectHonor","CFP_RAV_operator_OGA","CFP_RAV_MG_OGA","CFP_RAV_Breacher_OGA","CFP_RAV_operator_OGA_OD","CFP_RAV_MG_OGA_OD","CFP_RAV_Breacher_OGA_OD","CFP_MBSS_Green","CFP_MBSS_BLK","CFP_MBSS_TAN","CFP_MBSS_CB","CFP_MBSS_PACA_operator","CFP_MBSS_PACA","CFP_MBSS_PACA_BLK","CFP_MBSS_PACA_TAN","CFP_MBSS_PACA_CB","CFP_LBT1961_Black","CFP_CarrierRig_Operator_OGA_OD","CFP_CarrierRig_Breacher_OGA_OD","CFP_CarrierRig_Gunner_OGA_OD","CFP_CarrierRig_Operator_ProjectHonor","CFP_CarrierRig_Breacher_ProjectHonor","CFP_CarrierRig_Gunner_ProjectHonor","CFP_CarrierRig_Operator_multicamTropic","CFP_CarrierRig_Breacher_multicamTropic","CFP_CarrierRig_Gunner_multicamTropic","CFP_CarrierRig_Operator_OGA","CFP_CarrierRig_Breacher_OGA","CFP_CarrierRig_Gunner_OGA","CFP_LBT1961_CB","CFP_LBT1961_GRN","CFP_LBT1961_OGA_OD","CFP_LBT6094_operator_multicamTropic","CFP_LBT6094_MG_multicamTropic","CFP_LBT6094_breacher_multicamTropic","CFP_LBT6094_operator_OGA","CFP_LBT6094_MG_OGA","CFP_LBT6094_breacher_OGA","CFP_LBT6094_operator_OGA_OD","CFP_LBT6094_MG_OGA_OD","CFP_LBT6094_breacher_OGA_OD","CFP_LBT6094_operator_ProjectHonor","CFP_LBT6094_MG_ProjectHonor","CFP_LBT6094_breacher_ProjectHonor","CFP_FAPC_Operator_MulticamTropic","CFP_FAPC_Breacher_MulticamTropic","CFP_FAPC_MG_MulticamTropic","CFP_FAPC_Operator_OGA_OD","CFP_FAPC_Breacher_OGA_OD","CFP_FAPC_MG_OGA_OD","CFP_FAPC_Operator_OGA","CFP_FAPC_Breacher_OGA","CFP_FAPC_MG_OGA","CFP_FAPC_Operator_ProjectHonor","CFP_FAPC_Breacher_ProjectHonor","CFP_FAPC_MG_ProjectHonor","CFP_RAV_operator_M81","CFP_RAV_MG_M81","CFP_RAV_Breacher_M81","CFP_CarrierRig_Operator_M81","CFP_CarrierRig_Breacher_M81","CFP_CarrierRig_Gunner_M81","CFP_LBT6094_operator_M81","CFP_LBT6094_MG_M81","CFP_LBT6094_breacher_M81","CFP_FAPC_Operator_M81","CFP_FAPC_Breacher_M81","CFP_FAPC_MG_M81","CFP_RAV_operator_Multicam","CFP_RAV_MG_Multicam","CFP_RAV_Breacher_Multicam","CFP_CarrierRig_Operator_Multicam","CFP_CarrierRig_Breacher_Multicam","CFP_CarrierRig_Gunner_Multicam","CFP_LBT6094_operator_Multicam","CFP_LBT6094_MG_Multicam","CFP_LBT6094_breacher_Multicam","CFP_FAPC_Operator_Multicam","CFP_FAPC_Breacher_Multicam","CFP_FAPC_MG_Multicam","CFP_RAV_operator_AOR1","CFP_RAV_MG_AOR1","CFP_RAV_Breacher_AOR1","CFP_CarrierRig_Operator_AOR1","CFP_CarrierRig_Breacher_AOR1","CFP_CarrierRig_Gunner_AOR1","CFP_LBT6094_operator_AOR1","CFP_LBT6094_MG_AOR1","CFP_LBT6094_breacher_AOR1","CFP_FAPC_Operator_AOR1","CFP_FAPC_Breacher_AOR1","CFP_FAPC_MG_AOR1","CFP_RAV_operator_OCP","CFP_RAV_MG_OCP","CFP_RAV_Breacher_OCP","CFP_CarrierRig_Operator_OCP","CFP_CarrierRig_Breacher_OCP","CFP_CarrierRig_Gunner_OCP","CFP_LBT6094_operator_OCP","CFP_LBT6094_MG_OCP","CFP_LBT6094_breacher_OCP","CFP_FAPC_Operator_OCP","CFP_FAPC_Breacher_OCP","CFP_FAPC_MG_OCP"};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F"};
	};
};
class cfgWeapons
{
	class ItemCore;
	class UniformItem;
	class VestItem;
	class Vest_Camo_Base: ItemCore
    {
		class ItemInfo;
	};
	class CFP_RAV_operator_MulticamTropic: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_operator_MulticamTropic.paa";
		scope = 2;
		author = "CFP";
		displayName = "MulticamTropic Paraclete RAV (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_MulticamTropic.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_multicamtropic_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_multicamtropic.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_MG_MulticamTropic: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_MG_MulticamTropic.paa";
		scope = 2;
		author = "CFP";
		displayName = "MulticamTropic Paraclete RAV (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_MulticamTropic.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_multicamtropic_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_multicamtropic.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_Breacher_MulticamTropic: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_Breacher_MulticamTropic.paa";
		scope = 2;
		author = "CFP";
		displayName = "MulticamTropic Paraclete RAV (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_MulticamTropic.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_multicamtropic_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_multicamtropic.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_operator_ProjectHonor: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_operator_ProjectHonor.paa";
		scope = 2;
		author = "CFP";
		displayName = "ProjectHonor Paraclete RAV (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_ProjectHonor.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_ProjectHonor.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_MG_ProjectHonor: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_MG_ProjectHonor.paa";
		scope = 2;
		author = "CFP";
		displayName = "ProjectHonor Paraclete RAV (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_ProjectHonor.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_projecthonor.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_ProjectHonor.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_Breacher_ProjectHonor: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_Breacher_ProjectHonor.paa";
		scope = 2;
		author = "CFP";
		displayName = "ProjectHonor Paraclete RAV (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_ProjectHonor.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_ProjectHonor.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_operator_OGA: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_operator_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA Paraclete RAV (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_OGA.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_rav_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_MG_OGA: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_MG_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA Paraclete RAV (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_OGA.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_rav_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_Breacher_OGA: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_Breacher_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA Paraclete RAV (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_OGA.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_rav_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OGA.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_operator_OGA_OD: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_operator_OGA_OD.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA OD Paraclete RAV (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_OD_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA_OD.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_MG_OGA_OD: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_MG_OGA_OD.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA OD Paraclete RAV (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_OD_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA_OD.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_Breacher_OGA_OD: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_Breacher_OGA_OD.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA OD Paraclete RAV (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_OD_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OGA_OD.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_MBSS_Green: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_MBSS_Green.paa";
		scope = 2;
		author = "CFP";
		displayName = "MBSS (Green)";
		// picture = "\x\cfp\addons\vsm_vests\data\mbss_icon.paa";
		model = "\x\cfp\addons\vsm_vests\MBSS.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vsm_vests\data\spec_mbss_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\MBSS.p3d";
			containerClass = "Supply120";
			mass = 20;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.4;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.4;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.4;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.4;
				};
			};
		};
	};
	class CFP_MBSS_BLK: CFP_MBSS_Green
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_MBSS_BLK.paa";
		scope = 2;
		author = "CFP";
		displayName = "MBSS (Black)";
		// picture = "\x\cfp\addons\vsm_vests\data\mbss_icon_blk.paa";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vsm_vests\data\spec_mbss_blk_co.paa"};
	};
	class CFP_MBSS_TAN: CFP_MBSS_Green
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_MBSS_TAN.paa";
		scope = 2;
		author = "CFP";
		displayName = "MBSS (Tan)";
		// picture = "\x\cfp\addons\vsm_vests\data\mbss_icon_tan.paa";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vsm_vests\data\spec_mbss_tan_co.paa"};
	};
	class CFP_MBSS_CB: CFP_MBSS_Green
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_MBSS_CB.paa";
		scope = 2;
		author = "CFP";
		displayName = "MBSS (CB)";
		// picture = "\x\cfp\addons\vsm_vests\data\mbss_icon_cb.paa";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vsm_vests\data\spec_mbss_cb_co.paa"};
	};
	class CFP_MBSS_PACA_operator: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_MBSS_PACA_operator.paa";
		scope = 1;
		author = "CFP";
		displayName = "MBSS + PACA Operator (Coyote)";
		// picture = "\x\cfp\addons\vsm_vests\data\mbss_paca_icon.paa";
		model = "\x\cfp\addons\vsm_vests\MBSS_PACA.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\MBSS_PACA.p3d";
			containerClass = "Supply70";
			mass = 50;
			passThrough = 1;
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_MBSS_PACA: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_MBSS_PACA.paa";
		scope = 1;
		author = "CFP";
		displayName = "MBSS + PACA (Green)";
		// picture = "\x\cfp\addons\vsm_vests\data\mbss_paca_icon.paa";
		model = "\x\cfp\addons\vsm_vests\MBSS_PACA.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vsm_vests\data\spec_mbss_co.paa","\x\cfp\addons\vsm_vests\data\spec_paca_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\MBSS_PACA.p3d";
			containerClass = "Supply120";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"camo","camo2"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_MBSS_PACA_BLK: CFP_MBSS_PACA
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_MBSS_PACA_BLK.paa";
		scope = 1;
		author = "CFP";
		displayName = "MBSS + PACA (Black)";
		// picture = "\x\cfp\addons\vsm_vests\data\mbss_paca_icon_blk.paa";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vsm_vests\data\spec_mbss_blk_co.paa","\x\cfp\addons\vsm_vests\data\spec_paca_co.paa"};
	};
	class CFP_MBSS_PACA_TAN: CFP_MBSS_PACA
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_MBSS_PACA_TAN.paa";
		scope = 1;
		author = "CFP";
		displayName = "MBSS + PACA (Tan)";
		// picture = "\x\cfp\addons\vsm_vests\data\mbss_paca_icon_tan.paa";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vsm_vests\data\spec_mbss_tan_co.paa","\x\cfp\addons\vsm_vests\data\spec_paca_co.paa"};
	};
	class CFP_MBSS_PACA_CB: CFP_MBSS_PACA
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_MBSS_PACA_CB.paa";
		scope = 1;
		author = "CFP";
		displayName = "MBSS + PACA (CB)";
		// picture = "\x\cfp\addons\vsm_vests\data\mbss_paca_icon_cb.paa";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vsm_vests\data\spec_mbss_cb_co.paa","\x\cfp\addons\vsm_vests\data\spec_paca_co.paa"};
	};
	class CFP_LBT1961_Black: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT1961_Black.paa";
		scope = 1;
		author = "CFP";
		displayName = "LBT 1961a (BLK+BLK)";
		// picture = "\x\cfp\addons\vsm_vests\data\icon_blk_blk.paa";
		model = "\x\cfp\addons\vsm_vests\carrier_rig.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"camo","camo2","insignia"};
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vsm_vests\data\carrier_black_co.paa","\x\cfp\addons\vsm_vests\data\chestrig_black_co.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\carrier_rig.p3d";
			containerClass = "Supply120";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"camo","camo2","insignia"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Operator_OGA_OD: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Operator_OGA_OD.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA OD LBT Armatus (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_OD_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_plate.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OGA_OD.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_operator.p3d";
			containerClass = "Supply170";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Breacher_OGA_OD: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Breacher_OGA_OD.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA OD LBT Armatus (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_plate.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA_OD.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Gunner_OGA_OD: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Gunner_OGA_OD.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA OD LBT Armatus (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_OD_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_oga_od.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_plate.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Operator_ProjectHonor: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Operator_ProjectHonor.paa";
		scope = 2;
		author = "CFP";
		displayName = "ProjectHonor LBT Armatus (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_ProjectHonor.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_plate.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_ProjectHonor.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_operator.p3d";
			containerClass = "Supply170";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Breacher_ProjectHonor: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Breacher_ProjectHonor.paa";
		scope = 2;
		author = "CFP";
		displayName = "ProjectHonor LBT Armatus (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_ProjectHonor.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_plate.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_ProjectHonor.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Gunner_ProjectHonor: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Gunner_ProjectHonor.paa";
		scope = 2;
		author = "CFP";
		displayName = "ProjectHonor LBT Armatus (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_ProjectHonor.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_plate.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Operator_multicamTropic: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Operator_multicamTropic.paa";
		scope = 2;
		author = "CFP";
		displayName = "MulticamTropic LBT Armatus (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_MulticamTropic.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_multicamtropic_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_multicamtropic.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_plate.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_multicamtropic.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_operator.p3d";
			containerClass = "Supply170";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Breacher_multicamTropic: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Breacher_multicamTropic.paa";
		scope = 2;
		author = "CFP";
		displayName = "MulticamTropic LBT Armatus (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_MulticamTropic.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_plate.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_multicamtropic.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Gunner_multicamTropic: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Gunner_multicamTropic.paa";
		scope = 2;
		author = "CFP";
		displayName = "MulticamTropic LBT Armatus (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_MulticamTropic.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_multicamtropic_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_plate.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Operator_OGA: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Operator_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA LBT Armatus (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_plate.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OGA.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_operator.p3d";
			containerClass = "Supply170";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Breacher_OGA: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Breacher_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA LBT Armatus (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_OGA.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_plate.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Gunner_OGA: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Gunner_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA LBT Armatus (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_OGA.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_plate.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT1961_CB: CFP_LBT1961_Black
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT1961_CB.paa";
		scope = 1;
		author = "CFP";
		displayName = "LBT 1961a (CB+CB)";
		// picture = "\x\cfp\addons\vsm_vests\data\icon_cb_cb.paa";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vsm_vests\data\carrier_coyote_co.paa","\x\cfp\addons\vsm_vests\data\chestrig_coyote_co.paa"};
	};
	class CFP_LBT1961_GRN: CFP_LBT1961_Black
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT1961_GRN.paa";
		scope = 1;
		author = "CFP";
		displayName = "LBT 1961a (GRN+GRN)";
		// picture = "\x\cfp\addons\vsm_vests\data\icon_grn_grn.paa";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vsm_vests\data\carrier_green_co.paa","\x\cfp\addons\vsm_vests\data\chestrig_green_co.paa"};
	};
	class CFP_LBT1961_OGA_OD: CFP_LBT1961_Black
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT1961_OGA_OD.paa";
		scope = 1;
		author = "CFP";
		displayName = "ODA OD LBT 1961a";
		// picture = "\x\cfp\addons\vsm_vests\data\icon_grn_grn.paa";
		hiddenSelectionsTextures[] = {"\x\cfp\addons\vsm_vests\data\VSM_OGA_OD_Plate.paa","\x\cfp\addons\vsm_vests\data\VSM_OGA_OD_Chestrig.paa"};
	};
	class CFP_LBT6094_operator_multicamTropic: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_multicamTropic.paa";
		scope = 2;
		author = "CFP";
		displayName = "MulticamTropic LBT6094 (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_MulticamTropic.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_multicamtropic_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_multicamtropic.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_MG_multicamTropic: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_MG_multicamTropic.paa";
		scope = 2;
		author = "CFP";
		displayName = "MulticamTropic LBT6094 (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_MulticamTropic.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_multicamtropic_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_multicamtropic.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_breacher_multicamTropic: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_breacher_multicamTropic.paa";
		scope = 2;
		author = "CFP";
		displayName = "MulticamTropic LBT6094 (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_MulticamTropic.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_multicamtropic_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_multicamtropic.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_operator_OGA: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA LBT6094 (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_OGA.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OGA.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_MG_OGA: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_MG_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA LBT6094 (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_OGA.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_OGA.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_breacher_OGA: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_breacher_OGA.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA LBT6094 (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_OGA.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OGA.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_operator_OGA_OD: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_OGA_OD.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA OD LBT6094 (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_OD_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OGA_OD.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_MG_OGA_OD: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_MG_OGA_OD.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA OD LBT6094 (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_OD_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_OGA_OD.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_OGA_OD.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_breacher_OGA_OD: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_breacher_OGA_OD.paa";
		scope = 2;
		author = "CFP";
		displayName = "OGA OD LBT6094 (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_OD_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OGA_OD.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_operator_ProjectHonor: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_ProjectHonor.paa";
		scope = 2;
		author = "CFP";
		displayName = "ProjectHonor LBT6094 (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_ProjectHonor.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_ProjectHonor.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_MG_ProjectHonor: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_MG_ProjectHonor.paa";
		scope = 2;
		author = "CFP";
		displayName = "ProjectHonor LBT6094 (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_ProjectHonor.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_ProjectHonor.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_breacher_ProjectHonor: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_breacher_ProjectHonor.paa";
		scope = 2;
		author = "CFP";
		displayName = "ProjectHonor LBT6094 (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_ProjectHonor.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_ProjectHonor.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Operator_MulticamTropic: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Operator_MulticamTropic.paa";
		scope = 2;
		displayName = "MulticamTropic DT FAPC (Operator)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_MulticamTropic.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_multicamtropic_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_multicamtropic.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Breacher_MulticamTropic: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Breacher_MulticamTropic.paa";
		scope = 2;
		displayName = "MulticamTropic DT FAPC (Breacher)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_MulticamTropic.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_multicamtropic_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_multicamtropic.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_MG_MulticamTropic: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_MG_MulticamTropic.paa";
		scope = 2;
		displayName = "MulticamTropic DT FAPC (Gunner)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_MulticamTropic.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_multicamtropic.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_multicamtropic_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_multicamtropic.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Operator_OGA_OD: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Operator_OGA_OD.paa";
		scope = 2;
		displayName = "OGA OD DT FAPC (Operator)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_OD_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA_OD.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

	class CFP_FAPC_Operator_OGA_OD2: CFP_FAPC_Operator_OGA_OD
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Operator_OGA_OD.paa";
		scope = 2;
		displayName = "OGA OD DT FAPC (Operator No Battle Belt)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_OD_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA_OD.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};

	class CFP_FAPC_Breacher_OGA_OD: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Breacher_OGA_OD.paa";
		scope = 2;
		displayName = "OGA OD DT FAPC (Breacher)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_OD_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA_OD.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_MG_OGA_OD: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_MG_OGA_OD.paa";
		scope = 2;
		displayName = "OGA OD DT FAPC (Gunner)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA_OD.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_OD_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_OGA_OD.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OGA_OD.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Operator_OGA: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Operator_OGA.paa";
		scope = 2;
		displayName = "OGA DT FAPC (Operator)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_OGA.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Breacher_OGA: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Breacher_OGA.paa";
		scope = 2;
		displayName = "OGA DT FAPC (Breacher)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OGA_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_OGA.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OGA.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_MG_OGA: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_MG_OGA.paa";
		scope = 2;
		displayName = "OGA DT FAPC (Gunner)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OGA.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_OGA.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_OGA_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_OGA.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OGA.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Operator_ProjectHonor: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Operator_ProjectHonor.paa";
		scope = 2;
		displayName = "ProjectHonor DT FAPC (Operator)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_ProjectHonor.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_ProjectHonor.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Breacher_ProjectHonor: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Breacher_ProjectHonor.paa";
		scope = 2;
		displayName = "ProjectHonor DT FAPC (Breacher)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_ProjectHonor.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_ProjectHonor.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_MG_ProjectHonor: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_MG_ProjectHonor.paa";
		scope = 2;
		displayName = "ProjectHonor DT FAPC (Gunner)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_ProjectHonor.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa_tan.paa","x\cfp\addons\vsm_vests\data\VSM_ProjectHonor_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_ProjectHonor.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_ProjectHonor.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_operator_M81: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_operator_M81.paa";
		scope = 2;
		author = "CFP";
		displayName = "M81 Paraclete RAV (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_M81.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_M81_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_M81.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_M81_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_M81.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_M81.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_MG_M81: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_MG_M81.paa";
		scope = 2;
		author = "CFP";
		displayName = "M81 Paraclete RAV (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_M81.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_M81_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_M81.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_M81.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_M81_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_M81.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_M81.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_Breacher_M81: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_Breacher_M81.paa";
		scope = 2;
		author = "CFP";
		displayName = "M81 Paraclete RAV (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_M81.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_M81_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_M81.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_M81_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_M81.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_M81.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_M81.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Operator_M81: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Operator_M81.paa";
		scope = 2;
		author = "CFP";
		displayName = "M81 LBT Armatus (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_M81.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_M81_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_M81.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_M81_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_M81_plate.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_M81.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_operator.p3d";
			containerClass = "Supply170";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Breacher_M81: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Breacher_M81.paa";
		scope = 2;
		author = "CFP";
		displayName = "M81 LBT Armatus (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_M81.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_M81.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_M81_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_M81_plate.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_M81.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Gunner_M81: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Gunner_M81.paa";
		scope = 2;
		author = "CFP";
		displayName = "M81 LBT Armatus (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_M81.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_M81_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_M81.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_m81.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_M81_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_M81_plate.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_operator_M81: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_M81.paa";
		scope = 2;
		author = "CFP";
		displayName = "M81 LBT6094 (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_M81.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_M81_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_M81.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_M81_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_M81.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_M81.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_M81.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_MG_M81: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_MG_M81.paa";
		scope = 2;
		author = "CFP";
		displayName = "M81 LBT6094 (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_M81.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_M81_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_M81.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_m81.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_M81_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_M81.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_breacher_M81: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_breacher_M81.paa";
		scope = 2;
		author = "CFP";
		displayName = "M81 LBT6094 (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_M81.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_M81_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_M81.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_M81_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_M81.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_M81.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_M81.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Operator_M81: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Operator_M81.paa";
		scope = 2;
		displayName = "M81 DT FAPC (Operator)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_M81.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_M81_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_M81.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_M81_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_m81.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_M81.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Breacher_M81: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Breacher_M81.paa";
		scope = 2;
		displayName = "M81 DT FAPC (Breacher)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_M81.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_M81_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_M81.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_M81_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_m81.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_M81.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_MG_M81: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_MG_M81.paa";
		scope = 2;
		displayName = "M81 DT FAPC (Gunner)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_M81.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_M81.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_m81.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_M81_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_m81.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_M81.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_operator_Multicam: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_operator_Multicam.paa";
		scope = 2;
		author = "CFP";
		displayName = "Multicam Paraclete RAV (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_Multicam.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_Multicam_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_Multicam.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_MG_Multicam: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_MG_Multicam.paa";
		scope = 2;
		author = "CFP";
		displayName = "Multicam Paraclete RAV (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_Multicam.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_Multicam_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_Multicam.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_Breacher_Multicam: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_Breacher_Multicam.paa";
		scope = 2;
		author = "CFP";
		displayName = "Multicam Paraclete RAV (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_Multicam.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_Multicam_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_rav_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_Multicam.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Operator_Multicam: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Operator_Multicam.paa";
		scope = 2;
		author = "CFP";
		displayName = "Multicam LBT Armatus (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_Multicam.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_Multicam_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_Multicam.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_plate.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_Multicam.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_operator.p3d";
			containerClass = "Supply170";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Breacher_Multicam: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Breacher_Multicam.paa";
		scope = 2;
		author = "CFP";
		displayName = "Multicam LBT Armatus (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_Multicam.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_plate.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_Multicam.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Gunner_Multicam: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Gunner_Multicam.paa";
		scope = 2;
		author = "CFP";
		displayName = "Multicam LBT Armatus (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_Multicam.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_Multicam_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_Multicam.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_plate.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_operator_Multicam: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_Multicam.paa";
		scope = 2;
		author = "CFP";
		displayName = "Multicam LBT6094 (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_Multicam.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_Multicam_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_Multicam.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_MG_Multicam: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_MG_Multicam.paa";
		scope = 2;
		author = "CFP";
		displayName = "Multicam LBT6094 (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_Multicam.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_Multicam_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_Multicam.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_Multicam.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_breacher_Multicam: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_breacher_Multicam.paa";
		scope = 2;
		author = "CFP";
		displayName = "Multicam LBT6094 (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_Multicam.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_Multicam_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_Multicam.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Operator_Multicam: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Operator_Multicam.paa";
		scope = 2;
		displayName = "Multicam DT FAPC (Operator)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_Multicam.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_Multicam_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_Multicam.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Breacher_Multicam: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Breacher_Multicam.paa";
		scope = 2;
		displayName = "Multicam DT FAPC (Breacher)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_Multicam.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_Multicam_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_Multicam.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_MG_Multicam: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_MG_Multicam.paa";
		scope = 2;
		displayName = "Multicam DT FAPC (Gunner)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_Multicam.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster.paa","x\cfp\addons\vsm_vests\data\serpa.paa","x\cfp\addons\vsm_vests\data\VSM_Multicam_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch_green.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_Multicam.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_Multicam.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_operator_AOR1: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_operator_AOR1.paa";
		scope = 2;
		author = "CFP";
		displayName = "AOR1 Paraclete RAV (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_AOR1.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_AOR1_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_rav_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_AOR1.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_MG_AOR1: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_MG_AOR1.paa";
		scope = 2;
		author = "CFP";
		displayName = "AOR1 Paraclete RAV (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_AOR1.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_AOR1_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_rav_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_AOR1.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_Breacher_AOR1: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_Breacher_AOR1.paa";
		scope = 2;
		author = "CFP";
		displayName = "AOR1 Paraclete RAV (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_AOR1.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_AOR1_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_rav_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_AOR1.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Operator_AOR1: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Operator_AOR1.paa";
		scope = 2;
		author = "CFP";
		displayName = "AOR1 LBT Armatus (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_AOR1.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_AOR1_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_AOR1.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_plate.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_AOR1.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_operator.p3d";
			containerClass = "Supply170";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Breacher_AOR1: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Breacher_AOR1.paa";
		scope = 2;
		author = "CFP";
		displayName = "AOR1 LBT Armatus (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_AOR1.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_plate.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_AOR1.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Gunner_AOR1: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Gunner_AOR1.paa";
		scope = 2;
		author = "CFP";
		displayName = "AOR1 LBT Armatus (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_AOR1.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_AOR1_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_AOR1.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_plate.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_operator_AOR1: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_AOR1.paa";
		scope = 2;
		author = "CFP";
		displayName = "AOR1 LBT6094 (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_AOR1.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_AOR1_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_AOR1.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_MG_AOR1: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_MG_AOR1.paa";
		scope = 2;
		author = "CFP";
		displayName = "AOR1 LBT6094 (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_AOR1.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_AOR1_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_AOR1.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_AOR1.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_breacher_AOR1: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_breacher_AOR1.paa";
		scope = 2;
		author = "CFP";
		displayName = "AOR1 LBT6094 (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_AOR1.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_AOR1_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_AOR1.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Operator_AOR1: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Operator_AOR1.paa";
		scope = 2;
		displayName = "AOR1 DT FAPC (Operator)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_AOR1.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_AOR1_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_AOR1.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Breacher_AOR1: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Breacher_AOR1.paa";
		scope = 2;
		displayName = "AOR1 DT FAPC (Breacher)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_AOR1.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_AOR1_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_AOR1.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_MG_AOR1: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_MG_AOR1.paa";
		scope = 2;
		displayName = "AOR1 DT FAPC (Gunner)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_AOR1.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_AOR1_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_AOR1.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_AOR1.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_operator_OCP: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_operator_OCP.paa";
		scope = 2;
		author = "CFP";
		displayName = "OCP Paraclete RAV (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OCP.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OCP_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_rav_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OCP.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_MG_OCP: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_MG_OCP.paa";
		scope = 2;
		author = "CFP";
		displayName = "OCP Paraclete RAV (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OCP.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OCP_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_rav_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OCP.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_RAV_Breacher_OCP: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_RAV_Breacher_OCP.paa";
		scope = 2;
		author = "CFP";
		displayName = "OCP Paraclete RAV (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OCP.paa";
		model = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OCP_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_rav_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OCP.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\RAV_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Operator_OCP: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Operator_OCP.paa";
		scope = 2;
		author = "CFP";
		displayName = "OCP LBT Armatus (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OCP.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OCP_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OCP.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_plate.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OCP.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_operator.p3d";
			containerClass = "Supply170";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Breacher_OCP: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Breacher_OCP.paa";
		scope = 2;
		author = "CFP";
		displayName = "OCP LBT Armatus (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OCP.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_plate.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OCP.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_breacher.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_CarrierRig_Gunner_OCP: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_CarrierRig_Gunner_OCP.paa";
		scope = 2;
		author = "CFP";
		displayName = "OCP LBT Armatus (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OCP.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OCP_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_OCP.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_plate.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_CarrierRig_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxmag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_operator_OCP: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_operator_OCP.paa";
		scope = 2;
		author = "CFP";
		displayName = "OCP LBT6094 (Operator)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OCP.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OCP_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OCP.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_MG_OCP: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_MG_OCP.paa";
		scope = 2;
		author = "CFP";
		displayName = "OCP LBT6094 (Gunner)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OCP.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OCP_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_OCP.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_OCP.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_boxMag","_Serpa","_SOTGGear","_SOTGRadio","_vestBase"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_LBT6094_breacher_OCP: Vest_Camo_Base
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_LBT6094_breacher_OCP.paa";
		scope = 2;
		author = "CFP";
		displayName = "OCP LBT6094 (Breacher)";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OCP.paa";
		model = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OCP_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_lbt6094_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OCP.paa"};
		descriptionShort = "$STR_A3_SP_AL_IV";
		class ItemInfo: VestItem
		{
			uniformModel = "\x\cfp\addons\vsm_vests\VSM_lbt6094_breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Operator_OCP: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Operator_OCP.paa";
		scope = 2;
		displayName = "OCP DT FAPC (Operator)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OCP.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OCP_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OCP.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Operator.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_Breacher_OCP: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_Breacher_OCP.paa";
		scope = 2;
		displayName = "OCP DT FAPC (Breacher)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OCP.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_OCP_chestrig.paa","x\cfp\addons\vsm_vests\data\VSM_battlebelt_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_pouches_OCP.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_Breacher.p3d";
			containerClass = "Supply200";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_1961aPouches","_battleBelt","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMPouches"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
	class CFP_FAPC_MG_OCP: ItemCore
    {
        picture = "\x\cfp\addons\vsm_vests\data\ui\icon_CFP_FAPC_MG_OCP.paa";
		scope = 2;
		displayName = "OCP DT FAPC (Gunner)";
		author = "CFP";
		// picture = "\x\cfp\addons\vsm_vests\data\VSM_OCP.paa";
		model = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
		descriptionShort = "$STR_A3_SP_AL_IV";
		hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
		hiddenSelectionsTextures[] = {"x\cfp\addons\vsm_vests\data\VSM_battlebelt_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_boxmag_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_dropholster_oga.paa","x\cfp\addons\vsm_vests\data\serpa_TAN.paa","x\cfp\addons\vsm_vests\data\VSM_OCP_gear_co.paa","x\cfp\addons\vsm_vests\data\radio_pouch.paa","x\cfp\addons\vsm_vests\data\VSM_fapc_OCP.paa","x\cfp\addons\vsm_vests\data\VSM_buttpouch_OCP.paa"};
		class ItemInfo: VestItem
		{
			uniformModel = "x\cfp\addons\vsm_vests\VSM_FAPC_MG.p3d";
			containerClass = "Supply300";
			mass = 50;
			passThrough = 1;
			hiddenSelections[] = {"_battleBelt","_boxMag","_DropHolster","_Serpa","_SOTGGear","_SOTGRadio","_vestBase","_VSMButtPouch"};
			class HitpointsProtectionInfo
			{
				class Chest
				{
					HitpointName = "HitChest";
					armor = 25;
					PassThrough = 0.3;
				};
				class Diaphragm
				{
					HitpointName = "HitDiaphragm";
					armor = 25;
					PassThrough = 0.3;
				};
				class Abdomen
				{
					hitpointName = "HitAbdomen";
					armor = 25;
					passThrough = 0.3;
				};
				class Body
				{
					hitpointName = "HitBody";
					passThrough = 0.3;
				};
			};
		};
	};
};
//};
