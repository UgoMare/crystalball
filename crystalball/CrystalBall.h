//
//  CrystalBall.h
//  crystalball
//
//  Created by Ugo on 24/07/14.
//  Copyright (c) 2014 Ugo. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CrystalBall : NSObject {
    NSArray *_predictions;
}

@property (strong, nonatomic, readonly) NSArray *predictions;

- (NSString*) randomPrediction;
@end
