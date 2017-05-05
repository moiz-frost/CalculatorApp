//
//  AppDelegate.h
//  CalculatorApp
//
//  Created by Syed sami ul ahbab on 5/5/17.
//  Copyright © 2017 Syed sami ul ahbab. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CalculatorViewController.h"

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) UINavigationController *navigationController;
@property (strong, nonatomic) CalculatorViewController *calculatorView;


@end

