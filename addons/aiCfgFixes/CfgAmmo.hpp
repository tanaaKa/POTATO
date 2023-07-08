class CfgAmmo {
    class Default;
    class RocketCore: Default {
        audibleFire = 32;
    };
    class BulletCore: Default {
        audibleFire = 16;
    };
    class GrenadeCore: Default {
        audibleFire = 0.25;
    };
    class ShellCore: Default {
        audibleFire = 16;
    };
    class SubmunitionCore: Default {
        audibleFire = 16;
    };
    class Grenade: Default {
        audibleFire = 0.25;
    };
    class MissileCore: Default {
        audibleFire = 32;
    };
    class LaserCore: Default {
        audibleFire = 32;
    };
    class TimeBombCore: Default {
        audibleFire = 0;
    };
    class ShotDeployCore: Default {
        audibleFire = 16;
    };
    class ShotgunCore: Default {
        audibleFire = 16;
    };
    class RocketBase: RocketCore {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class R_PG32V_F;
    class rhs_ammo_rpg75_rocket: R_PG32V_F {
        audibleFire = 16;
    };
    class rhs_rpg26_rocket: R_PG32V_F {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
        aiAmmoUsageFlags = "64 + 128 + 256 + 512";
        allowAgainstInfantry = 1;
        cost = 50;
    };
    class BulletBase: BulletCore {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class FakeAmmo: BulletCore {
        audibleFire = 16;
    };
    class potato_bullet_556x45: BulletBase {
        audibleFire = 100;
    };
    class B_127x107_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_762x51_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_556x45_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_9x21_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_35mm_AA: BulletBase {
        audibleFire = 200;
    };
    class B_30mm_AP: BulletBase {
        audibleFire = 200;
    };
    class RHS_Ammo_DIRCM_Vitebsk: BulletBase {
        audibleFire = 0;
    };
    class B_20mm_AP: BulletBase {
        audibleFire = 200;
    };
    class ammo_Gun35mmAABase: BulletBase {
        audibleFire = 200;
    };
    class ammo_Gun30mmAABase: BulletBase {
        audibleFire = 200;
    };
    class ammo_Gun20mmAABase: BulletBase {
        audibleFire = 200;
    };
    class B_570x28_Ball: BulletBase {
        audibleFire = 25;
    };
    class B_93x64_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_127x54_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class B_338_NM_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_338_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class Gatling_30mm_HE_Plane_CAS_01_F: BulletBase {
        audibleFire = 250;
    };
    class B_45ACP_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class B_coil_5g_spike: BulletBase {
        audibleFire = 0.01;
    };
    class B_25mm: BulletBase {
        audibleFire = 200;
    };
    class B_20mm: BulletBase {
        audibleFire = 200;
    };
    class B_19mm_HE: BulletBase {
        audibleFire = 150;
    };
    class B_127x108_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_127x99_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_127x33_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_408_Ball: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_56x15_dual: BulletBase {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class GrenadeBase;
    class FlareCore;
    class SmokeShellCore: GrenadeCore {
        audibleFire = 0.25;
    };
    class G_40mm_HE: GrenadeBase {
        audibleFire = 30;
    };
    class rhs_B_762x39_Ball: B_762x51_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_762x54_Ball: B_762x51_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class ShellBase: ShellCore {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class ACE_HuntIR_Propell: ShellBase {
        audibleFire = 1;
    };
    class R_230mm_fly: ShellBase {
        audibleFire = 64;
    };
    class FH_545x39_Ball: B_556x45_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class SubmunitionBase;
    class VOG25P_SubMunition: SubmunitionBase {
        audibleFire = 6;
    };
    class rhs_ammo_mixed_23x115mm: SubmunitionBase {
        audibleFire = 32;
    };
    class rhs_ammo_gsh30_mixed: SubmunitionBase {
        audibleFire = 32;
    };
    class SubmunitionBullet;
    class rhs_B_9x21_7BT3: B_9x21_Ball {
        audibleFire = 5.65;
    };
    class rhs_B_9x21_7N29: B_9x21_Ball {
        audibleFire = 5.65;
    };
    class rhs_B_9x21_7N28: B_9x21_Ball {
        audibleFire = 5.65;
    };
    class rhs_B_9x18_57N181S: B_9x21_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_9x19_7N21: B_9x21_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_rpg7v2_pg7vl: rhs_rpg26_rocket {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_9x39_SP5: rhs_B_762x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class rhs_B_762x39_U_Ball: rhs_B_762x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
	class rhs_B_545x39_Ball;
    class rhs_B_545x39_7U1_Ball: rhs_B_545x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_1;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_1";
    };
    class rhs_B_545x39_7N24_Ball: rhs_B_545x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_545x39_7N22_Ball: rhs_B_545x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_545x39_7N10_Ball: rhs_B_545x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class rhs_B_545x39_7N6_Ball: rhs_B_545x39_Ball {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class RHS_ammo_23mm_AA: B_35mm_AA {
        audibleFire = 32;
    };
    class rhs_ammo_30x165mm_base: B_30mm_AP {
        audibleFire = 32;
    };
    class rhs_m21OF_fly: R_230mm_fly {
        audibleFire = 64;
    };
    class rhs_ammo_3d17_shell: Grenade {
        audibleFire = 0.05;
    };
    class GrenadeHand: Grenade {
        audibleFire = 0.05;
    };
    class MissileBase: MissileCore {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class M_Mo_82mm_AT;
    class ammo_Missile_CruiseBase: MissileBase {
        audibleFire = 64;
    };
    class M_Mo_120mm_AT;
    class M_Mo_155mm_AT;
    class M_Mo_120mm_AT_LG;
    class M_Mo_230mm_AT: M_Mo_155mm_AT {
        audibleFire = 64;
    };
    class M_Mo_155mm_AT_LG;
    class M_Mo_230mm_AT_LG: M_Mo_155mm_AT_LG {
        audibleFire = 64;
    };
    class FlareBase;
    class F_40mm_White: FlareBase {
        audibleFire = 20;
    };
    class B_30mm_HE: B_19mm_HE {
        audibleFire = 200;
    };
    class B_762x51_Minigun_Tracer_Red: SubmunitionBullet {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class B_65x39_Minigun_Caseless: SubmunitionBullet {
        audibleFire = AI_AUDIBLE_FIRE_0;
        GVAR(macroUsed) = "AI_AUDIBLE_FIRE_0";
    };
    class R_80mm_HE;
    class potato_aiCfgFixes_he_rocket: R_80mm_HE {
        aiAmmoUsageFlags = "64 + 128 + 512";
        allowAgainstInfantry = 1;
        cost = 100;
    };
};

