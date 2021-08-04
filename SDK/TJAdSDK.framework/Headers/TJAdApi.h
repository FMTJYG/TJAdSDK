//
//  TJAdApi.h
//  
//
//  Created by YG on 2021/4/28.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TJAdApi : NSObject

+ (instancetype)sharedInstance;

- (void)setAppId:(NSString *)appId;

@end

NS_ASSUME_NONNULL_END
