//
//  PKAppDelegate.h
//  PKiOSExample
//
//  Created by Peter Hajas on 9/26/11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PKViewController;

@interface PKAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) PKViewController *viewController;

@end
