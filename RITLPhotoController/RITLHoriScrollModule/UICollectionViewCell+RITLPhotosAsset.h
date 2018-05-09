//
//  UICollectionViewCell+RITLPhotosAsset.h
//  RITLPhotoDemo
//
//  Created by YueWen on 2018/5/9.
//  Copyright © 2018年 YueWen. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

NS_ASSUME_NONNULL_BEGIN

@interface UICollectionViewCell (RITLPhotosAsset)

/// 标志位，避免重复赋值
@property (nonatomic, copy) NSString *representedAssetIdentifier;

/// 当前展示的资源
@property (nonatomic, weak, nullable)PHAsset *currentAsset;

/// 更新数据
- (void)updateAssets:(PHAsset *)asset atIndexPath:(NSIndexPath *)indexPath imageManager:(PHCachingImageManager *)cacheManager;

@end

NS_ASSUME_NONNULL_END