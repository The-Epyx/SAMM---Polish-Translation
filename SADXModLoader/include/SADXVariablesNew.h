/**
 * SADX Mod Loader.
 * SADX variables based on symbols.
 */

#ifndef SADXMODLOADER_SADXVARSNEW_H
#define SADXMODLOADER_SADXVARSNEW_H

#include "MemAccess.h"
#include "d3d8types.h"
#include "SADXStructsNew.h"

// General
DataPointer(float, late_z_ofs___, 0x3ABD9C0); // Draw queue depth bias for models
DataPointer(__int16, ssGameMode, 0x3B22DE4); // GameState
DataPointer(int, loop_count, 0x3B1117C); // MissedFrames
DataPointer(int, loop_const, 0x3B11178); // Frame increment
DataPointer(Uint32, ulGlobalTimer, 0x3B0F13C); // FrameCounter
DataPointer(Uint32, gu32GameCnt, 0x3ABDF58); // FrameCounter2
DataPointer(Uint32, gu32LocalCnt, 0x3ABDF5C); // FrameCounterUnpaused
DataArray(TaskFuncPtr, RoundMasterList, 0x90BF38, 44); // Level tasks
DataArray(TaskFuncPtr, ScrollMasterList, 0x90C1F0, 44); // Skybox tasks
DataArray(PL_KILLCOLLI**, KillingCollisionModelsListList, 0x915908, 43);
DataArray(_OBJ_LANDTABLE*, objLandTable, 0x97DA08, 120);
DataPointer(___stcFog, gFog, 0x3ABDC60);
DataPointer(___stcClip, gClipMap, 0x3ABDC70);
DataPointer(___stcClip, gClipSky, 0x3ABDCA0);
DataPointer(int, GameTimer, 0x3B0F108);
DataPointer(__int16, ssStageNumber, 0x3B22DCC); // CurrentLevel
DataPointer(int, ssActNumber, 0x3B22DEC); // CurrentAct
DataPointer(int, BlockMask, 0x3B36D48); // Mask to show/hide level geometry with blockbit

// Player
DataArray(player_parameter, playerwk_default, 0x9154E8, 8);
DataArray(task*, playertp, 0x3B42E30, 8);
DataArray(taskwk*, playertwp, 0x3B42E10, 8);
DataArray(motionwk2*, playermwp, 0x3B36DD0, 8);
DataArray(playerwk*, playerpwp, 0x3B3CDF0, 8);

// Light
DataArray(LE_PALIGHT_ENV, le_plyrPal, 0x903E88, 255); // Character lights
DataArray(LE_LIGHT_ENV, le_stgPL, 0x900918, 30); // Unused stage lights array
DataArray(LE_LIGHT_ENV, le_stg, 0x900E88, 255); // Stage lights
DataPointer(LE_LIGHT_ENV, le_env_dflt, 0x9008B4); // Default stage light
DataPointer(LE_LIGHT_ENV, le_ctrl_dflt, 0x9008E4); // Backup default stage light

// Story sequence
DataPointer(int, slSeqRunning, 0x90A0A8); // Story running if 1
DataPointer(short, ssSceneNo, 0x3B18A24); // Story ID
DataArray(SEQUENCE, seqTable, 0x03B183A8, 8); // Character story data array
DataPointer(SEQUENCE*, pCurSequence, 0x3B0EF4C); // Current character story data
DataPointer(SEQ_SECTIONTBL*, pCurSectionList, 0x3B18A08); // Character story sections array
DataPointer(SEQ_SECTION*, pCurSection, 0x3B18DB0); // Current story section

// Geometry collision
DataArray(uint8_t, boolMobileLandObject, 0x3B2D410, 256);
DataArray(obj, objMobileLandObject, 0x3B33930, 256);
DataPointer(uint16_t, numMobileEntry, 0x3B2D510);
DataArray(_OBJ_LANDCOLL, MobileEntry, 0x3B32D30, 256);

// Path
DataArray(pathgrp, pathgrp_tbl, 0x91A858, 22);     // List of null-terminated path list
DataArray(pathtag*, pathdata_0002, 0x9190F4, 5);
DataArray(pathtag*, pathdata_0100, 0x10363E4, 6);  // Emerald Coast Act 1 paths
DataArray(pathtag*, pathdata_0101, 0x10363FC, 9);  // Emerald Coast Act 2 paths
DataArray(pathtag*, pathdata_0200, 0xC02550, 2);   // Windy Valley Act 1 paths
DataArray(pathtag*, pathdata_0202, 0xC02558, 8);   // Windy Valley Act 3 paths
DataArray(pathtag*, pathdata_0301, 0x26B55DC, 5);  // Twinkle Park Act 2 paths
DataArray(pathtag*, pathdata_0400, 0x26AA508, 5);  // Speed Highway Act 1 paths
DataArray(pathtag*, pathdata_0402, 0x26AA530, 4);  // Speed Highway Act 3 paths
DataArray(pathtag*, pathdata_0500, 0x26AA530, 3);  // Red Mountain Act 1 paths
DataArray(pathtag*, pathdata_0501, 0x24C31B4, 11); // Red Mountain Act 2 paths
DataArray(pathtag*, pathdata_0600, 0x2230F14, 3);  // Sky Deck Act 1 paths
DataArray(pathtag*, pathdata_0700, 0x20343CC, 4);  // Lost World Act 1 paths
DataArray(pathtag*, pathdata_0701, 0x20343DC, 5);  // Lost World Act 2 paths
DataArray(pathtag*, pathdata_0801, 0xE3BDEC, 2);   // Ice Cap Act 2 paths
DataArray(pathtag*, pathdata_0802, 0xE3BDF4, 11);  // Ice Cap Act 3 paths
DataArray(pathtag*, pathdata_0901, 0x1D83980, 9);  // Casinopolis Act 2 paths
DataArray(pathtag*, pathdata_0A00, 0x1A57714, 4);  // Final Egg Act 1 paths
DataArray(pathtag*, pathdata_0A01, 0x1A57700, 3);  // Final Egg Act 2 paths
DataArray(pathtag*, pathdata_0A02, 0x1A57720, 5);  // Final Egg Act 3 paths
DataArray(pathtag*, pathdata_1A00, 0x2BBC468, 4);  // Station Square Act 1 paths
DataArray(pathtag*, pathdata_1300, 0x21422140, 4); // Perfect Chaos paths

// Enemy
DataPointer(int, ComboTimer, 0x3B29D48);
DataPointer(int, ComboScore, 0x3B29D28);
DataPointer(int, EnemyScore, 0x3B0F104);

// Object
DataArray(TEX_PVMTABLE*, ListofPvmList, 0x90EB68, 44); // Object textures
DataArray(_OBJ_ITEMTABLE*, objItemTable, 0x974AF8, 344); // Object lists, 43 levels * 8 acts
DataArray(char, PlayerHoldingItemID, 0x3B36DC8, 8); // Identifier for current held object

// Boss
DataPointer(char, bossmtn_flag, 0x3C5A7EF);

// Camera
DataPointer(taskwk*, camera_twp, 0x3B2CBB0);                 // Camera_Data1
DataArray(_OBJ_CAMERAMODE, CameraMode, 0x975410, 77);        // List of camera modes, see CAMMD enum
DataArray(_OBJ_CAMERAADJUST, CameraAdjust, 0x975410, 28);    // List of camera adjusts (how it switches camera)
DataPointer(_CameraSystemWork, cameraSystemWork, 0x3B2CAD8); // Camera system information (current mode, etc)
DataPointer(_camcontwk, cameraControlWork, 0x3B2C660);       // Camera task information (position, angle, target...)

// Lighting
DataArray(unsigned int[512], LSPAL_0, 0x3B12210, 10);
DataArray(unsigned int, lsPal0_v_forGC, 1024, 0x3B111A8);
DataPointer(NJS_ARGB, lig_argb, 0x3B17210);
DataPointer(float, ls_iamb, 0x3B121AC);
DataPointer(NJS_VECTOR, ds_pool, 0x3B121B4); // Used in normal scaling for some objects
DataPointer(NJS_VECTOR, ds_current, 0x3B121F8); // Used in normal scaling for some objects

// Ocean data
DataArray(NJS_TEXTURE_VTX[35][4], gsaStripPool, 0x3D0B928, 2); // Ocean garbage array
DataArray(stcWaterSurface, gasPoolStat, 0x3D0B8F0, 2); // OceanData A/B
DataArray(stcAnim, cosSaltWaterAnimation, 0x7EC250, 16); // Emerald Coast ocean animations

// Fog data
DataArray(___stcFog*, pFogTable_Stg00, 0x27C6A00, 1);
DataArray(___stcFog*, pFogTable_Stg01, 0xE99E90, 3);
DataArray(___stcFog*, pFogTable_Stg02, 0xAFEAD4, 3);
DataArray(___stcFog*, pFogTable_Stg03, 0x26B3480, 4);
DataArray(___stcFog*, pFogTable_Stg04, 0x24CA598, 3);
DataArray(___stcFog*, pFogTable_Stg05, 0x22407B4, 3);
DataArray(___stcFog*, pFogTable_Stg06, 0x203A148, 3);
DataArray(___stcFog*, pFogTable_Stg07, 0x1E79B60, 3);
DataArray(___stcFog*, pFogTable_Stg08, 0xC67F90, 4);
DataArray(___stcFog*, pFogTable_Stg09, 0x1C46A80, 4);
DataArray(___stcFog*, pFogTable_Stg10, 0x19C90A4, 3);
DataArray(___stcFog*, pFogTable_Stg12, 0x17C3504, 3);
DataArray(___stcFog*, pFogTable_Chaos00, 0x111F76C, 1);
DataArray(___stcFog*, pFogTable_Chaos02, 0x1120674, 1);
DataArray(___stcFog*, pFogTable_Chaos04, 0x118FA3C, 1);
DataArray(___stcFog*, pFogTable_Chaos06, 0x11EF160, 2);
DataArray(___stcFog*, pFogTable_Chaos07, 0x1420EA8, 2);
DataArray(___stcFog*, pFogTable_Egm01, 0x1556B70, 1);
DataArray(___stcFog*, pFogTable_Egm02, 0x15E8830, 1);
DataArray(___stcFog*, pFogTable_Egm03, 0x165D370, 1);
DataArray(___stcFog*, pFogTable_Robo, 0x16B4DEC, 1);
DataArray(___stcFog*, pFogTable_E101, 0x14D5CF4, 1);
DataArray(___stcFog*, pFogTable_E101r, 0x152262C, 1);
DataArray(___stcFog*, pFogTable_Adv00, 0x2AA3E78, 6);
DataArray(___stcFog*, pFogTable_Adv01AB, 0x10F24B0, 7);
DataArray(___stcFog*, pFogTable_Adv01C, 0x1100D80, 6);
DataArray(___stcFog*, pFogTable_Adv02, 0x11035F8, 8);
DataArray(___stcFog*, pFogTable_Adv03, 0x111E63C, 3);
DataArray(___stcFog*, pFogTable_MiniCart, 0x9BF5A4, 6);
DataArray(___stcFog*, pFogTable_Sht, 0x27D6E00, 2);
DataArray(___stcFog*, pFogTable_Sand, 0x173BBB0, 1);

// Level draw distance
//pClipMap_Stg00
DataArray(___stcClip*, pClipMap_Stg01, 0xE99E84, 3);
DataArray(___stcClip*, pClipMap_Stg02, 0xAFEAC8, 3);
DataArray(___stcClip*, pClipMap_Stg03, 0x26B3474, 3);
DataArray(___stcClip*, pClipMap_Stg04, 0x24CA58C, 3);
DataArray(___stcClip*, pClipMap_Stg05, 0x22407A8, 3);
DataArray(___stcClip*, pClipMap_Stg06, 0x203A13C, 3);
DataArray(___stcClip*, pClipMap_Stg07, 0x1E79B54, 3);
DataArray(___stcClip*, pClipMap_Stg08, 0xC67F80, 4);
DataArray(___stcClip*, pClipMap_Stg09, 0x1C46A70, 4);
DataArray(___stcClip*, pClipMap_Stg10, 0x19C9098, 3);
DataArray(___stcClip*, pClipMap_Stg12, 0x17C34F8, 3);
//pClipMap_Chaos00
DataArray(___stcClip*, pClipMap_Chaos02, 0x1120670, 1);
//pClipMap_Chaos04
DataArray(___stcClip*, pClipMap_Chaos06, 0x11EF158, 2);
DataArray(___stcClip*, pClipMap_Chaos07, 0x1420EA0, 2);
DataArray(___stcClip*, pClipMap_Egm01, 0x1556B6C, 1);
DataArray(___stcClip*, pClipMap_Egm02, 0x15E882C, 1);
//pClipMap_Egm03
DataArray(___stcClip*, pClipMap_Robo, 0x16B4DE8, 1);
//pClipMap_E101
DataArray(___stcClip*, pClipMap_E101r, 0x1522628, 1);
DataArray(___stcClip*, pClipMap_Adv00, 0x2AA3E60, 6);
DataArray(___stcClip*, pClipMap_Adv01AB, 0x10F2494, 7);
DataArray(___stcClip*, pClipMap_Adv01C, 0x1100D68, 6);
DataArray(___stcClip*, pClipMap_Adv02, 0x11035E8, 4);
DataArray(___stcClip*, pClipMap_Adv03, 0x111E630, 3);
DataArray(___stcClip*, pClipMap_MiniCart, 0x9BF58C, 3);
DataArray(___stcClip*, pClipMap_Sht, 0x27D6DF8, 2);
DataArray(___stcClip*, pClipMap_Sand, 0x173BBAC, 1);

// Sky draw distance
//pClipSky_Stg00
DataArray(___stcClip*, pClipSky_Stg01, 0xE99E78, 3);
DataArray(___stcClip*, pClipSky_Stg02, 0xAFEABC, 3);
DataArray(___stcClip*, pClipSky_Stg03, 0x26B3468, 3);
DataArray(___stcClip*, pClipSky_Stg04, 0x24CA580, 3);
DataArray(___stcClip*, pClipSky_Stg05, 0x224079C, 3);
DataArray(___stcClip*, pClipSky_Stg06, 0x203A130, 3);
DataArray(___stcClip*, pClipSky_Stg07, 0x1E79B48, 3);
DataArray(___stcClip*, pClipSky_Stg08, 0xC67F70, 4);
//pClipSky_Stg09
DataArray(___stcClip*, pClipSky_Stg10, 0x19C908C, 3);
DataArray(___stcClip*, pClipSky_Stg12, 0x17C34EC, 3);
//pClipSky_Chaos00
DataArray(___stcClip*, pClipSky_Chaos02, 0x112066C, 1);
//pClipSky_Chaos04
//pClipSky_Chaos06
//pClipSky_Chaos07
//pClipSky_Egm01
DataArray(___stcClip*, pClipSky_Egm02, 0x15E8828, 1);
//pClipSky_Egm03
//pClipSky_Robo
//pClipSky_E101
//pClipSky_E101r
DataArray(___stcClip*, pClipSky_Adv00, 0x2AA3E48, 6);
DataArray(___stcClip*, pClipSky_Adv01AB, 0x10F2478, 7);
DataArray(___stcClip*, pClipSky_Adv01C, 0x1100D50, 6);
//pClipSky_Adv02
//pClipSky_Adv03
DataArray(___stcClip*, pClipSky_MiniCart, 0x9BF574, 3);
//pClipSky_Sht
DataArray(___stcClip*, pClipSky_Sand, 0x173BB44, 1);

// Skybox scale
//pScale_Stg00
DataArray(NJS_POINT3*, pScale_Stg01, 0xE99E6C, 3);
DataArray(NJS_POINT3*, pScale_Stg02, 0xAFEAB0, 3);
DataArray(NJS_POINT3*, pScale_Stg03, 0x26B345C, 3);
DataArray(NJS_POINT3*, pScale_Stg04, 0x24CA574, 3);
DataArray(NJS_POINT3*, pScale_Stg05, 0x2240790, 3);
DataArray(NJS_POINT3*, pScale_Stg06, 0x203A124, 3);
DataArray(NJS_POINT3*, pScale_Stg07, 0x1E79B3C, 3);
DataArray(NJS_POINT3*, pScale_Stg08, 0xC67F60, 4);
//pScale_Stg09
DataArray(NJS_POINT3*, pScale_Stg10, 0x19C9080, 3);
DataArray(NJS_POINT3*, pScale_Stg12, 0x17C34E0, 3);
//pScale_Chaos00
DataArray(NJS_POINT3*, pScale_Chaos02, 0x1120668, 1);
DataArray(NJS_POINT3*, pScale_Chaos06, 0x11EF148, 2);
//pScale_Chaos07
//pScale_Egm01
DataArray(NJS_POINT3*, pScale_Egm02, 0x15E8824, 1);
//pScale_Egm03
//pScale_Robo
//pScale_E101
//pScale_E101r
DataArray(NJS_POINT3*, pScale_Adv00, 0x2AA3E30, 6);
DataArray(NJS_POINT3*, pScale_Adv01AB, 0x10F245C, 7);
DataArray(NJS_POINT3*, pScale_Adv01C, 0x1100D38, 6);
//pScale_Adv02
//pScale_Adv03
DataArray(NJS_POINT3*, pScale_MiniCart, 0x9BF55C, 3);
DataArray(NJS_POINT3*, pScale_Sht, 0x27D6DE8, 2);
//pScale_Sand

#endif /* SADXMODLOADER_SADXVARSNEW_H */