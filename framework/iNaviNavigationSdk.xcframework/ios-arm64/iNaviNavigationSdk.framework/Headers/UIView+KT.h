//
//  UIView+KT.h
//  InaviAirFrame
//
//  Created by KimDaeCheol on 2017. 2. 28..
//  Copyright © 2017년 KimDaeCheol. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (KT)

-(void)setLayoutHidden:(BOOL)hidden;
-(void)setLayoutHidden:(BOOL)hidden constant:(CGFloat)constant;
-(void)setConstraintHidden:(BOOL)hidden;
-(void)resizeButtonImageInset;
+(NSLayoutConstraint*)updateMultiplier:(NSLayoutConstraint*)con :(CGFloat)multiplier;
-(CGFloat)getHeightConstraint;
@end
