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
@class INaviShiMember;
@class INaviTruckInfo;

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
@property (nonatomic, strong, nullable) NSString *appKey;

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

/**
 Top SafeArea영역을 지도 컴포넌트에 적용.
 기본값은 false입니다.
*/
@property (nonatomic) Boolean layoutTopSafeArea;

/**
 left,right SafeArea영역을 지도 컴포넌트에 적용.
 기본값은 false입니다.
*/
@property (nonatomic) Boolean layoutLeftRightSafeArea;

/**
 확대도 표출 여부 설정
 기본값은 false입니다.
 */
@property (nonatomic) Boolean bVisibleExtendView;

/**
 차종 설정.
 기본값은 1종(소형차)입니다.
*/
@property (nonatomic) INVCarType carType;

/**
 차량 높이 설정 (0 ~ 1000cm [10m]), 설정 시 높이제한구역 회피안내
 기본값은 0입니다.
 */
@property (nonatomic) NSInteger carHeight;

/**
 차량 중량 설정 (0 ~ 60000kg [60t]) , 설정 시 중량제한구역 회피안내
 기본값은 0입니다.
 */
@property (nonatomic) NSInteger carWeight;

/**
 왕복 n차선 이하 유턴 회피 설정
 기본값은 0입니다.
 */
@property (nonatomic) NSInteger nAvoidUturn;

/**
 왕복 n차선 이하 도로 회피여부 설정
 기본값은 0입니다.
 */
@property (nonatomic) NSInteger nAvoidNarrowRoad;

/**
 화물차 통행제한구간 회피여부 설정
 기본값은 false입니다.
 */
@property (nonatomic) Boolean bIsAvoidRestriction;

/**
 화물차 여부 설정
 기본값은 false입니다.
 */
@property (nonatomic) Boolean bTruckType;

/**
 첫번째 탐색 옵션 타입
 기본값은 빠른길 입니다.
 */
@property (nonatomic) INVRouteOptionType fOptionType;

/**
 두번째 탐색 옵션 타입
 기본값은 추천길 입니다.
 */
@property (nonatomic) INVRouteOptionType sOptionType;

/**
 차기 tbt Color
 */
@property (nonatomic, strong, nullable) UIColor *tbtColor;

/**
 차차기 tbt Color
 */
@property (nonatomic, strong, nullable) UIColor *nextTbtColor;

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

/**
 차종 타이틀명
 */
- (NSString*)getCarTitle;

/**
 삼성중공업 멤버 데이터 설정
 @param member `INaviShiMember` 객체.
*/
- (void)setShiMember:(INaviShiMember*)member;

#pragma mark - search
- (void)runSearch:(NSString*)query lat:(double)lat lng:(double)lng successHandler:(INaviSearchSuccessHandler)successHandler failHandler:(INaviFailHandler)failHandler;
- (void)runRecommendWord:(NSString*)query successHandler:(INaviRecommendSearchSuccessHandler)successHandler failHandler:(INaviFailHandler)failHandler;
- (NSString* _Nullable)getJibunAddr:(INaviPosition*)position;

#pragma mark - route

- (void)runRoute:(INaviRoutePtItem* _Nullable)startItem goalItem:(INaviRoutePtItem*)goalItem viaList:(NSArray<INaviRoutePtItem*>* _Nullable)viaList successHandler:(INaviRouteMultiSuccessHandler)successHandler failHandler:(INaviFailHandler)failHandler;
-(void)runOptimalRoute:(INaviRoutePtItem* _Nullable)startItem goalItem:(INaviRoutePtItem*)goalItem viaList:(NSArray<INaviRoutePtItem*>* _Nullable)viaList successHandler:(INaviRouteMultiSuccessHandler)successHandler failHandler:(INaviFailHandler)failHandler;
- (void)runSingleRoute:(INaviRoutePtItem* _Nullable)startItem goalItem:(INaviRoutePtItem*)goalItem viaList:(NSArray<INaviRoutePtItem*>* _Nullable)viaList routeOption:(INVRouteOptionType)opt successHandler:(INaviRouteSingleSuccessHandler)successHandler failHandler:(INaviFailHandler)failHandler;
- (void)runShiRoute:(NSString* _Nullable)startName goalItem:(NSString*)goalName viaList:(NSArray<NSString*>* _Nullable)viaList successHandler:(INaviRouteMultiSuccessHandler)successHandler failHandler:(INaviFailHandler)failHandler;
- (void)runSingleShiRoute:(NSString* _Nullable)startName goalItem:(NSString*)goalName viaList:(NSArray<NSString*>* _Nullable)viaList routeOption:(INVRouteOptionType)opt successHandler:(INaviRouteSingleSuccessHandler)successHandler failHandler:(INaviFailHandler)failHandler;
- (void)routeZoomMapWithRouteIdList:(NSArray<NSString*>*)ridList selectedRID:(NSString*)selectedRID;
- (void)cancelRoute;
- (INaviRouteSumInfo*)makeRouteSumInfoWithRouteID:(NSString*)rid;
- (INaviRoutePtItem*)getRoutePtInfoWithRouteID:(NSString*)rid routePtType:(INVRoutePtType)type;
- (NSString*)getRouteLinePointsWithRouteID:(NSString*)rid;

#pragma mark - guide
- (NSInteger)runGuidanceWithRouteID:(NSString*)rid;
- (INaviRouteRemainInfo*)getRemainRouteInfo;
- (NSInteger)startSimulationWithRouteID:(NSString*)rid;
- (INaviTruckInfo* _Nullable)getNextTruckInfo;
- (NSArray<INaviTruckInfo*>* _Nullable)getTruckInfos:(NSString*)rid;
- (NSInteger)finishSimulation;
- (BOOL)isGuidance;
- (BOOL)isSimulation;

#pragma mark - etc

- (void)testLog;
@end

NS_ASSUME_NONNULL_END
