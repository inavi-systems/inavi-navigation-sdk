//
//  INaviControllerDelegate.h
//  NaviSDK
//
//  Created by sdteam on 2020/09/07.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#ifndef INaviControllerDelegate_h
#define INaviControllerDelegate_h

#import "INaviControllerDefine.h"

@class INaviPosition;

@protocol INaviControllerDelegate <NSObject>

@optional

/**
 사용자 인증에 성공/실패했을 때 호출되는 콜백.
 @param resultCode 인증 결과 코드
 @param message 인증 결과 메시지
 */
- (void)authResultCode:(NSInteger)resultCode message:(nullable NSString*)message;

/**
 사용자가 지도 메뉴를 탭하면 호출됩니다.

 @param mapView 'iNaviMapView' 객체
 @param eventType 클릭 메뉴 타입
*/

- (void)mapView:(nonnull INaviMapView *)mapView menuTouchEvent:(INVNaviEvent)eventType;

/**
 사용자가 지도를 롱 탭하면 호출됩니다.
 
 @param mapView 'iNaviMapView' 객체
 @param position 롱 탭한 위경도 좌표.
 */
- (void)didLongTapMapView:(nonnull INaviMapView *)mapView position:(nullable INaviPosition*)position;

/**
 지도 제스처를 통한 지도이동.

 @param mapView 'iNaviMapView' 객체
 @param mapMoveMode 지도 이동 시작/종료 이벤트 전달
*/

- (void)mapView:(nonnull INaviMapView *)mapView didChangedMapMoveMode:(INVMapMoveMode)mapMoveMode NS_SWIFT_NAME(mapView(_:didChanged:));


/**
 주행 재탐색 성공시 호출 됩니다.

 @param mapView 'iNaviMapView' 객체
 @param rid 재탐색 성공 경로ID 전달
*/

- (void)mapView:(nonnull INaviMapView *)mapView didRouteChangedRouteID:(nullable NSString *)rid NS_SWIFT_NAME(mapView(_:didChanged:));


/**
 주행 시작, 목적지 근처, 도착 상태 변경시 호출 됩니다.

 @param mapView 'iNaviMapView' 객체
 @param drivingStatus 주행 상태 변경 이벤트 전달
*/

- (void)mapView:(nonnull INaviMapView *)mapView didChangedDrivingStatus:(INVDrivingStatus)drivingStatus NS_SWIFT_NAME(mapView(_:didChanged:));

/**
 경유지 도착시 호출 됩니다.
 한번 지나간 경유지에 대해서 다시 onArrivalVia 이벤트가 호출되지는 않음

 @param mapView 'iNaviMapView' 객체
 @param nIndex 경유지 인덱스 전달
*/

- (void)mapView:(nonnull INaviMapView *)mapView passedIndex:(NSInteger)nIndex;

/**
 현재 차량 속도가 0.2초 간격으로 전달 됩니다.

 @param mapView 'iNaviMapView' 객체
 @param carSpeed 현재 이동 속도
*/

- (void)mapView:(nonnull INaviMapView *)mapView CarSpeed:(NSInteger)carSpeed;

@end

#endif /* INaviControllerDelegate_h */
