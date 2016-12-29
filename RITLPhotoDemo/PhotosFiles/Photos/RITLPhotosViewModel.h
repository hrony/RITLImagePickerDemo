//
//  RITLPhotosViewModel.h
//  RITLPhotoDemo
//
//  Created by YueWen on 2016/11/29.
//  Copyright © 2016年 YueWen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RITLCollectionCellViewModel.h"
#import "RITLCollectionViewModel.h"

NS_ASSUME_NONNULL_BEGIN

typedef PhotoCompleteBlock5 RITLPhotoDidTapHandleBlock;

/// 选择图片的一级界面控制器的viewModel
@interface RITLPhotosViewModel : NSObject <RITLCollectionViewModel>

/// 当前显示的导航标题
@property (nonatomic, copy) NSString * navigationTitle;

/// 当前显示的组对象
@property (nonatomic, strong) PHAssetCollection * assetCollection;

/// 存储该组所有的asset对象的集合
@property (nonatomic, strong, readonly) PHFetchResult * assetResult;

/// 图片被点击进入浏览控制器的block
@property (nonatomic, copy)RITLPhotoDidTapHandleBlock photoDidTapShouldBrowerBlock;



/// 请求当前图片对象
- (void)imageForIndexPath:(NSIndexPath *)indexPath
               collection:(UICollectionView *)collection
                 complete:(void(^)(UIImage *,PHAsset *,BOOL)) completeBlock;


/// 资源数
- (NSUInteger)assetCount;


/**
 图片被选中的处理方法

 @param indexPath 
 */
- (void)didSelectImageAtIndexPath:(NSIndexPath *)indexPath;


/**
 该位置的图片是否选中

 @param indexPath
 @return
 */
- (BOOL)imageDidSelectedAtIndexPath:(NSIndexPath *)indexPath;


@end

NS_ASSUME_NONNULL_END