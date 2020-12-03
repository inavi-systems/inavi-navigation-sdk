//
//  AIR_GuidanceInfo.h
//  InaviAIR
//
//  Created by Jeoung YooJin on 5/7/13.
//  Copyright (c) 2013 Jeoung YooJin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IAGuidanceDefine.h"
#import "InvTrafficBarData.h"
#import "GuideHigiwayInfo.h"


@interface AIR_GuidanceInfo : NSObject

//턴 심볼
+ (BOOL)isNeedToDrawTurnSymbol:(NSInteger)nTurnGuideCode nTurnGuideDistance:(NSInteger) nTurnGuideDistance;
+ (NSString*)getTurnSymbolImageString:(GCODE)nGCode  viaOrder:(NSInteger)viaOrder;               //차기 턴 심볼
+ (NSString*)getNextTurnSymbolImageString:(GCODE)nGCode  viaOrder:(NSInteger)viaOrder;           //차차기 턴심볼
+ (NSString*)getTurnSymbolImageStringForDetialRoute:(GCODE)nGCode;                                 //상세경로 턴심볼
+ (NSString*)getGPSModeTurnSymbolImageString:(GCODE)nGCode  viaOrder:(NSInteger)viaOrder;        //GPS모드 턴 심볼


//안전 심볼
//+ (NSString*)getSafeSymbolImagePath:(CAMERA_TYPE)cameraType roadType:(ROAD_TYPE)roadType diatance:(NSInteger)distance  speedLimit:(NSInteger)speedLimit;

+(NSInteger)getGage:(CAMERA_TYPE)cameraType roadType:(ROAD_TYPE)roadType diatance:(NSInteger)distance;
+(BOOL)isDrawSafeSymbol:(ROAD_TYPE)roadType cameraType:(CAMERA_TYPE)cameraType distance:(NSInteger)distance;
+(BOOL)isDrawSafeSymbol:(ROAD_TYPE)roadType distance:(NSInteger)distance;
+ (NSString*)getSafeSymbolBGImagePathNew:(CAMERA_TYPE)cameraType;
+ (NSString*)getSafeSymbolBGImagePath:(CAMERA_TYPE)cameraType;
+ (NSString*)getSafeSymbolBGImagePath:(CAMERA_TYPE)cameraType speedLimit:(NSInteger)speedLimit;
+ (NSString*)getSafeSymbolImageIconName:(CAMERA_TYPE)cameraType;
+ (NSInteger)isGPSOn:(int )gpsscore gpsstatus:(int)gps_status;
+ (NSInteger)getHeading:(NSInteger)nGPSStatus nGPSHeading:(NSInteger)nGPSHeading;

//과속 사양 함수 하나로 통합. // nWarning사용으로 사용하지 않음.
+ (BOOL)isOverCamSpeed:(NSInteger)nCurSpeed
           nLimitSpeed:(NSInteger)nLimitSpeed
              nCamType:(NSInteger)nCamType
             nDistance:(NSInteger)nDistance
             nRoadType:(NSInteger)nRoadType
              avgSpeed:(NSInteger)avgSpeed
              isTunnel:(BOOL)isTunnel;
/*
//붉은색 표기
+ (BOOL)isOverSpeedNumber:(NSInteger)nCurSpeed nLimitSpeed:(NSInteger)nLimitSpeed nCamType:(NSInteger)nCamType nDistance:(NSInteger)nDistance nRoadType:(NSInteger)nRoadType;
//효과음
+ (BOOL)isOverSpeedSound:(NSInteger)nCurSpeed nLimitSpeed:(NSInteger)nLimitSpeed nCamType:(NSInteger)nCamType nDistance:(NSInteger)nDistance nRoadType:(NSInteger)nRoadType avgSpeed:(NSInteger)avgSpeed roadAttributeType:(ROAD_TYPE_ATTRIBUTE)roadAttribute;
//팝업
+ (BOOL)isOverSpeedPopup:(NSInteger)nCurSpeed nLimitSpeed:(NSInteger)nLimitSpeed nCamType:(NSInteger)nCamType nDistance:(NSInteger)nDistance nRoadType:(NSInteger)nRoadType;
*/

// ]]
+ (BOOL)isHighWayMode:(ROAD_TYPE)roadType linkInfo:(NSInteger)linkInfo;
+ (BOOL)isDrawCurrentSpeedSymbol:(NSInteger)ncurrentspeed;

//교통 정보
+ (TrafficCodeType)getTrafficType:(ROAD_TYPE)roadType speed:(NSInteger)speed;
+ (NSString*)getSafeSymbolText:(CAMERA_TYPE)nCameraType;


+ (BOOL)isSafeSymbolImgType:(CAMERA_TYPE)nCameraType;


//차선
//점선, 실선, 좌포켓, 우포켓
+ (LaneInfo_LineType)getLaneType:(LANE_TYPE)lanetype;
+ (LaneInfo_OptionType)getOptionType:(LANE_TYPE)lanetype;
+ (LaneInfo_BusLine)getLaneTypeForBus:(NSInteger)lanecode;

//swift bridging

+ (LaneInfo_LineType)getSwiftLaneType:(NSInteger)lanetype;
+ (LaneInfo_OptionType)getSwiftOptionType:(NSInteger)lanetype;

+ (NSString*)getSwiftTurnSymbolImageString:(NSInteger)nGCode  viaOrder:(NSInteger)viaOrder;
+ (NSString*)getSwiftNextTurnSymbolImageString:(NSInteger)nGCode  viaOrder:(NSInteger)viaOrder;
+ (NSString*)getCarTurnSymbolImageString:(NSInteger)nGCode  viaOrder:(NSInteger)viaOrder;
+ (BOOL)getGoalCheck:(NSInteger)nGCode;

+ (GCODE)getGuideCode:(NSInteger)nGCode;

+ (UIColor*)getRoadColor:(NSInteger)nRoadColor;
+ (UIImage* __nullable)getRoadColorImage:(NSInteger)nRoadColor small:(BOOL)small;
+ (BOOL)isNightMode;

+(BOOL)isSwiftDrawSafeSymbol:(ROAD_TYPE)roadType cameraType:(NSInteger)cameraType distance:(NSInteger)distance;
+ (NSString* __nullable)getSwiftSafeSymbolBGImagePathNew:(NSInteger)cameraType;

+ (CAMERA_TYPE)getCameraType:(NSInteger)ctype;

+ (BOOL)checkZoomFile:(NSString*)name;

+ (UIImage*)getZoomImage:(NSString*)name linkOrder:(NSInteger)linkOrder;

+ (NSMutableArray<InvTrafficBarData*>*)getTrafficBarDataAry;

+(NSString*)highWayIconImg:(Highway_Type)type;

+(NSString*)getSpeedImg:(NSInteger)index;

+ (NSString *)restOilPriceString:(GuideHigiwayInfo*)highwayInfo;

+ (BOOL)bDestinationCheck;
@end
