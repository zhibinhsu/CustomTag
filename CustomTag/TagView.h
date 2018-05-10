//
//  TagView.h
//  CustomTag
//
//  Created by Admin on 2018/5/10.
//  Copyright © 2018年 Admin. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol TagViewDelegate <NSObject>

@optional

- (void)handleSelectTag:(NSString *)keyWord;

@end

@interface TagView : UIView

@property (nonatomic, weak) id<TagViewDelegate>delegate;
@property (nonatomic, strong) NSArray *arr;

@end
