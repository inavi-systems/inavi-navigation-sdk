//
//  GuideCamInfo.h
//  InaviAIR
//
//  Created by Jeoung YooJin on 10/18/12.
//  Copyright (c) 2012 Jeoung YooJin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GuideCamInfo : NSObject

- (id)initWithObject:(id)caminfo_object;
+ (id)arrayWithObject:(id)caminfo_object;

@property (nonatomic, assign) BOOL                bValidMapID;
@property (nonatomic, assign) unsigned char       cType;
@property (nonatomic, assign) unsigned short      cSpeedLimit;
@property (nonatomic, assign) unsigned short      sTime;
@property (nonatomic, assign) unsigned short      sAngle;
@property (nonatomic, assign) unsigned short      sDistance;
@property (nonatomic, assign) unsigned short      sMapID;
@property (nonatomic, assign) unsigned short      sLinkID;


@property (nonatomic, assign) NSInteger           nX;
@property (nonatomic, assign) NSInteger           nY;
@property (nonatomic, assign) NSInteger           nID;
@property (nonatomic, assign) NSInteger           nLinkRatio;
@property (nonatomic, assign) NSInteger           nRoadType;            //정확 하지 않음 안내 mr링크로 다시 얻어오쟈
@property (nonatomic, assign) NSInteger           nCurSpeed;
@property (nonatomic, assign) NSInteger           nReversed;


@property (nonatomic, assign) NSInteger           nWarning;
@property (nonatomic, assign) NSInteger           nSafeAreaTotalDist;
@property (nonatomic, assign) NSInteger           nCheckedFortyPercentPos;

@property (nonatomic, assign) unsigned short      nRecSpeed;
@property (nonatomic, assign) unsigned short      nAvgSpeed;
@property (nonatomic, assign) unsigned short      nHour;
@property (nonatomic, assign) unsigned short      nMin;
@property (nonatomic, assign) unsigned short      nFortyPercentPosFromStartCam;
@property (nonatomic, assign) unsigned short      nFirstGuidePosFromStartCam;

@property (nonatomic, assign) unsigned short      nFirstSafeGuidePos;
@property (nonatomic, assign) unsigned short      nSecondSafeGuidePos;
@property (nonatomic, assign) unsigned short      nFirstAnounce;
@property (nonatomic, assign) unsigned short      nSecondAnounce;

@property (nonatomic, retain) NSMutableArray*            nTunnelStartPos;
@property (nonatomic, retain) NSMutableArray*            nTunnelLen;
@property (nonatomic, retain) NSMutableArray*            nAnounceTunnelGuide;


@end
