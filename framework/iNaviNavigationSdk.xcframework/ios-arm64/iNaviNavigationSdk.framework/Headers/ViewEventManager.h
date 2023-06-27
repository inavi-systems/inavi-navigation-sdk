//
//  ViewEventManager.h
//  InaviAirFrame
//
//  Created by HanSeungKun on 2015. 9. 17..
//  Copyright (c) 2015년 KimDaeCheol. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum  {
    MVT_STATUS_MOVES        = 0,
    MVT_STATUS_DEFAULT      = 1,
    MVT_STATUS_SIMULATION   = 2,
    MVT_STATUS_TOUCH        = 3,
    MVT_STATUS_ZOOM         = 4,
}STATUSCHECK;

typedef enum {
    SUB_SIMUL_TOUCH  = 1,
    SUB_SIMUL_MOVES  = 2
}SUBCHECK;


@interface ViewEventManager : NSObject
+ (ViewEventManager *)sharedViewEventManager;
@property(nonatomic) BOOL isRouteZoom;
-(void)setMapStatusDirect:(STATUSCHECK)status;
- (STATUSCHECK)getMapStatusDirect;
@end
