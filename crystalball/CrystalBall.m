//
//  CrystalBall.m
//  crystalball
//
//  Created by Ugo on 24/07/14.
//  Copyright (c) 2014 Ugo. All rights reserved.
//

#import "CrystalBall.h"

@implementation CrystalBall

- (NSArray*) predictions {
    if (_predictions == nil){
    _predictions = [[NSArray alloc] initWithObjects:@"It is Certain", @"It is Decidedly so", @"The stars are not aligned", @"My reply is no", @"Ozef de ta vie", @"I dunno but I don't care", @"Hello !",  nil];
    }
    return _predictions;
}

- (NSString*) randomPrediction  {
    int random = arc4random_uniform(self.predictions.count);
    return [self.predictions objectAtIndex:random];
}
@end
