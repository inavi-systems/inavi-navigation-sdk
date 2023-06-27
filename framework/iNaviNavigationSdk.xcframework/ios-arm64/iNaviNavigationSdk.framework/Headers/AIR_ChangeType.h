//
//  AIR_ChangeType.h
//  InaviAIR
//
//  Created by Jeoung YooJin on 5/7/13.
//  Copyright (c) 2013 Jeoung YooJin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AIR_ChangeType : NSObject

+ (NSString*)getConvDistStr:(NSInteger)dist withUnit:(BOOL)withUnit;
+ (NSString*)getDistanceString:(NSInteger)nDistance;
+ (NSString*)getDistanceString:(NSInteger)nDistance decimalPlaceCount:(NSInteger)decimalPlaceCount;
+ (NSString*)getDistanceStringInSearch:(NSInteger)nDistance;

+ (NSString*)getDistanceOnlyKmString:(NSInteger)nDistance;
+ (CGFloat)getDistance:(NSInteger)nDistance;
+ (NSString*)getPriceString:(NSInteger)nPrice;

//미터단위를 스트링으로 단 뒤에를 0으로 .
+ (NSString*)getMitterDistanceToStringChange:(NSInteger)nDistance;

+ (NSString*)getTimeIntegerToString:(NSInteger)time;         //시간을 문자열로 전환

+ (NSString *)binaryStringFromInteger:(NSInteger)number;   //숫자를 이진 바이너리 문자열로 전환문자열로 전환
+ (NSString *)binaryStringFromChar:(char)number;           //char형을 이진 바이너리 문자열로 전환 문자열로 전환


+ (NSString*)readUTF8StringWithLength:(NSInteger)offset
                               length:(NSUInteger)length
                                 byte:(NSData *)data;
+ (NSString*)readUTF8StringToEucKRWithLength:(NSInteger)offset
                                      length:(NSUInteger)length
                                        byte:(NSData *)data;
+ (NSString*)readEuckrStringWithLength:(NSInteger)offset
                                length:(NSUInteger)length
                                  byte:(NSData *)data;
//raw data를 문자열로 전환
+ (NSString*)readStringWithLength:(NSInteger)offset
                           length:(NSUInteger)length
                             byte:(NSData *)data;

//raw data를 숫자로 전환
+ (NSNumber*)readByteWithLength:(NSInteger)offset
                         length:(NSUInteger)length
                           byte:(NSData *)data;


//raw data를 숫자로 전환 (빅 에디안 -> Host로 스왑)
+ (NSNumber *)readNumberWithLength:(NSInteger)offset
                            length:(NSUInteger)length
                              byte:(NSData *)data;

+ (NSNumber *)readNumberWithLength:(NSUInteger)length
                              byte:(NSData *)data;

//Host -> 빅에디안으로
+ (int)writeNumberWithLength:(NSUInteger)length
                         num:(NSInteger)num;

//byte자르기
+ (NSData *)readByteWithLengthAndData:(NSInteger)offset length:(NSUInteger)length byte:(NSData *)data;


@end
