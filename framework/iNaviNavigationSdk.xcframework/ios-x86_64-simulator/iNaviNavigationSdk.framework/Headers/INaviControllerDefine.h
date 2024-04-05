//
//  INaviControllerDefine.h
//  NaviSDK
//
//  Created by sdteam on 2020/09/07.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#ifndef INaviControllerDefine_h
#define INaviControllerDefine_h

typedef NS_ENUM(NSUInteger, INVMapViewMode) {
    /**
     3D 뷰
     */
    INVMapViewMode3D = 0,
    /**
     2D 회전 뷰 ( 자차가 정북 고정 )
     */
    INVMapViewMode2D,
    /**
     2D 고정 뷰 ( 지도가 정북 고정 )
     */
    INVMapViewMode2DFIX,
};

typedef NS_ENUM(NSUInteger, INVIconAnchor) {
    /**
     이미지 정중앙이 Mapicon 좌표 위치
     */
    INVIconAnchorCenter = 0,
    /**
     이미지의 정중앙 하단이 Mapicon 좌표 위치
     ( 좌표를 중심으로 이미지를 상단으로 이동 )
    */
    INVIconAnchorCenterTop,
    /**
     이미지의 우측 하단이 Mapicon 좌표 위치
     ( 좌표를 중심으로 이미지를 좌측 상단으로 이동 )
    */
    INVIconAnchorLeftTop,
    /**
     이미지의 좌측 하단이 Mapicon 좌표 위치
     ( 좌표를 중심으로 이미지를 우측 상단으로 이동 )
    */
    INVIconAnchorRightTop,
    /**
     이미지의 우측 상단이 Mapicon 좌표 위치
     ( 좌표를 중심으로 이미지를 좌측 하단으로 이동 )
    */
    INVIconAnchorLeftBottom,
    /**
     이미지의 좌측 상단이 Mapicon 좌표 위치
     ( 좌표를 중심으로 이미지를 우측 상단으로 이동 )
    */
    INVIconAnchorRightBottom
};

typedef NS_ENUM(NSUInteger, INVMapFontType) {
    /**
     기본 사이즈
     */
    INVMapFontNomal = 0,
    /**
     확대 사이즈
     */
    INVMapFontLarge
    
};

typedef NS_ENUM(NSUInteger, INVRoutePtType) {
    /**
     출발지
     */
    INVRoutePtStart = 0,
    /**
     목적지
     */
    INVRoutePtGoal
    
};

typedef NS_ENUM(NSUInteger, INVCarType) {
    /**
     1종(소형차) -> 일반승용, 승합16인 이하, 화물2.5톤 미만
     */
    CarType_1 = 0,
    /**
     2종(중형차) -> 승합32인 이하, 화물5.5톤 이하
     */
    CarType_2,
    /**
     3종(대형차) -> 승합33인 이상, 화물10톤 미만
     */
    CarType_3,
    /**
     4종(대형화물차) -> 화물20톤 미만
     */
    CarType_4,
    /**
     5종(특수화물차) -> 화물20톤 이상
     */
    CarType_5,
    /**
     경차 -> 1종 : 통행료 할인 적용
     */
    CarType_6,
    /**
     이륜차
     */
    CarType_7
};



typedef NS_ENUM(NSUInteger, INVRouteOptionType) {
    /**
     빠른길
     */
    INVRouteOptionTimePrioty = 0,
    /**
     추천길
     */
    INVRouteOptionRecommend,
    /**
     무료길
    */
    INVRouteOptionFreeRoad,
    /**
     편한길
    */
    INVRouteOptionBeginner,
    /**
     이륜차
    */
    INVRouteOptionMotoCycle,
    /**
     고속도로 우선
    */
    INVRouteOptionHighwayPrioty,
    /**
     최단 거리
    */
    INVRouteOptionDistancePrioty,
    /**
     실시간 만차
    */
    INVRouteOptionTruck,
    /**
     실시간 만차(무료)
    */
    INVRouteOptionTruckFreeRoad,
    /**
     실시간 공차
    */
    INVRouteOptionTruck2,
    /**
     실시간 공차(무료)
    */
    INVRouteOptionTruck2FreeRoad,
    /**
     국도만차
    */
    INVRouteOptionTruckNationalWay,
    /**
     국도공차
    */
    INVRouteOptionTruck2NationalWay,
    
};


typedef NS_ENUM(NSUInteger, INVMapDayNightMode) {
    /**
     시간대별 주/야 자동 변경
     */
    INVMapDayNightModeAuto = 0,
    /**
     항상 주간 지도
     */
    INVMapDayNightModeAlwaysDay,
    /**
     항상 야간 지도
     */
    INVMapDayNightModeAlwaysNight
    
};

typedef NS_ENUM(NSUInteger, INVNaviEvent) {
    /**
     하단 바 좌측 메인 메뉴 버튼
     */
    INVNaviEventMain = 0,
    /**
     하단 바 우측 멀티 메뉴 버튼
     */
    INVNaviEventMulti,
    /**
     목적지 도착 하단 바 "안내종료" 버튼
     */
    INVNaviEvenGuideCancel,
    /**
     지도 이동시 표출되는 볼륨 버튼
     */
    INVNaviEvenVolume
    
};

typedef NS_ENUM(NSUInteger, INVDrivingStatus) {
    /**
     주행 시작
     */
    INVDrivingStatusStart = 0,
    /**
     목적지 근처 ( 목적지 100m 부근 )
     */
    INVDrivingStatusNearGoal,
    /**
     주행완료
     */
    INVDrivingStatusArrival
    
};

typedef NS_ENUM(NSUInteger, INVMapMoveMode) {
    /**
     지도 이동 시작
     */
    INVMapMoveGesture = 0,
    /**
     지도 이동 종료
     */
    INVMapMoveGestureStop
};

typedef NS_ENUM(NSUInteger, INVMapComponent) {
    /**
     모든 지도 컴포넌트 ( 아래 항목을 한번에 처리할 때 사용 )
     */
    ALL_COMPONENT = 0,
    /**
     나침반 버튼 ( 지도 이동시 )
     */
    ANGLE_BTN,
    /**
     현위치로 버튼 ( 지도 이동시 )
     */
    CUR_ON_BTN,
    /**
     확대/축소 버튼 ( 지도 이동시 )
     */
    ZOOM_IN_OUT_BTN,
    /**
     지도 하단 뷰 ( 경로 없는 경우 )
     */
    BOTTOM_NORMAL_VIEW,
    /**
     지도 하단 뷰 ( 경로 존재 하는 경우 )
     */
    BOTTOM_DRIVING_VIEW,
    /**
     목적지 도착 상단 뷰
     */
    TOP_ARRIVAL_VIEW,
    /**
     목적지 도착 하단 뷰
     */
    BOTTOM_ARRIVAL_VIEW,
    /**
     주행중 우측 교통정보 바
     */
    ROUTE_TRAFFIC_STATUS_BAR,
};

typedef NS_ENUM(NSUInteger, INVTruckInfoType) {
    /**
     알수없음
     */
    UNKNOWN = 0,
    /**
     좁은길
     */
    NARROW = 1,
    /**
     유턴
     */
    UTURN = 2
};


typedef NS_ENUM(NSInteger, INVCodeType) {
    /**
     성공
     */
    INVSuccess = 0,
    /**
     길 찾기 실패
     */
    INVRouteSearchFailure = 1,
    /**
     목적지가 물리적 섬 도로
     */
    INVInvalidIsland = 3,
    /**
     길 찾기 가능 거리 초과
     */
    INVDistancExcess = 32,
    /**
     두 지점이 너무 가까움
     */
    INVNearestGoal = 35,
    /**
     최적경로 ( 재 탐색은 성공했으나, 더 좋은 경로가 없어 현재 경로를 유지해야 하는 상황) 
     */
    INVOptimalRoute = 120,
    /**
     목적지 부근으로 재 탐색이 필요 없는 상황 
     */
    INVSmartReRouteNotUse = 121,
    /**
     인증정보가 변경되어, 재 인증 필요
     */
    INVReAuthRequired = 901,
    /**
     서버 조회결과 없음
     */
    INVSearchNotFound = 903,
    /**
     인증 데이터 오류
     */
    INVAuthDataError = 1000,
    /**
     유효하지 않은 형식으로 인증 요청
     */
    INVAuthParamInvalid = 1002,
    /**
     인증데이터가 존재 하지 않음
     */
    INVAuthDataNotFound = 1003,
    /**
     유효하지 않은 Unique Key
     */
    INVUniqueKeyInvalid = 1004,
    /**
     유효하지 않은 APP Key
     */
    INVAPPKeyInvalid = 1005,
    /**
     유효하지 않은 출발지
     */
    INVStartInvalid    = 2001,
    /**
     유효하지 않은 목적지
     */
    INVGoalInvalid    = 2003,
    /**
     서버 응답 오류
     */
    INVResponseFailure   = 2006,
    /**
     초기 지도 다운로드 실패
     */
    INVMapDownLoadFailure = 3001,
    /**
     안전운행 다운로드 실패
     */
    INVGuideDownLoadFailure = 3006,
    /**
     초기 인증 실패
     */
    INVInitAuthFailure = 3007,
    /**
     검색 결과 없음
     */
    INVSearchResultNotFound = 4000,
    /**
     유효하지 않은 검색어
     */
    INVQueryInvalid = 4001,
};

#endif /* INaviControllerDefine_h */
