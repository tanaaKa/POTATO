//pragma SKIP_COMPILE
/*
    SettingName <STRING>
    Value <ANY>
    Force (can't be changed by mission or user) <BOOL>
    Skip warning if changed by mission <BOOL>
*/

_settings = [
	// ACE Ballistics
	[QACEGVAR(advanced_ballistics,enabled), false, true],

	// ACE Advanced fatigue
	[QACEGVAR(advanced_fatigue,enabled), false, true],
	[QACEGVAR(advanced_fatigue,enableStaminaBar), false, true],

	// ACE Advanced Vehicle Damage
	[QACEGVAR(vehicle_damage,enabled), true, true],
	[QACEGVAR(vehicle_damage,removeAmmoDuringCookoff), true, true],

	// ACE Casings
	[QACEGVAR(casings,enabled), true, true],
	[QACEGVAR(casings,maxCasings), 250, true],

	// ACE Cook off
	[QACEGVAR(cookoff,enabled), true, true],
	[QACEGVAR(cookoff,enableAmmobox), true, true],
	[QACEGVAR(cookoff,ammoCookoffDuration), 0.15, true],
	[QACEGVAR(cookoff,destroyVehicleAfterCookoff), true, true],
	[QACEGVAR(cookoff,enableAmmoCookoff), true, true],
	[QACEGVAR(cookoff,enableFire), true, true],
	[QACEGVAR(cookoff,probabilityCoef), 0.75, true],

	// ACE Crew Served Weapons
	[QACEGVAR(csw,ammoHandling), 1, true],
	[QACEGVAR(csw,defaultAssemblyMode), true, true],
	[QACEGVAR(csw,handleExtraMagazines), true, true],
	[QACEGVAR(csw,handleExtraMagazinesType), 1, true],

	// ACE Dragging
	[QACEGVAR(dragging,dragAndFire), false, true],

	// ACE Fortify
	[QACEGVAR(fortify,markObjectsOnMap), 1, true],
	[QACEGVAR(fortify,timeCostCoefficient), 0, true],
	[QACEGVAR(fortify,timeMin), 0, true],
	[QACEGVAR(fortify,settingHint), 1, true],

	// ACE Fragmentation Simulation
	[QACEGVAR(frag,enabled), true, true],
	[QACEGVAR(frag,maxTrack), 2, true],
	[QACEGVAR(frag,maxTrackPerFrame), 5, true],
	[QACEGVAR(frag,reflectionsEnabled), true, true],
	[QACEGVAR(frag,spallEnabled), true, true],

	// ACE G-Forces
	[QACEGVAR(gforces,enabledFor), 0, true],
	[QACEGVAR(gforces,coef), true, true],

	// ACE Grenades
	[QACEGVAR(grenades,convertExplosives), true, true],

	// ACE Hearing
	[QACEGVAR(hearing,autoAddEarplugsToUnits), false, true],
	[QACEGVAR(hearing,disableEarRinging), true, true],
	[QACEGVAR(hearing,enableCombatDeafness), false, true],
	[QACEGVAR(hearing,enabledForZeusUnits), false, true],

	// ACE Interaction
	[QACEGVAR(interaction,disableNegativeRating), true, true],
	[QACEGVAR(interaction,enableGroupRenaming), false, true],
	[QACEGVAR(interaction,enableMagazinePassing), false, true],
	[QACEGVAR(interaction,enableTeamManagement), true, true],
	[QACEGVAR(interaction,enableWeaponAttachments), false, true],
	[QACEGVAR(interaction,interactWithTerrainObjects), false, true],
	[QACEGVAR(interact_menu,menuAnimationSpeed), 2, true],

	// ACE Logistics
	[QACEGVAR(cargo,enable), false, true],
	[QACEGVAR(cargo,carryAfterUnload), true, true],
	[QACEGVAR(cargo,enableRename), true, true],
	[QACEGVAR(cargo,loadTimeCoefficient), 5, true],
	[QACEGVAR(cargo,openAfterUnload), 3, true],
	[QACEGVAR(cargo,paradropTimeCoefficent), 2.5, true],

	[QACEGVAR(rearm,distance), 20, true],
	[QACEGVAR(rearm,level), 2, true],
	[QACEGVAR(rearm,supply), 1, true],
	[QACEGVAR(refuel,hoseLength), 20, true],
	[QACEGVAR(refuel,progressDuration), 2, true],
	[QACEGVAR(refuel,rate), 10, true],
	[QACEGVAR(repair,addSpareParts), true, true],
	[QACEGVAR(repair,autoShutOffEngineWhenStartingRepair), true, true],
	[QACEGVAR(repair,toolKit), 0, true],
	[QACEGVAR(repair,displayTextOnRepair), true, true],
	[QACEGVAR(repair,engineerSetting_fullRepair), false, true],
	
	// ACE Magazine Repack
	[QACEGVAR(magazinerepack,repackAnimation), true, true],
	[QACEGVAR(magazinerepack,repackLoadedMagazines), true, true],
	[QACEGVAR(magazinerepack,timePerAmmo), 1.5, true],
	[QACEGVAR(magazinerepack,timePerBeltLink), 8, true],
	[QACEGVAR(magazinerepack,timePerMagazine), 2, true],

	// ACE Map
	[QACEGVAR(map,DefaultChannel), 1, true],
	[QACEGVAR(map,mapGlow), true, true],
	[QACEGVAR(map,mapIllumination), true, true],
	[QACEGVAR(map,mapLimitZoom), false, true],
	[QACEGVAR(map,mapShake), true, true],
	[QACEGVAR(map,mapShowCursorCoordinates), false, true],
	[QACEGVAR(markers,moveRestriction), 0, true],
	[QACEGVAR(markers,timestampEnabled), true, true],
	[QACEGVAR(markers,timePerBeltLink), "HH:MM", true],
	[QACEGVAR(markers,timePerMagazine), 24, true],

	// ACE Map Gestures
	[QACEGVAR(map_gestures,enabled), true, true],
	[QACEGVAR(map_gestures,allowCurator), true, true],
	[QACEGVAR(map_gestures,allowSpectator), true, true],
	[QACEGVAR(map_gestures,briefingMode), 0, true],
	[QACEGVAR(map_gestures,interval), 0.03, true],
	[QACEGVAR(map_gestures,maxRange), 7, true],
	[QACEGVAR(map_gestures,maxRangeCamera), 14, true],
	[QACEGVAR(map_gestures,onlyShowFriendlys), false, true],

	// ACE Medical:
	[QACEGVAR(medical,enableVehicleCrashes), false, true],
	[QACEGVAR(medical,fractures), 1, true],
	[QACEGVAR(medical,bleedingcoefficient), 0.4, true], // default: 1.0 (also set in mission.sqm) [forced to override old bwmf]
	[QACEGVAR(medical,ivFlowRate), 2.5], // default: 1.0
	[QACEGVAR(medical,spontaneousWakeUpChance), 0.25, true], // default: 0.05
	[QACEGVAR(medical,spontaneousWakeUpEpinephrineBoost), 2, true], // default: 1
	[QACEGVAR(medical,deathChance), 1, true],
	[QACEGVAR(medical,fatalDamageSource), 2, true],
	[QACEGVAR(medical,fractureChance), 0.4, true],
	[QACEGVAR(medical,painCoefficient), 1.3, true],
	[QACEGVAR(medical,painUnconsciousChance), 0.3, true],
	[QACEGVAR(medical_treatment,advancedDiagnose), 1, true], // default: 1 (Allows diagnosing death/CA)
	[QACEGVAR(medical_treatment,clearTrauma), 0, true], // default: 0
	[QACEGVAR(medical_treatment,litterCleanupDelay), 300, true], // default: 600
	[QACEGVAR(medical_treatment,cprSuccessChanceMin), 0.4, true], // default: 0.4
	[QACEGVAR(medical_treatment,cprSuccessChanceMax), 0.85, true], // default: 0.4
	[QACEGVAR(medical_statemachine,AIUnconsciousness), false, true], // default: true
	[QACEGVAR(medical_statemachine,cardiacArrestTime), 600, true], // default: 30
	[QACEGVAR(medical_statemachine,fatalInjuriesAI), 0, true], // default: 0
	[QACEGVAR(medical_statemachine,fatalInjuriesPlayer), 0, true], // default: 0
	[QACEGVAR(medical_treatment,advancedBandages), 1, true], // default: 0
	[QACEGVAR(medical_treatment,advancedMedication), true, true], // default: true
	[QACEGVAR(medical,limping), 1, true], // default: 1
	[QACEGVAR(medical_treatment,allowSelfIV), 1, true], // default: true
	[QACEGVAR(medical_treatment,woundReopenChance), 0.69, true], // default: who fuckin knows eh bud

	// ACE Medical Extras:
	[QACEGVAR(medical_ai,enabledFor), 0, true],
	[QACEGVAR(medical_blood,enabledFor), 2],
	[QACEGVAR(medical_treatment,holsterRequired), 1, true],
	[QACEGVAR(medical,playerDamageThreshold), 2, true],
	[QACEGVAR(medical,AIDamageThreshold), 0.3, true],
	[QACEGVAR(medical_feedback,painEffectType), 1, true],
	[QACEGVAR(medical_feedback,bloodVolumeEffectType), 0, true],

	// ACE Medical GUI
	[QACEGVAR(medical_gui,enableActions), 2, true],
	[QACEGVAR(medical_gui,enableMedicalMenu), 1, true],
	[QACEGVAR(medical_gui,enableSelfActions), false, true],
	[QACEGVAR(medical_gui,interactionMenuShowTriage), 1, true],
	[QACEGVAR(medical_gui,maxDistance), 3, true],
	[QACEGVAR(medical_gui,openAfterTreatment), true, true],

	// ACE Name Tags
	[QACEGVAR(nametags,showPlayerNames), 0, true],
	[QACEGVAR(nametags,showPlayerRanks), false, true],

	// ACE Nightvision
	[QACEGVAR(nightvision,effectScaling), 0.4, true, true],
	[QACEGVAR(nightvision,fogScaling), 0, true, true],
	[QACEGVAR(nightvision,noiseScaling), 0.3, true, true],
	[QACEGVAR(nightvision,aimDownSightsBlur), 0.25, true, true],
	[QACEGVAR(nightvision,disableNVGsWithSights), false, true, true],
	[QACEGVAR(nightvision,shutterEffects), false, true, true],

	// ACE Overheating
	[QACEGVAR(overheating,enabled), true, true, true],
	[QACEGVAR(overheating,cookoffCoef), 0, true, true],
	[QACEGVAR(overheating,coolingCoef), 1, true, true],
	[QACEGVAR(overheating,heatCoef), 1, true, true],
	[QACEGVAR(overheating,jamChanceCoef), 1, true, true],
	[QACEGVAR(overheating,overheatingDispersion), true, true, true],
	[QACEGVAR(overheating,overheatingRateOfFire), true, true, true],
	[QACEGVAR(overheating,showParticleEffects), true, true, true],
	[QACEGVAR(overheating,showParticleEffectsForEveryone), false, true, true],
	[QACEGVAR(overheating,unJamOnreload), false, true, true],
	[QACEGVAR(overheating,unJamOnSwapBarrel), false, true, true],
	[QACEGVAR(overheating,unJamFailChance), 0.1, true, true],

	// ACE Point
	[QACEGVAR(finger,enabled), true, true, true],
	[QACEGVAR(finger,indicatorColor), [0.83,0.0161948,0,0.75], true],
	[QACEGVAR(finger,proximityScaling), true, true, true],
	[QACEGVAR(finger,sizeCoef), 1, true, true],
	
	// ACE Quick mount
	[QACEGVAR(quickmount,distance), 3, true],
	[QACEGVAR(quickmount,enabled), true, true], 
	[QACEGVAR(quickmount,enableMenu), 0, true], 
	[QACEGVAR(quickmount,priority), 0],
	[QACEGVAR(quickmount,speed), 10, true],
	
	// ACE Respawn
	[QACEGVAR(respawn,removeDeadBodiesDisconnected), false, true],

	// ACE Throwing
	[QACEGVAR(advanced_throwing,enabled), true, true],

	// ACE Uncat
	[QACEGVAR(fastroping,requireRopeItems), false, true],
	[QACEGVAR(hitreactions,minDamageToTrigger), 0.1, true],
	[QACEGVAR(laser,showLaserOnMap), 3, true],
	[QACEGVAR(noradio,enabled), true, true],
	[QACEGVAR(marker_flags,placeAnywhere), true, true],
	[QACEGVAR(overpressure,distanceCoefficient), 0.5, true],

	// ACE UI
	[QACEGVAR(ui,ammoCount), false, true], // Forced because it's User settable
	[QACEGVAR(ui,groupBar), false, true], // Forced because it's User settable

	// ACE Vehicle Lock
	[QACEGVAR(vehiclelock,lockVehicleInventory), true, true],
	[QACEGVAR(vehiclelock,vehicleStartingLockState), 1, true],

	// ACE Vehicles
	[QACEGVAR(novehicleclanlogo,enabled), true, true],
	[QACEGVAR(vehicles,keepEngineRunning), false, true],
	[QACEGVAR(viewports,enabled), true, true],

	// ACE View Distance Limiter
	[QACEGVAR(viewdistance,enabled), true, true],

	// ACE Weather
	[QACEGVAR(weather,enabled), false],
	[QACEGVAR(weather,showCheckAirTemperature), false],

	// ACE Wind Deflection
	[QACEGVAR(winddeflection,enabled), true, true],
	[QACEGVAR(winddeflection,simulationInterval), 0.05, true],
	[QACEGVAR(winddeflection,vehicleEnabled), true, true],

	// ACE Zeus
	[QACEGVAR(zeus,autoAddObjects), true],

	// ACRE2
	["acre_sys_core_fullDuplex", true, false],
	["acre_sys_core_ts3ChannelName", "In-game (ACRE)", true],
	["acre_sys_core_ts3ChannelSwitch", true, true],
	["acre_sys_core_unmuteClients", true, true],
	["acre_sys_gestures_enabled", true, true],
	["acre_sys_gestures_stopADS", true, true],
	["acre_sys_zeus_zeusCanSpectate", true, true],
	["acre_sys_zeus_zeusCommunicateViaCamera", true, true],
	["acre_sys_zeus_zeusDefaultVoiceSource", true, true],

	// Better CAS Environment (Server)
	["BCE_AI_CAS_Support_fn", true, true],
	["BCE_AIAir_IR_fn", true, true],
	["BCE_inf_IR_Lig_S_fn", true, true],
	["BCE_LandVeh_Laser_fn", true, true],
	["BCE_LandVeh_Light_fn", true, true],
	["BCE_veh_IR_S_fn", true, true],

	// FoxHole
	["J3FF_FHcover", "30", true],
	["J3FF_FHcustomItem", false, true],
	["J3FF_FHdepth", "2", true],
	["J3FF_FHdig", "45", true],

	// GRAD Trenches
	["grad_trenches_functions_allowCamouflage", true, true],
	["grad_trenches_functions_allowDigging", true, true],
	["grad_trenches_functions_allowEffects", true, true],
	["grad_trenches_functions_allowHitDecay", true, true],
	["grad_trenches_functions_allowTrenchDecay", true, true],
	["grad_trenches_functions_buildFatigueFactor", 1, true],
	["grad_trenches_functions_camouflageRequireEntrenchmentTool", false, true],
	["grad_trenches_functions_createTrenchMarker", true, true],
	["grad_trenches_functions_decayTime", 1800, true],
	["grad_trenches_functions_hitDecayMultiplier", 1, true],
	["grad_trenches_functions_playersInAreaRadius", 200, true],
	["grad_trenches_functions_stopBuildingAtFatigueMax", false, true],
	["grad_trenches_functions_timeoutToDecay", 7200, true],


	// IFX - ACE3 Window Break
	["IFX_ACE3WindowBreak_setting_allowInvincible", true, true],
	["IFX_ACE3WindowBreak_setting_audibleDistance", 8, true],
	["IFX_ACE3WindowBreak_setting_enabled", true, true],
	["IFX_ACE3WindowBreak_setting_interactionDistance", 2, true],

	// Improved Craters
	["IC_setting_allowAdjustObjects", true, true],
	["IC_setting_allowDebris", false, true],
	["IC_setting_allowGroundTextures", true, true],
	["IC_setting_allowSmallExplosions", false, true],
	["IC_setting_limitDebris", true, true],
	["IC_setting_limitGroundTextures", true, true],
	["IC_setting_maxDebris", 10, true],
	["IC_setting_maxDebrisCountPerCrater", 1, true],
	["IC_setting_maxGroundTextures", 100, true],
	
	// Improved Melee System (Server Settings)
	["IMS_BluntWeapon", true, false],
	["IMS_isFistsAllowd", false, false],
	["IMS_isImsCanHitAllies", false, false],
	["IMS_isStaticDeaths", false, false],
	["IMS_RifleDodgeSet", false, false],
	["IMS_WBK_CUSTOMCAMSERVER", false, false],
	["IMS_WBK_MAINFPTP", true, false],

	// KAT - ADV Medical: Airway
	["kat_airway_enable", true, true],
	["kat_airway_Accuvac_time", 8, true],
	["kat_airway_autoTriage", true, true],
	["kat_airway_CancelRecoveryPosition_Time", 6, true],
	["kat_airway_CheckAirway_time", 2, true],
	["kat_airway_checkbox_puking_sound", true, true],
	["kat_airway_Colored_logs", true, true],
	["kat_airway_Guedeltubus_time", 6, true],
	["kat_airway_Larynxtubus_time", 3, true],
	["kat_airway_medLvl_Accuvac", 1, true],
	["kat_airway_medLvl_Larynxtubus", 1, true],
	["kat_airway_occlusion_repeatTimer", 60, true],
	["kat_airway_Overstretch_time", 3, true],
	["kat_airway_probability_headturning", 50, true],
	["kat_airway_probability_obstruction", 15, true],
	["kat_airway_probability_occluded", 10, true],
	["kat_airway_RecoveryPosition_Time", 6, true],
	["IMS_RifleDokat_airway_ReusableAirwayItemsdgeSet", false, true],
	["kat_airway_string_exit", "", true],
	["kat_airway_TurnAround_time", 2, true],

	// KAT - ADV Medical: Breathing
	["kat_breathing_enable", true, true],
	["kat_breathing_advPtxChance", 5, true],
	["kat_breathing_advPtxEnable", false, true],
	["kat_breathing_BVMTime", 15, true],
	["kat_breathing_cyanosisShowInMenu", false, true],
	["kat_breathing_deterioratingPneumothorax_chance", 10, true],
	["kat_breathing_deterioratingPneumothorax_countdown", 120, true],
	["kat_breathing_enable_selfChestseal", 1, true],
	["kat_breathing_enableCyanosis", true, true],
	["kat_breathing_enableSPO2Flashing", true, true],
	["kat_breathing_HPTXBleedAmount", 0.06, true],
	["kat_breathing_hptxChance", 5, true],
	["kat_breathing_lowSPO2Level", 90, true],
	["kat_breathing_medLvl_BVM", 1, true],
	["kat_breathing_medLvl_BVM_Oxygen", 1, true],
	["kat_breathing_medLvl_Chestseal", 0, true],
	["kat_breathing_medLvl_Cyanosis", 0, true],
	["kat_breathing_medLvl_hemopneumothoraxTreatment", 1, true],
	["kat_breathing_medLvl_PocketBVM", 1, true],
	["kat_breathing_medLvl_Pulseoximeter", 0, true],
	["kat_breathing_mildValue", 80, true],
	["kat_breathing_pneumothorax_hardcore", true, true],
	["kat_breathing_pneumothoraxChance", 5, true],
	["kat_breathing_pneumothoraxDamageThreshold", 0.4, true],
	["kat_breathing_PortableOxygenTank_RefillTime", 5, true],
	["kat_breathing_PulseOximeter_SpO2Warning", 85, true],
	["kat_breathing_severeValue", 70, true],
	["kat_breathing_showPneumothorax_dupe", false, true],
	["kat_breathing_slightValue", 90, true],
	["kat_breathing_SpO2_dieActive", true, true],
	["kat_breathing_SpO2_dieValue", 65, true],
	["kat_breathing_SpO2_MultiplyNegative", 1, true],
	["kat_breathing_SpO2_MultiplyPositive", 1, true],
	["kat_breathing_SpO2_perfusion", true, true],
	["kat_breathing_SpO2_PerfusionMultiplier", 1, true],
	["kat_breathing_SpO2_unconscious", 75, true],
	["kat_breathing_Stable_spo2", 85, true],
	["kat_breathing_staminaLossAtLowSPO2", true, true],
	["kat_breathing_stethoscopeListeningTime", 10, true],
	["kat_breathing_tensionhemothorax_hardcore", true, true],

	// KAT - ADV Medical: Circulation
	["kat_circulation_bloodGroups", false, true],
	["kat_circulation_enable", false, true],
	["kat_circulation_enable_CPR_Chances", false, true],

	// KAT - ADV Medical: Misc
	["kat_misc_arsenalMedCategory", true, true],
	["kat_misc_enable", true, true],
	["kat_misc_incompatibilityWarning", true, true],
	["kat_misc_neckTourniquet", false, true],
	["kat_misc_treatmentTimeDetachTourniquet", 7, true],

	// KAT - ADV Medical: Pharmacy
	["kat_pharma_chromatic_aberration_checkbox_fentanyl", true, true],
	["kat_pharma_chromatic_aberration_checkbox_ketamine", true, true],
	["kat_pharma_chromatic_aberration_checkbox_pervitin", true, true],
	["kat_pharma_ivCheckLimbDamage", true, true],
	["kat_pharma_IVdropEnable", false, true],
	["kat_pharma_IVreuse", false, true],
	["kat_pharma_kidneyAction", false, true],
	["kat_pharma_MedicationsRequireInsIV", true, true],
	["kat_pharma_medLvl_Amiodarone", 1, true],
	["kat_pharma_medLvl_ApplyIO", 1, true],
	["kat_pharma_medLvl_ApplyIV", 1, true],
	["kat_pharma_medLvl_Atropine", 1, true],
	["kat_pharma_medLvl_Carbonate", 1, true],
	["kat_pharma_medLvl_EACA", 1, true],
	["kat_pharma_medLvl_Etomidate", 1, true],
	["kat_pharma_medLvl_Fentanyl", 1, true],
	["kat_pharma_medLvl_Flumezenil", 1, true],
	["kat_pharma_medLvl_Ketamine", 1, true],
	["kat_pharma_medLvl_Lidocaine", 1, true],
	["kat_pharma_medLvl_Lorazepam", 1, true],
	["kat_pharma_medLvl_Nalbuphine", 1, true],
	["kat_pharma_medLvl_Naloxone", 1, true],
	["kat_pharma_medLvl_Nitroglycerin", 1, true],
	["kat_pharma_medLvl_Norepinephrine", 1, true],
	["kat_pharma_medLvl_Pervitin", 0, true],
	["kat_pharma_medLvl_Phenylephrine", 1, true],
	["kat_pharma_medLvl_Reorientation", 0, true],
	["kat_pharma_medLvl_TXA", 1, true],
	["kat_pharma_medLvl_Lidocaine", 1, true],
	["kat_pharma_medLvl_Lorazepam", 1, true],
	["kat_pharma_medLvl_Nalbuphine", 1, true],
	["kat_pharma_medLvl_Naloxone", 1, true],
	["kat_pharma_pervitinSpeed", 1.15, true],
	["kat_pharma_Reorientation_Enable", true, true],
	["kat_pharma_Reorientation_Slap", true, true],
	["kat_pharma_RequireInsIV", true, true],
	["kat_pharma_weapon_sway_pervitin", true, true],

	// KAT - ADV Medical: Surgery
	["kat_surgery_enable_fracture", false, true],

	// LAMBS Danger
	["lambs_danger_cqbRange", 200, true],
	["lambs_danger_disableAIAutonomousManoeuvres", false, true],
	["lambs_danger_disableAIDeployStaticWeapons", false, true],
	["lambs_danger_disableAIFindStaticWeapons", false, true],
	["lambs_danger_disableAIHideFromTanksAndAircraft", true, true],
	["lambs_danger_disableAIPlayerGroup", false, true],
	["lambs_danger_disableAIPlayerGroupReaction", false, true],
	["lambs_danger_disableAIPlayerGroupReaction", false, true],
	["lambs_danger_disableAutonomousFlares", false, true],
	["lambs_danger_disableAutonomousSmokeGrenades", false, true],
	["lambs_danger_panicChance", 0.1, true],

	// LAMBS Danger Eventhandlers
	["lambs_eventhandlers_ExplosionEventHandlerEnabled", true, true],
	["lambs_eventhandlers_ExplosionReactionTime", 9, true],

	// LAMBS Danger WP
	["lambs_wp_autoAddArtillery", true, true],

	// LAMBS Main
	["lambs_main_combatShareRange", 200, true],
	["lambs_main_disableAICallouts", true, true],
	["lambs_main_disableAIDodge", false, true],
	["lambs_main_disableAIFleeing", false, true],
	["lambs_main_disableAIGestures", true, true],
	["lambs_main_disableAutonomousMunitionSwitching", false, true],
	["lambs_main_indoorMove", 0.3, true],
	["lambs_main_maxRevealValue", 1, true],
	["lambs_main_minFriendlySuppressionDistance", 0, true],
	["lambs_main_minObstacleProximity", 5, true],
	["lambs_main_minSuppressionRange", 1, true],

	// Laxemann Immerse
	["L_Immerse_exShake", true, true],
	["L_Immerse_force", false, true],
	["L_Immerse_recoil", false, true],
	["L_Immerse_twitch", true, true],

	// LAxemann's Suppress
	["L_Suppress_buildup", 0.6, true],
	["L_Suppress_enabled", true, true],
	["L_Suppress_flyByEffects", true, true],
	["L_Suppress_flyByIntensity", 1, true],
	["L_Suppress_halting", true, true],
	["L_Suppress_intensity", 0.6, true],
	["L_Suppress_playerSwabEnabled", false, true],
	["L_Suppress_recovery", 1.5, true],

	// Recoil coefficient changer
	["RECOIL_accumulative_on", 1.02, false],
	["RECOIL_AI_on", false, false],
	["RECOIL_force_on", 50, false],
	["RECOIL_handgun_on", true, false],
	["RECOIL_incrase_on", 1.2, false],
	["RECOIL_limit_on", 2, false],
	["RECOIL_loop_on", true, false],
	["RECOIL_negative_on", 0, false],
	["RECOIL_new_on", true, false],
	["RECOIL_random_on", true, false],
	["RECOIL_randomMax_on", 1.4, false],
	["RECOIL_randomMid_on", 1.1, false],
	["RECOIL_randomMin_on", -1, false],
	["RECOIL_Smooth_on", true, false],
	["RECOIL_variety_on", true, false],
	["SWAY_incrase_on", 1, false],

	// TSP Animate
	["tsp_cba_animate_door", false, true],
	["tsp_cba_animate_dynamicReadyBush", true, true],
	["tsp_cba_animate_dynamicReadyFriend", 3, true],
	["tsp_cba_animate_dynamicReadyFriendAngle", 35, true],
	["tsp_cba_animate_dynamicReadyObject", 1.5, true],
	["tsp_cba_animate_dynamicReadyPoll", 0.25, true],
	["tsp_cba_animate_dynamicReadyVertical", -0.1, true],
	["tsp_cba_animate_friendsAreObjects", false, true],
	["tsp_cba_animate_map", true, true],
	["tsp_cba_animate_nvg", true, true],
	["tsp_cba_sound_inv", true, true],
	["tsp_cba_sound_map", false, true],
	["tsp_cba_throw", true, true],
	["tsp_cba_throw_uncon", 0.2, true],

	// TSP Breach
	["tsp_cba_breach", true, true],
	["tsp_cba_breach_ace", true, true],
	["tsp_cba_breach_ace_locking", true, true],
	["tsp_cba_breach_autoTime", 5, true],
	["tsp_cba_breach_lockDoor", 0.5, true],
	["tsp_cba_breach_lockHouse", 0.15, true],
	["tsp_cba_breach_vanilla", true, true]
];


