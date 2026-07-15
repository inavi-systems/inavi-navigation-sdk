//
//  IAMMCDataInfo.h
//  InaviAIR
//
//  Created by Jeoung YooJin on 10/16/12.
//  Copyright (c) 2012 Jeoung YooJin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "MapLinkInfo.h"


@interface IAMMCDataInfo : NSObject
@property (nonatomic, assign) NSInteger gps_heading;
@property (nonatomic, assign) BOOL      isGpsOn;
@property (nonatomic, retain) NSString* str_admin_name; //현위치
@property (nonatomic, assign) double    lon;
@property (nonatomic, assign) double    lat;


@property (nonatomic, assign) double    regulerLon;     //정규화 X
//@property (nonatomic, assign) double    regulerLon_dp; //정규화 dp용 X
@property (nonatomic, assign) double    regulerLat;     //정규화 Y

@property (nonatomic, assign) NSInteger year;
@property (nonatomic, assign) NSInteger month;
@property (nonatomic, assign) NSInteger day;
@property (nonatomic, assign) NSInteger hour;
@property (nonatomic, assign) NSInteger minute;
@property (nonatomic, assign) NSInteger second;

@property (nonatomic, assign) NSInteger curSPeed;
@property (nonatomic, assign) NSInteger camType;
@property (nonatomic, assign) NSInteger camDistance;
@property (nonatomic, assign) NSInteger camSpeedLimit;

@property (nonatomic, assign) BOOL      bOverspeedNumber;
@property (nonatomic, assign) BOOL      bOverspeedPopup;
@property (nonatomic, assign) BOOL      bNoPass;        //통행 불가인지 
@property (nonatomic, assign) NSInteger roadType;

@property (nonatomic, retain) NSString* directionName;
@property (nonatomic, assign) NSInteger turnGuideCode;
@property (nonatomic, assign) NSInteger turnViaOrder;
@property (nonatomic, assign) NSInteger turnGuideDistance;

@property (nonatomic, retain) MapLinkInfo* currentStartLinkInfo;

- (void)initVariable;

@property (nonatomic, assign)  float nAccuracy;     //거리 오차 범위

@end
