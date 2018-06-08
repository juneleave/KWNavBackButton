//
//  UIViewController+BackHandler.h
//  KWNavBackButton
//
//  Created by WEISON on 16/12/15.
//  Copyright © 2016年 siso. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol BackHandlerProtocol <NSObject>
@optional
- (BOOL)navigationShouldPopOnBackButton;
@end

@interface UIViewController (BackHandler)<BackHandlerProtocol>

@end
