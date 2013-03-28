//
//  Card.h
//  Matchismo
//
//  Created by Enrique Ibarra on 3/27/13.
//  Copyright (c) 2013 Enrique Ibarra. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter = isFaceUp) BOOL faceUp;
@property (nonatomic, getter = isUnplayable) BOOL unplayable;

- (int)match:(NSArray *)otherCards;

@end
