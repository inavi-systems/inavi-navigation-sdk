//
//  INaviRecommendWord.h
//  NaviSDK
//
//  Created by DAECHEOL KIM on 2020/09/11.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface INaviRecommendWord : NSObject
@property (nonatomic, strong) NSString *recommendWord;
@property (nonatomic) NSInteger frequency;
@end

NS_ASSUME_NONNULL_END
