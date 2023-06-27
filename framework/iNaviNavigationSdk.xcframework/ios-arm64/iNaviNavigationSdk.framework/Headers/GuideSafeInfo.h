//
//  GuideSafeInfo.h
//  InaviAIR
//
//  Created by Jeoung YooJin on 10/18/12.
//  Copyright (c) 2012 Jeoung YooJin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GuideSafeInfo : NSObject


- (id)initWithObject:(id)safeinfo_object;
+ (id)arrayWithObject:(id)safeinfo_object;


@property (nonatomic, assign)   NSUInteger  m_x;
@property (nonatomic, assign)   NSUInteger  m_y;
//@property (nonatomic, assign)   NSInteger   m_gCode;

@property (nonatomic, retain)   NSNumber*   m_angle;
@property (nonatomic, retain)   NSNumber*   m_distance;
@property (nonatomic, retain)   NSNumber*   m_mapid;
@property (nonatomic, retain)   NSNumber*   m_linkid;


@property (nonatomic, retain)   NSNumber*   m_type;
@property (nonatomic, retain)   NSNumber*   m_addInfo1;
@property (nonatomic, retain)   NSNumber*   m_addInfo2;
@property (nonatomic, retain)   NSNumber*   m_addInfo3;

@end
