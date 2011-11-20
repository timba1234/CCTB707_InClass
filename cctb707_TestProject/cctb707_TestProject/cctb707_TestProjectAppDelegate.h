//
//  cctb707_TestProjectAppDelegate.h
//  cctb707_TestProject
//
//  Created by WC104D on 11-11-20.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class cctb707_TestProjectViewController;

@interface cctb707_TestProjectAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet cctb707_TestProjectViewController *viewController;

@end
