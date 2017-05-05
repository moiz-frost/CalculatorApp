//
//  CalculatorViewController.h
//  CalculatorApp
//
//  Created by Syed sami ul ahbab on 5/5/17.
//  Copyright © 2017 Syed sami ul ahbab. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CalculatorViewController : UIViewController




@property (nonatomic, strong) NSMutableArray *buffer;
@property (nonatomic) int totalSum;



#pragma mark - Button Properties

@property (nonatomic, readwrite, weak) IBOutlet UIButton *one;
@property (nonatomic, readwrite, weak) IBOutlet UIButton *two;
@property (nonatomic, readwrite, weak) IBOutlet UIButton *three;
@property (nonatomic, readwrite, weak) IBOutlet UIButton *four;
@property (nonatomic, readwrite, weak) IBOutlet UIButton *five;
@property (nonatomic, readwrite, weak) IBOutlet UIButton *six;
@property (nonatomic, readwrite, weak) IBOutlet UIButton *seven;
@property (nonatomic, readwrite, weak) IBOutlet UIButton *eight;
@property (nonatomic, readwrite, weak) IBOutlet UIButton *nine;
@property (nonatomic, readwrite, weak) IBOutlet UIButton *zero;

@property (nonatomic, readwrite, weak) IBOutlet UIButton *add;
@property (nonatomic, readwrite, weak) IBOutlet UIButton *clear;

@property (nonatomic, readwrite, strong) IBOutlet UILabel *output;
@property (nonatomic, readwrite, strong) IBOutlet UILabel *inputs;


#pragma mark - Button Functions

- (IBAction)numberPressed:(UIButton*)sender;
- (IBAction)add:(UIButton*)sender;
- (IBAction)clear:(UIButton*)sender;

@end
