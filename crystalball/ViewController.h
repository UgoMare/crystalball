//
//  ViewController.h
//  crystalball
//
//  Created by Ugo on 22/07/14.
//  Copyright (c) 2014 Ugo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class CrystalBall;

@interface ViewController : UIViewController
@property (strong, nonatomic) IBOutlet UILabel *predictionLabel;
@property (strong, nonatomic) CrystalBall *crystalBall;

-(void) makePredictions;
@property (strong, nonatomic) IBOutlet UIImageView *backgroundImageView;

@end
