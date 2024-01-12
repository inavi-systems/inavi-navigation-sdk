//
//  IACommon.h
//  InaviAIR
//
//  Created by Jeoung YooJin on 8/10/12.
//
//

#import <Foundation/Foundation.h>
#import "IAGuidanceDefine.h"
//#import "UINavigationController+AIR.h"
@class RouteResultInfoData;
@class InvTrafficBarData;

////////////////////////////////////////////////////////////////////
//Notification
//extern NSString *const AIRSharedInstanceReleaseNotification;                             //shared instance release


typedef enum{
    IAImagePathType_Common = 0,
    IAImagePathType_Common_Button,
    IAImagePathType_Common_Dropdpwn,
    IAImagePathType_Common_List,
    IAImagePathType_Common_Search,
    IAImagePathType_Common_Tab,
    IAImagePathType_Common_Title,
    IAImagePathType_Home,
    IAImagePathType_Map,
    IAImagePathType_HUD,
    IAImagePathType_Setting,
    IAImagePathType_UnifiedSearch,
    IAImagePathType_Popup,
    IAFrameImagePathType_OnAIR,
    IAFrameImagePathType_FrameCommon_Button,
    IAImagePathType_TRF,
    IAImagePathType_Intro,
    IAImagePathType_Kakao,
    IAImagePathType_Blackbox,
    IAImagePathType_RouteAll
}IAImagePathType;

typedef NS_ENUM(NSUInteger, GuideAction) {
    GuideAction_None = 0,
    GuideAction_1KM = 1,
    GuideAction_2KM = 2,
};

typedef NS_ENUM(NSUInteger, GuideSoundType) {
    GuideSoundType_None = 0,
    GuideSoundType_Turn = 1,
    GuideSoundType_Camera = 2,
};

typedef enum  {
    VIEWMODE_BIRDVIEW  = 0,
    VIEWMODE_HEADUP    = 1,
    VIEWMODE_NORTHUP   = 2,
}VIEWMODE;

#define ZOOMFIT_XSMALL  @"xSmall"
#define ZOOMFIT_YSMALL  @"ySmall"
#define ZOOMFIT_XLARGE  @"xLarge"
#define ZOOMFIT_YLARGE  @"yLarge"

#define CONTENTVIEW_X                   276
#define CONTENTVIEW_2_Y                 225
#define CONTENTVIEW_3_Y                 305
#define POPUP_TITLE_HEIGHT_2            38
#define POPUP_TITLE_HEIGHT_3            61
#define POPUP_LEFT_RIGHT_MARGIN         15
#define POPUP_TITLE_WIDTH               245
#define POPUP_BOTTOM_BUTTON_HEIGHT      46

#define POPUP_TEXT_WIDTH                219
#define POPUP_TOP_MARGIN                15
#define POPUP_TOP_MARGIN2               18
#define POPUP_DOWN_MARGIN               13
#define POPUP_DETAIL_TITLE_HEIGHT       16
#define POPUP_MARGIN_TEXT               6
#define POPUP_DETAIL_SUB_HEIGHT         13
#define POPUP_DETAIL_SUB_2HEIGHT        25
#define POPUP_LINE_HEIGHT               1
#define POPUP_BUTTON_WH                 26

@interface IACommon : NSObject

+ (void)frameworkFontLoad;
+ (void)changeDevServer;
+ (CGFloat)getConvertCoord:(CGFloat)Coord;
+ (CGFloat)getConvertToLowCoord:(CGFloat)Coord;
+ (CGFloat)getResolutionCoord:(CGFloat)resolution;
+ (CGFloat)getIconOffset:(CGFloat)size;
+ (BOOL)bDeviceExceptionCheck;
+ (BOOL)bLargeScreenCheck;
+ (BOOL)bSmallScreenCheck;
+ (NSString*)getNibNameWithString:(NSString*)name;
+ (CGDoublePoint)CGDoublePointZero;
+ (CGDoublePoint)CGDoublePointMake:(double)x y:(double)y;
+ (CGRect)getScreenSize;
+ (CGFloat)getScreenScale;

+ (UIFont*)getIAUIFont;
+ (UIFont*)getIAUIFont:(CGFloat)fontSize;
+ (UIFont*)getIAUIFontB:(CGFloat)fontSize;
+ (UIFont*)getIAUIFontEB:(CGFloat)fontSize;
+ (void) dispatchSelector:(SEL)selector
                   target:(id)target
                  objects:(NSArray*)objects
             onMainThread:(BOOL)onMainThread;

+ (UIImage *)imageWithColor:(UIColor *)color;
+ (UIImage *)imageWithColor:(UIColor *)color size:(CGSize)size;
// UIView -> UIImage
+ (UIImage *)imageWithView:(UIView *)view;
+ (double)get_distance:(int)lon1 lat:(int)lat1 nextLon:(int)lon2 nextLat:(int)lat2;
+ (double)pXLengthToDPlength:(double)left largeTop:(double)top largeRight:(double)right smallBottom:(double)bottom viewWidth:(int)view_width viewHeight:(int)view_height imgLength:(int)length;
//image Resource 확인 작업
+ (NSMutableDictionary *)coordinateSmallLargeForRoute;
+ (NSMutableDictionary *)coordinateSmallLargeFor2F2T;
+ (NSMutableDictionary *)coordinateSmallLargeForRouteResult:(NSArray *)routeList;
+ (NSMutableDictionary *)coordinateSmallLargeForRouteResultOne:(RouteResultInfoData *)resultInfo1;
+ (NSString*)getResourcePath:(NSString*)imageName;
//+ (NSString*)getResourcePath:(NSString*)imageName ofType:(NSString*)ofType;

+ (UIImage*)getImageToResourcePath:(IAImagePathType)type imageName:(NSString*)imageName bCache:(BOOL)bCache;
+ (UIImage*)getImageToResourcePath:(IAImagePathType)type imageName:(NSString*)imageName;
+ (UIImage*)getImageToResourcePath:(NSString*)imageName;


//CGMakeRect
+ (CGRect)CGMakeRectChangeHeight:(CGRect)rect height:(NSInteger)height;
+ (CGRect)CGMakeRectChangeWidth:(CGRect)rect width:(NSInteger)width;
+ (CGRect)CGMakeRectChangeX:(CGRect)rect x:(NSInteger)x;
+ (CGRect)CGMakeRectChangeY:(CGRect)rect y:(NSInteger)y;
+ (CGPoint)getPoint:(CGRect)rect width:(NSInteger)width height:(NSInteger)height;
//시스템 버전에 체크하려는 버전과 같은가
+ (BOOL)isSystemVersionEqualsTo:(NSString*)version;
//시스템 버전에 체크하려는 버전보다 큰가
+ (BOOL)isSystemVersionGreaterThan:(NSString*)version;
//시스템 버전에 체크하려는 버전보다 작은가
+ (BOOL)isSystemVersionLessThan:(NSString*)version;

+ (UILabel*)setUILabel:(CGRect)frame fontSize:(NSInteger)fontSize color:(UIColor*)color text:(NSString*)text;
+ (UIButton*)setUIButton:(CGRect)frame fontSize:(NSInteger)fontSize fontColor:(UIColor*)fontColor text:(NSString*)text;
+ (UISearchBar*)createSearchBar:(CGRect)frame placeholder:(NSString*)placeholder;

+(BOOL)setUILabelHighlightColor:(UILabel *)label changeText:(NSString*)text changeColor:(UIColor*)color;
+(BOOL)setUILabelHighlightColorLine:(UILabel *)label changeText:(NSString*)text changeColor:(UIColor*)color;

+ (UIImage *) rotateImage:(UIImage *)img angle:(int)angle;
//숫자 이미지,
+ (void)createNumberImage:(CGSize)resultImageSize
                   nValue:(NSInteger)nValue
                  bKmOnly:(BOOL)bKmOnly
            kmUnitImgPath:(NSString*)kmUnitImgPath
           dotUnitImgPath:(NSString*)dotUnitImgPath
               numImgPath:(NSString*)numImgPath
             mUnitImgPath:(NSString*)mUnitImgPath
                  startPt:(CGPoint*)startPt;
+ (void)drawDistanceImage:(NSString*)strDistance
               bUseUnitKm:(BOOL)bUseUnitKm
                kmUnitImg:(UIImage*)kmUnitImg
               dotUnitImg:(UIImage*)dotUnitImg
               numImglist:(NSArray*)numImglist
                 mUnitImg:(UIImage*)mUnitImg
                  startPt:(CGPoint)startPt;
//Text + Image
+ (void)createLeftTextRightImage:(CGContextRef)context text:(NSString*)text  rect:(CGRect)rect  fontSize:(NSInteger)fontSize fontColor:(UIColor*)fontColor;
+ (UIImage*)createLeftImageRightText:(NSString*)text image:(UIImage*)image fontSize:(NSInteger)fontSize fontColor:(UIColor*)fontColor maxWidth:(NSInteger)maxWidth;
+ (UIImage*)createTimeNumber:(NSInteger)totalTimeInterval fontSize:(NSInteger)fontSize fontColor:(UIColor*)fontColor;

#ifdef DEBUG_SCREENCAPTURE
+ (void)screenCapture:(UIView*)view;
#endif
//webp 이미지 인지 체크
+ (BOOL)isWebpImage:(NSData*)imageData;
+ (UIImage* )getWebpImage:(NSData*)imageData;


//볼륨 체크
+ (BOOL)getVolumeYesOrNot;

//회전 메소드
+ (NSUInteger)supportedInterfaceOrientations;
// iOS 6.0 미만
+ (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation;
+ (BOOL)shouldAutorotate;

+ (void)setNavigationBarBackground:(BOOL)bAIRTheme;
+(BOOL)getNavigationBarTheme;

#pragma mark uiimageutil
+(UIImage*)imageByOrientation:(UIImage*)img :(CGSize)viewSize;
+(UIImage *)scaleAndRotate:(UIImage *)image maxResolution:(int)maxResolution orientation:(UIImageOrientation)orientation;

//+ (CGFloat)setTopOffset;

+ (NSArray *)pipeDB_ParsingForRestInfo:(NSString *)restCode;

//+ (void)custom_pushViewController:(id)viewController flag:(ViewControllerFlag)flag animated:(BOOL)animated;
//+ (void)custom_pushViewController:(id)viewController flag:(ViewControllerFlag)flag animated:(BOOL)animated bWithRelease:(BOOL)bRelease;
+ (void)custom_presentViewController:(id)viewController animated:(BOOL)animated;
//+ (BOOL)custom_goMapController;
+ (BOOL)custom_goMapControllerWithCurOn:(BOOL)curOn closeLeftMenu:(BOOL)closeMenu checkConfig:(BOOL)checkConfig;
+ (void)carPlayGoMapController;
+ (BOOL)custom_goSNSLoginViewController;
//+ (void)custom_MapToViewingChange;

+ (BOOL)isBackgroundAbleCheck;

+ (BOOL)stringContainsEmoji:(NSString *)string textField:(UITextField *)textField;

+(UIImage *)imageWithImage:(UIImage *)image scaledToSize:(CGSize)newSize;

//소요시간 사양 정리
+(NSString*)stringRemainingTimeWithHour:(int)nHour Min:(int)nMin zeroFormat:(BOOL)zeroFormat space:(BOOL)space;

+(void)goWebView:(NSString*)url bEventBanner:(BOOL)bEventBanner;

+(NSInteger)currentMapLevel;
+(VIEWMODE)getMapViewMode;

+(void)setMapTimeOfDestination;

+(BOOL)getMapTimeOfDestination;

//
+ (NSMutableAttributedString*)updateDist:(NSInteger)distance;
+ (NSMutableAttributedString*)updateTime:(NSInteger)remainTime remainTime:(BOOL)typeOfTime;
+ (NSString*)loadCurAddrName;

//
+ (BOOL)getCheckVisble:(NSInteger)viewId;


//
+ (NSString*)getViaPointName;
+ (NSString*)getGoalName;
+ (NSInteger)getPassedDistance;
+ (NSTimeInterval)getStart_Date;
+ (NSInteger)getPaidTollFee;

+ (BOOL)isRouteExist;
+ (BOOL)getDriveMode;

+ (NSString*)getSwiftTurnSymbolImageString:(NSInteger)nGCode  viaOrder:(NSInteger)viaOrder;

+ (LaneInfo_LineType)getSwiftLaneType:(NSInteger)laneType;
+ (LaneInfo_OptionType)getSwiftOptionType:(NSInteger)optionType;
+ (LaneInfo_BusLine)getLaneTypeForBus:(NSInteger)lanecode;

+(BOOL)isSwiftDrawSafeSymbol:(ROAD_TYPE)roadType cameraType:(NSInteger)cameraType distance:(NSInteger)distance;
+ (NSString* _Nullable)getSwiftSafeSymbolBGImagePathNew:(NSInteger)cameraType;

+ (UIImage*)getZoomImage:(NSString*)name linkOrder:(NSInteger)linkOrder;

+ (BOOL)isTrafficBarDrawCheck;

+ (NSMutableArray<InvTrafficBarData*>* _Nullable)makeArrayForTrafficBarDraw;

+ (NSInteger)getCurrentLinkIndex;
+ (NSInteger)getLinkCount;

+ (NSInteger)getCurrentLinkDistance;

+ (NSInteger)getReminingDistance;

+ (NSInteger)getReminingTime;

+ (NSInteger)getRemainingTollFee;

+ (CGPoint)getCurrentPostion;

+ (BOOL)isSimulMode;

+ (NSInteger)getRouteLength;

+ (NSString*)getAdderss:(BOOL)bUpdate;

+ (void)setSimulSpeed:(CGFloat)speed;
+ (void)setSimulPosition:(CGFloat)percent;
+ (void)setSimulIndex:(NSInteger)index;
+ (void)setSimulPause:(BOOL)bPause;
+ (NSInteger)getPreLinkIndex:(NSInteger)curTurnLinkIndex;
+ (NSInteger)getNextLinkIndex:(NSInteger)curTurnLinkIndex;

+ (NSString*)getShiSpdLmtPath;
+ (NSString*)getShiPoiPath;
+ (NSDictionary<NSString *,NSString *> *_Nonnull)getDefaultHeader;
+ (NSString*_Nonnull)getDefatulHost;
+ (NSString*_Nonnull)getDefatulPort;
+ (CGPoint)regToWGS84:(double)x y:(double)y;
+ (void)noDriveSoundAlert;
+ (void)disasterSoundAlert;
+ (void)stopAreaSoundAlert;
+ (void)addLimitPinPoint:(NSArray<NSValue*>*)points;
+ (void)addDisasterPinPoint:(NSArray<NSValue*>*)points;
+ (NSInteger)getDistancePoint:(CGPoint)point;
@end
