//
//  GuideHigiwayInfo.h
//  InaviAIR
//
//  Created by Jeoung YooJin on 12/10/12.
//  Copyright (c) 2012 Jeoung YooJin. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IAGuidanceDefine.h"

typedef enum{
    Highway_Type_Rest = 0,
    Highway_Type_JC,
    Highway_Type_IC,
    Highway_Type_Tollgate,
    HighWay_Type_Temp_Rest,
    HighWay_Type_Shelter
}Highway_Type;

typedef enum{
    Highway_TurnCode_LeftTurn = 0,      //좌회전
    Highway_TurnCode_Straight,          //직진
    Highway_TurnCode_RightTurn,         //우회전
    
    Highway_TurnCode_In,                //고속도로 입구
    Highway_TurnCode_Out,               //고속도로 출구
}Highway_TurnCode;

typedef enum{
    Highway_OilCode_Nothing = 0,
    Highway_OilCode_GS = 1,
    Highway_OilCode_SK,
    Highway_OilCode_SOil,
    Highway_OilCode_HANHWA,
    Highway_OilCode_Hyundai,
}Highway_OilCode;

typedef enum{
    HighWay_Info_Type_All = 0,
    HighWay_Info_Type_Rest,
}HighWay_Info_Type;

@interface GuideHigiwayInfo : NSObject


- (id)initWithObject:(id)highwayinfo_object;
+ (id)arrayWithObject:(id)highwayinfo_object;

@property (nonatomic, readonly) NSInteger           _tblIdx;            //테이블 인덱스. 
@property (nonatomic, readonly) Highway_Type        _type;
@property (nonatomic, assign) NSInteger           _dist;
@property (nonatomic, readonly) NSInteger           _time;
@property (nonatomic, retain) NSString*           _name;
@property (nonatomic, readonly) Highway_OilCode     _oilcode;
@property (nonatomic, readonly) unsigned char       _service;
@property (nonatomic, readonly) NSString*           _dirname;
/*
@property (nonatomic, assign)   Highway_TurnCode    _turn1;
@property (nonatomic, readonly) Highway_TurnCode    _turn2;
@property (nonatomic, readonly) Highway_TurnCode    _turn3;
@property (nonatomic, readonly)   NSInteger           _turnIndex1;
@property (nonatomic, readonly)   NSInteger           _turnIndex2;
@property (nonatomic, readonly)   NSInteger           _turnIndex3;
@property (nonatomic, readonly) char                _tolltype;
@property (nonatomic, readonly) char                _tollcosttype;
@property (nonatomic, readonly) NSInteger           _tollcost;
@property (nonatomic, readonly) NSInteger           _tollexcost;
 */
@property (nonatomic, readonly) NSInteger           _restcode;           //휴게소코드
@property (nonatomic, readonly) NSInteger           _avgSpeed;
@property (nonatomic, readonly) NSInteger           _trfType;
@property (nonatomic, readonly) char                _outItem;


//로컬에서 정보 다시 저장 해야 할 항목
@property (nonatomic, retain)   NSDictionary*   restOilInfo;        //주유소 정보
@property (nonatomic, assign)   NSInteger       leadTime;           //소요 시간
@property (nonatomic, assign)   NSInteger       tollcost;           //톨비


@property (nonatomic, assign)   TrafficCodeType downTrf;
@property (nonatomic, assign)   TrafficCodeType upTrf;


@end

