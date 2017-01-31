
 
#ifndef __SP2519YUV_SENSOR_H
#define __SP2519YUV_SENSOR_H


#define UXGA_PERIOD_PIXEL_NUMS						(1600)
#define UXGA_PERIOD_LINE_NUMS						(1200)

#define SVGA_PERIOD_PIXEL_NUMS						(800)
#define SVGA_PERIOD_LINE_NUMS						(600)

#define IMAGE_SENSOR_SVGA_GRAB_PIXELS			0
#define IMAGE_SENSOR_SVGA_GRAB_LINES			1

#define IMAGE_SENSOR_UXGA_GRAB_PIXELS			0
#define IMAGE_SENSOR_UXGA_GRAB_LINES			1

#define IMAGE_SENSOR_SVGA_WIDTH					(800)
#define IMAGE_SENSOR_SVGA_HEIGHT					(600)

#define IMAGE_SENSOR_UXGA_WIDTH					(1600-16)
#define IMAGE_SENSOR_UXGA_HEIGHT					(1200-12)

#define IMAGE_SENSOR_PV_WIDTH					(IMAGE_SENSOR_SVGA_WIDTH - 8)
#define IMAGE_SENSOR_PV_HEIGHT					(IMAGE_SENSOR_SVGA_HEIGHT - 6)

#define IMAGE_SENSOR_FULL_WIDTH					(IMAGE_SENSOR_UXGA_WIDTH - 8)
#define IMAGE_SENSOR_FULL_HEIGHT					(IMAGE_SENSOR_UXGA_HEIGHT - 6)

#define SP2519_WRITE_ID							0x60
#define SP2519_READ_ID							0x61

typedef enum
{
	Gamma_1_8 = 1,
	Gamma_2_0,
	Gamma_2_2,
	Gamma_dm_3,
	Gamma_dm_5,
	Gamma_dm_6,
	Gamma_dm_7,
	Gamma_dm_8,
	Gamma_dm_9
}SP2519_GAMMA_TAG;

UINT32 SP2519Open(void);
UINT32 SP2519Control(MSDK_SCENARIO_ID_ENUM ScenarioId, MSDK_SENSOR_EXPOSURE_WINDOW_STRUCT *pImageWindow, MSDK_SENSOR_CONFIG_STRUCT *pSensorConfigData);
UINT32 SP2519FeatureControl(MSDK_SENSOR_FEATURE_ENUM FeatureId, UINT8 *pFeaturePara,UINT32 *pFeatureParaLen);
UINT32 SP2519GetInfo(MSDK_SCENARIO_ID_ENUM ScenarioId, MSDK_SENSOR_INFO_STRUCT *pSensorInfo, MSDK_SENSOR_CONFIG_STRUCT *pSensorConfigData);
UINT32 SP2519GetResolution(MSDK_SENSOR_RESOLUTION_INFO_STRUCT *pSensorResolution);
UINT32 SP2519Close(void);

#endif /* __SENSOR_H */
