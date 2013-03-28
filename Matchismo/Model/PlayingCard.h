//
//  PlayingCard.h
//  CardGame
//
//  Created by Enrique Ibarra on 26/03/2013.
//  Copyright (c) 2013 Enrique Ibarra. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+(NSArray *) validSuits;
+(NSUInteger)maxRank;

@end
