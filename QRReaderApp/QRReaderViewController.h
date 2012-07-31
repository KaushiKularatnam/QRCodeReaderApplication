//
//  QRReaderViewController.h
//  QRReaderApp
//
//  Created by Kaushalya Kularatnam on 31/07/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ZBarSDK.h"
#import <AVFoundation/AVFoundation.h>

@interface QRReaderViewController : UIViewController <ZBarReaderDelegate>
{
    
    UIImageView *resultImage;
    UITextView *resultText;
}
@property (nonatomic, retain) IBOutlet UIImageView *resultImage;
@property (nonatomic, retain) IBOutlet UITextView *resultText;
- (IBAction) scanButtonTapped;

@end
