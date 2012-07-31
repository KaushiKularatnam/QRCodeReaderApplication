//
//  QRReaderAppDelegate.h
//  QRReaderApp
//
//  Created by Kaushalya Kularatnam on 31/07/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class QRReaderViewController;

@interface QRReaderAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) QRReaderViewController *viewController;

@end
