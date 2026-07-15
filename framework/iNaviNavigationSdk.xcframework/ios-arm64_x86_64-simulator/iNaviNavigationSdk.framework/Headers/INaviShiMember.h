//
//  INaviShiMember.h
//  NaviSDK
//
//  Created by DAECHEOL KIM on 2023/07/19.
//  Copyright © 2023 iNaviSys. All rights reserved.
//

#import "INaviFoundation.h"

NS_ASSUME_NONNULL_BEGIN

INAVI_EXPORT
@interface INaviShiMember : NSObject

/**
 사용자 ID
 */
@property (nonatomic, strong) NSString* userId;

/**
 00(승용) , 01(승합(4톤미만)) , 02 (승합(4톤이상))
 */
@property (nonatomic, strong) NSString* drvrTon;

@end

NS_ASSUME_NONNULL_END
