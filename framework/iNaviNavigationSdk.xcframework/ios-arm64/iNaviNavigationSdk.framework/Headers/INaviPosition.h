//
//  INaviPosition.h
//  NaviSDK
//
//  Created by sdteam on 2020/09/08.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#import "INaviFoundation.h"

NS_ASSUME_NONNULL_BEGIN

INAVI_EXPORT
@interface INaviPosition : NSObject

/**
 위도 (도 단위)
 */
@property (nonatomic, readonly) double lat;

/**
 경도 (도 단위)
 */
@property (nonatomic, readonly) double lng;

/**
 각도
 */
@property (nonatomic, readonly) double angle;

/**
 속도
 */
@property (nonatomic, readonly) double speed;

/**
 위도, 경도로  `INaviPosition` 객체를 생성합니다.
 
 @param lat 위도.
 @param lng 경도.
 @return `INaviPosition` 객체.
 */
+ (instancetype)positionWithLat:(double)lat lng:(double)lng;

/**
 위도, 경도로  `INaviPosition` 객체를 생성합니다.

 @param lat 위도.
 @param lng 경도.
 @param angle 각도.
 @return `INaviPosition` 객체.
*/
+ (instancetype)positionWithLat:(double)lat lng:(double)lng angle:(double)angle;

/**
 위도, 경도로  `INaviPosition` 객체를 생성합니다.

 @param lat 위도.
 @param lng 경도.
 @param angle 각도.
 @param speed 속도.
 @return `INaviPosition` 객체.
*/
+ (instancetype)positionWithLat:(double)lat lng:(double)lng angle:(double)angle speed:(double)speed;

@end

NS_ASSUME_NONNULL_END
