//
//  INaviMapIcon.h
//  NaviSDK
//
//  Created by DAECHEOL KIM on 2020/09/10.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "INaviControllerDefine.h"

NS_ASSUME_NONNULL_BEGIN

@class INaviPosition;
@class INaviImage;

@interface INaviMapIcon : NSObject

+ (INaviMapIcon*)createMapIconWithPostion:(INaviPosition*)position
                               nomalImage:(INaviImage*)nomalImage
                                   anchor:(INVIconAnchor)anchor;

+ (INaviMapIcon*)createMapIconWithPostion:(INaviPosition*)position
                               nomalImage:(INaviImage*)nomalImage
                            selectedImage:(INaviImage*)selectedImage anchor:(INVIconAnchor)anchor
                                 minLevel:(NSInteger)minLevel
                                 maxLevel:(NSInteger)maxLevel
                                clickable:(BOOL)clickable;
@end

NS_ASSUME_NONNULL_END
