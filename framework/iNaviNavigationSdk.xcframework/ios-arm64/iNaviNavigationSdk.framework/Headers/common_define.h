//
//  common_define.h
//  InaviAir
//
//  Created by Jeoung YooJin on 8/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#define WGS84Degree             NSInteger               //경위도 변환값
#define iNaviRegular            double                  //아이나비 정규화 좌표 (DP, 등록지점, 최근 목적지, 탐색 결과 값에서 사용)
#define DISPLAY_4INCH           568.f                   //4 inch display
#define DISPLAY_3_5INCH         480.f                   //3.5 inch display
#define DISPLAY_RETINA_SCALE    2.0f                    //retina scale 2
#define DISPLAY_RETINA_SCALE3    3.0f                    //retina scale 3
#define DP_InaviRegular_X_Ratio 1.2f                    //DP용 정규화 좌표로 변환시 비율

struct CGDoublePoint {
    double x;
    double y;
};
typedef struct CGDoublePoint CGDoublePoint;


#define KAKAOUSE
#define GROUPDRIVE
#define INVFLocationViewUse

#define INAVI_Agent_RUN_WeakExtraFee 1 //0->주말할증 미적용 1->주말할증 적용


#define CLOUD_USE

#define IMAGES_COMMON           @"Images/common/"
#define IMAGES_COMMON_BUTTON    @"Images/common/button/"
#define IMAGES_COMMON_DROPDOWN  @"Images/common/dropdown/"
#define IMAGES_COMMON_LIST      @"Images/common/list/"
#define IMAGES_COMMON_SEARCH    @"Images/common/search/"
#define IMAGES_COMMON_STEP      @"Images/common/step/"
#define IMAGES_COMMON_TAB       @"Images/common/Tab/"
#define IMAGES_COMMON_TITLE     @"Images/common/title/"

#define IMAGES_HOME             @"Images/home/"
#define IMAGES_HOME_POI_000     @"Images/home/poi/000/"

#define IMAGES_HUD              @"Images/HUD/"

#define IMAGES_MAP              @"Images/map/"

#define IMAGES_POPUP            @"Images/popup/"

#define IMAGES_SETTING          @"Images/setting/"

#define IMAGES_UNIFIED_SEARCH   @"Images/Unified Search/"

#define IMAGES_TRF              @"Images/trf/"
#define IMAGES_INTRO            @"Images/intro/"
#define IMAGES_KAKAO            @"Images/kakao/"

#define IMAGES_ONAIR            @"Images/onair/"
#define IMAGES_FRAME_COMMON_BUTTON @"Images/frame_common/button/"

#define IMAGES_BLACKBOX     @"Images/Blackbox/"
#define IMAGES_ROUTEALL     @"Images/RouteImage/"

#ifdef DEBUG

    #define G_SAFE_FREE(arg) if(arg != nil){[arg release]; if([arg retainCount] > 0){NSLog(@"##### [DEALLOC] retainCount : %d", [arg retainCount]);}arg = nil;}
    #define LogMethod() NSLog(@"called !!")

    #ifdef DEBUG_TEST_LOG
        #define LogMessageTest( s, ... ) NSLog( @"<%p %@:(%d)> %@", self, [[NSString stringWithUTF8String:__FILE__] lastPathComponent], __LINE__, [NSString stringWithFormat:(s), ##__VA_ARGS__] )
    #else
        #define LogMessageTest( s, ... )
    #endif
        
#else
    #define NSModuleLog( s, ... )
    #define LogMessageTest( s, ... )
    #define NSLog( s, ... )
    #define LogMethod()

#endif

#define NSINVLog( s, ... )

//주소정보 커먼
#define NEWADDR         0
#define OLDADDR         1

#define UIColorFromRGB(rgbValue) \
[UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 \
green:((float)((rgbValue & 0x00FF00) >>  8))/255.0 \
blue:((float)((rgbValue & 0x0000FF) >>  0))/255.0 \
alpha:1.0]
#define RGB(r, g, b) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:1]
#define RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0 green:g/255.0 blue:b/255.0 alpha:a]

//마지막은 교통정보 실제 컬러는 디폴드와 같음 index 0
//#define IDS_SETTING_LINE_COLOR  [NSArray arrayWithObjects:[NSNumber numberWithUnsignedInt:0xFF319CFC],\
//                                                          [NSNumber numberWithUnsignedInt:0xFF109171],\
//                                                          [NSNumber numberWithUnsignedInt:0xFFFF3B49],\
//                                                          [NSNumber numberWithUnsignedInt:0xFFFA6A01],\
//                                                          [NSNumber numberWithUnsignedInt:0xFF974BD8],\
//                                                          [NSNumber numberWithUnsignedInt:0xFF319CFC],\
//                                                          nil]
#define IDS_SETTING_LINE_COLOR  [NSArray arrayWithObjects:[NSNumber numberWithUnsignedInt:0xFF319CFC],\
                                                          [NSNumber numberWithUnsignedInt:0xFFFF3B49],\
                                                          [NSNumber numberWithUnsignedInt:0xFF319CFC],\
                                                          nil]

struct IAPoint {
    long x;
    long y;
};

typedef enum{
    Time_of_type_Estimated = 0, //0: 오전/오후
    Time_of_type_LeadTime,      //1: 소요 표시
}Time_of_type;

#define degreesToRadians(x) (x * M_PI / 180)

#define string_nilcheck_func(string) (string != nil  && string.length > 0)

// POI 최상위 depth
#define kPOITopDepth                            0

// 경로 주변 다중 카테고리 검색 응답 direction
#define kRouteOppositeDirection                 0   // 경로역방향
#define kRouteDirection                         1   // 경로진행방향

#define kAdmTypeL                               @"L" // 법정동
#define kAdmTypeA                               @"A" // 행정동

#define xKey  @"x"
#define yKey  @"y"

