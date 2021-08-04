//
//  TJFlowAdModel.h
//  
//
//  Created by YG on 2021/6/8.
//

#import "TJAdModel.h"

NS_ASSUME_NONNULL_BEGIN

@interface TJFlowAdModel : TJAdModel

/**
 * 标题 title
 */
@property (copy, nonatomic) NSString *title;


/**
 * 描述 text
 */
@property (copy, nonatomic) NSString *text;


/**
 * 广告标识logo
 */
@property (copy, nonatomic) NSString *logoUrl;


/**
 * 图片url
 */
@property (copy, nonatomic) NSString *imageUrl;


/**
 * 视频url
 */
@property (copy, nonatomic) NSString *videoUrl;


/**
 * 视频时长，单位为s
 */
@property (assign, nonatomic) NSInteger videoDuration;


/**
 * 图片尺寸
 */
@property (assign, nonatomic) CGSize imageSize;


/**
 绑定展示视图
 @param containerView : 必传
 @param clickableViews : 可选
 */
- (void)registerContainer:(__kindof UIView *)containerView
       withClickableViews:(NSArray<__kindof UIView *> *_Nullable)clickableViews;

@end

NS_ASSUME_NONNULL_END
