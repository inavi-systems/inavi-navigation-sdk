//
//  IAGuidanceDefine.h
//  InaviAIR
//
//  Created by Jeoung YooJin on 10/4/12.
//
//

//guide define
typedef enum{
	GCODE_NONE_0 = 0				,
	GCODE_NONE_1					,
	GCODE_NONE_2					,
	GCODE_STRAIGHTWAY_HIGHWAY_EXIT	,	// 3  전방에 직진방향으로 고속도로출구입니다.
	GCODE_LEFTWAY_HIGHWAY_EXIT		,	// 4  전방에 좌측방향으로 고속도로출구입니다.
	GCODE_RIGHTWAY_HIGHWAY_EXIT		,	// 5  전방에 우측방향으로 고
	GCODE_REST						,	// 6  전방에 휴계소 입니다.
	GCODE_LEFTWAY					,	// 7  전방에서 좌측 방향입니
	GCODE_RIGHTWAY					,	// 8  전방에서 우측 방향입니
	GCODE_STRAGHTWAY_HIGHWAY_ENT	,	// 9  전방에 고속도로입구입니
	GCODE_LEFTWAY_HIGHWAY_ENT		,	// 10 전방 좌측에 고속도로 입
	GCODE_RIGHTWAY_HIGHWAY_ENT		,	// 11 전방 우측에 고속도로 입
	GCODE_LEFT_TURN					,	// 12 전방에서 좌회전입니다.
	GCODE_RIGGHT_TURN				,	// 13 전방에서 우회전입니다.
	GCODE_UTURN						,	// 14 전방에서 유턴입니다.
	GCODE_STRAGHTWAY				,	// 15 전방에서 직진입니다.
	GCODE_TIME12WAY					,	// 16 전방에서 12시 방향입니
	GCODE_TIME1WAY					,	// 17 전방에서 1시 방향입니다
	GCODE_TIME2WAY					,	// 18 전방에서 2시 방향입니다
	GCODE_TIME3WAY					,	// 19 전방에서 3시 방향입니다
	GCODE_TIME4WAY					,	// 20 전방에서 4시 방향입니다
	GCODE_TIME5WAY					,	// 21 전방에서 5시 방향입니다
	GCODE_TIME6WAY					,	// 22 전방에서 6시 방향입니다
	GCODE_TIME7WAY					,	// 23 전방에서 7시 방향입니다
	GCODE_TIME8WAY					,	// 24 전방에서 8시 방향입니다
	GCODE_TIME9WAY					,	// 25 전방에서 9시 방향입니다
	GCODE_TIME10WAY					,	// 26 전방에서 10시 방향입니
	GCODE_TIME11WAY					,	// 27 전방에서 11시 방향입니
	GCODE_STRAIGHTWAY_OVERROAD		,	// 28 전방에서 고가도로입니다
	GCODE_LEFTWAY_OVERROAD			,	// 29 전방에서 좌측 고가도로
	GCODE_RIGHTWAY_OVERROAD			,	// 30 전방에서 우측 고가도로
	GCODE_STRAGHTWAY_OVERROAD_SIDE	,	// 31 전방에서 고가도로 옆길
	GCODE_LEFTWAY_OVERROAD_SIDE		,	// 32 전방에서 고가도로 옆길
	GCODE_RIGHTWAY_OVERROAD_SIDE	,	// 33 전방에서 고가도로 옆길
	GCODE_STRAIGHTWAY_UNDERROAD		,	// 34 전방에서 지하차도 입니
	GCODE_LEFTWAY_UNDERROAD			,	// 35 전방에서 좌측 지하차도
	GCODE_RIGHTWAY_UNDERROAD		,	// 36 전방에서 우측 지하차도
	GCODE_STRAIGHTWAY_UNDERROAD_SIDE,	// 37 전방에서 지하차도 옆길
	GCODE_LEFTWAY_UNDERROAD_SIDE	,	// 38 전방에서 지하차도 옆길
	GCODE_RIGHTWAY_UNDERROAD_SIDE	,	// 39 전방에서 지하차도 옆길
	GCODE_PTURN						,	// 40 전방에서 피턴입니다.
	GCODE_NONE_3					,	// 41
	GCODE_TUNEL						,	// 42 전방에서 터널입니다.
	GCODE_TOLLGATE					,	// 43 전방에 톨게이트 입니다
	GCODE_NONE_4					, 	// 44
	GCODE_NONE_5					, 	// 45
	GCODE_ROTARI_1					,	// 46 전방 로터리에서 1시 방
	GCODE_ROTARI_2					,	// 47 전방 로터리에서 2시 방
	GCODE_ROTARI_3					,	// 48 전방 로터리에서 3시 방
	GCODE_ROTARI_4					,	// 49 전방 로터리에서 4시 방
	GCODE_ROTARI_5					,	// 50 전방 로터리에서 5시 방
	GCODE_ROTARI_6					,	// 51 전방 로터리에서 6시 방
	GCODE_ROTARI_7					,	// 52 전방 로터리에서 7시 방
	GCODE_ROTARI_8					,	// 53 전방 로터리에서 8시 방
	GCODE_ROTARI_9					,	// 54 전방 로터리에서 9시 방
	GCODE_ROTARI_10					,	// 55 전방 로터리에서 10시
	GCODE_ROTARI_11					,	// 56 전방 로터리에서 11시
	GCODE_ROTARI_12					,	// 57 전방 로터리에서 12시
	GCODE_STRAIGHTWAY_NEXTGUIDE		,	// 58 다음 안내시까지 직진입
	GCODE_VIA						,	// 59 전방에 경유지 주변입니
	GCODE_END_ST1					,	// 60 전방에 목적지 주변입니
	GCODE_END_ST2					,	// 61 목적지 주변에 도착하였
	GCODE_END_ST3					,	// 62 잠시후 목적지 주변입니
	GCODE_END_ST4					,	// 63 목적지 주변에 도착하였
	GCODE_NONE_6					,	// 64
	GCODE_NONE_7					,	// 65
	GCODE_NONE_8					,	// 66
	GCODE_MAX = 67
	
}GCODE;


//link projection Err Msg Define
typedef enum{
	PROJECTION_PR_ERROR			= 0,
	PROJECTION_NOMAL_ROAD		= 1,
	PROJECTION_HIWAY			= 2,
	PROJECTION_ELEVATED_ROAD	= 3,
	PROJECTION_UNDER_ROAD		= 4,
	PROJECTION_TUNNEL			= 5,
	PROJECTION_BRIDGE			= 6,
	PROJECTION_ONEWAY			=7,
	PROJECTION_APTCOMPLEX_ROAD	= 8,
	PROJECTION_PR_NOWAY			= 9,
}PROJECTION_ERR_CODE;

typedef enum{
	iPROJECTION_TYPE_START = 0,
	iPROJECTION_TYPE_GOAL = 1,
}iProjectionType;

#if 0  //이동식 박스 적용 전.
//carmera type define
typedef enum{
	CAM_NONE_TYPE			= 0, //없음
	CAM_FIX_OVERSPEED		= 1, //고정식 과속
	CAM_FIX_SPEED_SIGNAL	= 2, //고정식 과속 신호
	CAM_FIX_SIGNAL			= 3, //고정식 신호
	CAM_FIX_BUS				= 4, //고정식 버스
	CAM_FIX_TRAFFIC			= 5, //고정식 교통량
	CAM_MOVE_OVERSPEED		= 6, //이동식 과속
	CAM_MOVE_BUS			= 7, //이동식 버스
	CAM_STOPAGE				= 8, //주정차 위반
	CAM_OVERLOAD			= 9, //과적 단속
	CAM_INTERRUPT			= 10, //고정식 끼어들기
	CAM_SAFEAREA_START		= 11, //구간단속시작
	CAM_SAFEAREA_END		= 12, //구간 단속 종료
	CAM_USER				= 13, //사용자 등록
	CAM_SAFEAREAD_MIDDLE	= 14, //구간 단속 중간
	CAM_SCHOOL_ZONE			= 15, //학교앞
	CAM_CONSTRUCTION_ZONE	= 16, //공사구간
    
    CAM_MOVE_BOX            = 20,// 13.이동식박스
    CAM_SILVER_ZONE         = 21,// 18.실버존
    CAM_TOTALCOUNT          = 22, // 19. 카메라 총 갯수 (카메라 우선순위에 사용)
}CAMERA_TYPE;
#else
/*
 2013.08.30 서명준 대리님 메일내용
 위험지역 코드표
 0                              // 없음
 1                              // 1.고정식과속
 2                              // 2.고정식과속신호
 3                              // 3.고정식신호
 4                              // 4.고정식버스
 5                              // 5.고정식교통량
 6                              // 6.이동식과속
 7                              // 7.이동식버스
 8                              // 8.주정차위반
 9                              // 9.과적단속
 10                             // 10.고정식끼어들기
 11                             // 11.구간단속시작지점
 12                             // 12.구간단속종료지점
 13                             // 13.이동식박스
 14                             // 14.사용자등록
 15                             // 15.구간단속중간지점(진행중)
 16                             // 16.어린이 보호
 17                             // 17.공사구간
 18                             // 18.실버존
 19                             // 19. 카메라 총 갯수 (카메라 우선순위에 사용)

 */
//carmera type define
typedef enum{
    CAM_NONE_TYPE			= 0,    // 없음
    CAM_FIX_OVERSPEED		= 1,    // 1.고정식과속
    CAM_FIX_SPEED_SIGNAL	= 2,    // 2.고정식과속신호
    CAM_FIX_SIGNAL			= 3,    // 3.고정식신호
    CAM_FIX_BUS				= 4,    // 4.고정식버스
    CAM_FIX_TRAFFIC			= 5,    // 5.고정식교통량
    CAM_MOVE_OVERSPEED		= 6,    // 6.이동식과속
    CAM_MOVE_BUS			= 7,    // 7.이동식버스
    CAM_STOPAGE				= 8,    // 8.주정차위반
    CAM_OVERLOAD			= 9,    // 9.과적단속
    CAM_INTERRUPT			= 10,   // 10.고정식끼어들기
    CAM_SAFEAREA_START		= 11,   // 11.구간단속시작지점
    CAM_SAFEAREA_END		= 12,   // 12.구간단속종료지점
    CAM_MOVE_BOX            = 15,   // 15.이동식박스
    CAM_SCHOOL_ZONE			= 16,   // 16.어린이 보호
    CAM_CONSTRUCTION_ZONE	= 17,   // 17.공사구간
    CAM_SILVER_ZONE         = 18,   // 18.실버존
    CAM_USER				= 19,   // 19.사용자등록
    CAM_TUNNEL_CCTV         = 20    // 20.터널내 차로변경 CCTV
    
	
}CAMERA_TYPE;
#endif
// road type
typedef enum{
	ROAD_TYPE_ETC				= 0,	// 0 기타도로, 미조사 도로 --> 페리항로로 변경될 예정
	ROAD_TYPE_EXPRESS			= 1,	// 1 고속 자동차 국도(고속도로)
	ROAD_TYPE_CITY_NATIONAL		= 2,	// 2 도시 고속 국도
	ROAD_TYPE_NATIONAL			= 3,	// 3 일반국도
	ROAD_TYPE_COUNTRY			= 4,	// 4 지방도
	ROAD_TYPE_GENERAL			= 5,	// 5 일반도로
	ROAD_TYPE_CAR_ONLY			= 6,	// 6 자동차 전용 도로
	ROAD_TYPE_CAN_NOT_ROUTE		= 7,	// 7 탐색 불가도로
}ROAD_TYPE;

// road type for 2
typedef enum{
    ROAD_TYPE_NOT				= 0,	// 0 속성 없음
    ROAD_TYPE_HIGHT             = 1,	// 1 고가차도
    ROAD_TYPE_UNDER             = 2,	// 2 지하차도
    ROAD_TYPE_TUNNEL			= 3,	// 3 터널
    ROAD_TYPE_TOLLGATE			= 4,	// 4 톨게이트
    ROAD_TYPE_GYURANG			= 5,	// 5 교량
    ROAD_TYPE_INROAD			= 6,	// 6 단지 내 도로
    ROAD_TYPE_REST              = 7,	// 7 휴게소
}ROAD_TYPE_ATTRIBUTE;


// 카메라 안내 심볼 1.2km 이상은 출력 안함
#define CAM_GUIDE_DISPLAY_LIMIT_DIST		1200	// 단위 : meter
// 턴 심볼은 거리가 10km 이상이면 출력 안함
// 차기 , 차차기 거리가 9.9km 이하일때만 출력
#define TURN_GUIDE_DISPLAY_LIMIT_DIST		9900	// 단위 : meter
// 턴심볼이 2km이내 있으면 고속모드는 출력하지 않는다.
#define TURN_GUIDE_DISPLAY_HIGHMODE_CLOSE	2000	// 단위 : meter
//LinkProjection 범위
#define LINKPROJECTION_BOUNDARY				3000

//차선 타입
typedef enum{
    LANETYPE_NOMAL              = 0,    // 일반
    LANETYPE_LPOCKET,            		// 좌포켓
    LANETYPE_RPOCKET,            		// 우포켓
    LANETYPE_UP,                        // 고가
    LANETYPE_DOWN,                      // 지하
    LANETYPE_BUS,                       // 버스
    LANETYPE_CHANGE,                    // 가변
    LANETYPE_LPOCKET_UP,                // 좌포켓고가
    LANETYPE_LPOCKET_DOWN,              // 좌포켓지하
    LANETYPE_LPOCKET_BUS,               // 좌포켓버스
    LANETYPE_LPOCKET_CHANGE,            // 좌포켓가변
    LANETYPE_RPOCKET_UP,                // 우포켓고가
    LANETYPE_RPOCKET_DOWN,              // 우포켓지하
    LANETYPE_RPOCKET_BUS,               // 우포켓버스
    LANETYPE_RPOCKET_CHANGE,            // 우포켓가변
    LANETYPE_HIPASS,                    // highpass
}LANE_TYPE;

typedef enum{
    TrafficCodeType_Nothing = 0,    //없음
    TrafficCodeType_Smooth = 1,     //원활
    TrafficCodeType_SlowDown,       //서행
    TrafficCodeType_Delay,          //지체
}TrafficCodeType;


typedef enum{
    LaneInfo_LineType_Default = 0,          //점선 -> 이제 아무것도 아님
//    LaneInfo_LineType_Reversible,           //실선
    LaneInfo_LineType_L_Pocket = 1,             //좌포켓
    LaneInfo_LineType_R_Pocket = 2,             //우포켓
}LaneInfo_LineType;

typedef enum{
    LaneInfo_BusLine_D = 0,     //버스 직진
    LaneInfo_BusLine_L = 1,     //버스 좌회전
    LaneInfo_BusLine_R = 2,     //버스 우회전
    LaneInfo_BusLine_L_D = 3,   //버스 좌직
    LaneInfo_BusLine_R_D = 4,    //버스 우직
    LaneInfo_BusLine_U = 5    //버스 유턴
}LaneInfo_BusLine;

typedef enum{

    LaneInfo_OptionType_Bus = 0,            //버스
    LaneInfo_OptionType_HighRoad,           //고가
    LaneInfo_OptionType_Reversible,         //가변
    LaneInfo_OptionType_Hipass,             //하이패스
    LaneInfo_OptionType_UnderRoad,           //지하
    LaneInfo_OptionType_Nothing = 0x10      //옵션 없음 
}LaneInfo_OptionType;
