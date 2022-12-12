////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.10
//https://mikero.bytex.digital/Downloads
//'now' is Sun Dec 11 23:20:02 2022 : 'file' last modified on Sat Oct 01 11:06:58 2022
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class potato_filledSmoke
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 2.04;
		requiredAddons[] = {"potato_core","rhs_c_weapons"};
		author = "Potato";
		authors[] = {"AACO"};
		authorUrl = "https://github.com/BourbonWarfare/POTATO";
		version = "1.3.16.0";
		versionStr = "1.3.16.0";
		versionAr[] = {1,3,16,0};
		ammo[] = {"SmokeShell","SmokeShellArty","rhs_ammo_rdg2_white","rhs_ammo_rdg2_black"};
	};
};
class CfgCloudlets
{
	class SmokeShellWhiteSmall;
	class potato_filledSmoke_SmokeShellWhiteFilled: SmokeShellWhiteSmall
	{
		animationSpeedCoef = 0.75;
		colorCoef[] = {"colorR","colorG","colorB",3};
		sizeCoef = 2;
		interval = 0.13;
		lifeTime = 22;
		moveVelocity[] = {0,0.1,0};
		weight = 6.4;
		volume = 5;
	};
};
class potato_filledSmoke_bigSmoke
{
	class SmokeShellWhite
	{
		simulation = "particles";
		type = "potato_filledSmoke_SmokeShellWhiteFilled";
		position[] = {0,0,0};
		intensity = 5;
		interval = 0.333;
	};
};
class CfgAmmo
{
	class GrenadeHand;
	class SmokeShell: GrenadeHand
	{
		effectsSmoke = "potato_filledSmoke_bigSmoke";
	};
	class SmokeShellArty: SmokeShell
	{
		effectsSmoke = "potato_filledSmoke_bigSmoke";
	};
	class rhs_ammo_rdg2_white: SmokeShell
	{
		effectsSmoke = "potato_filledSmoke_bigSmoke";
	};
	class rhs_ammo_rdg2_black: rhs_ammo_rdg2_white
	{
		effectsSmoke = "potato_filledSmoke_bigSmoke";
	};
};
