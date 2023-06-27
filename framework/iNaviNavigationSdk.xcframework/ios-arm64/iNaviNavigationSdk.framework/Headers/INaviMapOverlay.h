//
//  INaviMapOverlay.h
//  NaviSDK
//
//  Created by DAECHEOL KIM on 2020/09/10.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface INaviMapOverlay : NSObject
/**
 지도 아이콘을 관리하는 overlay 생성 및 반환
 @return 'INaviMapOverlay' 객체.
 */
+ (INaviMapOverlay*)createMapOverlay;

@end

NS_ASSUME_NONNULL_END
