//
//  INaviRouteRemainInfo.h
//  NaviSDK
//
//  Created by DAECHEOL KIM on 2020/09/14.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface INaviRouteRemainInfo : NSObject

@property(nonatomic) NSInteger remainTime;
@property(nonatomic) NSInteger remainDist;
@property(nonatomic) NSInteger remainFee;

@end

NS_ASSUME_NONNULL_END
