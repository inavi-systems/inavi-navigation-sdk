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
 위수지역 회피탐색 여부 설정
 기본값은 false입니다.
 */
@property (nonatomic) Boolean bAvoidEvasion;

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
 APT(아파트단지) POI 라벨 충돌 컬링 무시 여부 설정. (AOS setAptPoiCollisionIgnored 대응)
 @param enable true 충돌 무시(겹쳐도 표출), false 기존 충돌 회피
 */
- (void)setAptPoiCollisionIgnored:(BOOL)enable;

/**
 경로선 색상 모드 설정. (AOS MAPROUTECOLOR 대응)
 @param index 0=TRAFFIC(교통색), 1=RED, 2=ORANGE, 3=YELLOW, 4=GREEN, 5=BLUE, 6=INDIGO.
        nMapLineColor 설정에 저장되고, TRAFFIC 여부는 bMapLineTraffic으로 반영된다.
 */
- (void)setMapRouteColor:(NSInteger)index;

/**
 주행 중 자차 하단 예약 높이 설정(pt). Flutter HUD가 네이티브 하단 UI를 대체할 때
 자차가 오버레이에 가리지 않도록 보정한다. 기본 0이면 기존 동작 불변. (AOS setGuideBottomReserve 대응)
 @param reserve 하단 예약 높이(pt). 음수는 0으로 보정.
 */
- (void)setGuideBottomReserve:(NSInteger)reserve;

/**
 지도 컴포넌트 강제 Hide
 @param componentID 지도 컴포넌트 타입.
 @param hide true 컴포넌트 미표출, false 컴포넌트 표출
 */
- (void)forceHideMapComponent:(INVMapComponent)componentID hide:(BOOL)hide;

/**
 native guide layer(HUD 전체 컨테이너) 및 전체 맵 컴포넌트 표시 여부. 기본 YES.
 변경은 `setUseNativeMapUi:`로 수행한다.
 */
@property (nonatomic, readonly) BOOL useNativeMapUi;

/**
 Flutter 등 외부 UI가 HUD를 대체할 때 native guide layer 및 전체 맵 컴포넌트(forceHide ALL_COMPONENT) 표시 여부를 결정한다. 기본 YES.
 초기화 전 호출 시 값만 저장되며, 초기화 성공 시점에 자동 적용된다. (AOS setUseNativeMapUi 대응)
 */
- (void)setUseNativeMapUi:(BOOL)use;

/**
 Flutter 래퍼가 SDK를 임베드할 때 호출한다. 호출 시 서버 공통 요청 헤더 `framework_type` 값이
 "flutter"로 설정된다(기본 "native"). in-memory 저장이며 영속화하지 않으므로
 래퍼가 매 앱 실행 시 첫 서버 요청 전에 호출해야 한다.
 */
- (void)setFrameworkType;

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

/**
 현재 위치에서 기존 목적지까지 재탐색 (경유지 변경 없음). 주행 경로가 있어야 한다.
 (AOS runReRoute 대응 — RouteSearchManager userSmartReRoute 기반)
 */
- (void)runReRoute:(void(^)(void))successHandler failHandler:(INaviFailHandler)failHandler;

/**
 경유지를 변경하여 현재 위치에서 기존 목적지까지 재탐색. 주행 경로가 있어야 한다.
 (AOS runReRouteChangeVia 대응 — 현재위치 출발 + 기존 목적지/옵션 + 새 경유지로 단일경로 탐색 후 주행 적용)
 @param viaList 변경할 경유지 목록 (nil/빈 배열이면 경유지 없이 재탐색)
 */
- (void)runReRouteChangeVia:(NSArray<INaviRoutePtItem*>* _Nullable)viaList successHandler:(void(^)(void))successHandler failHandler:(INaviFailHandler)failHandler;
- (INaviRouteSumInfo*)makeRouteSumInfoWithRouteID:(NSString*)rid;
- (INaviRoutePtItem*)getRoutePtInfoWithRouteID:(NSString*)rid routePtType:(INVRoutePtType)type;
- (NSString*)getRouteLinePointsWithRouteID:(NSString*)rid;
// 현재 위치에서 가장 가까운 경로 vertex 인덱스. >=0 인덱스, -1 undefined, -2 guide end, -4 DP 미초기화
- (int)getNearestVertexIndex;

// 경유지 잔여정보 (AOS 대응). 주행 경로가 있어야 유효.
- (NSArray<INaviRoutePtItem*>*)getRoutePtRemainViaInfo;                                       // 남은 경유지 route point 목록
- (INaviRoutePtItem* _Nullable)getRoutePtViaInfoWithRouteID:(NSString*)rid viaIndex:(NSInteger)viaIndex; // 통과 포함 전체 중 viaIndex
- (NSArray<NSDictionary*>*)getRemainViaRouteInfo;                                             // 남은 경유지별 {remainTime, remainDist} (iOS: 최대 2개)

// 안전운행 안내 설정 (AOS GUIDANCESETTING 대응). settings=nil이면 기본값 복원.
- (void)setGuidanceSettings:(NSArray<NSNumber*>* _Nullable)settings;  // INVGuidanceSetting 배열
- (NSArray<NSNumber*>*)getGuidanceSettings;                          // 설정된 INVGuidanceSetting 배열

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
