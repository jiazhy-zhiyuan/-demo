//
//  PopupView.h
//  MSCDemo
//
//  Created by CMCC on 13-6-7.
//  Copyright (c) 2013年 CMCC. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PopupView : UIView
{
    UILabel         *_textLabel;
    int             _queueCount;
}
@property (retain) UIView*  ParentView;
- (void) setText:(NSString *) text;

@end
