//
//  TJSplashAdModel.h
//  
//
//  Created by YG on 2021/6/8.
//

#import "TJAdModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface TJSplashAdModel : TJAdModel

/**
 展示开屏的承载view
 */
@property (nonatomic, strong) UIView *containerView;

/**
 展示广告
 */
- (void)showAd;

@end

NS_ASSUME_NONNULL_END
