//
//  TJAdLoader.h
//  
//
//  Created by YG on 2021/5/28.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@protocol TJAdDelegate;
@class TJAdModel;

NS_ASSUME_NONNULL_BEGIN

@interface TJAdLoader : NSObject

/**
 广告位ID
 */
@property (nonatomic, copy) NSString *positionId;


/**
 开屏承载的view
 */
@property (nonatomic, strong) UIView *splashContainerView;


/**
 广告尺寸
 */
@property (nonatomic, assign) CGSize adSize;


/**
 委托对象
 */
@property (nonatomic, weak) id<TJAdDelegate> delegate;


/**
 请求广告接口，加载广告
 */
- (void)loadAd;

@end


@protocol TJAdDelegate <NSObject>

@optional

/**
 *   广告加载成功
 */
- (void)tjSuccessLoaded:(TJAdModel *)model;


/**
 *   广告加载失败
 */
- (void)tjFailLoaded:(TJAdModel *)model error:(NSError *)error;


/**
 *   广告展示成功
 */
- (void)tjSuccessPresentScreen:(TJAdModel *)model;


/**
 *   广告展示失败
 */
- (void)tjFailPresentScreen:(TJAdModel *)model error:(NSError *)error;


/**
 *   广告将要关闭
 */
- (void)tjWillClosed:(TJAdModel *)model;


/**
 *   广告已经关闭
 */
- (void)tjDidClosed:(TJAdModel *)model;


/**
 *   广告被点击
 */
- (void)tjClicked:(TJAdModel *)model;


/**
 *   广告详情页关闭
 */
- (void)tjDetailClosed:(TJAdModel *)model;

@end

NS_ASSUME_NONNULL_END
