class CfgPatches {
    class DustyRoads {
        units[] = {};
        weapons[] = {};
        requiredVersion = 1.0;
        requiredaddons[] = {
            "A3_Map_Stratis",
            "A3_Plants_F_Bush",
            "A3_Plants_F",
            "DustyRoads_Assets_Tree",
            "DustyRoads_Assets",
            "A3_Structures_F_Walls",
            "Ark_Western",
            "A3_Rocks_F_Blunt",
            "M_western",
            "A3_Structures_F_Civ_Dead",
            "DR_Props",
            "A3_Structures_F_Civ_Market",
            "A3_Structures_F_EPC_Civ_Accessories",
            "DR_Fence",
            "A3_Structures_F_Exp_Commercial_Market",
            "A3_Structures_F_EPA_Civ_Camping",
            "A3_Structures_F_Civ_Accessories",
            "A3_Structures_F_Exp_Infrastructure_WaterSupply",
            "A3_Structures_F_Mil_Flags",
            "DR_Structures_02_Ind_Water_Tower",
            "A3_Props_F_Exp_Commercial_Market",
            "A3_Structures_F_EPC_Civ_Tourism",
            "A3_Structures_F_Naval_Piers",
            "A3_Structures_F_Dominants_Castle",
            "A3_Rocks_F_Sharp",
            "Land_DR_LadderS",
            "A3_Structures_F_Training",
            "Land_DR_LadderL",
            "A3_Rocks_F",
            "dustyroads_camp",
            "A3_Structures_F_Ind_PowerLines",
            "A3_Structures_F_Exp_Naval_Piers",
            "A3_Structures_F_EPB_Furniture",
            "A3_Structures_F_Exp_Walls_Wooden",
            "A3_Structures_F_Civ_Constructions",
            "DR_Structures_Civ_Carpenters",
            "DRRPG_Windpump",
            "DR_Structures_Walls",
            "DR_Structures_Civ_Stable",
            "DustyRoads_Railroads",
            "dr_ticketbooth",
            "A3_Structures_F_Furniture",
            "A3_Animals_F",
            "A3_Structures_F_Exp_Civilian_Accessories",
            "A3_Structures_F_Naval_RowBoats",
            "DR_Structures_Civ_Blacksmith",
            "A3_Structures_F_Items_Vessels",
            "A3_Structures_F_Civ_Chapels",
            "A3_Structures_F_Exp_Cultural_Cemeteries",
            "A3_Structures_F_EPB_Civ_Dead",
            "A3_Structures_F_Households",
            "A3_Data_F",
            "A3_Structures_F_Argo_Industrial_Agriculture",
            "A3_Structures_F_Dominants_Lighthouse",
            "A3_Structures_F_Civ_Camping"
        };
        version = "23/12/2016";
        fileName = "DustyRoads.pbo";
        author = "DustyRoadsRPG";
        worlds[] = {
            "DustyRoads"
        };
    };
};
class CfgWorlds {
    class DefaultWorld {
        class Weather {
            class Overcast;
        };
        class WaterExPars;
    };
    class CAWorld: DefaultWorld {
        class Grid {};
        class DayLightingBrightAlmost;
        class DayLightingRainy;
        class DefaultClutter;
        class EnvSounds;
        class Weather: Weather {
            class Lighting;
            class Overcast: Overcast {
                class Weather1;
                class Weather2;
                class Weather3;
                class Weather4;
                class Weather5;
                class Weather6;
            };
        };
    };
    class DefaultLighting;
    class DustyRoads: CAWorld {
        cutscenes[] = {};
        author = "DustyRoadsRPG";
        description = "Death Valley";
        pictureMap = "DustyRoads\data\picturemap_ca.paa";
        worldName = "DustyRoads\DustyRoads.wrp";
        startTime = "12:00";
        startDate = "12/06/2016";
        centerPosition[] = {
            4411,
            3554,
            65
        };
        seagullPos[] = {
            1024,
            1024,
            500
        };
        longitude = 65;
        latitude = -34;
        soundMapSizeCoef = 4;
        satelliteNormalBlendStart = 10;
        satelliteNormalBlendEnd = 100;
        skyObject = "A3\Map_Tanoabuka\data\skydome.p3d";
        horizontObject = "A3\Map_Tanoabuka\data\horizon.p3d";
        skyTexture = "A3\Map_Tanoabuka\data\sky_semicloudy_sky.paa";
        skyTextureR = "A3\Map_Tanoabuka\data\sky_semicloudy_lco.paa";
        terrainBlendMaxDarkenCoef = 1.0;
        terrainBlendMaxBrightenCoef = 0.0;
        clutterGrid = 1.5;
        clutterDist = 125;
        noDetailDist = 65;
        fullDetailDist = 15;
        midDetailTexture = "A3\Map_Data\middle_mco.paa";
        clutterRoadwayCheckRadiusCoef = 0.6;
        interpolateClutterColoring = 1;
        clutterColoringFarCoef = 5.0;
        clutterColoringFarStart = 20.0;
        clutterColoringFarSpeed = 2.0;
        elevationOffset = 5;
        envTexture = "A3\Data_f\env_land_ca.paa";
        minTreesInForestSquare = 2;
        minRocksInRockSquare = 2;
        newRoadsShape = "\DustyRoads\data\roads\roads.shp";
        ilsPosition[] = {
            1024,
            1024
        };
        ilsDirection[] = {
            0.5075,
            0.08,
            -0.8616
        };
        ilsTaxiIn[] = {};
        ilsTaxiOff[] = {};
        drawTaxiway = 0;
        class EnvMaps {
            class EnvMap1 {
                texture = "A3\Map_Tanoabuka\data\env_land_ClearSky_ca.paa";
                overcast = 0;
            };
            class EnvMap2 {
                texture = "A3\Map_Tanoabuka\data\env_land_SemiCloudySky_ca.paa";
                overcast = 0.4;
            };
            class EnvMap3 {
                texture = "A3\Map_Tanoabuka\data\env_land_OvercastSky_ca.paa";
                overcast = 0.8;
            };
        };
        class OutsideTerrain {
            satellite = "A3\map_Stratis\data\s_satout_co.paa";
            enableTerrainSynth = 0;
            class Layers {
                class Layer0 {
                    nopx = "A3\Map_Data\gdt_strseabed_nopx.paa";
                    texture = "A3\Map_Data\gdt_strseabed_co.paa";
                };
            };
            colorOutside[] = {
                0.294118,
                0.333333,
                0.372549,
                1
            };
        };
        class SecondaryAirports {};
        class Sea {
            seaTexture = "a3\data_f\seatexture_co.paa";
            seaMaterial = "#water";
            shoreMaterial = "#shore";
            shoreFoamMaterial = "#shorefoam";
            shoreWetMaterial = "#shorewet";
            WaterMapScale = 20;
            WaterGrid = 50;
            MaxTide = 0.0;
            MaxWave = 1.0;
            SeaWaveXScale = "2.0/50";
            SeaWaveZScale = "1.0/50";
            SeaWaveHScale = 1.0;
            SeaWaveXDuration = 5000;
            SeaWaveZDuration = 10000;
        };
        class Underwater {
            noWaterFog = -0.001;
            fullWaterFog = 0.001;
            deepWaterFog = 60;
            waterFogDistanceNear = -10;
            waterFogDistance = 90;
            waterColor[] = {
                0.0,
                0.04,
                0.03
            };
            deepWaterColor[] = {
                0.0,
                0.001,
                0.009
            };
            surfaceColor[] = {
                0.0,
                0.04,
                0.03
            };
            deepSurfaceColor[] = {
                0.0,
                0.001,
                0.009
            };
        };
        class SeaWaterShaderPars {
            refractionMoveCoef = 0.03;
            minWaterOpacity = 0.0;
            waterOpacityDistCoef = 0.4;
            underwaterOpacity = 0.5;
            waterOpacityFadeStart = 60;
            waterOpacityFadeLength = 120;
        };
        class WaterExPars: WaterExPars {
            fogDensity = 0.035;
            fogColor[] = {
                0.0002345,
                0.04515,
                0.07035
            };
            fogColorExtinctionSpeed[] = {
                0.32814,
                0.0149,
                0.00511
            };
            ligtExtinctionSpeed[] = {
                0.32814,
                0.0149,
                0.00511
            };
            diffuseLigtExtinctionSpeed[] = {
                0.36814,
                0.0449,
                0.02511
            };
            fogGradientCoefs[] = {
                0.35,
                1.0,
                1.7
            };
            fogColorLightInfluence[] = {
                0.8,
                0.2,
                1.0
            };
            shadowIntensity = 0.0;
            ssReflectionStrength = 0.85;
            ssReflectionMaxJitter = 1.0;
            ssReflectionRippleInfluence = 0.2;
            ssReflectionEdgeFadingCoef = 10.0;
            ssReflectionDistFadingCoef = 4.0;
            refractionMinCoef = 0.03;
            refractionMaxCoef = 0.14;
            refractionMaxDist = 5.1;
            specularMaxIntensity = 100;
            specularPowerOvercast0 = 750;
            specularPowerOvercast1 = 50;
            specularNormalModifyCoef = 0.015;
            foamAroundObjectsIntensity = 0.15;
            foamAroundObjectsFadeCoef = 8.0;
            foamColorCoef = 2.0;
            foamDeformationCoef = 0.02;
            foamTextureCoef = 0.2;
            foamTimeMoveSpeed = 0.2;
            foamTimeMoveAmount = 0.1;
            shoreDarkeningMaxCoef = 0.45;
            shoreDarkeningOffset = 0.36;
            shoreDarkeningGradient = 0.08;
            shoreWaveTimeScale = 0.8;
            shoreWaveShifDerivativeOffset = -0.8;
            shoreFoamIntensity = 0.25;
            shoreMaxWaveHeight = 0.15;
            shoreWetLayerReflectionIntensity = 0.55;
        };
        class Grid: Grid {
            offsetX = 0;
            offsetY = 5120;
            class Zoom1 {
                zoomMax = 0.15;
                format = "XY";
                formatX = "000";
                formatY = "000";
                stepX = 100;
                stepY = -100;
            };
            class Zoom2 {
                zoomMax = 0.85;
                format = "XY";
                formatX = "00";
                formatY = "00";
                stepX = 1000;
                stepY = -1000;
            };
            class Zoom3 {
                zoomMax = 1e+030;
                format = "XY";
                formatX = "0";
                formatY = "0";
                stepX = 10000;
                stepY = -10000;
            };
        };
        class Weather: Weather {
            class LightingNew {
                class Lighting0 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse[] = {
                        {
                            0.14,
                            0.19,
                            0.3
                        },
                        4
                    };
                    diffuseCloud[] = {
                        {
                            0.14,
                            0.19,
                            0.3
                        },
                        0.2
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.05
                    };
                    ambientMid[] = {
                        {
                            0.1384,
                            0.1912,
                            0.2984
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.1384,
                            0.1912,
                            0.2984
                        },
                        0.044
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.04224
                    };
                    bidirect[] = {
                        0.025,
                        0.025,
                        0.023
                    };
                    bidirectCloud[] = {
                        0.0125,
                        0.0125,
                        0.0115
                    };
                    sky[] = {
                        0.231,
                        0.314,
                        0.467
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.025
                    };
                    apertureMin = 4;
                    apertureStandard = 4;
                    apertureMax = 8;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            0.5,
                            0.65,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting1 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -12;
                    sunOrMoon = 0;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 4;
                    apertureStandard = 4;
                    apertureMax = 8;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting2 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -11;
                    sunOrMoon = 0.5;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 4;
                    apertureStandard = 4;
                    apertureMax = 8;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting3 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -10;
                    sunOrMoon = 1;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        {
                            0.2,
                            0.25,
                            0.45
                        },
                        4.734908
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 4;
                    apertureStandard = 5;
                    apertureMax = 10;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting4 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.16,
                            0.18,
                            0.28
                        },
                        3
                    };
                    diffuseCloud[] = {
                        {
                            0.16,
                            0.18,
                            0.28
                        },
                        3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.6
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.6
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.048
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.048
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        3.88608
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        3.88608
                    };
                    bidirect[] = {
                        0.0115,
                        0.012,
                        0.0125
                    };
                    bidirectCloud[] = {
                        0.0115,
                        0.012,
                        0.0125
                    };
                    sky[] = {
                        {
                            0.2,
                            0.298,
                            0.541
                        },
                        4.6
                    };
                    skyAroundSun[] = {
                        {
                            0.7,
                            0.35,
                            0.28
                        },
                        7.636949
                    };
                    fogColor[] = {
                        {
                            0.106,
                            0.161,
                            0.267
                        },
                        4.715
                    };
                    apertureMin = 5;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting5 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.25,
                            0.21,
                            0.2
                        },
                        5
                    };
                    diffuseCloud[] = {
                        {
                            0.25,
                            0.21,
                            0.2
                        },
                        5
                    };
                    ambient[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.9
                    };
                    ambientCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.9
                    };
                    ambientMid[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.072
                    };
                    ambientMidCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.072
                    };
                    groundReflection[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        5.82912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        5.82912
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.188,
                            0.29,
                            0.576
                        },
                        6.9
                    };
                    skyAroundSun[] = {
                        {
                            1.8,
                            0.42,
                            0.2
                        },
                        12.31766
                    };
                    fogColor[] = {
                        {
                            0.11,
                            0.169,
                            0.286
                        },
                        7.0725
                    };
                    apertureMin = 6;
                    apertureStandard = 8;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting6 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.75,
                            0.38,
                            0.22
                        },
                        6
                    };
                    diffuseCloud[] = {
                        {
                            0.75,
                            0.38,
                            0.22
                        },
                        6
                    };
                    ambient[] = {
                        {
                            0.2497,
                            0.31,
                            0.467
                        },
                        7.8
                    };
                    ambientCloud[] = {
                        {
                            0.2497,
                            0.31,
                            0.467
                        },
                        7.8
                    };
                    ambientMid[] = {
                        {
                            0.2541,
                            0.314,
                            0.467
                        },
                        6.864
                    };
                    ambientMidCloud[] = {
                        {
                            0.2541,
                            0.314,
                            0.467
                        },
                        6.864
                    };
                    groundReflection[] = {
                        {
                            0.235,
                            0.318,
                            0.467
                        },
                        6.58944
                    };
                    groundReflectionCloud[] = {
                        {
                            0.235,
                            0.318,
                            0.467
                        },
                        6.58944
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.173,
                            0.282,
                            0.612
                        },
                        7.8
                    };
                    skyAroundSun[] = {
                        {
                            2,
                            0.42,
                            0.2
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.118,
                            0.18,
                            0.31
                        },
                        7.995
                    };
                    apertureMin = 7;
                    apertureStandard = 9;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting7 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.95,
                            0.42,
                            0.22
                        },
                        8.4
                    };
                    diffuseCloud[] = {
                        {
                            0.95,
                            0.42,
                            0.22
                        },
                        8.4
                    };
                    ambient[] = {
                        {
                            0.306,
                            0.357,
                            0.463
                        },
                        8.4
                    };
                    ambientCloud[] = {
                        {
                            0.306,
                            0.357,
                            0.463
                        },
                        8.4
                    };
                    ambientMid[] = {
                        {
                            0.365,
                            0.361,
                            0.396
                        },
                        7.392
                    };
                    ambientMidCloud[] = {
                        {
                            0.365,
                            0.361,
                            0.396
                        },
                        7.392
                    };
                    groundReflection[] = {
                        {
                            0.416,
                            0.38,
                            0.388
                        },
                        7.09632
                    };
                    groundReflectionCloud[] = {
                        {
                            0.416,
                            0.38,
                            0.388
                        },
                        7.09632
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.157,
                            0.275,
                            0.651
                        },
                        8.4
                    };
                    skyAroundSun[] = {
                        {
                            2.2,
                            0.8,
                            0.2
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.125,
                            0.192,
                            0.329
                        },
                        8.61
                    };
                    apertureMin = 8;
                    apertureStandard = 10;
                    apertureMax = 24;
                    standardAvgLum = 50;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting8 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 6;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.95,
                            0.55,
                            0.35
                        },
                        10.2
                    };
                    diffuseCloud[] = {
                        {
                            0.95,
                            0.55,
                            0.35
                        },
                        10.2
                    };
                    ambient[] = {
                        {
                            0.337,
                            0.404,
                            0.525
                        },
                        9.6
                    };
                    ambientCloud[] = {
                        {
                            0.337,
                            0.404,
                            0.525
                        },
                        9.6
                    };
                    ambientMid[] = {
                        {
                            0.412,
                            0.408,
                            0.443
                        },
                        8.448
                    };
                    ambientMidCloud[] = {
                        {
                            0.412,
                            0.408,
                            0.443
                        },
                        8.448
                    };
                    groundReflection[] = {
                        {
                            0.475,
                            0.435,
                            0.431
                        },
                        8.11008
                    };
                    groundReflectionCloud[] = {
                        {
                            0.475,
                            0.435,
                            0.431
                        },
                        8.11008
                    };
                    bidirect[] = {
                        0.01375,
                        0.0132,
                        0.01265
                    };
                    bidirectCloud[] = {
                        0.01375,
                        0.0132,
                        0.01265
                    };
                    sky[] = {
                        {
                            0.145,
                            0.263,
                            0.686
                        },
                        9.6
                    };
                    skyAroundSun[] = {
                        {
                            0.4,
                            0.32,
                            0.6
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.133,
                            0.204,
                            0.357
                        },
                        9.84
                    };
                    apertureMin = 8;
                    apertureStandard = 16;
                    apertureMax = 26;
                    standardAvgLum = 100;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.027,
                        0.045
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting9 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 12;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.65,
                            0.45
                        },
                        12.3
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.65,
                            0.45
                        },
                        12.3
                    };
                    ambient[] = {
                        {
                            0.388,
                            0.471,
                            0.612
                        },
                        10.9
                    };
                    ambientCloud[] = {
                        {
                            0.388,
                            0.471,
                            0.612
                        },
                        10.9
                    };
                    ambientMid[] = {
                        {
                            0.482,
                            0.475,
                            0.506
                        },
                        9.81
                    };
                    ambientMidCloud[] = {
                        {
                            0.482,
                            0.475,
                            0.506
                        },
                        9.81
                    };
                    groundReflection[] = {
                        {
                            0.557,
                            0.51,
                            0.494
                        },
                        9.4176
                    };
                    groundReflectionCloud[] = {
                        {
                            0.557,
                            0.51,
                            0.494
                        },
                        9.4176
                    };
                    bidirect[] = {
                        0.01875,
                        0.018,
                        0.01725
                    };
                    bidirectCloud[] = {
                        0.01875,
                        0.018,
                        0.01725
                    };
                    sky[] = {
                        {
                            0.129,
                            0.259,
                            0.722
                        },
                        10.9
                    };
                    skyAroundSun[] = {
                        {
                            0.13,
                            0.25,
                            0.8
                        },
                        13.524
                    };
                    fogColor[] = {
                        {
                            0.145,
                            0.224,
                            0.396
                        },
                        11.1725
                    };
                    apertureMin = 20;
                    apertureStandard = 25;
                    apertureMax = 35;
                    standardAvgLum = 250;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.018,
                        0.04
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        12.24
                    };
                    swBrightness = 1;
                };
                class Lighting10 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 24;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.75,
                            0.62
                        },
                        15.8
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.75,
                            0.62
                        },
                        15.8
                    };
                    ambient[] = {
                        {
                            0.435,
                            0.533,
                            0.698
                        },
                        13.8
                    };
                    ambientCloud[] = {
                        {
                            0.435,
                            0.533,
                            0.698
                        },
                        13.8
                    };
                    ambientMid[] = {
                        {
                            0.545,
                            0.541,
                            0.569
                        },
                        12.696
                    };
                    ambientMidCloud[] = {
                        {
                            0.545,
                            0.541,
                            0.569
                        },
                        12.696
                    };
                    groundReflection[] = {
                        {
                            0.635,
                            0.58,
                            0.557
                        },
                        12.18816
                    };
                    groundReflectionCloud[] = {
                        {
                            0.635,
                            0.58,
                            0.557
                        },
                        12.18816
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.118,
                            0.251,
                            0.753
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.115,
                            0.245,
                            0.8
                        },
                        13.662
                    };
                    fogColor[] = {
                        {
                            0.15,
                            0.251,
                            0.488
                        },
                        14.145
                    };
                    apertureMin = 45;
                    apertureStandard = 60;
                    apertureMax = 80;
                    standardAvgLum = 800;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.4
                    };
                    swBrightness = 1;
                };
                class Lighting11 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17.2
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17.2
                    };
                    ambient[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    ambientMidCloud[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    groundReflection[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    groundReflectionCloud[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting12 {
                    height = 0;
                    overcast = 0.25;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17.2
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17.2
                    };
                    ambient[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    ambientMidCloud[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    groundReflection[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    groundReflectionCloud[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting13 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse[] = {
                        {
                            0.14,
                            0.19,
                            0.3
                        },
                        4
                    };
                    diffuseCloud[] = {
                        {
                            0.14,
                            0.19,
                            0.3
                        },
                        3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.1384,
                            0.1912,
                            0.2984
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.1384,
                            0.1912,
                            0.2984
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0.025,
                        0.025,
                        0.023
                    };
                    bidirectCloud[] = {
                        0.0245,
                        0.0245,
                        0.02254
                    };
                    sky[] = {
                        0.231,
                        0.314,
                        0.467
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.025
                    };
                    apertureMin = 4;
                    apertureStandard = 4;
                    apertureMax = 8;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            0.5,
                            0.65,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting14 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -12;
                    sunOrMoon = 0;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 4;
                    apertureStandard = 4;
                    apertureMax = 8;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting15 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -11;
                    sunOrMoon = 0.5;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 4;
                    apertureStandard = 4;
                    apertureMax = 8;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting16 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -10;
                    sunOrMoon = 1;
                    diffuse[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    diffuseCloud[] = {
                        0.1,
                        0.18,
                        0.3
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.88
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8448
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        {
                            0.2,
                            0.25,
                            0.45
                        },
                        4.734908
                    };
                    fogColor[] = {
                        {
                            0.094,
                            0.141,
                            0.231
                        },
                        0.025
                    };
                    apertureMin = 4;
                    apertureStandard = 5;
                    apertureMax = 10;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting17 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.16,
                            0.18,
                            0.28
                        },
                        2.25
                    };
                    diffuseCloud[] = {
                        {
                            0.16,
                            0.18,
                            0.28
                        },
                        1.6875
                    };
                    ambient[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.6
                    };
                    ambientCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.6
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.048
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        4.048
                    };
                    groundReflection[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        3.88608
                    };
                    groundReflectionCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        3.88608
                    };
                    bidirect[] = {
                        0.0115,
                        0.012,
                        0.0125
                    };
                    bidirectCloud[] = {
                        0.01127,
                        0.01176,
                        0.01225
                    };
                    sky[] = {
                        {
                            0.2,
                            0.298,
                            0.541
                        },
                        4.6
                    };
                    skyAroundSun[] = {
                        {
                            0.7,
                            0.35,
                            0.28
                        },
                        7.636949
                    };
                    fogColor[] = {
                        {
                            0.106,
                            0.161,
                            0.267
                        },
                        4.715
                    };
                    apertureMin = 5;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting18 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.25,
                            0.21,
                            0.2
                        },
                        3.75
                    };
                    diffuseCloud[] = {
                        {
                            0.25,
                            0.21,
                            0.2
                        },
                        2.8125
                    };
                    ambient[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.9
                    };
                    ambientCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.9
                    };
                    ambientMid[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.072
                    };
                    ambientMidCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        6.072
                    };
                    groundReflection[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        5.82912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.196,
                            0.275,
                            0.42
                        },
                        5.82912
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.188,
                            0.29,
                            0.576
                        },
                        6.9
                    };
                    skyAroundSun[] = {
                        {
                            1.8,
                            0.42,
                            0.2
                        },
                        12.31766
                    };
                    fogColor[] = {
                        {
                            0.11,
                            0.169,
                            0.286
                        },
                        7.0725
                    };
                    apertureMin = 6;
                    apertureStandard = 8;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting19 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.75,
                            0.38,
                            0.22
                        },
                        4.5
                    };
                    diffuseCloud[] = {
                        {
                            0.75,
                            0.38,
                            0.22
                        },
                        3.375
                    };
                    ambient[] = {
                        {
                            0.2497,
                            0.31,
                            0.467
                        },
                        7.8
                    };
                    ambientCloud[] = {
                        {
                            0.2497,
                            0.31,
                            0.467
                        },
                        7.8
                    };
                    ambientMid[] = {
                        {
                            0.2541,
                            0.314,
                            0.467
                        },
                        6.864
                    };
                    ambientMidCloud[] = {
                        {
                            0.2541,
                            0.314,
                            0.467
                        },
                        6.864
                    };
                    groundReflection[] = {
                        {
                            0.235,
                            0.318,
                            0.467
                        },
                        6.58944
                    };
                    groundReflectionCloud[] = {
                        {
                            0.235,
                            0.318,
                            0.467
                        },
                        6.58944
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.173,
                            0.282,
                            0.612
                        },
                        7.8
                    };
                    skyAroundSun[] = {
                        {
                            2,
                            0.42,
                            0.2
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.118,
                            0.18,
                            0.31
                        },
                        7.995
                    };
                    apertureMin = 7;
                    apertureStandard = 9;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting20 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.95,
                            0.42,
                            0.22
                        },
                        6.72
                    };
                    diffuseCloud[] = {
                        {
                            0.95,
                            0.42,
                            0.22
                        },
                        5.04
                    };
                    ambient[] = {
                        {
                            0.306,
                            0.357,
                            0.463
                        },
                        8.4
                    };
                    ambientCloud[] = {
                        {
                            0.306,
                            0.357,
                            0.463
                        },
                        8.4
                    };
                    ambientMid[] = {
                        {
                            0.365,
                            0.361,
                            0.396
                        },
                        7.392
                    };
                    ambientMidCloud[] = {
                        {
                            0.365,
                            0.361,
                            0.396
                        },
                        7.392
                    };
                    groundReflection[] = {
                        {
                            0.416,
                            0.38,
                            0.388
                        },
                        7.09632
                    };
                    groundReflectionCloud[] = {
                        {
                            0.416,
                            0.38,
                            0.388
                        },
                        7.09632
                    };
                    bidirect[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    bidirectCloud[] = {
                        0.023,
                        0.024,
                        0.025
                    };
                    sky[] = {
                        {
                            0.157,
                            0.275,
                            0.651
                        },
                        8.4
                    };
                    skyAroundSun[] = {
                        {
                            2.2,
                            0.8,
                            0.2
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.125,
                            0.192,
                            0.329
                        },
                        8.61
                    };
                    apertureMin = 8;
                    apertureStandard = 10;
                    apertureMax = 24;
                    standardAvgLum = 50;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting21 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 6;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.95,
                            0.55,
                            0.35
                        },
                        10.2
                    };
                    diffuseCloud[] = {
                        {
                            0.95,
                            0.55,
                            0.35
                        },
                        7.65
                    };
                    ambient[] = {
                        {
                            0.337,
                            0.404,
                            0.525
                        },
                        9.6
                    };
                    ambientCloud[] = {
                        {
                            0.337,
                            0.404,
                            0.525
                        },
                        9.6
                    };
                    ambientMid[] = {
                        {
                            0.412,
                            0.408,
                            0.443
                        },
                        8.448
                    };
                    ambientMidCloud[] = {
                        {
                            0.412,
                            0.408,
                            0.443
                        },
                        8.448
                    };
                    groundReflection[] = {
                        {
                            0.475,
                            0.435,
                            0.431
                        },
                        8.11008
                    };
                    groundReflectionCloud[] = {
                        {
                            0.475,
                            0.435,
                            0.431
                        },
                        8.11008
                    };
                    bidirect[] = {
                        0.01375,
                        0.0132,
                        0.01265
                    };
                    bidirectCloud[] = {
                        0.01375,
                        0.0132,
                        0.01265
                    };
                    sky[] = {
                        {
                            0.145,
                            0.263,
                            0.686
                        },
                        9.6
                    };
                    skyAroundSun[] = {
                        {
                            0.4,
                            0.32,
                            0.6
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.133,
                            0.204,
                            0.357
                        },
                        9.84
                    };
                    apertureMin = 8;
                    apertureStandard = 16;
                    apertureMax = 26;
                    standardAvgLum = 100;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.027,
                        0.045
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting22 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 12;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.65,
                            0.45
                        },
                        12.3
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.65,
                            0.45
                        },
                        9.225
                    };
                    ambient[] = {
                        {
                            0.388,
                            0.471,
                            0.612
                        },
                        10.9
                    };
                    ambientCloud[] = {
                        {
                            0.388,
                            0.471,
                            0.612
                        },
                        10.9
                    };
                    ambientMid[] = {
                        {
                            0.482,
                            0.475,
                            0.506
                        },
                        9.81
                    };
                    ambientMidCloud[] = {
                        {
                            0.482,
                            0.475,
                            0.506
                        },
                        9.81
                    };
                    groundReflection[] = {
                        {
                            0.557,
                            0.51,
                            0.494
                        },
                        9.4176
                    };
                    groundReflectionCloud[] = {
                        {
                            0.557,
                            0.51,
                            0.494
                        },
                        9.4176
                    };
                    bidirect[] = {
                        0.01875,
                        0.018,
                        0.01725
                    };
                    bidirectCloud[] = {
                        0.01875,
                        0.018,
                        0.01725
                    };
                    sky[] = {
                        {
                            0.129,
                            0.259,
                            0.722
                        },
                        10.9
                    };
                    skyAroundSun[] = {
                        {
                            0.13,
                            0.25,
                            0.8
                        },
                        13.524
                    };
                    fogColor[] = {
                        {
                            0.145,
                            0.224,
                            0.396
                        },
                        11.1725
                    };
                    apertureMin = 20;
                    apertureStandard = 25;
                    apertureMax = 35;
                    standardAvgLum = 250;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.018,
                        0.04
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        12.24
                    };
                    swBrightness = 1;
                };
                class Lighting23 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 24;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.75,
                            0.62
                        },
                        15.8
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.75,
                            0.62
                        },
                        11.85
                    };
                    ambient[] = {
                        {
                            0.435,
                            0.533,
                            0.698
                        },
                        13.8
                    };
                    ambientCloud[] = {
                        {
                            0.435,
                            0.533,
                            0.698
                        },
                        13.8
                    };
                    ambientMid[] = {
                        {
                            0.545,
                            0.541,
                            0.569
                        },
                        12.696
                    };
                    ambientMidCloud[] = {
                        {
                            0.545,
                            0.541,
                            0.569
                        },
                        12.696
                    };
                    groundReflection[] = {
                        {
                            0.635,
                            0.58,
                            0.557
                        },
                        12.18816
                    };
                    groundReflectionCloud[] = {
                        {
                            0.635,
                            0.58,
                            0.557
                        },
                        12.18816
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.118,
                            0.251,
                            0.753
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.115,
                            0.245,
                            0.8
                        },
                        13.662
                    };
                    fogColor[] = {
                        {
                            0.15,
                            0.251,
                            0.488
                        },
                        14.145
                    };
                    apertureMin = 45;
                    apertureStandard = 60;
                    apertureMax = 80;
                    standardAvgLum = 800;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.4
                    };
                    swBrightness = 1;
                };
                class Lighting24 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        12.75
                    };
                    ambient[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        13.616
                    };
                    ambientMidCloud[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        13.616
                    };
                    groundReflection[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    groundReflectionCloud[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        13.9564
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting25 {
                    height = 0;
                    overcast = 0.6;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        17
                    };
                    diffuseCloud[] = {
                        {
                            1,
                            0.87,
                            0.85
                        },
                        13.94
                    };
                    ambient[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.498,
                            0.602,
                            0.77
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    ambientMidCloud[] = {
                        {
                            0.635,
                            0.635,
                            0.663
                        },
                        14.504
                    };
                    groundReflection[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    groundReflectionCloud[] = {
                        {
                            0.745,
                            0.671,
                            0.643
                        },
                        14.21392
                    };
                    bidirect[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    bidirectCloud[] = {
                        0.025,
                        0.024,
                        0.018
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 120;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting26 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        1
                    };
                    diffuseCloud[] = {
                        {
                            0,
                            0,
                            0
                        },
                        0.75
                    };
                    ambient[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.8624
                    };
                    ambientMidCloud[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.8624
                    };
                    groundReflection[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.758912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.758912
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        0.231,
                        0.314,
                        0.467
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        0.09,
                        0.137,
                        0.22
                    };
                    apertureMin = 4;
                    apertureStandard = 4;
                    apertureMax = 8;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting27 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -12;
                    sunOrMoon = 0;
                    diffuse[] = {
                        0.16954,
                        0.239,
                        0.37673
                    };
                    diffuseCloud[] = {
                        0.042385,
                        0.05975,
                        0.094183
                    };
                    ambient[] = {
                        {
                            0.16954,
                            0.239,
                            0.37673
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.16954,
                            0.239,
                            0.37673
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8624
                    };
                    ambientMidCloud[] = {
                        {
                            0.173,
                            0.239,
                            0.373
                        },
                        0.8624
                    };
                    groundReflection[] = {
                        {
                            0.14705,
                            0.20315,
                            0.31705
                        },
                        0.758912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.14705,
                            0.20315,
                            0.31705
                        },
                        0.758912
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        0.122,
                        0.169,
                        0.255
                    };
                    apertureMin = 4;
                    apertureStandard = 4;
                    apertureMax = 8;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting28 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -11;
                    sunOrMoon = 0.5;
                    diffuse[] = {
                        0.129,
                        0.18,
                        0.271
                    };
                    diffuseCloud[] = {
                        0.03225,
                        0.045,
                        0.06775
                    };
                    ambient[] = {
                        {
                            0.129,
                            0.18,
                            0.271
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.129,
                            0.18,
                            0.271
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.129,
                            0.184,
                            0.267
                        },
                        0.8624
                    };
                    ambientMidCloud[] = {
                        {
                            0.129,
                            0.184,
                            0.267
                        },
                        0.8624
                    };
                    groundReflection[] = {
                        {
                            0.125,
                            0.176,
                            0.263
                        },
                        0.758912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.125,
                            0.176,
                            0.263
                        },
                        0.758912
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        0.2,
                        0.25,
                        0.45
                    };
                    fogColor[] = {
                        0.122,
                        0.169,
                        0.255
                    };
                    apertureMin = 4;
                    apertureStandard = 4;
                    apertureMax = 8;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting29 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -10;
                    sunOrMoon = 1;
                    diffuse[] = {
                        0.129,
                        0.18,
                        0.271
                    };
                    diffuseCloud[] = {
                        0.03225,
                        0.045,
                        0.06775
                    };
                    ambient[] = {
                        {
                            0.129,
                            0.18,
                            0.271
                        },
                        1
                    };
                    ambientCloud[] = {
                        {
                            0.129,
                            0.18,
                            0.271
                        },
                        1
                    };
                    ambientMid[] = {
                        {
                            0.129,
                            0.184,
                            0.267
                        },
                        0.8624
                    };
                    ambientMidCloud[] = {
                        {
                            0.129,
                            0.184,
                            0.267
                        },
                        0.8624
                    };
                    groundReflection[] = {
                        {
                            0.125,
                            0.176,
                            0.263
                        },
                        0.758912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.125,
                            0.176,
                            0.263
                        },
                        0.758912
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.212,
                            0.302,
                            0.51
                        },
                        1
                    };
                    skyAroundSun[] = {
                        {
                            0.2,
                            0.25,
                            0.45
                        },
                        4.734908
                    };
                    fogColor[] = {
                        0.122,
                        0.169,
                        0.255
                    };
                    apertureMin = 4;
                    apertureStandard = 4;
                    apertureMax = 10;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting30 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.157,
                            0.212,
                            0.306
                        },
                        0.5625
                    };
                    diffuseCloud[] = {
                        {
                            0.03925,
                            0.053,
                            0.0765
                        },
                        0.39375
                    };
                    ambient[] = {
                        {
                            0.157,
                            0.212,
                            0.306
                        },
                        3.22
                    };
                    ambientCloud[] = {
                        {
                            0.157,
                            0.212,
                            0.306
                        },
                        3.22
                    };
                    ambientMid[] = {
                        {
                            0.157,
                            0.208,
                            0.298
                        },
                        3.96704
                    };
                    ambientMidCloud[] = {
                        {
                            0.157,
                            0.208,
                            0.298
                        },
                        3.96704
                    };
                    groundReflection[] = {
                        {
                            0.149,
                            0.204,
                            0.29
                        },
                        3.649677
                    };
                    groundReflectionCloud[] = {
                        {
                            0.149,
                            0.204,
                            0.29
                        },
                        3.649677
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.2,
                            0.298,
                            0.541
                        },
                        4.6
                    };
                    skyAroundSun[] = {
                        {
                            0.7,
                            0.35,
                            0.28
                        },
                        7.636949
                    };
                    fogColor[] = {
                        {
                            0.141,
                            0.192,
                            0.282
                        },
                        3.96704
                    };
                    apertureMin = 5;
                    apertureStandard = 5;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting31 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.184,
                            0.247,
                            0.341
                        },
                        0.9375
                    };
                    diffuseCloud[] = {
                        {
                            0.046,
                            0.06175,
                            0.08525
                        },
                        0.65625
                    };
                    ambient[] = {
                        {
                            0.184,
                            0.247,
                            0.341
                        },
                        6.9
                    };
                    ambientCloud[] = {
                        {
                            0.184,
                            0.247,
                            0.341
                        },
                        6.9
                    };
                    ambientMid[] = {
                        {
                            0.184,
                            0.243,
                            0.329
                        },
                        5.95056
                    };
                    ambientMidCloud[] = {
                        {
                            0.184,
                            0.243,
                            0.329
                        },
                        5.95056
                    };
                    groundReflection[] = {
                        {
                            0.176,
                            0.231,
                            0.322
                        },
                        5.593526
                    };
                    groundReflectionCloud[] = {
                        {
                            0.176,
                            0.231,
                            0.322
                        },
                        5.593526
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.188,
                            0.29,
                            0.576
                        },
                        6.9
                    };
                    skyAroundSun[] = {
                        {
                            1.8,
                            0.42,
                            0.2
                        },
                        12.31766
                    };
                    fogColor[] = {
                        {
                            0.165,
                            0.22,
                            0.31
                        },
                        5.95056
                    };
                    apertureMin = 6;
                    apertureStandard = 6;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting32 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.216,
                            0.286,
                            0.384
                        },
                        1.125
                    };
                    diffuseCloud[] = {
                        {
                            0.054,
                            0.0715,
                            0.096
                        },
                        0.7875
                    };
                    ambient[] = {
                        {
                            0.216,
                            0.286,
                            0.384
                        },
                        7.8
                    };
                    ambientCloud[] = {
                        {
                            0.216,
                            0.286,
                            0.384
                        },
                        7.8
                    };
                    ambientMid[] = {
                        {
                            0.22,
                            0.278,
                            0.365
                        },
                        6.72672
                    };
                    ambientMidCloud[] = {
                        {
                            0.22,
                            0.278,
                            0.365
                        },
                        6.72672
                    };
                    groundReflection[] = {
                        {
                            0.204,
                            0.267,
                            0.353
                        },
                        6.457651
                    };
                    groundReflectionCloud[] = {
                        {
                            0.204,
                            0.267,
                            0.353
                        },
                        6.457651
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.173,
                            0.282,
                            0.612
                        },
                        7.8
                    };
                    skyAroundSun[] = {
                        {
                            2,
                            0.42,
                            0.2
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.188,
                            0.247,
                            0.341
                        },
                        6.72672
                    };
                    apertureMin = 7;
                    apertureStandard = 7;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting33 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.255,
                            0.325,
                            0.42
                        },
                        1.68
                    };
                    diffuseCloud[] = {
                        {
                            0.06375,
                            0.08125,
                            0.105
                        },
                        1.176
                    };
                    ambient[] = {
                        {
                            0.255,
                            0.325,
                            0.42
                        },
                        8.4
                    };
                    ambientCloud[] = {
                        {
                            0.255,
                            0.325,
                            0.42
                        },
                        8.4
                    };
                    ambientMid[] = {
                        {
                            0.259,
                            0.314,
                            0.396
                        },
                        7.24416
                    };
                    ambientMidCloud[] = {
                        {
                            0.259,
                            0.314,
                            0.396
                        },
                        7.24416
                    };
                    groundReflection[] = {
                        {
                            0.239,
                            0.294,
                            0.376
                        },
                        7.099277
                    };
                    groundReflectionCloud[] = {
                        {
                            0.239,
                            0.294,
                            0.376
                        },
                        7.099277
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.157,
                            0.275,
                            0.651
                        },
                        8.4
                    };
                    skyAroundSun[] = {
                        {
                            2.2,
                            0.8,
                            0.2
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.216,
                            0.275,
                            0.373
                        },
                        7.24416
                    };
                    apertureMin = 8;
                    apertureStandard = 8;
                    apertureMax = 24;
                    standardAvgLum = 50;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting34 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 6;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.298,
                            0.365,
                            0.451
                        },
                        2.55
                    };
                    diffuseCloud[] = {
                        {
                            0.0745,
                            0.09125,
                            0.11275
                        },
                        1.785
                    };
                    ambient[] = {
                        {
                            0.298,
                            0.365,
                            0.451
                        },
                        9.6
                    };
                    ambientCloud[] = {
                        {
                            0.298,
                            0.365,
                            0.451
                        },
                        9.6
                    };
                    ambientMid[] = {
                        {
                            0.302,
                            0.349,
                            0.416
                        },
                        8.27904
                    };
                    ambientMidCloud[] = {
                        {
                            0.302,
                            0.349,
                            0.416
                        },
                        8.27904
                    };
                    groundReflection[] = {
                        {
                            0.275,
                            0.318,
                            0.384
                        },
                        8.11346
                    };
                    groundReflectionCloud[] = {
                        {
                            0.275,
                            0.318,
                            0.384
                        },
                        8.11346
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.145,
                            0.263,
                            0.686
                        },
                        9.6
                    };
                    skyAroundSun[] = {
                        {
                            0.4,
                            0.32,
                            0.6
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.243,
                            0.306,
                            0.408
                        },
                        8.27904
                    };
                    apertureMin = 8;
                    apertureStandard = 14;
                    apertureMax = 26;
                    standardAvgLum = 100;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.027,
                        0.045
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting35 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 12;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.376,
                            0.431,
                            0.506
                        },
                        3.075
                    };
                    diffuseCloud[] = {
                        {
                            0.094,
                            0.10775,
                            0.1265
                        },
                        2.1525
                    };
                    ambient[] = {
                        {
                            0.376,
                            0.431,
                            0.506
                        },
                        10.9
                    };
                    ambientCloud[] = {
                        {
                            0.376,
                            0.431,
                            0.506
                        },
                        10.9
                    };
                    ambientMid[] = {
                        {
                            0.38,
                            0.408,
                            0.447
                        },
                        9.6138
                    };
                    ambientMidCloud[] = {
                        {
                            0.38,
                            0.408,
                            0.447
                        },
                        9.6138
                    };
                    groundReflection[] = {
                        {
                            0.329,
                            0.361,
                            0.396
                        },
                        9.421524
                    };
                    groundReflectionCloud[] = {
                        {
                            0.329,
                            0.361,
                            0.396
                        },
                        9.421524
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.129,
                            0.259,
                            0.722
                        },
                        10.9
                    };
                    skyAroundSun[] = {
                        {
                            0.13,
                            0.25,
                            0.8
                        },
                        13.524
                    };
                    fogColor[] = {
                        {
                            0.286,
                            0.353,
                            0.463
                        },
                        9.6138
                    };
                    apertureMin = 20;
                    apertureStandard = 22;
                    apertureMax = 35;
                    standardAvgLum = 250;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.018,
                        0.04
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        12.24
                    };
                    swBrightness = 1;
                };
                class Lighting36 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 24;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.447,
                            0.494,
                            0.557
                        },
                        3.95
                    };
                    diffuseCloud[] = {
                        {
                            0,
                            0,
                            0
                        },
                        2.765
                    };
                    ambient[] = {
                        {
                            0.447,
                            0.494,
                            0.557
                        },
                        13.8
                    };
                    ambientCloud[] = {
                        {
                            0.447,
                            0.494,
                            0.557
                        },
                        13.8
                    };
                    ambientMid[] = {
                        {
                            0.455,
                            0.467,
                            0.475
                        },
                        12.44208
                    };
                    ambientMidCloud[] = {
                        {
                            0.455,
                            0.467,
                            0.475
                        },
                        12.44208
                    };
                    groundReflection[] = {
                        {
                            0.388,
                            0.396,
                            0.408
                        },
                        12.19324
                    };
                    groundReflectionCloud[] = {
                        {
                            0.388,
                            0.396,
                            0.408
                        },
                        12.19324
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.118,
                            0.251,
                            0.753
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.115,
                            0.245,
                            0.8
                        },
                        13.662
                    };
                    fogColor[] = {
                        {
                            0.333,
                            0.404,
                            0.518
                        },
                        12.44208
                    };
                    apertureMin = 45;
                    apertureStandard = 50;
                    apertureMax = 80;
                    standardAvgLum = 800;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.4
                    };
                    swBrightness = 1;
                };
                class Lighting37 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.506,
                            0.553,
                            0.608
                        },
                        4.25
                    };
                    diffuseCloud[] = {
                        0.1265,
                        0.13825,
                        0.152
                    };
                    ambient[] = {
                        {
                            0.506,
                            0.553,
                            0.608
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.506,
                            0.553,
                            0.608
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.514,
                            0.518,
                            0.514
                        },
                        13.34368
                    };
                    ambientMidCloud[] = {
                        {
                            0.514,
                            0.518,
                            0.514
                        },
                        13.34368
                    };
                    groundReflection[] = {
                        {
                            0.435,
                            0.439,
                            0.439
                        },
                        13.07681
                    };
                    groundReflectionCloud[] = {
                        {
                            0.435,
                            0.439,
                            0.439
                        },
                        13.07681
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.369,
                            0.447,
                            0.565
                        },
                        13.34368
                    };
                    apertureMin = 70;
                    apertureStandard = 100;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting38 {
                    height = 0;
                    overcast = 0.85;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.549,
                            0.596,
                            0.651
                        },
                        4.25
                    };
                    diffuseCloud[] = {
                        0.13725,
                        0.149,
                        0.16275
                    };
                    ambient[] = {
                        {
                            0.549,
                            0.596,
                            0.651
                        },
                        14.8
                    };
                    ambientCloud[] = {
                        {
                            0.549,
                            0.596,
                            0.651
                        },
                        14.8
                    };
                    ambientMid[] = {
                        {
                            0.557,
                            0.557,
                            0.585
                        },
                        14.21392
                    };
                    ambientMidCloud[] = {
                        {
                            0.557,
                            0.557,
                            0.585
                        },
                        14.21392
                    };
                    groundReflection[] = {
                        {
                            0.471,
                            0.471,
                            0.463
                        },
                        13.92964
                    };
                    groundReflectionCloud[] = {
                        {
                            0.471,
                            0.471,
                            0.463
                        },
                        13.92964
                    };
                    bidirect[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    bidirectCloud[] = {
                        0.0117,
                        0.0117,
                        0.0117
                    };
                    sky[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0.02,
                            0.12,
                            0.8
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.4,
                            0.48,
                            0.6
                        },
                        15
                    };
                    apertureMin = 70;
                    apertureStandard = 110;
                    apertureMax = 120;
                    standardAvgLum = 8000;
                    desiredLuminanceCoef = 1;
                    desiredLuminanceCoefCloud = 1;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 0.5;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting39 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = -24;
                    sunOrMoon = 0;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        2.8
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        2.8
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        0.84
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        0.84
                    };
                    ambientMid[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        0.9072
                    };
                    ambientMidCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        0.9072
                    };
                    groundReflection[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        0.870912
                    };
                    groundReflectionCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        0.870912
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        0,
                        0.2355,
                        0.2335
                    };
                    skyAroundSun[] = {
                        0,
                        0.2355,
                        0.2335
                    };
                    fogColor[] = {
                        {
                            0.09,
                            0.137,
                            0.22
                        },
                        0.0275
                    };
                    apertureMin = 4;
                    apertureStandard = 4;
                    apertureMax = 8;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting40 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = -5;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        2.1
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        2.1
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        3.68
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        3.68
                    };
                    ambientMid[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        3.9744
                    };
                    ambientMidCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        3.9744
                    };
                    groundReflection[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        3.815424
                    };
                    groundReflectionCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        3.815424
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.2235,
                            0.2705
                        },
                        4.232
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.2235,
                            0.2705
                        },
                        7.636949
                    };
                    fogColor[] = {
                        {
                            0.106,
                            0.161,
                            0.267
                        },
                        4.715
                    };
                    apertureMin = 5;
                    apertureStandard = 6;
                    apertureMax = 18;
                    standardAvgLum = 4;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting41 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = -2;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        3.5
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        3.5
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        5.52
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        5.52
                    };
                    ambientMid[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        5.9616
                    };
                    ambientMidCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        5.9616
                    };
                    groundReflection[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        5.723136
                    };
                    groundReflectionCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        5.723136
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.2175,
                            0.288
                        },
                        6.348
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.2175,
                            0.288
                        },
                        12.31766
                    };
                    fogColor[] = {
                        {
                            0.11,
                            0.169,
                            0.286
                        },
                        7.0725
                    };
                    apertureMin = 6;
                    apertureStandard = 8;
                    apertureMax = 20;
                    standardAvgLum = 20;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting42 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = 0;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        4.2
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        4.2
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        6.24
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        6.24
                    };
                    ambientMid[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        6.7392
                    };
                    ambientMidCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        6.7392
                    };
                    groundReflection[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        6.469632
                    };
                    groundReflectionCloud[] = {
                        {
                            0.24,
                            0.63,
                            1
                        },
                        6.469632
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.2115,
                            0.306
                        },
                        7.176
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.2115,
                            0.306
                        },
                        13.38876
                    };
                    fogColor[] = {
                        {
                            0.118,
                            0.18,
                            0.31
                        },
                        7.995
                    };
                    apertureMin = 7;
                    apertureStandard = 9;
                    apertureMax = 22;
                    standardAvgLum = 45;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.038,
                        0.0675
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        11.016
                    };
                    swBrightness = 1;
                };
                class Lighting43 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = 45;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        12.04
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        12.04
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        11.84
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        11.84
                    };
                    ambientMid[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.4848
                    };
                    ambientMidCloud[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.4848
                    };
                    groundReflection[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.02541
                    };
                    groundReflectionCloud[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.02541
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.09,
                            0.4
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.09,
                            0.4
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        16.5
                    };
                    apertureMin = 12;
                    apertureStandard = 18;
                    apertureMax = 25;
                    standardAvgLum = 150;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
                class Lighting44 {
                    height = -0.1;
                    overcast = 0.8;
                    sunAngle = 90;
                    sunOrMoon = 1;
                    diffuse[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        12.04
                    };
                    diffuseCloud[] = {
                        {
                            0.6,
                            0.8,
                            1
                        },
                        12.04
                    };
                    ambient[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        11.84
                    };
                    ambientCloud[] = {
                        {
                            0.4,
                            0.9,
                            1
                        },
                        11.84
                    };
                    ambientMid[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.4848
                    };
                    ambientMidCloud[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.4848
                    };
                    groundReflection[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.02541
                    };
                    groundReflectionCloud[] = {
                        {
                            0.36,
                            0.72,
                            1
                        },
                        11.02541
                    };
                    bidirect[] = {
                        0,
                        0,
                        0
                    };
                    bidirectCloud[] = {
                        0,
                        0,
                        0
                    };
                    sky[] = {
                        {
                            0,
                            0.09,
                            0.4
                        },
                        13.8
                    };
                    skyAroundSun[] = {
                        {
                            0,
                            0.09,
                            0.4
                        },
                        13.8
                    };
                    fogColor[] = {
                        {
                            0.3,
                            0.44,
                            0.74
                        },
                        16.5
                    };
                    apertureMin = 12;
                    apertureStandard = 18;
                    apertureMax = 25;
                    standardAvgLum = 150;
                    desiredLuminanceCoef = 0;
                    desiredLuminanceCoefCloud = 0;
                    luminanceRectCoef = 1;
                    luminanceRectCoefCloud = 1;
                    rayleigh[] = {
                        0.007,
                        0.01388,
                        0.035
                    };
                    mie[] = {
                        0.005,
                        0.005,
                        0.005
                    };
                    cloudsColor[] = {
                        {
                            1,
                            1,
                            1
                        },
                        14.8
                    };
                    swBrightness = 1;
                };
            };
            class Lighting: Lighting {
                class BrightAlmost: DayLightingBrightAlmost {
                    overcast = 0.0;
                };
                class Rainy: DayLightingRainy {
                    overcast = 1.0;
                };
            };
            class Overcast: Overcast {
                class Weather1: Weather1 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_clear_lco.paa";
                };
                class Weather7: Weather1 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_clear_lco.paa";
                };
                class Weather2: Weather2 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_almostclear_lco.paa";
                };
                class Weather3: Weather3 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_cloudy_lco.paa";
                };
                class Weather4: Weather4 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_cloudy_lco.paa";
                };
                class Weather5: Weather5 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_overcast_lco.paa";
                };
                class Weather6: Weather6 {
                    sky = "A3\Map_Stratis\Data\sky_clear_gs.paa";
                    horizon = "A3\Map_Stratis\Data\sky_clear_horizont_sky.paa";
                    skyR = "A3\Map_Stratis\Data\sky_overcast_lco.paa";
                };
            };
        };
        humidityUpCoef = 0.1;
        humidityDownCoef = 0.05;
        class SimulWeather {
            noiseTexture = "a3\data_f\noise_raw.paa";
            numKeyframesPerDay = 48;
            windSpeedCoef = "10.0f";
            moonIrradianceCoef = "10.0f";
            fadeMaxDistanceKm = 1000.0;
            fadeMaxAltitudeKm = 15.0;
            fadeNumAltitudes = 8;
            fadeNumElevations = 8;
            fadeNumDistances = 8;
            fadeEarthTest = 1;
            autoBrightness = 0;
            autoBrightnessStrength = 0.1;
            cloudGridWidth = 64;
            cloudGridLength = 64;
            cloudGridHeight = 16;
            helperGridElevationSteps = 24;
            helperGridAzimuthSteps = 15;
            helperEffectiveEarthRadius = 1000000;
            helperCurvedEarth = 1;
            helperAdjustCurvature = 0;
            helperNumLayers = 120;
            helperMaxDistance = 160000;
            helperNearCloudFade = 0.1;
            helperChurn = 10;
            cloudWidth = 40000;
            cloudLength = 40000;
            wrapClouds = 1;
            noiseResolution = 8;
            noisePeriod = 4.0;
            opticalDensity = 0.5;
            alphaSharpness = 0.85;
            selfShadowScale = 0.905;
            mieAsymmetry = 0.5087;
            minimumLightElevationDegrees = 6.0;
            directLightCoef = 1.0;
            indirectLightCoef = 0.04;
            fogStart = 0;
            fogEnd = 50000;
            fogHeight = 2000;
            class DefaultKeyframe {
                rayleigh[] = {
                    0.00749,
                    0.01388,
                    0.02878
                };
                mie[] = {
                    0.0046,
                    0.0046,
                    0.0046
                };
                haze = 30;
                hazeBaseKm = 5.0;
                hazeScaleKm = 1.0;
                hazeEccentricity = 1;
                brightnessAdjustment = 1.0;
                cloudiness = 0.6;
                cloudBaseKm = 2.85;
                cloudHeightKm = 6.0;
                directLight = 1.0;
                indirectLight = 1.0;
                ambientLight = 0.2;
                noiseOctaves = 4.3;
                noisePersistence = 0.535;
                fractalAmplitude = 2.3;
                fractalWavelength = 240.0;
                extinction = 4.7;
                diffusivity = 0.001;
            };
            class Overcast {
                class Weather1: DefaultKeyframe {
                    overcast = 0.0;
                    cloudiness = 0.0;
                    diffusivity = 0.001;
                    seqFileKeyframe = 0;
                };
                class Weather2: DefaultKeyframe {
                    overcast = 0.2;
                    cloudiness = 0.25;
                    diffusivity = 0.001;
                    seqFileKeyframe = 0;
                };
                class Weather3: DefaultKeyframe {
                    overcast = 0.4;
                    cloudiness = 0.45;
                    diffusivity = 0.001;
                    seqFileKeyframe = 3;
                };
                class Weather4: DefaultKeyframe {
                    overcast = 0.5;
                    cloudiness = 0.46;
                    diffusivity = 0.01;
                    seqFileKeyframe = 4;
                };
                class Weather5: DefaultKeyframe {
                    overcast = 0.8;
                    cloudiness = 0.8;
                    diffusivity = 0.01;
                    extinction = 4.3;
                    cloudBaseKm = 1.9;
                    cloudHeightKm = 8.0;
                    seqFileKeyframe = 4;
                };
                class Weather6: DefaultKeyframe {
                    overcast = 1.0;
                    cloudiness = 1.0;
                    diffusivity = 0.001;
                    extinction = 4.0;
                    cloudBaseKm = 1.7;
                    cloudHeightKm = 10.0;
                    seqFileKeyframe = 4;
                };
            };
        };
        causticsEnabled = 1;
        causticsTextureMask = "A3\data_f\caustics\caustics_anim_%03d.paa";
        causticsTextureCount = 32;
        causticsDistanceLimit = 200.0;
        causticsDepthLimit = 80.0;
        causticsTextureArea = 2.0;
        causticsTextureAreaDeep = 156.0;
        causticsTextureChangeInterval = 0.04;
        causticsDepthFadeCoef = 0.05;
        causticsTextureDepthGranularity = 2.5;
        causticsBrightnessCoef = 4.0;
        startWeather = 0.3;
        startFog = 0.0;
        forecastWeather = 0.3;
        forecastFog = 0.0;
        startFogBase = 0.0;
        forecastFogBase = 0.0;
        startFogDecay = 0.014;
        forecastFogDecay = 0.014;
        fogBeta0Min = 0.0;
        fogBeta0Max = 0.05;
        skyColorInfluencesFogColor = 0;
        hazeDistCoef = 0.1;
        hazeFogCoef = 0.98;
        hazeBaseHeight = 0;
        hazeBaseBeta0 = 8e-005;
        hazeDensityDecay = 0.00036;
        aroundSunCoefMultiplier = 1.4;
        aroundSunCoefExponent = 12.0;
        horizonSunColorationIntensity = 0.001;
        class Sounds {
            sounds[] = {};
        };
        class HDRNewPars {
            minAperture = 1e-005;
            maxAperture = 256;
            apertureRatioMax = 4;
            apertureRatioMin = 10;
            bloomImageScale = 1.0;
            bloomScale = 0.09;
            bloomExponent = 0.75;
            bloomLuminanceOffset = 0.4;
            bloomLuminanceScale = 0.15;
            bloomLuminanceExponent = 0.25;
            tonemapMethod = 1;
            tonemapShoulderStrength = 0.22;
            tonemapLinearStrength = 0.12;
            tonemapLinearAngle = 0.1;
            tonemapToeStrength = 0.2;
            tonemapToeNumerator = 0.022;
            tonemapToeDenominator = 0.2;
            tonemapLinearWhite = 11.2;
            tonemapExposureBias = 1.0;
            tonemapLinearWhiteReinhard = "2.5f";
            eyeAdaptFactorLight = 3.3;
            eyeAdaptFactorDark = 0.75;
            nvgApertureMin = 10.0;
            nvgApertureStandard = 12.5;
            nvgApertureMax = 16.5;
            nvgStandardAvgLum = 10;
            nvgLightGain = 320;
            nvgTransition = 1;
            nvgTransitionCoefOn = "40.0f";
            nvgTransitionCoefOff = "0.01f";
            nightShiftMinAperture = 0;
            nightShiftMaxAperture = 0.002;
            nightShiftMaxEffect = 0.6;
            nightShiftLuminanceScale = 600;
        };
        class Lighting: DefaultLighting {
            groundReflection[] = {
                0.132,
                0.133,
                0.122
            };
            moonObjectColorFull[] = {
                460,
                440,
                400,
                1.0
            };
            moonHaloObjectColorFull[] = {
                465,
                477,
                475,
                1.0
            };
            moonsetObjectColor[] = {
                375,
                350,
                325,
                1.0
            };
            moonsetHaloObjectColor[] = {
                515,
                517,
                525,
                1.0
            };
            class ThunderBoltLight {
                diffuse[] = {
                    2120,
                    3170,
                    5550
                };
                ambient[] = {
                    0.001,
                    0.001,
                    0.001
                };
                intensity = 120000;
                class Attenuation {
                    start = 0.0;
                    constant = 0.0;
                    linear = 0.0;
                    quadratic = 1.0;
                };
            };
            starEmissivity = 40;
        };
        class DayLightingBrightAlmost: DayLightingBrightAlmost {
            deepNight[] = {-15,
                {
                    0.005,
                    0.01,
                    0.01
                },
                {
                    0.0,
                    0.002,
                    0.003
                },
                {
                    0.0,
                    0.0,
                    0.0
                },
                {
                    0.0,
                    0.0,
                    0.0
                },
                {
                    0.0,
                    0.002,
                    0.003
                },
                {
                    0.0,
                    0.002,
                    0.003
                },
                0
            };
            fullNight[] = {-5,
                {
                    0.182,
                    0.213,
                    0.25
                },
                {
                    0.05,
                    0.111,
                    0.221
                },
                {
                    0.04,
                    0.034,
                    0.004
                },
                {
                    0.039,
                    0.049,
                    0.072
                },
                {
                    0.082,
                    0.128,
                    0.185
                },
                {
                    0.283,
                    0.35,
                    0.431
                },
                0
            };
            sunMoon[] = {-3.75,
                {
                    0.377,
                    0.441,
                    0.518
                },
                {
                    0.103,
                    0.227,
                    0.453
                },
                {
                    0.04,
                    0.034,
                    0.004
                },
                {
                    0.039,
                    0.049,
                    0.072
                },
                {
                    0.174,
                    0.274,
                    0.395
                },
                {
                    0.582,
                    0.72,
                    0.887
                },
                0.5
            };
            earlySun[] = {-2.5,
                {
                    0.675,
                    0.69,
                    0.784
                },
                {
                    0.22,
                    0.322,
                    0.471
                },
                {
                    0.04,
                    0.034,
                    0.004
                },
                {
                    0.039,
                    0.049,
                    0.072
                },
                {
                    0.424,
                    0.549,
                    0.745
                },
                {
                    0.698,
                    0.753,
                    0.894
                },
                1
            };
            sunrise[] = {
                0,
                {
                    0.675,
                    0.69,
                    0.784
                },
                {
                    0.478,
                    0.51,
                    0.659
                },
                {
                    0.2,
                    0.19,
                    0.07
                },
                {
                    0.124,
                    0.161,
                    0.236
                },
                {
                    {
                        0.847,
                        0.855,
                        0.965
                    },
                    0.2
                },
                {
                    {
                        0.933,
                        0.949,
                        0.996
                    },
                    2
                },
                1
            };
            earlyMorning[] = {
                3,
                {
                    {
                        0.844,
                        0.61,
                        0.469
                    },
                    0.8
                },
                {
                    0.424,
                    0.557,
                    0.651
                },
                {
                    {
                        1,
                        0.45,
                        0.2
                    },
                    1
                },
                {
                    0.12,
                    0.26,
                    0.38
                },
                {
                    {
                        0.428,
                        0.579,
                        0.743
                    },
                    2
                },
                {
                    {
                        0.844,
                        0.61,
                        0.469
                    },
                    2.7
                },
                1
            };
            midMorning[] = {
                8,
                {
                    {
                        0.822,
                        0.75,
                        0.646
                    },
                    3.8
                },
                {
                    {
                        0.383,
                        0.58,
                        0.858
                    },
                    1.3
                },
                {
                    {
                        1.3,
                        0.9,
                        0.61
                    },
                    2.8
                },
                {
                    {
                        0.12,
                        0.18,
                        0.28
                    },
                    0.5
                },
                {
                    {
                        0.322,
                        0.478,
                        0.675
                    },
                    3.5
                },
                {
                    {
                        1.0,
                        0.929,
                        0.815
                    },
                    4.7
                },
                1
            };
            morning[] = {
                16,
                {
                    {
                        1,
                        0.95,
                        0.91
                    },
                    12.2
                },
                {
                    {
                        0.12,
                        0.18,
                        0.28
                    },
                    9.2
                },
                {
                    {
                        1,
                        0.95,
                        0.91
                    },
                    11.2
                },
                {
                    {
                        0.12,
                        0.18,
                        0.28
                    },
                    8.5
                },
                {
                    {
                        0.14,
                        0.18,
                        0.24
                    },
                    11.0
                },
                {
                    {
                        0.5,
                        0.6,
                        0.9
                    },
                    13.2
                },
                1
            };
            noon[] = {
                45,
                {
                    {
                        0.98,
                        0.94,
                        0.94
                    },
                    13.8
                },
                {
                    {
                        0.2,
                        0.27,
                        0.35
                    },
                    10.8
                },
                {
                    {
                        0.98,
                        0.94,
                        0.94
                    },
                    13.8
                },
                {
                    {
                        0.2,
                        0.27,
                        0.35
                    },
                    10.8
                },
                {
                    {
                        0.5,
                        0.64,
                        1.0
                    },
                    12.0
                },
                {
                    {
                        0.5,
                        0.5,
                        0.5
                    },
                    14.8
                },
                1,
                0.5,
                0.4,
                0.5,
                0.4
            };
        };
        class DayLightingRainy: DayLightingRainy {
            deepNight[] = {-15,
                {
                    0.005,
                    0.01,
                    0.01
                },
                {
                    0.0,
                    0.002,
                    0.003
                },
                {
                    0.0,
                    0.0,
                    0.0
                },
                {
                    0.0,
                    0.0,
                    0.0
                },
                {
                    0.0,
                    0.002,
                    0.003
                },
                {
                    0.0,
                    0.002,
                    0.003
                },
                0
            };
            fullNight[] = {-5,
                {
                    0.023,
                    0.023,
                    0.023
                },
                {
                    0.02,
                    0.02,
                    0.02
                },
                {
                    0.023,
                    0.023,
                    0.023
                },
                {
                    0.02,
                    0.02,
                    0.02
                },
                {
                    0.01,
                    0.01,
                    0.02
                },
                {
                    0.08,
                    0.06,
                    0.06
                },
                0
            };
            sunMoon[] = {-3.75,
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.04,
                    0.05
                },
                {
                    0.04,
                    0.035,
                    0.04
                },
                {
                    0.11,
                    0.08,
                    0.09
                },
                0.5
            };
            earlySun[] = {-2.5,
                {
                    0.0689,
                    0.0689,
                    0.0804
                },
                {
                    0.06,
                    0.06,
                    0.07
                },
                {
                    0.0689,
                    0.0689,
                    0.0804
                },
                {
                    0.06,
                    0.06,
                    0.07
                },
                {
                    0.08,
                    0.07,
                    0.08
                },
                {
                    0.14,
                    0.1,
                    0.12
                },
                0.5
            };
            earlyMorning[] = {
                3,
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.95"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.0"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.95"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+3.0"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+4"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+5.5"
                },
                1
            };
            morning[] = {
                16,
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+5.7"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+4.5"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+5.7"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+4.5"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+7"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+8"
                },
                1
            };
            lateMorning[] = {
                25,
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+10.45"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+9.75"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+10.45"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+9.75"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+12"
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    "(-4)+12.75"
                },
                1
            };
            noon[] = {
                45,
                {
                    {
                        1,
                        1,
                        1
                    },
                    10.0
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    9.0
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    9.0
                },
                {
                    {
                        1,
                        1,
                        1
                    },
                    8.0
                },
                {
                    {
                        0.5,
                        0.64,
                        1
                    },
                    12.0
                },
                {
                    {
                        0.5,
                        0.5,
                        0.5
                    },
                    14.8
                },
                1
            };
        };
        class EnvSounds: EnvSounds {
            class Default {
                name = "$STR_CFG_ENVSOUNDS_DEFAULT";
                sound[] = {
                    "$DEFAULT$",
                    0,
                    1
                };
                soundNight[] = {
                    "$DEFAULT$",
                    0,
                    1
                };
            };
            class Rain {
                name = "$STR_DN_RAIN";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.25118864,
                    1,
                    200
                };
                soundNight[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1,
                    200
                };
            };
            class Sea {
                name = "$STR_DN_SEA";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.08912509,
                    1,
                    200
                };
                soundNight[] = {
                    "A3\Sounds_F\dummysound",
                    0.070794575,
                    1,
                    200
                };
                volume = "sea*(1-coast)";
            };
            class Coast {
                name = "$STR_A3_CfgEnvSounds_Coast0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.08912509,
                    1,
                    200
                };
                soundNight[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    200
                };
                volume = "coast";
            };
            class WindSlow {
                name = "$STR_A3_CfgEnvSounds_WindSlow0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.019952621,
                    1
                };
                volume = "((windy factor[0,0.25])*(windy factor[0.5, 0.25]))-(night*0.25)";
            };
            class WindMedium {
                name = "$STR_A3_CfgEnvSounds_WindMedium0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.025118863,
                    1
                };
                volume = "((windy factor[0.33,0.5])*(windy factor[0.8, 0.5]))-(night*0.25)";
            };
            class WindFast {
                name = "$STR_A3_CfgEnvSounds_WindFast0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1
                };
                volume = "(windy factor[0.66,1])-(night*0.25)";
            };
            class Forest {
                name = "$STR_A3_CfgEnvSounds_Forest0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.017782792,
                    1
                };
                volume = "forest*trees*(1-night)";
                randSamp0[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    12,
                    100,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp1[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    12,
                    100,
                    0.1,
                    10,
                    35,
                    60
                };
                randSamp2[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    12,
                    100,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp3[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    12,
                    100,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp4[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp5[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    80,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp6[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    50
                };
                randSamp7[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    40,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp8[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    50,
                    0.1,
                    10,
                    25,
                    40
                };
                random[] = {
                    "randSamp0",
                    "randSamp1",
                    "randSamp2",
                    "randSamp3",
                    "randSamp4",
                    "randSamp5",
                    "randSamp6",
                    "randSamp7",
                    "randSamp8"
                };
            };
            class ForestNight {
                name = "$STR_A3_CfgEnvSounds_ForestNight0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.011220184,
                    1
                };
                volume = "forest*trees*night";
                randSamp0[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp1[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    35,
                    60
                };
                randSamp2[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp3[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp4[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp5[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1,
                    70,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp6[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    10,
                    0.1,
                    10,
                    25,
                    50
                };
                randSamp7[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    40,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp8[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    30,
                    0.1,
                    10,
                    25,
                    40
                };
                random[] = {
                    "randSamp0",
                    "randSamp1",
                    "randSamp2",
                    "randSamp3",
                    "randSamp4",
                    "randSamp5",
                    "randSamp6",
                    "randSamp7",
                    "randSamp8"
                };
            };
            class Houses {
                name = "$STR_A3_CfgEnvSounds_Houses0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.01584893,
                    1
                };
                volume = "(houses-0.75)*4";
                randSamp0[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp1[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    35,
                    60
                };
                randSamp2[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp3[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp4[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp5[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1,
                    100,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp6[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    15,
                    0.1,
                    10,
                    25,
                    50
                };
                randSamp7[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp8[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    25,
                    0.1,
                    10,
                    25,
                    40
                };
                random[] = {
                    "randSamp0",
                    "randSamp1",
                    "randSamp2",
                    "randSamp3",
                    "randSamp4",
                    "randSamp5",
                    "randSamp6",
                    "randSamp7",
                    "randSamp8"
                };
            };
            class HousesNight {
                name = "$STR_A3_CfgEnvSounds_HousesNight0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.014125374,
                    1
                };
                volume = "(houses-0.75)*4*night";
                randSamp0[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp1[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    35,
                    60
                };
                randSamp2[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp3[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp4[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    80,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp5[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1,
                    80,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp6[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    15,
                    0.1,
                    10,
                    25,
                    50
                };
                randSamp7[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    15,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp8[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    30,
                    0.1,
                    10,
                    25,
                    40
                };
                random[] = {
                    "randSamp0",
                    "randSamp1",
                    "randSamp2",
                    "randSamp3",
                    "randSamp4",
                    "randSamp5",
                    "randSamp6",
                    "randSamp7",
                    "randSamp8"
                };
            };
            class Meadows {
                name = "$STR_A3_CfgEnvSounds_Meadows0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.01584893,
                    1
                };
                volume = "(1-forest)*(1-houses)*(1-night)*(1-sea)";
                randSamp0[] = {
                    "A3\Sounds_F\dummysound",
                    0.06309573,
                    1,
                    70,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp1[] = {
                    "A3\Sounds_F\dummysound",
                    0.06309573,
                    1,
                    100,
                    0.12,
                    15,
                    25,
                    30
                };
                randSamp2[] = {
                    "A3\Sounds_F\dummysound",
                    0.06309573,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp3[] = {
                    "A3\Sounds_F\dummysound",
                    0.06309573,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp4[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp5[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1,
                    100,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp6[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    50
                };
                randSamp7[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp8[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    40
                };
                random[] = {
                    "randSamp0",
                    "randSamp1",
                    "randSamp2",
                    "randSamp3",
                    "randSamp4",
                    "randSamp5",
                    "randSamp6",
                    "randSamp7",
                    "randSamp8"
                };
            };
            class MeadowsNight {
                name = "$STR_A3_CfgEnvSounds_MeadowsNight0";
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.011220184,
                    1
                };
                volume = "(1-forest)*(1-houses)*night*(1-sea)";
                randSamp0[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp1[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    35,
                    60
                };
                randSamp2[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp3[] = {
                    "A3\Sounds_F\dummysound",
                    0.099999994,
                    1,
                    100,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp4[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    80,
                    0.12,
                    10,
                    25,
                    40
                };
                randSamp5[] = {
                    "A3\Sounds_F\dummysound",
                    0.031622775,
                    1,
                    80,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp6[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    50
                };
                randSamp7[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    40
                };
                randSamp8[] = {
                    "A3\Sounds_F\dummysound",
                    0.05623413,
                    1,
                    20,
                    0.1,
                    10,
                    25,
                    40
                };
                random[] = {
                    "randSamp0",
                    "randSamp1",
                    "randSamp2",
                    "randSamp3",
                    "randSamp4",
                    "randSamp5",
                    "randSamp6",
                    "randSamp7",
                    "randSamp8"
                };
            };
            class BattlefieldExplosions {
                sound0[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0,
                    1000,
                    0.2,
                    5,
                    10,
                    15
                };
                sound1[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0,
                    1000,
                    0.2,
                    5,
                    10,
                    15
                };
                sound2[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0,
                    1000,
                    0.2,
                    5,
                    10,
                    15
                };
                sound3[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0,
                    1000,
                    0.2,
                    5,
                    10,
                    15
                };
                sound4[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0,
                    1000,
                    0.2,
                    5,
                    10,
                    15
                };
                random[] = {
                    "sound0",
                    "sound1",
                    "sound2",
                    "sound3",
                    "sound4"
                };
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
            };
            class BattlefieldExplosions1 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldExplosions2 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldExplosions3 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldExplosions4 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldExplosions5 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldFirefight1 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldFirefight2 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldFirefight3 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldFirefight4 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldHeli1 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldHeli2 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldHeli3 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldJet1 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldJet2 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class BattlefieldJet3 {
                sound[] = {
                    "A3\Sounds_F\dummysound",
                    0.31622776,
                    1.0
                };
                titles[] = {};
            };
            class Earthquake_01 {
                sound[] = {
                    "\A3\Sounds_F\dummysound",
                    3.1622777,
                    1.0
                };
                name = "$STR_A3_SOUNDS_EARTHQUAKE1";
                titles[] = {};
            };
            class Earthquake_02 {
                sound[] = {
                    "\A3\Sounds_F\dummysound",
                    3.1622777,
                    1.0
                };
                name = "$STR_A3_SOUNDS_EARTHQUAKE2";
                titles[] = {};
            };
            class Earthquake_03 {
                sound[] = {
                    "\A3\Sounds_F\dummysound",
                    3.1622777,
                    1.0
                };
                name = "$STR_A3_SOUNDS_EARTHQUAKE3";
                titles[] = {};
            };
            class Earthquake_04 {
                sound[] = {
                    "\A3\Sounds_F\dummysound",
                    3.1622777,
                    1.0
                };
                name = "$STR_A3_SOUNDS_EARTHQUAKE4";
                titles[] = {};
            };
        };
        class Clutter {
            class StrBigFallenBranches_pine: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_bigFallenBranches_pine.p3d";
                affectedByWind = 0.0;
                swLighting = 0;
                scaleMin = 0.3;
                scaleMax = 0.7;
            };
            class StrBigFallenBranches_pine02: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_bigFallenBranches_pine02.p3d";
                affectedByWind = 0.0;
                swLighting = 0;
                scaleMin = 0.3;
                scaleMax = 0.7;
            };
            class StrBigFallenBranches_pine03: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_bigFallenBranches_pine03.p3d";
                affectedByWind = 0.0;
                swLighting = 0;
                scaleMin = 0.3;
                scaleMax = 0.7;
            };
            class StrGrassGreenGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrGrassGreen_group.p3d";
                affectedByWind = 0.6;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1.0;
            };
            class StrGrassDry: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrGrassDry.p3d";
                affectedByWind = 0.5;
                swLighting = 1;
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class StrGrassDryGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrGrassDry_group.p3d";
                affectedByWind = 0.65;
                swLighting = 1;
                scaleMin = 0.65;
                scaleMax = 1.0;
            };
            class StrGrassDryMediumGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrGrassDryMedium_group.p3d";
                affectedByWind = 0.7;
                swLighting = 1;
                scaleMin = 0.8;
                scaleMax = 1.0;
            };
            class StrThornKhakiSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornKhaki.p3d";
                affectedByWind = 0.05;
                swLighting = 0;
                scaleMin = 0.5;
                scaleMax = 0.7;
            };
            class StrThornKhakiBig: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornKhaki.p3d";
                affectedByWind = 0.05;
                swLighting = 0;
                scaleMin = 0.7;
                scaleMax = 0.9;
            };
            class StrThornGreenSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGreen.p3d";
                affectedByWind = 0.05;
                swLighting = 0;
                scaleMin = 0.3;
                scaleMax = 0.5;
            };
            class StrThornGreenBig: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGreen.p3d";
                affectedByWind = 0.05;
                swLighting = 0;
                scaleMin = 0.7;
                scaleMax = 0.9;
            };
            class StrThornGraySmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGray.p3d";
                affectedByWind = 0.05;
                swLighting = 0;
                scaleMin = 0.5;
                scaleMax = 0.7;
            };
            class StrThornGrayBig: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThornGray.p3d";
                affectedByWind = 0.05;
                swLighting = 0;
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class StrPlantGreenShrub: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrPlantGreenShrub.p3d";
                affectedByWind = 0.5;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 1.1;
            };
            class StrPlantGermaderGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrPlantGermader_group.p3d";
                affectedByWind = 0.35;
                swLighting = 1;
                scaleMin = 0.9;
                scaleMax = 1.5;
            };
            class StrWeedBrownTallGroup: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrWeedBrownTall_group.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.9;
                scaleMax = 1.25;
            };
            class StrWeedGreenTall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrWeedGreenTall.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.8;
                scaleMax = 1.2;
            };
            class StrPlantMullein: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrPlantMullein.p3d";
                affectedByWind = 0.35;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1.15;
            };
            class StrThistlePurpleSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThistlePurple_small.p3d";
                affectedByWind = 0.1;
                swLighting = 1;
                scaleMin = 0.9;
                scaleMax = 1.4;
            };
            class StrThistleSmallYellow: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThistleSmallYellow.p3d";
                affectedByWind = 0.2;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 1.4;
            };
            class StrThistleYellowShrub: DefaultClutter {
                model = "A3\plants_f\Clutter\c_StrThistleYellowShrub.p3d";
                affectedByWind = 0.2;
                swLighting = 1;
                scaleMin = 0.7;
                scaleMax = 1.1;
            };
            class GrassTall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_Tall_Dead.p3d";
                affectedByWind = 1.0;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 1.0;
            };
            class GrassGreen: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_Green.p3d";
                affectedByWind = 1.0;
                swLighting = 1;
                scaleMin = 0.85;
                scaleMax = 1.0;
                surfaceColor[] = {
                    0.431,
                    0.475,
                    0.267
                };
            };
            class GrassDry: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_Dry.p3d";
                affectedByWind = 1.0;
                swLighting = 1;
                scaleMin = 0.3;
                scaleMax = 0.9;
            };
            class GrassBrushHighGreen: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_BrushHigh_Green.p3d";
                affectedByWind = 0.8;
                swLighting = 1;
                scaleMin = 0.5;
                scaleMax = 0.7;
            };
            class GrassBunchSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Grass_Bunch_Small.p3d";
                affectedByWind = 0.8;
                swLighting = 1;
                scaleMin = 0.3;
                scaleMax = 0.8;
            };
            class ThistleHighDead: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_High_Dead.p3d";
                affectedByWind = 1.0;
                swLighting = 1;
                scaleMin = 0.4;
                scaleMax = 0.8;
            };
            class ThistleHigh: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_High.p3d";
                affectedByWind = 0.6;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 1.0;
            };
            class ThistleSmallYellow: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Small_Yellow.p3d";
                affectedByWind = 0.3;
                swLighting = 1;
                scaleMin = 0.3;
                scaleMax = 0.9;
            };
            class ThistleThornGreen: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d";
                affectedByWind = 0.3;
                swLighting = 0;
                scaleMin = 0.3;
                scaleMax = 1.0;
            };
            class ThistleThornGreenSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Green.p3d";
                affectedByWind = 0.25;
                swLighting = 0;
                scaleMin = 0.4;
                scaleMax = 0.7;
            };
            class ThistleThornBrown: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d";
                affectedByWind = 0.3;
                swLighting = 0;
                scaleMin = 0.5;
                scaleMax = 1.2;
            };
            class ThistleThornBrownSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Brown.p3d";
                affectedByWind = 0.25;
                swLighting = 0;
                scaleMin = 0.3;
                scaleMax = 0.7;
            };
            class ThistleThornGray: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Gray.p3d";
                affectedByWind = 0.3;
                swLighting = 0;
                scaleMin = 1.1;
                scaleMax = 1.4;
            };
            class ThistleThornDesert: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Thistle_Thorn_Desert.p3d";
                affectedByWind = 0.3;
                swLighting = 0;
                scaleMin = 0.4;
                scaleMax = 1.4;
            };
            class PlantGreenSmall: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Plant_Green_Small.p3d";
                affectedByWind = 0.7;
                swLighting = 1;
                scaleMin = 0.5;
                scaleMax = 1.1;
            };
            class FlowerCakile: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Flower_Cakile.p3d";
                affectedByWind = 0.4;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 0.8;
            };
            class FlowerLowYellow2: DefaultClutter {
                model = "A3\plants_f\Clutter\c_Flower_Low_Yellow2.p3d";
                affectedByWind = 0.4;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 1.0;
            };
            class GrassCrookedDead: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassCrooked.p3d";
                affectedByWind = 0.6;
                swLighting = 1;
                scaleMin = 0.8;
                scaleMax = 1.1;
            };
            class GrassTalltwo: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassTall.p3d";
                affectedByWind = 0.8;
                swLighting = 1;
                scaleMin = 0.75;
                scaleMax = 1.15;
            };
            class GrassLong_DryBunch: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassLong_DryBunch.p3d";
                affectedByWind = 0.8;
                swLighting = 1;
                scaleMin = 0.9;
                scaleMax = 1.2;
            };
            class GrassDesertGroupSoft: DefaultClutter {
                model = "A3\plants_f\Clutter\c_GrassGreen_GroupSoft.p3d";
                affectedByWind = 1.0;
                swLighting = 1;
                scaleMin = 0.6;
                scaleMax = 1.1;
            };
            class SeaWeed1: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_SeaWeed1.p3d";
                affectedByWind = 0.2;
                swLighting = 0;
                scaleMin = 0.4;
                scaleMax = 1.0;
            };
            class SeaWeed2: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_SeaWeed2.p3d";
                affectedByWind = 0.2;
                swLighting = 0;
                scaleMin = 0.3;
                scaleMax = 1.0;
            };
            class Coral1: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_Coral1.p3d";
                affectedByWind = 0.0;
                swLighting = 0;
                scaleMin = 0.3;
                scaleMax = 1.0;
            };
            class Coral2: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_Coral2.p3d";
                affectedByWind = 0.0;
                swLighting = 0;
                scaleMin = 0.3;
                scaleMax = 1.0;
            };
            class Coral3: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_Coral3.p3d";
                affectedByWind = 0.1;
                swLighting = 0;
                scaleMin = 0.3;
                scaleMax = 0.5;
            };
            class Coral4: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_Coral4.p3d";
                affectedByWind = 0.1;
                swLighting = 0;
                scaleMin = 0.3;
                scaleMax = 1.0;
            };
            class Coral5: DefaultClutter {
                model = "A3\Plants_F\Clutter\c_Coral5.p3d";
                affectedByWind = 0.05;
                swLighting = 0;
                scaleMin = 0.2;
                scaleMax = 0.6;
            };
        };
        class Ambient {};
        class AmbientA3 {
            maxCost = 500;
            class Radius440_500 {
                areaSpawnRadius = 70.0;
                areaMaxRadius = 200.0;
                spawnCircleRadius = 30.0;
                spawnInterval = 4.7;
                class Species {
                    class Kestrel_random_F {
                        maxCircleCount = "((1 - night) * 2 * (1 - (WaterDepth interpolate [1,30,0,1])) + (2 * (hills))) * (1 - night) * (1-rain)";
                        maxWorldCount = 5;
                        cost = 3;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 200;
                        minAlt = -10;
                    };
                    class Seagull {
                        maxCircleCount = "((sea * (1 - night)) + (2 * houses * sea)) * (1 - night)";
                        maxWorldCount = 40;
                        cost = 3;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 200;
                        minAlt = -10;
                    };
                    class Rabbit_F {
                        maxCircleCount = "(20 * (0.1 - houses)) * (1 - sea) * (1-rain)";
                        maxWorldCount = 5;
                        cost = 5;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 80;
                        minAlt = -5;
                    };
                };
            };
            class Radius40_60 {
                areaSpawnRadius = 50.0;
                areaMaxRadius = 83.0;
                spawnCircleRadius = 10.0;
                spawnInterval = 1.5;
                class Species {
                    class CatShark_F {
                        maxCircleCount = "(4 * (WaterDepth interpolate [1,30,0,1]))";
                        maxWorldCount = 10;
                        cost = 6;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                    class Turtle_F {
                        maxCircleCount = "(2 * (waterDepth interpolate [1,16,0,1]) * ((1-houses) * (1-houses)))";
                        maxWorldCount = 6;
                        cost = 5;
                        spawnCount = 1;
                        groupSpawnRadius = 10;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                    class Snake_random_F {
                        maxCircleCount = "(1 - houses) * ((2 * (1 - sea)) + (2 * (meadow)))";
                        maxWorldCount = 3;
                        cost = 5;
                        spawnCount = 1;
                        groupSpawnRadius = 5;
                        maxAlt = 40;
                        minAlt = -5;
                    };
                    class Salema_F {
                        maxCircleCount = "(12 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
                        maxWorldCount = 40;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                    class Ornate_random_F {
                        maxCircleCount = "(12 * ((WaterDepth interpolate [1,30,0,1]) + 0.05))";
                        maxWorldCount = 30;
                        cost = 5;
                        spawnCount = 3;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                    class Mackerel_F {
                        maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
                        maxWorldCount = 14;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                    class Mullet_F {
                        maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) + 0.07))";
                        maxWorldCount = 14;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                    class Tuna_F {
                        maxCircleCount = "(8 * ((WaterDepth interpolate [1,30,0,1]) - 0.2))";
                        maxWorldCount = 10;
                        cost = 5;
                        spawnCount = 2;
                        groupSpawnRadius = 5;
                        maxAlt = 10;
                        minAlt = -80;
                    };
                };
            };
            class Radius30_40 {
                areaSpawnRadius = 30.0;
                areaMaxRadius = 40.0;
                spawnCircleRadius = 3.0;
                spawnInterval = 3.75;
                class Species {
                    class DragonFly {
                        maxCircleCount = "4 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * sea * (1 - windy) * (1-rain)";
                        maxWorldCount = 4;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class ButterFly_random {
                        maxCircleCount = "3 * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy) * (1-rain)";
                        maxWorldCount = 6;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FireFly {
                        maxCircleCount = "(6 * night) * (1 - sea) * (1 - houses) * (1 - windy) * (1-rain)";
                        maxWorldCount = 20;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 3;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class Cicada {
                        maxCircleCount = "(4 * night) * (1 - sea) * (1 - windy) * (1-rain)";
                        maxWorldCount = 6;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 3;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                };
            };
            class Radius15_20 {
                areaSpawnRadius = 15.0;
                areaMaxRadius = 20.0;
                spawnCircleRadius = 2.0;
                spawnInterval = 2.85;
                class Species {
                    class FxWindGrass1 {
                        maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.5;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FxWindGrass2 {
                        maxCircleCount = "2 * (1 - (WaterDepth interpolate [1,30,0,1])) * (windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.5;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FxWindLeaf1 {
                        maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.5;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FxWindLeaf2 {
                        maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.5;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FxWindLeaf3 {
                        maxCircleCount = "2 * (trees + 0.5) * (windy interpolate [0.1,0.25,0,1])";
                        maxWorldCount = 3;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 2.5;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FxWindPollen1 {
                        maxCircleCount = "(3 * (1 - (WaterDepth interpolate [1,30,0,1]))) * (windy interpolate [0.05,0.15,0,1])";
                        maxWorldCount = 6;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FxWindPaper1 {
                        maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
                        maxWorldCount = 2;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class FxWindPlastic1 {
                        maxCircleCount = "(4 * (1 - (WaterDepth interpolate [1,30,0,1])) * houses) * windy";
                        maxWorldCount = 2;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                };
            };
            class Radius6_10 {
                areaSpawnRadius = 6.0;
                areaMaxRadius = 10.0;
                spawnCircleRadius = 1.0;
                spawnInterval = 0.1;
                class Species {
                    class HoneyBee {
                        maxCircleCount = "4 * (1 - night) * (1 - sea) * (1 - houses) * (1 - windy) * (1-rain)";
                        maxWorldCount = 8;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class HouseFly {
                        maxCircleCount = "(3 + 3 * (houses)) * (1 - night) * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy) * (1-rain)";
                        maxWorldCount = 10;
                        cost = 1;
                        spawnCount = 3;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                    class Mosquito {
                        maxCircleCount = "3 * (1 - (WaterDepth interpolate [1,30,0,1])) * (1 - windy) * (1-rain)";
                        maxWorldCount = 2;
                        cost = 1;
                        spawnCount = 1;
                        groupSpawnRadius = 1;
                        maxAlt = 30;
                        minAlt = -5;
                    };
                };
            };
        };
        loadingTexts[] = {
            "DustyRoads"
        };
        class Names {
            class Elizabeth {
                name = "Elizabeth";
                position[] = {
                    5398.36,
                    1412.77
                };
                type = "NameCity";
                radiusA = 148.51;
                radiusB = 114.21;
                angle = 0.0;
            };
            class NativeAmericanT1 {
                name = "Native American Territory";
                position[] = {
                    8923.27,
                    3627.92
                };
                type = "NameVillage";
                radiusA = 735.91;
                radiusB = 493.38;
                angle = 0.0;
            };
            class NativeAmericanT2 {
                name = "Native American Territory";
                position[] = {
                    1161.69,
                    3149.64
                };
                type = "NameVillage";
                radiusA = 470.98;
                radiusB = 315.76;
                angle = 0.0;
            };
            class HenryvilleDoc {
                name = "Henryville Doc";
                position[] = {
                    5581.11,
                    5589.94
                };
                type = "NameMarine";
                radiusA = 150.71;
                radiusB = 101.04;
                angle = 0.0;
            };
            class FortChurchillDoc {
                name = "Fort Churchill Doc";
                position[] = {
                    6425.5,
                    5019.98
                };
                type = "NameMarine";
                radiusA = 188.39;
                radiusB = 126.31;
                angle = 0.0;
            };
            class SpringsDoc {
                name = "Springs Doc";
                position[] = {
                    8466.06,
                    5214.81
                };
                type = "NameMarine";
                radiusA = 188.39;
                radiusB = 126.31;
                angle = 0.0;
            };
            class Springs {
                name = "Springs";
                position[] = {
                    8560.5,
                    5309.85
                };
                type = "NameVillage";
                radiusA = 301.43;
                radiusB = 202.09;
                angle = 0.0;
            };
            class NativeAmericanT3 {
                name = "Native American Territory";
                position[] = {
                    8459.11,
                    8467.9
                };
                type = "NameLocal";
                radiusA = 651.61;
                radiusB = 436.86;
                angle = 0.0;
            };
            class FarWater {
                name = "Far Water";
                position[] = {
                    6193.39,
                    3996.48
                };
                type = "NameVillage";
                radiusA = 376.79;
                radiusB = 252.61;
                angle = 0.0;
            };
            class FarWaterlake {
                name = "Far Water Lake";
                position[] = {
                    5912.98,
                    4103.47
                };
                type = "NameMarine";
                radiusA = 238.18;
                radiusB = 159.68;
                angle = 0.0;
            };
            class GreatSlaveLake {
                name = "Great Slave Lake";
                position[] = {
                    6165.07,
                    5679.32
                };
                type = "NameMarine";
                radiusA = 581.49;
                radiusB = 389.85;
                angle = 0.0;
            };
            class RainyLake {
                name = "Rainy Lake";
                position[] = {
                    7017.48,
                    3408.3
                };
                type = "NameMarine";
                radiusA = 908.58;
                radiusB = 609.14;
                angle = 0.0;
            };
            class MurrayRiver {
                name = "Murray River";
                position[] = {
                    9133.77,
                    5046.46
                };
                type = "NameMarine";
                radiusA = 574.36;
                radiusB = 385.07;
                angle = 0.0;
            };
            class Henryville {
                name = "Henryville";
                position[] = {
                    4786.46,
                    5509.85
                };
                type = "NameCityCapital";
                radiusA = 149.26;
                radiusB = 114.52;
                angle = 0.0;
            };
            class Studhorse {
                name = "Studhorse";
                position[] = {
                    4745.52,
                    7796.33
                };
                type = "NameLocal";
                radiusA = 168.57;
                radiusB = 129.34;
                angle = 0.0;
            };
            class StudhorseFarm {
                name = "Studhorse Farm";
                position[] = {
                    5213.56,
                    7745.68
                };
                type = "NameLocal";
                radiusA = 93.12;
                radiusB = 71.44;
                angle = 0.0;
            };
            class PublicFarm2 {
                name = "Public Farm";
                position[] = {
                    4834.97,
                    5546.26
                };
                type = "NameLocal";
                radiusA = 69.43;
                radiusB = 46.19;
                angle = 0.0;
            };
            class jabridge {
                name = "Jabridge";
                position[] = {
                    3684.95,
                    8375.36
                };
                type = "Hill";
                radiusA = 68.58;
                radiusB = 45.63;
                angle = 0.0;
            };
            class OldRainworthFort {
                name = "Old Rainworth Fort";
                position[] = {
                    3215.27,
                    2912.81
                };
                type = "NameLocal";
                radiusA = 115.53;
                radiusB = 112.97;
                angle = 0.0;
            };
            class Prsion {
                name = "Death Valley Prsion";
                position[] = {
                    6777.47,
                    6525.85
                };
                type = "NameVillage";
                radiusA = 203.87;
                radiusB = 199.35;
                angle = 0.0;
            };
            class LakeBalaton {
                name = "Lake Balaton";
                position[] = {
                    8892.67,
                    1452.18
                };
                type = "NameMarine";
                radiusA = 908.58;
                radiusB = 609.14;
                angle = 0.0;
            };
            class NativeAmericanT4 {
                name = "Native American Territory";
                position[] = {
                    6750.61,
                    4186.64
                };
                type = "NameVillage";
                radiusA = 37.86;
                radiusB = 37.02;
                angle = 0.0;
            };
            class WoodCutters1 {
                name = "Wood Cutters";
                position[] = {
                    6949.73,
                    6097.87
                };
                type = "NameLocal";
                radiusA = 36.09;
                radiusB = 31.15;
                angle = 0.0;
            };
            class BasqueLake {
                name = "Basque Lake";
                position[] = {
                    7108.73,
                    4686.83
                };
                type = "NameVillage";
                radiusA = 47.31;
                radiusB = 40.83;
                angle = 0.0;
            };
            class Tightridge {
                name = "Tightridge";
                position[] = {
                    4830.22,
                    3454.14
                };
                type = "NameVillage";
                radiusA = 92.39;
                radiusB = 79.74;
                angle = 0.0;
            };
            class Gov {
                name = "Governor's Mansion";
                position[] = {
                    2922.72,
                    4810.0
                };
                type = "NameVillage";
                radiusA = 30.27;
                radiusB = 26.13;
                angle = 0.0;
            };
            class NativeAmericanT5 {
                name = "Native American Territory";
                position[] = {
                    6929.64,
                    4582.29
                };
                type = "NameVillage";
                radiusA = 35.81;
                radiusB = 30.9;
                angle = 0.0;
            };
            class Fort_Churchill {
                name = "Fort Churchill";
                position[] = {
                    6398.42,
                    5216.45
                };
                type = "NameLocal";
                radiusA = 511.83;
                radiusB = 393.64;
                angle = 0.0;
            };
            class Drfitwood {
                name = "Driftwood";
                position[] = {
                    7002.92,
                    6039.53
                };
                type = "NameVillage";
                radiusA = 42.89;
                radiusB = 37.02;
                angle = 0.0;
            };
        };
    };
};
class CfgWorldList {
    class DustyRoads {};
};
class CfgSoundEnvironToControllers {
    class grass;
    class sand;
    class dirt;
    class road;
    class forest;
    class rock;
    class grass_exp: grass {};
    class grasstall_exp: grass {};
    class sand_exp: sand {};
    class dirt_exp: dirt {};
    class asphalt_exp: road {};
    class forest_exp: forest {};
    class stones_exp: rock {};
};
class CfgSurfaces {
    class Default {};
    class Water {};
    class GdtStratisConcrete: Default {
        files = "gdt_strconcrete_*";
        character = "Empty";
        soundEnviron = "concrete";
        soundHit = "concrete";
        rough = 0.05;
        maxSpeedCoef = 1;
        dust = 0.15;
        lucidity = 0.3;
        grassCover = 0.0;
        impact = "hitConcrete";
        maxClutterColoringCoef = 1.35;
    };
    class GdtStratisBeach: Default {
        files = "gdt_strbeach_*";
        character = "Empty";
        soundEnviron = "sand";
        soundHit = "soft_ground";
        rough = 0.1;
        maxSpeedCoef = 0.8;
        dust = 0.5;
        lucidity = 1.25;
        grassCover = 0.0;
        impact = "hitGroundSoft";
        surfaceFriction = 1.6;
        maxClutterColoringCoef = 1.35;
    };
    class GdtStratisDirt: Default {
        files = "gdt_strdirt_*";
        character = "Empty";
        soundEnviron = "dirt";
        soundHit = "soft_ground";
        rough = 0.09;
        maxSpeedCoef = 0.9;
        dust = 0.5;
        lucidity = 1;
        grassCover = 0.03;
        impact = "hitGroundSoft";
        surfaceFriction = 1.8;
        maxClutterColoringCoef = 1.35;
    };
    class GdtStratisSeabedCluttered: Default {
        files = "gdt_strseabed_*";
        character = "SeabedClutter";
        soundEnviron = "gravel";
        soundHit = "hard_ground";
        rough = 0.15;
        maxSpeedCoef = 0.85;
        dust = 0.75;
        lucidity = 200;
        grassCover = 0.05;
        surfaceFriction = 1.4;
        maxClutterColoringCoef = 1.35;
    };
    class GdtStratisSeabed: Default {
        files = "gdt_strdeepsea_*";
        character = "Empty";
        soundEnviron = "gravel";
        soundHit = "hard_ground";
        rough = 0.15;
        maxSpeedCoef = 0.85;
        dust = 0.75;
        lucidity = 150;
        grassCover = 0.0;
        surfaceFriction = 1.4;
        maxClutterColoringCoef = 1.35;
    };
    class GdtStratisDryGrass: Default {
        files = "gdt_strdrygrass_*";
        character = "StratisDryGrassClutter";
        soundEnviron = "drygrass";
        soundHit = "soft_ground";
        rough = 0.08;
        maxSpeedCoef = 0.9;
        dust = 0.75;
        lucidity = 2;
        grassCover = 0.1;
        impact = "hitGroundSoft";
        surfaceFriction = 1.75;
        maxClutterColoringCoef = 1.35;
    };
    class GdtStratisGreenGrass: Default {
        files = "gdt_strgreengrass_*";
        character = "StratisGreenGrassClutter";
        soundEnviron = "grass";
        soundHit = "soft_ground";
        rough = 0.08;
        maxSpeedCoef = 0.9;
        dust = 0.15;
        lucidity = 4;
        grassCover = 0.05;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
        maxClutterColoringCoef = 1.35;
    };
    class GdtStratisRocky: Default {
        files = "gdt_strrocky_*";
        character = "StratisRockyClutter";
        soundEnviron = "gravel";
        soundHit = "hard_ground";
        rough = 0.12;
        maxSpeedCoef = 0.85;
        dust = 0.4;
        lucidity = 1.5;
        grassCover = 0.02;
        impact = "hitGroundHard";
        surfaceFriction = 1.9;
        maxClutterColoringCoef = 1.35;
    };
    class GdtStratisThistles: Default {
        files = "gdt_strthistles_*";
        character = "StratisThistlesClutter";
        soundEnviron = "stony";
        soundHit = "soft_ground";
        rough = 0.12;
        maxSpeedCoef = 0.8;
        dust = 0.6;
        lucidity = 3.5;
        grassCover = 0.0;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
        maxClutterColoringCoef = 1.35;
    };
    class GdtStratisForestPine: Default {
        files = "gdt_strforest_pine_*";
        character = "StratisForestPineClutter";
        soundEnviron = "drygrass";
        soundHit = "soft_ground";
        rough = 0.12;
        maxSpeedCoef = 0.8;
        dust = 0.4;
        lucidity = 3.5;
        grassCover = 0.04;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
        maxClutterColoringCoef = 1.35;
    };
    class GdtForestPine: Default {
        files = "gdt_forest_pine_*";
        character = "ForestPineClutter";
        soundEnviron = "drygrass";
        soundHit = "soft_ground";
        rough = 0.12;
        maxSpeedCoef = 0.8;
        dust = 0.4;
        lucidity = 3.5;
        grassCover = 0.04;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
        maxClutterColoringCoef = 1.35;
    };
    class GdtConcrete: Default {
        files = "gdt_concrete_*";
        character = "Empty";
        soundEnviron = "concrete";
        soundHit = "concrete";
        rough = 0.05;
        maxSpeedCoef = 1;
        dust = 0.05;
        lucidity = 0.3;
        grassCover = 0.0;
        impact = "hitConcrete";
        maxClutterColoringCoef = 1.35;
    };
    class GdtSoil: Default {
        files = "gdt_soil_*";
        character = "Empty";
        soundEnviron = "dirt";
        soundHit = "soft_ground";
        rough = 0.09;
        maxSpeedCoef = 0.9;
        dust = 0.5;
        lucidity = 1;
        grassCover = 0.0;
        surfaceFriction = 1.8;
        maxClutterColoringCoef = 1.35;
    };
    class GdtBeach: Default {
        files = "gdt_beach_*";
        character = "Empty";
        soundEnviron = "sand";
        soundHit = "soft_ground";
        rough = 0.1;
        maxSpeedCoef = 0.9;
        dust = 0.83;
        lucidity = 1.25;
        grassCover = 0.0;
        impact = "hitGroundSoft";
        surfaceFriction = 1.6;
        maxClutterColoringCoef = 1.35;
    };
    class GdtRock: Default {
        files = "gdt_rock_*";
        character = "Empty";
        soundEnviron = "rock";
        soundHit = "hard_ground";
        rough = 0.2;
        maxSpeedCoef = 0.8;
        dust = 0.5;
        lucidity = 1;
        grassCover = 0.0;
        impact = "hitGroundHard";
        surfaceFriction = 1.9;
        maxClutterColoringCoef = 1.35;
    };
    class GdtDead: Default {
        files = "gdt_dead_*";
        character = "Empty";
        soundEnviron = "sand";
        soundHit = "soft_ground";
        maxSpeedCoef = 1.0;
        rough = 0.05;
        dust = 0.4;
        lucidity = 0.5;
        grassCover = 0.0;
        impact = "hitGroundSoft";
        surfaceFriction = 2.5;
        maxClutterColoringCoef = 1.35;
    };
    class GdtDirt: Default {
        files = "gdt_dirt_*";
        character = "GrassDryClutter";
        soundEnviron = "dirt";
        soundHit = "hard_ground";
        rough = 0.09;
        maxSpeedCoef = 0.9;
        dust = 0.5;
        lucidity = 1;
        grassCover = 0.03;
        impact = "hitGroundSoft";
        surfaceFriction = 1.8;
        maxClutterColoringCoef = 1.35;
    };
    class GdtDesert: Default {
        files = "gdt_desert_*";
        character = "Empty";
        soundEnviron = "sand";
        soundHit = "soft_ground";
        rough = 0.11;
        maxSpeedCoef = 0.9;
        dust = 0.5;
        lucidity = 2.5;
        grassCover = 0.0;
        impact = "hitGroundSoft";
        surfaceFriction = 1.6;
        maxClutterColoringCoef = 1.35;
    };
    class GdtGrassGreen: Default {
        files = "gdt_grass_green_*";
        character = "GrassGreenClutter";
        soundEnviron = "grass";
        soundHit = "soft_ground";
        rough = 0.08;
        maxSpeedCoef = 0.9;
        dust = 0.05;
        lucidity = 4;
        grassCover = 0.05;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
        maxClutterColoringCoef = 1.35;
    };
    class GdtGrassDry: Default {
        files = "gdt_dry_grass_*";
        character = "GrassDryClutter";
        soundEnviron = "drygrass";
        soundHit = "soft_ground";
        rough = 0.08;
        maxSpeedCoef = 0.9;
        dust = 0.5;
        lucidity = 2;
        grassCover = 0.1;
        impact = "hitGroundSoft";
        surfaceFriction = 1.75;
        maxClutterColoringCoef = 1.35;
    };
    class GdtGrassWild: Default {
        files = "gdt_wild_grass_*";
        character = "GrassWildClutter";
        soundEnviron = "drygrass";
        soundHit = "soft_ground";
        rough = 0.1;
        maxSpeedCoef = 0.9;
        dust = 0.58;
        lucidity = 2.5;
        grassCover = 0.05;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
        maxClutterColoringCoef = 1.35;
    };
    class GdtWeed: Default {
        files = "gdt_weed_*";
        character = "WeedClutter";
        soundEnviron = "drygrass";
        soundHit = "soft_ground";
        rough = 0.12;
        maxSpeedCoef = 0.9;
        dust = 0.16;
        lucidity = 2;
        grassCover = 0.05;
        impact = "hitGroundSoft";
        surfaceFriction = 1.7;
        maxClutterColoringCoef = 1.35;
    };
    class GdtThorn: Default {
        files = "gdt_thorn_*";
        character = "ThornClutter";
        soundEnviron = "stony";
        soundHit = "hard_ground";
        rough = 0.12;
        maxSpeedCoef = 0.9;
        dust = 0.43;
        lucidity = 3.5;
        grassCover = 0.15;
        impact = "hitGroundSoft";
        surfaceFriction = 1.6;
        maxClutterColoringCoef = 1.35;
    };
    class GdtStony: Default {
        files = "gdt_stony_*";
        character = "StonyClutter";
        soundEnviron = "rock";
        soundHit = "hard_ground";
        rough = 0.12;
        maxSpeedCoef = 0.9;
        dust = 0.33;
        lucidity = 1.5;
        grassCover = 0.0;
        impact = "hitGroundHard";
        surfaceFriction = 1.9;
        maxClutterColoringCoef = 1.35;
    };
    class GdtStonyThistle: Default {
        files = "gdt_thistle_stony_*";
        character = "StonyThistleClutter";
        soundEnviron = "stony";
        soundHit = "hard_ground";
        rough = 0.15;
        maxSpeedCoef = 0.85;
        dust = 0.42;
        lucidity = 1.5;
        grassCover = 0.03;
        impact = "hitGroundHard";
        surfaceFriction = 1.85;
        maxClutterColoringCoef = 1.35;
    };
    class GdtMud: Default {
        files = "gdt_mud_*";
        character = "MudClutter";
        soundEnviron = "dirt";
        soundHit = "soft_ground";
        rough = 0.15;
        maxSpeedCoef = 0.85;
        dust = 0.32;
        lucidity = 1.5;
        grassCover = 0.04;
        impact = "hitGroundHard";
        surfaceFriction = 1.7;
        maxClutterColoringCoef = 1.35;
    };
    class GdtMarsh: Default {
        files = "gdt_marsh_*";
        character = "Empty";
        soundEnviron = "dirt";
        soundHit = "soft_ground";
        rough = 0.15;
        maxSpeedCoef = 0.85;
        dust = 0.1;
        lucidity = 1.5;
        grassCover = 0.0;
        surfaceFriction = 1.5;
        maxClutterColoringCoef = 1.35;
    };
    class GdtSeabed: Default {
        files = "gdt_seabed_*";
        character = "SeabedClutter";
        soundEnviron = "gravel";
        soundHit = "hard_ground";
        rough = 0.15;
        maxSpeedCoef = 0.85;
        dust = 0.75;
        lucidity = 200;
        grassCover = 0.0;
        surfaceFriction = 1.4;
        maxClutterColoringCoef = 1.35;
    };
    class concrete: GdtStratisConcrete {
        files = "beton";
        character = "Empty";
        lucidity = 0.3;
    };
    class concrete_out: GdtStratisConcrete {
        files = "betonout";
        character = "Empty";
        lucidity = 0.3;
    };
    class concrete_inside: GdtStratisConcrete {
        files = "betonin";
        character = "Empty";
        lucidity = 0.3;
        soundEnviron = "int_concrete";
        AIAvoidStance = 1;
    };
    class dirtrunway: GdtStratisDirt {
        files = "dirtrunway*";
        maxSpeedCoef = 1;
        rough = 0.04;
        surfaceFriction = 2;
    };
    class road: GdtConcrete {
        files = "cesta*";
        character = "Empty";
    };
    class floor: GdtStratisConcrete {
        files = "dlazbaout";
        character = "Empty";
    };
    class floor_inside: GdtStratisConcrete {
        files = "dlazbain";
        character = "Empty";
        soundEnviron = "int_tiles";
        AIAvoidStance = 1;
    };
    class carpet_inside: GdtConcrete {
        files = "dum_mesto_koberec*";
        character = "Empty";
        soundEnviron = "int_concrete";
        AIAvoidStance = 1;
    };
    class carpet: GdtConcrete {
        files = "koberec*";
        character = "Empty";
        soundEnviron = "concrete";
    };
    class mud: GdtStratisDirt {
        files = "hlina*";
        character = "Empty";
    };
    class concrete_hall: concrete {
        files = "chodba_beton*";
        character = "Empty";
        soundEnviron = "int_concrete";
        AIAvoidStance = 1;
    };
    class stones: GdtStony {
        files = "kameny*";
        character = "Empty";
    };
    class cardboard: concrete {
        files = "lepenka*";
    };
    class lino: concrete {
        files = "lino*";
        soundEnviron = "int_concrete";
        AIAvoidStance = 1;
    };
    class steel: GdtStony {
        files = "ocel*";
        character = "Empty";
        soundEnviron = "metal";
        AIAvoidStance = 1;
    };
    class parquet: concrete {
        files = "parkety*";
        soundEnviron = "int_wood";
        AIAvoidStance = 1;
    };
    class sand: GdtStratisBeach {
        files = "pisek*";
        character = "Empty";
    };
    class metalPlate: steel {
        files = "plech*";
        character = "Empty";
    };
    class woodenFloor: concrete {
        files = "podlaha_prkna*";
        character = "Empty";
        soundEnviron = "int_wood";
        AIAvoidStance = 1;
    };
    class planks: GdtStratisThistles {
        files = "prknaout";
        soundEnviron = "wood";
        character = "Empty";
        maxSpeedCoef = 1;
        surfaceFriction = 2;
        rough = 0.05;
        dust = 0.15;
        lucidity = 0.3;
        grassCover = 0.0;
    };
    class planks_inside: GdtStratisThistles {
        files = "prknain";
        soundEnviron = "int_wood";
        character = "Empty";
        AIAvoidStance = 1;
        maxSpeedCoef = 1;
        surfaceFriction = 2;
        rough = 0.05;
        dust = 0.15;
        lucidity = 0.3;
        grassCover = 0.0;
    };
    class grid: steel {
        files = "rost*";
        character = "Empty";
    };
    class tiling: concrete {
        files = "tasky*";
        soundEnviron = "tiling";
        character = "Empty";
        AIAvoidStance = 1;
    };
    class wavyMetal: steel {
        files = "vlnityplech*";
        character = "Empty";
        soundEnviron = "wavymetal";
    };
    class GdtVRsurface01: Default {
        files = "gdt_vr_*";
        character = "Empty";
        soundEnviron = "virtual";
        soundHit = "soft_ground";
        rough = 0.01;
        maxSpeedCoef = 1;
        dust = 0;
        lucidity = 0.3;
        grassCover = 0.0;
        impact = "hitVirtual";
        maxClutterColoringCoef = 1.35;
    };
    class surf_metal: steel {
        files = "surf_metal*";
        soundEnviron = "metal";
        character = "Empty";
    };
    class surf_roadconcrete: GdtConcrete {
        files = "surf_roadconcrete*";
        soundEnviron = "concrete";
        character = "Empty";
    };
    class surf_roaddirt: GdtDirt {
        files = "surf_roaddirt*";
        soundEnviron = "dirt";
        character = "Empty";
    };
    class surf_roadtarmac: road {
        files = "surf_roadtarmac*";
        soundEnviron = "gravel";
        character = "Empty";
    };
    class surf_rooftiles: tiling {
        files = "surf_rooftiles*";
        soundEnviron = "tiling";
        character = "Empty";
    };
    class surf_rooftin: tiling {
        files = "surf_rooftin*";
        soundEnviron = "int_tiles";
        character = "Empty";
    };
    class surf_wood: GdtForestPine {
        files = "surf_wood*";
        soundEnviron = "wood";
        character = "Empty";
    };
    class surfint_concrete: GdtConcrete {
        files = "surfint_concrete*";
        soundEnviron = "int_concrete";
        character = "Empty";
        AIAvoidStance = 1;
    };
    class surfint_metal: steel {
        files = "surfint_metal*";
        soundEnviron = "int_metal";
        character = "Empty";
    };
    class surfint_tiles: tiling {
        files = "surfint_tiles*";
        soundEnviron = "int_tiles";
        character = "Empty";
    };
    class surfint_wood: GdtForestPine {
        files = "surfint_wood*";
        soundEnviron = "int_wood";
        character = "Empty";
        AIAvoidStance = 1;
    };
};
class CfgSurfaceCharacters {
    class StratisForestPineClutter {
        probability[] = {
            0.05,
            0.012,
            0.01,
            0.1,
            0.05
        };
        names[] = {
            "StrBigFallenBranches_pine",
            "StrBigFallenBranches_pine02",
            "StrBigFallenBranches_pine03",
            "StrGrassDryGroup",
            "StrGrassGreenGroup"
        };
    };
    class StratisDryGrassClutter {
        probability[] = {
            0.21,
            0.35,
            0.21,
            0.09,
            0.06,
            0.02
        };
        names[] = {
            "StrGrassDryGroup",
            "StrGrassDryMediumgroup",
            "StrWeedBrownTallGroup",
            "StrWeedGreenTall",
            "StrThistleYellowShrub",
            "StrPlantMullein"
        };
    };
    class StratisGreenGrassClutter {
        probability[] = {
            0.95,
            0.02,
            0.02,
            0.01
        };
        names[] = {
            "StrGrassGreenGroup",
            "StrThornGreenSmall",
            "StrThornGreenBig",
            "StrPlantGreenShrub"
        };
    };
    class StratisRockyClutter {
        probability[] = {
            0.25,
            0.22,
            0.2,
            0.06,
            0.04,
            0.02
        };
        names[] = {
            "StrGrassDry",
            "StrThistleSmallYellow",
            "StrPlantGermaderGroup",
            "StrThornGreenSmall",
            "StrPlantGreenShrub",
            "StrThornGreenBig"
        };
    };
    class StratisThistlesClutter {
        probability[] = {
            0.25,
            0.3,
            0.15,
            0.1,
            0.05,
            0.05,
            0.03
        };
        names[] = {
            "StrThornKhakiBig",
            "StrThornKhakiSmall",
            "StrThornGraySmall",
            "StrPlantGermaderGroup",
            "StrThornGreenSmall",
            "StrThornGrayBig",
            "StrThistlePurpleSmall"
        };
    };
    class StratisSeabedClutter {
        probability[] = {
            0.4,
            0.2,
            0.1,
            0.01,
            0.1,
            0.09,
            0.1
        };
        names[] = {
            "SeaWeed1",
            "SeaWeed2",
            "Coral4",
            "Coral1",
            "Coral5",
            "Coral3",
            "Coral2"
        };
    };
    class ForestPineClutter {
        probability[] = {
            0.05,
            0.012,
            0.01,
            0.1,
            0.05
        };
        names[] = {
            "StrBigFallenBranches_pine",
            "StrBigFallenBranches_pine02",
            "StrBigFallenBranches_pine03",
            "StrGrassDryGroup",
            "StrGrassGreenGroup"
        };
    };
    class DirtClutter {
        probability[] = {
            0.3,
            0.2,
            0.01,
            0.02
        };
        names[] = {
            "GrassDesertGroupSoft",
            "GrassGreen",
            "GrassBrushHighGreen",
            "ThistleSmallYellow"
        };
    };
    class GrassGreenClutter {
        probability[] = {
            0.74,
            0.02,
            0.19,
            0.05
        };
        names[] = {
            "GrassGreen",
            "ThistleThornGreen",
            "ThistleThornGreenSmall",
            "FlowerLowYellow2"
        };
    };
    class GrassDryClutter {
        probability[] = {
            0.21,
            0.35,
            0.21,
            0.09,
            0.06,
            0.02
        };
        names[] = {
            "StrGrassDryGroup",
            "StrGrassDryMediumgroup",
            "StrWeedBrownTallGroup",
            "StrWeedGreenTall",
            "StrThistleYellowShrub",
            "StrPlantMullein"
        };
    };
    class GrassWildClutter {
        probability[] = {
            0.75,
            0.05,
            0.05,
            0.1,
            0.05
        };
        names[] = {
            "StrGrassGreenGroup",
            "StrThornGreenSmall",
            "StrThornGreenBig",
            "StrPlantGreenShrub",
            "StrGrassDryMediumgroup"
        };
    };
    class WeedClutter {
        probability[] = {
            0.05,
            0.05,
            0.2,
            0.4,
            0.2,
            0.1
        };
        names[] = {
            "ThistleHighDead",
            "ThistleHigh",
            "PlantGreenSmall",
            "GrassTalltwo",
            "GrassBrushHighGreen",
            "FlowerCakile"
        };
    };
    class ThornClutter {
        probability[] = {
            0.25,
            0.3,
            0.15,
            0.1,
            0.05,
            0.05,
            0.03
        };
        names[] = {
            "StrThornKhakiBig",
            "StrThornKhakiSmall",
            "StrThornGraySmall",
            "StrPlantGermaderGroup",
            "StrThornGreenSmall",
            "StrThornGrayBig",
            "StrThistlePurpleSmall"
        };
    };
    class StonyClutter {
        probability[] = {
            0.25,
            0.22,
            0.2,
            0.06,
            0.04,
            0.02
        };
        names[] = {
            "StrGrassDry",
            "StrThistleSmallYellow",
            "StrPlantGermaderGroup",
            "StrThornGreenSmall",
            "StrPlantGreenShrub",
            "StrThornGreenBig"
        };
    };
    class MudClutter {
        probability[] = {
            0.1,
            0.1,
            0.15,
            0.2
        };
        names[] = {
            "StrWeedBrownTallGroup",
            "StrWeedGreenTall",
            "StrGrassDry",
            "ThistleHighDead"
        };
    };
    class StonyThistleClutter {
        probability[] = {
            0.1,
            0.1,
            0.15,
            0.2,
            0.2,
            0.05
        };
        names[] = {
            "StrThistlePurpleSmall",
            "StrThistleSmallYellow",
            "StrPlantMullein",
            "StrGrassDryMediumGroup",
            "StrGrassDry",
            "ThistleHighDead"
        };
    };
    class SeabedClutter {
        probability[] = {
            0.4,
            0.2,
            0.1,
            0.01,
            0.1,
            0.09,
            0.1
        };
        names[] = {
            "SeaWeed1",
            "SeaWeed2",
            "Coral4",
            "Coral1",
            "Coral5",
            "Coral3",
            "Coral2"
        };
    };
};
class CfgLensFlare {
    flarePos[] = {
        0.0,
        0.0,
        0.37,
        0.47,
        0.5,
        0.54,
        0.62,
        0.72,
        0.75,
        0.91,
        1.0,
        1.084,
        1.13,
        1.29,
        1.62,
        1.68
    };
    flareSizeCam[] = {
        0.2,
        0.4,
        0.025,
        0.05,
        0.042,
        0.043,
        0.04,
        0.75,
        0.6,
        0.7,
        0.15,
        0.85,
        0.44,
        0.45,
        0.55,
        0.1
    };
    flareBright[] = {
        1.0,
        0.3,
        0.3,
        0.3,
        0.3,
        0.4,
        0.4,
        0.05,
        0.03,
        0.12,
        0.05,
        0.08,
        0.05,
        0.2,
        0.2,
        1.0
    };
    flareSizeEye[] = {
        0.04
    };
    flareSizeEyeSun[] = {
        0.04
    };
};
