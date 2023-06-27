//
//  MMCModuleData.h
//  InaviAIR
//
//  Created by Jeoung YooJin on 1/16/13.
//  Copyright (c) 2013 Jeoung YooJin. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {
    STATUS_SUCCEED = 1,
    STATUS_OFFROAD,
    STATUS_OUT_OF_BOUND,
    STATUS_HOLD
}MMCResultStatus;


//enum { DEVICE, LOG };

//enum { SENSOR_INIT_FAIL, SENSOR_INITIALIZING, SENSOR_INIT_SUCCESS, INVALID_LOG_PATH, SENSOR_HW_ERROR };
//enum { SENSOR_STATUS_STRAIGHT, SENSOR_STATUS_LEFT, SENSOR_STATUS_RIGHT, SENSOR_STATUS_STOP };
typedef enum {
    LINKSTATE_REVERSE_OVERTWOLANE,
    LINKSTATE_RIGHT,
    LINKSTATE_REVERSE_ONELANE
}MMCCurRoadMMStatus;

typedef enum {
    LINKINFO_SERVICEAREA = 1,
    LINKINFO_ROADINZONE
}MMCResultLinkInfo;

//enum { SAVEZONE_STOP = 1, SAVEZONE_TENSEC };
//enum { MM_GCODE_LEFT_TURN = 12,			// 12 전방에서 좌회전입니다.
//    MM_GCODE_RIGGHT_TURN,			// 13 전방에서 우회전입니다.
//    MM_GCODE_UTURN,					// 14 전방에서 유턴입니다.
//    MM_GCODE_STRAGHTWAY				// 15 전방에서 직진입니다.
//};



@interface MMCModuleData : NSObject

@property (nonatomic, assign) short     reversed;	
@property (nonatomic, assign) short     mapid;
@property (nonatomic, assign) short     linkid;
@property (nonatomic, assign) short     snodeid;
@property (nonatomic, assign) short     enodeid;
@property (nonatomic, assign) short     heading;
@property (nonatomic, assign) short     segment;					
@property (nonatomic, assign) short     speed;						
@property (nonatomic, assign) float     ir;                         
@property (nonatomic, assign) int		speed_kmh;					
@property (nonatomic, assign) MMCResultStatus     status;						
@property (nonatomic, assign) char      sDirectEscape;
@property (nonatomic, assign) char      cHotStart;
@property (nonatomic, assign) int		lon;
@property (nonatomic, assign) int		lat;
@property (nonatomic, assign) int		distance;					
@property (nonatomic, assign) float     displacement;				
@property (nonatomic, assign) int		gpsscore;
@property (nonatomic, assign) int		gpsStatus;
@property (nonatomic, assign) char      nIsInBound;
@property (nonatomic, assign) char      cPSaveInZone;
@property (nonatomic, assign) MMCResultLinkInfo      cLinkInfo;
@property (nonatomic, assign) char      cReserved;
@property (nonatomic, assign) int		linkratio;
@property (nonatomic, assign) int		nMMCStatus;
@property (nonatomic, assign) int		nRoadPassWay;
@property (nonatomic, assign) int		nCurRoadMMState;

@property (nonatomic, assign) double  	restlat;
@property (nonatomic, assign) double	restlon;


+ (id)arrayWithObject:(id)mmc_object;



@end
