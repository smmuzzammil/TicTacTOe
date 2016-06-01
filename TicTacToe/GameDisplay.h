//
//  GameDisplay.h
//  TicTacToe
//
//  Created by Muzzammil on 30/05/2016.
//  Copyright © 2016 Muzzammil. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ModelController.h"
#import "Details.h"


@interface GameDisplay : UIViewController

- (IBAction)OnSelect:(id)sender;

-(void)drawTitle:(int)xy;

@end
