//
//  CalculatorViewController.m
//  CalculatorApp
//
//  Created by Syed sami ul ahbab on 5/5/17.
//  Copyright © 2017 Syed sami ul ahbab. All rights reserved.
//

#import "CalculatorViewController.h"

@interface CalculatorViewController ()

@end

@implementation CalculatorViewController

@synthesize buffer;
@synthesize output;
@synthesize inputs;
@synthesize totalSum;


- (void)viewDidLoad {
    buffer = [[NSMutableArray alloc] init];
    [super viewDidLoad];
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    
}


- (IBAction)numberPressed:(UIButton*)sender {
    NSString *buttonText = sender.titleLabel.text;
    inputs.text = [inputs.text stringByAppendingString:buttonText];
    
}



- (IBAction)add:(UIButton*)sender {
    totalSum = 0;
    if (![inputs.text isEqualToString:@""]) {
        NSNumber *value = [NSNumber numberWithInteger:[inputs.text integerValue]];
        [buffer addObject:value];
        inputs.text = @"";
    }
    for (NSNumber *number in buffer) {
        totalSum = totalSum + [number intValue];
    }
    
    output.text = [NSString stringWithFormat:@"%d", totalSum];
}

- (IBAction)clear:(UIButton*)sender {
    output.text = @"";
}






@end
