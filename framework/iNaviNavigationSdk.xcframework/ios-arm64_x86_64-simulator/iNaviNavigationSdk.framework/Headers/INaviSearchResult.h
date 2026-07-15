//
//  INaviSearchResult.h
//  NaviSDK
//
//  Created by DAECHEOL KIM on 2020/03/31.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@class INaviSearchItem;

@interface INaviSearchResult : NSObject

@property (nonatomic, strong) NSString *query;
@property (nonatomic, strong) NSArray <INaviSearchItem *> *items;

@end

NS_ASSUME_NONNULL_END
