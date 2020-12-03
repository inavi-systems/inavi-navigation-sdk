//
//  MapLinkInfo.h
//  InaviAIR
//
//  Created by Jeoung YooJin on 10/23/12.
//  Copyright (c) 2012 Jeoung YooJin. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSUInteger, ProjectionInfoType) {
    ProjectionInfoTypeError = 0,
    ProjectionInfoTypeNormal,       // default
    ProjectionInfoTypeHighway,      // 고속도로
    ProjectionInfoTypeElevatedroad, // 고가도로
    ProjectionInfoTypeUnderroad,    // 지하차도
    ProjectionInfoTypeTunnel,       // 터널
    ProjectionInfoTypeTollgate,     // 톨게이트
    ProjectionInfoTypeBridge,       // 교량
    ProjectionInfoTypeOneway,       // 일방통행
    ProjectionInfoTypeAptComplex,   // 단지내도로
    ProjectionInfoTypeNoway         // 통행불가
};

@interface MapLinkInfo : NSObject

- (id)initWithObject:(id)linkinfo_object;
+ (id)arrayWithObject:(id)linkinfo_object;
- (void)setdata:(id)linkinfo_object;

@property (nonatomic, assign) NSInteger m_nMapId;
@property (nonatomic, assign) NSInteger m_nLinkId;
@property (nonatomic, assign) NSInteger m_nNodeId;
@property (nonatomic, assign) NSInteger m_nDirection;
@property (nonatomic, assign) ProjectionInfoType m_nRetCode;
@property (nonatomic, assign) NSInteger m_nX;
@property (nonatomic, assign) NSInteger m_nY;

@end
