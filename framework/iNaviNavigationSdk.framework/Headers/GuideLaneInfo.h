//
//  GuideLaneInfo.h
//  InaviAIR
//
//  Created by Jeoung YooJin on 10/18/12.
//  Copyright (c) 2012 Jeoung YooJin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GuideLaneInfo : NSObject

- (id)initWithObject:(id)laneinfo_object;
+ (id)arrayWithObject:(id)laneinfo_object;
+ (id)arrayWithObject:(id)laneinfo_object busLaneInfo:(id)busLaneInfo;

@property (nonatomic, assign) NSInteger   x;
@property (nonatomic, assign) NSInteger   y;

@property (nonatomic, assign) short       m_index;
@property (nonatomic, assign) short       m_distance;
@property (nonatomic, assign) short       m_laneNum;

//@property (nonatomic, assign) char*       m_temp;

@property (nonatomic, retain) NSMutableArray*   m_laneCode;
@property (nonatomic, retain) NSMutableArray*   m_laneType;
@property (nonatomic, retain) NSMutableArray*   m_laneRecomm;

@property (nonatomic, retain) NSString*   m_dirName;

@property (nonatomic, assign) BOOL        m_bhpasslane;

@property (nonatomic, retain) NSMutableArray*    Reserved;

@property (nonatomic, assign) NSInteger       m_allLaneNum;

/*
 u  Type 1 : 버스전용차로 진입
 u  Type 2 : 버스전용차로 진출
 u  Type 3 : 휴게소 진출
 u  Type 4 : 버스전용차로 시작 시간
 u  Type 5 : 버스전용차로 종료 시간
 */
@property (nonatomic, assign) NSInteger       m_busLaneType;
@property (nonatomic, assign) NSInteger       m_busLaneStartTime;
@property (nonatomic, assign) NSInteger       m_busLaneEndTime;

@end
