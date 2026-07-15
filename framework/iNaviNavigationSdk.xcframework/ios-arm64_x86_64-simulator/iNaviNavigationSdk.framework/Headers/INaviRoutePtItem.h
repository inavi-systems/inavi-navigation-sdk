//
//  RoutePtItem.h
//  NaviSDK
//
//  Created by DAECHEOL KIM on 2020/03/31.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#import "INaviFoundation.h"

@class INaviPosition;
NS_ASSUME_NONNULL_BEGIN

INAVI_EXPORT
@interface INaviRoutePtItem : NSObject
@property (nonatomic, strong) NSString *name;
/**
 지도 위치보기 시에 사용 되는 좌표.
 */
@property (nonatomic, strong) INaviPosition *dpPosition;
/**
 길 찾기 시에 사용 되는 좌표.
*/
@property (nonatomic, strong) INaviPosition *rpPosition;
@end

NS_ASSUME_NONNULL_END
