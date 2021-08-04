//
//  TJAdModel.h
//  
//
//  Created by YG on 2021/6/8.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TJAdModel : NSObject

/**
 广告位ID
 */
@property (nonatomic, copy) NSString *positionId;


- (instancetype)initWithData:(id)data;

@end

NS_ASSUME_NONNULL_END
