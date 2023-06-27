//
//  INaviImage.h
//  NaviSDK
//
//  Created by sdteam on 2020/09/09.
//  Copyright © 2020 iNaviSys. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface INaviImage : NSObject

/**
 `UIImage`로부터 `INaviImage` 객체를 생성합니다.
 재사용 식별자는 자동으로 지정됩니다.
 
 @param image 생성할 이미지 객체.
 @return `INaviImage` 객체.
 */
+ (instancetype)imageWithImage:(nonnull UIImage *)image;


/**
 이미지 객체.
*/
@property (nonatomic, readonly) UIImage *image;

/**
 재사용 식별자.
 */
@property (nonatomic, readonly, copy) NSString *reuseIdentifier;

@end

NS_ASSUME_NONNULL_END
