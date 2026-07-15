//
//  INaviTruckInfo.h
//  NaviSDK
//
//  Created by DAECHEOL KIM on 3/19/24.
//  Copyright © 2024 iNaviSys. All rights reserved.
//

#import "INaviFoundation.h"
#import "INaviControllerDefine.h"

NS_ASSUME_NONNULL_BEGIN

INAVI_EXPORT
@interface INaviTruckInfo : NSObject

@property(nonatomic) INVTruckInfoType type;
@property(nonatomic) NSInteger dist;
@property(nonatomic) double x;
@property(nonatomic) double y;

@end

NS_ASSUME_NONNULL_END
