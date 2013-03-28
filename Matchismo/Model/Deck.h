//
//  Deck.h
//  Matchismo
//
//  Created by Enrique Ibarra on 3/27/13.
//  Copyright (c) 2013 Enrique Ibarra. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;

- (Card *)drawRandomCard;

@end
