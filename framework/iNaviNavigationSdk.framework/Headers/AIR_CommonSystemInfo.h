//
//  AIR_CommonSystemInfo.h
//  InaviAIREngine
//
//  Created by Jeoung YooJin on 5/6/13.
//  Copyright (c) 2013 Jeoung YooJin. All rights reserved.
//
#import "Reachability.h"
#import <CoreLocation/CoreLocation.h>
#import <Foundation/Foundation.h>
#import "TWBlockMethod.h"
#define IPHONE_6_0          6.0
#define IPHONE_7_0          7.0
#define IPHONE_8_0          8.0
#define IPHONE_9_0          9.0

#define IPHONE_PLATFORM_NAME_4          @"iPhone 4"
#define IPHONE_PLATFORM_NAME_4_CDMA     @"iPhone 4 (CDMA)"

@interface AIR_CommonSystemInfo : NSObject

+ (BOOL)isCurrentOrientationPortrate;
+ (BOOL)isCurrentOrientationLandScape;
+ (UIDeviceOrientation)isCurrentOrientation;

#pragma mark - window
+ (UIWindow *)getMainWindow; // 카플레이 CPWindow 가 아닌 단말 UIWindow GET

#pragma mark - gps mode
+ (CLAuthorizationStatus)getGPSAuthorizationStatus;
+ (BOOL)isGPSAuthorized;
+ (NSString*)getGPSAutorizationStatusString:(CLAuthorizationStatus)status;

+ (BOOL)checkGPSAuthEnabledWithBlock:(V_B_BLOCK)resultBlock withPopup:(BOOL)bPopup dismissBlock:(V_B_BLOCK)dismissBlock;

#pragma mark - network
+ (BOOL)isNetwork3G;

+ (BOOL)isNetworkWifi;

+ (BOOL)isNetworkNothing;

+ (NetworkStatus)getCurrentNetworkStatus;            //0:접속 불능, 1: WIFI 2: 3G


#pragma mark - battery
+ (NSInteger)getBatteryLevel;

#pragma mark - version
+ (float)getCurrentDeviceVersion;

#pragma mark - device name
+ (NSString *)platformStringForNetworking;
+ (NSString *) platformString;

+ (BOOL)isiPadCheck;

#pragma mark - jailbroken check
+ (BOOL)isJailbroken;

+(CGFloat)getStatusBarHeightSize;
@end
