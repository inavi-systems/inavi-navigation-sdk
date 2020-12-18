//
//  INaviController.h
//  NaviSDK
//
//  Created by DAECHEOL KIM on 2020/03/31.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#import "INaviFoundation.h"
#import "INaviControllerDefine.h"

@class INaviSearchResult;
@class INaviRecommendWord;
@class INaviRoutePtItem;
@class INaviPosition;
@class INaviMapOverlay;
@class INaviMapIcon;
@class INaviRouteSumInfo;
@class INaviRouteRemainInfo;

@protocol INaviControllerDelegate;

typedef void (^INaviSearchSuccessHandler)(INaviSearchResult * _Nullable result);
typedef void (^INaviRecommendSearchSuccessHandler)(NSMutableArray<INaviRecommendWord *>* _Nullable result);
typedef void (^INaviRouteMultiSuccessHandler)(NSMutableArray<NSString *>* _Nullable result, Boolean isSameRoute);
typedef void (^INaviRouteSingleSuccessHandler)(NSString* _Nullable result);

typedef void (^INaviFailHandler)(NSInteger errCode, NSString* _Nullable errMsg);

NS_ASSUME_NONNULL_BEGIN

INAVI_EXPORT
@interface INaviController : NSObject

+ (nonnull instancetype)sharedInstance;

@property(nonatomic, readonly) id<INaviControllerDelegate> delegate;

/**
 지도 인증 AppKey
 */
@property (nonatomic, nullable) NSString *appKey;

/**
 지도 레벨  ( 유효 범위 1 ~ 13 )
 기본값은 `12`입니다.
 */
@property (nonatomic) NSInteger mapLevel;

/**
 지도 뷰 모드
 @see `INVMapViewMode`
 */
@property (nonatomic) INVMapViewMode mapViewMode;

/**
 지도 주기 폰트 사이즈 타입
 @see `INVMapFontType`
 */
@property (nonatomic) INVMapFontType mapFontType;

/**
 지도 주간/야간 타입 변경
 @see `INVMapDayNightMode`
 */
@property (nonatomic) INVMapDayNightMode mapDayNightMode;

/**
 내비게이션 음성 볼륨 ( 범위 0.0 ~ 1.0 )
 기본값은 '1.0'입니다.
*/
@property (nonatomic) CGFloat naviVolume;


- (void)initalizeNavi:(NSString*)uniqueID target:(id<INaviControllerDelegate>)target;

/**
 현 위치 반환
 @return `INaviPosition` 객체.
 */

- (INaviPosition*)getCurrentPosition;

/**
 지도 위치를 GPS 위치로 이동
 */
- (void)setCarCurrentPosition;

/**
 지도와 자차 위치를 특정 위치로 이동
 @param position `INaviPosition` 객체.
*/
- (void)setCarPosition:(INaviPosition*)position;

/**
 지도 위치를 특정 위치로 이동
 @param position `INaviPosition` 객체.
*/
- (void)setMapPosition:(INaviPosition*)position;

/**
 현재 지도 레벨기준으로 한 단계 확대
 */
- (void)zoomIn;

/**
 현재 지도 레벨기준으로 한 단계 축소
 */
- (void)zoomOut;

- (void)addMapIconWithOverlay:(INaviMapOverlay*)mapOverlay mapIcon:(INaviMapIcon*)mapIcon;

- (void)removeMapIconWithOverlay:(INaviMapOverlay*)mapOverlay mapIcon:(INaviMapIcon*)mapIcon;

- (void)removeMapIconAllWithOverlay:(INaviMapOverlay*)mapOverlay;
/**
 지도 회전 가능 여부 설정
 */
- (void)setMapEnableRotate:(Boolean)enable;

- (void)visibleTrafficLine:(Boolean)show;

/**
 지도 컴포넌트 강제 Hide
 @param componentID 지도 컴포넌트 타입.
 @param hide true 컴포넌트 미표출, false 컴포넌트 표출
 */
- (void)forceHideMapComponent:(INVMapComponent)componentID hide:(BOOL)hide;

#pragma mark - search
- (void)runSearch:(NSString*)query lat:(double)lat lng:(double)lng successHandler:(INaviSearchSuccessHandler)successHandler failHandler:(INaviFailHandler)failHandler;
- (void)runRecommendWord:(NSString*)query successHandler:(INaviRecommendSearchSuccessHandler)successHandler failHandler:(INaviFailHandler)failHandler;
- (NSString* _Nullable)getJibunAddr:(INaviPosition*)position;

#pragma mark - route

- (void)runRoute:(INaviRoutePtItem* _Nullable)startItem goalItem:(INaviRoutePtItem*)goalItem successHandler:(INaviRouteMultiSuccessHandler)successHandler failHandler:(INaviFailHandler)failHandler;
- (void)runSingleRoute:(INaviRoutePtItem* _Nullable)startItem goalItem:(INaviRoutePtItem*)goalItem routeOption:(INVRouteOptionType)opt successHandler:(INaviRouteSingleSuccessHandler)successHandler failHandler:(INaviFailHandler)failHandler;
- (void)routeZoomMapWithRouteIdList:(NSArray<NSString*>*)ridList selectedRID:(NSString*)selectedRID;
- (void)cancelRoute;
- (INaviRouteSumInfo*)makeRouteSumInfoWithRouteID:(NSString*)rid;
- (INaviRoutePtItem*)getRoutePtInfoWithRouteID:(NSString*)rid routePtType:(INVRoutePtType)type;
- (NSString*)getRouteLinePointsWithRouteID:(NSString*)rid;

#pragma mark - guide
- (NSInteger)runGuidanceWithRouteID:(NSString*)rid;
- (INaviRouteRemainInfo*)getRemainRouteInfo;
- (NSInteger)startSimulationWithRouteID:(NSString*)rid;
- (NSInteger)finishSimulation;
- (BOOL)isGuidance;
- (BOOL)isSimulation;

#pragma mark - etc
@end

NS_ASSUME_NONNULL_END
