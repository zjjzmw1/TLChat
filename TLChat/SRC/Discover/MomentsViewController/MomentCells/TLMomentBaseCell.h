//
//  TLMomentBaseCell.h
//  TLChat
//
//  Created by libokun on 16/4/7.
//  Copyright © 2016年 李伯坤. All rights reserved.
//

#import "TLTableViewCell.h"
#import "TLMoment.h"

@interface TLMomentBaseCell : TLTableViewCell

@property (nonatomic, strong) UILabel *titleLabel;

@property (nonatomic, strong) UIView *detailContainerView;

@property (nonatomic, strong) UIView *extensionContainerView;

@property (nonatomic, strong) TLMoment *moment;

@end
