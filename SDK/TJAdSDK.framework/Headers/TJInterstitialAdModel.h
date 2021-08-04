//
//  TJInterstitialAdModel.h
//  
//
//  Created by YG on 2021/6/8.
//

#import "TJAdModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface TJInterstitialAdModel : TJAdModel

/**
 *  插屏广告是否完成
 */
@property (nonatomic, assign, readonly) BOOL isAdValid;

/**
 展示广告
 */
- (void)showAdWithRootViewController:(UIViewController *)rootViewController;

@end

NS_ASSUME_NONNULL_END
