//
//  IAColor.h
//  SettingView
//
//  Created by Jeoung YooJin on 9/7/12.
//  Copyright (c) 2012 Jeoung YooJin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface IAColor : NSObject


//*****************kt common color**************//
+ (UIColor*)Color_white;
+ (UIColor*)Color_white90;
+ (UIColor*)Color_white80;
+ (UIColor*)Color_white70;
+ (UIColor*)Color_white20;
+ (UIColor*)Color_grey01;
+ (UIColor*)Color_grey02;
+ (UIColor*)Color_grey02_80;
+ (UIColor*)Color_grey03;
+ (UIColor*)Color_grey04;
+ (UIColor*)Color_grey05;
+ (UIColor*)Color_grey05_30;
+ (UIColor*)Color_grey06;
+ (UIColor*)Color_grey07;
+ (UIColor*)Color_grey08;
+ (UIColor*)Color_grey09;
+ (UIColor*)Color_grey09_97;
+ (UIColor*)Color_grey10;
+ (UIColor*)Color_grey11;
+ (UIColor*)Color_grey12;
+ (UIColor*)Color_grey13;
+ (UIColor*)Color_black;
+ (UIColor*)Color_free;
+ (UIColor*)Color_white_50;
+ (UIColor*)Color_white_80;
+ (UIColor*)Color_black_94;
+ (UIColor*)Color_black_88;
+ (UIColor*)Color_black_80;
+ (UIColor*)Color_black_50;
+ (UIColor*)Color_black_20;
+ (UIColor*)Color_black_10;
+ (UIColor*)Color_black_5;
+ (UIColor*)Color_coolgrey01;
+ (UIColor*)Color_Dim;
+ (UIColor*)Color_grey_Custom;
+ (UIColor*)Color_Guilty;
+ (UIColor*)Color_grey09_Opacity50;
+ (UIColor*)Color_FivePin;
+ (UIColor*)Color_green;
+ (UIColor*)Color_green_15;
+ (UIColor*)Color_green01;
+ (UIColor*)Color_green02;
+ (UIColor*)Color_green03;
+ (UIColor*)Color_green04;
+ (UIColor*)Color_green05;
+ (UIColor*)Color_green06;
+ (UIColor*)Color_green07;
+ (UIColor*)Color_blue;
+ (UIColor*)Color_blue01;
+ (UIColor*)Color_blue02;
+ (UIColor*)Color_Orange;
+ (UIColor*)Color_mango01;
+ (UIColor*)Color_mango02;
+ (UIColor*)Color_red;
+ (UIColor*)Color_red01;
+ (UIColor*)Color_red02;
+ (UIColor*)Color_red03;
+ (UIColor*)Color_yellow;


+ (UIColor*)Color_divider_01;
+ (UIColor*)Color_divider_02;
+ (UIColor*)Color_divider_03;
+ (UIColor*)Color_shadow;

+ (UIColor*)Color_Warning_Orange;



// AIR 컬러코드
+ (UIColor*)Inv_Color_Blue01;
+ (UIColor*)Inv_Color_Blue01_70;
+ (UIColor*)Inv_Color_Blue01_94;
+ (UIColor*)Inv_Color_Blue02;
+ (UIColor*)Inv_Color_Blue03;
+ (UIColor*)Inv_Color_Blue04;
+ (UIColor*)Inv_Color_Blue06;
+ (UIColor*)Inv_Color_Blue07;
+ (UIColor*)Inv_Color_Blue08;
+ (UIColor*)Inv_Color_Blue08_95;
+ (UIColor*)Inv_Color_Blue09_95;
+ (UIColor*)Inv_Color_Blue10_95;
+ (UIColor*)Inv_Color_Blue11_95;
+ (UIColor*)Inv_Color_Blue12_95;
+ (UIColor*)Inv_Color_Blue12_20;

+ (UIColor*)Inv_Color_Gray01;
+ (UIColor*)Inv_Color_Gray01_95;
+ (UIColor*)Inv_Color_Gray01_70;
+ (UIColor*)Inv_Color_Gray01_80;
+ (UIColor*)Inv_Color_Gray01_30;
+ (UIColor*)Inv_Color_Gray02;
+ (UIColor*)Inv_Color_Gray03;
+ (UIColor*)Inv_Color_Gray04;
+ (UIColor*)Inv_Color_Gray05;
+ (UIColor*)Inv_Color_Gray05_30;
+ (UIColor*)Inv_Color_Gray05_50;
+ (UIColor*)Inv_Color_Gray06;
+ (UIColor*)Inv_Color_Gray06_50;
+ (UIColor*)Inv_Color_Gray07;
+ (UIColor*)Inv_Color_Gray08;
+ (UIColor*)Inv_Color_Gray09;
+ (UIColor*)Inv_Color_Gray09_20;
+ (UIColor*)Inv_Color_Gray09_50;
+ (UIColor*)Inv_Color_Gray09_60;
+ (UIColor*)Inv_Color_Gray09_80;
+ (UIColor*)Inv_Color_Gray10;
+ (UIColor*)Inv_Color_Gray11;

+ (UIColor*)Inv_Color_White;
+ (UIColor*)Inv_Color_White_10;
+ (UIColor*)Inv_Color_White_20;
+ (UIColor*)Inv_Color_White_50;
+ (UIColor*)Inv_Color_White_60;
+ (UIColor*)Inv_Color_White_80;
+ (UIColor*)Inv_Color_White_90;
+ (UIColor*)Inv_Color_Black;
+ (UIColor*)Inv_Color_Black_5;
+ (UIColor*)Inv_Color_Black_10;
+ (UIColor*)Inv_Color_Black_40;
+ (UIColor*)Inv_Color_Black_50;
+ (UIColor*)Inv_Color_Black_70;
+ (UIColor*)Inv_Color_Black_80;

+ (UIColor*)Inv_Color_Yellow;
+ (UIColor*)Inv_Color_Orange;

+ (UIColor*)Inv_Color_Smooth;
+ (UIColor*)Inv_Color_Slow;
+ (UIColor*)Inv_Color_Delay;
+ (UIColor*)Inv_Color_Nothing;

+ (UIColor*)Inv_Color_Group_Dim;

// AIR 컬러코드
+ (UIColor*)Air_Color_Orange;
+ (UIColor*)Air_Color_Green;


+ (void)changeStatusBarColor:(UIColor *)color;
//**********************************************//

+ (UIColor*)getTitleBarTitleColor;
+ (UIColor*)getTitleBarButtonTextColor;


+ (UIColor*)getCellSelectedColor;
+ (UIColor*)getCellNormalColor;
+ (UIColor*)getCellMainTextColor:(UIControlState)state;
+ (UIColor*)getCellSubTextColor:(UIControlState)state;
+ (UIColor*)getCellLeftTextColor:(UIControlState)state;
+ (UIColor*)getCellLineColor;
+ (UIColor*)getGPSModeTitleBarColor;

@end
