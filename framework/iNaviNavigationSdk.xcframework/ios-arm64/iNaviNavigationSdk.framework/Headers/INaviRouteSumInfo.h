//
//  INaviRouteSumInfo.h
//  NaviSDK
//
//  Created by DAECHEOL KIM on 2020/09/14.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface INaviRouteSumInfo : NSObject

@property(nonatomic, strong) NSString* optionName;
@property(nonatomic, strong) NSString* dist;
@property(nonatomic, strong) NSString* time;
@property(nonatomic, strong) NSString* fee;

@end

NS_ASSUME_NONNULL_END
