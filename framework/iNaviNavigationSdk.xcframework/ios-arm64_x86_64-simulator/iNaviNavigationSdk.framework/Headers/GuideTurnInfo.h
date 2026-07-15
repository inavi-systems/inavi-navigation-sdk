//
//  GuideTurnInfo.h
//  InaviAIR
//
//  Created by Jeoung YooJin on 10/18/12.
//  Copyright (c) 2012 Jeoung YooJin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface VRExtInfo : NSObject
+(instancetype)vrInfoWithObj:(id)object;

@property (nonatomic, retain) NSString*   vrName;
@property (nonatomic, assign) NSInteger   vrStartMapID;
@property (nonatomic, assign) NSInteger   vrStartLinkID;
@property (nonatomic, assign) NSInteger   vrStartDirection;
@property (nonatomic, assign) NSInteger   vrStartTblIdx;

@property (nonatomic, assign) NSInteger   vrEndMapID;
@property (nonatomic, assign) NSInteger   vrEndLinkID;
@property (nonatomic, assign) NSInteger   vrEndDirection;
@property (nonatomic, assign) NSInteger   vrEndTblIdx;
@end

@interface GuideTurnInfo : NSObject

- (id)initWithObject:(id)turninfcRoadTypeo_object;
+ (id)arrayWithObject:(id)turninfo_object;
- (void)setdata:(id)turninfo_data;
- (BOOL)isEqualData:(GuideTurnInfo*)data isNextTurn:(BOOL)isNext ;

@property (nonatomic, assign) NSInteger   nChangeTurn;
@property (nonatomic, assign) NSInteger   nIndex;
@property (nonatomic, assign) NSInteger   nDistance;
@property (nonatomic, assign) int         nGuideCode;
@property (nonatomic, assign) NSInteger   nTollPay;
@property (nonatomic, assign) NSInteger   nRoadNum;

@property (nonatomic, assign) NSInteger   m_linkOrder;
@property (nonatomic, assign) NSInteger   nPoint_X;
@property (nonatomic, assign) NSInteger   nPoint_Y;
@property (nonatomic, assign) NSInteger   nViaOrder;

@property (nonatomic, assign) short       inMapID;
@property (nonatomic, assign) short       inLinkID;
@property (nonatomic, assign) short       indir;

@property (nonatomic, assign) short       outMapID;
@property (nonatomic, assign) short       outLinkID;
@property (nonatomic, assign) short       outdir;

//@property (nonatomic, retain) NSArray*    sLinkAttr;
//
//@property (nonatomic, retain) NSArray*    cRoadType;

@property (nonatomic, retain) NSNumber*   m_sLinkLevelLength;
@property (nonatomic, retain) NSString*   m_dirName;
@property (nonatomic, retain) NSString*   m_zoomview;
@property (nonatomic, retain) NSString*   szCrossName;
@property (nonatomic, retain) NSString*   szPassCrossName;
@property (nonatomic, retain) NSString*   szVoiceTurnName;

@property (nonatomic, retain) VRExtInfo*  vrExtInfo;

@property (nonatomic, assign) NSInteger nRoadColor;

@end
