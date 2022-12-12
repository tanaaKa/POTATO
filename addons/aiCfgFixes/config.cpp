////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 11 23:17:31 2022 : 'file' last modified on Sat Oct 01 11:06:57 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class potato_aiCfgFixes
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.04;
		requiredAddons[] = {"potato_core","ACE_ai","rhs_main_loadorder","CUP_Weapons_LoadOrder"};
		author = "Potato";
		authors[] = {"Brandon (TCVM)"};
		authorUrl = "https://github.com/BourbonWarfare/POTATO";
		version = "1.3.16.0";
		versionStr = "1.3.16.0";
		versionAr[] = {1,3,16,0};
		magazines[] = {};
		ammo[] = {"RocketCore","BulletCore","GrenadeCore","ShellCore","SubmunitionCore","Grenade","MissileCore","LaserCore","TimeBombCore","ShotDeployCore","ShotgunCore","RocketBase","CUP_R_SMAW_HEDP_N","CUP_R_RSHG2_HE","CUP_R_PG26_AT","CUP_R_RPG18_AT","CUP_R_APILAS_AT","CUP_R_MEEWS_HEDP","CUP_R_M136_AT","CUP_R_SMAW_HEDP","CUP_R_70mm_Hydra_HE","CUP_R_PZF3IT_AT","CUP_R_OG7_AT","CUP_R_TBG7V_AT","CUP_R_PG7VR_AT","CUP_R_PG7VL_AT","CUP_R_PG7VM_AT","CUP_R_PG7V_AT","rhs_ammo_rpg75_rocket","rhs_rpg26_rocket","BulletBase","FakeAmmo","potato_bullet_556x45","CUP_B_25mm_APFSDS_White_Tracer","CUP_B_25mm_HE_White_Tracer","CUP_B_30mm_CAS_Red_Tracer","CUP_B_30x113mm_M789_HEDP_Red_Tracer","CUP_B_23mm_APHE_Green_Tracer","CUP_B_23mm_APHE_No_Tracer","CUP_B_23mm_AA","CUP_B_23mm_APHE_Tracer_Green","CUP_B_20mm_AA","CUP_B_20mm_API_Tracer_Red","CUP_B_20mm_APHE_Tracer_Red","CUP_B_20mm_AP_Tracer_Red","CUP_B_19mm_HE","CUP_B_145x115_AP_Green_Tracer","CUP_B_127x108_Ball_Green_Tracer","B_127x107_Ball","CUP_B_762x25_Ball","CUP_B_46x30_Ball","CUP_B_50AE_Ball","CUP_B_765x17_Ball","CUP_B_9x19_AP","CUP_B_9x19_Ball","CUP_B_9x18_Ball","CUP_B_86x70_Ball_noTracer","CUP_B_9x39_SP5","CUP_B_762x54_Ball_White_Tracer","CUP_B_303_Ball","B_762x51_Ball","CUP_B_762x39_Ball","B_556x45_Ball","B_9x21_Ball","B_35mm_AA","B_30mm_AP","RHS_Ammo_DIRCM_Vitebsk","B_20mm_AP","ammo_Gun35mmAABase","ammo_Gun30mmAABase","ammo_Gun20mmAABase","B_570x28_Ball","B_93x64_Ball","B_127x54_Ball","B_338_NM_Ball","B_338_Ball","Gatling_30mm_HE_Plane_CAS_01_F","B_45ACP_Ball","B_coil_5g_spike","B_25mm","B_20mm","B_19mm_HE","B_127x108_Ball","B_127x99_Ball","B_127x33_Ball","B_408_Ball","B_56x15_dual","SmokeShellCore","G_40mm_HE","CUP_G_30mm_HE","CUP_R_CRV7_C18_HE","CUP_B_9x19_Ball_SD","CUP_B_9x18_SD","rhs_B_762x39_Ball","rhs_B_762x54_Ball","CUP_B_762x51_White_Tracer_3RndBurst","CUP_B_762x51_Red_Tracer_3RndBurst","CUP_B_762x39_Ball_Subsonic","CUP_B_762x39_Ball_Tracer_Green","ShellBase","ACE_HuntIR_Propell","R_230mm_fly","FH_545x39_Ball","VOG25P_SubMunition","rhs_ammo_mixed_23x115mm","rhs_ammo_gsh30_mixed","rhs_B_9x21_7BT3","rhs_B_9x21_7N29","rhs_B_9x21_7N28","rhs_B_9x18_57N181S","rhs_B_9x19_7N21","rhs_rpg7v2_pg7vl","rhs_B_9x39_SP5","rhs_B_762x39_U_Ball","rhs_B_545x39_7U1_Ball","rhs_B_545x39_7N24_Ball","rhs_B_545x39_7N22_Ball","rhs_B_545x39_7N10_Ball","rhs_B_545x39_7N6_Ball","RHS_ammo_23mm_AA","rhs_ammo_30x165mm_base","rhs_m21OF_fly","rhs_ammo_3d17_shell","GrenadeHand","MissileBase","ammo_Missile_CruiseBase","M_Mo_230mm_AT","M_Mo_230mm_AT_LG","F_40mm_White","B_30mm_HE","B_762x51_Minigun_Tracer_Red","B_65x39_Minigun_Caseless","potato_aiCfgFixes_he_rocket","CUP_R_57mm_HE","CUP_R_M72A6_AT"};
	};
};
class Extended_PreStart_EventHandlers
{
	class potato_aiCfgFixes
	{
		init = "call compileScript ['\z\potato\addons\aiCfgFixes\XEH_preStart.sqf']";
	};
};
class Extended_PreInit_EventHandlers
{
	class potato_aiCfgFixes
	{
		init = "call compileScript ['\z\potato\addons\aiCfgFixes\XEH_preInit.sqf']";
	};
};
class Mode_FullAuto;
class Mode_Burst;
class Mode_SemiAuto;
class CfgWeapons
{
	class Rifle_Long_Base_F;
	class Pistol_Base_F;
	class Rifle_Base_F;
	class Rifle_Short_Base_F;
	class PKT;
	class MGun;
	class CannonCore;
	class DMR_01_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class EBR_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
		class FullAuto: Mode_FullAuto{};
		class fullauto_medium: FullAuto{};
	};
	class GM6_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
		};
		class far_optic1: Single{};
		class medium_optic2: Single{};
		class far_optic2: far_optic1{};
	};
	class LRR_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
		};
		class far_optic1: Single{};
		class medium_optic2: Single{};
		class far_optic2: far_optic1{};
	};
	class LMG_Mk200_F: Rifle_Long_Base_F
	{
		modes[] = {"manual","Single","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
		class manual: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: manual
		{
			showToPlayer = 1;
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far_optic1: medium{};
		class far_optic2: far_optic1{};
		class ACE_Burst_far: medium
		{
			aiRateOfFire = 6;
			aiRateOfFireDistance = 900;
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 700;
			midRangeProbab = 0.2;
			maxRange = 900;
			maxRangeProbab = 0.2;
			burst = "3 + round random 5";
			showToPlayer = 0;
		};
	};
	class LMG_Zafir_F: Rifle_Long_Base_F
	{
		modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
			showToPlayer = 1;
			minRange = 120;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far_optic1: close{};
		class far_optic2: far_optic1{};
		class ACE_Burst_far: medium
		{
			aiRateOfFire = 6;
			aiRateOfFireDistance = 900;
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 700;
			midRangeProbab = 0.2;
			maxRange = 900;
			maxRangeProbab = 0.2;
			burst = "3 + round random 5";
			showToPlayer = 0;
		};
	};
	class hgun_ACPC2_F: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
	};
	class hgun_P07_F: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
	};
	class hgun_Pistol_heavy_01_F: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
	};
	class hgun_Pistol_heavy_02_F: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
	};
	class hgun_Rook40_F: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
	};
	class arifle_Katiba_Base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium","ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			maxRange = 400;
			maxRangeProbab = 0.3;
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 300;
			midRangeProbab = 0.5;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 20;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 600;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
			showToPlayer = 0;
		};
	};
	class arifle_Katiba_C_F: arifle_Katiba_Base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium","ACE_Burst_far"};
		class Single: Single
		{
			maxRange = 350;
			maxRangeProbab = 0.2;
			minRange = 120;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class fullauto_medium: fullauto_medium
		{
			showToPlayer = 0;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.2;
			maxRange = 500;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
			showToPlayer = 0;
		};
		class single_medium_optics2: single_medium_optics1{};
	};
	class mk20_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			maxRange = 300;
			maxRangeProbab = 0.2;
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 250;
			midRangeProbab = 0.5;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			minRange = 0;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 600;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
			showToPlayer = 0;
		};
	};
	class arifle_Mk20C_F: mk20_base_F
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
		class Single: Single
		{
			maxRangeProbab = 0.3;
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 250;
			midRangeProbab = 0.5;
			maxRange = 350;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			minRange = 0;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: fullauto_medium
		{
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
			minRange = 20;
			burst = "3 + round random 5";
			showToPlayer = 0;
		};
		class single_medium_optics1: single_medium_optics1{};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.2;
			maxRange = 500;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
			showToPlayer = 0;
		};
		class single_medium_optics2: single_medium_optics1{};
	};
	class arifle_Mk20_GL_F: mk20_base_F
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: fullauto_medium
		{
			minRange = 2;
			minRangeProbab = 0.2;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFire = 6;
			aiRateOfFireDistance = 600;
			showToPlayer = 0;
			burst = "3 + round random 5";
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class arifle_MX_Base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			maxRange = 400;
			maxRangeProbab = 0.3;
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 300;
			midRangeProbab = 0.5;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 20;
			burst = "3 + round random 5";
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 600;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
			showToPlayer = 0;
		};
	};
	class arifle_MXC_F: arifle_MX_Base_F
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
		class Single: Single
		{
			maxRange = 350;
			maxRangeProbab = 0.1;
			minRange = 120;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: fullauto_medium
		{
			showToPlayer = 0;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 20;
			burst = "3 + round random 5";
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_far_optics2: single_medium_optics1{};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.2;
			maxRange = 500;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
			showToPlayer = 0;
		};
		class single_medium_optics2: single_medium_optics1{};
	};
	class arifle_MX_SW_F: arifle_MX_Base_F
	{
		modes[] = {"Single","manual","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
			minRange = 120;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class manual: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 500;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far_optic1: close{};
		class far_optic2: far_optic1{};
		class ACE_Burst_far: medium
		{
			aiRateOfFire = 6;
			aiRateOfFireDistance = 900;
			minRange = 500;
			minRangeProbab = 0.1;
			midRange = 700;
			midRangeProbab = 0.2;
			maxRange = 900;
			maxRangeProbab = 0.2;
			burst = "3 + round random 5";
			showToPlayer = 0;
		};
	};
	class arifle_MXM_F: arifle_MX_Base_F
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2","ACE_Burst_far"};
		class Single: Single
		{
			maxRange = 450;
			maxRangeProbab = 0.3;
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 350;
			midRangeProbab = 0.5;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: fullauto_medium
		{
			showToPlayer = 0;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 20;
			burst = "3 + round random 5";
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_far_optics2: single_far_optics2{};
	};
	class SDAR_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRangeProbab = 0.3;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 35;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 20;
			minRange = 10;
			showToPlayer = 1;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 5;
			showToPlayer = 1;
		};
		class Burst: Mode_Burst{};
	};
	class Tavor_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium","ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			maxRangeProbab = 0.2;
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 250;
			midRangeProbab = 0.5;
			maxRange = 350;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			minRange = 0;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
			aiRateOfFireDistance = 500;
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.2;
			maxRange = 500;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
			showToPlayer = 0;
		};
	};
	class arifle_TRG21_F: Tavor_base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium","ACE_Burst_far"};
		class Single: Single
		{
			maxRangeProbab = 0.3;
			minRange = 120;
			minRangeProbab = 0.7;
			midRange = 300;
			midRangeProbab = 0.5;
			maxRange = 400;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			minRange = 0;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics1{};
		class fullauto_medium: fullauto_medium
		{
			showToPlayer = 0;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
			aiRateOfFireDistance = 500;
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 300;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.2;
			maxRange = 500;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
			showToPlayer = 0;
		};
	};
	class pdw2000_base_F: Rifle_Short_Base_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			minRange = 100;
			showToPlayer = 1;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			showToPlayer = 1;
		};
		class Burst: Mode_Burst{};
	};
	class SMG_01_Base: Rifle_Short_Base_F
	{
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			showToPlayer = 1;
		};
		class Burst: Mode_Burst
		{
			minRangeProbab = 0.3;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			minRange = 25;
			showToPlayer = 1;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 50;
			showToPlayer = 1;
		};
	};
	class SMG_02_base_F: Rifle_Short_Base_F
	{
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			showToPlayer = 1;
		};
		class Burst: Mode_Burst
		{
			minRangeProbab = 0.3;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			minRange = 25;
			showToPlayer = 1;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 50;
			showToPlayer = 1;
		};
	};
	class DSA_MachinePistol9mm: hgun_P07_F
	{
		modes[] = {"Single","FullAuto"};
		class FullAuto: Single
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
	};
	class DSA_MachinePistol45: hgun_Pistol_heavy_01_F
	{
		modes[] = {"Single","FullAuto"};
		class FullAuto: Single
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
	};
	class arifle_MSBS65_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 1;
			aiRateOfFireDistance = 500;
		};
	};
	class arifle_MSBS65_base_black_F: arifle_MSBS65_base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
	};
	class arifle_MSBS65_black_F: arifle_MSBS65_base_black_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
	};
	class DSA_XTS: arifle_MSBS65_black_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
		class FullAuto: Single
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
	};
	class hgun_Pistol_Signal_F: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
	};
	class DMR_02_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class DMR_03_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium","ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			midRange = 350;
			maxRange = 500;
			maxRangeProbab = 0.05;
			minRange = 120;
			minRangeProbab = 0.7;
			midRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
			aiRateOfFireDistance = 500;
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 600;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
			showToPlayer = 0;
		};
	};
	class DMR_04_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class DMR_05_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium","ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			midRange = 350;
			maxRange = 500;
			maxRangeProbab = 0.05;
			minRange = 120;
			minRangeProbab = 0.7;
			midRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
			aiRateOfFireDistance = 500;
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 600;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
			showToPlayer = 0;
		};
	};
	class DMR_06_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium","ACE_Burst_far"};
		class Single: Mode_SemiAuto
		{
			midRange = 350;
			maxRange = 500;
			maxRangeProbab = 0.05;
			minRange = 120;
			minRangeProbab = 0.7;
			midRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			minRange = 20;
			maxRange = 150;
			burst = "3 + round random 5";
			aiRateOfFireDistance = 500;
		};
		class ACE_Burst_far: fullauto_medium
		{
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			minRange = 400;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.2;
			maxRange = 600;
			maxRangeProbab = 0.2;
			burst = "2 + round random 3";
			showToPlayer = 0;
		};
	};
	class MMG_01_base_F: Rifle_Long_Base_F
	{
		modes[] = {"manual","burst","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
		class manual: Mode_FullAuto
		{
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.58;
			maxRange = 80;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class burst: Mode_Burst
		{
			minRange = 10;
			minRangeProbab = 0.3;
			midRange = 60;
			midRangeProbab = 0.58;
			maxRange = 150;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 100;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 5;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: Burst
		{
			burst = 3;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far_optic1: medium{};
		class far_optic2: far_optic1{};
		class ACE_Burst_far: medium
		{
			aiRateOfFire = 6;
			aiRateOfFireDistance = 900;
			minRange = 700;
			minRangeProbab = 0.1;
			midRange = 900;
			midRangeProbab = 0.2;
			maxRange = 1100;
			maxRangeProbab = 0.2;
			burst = "3 + round random 5";
			showToPlayer = 0;
		};
	};
	class MMG_02_base_F: Rifle_Long_Base_F
	{
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2","ACE_Burst_far"};
		class manual: Mode_FullAuto
		{
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.58;
			maxRange = 80;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 5;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 3;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far_optic1: close{};
		class far_optic2: far_optic1{};
		class ACE_Burst_far: medium
		{
			aiRateOfFire = 6;
			aiRateOfFireDistance = 900;
			minRange = 700;
			minRangeProbab = 0.1;
			midRange = 900;
			midRangeProbab = 0.2;
			maxRange = 1100;
			maxRangeProbab = 0.2;
			burst = "3 + round random 5";
			showToPlayer = 0;
		};
	};
	class SMG_03_TR_BASE: Rifle_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 0;
			showToPlayer = 1;
			minRange = 30;
			minRangeProbab = 0.25;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class FullAuto: Mode_FullAuto{};
	};
	class SMG_03C_BASE: SMG_03_TR_BASE
	{
		modes[] = {"Single","FullAuto"};
		class Single: Single
		{
			aiRateOfFire = 0.1;
			aiRateOfFireDistance = 0;
			showToPlayer = 1;
			minRange = 30;
			minRangeProbab = 0.25;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
		};
		class FullAuto: FullAuto
		{
			aiRateOfFire = 0.08;
			aiRateOfFireDistance = 0;
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 30;
			midRangeProbab = 0.58;
			maxRange = 80;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
		};
	};
	class DMR_07_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class LMG_03_base_F: Rifle_Long_Base_F
	{
		modes[] = {"FullAutoFast","FullAutoSlow","close","short","medium","far_optic1","far_optic2"};
		class FullAutoSlow: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAutoFast: FullAutoSlow
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: FullAutoFast
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: FullAutoSlow
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far_optic1: medium{};
		class far_optic2: far_optic1{};
	};
	class hgun_Pistol_01_F: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 30;
			midRangeProbab = 0.6;
			maxRange = 60;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 30;
			showToPlayer = 1;
		};
	};
	class arifle_AK12_base_F: Rifle_Base_F
	{
		modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class arifle_AKM_base_F: Rifle_Base_F
	{
		modes[] = {"FullAuto","Single","FullAuto_medium"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class arifle_AKS_base_F: Rifle_Base_F
	{
		modes[] = {"FullAuto","Single","FullAuto_medium"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 25;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 75;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class arifle_ARX_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
	};
	class arifle_CTAR_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 175;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 120;
		};
	};
	class arifle_CTARS_base_F: Rifle_Base_F
	{
		modes[] = {"FullAuto","Single","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 150;
		};
	};
	class arifle_SPAR_01_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class arifle_SPAR_02_base_F: Rifle_Base_F
	{
		modes[] = {"FullAuto","Single","single_medium_optics1","single_medium_optics2","fullauto_medium"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class arifle_SPAR_03_base_F: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class SMG_05_base_F: Rifle_Short_Base_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 80;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 12;
			midRangeProbab = 0.7;
			maxRange = 25;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
	};
	class sgun_HunterShotgun_01_base_F: Rifle_Long_Base_F
	{
		modes[] = {"Single","Single_close","Single_far"};
		class Single: Mode_SemiAuto
		{
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.15;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 20;
			showToPlayer = 1;
		};
		class Single_close: Single
		{
			showToPlayer = 0;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 170;
			midRangeProbab = 0.8;
			maxRange = 250;
			maxRangeProbab = 0.15;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			burst = 1;
		};
		class Single_far: Single_Close
		{
			minRange = 220;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.15;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 300;
			showToPlayer = 0;
			burst = 1;
		};
	};
	class sgun_HunterShotgun_01_sawedoff_base_F: sgun_HunterShotgun_01_base_F
	{
		modes[] = {"Single","Single_close","Single_far"};
		class Single: Single
		{
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.15;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 20;
			showToPlayer = 1;
		};
		class Single_close: Single
		{
			showToPlayer = 0;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 140;
			midRangeProbab = 0.8;
			maxRange = 200;
			maxRangeProbab = 0.15;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			burst = 1;
		};
		class Single_far: Single_Close
		{
			minRange = 180;
			minRangeProbab = 0.1;
			midRange = 230;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 300;
			showToPlayer = 0;
			burst = 1;
		};
	};
	class DMR_06_hunter_base_F: DMR_06_base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Single
		{
			midRange = 350;
			maxRange = 500;
			maxRangeProbab = 0.05;
			minRange = 120;
			minRangeProbab = 0.7;
			midRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class hgun_esd_01_base_F: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class arifle_AK12U_base_F: arifle_AK12_base_F
	{
		modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Burst: Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class arifle_RPK12_base_F: arifle_AK12_base_F
	{
		modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Burst: Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 175;
			midRangeProbab = 0.75;
			maxRange = 300;
			maxRangeProbab = 0.25;
			aiRateOfFire = 2;
			burst = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class arifle_MSBS65_Mark_base_F: arifle_MSBS65_base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_medium_optics2","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 1;
			aiRateOfFireDistance = 500;
		};
	};
	class rhs_weap_pkt: PKT
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 12;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 6;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 850;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class rhs_weap_pktm: rhs_weap_pkt
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: manual
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
	};
	class LMG_RCWS: MGun
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			showToPlayer = 1;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 8;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
	};
	class rhs_weap_DSHKM: LMG_RCWS
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 9;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 6;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class rhs_weap_nsvt: rhs_weap_DSHKM
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 9;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 8;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class rhs_weap_nsvt_effects: rhs_weap_nsvt
	{
		modes[] = {"manual","close","short","medium","far"};
	};
	class rhs_weap_kord: rhs_weap_nsvt_effects
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: manual
		{
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
			showToPlayer = 1;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 9;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 8;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class rhs_weap_kpvt: MGun
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 8;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.58;
			maxRange = 1000;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 800;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1200;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 1000;
			minRangeProbab = 0.05;
			midRange = 1200;
			midRangeProbab = 0.4;
			maxRange = 1500;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class rhs_weap_pkm_tigr: rhs_weap_pkt
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: manual
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 12;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 7;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 6;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 850;
			midRangeProbab = 0.4;
			maxRange = 1100;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class rhs_weap_azp23: CannonCore
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: CannonCore
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 1000;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 1600;
			maxRangeProbab = 0.3;
		};
		class short: close
		{
			burst = 10;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 1600;
			minRange = 1000;
			minRangeProbab = 0.3;
			midRange = 1600;
			midRangeProbab = 0.58;
			maxRange = 2200;
			maxRangeProbab = 0.3;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 15;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 2200;
			minRange = 1600;
			minRangeProbab = 0.3;
			midRange = 2000;
			midRangeProbab = 0.58;
			maxRange = 2800;
			maxRangeProbab = 0.3;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 9;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 3000;
			minRange = 1600;
			minRangeProbab = 0.3;
			midRange = 2200;
			midRangeProbab = 0.4;
			maxRange = 8500;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class rhs_weap_2a14: rhs_weap_azp23
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: manual
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
	};
	class RHS_SAFE_BASE: Rifle_Base_F
	{
		modes[] = {"Safe"};
		class Safe: Mode_SemiAuto
		{
			showToPlayer = 0;
			minRange = 0;
			minRangeProbab = 0.001;
			midRange = 0.001;
			midRangeProbab = 0.001;
			maxRange = 0.001;
			maxRangeProbab = 0.001;
			burst = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class RHS_FOLD_BASE: Rifle_Base_F
	{
		modes[] = {"Safe"};
		class Safe: Mode_SemiAuto
		{
			showToPlayer = 0;
			minRange = 0;
			minRangeProbab = 0.001;
			midRange = 0.001;
			midRangeProbab = 0.001;
			maxRange = 0.001;
			maxRangeProbab = 0.001;
			burst = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class rhs_weap_ak74m_Base_F: Rifle_Base_F
	{
		modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single_AI: Single
		{
			showToPlayer = 0;
			minRange = 200;
			minRangeProbab = 0.5;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			burst = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 2;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
		};
	};
	class rhs_weap_ak74m: rhs_weap_ak74m_Base_F
	{
		modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
	};
	class rhs_weap_ak105: rhs_weap_ak74m
	{
		modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
	};
	class rhs_weap_akm: rhs_weap_ak74m
	{
		modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single_AI: Single
		{
			showToPlayer = 0;
			minRange = 200;
			minRangeProbab = 0.5;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			burst = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 2;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 200;
		};
	};
	class rhs_weap_ak103_base: rhs_weap_akm
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 2;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class Burst: Mode_Burst{};
	};
	class rhs_weap_ak103_1: rhs_weap_ak103_base
	{
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
	};
	class rhs_weap_ak103_2: rhs_weap_ak103_base
	{
		modes[] = {"Single","Burst","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Burst
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
	};
	class rhs_weap_ak104: rhs_weap_ak103_base
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
	};
	class rhs_weap_ak74: rhs_weap_ak74m
	{
		modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
	};
	class rhs_weap_aks74: rhs_weap_ak74
	{
		modes[] = {"Single","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
	};
	class rhs_weap_aks74u: rhs_weap_aks74
	{
		modes[] = {"FullAuto","Single","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 2;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class rhs_weap_asval: rhs_weap_ak74m
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 420;
			maxRangeProbab = 0.45;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 400;
			showToPlayer = 1;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 35;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: Single{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 2;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 75;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 75;
		};
	};
	class rhs_weap_vss: rhs_weap_asval
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 420;
			maxRangeProbab = 0.45;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 400;
			showToPlayer = 1;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 35;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
	};
	class rhs_weap_svd: rhs_weap_ak74m
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class rhs_weap_svdp: rhs_weap_svd
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class rhs_weap_svds: rhs_weap_svdp
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class rhs_weap_orsis_Base_F: Rifle_Base_F
	{
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class far_optic1: Single{};
		class medium_optic2: Single{};
		class far_optic2: far_optic1{};
	};
	class hgun_PDW2000_F: pdw2000_base_F
	{
		modes[] = {"Single","FullAuto"};
	};
	class rhs_weap_pp2000: hgun_PDW2000_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			aiRateOfFire = 0.2;
			aiRateOfFireDistance = 50;
			showToPlayer = 1;
		};
	};
	class rhs_weap_an94_base: Rifle_Base_F
	{
		modes[] = {"Single","Burst","Single_AI","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single_AI: Single
		{
			showToPlayer = 0;
			minRange = 200;
			minRangeProbab = 0.5;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			aiRateOfFire = 1;
			burst = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 2;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 500;
		};
	};
	class rhs_pkp_base: Rifle_Long_Base_F
	{
		modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.01;
			midRange = 200;
			midRangeProbab = 0.01;
			maxRange = 400;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
			burst = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: FullAuto
		{
			burst = 6;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 5;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far_optic1: close{};
		class far_optic2: far_optic1{};
	};
	class rhs_weap_pkp: rhs_pkp_base
	{
		modes[] = {"FullAuto","Single","close","short","medium","far_optic1","far_optic2"};
	};
	class rhs_weap_pkm: rhs_weap_pkp
	{
		modes[] = {"manual","close","short","medium","far_optic1","far_optic2"};
		class manual: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 500;
		};
		class close: manual
		{
			burst = 6;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far_optic1: medium{};
		class far_optic2: far_optic1{};
	};
	class rhs_weap_rpk_base: Rifle_Long_Base_F
	{
		modes[] = {"single","manual","close","short","medium","far_optic1","far_optic2"};
		class single: Mode_SemiAuto
		{
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 0;
			midRangeProbab = 0.01;
			maxRange = 0;
			maxRangeProbab = 0.01;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class manual: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.7;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: Manual
		{
			burst = 6;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 5;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far_optic1: medium{};
		class far_optic2: far_optic1{};
	};
	class ACE_VMM3: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_ACR_BASE_556: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
	};
	class CUP_arifle_ACR_Short_BASE_556: CUP_arifle_ACR_BASE_556
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class fullauto_medium: fullauto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_ACR_DMR_BASE_556: CUP_arifle_ACR_BASE_556
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_far_optics2: single_far_optics2{};
		class fullauto_medium: fullauto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
	};
	class CUP_arifle_ACR_BASE_68: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
	};
	class CUP_arifle_ACR_Short_BASE_68: CUP_arifle_ACR_BASE_68
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class fullauto_medium: fullauto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_ACR_DMR_BASE_68: CUP_arifle_ACR_BASE_68
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_far_optics2: single_far_optics2{};
		class fullauto_medium: fullauto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
	};
	class CUP_CZ_BREN2_Base: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
	};
	class CUP_CZ_BREN2_762_Base: CUP_CZ_BREN2_Base
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
	};
	class CUP_hgun_Browning_HP: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
	};
	class CUP_srifle_CZ750_Base: Rifle_Long_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_hgun_CZ75: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 30;
			midRangeProbab = 0.6;
			maxRange = 60;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 30;
			showToPlayer = 1;
		};
	};
	class CUP_hgun_Deagle: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_hgun_Duty: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_smg_EVO: Rifle_Short_Base_F
	{
		modes[] = {"Single","Burst","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			showToPlayer = 1;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			showToPlayer = 1;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 50;
			showToPlayer = 1;
		};
	};
	class CUP_Famas_Base: Rifle_Base_F
	{
		modes[] = {"Single","Burst","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
	};
	class CUP_arifle_G3_Base: Rifle_Base_F
	{
		modes[] = {"Single","Fullauto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 600;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class Fullauto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: Single{};
		class single_far_optics1: Single{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			burst = 1;
		};
	};
	class CUP_arifle_GALIL_BASE: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics1","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_srifle_LeeEnfield: Rifle_Long_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_Mac10_Base: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			showToPlayer = 1;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 50;
			showToPlayer = 1;
		};
	};
	class CUP_hgun_Mac10_Base: Pistol_Base_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			showToPlayer = 1;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 50;
			showToPlayer = 1;
		};
	};
	class CUP_lmg_MG3: Rifle_Long_Base_F
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: manual
		{
			burst = 13;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class CUP_smg_MP5SD6: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.25;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 0.001;
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 7;
			midRangeProbab = 0.7;
			maxRange = 15;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_smg_MP5A5: CUP_smg_MP5SD6
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.25;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_smg_P90_BASE: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			showToPlayer = 1;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 50;
			showToPlayer = 1;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 50;
		};
	};
	class CUP_smg_p90_olive: CUP_smg_P90_BASE
	{
		modes[] = {"Single","FullAuto","single_medium_optics1","single_far_optics2","fullauto_medium"};
	};
	class CUP_smg_PS90_olive: CUP_smg_p90_olive
	{
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			showToPlayer = 1;
		};
	};
	class CUP_hgun_TT: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;
			showToPlayer = 1;
		};
	};
	class CUP_sgun_SPAS12: Rifle_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_AUG_Base: Rifle_Base_F
	{
		modes[] = {"FullAuto","Single","fullauto_medium"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
	};
	class CUP_srifle_SVD: Rifle_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_hgun_TEC9: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_hgun_TEC9_FA: CUP_hgun_TEC9
	{
		modes[] = {"Full"};
		class Full: Mode_FullAuto
		{
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 500;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
		};
	};
	class CUP_lmg_UK59: Rifle_Long_Base_F
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: manual
		{
			burst = 6;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 5;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class CUP_Vhmg_DSHKM_veh: MGun
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class CUP_Vhmg_NSVT_veh: CUP_Vhmg_DSHKM_veh
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: manual
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: close
		{
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: short
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: medium
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: far
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class HMG_127: LMG_RCWS
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			showToPlayer = 1;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 8;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			showToPlayer = 0;
			burst = 4;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.25;
			maxRange = 2000;
			maxRangeProbab = 0.05;
		};
	};
	class HMG_01: HMG_127
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: manual
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			showToPlayer = 1;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 8;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 400;
			midRangeProbab = 0.75;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			showToPlayer = 0;
			burst = 4;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 400;
			minRange = 400;
			minRangeProbab = 0.75;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1500;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.6;
			midRange = 1500;
			midRangeProbab = 0.25;
			maxRange = 2000;
			maxRangeProbab = 0.05;
		};
	};
	class HMG_M2: HMG_01
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: manual
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
			showToPlayer = 1;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.7;
			midRange = 300;
			midRangeProbab = 0.75;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			showToPlayer = 0;
			burst = 4;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.75;
			midRange = 600;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.2;
		};
		class far: close
		{
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 1000;
			midRangeProbab = 0.25;
			maxRange = 1500;
			maxRangeProbab = 0.05;
		};
	};
	class CUP_Vhmg_M2_veh: HMG_M2
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class CUP_Vhmg_M3P_veh: CUP_Vhmg_M2_veh
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class CUP_Vlmg_M240_veh: MGun
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			showToPlayer = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 8;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
	};
	class CUP_Vlmg_M240_nest: CUP_Vlmg_M240_veh
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: manual
		{
			showToPlayer = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: close
		{
			showToPlayer = 0;
			burst = 8;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.2;
		};
		class short: short
		{
			showToPlayer = 0;
			burst = 6;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 150;
			minRange = 20;
			minRangeProbab = 0.7;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class medium: medium
		{
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 250;
			minRange = 150;
			minRangeProbab = 0.7;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: far
		{
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 600;
			minRangeProbab = 0.65;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.1;
		};
	};
	class CUP_Vlmg_MG3_veh_noeject: CUP_Vlmg_M240_veh
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: manual
		{
			showToPlayer = 1;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
	};
	class CUP_Vhmg_KORD_veh: MGun
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: MGun
		{
			showToPlayer = 1;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 1;
			minRangeProbab = 0.01;
			midRange = 2;
			midRangeProbab = 0.01;
			maxRange = 3;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			showToPlayer = 0;
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 100;
			maxRangeProbab = 0.04;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.58;
			maxRange = 800;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 600;
			minRangeProbab = 0.05;
			midRange = 800;
			midRangeProbab = 0.4;
			maxRange = 1200;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class CUP_srifle_VSSVintorez: Rifle_Base_F
	{
		modes[] = {"Single","Full"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Full: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_arifle_SR3M_Vikhr: Rifle_Base_F
	{
		modes[] = {"Single","Full"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Full: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 60;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_sgun_AA12: Rifle_Base_F
	{
		modes[] = {"FullAuto","Single_close","Single_far"};
		class FullAuto: Mode_FullAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 20;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
		};
		class Single: Mode_SemiAuto{};
		class Single_close: Single
		{
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 170;
			midRangeProbab = 0.8;
			maxRange = 250;
			maxRangeProbab = 0.15;
			burst = 1;
		};
		class Single_far: Single_close
		{
			aiRateOfFire = 4;
			aiRateOfFireDistance = 300;
			minRange = 220;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.15;
			showToPlayer = 0;
			burst = 1;
		};
	};
	class CUP_arifle_AK_Base: Rifle_Base_F
	{
		modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_AKS_Base: CUP_arifle_AK_Base
	{
		modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
		class FullAuto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_AK107_Base: CUP_arifle_AK_Base
	{
		modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Burst: Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_AKM: CUP_arifle_AK_Base
	{
		modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_AKS74U: CUP_arifle_AKS_Base
	{
		modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 25;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 200;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 25;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 75;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_AK47: CUP_arifle_AK_Base
	{
		modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_AKS: CUP_arifle_AKM
	{
		modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_AK74: CUP_arifle_AK_Base
	{
		modes[] = {"FullAuto","Single","Burst","fullauto_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_AK74_GL: CUP_arifle_AK_Base
	{
		modes[] = {"FullAuto","Single","Burst","fullauto_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_AKS74: CUP_arifle_AKS_Base
	{
		modes[] = {"FullAuto","Single","Burst","fullauto_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_AKS74_GL: CUP_arifle_AK74_GL
	{
		modes[] = {"FullAuto","Single","Burst","fullauto_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_AK74M: CUP_arifle_AK_Base
	{
		modes[] = {"FullAuto","Single","Burst","fullauto_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_AK74M_GL: CUP_arifle_AK_Base
	{
		modes[] = {"FullAuto","Single","Burst","fullauto_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_AK107: CUP_arifle_AK107_Base
	{
		modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_AK107_GL: CUP_arifle_AK107_Base
	{
		modes[] = {"FullAuto","Burst","Single","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_AK102: CUP_arifle_AK_Base
	{
		modes[] = {"FullAuto","Single","Burst","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_AK104: CUP_arifle_AK_Base
	{
		modes[] = {"FullAuto","Single","Burst","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_AK105: CUP_arifle_AK_Base
	{
		modes[] = {"FullAuto","Single","Burst","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst
		{
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_RPK74: CUP_arifle_AK_Base
	{
		modes[] = {"FullAuto","Single","manual","close","short","medium","far_optic1","far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			showToPlayer = 1;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			showToPlayer = 1;
			aiRateOfFireDistance = 650;
			minRange = 400;
			minRangeProbab = 0;
			midRange = 600;
			midRangeProbab = 0;
			maxRange = 800;
			maxRangeProbab = 0;
			aiRateOfFire = 2;
		};
		class manual: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
			burst = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 1.5;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 500;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far_optic1: medium{};
		class far_optic2: far_optic1{};
	};
	class CUP_arifle_TYPE_56_2: CUP_arifle_AKM
	{
		modes[] = {"FullAuto","Single","Burst","FullAuto_medium"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_srifle_AS50: Rifle_Long_Base_F
	{
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
		};
		class far_optic1: Single{};
		class medium_optic2: Single{};
		class far_optic2: far_optic1{};
	};
	class CUP_srifle_AWM_Base: Rifle_Long_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_smg_bizon: Rifle_Base_F
	{
		modes[] = {"FullAuto","Single","Burst"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.25;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 1;
			minRangeProbab = 0.3;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 60;
			maxRangeProbab = 0.05;
			showToPlayer = 0;
			burst = 3;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_smg_vityaz: CUP_smg_bizon
	{
		modes[] = {"FullAuto","Single"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.25;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_hgun_Colt1911: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_hgun_Compact: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_CZ805_Base: Rifle_Base_F
	{
		modes[] = {"Single","Burst","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
	};
	class CUP_hgun_FlareGun: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			showToPlayer = 1;
			minRange = 30;
			minRangeProbab = 0.25;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_FNFAL: Rifle_Base_F
	{
		modes[] = {"Single","Fullauto","FullAuto_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_FNFAL5060: CUP_arifle_FNFAL
	{
		modes[] = {"Single","Fullauto","FullAuto_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
	};
	class CUP_arifle_FNFAL5061: CUP_arifle_FNFAL
	{
		modes[] = {"Single","Fullauto","FullAuto_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
	};
	class CUP_arifle_FNFAL5062: CUP_arifle_FNFAL
	{
		modes[] = {"Single","Fullauto","FullAuto_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
	};
	class CUP_arifle_FNFAL_OSW: CUP_arifle_FNFAL
	{
		modes[] = {"Single","Fullauto","FullAuto_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
	};
	class CUP_arifle_IMI_Romat: CUP_arifle_FNFAL
	{
		modes[] = {"Single","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
		class FullAuto: FullAuto{};
		class FullAuto_medium: FullAuto_medium{};
	};
	class CUP_arifle_Steyr_Stg58: CUP_arifle_FNFAL
	{
		modes[] = {"Single","Fullauto","FullAuto_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
	};
	class CUP_arifle_Gewehr1: CUP_arifle_FNFAL
	{
		modes[] = {"Single","Fullauto","FullAuto_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
	};
	class CUP_arifle_DSA_SA58: CUP_arifle_FNFAL
	{
		modes[] = {"Single","Fullauto","FullAuto_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
	};
	class CUP_arifle_DSA_SA58_OSW: CUP_arifle_DSA_SA58
	{
		modes[] = {"Single","Fullauto","FullAuto_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
	};
	class CUP_arifle_DSA_SA58_DMR: CUP_arifle_DSA_SA58
	{
		modes[] = {"Single","Fullauto","FullAuto_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
	};
	class CUP_arifle_G36_Base: Rifle_Base_F
	{
		modes[] = {"Single","Burst","FullAuto","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			burst = 3;
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
	};
	class CUP_arifle_G36_Base_CarryhandleOptics: CUP_arifle_G36_Base
	{
		modes[] = {"Single","Burst","FullAuto","fullauto_medium"};
	};
	class CUP_arifle_G36E: CUP_arifle_G36_Base_CarryhandleOptics
	{
		modes[] = {"Single","Burst","FullAuto","fullauto_medium"};
		class Burst: Burst
		{
			showToPlayer = 1;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_G36K: CUP_arifle_G36_Base_CarryhandleOptics
	{
		modes[] = {"Single","Fullauto"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Burst{};
		class fullauto_medium: fullauto_medium{};
	};
	class CUP_arifle_G36C: CUP_arifle_G36_Base
	{
		modes[] = {"Single","Burst","FullAuto","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Burst
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			burst = 3;
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: fullauto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
	};
	class CUP_arifle_MG36: CUP_arifle_G36_Base
	{
		modes[] = {"Single","Fullauto","close","medium","far"};
		class Single: Mode_SemiAuto
		{
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 600;
			maxRangeProbab = 0.01;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 5;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
	};
	class CUP_hgun_Glock17: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_glaunch_Base: Rifle_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			showToPlayer = 1;
			minRange = 30;
			minRangeProbab = 0.25;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_glaunch_M79: CUP_glaunch_Base
	{
		modes[] = {"Single"};
		class Single: Single
		{
			showToPlayer = 1;
			minRange = 30;
			minRangeProbab = 0.25;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_OTS14_GROZA_Base: Rifle_Base_F
	{
		modes[] = {"Single","Full","FullAuto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Full: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 25;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: Full
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
	};
	class CUP_arifle_OTS14_GROZA_762_base: CUP_arifle_OTS14_GROZA_Base
	{
		modes[] = {"Single","Full","FullAuto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Full: Full
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 10;
			midRangeProbab = 0.7;
			maxRange = 25;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_HK416_145_Base: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_HK416_11_Base: CUP_arifle_HK416_145_Base
	{
		modes[] = {"Single","FullAuto"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.2;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class FullAuto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: fullauto_medium{};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_HK417_Base: CUP_arifle_HK416_145_Base
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_arifle_HK417_20: CUP_arifle_HK417_Base
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_close_optics1","single_medium_optics1","single_far_optics1"};
	};
	class CUP_arifle_HK417_12: CUP_arifle_HK417_20
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 450;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class fullauto_medium: fullauto_medium
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
			showToPlayer = 0;
			burst = 3;
		};
		class single_close_optics1: single_close_optics1{};
		class single_medium_optics1: single_medium_optics1{};
		class single_far_optics1: single_far_optics1{};
	};
	class CUP_srifle_CZ550_base: Rifle_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_srifle_CZ550: CUP_srifle_CZ550_base
	{
		modes[] = {"Single","single_medium_optics1"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.01;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			showToPlayer = 1;
		};
	};
	class CUP_sgun_CZ584: Rifle_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_srifle_ksvk: Rifle_Base_F
	{
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
		};
		class far_optic1: Single{};
		class medium_optic2: Single{};
		class far_optic2: far_optic1{};
	};
	class CUP_srifle_L129A1: Rifle_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_l85a2_base: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
	};
	class CUP_l85a2: CUP_l85a2_base
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
	};
	class CUP_arifle_L86A2: CUP_l85a2
	{
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		class fullauto_medium: fullauto_medium
		{
			burst = 4;
			showToPlayer = 0;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
		};
		class single_medium_optics1: single_medium_optics1{};
	};
	class CUP_sgun_M1014_base: Rifle_Base_F
	{
		modes[] = {"Single","Single_close","Single_far"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 20;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
		};
		class Single_close: Single
		{
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 170;
			midRangeProbab = 0.8;
			maxRange = 250;
			maxRangeProbab = 0.15;
			burst = 1;
		};
		class Single_far: Single_close
		{
			aiRateOfFire = 4;
			aiRateOfFireDistance = 300;
			minRange = 220;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.15;
			showToPlayer = 0;
			burst = 1;
		};
	};
	class CUP_srifle_M107_Base: Rifle_Long_Base_F
	{
		modes[] = {"Single","far_optic1","medium_optic2","far_optic2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
		};
		class far_optic1: Single{};
		class medium_optic2: Single{};
		class far_optic2: far_optic1{};
	};
	class CUP_srifle_M110: Rifle_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.69;
			maxRange = 500;
			maxRangeProbab = 0.045;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_srifle_M14: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_srifle_M21: CUP_srifle_M14
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_srifle_M14_DMR: Rifle_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_arifle_M16_Base: Rifle_Base_F
	{
		modes[] = {"Single","Burst","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst
		{
			showToPlayer = 0;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_medium_optics2: single_medium_optics1{};
	};
	class CUP_arifle_M4_Base: CUP_arifle_M16_Base
	{
		modes[] = {"Single","FullAuto","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst_medium
		{
			showToPlayer = 0;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
		class Burst: Burst{};
	};
	class CUP_arifle_XM16E1: CUP_arifle_M16_Base
	{
		modes[] = {"Single","FullAuto","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst_medium
		{
			midRange = 50;
			showToPlayer = 0;
			minRange = 1;
			minRangeProbab = 0.5;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_M16A1E1: CUP_arifle_XM16E1
	{
		modes[] = {"Single","Burst","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class Burst_medium: Burst_medium
		{
			midRange = 75;
			showToPlayer = 0;
			minRange = 1;
			minRangeProbab = 0.5;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_M16A1GL: CUP_arifle_XM16E1
	{
		modes[] = {"Single","FullAuto","Burst_medium","single_medium_optics1","single_medium_optics2"};
	};
	class CUP_arifle_M16A1E1GL: CUP_arifle_M16A1GL
	{
		modes[] = {"Single","Burst","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class Burst_medium: Burst_medium
		{
			midRange = 75;
			showToPlayer = 0;
			minRange = 1;
			minRangeProbab = 0.5;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_Colt727: CUP_arifle_M16_Base
	{
		modes[] = {"Single","FullAuto","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.3;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst_medium
		{
			showToPlayer = 0;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
		class Burst: Burst{};
	};
	class CUP_srifle_Mk12SPR: CUP_arifle_M4_Base
	{
		modes[] = {"Single","single_medium_optics1","single_medium_optics2","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
		class single_far_optics1: single_medium_optics1{};
		class FullAuto: FullAuto{};
		class Burst: Burst{};
		class Burst_medium: Burst_medium{};
	};
	class CUP_arifle_M4A1_BUIS_Base: CUP_arifle_M4_Base
	{
		modes[] = {"Single","FullAuto","Burst_medium","single_medium_optics1","single_medium_optics2"};
	};
	class CUP_arifle_M4A1_MOE_short_black: CUP_arifle_M4A1_BUIS_Base
	{
		modes[] = {"Single","FullAuto","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst_medium
		{
			showToPlayer = 0;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
		class Burst: Burst{};
	};
	class CUP_arifle_M4A1_standard_short_black: CUP_arifle_M4A1_BUIS_Base
	{
		modes[] = {"Single","FullAuto","Burst_medium","single_medium_optics1","single_medium_optics2"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 1;
			minRangeProbab = 0.2;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst_medium: Burst_medium
		{
			showToPlayer = 0;
			minRange = 1;
			minRangeProbab = 0.5;
			midRange = 75;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			burst = 3;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
		class Burst: Burst{};
	};
	class CUP_arifle_M4_MOE_BW: CUP_arifle_M4A1_BUIS_Base
	{
		modes[] = {"Single","single_medium_optics1","single_medium_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 500;
			showToPlayer = 1;
		};
		class single_medium_optics1: single_medium_optics1{};
		class single_medium_optics2: single_medium_optics2{};
		class FullAuto: FullAuto{};
		class Burst: Burst{};
		class Burst_medium: Burst_medium{};
	};
	class CUP_hgun_M17_Coyote: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_srifle_M2010_BASE: Rifle_Base_F
	{
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
	};
	class CUP_lmg_M240: Rifle_Long_Base_F
	{
		modes[] = {"manual","close","short","medium","far"};
		class manual: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: manual
		{
			burst = 13;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class CUP_saw_base: Rifle_Long_Base_F
	{
		modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far_optic1: medium{};
		class far_optic2: far_optic1{};
	};
	class CUP_srifle_M24_des: Rifle_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_srifle_M40A3: CUP_srifle_M24_des
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			showToPlayer = 1;
			minRange = 30;
			minRangeProbab = 0.25;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_smg_M3A1: Rifle_Base_F
	{
		modes[] = {"FullAuto","FullAuto_medium"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto_medium: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 250;
			showToPlayer = 1;
		};
	};
	class CUP_M60E4_base: Rifle_Long_Base_F
	{
		modes[] = {"FullAuto","close","short","medium","far_optic1","far_optic2"};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: FullAuto
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 2.5;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far_optic1: medium{};
		class far_optic2: far_optic1{};
	};
	class CUP_hgun_M9: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_hgun_Makarov: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_hgun_PMM: CUP_hgun_Makarov
	{
		modes[] = {"Single"};
		class Single: Single
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_hgun_MicroUzi: Pistol_Base_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 25;
			midRangeProbab = 0.3;
			maxRange = 70;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_hgun_Mk23: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_lmg_Mk48_Base: Rifle_Long_Base_F
	{
		modes[] = {"manual","close","short","medium","far","far_optic1","far_optic2"};
		class manual: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 8;
			aiRateOfFire = 2;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.04;
			aiRateOfFireDistance = 50;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 12;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.1;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 16;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
		class far_optic1: close{};
		class far_optic2: far_optic1{};
	};
	class CUP_srifle_Mosin_Nagant: Rifle_Long_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_smg_MP7: Rifle_Short_Base_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			showToPlayer = 1;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 50;
			showToPlayer = 1;
		};
	};
	class CUP_hgun_MP7: Pistol_Base_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			showToPlayer = 1;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 50;
			showToPlayer = 1;
		};
	};
	class CUP_hgun_PB6P9: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_hgun_Phantom: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_lmg_PKM: Rifle_Long_Base_F
	{
		modes[] = {"manual","close","short","medium","far","far_optic1","far_optic2"};
		class manual: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 5;
			midRangeProbab = 0.58;
			maxRange = 10;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class close: manual
		{
			burst = 6;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class short: close
		{
			burst = 5;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 150;
			midRangeProbab = 0.58;
			maxRange = 300;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class medium: close
		{
			burst = 4;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 600;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 400;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class far: close
		{
			burst = 3;
			aiRateOfFire = 5;
			aiRateOfFireDistance = 1000;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 600;
			midRangeProbab = 0.4;
			maxRange = 900;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
		class far_optic1: close{};
		class far_optic2: far_optic1{};
	};
	class CUP_srifle_Remington700: Rifle_Long_Base_F
	{
		modes[] = {"Single","single_close_optics1","single_medium_optics1","single_far_optics1"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
	};
	class CUP_hgun_TaurusTracker455: Pistol_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_srifle_RSASS_BASE: Rifle_Base_F
	{
		modes[] = {"Single","single_medium_optics1","single_far_optics2"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 225;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.2;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class single_medium_optics1: Single{};
		class single_far_optics2: single_medium_optics1{};
	};
	class CUP_arifle_Sa58_base: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: Single{};
		class single_medium_optics1: single_close_optics1{};
		class single_far_optics1: single_medium_optics1{};
		class fullauto_medium: FullAuto
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_Sa58_LMG_base: CUP_arifle_Sa58_base
	{
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: single_close_optics1{};
		class single_medium_optics1: single_medium_optics1{};
		class single_far_optics1: single_far_optics1{};
		class fullauto_medium: fullauto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_Sa58_short_base: CUP_arifle_Sa58_base
	{
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: single_close_optics1{};
		class single_medium_optics1: single_medium_optics1{};
		class single_far_optics1: single_far_optics1{};
		class fullauto_medium: fullauto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_Sa56_carbine_base: CUP_arifle_Sa58_base
	{
		modes[] = {"Single","FullAuto","single_close_optics1","single_medium_optics1","single_far_optics1","fullauto_medium"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: FullAuto
		{
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 1e-06;
			showToPlayer = 1;
			aiRateOfFireDistance = 500;
		};
		class single_close_optics1: single_close_optics1{};
		class single_medium_optics1: single_medium_optics1{};
		class single_far_optics1: single_far_optics1{};
		class fullauto_medium: fullauto_medium
		{
			showToPlayer = 0;
			burst = 3;
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 50;
			midRangeProbab = 0.7;
			maxRange = 100;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_hgun_SA61: Pistol_Base_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.1;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 25;
			midRangeProbab = 0.3;
			maxRange = 70;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_smg_SA61: Rifle_Base_F
	{
		modes[] = {"Single","FullAuto"};
		class Single: Mode_SemiAuto
		{
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 30;
			midRangeProbab = 0.3;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.3;
			maxRange = 50;
			maxRangeProbab = 0.02;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_sgun_Saiga12K: Rifle_Base_F
	{
		modes[] = {"Single","Single_close","Single_far"};
		class Single: Mode_SemiAuto
		{
			aiRateOfFire = 1;
			aiRateOfFireDistance = 20;
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 10;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.15;
			showToPlayer = 1;
		};
		class Single_close: Single
		{
			showToPlayer = 0;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 170;
			midRangeProbab = 0.8;
			maxRange = 250;
			maxRangeProbab = 0.15;
			burst = 1;
		};
		class Single_far: Single_close
		{
			aiRateOfFire = 4;
			aiRateOfFireDistance = 300;
			minRange = 220;
			minRangeProbab = 0.1;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 350;
			maxRangeProbab = 0.15;
			showToPlayer = 0;
			burst = 1;
		};
	};
	class CUP_arifle_SCAR_Base: Rifle_Base_F
	{
		modes[] = {"SCAR_L_Single"};
		class SCAR_L_Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class SCAR_L_FullAuto: Mode_FullAuto{};
	};
	class CUP_arifle_Mk17_Base: CUP_arifle_SCAR_Base
	{
		modes[] = {"SCAR_H_Single","SCAR_H_FullAuto"};
		class SCAR_H_Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 600;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class SCAR_H_FullAuto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_SCAR_L_Base: CUP_arifle_SCAR_Base
	{
		modes[] = {"SCAR_L_Single"};
	};
	class CUP_arifle_Mk16_STD: CUP_arifle_SCAR_L_Base
	{
		modes[] = {"SCAR_L_Single","SCAR_L_FullAuto"};
		class SCAR_L_Single: SCAR_L_Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.9;
			maxRange = 600;
			maxRangeProbab = 0.1;
			aiRateOfFireDistance = 600;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class SCAR_L_FullAuto: SCAR_L_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_Mk16_SV: CUP_arifle_SCAR_L_Base
	{
		modes[] = {"SCAR_L_Single","SCAR_L_FullAuto"};
		class SCAR_L_Single: SCAR_L_Single
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 800;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class SCAR_L_FullAuto: SCAR_L_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_Mk16_CQC: CUP_arifle_SCAR_L_Base
	{
		modes[] = {"SCAR_L_Single","SCAR_L_FullAuto"};
		class SCAR_L_Single: SCAR_L_Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 300;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class SCAR_L_FullAuto: SCAR_L_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_Mk17_CQC: CUP_arifle_Mk17_Base
	{
		modes[] = {"SCAR_H_Single","SCAR_H_FullAuto"};
		class SCAR_H_Single: SCAR_H_Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 300;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class SCAR_H_FullAuto: SCAR_H_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_Mk17_STD: CUP_arifle_Mk17_Base
	{
		modes[] = {"SCAR_H_Single","SCAR_H_FullAuto"};
	};
	class CUP_arifle_Mk17_STD_FG: CUP_arifle_Mk17_STD
	{
		modes[] = {"SCAR_H_Single","SCAR_H_FullAuto"};
		class SCAR_H_Single: SCAR_H_Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 300;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class SCAR_H_FullAuto: SCAR_H_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_Mk20: CUP_arifle_Mk17_Base
	{
		modes[] = {"SCAR_H_Single","SCAR_H_FullAuto"};
		class SCAR_H_Single: SCAR_H_Single
		{
			minRange = 0;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.05;
			aiRateOfFireDistance = 800;
			showToPlayer = 1;
			aiRateOfFire = 2;
		};
		class SCAR_H_FullAuto: SCAR_H_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_hgun_BallisticShield_Armed: Rifle_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			showToPlayer = 1;
			minRange = 30;
			minRangeProbab = 0.25;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 600;
			maxRangeProbab = 0.04;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_smg_SA61_RIS: CUP_smg_SA61
	{
		modes[] = {"Single","FullAuto"};
	};
	class CUP_smg_BallisticShield_Sa61: CUP_smg_SA61_RIS
	{
		modes[] = {"Single","FullAuto"};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.3;
			maxRange = 50;
			maxRangeProbab = 0.02;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_smg_vityaz_vfg: CUP_smg_vityaz
	{
		modes[] = {"FullAuto","Single"};
	};
	class CUP_smg_BallisticShield_PP19: CUP_smg_vityaz_vfg
	{
		modes[] = {"FullAuto","Single"};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.2;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 40;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.25;
			midRange = 40;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Burst{};
	};
	class CUP_smg_BallisticShield_MP7: CUP_smg_MP7
	{
		modes[] = {"Single","FullAuto"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 100;
			midRangeProbab = 0.7;
			maxRange = 150;
			maxRangeProbab = 0.05;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 300;
			showToPlayer = 1;
		};
		class FullAuto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
			aiRateOfFireDistance = 50;
			showToPlayer = 1;
		};
	};
	class CUP_SKS: Rifle_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 1300;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_sgun_slamfire: Rifle_Base_F
	{
		modes[] = {"Single"};
		class Single: Mode_SemiAuto
		{
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 60;
			midRangeProbab = 0.2;
			maxRange = 100;
			maxRangeProbab = 0.03;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
	};
	class CUP_arifle_XM8_Base: Rifle_Base_F
	{
		modes[] = {"Single","Fullauto"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst{};
	};
	class CUP_arifle_XM8_Railed_Base: Rifle_Base_F
	{
		modes[] = {"Single","Fullauto"};
		class Single: Mode_SemiAuto
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: Mode_FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 30;
			midRangeProbab = 0.7;
			maxRange = 120;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Mode_Burst{};
	};
	class CUP_arifle_xm8_sharpshooter: CUP_arifle_XM8_Base
	{
		modes[] = {"Single","Fullauto"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 25;
			midRangeProbab = 0.7;
			maxRange = 70;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Burst{};
	};
	class CUP_arifle_xm8_SAW: CUP_arifle_xm8_sharpshooter
	{
		modes[] = {"Single","Fullauto","Close","Short","Medium","Far"};
		class Manual: FullAuto{};
		class Close: Manual
		{
			burst = 10;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 50;
			minRange = 10;
			minRangeProbab = 0.05;
			midRange = 20;
			midRangeProbab = 0.58;
			maxRange = 50;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class Short: Close
		{
			burst = 6;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 200;
			minRange = 50;
			minRangeProbab = 0.05;
			midRange = 100;
			midRangeProbab = 0.58;
			maxRange = 200;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class Medium: Close
		{
			burst = 8;
			aiRateOfFire = 4;
			aiRateOfFireDistance = 400;
			minRange = 200;
			minRangeProbab = 0.05;
			midRange = 300;
			midRangeProbab = 0.58;
			maxRange = 400;
			maxRangeProbab = 0.04;
			showToPlayer = 0;
		};
		class Far: Close
		{
			burst = 7;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 600;
			minRange = 400;
			minRangeProbab = 0.05;
			midRange = 500;
			midRangeProbab = 0.4;
			maxRange = 600;
			maxRangeProbab = 0.01;
			showToPlayer = 0;
		};
	};
	class CUP_arifle_XM8_Compact: CUP_arifle_XM8_Base
	{
		modes[] = {"Single","Fullauto"};
		class Single: Single
		{
			minRange = 2;
			minRangeProbab = 0.1;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Fullauto: FullAuto
		{
			minRange = 0;
			minRangeProbab = 0.1;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 60;
			maxRangeProbab = 0.05;
			showToPlayer = 1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 500;
		};
		class Burst: Burst{};
	};
};
class CfgAmmo
{
	class Default;
	class RocketCore: Default
	{
		audibleFire = 32;
	};
	class BulletCore: Default
	{
		audibleFire = 16;
	};
	class GrenadeCore: Default
	{
		audibleFire = 0.25;
	};
	class ShellCore: Default
	{
		audibleFire = 16;
	};
	class SubmunitionCore: Default
	{
		audibleFire = 16;
	};
	class Grenade: Default
	{
		audibleFire = 0.25;
	};
	class MissileCore: Default
	{
		audibleFire = 32;
	};
	class LaserCore: Default
	{
		audibleFire = 32;
	};
	class TimeBombCore: Default
	{
		audibleFire = 0;
	};
	class ShotDeployCore: Default
	{
		audibleFire = 16;
	};
	class ShotgunCore: Default
	{
		audibleFire = 16;
	};
	class RocketBase: RocketCore
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class R_PG32V_F;
	class CUP_R_SMAW_HEDP_N: RocketBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 50;
	};
	class CUP_R_RSHG2_HE: RocketBase
	{
		audibleFire = 16;
	};
	class CUP_R_PG26_AT: RocketBase
	{
		audibleFire = 16;
	};
	class CUP_R_RPG18_AT: RocketBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 50;
	};
	class CUP_R_APILAS_AT: RocketBase
	{
		audibleFire = 16;
	};
	class CUP_R_MEEWS_HEDP: RocketBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 150;
	};
	class CUP_R_M136_AT: RocketBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 50;
	};
	class CUP_R_SMAW_HEDP: RocketBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 50;
	};
	class CUP_R_70mm_Hydra_HE: RocketBase
	{
		aiAmmoUsageFlags = "64 + 128 + 512";
		allowAgainstInfantry = 1;
		cost = 100;
	};
	class CUP_R_PZF3IT_AT: RocketBase
	{
		audibleFire = 16;
	};
	class CUP_R_OG7_AT: RocketBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
		aiAmmoUsageFlags = "64 + 128 + 256";
		allowAgainstInfantry = 1;
		cost = 50;
	};
	class CUP_R_TBG7V_AT: RocketBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
		aiAmmoUsageFlags = "64 + 128 + 256";
		allowAgainstInfantry = 1;
		cost = 150;
	};
	class CUP_R_PG7VR_AT: RocketBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 50;
	};
	class CUP_R_PG7VL_AT: RocketBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 50;
	};
	class CUP_R_PG7VM_AT: RocketBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 50;
	};
	class CUP_R_PG7V_AT: RocketBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 50;
	};
	class rhs_ammo_rpg75_rocket: R_PG32V_F
	{
		audibleFire = 16;
	};
	class rhs_rpg26_rocket: R_PG32V_F
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 50;
	};
	class BulletBase: BulletCore
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class FakeAmmo: BulletCore
	{
		audibleFire = 16;
	};
	class potato_bullet_556x45: BulletBase
	{
		audibleFire = 100;
	};
	class CUP_B_25mm_APFSDS_White_Tracer: BulletBase
	{
		audibleFire = 32;
	};
	class CUP_B_25mm_HE_White_Tracer: BulletBase
	{
		audibleFire = 32;
	};
	class CUP_B_30mm_CAS_Red_Tracer: BulletBase
	{
		audibleFire = 32;
	};
	class CUP_B_30x113mm_M789_HEDP_Red_Tracer: BulletBase
	{
		audibleFire = 28;
	};
	class CUP_B_23mm_APHE_Green_Tracer: BulletBase
	{
		audibleFire = 32;
	};
	class CUP_B_23mm_APHE_No_Tracer: BulletBase
	{
		audibleFire = 32;
	};
	class CUP_B_23mm_AA: BulletBase
	{
		audibleFire = 32;
	};
	class CUP_B_23mm_APHE_Tracer_Green: BulletBase
	{
		audibleFire = 32;
	};
	class CUP_B_20mm_AA: BulletBase
	{
		audibleFire = 32;
	};
	class CUP_B_20mm_API_Tracer_Red: BulletBase
	{
		audibleFire = 32;
	};
	class CUP_B_20mm_APHE_Tracer_Red: BulletBase
	{
		audibleFire = 32;
	};
	class CUP_B_20mm_AP_Tracer_Red: BulletBase
	{
		audibleFire = 28;
	};
	class CUP_B_19mm_HE: BulletBase
	{
		audibleFire = 18;
	};
	class CUP_B_145x115_AP_Green_Tracer: BulletBase
	{
		audibleFire = 25;
	};
	class CUP_B_127x108_Ball_Green_Tracer: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class B_127x107_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class CUP_B_762x25_Ball: BulletBase
	{
		audibleFire = 45;
	};
	class CUP_B_46x30_Ball: BulletBase
	{
		audibleFire = 7;
	};
	class CUP_B_50AE_Ball: BulletBase
	{
		audibleFire = 45;
	};
	class CUP_B_765x17_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class CUP_B_9x19_AP: BulletBase
	{
		audibleFire = 5;
	};
	class CUP_B_9x19_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class CUP_B_9x18_Ball: BulletBase
	{
		audibleFire = 5;
	};
	class CUP_B_86x70_Ball_noTracer: BulletBase
	{
		audibleFire = 22;
	};
	class CUP_B_9x39_SP5: BulletBase
	{
		audibleFire = 10;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_1";
	};
	class CUP_B_762x54_Ball_White_Tracer: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class CUP_B_303_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class B_762x51_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class CUP_B_762x39_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class B_556x45_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class B_9x21_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class B_35mm_AA: BulletBase
	{
		audibleFire = 200;
	};
	class B_30mm_AP: BulletBase
	{
		audibleFire = 200;
	};
	class RHS_Ammo_DIRCM_Vitebsk: BulletBase
	{
		audibleFire = 0;
	};
	class B_20mm_AP: BulletBase
	{
		audibleFire = 200;
	};
	class ammo_Gun35mmAABase: BulletBase
	{
		audibleFire = 200;
	};
	class ammo_Gun30mmAABase: BulletBase
	{
		audibleFire = 200;
	};
	class ammo_Gun20mmAABase: BulletBase
	{
		audibleFire = 200;
	};
	class B_570x28_Ball: BulletBase
	{
		audibleFire = 25;
	};
	class B_93x64_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class B_127x54_Ball: BulletBase
	{
		audibleFire = 10;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_1";
	};
	class B_338_NM_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class B_338_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase
	{
		audibleFire = 250;
	};
	class B_45ACP_Ball: BulletBase
	{
		audibleFire = 10;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_1";
	};
	class B_coil_5g_spike: BulletBase
	{
		audibleFire = 0.01;
	};
	class B_25mm: BulletBase
	{
		audibleFire = 200;
	};
	class B_20mm: BulletBase
	{
		audibleFire = 200;
	};
	class B_19mm_HE: BulletBase
	{
		audibleFire = 150;
	};
	class B_127x108_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class B_127x99_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class B_127x33_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class B_408_Ball: BulletBase
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class B_56x15_dual: BulletBase
	{
		audibleFire = 10;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_1";
	};
	class GrenadeBase;
	class FlareCore;
	class SmokeShellCore: GrenadeCore
	{
		audibleFire = 0.25;
	};
	class G_40mm_HE: GrenadeBase
	{
		audibleFire = 30;
	};
	class CUP_G_40mm_HE;
	class CUP_G_30mm_HE: CUP_G_40mm_HE
	{
		audibleFire = 18;
	};
	class CUP_R_CRV7_C18_HE: CUP_R_70mm_Hydra_HE
	{
		audibleFire = 32;
	};
	class CUP_B_9x19_Ball_SD: CUP_B_9x19_Ball
	{
		audibleFire = 0.35;
	};
	class CUP_B_9x18_SD: CUP_B_9x18_Ball
	{
		audibleFire = 10;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_1";
	};
	class CUP_B_762x51_noTracer;
	class rhs_B_762x39_Ball: B_762x51_Ball
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class rhs_B_762x54_Ball: B_762x51_Ball
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class CUP_B_762x51_White_Tracer_3RndBurst: CUP_B_762x51_noTracer
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class CUP_B_762x51_Red_Tracer_3RndBurst: CUP_B_762x51_noTracer
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class CUP_B_762x39_Ball_Subsonic: CUP_B_762x39_Ball
	{
		audibleFire = 3;
	};
	class CUP_B_762x39_Ball_Tracer_Green: CUP_B_762x39_Ball
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class ShellBase: ShellCore
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class ACE_HuntIR_Propell: ShellBase
	{
		audibleFire = 1;
	};
	class R_230mm_fly: ShellBase
	{
		audibleFire = 64;
	};
	class FH_545x39_Ball: B_556x45_Ball
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class SubmunitionBase;
	class VOG25P_SubMunition: SubmunitionBase
	{
		audibleFire = 6;
	};
	class rhs_ammo_mixed_23x115mm: SubmunitionBase
	{
		audibleFire = 32;
	};
	class rhs_ammo_gsh30_mixed: SubmunitionBase
	{
		audibleFire = 32;
	};
	class SubmunitionBullet;
	class rhs_B_9x21_7BT3: B_9x21_Ball
	{
		audibleFire = 5.65;
	};
	class rhs_B_9x21_7N29: B_9x21_Ball
	{
		audibleFire = 5.65;
	};
	class rhs_B_9x21_7N28: B_9x21_Ball
	{
		audibleFire = 5.65;
	};
	class rhs_B_9x18_57N181S: B_9x21_Ball
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class rhs_B_9x19_7N21: B_9x21_Ball
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class rhs_B_9x39_SP5: rhs_B_762x39_Ball
	{
		audibleFire = 10;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_1";
	};
	class rhs_B_762x39_U_Ball: rhs_B_762x39_Ball
	{
		audibleFire = 10;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_1";
	};
	class rhs_B_545x39_Ball;
	class rhs_B_545x39_7U1_Ball: rhs_B_545x39_Ball
	{
		audibleFire = 10;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_1";
	};
	class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class rhs_B_545x39_7N6_Ball: rhs_B_545x39_Ball
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class RHS_ammo_23mm_AA: B_35mm_AA
	{
		audibleFire = 32;
	};
	class rhs_ammo_30x165mm_base: B_30mm_AP
	{
		audibleFire = 32;
	};
	class rhs_m21OF_fly: R_230mm_fly
	{
		audibleFire = 64;
	};
	class rhs_ammo_3d17_shell: Grenade
	{
		audibleFire = 0.05;
	};
	class GrenadeHand: Grenade
	{
		audibleFire = 0.05;
	};
	class MissileBase: MissileCore
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class M_Mo_82mm_AT;
	class ammo_Missile_CruiseBase: MissileBase
	{
		audibleFire = 64;
	};
	class M_Mo_120mm_AT;
	class M_Mo_155mm_AT;
	class M_Mo_120mm_AT_LG;
	class M_Mo_230mm_AT: M_Mo_155mm_AT
	{
		audibleFire = 64;
	};
	class M_Mo_155mm_AT_LG;
	class M_Mo_230mm_AT_LG: M_Mo_155mm_AT_LG
	{
		audibleFire = 64;
	};
	class FlareBase;
	class F_40mm_White: FlareBase
	{
		audibleFire = 20;
	};
	class B_30mm_HE: B_19mm_HE
	{
		audibleFire = 200;
	};
	class B_762x51_Minigun_Tracer_Red: SubmunitionBullet
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class B_65x39_Minigun_Caseless: SubmunitionBullet
	{
		audibleFire = 100;
		potato_aiCfgFixes_macroUsed = "AI_AUDIBLE_FIRE_0";
	};
	class R_80mm_HE;
	class potato_aiCfgFixes_he_rocket: R_80mm_HE
	{
		aiAmmoUsageFlags = "64 + 128 + 512";
		allowAgainstInfantry = 1;
		cost = 100;
	};
	class CUP_R_57mm_HE: RocketBase
	{
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 150;
	};
	class CUP_R_M72A6_AT: RocketBase
	{
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		allowAgainstInfantry = 1;
		cost = 50;
	};
};
class CfgMagazines
{
	class 24Rnd_missiles;
	class CUP_14Rnd_S5_M: 24Rnd_missiles
	{
		ammo = "potato_aiCfgFixes_he_rocket";
	};
	class CUP_64Rnd_S5_M: 24Rnd_missiles
	{
		ammo = "potato_aiCfgFixes_he_rocket";
	};
	class CUP_128Rnd_S5_M: 24Rnd_missiles
	{
		ammo = "potato_aiCfgFixes_he_rocket";
	};
	class CUP_192Rnd_S5_M: 24Rnd_missiles
	{
		ammo = "potato_aiCfgFixes_he_rocket";
	};
	class 38Rnd_80mm_rockets;
	class CUP_40Rnd_S8_M: 38Rnd_80mm_rockets
	{
		ammo = "potato_aiCfgFixes_he_rocket";
	};
};
class CfgVehicles
{
	class Land;
	class Man: Land
	{
		sensitivityEar = 1.0;
	};
	class CAManBase: Man
	{
		sensitivity = 4;
		sensitivityEar = 0.75;
	};
	class SoldierWB: CAManBase
	{
		sensitivity = 5;
		sensitivityEar = 1.0;
	};
	class SoldierEB: CAManBase
	{
		sensitivity = 5;
		sensitivityEar = 1.0;
	};
	class SoldierGB: CAManBase
	{
		sensitivity = 5;
		sensitivityEar = 1.0;
	};
};
