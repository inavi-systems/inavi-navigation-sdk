//
//  INaviSearchItem.h
//  NaviSDK
//
//  Created by DAECHEOL KIM on 2020/03/31.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class INaviPosition;

/*
 dpLat : Double
 지도 위치보기 시에 사용 되는 위도
 dpLon : Double
 지도 위치보기 시에 사용 되는 경도
 rpLat : Double
 길 찾기 시에 사용 되는 위도
 rpLon : Double
 길 찾기 시에 사용 되는 경도
 mainTitle : String
 검색 결과 항목 타이틀
 addrJibun : String
 검색 결과 지번 주소
 addrRoad : String
 검색 결과 도로 명 주소k
 distance : Int
 검색에 사용했던 기준좌표와 의 거리
 */
@interface INaviSearchItem : NSObject

@property (nonatomic, strong) NSString *mainTitle;
@property (nonatomic, strong) NSString *addrJibun;
@property (nonatomic, strong) NSString *addrRoad;
@property (nonatomic, strong) INaviPosition *dpPosition;
@property (nonatomic, strong) INaviPosition *rpPosition;
@property (nonatomic) NSInteger distance;
@property (nonatomic) BOOL isSubItem;

@end

NS_ASSUME_NONNULL_END
