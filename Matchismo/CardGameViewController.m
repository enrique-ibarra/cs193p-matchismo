//
//  CardGameViewController.m
//  Matchismo
//
//  Created by Enrique Ibarra on 3/26/13.
//  Copyright (c) 2013 Enrique Ibarra. All rights reserved.
//

#import "CardGameViewController.h"

@interface CardGameViewController ()

// outlets can be placed here
@property (weak, nonatomic) IBOutlet UILabel *flipsLabel;
@property (nonatomic) int flipCount;

@end

@implementation CardGameViewController

- (void)setFlipCount:(int)flipCount
{
    _flipCount = flipCount;
    self.flipsLabel.text = [NSString stringWithFormat:@"Flips: %d", self.flipCount];
}

// IBAction = void
- (IBAction)flipCard:(UIButton *)sender
{
    sender.selected = !sender.isSelected;
    self.flipCount++;
}

@end
